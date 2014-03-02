#pragma once
#include <vector_types.h>
#include <ostream>
#include <vector>
#include <cutil_math.h>
#include "vectorOP.h"

typedef float real_;
typedef float3 real3;
typedef float4 real4;
typedef real3 vertex_type;
typedef uint4 tri_type; // w being the color id

struct real44{
	real4 rows[4];
	INLINE const real4 operator*(const real4 &r) const{
		return make_float4(dot(rows[0],r),dot(rows[1],r),dot(rows[2],r),dot(rows[3],r));
	}
};
typedef real44 transform_type;

#define SGNTR_CUDA_ECHO extern "C" void Echo()
SGNTR_CUDA_ECHO;

#define SGNTR_CUDA_SETUP extern "C" void CUDASetup(unsigned width, unsigned height, bool copy_to_device, bool page_locked_mem, bool cuda_array, bool indexed, std::vector<vertex_type> &main_verts, std::vector<tri_type> &main_tris)
SGNTR_CUDA_SETUP;

#define SGNTR_CUDA_UPDATE extern "C" void CUDAUpdate(unsigned char *pixels)
SGNTR_CUDA_UPDATE;

#define SGNTR_CUDA_TRY_CONFIGURATION extern "C" void CUDATryConfiguration(const std::vector<real44> &wvps, std::vector<double> &out)
SGNTR_CUDA_TRY_CONFIGURATION;

#define SGNTR_CUDA_TEARDOWN extern "C" void CUDATeardown()
SGNTR_CUDA_TEARDOWN;

#define SGNTR_CUDA_DUMP extern "C" void CUDADump(std::basic_ostream<char> &s)
SGNTR_CUDA_DUMP;

#define ENSURE(S) Ensure((S),__LINE__)
