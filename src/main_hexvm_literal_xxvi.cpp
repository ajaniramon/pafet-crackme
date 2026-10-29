#include "pafet_hexvm_cpu_xxvi.h"
#include "pafet_hexvm_host_xxvi.h"
#include <fstream>
#include <iostream>
using namespace pafet_xxiv;
static uint64_t read64(std::istream& f){uint64_t x;f.read(reinterpret_cast<char*>(&x),8);if(!f)throw std::runtime_error("truncated input");return x;}
static void write64(std::ostream& f,uint64_t x){f.write(reinterpret_cast<const char*>(&x),8);}
int main(int argc,char** argv){
 if(argc!=3)return 2;
 try{
  std::ifstream in(argv[1],std::ios::binary);Machine m;
  for(auto& r:m.c.r)r=read64(in);
  m.c.rip=read64(in);const uint64_t stop=read64(in);m.c.runtime_base=read64(in);
  const uint64_t limit=read64(in),count=read64(in);
  for(uint64_t i=0;i<count;i++){uint64_t p=read64(in),n=read64(in);auto& b=m.memory[p];b.resize(n);in.read(reinterpret_cast<char*>(b.data()),n);if(!in)throw std::runtime_error("truncated memory");}
  HexHost host(m);bool full=in.peek()!=std::char_traits<char>::eof();
  if(full){host.cookie=read64(in);m.store(m.c.runtime_base+0x40d020,host.cookie,64);m.c.gs_base=0x50000000;m.memory[m.c.gs_base].resize(4096);m.store(m.c.gs_base+0x58,read64(in),64);uint64_t n=read64(in);for(uint64_t i=0;i<n;i++)host.clocks.push_back({read64(in),read64(in)});n=read64(in);for(uint64_t i=0;i<n;i++){std::array<uint64_t,6> row;for(auto& v:row)v=read64(in);host.expected_pushes.push_back(row);}}
  uint64_t steps=0,status=0;
  try{while(m.c.rip!=stop&&steps<limit){m.writes.clear();if(!full||!host.step())m.step();++steps;}if(m.c.rip!=stop)throw Fault(10,m.c.rip,"instruction budget exhausted");}
  catch(const Fault& e){status=e.code;m.fault_address=e.address;m.error=e.what();}
  std::ofstream out(argv[2],std::ios::binary);write64(out,status);write64(out,steps);
  for(auto r:m.c.r)write64(out,r);
  for(auto r:{m.c.rip,m.c.flags,m.c.defined,m.fault_address})write64(out,r);
  write64(out,m.memory.size());for(const auto& [p,b]:m.memory){write64(out,p);write64(out,b.size());out.write(reinterpret_cast<const char*>(b.data()),b.size());}
  if(status){std::cerr<<m.error<<" at "<<std::hex<<m.c.rip<<" address "<<m.fault_address<<'\n';return 1;}
  if(full){if(host.push_index!=host.expected_pushes.size()||host.clock_index!=host.clocks.size())throw std::runtime_error("unconsumed transcript");std::cout<<"steps "<<steps<<" pushes "<<host.push_index<<" callbacks "<<host.callbacks<<" exceptions "<<host.exceptions<<" native_pcs "<<host.executed.size()<<'\n';}
 }catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
