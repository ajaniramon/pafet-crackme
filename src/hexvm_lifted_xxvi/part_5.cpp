// Generated literal x64 semantics.
#include "../pafet_hexvm_cpu_xxvi.h"
namespace pafet_xxiv {
bool hexvm_part_5(Machine& m){auto& c=m.c;auto& next=m.next;switch(m.canonical(c.rip)){
case UINT64_C(0x140015810): {next=c.rip+3; // ret 0
next=m.pop();
c.rip=next;return true;}
default:return false;
}}
}
