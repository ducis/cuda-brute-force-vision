#define INLINE inline
//#include <opencv2/opencv.hpp>
#include <time.h>
#include <iostream>
#include <cuda.h>
//#include <cutil_inline.h>
#include <cassert>
#include <boost/multi_array.hpp>
//#include <cutil_inline.h>
#include "common.h"
//#include "video.h"
#include <fstream>
#include <boost/qvm/all.hpp>
#include <linux/videodev.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <libv4l2.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <memory.h>
#include <errno.h>
#include <cstdlib>
#include <curses.h>
#include "v4l_get/comm.hpp"
#include <poll.h>
//#include <GL/glut.h>
void Ensure(bool b,int line){
	if(!b){
		printf("false at line %d.\n",line);
		assert(0);
	}
}


namespace boost
{
    namespace qvm
    {
        template <>
        struct v_traits<real4>
        {
            static int const dim=4;
            typedef real_ scalar_type;

            template <int I> static inline scalar_type & w( real4 & v );
            template <int I> static inline scalar_type r( real4 const & v );

        };
	template<> inline v_traits<real4>::scalar_type & v_traits<real4>::w<0>( real4 & v ){ return v.x; }
	template<> inline v_traits<real4>::scalar_type & v_traits<real4>::w<1>( real4 & v ){ return v.y; }
	template<> inline v_traits<real4>::scalar_type & v_traits<real4>::w<2>( real4 & v ){ return v.z; }
	template<> inline v_traits<real4>::scalar_type & v_traits<real4>::w<3>( real4 & v ){ return v.w; }
	template<> inline v_traits<real4>::scalar_type v_traits<real4>::r<0>( const real4 & v ){ return v.x; }
	template<> inline v_traits<real4>::scalar_type v_traits<real4>::r<1>( const real4 & v ){ return v.y; }
	template<> inline v_traits<real4>::scalar_type v_traits<real4>::r<2>( const real4 & v ){ return v.z; }
	template<> inline v_traits<real4>::scalar_type v_traits<real4>::r<3>( const real4 & v ){ return v.w; }

	template <>
        struct m_traits<real44>
        {
            static int const rows = 4;  
            static int const cols = 4;
            typedef real_ scalar_type;        
        
			template <int R,int C> static inline scalar_type r( real44 const & m ){ return m.rows[R]%A<C>(); }
            template <int R,int C> static inline scalar_type & w( real44 & m ){ return m.rows[R]%A<C>(); }     
        };
    }
}
const real44 ApplyConf(const boost::qvm::vec<double,3> &position, const boost::qvm::vec<double,3> &eular_angle, const boost::qvm::mat<double,4,4> &projM){
	using namespace boost::qvm;
	return make<real44>( projM*inverse( trans_m(position)*roty_m<4>(eular_angle%Y())*rotx_m<4>(eular_angle%X())*rotz_m<4>(eular_angle%Z()) ) );
}

const vertex_type Transform(const real44 &m, const vertex_type &v){
	real4 h = {v.x,v.y,v.z,1.0};
	h = m*h;
	real_ s = 1.0/h.w;
	vertex_type r = {h.x*s,h.y*s,h.z*s};
	return r;
}

int main(int argc, char* argv[]){
	using namespace boost::interprocess;
//	using namespace cv;
	using namespace boost::qvm;
	using namespace std;
//	VideoCapture videoCap(0);
//	assert(videoCap.isOpened());
//	Mat in;
//	Mat in_transposed;
//	videoCap>>in;


	unsigned width = 640;//videoCap.get(CV_CAP_PROP_FRAME_WIDTH);
	unsigned height = 480;//videoCap.get(CV_CAP_PROP_FRAME_HEIGHT);
	vector<vertex_type> verts;
	vector<tri_type> tris;
	CUDASetup(width,height,true,true,false,false,verts,tris);
	int nSearchRep = 32;
	double stepP = 0.02;
	double stepEA = 0.01;
	vec<double,3> cur_position = {{0,0,5}};
	vec<double,3> cur_eular_angle = {{0,0,0}};
	mat<double,4,4> projM = perspective_rh(45.0,double(width)/double(height),0.1,100.0);
	char show = 1;
	std::vector<real44> wvps;
	std::vector<double> assessment;
	bool fix = true;

	
#define DPRINTF(...) if(debug_info){ fprintf(stderr,__VA_ARGS__); fflush(stderr); }
	assert(5 == argc);
#define C(I,S) (!strcmp(argv[I],S))
#define V(I) (!C(I,"-"))
#define F(I,M) (V(I)?fopen(argv[I],M):NULL)
	const char *shared_mem_name = argv[1];
	bool debug_info = C(2,"d");
	FILE *video_out = F(3,"wb");
	FILE *motion_out = F(4,"w");
#undef F
#undef V
#undef C

	if(video_out) DPRINTF("Will output video.\n");
	if(motion_out) DPRINTF("Will output motion.\n");

	while (access(shared_mem_name,F_OK)==ENOENT) {
		//fprintf(stderr,"ACCESS %d",access(shared_mem_name,F_OK));
		//fflush(stderr);
		sleep(1);
	};

	shared_memory_object shm(open_only,shared_mem_name,read_write);

	mapped_region region(shm,read_write);
	vg_shm_header *hdr = (vg_shm_header*)region.get_address();
	assert(sizeof(vg_shm_header)==hdr->self_size);
	assert(region.get_size()==hdr->self_size+hdr->sz);




	//{ timeout(0); int r = nodelay(NULL,true); assert(OK==r); }
	//{
	//	int r=fcntl(0,F_SETFD,/*fcntl(0,F_GETFD)|*/O_NONBLOCK);
	//	assert(!r);
	//}
	while(true){
		char key = -1;
		printf(":%d ",key);fflush(stdout);
		{
			pollfd pfd={0, POLLIN, 0};
			poll(&pfd,1,0);
			if(pfd.revents) {printf("::%d ",key); fflush(stdout); read(0,&key,1);}
		}
		printf("%d ",key);fflush(stdout);
//		videoCap>>in;
//		assert(in.isContinuous());
//		assert(in.depth()==CV_8U);
//		cv::transpose(in,in_transposed);
		
		{	
			scoped_lock<interprocess_mutex> ___ll(hdr->mtx); //only one reader allowed.
			if(!hdr->pending_reads) {  hdr->readable.wait(___ll);  }
			assert(hdr->pending_reads>0);
			//Assume that the image in shm buffer is already transposed
			//
			DPRINTF("%d: cv starts reading. w=%d,h=%d,sz=%d\n",getpid(),hdr->w,hdr->h,hdr->sz);
			unsigned char *p = (unsigned char*)(hdr+1);
			unsigned int s = hdr->sz;
			CUDAUpdate(p);
			
			if(video_out){// output is transposed again
				static char buf[4*1024*1024];
				assert(hdr->w==480);
				assert(hdr->h==640);
				assert(hdr->sz == hdr->w*hdr->h*3);
				char *t = buf;
				for(int j=0;j<hdr->w;++j){
					for(int i=0;i<hdr->h;++i){
						int k=(i*hdr->w+j)*3;
						*t++ = p[k++];
						assert(t-buf<hdr->sz);
						*t++ = p[k++];
						assert(t-buf<hdr->sz);
						*t++ = p[k++];
						assert(t-buf<=hdr->sz);
					}
				}
				int r=fwrite(buf,1,s,video_out);
				fflush(video_out);
				if(r<hdr->sz&&ferror(video_out)){
					DPRINTF("%d: %d of %d bytes output.",getpid(),r,hdr->sz);
					perror("fwrite");
				}
				assert(r==hdr->sz);
			}

			DPRINTF("%d: cv ends reading.\n",getpid());
			--hdr->pending_reads;
			++hdr->requested_reads;
			hdr->writable.notify_one();
		}
//		unsigned char *p = 0;//in_transposed.ptr();
//		CUDAUpdate(p);

		real44 wvpChosen;
		for(int i=0; i<nSearchRep; ++i){
			const int n = 13;
			vec<double,3> pes[n][2];
			double step[2] = {stepP,stepEA};
			{
				int j = 1;
				pes[0][0] = cur_position;
				pes[0][1] = cur_eular_angle;
				for(int k=0;k<2;++k){
					for(int a=0;a<3;++a){
						for(int s=-1;s<=1;s+=2){
							pes[j][0] = cur_position;
							pes[j][1] = cur_eular_angle;
							pes[j][k].a[a]+=s*step[k];
							++j;
						}
					}
				}
				assert(j==n);
			}
			wvps.resize(n);
			assessment.resize(n);
			for(int j=0;j<n;++j){
				wvps[j] = ApplyConf(pes[j][0],pes[j][1],projM);
			}
			CUDATryConfiguration(wvps,assessment);
			int choice=-1;
			for(int j=0;j<n;++j){
				if(choice<0||assessment[j]>assessment[choice]) {
					choice = j;
					wvpChosen = wvps[j];
				}
			}
			if(!fix){
				cur_position = pes[choice][0];
				cur_eular_angle = pes[choice][1];
			}else{
				std::cout<<"(fixed)";
			}
			std::cout<<"choice::"<<choice<<'\n';
		}
		if(motion_out){ //still output to video_out
			assert(sizeof(wvpChosen)==4*4*sizeof(float));
			for(int i=0;i<4;++i){
				for(int j=i+1;j<4;++j){
					real_ *a=&wvpChosen.rows[i].x+j;
					real_ *b=&wvpChosen.rows[j].x+i;
					real_ t = *a;
					*a=*b;
					*b=t;
				}
			}
			int r=fwrite(&wvpChosen,1,sizeof(wvpChosen),video_out);
			fflush(video_out);
			assert(r==sizeof(wvpChosen));
		}
		//break;}break;
		if('d'==key) {
			std::cout<<"dump\n";
			char name_buf [256];
			time_t t;
			time(&t);
			tm lt;
			localtime_r(&t,&lt);
			ENSURE((strftime(name_buf,250,"%m-%d-%H-%M-%S",&lt)>0));
			std::ofstream os(name_buf);
			CUDADump(os);
		}else if('s'==key){
			show = (show+1)%2;
		}else if('f'==key){
			fix = !fix;
		}else if('q'==key||27==key){
			break;
		}else if(key>=0){
			std::cout<<"Uninterpreted key"<<key<<'\n';
		}
		
	}
	CUDATeardown();
#define FIN(F) if(F) fclose(F);
	FIN(video_out);
	FIN(motion_out);
#undef FIN
	return 0;
}

