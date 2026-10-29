// Generated literal x64 semantics.
#include "../pafet_hexvm_cpu_xxvi.h"
namespace pafet_xxiv {
bool hexvm_part_21(Machine& m){auto& c=m.c;auto& next=m.next;switch(m.canonical(c.rip)){
case UINT64_C(0x140084001): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084006): {next=c.rip+10; // nop word ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x140084010): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084015): {next=c.rip+4; // cmp rax, 2
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140084019): {next=c.rip+2; // jae 0x140084041
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x14008401b): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084020): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084025): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084028): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7e013);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008402d): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084032): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084037): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14008403a): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008403f): {next=c.rip+2; // jmp 0x140084010
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x140084041): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084046): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x3086c89
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3086c89)}));
c.rip=next;return true;}
case UINT64_C(0x14008404f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084054): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084059): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008405e): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140084061): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084066): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008406b): {next=c.rip+6; // add rax, 0x378d95
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x378d95)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084071): {next=c.rip+5; // jmp 0x140083763
next=next+UINT64_C(0xfffffffffffff6ed);
c.rip=next;return true;}
case UINT64_C(0x140084076): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008407e): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084086): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7dfb5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008408b): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084090): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084095): {next=c.rip+5; // mov eax, 0xe9e8d271
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xe9e8d271)}));
c.rip=next;return true;}
case UINT64_C(0x14008409a): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rax
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008409f): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400840a4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400840a9): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400840ac): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400840b1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400840b6): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400840b9): {next=c.rip+3; // or rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400840bc): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400840c1): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400840c6): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400840ce): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400840d3): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400840db): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400840de): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400840e6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400840eb): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400840f3): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400840f8): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400840fd): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084105): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008410a): {next=c.rip+8; // and rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084112): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140084115): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008411d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084122): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xab0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008412a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008412f): {next=c.rip+8; // and rax, qword ptr [rsp + 0xab0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084137): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008413a): {next=c.rip+8; // mov qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084142): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084147): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008414f): {next=c.rip+4; // xor rcx, 0x14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x14)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084153): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7dee8);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140084158): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084160): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084168): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008416b): {next=c.rip+6; // mov r8d, 0xc5c4c
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc5c4c)}));
c.rip=next;return true;}
case UINT64_C(0x140084171): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084179): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc8e72);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008417e): {next=c.rip+5; // mov ebx, 0xb0610f6f
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xb0610f6f)}));
c.rip=next;return true;}
case UINT64_C(0x140084183): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084188): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008418d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084192): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084197): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008419a): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008419f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400841a4): {next=c.rip+6; // add rax, 0x1d88b9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1d88b9)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400841aa): {next=c.rip+5; // jmp 0x140083763
next=next+UINT64_C(0xfffffffffffff5b4);
c.rip=next;return true;}
case UINT64_C(0x1400841af): {next=c.rip+9; // movzx r8d, byte ptr [rsp + 0x1324]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,4900,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400841b8): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400841c0): {next=c.rip+4; // cmp r8d, 0x3e
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3e)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400841c4): {next=c.rip+2; // jae 0x14008420d
if(m.condition(3))next=next+UINT64_C(0x47);
c.rip=next;return true;}
case UINT64_C(0x1400841c6): {next=c.rip+8; // inc qword ptr [rsp + 0x1208]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,4,-1,1,0,4616,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,4616,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400841ce): {next=c.rip+5; // mov ebx, 4
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4)}));
c.rip=next;return true;}
case UINT64_C(0x1400841d3): {next=c.rip+8; // cmp dword ptr [rsp + 0xa4], 0
m.arithmetic(m.get(Operand{2,0,32,0,4,-1,1,0,164,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400841db): {next=c.rip+5; // mov eax, 0x80000004
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x80000004)}));
c.rip=next;return true;}
case UINT64_C(0x1400841e0): {next=c.rip+3; // cmovne ebx, eax
if(m.condition(1))m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400841e3): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400841e5): {next=c.rip+5; // call 0x14004da40
{uint64_t target=next+UINT64_C(0xfffffffffffc9856);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400841ea): {next=c.rip+3; // mov r8d, eax
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400841ed): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400841ef): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400841f7): {next=c.rip+5; // call 0x14007fb40
{uint64_t target=next+UINT64_C(0xffffffffffffb944);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400841fc): {next=c.rip+3; // mov r8, rdi
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400841ff): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084201): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084209): {next=c.rip+2; // call rax
{uint64_t target=m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008420b): {next=c.rip+2; // jmp 0x14008423f
next=next+UINT64_C(0x32);
c.rip=next;return true;}
case UINT64_C(0x14008420d): {next=c.rip+7; // inc dword ptr [rsp + 0x1210]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,4,-1,1,0,4624,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,4,-1,1,0,4624,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140084214): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140084216): {next=c.rip+5; // call 0x140049e60
{uint64_t target=next+UINT64_C(0xfffffffffffc5c45);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008421b): {next=c.rip+5; // mov edx, 1
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x140084220): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084228): {next=c.rip+5; // call 0x140049fa0
{uint64_t target=next+UINT64_C(0xfffffffffffc5d73);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008422d): {next=c.rip+5; // mov edx, 0x2188a4
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}));
c.rip=next;return true;}
case UINT64_C(0x140084232): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008423a): {next=c.rip+5; // call 0x140049af0
{uint64_t target=next+UINT64_C(0xfffffffffffc58b1);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008423f): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084247): {next=c.rip+5; // call 0x140049ee0
{uint64_t target=next+UINT64_C(0xfffffffffffc5c94);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008424c): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14008424e): {next=c.rip+6; // jne 0x140088983
if(m.condition(1))next=next+UINT64_C(0x472f);
c.rip=next;return true;}
case UINT64_C(0x140084254): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008425c): {next=c.rip+5; // call 0x140049a30
{uint64_t target=next+UINT64_C(0xfffffffffffc57cf);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140084261): {next=c.rip+5; // cmp eax, 0x14b3da
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x14b3da)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140084266): {next=c.rip+6; // jne 0x140088983
if(m.condition(1))next=next+UINT64_C(0x4717);
c.rip=next;return true;}
case UINT64_C(0x14008426c): {next=c.rip+5; // mov edx, 0x3edeff
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3edeff)}));
c.rip=next;return true;}
case UINT64_C(0x140084271): {next=c.rip+5; // jmp 0x140081d56
next=next+UINT64_C(0xffffffffffffdae0);
c.rip=next;return true;}
case UINT64_C(0x140084276): {next=c.rip+5; // mov eax, 0xfbace6cf
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xfbace6cf)}));
c.rip=next;return true;}
case UINT64_C(0x14008427b): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084280): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x4ec48a7
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4ec48a7)}));
c.rip=next;return true;}
case UINT64_C(0x140084289): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008428e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084293): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084296): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008429b): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400842a0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400842a5): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400842a8): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400842ab): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400842b0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400842b5): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400842b8): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400842bb): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400842c0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400842c5): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400842cd): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400842d5): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7dd66);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400842da): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400842df): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400842e4): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x15d71239
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x15d71239)}));
c.rip=next;return true;}
case UINT64_C(0x1400842ed): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400842f2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400842f7): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400842fa): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400842ff): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084304): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140084307): {next=c.rip+3; // or rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008430a): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008430f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084314): {next=c.rip+8; // xor qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008431c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084321): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084329): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008432c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084331): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084339): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008433c): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084341): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084346): {next=c.rip+8; // xor qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008434e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084353): {next=c.rip+8; // add qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008435b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084360): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084368): {next=c.rip+4; // xor rcx, 0x29
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x29)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008436c): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7dccf);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140084371): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084379): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084381): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084384): {next=c.rip+6; // mov r8d, 0x1956cf
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1956cf)}));
c.rip=next;return true;}
case UINT64_C(0x14008438a): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084392): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc8c59);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140084397): {next=c.rip+5; // mov ebx, 0x8399e81f
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8399e81f)}));
c.rip=next;return true;}
case UINT64_C(0x14008439c): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400843a1): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x77a0277
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x77a0277)}));
c.rip=next;return true;}
case UINT64_C(0x1400843aa): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400843af): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400843b4): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400843b7): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400843bc): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400843c1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400843c6): {next=c.rip+4; // cmp rax, 2
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400843ca): {next=c.rip+2; // jae 0x1400843f2
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x1400843cc): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400843d1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400843d6): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400843d9): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7dc62);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400843de): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400843e3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400843e8): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400843eb): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400843f0): {next=c.rip+2; // jmp 0x1400843c1
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x1400843f2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400843f7): {next=c.rip+5; // mov ebx, 0xeebc2179
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xeebc2179)}));
c.rip=next;return true;}
case UINT64_C(0x1400843fc): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084401): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084406): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008440b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084410): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140084413): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084418): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008441d): {next=c.rip+6; // and ecx, 0x260a3a
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x260a3a)}),32));
c.rip=next;return true;}
case UINT64_C(0x140084423): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084426): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008442b): {next=c.rip+6; // xor rax, 0x260a3a
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x260a3a)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084431): {next=c.rip+5; // jmp 0x140083760
next=next+UINT64_C(0xfffffffffffff32a);
c.rip=next;return true;}
case UINT64_C(0x140084436): {next=c.rip+5; // mov eax, 0xa92597cd
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa92597cd)}));
c.rip=next;return true;}
case UINT64_C(0x14008443b): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084440): {next=c.rip+5; // mov eax, 0xd2fde0b5
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xd2fde0b5)}));
c.rip=next;return true;}
case UINT64_C(0x140084445): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rax
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008444a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008444f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084454): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084457): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008445c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084461): {next=c.rip+3; // dec rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,true));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140084464): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084469): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008446c): {next=c.rip+3; // movzx eax, cl
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008446f): {next=c.rip+3; // imul eax, edx
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140084472): {next=c.rip+2; // test al, 1
m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140084474): {next=c.rip+2; // je 0x140084486
if(m.condition(0))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x140084476): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008447b): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084481): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084486): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008448b): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084493): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084499): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14008449b): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x14008449e): {next=c.rip+2; // jne 0x1400844d4
if(m.condition(1))next=next+UINT64_C(0x34);
c.rip=next;return true;}
case UINT64_C(0x1400844a0): {next=c.rip+5; // mov eax, 0x92ddec57
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x92ddec57)}));
c.rip=next;return true;}
case UINT64_C(0x1400844a5): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400844aa): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x6ede198f
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x6ede198f)}));
c.rip=next;return true;}
case UINT64_C(0x1400844b3): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400844b8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400844bd): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400844c0): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400844c5): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400844ca): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400844cf): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400844d4): {next=c.rip+5; // mov eax, 0xf7c8f749
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf7c8f749)}));
c.rip=next;return true;}
case UINT64_C(0x1400844d9): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rax
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400844de): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400844e3): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r13
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400844e8): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400844ed): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400844f5): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400844fa): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084502): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140084505): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008450d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084512): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008451a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008451f): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084527): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008452a): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008452f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084534): {next=c.rip+8; // xor qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008453c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084541): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084549): {next=c.rip+4; // xor rcx, 0xe
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xe)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008454d): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7daee);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140084552): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008455a): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084562): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084565): {next=c.rip+6; // mov r8d, 0x8a702
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8a702)}));
c.rip=next;return true;}
case UINT64_C(0x14008456b): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084573): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc8a78);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140084578): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084580): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084583): {next=c.rip+4; // and rax, 0xfffffffffffffffe
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xfffffffffffffffe)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084587): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008458a): {next=c.rip+4; // cmp rcx, 2
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14008458e): {next=c.rip+2; // jae 0x1400845cf
if(m.condition(3))next=next+UINT64_C(0x3f);
c.rip=next;return true;}
case UINT64_C(0x140084590): {next=c.rip+5; // mov ebx, 0xdd43cac5
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xdd43cac5)}));
c.rip=next;return true;}
case UINT64_C(0x140084595): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008459a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008459f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400845a4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400845a9): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400845ac): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400845b1): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400845b6): {next=c.rip+6; // and ecx, 0x133867
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x133867)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400845bc): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400845bf): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400845c4): {next=c.rip+6; // xor rax, 0x133867
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x133867)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400845ca): {next=c.rip+5; // jmp 0x140083e2c
next=next+UINT64_C(0xfffffffffffff85d);
c.rip=next;return true;}
case UINT64_C(0x1400845cf): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x5a7ff67
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5a7ff67)}));
c.rip=next;return true;}
case UINT64_C(0x1400845d8): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x10e94a11
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x10e94a11)}));
c.rip=next;return true;}
case UINT64_C(0x1400845e1): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400845e6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400845eb): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400845ee): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400845f3): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400845f8): {next=c.rip+8; // nop dword ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x140084600): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084605): {next=c.rip+4; // cmp rax, 2
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140084609): {next=c.rip+2; // jae 0x140084631
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x14008460b): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084610): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084615): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084618): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7da23);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008461d): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084622): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084627): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14008462a): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008462f): {next=c.rip+2; // jmp 0x140084600
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x140084631): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084636): {next=c.rip+5; // mov ebx, 0xdd43cac5
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xdd43cac5)}));
c.rip=next;return true;}
case UINT64_C(0x14008463b): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084640): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084645): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008464a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008464f): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140084652): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084657): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008465c): {next=c.rip+6; // and ecx, 0x133867
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x133867)}),32));
c.rip=next;return true;}
case UINT64_C(0x140084662): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084665): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008466a): {next=c.rip+6; // xor rax, 0x133867
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x133867)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084670): {next=c.rip+5; // jmp 0x140083e2c
next=next+UINT64_C(0xfffffffffffff7b7);
c.rip=next;return true;}
case UINT64_C(0x140084675): {next=c.rip+5; // cmp eax, 0x17d925
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x17d925)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008467a): {next=c.rip+6; // jg 0x140084e65
if(m.condition(8))next=next+UINT64_C(0x7e5);
c.rip=next;return true;}
case UINT64_C(0x140084680): {next=c.rip+6; // je 0x140084c68
if(m.condition(0))next=next+UINT64_C(0x5e2);
c.rip=next;return true;}
case UINT64_C(0x140084686): {next=c.rip+5; // cmp eax, 0x15ca0a
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x15ca0a)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008468b): {next=c.rip+6; // je 0x140084aa6
if(m.condition(0))next=next+UINT64_C(0x415);
c.rip=next;return true;}
case UINT64_C(0x140084691): {next=c.rip+5; // cmp eax, 0x167eac
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x167eac)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140084696): {next=c.rip+6; // je 0x140084905
if(m.condition(0))next=next+UINT64_C(0x269);
c.rip=next;return true;}
case UINT64_C(0x14008469c): {next=c.rip+5; // cmp eax, 0x171a87
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x171a87)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400846a1): {next=c.rip+6; // je 0x140084837
if(m.condition(0))next=next+UINT64_C(0x190);
c.rip=next;return true;}
case UINT64_C(0x1400846a7): {next=c.rip+5; // cmp eax, 0x17d650
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x17d650)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400846ac): {next=c.rip+6; // jne 0x14008839a
if(m.condition(1))next=next+UINT64_C(0x3ce8);
c.rip=next;return true;}
case UINT64_C(0x1400846b2): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400846ba): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400846c2): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7d979);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400846c7): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400846cc): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400846d1): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400846d9): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400846e1): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7d95a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400846e6): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400846eb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400846f0): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x57386a39
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x57386a39)}));
c.rip=next;return true;}
case UINT64_C(0x1400846f9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400846fe): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r13
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084703): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084708): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084710): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084713): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084718): {next=c.rip+8; // or rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084720): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084723): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008472b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084730): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084738): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008473d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084742): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008474a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008474f): {next=c.rip+8; // and rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084757): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008475a): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084762): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084767): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008476f): {next=c.rip+4; // xor rcx, 0x13
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x13)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084773): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7d8c8);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140084778): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084780): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084788): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008478b): {next=c.rip+6; // mov r8d, 0xbbe15
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xbbe15)}));
c.rip=next;return true;}
case UINT64_C(0x140084791): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084799): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc8852);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008479e): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400847a6): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400847ac): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400847ae): {next=c.rip+3; // movzx eax, cl
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400847b1): {next=c.rip+3; // imul eax, edx
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400847b4): {next=c.rip+2; // test al, 1
m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400847b6): {next=c.rip+2; // je 0x1400847fc
if(m.condition(0))next=next+UINT64_C(0x44);
c.rip=next;return true;}
case UINT64_C(0x1400847b8): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x229542d1
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x229542d1)}));
c.rip=next;return true;}
case UINT64_C(0x1400847c1): {next=c.rip+5; // mov ebx, 0xc4dda10d
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc4dda10d)}));
c.rip=next;return true;}
case UINT64_C(0x1400847c6): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400847cb): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400847d0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400847d5): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400847d8): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400847dd): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400847e2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400847e7): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400847ea): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400847ef): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400847f2): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400847f7): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400847fc): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0xf84232f
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf84232f)}));
c.rip=next;return true;}
case UINT64_C(0x140084805): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008480a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008480f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084814): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140084817): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008481c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084821): {next=c.rip+7; // or rcx, 0x14ebd6
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x14ebd6)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084828): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008482d): {next=c.rip+5; // and eax, 0x14ebd6
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x14ebd6)}),32));
c.rip=next;return true;}
case UINT64_C(0x140084832): {next=c.rip+5; // jmp 0x140083760
next=next+UINT64_C(0xffffffffffffef29);
c.rip=next;return true;}
case UINT64_C(0x140084837): {next=c.rip+5; // call 0x14004bc10
{uint64_t target=next+UINT64_C(0xfffffffffffc73d4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008483c): {next=c.rip+7; // mov dword ptr [rsp + 0xc4], eax
m.put(Operand{2,0,32,0,4,-1,1,0,196,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084843): {next=c.rip+8; // movsxd rax, dword ptr [rsp + 0xc4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,196,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14008484b): {next=c.rip+8; // xor qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084853): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0xe655e0d
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xe655e0d)}));
c.rip=next;return true;}
case UINT64_C(0x14008485c): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x1093d88f
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1093d88f)}));
c.rip=next;return true;}
case UINT64_C(0x140084865): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008486a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008486f): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084872): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084877): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008487c): {next=c.rip+3; // dec rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,true));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14008487f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084884): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140084886): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140084889): {next=c.rip+2; // jne 0x14008489b
if(m.condition(1))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x14008488b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084890): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084896): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008489b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400848a0): {next=c.rip+5; // mov ebx, 0xbf90b58f
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xbf90b58f)}));
c.rip=next;return true;}
case UINT64_C(0x1400848a5): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400848aa): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x2270a55d
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2270a55d)}));
c.rip=next;return true;}
case UINT64_C(0x1400848b3): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400848b8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400848bd): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400848c0): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400848c5): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400848ca): {next=c.rip+6; // nop word ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x1400848d0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400848d5): {next=c.rip+4; // cmp rax, 1
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400848d9): {next=c.rip+6; // jae 0x140085345
if(m.condition(3))next=next+UINT64_C(0xa66);
c.rip=next;return true;}
case UINT64_C(0x1400848df): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400848e4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400848e9): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400848ec): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7d74f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400848f1): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400848f6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400848fb): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400848fe): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084903): {next=c.rip+2; // jmp 0x1400848d0
next=next+UINT64_C(0xffffffffffffffcb);
c.rip=next;return true;}
case UINT64_C(0x140084905): {next=c.rip+8; // movsxd rcx, dword ptr [rsp + 0xaa8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14008490d): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084915): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7d726);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008491a): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084922): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x531116e9
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x531116e9)}));
c.rip=next;return true;}
case UINT64_C(0x14008492b): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x38d9ac99
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38d9ac99)}));
c.rip=next;return true;}
case UINT64_C(0x140084934): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084939): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008493e): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084941): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084946): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008494b): {next=c.rip+3; // and ecx, 1
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x14008494e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084953): {next=c.rip+3; // and eax, 1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x140084956): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084959): {next=c.rip+4; // cmp rax, 2
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14008495d): {next=c.rip+2; // jbe 0x14008496f
if(m.condition(4))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x14008495f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084964): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008496a): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008496f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084974): {next=c.rip+5; // mov ebx, 0x9a0d3573
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x9a0d3573)}));
c.rip=next;return true;}
case UINT64_C(0x140084979): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008497e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084983): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r13
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084988): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008498d): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084995): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084998): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008499b): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008499e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400849a3): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400849a6): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400849ae): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400849b3): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400849bb): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400849c0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400849c5): {next=c.rip+8; // xor qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400849cd): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400849d2): {next=c.rip+8; // add qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400849da): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400849df): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400849e7): {next=c.rip+4; // xor rcx, 0x24
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x24)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400849eb): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7d650);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400849f0): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400849f8): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a00): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084a03): {next=c.rip+6; // mov r8d, 0x163fbc
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x163fbc)}));
c.rip=next;return true;}
case UINT64_C(0x140084a09): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a11): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc85da);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140084a16): {next=c.rip+8; // movzx ecx, byte ptr [rsp + 0x3b0]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a1e): {next=c.rip+2; // mov edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a20): {next=c.rip+3; // imul edx, ecx
m.imul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140084a23): {next=c.rip+2; // xor dl, cl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140084a25): {next=c.rip+3; // test dl, 1
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140084a28): {next=c.rip+2; // je 0x140084a6b
if(m.condition(0))next=next+UINT64_C(0x41);
c.rip=next;return true;}
case UINT64_C(0x140084a2a): {next=c.rip+5; // mov eax, 0xffcd4df7
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xffcd4df7)}));
c.rip=next;return true;}
case UINT64_C(0x140084a2f): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a34): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x1292c33b
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1292c33b)}));
c.rip=next;return true;}
case UINT64_C(0x140084a3d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a42): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a47): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084a4a): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a4f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a54): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a59): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a5e): {next=c.rip+3; // and rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084a61): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a66): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a6b): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x261335bd
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x261335bd)}));
c.rip=next;return true;}
case UINT64_C(0x140084a74): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a79): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a7e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a83): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140084a86): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a8b): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a90): {next=c.rip+7; // or rcx, 0x3d1c9d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3d1c9d)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084a97): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084a9c): {next=c.rip+5; // and eax, 0x3d1c9d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3d1c9d)}),32));
c.rip=next;return true;}
case UINT64_C(0x140084aa1): {next=c.rip+5; // jmp 0x140083e2c
next=next+UINT64_C(0xfffffffffffff386);
c.rip=next;return true;}
case UINT64_C(0x140084aa6): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x34726a55
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x34726a55)}));
c.rip=next;return true;}
case UINT64_C(0x140084aaf): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x673c5a11
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x673c5a11)}));
c.rip=next;return true;}
case UINT64_C(0x140084ab8): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084abd): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084ac2): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084ac5): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084aca): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084acf): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084ad4): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084ad7): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084ada): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084adf): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084ae4): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084ae7): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084aea): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084aef): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084af4): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x22f451d3
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x22f451d3)}));
c.rip=next;return true;}
case UINT64_C(0x140084afd): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084b02): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r13
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084b07): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084b0c): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084b14): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084b19): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084b21): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140084b24): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084b2c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084b31): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084b39): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084b3c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084b41): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084b49): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084b4c): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084b51): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084b56): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084b5e): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084b61): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084b64): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140084b67): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084b6c): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084b6f): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084b77): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084b7c): {next=c.rip+8; // add qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084b84): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084b89): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084b91): {next=c.rip+4; // xor rcx, 9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084b95): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7d4a6);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140084b9a): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084ba2): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084baa): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084bad): {next=c.rip+6; // mov r8d, 0x58fef
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x58fef)}));
c.rip=next;return true;}
case UINT64_C(0x140084bb3): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084bbb): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc8430);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140084bc0): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084bc8): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084bce): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140084bd0): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140084bd3): {next=c.rip+2; // jne 0x140084c2c
if(m.condition(1))next=next+UINT64_C(0x57);
c.rip=next;return true;}
case UINT64_C(0x140084bd5): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x3057eddd
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3057eddd)}));
c.rip=next;return true;}
case UINT64_C(0x140084bde): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x9760f4d
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9760f4d)}));
c.rip=next;return true;}
case UINT64_C(0x140084be7): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084bec): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084bf1): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084bf4): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084bf9): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084bfe): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084c03): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140084c07): {next=c.rip+3; // and ecx, 1
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x140084c0a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084c0f): {next=c.rip+3; // and eax, 1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x140084c12): {next=c.rip+3; // cmp rcx, rax
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140084c15): {next=c.rip+2; // je 0x140084c27
if(m.condition(0))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x140084c17): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084c1c): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084c22): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084c27): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084c2c): {next=c.rip+5; // mov ebx, 0xa46e53f1
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa46e53f1)}));
c.rip=next;return true;}
case UINT64_C(0x140084c31): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084c36): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084c3b): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084c40): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084c45): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140084c48): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084c4d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084c52): {next=c.rip+7; // or rcx, 0x3ffe82
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3ffe82)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084c59): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084c5e): {next=c.rip+5; // and eax, 0x3ffe82
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3ffe82)}),32));
c.rip=next;return true;}
case UINT64_C(0x140084c63): {next=c.rip+5; // jmp 0x140081d27
next=next+UINT64_C(0xffffffffffffd0bf);
c.rip=next;return true;}
case UINT64_C(0x140084c68): {next=c.rip+8; // movsxd rax, dword ptr [rsp + 0xaa8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140084c70): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084c78): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084c7d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084c82): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7d3b9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140084c87): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084c8f): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x523851b1
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x523851b1)}));
c.rip=next;return true;}
case UINT64_C(0x140084c98): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084c9d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084ca2): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140084ca5): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084caa): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084caf): {next=c.rip+8; // xor qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084cb7): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084cbc): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084cc4): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084cc7): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084ccc): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084cd4): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084cd7): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084cdc): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084ce1): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084ce9): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084cec): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084cef): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140084cf2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084cf7): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084cfa): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084d02): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084d07): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xab0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084d0f): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084d12): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084d17): {next=c.rip+8; // xor rax, qword ptr [rsp + 0xab0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084d1f): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084d22): {next=c.rip+8; // mov qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084d2a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084d2f): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084d37): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084d3c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084d41): {next=c.rip+4; // xor rax, 0x18
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x18)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084d45): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084d4a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084d4f): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7d2ec);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140084d54): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084d5c): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084d64): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084d67): {next=c.rip+6; // mov r8d, 0xed528
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xed528)}));
c.rip=next;return true;}
case UINT64_C(0x140084d6d): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084d75): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc8276);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140084d7a): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084d82): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084d88): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084d8a): {next=c.rip+3; // movzx eax, cl
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084d8d): {next=c.rip+3; // imul eax, edx
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140084d90): {next=c.rip+2; // test al, 1
m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140084d92): {next=c.rip+2; // jne 0x140084dd3
if(m.condition(1))next=next+UINT64_C(0x3f);
c.rip=next;return true;}
case UINT64_C(0x140084d94): {next=c.rip+5; // mov ebx, 0xfcd88805
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xfcd88805)}));
c.rip=next;return true;}
case UINT64_C(0x140084d99): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084d9e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084da3): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084da8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084dad): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140084db0): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084db5): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084dba): {next=c.rip+6; // and ecx, 0x19a3f9
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x19a3f9)}),32));
c.rip=next;return true;}
case UINT64_C(0x140084dc0): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084dc3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084dc8): {next=c.rip+6; // xor rax, 0x19a3f9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x19a3f9)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084dce): {next=c.rip+5; // jmp 0x140085210
next=next+UINT64_C(0x43d);
c.rip=next;return true;}
case UINT64_C(0x140084dd3): {next=c.rip+5; // mov eax, 0xd25da5d7
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xd25da5d7)}));
c.rip=next;return true;}
case UINT64_C(0x140084dd8): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084ddd): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x6be9013b
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x6be9013b)}));
c.rip=next;return true;}
case UINT64_C(0x140084de6): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084deb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084df0): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084df3): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084df8): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084dfd): {next=c.rip+3; // and ecx, 1
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x140084e00): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084e05): {next=c.rip+3; // and eax, 1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x140084e08): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084e0b): {next=c.rip+4; // cmp rax, 2
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140084e0f): {next=c.rip+2; // jbe 0x140084e21
if(m.condition(4))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x140084e11): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084e16): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084e1c): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084e21): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084e26): {next=c.rip+5; // mov ebx, 0xfcd88805
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xfcd88805)}));
c.rip=next;return true;}
case UINT64_C(0x140084e2b): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084e30): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084e35): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084e3a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084e3f): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140084e42): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084e47): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084e4c): {next=c.rip+6; // and ecx, 0x19a3f9
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x19a3f9)}),32));
c.rip=next;return true;}
case UINT64_C(0x140084e52): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084e55): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084e5a): {next=c.rip+6; // xor rax, 0x19a3f9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x19a3f9)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084e60): {next=c.rip+5; // jmp 0x140085210
next=next+UINT64_C(0x3ab);
c.rip=next;return true;}
case UINT64_C(0x140084e65): {next=c.rip+5; // cmp eax, 0x19a3f9
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x19a3f9)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140084e6a): {next=c.rip+6; // je 0x140085361
if(m.condition(0))next=next+UINT64_C(0x4f1);
c.rip=next;return true;}
case UINT64_C(0x140084e70): {next=c.rip+5; // cmp eax, 0x19dad3
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x19dad3)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140084e75): {next=c.rip+6; // je 0x14008523c
if(m.condition(0))next=next+UINT64_C(0x3c1);
c.rip=next;return true;}
case UINT64_C(0x140084e7b): {next=c.rip+5; // cmp eax, 0x1b381f
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1b381f)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140084e80): {next=c.rip+6; // je 0x14008503c
if(m.condition(0))next=next+UINT64_C(0x1b6);
c.rip=next;return true;}
case UINT64_C(0x140084e86): {next=c.rip+5; // cmp eax, 0x1d88b9
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1d88b9)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140084e8b): {next=c.rip+6; // jne 0x14008839a
if(m.condition(1))next=next+UINT64_C(0x3509);
c.rip=next;return true;}
case UINT64_C(0x140084e91): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084e99): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084ea1): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7d19a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140084ea6): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084eab): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084eb0): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084eb8): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084ec0): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7d17b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140084ec5): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084eca): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084ecf): {next=c.rip+5; // mov ebx, 0xf81305bb
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf81305bb)}));
c.rip=next;return true;}
case UINT64_C(0x140084ed4): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084ed9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084ede): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r13
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084ee3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084ee8): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084ef0): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084ef3): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084ef6): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140084ef9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084efe): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084f01): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084f09): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084f0e): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084f16): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084f19): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084f1e): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084f26): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084f29): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084f2e): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084f33): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084f3b): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084f3e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084f43): {next=c.rip+8; // or rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084f4b): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084f4e): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084f56): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084f5b): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xab0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084f63): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084f66): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084f6b): {next=c.rip+8; // xor rax, qword ptr [rsp + 0xab0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084f73): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140084f76): {next=c.rip+8; // mov qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084f7e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084f83): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084f8b): {next=c.rip+4; // xor rcx, 0x15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x15)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084f8f): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7d0ac);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140084f94): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084f9c): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084fa4): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084fa7): {next=c.rip+6; // mov r8d, 0xcfa83
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xcfa83)}));
c.rip=next;return true;}
case UINT64_C(0x140084fad): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084fb5): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc8036);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140084fba): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084fc2): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084fc8): {next=c.rip+2; // or cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140084fca): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140084fcd): {next=c.rip+2; // jne 0x140084ffe
if(m.condition(1))next=next+UINT64_C(0x2f);
c.rip=next;return true;}
case UINT64_C(0x140084fcf): {next=c.rip+5; // mov ebx, 0xa958f28f
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa958f28f)}));
c.rip=next;return true;}
case UINT64_C(0x140084fd4): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084fd9): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x17efacb1
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x17efacb1)}));
c.rip=next;return true;}
case UINT64_C(0x140084fe2): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084fe7): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084fec): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140084fef): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084ff4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084ff9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140084ffe): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x3fba6c39
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3fba6c39)}));
c.rip=next;return true;}
case UINT64_C(0x140085007): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008500c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085011): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085016): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140085019): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008501e): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085023): {next=c.rip+6; // and ecx, 0x15649b
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x15649b)}),32));
c.rip=next;return true;}
case UINT64_C(0x140085029): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008502c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085031): {next=c.rip+6; // xor rax, 0x15649b
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x15649b)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085037): {next=c.rip+5; // jmp 0x140083760
next=next+UINT64_C(0xffffffffffffe724);
c.rip=next;return true;}
case UINT64_C(0x14008503c): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085044): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085047): {next=c.rip+4; // and rax, 0xfffffffffffffffe
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xfffffffffffffffe)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008504b): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008504e): {next=c.rip+4; // cmp rcx, 1
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140085052): {next=c.rip+2; // jbe 0x140085099
if(m.condition(4))next=next+UINT64_C(0x45);
c.rip=next;return true;}
case UINT64_C(0x140085054): {next=c.rip+5; // mov eax, 0xeee42827
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xeee42827)}));
c.rip=next;return true;}
case UINT64_C(0x140085059): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008505e): {next=c.rip+5; // mov eax, 0xdf40314d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xdf40314d)}));
c.rip=next;return true;}
case UINT64_C(0x140085063): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rax
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085068): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008506d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085072): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085075): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008507a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008507f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085084): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085087): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008508c): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008508f): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085094): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085099): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x76600b3d
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x76600b3d)}));
c.rip=next;return true;}
case UINT64_C(0x1400850a2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400850a7): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r13
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400850ac): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400850b1): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400850b9): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400850bc): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400850bf): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400850c2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400850c7): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400850ca): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400850d2): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400850d7): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400850df): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400850e2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400850e7): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400850ef): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400850f2): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400850f7): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400850fc): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085104): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085107): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008510a): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008510d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085112): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085115): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008511d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085122): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008512a): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008512f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085134): {next=c.rip+4; // xor rax, 5
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085138): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008513d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085142): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7cef9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085147): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008514f): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085157): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008515a): {next=c.rip+6; // mov r8d, 0x31713
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x31713)}));
c.rip=next;return true;}
case UINT64_C(0x140085160): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085168): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc7e83);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008516d): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x4530947f
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4530947f)}));
c.rip=next;return true;}
case UINT64_C(0x140085176): {next=c.rip+5; // mov ebx, 0xb92c3b47
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xb92c3b47)}));
c.rip=next;return true;}
case UINT64_C(0x14008517b): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085180): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085185): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008518a): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008518d): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085192): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085197): {next=c.rip+9; // nop word ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x1400851a0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400851a5): {next=c.rip+4; // cmp rax, 2
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400851a9): {next=c.rip+2; // jae 0x1400851d1
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x1400851ab): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400851b0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400851b5): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400851b8): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7ce83);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400851bd): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400851c2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400851c7): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400851ca): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400851cf): {next=c.rip+2; // jmp 0x1400851a0
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x1400851d1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400851d6): {next=c.rip+5; // mov ebx, 0xab513755
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xab513755)}));
c.rip=next;return true;}
case UINT64_C(0x1400851db): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400851e0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400851e5): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400851ea): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400851ef): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400851f2): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400851f7): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400851fc): {next=c.rip+6; // and ecx, 0x42cef
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x42cef)}),32));
c.rip=next;return true;}
case UINT64_C(0x140085202): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085205): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008520a): {next=c.rip+6; // xor rax, 0x42cef
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x42cef)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085210): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085213): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085218): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x70]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008521d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085222): {next=c.rip+2; // and edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140085224): {next=c.rip+2; // add edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x140085226): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x70]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008522b): {next=c.rip+2; // sub ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14008522d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085232): {next=c.rip+2; // add eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x140085234): {next=c.rip+3; // movsxd rdx, eax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140085237): {next=c.rip+5; // jmp 0x140081d56
next=next+UINT64_C(0xffffffffffffcb1a);
c.rip=next;return true;}
case UINT64_C(0x14008523c): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085244): {next=c.rip+8; // add rdx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008524c): {next=c.rip+6; // mov r8d, 0x195f38
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x195f38)}));
c.rip=next;return true;}
case UINT64_C(0x140085252): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008525a): {next=c.rip+5; // call 0x14004d210
{uint64_t target=next+UINT64_C(0xfffffffffffc7fb1);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008525f): {next=c.rip+5; // mov ebx, 0x9426d1b5
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x9426d1b5)}));
c.rip=next;return true;}
case UINT64_C(0x140085264): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085269): {next=c.rip+5; // mov ebx, 0xa79c71d1
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa79c71d1)}));
c.rip=next;return true;}
case UINT64_C(0x14008526e): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085273): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085278): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008527d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085280): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085285): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008528a): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008528f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085294): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x4e82cd25
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4e82cd25)}));
c.rip=next;return true;}
case UINT64_C(0x14008529d): {next=c.rip+5; // mov ebx, 0x966dff8f
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x966dff8f)}));
c.rip=next;return true;}
case UINT64_C(0x1400852a2): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400852a7): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400852ac): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400852b1): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400852b4): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400852b9): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400852be): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400852c3): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400852c6): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400852c9): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400852ce): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400852d3): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400852d6): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400852d9): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400852de): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400852e3): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400852eb): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400852ee): {next=c.rip+4; // and rax, 0xfffffffffffffffe
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xfffffffffffffffe)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400852f2): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400852f5): {next=c.rip+4; // cmp rcx, 2
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400852f9): {next=c.rip+2; // jb 0x14008534a
if(m.condition(2))next=next+UINT64_C(0x4f);
c.rip=next;return true;}
case UINT64_C(0x1400852fb): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x26b0d777
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x26b0d777)}));
c.rip=next;return true;}
case UINT64_C(0x140085304): {next=c.rip+5; // mov ebx, 0x9405730b
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x9405730b)}));
c.rip=next;return true;}
case UINT64_C(0x140085309): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008530e): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085313): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085318): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008531b): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085320): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085325): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008532a): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008532d): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085330): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085335): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008533a): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008533d): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085340): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085345): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008534a): {next=c.rip+5; // mov edx, 0x295b7f
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x295b7f)}));
c.rip=next;return true;}
case UINT64_C(0x14008534f): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085357): {next=c.rip+5; // call 0x14004c880
{uint64_t target=next+UINT64_C(0xfffffffffffc7524);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008535c): {next=c.rip+5; // jmp 0x140088983
next=next+UINT64_C(0x3622);
c.rip=next;return true;}
case UINT64_C(0x140085361): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085369): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085371): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7ccca);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085376): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008537b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085380): {next=c.rip+5; // mov ebx, 0xc660611d
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc660611d)}));
c.rip=next;return true;}
case UINT64_C(0x140085385): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008538a): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008538f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085394): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085397): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008539c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400853a1): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400853a4): {next=c.rip+3; // or rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400853a7): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400853ac): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400853b1): {next=c.rip+8; // xor qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400853b9): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400853be): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400853c6): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400853c9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400853ce): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400853d6): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400853d9): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400853de): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400853e3): {next=c.rip+8; // xor qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400853eb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400853f0): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400853f8): {next=c.rip+4; // xor rax, 0x19
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x19)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400853fc): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085401): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085406): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7cc35);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008540b): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085413): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008541b): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008541e): {next=c.rip+6; // mov r8d, 0xf735f
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf735f)}));
c.rip=next;return true;}
case UINT64_C(0x140085424): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008542c): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc7bbf);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085431): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085439): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008543f): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140085441): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140085444): {next=c.rip+2; // jne 0x140085496
if(m.condition(1))next=next+UINT64_C(0x50);
c.rip=next;return true;}
case UINT64_C(0x140085446): {next=c.rip+5; // mov eax, 0xa96abda7
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa96abda7)}));
c.rip=next;return true;}
case UINT64_C(0x14008544b): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085450): {next=c.rip+5; // mov eax, 0xbcff8ce7
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xbcff8ce7)}));
c.rip=next;return true;}
case UINT64_C(0x140085455): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rax
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008545a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008545f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085464): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085467): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008546c): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085471): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085476): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085479): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008547c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085481): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085486): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085489): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008548c): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085491): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085496): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x38e10931
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38e10931)}));
c.rip=next;return true;}
case UINT64_C(0x14008549f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400854a4): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400854a9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400854ae): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400854b1): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400854b6): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400854bb): {next=c.rip+6; // and ecx, 0x32966a
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x32966a)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400854c1): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400854c4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400854c9): {next=c.rip+6; // xor rax, 0x32966a
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x32966a)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400854cf): {next=c.rip+5; // jmp 0x140081d27
next=next+UINT64_C(0xffffffffffffc853);
c.rip=next;return true;}
case UINT64_C(0x1400854d4): {next=c.rip+8; // movsxd rax, dword ptr [rsp + 0xaa8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400854dc): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400854e4): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400854e9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400854ee): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400854f3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400854f8): {next=c.rip+3; // and rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400854fb): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7cb40);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085500): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085508): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x4495dd85
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4495dd85)}));
c.rip=next;return true;}
case UINT64_C(0x140085511): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085516): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008551b): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008551e): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085523): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085528): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008552b): {next=c.rip+3; // or rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008552e): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085533): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085538): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085540): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085545): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008554d): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140085550): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085558): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008555d): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085565): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085568): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008556d): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085575): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085578): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008557d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085582): {next=c.rip+8; // xor qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008558a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008558f): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085597): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008559c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400855a1): {next=c.rip+4; // xor rax, 0x2b
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2b)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400855a5): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400855aa): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400855af): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7ca8c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400855b4): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400855bc): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400855c4): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400855c7): {next=c.rip+6; // mov r8d, 0x1a933d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1a933d)}));
c.rip=next;return true;}
case UINT64_C(0x1400855cd): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400855d5): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc7a16);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400855da): {next=c.rip+5; // mov ebx, 0xb507aa71
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xb507aa71)}));
c.rip=next;return true;}
case UINT64_C(0x1400855df): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400855e4): {next=c.rip+5; // mov ebx, 0xb9a5bcb3
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xb9a5bcb3)}));
c.rip=next;return true;}
case UINT64_C(0x1400855e9): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400855ee): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400855f3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400855f8): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400855fb): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085600): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085605): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008560a): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008560d): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085610): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085615): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008561a): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008561d): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085620): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085625): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008562a): {next=c.rip+5; // mov ebx, 0xde533d37
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xde533d37)}));
c.rip=next;return true;}
case UINT64_C(0x14008562f): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085634): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085639): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008563e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085643): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140085646): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008564b): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085650): {next=c.rip+6; // and ecx, 0x2bdfbf
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2bdfbf)}),32));
c.rip=next;return true;}
case UINT64_C(0x140085656): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085659): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008565e): {next=c.rip+6; // xor rax, 0x2bdfbf
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2bdfbf)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085664): {next=c.rip+5; // jmp 0x140085210
next=next+UINT64_C(0xfffffffffffffba7);
c.rip=next;return true;}
case UINT64_C(0x140085669): {next=c.rip+5; // cmp eax, 0x2c9934
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2c9934)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008566e): {next=c.rip+6; // jg 0x140086e24
if(m.condition(8))next=next+UINT64_C(0x17b0);
c.rip=next;return true;}
case UINT64_C(0x140085674): {next=c.rip+6; // je 0x140086ceb
if(m.condition(0))next=next+UINT64_C(0x1671);
c.rip=next;return true;}
case UINT64_C(0x14008567a): {next=c.rip+5; // cmp eax, 0x260a3a
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x260a3a)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008567f): {next=c.rip+6; // jg 0x1400861e2
if(m.condition(8))next=next+UINT64_C(0xb5d);
c.rip=next;return true;}
case UINT64_C(0x140085685): {next=c.rip+6; // je 0x140086006
if(m.condition(0))next=next+UINT64_C(0x97b);
c.rip=next;return true;}
case UINT64_C(0x14008568b): {next=c.rip+5; // cmp eax, 0x2216c9
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2216c9)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140085690): {next=c.rip+6; // jg 0x140085b37
if(m.condition(8))next=next+UINT64_C(0x4a1);
c.rip=next;return true;}
case UINT64_C(0x140085696): {next=c.rip+6; // je 0x140085921
if(m.condition(0))next=next+UINT64_C(0x285);
c.rip=next;return true;}
case UINT64_C(0x14008569c): {next=c.rip+5; // cmp eax, 0x201710
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x201710)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400856a1): {next=c.rip+6; // je 0x14008534a
if(m.condition(0))next=next+UINT64_C(0xfffffffffffffca3);
c.rip=next;return true;}
case UINT64_C(0x1400856a7): {next=c.rip+5; // cmp eax, 0x20ff08
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x20ff08)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400856ac): {next=c.rip+6; // je 0x14008578d
if(m.condition(0))next=next+UINT64_C(0xdb);
c.rip=next;return true;}
case UINT64_C(0x1400856b2): {next=c.rip+5; // cmp eax, 0x2188a4
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400856b7): {next=c.rip+6; // je 0x140085776
if(m.condition(0))next=next+UINT64_C(0xb9);
c.rip=next;return true;}
case UINT64_C(0x1400856bd): {next=c.rip+2; // cmp eax, esi
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400856bf): {next=c.rip+6; // jne 0x14008839a
if(m.condition(1))next=next+UINT64_C(0x2cd5);
c.rip=next;return true;}
case UINT64_C(0x1400856c5): {next=c.rip+7; // mov rax, qword ptr [rip + 0x3941bc]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,16,-1,1,0,3752380,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400856cc): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400856d4): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400856d7): {next=c.rip+7; // mov qword ptr [rip + 0x3941aa], rax
m.put(Operand{2,0,64,0,16,-1,1,0,3752362,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400856de): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400856e6): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400856e9): {next=c.rip+6; // mov r8d, 0x2173c7
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2173c7)}));
c.rip=next;return true;}
case UINT64_C(0x1400856ef): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400856f7): {next=c.rip+5; // call 0x14004d210
{uint64_t target=next+UINT64_C(0xfffffffffffc7b14);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400856fc): {next=c.rip+5; // mov ebx, 0xa9f6e485
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa9f6e485)}));
c.rip=next;return true;}
case UINT64_C(0x140085701): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085706): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x6596e6dd
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x6596e6dd)}));
c.rip=next;return true;}
case UINT64_C(0x14008570f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085714): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085719): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008571c): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085721): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085726): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008572b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085730): {next=c.rip+5; // mov ebx, 0xb94c8b65
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xb94c8b65)}));
c.rip=next;return true;}
case UINT64_C(0x140085735): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008573a): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x18f40777
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x18f40777)}));
c.rip=next;return true;}
case UINT64_C(0x140085743): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085748): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008574d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085750): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085755): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008575a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008575f): {next=c.rip+5; // mov edx, 0x1746e
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1746e)}));
c.rip=next;return true;}
case UINT64_C(0x140085764): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008576c): {next=c.rip+5; // call 0x14004c880
{uint64_t target=next+UINT64_C(0xfffffffffffc710f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085771): {next=c.rip+5; // jmp 0x140088983
next=next+UINT64_C(0x320d);
c.rip=next;return true;}
case UINT64_C(0x140085776): {next=c.rip+5; // mov edx, 1
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14008577b): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085783): {next=c.rip+5; // call 0x140049fa0
{uint64_t target=next+UINT64_C(0xfffffffffffc4818);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085788): {next=c.rip+5; // jmp 0x140088983
next=next+UINT64_C(0x31f6);
c.rip=next;return true;}
case UINT64_C(0x14008578d): {next=c.rip+5; // mov edx, 0xb
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xb)}));
c.rip=next;return true;}
case UINT64_C(0x140085792): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008579a): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc4131);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008579f): {next=c.rip+8; // mov r14d, dword ptr [rsp + 0x11a0]
m.put(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,4512,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400857a7): {next=c.rip+3; // xor r14, rax
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400857aa): {next=c.rip+5; // mov edx, 5
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x5)}));
c.rip=next;return true;}
case UINT64_C(0x1400857af): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400857b7): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc4114);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400857bc): {next=c.rip+3; // mov rsi, rax
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400857bf): {next=c.rip+3; // and esi, 1
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400857c2): {next=c.rip+5; // mov edx, 6
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x6)}));
c.rip=next;return true;}
case UINT64_C(0x1400857c7): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400857cf): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc40fc);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400857d4): {next=c.rip+3; // mov r12, rax
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400857d7): {next=c.rip+4; // and r12d, 1
m.put(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400857db): {next=c.rip+5; // mov edx, 4
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4)}));
c.rip=next;return true;}
case UINT64_C(0x1400857e0): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400857e8): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc40e3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400857ed): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400857f0): {next=c.rip+5; // mov edx, 0xc
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc)}));
c.rip=next;return true;}
case UINT64_C(0x1400857f5): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400857fd): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc40ce);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085802): {next=c.rip+3; // mov r15, rax
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085805): {next=c.rip+3; // mov r8d, esi
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085808): {next=c.rip+3; // mov edx, r14d
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008580b): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085813): {next=c.rip+5; // call 0x14004ca50
{uint64_t target=next+UINT64_C(0xfffffffffffc7238);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085818): {next=c.rip+3; // xor rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008581b): {next=c.rip+2; // mov edi, ebx
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008581d): {next=c.rip+3; // mov r9d, ebx
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085820): {next=c.rip+3; // mov r8d, esi
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085823): {next=c.rip+3; // mov edx, r14d
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085826): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008582e): {next=c.rip+5; // call 0x14004cad0
{uint64_t target=next+UINT64_C(0xfffffffffffc729d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085833): {next=c.rip+3; // mov r14, r13
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085836): {next=c.rip+3; // cmp rax, r15
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140085839): {next=c.rip+4; // sete r14b
m.put(Operand{0,14,8,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.condition(0)));
c.rip=next;return true;}
case UINT64_C(0x14008583d): {next=c.rip+3; // mov rbx, r14
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085840): {next=c.rip+3; // and rbx, r12
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085843): {next=c.rip+3; // and rbx, rsi
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085846): {next=c.rip+3; // neg rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(0,m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140085849): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085851): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffc431a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085856): {next=c.rip+2; // xor edi, eax
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140085858): {next=c.rip+2; // and edi, ebx
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14008585a): {next=c.rip+2; // xor edi, eax
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14008585c): {next=c.rip+2; // mov edx, edi
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008585e): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085866): {next=c.rip+5; // call 0x140049c40
{uint64_t target=next+UINT64_C(0xfffffffffffc43d5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008586b): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14008586e): {next=c.rip+4; // lea edx, [r8 + 6]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,6,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085872): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008587a): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc4121);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008587f): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140085882): {next=c.rip+4; // lea edx, [r8 + 0xc]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,12,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085886): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008588e): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc410d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085893): {next=c.rip+3; // test r12, r12
m.logic(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140085896): {next=c.rip+2; // je 0x1400858af
if(m.condition(0))next=next+UINT64_C(0x17);
c.rip=next;return true;}
case UINT64_C(0x140085898): {next=c.rip+3; // test r14, r14
m.logic(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14008589b): {next=c.rip+2; // jne 0x1400858af
if(m.condition(1))next=next+UINT64_C(0x12);
c.rip=next;return true;}
case UINT64_C(0x14008589d): {next=c.rip+5; // mov edx, 0x4252414e
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4252414e)}));
c.rip=next;return true;}
case UINT64_C(0x1400858a2): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400858aa): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffc3a81);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400858af): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400858b7): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffc42b4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400858bc): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400858be): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400858c6): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7c775);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400858cb): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400858d3): {next=c.rip+8; // movsxd rax, dword ptr [rsp + 0xaa8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400858db): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400858e3): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400858e8): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400858ed): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7c74e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400858f2): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400858fa): {next=c.rip+5; // mov edx, 0x295b7f
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x295b7f)}));
c.rip=next;return true;}
case UINT64_C(0x1400858ff): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085907): {next=c.rip+5; // call 0x14004c880
{uint64_t target=next+UINT64_C(0xfffffffffffc6f74);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008590c): {next=c.rip+8; // mov r12, qword ptr [rsp + 0xb0]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,176,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085914): {next=c.rip+8; // mov r14, qword ptr [rsp + 0xa8]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,168,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008591c): {next=c.rip+5; // jmp 0x140088983
next=next+UINT64_C(0x3062);
c.rip=next;return true;}
case UINT64_C(0x140085921): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085929): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085931): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7c70a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085936): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008593b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085940): {next=c.rip+5; // mov eax, 0xd668e5a7
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xd668e5a7)}));
c.rip=next;return true;}
case UINT64_C(0x140085945): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rax
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008594a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008594f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085954): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140085957): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008595c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085961): {next=c.rip+8; // xor qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085969): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008596e): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085976): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085979): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008597e): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085986): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085989): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008598e): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085993): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008599b): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008599e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400859a3): {next=c.rip+8; // or rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400859ab): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400859ae): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400859b6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400859bb): {next=c.rip+8; // add qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400859c3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400859c8): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400859d0): {next=c.rip+4; // xor rcx, 0xd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400859d4): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7c667);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400859d9): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400859e1): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400859e9): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400859ec): {next=c.rip+6; // mov r8d, 0x808cb
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x808cb)}));
c.rip=next;return true;}
case UINT64_C(0x1400859f2): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400859fa): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc75f1);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400859ff): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a07): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a0d): {next=c.rip+2; // or cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140085a0f): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140085a12): {next=c.rip+2; // je 0x140085a75
if(m.condition(0))next=next+UINT64_C(0x61);
c.rip=next;return true;}
case UINT64_C(0x140085a14): {next=c.rip+5; // mov ebx, 0xc8c076d5
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc8c076d5)}));
c.rip=next;return true;}
case UINT64_C(0x140085a19): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a1e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a23): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a28): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a2d): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140085a30): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a35): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a3a): {next=c.rip+7; // or rcx, 0x15ba79
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x15ba79)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085a41): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a46): {next=c.rip+5; // and eax, 0x15ba79
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x15ba79)}),32));
c.rip=next;return true;}
case UINT64_C(0x140085a4b): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085a4e): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a53): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x70]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a58): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a5d): {next=c.rip+2; // or edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140085a5f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x70]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a64): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a69): {next=c.rip+2; // and ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140085a6b): {next=c.rip+2; // sub edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x140085a6d): {next=c.rip+3; // movsxd rdx, edx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140085a70): {next=c.rip+5; // jmp 0x14008534f
next=next+UINT64_C(0xfffffffffffff8da);
c.rip=next;return true;}
case UINT64_C(0x140085a75): {next=c.rip+5; // mov eax, 0xa639debb
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa639debb)}));
c.rip=next;return true;}
case UINT64_C(0x140085a7a): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a7f): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x69e67ae5
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x69e67ae5)}));
c.rip=next;return true;}
case UINT64_C(0x140085a88): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a8d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a92): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085a95): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a9a): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085a9f): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140085aa0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085aa5): {next=c.rip+4; // cmp rax, 3
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140085aa9): {next=c.rip+2; // jae 0x140085ad1
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x140085aab): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ab0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ab5): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085ab8): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7c583);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085abd): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ac2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ac7): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140085aca): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085acf): {next=c.rip+2; // jmp 0x140085aa0
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x140085ad1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ad6): {next=c.rip+5; // mov ebx, 0xc8c076d5
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc8c076d5)}));
c.rip=next;return true;}
case UINT64_C(0x140085adb): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ae0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ae5): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085aea): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085aef): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140085af2): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085af7): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085afc): {next=c.rip+7; // or rcx, 0x15ba79
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x15ba79)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085b03): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085b08): {next=c.rip+5; // and eax, 0x15ba79
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x15ba79)}),32));
c.rip=next;return true;}
case UINT64_C(0x140085b0d): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085b10): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085b15): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x70]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085b1a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085b1f): {next=c.rip+2; // or edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140085b21): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x70]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085b26): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085b2b): {next=c.rip+2; // and ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140085b2d): {next=c.rip+2; // sub edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x140085b2f): {next=c.rip+3; // movsxd rdx, edx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140085b32): {next=c.rip+5; // jmp 0x140081d56
next=next+UINT64_C(0xffffffffffffc21f);
c.rip=next;return true;}
case UINT64_C(0x140085b37): {next=c.rip+5; // cmp eax, 0x229f6f
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x229f6f)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140085b3c): {next=c.rip+6; // je 0x140085f86
if(m.condition(0))next=next+UINT64_C(0x444);
c.rip=next;return true;}
case UINT64_C(0x140085b42): {next=c.rip+5; // cmp eax, 0x23180e
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x23180e)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140085b47): {next=c.rip+6; // je 0x140085ebb
if(m.condition(0))next=next+UINT64_C(0x36e);
c.rip=next;return true;}
case UINT64_C(0x140085b4d): {next=c.rip+5; // cmp eax, 0x24ad19
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x24ad19)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140085b52): {next=c.rip+6; // je 0x140085cf4
if(m.condition(0))next=next+UINT64_C(0x19c);
c.rip=next;return true;}
case UINT64_C(0x140085b58): {next=c.rip+5; // cmp eax, 0x2511e6
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2511e6)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140085b5d): {next=c.rip+6; // jne 0x14008839a
if(m.condition(1))next=next+UINT64_C(0x2837);
c.rip=next;return true;}
case UINT64_C(0x140085b63): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085b6b): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085b73): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7c4c8);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085b78): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085b7d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085b82): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x33df281d
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x33df281d)}));
c.rip=next;return true;}
case UINT64_C(0x140085b8b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085b90): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r13
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085b95): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085b9a): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ba2): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085ba5): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085ba8): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140085bab): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085bb0): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085bb3): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085bbb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085bc0): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085bc8): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085bcd): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085bd2): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085bda): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085bdd): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085be2): {next=c.rip+8; // or rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085bea): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085bed): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085bf5): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085bfa): {next=c.rip+8; // add qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085c02): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085c07): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085c0f): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085c14): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085c19): {next=c.rip+4; // xor rax, 0x27
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x27)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085c1d): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085c22): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085c27): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7c414);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085c2c): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085c34): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085c3c): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085c3f): {next=c.rip+6; // mov r8d, 0x181a61
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x181a61)}));
c.rip=next;return true;}
case UINT64_C(0x140085c45): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085c4d): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc739e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085c52): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085c5a): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085c60): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140085c62): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140085c65): {next=c.rip+2; // jne 0x140085cb6
if(m.condition(1))next=next+UINT64_C(0x4f);
c.rip=next;return true;}
case UINT64_C(0x140085c67): {next=c.rip+5; // mov eax, 0xa4ab0ce1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa4ab0ce1)}));
c.rip=next;return true;}
case UINT64_C(0x140085c6c): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085c71): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x3b8e6c9d
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3b8e6c9d)}));
c.rip=next;return true;}
case UINT64_C(0x140085c7a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085c7f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085c84): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085c87): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085c8c): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085c91): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085c96): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085c99): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085c9c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ca1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ca6): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085ca9): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085cac): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085cb1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085cb6): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x2ee3b56f
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2ee3b56f)}));
c.rip=next;return true;}
case UINT64_C(0x140085cbf): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085cc4): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085cc9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085cce): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140085cd1): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085cd6): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085cdb): {next=c.rip+6; // and ecx, 0xe72f0
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xe72f0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140085ce1): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085ce4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ce9): {next=c.rip+6; // xor rax, 0xe72f0
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xe72f0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085cef): {next=c.rip+5; // jmp 0x140083e2c
next=next+UINT64_C(0xffffffffffffe138);
c.rip=next;return true;}
case UINT64_C(0x140085cf4): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085cfc): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085d04): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7c337);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085d09): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085d0e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085d13): {next=c.rip+5; // mov eax, 0xe2d6cc37
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xe2d6cc37)}));
c.rip=next;return true;}
case UINT64_C(0x140085d18): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rax
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085d1d): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085d22): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085d27): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085d2a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085d2f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085d34): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140085d37): {next=c.rip+3; // or rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085d3a): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085d3f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085d44): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085d4c): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085d4f): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085d52): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140085d55): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085d5a): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085d5d): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085d65): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085d6a): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085d72): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085d77): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085d7f): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085d82): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085d87): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085d8c): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085d94): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085d99): {next=c.rip+8; // and rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085da1): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140085da4): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085dac): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085db1): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xab0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085db9): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085dbc): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085dc1): {next=c.rip+8; // xor rax, qword ptr [rsp + 0xab0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085dc9): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085dcc): {next=c.rip+8; // mov qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085dd4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085dd9): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085de1): {next=c.rip+4; // xor rax, 0x12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x12)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085de5): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085dea): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085def): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7c24c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085df4): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085dfc): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e04): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085e07): {next=c.rip+6; // mov r8d, 0xb1fde
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xb1fde)}));
c.rip=next;return true;}
case UINT64_C(0x140085e0d): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e15): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc71d6);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085e1a): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e22): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e28): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140085e2a): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140085e2d): {next=c.rip+2; // jne 0x140085e7f
if(m.condition(1))next=next+UINT64_C(0x50);
c.rip=next;return true;}
case UINT64_C(0x140085e2f): {next=c.rip+5; // mov eax, 0xc62b1019
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc62b1019)}));
c.rip=next;return true;}
case UINT64_C(0x140085e34): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e39): {next=c.rip+5; // mov eax, 0xb7928a67
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xb7928a67)}));
c.rip=next;return true;}
case UINT64_C(0x140085e3e): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rax
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e43): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e48): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e4d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085e50): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e55): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e5a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e5f): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085e62): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085e65): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e6a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e6f): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085e72): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140085e75): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e7a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e7f): {next=c.rip+5; // mov ebx, 0x91062079
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x91062079)}));
c.rip=next;return true;}
case UINT64_C(0x140085e84): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e89): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e8e): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e93): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085e98): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140085e9b): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ea0): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ea5): {next=c.rip+7; // or rcx, 0x17d650
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x17d650)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085eac): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085eb1): {next=c.rip+5; // and eax, 0x17d650
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x17d650)}),32));
c.rip=next;return true;}
case UINT64_C(0x140085eb6): {next=c.rip+5; // jmp 0x140083760
next=next+UINT64_C(0xffffffffffffd8a5);
c.rip=next;return true;}
case UINT64_C(0x140085ebb): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ec3): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ec9): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ecb): {next=c.rip+3; // movzx eax, cl
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ece): {next=c.rip+3; // imul eax, edx
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140085ed1): {next=c.rip+2; // test al, 1
m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140085ed3): {next=c.rip+2; // je 0x140085f22
if(m.condition(0))next=next+UINT64_C(0x4d);
c.rip=next;return true;}
case UINT64_C(0x140085ed5): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x7a56e2d9
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7a56e2d9)}));
c.rip=next;return true;}
case UINT64_C(0x140085ede): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x5a9aded9
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5a9aded9)}));
c.rip=next;return true;}
case UINT64_C(0x140085ee7): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085eec): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ef1): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085ef4): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ef9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085efe): {next=c.rip+3; // dec rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,true));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140085f01): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085f06): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140085f08): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140085f0b): {next=c.rip+2; // jne 0x140085f1d
if(m.condition(1))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x140085f0d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085f12): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085f18): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085f1d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085f22): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085f2a): {next=c.rip+3; // xor rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085f2d): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7c10e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085f32): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085f3a): {next=c.rip+5; // mov ebx, 0xaa402d81
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xaa402d81)}));
c.rip=next;return true;}
case UINT64_C(0x140085f3f): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085f44): {next=c.rip+5; // mov ebx, 0xce12c203
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xce12c203)}));
c.rip=next;return true;}
case UINT64_C(0x140085f49): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085f4e): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085f53): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085f58): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085f5b): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085f60): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085f65): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085f6a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085f6f): {next=c.rip+5; // mov edx, 0x8453b
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8453b)}));
c.rip=next;return true;}
case UINT64_C(0x140085f74): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085f7c): {next=c.rip+5; // call 0x14004c880
{uint64_t target=next+UINT64_C(0xfffffffffffc68ff);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085f81): {next=c.rip+5; // jmp 0x140088983
next=next+UINT64_C(0x29fd);
c.rip=next;return true;}
case UINT64_C(0x140085f86): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085f8e): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085f96): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7c0a5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085f9b): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085fa0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085fa5): {next=c.rip+8; // movzx edx, byte ptr [rsp + 0x1324]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,4900,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085fad): {next=c.rip+8; // xor rdx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085fb5): {next=c.rip+6; // mov r8d, 0xa3da
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa3da)}));
c.rip=next;return true;}
case UINT64_C(0x140085fbb): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085fc3): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc7028);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140085fc8): {next=c.rip+8; // movdqa xmm0, xmmword ptr [rip + 0x36bd10]
{if((Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16)||(Operand{2,0,128,0,16,-1,1,0,3587344,UINT64_C(0x0)}.kind==2&&m.address(Operand{2,0,128,0,16,-1,1,0,3587344,UINT64_C(0x0)})%16))throw Fault(4,c.rip,"unaligned MOVDQA");uint8_t v[16];m.vector_get(Operand{2,0,128,0,16,-1,1,0,3587344,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140085fd0): {next=c.rip+9; // movdqu xmmword ptr [rsp + 0x1398], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,5016,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140085fd9): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x1324]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,4900,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085fe1): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085fe9): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085fec): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140085ff4): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140085ff7): {next=c.rip+3; // and eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x140085ffa): {next=c.rip+7; // mov ebx, dword ptr [rsp + rax*4 + 0x1398]
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,0,4,0,5016,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086001): {next=c.rip+5; // jmp 0x140086626
next=next+UINT64_C(0x620);
c.rip=next;return true;}
case UINT64_C(0x140086006): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008600e): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086014): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140086016): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140086019): {next=c.rip+2; // jne 0x140086069
if(m.condition(1))next=next+UINT64_C(0x4e);
c.rip=next;return true;}
case UINT64_C(0x14008601b): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x2bb9efb3
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2bb9efb3)}));
c.rip=next;return true;}
case UINT64_C(0x140086024): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x691f6acd
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x691f6acd)}));
c.rip=next;return true;}
case UINT64_C(0x14008602d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086032): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086037): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008603a): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008603f): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086044): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086049): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008604c): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008604f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086054): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086059): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008605c): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008605f): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086064): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086069): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x7e277cbb
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7e277cbb)}));
c.rip=next;return true;}
case UINT64_C(0x140086072): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086077): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r13
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008607c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086081): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086089): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008608c): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008608f): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140086092): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086097): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008609a): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400860a2): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400860a7): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400860af): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400860b2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400860b7): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400860bf): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400860c2): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400860c7): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400860cc): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400860d4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400860d9): {next=c.rip+8; // and rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400860e1): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400860e4): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400860ec): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400860f1): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400860f9): {next=c.rip+4; // xor rax, 0x2a
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2a)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400860fd): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086102): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086107): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7bf34);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008610c): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086114): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008611c): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008611f): {next=c.rip+6; // mov r8d, 0x19f506
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x19f506)}));
c.rip=next;return true;}
case UINT64_C(0x140086125): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008612d): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc6ebe);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086132): {next=c.rip+8; // movzx ecx, byte ptr [rsp + 0x3b0]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008613a): {next=c.rip+2; // mov edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008613c): {next=c.rip+3; // imul edx, ecx
m.imul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14008613f): {next=c.rip+2; // xor dl, cl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140086141): {next=c.rip+3; // test dl, 1
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140086144): {next=c.rip+2; // je 0x1400861a6
if(m.condition(0))next=next+UINT64_C(0x60);
c.rip=next;return true;}
case UINT64_C(0x140086146): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x5ac191ff
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5ac191ff)}));
c.rip=next;return true;}
case UINT64_C(0x14008614f): {next=c.rip+5; // mov eax, 0xadf6d489
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xadf6d489)}));
c.rip=next;return true;}
case UINT64_C(0x140086154): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rax
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086159): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008615e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086163): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086166): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008616b): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086170): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086175): {next=c.rip+4; // cmp rax, 1
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140086179): {next=c.rip+2; // jae 0x1400861a1
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x14008617b): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086180): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086185): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140086188): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7beb3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008618d): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086192): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086197): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14008619a): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008619f): {next=c.rip+2; // jmp 0x140086170
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x1400861a1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400861a6): {next=c.rip+5; // mov ebx, 0xd3f48315
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xd3f48315)}));
c.rip=next;return true;}
case UINT64_C(0x1400861ab): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400861b0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400861b5): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400861ba): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400861bf): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400861c2): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400861c7): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400861cc): {next=c.rip+7; // or rcx, 0x1e8688
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1e8688)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400861d3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400861d8): {next=c.rip+5; // and eax, 0x1e8688
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1e8688)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400861dd): {next=c.rip+5; // jmp 0x140083760
next=next+UINT64_C(0xffffffffffffd57e);
c.rip=next;return true;}
case UINT64_C(0x1400861e2): {next=c.rip+5; // cmp eax, 0x29b3fa
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x29b3fa)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400861e7): {next=c.rip+6; // jg 0x1400867f2
if(m.condition(8))next=next+UINT64_C(0x605);
c.rip=next;return true;}
case UINT64_C(0x1400861ed): {next=c.rip+6; // je 0x140086645
if(m.condition(0))next=next+UINT64_C(0x452);
c.rip=next;return true;}
case UINT64_C(0x1400861f3): {next=c.rip+5; // cmp eax, 0x26503a
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x26503a)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400861f8): {next=c.rip+6; // je 0x140086569
if(m.condition(0))next=next+UINT64_C(0x36b);
c.rip=next;return true;}
case UINT64_C(0x1400861fe): {next=c.rip+5; // cmp eax, 0x265774
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x265774)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140086203): {next=c.rip+6; // je 0x14008643f
if(m.condition(0))next=next+UINT64_C(0x236);
c.rip=next;return true;}
case UINT64_C(0x140086209): {next=c.rip+5; // cmp eax, 0x290921
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x290921)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008620e): {next=c.rip+2; // je 0x140086249
if(m.condition(0))next=next+UINT64_C(0x39);
c.rip=next;return true;}
case UINT64_C(0x140086210): {next=c.rip+5; // cmp eax, 0x295b7f
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x295b7f)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140086215): {next=c.rip+6; // jne 0x14008839a
if(m.condition(1))next=next+UINT64_C(0x217f);
c.rip=next;return true;}
case UINT64_C(0x14008621b): {next=c.rip+8; // cmp dword ptr [rsp + 0xa4], 0
m.arithmetic(m.get(Operand{2,0,32,0,4,-1,1,0,164,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140086223): {next=c.rip+2; // jne 0x140086237
if(m.condition(1))next=next+UINT64_C(0x12);
c.rip=next;return true;}
case UINT64_C(0x140086225): {next=c.rip+5; // mov edx, 0x4154544c
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4154544c)}));
c.rip=next;return true;}
case UINT64_C(0x14008622a): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086232): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffc30f9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086237): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008623f): {next=c.rip+5; // call 0x140080000
{uint64_t target=next+UINT64_C(0xffffffffffff9dbc);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086244): {next=c.rip+5; // jmp 0x140088983
next=next+UINT64_C(0x273a);
c.rip=next;return true;}
case UINT64_C(0x140086249): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086251): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086254): {next=c.rip+4; // and rax, 0xfffffffffffffffe
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xfffffffffffffffe)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086258): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008625b): {next=c.rip+4; // cmp rcx, 1
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14008625f): {next=c.rip+2; // jbe 0x1400862c6
if(m.condition(4))next=next+UINT64_C(0x65);
c.rip=next;return true;}
case UINT64_C(0x140086261): {next=c.rip+5; // mov eax, 0xbdf46f9f
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xbdf46f9f)}));
c.rip=next;return true;}
case UINT64_C(0x140086266): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008626b): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x22e4b1f9
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x22e4b1f9)}));
c.rip=next;return true;}
case UINT64_C(0x140086274): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086279): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008627e): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086281): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086286): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008628b): {next=c.rip+5; // nop dword ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x140086290): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086295): {next=c.rip+4; // cmp rax, 2
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140086299): {next=c.rip+2; // jae 0x1400862c1
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x14008629b): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400862a0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400862a5): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400862a8): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7bd93);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400862ad): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400862b2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400862b7): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400862ba): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400862bf): {next=c.rip+2; // jmp 0x140086290
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x1400862c1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400862c6): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x49cfce89
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x49cfce89)}));
c.rip=next;return true;}
case UINT64_C(0x1400862cf): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400862d4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400862d9): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400862dc): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400862e1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400862e6): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400862e9): {next=c.rip+3; // or rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400862ec): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400862f1): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400862f6): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400862fe): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086301): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086306): {next=c.rip+8; // or rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008630e): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086311): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086319): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008631e): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086326): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008632b): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086333): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140086336): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008633b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086340): {next=c.rip+8; // xor qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086348): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008634d): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086355): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008635a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008635f): {next=c.rip+4; // xor rax, 0x11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x11)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086363): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086368): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008636d): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7bcce);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086372): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008637a): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086382): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086385): {next=c.rip+6; // mov r8d, 0xa81a7
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa81a7)}));
c.rip=next;return true;}
case UINT64_C(0x14008638b): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086393): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc6c58);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086398): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400863a0): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400863a3): {next=c.rip+4; // and rax, 0xfffffffffffffffe
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xfffffffffffffffe)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400863a7): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400863aa): {next=c.rip+4; // cmp rcx, 1
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400863ae): {next=c.rip+2; // jbe 0x140086400
if(m.condition(4))next=next+UINT64_C(0x50);
c.rip=next;return true;}
case UINT64_C(0x1400863b0): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x6912063
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x6912063)}));
c.rip=next;return true;}
case UINT64_C(0x1400863b9): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x4fb8808d
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4fb8808d)}));
c.rip=next;return true;}
case UINT64_C(0x1400863c2): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400863c7): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400863cc): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400863cf): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400863d4): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400863d9): {next=c.rip+4; // and rcx, 0xfffffffffffffffe
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xfffffffffffffffe)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400863dd): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400863e2): {next=c.rip+3; // sub rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400863e5): {next=c.rip+4; // cmp rax, 1
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400863e9): {next=c.rip+2; // jbe 0x1400863fb
if(m.condition(4))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x1400863eb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400863f0): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400863f6): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400863fb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086400): {next=c.rip+5; // mov ebx, 0xbfd546f7
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xbfd546f7)}));
c.rip=next;return true;}
case UINT64_C(0x140086405): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008640a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008640f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086414): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086419): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008641c): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086421): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086426): {next=c.rip+6; // and ecx, 0x24ad19
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x24ad19)}),32));
c.rip=next;return true;}
case UINT64_C(0x14008642c): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008642f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086434): {next=c.rip+6; // xor rax, 0x24ad19
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x24ad19)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008643a): {next=c.rip+5; // jmp 0x140083760
next=next+UINT64_C(0xffffffffffffd321);
c.rip=next;return true;}
case UINT64_C(0x14008643f): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086447): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008644f): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7bbec);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086454): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086459): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008645e): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x706ad105
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x706ad105)}));
c.rip=next;return true;}
case UINT64_C(0x140086467): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008646c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086471): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086474): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086479): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008647e): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140086481): {next=c.rip+3; // or rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086484): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086489): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008648e): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086496): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086499): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008649c): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008649f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400864a4): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400864a7): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400864af): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400864b4): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400864bc): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400864bf): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400864c4): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400864cc): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400864cf): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400864d4): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400864d9): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400864e1): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400864e4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400864e9): {next=c.rip+8; // or rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400864f1): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400864f4): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400864fc): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086501): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086509): {next=c.rip+4; // xor rcx, 8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008650d): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7bb2e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086512): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008651a): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086522): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086525): {next=c.rip+6; // mov r8d, 0x4f1b8
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4f1b8)}));
c.rip=next;return true;}
case UINT64_C(0x14008652b): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086533): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc6ab8);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086538): {next=c.rip+5; // mov ebx, 0xfe45d47f
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xfe45d47f)}));
c.rip=next;return true;}
case UINT64_C(0x14008653d): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086542): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086547): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008654c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086551): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140086554): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086559): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008655e): {next=c.rip+6; // add rax, 0x15ca0a
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x15ca0a)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140086564): {next=c.rip+5; // jmp 0x140085213
next=next+UINT64_C(0xffffffffffffecaa);
c.rip=next;return true;}
case UINT64_C(0x140086569): {next=c.rip+5; // mov eax, 0xdfeb8129
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xdfeb8129)}));
c.rip=next;return true;}
case UINT64_C(0x14008656e): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086573): {next=c.rip+5; // mov eax, 0xf253a22d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf253a22d)}));
c.rip=next;return true;}
case UINT64_C(0x140086578): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rax
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008657d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086582): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086587): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008658a): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008658f): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086594): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086599): {next=c.rip+4; // cmp rax, 3
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14008659d): {next=c.rip+2; // jae 0x1400865c5
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x14008659f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400865a4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400865a9): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400865ac): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7ba8f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400865b1): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400865b6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400865bb): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400865be): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400865c3): {next=c.rip+2; // jmp 0x140086594
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x1400865c5): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400865ca): {next=c.rip+8; // movzx edx, byte ptr [rsp + 0x1324]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,4900,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400865d2): {next=c.rip+8; // xor rdx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400865da): {next=c.rip+6; // mov r8d, 0x51ed
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x51ed)}));
c.rip=next;return true;}
case UINT64_C(0x1400865e0): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400865e8): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc6a03);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400865ed): {next=c.rip+8; // movdqa xmm0, xmmword ptr [rip + 0x36b6eb]
{if((Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16)||(Operand{2,0,128,0,16,-1,1,0,3585771,UINT64_C(0x0)}.kind==2&&m.address(Operand{2,0,128,0,16,-1,1,0,3585771,UINT64_C(0x0)})%16))throw Fault(4,c.rip,"unaligned MOVDQA");uint8_t v[16];m.vector_get(Operand{2,0,128,0,16,-1,1,0,3585771,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x1400865f5): {next=c.rip+9; // movdqu xmmword ptr [rsp + 0x13a8], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,5032,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x1400865fe): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x1324]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,4900,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086606): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008660e): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086611): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086619): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008661c): {next=c.rip+3; // and eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x14008661f): {next=c.rip+7; // mov ebx, dword ptr [rsp + rax*4 + 0x13a8]
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,0,4,0,5032,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086626): {next=c.rip+6; // cmp ebx, 0x2c0475
m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2c0475)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008662c): {next=c.rip+5; // mov eax, 0x295b7f
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x295b7f)}));
c.rip=next;return true;}
case UINT64_C(0x140086631): {next=c.rip+3; // cmove ebx, eax
if(m.condition(0))m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086634): {next=c.rip+5; // call 0x140002430
{uint64_t target=next+UINT64_C(0xfffffffffff7bdf7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086639): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14008663b): {next=c.rip+3; // cmovne ebx, esi
if(m.condition(1))m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008663e): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086640): {next=c.rip+5; // jmp 0x140081d56
next=next+UINT64_C(0xffffffffffffb711);
c.rip=next;return true;}
case UINT64_C(0x140086645): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008664d): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086652): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086657): {next=c.rip+8; // movsxd rax, dword ptr [rsp + 0xaa8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14008665f): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086662): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086667): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008666c): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7b9cf);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086671): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086679): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x62911df
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x62911df)}));
c.rip=next;return true;}
case UINT64_C(0x140086682): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086687): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008668c): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008668f): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086694): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086699): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400866a1): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400866a4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400866a9): {next=c.rip+8; // or rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400866b1): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400866b4): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400866bc): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400866c1): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400866c9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400866ce): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400866d6): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400866d9): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400866de): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400866e3): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400866eb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400866f0): {next=c.rip+8; // and rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400866f8): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400866fb): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086703): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086708): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086710): {next=c.rip+4; // xor rax, 0x32
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x32)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086714): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086719): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008671e): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7b91d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086723): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008672b): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086733): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086736): {next=c.rip+6; // mov r8d, 0x1ee6be
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1ee6be)}));
c.rip=next;return true;}
case UINT64_C(0x14008673c): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086744): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc68a7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086749): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086751): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086757): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086759): {next=c.rip+3; // movzx eax, cl
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008675c): {next=c.rip+3; // imul eax, edx
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14008675f): {next=c.rip+2; // test al, 1
m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140086761): {next=c.rip+2; // je 0x1400867b7
if(m.condition(0))next=next+UINT64_C(0x54);
c.rip=next;return true;}
case UINT64_C(0x140086763): {next=c.rip+5; // mov eax, 0xe884b145
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xe884b145)}));
c.rip=next;return true;}
case UINT64_C(0x140086768): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008676d): {next=c.rip+5; // mov eax, 0xfb149391
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xfb149391)}));
c.rip=next;return true;}
case UINT64_C(0x140086772): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rax
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086777): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008677c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086781): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086784): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086789): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008678e): {next=c.rip+3; // and ecx, 1
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x140086791): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086796): {next=c.rip+3; // and eax, 1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x140086799): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008679c): {next=c.rip+4; // cmp rax, 2
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400867a0): {next=c.rip+2; // jbe 0x1400867b2
if(m.condition(4))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x1400867a2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400867a7): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400867ad): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400867b2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400867b7): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x421c0af7
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x421c0af7)}));
c.rip=next;return true;}
case UINT64_C(0x1400867c0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400867c5): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400867ca): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400867cf): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400867d2): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400867d7): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400867dc): {next=c.rip+7; // or rcx, 0x85014
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x85014)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400867e3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400867e8): {next=c.rip+5; // and eax, 0x85014
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x85014)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400867ed): {next=c.rip+5; // jmp 0x140085210
next=next+UINT64_C(0xffffffffffffea1e);
c.rip=next;return true;}
case UINT64_C(0x1400867f2): {next=c.rip+5; // cmp eax, 0x2a7d9c
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2a7d9c)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400867f7): {next=c.rip+6; // je 0x140086c1e
if(m.condition(0))next=next+UINT64_C(0x421);
c.rip=next;return true;}
case UINT64_C(0x1400867fd): {next=c.rip+5; // cmp eax, 0x2a9a5a
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2a9a5a)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140086802): {next=c.rip+6; // je 0x140086a66
if(m.condition(0))next=next+UINT64_C(0x25e);
c.rip=next;return true;}
case UINT64_C(0x140086808): {next=c.rip+5; // cmp eax, 0x2bdfbf
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2bdfbf)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008680d): {next=c.rip+6; // je 0x1400868eb
if(m.condition(0))next=next+UINT64_C(0xd8);
c.rip=next;return true;}
case UINT64_C(0x140086813): {next=c.rip+5; // cmp eax, 0x2c0475
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2c0475)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140086818): {next=c.rip+6; // jne 0x14008839a
if(m.condition(1))next=next+UINT64_C(0x1b7c);
c.rip=next;return true;}
case UINT64_C(0x14008681e): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086826): {next=c.rip+8; // xor rdx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008682e): {next=c.rip+6; // mov r8d, 0x2c819e
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2c819e)}));
c.rip=next;return true;}
case UINT64_C(0x140086834): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008683c): {next=c.rip+5; // call 0x14004d210
{uint64_t target=next+UINT64_C(0xfffffffffffc69cf);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086841): {next=c.rip+8; // movsxd rax, dword ptr [rsp + 0xaa8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140086849): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086851): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086856): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008685b): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7b7e0);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086860): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086868): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086870): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086873): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7b7c8);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086878): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008687d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086882): {next=c.rip+5; // mov ebx, 0xce9c18c9
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xce9c18c9)}));
c.rip=next;return true;}
case UINT64_C(0x140086887): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008688c): {next=c.rip+5; // mov ebx, 0xa1482015
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa1482015)}));
c.rip=next;return true;}
case UINT64_C(0x140086891): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086896): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008689b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400868a0): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400868a3): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400868a8): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400868ad): {next=c.rip+4; // and rcx, 0xfffffffffffffffe
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xfffffffffffffffe)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400868b1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400868b6): {next=c.rip+3; // sub rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400868b9): {next=c.rip+4; // cmp rax, 1
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400868bd): {next=c.rip+2; // jbe 0x1400868cf
if(m.condition(4))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x1400868bf): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400868c4): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400868ca): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400868cf): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400868d4): {next=c.rip+5; // mov edx, 0x26503a
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x26503a)}));
c.rip=next;return true;}
case UINT64_C(0x1400868d9): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400868e1): {next=c.rip+5; // call 0x14004c880
{uint64_t target=next+UINT64_C(0xfffffffffffc5f9a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400868e6): {next=c.rip+5; // jmp 0x140088983
next=next+UINT64_C(0x2098);
c.rip=next;return true;}
case UINT64_C(0x1400868eb): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x7a796b37
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7a796b37)}));
c.rip=next;return true;}
case UINT64_C(0x1400868f4): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x54b75305
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x54b75305)}));
c.rip=next;return true;}
case UINT64_C(0x1400868fd): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086902): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086907): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008690a): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008690f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086914): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086919): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008691e): {next=c.rip+3; // and rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086921): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086926): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008692b): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x1701e33f
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1701e33f)}));
c.rip=next;return true;}
case UINT64_C(0x140086934): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086939): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r13
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008693e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086943): {next=c.rip+8; // xor qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008694b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086950): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140086958): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008695d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086962): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008696a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008696f): {next=c.rip+8; // and rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086977): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008697a): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086982): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086987): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008698f): {next=c.rip+4; // xor rax, 0x2c
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2c)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086993): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086998): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008699d): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7b69e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400869a2): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400869aa): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400869b2): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400869b5): {next=c.rip+6; // mov r8d, 0x1b3174
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1b3174)}));
c.rip=next;return true;}
case UINT64_C(0x1400869bb): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400869c3): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc6628);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400869c8): {next=c.rip+5; // mov ebx, 0xb706fe2d
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xb706fe2d)}));
c.rip=next;return true;}
case UINT64_C(0x1400869cd): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400869d2): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x453a3071
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x453a3071)}));
c.rip=next;return true;}
case UINT64_C(0x1400869db): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400869e0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400869e5): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400869e8): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400869ed): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400869f2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400869f7): {next=c.rip+4; // cmp rax, 3
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400869fb): {next=c.rip+2; // jae 0x140086a23
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x1400869fd): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086a02): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086a07): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140086a0a): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7b631);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086a0f): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086a14): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086a19): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140086a1c): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086a21): {next=c.rip+2; // jmp 0x1400869f2
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x140086a23): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086a28): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0xbc94a5
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xbc94a5)}));
c.rip=next;return true;}
case UINT64_C(0x140086a31): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086a36): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086a3b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086a40): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140086a43): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086a48): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086a4d): {next=c.rip+6; // and ecx, 0x3a94e2
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3a94e2)}),32));
c.rip=next;return true;}
case UINT64_C(0x140086a53): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140086a56): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086a5b): {next=c.rip+6; // xor rax, 0x3a94e2
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3a94e2)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086a61): {next=c.rip+5; // jmp 0x140085210
next=next+UINT64_C(0xffffffffffffe7aa);
c.rip=next;return true;}
case UINT64_C(0x140086a66): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x631f3233
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x631f3233)}));
c.rip=next;return true;}
case UINT64_C(0x140086a6f): {next=c.rip+5; // mov ebx, 0xdf898935
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xdf898935)}));
c.rip=next;return true;}
case UINT64_C(0x140086a74): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086a79): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086a7e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086a83): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086a86): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086a8b): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086a90): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086a95): {next=c.rip+4; // cmp rax, 3
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140086a99): {next=c.rip+2; // jae 0x140086ac1
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x140086a9b): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086aa0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086aa5): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140086aa8): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7b593);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086aad): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086ab2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086ab7): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140086aba): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086abf): {next=c.rip+2; // jmp 0x140086a90
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x140086ac1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086ac6): {next=c.rip+5; // mov ebx, 0x9cfdbca1
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x9cfdbca1)}));
c.rip=next;return true;}
case UINT64_C(0x140086acb): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086ad0): {next=c.rip+5; // mov ebx, 0xb3eb7c9f
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xb3eb7c9f)}));
c.rip=next;return true;}
case UINT64_C(0x140086ad5): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086ada): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086adf): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086ae4): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086ae7): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086aec): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086af1): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086af6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086afb): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x18ae9683
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x18ae9683)}));
c.rip=next;return true;}
case UINT64_C(0x140086b04): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086b09): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086b0e): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086b11): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086b16): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086b1b): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086b23): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086b26): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086b2b): {next=c.rip+8; // or rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086b33): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086b36): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086b3e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086b43): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140086b4b): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086b50): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086b55): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086b5d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086b62): {next=c.rip+8; // and rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086b6a): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140086b6d): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086b75): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086b7a): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086b82): {next=c.rip+4; // xor rcx, 0x1f
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1f)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086b86): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7b4b5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086b8b): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086b93): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086b9b): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086b9e): {next=c.rip+6; // mov r8d, 0x1328a9
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1328a9)}));
c.rip=next;return true;}
case UINT64_C(0x140086ba4): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086bac): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc643f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086bb1): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x729eabcb
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x729eabcb)}));
c.rip=next;return true;}
case UINT64_C(0x140086bba): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x966e69b
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x966e69b)}));
c.rip=next;return true;}
case UINT64_C(0x140086bc3): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086bc8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086bcd): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086bd0): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086bd5): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086bda): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086bdf): {next=c.rip+5; // mov ebx, 0xa8dfcfcd
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa8dfcfcd)}));
c.rip=next;return true;}
case UINT64_C(0x140086be4): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086be9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086bee): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086bf3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086bf8): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140086bfb): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086c00): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086c05): {next=c.rip+6; // and ecx, 0x2c9934
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2c9934)}),32));
c.rip=next;return true;}
case UINT64_C(0x140086c0b): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140086c0e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086c13): {next=c.rip+6; // xor rax, 0x2c9934
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2c9934)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086c19): {next=c.rip+5; // jmp 0x140081d27
next=next+UINT64_C(0xffffffffffffb109);
c.rip=next;return true;}
case UINT64_C(0x140086c1e): {next=c.rip+9; // movzx r8d, byte ptr [rsp + 0x1324]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,4900,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086c27): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086c2f): {next=c.rip+4; // cmp r8d, 0x3e
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3e)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140086c33): {next=c.rip+2; // jae 0x140086c82
if(m.condition(3))next=next+UINT64_C(0x4d);
c.rip=next;return true;}
case UINT64_C(0x140086c35): {next=c.rip+8; // inc qword ptr [rsp + 0x1208]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,4,-1,1,0,4616,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,4616,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140086c3d): {next=c.rip+5; // mov ebx, 4
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4)}));
c.rip=next;return true;}
case UINT64_C(0x140086c42): {next=c.rip+8; // cmp dword ptr [rsp + 0xa4], 0
m.arithmetic(m.get(Operand{2,0,32,0,4,-1,1,0,164,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140086c4a): {next=c.rip+5; // mov eax, 0x80000004
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x80000004)}));
c.rip=next;return true;}
case UINT64_C(0x140086c4f): {next=c.rip+3; // cmovne ebx, eax
if(m.condition(1))m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086c52): {next=c.rip+5; // mov edx, 1
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x140086c57): {next=c.rip+5; // call 0x14004da40
{uint64_t target=next+UINT64_C(0xfffffffffffc6de4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086c5c): {next=c.rip+3; // mov r8d, eax
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086c5f): {next=c.rip+5; // mov edx, 1
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x140086c64): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086c6c): {next=c.rip+5; // call 0x14007fb40
{uint64_t target=next+UINT64_C(0xffffffffffff8ecf);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086c71): {next=c.rip+3; // mov r8, rdi
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086c74): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086c76): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086c7e): {next=c.rip+2; // call rax
{uint64_t target=m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086c80): {next=c.rip+2; // jmp 0x140086cb4
next=next+UINT64_C(0x32);
c.rip=next;return true;}
case UINT64_C(0x140086c82): {next=c.rip+7; // inc dword ptr [rsp + 0x1210]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,4,-1,1,0,4624,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,4,-1,1,0,4624,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140086c89): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140086c8b): {next=c.rip+5; // call 0x140049e60
{uint64_t target=next+UINT64_C(0xfffffffffffc31d0);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086c90): {next=c.rip+5; // mov edx, 1
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x140086c95): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086c9d): {next=c.rip+5; // call 0x140049fa0
{uint64_t target=next+UINT64_C(0xfffffffffffc32fe);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086ca2): {next=c.rip+5; // mov edx, 0x2188a4
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}));
c.rip=next;return true;}
case UINT64_C(0x140086ca7): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086caf): {next=c.rip+5; // call 0x140049af0
{uint64_t target=next+UINT64_C(0xfffffffffffc2e3c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086cb4): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086cbc): {next=c.rip+5; // call 0x140049ee0
{uint64_t target=next+UINT64_C(0xfffffffffffc321f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086cc1): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x140086cc3): {next=c.rip+6; // jne 0x140088983
if(m.condition(1))next=next+UINT64_C(0x1cba);
c.rip=next;return true;}
case UINT64_C(0x140086cc9): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086cd1): {next=c.rip+5; // call 0x140049a30
{uint64_t target=next+UINT64_C(0xfffffffffffc2d5a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086cd6): {next=c.rip+5; // cmp eax, 0x2a7d9c
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2a7d9c)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140086cdb): {next=c.rip+6; // jne 0x140088983
if(m.condition(1))next=next+UINT64_C(0x1ca2);
c.rip=next;return true;}
case UINT64_C(0x140086ce1): {next=c.rip+5; // mov edx, 0xcaa88
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xcaa88)}));
c.rip=next;return true;}
case UINT64_C(0x140086ce6): {next=c.rip+5; // jmp 0x140081d56
next=next+UINT64_C(0xffffffffffffb06b);
c.rip=next;return true;}
case UINT64_C(0x140086ceb): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086cf3): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086cfb): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7b340);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086d00): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086d05): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086d0a): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x26b9324f
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x26b9324f)}));
c.rip=next;return true;}
case UINT64_C(0x140086d13): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086d18): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086d1d): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086d20): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086d25): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086d2a): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140086d2d): {next=c.rip+3; // or rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086d30): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086d35): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086d3a): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086d42): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086d47): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086d4f): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140086d52): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086d5a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086d5f): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086d67): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140086d6a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086d6f): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086d77): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140086d7a): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086d7f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086d84): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086d8c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086d91): {next=c.rip+8; // and rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086d99): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140086d9c): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086da4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086da9): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086db1): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086db6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086dbb): {next=c.rip+4; // xor rax, 0x20
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086dbf): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086dc4): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086dc9): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7b272);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086dce): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086dd6): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086dde): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086de1): {next=c.rip+6; // mov r8d, 0x13c6e0
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x13c6e0)}));
c.rip=next;return true;}
case UINT64_C(0x140086de7): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086def): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc61fc);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086df4): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x2122d813
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2122d813)}));
c.rip=next;return true;}
case UINT64_C(0x140086dfd): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086e02): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086e07): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086e0c): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140086e0f): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086e14): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086e19): {next=c.rip+6; // add rax, 0x2e4e6e
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2e4e6e)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140086e1f): {next=c.rip+5; // jmp 0x140083763
next=next+UINT64_C(0xffffffffffffc93f);
c.rip=next;return true;}
case UINT64_C(0x140086e24): {next=c.rip+5; // cmp eax, 0x36da17
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x36da17)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140086e29): {next=c.rip+6; // jg 0x140087bdb
if(m.condition(8))next=next+UINT64_C(0xdac);
c.rip=next;return true;}
case UINT64_C(0x140086e2f): {next=c.rip+6; // je 0x140087b67
if(m.condition(0))next=next+UINT64_C(0xd32);
c.rip=next;return true;}
case UINT64_C(0x140086e35): {next=c.rip+5; // cmp eax, 0x3070be
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3070be)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140086e3a): {next=c.rip+6; // jg 0x140087587
if(m.condition(8))next=next+UINT64_C(0x747);
c.rip=next;return true;}
case UINT64_C(0x140086e40): {next=c.rip+6; // je 0x140087445
if(m.condition(0))next=next+UINT64_C(0x5ff);
c.rip=next;return true;}
case UINT64_C(0x140086e46): {next=c.rip+5; // cmp eax, 0x2d409a
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2d409a)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140086e4b): {next=c.rip+6; // je 0x14008735f
if(m.condition(0))next=next+UINT64_C(0x50e);
c.rip=next;return true;}
case UINT64_C(0x140086e51): {next=c.rip+5; // cmp eax, 0x2e08cf
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2e08cf)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140086e56): {next=c.rip+6; // je 0x14008718a
if(m.condition(0))next=next+UINT64_C(0x32e);
c.rip=next;return true;}
case UINT64_C(0x140086e5c): {next=c.rip+5; // cmp eax, 0x2e4e6e
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2e4e6e)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140086e61): {next=c.rip+6; // je 0x140087041
if(m.condition(0))next=next+UINT64_C(0x1da);
c.rip=next;return true;}
case UINT64_C(0x140086e67): {next=c.rip+5; // cmp eax, 0x2e7580
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2e7580)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140086e6c): {next=c.rip+6; // jne 0x14008839a
if(m.condition(1))next=next+UINT64_C(0x1528);
c.rip=next;return true;}
case UINT64_C(0x140086e72): {next=c.rip+5; // mov ebx, 0xe3779279
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xe3779279)}));
c.rip=next;return true;}
case UINT64_C(0x140086e77): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086e7c): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x4a1823ff
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4a1823ff)}));
c.rip=next;return true;}
case UINT64_C(0x140086e85): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086e8a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086e8f): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086e92): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086e97): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086e9c): {next=c.rip+4; // nop dword ptr [rax]

c.rip=next;return true;}
case UINT64_C(0x140086ea0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086ea5): {next=c.rip+4; // cmp rax, 3
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140086ea9): {next=c.rip+2; // jae 0x140086ed1
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x140086eab): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086eb0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086eb5): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140086eb8): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7b183);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086ebd): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086ec2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086ec7): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140086eca): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086ecf): {next=c.rip+2; // jmp 0x140086ea0
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x140086ed1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086ed6): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x6e88f7bb
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x6e88f7bb)}));
c.rip=next;return true;}
case UINT64_C(0x140086edf): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086ee4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086ee9): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140086eec): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086ef1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086ef6): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086efe): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086f01): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140086f04): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140086f07): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086f0c): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140086f0f): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086f17): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086f1c): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086f24): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086f29): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086f31): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140086f34): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086f39): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086f3e): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086f46): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086f49): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086f4e): {next=c.rip+8; // or rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086f56): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086f59): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086f61): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086f66): {next=c.rip+8; // add qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140086f6e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086f73): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086f7b): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086f80): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086f85): {next=c.rip+4; // xor rax, 0x22
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x22)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086f89): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086f8e): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086f93): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7b0a8);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086f98): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086fa0): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086fa8): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086fab): {next=c.rip+6; // mov r8d, 0x15034e
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x15034e)}));
c.rip=next;return true;}
case UINT64_C(0x140086fb1): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086fb9): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc6032);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140086fbe): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x497b6def
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x497b6def)}));
c.rip=next;return true;}
case UINT64_C(0x140086fc7): {next=c.rip+5; // mov ebx, 0xb0af86f5
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xb0af86f5)}));
c.rip=next;return true;}
case UINT64_C(0x140086fcc): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086fd1): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086fd6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086fdb): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140086fde): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086fe3): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086fe8): {next=c.rip+3; // and ecx, 1
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x140086feb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140086ff0): {next=c.rip+3; // and eax, 1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x140086ff3): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140086ff6): {next=c.rip+4; // cmp rax, 2
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140086ffa): {next=c.rip+2; // jbe 0x14008700c
if(m.condition(4))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x140086ffc): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087001): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087007): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008700c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087011): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x56028775
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x56028775)}));
c.rip=next;return true;}
case UINT64_C(0x14008701a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008701f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087024): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087029): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008702c): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087031): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087036): {next=c.rip+6; // add rax, 0x132233
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x132233)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008703c): {next=c.rip+5; // jmp 0x140083763
next=next+UINT64_C(0xffffffffffffc722);
c.rip=next;return true;}
case UINT64_C(0x140087041): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087049): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087051): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7afea);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087056): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008705b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087060): {next=c.rip+5; // mov ebx, 0xd0b83e01
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xd0b83e01)}));
c.rip=next;return true;}
case UINT64_C(0x140087065): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008706a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008706f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087074): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087077): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008707c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087081): {next=c.rip+8; // xor qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087089): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008708e): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087096): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008709b): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400870a0): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400870a8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400870ad): {next=c.rip+8; // and rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400870b5): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400870b8): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400870c0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400870c5): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400870cd): {next=c.rip+4; // xor rax, 0x21
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x21)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400870d1): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400870d6): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x38]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400870db): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400870e0): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400870e3): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400870e8): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400870eb): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7af50);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400870f0): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400870f8): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087100): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087103): {next=c.rip+6; // mov r8d, 0x146517
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x146517)}));
c.rip=next;return true;}
case UINT64_C(0x140087109): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087111): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc5eda);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087116): {next=c.rip+5; // mov ebx, 0xd4bf0535
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xd4bf0535)}));
c.rip=next;return true;}
case UINT64_C(0x14008711b): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087120): {next=c.rip+5; // mov ebx, 0x833b4299
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x833b4299)}));
c.rip=next;return true;}
case UINT64_C(0x140087125): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008712a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008712f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087134): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087137): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008713c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087141): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087146): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008714b): {next=c.rip+5; // mov ebx, 0xc845c051
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc845c051)}));
c.rip=next;return true;}
case UINT64_C(0x140087150): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087155): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008715a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008715f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087164): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140087167): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008716c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087171): {next=c.rip+6; // and ecx, 0x2e7580
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2e7580)}),32));
c.rip=next;return true;}
case UINT64_C(0x140087177): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008717a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008717f): {next=c.rip+6; // xor rax, 0x2e7580
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2e7580)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087185): {next=c.rip+5; // jmp 0x140081d27
next=next+UINT64_C(0xffffffffffffab9d);
c.rip=next;return true;}
case UINT64_C(0x14008718a): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087192): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffc29d9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087197): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087199): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x1324]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,4900,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400871a1): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400871a4): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0xab0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400871ac): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7ae8f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400871b1): {next=c.rip+8; // mov qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400871b9): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2760,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400871c1): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400871c9): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400871cc): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7ae6f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400871d1): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400871d9): {next=c.rip+5; // mov edx, 9
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x9)}));
c.rip=next;return true;}
case UINT64_C(0x1400871de): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400871e6): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc26e5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400871eb): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400871ed): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400871f5): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffc51c6);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400871fa): {next=c.rip+5; // mov edx, 8
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8)}));
c.rip=next;return true;}
case UINT64_C(0x1400871ff): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087207): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc26c4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008720c): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008720e): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087216): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffc51a5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008721b): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087223): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffc2948);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087228): {next=c.rip+7; // cmp eax, dword ptr [rsp + 0x8b8]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,4,-1,1,0,2232,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008722f): {next=c.rip+2; // jae 0x140087240
if(m.condition(3))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x140087231): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087233): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008723b): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffc5180);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087240): {next=c.rip+5; // mov edx, 8
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8)}));
c.rip=next;return true;}
case UINT64_C(0x140087245): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008724d): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc267e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087252): {next=c.rip+3; // mov r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087255): {next=c.rip+5; // mov edx, 9
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x9)}));
c.rip=next;return true;}
case UINT64_C(0x14008725a): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087262): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc2739);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087267): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x1aa92287
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1aa92287)}));
c.rip=next;return true;}
case UINT64_C(0x140087270): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x326499d9
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x326499d9)}));
c.rip=next;return true;}
case UINT64_C(0x140087279): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008727e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087283): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087286): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008728b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087290): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087295): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008729a): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x4bd9593b
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4bd9593b)}));
c.rip=next;return true;}
case UINT64_C(0x1400872a3): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400872a8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400872ad): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400872b0): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400872b5): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400872ba): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400872bd): {next=c.rip+3; // or rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400872c0): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400872c5): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400872ca): {next=c.rip+8; // xor qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400872d2): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400872d7): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400872df): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400872e2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400872e7): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400872ef): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400872f2): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400872f7): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400872fc): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087304): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087307): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008730c): {next=c.rip+8; // or rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087314): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087317): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008731f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087324): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008732c): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087334): {next=c.rip+5; // call 0x1400023e0
{uint64_t target=next+UINT64_C(0xfffffffffff7b0a7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087339): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14008733b): {next=c.rip+2; // je 0x140087355
if(m.condition(0))next=next+UINT64_C(0x18);
c.rip=next;return true;}
case UINT64_C(0x14008733d): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087345): {next=c.rip+2; // and al, 3
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3)}),8));
c.rip=next;return true;}
case UINT64_C(0x140087347): {next=c.rip+2; // cmp al, 1
m.arithmetic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140087349): {next=c.rip+2; // jne 0x140087355
if(m.condition(1))next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x14008734b): {next=c.rip+5; // mov edx, 0x119872
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x119872)}));
c.rip=next;return true;}
case UINT64_C(0x140087350): {next=c.rip+5; // jmp 0x14008534f
next=next+UINT64_C(0xffffffffffffdffa);
c.rip=next;return true;}
case UINT64_C(0x140087355): {next=c.rip+5; // mov edx, 0xce50c
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xce50c)}));
c.rip=next;return true;}
case UINT64_C(0x14008735a): {next=c.rip+5; // jmp 0x140081d56
next=next+UINT64_C(0xffffffffffffa9f7);
c.rip=next;return true;}
case UINT64_C(0x14008735f): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087367): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008736d): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14008736f): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140087372): {next=c.rip+2; // jne 0x1400873cd
if(m.condition(1))next=next+UINT64_C(0x59);
c.rip=next;return true;}
case UINT64_C(0x140087374): {next=c.rip+5; // mov eax, 0x91c412f7
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x91c412f7)}));
c.rip=next;return true;}
case UINT64_C(0x140087379): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008737e): {next=c.rip+5; // mov eax, 0xa90b048d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa90b048d)}));
c.rip=next;return true;}
case UINT64_C(0x140087383): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rax
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087388): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008738d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087392): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087395): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008739a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008739f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400873a4): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400873a8): {next=c.rip+3; // and ecx, 1
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400873ab): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400873b0): {next=c.rip+3; // and eax, 1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400873b3): {next=c.rip+3; // cmp rcx, rax
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400873b6): {next=c.rip+2; // je 0x1400873c8
if(m.condition(0))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x1400873b8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400873bd): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400873c3): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400873c8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400873cd): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400873d5): {next=c.rip+3; // inc rcx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400873d8): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7ac63);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400873dd): {next=c.rip+8; // xor qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400873e5): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0xf4a6231
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf4a6231)}));
c.rip=next;return true;}
case UINT64_C(0x1400873ee): {next=c.rip+5; // mov ebx, 0xf33f72c7
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf33f72c7)}));
c.rip=next;return true;}
case UINT64_C(0x1400873f3): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400873f8): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400873fd): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087402): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087405): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008740a): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008740f): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140087410): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087415): {next=c.rip+4; // cmp rax, 3
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140087419): {next=c.rip+6; // jae 0x140085f6a
if(m.condition(3))next=next+UINT64_C(0xffffffffffffeb4b);
c.rip=next;return true;}
case UINT64_C(0x14008741f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087424): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087429): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008742c): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7ac0f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087431): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087436): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008743b): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14008743e): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087443): {next=c.rip+2; // jmp 0x140087410
next=next+UINT64_C(0xffffffffffffffcb);
c.rip=next;return true;}
case UINT64_C(0x140087445): {next=c.rip+8; // movzx ecx, byte ptr [rsp + 0x3b0]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008744d): {next=c.rip+2; // mov edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008744f): {next=c.rip+3; // imul edx, ecx
m.imul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140087452): {next=c.rip+2; // xor dl, cl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140087454): {next=c.rip+3; // test dl, 1
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140087457): {next=c.rip+2; // je 0x14008749a
if(m.condition(0))next=next+UINT64_C(0x41);
c.rip=next;return true;}
case UINT64_C(0x140087459): {next=c.rip+5; // mov eax, 0xcc64a791
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xcc64a791)}));
c.rip=next;return true;}
case UINT64_C(0x14008745e): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087463): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x193edc91
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x193edc91)}));
c.rip=next;return true;}
case UINT64_C(0x14008746c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087471): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087476): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087479): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008747e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087483): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087488): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008748d): {next=c.rip+3; // and rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087490): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087495): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008749a): {next=c.rip+5; // mov ebx, 0xc34c4585
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc34c4585)}));
c.rip=next;return true;}
case UINT64_C(0x14008749f): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400874a4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400874a9): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r13
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400874ae): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400874b3): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400874bb): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400874be): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400874c3): {next=c.rip+8; // or rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400874cb): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400874ce): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400874d6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400874db): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400874e3): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400874e8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400874ed): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400874f5): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400874f8): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400874fb): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400874fe): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087503): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087506): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008750e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087513): {next=c.rip+8; // add qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008751b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087520): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087528): {next=c.rip+4; // xor rcx, 0x2e
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2e)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008752c): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7ab0f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087531): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087539): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087541): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087544): {next=c.rip+6; // mov r8d, 0x1c6de2
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1c6de2)}));
c.rip=next;return true;}
case UINT64_C(0x14008754a): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087552): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc5a99);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087557): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x61c06671
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x61c06671)}));
c.rip=next;return true;}
case UINT64_C(0x140087560): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087565): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008756a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008756f): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140087572): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087577): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008757c): {next=c.rip+6; // add rax, 0x31f8f7
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x31f8f7)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087582): {next=c.rip+5; // jmp 0x140083763
next=next+UINT64_C(0xffffffffffffc1dc);
c.rip=next;return true;}
case UINT64_C(0x140087587): {next=c.rip+5; // cmp eax, 0x31f8f7
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x31f8f7)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008758c): {next=c.rip+6; // je 0x1400879b3
if(m.condition(0))next=next+UINT64_C(0x421);
c.rip=next;return true;}
case UINT64_C(0x140087592): {next=c.rip+5; // cmp eax, 0x322898
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x322898)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140087597): {next=c.rip+6; // je 0x1400878e6
if(m.condition(0))next=next+UINT64_C(0x349);
c.rip=next;return true;}
case UINT64_C(0x14008759d): {next=c.rip+5; // cmp eax, 0x32966a
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x32966a)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400875a2): {next=c.rip+6; // je 0x14008771c
if(m.condition(0))next=next+UINT64_C(0x174);
c.rip=next;return true;}
case UINT64_C(0x1400875a8): {next=c.rip+5; // cmp eax, 0x35606a
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x35606a)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400875ad): {next=c.rip+6; // jne 0x14008839a
if(m.condition(1))next=next+UINT64_C(0xde7);
c.rip=next;return true;}
case UINT64_C(0x1400875b3): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400875bb): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400875c3): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7aa78);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400875c8): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400875cd): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400875d2): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400875da): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400875e2): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7aa59);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400875e7): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400875ec): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400875f1): {next=c.rip+5; // mov eax, 0xc2a922f7
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc2a922f7)}));
c.rip=next;return true;}
case UINT64_C(0x1400875f6): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rax
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400875fb): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087600): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087605): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087608): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008760d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087612): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140087615): {next=c.rip+3; // or rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087618): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008761d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087622): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008762a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008762f): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087637): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008763a): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087642): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087647): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008764f): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087654): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087659): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087661): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087664): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087669): {next=c.rip+8; // or rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087671): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087674): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008767c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087681): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xab0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087689): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008768c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087691): {next=c.rip+8; // xor rax, qword ptr [rsp + 0xab0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087699): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008769c): {next=c.rip+8; // mov qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400876a4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400876a9): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400876b1): {next=c.rip+4; // xor rcx, 3
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400876b5): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7a986);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400876ba): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400876c2): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400876ca): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400876cd): {next=c.rip+6; // mov r8d, 0x1daa5
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1daa5)}));
c.rip=next;return true;}
case UINT64_C(0x1400876d3): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400876db): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc5910);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400876e0): {next=c.rip+5; // mov ebx, 0xd5ce988f
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xd5ce988f)}));
c.rip=next;return true;}
case UINT64_C(0x1400876e5): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400876ea): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400876ef): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400876f4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400876f9): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400876fc): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087701): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087706): {next=c.rip+7; // or rcx, 0x119872
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x119872)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008770d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087712): {next=c.rip+5; // and eax, 0x119872
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x119872)}),32));
c.rip=next;return true;}
case UINT64_C(0x140087717): {next=c.rip+5; // jmp 0x140081d27
next=next+UINT64_C(0xffffffffffffa60b);
c.rip=next;return true;}
case UINT64_C(0x14008771c): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087724): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008772c): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7a90f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087731): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087736): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008773b): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x2b39b665
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2b39b665)}));
c.rip=next;return true;}
case UINT64_C(0x140087744): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087749): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008774e): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087751): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087756): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008775b): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008775e): {next=c.rip+3; // or rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087761): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087766): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008776b): {next=c.rip+8; // xor qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087773): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087778): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087780): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087785): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008778a): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087792): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087795): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087798): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008779b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400877a0): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400877a3): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400877ab): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400877b0): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400877b8): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400877bd): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400877c2): {next=c.rip+4; // xor rax, 0x1a
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1a)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400877c6): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400877cb): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400877d0): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7a86b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400877d5): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400877dd): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400877e5): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400877e8): {next=c.rip+6; // mov r8d, 0x101196
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x101196)}));
c.rip=next;return true;}
case UINT64_C(0x1400877ee): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400877f6): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc57f5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400877fb): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087803): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087809): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008780b): {next=c.rip+3; // movzx eax, cl
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008780e): {next=c.rip+3; // imul eax, edx
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140087811): {next=c.rip+2; // test al, 1
m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140087813): {next=c.rip+2; // jne 0x14008787a
if(m.condition(1))next=next+UINT64_C(0x65);
c.rip=next;return true;}
case UINT64_C(0x140087815): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x8d1b601
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8d1b601)}));
c.rip=next;return true;}
case UINT64_C(0x14008781e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087823): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087828): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008782d): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140087830): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087835): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008783a): {next=c.rip+6; // and ecx, 0xe0bf0
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xe0bf0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140087840): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087843): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087848): {next=c.rip+6; // xor rax, 0xe0bf0
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xe0bf0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008784e): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087851): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087856): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x70]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008785b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087860): {next=c.rip+2; // and edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140087862): {next=c.rip+2; // add edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x140087864): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x70]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087869): {next=c.rip+2; // sub ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14008786b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087870): {next=c.rip+2; // add eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x140087872): {next=c.rip+3; // movsxd rdx, eax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140087875): {next=c.rip+5; // jmp 0x14008534f
next=next+UINT64_C(0xffffffffffffdad5);
c.rip=next;return true;}
case UINT64_C(0x14008787a): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x35a2d433
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x35a2d433)}));
c.rip=next;return true;}
case UINT64_C(0x140087883): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x6cf7e887
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x6cf7e887)}));
c.rip=next;return true;}
case UINT64_C(0x14008788c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087891): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087896): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087899): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008789e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400878a3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400878a8): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x8d1b601
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8d1b601)}));
c.rip=next;return true;}
case UINT64_C(0x1400878b1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400878b6): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400878bb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400878c0): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400878c3): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400878c8): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400878cd): {next=c.rip+6; // and ecx, 0xe0bf0
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xe0bf0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400878d3): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400878d6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400878db): {next=c.rip+6; // xor rax, 0xe0bf0
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xe0bf0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400878e1): {next=c.rip+5; // jmp 0x140085210
next=next+UINT64_C(0xffffffffffffd92a);
c.rip=next;return true;}
case UINT64_C(0x1400878e6): {next=c.rip+9; // movzx r8d, byte ptr [rsp + 0x1324]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,4900,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400878ef): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400878f7): {next=c.rip+4; // cmp r8d, 0x3e
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3e)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400878fb): {next=c.rip+2; // jae 0x14008794a
if(m.condition(3))next=next+UINT64_C(0x4d);
c.rip=next;return true;}
case UINT64_C(0x1400878fd): {next=c.rip+8; // inc qword ptr [rsp + 0x1208]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,4,-1,1,0,4616,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,4616,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140087905): {next=c.rip+5; // mov ebx, 4
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4)}));
c.rip=next;return true;}
case UINT64_C(0x14008790a): {next=c.rip+8; // cmp dword ptr [rsp + 0xa4], 0
m.arithmetic(m.get(Operand{2,0,32,0,4,-1,1,0,164,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140087912): {next=c.rip+5; // mov eax, 0x80000004
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x80000004)}));
c.rip=next;return true;}
case UINT64_C(0x140087917): {next=c.rip+3; // cmovne ebx, eax
if(m.condition(1))m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008791a): {next=c.rip+5; // mov edx, 2
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}));
c.rip=next;return true;}
case UINT64_C(0x14008791f): {next=c.rip+5; // call 0x14004da40
{uint64_t target=next+UINT64_C(0xfffffffffffc611c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087924): {next=c.rip+3; // mov r8d, eax
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087927): {next=c.rip+5; // mov edx, 2
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}));
c.rip=next;return true;}
case UINT64_C(0x14008792c): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087934): {next=c.rip+5; // call 0x14007fb40
{uint64_t target=next+UINT64_C(0xffffffffffff8207);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087939): {next=c.rip+3; // mov r8, rdi
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008793c): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008793e): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087946): {next=c.rip+2; // call rax
{uint64_t target=m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087948): {next=c.rip+2; // jmp 0x14008797c
next=next+UINT64_C(0x32);
c.rip=next;return true;}
case UINT64_C(0x14008794a): {next=c.rip+7; // inc dword ptr [rsp + 0x1210]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,4,-1,1,0,4624,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,4,-1,1,0,4624,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140087951): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140087953): {next=c.rip+5; // call 0x140049e60
{uint64_t target=next+UINT64_C(0xfffffffffffc2508);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087958): {next=c.rip+5; // mov edx, 1
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14008795d): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087965): {next=c.rip+5; // call 0x140049fa0
{uint64_t target=next+UINT64_C(0xfffffffffffc2636);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008796a): {next=c.rip+5; // mov edx, 0x2188a4
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}));
c.rip=next;return true;}
case UINT64_C(0x14008796f): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087977): {next=c.rip+5; // call 0x140049af0
{uint64_t target=next+UINT64_C(0xfffffffffffc2174);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008797c): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087984): {next=c.rip+5; // call 0x140049ee0
{uint64_t target=next+UINT64_C(0xfffffffffffc2557);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087989): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14008798b): {next=c.rip+6; // jne 0x140088983
if(m.condition(1))next=next+UINT64_C(0xff2);
c.rip=next;return true;}
case UINT64_C(0x140087991): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087999): {next=c.rip+5; // call 0x140049a30
{uint64_t target=next+UINT64_C(0xfffffffffffc2092);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008799e): {next=c.rip+5; // cmp eax, 0x322898
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x322898)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400879a3): {next=c.rip+6; // jne 0x140088983
if(m.condition(1))next=next+UINT64_C(0xfda);
c.rip=next;return true;}
case UINT64_C(0x1400879a9): {next=c.rip+5; // mov edx, 0x101651
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x101651)}));
c.rip=next;return true;}
case UINT64_C(0x1400879ae): {next=c.rip+5; // jmp 0x140081d56
next=next+UINT64_C(0xffffffffffffa3a3);
c.rip=next;return true;}
case UINT64_C(0x1400879b3): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400879bb): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400879c1): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400879c3): {next=c.rip+3; // movzx eax, cl
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400879c6): {next=c.rip+3; // imul eax, edx
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400879c9): {next=c.rip+2; // test al, 1
m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400879cb): {next=c.rip+2; // je 0x140087a1c
if(m.condition(0))next=next+UINT64_C(0x4f);
c.rip=next;return true;}
case UINT64_C(0x1400879cd): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x7cf102db
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7cf102db)}));
c.rip=next;return true;}
case UINT64_C(0x1400879d6): {next=c.rip+5; // mov eax, 0x99ce0995
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x99ce0995)}));
c.rip=next;return true;}
case UINT64_C(0x1400879db): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rax
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400879e0): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400879e5): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400879ea): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400879ed): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400879f2): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400879f7): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400879fc): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400879ff): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087a02): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087a07): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087a0c): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087a0f): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087a12): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087a17): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087a1c): {next=c.rip+5; // mov ebx, 0x9c660693
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x9c660693)}));
c.rip=next;return true;}
case UINT64_C(0x140087a21): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087a26): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087a2b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087a30): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087a33): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087a38): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087a3d): {next=c.rip+8; // xor qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087a45): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087a4a): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087a52): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087a57): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087a5c): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087a64): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087a67): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087a6c): {next=c.rip+8; // or rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087a74): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087a77): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087a7f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087a84): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xab0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087a8c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087a91): {next=c.rip+8; // and rax, qword ptr [rsp + 0xab0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087a99): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087a9c): {next=c.rip+8; // mov qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087aa4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087aa9): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ab1): {next=c.rip+4; // xor rcx, 0x2f
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2f)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087ab5): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7a586);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087aba): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ac2): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087aca): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087acd): {next=c.rip+6; // mov r8d, 0x1d0c19
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1d0c19)}));
c.rip=next;return true;}
case UINT64_C(0x140087ad3): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087adb): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc5510);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087ae0): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ae8): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087aee): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140087af0): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140087af3): {next=c.rip+2; // jne 0x140087b29
if(m.condition(1))next=next+UINT64_C(0x34);
c.rip=next;return true;}
case UINT64_C(0x140087af5): {next=c.rip+5; // mov eax, 0xed83a927
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xed83a927)}));
c.rip=next;return true;}
case UINT64_C(0x140087afa): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087aff): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x3294d94d
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3294d94d)}));
c.rip=next;return true;}
case UINT64_C(0x140087b08): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087b0d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087b12): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087b15): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087b1a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087b1f): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087b24): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087b29): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x1d3030f5
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1d3030f5)}));
c.rip=next;return true;}
case UINT64_C(0x140087b32): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087b37): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087b3c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087b41): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140087b44): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087b49): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087b4e): {next=c.rip+6; // and ecx, 0x949f0
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x949f0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140087b54): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087b57): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087b5c): {next=c.rip+6; // xor rax, 0x949f0
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x949f0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087b62): {next=c.rip+5; // jmp 0x140083760
next=next+UINT64_C(0xffffffffffffbbf9);
c.rip=next;return true;}
case UINT64_C(0x140087b67): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087b6f): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087b77): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7a4c4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087b7c): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087b81): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087b86): {next=c.rip+7; // mov ecx, dword ptr [rsp + 0xa3c]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,2620,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087b8d): {next=c.rip+10; // movabs rbx, 0xd6e8feb86659fd93
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x140087b97): {next=c.rip+4; // imul rcx, rbx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140087b9b): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x1324]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,4900,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ba3): {next=c.rip+10; // movabs rbx, 0x9e3779b97f4a7c15
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140087bad): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140087bb1): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087bb4): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0xac8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2760,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087bbc): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7a47f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087bc1): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140087bc5): {next=c.rip+3; // and eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x140087bc8): {next=c.rip+7; // lea rcx, [rip - 0x87bcf]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-555983,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087bcf): {next=c.rip+7; // mov edx, dword ptr [rcx + rax*4 + 0x3e0490]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,0,4,0,4064400,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087bd6): {next=c.rip+5; // jmp 0x140081d56
next=next+UINT64_C(0xffffffffffffa17b);
c.rip=next;return true;}
case UINT64_C(0x140087bdb): {next=c.rip+5; // cmp eax, 0x3c543b
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3c543b)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140087be0): {next=c.rip+6; // jg 0x140088379
if(m.condition(8))next=next+UINT64_C(0x793);
c.rip=next;return true;}
case UINT64_C(0x140087be6): {next=c.rip+6; // je 0x1400881f6
if(m.condition(0))next=next+UINT64_C(0x60a);
c.rip=next;return true;}
case UINT64_C(0x140087bec): {next=c.rip+5; // cmp eax, 0x378d95
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x378d95)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140087bf1): {next=c.rip+6; // je 0x140088088
if(m.condition(0))next=next+UINT64_C(0x491);
c.rip=next;return true;}
case UINT64_C(0x140087bf7): {next=c.rip+5; // cmp eax, 0x38f6c0
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x38f6c0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140087bfc): {next=c.rip+6; // je 0x140087e72
if(m.condition(0))next=next+UINT64_C(0x270);
c.rip=next;return true;}
case UINT64_C(0x140087c02): {next=c.rip+5; // cmp eax, 0x3a94e2
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3a94e2)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140087c07): {next=c.rip+2; // je 0x140087c75
if(m.condition(0))next=next+UINT64_C(0x6c);
c.rip=next;return true;}
case UINT64_C(0x140087c09): {next=c.rip+5; // cmp eax, 0x3c061e
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3c061e)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140087c0e): {next=c.rip+6; // jne 0x14008839a
if(m.condition(1))next=next+UINT64_C(0x786);
c.rip=next;return true;}
case UINT64_C(0x140087c14): {next=c.rip+8; // movzx edx, byte ptr [rsp + 0x1324]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,4900,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087c1c): {next=c.rip+8; // xor rdx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087c24): {next=c.rip+6; // mov r8d, 0xf5c7
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf5c7)}));
c.rip=next;return true;}
case UINT64_C(0x140087c2a): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087c32): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc53b9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087c37): {next=c.rip+8; // movdqa xmm0, xmmword ptr [rip + 0x36a0a1]
{if((Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16)||(Operand{2,0,128,0,16,-1,1,0,3580065,UINT64_C(0x0)}.kind==2&&m.address(Operand{2,0,128,0,16,-1,1,0,3580065,UINT64_C(0x0)})%16))throw Fault(4,c.rip,"unaligned MOVDQA");uint8_t v[16];m.vector_get(Operand{2,0,128,0,16,-1,1,0,3580065,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140087c3f): {next=c.rip+9; // movdqu xmmword ptr [rsp + 0x13b8], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,5048,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140087c48): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x1324]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,4900,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087c50): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087c58): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087c5b): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087c63): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087c66): {next=c.rip+3; // and eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x140087c69): {next=c.rip+7; // mov ebx, dword ptr [rsp + rax*4 + 0x13b8]
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,0,4,0,5048,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087c70): {next=c.rip+5; // jmp 0x140086626
next=next+UINT64_C(0xffffffffffffe9b1);
c.rip=next;return true;}
case UINT64_C(0x140087c75): {next=c.rip+8; // movsxd rcx, dword ptr [rsp + 0xaa8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140087c7d): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087c85): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7a3b6);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087c8a): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087c92): {next=c.rip+8; // movsxd rcx, dword ptr [rsp + 0xaa8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140087c9a): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087c9d): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7a39e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087ca2): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087caa): {next=c.rip+5; // mov eax, 0xf02496fd
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf02496fd)}));
c.rip=next;return true;}
case UINT64_C(0x140087caf): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rax
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087cb4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087cb9): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r13
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087cbe): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087cc3): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ccb): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087cce): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087cd1): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140087cd4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087cd9): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087cdc): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ce4): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ce9): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087cf1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087cf6): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087cfe): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087d01): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087d06): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087d0b): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087d13): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087d16): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087d1b): {next=c.rip+8; // or rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087d23): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087d26): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087d2e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087d33): {next=c.rip+8; // add qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087d3b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087d40): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087d48): {next=c.rip+4; // xor rcx, 0x2d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2d)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087d4c): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7a2ef);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087d51): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087d59): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087d61): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087d64): {next=c.rip+6; // mov r8d, 0x1bcfab
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1bcfab)}));
c.rip=next;return true;}
case UINT64_C(0x140087d6a): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087d72): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc5279);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087d77): {next=c.rip+8; // movzx ecx, byte ptr [rsp + 0x3b0]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087d7f): {next=c.rip+2; // mov edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087d81): {next=c.rip+3; // imul edx, ecx
m.imul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140087d84): {next=c.rip+2; // xor dl, cl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140087d86): {next=c.rip+5; // mov ebx, 0xf7bebcd3
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf7bebcd3)}));
c.rip=next;return true;}
case UINT64_C(0x140087d8b): {next=c.rip+3; // test dl, 1
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140087d8e): {next=c.rip+2; // jne 0x140087dec
if(m.condition(1))next=next+UINT64_C(0x5c);
c.rip=next;return true;}
case UINT64_C(0x140087d90): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087d95): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087d9a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087d9f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087da4): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140087da7): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087dac): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087db1): {next=c.rip+7; // or rcx, 0x3070be
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3070be)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087db8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087dbd): {next=c.rip+5; // and eax, 0x3070be
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3070be)}),32));
c.rip=next;return true;}
case UINT64_C(0x140087dc2): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087dc5): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087dca): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x70]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087dcf): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087dd4): {next=c.rip+2; // or edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140087dd6): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x70]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ddb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087de0): {next=c.rip+2; // and ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140087de2): {next=c.rip+2; // sub edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x140087de4): {next=c.rip+3; // movsxd rdx, edx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140087de7): {next=c.rip+5; // jmp 0x14008534f
next=next+UINT64_C(0xffffffffffffd563);
c.rip=next;return true;}
case UINT64_C(0x140087dec): {next=c.rip+5; // mov eax, 0xa1375ea1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa1375ea1)}));
c.rip=next;return true;}
case UINT64_C(0x140087df1): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087df6): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x4e22ff6b
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4e22ff6b)}));
c.rip=next;return true;}
case UINT64_C(0x140087dff): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e04): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e09): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087e0c): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e11): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e16): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e1b): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087e1e): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087e21): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e26): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e2b): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087e2e): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087e31): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e36): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e3b): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e40): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e45): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e4a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e4f): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140087e52): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e57): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e5c): {next=c.rip+7; // or rcx, 0x3070be
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3070be)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087e63): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e68): {next=c.rip+5; // and eax, 0x3070be
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3070be)}),32));
c.rip=next;return true;}
case UINT64_C(0x140087e6d): {next=c.rip+5; // jmp 0x140083760
next=next+UINT64_C(0xffffffffffffb8ee);
c.rip=next;return true;}
case UINT64_C(0x140087e72): {next=c.rip+8; // movsxd rcx, dword ptr [rsp + 0xaa8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140087e7a): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087e82): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7a1b9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087e87): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e8f): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e95): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e98): {next=c.rip+3; // movzx edx, cl
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087e9b): {next=c.rip+3; // imul edx, eax
m.imul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140087e9e): {next=c.rip+3; // test dl, 1
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140087ea1): {next=c.rip+2; // je 0x140087f06
if(m.condition(0))next=next+UINT64_C(0x63);
c.rip=next;return true;}
case UINT64_C(0x140087ea3): {next=c.rip+5; // mov eax, 0xd80ff789
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xd80ff789)}));
c.rip=next;return true;}
case UINT64_C(0x140087ea8): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ead): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x5e25ae01
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5e25ae01)}));
c.rip=next;return true;}
case UINT64_C(0x140087eb6): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ebb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ec0): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087ec3): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ec8): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ecd): {next=c.rip+3; // nop dword ptr [rax]

c.rip=next;return true;}
case UINT64_C(0x140087ed0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ed5): {next=c.rip+4; // cmp rax, 1
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140087ed9): {next=c.rip+2; // jae 0x140087f01
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x140087edb): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ee0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ee5): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087ee8): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7a153);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087eed): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ef2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ef7): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140087efa): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087eff): {next=c.rip+2; // jmp 0x140087ed0
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x140087f01): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087f06): {next=c.rip+5; // mov ebx, 0xf150f719
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf150f719)}));
c.rip=next;return true;}
case UINT64_C(0x140087f0b): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087f10): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087f15): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087f1a): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087f1d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087f22): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087f27): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140087f2a): {next=c.rip+3; // or rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087f2d): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087f32): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087f37): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087f3f): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087f42): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087f45): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140087f48): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087f4d): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087f50): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087f58): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087f5d): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087f65): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087f6a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087f6f): {next=c.rip+8; // xor qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087f77): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087f7c): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xab0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087f84): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087f89): {next=c.rip+8; // and rax, qword ptr [rsp + 0xab0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087f91): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140087f94): {next=c.rip+8; // mov qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087f9c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087fa1): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087fa9): {next=c.rip+4; // xor rcx, 2
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087fad): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7a08e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087fb2): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087fba): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087fc2): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087fc5): {next=c.rip+6; // mov r8d, 0x13c6e
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x13c6e)}));
c.rip=next;return true;}
case UINT64_C(0x140087fcb): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087fd3): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc5018);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140087fd8): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x669e8107
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x669e8107)}));
c.rip=next;return true;}
case UINT64_C(0x140087fe1): {next=c.rip+5; // mov ebx, 0xea1c02bd
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xea1c02bd)}));
c.rip=next;return true;}
case UINT64_C(0x140087fe6): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087feb): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ff0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ff5): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140087ff8): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140087ffd): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
default:return false;
}}
}
