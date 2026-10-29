// Generated literal x64 semantics.
#include "../pafet_hexvm_cpu_xxvi.h"
namespace pafet_xxiv {
bool hexvm_part_e7(Machine& m){auto& c=m.c;auto& next=m.next;switch(m.canonical(c.rip)){
case UINT64_C(0x14039c250): {next=c.rip+5; // mov qword ptr [rsp + 8], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c255): {next=c.rip+1; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c256): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c257): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c258): {next=c.rip+2; // push r12
m.push(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c25a): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c25c): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c25e): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c260): {next=c.rip+7; // sub rsp, 0xa0
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xa0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039c267): {next=c.rip+3; // mov r13, rdx
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c26a): {next=c.rip+3; // mov rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c26d): {next=c.rip+3; // xor r15d, r15d
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039c270): {next=c.rip+8; // mov dword ptr [rsp + 0xf0], r15d
m.put(Operand{2,0,32,0,4,-1,1,0,240,UINT64_C(0x0)},m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c278): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c27d): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c280): {next=c.rip+4; // movsxd r8, dword ptr [rax + 4]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14039c284): {next=c.rip+5; // mov rcx, qword ptr [r8 + rcx + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,8,1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c289): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039c28c): {next=c.rip+2; // je 0x14039c295
if(m.condition(0))next=next+UINT64_C(0x7);
c.rip=next;return true;}
case UINT64_C(0x14039c28e): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c291): {next=c.rip+3; // call qword ptr [rax + 8]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,8,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039c294): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14039c295): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039c297): {next=c.rip+3; // mov rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c29a): {next=c.rip+5; // call 0x14039f570
{uint64_t target=next+UINT64_C(0x32d1);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039c29f): {next=c.rip+4; // mov byte ptr [rsp + 0x78], al
m.put(Operand{2,0,8,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c2a3): {next=c.rip+2; // test al, al
m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14039c2a5): {next=c.rip+6; // je 0x14039c462
if(m.condition(0))next=next+UINT64_C(0x1b7);
c.rip=next;return true;}
case UINT64_C(0x14039c2ab): {next=c.rip+3; // mov rax, qword ptr [rdi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c2ae): {next=c.rip+4; // movsxd rax, dword ptr [rax + 4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14039c2b2): {next=c.rip+5; // mov rax, qword ptr [rax + rdi + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,7,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c2b7): {next=c.rip+4; // mov rsi, qword ptr [rax + 8]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c2bb): {next=c.rip+8; // mov qword ptr [rsp + 0x88], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,136,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c2c3): {next=c.rip+3; // mov rax, qword ptr [rsi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,6,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c2c6): {next=c.rip+3; // mov rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c2c9): {next=c.rip+3; // call qword ptr [rax + 8]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,8,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039c2cc): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14039c2cd): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039c2cf): {next=c.rip+5; // lea rcx, [rsp + 0x40]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c2d4): {next=c.rip+5; // call 0x1403a1500
{uint64_t target=next+UINT64_C(0x5227);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039c2d9): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14039c2da): {next=c.rip+7; // mov r12, qword ptr [rip + 0x84fb7]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,16,-1,1,0,544695,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c2e1): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r12
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c2e6): {next=c.rip+7; // mov r14, qword ptr [rip + 0x9e90b]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,16,-1,1,0,649483,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c2ed): {next=c.rip+3; // test r14, r14
m.logic(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039c2f0): {next=c.rip+2; // jne 0x14039c335
if(m.condition(1))next=next+UINT64_C(0x43);
c.rip=next;return true;}
case UINT64_C(0x14039c2f2): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039c2f4): {next=c.rip+8; // lea rcx, [rsp + 0xf8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,248,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c2fc): {next=c.rip+5; // call 0x1403a1500
{uint64_t target=next+UINT64_C(0x51ff);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039c301): {next=c.rip+7; // cmp qword ptr [rip + 0x9e8f0], r14
m.arithmetic(m.get(Operand{2,0,64,0,16,-1,1,0,649456,UINT64_C(0x0)}),m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039c308): {next=c.rip+2; // jne 0x14039c321
if(m.condition(1))next=next+UINT64_C(0x17);
c.rip=next;return true;}
case UINT64_C(0x14039c30a): {next=c.rip+6; // mov eax, dword ptr [rip + 0x83740]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,16,-1,1,0,538432,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c310): {next=c.rip+2; // inc eax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14039c312): {next=c.rip+6; // mov dword ptr [rip + 0x83738], eax
m.put(Operand{2,0,32,0,16,-1,1,0,538424,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c318): {next=c.rip+2; // cdqe 
c.r[0]=uint64_t(int64_t(int32_t(c.r[0])));
c.rip=next;return true;}
case UINT64_C(0x14039c31a): {next=c.rip+7; // mov qword ptr [rip + 0x9e8d7], rax
m.put(Operand{2,0,64,0,16,-1,1,0,649431,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c321): {next=c.rip+8; // lea rcx, [rsp + 0xf8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,248,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c329): {next=c.rip+5; // call 0x1403a1578
{uint64_t target=next+UINT64_C(0x524a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039c32e): {next=c.rip+7; // mov r14, qword ptr [rip + 0x9e8c3]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,16,-1,1,0,649411,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c335): {next=c.rip+4; // cmp r14, qword ptr [rsi + 0x18]
m.arithmetic(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,6,-1,1,0,24,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039c339): {next=c.rip+2; // jae 0x14039c34a
if(m.condition(3))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x14039c33b): {next=c.rip+4; // mov rax, qword ptr [rsi + 0x10]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,6,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c33f): {next=c.rip+4; // mov rbx, qword ptr [rax + r14*8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,14,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c343): {next=c.rip+3; // test rbx, rbx
m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039c346): {next=c.rip+2; // jne 0x14039c3b6
if(m.condition(1))next=next+UINT64_C(0x6e);
c.rip=next;return true;}
case UINT64_C(0x14039c348): {next=c.rip+2; // jmp 0x14039c34d
next=next+UINT64_C(0x3);
c.rip=next;return true;}
case UINT64_C(0x14039c34a): {next=c.rip+3; // mov rbx, r15
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c34d): {next=c.rip+4; // cmp byte ptr [rsi + 0x24], 0
m.arithmetic(m.get(Operand{2,0,8,0,6,-1,1,0,36,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14039c351): {next=c.rip+2; // je 0x14039c366
if(m.condition(0))next=next+UINT64_C(0x13);
c.rip=next;return true;}
case UINT64_C(0x14039c353): {next=c.rip+5; // call 0x1403a2b5c
{uint64_t target=next+UINT64_C(0x6804);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039c358): {next=c.rip+4; // cmp r14, qword ptr [rax + 0x18]
m.arithmetic(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,0,-1,1,0,24,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039c35c): {next=c.rip+2; // jae 0x14039c36b
if(m.condition(3))next=next+UINT64_C(0xd);
c.rip=next;return true;}
case UINT64_C(0x14039c35e): {next=c.rip+4; // mov rax, qword ptr [rax + 0x10]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c362): {next=c.rip+4; // mov rbx, qword ptr [rax + r14*8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,14,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c366): {next=c.rip+3; // test rbx, rbx
m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039c369): {next=c.rip+2; // jne 0x14039c3b6
if(m.condition(1))next=next+UINT64_C(0x4b);
c.rip=next;return true;}
case UINT64_C(0x14039c36b): {next=c.rip+3; // test r12, r12
m.logic(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039c36e): {next=c.rip+2; // je 0x14039c375
if(m.condition(0))next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x14039c370): {next=c.rip+3; // mov rbx, r12
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c373): {next=c.rip+2; // jmp 0x14039c3b6
next=next+UINT64_C(0x41);
c.rip=next;return true;}
case UINT64_C(0x14039c375): {next=c.rip+8; // lea rdx, [rsp + 0x80]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c37d): {next=c.rip+5; // lea rcx, [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c382): {next=c.rip+5; // call 0x1403a0bc0
{uint64_t target=next+UINT64_C(0x4839);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039c387): {next=c.rip+4; // cmp rax, -1
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xffffffffffffffff)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039c38b): {next=c.rip+6; // je 0x14039c4bd
if(m.condition(0))next=next+UINT64_C(0x12c);
c.rip=next;return true;}
case UINT64_C(0x14039c391): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x50]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c396): {next=c.rip+8; // mov qword ptr [rsp + 0xf8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,248,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c39e): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c3a1): {next=c.rip+5; // call 0x1403a2b24
{uint64_t target=next+UINT64_C(0x677e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039c3a6): {next=c.rip+3; // mov rax, qword ptr [rbx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c3a9): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c3ac): {next=c.rip+3; // call qword ptr [rax + 8]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,8,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039c3af): {next=c.rip+7; // mov qword ptr [rip + 0x84ee2], rbx
m.put(Operand{2,0,64,0,16,-1,1,0,544482,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c3b6): {next=c.rip+5; // lea rcx, [rsp + 0x40]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c3bb): {next=c.rip+5; // call 0x1403a1578
{uint64_t target=next+UINT64_C(0x51b8);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039c3c0): {next=c.rip+3; // mov rax, qword ptr [rdi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c3c3): {next=c.rip+4; // movsxd rdx, dword ptr [rax + 4]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14039c3c7): {next=c.rip+3; // add rdx, rdi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039c3ca): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r15
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c3cf): {next=c.rip+7; // mov word ptr [rsp + 0x58], 1
m.put(Operand{2,0,16,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{1,0,16,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14039c3d6): {next=c.rip+4; // mov rax, qword ptr [rdx + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c3da): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c3df): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039c3e2): {next=c.rip+5; // sete byte ptr [rsp + 0x68]
m.put(Operand{2,0,8,0,4,-1,1,0,104,UINT64_C(0x0)},uint64_t(m.condition(0)));
c.rip=next;return true;}
case UINT64_C(0x14039c3e7): {next=c.rip+5; // mov byte ptr [rsp + 0x69], 0
m.put(Operand{2,0,8,0,4,-1,1,0,105,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c3ec): {next=c.rip+3; // mov rax, qword ptr [rbx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c3ef): {next=c.rip+5; // movaps xmm0, xmmword ptr [rsp + 0x50]
{uint8_t v[16];if((Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16)||(Operand{2,0,128,0,4,-1,1,0,80,UINT64_C(0x0)}.kind==2&&m.address(Operand{2,0,128,0,4,-1,1,0,80,UINT64_C(0x0)})%16))throw Fault(4,c.rip,"unaligned MOVAPS");m.vector_get(Operand{2,0,128,0,4,-1,1,0,80,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14039c3f4): {next=c.rip+6; // movdqa xmmword ptr [rsp + 0x50], xmm0
{if((Operand{2,0,128,0,4,-1,1,0,80,UINT64_C(0x0)}.kind==2&&m.address(Operand{2,0,128,0,4,-1,1,0,80,UINT64_C(0x0)})%16)||(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16))throw Fault(4,c.rip,"unaligned MOVDQA");uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,80,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14039c3fa): {next=c.rip+5; // movaps xmm1, xmmword ptr [rsp + 0x60]
{uint8_t v[16];if((Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16)||(Operand{2,0,128,0,4,-1,1,0,96,UINT64_C(0x0)}.kind==2&&m.address(Operand{2,0,128,0,4,-1,1,0,96,UINT64_C(0x0)})%16))throw Fault(4,c.rip,"unaligned MOVAPS");m.vector_get(Operand{2,0,128,0,4,-1,1,0,96,UINT64_C(0x0)},v);m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14039c3ff): {next=c.rip+6; // movdqa xmmword ptr [rsp + 0x60], xmm1
{if((Operand{2,0,128,0,4,-1,1,0,96,UINT64_C(0x0)}.kind==2&&m.address(Operand{2,0,128,0,4,-1,1,0,96,UINT64_C(0x0)})%16)||(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16))throw Fault(4,c.rip,"unaligned MOVDQA");uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,96,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14039c405): {next=c.rip+5; // mov qword ptr [rsp + 0x30], r13
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c40a): {next=c.rip+8; // lea rcx, [rsp + 0xf0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c412): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c417): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rdx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c41c): {next=c.rip+5; // lea r9, [rsp + 0x50]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c421): {next=c.rip+5; // lea r8, [rsp + 0x60]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c426): {next=c.rip+8; // lea rdx, [rsp + 0x90]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,144,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c42e): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c431): {next=c.rip+3; // call qword ptr [rax + 0x58]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,88,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039c434): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14039c435): {next=c.rip+3; // mov rax, qword ptr [rsi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,6,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c438): {next=c.rip+3; // mov rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c43b): {next=c.rip+3; // call qword ptr [rax + 0x10]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,16,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039c43e): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039c441): {next=c.rip+2; // je 0x14039c455
if(m.condition(0))next=next+UINT64_C(0x12);
c.rip=next;return true;}
case UINT64_C(0x14039c443): {next=c.rip+3; // mov rcx, qword ptr [rax]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c446): {next=c.rip+3; // mov r8, qword ptr [rcx]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c449): {next=c.rip+5; // mov edx, 1
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14039c44e): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c451): {next=c.rip+3; // call r8
{uint64_t target=m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039c454): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14039c455): {next=c.rip+2; // jmp 0x14039c462
next=next+UINT64_C(0xb);
c.rip=next;return true;}
case UINT64_C(0x14039c462): {next=c.rip+3; // mov rax, qword ptr [rdi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c465): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14039c469): {next=c.rip+3; // add rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039c46c): {next=c.rip+7; // mov eax, dword ptr [rsp + 0xf0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c473): {next=c.rip+3; // or eax, dword ptr [rcx + 0x10]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,32,0,1,-1,1,0,16,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039c476): {next=c.rip+5; // mov edx, 4
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4)}));
c.rip=next;return true;}
case UINT64_C(0x14039c47b): {next=c.rip+5; // cmp qword ptr [rcx + 0x48], 0
m.arithmetic(m.get(Operand{2,0,64,0,1,-1,1,0,72,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039c480): {next=c.rip+4; // cmovne edx, r15d
if(m.condition(1))m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c484): {next=c.rip+2; // or edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039c486): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039c489): {next=c.rip+5; // call 0x140001ef0
{uint64_t target=next+UINT64_C(0xffffffffffc65a62);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039c48e): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14039c48f): {next=c.rip+3; // mov rax, qword ptr [rdi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c492): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14039c496): {next=c.rip+5; // mov rcx, qword ptr [rcx + rdi + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,7,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c49b): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039c49e): {next=c.rip+2; // je 0x14039c4a7
if(m.condition(0))next=next+UINT64_C(0x7);
c.rip=next;return true;}
case UINT64_C(0x14039c4a0): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c4a3): {next=c.rip+3; // call qword ptr [rax + 0x10]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,16,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039c4a6): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14039c4a7): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039c4aa): {next=c.rip+7; // add rsp, 0xa0
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xa0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039c4b1): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039c4b3): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039c4b5): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039c4b7): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039c4b9): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039c4ba): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039c4bb): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039c4bc): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14039c4bd): {next=c.rip+5; // call 0x140001840
{uint64_t target=next+UINT64_C(0xffffffffffc6537e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039c4c2): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14039c4c3): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14039dec0): {next=c.rip+2; // test dl, dl
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14039dec2): {next=c.rip+2; // je 0x14039dece
if(m.condition(0))next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x14039dec4): {next=c.rip+5; // mov edx, 0x30
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x30)}));
c.rip=next;return true;}
case UINT64_C(0x14039dec9): {next=c.rip+5; // jmp 0x1403a3de0
next=next+UINT64_C(0x5f12);
c.rip=next;return true;}
case UINT64_C(0x14039dece): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14039ded0): {next=c.rip+7; // lea rax, [rip + 0x806d9]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,526041,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ded7): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14039dee0): {next=c.rip+3; // mov r8, qword ptr [r8]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,8,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039dee3): {next=c.rip+4; // add rcx, 8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039dee7): {next=c.rip+2; // mov edx, dword ptr [rdx]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,2,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039dee9): {next=c.rip+5; // jmp 0x140088a00
next=next+UINT64_C(0xffffffffffceab12);
c.rip=next;return true;}
case UINT64_C(0x14039def0): {next=c.rip+7; // lea rax, [rip + 0x53ca9]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,343209,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039def7): {next=c.rip+3; // mov qword ptr [rdx], rax
m.put(Operand{2,0,64,0,2,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039defa): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039defd): {next=c.rip+4; // movups xmm0, xmmword ptr [rcx + 8]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,1,-1,1,0,8,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14039df01): {next=c.rip+4; // movups xmmword ptr [rdx + 8], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,2,-1,1,0,8,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14039df05): {next=c.rip+4; // movups xmm1, xmmword ptr [rcx + 0x18]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,1,-1,1,0,24,UINT64_C(0x0)},v);m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14039df09): {next=c.rip+4; // movups xmmword ptr [rdx + 0x18], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,2,-1,1,0,24,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14039df0d): {next=c.rip+5; // movsd xmm0, qword ptr [rcx + 0x28]
{uint8_t v[16]{};uint64_t x=m.get(Operand{2,0,64,0,1,-1,1,0,40,UINT64_C(0x0)});std::memcpy(v,&x,8);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14039df12): {next=c.rip+5; // movsd qword ptr [rdx + 0x28], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);uint64_t x;std::memcpy(&x,v,8);m.put(Operand{2,0,64,0,2,-1,1,0,40,UINT64_C(0x0)},x);}
c.rip=next;return true;}
case UINT64_C(0x14039df17): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14039f570): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f575): {next=c.rip+5; // mov qword ptr [rsp + 8], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f57a): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f57b): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f57c): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f57e): {next=c.rip+4; // sub rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039f582): {next=c.rip+3; // movzx ebx, dl
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f585): {next=c.rip+3; // mov rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f588): {next=c.rip+3; // mov r8, qword ptr [rcx]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f58b): {next=c.rip+4; // movsxd rcx, dword ptr [r8 + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,8,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14039f58f): {next=c.rip+3; // add rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039f592): {next=c.rip+3; // mov eax, dword ptr [rcx + 0x10]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f595): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14039f597): {next=c.rip+2; // je 0x14039f5c7
if(m.condition(0))next=next+UINT64_C(0x2e);
c.rip=next;return true;}
case UINT64_C(0x14039f599): {next=c.rip+5; // mov edx, 6
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x6)}));
c.rip=next;return true;}
case UINT64_C(0x14039f59e): {next=c.rip+6; // mov r8d, 2
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}));
c.rip=next;return true;}
case UINT64_C(0x14039f5a4): {next=c.rip+5; // cmp qword ptr [rcx + 0x48], 0
m.arithmetic(m.get(Operand{2,0,64,0,1,-1,1,0,72,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039f5a9): {next=c.rip+4; // cmovne edx, r8d
if(m.condition(1))m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f5ad): {next=c.rip+2; // or edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039f5af): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039f5b2): {next=c.rip+5; // call 0x140001ef0
{uint64_t target=next+UINT64_C(0xffffffffffc62939);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039f5b7): {next=c.rip+2; // xor al, al
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14039f5b9): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x58]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f5be): {next=c.rip+4; // add rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039f5c2): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039f5c4): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039f5c5): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039f5c6): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14039f5c7): {next=c.rip+4; // mov rcx, qword ptr [rcx + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f5cb): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039f5ce): {next=c.rip+2; // je 0x14039f5d8
if(m.condition(0))next=next+UINT64_C(0x8);
c.rip=next;return true;}
case UINT64_C(0x14039f5d0): {next=c.rip+5; // call 0x14039a960
{uint64_t target=next+UINT64_C(0xffffffffffffb38b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039f5d5): {next=c.rip+3; // mov r8, qword ptr [rdi]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f5d8): {next=c.rip+3; // xor sil, sil
m.put(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14039f5db): {next=c.rip+5; // mov byte ptr [rsp + 0x60], sil
m.put(Operand{2,0,8,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f5e0): {next=c.rip+2; // test bl, bl
m.logic(m.get(Operand{0,3,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,3,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14039f5e2): {next=c.rip+6; // jne 0x14039f757
if(m.condition(1))next=next+UINT64_C(0x16f);
c.rip=next;return true;}
case UINT64_C(0x14039f5e8): {next=c.rip+4; // movsxd rax, dword ptr [r8 + 4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,8,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14039f5ec): {next=c.rip+5; // test byte ptr [rax + rdi + 0x18], 1
m.logic(m.get(Operand{2,0,8,0,0,7,1,0,24,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x14039f5f1): {next=c.rip+6; // je 0x14039f757
if(m.condition(0))next=next+UINT64_C(0x160);
c.rip=next;return true;}
case UINT64_C(0x14039f5f7): {next=c.rip+5; // mov rax, qword ptr [rax + rdi + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,7,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f5fc): {next=c.rip+4; // mov rbx, qword ptr [rax + 8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f600): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f605): {next=c.rip+3; // mov rax, qword ptr [rbx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f608): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f60b): {next=c.rip+3; // call qword ptr [rax + 8]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,8,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039f60e): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14039f60f): {next=c.rip+5; // lea rcx, [rsp + 0x20]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f614): {next=c.rip+5; // call 0x14039aca0
{uint64_t target=next+UINT64_C(0xffffffffffffb687);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039f619): {next=c.rip+3; // mov r14, rax
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f61c): {next=c.rip+3; // test rbx, rbx
m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039f61f): {next=c.rip+2; // je 0x14039f641
if(m.condition(0))next=next+UINT64_C(0x20);
c.rip=next;return true;}
case UINT64_C(0x14039f621): {next=c.rip+3; // mov rdx, qword ptr [rbx]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f624): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f627): {next=c.rip+3; // call qword ptr [rdx + 0x10]
{uint64_t target=m.get(Operand{2,0,64,0,2,-1,1,0,16,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039f62a): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039f62d): {next=c.rip+2; // je 0x14039f641
if(m.condition(0))next=next+UINT64_C(0x12);
c.rip=next;return true;}
case UINT64_C(0x14039f62f): {next=c.rip+3; // mov rcx, qword ptr [rax]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f632): {next=c.rip+3; // mov r8, qword ptr [rcx]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f635): {next=c.rip+5; // mov edx, 1
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14039f63a): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f63d): {next=c.rip+3; // call r8
{uint64_t target=m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039f640): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14039f641): {next=c.rip+3; // mov rax, qword ptr [rdi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f644): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14039f648): {next=c.rip+5; // mov rcx, qword ptr [rcx + rdi + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,7,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f64d): {next=c.rip+4; // mov rax, qword ptr [rcx + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f651): {next=c.rip+3; // mov rdx, qword ptr [rax]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f654): {next=c.rip+3; // test rdx, rdx
m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039f657): {next=c.rip+2; // je 0x14039f667
if(m.condition(0))next=next+UINT64_C(0xe);
c.rip=next;return true;}
case UINT64_C(0x14039f659): {next=c.rip+4; // mov rax, qword ptr [rcx + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f65d): {next=c.rip+3; // cmp dword ptr [rax], 0
m.arithmetic(m.get(Operand{2,0,32,0,0,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14039f660): {next=c.rip+2; // jle 0x14039f667
if(m.condition(7))next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x14039f662): {next=c.rip+3; // movzx eax, byte ptr [rdx]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,2,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f665): {next=c.rip+2; // jmp 0x14039f670
next=next+UINT64_C(0x9);
c.rip=next;return true;}
case UINT64_C(0x14039f667): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f66a): {next=c.rip+3; // call qword ptr [rax + 0x30]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,48,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039f66d): {next=c.rip+3; // nop dword ptr [rax]

c.rip=next;return true;}
case UINT64_C(0x14039f670): {next=c.rip+3; // cmp eax, -1
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xffffffffffffffff)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14039f673): {next=c.rip+2; // jne 0x14039f67f
if(m.condition(1))next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x14039f675): {next=c.rip+3; // mov sil, 1
m.put(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14039f678): {next=c.rip+5; // mov byte ptr [rsp + 0x60], sil
m.put(Operand{2,0,8,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f67d): {next=c.rip+2; // jmp 0x14039f68c
next=next+UINT64_C(0xd);
c.rip=next;return true;}
case UINT64_C(0x14039f67f): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f682): {next=c.rip+4; // mov rax, qword ptr [r14 + 0x18]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,24,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f686): {next=c.rip+4; // test byte ptr [rax + rcx*2], 0x48
m.logic(m.get(Operand{2,0,8,0,0,1,2,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x48)}),8);
c.rip=next;return true;}
case UINT64_C(0x14039f68a): {next=c.rip+2; // jne 0x14039f691
if(m.condition(1))next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x14039f68c): {next=c.rip+5; // jmp 0x14039f72b
next=next+UINT64_C(0x9a);
c.rip=next;return true;}
case UINT64_C(0x14039f691): {next=c.rip+3; // mov rax, qword ptr [rdi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f694): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14039f698): {next=c.rip+5; // mov rbx, qword ptr [rcx + rdi + 0x48]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,7,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f69d): {next=c.rip+4; // mov rax, qword ptr [rbx + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f6a1): {next=c.rip+4; // cmp qword ptr [rax], 0
m.arithmetic(m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039f6a5): {next=c.rip+2; // je 0x14039f6e4
if(m.condition(0))next=next+UINT64_C(0x3d);
c.rip=next;return true;}
case UINT64_C(0x14039f6a7): {next=c.rip+4; // mov rax, qword ptr [rbx + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f6ab): {next=c.rip+3; // cmp dword ptr [rax], 1
m.arithmetic(m.get(Operand{2,0,32,0,0,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14039f6ae): {next=c.rip+2; // jle 0x14039f6c4
if(m.condition(7))next=next+UINT64_C(0x14);
c.rip=next;return true;}
case UINT64_C(0x14039f6b0): {next=c.rip+2; // dec dword ptr [rax]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,0,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,0,-1,1,0,0,UINT64_C(0x0)}),1,32,true));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14039f6b2): {next=c.rip+4; // mov rax, qword ptr [rbx + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f6b6): {next=c.rip+3; // mov rcx, qword ptr [rax]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f6b9): {next=c.rip+3; // inc rcx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14039f6bc): {next=c.rip+3; // mov qword ptr [rax], rcx
m.put(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f6bf): {next=c.rip+3; // movzx eax, byte ptr [rcx]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f6c2): {next=c.rip+2; // jmp 0x14039f670
next=next+UINT64_C(0xffffffffffffffac);
c.rip=next;return true;}
case UINT64_C(0x14039f6c4): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f6c7): {next=c.rip+2; // mov eax, dword ptr [rax]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f6c9): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14039f6cb): {next=c.rip+2; // jle 0x14039f6e4
if(m.condition(7))next=next+UINT64_C(0x17);
c.rip=next;return true;}
case UINT64_C(0x14039f6cd): {next=c.rip+2; // dec eax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,true));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14039f6cf): {next=c.rip+2; // mov dword ptr [rcx], eax
m.put(Operand{2,0,32,0,1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f6d1): {next=c.rip+4; // mov rcx, qword ptr [rbx + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f6d5): {next=c.rip+3; // mov rdx, qword ptr [rcx]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f6d8): {next=c.rip+4; // lea rax, [rdx + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f6dc): {next=c.rip+3; // mov qword ptr [rcx], rax
m.put(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f6df): {next=c.rip+3; // movzx eax, byte ptr [rdx]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,2,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f6e2): {next=c.rip+2; // jmp 0x14039f6ed
next=next+UINT64_C(0x9);
c.rip=next;return true;}
case UINT64_C(0x14039f6e4): {next=c.rip+3; // mov rax, qword ptr [rbx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f6e7): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f6ea): {next=c.rip+3; // call qword ptr [rax + 0x38]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,56,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039f6ed): {next=c.rip+3; // cmp eax, -1
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xffffffffffffffff)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14039f6f0): {next=c.rip+6; // je 0x14039f670
if(m.condition(0))next=next+UINT64_C(0xffffffffffffff7a);
c.rip=next;return true;}
case UINT64_C(0x14039f6f6): {next=c.rip+4; // mov rax, qword ptr [rbx + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f6fa): {next=c.rip+3; // mov rcx, qword ptr [rax]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f6fd): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039f700): {next=c.rip+2; // je 0x14039f713
if(m.condition(0))next=next+UINT64_C(0x11);
c.rip=next;return true;}
case UINT64_C(0x14039f702): {next=c.rip+4; // mov rax, qword ptr [rbx + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f706): {next=c.rip+3; // cmp dword ptr [rax], 0
m.arithmetic(m.get(Operand{2,0,32,0,0,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14039f709): {next=c.rip+2; // jle 0x14039f713
if(m.condition(7))next=next+UINT64_C(0x8);
c.rip=next;return true;}
case UINT64_C(0x14039f70b): {next=c.rip+3; // movzx eax, byte ptr [rcx]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f70e): {next=c.rip+5; // jmp 0x14039f670
next=next+UINT64_C(0xffffffffffffff5d);
c.rip=next;return true;}
case UINT64_C(0x14039f713): {next=c.rip+3; // mov rax, qword ptr [rbx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f716): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f719): {next=c.rip+3; // call qword ptr [rax + 0x30]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,48,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039f71c): {next=c.rip+5; // jmp 0x14039f670
next=next+UINT64_C(0xffffffffffffff4f);
c.rip=next;return true;}
case UINT64_C(0x14039f72b): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14039f72e): {next=c.rip+2; // je 0x14039f757
if(m.condition(0))next=next+UINT64_C(0x27);
c.rip=next;return true;}
case UINT64_C(0x14039f730): {next=c.rip+3; // mov rax, qword ptr [rdi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f733): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14039f737): {next=c.rip+3; // add rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039f73a): {next=c.rip+5; // mov edx, 7
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x7)}));
c.rip=next;return true;}
case UINT64_C(0x14039f73f): {next=c.rip+5; // mov eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}));
c.rip=next;return true;}
case UINT64_C(0x14039f744): {next=c.rip+5; // cmp qword ptr [rcx + 0x48], 0
m.arithmetic(m.get(Operand{2,0,64,0,1,-1,1,0,72,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039f749): {next=c.rip+3; // cmovne edx, eax
if(m.condition(1))m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f74c): {next=c.rip+3; // or edx, dword ptr [rcx + 0x10]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,32,0,1,-1,1,0,16,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039f74f): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039f752): {next=c.rip+5; // call 0x140001ef0
{uint64_t target=next+UINT64_C(0xffffffffffc62799);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039f757): {next=c.rip+3; // mov rax, qword ptr [rdi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f75a): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14039f75e): {next=c.rip+5; // cmp dword ptr [rcx + rdi + 0x10], 0
m.arithmetic(m.get(Operand{2,0,32,0,1,7,1,0,16,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14039f763): {next=c.rip+3; // sete al
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.condition(0)));
c.rip=next;return true;}
case UINT64_C(0x14039f766): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x58]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039f76b): {next=c.rip+4; // add rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039f76f): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039f771): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039f772): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039f773): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
default:return false;
}}
}
