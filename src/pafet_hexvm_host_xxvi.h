#pragma once
#include "pafet_hexvm_cpu_xxvi.h"
#include <sstream>
#include <iomanip>
#include <set>

// Host boundaries of the literal executor. All VM instructions remain in the
// generated translation. QPC values are external inputs, never VM state.
namespace pafet_xxiv {
struct HexHost {
 Machine& m;
 struct Clock {uint64_t rva,value;};
 std::vector<Clock> clocks;
 std::vector<std::array<uint64_t,6>> expected_pushes;
 size_t clock_index=0,push_index=0,callbacks=0,exceptions=0;
 bool verify_pushes=true,replay_clocks=true;
 uint64_t deterministic_tick=1000;
 uint64_t cookie=0,heap=UINT64_C(0x700000000000),callback_object=0;
 Cpu continuation{};bool catching=false;
 std::set<uint64_t> executed;
 explicit HexHost(Machine& machine):m(machine){}
 uint64_t q(uint64_t p){return m.load(p,64);}
 uint64_t d(uint64_t p){return m.load(p,32);}
 void put(uint64_t p,uint64_t v,unsigned bits=64){m.store(p,v,bits);}
 uint64_t alloc(size_t n){uint64_t p=heap;heap+=(n+4095)&~uint64_t(4095);m.memory[p].resize((n+4095)&~size_t(4095));return p;}
 std::string string(uint64_t p){size_t n=q(p+16);if(n>4096)throw Fault(9,p,"host string exceeds bound");std::string s(n,'\0');m.bytes(q(p+24)>=16?q(p):p,s.data(),n);return s;}
 void assign(uint64_t p,const std::string& s){
  uint64_t cap=q(p+24),dst=cap>=16?q(p):p;
  if(s.size()>cap){cap=std::max(uint64_t(s.size())|15,cap+cap/2);dst=alloc(cap+1);put(p,dst);put(p+24,cap);}
  if(!s.empty())m.bytes(dst,const_cast<char*>(s.data()),s.size(),true);
  put(dst+s.size(),0,8);put(p+16,s.size());
 }
 void callback(){
  const uint64_t p=m.c.r[1],op=uint32_t(m.c.r[2]),arg=m.c.r[8];callback_object=p;uint64_t result=0;
  const uint64_t position=q(p),source=q(p+8),value=q(p+16),output=q(p+24);
  switch(op){
   case 0:put(position,q(arg));break;
   case 1:result=q(position)<q(source+16);break;
   case 2:{const std::string input=string(source);const size_t pos=q(position);if(pos>input.size())throw Fault(9,p,"callback substring out of range");
    std::istringstream stream(input.substr(pos,2));uint32_t number=0;stream>>std::hex>>number;put(value,number,32);break;}
   case 3:{std::string s=string(output);s.push_back(char(m.load(value,8)));assign(output,s);break;}
   case 4:result=q(position);break;
   case 5:{const uint64_t copy=q(p+32);put(copy+16,0);put(copy+24,15);put(copy,0,8);assign(copy,string(output));put(copy+32,1,8);break;}
   default:throw Fault(9,p,"unsupported callback operation");
  }
  ++callbacks;m.c.r[0]=result;m.c.rip=m.pop();
 }
 void unwind_frame(Cpu& cpu,uint64_t pc){
  const uint64_t base=cpu.runtime_base;
  const uint64_t nt=base+d(base+0x3c),table=base+d(nt+24+112+3*8),size=d(nt+24+112+3*8+4);
  uint64_t unwind=0;
  for(uint64_t off=0;off<size;off+=12)if(base+d(table+off)<=pc&&pc<base+d(table+off+4)){unwind=base+d(table+off+8);break;}
  if(unwind){
   if((m.load(unwind,8)>>3)&4)throw Fault(9,unwind,"chained unwind not implemented");
   const uint64_t sp=cpu.r[4];uint64_t at=unwind+4,end=at+2*m.load(unwind+2,8);
   while(at<end){uint64_t b=m.load(at+1,8),op=b&15,info=b>>4;at+=2;
    if(op==0){cpu.r[info]=q(cpu.r[4]);cpu.r[4]+=8;}
    else if(op==1){if(info==0){cpu.r[4]+=m.load(at,16)*8;at+=2;}else{cpu.r[4]+=d(at);at+=4;}}
    else if(op==2)cpu.r[4]+=info*8+8;
    else if(op==3){uint64_t f=m.load(unwind+3,8);cpu.r[4]=cpu.r[f&15]-(f>>4)*16;}
    else if(op==4){cpu.r[info]=q(sp+m.load(at,16)*8);at+=2;}
    else if(op==5){cpu.r[info]=q(sp+d(at));at+=4;}
    else if(op==8){m.bytes(sp+m.load(at,16)*16,cpu.xmm[info],16);at+=2;}
    else if(op==9){m.bytes(sp+d(at),cpu.xmm[info],16);at+=4;}
    else throw Fault(9,at,"unsupported unwind opcode");
   }
  }
 }
 void throw_payload(){
  if(catching)throw Fault(9,m.c.rip,"nested catch unsupported");
  const uint64_t object=m.c.r[1],type=m.c.r[2];
  // This exception adapter is deliberately restricted to the audited qword
  // queue payload. Other types fail instead of being swallowed.
  if(type!=m.c.runtime_base+0x40b298)throw Fault(9,type,"unexpected throw type");
  Cpu v=m.c;uint64_t pc=q(v.r[4]);v.r[4]+=8;
  bool found=false;
  for(unsigned depth=0;depth<64;depth++){
   unwind_frame(v,pc);pc=q(v.r[4]);v.r[4]+=8;
   if(pc>=m.c.runtime_base+0x804c0&&pc<m.c.runtime_base+0x889e0){found=true;break;}
  }
  if(!found)throw Fault(9,pc,"no enclosing Hex-VM catch");
  const uint64_t frame=v.r[4];put(frame+0x178,object);
  continuation=v;continuation.rip=m.c.runtime_base+0x88990;
  m.c=v;m.c.r[2]=frame;m.c.r[4]-=0x108;m.push(UINT64_C(0xf0000000));m.c.rip=m.c.runtime_base+0x3ca648;catching=true;++exceptions;
 }
 bool step(){
  const uint64_t pc=m.canonical(m.c.rip),base=m.c.runtime_base;executed.insert(pc);
  if(m.c.rip==UINT64_C(0xf0000000)){if(!catching)throw Fault(9,m.c.rip,"unexpected catch return");m.c=continuation;catching=false;return true;}
  if(pc==UINT64_C(0x14004c880)){
   if(verify_pushes&&push_index>=expected_pushes.size())throw Fault(9,m.c.rip,"extra queue push");
   const uint64_t ctx=m.c.r[1];std::array<uint64_t,6> got={uint32_t(m.c.r[2]),q(ctx+0x4b0),q(ctx+0x230),q(ctx+0x940),q(ctx+0x4c0),d(ctx+0x4b8)};
   if(verify_pushes&&got!=expected_pushes[push_index]){std::ostringstream s;s<<"push divergence "<<push_index;for(size_t i=0;i<6;i++)if(got[i]!=expected_pushes[push_index][i])s<<" field "<<i<<" got "<<std::hex<<got[i]<<" expected "<<expected_pushes[push_index][i];throw std::runtime_error(s.str());}
   ++push_index;
  }
  if(pc==UINT64_C(0x140088a00)){callback();return true;}
  if(pc==UINT64_C(0x1403a1474)||pc==UINT64_C(0x1403a1490)){
   if(replay_clocks){if(clock_index>=clocks.size()||clocks[clock_index].rva!=pc-UINT64_C(0x140000000))throw Fault(9,m.c.rip,"clock transcript mismatch");m.c.r[0]=clocks[clock_index++].value;}
   else {m.c.r[0]=pc==UINT64_C(0x1403a1490)?10000000:deterministic_tick;deterministic_tick+=1000;}
   m.c.rip=m.pop();return true;
  }
  if(pc==UINT64_C(0x1403a3dc0)){if(m.c.r[1]!=cookie)throw Fault(9,m.c.rip,"security cookie mismatch");m.c.rip=m.pop();return true;}
  if(pc==UINT64_C(0x1403a5fa0)){throw_payload();return true;}
  if(pc==UINT64_C(0x14007fb01)){m.c.r[0]=1;m.c.rip+=6;return true;} // VirtualFree at this import boundary
  if(pc==UINT64_C(0x14007fa9a)){m.c.r[0]=alloc(m.c.r[2]);m.c.rip+=6;return true;} // VirtualAlloc
  if(pc==UINT64_C(0x1403a4080)){m.c.r[0]=alloc(m.c.r[1]);m.c.rip=m.pop();return true;}
  if(pc==UINT64_C(0x1403a3de0)){m.c.rip=m.pop();return true;} // sized delete; arena lifetime covers this run
  if(pc==UINT64_C(0x1403a49a0)){m.c.rip=m.pop();return true;} // stack pages are already mapped
  if(pc==UINT64_C(0x1403a6070)){std::vector<uint8_t> bytes(m.c.r[8]);m.bytes(m.c.r[2],bytes.data(),bytes.size());m.bytes(m.c.r[1],bytes.data(),bytes.size(),true);m.c.r[0]=m.c.r[1];m.c.rip=m.pop();return true;}
  if(pc==UINT64_C(0x1403a6720)){std::vector<uint8_t> bytes(m.c.r[8],uint8_t(m.c.r[2]));m.bytes(m.c.r[1],bytes.data(),bytes.size(),true);m.c.r[0]=m.c.r[1];m.c.rip=m.pop();return true;}
  (void)base;return false;
 }
};
}
