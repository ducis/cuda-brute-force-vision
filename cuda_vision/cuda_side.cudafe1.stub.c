#include "crt/host_runtime.h"
#include "cuda_side.fatbin.c"
typedef cuda_side::pixel_type _ZN9cuda_side10pixel_typeE;
typedef cuda_side::partial_sum_type _ZN9cuda_side16partial_sum_typeE;
typedef cuda_side::color_type _ZN9cuda_side10color_typeE;
extern void __device_stub__Z10EchoKernelv(void);
extern void __device_stub__Z10PreprocessP4int4iPK6uchar3iiif(_ZN9cuda_side16partial_sum_typeE *, int, const _ZN9cuda_side10pixel_typeE *, int, int, int, float);
extern void __device_stub__Z19EvalObjFuncGPUPhaseP6float3S0_ii(vertex_type *, _ZN9cuda_side10color_typeE *, int, int);
static void __sti____cudaRegisterAll_17_cuda_side_cpp1_ii_51e07f2f(void) __attribute__((__constructor__));
void __device_stub__Z10EchoKernelv(void){__cudaLaunch(((char *)((void ( *)(void))EchoKernel)));}
# 25 "cuda_side.cu"
void EchoKernel(void)
# 25 "cuda_side.cu"
{__device_stub__Z10EchoKernelv();

}
# 1 "cuda_side.cudafe1.stub.c"
void __device_stub__Z10PreprocessP4int4iPK6uchar3iiif( _ZN9cuda_side16partial_sum_typeE *__par0,  int __par1,  const _ZN9cuda_side10pixel_typeE *__par2,  int __par3,  int __par4,  int __par5,  float __par6) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 28UL); __cudaSetupArgSimple(__par5, 32UL); __cudaSetupArgSimple(__par6, 36UL); __cudaLaunch(((char *)((void ( *)(_ZN9cuda_side16partial_sum_typeE *, int, const _ZN9cuda_side10pixel_typeE *, int, int, int, float))Preprocess))); }
# 245 "cuda_side.cu"
void Preprocess( _ZN9cuda_side16partial_sum_typeE *__cuda_0,int __cuda_1,const _ZN9cuda_side10pixel_typeE *__cuda_2,int __cuda_3,int __cuda_4,int __cuda_5,float __cuda_6)
# 256 "cuda_side.cu"
{__device_stub__Z10PreprocessP4int4iPK6uchar3iiif( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6);
# 345 "cuda_side.cu"
}
# 1 "cuda_side.cudafe1.stub.c"
void __device_stub__Z19EvalObjFuncGPUPhaseP6float3S0_ii( vertex_type *__par0,  _ZN9cuda_side10color_typeE *__par1,  int __par2,  int __par3) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaLaunch(((char *)((void ( *)(vertex_type *, _ZN9cuda_side10color_typeE *, int, int))EvalObjFuncGPUPhase))); }
# 407 "cuda_side.cu"
void EvalObjFuncGPUPhase( vertex_type *__cuda_0,_ZN9cuda_side10color_typeE *__cuda_1,int __cuda_2,int __cuda_3)
# 413 "cuda_side.cu"
{__device_stub__Z19EvalObjFuncGPUPhaseP6float3S0_ii( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 614 "cuda_side.cu"
}
# 1 "cuda_side.cudafe1.stub.c"
static void __sti____cudaRegisterAll_17_cuda_side_cpp1_ii_51e07f2f(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(vertex_type *, _ZN9cuda_side10color_typeE *, int, int))EvalObjFuncGPUPhase), _Z19EvalObjFuncGPUPhaseP6float3S0_ii, (-1)); __cudaRegisterEntry(((void ( *)(_ZN9cuda_side16partial_sum_typeE *, int, const _ZN9cuda_side10pixel_typeE *, int, int, int, float))Preprocess), _Z10PreprocessP4int4iPK6uchar3iiif, (-1)); __cudaRegisterEntry(((void ( *)(void))EchoKernel), _Z10EchoKernelv, (-1)); __cudaRegisterVariable(__shadow_var(globalPrintfBuffer,globalPrintfBuffer), 0, 8, 1, 0); __cudaRegisterVariable(__shadow_var(printfBufferLength,printfBufferLength), 0, 4, 1, 0); __cudaRegisterVariable(__shadow_var(restrictRules,restrictRules), 0, 8, 0, 0); __cudaRegisterVariable(__shadow_var(printfBufferPtr,printfBufferPtr), 0, 8, 0, 0); __cudaRegisterVariable(__shadow_var(_ZN9cuda_side18half_viewport_sizeE,cuda_side::half_viewport_size), 0, 8, 1, 0); __cudaRegisterVariable(__shadow_var(_ZN9cuda_side15viewport_aspectE,cuda_side::viewport_aspect), 0, 4, 1, 0); __cudaRegisterVariable(__shadow_var(_ZN9cuda_side20preprocess_sum_accumE,cuda_side::preprocess_sum_accum), 0, 16, 0, 0); __cudaRegisterVariable(__shadow_var(_ZN9cuda_side23preprocess_normsq_accumE,cuda_side::preprocess_normsq_accum), 0, 16, 0, 0); __cudaRegisterGlobalTexture(__text_var(_ZN9cuda_side13l_p_s_tex_refE,cuda_side::l_p_s_tex_ref), 2, 0, 0); __cudaRegisterVariable(__shadow_var(_ZN9cuda_side14wvp_transformsE,cuda_side::wvp_transforms), 0, 1024, 1, 0); __cudaRegisterVariable(__shadow_var(_ZN9cuda_side15opt_obj_gpu_accE,cuda_side::opt_obj_gpu_acc), 0, 1024, 0, 0);  }
