#pragma once
// Hex-VM CPU runtime, derived from XXIV with portable wide arithmetic.
#ifdef _MSC_VER
#include <intrin.h>
#endif
#include <array>
#include <cstdint>
#include <cstring>
#include <map>
#include <stdexcept>
#include <vector>
#include <string>
#include <limits>

namespace pafet_xxiv {
inline uint64_t wide_unsigned_product(uint64_t a,uint64_t b,uint64_t& hi){
#ifdef _MSC_VER
 return _umul128(a,b,&hi);
#else
 __uint128_t p=__uint128_t(a)*b;hi=uint64_t(p>>64);return uint64_t(p);
#endif
}
inline uint64_t wide_signed_product(int64_t a,int64_t b,int64_t& hi){
#ifdef _MSC_VER
 return uint64_t(_mul128(a,b,&hi));
#else
 __int128 p=__int128(a)*b;hi=int64_t(p>>64);return uint64_t(p);
#endif
}
inline uint64_t wide_unsigned_quotient(uint64_t hi,uint64_t lo,uint64_t d,uint64_t& remainder){
#ifdef _MSC_VER
 return _udiv128(hi,lo,d,&remainder);
#else
 __uint128_t v=(__uint128_t(hi)<<64)|lo;remainder=uint64_t(v%d);return uint64_t(v/d);
#endif
}

constexpr uint64_t CF=1,PF=4,AF=16,ZF=64,SF=128,OF=2048,ARITH=CF|PF|AF|ZF|SF|OF;
struct Operand {int kind,reg,bits,shift,base,index,scale,segment;int64_t displacement;uint64_t immediate;};
struct Cpu {uint64_t r[16]{},rip=0,flags=2,defined=ARITH,runtime_base=0,gs_base=0;uint8_t xmm[16][16]{};};
struct Write {uint64_t address;uint32_t size;uint8_t bytes[16];};
struct Fault:std::runtime_error {int code;uint64_t address;Fault(int c,uint64_t a,const char* s):std::runtime_error(s),code(c),address(a){}};
struct Machine {
 Cpu c;std::map<uint64_t,std::vector<uint8_t>> memory;std::vector<Write> writes;uint64_t next=0;int status=0;uint64_t fault_address=0;std::string error;
 static uint64_t mask(unsigned n){return n==64?~uint64_t(0):(uint64_t(1)<<n)-1;}
 void bytes(uint64_t address,void* dst,size_t size,bool write=false){
  size_t done=0;while(done<size){auto it=memory.upper_bound(address+done);if(it==memory.begin())throw Fault(2,address+done,"unmapped memory");--it;
   size_t off=size_t(address+done-it->first);if(off>=it->second.size())throw Fault(2,address+done,"unmapped memory");
   size_t count=std::min(size-done,it->second.size()-off);
   if(write)std::memcpy(it->second.data()+off,static_cast<uint8_t*>(dst)+done,count);
   else std::memcpy(static_cast<uint8_t*>(dst)+done,it->second.data()+off,count);
   done+=count;
  }
 }
 uint64_t load(uint64_t a,unsigned bits){uint64_t v=0;bytes(a,&v,bits/8);return v;}
 void store(uint64_t a,uint64_t value,unsigned bits){Write w{};w.address=a;w.size=bits/8;std::memcpy(w.bytes,&value,w.size);bytes(a,&value,w.size,true);writes.push_back(w);}
 uint64_t address(const Operand& o){uint64_t v=uint64_t(o.displacement);if(o.base==16)v+=next;else if(o.base>=0)v+=c.r[o.base];if(o.index>=0)v+=c.r[o.index]*o.scale;if(o.segment==1)v+=c.gs_base;return v;}
 uint64_t get(const Operand& o){if(o.kind==0)return (c.r[o.reg]>>o.shift)&mask(o.bits);if(o.kind==1)return o.immediate;if(o.kind==2)return load(address(o),o.bits);throw Fault(3,c.rip,"integer operand expected");}
 void put(const Operand& o,uint64_t value){value&=mask(o.bits);if(o.kind==2){store(address(o),value,o.bits);return;}if(o.kind!=0)throw Fault(3,c.rip,"writable integer expected");
  if(o.bits==64||o.bits==32)c.r[o.reg]=value;else c.r[o.reg]=(c.r[o.reg]&~(mask(o.bits)<<o.shift))|(value<<o.shift);
 }
 void vector_get(const Operand& o,uint8_t* p){if(o.kind==3)std::memcpy(p,c.xmm[o.reg],16);else if(o.kind==2)bytes(address(o),p,16);else throw Fault(3,c.rip,"vector operand expected");}
 void vector_put(const Operand& o,const uint8_t* p){if(o.kind==3)std::memcpy(c.xmm[o.reg],p,16);else if(o.kind==2){Write w{};w.address=address(o);w.size=16;std::memcpy(w.bytes,p,16);bytes(w.address,w.bytes,16,true);writes.push_back(w);}else throw Fault(3,c.rip,"vector destination expected");}
 bool flag(uint64_t f){if((c.defined&f)!=f)throw Fault(3,c.rip,"branch consumes architecturally undefined flags");return (c.flags&f)!=0;}
 void bit(uint64_t f,bool b){c.flags=(c.flags&~f)|(b?f:0);c.defined|=f;}
 void zsp(uint64_t x,unsigned n){x&=mask(n);bit(ZF,x==0);bit(SF,(x>>(n-1))!=0);unsigned v=unsigned(x)&255;unsigned parity=0;for(;v;v>>=1)parity^=v&1;bit(PF,parity==0);}
 uint64_t logic(uint64_t x,unsigned n){x&=mask(n);bit(CF,false);bit(OF,false);c.defined&=~AF;zsp(x,n);return x;}
 uint64_t arithmetic(uint64_t a,uint64_t b,unsigned n,bool sub){a&=mask(n);b&=mask(n);uint64_t x=(sub?a-b:a+b)&mask(n);bit(CF,sub?a<b:a>mask(n)-b);bit(AF,((a^b^x)&16)!=0);uint64_t sign=uint64_t(1)<<(n-1);bit(OF,sub?((a^b)&(a^x)&sign)!=0:((~(a^b))&(a^x)&sign)!=0);zsp(x,n);return x;}
 bool condition(int cc){switch(cc){case 0:return flag(ZF);case 1:return !flag(ZF);case 2:return flag(CF);case 3:return !flag(CF);case 4:return flag(CF)||flag(ZF);case 5:return !flag(CF)&&!flag(ZF);case 6:return flag(SF)!=flag(OF);case 7:return flag(ZF)||(flag(SF)!=flag(OF));case 8:return !flag(ZF)&&(flag(SF)==flag(OF));case 9:return flag(SF)==flag(OF);case 10:return flag(SF);case 11:return !flag(SF);case 12:return flag(OF);case 13:return !flag(OF);default:throw Fault(3,c.rip,"unsupported condition");}}
 int64_t signed_value(uint64_t v,unsigned n){if(n==64)return int64_t(v);v&=mask(n);return int64_t((v^(uint64_t(1)<<(n-1)))-(uint64_t(1)<<(n-1)));}
 void imul(Operand dst,Operand a,Operand b){unsigned n=dst.bits;int64_t hi;uint64_t full=wide_signed_product(signed_value(get(a),n),signed_value(get(b),n),hi),low=full&mask(n);c.defined&=~ARITH;bool overflow=full!=uint64_t(signed_value(low,n))||hi!=(int64_t(full)<0?-1:0);bit(CF,overflow);bit(OF,overflow);put(dst,low);}
 void mul(Operand a){unsigned n=a.bits;uint64_t high;uint64_t full=wide_unsigned_product(c.r[0]&mask(n),get(a),high),lo=full&mask(n),hi=n==64?high:(full>>n)&mask(n);put({0,0,int(n),0,-1,-1,1,0,0,0},lo);put({0,2,int(n),0,-1,-1,1,0,0,0},hi);c.defined&=~ARITH;bit(CF,hi!=0);bit(OF,hi!=0);}
 void divide(Operand a){unsigned n=a.bits;uint64_t d=get(a);if(!d)throw Fault(4,c.rip,"division by zero");uint64_t hi=c.r[2]&mask(n),lo=c.r[0]&mask(n),q,rem;if(n==64){if(hi>=d)throw Fault(4,c.rip,"division overflow");q=wide_unsigned_quotient(hi,lo,d,rem);}else{uint64_t v=(hi<<n)|lo;q=v/d;rem=v%d;if(q>mask(n))throw Fault(4,c.rip,"division overflow");}put({0,0,int(n),0,-1,-1,1,0,0,0},q);put({0,2,int(n),0,-1,-1,1,0,0,0},rem);c.defined&=~ARITH;}
 void shift(Operand dst,Operand amount,int kind){unsigned n=dst.bits,count=unsigned(get(amount))&(n==64?63:31);if(!count)return;uint64_t a=get(dst),v=0;
  if(kind<2){bool left=kind==0;v=count>=n?0:(left?(a<<count)&mask(n):a>>count);c.defined&=~AF;if(count<=n)bit(CF,left?((a>>(n-count))&1):((a>>(count-1))&1));else c.defined&=~CF;
   if(count==1)bit(OF,left?(((v>>(n-1))&1)!=((a>>(n-1))&1)):((a>>(n-1))&1));else c.defined&=~OF;zsp(v,n);
  }else{count%=n;if(!count)return;bool left=kind==2;v=left?((a<<count)|(a>>(n-count)))&mask(n):((a>>count)|(a<<(n-count)))&mask(n);bit(CF,left?(v&1):((v>>(n-1))&1));if(count==1)bit(OF,left?(((v>>(n-1))&1)!=(v&1)):(((v>>(n-1))^(v>>(n-2)))&1));else c.defined&=~OF;}
  put(dst,v);
 }
 void bitop(Operand dst,Operand index,bool set){uint64_t i=get(index),value=get(dst);i%=dst.bits;bit(CF,(value>>i)&1);c.defined&=~(OF|SF|AF|PF);put(dst,set?value|(uint64_t(1)<<i):value&~(uint64_t(1)<<i));}
 void push(uint64_t v){c.r[4]-=8;store(c.r[4],v,64);}uint64_t pop(){uint64_t v=load(c.r[4],64);c.r[4]+=8;return v;}
 uint64_t canonical(uint64_t pc)const{return c.runtime_base&&pc>=c.runtime_base&&pc<c.runtime_base+0x460000?pc-c.runtime_base+0x140000000:pc;}
 bool trampoline(){
  const uint64_t p=c.rip;const uint8_t a=uint8_t(load(p,8)),b=uint8_t(load(p+1,8));
  if(a==0x48&&b==0xb8){c.r[0]=load(p+2,64);c.rip=p+10;return true;}
  if(a==0xff&&b==0xe0){c.rip=c.r[0];return true;}
  if(a==0x48&&b==0xf7&&load(p+2,8)==0xd0){c.r[0]=~c.r[0];c.rip=p+3;return true;}
  if(a==0x4c&&b==0x8b&&load(p+2,8)==0x1d){c.r[11]=load(p+7+int32_t(load(p+3,32)),64);c.rip=p+7;return true;}
  if(a==0x4c&&(b==0x31||b==0x01)&&load(p+2,8)==0xd8){c.r[0]=b==0x31?logic(c.r[0]^c.r[11],64):arithmetic(c.r[0],c.r[11],64,false);c.rip=p+3;return true;}
  return false;
 }
 void signed_multiply_accumulator(uint64_t value){int64_t hi;uint64_t lo=wide_signed_product(int64_t(c.r[0]),int64_t(value),hi);c.r[0]=lo;c.r[2]=uint64_t(hi);c.defined&=~ARITH;bool overflow=hi!=(int64_t(lo)<0?-1:0);bit(CF,overflow);bit(OF,overflow);}
 void signed_divide_accumulator(uint64_t divisor){
  if(!divisor)throw Fault(4,c.rip,"signed division by zero");
  uint64_t hi=c.r[2],lo=c.r[0];const bool negative=(hi>>63)!=0,divisor_negative=(divisor>>63)!=0;
  if(negative){hi=~hi+uint64_t(lo==0);lo=0-lo;}
  uint64_t d=divisor_negative?0-divisor:divisor,rem=0;
  if(hi>=d)throw Fault(4,c.rip,"signed quotient overflow");
  uint64_t q=wide_unsigned_quotient(hi,lo,d,rem);bool sign=negative!=divisor_negative;
  if(q>(sign?UINT64_C(0x8000000000000000):UINT64_C(0x7fffffffffffffff)))throw Fault(4,c.rip,"signed quotient overflow");
  c.r[0]=sign?0-q:q;c.r[2]=negative?0-rem:rem;c.defined&=~ARITH;
 }
 void step();
};
}
