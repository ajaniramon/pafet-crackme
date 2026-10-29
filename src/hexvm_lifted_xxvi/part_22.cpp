// Generated literal x64 semantics.
#include "../pafet_hexvm_cpu_xxvi.h"
namespace pafet_xxiv {
bool hexvm_part_22(Machine& m){auto& c=m.c;auto& next=m.next;switch(m.canonical(c.rip)){
case UINT64_C(0x140088002): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088007): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008800a): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008800d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088012): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088017): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008801a): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008801d): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088022): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088027): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x77982753
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x77982753)}));
c.rip=next;return true;}
case UINT64_C(0x140088030): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088035): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008803a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008803f): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140088042): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088047): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008804c): {next=c.rip+6; // add rax, 0x35606a
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x35606a)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140088052): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088057): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x70]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008805c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088061): {next=c.rip+2; // and edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140088063): {next=c.rip+2; // add edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x140088065): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x70]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008806a): {next=c.rip+2; // sub ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14008806c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088071): {next=c.rip+2; // add eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x140088073): {next=c.rip+3; // movsxd rdx, eax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140088076): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008807e): {next=c.rip+5; // call 0x14004c880
{uint64_t target=next+UINT64_C(0xfffffffffffc47fd);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088083): {next=c.rip+5; // jmp 0x140088983
next=next+UINT64_C(0x8fb);
c.rip=next;return true;}
case UINT64_C(0x140088088): {next=c.rip+8; // movsxd rcx, dword ptr [rsp + 0xaa8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140088090): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088098): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff79fa3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008809d): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400880a5): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x673f9d4f
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x673f9d4f)}));
c.rip=next;return true;}
case UINT64_C(0x1400880ae): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400880b3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400880b8): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400880bb): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400880c0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400880c5): {next=c.rip+8; // xor qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400880cd): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400880d2): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400880da): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400880df): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400880e4): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400880ec): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400880ef): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400880f4): {next=c.rip+8; // or rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400880fc): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400880ff): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088107): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008810c): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xab0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088114): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140088117): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008811c): {next=c.rip+8; // xor rax, qword ptr [rsp + 0xab0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088124): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140088127): {next=c.rip+8; // mov qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008812f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088134): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008813c): {next=c.rip+4; // xor rcx, 0x17
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x17)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088140): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff79efb);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088145): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008814d): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088155): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088158): {next=c.rip+6; // mov r8d, 0xe36f1
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xe36f1)}));
c.rip=next;return true;}
case UINT64_C(0x14008815e): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088166): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc4e85);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008816b): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x75e562e5
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x75e562e5)}));
c.rip=next;return true;}
case UINT64_C(0x140088174): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x611a8969
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x611a8969)}));
c.rip=next;return true;}
case UINT64_C(0x14008817d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088182): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088187): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008818a): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008818f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088194): {next=c.rip+3; // dec rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,true));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140088197): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008819c): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14008819e): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400881a1): {next=c.rip+2; // jne 0x1400881b3
if(m.condition(1))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x1400881a3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400881a8): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400881ae): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400881b3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400881b8): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x16a2fc69
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x16a2fc69)}));
c.rip=next;return true;}
case UINT64_C(0x1400881c1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400881c6): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400881cb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400881d0): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400881d3): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400881d8): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400881dd): {next=c.rip+6; // and ecx, 0x17d925
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x17d925)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400881e3): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400881e6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400881eb): {next=c.rip+6; // xor rax, 0x17d925
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x17d925)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400881f1): {next=c.rip+5; // jmp 0x140085210
next=next+UINT64_C(0xffffffffffffd01a);
c.rip=next;return true;}
case UINT64_C(0x1400881f6): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x80ecfa7
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x80ecfa7)}));
c.rip=next;return true;}
case UINT64_C(0x1400881ff): {next=c.rip+5; // mov ebx, 0xc330f3ff
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc330f3ff)}));
c.rip=next;return true;}
case UINT64_C(0x140088204): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088209): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008820e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088213): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088216): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008821b): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088220): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088225): {next=c.rip+4; // cmp rax, 1
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140088229): {next=c.rip+2; // jae 0x140088251
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x14008822b): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088230): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088235): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140088238): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff79e03);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008823d): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088242): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088247): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14008824a): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008824f): {next=c.rip+2; // jmp 0x140088220
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x140088251): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088256): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x5bef83d7
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5bef83d7)}));
c.rip=next;return true;}
case UINT64_C(0x14008825f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088264): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r13
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088269): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008826e): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088276): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008827b): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088283): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140088286): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008828e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088293): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008829b): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400882a0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400882a5): {next=c.rip+8; // xor qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400882ad): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400882b2): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400882ba): {next=c.rip+4; // xor rcx, 0x1e
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1e)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400882be): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff79d7d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400882c3): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400882cb): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400882d3): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400882d6): {next=c.rip+6; // mov r8d, 0x128a72
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x128a72)}));
c.rip=next;return true;}
case UINT64_C(0x1400882dc): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400882e4): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc4d07);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400882e9): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x939d29
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x939d29)}));
c.rip=next;return true;}
case UINT64_C(0x1400882f2): {next=c.rip+5; // mov ebx, 0xfcb61399
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xfcb61399)}));
c.rip=next;return true;}
case UINT64_C(0x1400882f7): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400882fc): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088301): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088306): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088309): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008830e): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088313): {next=c.rip+4; // and rcx, 0xfffffffffffffffe
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xfffffffffffffffe)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088317): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008831c): {next=c.rip+3; // sub rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008831f): {next=c.rip+4; // cmp rax, 1
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140088323): {next=c.rip+2; // jbe 0x140088335
if(m.condition(4))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x140088325): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008832a): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088330): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088335): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008833a): {next=c.rip+5; // mov ebx, 0xcf9ed95d
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xcf9ed95d)}));
c.rip=next;return true;}
case UINT64_C(0x14008833f): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088344): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088349): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008834e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088353): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140088356): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008835b): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088360): {next=c.rip+6; // and ecx, 0x2a9a5a
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2a9a5a)}),32));
c.rip=next;return true;}
case UINT64_C(0x140088366): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140088369): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008836e): {next=c.rip+6; // xor rax, 0x2a9a5a
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2a9a5a)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088374): {next=c.rip+5; // jmp 0x140083e2c
next=next+UINT64_C(0xffffffffffffbab3);
c.rip=next;return true;}
case UINT64_C(0x140088379): {next=c.rip+5; // cmp eax, 0x3d1c9d
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3d1c9d)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008837e): {next=c.rip+6; // je 0x1400887df
if(m.condition(0))next=next+UINT64_C(0x45b);
c.rip=next;return true;}
case UINT64_C(0x140088384): {next=c.rip+5; // cmp eax, 0x3edeff
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3edeff)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140088389): {next=c.rip+6; // je 0x1400885fe
if(m.condition(0))next=next+UINT64_C(0x26f);
c.rip=next;return true;}
case UINT64_C(0x14008838f): {next=c.rip+5; // cmp eax, 0x3ffe82
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3ffe82)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140088394): {next=c.rip+6; // je 0x140088455
if(m.condition(0))next=next+UINT64_C(0xbb);
c.rip=next;return true;}
case UINT64_C(0x14008839a): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x58c763ff
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x58c763ff)}));
c.rip=next;return true;}
case UINT64_C(0x1400883a3): {next=c.rip+5; // mov ebx, 0xe014cdb3
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xe014cdb3)}));
c.rip=next;return true;}
case UINT64_C(0x1400883a8): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400883ad): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400883b2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400883b7): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400883ba): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400883bf): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400883c4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400883c9): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400883cc): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400883cf): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400883d4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400883d9): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400883dc): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400883df): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400883e4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400883e9): {next=c.rip+5; // mov ebx, 0x868543ab
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x868543ab)}));
c.rip=next;return true;}
case UINT64_C(0x1400883ee): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400883f3): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x4b14c621
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4b14c621)}));
c.rip=next;return true;}
case UINT64_C(0x1400883fc): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088401): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088406): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088409): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008840e): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088413): {next=c.rip+4; // nop dword ptr [rax]

c.rip=next;return true;}
case UINT64_C(0x140088417): {next=c.rip+9; // nop word ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x140088420): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088425): {next=c.rip+4; // cmp rax, 2
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140088429): {next=c.rip+6; // jae 0x14008575a
if(m.condition(3))next=next+UINT64_C(0xffffffffffffd32b);
c.rip=next;return true;}
case UINT64_C(0x14008842f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088434): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088439): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008843c): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff79bff);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088441): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088446): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008844b): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14008844e): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088453): {next=c.rip+2; // jmp 0x140088420
next=next+UINT64_C(0xffffffffffffffcb);
c.rip=next;return true;}
case UINT64_C(0x140088455): {next=c.rip+8; // movsxd rcx, dword ptr [rsp + 0xaa8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14008845d): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088465): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff79bd6);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008846a): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088472): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x421bc089
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x421bc089)}));
c.rip=next;return true;}
case UINT64_C(0x14008847b): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x26250887
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x26250887)}));
c.rip=next;return true;}
case UINT64_C(0x140088484): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088489): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008848e): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088491): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088496): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008849b): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400884a0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400884a5): {next=c.rip+5; // mov eax, 0xbf0bfb05
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xbf0bfb05)}));
c.rip=next;return true;}
case UINT64_C(0x1400884aa): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rax
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400884af): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400884b4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400884b9): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400884bc): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400884c1): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400884c6): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400884ce): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400884d3): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400884db): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400884de): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400884e6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400884eb): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400884f3): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400884f8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400884fd): {next=c.rip+8; // xor qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088505): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008850a): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xab0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088512): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088517): {next=c.rip+8; // and rax, qword ptr [rsp + 0xab0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008851f): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140088522): {next=c.rip+8; // mov qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008852a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008852f): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088537): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008853c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088541): {next=c.rip+4; // xor rax, 0xa
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xa)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088545): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008854a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008854f): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff79aec);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088554): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008855c): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088564): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088567): {next=c.rip+6; // mov r8d, 0x62e26
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x62e26)}));
c.rip=next;return true;}
case UINT64_C(0x14008856d): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088575): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc4a76);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008857a): {next=c.rip+5; // mov ebx, 0xae669ceb
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xae669ceb)}));
c.rip=next;return true;}
case UINT64_C(0x14008857f): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088584): {next=c.rip+5; // mov ebx, 0xb97c0e67
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xb97c0e67)}));
c.rip=next;return true;}
case UINT64_C(0x140088589): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008858e): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088593): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088598): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008859b): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400885a0): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400885a5): {next=c.rip+3; // and ecx, 1
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400885a8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400885ad): {next=c.rip+3; // and eax, 1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400885b0): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400885b3): {next=c.rip+4; // cmp rax, 2
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400885b7): {next=c.rip+2; // jbe 0x1400885c9
if(m.condition(4))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x1400885b9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400885be): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400885c4): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400885c9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400885ce): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x303f4fa5
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x303f4fa5)}));
c.rip=next;return true;}
case UINT64_C(0x1400885d7): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400885dc): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400885e1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400885e6): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400885e9): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400885ee): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400885f3): {next=c.rip+6; // add rax, 0x94219
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x94219)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400885f9): {next=c.rip+5; // jmp 0x140083e2f
next=next+UINT64_C(0xffffffffffffb831);
c.rip=next;return true;}
case UINT64_C(0x1400885fe): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088606): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffc1565);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008860b): {next=c.rip+8; // movzx ecx, byte ptr [rsp + 0x1324]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,4900,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088613): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088615): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088618): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0xab0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088620): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff79a1b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088625): {next=c.rip+8; // mov qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008862d): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2760,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088635): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008863d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088640): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff799fb);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088645): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008864d): {next=c.rip+5; // mov edx, 9
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x9)}));
c.rip=next;return true;}
case UINT64_C(0x140088652): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008865a): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc1271);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008865f): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088661): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088669): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffc3d52);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008866e): {next=c.rip+5; // mov edx, 8
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8)}));
c.rip=next;return true;}
case UINT64_C(0x140088673): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008867b): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc1250);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088680): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088682): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008868a): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffc3d31);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008868f): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088697): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffc14d4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008869c): {next=c.rip+7; // cmp eax, dword ptr [rsp + 0x8b8]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,4,-1,1,0,2232,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400886a3): {next=c.rip+2; // jae 0x1400886b4
if(m.condition(3))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x1400886a5): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400886a7): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400886af): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffc3d0c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400886b4): {next=c.rip+5; // mov edx, 8
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8)}));
c.rip=next;return true;}
case UINT64_C(0x1400886b9): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400886c1): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc120a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400886c6): {next=c.rip+3; // mov r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400886c9): {next=c.rip+5; // mov edx, 9
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x9)}));
c.rip=next;return true;}
case UINT64_C(0x1400886ce): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400886d6): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc12c5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400886db): {next=c.rip+5; // mov ebx, 0xdc59641d
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xdc59641d)}));
c.rip=next;return true;}
case UINT64_C(0x1400886e0): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400886e5): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0xd075337
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd075337)}));
c.rip=next;return true;}
case UINT64_C(0x1400886ee): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400886f3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400886f8): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400886fb): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088700): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088705): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008870a): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008870d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088712): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140088715): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008871a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008871f): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x59481a63
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x59481a63)}));
c.rip=next;return true;}
case UINT64_C(0x140088728): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008872d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088732): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088735): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008873a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008873f): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140088742): {next=c.rip+3; // or rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088745): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008874a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008874f): {next=c.rip+8; // xor qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088757): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008875c): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088764): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088769): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088771): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140088774): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088779): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008877e): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088786): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088789): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008878e): {next=c.rip+8; // or rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088796): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088799): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400887a1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400887a6): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400887ae): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400887b6): {next=c.rip+5; // call 0x1400023e0
{uint64_t target=next+UINT64_C(0xfffffffffff79c25);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400887bb): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x1400887bd): {next=c.rip+6; // je 0x1400868d4
if(m.condition(0))next=next+UINT64_C(0xffffffffffffe111);
c.rip=next;return true;}
case UINT64_C(0x1400887c3): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400887cb): {next=c.rip+2; // and al, 3
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3)}),8));
c.rip=next;return true;}
case UINT64_C(0x1400887cd): {next=c.rip+2; // cmp al, 1
m.arithmetic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x1400887cf): {next=c.rip+6; // jne 0x1400868d4
if(m.condition(1))next=next+UINT64_C(0xffffffffffffe0ff);
c.rip=next;return true;}
case UINT64_C(0x1400887d5): {next=c.rip+5; // mov edx, 0x15c9
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x15c9)}));
c.rip=next;return true;}
case UINT64_C(0x1400887da): {next=c.rip+5; // jmp 0x14008534f
next=next+UINT64_C(0xffffffffffffcb70);
c.rip=next;return true;}
case UINT64_C(0x1400887df): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400887e7): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400887ef): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7984c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400887f4): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400887f9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400887fe): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x6321c461
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x6321c461)}));
c.rip=next;return true;}
case UINT64_C(0x140088807): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008880c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088811): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088814): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088819): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008881e): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088826): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088829): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008882e): {next=c.rip+8; // or rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088836): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088839): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088841): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088846): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008884e): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140088851): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088856): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008885e): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140088861): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088866): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008886b): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088873): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088878): {next=c.rip+8; // and rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088880): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140088883): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008888b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088890): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088898): {next=c.rip+4; // xor rcx, 0x25
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x25)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008889c): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7979f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400888a1): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400888a9): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400888b1): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400888b4): {next=c.rip+6; // mov r8d, 0x16ddf3
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x16ddf3)}));
c.rip=next;return true;}
case UINT64_C(0x1400888ba): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400888c2): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc4729);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400888c7): {next=c.rip+5; // mov ebx, 0xfd60c065
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xfd60c065)}));
c.rip=next;return true;}
case UINT64_C(0x1400888cc): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400888d1): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x7d34602f
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7d34602f)}));
c.rip=next;return true;}
case UINT64_C(0x1400888da): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400888df): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400888e4): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400888e7): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400888ec): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400888f1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400888f6): {next=c.rip+4; // cmp rax, 2
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400888fa): {next=c.rip+2; // jae 0x140088922
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x1400888fc): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088901): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088906): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140088909): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff79732);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008890e): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088913): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088918): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14008891b): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088920): {next=c.rip+2; // jmp 0x1400888f1
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x140088922): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088927): {next=c.rip+5; // mov ebx, 0x85ec3789
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x85ec3789)}));
c.rip=next;return true;}
case UINT64_C(0x14008892c): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088931): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088936): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008893b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088940): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140088943): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088948): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008894d): {next=c.rip+6; // add rax, 0xa665
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xa665)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140088953): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088958): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x70]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008895d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088962): {next=c.rip+2; // or edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140088964): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x70]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088969): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008896e): {next=c.rip+2; // and ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140088970): {next=c.rip+2; // sub edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x140088972): {next=c.rip+3; // movsxd rdx, edx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140088975): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008897d): {next=c.rip+5; // call 0x14004c880
{uint64_t target=next+UINT64_C(0xfffffffffffc3efe);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088982): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140088983): {next=c.rip+8; // mov r15, qword ptr [rsp + 0xb8]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,184,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008898b): {next=c.rip+5; // jmp 0x140081540
next=next+UINT64_C(0xffffffffffff8bb0);
c.rip=next;return true;}
case UINT64_C(0x140088990): {next=c.rip+3; // xor r13d, r13d
m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140088993): {next=c.rip+8; // mov r14, qword ptr [rsp + 0xa8]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,168,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008899b): {next=c.rip+8; // mov r12, qword ptr [rsp + 0xf0]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400889a3): {next=c.rip+8; // mov qword ptr [rsp + 0xb0], r12
m.put(Operand{2,0,64,0,4,-1,1,0,176,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400889ab): {next=c.rip+8; // mov r15, qword ptr [rsp + 0x100]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,256,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400889b3): {next=c.rip+8; // mov qword ptr [rsp + 0xb8], r15
m.put(Operand{2,0,64,0,4,-1,1,0,184,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400889bb): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x1380]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,4992,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400889c3): {next=c.rip+8; // mov qword ptr [rsp + 0xd8], rax
m.put(Operand{2,0,64,0,4,-1,1,0,216,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400889cb): {next=c.rip+5; // jmp 0x140081540
next=next+UINT64_C(0xffffffffffff8b70);
c.rip=next;return true;}
case UINT64_C(0x1400889e0): {next=c.rip+3; // mov rcx, qword ptr [rcx]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400889e3): {next=c.rip+5; // jmp 0x14004a0e0
next=next+UINT64_C(0xfffffffffffc16f8);
c.rip=next;return true;}
case UINT64_C(0x1400889f0): {next=c.rip+3; // mov rcx, qword ptr [rcx]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400889f3): {next=c.rip+5; // jmp 0x14004a1c0
next=next+UINT64_C(0xfffffffffffc17c8);
c.rip=next;return true;}
case UINT64_C(0x140088a00): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a05): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a06): {next=c.rip+7; // sub rsp, 0x140
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x140)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140088a0d): {next=c.rip+7; // mov rax, qword ptr [rip + 0x38460c]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,16,-1,1,0,3687948,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a14): {next=c.rip+3; // xor rax, rsp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088a17): {next=c.rip+8; // mov qword ptr [rsp + 0x130], rax
m.put(Operand{2,0,64,0,4,-1,1,0,304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a1f): {next=c.rip+3; // mov rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a22): {next=c.rip+3; // cmp edx, 5
m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x5)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140088a25): {next=c.rip+6; // ja 0x140088beb
if(m.condition(5))next=next+UINT64_C(0x1c0);
c.rip=next;return true;}
case UINT64_C(0x140088a2b): {next=c.rip+2; // mov eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a2d): {next=c.rip+7; // lea rcx, [rip - 0x88a34]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-559668,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a34): {next=c.rip+7; // mov edx, dword ptr [rcx + rax*4 + 0x88c14]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,0,4,0,560148,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a3b): {next=c.rip+3; // add rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140088a3e): {next=c.rip+2; // jmp rdx
next=m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140088a40): {next=c.rip+3; // mov rcx, qword ptr [rdi]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a43): {next=c.rip+3; // mov rax, qword ptr [r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,8,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a46): {next=c.rip+3; // mov qword ptr [rcx], rax
m.put(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a49): {next=c.rip+5; // jmp 0x140088beb
next=next+UINT64_C(0x19d);
c.rip=next;return true;}
case UINT64_C(0x140088a4e): {next=c.rip+4; // mov rcx, qword ptr [rdi + 8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a52): {next=c.rip+3; // mov rdx, qword ptr [rdi]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a55): {next=c.rip+2; // xor eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140088a57): {next=c.rip+4; // mov rcx, qword ptr [rcx + 0x10]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a5b): {next=c.rip+3; // cmp qword ptr [rdx], rcx
m.arithmetic(m.get(Operand{2,0,64,0,2,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140088a5e): {next=c.rip+3; // setb al
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.condition(2)));
c.rip=next;return true;}
case UINT64_C(0x140088a61): {next=c.rip+5; // jmp 0x140088bed
next=next+UINT64_C(0x187);
c.rip=next;return true;}
case UINT64_C(0x140088a66): {next=c.rip+4; // mov rcx, qword ptr [rdi + 8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a6a): {next=c.rip+3; // mov rax, qword ptr [rdi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a6d): {next=c.rip+3; // mov rdx, qword ptr [rax]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a70): {next=c.rip+2; // xor eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140088a72): {next=c.rip+8; // mov qword ptr [rsp + 0x110], rax
m.put(Operand{2,0,64,0,4,-1,1,0,272,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a7a): {next=c.rip+8; // movdqa xmm0, xmmword ptr [rip + 0x36916e]
{if((Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16)||(Operand{2,0,128,0,16,-1,1,0,3576174,UINT64_C(0x0)}.kind==2&&m.address(Operand{2,0,128,0,16,-1,1,0,3576174,UINT64_C(0x0)})%16))throw Fault(4,c.rip,"unaligned MOVDQA");uint8_t v[16];m.vector_get(Operand{2,0,128,0,16,-1,1,0,3576174,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140088a82): {next=c.rip+9; // movdqu xmmword ptr [rsp + 0x120], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,288,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140088a8b): {next=c.rip+7; // mov byte ptr [rsp + 0x110], al
m.put(Operand{2,0,8,0,4,-1,1,0,272,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a92): {next=c.rip+4; // mov rax, qword ptr [rcx + 0x10]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088a96): {next=c.rip+3; // cmp rax, rdx
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140088a99): {next=c.rip+6; // jb 0x140088c0e
if(m.condition(2))next=next+UINT64_C(0x16f);
c.rip=next;return true;}
case UINT64_C(0x140088a9f): {next=c.rip+3; // sub rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140088aa2): {next=c.rip+6; // mov r8d, 2
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}));
c.rip=next;return true;}
case UINT64_C(0x140088aa8): {next=c.rip+3; // cmp rax, r8
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140088aab): {next=c.rip+4; // cmovb r8, rax
if(m.condition(2))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088aaf): {next=c.rip+5; // cmp qword ptr [rcx + 0x18], 0x10
m.arithmetic(m.get(Operand{2,0,64,0,1,-1,1,0,24,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x10)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140088ab4): {next=c.rip+2; // jb 0x140088ab9
if(m.condition(2))next=next+UINT64_C(0x3);
c.rip=next;return true;}
case UINT64_C(0x140088ab6): {next=c.rip+3; // mov rcx, qword ptr [rcx]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088ab9): {next=c.rip+3; // add rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140088abc): {next=c.rip+8; // lea rcx, [rsp + 0x110]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088ac4): {next=c.rip+5; // call 0x140399990
{uint64_t target=next+UINT64_C(0x310ec7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088ac9): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140088aca): {next=c.rip+8; // lea rdx, [rsp + 0x110]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088ad2): {next=c.rip+5; // lea rcx, [rsp + 0x20]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088ad7): {next=c.rip+5; // call 0x140397f20
{uint64_t target=next+UINT64_C(0x30f444);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088adc): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088adf): {next=c.rip+3; // mov rcx, qword ptr [rax]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088ae2): {next=c.rip+4; // movsxd rcx, dword ptr [rcx + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,1,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140088ae6): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140088ae9): {next=c.rip+5; // call 0x140002020
{uint64_t target=next+UINT64_C(0xfffffffffff79532);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088aee): {next=c.rip+4; // mov rdx, qword ptr [rdi + 0x10]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088af2): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088af5): {next=c.rip+5; // call 0x14039c250
{uint64_t target=next+UINT64_C(0x313756);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088afa): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140088afb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b00): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140088b04): {next=c.rip+7; // lea rax, [rip + 0x369085]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,3575941,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b0b): {next=c.rip+5; // mov qword ptr [rsp + rcx + 0x20], rax
m.put(Operand{2,0,64,0,4,1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b10): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b15): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140088b19): {next=c.rip+6; // lea edx, [rcx - 0x90]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,-1,1,0,-144,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b1f): {next=c.rip+4; // mov dword ptr [rsp + rcx + 0x1c], edx
m.put(Operand{2,0,32,0,4,1,1,0,28,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b23): {next=c.rip+5; // lea rcx, [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b28): {next=c.rip+5; // call 0x140397be0
{uint64_t target=next+UINT64_C(0x30f0b3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088b2d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b32): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140088b36): {next=c.rip+7; // lea rax, [rip + 0x344dab]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,3427755,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b3d): {next=c.rip+5; // mov qword ptr [rsp + rcx + 0x20], rax
m.put(Operand{2,0,64,0,4,1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b42): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b47): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140088b4b): {next=c.rip+3; // lea edx, [rcx - 0x18]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,-1,1,0,-24,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b4e): {next=c.rip+4; // mov dword ptr [rsp + rcx + 0x1c], edx
m.put(Operand{2,0,32,0,4,1,1,0,28,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b52): {next=c.rip+7; // lea rax, [rip + 0x344bdf]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,3427295,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b59): {next=c.rip+8; // mov qword ptr [rsp + 0xb0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,176,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b61): {next=c.rip+8; // lea rcx, [rsp + 0xb0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,176,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b69): {next=c.rip+5; // call 0x1403a2eb4
{uint64_t target=next+UINT64_C(0x31a346);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088b6e): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140088b6f): {next=c.rip+8; // lea rcx, [rsp + 0x110]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b77): {next=c.rip+5; // call 0x1403997c0
{uint64_t target=next+UINT64_C(0x310c44);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088b7c): {next=c.rip+2; // jmp 0x140088beb
next=next+UINT64_C(0x6d);
c.rip=next;return true;}
case UINT64_C(0x140088b7e): {next=c.rip+4; // mov rcx, qword ptr [rdi + 0x18]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,24,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b82): {next=c.rip+4; // mov rax, qword ptr [rdi + 0x10]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b86): {next=c.rip+4; // movzx r9d, byte ptr [rax]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b8a): {next=c.rip+4; // mov rdx, qword ptr [rcx + 0x10]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b8e): {next=c.rip+4; // mov r8, qword ptr [rcx + 0x18]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,24,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b92): {next=c.rip+3; // cmp rdx, r8
m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140088b95): {next=c.rip+2; // jae 0x140088bb3
if(m.condition(3))next=next+UINT64_C(0x1c);
c.rip=next;return true;}
case UINT64_C(0x140088b97): {next=c.rip+4; // lea rax, [rdx + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b9b): {next=c.rip+4; // mov qword ptr [rcx + 0x10], rax
m.put(Operand{2,0,64,0,1,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088b9f): {next=c.rip+4; // cmp r8, 0x10
m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x10)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140088ba3): {next=c.rip+2; // jb 0x140088ba8
if(m.condition(2))next=next+UINT64_C(0x3);
c.rip=next;return true;}
case UINT64_C(0x140088ba5): {next=c.rip+3; // mov rcx, qword ptr [rcx]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088ba8): {next=c.rip+4; // mov byte ptr [rcx + rdx], r9b
m.put(Operand{2,0,8,0,1,2,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088bac): {next=c.rip+5; // mov byte ptr [rcx + rdx + 1], 0
m.put(Operand{2,0,8,0,1,2,1,0,1,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088bb1): {next=c.rip+2; // jmp 0x140088beb
next=next+UINT64_C(0x38);
c.rip=next;return true;}
case UINT64_C(0x140088bb3): {next=c.rip+5; // call 0x14039b0e0
{uint64_t target=next+UINT64_C(0x312528);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088bb8): {next=c.rip+2; // jmp 0x140088beb
next=next+UINT64_C(0x31);
c.rip=next;return true;}
case UINT64_C(0x140088bba): {next=c.rip+3; // mov rax, qword ptr [rdi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088bbd): {next=c.rip+3; // mov rax, qword ptr [rax]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088bc0): {next=c.rip+2; // jmp 0x140088bed
next=next+UINT64_C(0x2b);
c.rip=next;return true;}
case UINT64_C(0x140088bc2): {next=c.rip+4; // mov rbx, qword ptr [rdi + 0x20]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088bc6): {next=c.rip+4; // mov rdi, qword ptr [rdi + 0x18]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,24,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088bca): {next=c.rip+4; // cmp byte ptr [rbx + 0x20], 0
m.arithmetic(m.get(Operand{2,0,8,0,3,-1,1,0,32,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140088bce): {next=c.rip+2; // je 0x140088bdc
if(m.condition(0))next=next+UINT64_C(0xc);
c.rip=next;return true;}
case UINT64_C(0x140088bd0): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088bd3): {next=c.rip+5; // call 0x1403997c0
{uint64_t target=next+UINT64_C(0x310be8);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088bd8): {next=c.rip+4; // mov byte ptr [rbx + 0x20], 0
m.put(Operand{2,0,8,0,3,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088bdc): {next=c.rip+3; // mov rdx, rdi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088bdf): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088be2): {next=c.rip+5; // call 0x1403984e0
{uint64_t target=next+UINT64_C(0x30f8f9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088be7): {next=c.rip+4; // mov byte ptr [rbx + 0x20], 1
m.put(Operand{2,0,8,0,3,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x140088beb): {next=c.rip+2; // xor eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140088bed): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x130]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088bf5): {next=c.rip+3; // xor rcx, rsp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140088bf8): {next=c.rip+5; // call 0x1403a3dc0
{uint64_t target=next+UINT64_C(0x31b1c3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088bfd): {next=c.rip+8; // mov rbx, qword ptr [rsp + 0x158]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,344,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140088c05): {next=c.rip+7; // add rsp, 0x140
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x140)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140088c0c): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140088c0d): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140088c0e): {next=c.rip+5; // call 0x14039abb0
{uint64_t target=next+UINT64_C(0x311f9d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140088c13): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
default:return false;
}}
}
