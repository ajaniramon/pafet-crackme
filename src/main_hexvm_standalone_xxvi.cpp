#include "pafet_hexvm_host_xxvi.h"
#include <fstream>
#include <iostream>
#include <iterator>
using namespace pafet_xxiv;
int main(int argc,char** argv){
 if(argc!=3){std::cerr<<"usage: hexvm_standalone mapped_image.bin ascii_hex\n";return 2;}
 try{
  const uint64_t base=UINT64_C(0x140000000),sentinel=UINT64_C(0xf0001000);
  Machine m;std::ifstream image(argv[1],std::ios::binary);if(!image)throw std::runtime_error("missing image data");
  m.memory[base]=std::vector<uint8_t>(std::istreambuf_iterator<char>(image),{});
  m.memory[0x10000000].resize(0x100000);
  for(uint64_t p:{0x21000000,0x22000000,0x23000000,0x24000000,0x25000000,0x26000000,0x27000000})m.memory[p].resize(4096);
  m.c.runtime_base=base;m.c.r[4]=0x100ff008;m.c.r[1]=0x21000000;m.c.r[8]=0x22000000;
  m.store(m.c.r[4],sentinel,64);m.c.rip=base+0x804c0;
  HexHost host(m);host.verify_pushes=false;host.replay_clocks=false;host.cookie=m.load(base+0x40d020,64);
  m.c.gs_base=0x50000000;m.memory[0x50000000].resize(0x6000);m.store(0x50000058,0x50001000,64);m.store(0x50001000,0x50002000,64);
  m.store(0x22000000,base+0x3f1ba0,64);
  const uint64_t fields[]={0x23000000,0x24000000,0x25000000,0x26000000,0x27000000};
  for(unsigned i=0;i<5;i++)m.store(0x22000008+8*i,fields[i],64);
  m.store(0x22000038,0x22000000,64);
  for(uint64_t p:{0x24000000,0x26000000,0x27000000})m.store(p+24,15,64);
  host.assign(0x24000000,argv[2]);
  uint64_t steps=0;
  while(m.c.rip!=sentinel&&steps<500000000){m.writes.clear();if(!host.step())m.step();++steps;}
  if(m.c.rip!=sentinel)throw Fault(10,m.c.rip,"standalone instruction budget exhausted");
  const std::string result=host.string(0x27000000);
  std::cout<<"output ";for(unsigned char b:result)std::cout<<std::hex<<std::setfill('0')<<std::setw(2)<<unsigned(b);
  std::cout<<"\nregisters ";for(unsigned i=0;i<128;i++)std::cout<<std::hex<<std::setfill('0')<<std::setw(2)<<unsigned(m.load(0x21000000+i,8));
  std::cout<<"\nsteps "<<std::dec<<steps<<" pushes "<<host.push_index<<" callbacks "<<host.callbacks<<" exceptions "<<host.exceptions<<" return "<<m.c.r[0]<<'\n';
 }catch(const Fault& e){std::cerr<<e.what()<<" at "<<std::hex<<e.address<<'\n';return 1;}
 catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
