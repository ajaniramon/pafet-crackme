// Generated literal x64 semantics.
#include "../pafet_hexvm_cpu_xxvi.h"
namespace pafet_xxiv {
bool hexvm_part_f2(Machine& m){auto& c=m.c;auto& next=m.next;switch(m.canonical(c.rip)){
case UINT64_C(0x1403ca648): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rdx
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403ca64d): {next=c.rip+1; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403ca64e): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1403ca652): {next=c.rip+3; // mov rbp, rdx
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403ca655): {next=c.rip+7; // inc qword ptr [rbp + 0x648]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,5,-1,1,0,1608,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,5,-1,1,0,1608,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1403ca65c): {next=c.rip+7; // mov rdx, qword ptr [rbp + 0x178]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,376,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403ca663): {next=c.rip+3; // mov rdx, qword ptr [rdx]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403ca666): {next=c.rip+7; // lea rcx, [rbp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403ca66d): {next=c.rip+5; // call 0x14004c6f0
{uint64_t target=next+UINT64_C(0xffffffffffc8207e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1403ca672): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x1403ca673): {next=c.rip+10; // movabs rax, 0
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403ca67d): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1403ca681): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1403ca682): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
default:return false;
}}
}
