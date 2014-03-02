#define BOOST_DATE_TIME_NO_LIB 
#include <iostream>
#include <linux/videodev.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <libv4l2.h>
#include <fcntl.h>
#include <cassert>
#include <sys/mman.h>
#include <memory.h>
#include <errno.h>
#include <cstdlib>
#include "comm.hpp"
#include <boost/interprocess/sync/scoped_lock.hpp> 
#include <cstring>
#include <algorithm>

int main(int argc,char **argv){
	using namespace boost::interprocess;
	assert(argc>=3);
	const char *video_dev_name = argv[1];
	const char *output_shared_mem_name = argv[2];
#define F(_V) bool _V=false;
	F(transpose_output);
	F(debug_info);
#undef F
	for(int i=3;i<argc;++i){
#define B(_S,_V) if(!strcmp(argv[i],(_S))){ (_V)=true; }
		B("t",transpose_output);
		B("d",debug_info);
#undef B
	}
	shared_memory_object::remove(output_shared_mem_name);
	shared_memory_object shm(create_only,output_shared_mem_name,read_write);
	remove_shared_memory_on_destroy ____rm_shm(output_shared_mem_name);
#define DPRINTF(...) if(debug_info){ fprintf(stderr,__VA_ARGS__); fflush(stderr); }
	int fd = v4l2_open(video_dev_name,O_RDWR);
	assert(fd>1);

#define CC(e) {int r=(e);if(r){ printf("%s\n",strerror(errno));assert(0);}else{ DPRINTF("OK %d\n",__LINE__); }}  
	
	v4l2_capability cap;
	CC(v4l2_ioctl(fd,VIDIOC_QUERYCAP,&cap));
	//std::cout<<cap.capabilities&V4L2_CAP_VIDEO_CAPTURE;
	assert(cap.capabilities & V4L2_CAP_STREAMING);
	assert(cap.capabilities & V4L2_CAP_VIDEO_CAPTURE);
	
	v4l2_format fmt;
	memset(&fmt,0,sizeof(fmt));
	fmt.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
	CC(v4l2_ioctl(fd,VIDIOC_G_FMT,&fmt));
	assert(fmt.fmt.pix.width==640);
	assert(fmt.fmt.pix.height==480);
	assert(fmt.fmt.pix.field==V4L2_FIELD_NONE);
	fmt.fmt.pix.pixelformat=V4L2_PIX_FMT_RGB24;
	CC(v4l2_ioctl(fd,VIDIOC_S_FMT,&fmt));
	assert(V4L2_PIX_FMT_RGB24==fmt.fmt.pix.pixelformat);
	char pfs[5]={0,0,0,0,0};
	*(__u32*)pfs=fmt.fmt.pix.pixelformat;
	DPRINTF("%d %d %s %d %d %d %d\n",
		fmt.fmt.pix.width,
		fmt.fmt.pix.height,
		pfs,//fmt.fmt.pix.pixelformat,
		fmt.fmt.pix.field,
		fmt.fmt.pix.bytesperline,
		fmt.fmt.pix.sizeimage,
		fmt.fmt.pix.colorspace);


//	v4l2_format fmtc=fmt;
//	fmtc.fmt.pix.pixelformat=V4L2_PIX_FMT_RGB24;
//	v4lconvert_data *vcd=v4lconvert_create(fd);
//	assert(vcd);
//	CC(v4lconvert_try_format(vcd,&fmtc,&fmt));
	
	const int nB=2;

	v4l2_requestbuffers rb={nB,V4L2_BUF_TYPE_VIDEO_CAPTURE,V4L2_MEMORY_MMAP,{0,0}};
	CC(v4l2_ioctl(fd,VIDIOC_REQBUFS,&rb));
	assert(nB==rb.count);
	assert(V4L2_BUF_TYPE_VIDEO_CAPTURE==rb.type);
	assert(V4L2_MEMORY_MMAP==rb.memory);

	v4l2_buffer bufs[nB];
	memset(bufs,0,sizeof(bufs));
	char *starts[nB] = {0};
	for(int i=0;i<nB;++i){
		v4l2_buffer &b=bufs[i];
		b.index = i;
		b.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
		b.memory = V4L2_MEMORY_MMAP;
		CC(v4l2_ioctl(fd,VIDIOC_QUERYBUF,&b));
		//assert(b.flags&V4L2_BUF_FLAG_MAPPED);
		//std::cout<<b.m.offset<<'\n'<<b.length<<'\n';
		starts[i] = (char*)v4l2_mmap(NULL, b.length, PROT_READ | PROT_WRITE, MAP_SHARED, fd, b.m.offset);
		DPRINTF("%d\n",b.length);
		if(MAP_FAILED==starts[i]){
			printf("%s\n",strerror(errno));
			perror("mmap");
			exit(0);
		}
		assert(MAP_FAILED!=starts[i]);
		//std::cout<<pb->flags;
	}

	for(int i=0;i<nB;++i){
		CC(v4l2_ioctl(fd,VIDIOC_QBUF,bufs+i));
	}
	
	const int u = 3;
	const int w = fmt.fmt.pix.width;
	const int row_sz = w*u;
	const int h = fmt.fmt.pix.height;
	const int output_size = h*w*u;
	assert(row_sz*h==output_size);

	shm.truncate(sizeof(vg_shm_header)+output_size);
	mapped_region region(shm,read_write);
	vg_shm_header *hdr = new (region.get_address()) vg_shm_header;
	assert(sizeof(vg_shm_header)==hdr->self_size);
	{
		scoped_lock<interprocess_mutex> ___ll(hdr->mtx);
		hdr->w = w;
		hdr->h = h;
		if(transpose_output){ std::swap(hdr->w,hdr->h); }
		hdr->sz = output_size;
		hdr->pending_reads = 1;
		DPRINTF("Header initialized. %s %d",video_dev_name,getpid());
		//sleep(1);
	}

	bool go=true;
	DPRINTF("...\n");
	const int bt=V4L2_BUF_TYPE_VIDEO_CAPTURE;
	CC(v4l2_ioctl(fd,VIDIOC_STREAMON,&bt));
	const int stride = fmt.fmt.pix.bytesperline;
	char *output_start = (char*)(hdr+1);
	while(go){
		//DPRINTF("[");
		for(int i=0;i<nB;++i){
			//DPRINTF("<");
			CC(v4l2_ioctl(fd,VIDIOC_DQBUF,bufs+i));
			//DPRINTF("-");
			{
				scoped_lock<interprocess_mutex> ___ll(hdr->mtx);
				while(hdr->pending_reads){ hdr->writable.wait(___ll); }

				DPRINTF("%d: vg begins writing.\n",getpid());
				if(transpose_output){
					const char *src = starts[i];
					char *dest = output_start;
					const int o_strd = u*h;
					for(int r=0;r<h;++r){
						const char *s0 = src;
						char *d0 = dest;
						for(int c=0;c<w;++c){
							memcpy(d0,s0,u);
							s0+=u;
							d0+=o_strd;
						}
						assert(src+u*w==s0);
						src+=stride;
						assert(s0<=src);
						assert(dest+u*w*h==d0);
						dest+=u;
					}
					assert(starts[i]+fmt.fmt.pix.sizeimage==src);
					if(!(output_start+h*u==dest)){
						printf("%d\t%d\t%d\t%d\n",output_start,w,u,dest);
					}
					assert(output_start+h*u==dest);
				}else{
					const char *src = starts[i];
					char *dest = output_start;
					for(int r=0;r<h;++r){
						memcpy(dest,src,row_sz);
						dest+=row_sz;
						src+=stride;
					}
					assert(starts[i]+fmt.fmt.pix.sizeimage==src);
					assert(output_start+hdr->sz==dest);
				}
				DPRINTF("%d: vg ends writing.\n",getpid());
				
				hdr->readable.notify_all();
				hdr->pending_reads = std::max(1,hdr->requested_reads);
				hdr->requested_reads = 0;
			}
			CC(v4l2_ioctl(fd,VIDIOC_QBUF,bufs+i));
			//DPRINTF(">");
		}
		//DPRINTF("]");
	}
	CC(v4l2_ioctl(fd,VIDIOC_STREAMOFF,&bt));

//	v4lconvert_destroy(vcd);
	for(int i=0;i<nB;++i){
		CC(v4l2_munmap(starts[i],bufs[i].length));
	}
	v4l2_close(fd);
	scoped_lock<interprocess_mutex>(hdr->mtx);
#undef CC
#undef DPRINTF
	return 0;
}

