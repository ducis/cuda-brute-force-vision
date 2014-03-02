# Build script for project
#
################################################################################

# Add source files here
EXECUTABLE	:= cuda_vision 
# Cuda source files (compiled with cudacc)
CUFILES_sm_20		:= cuda_side.cu #simplePrintf.cu
CUDEPS			:= cuPrintf.cu
# C/C++ source files (compiled with gcc / c++)
CCFILES		:= cuda_vision.cpp

# add command line parameters so we can target multiple architectures
GENCODE_ARCH    := -gencode=arch=compute_10,code=\"sm_10,compute_10\" -gencode=arch=compute_13,code=\"sm_13,compute_13\" -gencode=arch=compute_20,code=\"sm_20,compute_20\"

# Do not link with CUTIL and SHRUTIL
OMIT_CUTIL_LIB   := 1
OMIT_SHRUTIL_LIB := 1

################################################################################
# Rules and targets

include common.mk

netTestT: $(TARGET) stopNT
	sleep 0.5
	v4l_get/vg /dev/video0 vid_shm_0 t d &
	sleep 0.5
	rm -f cv-nc-video cv-nc-motion
	mkfifo cv-nc-video cv-nc-motion
	./startNC
	env PATH=/usr/local/cuda/bin:/usr/local/bin:$(PATH)  \
		LD_LIBRARY_PATH=/usr/local/cuda/lib64:/usr/local/lib64:$(LD_LIBRARY_PATH) \
		bin/release/cuda_vision vid_shm_0 d cv-nc-video cv-nc-motion
stopNT:
	killall -q vg startNC cuda_vision;true
	
