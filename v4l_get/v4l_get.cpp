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


int main(int argc,char **argv){
	FILE *data_out=fopen(argc>1?argv[1]:"/dev/null","w");
	int fd = v4l2_open("/dev/video0",O_RDWR);
	assert(fd>1);

#define CC(e) {int r=(e);if(r){ printf("%s\n",strerror(errno));assert(0);}else{ printf("OK %d\n",__LINE__); }}  
	
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
	printf("%d %d %s %d %d %d %d\n",
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
		printf("%d\n",b.length);
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
	bool go=true;
	printf("...\n");
	const int bt=V4L2_BUF_TYPE_VIDEO_CAPTURE;
	CC(v4l2_ioctl(fd,VIDIOC_STREAMON,&bt));
	while(go){
		printf("[");
		for(int i=0;i<nB;++i){
			printf("<");
			fflush(stdout);
			CC(v4l2_ioctl(fd,VIDIOC_DQBUF,bufs+i));
			printf("-");
			int n = fwrite(starts[i],1,fmt.fmt.pix.sizeimage,data_out);
			assert(n==fmt.fmt.pix.sizeimage);
			CC(v4l2_ioctl(fd,VIDIOC_QBUF,bufs+i));
			printf(">");
		}
		printf("]");
	}
	CC(v4l2_ioctl(fd,VIDIOC_STREAMOFF,&bt));

//	v4lconvert_destroy(vcd);
	for(int i=0;i<nB;++i){
		CC(v4l2_munmap(starts[i],bufs[i].length));
	}
	v4l2_close(fd);
	fclose(data_out);
	return 0;
}

