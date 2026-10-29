#include "pafet_native_state_xxiv.h"
using namespace pafet_xxiv;
extern "C" {
void* xxiv_new(){return new Machine;}
void xxiv_delete(void* p){delete static_cast<Machine*>(p);}
int xxiv_map(void* p,uint64_t address,const void* data,size_t size){try{auto& m=*static_cast<Machine*>(p);if(m.memory.count(address))return -1;m.memory[address]=std::vector<uint8_t>(static_cast<const uint8_t*>(data),static_cast<const uint8_t*>(data)+size);return 0;}catch(...){return -1;}}
void xxiv_set_cpu(void* p,const Cpu* c){static_cast<Machine*>(p)->c=*c;}
void xxiv_get_cpu(void* p,Cpu* c){*c=static_cast<Machine*>(p)->c;}
int xxiv_read(void* p,uint64_t a,void* d,size_t n){try{static_cast<Machine*>(p)->bytes(a,d,n);return 0;}catch(...){return -1;}}
int xxiv_write(void* p,uint64_t a,void* d,size_t n){try{static_cast<Machine*>(p)->bytes(a,d,n,true);return 0;}catch(...){return -1;}}
int xxiv_step(void* p){auto& m=*static_cast<Machine*>(p);m.writes.clear();m.status=0;m.error.clear();try{m.step();return 0;}catch(const Fault& e){m.status=e.code;m.fault_address=e.address;m.error=e.what();return e.code;}catch(const std::exception& e){m.status=9;m.error=e.what();return 9;}}
int xxiv_run_until(void* p,uint64_t stop,size_t limit){auto& m=*static_cast<Machine*>(p);for(size_t i=0;i<limit;i++){if(m.c.rip==stop)return 0;int s=xxiv_step(p);if(s)return s;}return 10;}
const char* xxiv_error(void* p){return static_cast<Machine*>(p)->error.c_str();}
uint64_t xxiv_fault_address(void* p){return static_cast<Machine*>(p)->fault_address;}
size_t xxiv_writes(void* p,Write* out,size_t capacity){auto& w=static_cast<Machine*>(p)->writes;size_t n=std::min(capacity,w.size());std::copy(w.begin(),w.begin()+n,out);return w.size();}
}
