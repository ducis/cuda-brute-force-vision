#undef _GLIBCXX_ATOMIC_BUILTINS
#undef _GLIBCXX_USE_INT128	
#define INLINE inline __device__ __host__
#include <cassert>
#include "common.h"
#include <vector>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <limits>
#include <iostream>
#include <cuda_runtime.h>
//#if __CUDA_ARCH__ >= 200
//#include <sm_20_atomic_functions.h>
//#if __CUDA_ARCH__ > 100      // Atomics only used with > sm_10 architecture
#include "cuPrintf.cu"
#include <sm_20_atomic_functions.h>
//#endif

//#define DEBUG_OUT

#define MAX_BLOCK_SIZE 256
#define CHECK_POINT //printf("CHECK POINT:\t%s\t%d\n",__FILE__,__LINE__);

__global__ void EchoKernel(){
	cuPrintf("Echo from GPU\n");
}

inline __host__ __device__ int3 make_int3(int4 a)
{
    return make_int3(a.x, a.y, a.z);
}

SGNTR_CUDA_ECHO{
	printf("ECHO[::\n");
	cudaPrintfInit();
	dim3 dimGrid(2, 2);
	dim3 dimBlock(2, 2, 2);
	EchoKernel<<<dimGrid, dimBlock>>>();
	cudaThreadSynchronize();
	cudaPrintfDisplay(stdout, true);
	cudaPrintfEnd();
	cudaThreadExit();
	printf("::]ENDECHO\n");
}

inline __host__ __device__ int4 make_int4(int x,int y,int z)
{
    return make_int4(x, y, z, 0);
}

namespace cuda_side{
	typedef uchar3 pixel_type;
	pixel_type *devImg = 0;//column major
	pixel_type *hostImg = 0;//column major
	pixel_type *img = 0;//column major
	unsigned img_sz_in_byt = 0;//in bytes
	unsigned rows = 0;// the 'inner' dimension
	unsigned cols = 0;// the 'outer' dimension
	unsigned img_pitch_in_px = 0;// >=rows
	__device__ __constant__ float2 half_viewport_size;
	__device__ __constant__ float viewport_aspect;
	
	__device__ float4 preprocess_sum_accum;
	__device__ float4 preprocess_normsq_accum;
	float4 norm_u_pr_t_k; // ||u'(t,*,*,k)||

#define ZERO_PARTIAL_SUM make_int4(0,0,0,0)
#define MAKE_PARTIAL_SUM make_int4
	typedef int4 partial_sum_type;
	partial_sum_type *line_partial_sum = 0;//column major
	texture<partial_sum_type,2,cudaReadModeElementType> l_p_s_tex_ref;
	//texture<partial_sum_type, 2, cudaReadModeElementType> lps_tex_ref;
	//size_t l_p_s_sz = 0;
	size_t l_p_s_pitch = 0;//in sizeof(partial_sum_type) instead of bytes


	unsigned num_verts = 0;
	vertex_type *world_space_vertices = 0;
	vertex_type *transformed_vertices = 0;

#define MAX_BATCH_SIZE 16
	__device__ __constant__ transform_type wvp_transforms[MAX_BATCH_SIZE];
	__device__ float opt_obj_gpu_acc[MAX_BATCH_SIZE*16/*13*/];
	float opt_obj_gpu_acc_memsetter[MAX_BATCH_SIZE*16/*13*/];

	typedef float4 scanline_accum_type;
#define ZERO_SCANLINE_ACCUM make_float4(0,0,0,0);

/*	//colors
	typedef double3 color_type;
	const unsigned color_count = 5;
	color_type colors[color_count];

	//color output
#define ZERO_COLOR_ACCUM make_int4(0,0,0,0)
#define MAKE_COLOR_ACCUM make_int4
	typedef int4 color_accum_type;//must be signed
	color_accum_type *color_accum = 0;//the innermost dimension can be the batch size(MAX_BATCH_SIZE>1) or the triangle count(MAX_BATCH_SIZE==1)
	unsigned color_accum_bases[color_count+1];
	typedef uint3 c_a_lim_type;
	c_a_lim_type *c_a_lims = 0;
#if(MAX_BATCH_SIZE>1)
	size_t c_a_pitch = 0;//in sizeof(color_accum_type) instead of bytes
#endif */

	unsigned tri_count = 0;
	vertex_type *tri_verts = 0;
	typedef float3 color_type;
	color_type *tri_colors = 0;

};
using namespace cuda_side;

void Ensure(cudaError_t rc,int line){
	if(rc!=cudaSuccess){
		fprintf(stderr,"%d:%s!=cudaSuccess at line %d.\n",rc,cudaGetErrorString(rc),line);
		
		assert(0);
	}
}
#define SANITY0 \
				{float buf[1024]; \
				ENSURE(cudaMemcpy(buf,tri_verts,tri_count*3*sizeof(vertex_type),cudaMemcpyDeviceToHost)); \
				for(int i=0;i<tri_count*3;++i){ \
					printf("%f ",buf[i]); \
				} printf("\n");}

SGNTR_CUDA_SETUP{
	assert(copy_to_device||page_locked_mem);
	assert(!cuda_array||copy_to_device);
	{
		float2 s = {0.5f * (cols = width),0.5f * (rows = height)};
		img_pitch_in_px = ((rows+63)/64)*64;
		printf("%d %d\n",img_pitch_in_px,rows);
		assert(img_pitch_in_px>=rows); 
		assert(img_pitch_in_px<rows+64);
		img_sz_in_byt = img_pitch_in_px * cols * sizeof(pixel_type);
		ENSURE(cudaMemcpyToSymbol(half_viewport_size,&s,sizeof(s)));
		float a = double(width)/double(height);
		ENSURE(cudaMemcpyToSymbol(viewport_aspect,&a,sizeof(a)));
	}
	if(copy_to_device){
		if(cuda_array){
			assert(0);
		}else{
			ENSURE(cudaMalloc(&devImg,img_sz_in_byt));
			assert(devImg);
			img = devImg;
		}
	}
	if(page_locked_mem){
		ENSURE(cudaHostAlloc( &hostImg, img_sz_in_byt, cudaHostAllocWriteCombined | (copy_to_device?0:cudaHostAllocMapped) ));
		assert(hostImg);
		if(!copy_to_device){
			ENSURE(cudaHostGetDevicePointer(&img,hostImg,0));
		}
	}
	//l_p_s_sz = (rows+1) * (cols+1) * sizeof(partial_sum_type); // Make it a little larger than needed for the ease of modification
	//ENSURE(cudaMalloc(&line_partial_sum,l_p_s_sz));
	ENSURE(cudaMallocPitch(&line_partial_sum,&l_p_s_pitch,rows*sizeof(partial_sum_type),cols+1));
	assert(l_p_s_pitch>=rows*sizeof(partial_sum_type));
	assert(l_p_s_pitch%sizeof(partial_sum_type)==0);
	l_p_s_pitch/=sizeof(partial_sum_type);
	assert(line_partial_sum);
	cudaChannelFormatDesc channelDesc = cudaCreateChannelDesc<partial_sum_type>();
	ENSURE(cudaBindTexture2D(0, &l_p_s_tex_ref, line_partial_sum, &channelDesc, rows/**sizeof(partial_sum_type)*/, cols+1, l_p_s_pitch*sizeof(partial_sum_type)));
	assert(!indexed);
	using namespace std;
	{
		//(ofstream("junk.txt"))<<123;
#define _LOAD(V,T)		vector<T> V;		{	ifstream s( #V ".txt" ); copy(istream_iterator<T>(s),istream_iterator<T>(),back_inserter(V));	}
		_LOAD(verts,vertex_type);
		_LOAD(tris,tri_type);
		_LOAD(colors_,color_type); 		//there can be triangles with negative colors.And the triangle list file should already be sorted by color.
#undef _LOAD
		main_verts = verts;
		main_tris = tris;

//		assert(colors_.size()==color_count);
//		std::copy(colors_.begin(),colors_.end(),colors);

		tri_count = tris.size();

//#if(MAX_BATCH_SIZE>1)
//		ENSURE(cudaMallocPitch(&color_accum,&c_a_pitch,MAX_BATCH_SIZE*sizeof(color_accum_type),color_count/*tri_count*/));
//		assert(c_a_pitch);
//		assert(c_a_pitch%sizeof(color_accum_type) == 0);
//		c_a_pitch/=sizeof(color_accum_type);
//#else
//		ENSURE(cudaMalloc(&color_accum,color_count/*tri_count*/*sizeof(color_accum_type)));
//#endif
		ENSURE(cudaMalloc(&tri_verts,tri_count*3*sizeof(vertex_type)));
		assert(tri_verts);
		CHECK_POINT;
		ENSURE(cudaMalloc(&tri_colors,tri_count*sizeof(color_type)));
		assert(tri_colors);
//		ENSURE(cudaMalloc(&c_a_lims,tri_count*sizeof(c_a_lim_type)));
//		assert(c_a_lims);
		{
			std::vector<vertex_type> tvb(tri_count*3);
			std::vector<color_type> coloring(tri_count);
//			std::vector<c_a_lim_type> calb(tri_count);
//			unsigned currentColor = 0xFFFFFFFF;
			for(unsigned i=0;i<tri_count;++i){
				assert(tris[i].w<colors_.size());
#define PUT_V(N,C) /*cout<<(i*3+N)<<' '<<i<<' '<<tris[i].C<<endl;*/ tvb[i*3+N] = verts[tris[i].C];
				PUT_V(0,x);
				PUT_V(1,y);
				PUT_V(2,z);
#undef PUT_V
				coloring[i] = colors_[tris[i].w];
			}
			for(int i=0;i<tri_count*3;++i){
				printf("%f %f %f\n",tvb[i].x,tvb[i].y,tvb[i].z);
			}
			ENSURE(cudaMemcpy(tri_verts,&tvb.front(),tri_count*3*sizeof(vertex_type),cudaMemcpyHostToDevice));
			ENSURE(cudaMemcpy(tri_colors,&coloring.front(),tri_count*sizeof(color_type),cudaMemcpyHostToDevice));
			
			//SANITY0;
			CHECK_POINT;
//			ENSURE(cudaMemcpy(c_a_lims,&calb.front(),tri_count*sizeof(c_a_lim_type),cudaMemcpyHostToDevice));
		}
	}
}

SGNTR_CUDA_TEARDOWN{
	if(hostImg) ENSURE(cudaFreeHost(hostImg));
	if(devImg) ENSURE(cudaFree(devImg));
	assert(line_partial_sum); ENSURE(cudaFree(line_partial_sum));
	//assert(color_accum); ENSURE(cudaFree(color_accum));
	assert(tri_verts); ENSURE(cudaFree(tri_verts));
	assert(tri_colors); ENSURE(cudaFree(tri_colors));
	//assert(c_a_lims); ENSURE(cudaFree(c_a_lims));
}

//use the following #def's to disable verbose output
#define cuPrintf(...)
#define cudaPrintfInit(...)
#define cudaPrintfDisplay(...)
#define cudaPrintfEnd(...)

#define MAP3(OP) OP(x);OP(y);OP(z);
#define MAP4(OP) OP(x);OP(y);OP(z);OP(w);
__global__ void Preprocess(
	partial_sum_type* out, //s(t)
	int out_pitch, 
	const pixel_type *in, 
	int in_row_count, 
	int pitch,
	int in_mat_size, 
	float avg_mult //(HW)^(-1)
//	double4 *normsq_out, //||u'(t,*,*,k)||^2 for k=1..4
//	int cap
	) // Preprocessing of Input Frames: evalutate s(t) and ||u'(t,*,*,k)|| for all k.
{
    int r = blockDim.x * blockIdx.x + threadIdx.x;
	if (r < in_row_count){
		const pixel_type *in_begin = in + r;
		const pixel_type *in_end = in_begin + in_mat_size;
		partial_sum_type *p_out = out + r;
		*p_out = ZERO_PARTIAL_SUM;
		for(const pixel_type *p_in=in_begin; p_in<in_end; p_in+=pitch){
			partial_sum_type *p=p_out;
			p_out+=out_pitch;
			*p_out = MAKE_PARTIAL_SUM(p_in->x,p_in->y,p_in->z,1)+*p;
			/*	cuPrintf("PP:%d\t:\t%d\t%d\t%d\t:\t%d\t%d\t%d\t%d\n",
				p_in->x, p_in->y, p_in->z, p->x, p->y, p->z, p->w);
			*/
			//partial_sum_type delta = *p;
			//cuPrintf("PP: %d\t%d\t%d\t%d",delta.x,delta.y,delta.z,delta.w);
		}
		__shared__ float buf[MAX_BLOCK_SIZE*4];
		{
			float *p=buf+threadIdx.x;
#define WT(C) *p=p_out->C;p+=blockDim.x;
			MAP4(WT);
#undef WT
			__syncthreads();
			cuPrintf("EEE:%d %d %d %d\n",blockDim.x,blockDim.y,threadIdx.x,threadIdx.y);
			cuPrintf("PP:%d %d %d %d %d: %f %f %f %f\n", r, p_out->x, p_out->y, p_out->z, p_out->w, p[-blockDim.x*4], p[-blockDim.x*3], p[-blockDim.x*2], p[-blockDim.x*1] );
		}
		//blockDim.x must be power of two
		for(int stride=blockDim.x>>1;stride>0;stride>>=1) {	
			{
				__syncthreads();
			//	float *p=buf+threadIdx.x;
			//	cuPrintf("KKK0:%d %d %d :: %f %f %f %f\n", r, threadIdx.x, stride, p[0], p[blockDim.x], p[2*blockDim.x], p[3*blockDim.x]);
			}
			if(threadIdx.x<stride && r+stride<in_row_count && threadIdx.x+stride<blockDim.x){
				float *p=buf+threadIdx.x;
				cuPrintf("KKK:%d %d %d :: %f %f %f %f\n", r, threadIdx.x, stride, p[stride], p[stride+blockDim.x], p[stride+2*blockDim.x], p[stride+3*blockDim.x]);
#define AC(C) *p+=*(p+stride); p+=blockDim.x;
				MAP4(AC);
#undef AC
			}
		}
		if(!threadIdx.x){
			float *p=buf;
			cuPrintf("QQQ:%f %f %f %f\n",p[0],p[blockDim.x],p[blockDim.x*2],p[blockDim.x*3]);
#define A(C) atomicAdd(&preprocess_sum_accum.C,*p);	p+=blockDim.x;
			MAP4(A);
#undef A
		}
		__syncthreads();
		cuPrintf("LLL:%f %f %f %f :: %f %f %f %f\n", 
			preprocess_sum_accum.x, preprocess_sum_accum.y, preprocess_sum_accum.z, preprocess_sum_accum.w,
			preprocess_normsq_accum.x, preprocess_normsq_accum.y, preprocess_normsq_accum.z, preprocess_normsq_accum.w);
		float4 sum=preprocess_sum_accum;
		float4 avg=sum*avg_mult;
		float4 sq_sum=make_float4(0,0,0,0);
		for(const pixel_type *p_in=in_begin; p_in<in_end; p_in+=in_row_count){
#define S(C) {float t = p_in->C-avg.C; sq_sum.C+=t*t;}	
			MAP3(S);
#undef S
		}
		{
			{
				float *p=buf+threadIdx.x;
#define WT(C) *p=sq_sum.C; p+=blockDim.x;
				MAP4(WT);
#undef WT
			}
			for(int stride=blockDim.x>>1;stride>0;stride>>=1)		{
				__syncthreads();
				if(threadIdx.x<stride && r+stride<in_row_count && threadIdx.x+stride<blockDim.x){
					float *p=buf+threadIdx.x;
#define AC(C) *p+=*(p+stride); p+=blockDim.x;
					MAP4(AC);
#undef AC
				}
			}
			if(!threadIdx.x){
				float *p=buf;
#define A(C) atomicAdd(&preprocess_normsq_accum.C,*p);	p+=blockDim.x;
				MAP4(A);
#undef A
			}
		}
/*		{ __syncthreads();
		cuPrintf("MMM:%f %f %f %f :: %f %f %f %f\n", 
			preprocess_sum_accum.x, preprocess_sum_accum.y, preprocess_sum_accum.z, preprocess_sum_accum.w,
			preprocess_normsq_accum.x, preprocess_normsq_accum.y, preprocess_normsq_accum.z, preprocess_normsq_accum.w); } */
	}
}


#define RUN_KERNEL_1D(K,N,P) { \
	int threadsPerBlock = 256; assert(threadsPerBlock<=MAX_BLOCK_SIZE);\
	int blocksPerGrid = ((N) + threadsPerBlock - 1) / threadsPerBlock; \
	K<<<blocksPerGrid, threadsPerBlock>>>P; \
}

SGNTR_CUDA_UPDATE{ //Preprocessing of Input Frames
	//SANITY0;
	CHECK_POINT;
#define FIRST_COPY(DEST,DSTTYPE) \
		ENSURE(cudaMemcpy2D(	DEST,	img_pitch_in_px*sizeof(pixel_type),	\
								pixels,		rows*sizeof(pixel_type),	\
								rows*sizeof(pixel_type),	cols,	cudaMemcpyHostTo##DSTTYPE));
	if(hostImg){
		FIRST_COPY(hostImg,Host);
		if(devImg){
			ENSURE(cudaMemcpyAsync(devImg,hostImg,img_sz_in_byt,cudaMemcpyHostToDevice));
		}
	}else{
		assert(devImg);
		FIRST_COPY(devImg,Device);
	}
	ENSURE(cudaThreadSynchronize());
	ENSURE(cudaGetLastError());
	//SANITY0;
	CHECK_POINT;
	//RUN_KERNEL_OVER_ROWS(CalcPartialSum,rows,(img, line_partial_sum, rows, rows*cols));
	{
		float4 s=make_float4(0,0,0,0);
		ENSURE(cudaMemcpyToSymbol(preprocess_sum_accum,&s,sizeof(s)));
		ENSURE(cudaMemcpyToSymbol(preprocess_normsq_accum,&s,sizeof(s)));
	}
	//blockDim.x must be powers of two
	//SANITY0;
	CHECK_POINT;
	cudaPrintfInit();
	RUN_KERNEL_1D(Preprocess,rows,(line_partial_sum, l_p_s_pitch, img, rows, img_pitch_in_px, img_pitch_in_px*cols, 1.0/(rows*cols)));
	cudaPrintfDisplay(stdout, true);
	cudaPrintfEnd();	
	//SANITY0;
	CHECK_POINT;
	{
		float4 s;			
		ENSURE(cudaMemcpyFromSymbol( &s, preprocess_normsq_accum, sizeof(preprocess_normsq_accum)));
#define K(C) norm_u_pr_t_k.C = sqrt(s.C);
		MAP4(K);
#undef K
//#define P(V4) printf(#V4" = (%f,\t%f,\t%f\t,%f)\n",V4.x,V4.y,V4.z,V4.w);
//		P(norm_u_pr_t_k);
//#undef P
	}
	ENSURE(cudaThreadSynchronize());
	ENSURE(cudaGetLastError());
	//SANITY0;
	CHECK_POINT;
}



__global__ void EvalObjFuncGPUPhase( // Evaluation of Optimization Objective: GPU Phase    (per triangle)
	vertex_type *tri_world_verts, 
	color_type *tri_colors,
	int rdc_stride,
//	partial_sum_type* s_t, //s(t)
	int nTri)
{//out: Z, c*Z, n_q, n_q*c, n_q*c^2
	float4 ss[4];
	int iTri = blockDim.y*blockIdx.x+threadIdx.y;
	int iConf = threadIdx.x;
	int nConf = blockDim.x;
	if(iTri>=nTri) return;
#if(MAX_BATCH_SIZE>1)
	#define TO_SS(I)	ss[I] = wvp_transforms[iConf]*make_float4(tri_world_verts[iTri*3+I],1);  \
	cuPrintf("VID:\t%d\tWORLDPOS: %f\t%f\t%f\tSCRPOS:\t%f\t%f\t%f\n",iTri*3+I,\
		tri_world_verts[iTri*3+I].x,tri_world_verts[iTri*3+I].y,tri_world_verts[iTri*3+I].z,ss[I].x,ss[I].y,ss[I].z);
#else 
	#define TO_SS(I)	ss[I] = wvp_transforms[0]*make_float4(tri_world_verts[iTri*3+I],1);
#endif

	TO_SS(0);
	TO_SS(1);
	TO_SS(2);
#undef TO_SS
	
#define CLIP(I) ((ss[I].z>0)<<I)
	unsigned clip_mask = CLIP(0)|CLIP(1)|CLIP(2);
	const uint4 clip_func_table[8] = {//x is the number of clipped points. y is "the different one".
		{0,0,1,2},//000
		{1,0,1,2},//001
		{1,1,2,0},//010
		{2,2,0,1},//011
		{1,2,0,1},//100
		{2,1,2,0},//101
		{2,0,1,2},//110
		{3,0,1,2} //111
	};//should try moving it into constant memory, probably already done by nvcc.
	uint4 clip_stat = clip_func_table[clip_mask];
#undef CLIP

//	c_a_lim_type cal = cals[iTri];
	scanline_accum_type accumulated = ZERO_SCANLINE_ACCUM;
//#define CUT(SRC,DEST) { a = ss[clip_stat.y].z/(ss[clip_stat.y].z-ss[clip_stat.SRC].z); ss[clip_stat.DEST] = ss[clip_stat.y]*(1-a)+ss[clip_stat.SRC]*a; }
#define CUT(VISIBLE,INVIS,RESULT) { float a = ss[clip_stat.VISIBLE].z/(ss[clip_stat.VISIBLE].z-ss[clip_stat.INVIS].z); \
				ss[clip_stat.RESULT] = ss[clip_stat.VISIBLE]+(ss[clip_stat.INVIS]-ss[clip_stat.VISIBLE])*a; } //should try both.
	if(3==clip_stat.x){
	}else{
		if(2==clip_stat.x){
			CUT(y,z,z);
			CUT(y,w,w);
		}
		if(1==clip_stat.x){
			clip_stat.x = 3;
			CUT(w,y,x);
			CUT(z,y,y);
		}else{
			clip_stat.x = clip_stat.w;
		}
		//float2 start,end;//already clipped?
#define PRSP(V,C) V.C/V.w
#define ACCUM(P0,P1)	\
					{	\
						float	x0 = PRSP(ss[P0],x), \
								y0 = -PRSP(ss[P0],y), \
								x1 = PRSP(ss[P1],x), \
								y1 = -PRSP(ss[P1],y); \
						float dy = y1-y0; float dxdy = (x1-x0)*viewport_aspect/dy; \
						float c; \
						float r0,r1; \
						if(y1>y0){ r0 = y0; r1 = y1; c = x0; }else{ r0 = y1; r1 = y0; c = x1; } \
						float r; \
						c = (c+1.0f)*half_viewport_size.x+modff( (r0+1.0f)*half_viewport_size.y, &r )*dxdy; \
						r1 = truncf((r1+1.0f)*half_viewport_size.y)-0.5f; \
						scanline_accum_type a = ZERO_SCANLINE_ACCUM; \
						for(; r<r1 ; r+=1.0f, c+=dxdy ){ \
							a += /*MAKE_COLOR_ACCUM*/make_float4(tex2D(l_p_s_tex_ref,r,c)); /*{int4 p = tex2D(l_p_s_tex_ref,r,c); cuPrintf("\tBBB:%f\t%f\t%d\t%d\t%d\t%d\n",r,c,p.x,p.y,p.z,p.w);}*/ \
						} /*should be auto-clamped by texture sampler*/ \
						accumulated+=a*copysignf(1.0f,dy); \
						/*cuPrintf("AAA:dy=%f\tx0=%f\ty0=%f\tx1=%f\ty1=%f\tr=%f\tr1=%f\tc=%f\n",dy,x0,y0,x1,y1,(r),(r1),(c));*/	\
						/*{ scanline_accum_type b = a*copysignf(1.0f,dy); cuPrintf("a\t%f\t%f\t%f\t%f\tb\t%f\t%f\t%f\t%f\tdy\t%f\n",a.x,a.y,a.z,a.w,b.x,b.y,b.z,b.w,dy);}*/ \
					}
		ACCUM(clip_stat.x,clip_stat.y);
		ACCUM(clip_stat.y,clip_stat.z);
		ACCUM(clip_stat.z,clip_stat.w);
		if(1==clip_stat.x){ ACCUM(clip_stat.w,clip_stat.x); }
#undef ACCUM
#undef CUT
	}

#if(MAX_BATCH_SIZE>1) 
	const unsigned tid = threadIdx.x+threadIdx.y*blockDim.x;
	#define F(x) (MAX_BATCH_SIZE*x)
#else 
	Fail to compile.
	//unsigned tid = threadIdx.y;
	//#define F(x) (x)
#endif

	cuPrintf("Echo from GPU:tid=%d,\tiTri=%d,\tiConf=%d,\taccumulated=(%f,%f,%f,%f)\n",tid,iTri,iConf, accumulated.x, accumulated.y, accumulated.z, accumulated.w);
	//OUT = accumulated;
	//tid = threadIdx.x;
	__shared__ float buf[MAX_BLOCK_SIZE*(4+3+3+3)]; //Every int4 occupies 4 banks.A separate buffer for every channel may be better.		
	int smp = blockDim.x*blockDim.y;
	color_type color = tri_colors[iTri];
	// typedef float acc_t;//can be float,double,or long long
	

	{
		// Z:3,  n_q:1, n_q*c:3, Z*c:3*2, n_q*c^2:3*2     (in 32-bit words)
		float *p = buf+tid;
#define Z accumulated
#define W0(V) *p=V;p+=smp;
#define W(C) W0(Z.C) 
		MAP4(W);//Z (as (x,y,z)) and n_q (as w)
#undef W
#define W(C) W0(Z.w*color.C) 
		MAP3(W);//n_q*c
#undef W
//#undef W0

		//acc_t *p8 = (acc_t*)p;
//#define W0(V) *p8=V;p8+=smp;
#define W(C) W0(color.C* /*(acc_t)*/ Z.C)
		MAP3(W);
#undef W
#define W(C) W0(color.C*color.C* /*(acc_t)*/ Z.w)
		MAP3(W);
#undef W
#undef W0
#undef Z
		__syncthreads();
	}
	

	/*{	
		float *p = buf+tid;
		//cuPrintf("PER_TRI_0:%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n",p[0],p[smp],p[smp*2],p[smp*3],p[smp*4],p[smp*5],p[smp*6],p[smp*7],p[smp*8],p[smp*9]);
		cuPrintf("PER_TRI_1:color=(%f,%f,%f),Z=(%f,%f,%f,%f),%f,%f,%f\n",color.x,color.y,color.z,accumulated.x,accumulated.y,accumulated.z,accumulated.w,p[smp*7],p[smp*8],p[smp*9]);
		cuPrintf("ASSERTION0:%d (%f %f %f)\n",p[smp*4]==p[smp*5] && p[smp*5]==p[smp*6],p[smp*4],p[smp*5],p[smp*6]);
#define Z accumulated
//		cuPrintf("PER_TRI_Z:(%f : %f, \t\t%f : %f, \t\t%f : %f, \t\t%f : %f)\n",p[0],Z.x, p[smp],Z.y, p[smp*2],Z.z, p[smp*3],Z.w);
		
//		cuPrintf("PER_TRI_Z:(%f : %f, \t\t%f : %f, \t\t%f : %f, \t\t%f : %f)\n",p[0],Z.x, p[smp],Z.y, p[smp*2],Z.z, p[smp*3],Z.w);
#undef Z
	}*/
	{
		//	iTri = blockDim.y*blockIdx.x+threadIdx.y;
		//iBatch = threadIdx.x;
		//tid = threadIdx.x+threadIdx.y*blockDim.x;

		int stride_check=min(nTri-iTri,blockDim.y-threadIdx.y)*nConf;		//stride<stride_check is equivalent to iTri+stride/nConf<nTri && ...<threadIdx.y
		//First stride is the smallest y such that y==(2^x)*nConf and 2*y>=nConf*blockDim.y
		//Last stride is nConf
		cuPrintf("stride_check=%d\tnTri=%d\tiTri=%d\tnConf=%d\n",stride_check,nTri,iTri,nConf);
		for(int stride=rdc_stride; stride>0 ; stride>>=1)    {
			__syncthreads();
			if(stride<stride_check && tid<stride && nConf<=stride){ 
#define A(P) {*P+=*(P+stride);P+=smp;}
				float *p = buf+tid;
				cuPrintf("RDC:STRD=%d\tTID=%d\tps=%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n",
					stride,tid,p[0],p[smp],p[2*smp],p[3*smp],p[4*smp],p[smp*5],p[smp*6],p[smp*7]);
#define D A(p)
				D;D;D;  D;  D;D;D;//Z, n_q, n_q*c
//#undef D
//			acc_t *p8 = (acc_t*)p;
//#define D A(p8)
				D;D;D;  D;D;D;//Z*c, n_q*c^2
#undef D
#undef A
		/*		{//TEST
					p=buf+tid;
					cuPrintf("ASSERTION2:%d %d %d %d %d\n",iTri+stride/nConf<nTri,iTri,stride,nConf,nTri);
					cuPrintf("ASSERTION1:%d %d (%f %f %f)@%d (%f %f %f)@%d\n",p[smp*4]==p[smp*5] && p[smp*5]==p[smp*6],stride,p[smp*4],p[smp*5],p[smp*6],p+smp*4,p[stride+smp*4],p[stride+smp*5],p[stride+smp*6],p+smp*4+stride);
				}*/
			}
		}
		__syncthreads();
		/*{//TEST
#define X (opt_obj_gpu_acc+iConf*16)
			__syncthreads();
			cuPrintf("opt_obj_gpu_acc1\t%f\t%f\t%f, \t%f, \t%f\t%f\t%f, \t%f\t%f\t%f\n",X[0],X[1],X[2],X[3],X[4],X[5],X[6],X[7],X[8],X[9]);
			__syncthreads();
#undef X
		}*/
		if(!threadIdx.y){
			float *p = buf+tid;
			float *wt = opt_obj_gpu_acc+iConf*16; // 13 "D"s follow
			cuPrintf("CCCC:%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n",p[0],p[smp],p[2*smp],p[3*smp],p[4*smp],p[5*smp],p[6*smp],p[7*smp],p[8*smp],p[9*smp]);
#define A(P)  atomicAdd(wt,/*blockIdx.x?(-0.3f):0.5f*/*P);++wt;P+=smp;
#define D A(p)
			D;D;D;	D;	D;D;D; //sum Z, sum n_q, sum n_q*c
//#undef D
//			acc_t *p8 = (acc_t*)p;
//#define D A(p8)
			D;D;D;	D;D;D; //sum Z*c, sum n_q*c^2
#undef D
#undef A
		}
		/*{//TEST
			__syncthreads();
			float *p = buf+tid;
			float *wt = opt_obj_gpu_acc+iConf*16; 
			//cuPrintf("opt_obj_gpu_acc2\t%f\t%f\t%f, \t%f, \t%f\t%f\t%f, \t%f\t%f\t%f\n",wt[0],wt[1],wt[2],wt[3],wt[4],wt[5],wt[6],wt[7],wt[8],wt[9]);
			cuPrintf("VVVVV:%d %d %d: %f\t%f\t%f\t:\t %f \t\t %f \t\t %f \n",wt+4,wt+5,wt+6, p[4*smp],p[5*smp],p[6*smp], wt[4], wt[5], wt[6]);
		}*/
	}
#undef F
}

SGNTR_CUDA_TRY_CONFIGURATION{ //Evaluation of Optimization Objective
	CHECK_POINT;
	ENSURE(cudaGetLastError());
//	static std::vector<color_accum_type> cas;
//	size_t s = c_a_pitch*sizeof(color_accum_type)*color_count;
//	cas.resize(c_a_pitch*color_count);
	for(unsigned batchBase=0;batchBase<wvps.size();batchBase+=MAX_BATCH_SIZE){
		//setup matrices first
		unsigned n = std::min((size_t)MAX_BATCH_SIZE,wvps.size()-batchBase);
		unsigned m = 256/n;
		//std::copy(wvps.begin()+batchBase,wvps.begin()+batchBase+n,wvp_transforms);
		ENSURE(cudaMemcpyToSymbol(wvp_transforms,&wvps.front()+batchBase,sizeof(transform_type)*n));
	/*	for(int j=0;j<n;++j){
			for(int r=0;r<4;++r){
				const float4 &s = wvps[j].rows[r];
				printf("%f %f %f %f\n",s.x,s.y,s.z,s.w);
			}
			printf("--------\n");
		}*/

		assert(sizeof(opt_obj_gpu_acc)==sizeof(opt_obj_gpu_acc_memsetter));
		memset(opt_obj_gpu_acc_memsetter,0,sizeof(opt_obj_gpu_acc_memsetter));
//		ENSURE(cudaMemset((void*)opt_obj_gpu_acc,100,sizeof(opt_obj_gpu_acc)));
		ENSURE(cudaMemcpyToSymbol(opt_obj_gpu_acc, opt_obj_gpu_acc_memsetter, sizeof(opt_obj_gpu_acc_memsetter)));
		ENSURE(cudaThreadSynchronize());
/*		{
			static float gpu_acc[MAX_BATCH_SIZE*16];
			ENSURE(cudaMemcpyFromSymbol ( gpu_acc, opt_obj_gpu_acc, n*16, 0, cudaMemcpyDeviceToHost ));
			for(int j=0;j<n;++j){
				float *f=gpu_acc+16*j;
				printf("fs: ");
				for(int k=0;k<13;++k){
					printf("%f ",f[k]);
				} 
				printf("\n"); 
			}
		}*/
	
		ENSURE(cudaGetLastError());
		cudaPrintfInit();
		//ENSURE(cudaMemset2D(color_accum,c_a_pitch*sizeof(color_accum_type),0,MAX_BATCH_SIZE*sizeof(color_accum_type),n));
		int rdc_stride=n;
		while(2*rdc_stride<n*m) rdc_stride<<=1;
//		printf("rdc_stride=%d\tn=%d\tm=%d\n",rdc_stride,n,m);

		{
			//SANITY0;CHECK_POINT;
			dim3 threadsPerBlock(n,m);
			assert(n*m<=MAX_BLOCK_SIZE);
			int blocksPerGrid = ((tri_count) + m - 1) / m;
			EvalObjFuncGPUPhase<<<blocksPerGrid,threadsPerBlock>>>( tri_verts, tri_colors, rdc_stride, tri_count );
			//std::cout<<threadsPerBlock.x<<' '<<threadsPerBlock.y<<' '<<threadsPerBlock.z<<' '<<blocksPerGrid<<' ';
		}
		ENSURE(cudaGetLastError());
		ENSURE(cudaThreadSynchronize());
		static float gpu_acc[MAX_BATCH_SIZE*16];
		ENSURE(cudaMemcpyFromSymbol ( gpu_acc, opt_obj_gpu_acc, n*16*sizeof(float) ));
		for(int j=0;j<n;++j){
			float *f=gpu_acc+16*j;
			float3 sum_Z=make_float3(f[0],f[1],f[2]);
			float sum_n_q(f[3]);
			float3 sum_n_q_by_c=make_float3(f[4],f[5],f[6]);
			float3 sum_Z_by_c=make_float3(f[7],f[8],f[9]);
			float3 sum_n_q_by_c_2=make_float3(f[10],f[11],f[12]);
			float3 G = sum_n_q_by_c/sum_n_q;
			float3 B = sum_n_q_by_c_2 - 2*G*sum_n_q_by_c + G*G*sum_n_q;
			float3 A = sum_Z_by_c - G*sum_Z;
			float3 tar;
#define F(K) tar.K = A.K/(sqrt(B.K)*norm_u_pr_t_k.K);
			MAP3(F);
#undef F
			//let I(k)=1
			//printf("fs: ");
			//for(int k=0;k<13;++k){
			//	printf("%f ",f[k]);
			//} 
			//printf("\n");
			//printf("sum_n_q = %f\n", sum_n_q);
#define P(V3) printf(#V3" = (%f,\t%f,\t%f)\n",V3.x,V3.y,V3.z);
			//P(sum_Z);P(sum_n_q_by_c);P(sum_Z_by_c);P(sum_n_q_by_c_2);P(G);P(B);P(A);P(tar);
#undef P
			out[batchBase+j] = tar.x+tar.y+tar.z;
			//printf("out[batchBase+j]: %f\n",out[batchBase+j]);
		}
		cudaPrintfDisplay(stdout, true);
		cudaPrintfEnd();
	//std::copy(cas.begin(),cas.begin()+c_a_pitch*color_count,std::ostream_iterator<color_accum_type>(std::cout,"\n"));
/*		for(unsigned j=0;j<n;++j){
			double3 sStencil={0,0,0};
		//std::cout<<"sStencil="<<sStencil<<"\n";
			double area = 0;
			for(unsigned k=0;k<color_count;++k){
				double a = cas[k*c_a_pitch+j].w;
				sStencil+=colors[k]*a;
				area+=a;
			//std::cout<<"	sStencil="<<sStencil<<"a="<<a<<"colors["<<k<<"]="<<colors[k]<<"colors[k]*a="<<colors[k]*a<<"\n";
			}
		//std::cout<<"sStencil="<<sStencil<<"area="<<area<<"\n";
			sStencil *= 1.0/area;
		//std::cout<<"sStencil="<<sStencil<<"\n";
			double s = 0;
			for(unsigned k=0;k<color_count;++k){
				color_accum_type ca=cas[k*c_a_pitch+j];
			//std::cout<<"colors["<<k<<"]-Stencil="<<colors[k]-sStencil<<"ca="<<ca<<"\n";
			//std::cout<<dot(colors[k]-sStencil,make_double3(ca.x,ca.y,ca.z))<<"\n";
				s+=dot(colors[k]-sStencil,make_double3(ca.x,ca.y,ca.z));
			//std::cout<<"s="<<s<<"\n";
			}
			out[i+j] = s/area;
		}*/
	}
	//std::copy(out.begin(),out.end(),std::ostream_iterator<double>(std::cout,","));std::cout<<'\n';
	//while(true);
	CHECK_POINT;
}

template<typename T>
__device__ inline void PrintI3OnDevice(const T &v){
	cuPrintf("( %d,\t%d,\t%d )",v.x,v.y,v.z);
}

template<typename T>
__device__ inline void PrintOnDevice(const T &v){
	PrintI3OnDevice(v);
}


template<typename S, typename T>
void PrintStdVectorAsRowMajMatrix(S &s, const std::vector<T> &v, unsigned r, unsigned c){
	assert(v.size() == r*c);
	for(typename std::vector<T>::const_iterator i = v.begin(); i!=v.end(); i+=c){
		copy(i,i+c,std::ostream_iterator<T>(s,"\t"));
		s<<'\n';
	}
}

template<typename T>
std::vector<T> DownloadToStdVector(const T *src_on_device, typename std::vector<T>::size_type n){
	std::vector<T> r(n);
	assert(r.size()==n);
	ENSURE(cudaMemcpy( &r.front(), src_on_device, n*sizeof(T), cudaMemcpyDeviceToHost ));
	return r;
}

SGNTR_CUDA_DUMP{
	//Printed matrices are transposed;
	PrintStdVectorAsRowMajMatrix(s, DownloadToStdVector(img, img_pitch_in_px*cols), cols, img_pitch_in_px);
	//PrintStdVectorAsRowMajMatrix(s, DownloadToStdVector(line_partial_sum, rows*(cols+1)), cols+1, rows);
	PrintStdVectorAsRowMajMatrix(s, DownloadToStdVector(line_partial_sum, l_p_s_pitch*(cols+1)), cols+1, l_p_s_pitch);
}
