// Generated literal x64 semantics.
#include "../pafet_hexvm_cpu_xxvi.h"
namespace pafet_xxiv {
bool hexvm_part_ec(Machine& m){auto& c=m.c;auto& next=m.next;switch(m.canonical(c.rip)){
case UINT64_C(0x1403b0364): {next=c.rip+8; // mov dword ptr [rsp + 0x10], 0
m.put(Operand{2,0,32,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403b036c): {next=c.rip+4; // mov eax, dword ptr [rsp + 0x10]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403b0370): {next=c.rip+5; // jmp 0x1403b9d0c
next=next+UINT64_C(0x9997);
c.rip=next;return true;}
default:return false;
}}
}
