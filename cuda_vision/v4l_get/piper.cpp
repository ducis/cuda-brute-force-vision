#define BOOST_DATE_TIME_NO_LIB
#include "comm.hpp"
int main(int argc,char **argv){
	using namespace boost::interprocess;
#define DPRINTF(...) if(debug_info){ fprintf(stderr,__VA_ARGS__); fflush(stderr); }
	const char *shared_mem_name = argv[1];
	assert(argc>=2);
	while (access(shared_mem_name,F_OK)==ENOENT) {
		fprintf(stderr,"ACCESS %d",access(shared_mem_name,F_OK));
		fflush(stderr);
		sleep(1);
	};
	bool debug_info = argc>2;
	shared_memory_object shm(open_only,shared_mem_name,read_write);

	mapped_region region(shm,read_write);
	vg_shm_header *hdr = (vg_shm_header*)region.get_address();
	assert(sizeof(vg_shm_header)==hdr->self_size);
	assert(region.get_size()==hdr->self_size+hdr->sz);
	bool go=true;

	while(go){
		scoped_lock<interprocess_mutex> ___ll(hdr->mtx); //only one reader allowed.
		if(!hdr->pending_reads) {  hdr->readable.wait(___ll);  }
		assert(hdr->pending_reads>0);
		DPRINTF("%d: piper starts reading.\n",getpid());
		int r=fwrite((char*)(hdr+1),1,hdr->sz,stdout);
		fflush(stdout);
		DPRINTF("%d: piper ends reading.\n",getpid());
		if(r<hdr->sz&&ferror(stdout)){
			DPRINTF("%d: %d of %d bytes output.",getpid(),r,hdr->sz);
			perror("fwrite");
		}
		assert(r==hdr->sz);
		--hdr->pending_reads;
		++hdr->requested_reads;
		hdr->writable.notify_one();
	}
}

