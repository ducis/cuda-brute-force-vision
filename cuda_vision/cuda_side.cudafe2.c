# 1 "cuda_side.cudafe1.gpu"
# 14 "common.h"
struct real44;
# 65 "cuPrintf.cu"
struct cuPrintfRestriction;
# 85 "cuPrintf.cu"
struct cuPrintfHeader;
# 213 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 9 "common.h"
typedef float3 real3;
# 10 "common.h"
typedef float4 real4;
# 11 "common.h"
typedef real3 vertex_type;
# 14 "common.h"
struct real44 {
# 15 "common.h"
real4 rows[4];};
# 20 "common.h"
typedef struct real44 transform_type;
# 65 "cuPrintf.cu"
struct cuPrintfRestriction {
# 66 "cuPrintf.cu"
int threadid;
# 67 "cuPrintf.cu"
int blockid;} __attribute__((__aligned__(8)));
# 68 "cuPrintf.cu"
typedef struct cuPrintfRestriction cuPrintfRestriction;
# 85 "cuPrintf.cu"
struct cuPrintfHeader {
# 86 "cuPrintf.cu"
unsigned short magic;
# 87 "cuPrintf.cu"
unsigned short fmtoffset;
# 88 "cuPrintf.cu"
unsigned short blockid;
# 89 "cuPrintf.cu"
unsigned short threadid;} __attribute__((__aligned__(8)));
# 90 "cuPrintf.cu"
typedef struct cuPrintfHeader cuPrintfHeader;
# 53 "cuda_side.cu"
typedef uchar3 _ZN9cuda_side10pixel_typeE;
# 70 "cuda_side.cu"
typedef int4 _ZN9cuda_side16partial_sum_typeE;
# 87 "cuda_side.cu"
typedef float4 _ZN9cuda_side19scanline_accum_typeE;
# 109 "cuda_side.cu"
typedef float3 _ZN9cuda_side10color_typeE;
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 455 "cuda_side.cu"
extern int fdividef();
# 72 "cuda_side.cu"
__loc_sc__(__text__,,) __texture_type__ __text_var(_ZN9cuda_side13l_p_s_tex_refE,_ZN9cuda_side13l_p_s_tex_refE);

#include "cuda_side.cudafe2.stub.c"
