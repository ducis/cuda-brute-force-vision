#pragma once
#include <boost/interprocess/shared_memory_object.hpp>
#include <boost/interprocess/mapped_region.hpp>
#include <boost/interprocess/sync/interprocess_mutex.hpp>
#include <boost/interprocess/sync/interprocess_condition.hpp>
#include <boost/interprocess/sync/interprocess_upgradable_mutex.hpp>


struct vg_shm_header{
	const unsigned self_size;
	//boost::interprocess::interprocess_upgradable_mutex mtx;
	boost::interprocess::interprocess_mutex mtx;
	boost::interprocess::interprocess_condition readable,writable;
	int pending_reads,requested_reads;
	unsigned w,h,sz;//,stride;
	vg_shm_header():self_size(sizeof(vg_shm_header)),pending_reads(0),requested_reads(0){}
};

