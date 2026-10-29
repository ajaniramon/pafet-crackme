// Generated literal x64 semantics.
#include "../pafet_hexvm_cpu_xxvi.h"
namespace pafet_xxiv {
bool hexvm_part_ee(Machine& m){auto& c=m.c;auto& next=m.next;switch(m.canonical(c.rip)){
case UINT64_C(0x1403b9d0c): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x1403b9d0f): {next=c.rip+2; // je 0x1403b9d47
if(m.condition(0))next=next+UINT64_C(0x36);
c.rip=next;return true;}
case UINT64_C(0x1403b9d11): {next=c.rip+1; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403b9d12): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1403b9d16): {next=c.rip+3; // mov r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403b9d19): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1403b9d1b): {next=c.rip+7; // mov rcx, qword ptr [rip + 0x674ee]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,16,-1,1,0,423150,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403b9d22): {next=c.rip+6; // call qword ptr [rip + 0x134c0]
{uint64_t target=m.get(Operand{2,0,64,0,16,-1,1,0,79040,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1403b9d28): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x1403b9d2a): {next=c.rip+2; // jne 0x1403b9d42
if(m.condition(1))next=next+UINT64_C(0x16);
c.rip=next;return true;}
case UINT64_C(0x1403b9d2c): {next=c.rip+6; // call qword ptr [rip + 0x13436]
{uint64_t target=m.get(Operand{2,0,64,0,16,-1,1,0,78902,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1403b9d32): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403b9d34): {next=c.rip+5; // call 0x1403b0104
{uint64_t target=next+UINT64_C(0xffffffffffff63cb);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1403b9d39): {next=c.rip+2; // mov ebx, eax
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403b9d3b): {next=c.rip+5; // call 0x1403b01d8
{uint64_t target=next+UINT64_C(0xffffffffffff6498);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1403b9d40): {next=c.rip+2; // mov dword ptr [rax], ebx
m.put(Operand{2,0,32,0,0,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403b9d42): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1403b9d46): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1403b9d47): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
default:return false;
}}
}
