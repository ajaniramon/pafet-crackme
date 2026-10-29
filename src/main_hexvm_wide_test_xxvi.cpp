#include "pafet_hexvm_cpu_xxvi.h"
#include <iostream>
using namespace pafet_xxiv;
int main(){unsigned op;uint64_t a,b,hi;while(std::cin>>std::hex>>op>>a>>b>>hi){
 Machine m;m.c.r[0]=a;m.c.r[3]=b;m.c.r[2]=hi;unsigned status=0;
 const Operand rax{0,0,64,0,-1,-1,1,0,0,0},rbx{0,3,64,0,-1,-1,1,0,0,0};
 try{switch(op){
 case 0:m.signed_multiply_accumulator(b);break;
 case 1:m.mul(rbx);break;
 case 2:m.divide(rbx);break;
 case 3:m.signed_divide_accumulator(b);break;
 case 4:m.imul(rax,rax,rbx);break;
 case 5:m.c.r[0]=m.arithmetic(a,b,64,false);break;
 case 6:m.c.r[0]=m.arithmetic(a,b,64,true);break;
 case 7:{Operand eax=rax,ebx=rbx;eax.bits=ebx.bits=32;m.imul(eax,eax,ebx);break;}
 default:return 2;
 }}catch(const Fault& e){status=e.code;}
 std::cout<<std::hex<<status<<' '<<m.c.r[0]<<' '<<m.c.r[2]<<' '<<m.c.flags<<' '<<m.c.defined<<'\n';
}}
