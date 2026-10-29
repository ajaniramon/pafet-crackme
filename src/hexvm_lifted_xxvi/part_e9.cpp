// Generated literal x64 semantics.
#include "../pafet_hexvm_cpu_xxvi.h"
namespace pafet_xxiv {
bool hexvm_part_e9(Machine& m){auto& c=m.c;auto& next=m.next;switch(m.canonical(c.rip)){
case UINT64_C(0x1403a4c8c): {next=c.rip+5; // jmp 0x1403b0364
next=next+UINT64_C(0xb6d3);
c.rip=next;return true;}
default:return false;
}}
}
