// Generated literal x64 semantics.
#include "../pafet_hexvm_cpu_xxvi.h"
namespace pafet_xxiv {
bool hexvm_part_e6(Machine& m){auto& c=m.c;auto& next=m.next;switch(m.canonical(c.rip)){
case UINT64_C(0x140398001): {next=c.rip+2; // jb 0x140398006
if(m.condition(2))next=next+UINT64_C(0x3);
c.rip=next;return true;}
case UINT64_C(0x140398003): {next=c.rip+3; // mov r15, qword ptr [r15]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,15,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398006): {next=c.rip+5; // mov eax, 2
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}));
c.rip=next;return true;}
case UINT64_C(0x14039800b): {next=c.rip+7; // cmp rdi, 0x7fffffff
m.arithmetic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7fffffff)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140398012): {next=c.rip+6; // ja 0x1403980a1
if(m.condition(5))next=next+UINT64_C(0x89);
c.rip=next;return true;}
case UINT64_C(0x140398018): {next=c.rip+3; // test rdi, rdi
m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039801b): {next=c.rip+2; // je 0x140398085
if(m.condition(0))next=next+UINT64_C(0x68);
c.rip=next;return true;}
case UINT64_C(0x14039801d): {next=c.rip+7; // cmp rdi, 0x1000
m.arithmetic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1000)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140398024): {next=c.rip+2; // jb 0x140398047
if(m.condition(2))next=next+UINT64_C(0x21);
c.rip=next;return true;}
case UINT64_C(0x140398026): {next=c.rip+4; // lea rcx, [rdi + 0x27]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,39,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039802a): {next=c.rip+3; // cmp rcx, rdi
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039802d): {next=c.rip+2; // jbe 0x1403980a7
if(m.condition(4))next=next+UINT64_C(0x78);
c.rip=next;return true;}
case UINT64_C(0x14039802f): {next=c.rip+5; // call 0x1403a4080
{uint64_t target=next+UINT64_C(0xc04c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140398034): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140398037): {next=c.rip+2; // je 0x14039809b
if(m.condition(0))next=next+UINT64_C(0x62);
c.rip=next;return true;}
case UINT64_C(0x140398039): {next=c.rip+4; // lea rbx, [rax + 0x27]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,-1,1,0,39,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039803d): {next=c.rip+4; // and rbx, 0xffffffffffffffe0
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xffffffffffffffe0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140398041): {next=c.rip+4; // mov qword ptr [rbx - 8], rax
m.put(Operand{2,0,64,0,3,-1,1,0,-8,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398045): {next=c.rip+2; // jmp 0x140398052
next=next+UINT64_C(0xb);
c.rip=next;return true;}
case UINT64_C(0x140398047): {next=c.rip+3; // mov rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039804a): {next=c.rip+5; // call 0x1403a4080
{uint64_t target=next+UINT64_C(0xc031);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039804f): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398052): {next=c.rip+3; // mov r8, rdi
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398055): {next=c.rip+3; // mov rdx, r15
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398058): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039805b): {next=c.rip+5; // call 0x1403a6070
{uint64_t target=next+UINT64_C(0xe010);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140398060): {next=c.rip+4; // lea rdx, [rdi + rbx]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398064): {next=c.rip+4; // mov qword ptr [rsi + 0x68], rdx
m.put(Operand{2,0,64,0,6,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398068): {next=c.rip+4; // mov rcx, qword ptr [rsi + 0x18]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,6,-1,1,0,24,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039806c): {next=c.rip+3; // mov qword ptr [rcx], rbx
m.put(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039806f): {next=c.rip+4; // mov rcx, qword ptr [rsi + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,6,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398073): {next=c.rip+3; // mov qword ptr [rcx], rbx
m.put(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398076): {next=c.rip+2; // sub edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x140398078): {next=c.rip+4; // mov rax, qword ptr [rsi + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,6,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039807c): {next=c.rip+2; // mov dword ptr [rax], edx
m.put(Operand{2,0,32,0,0,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039807e): {next=c.rip+5; // mov eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}));
c.rip=next;return true;}
case UINT64_C(0x140398083): {next=c.rip+2; // jmp 0x140398089
next=next+UINT64_C(0x4);
c.rip=next;return true;}
case UINT64_C(0x140398085): {next=c.rip+4; // mov qword ptr [rsi + 0x68], rbx
m.put(Operand{2,0,64,0,6,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398089): {next=c.rip+3; // mov dword ptr [rsi + 0x70], eax
m.put(Operand{2,0,32,0,6,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039808c): {next=c.rip+3; // mov rax, r14
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039808f): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140398093): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140398095): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140398097): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140398098): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140398099): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039809a): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14039809b): {next=c.rip+5; // call 0x1403b0814
{uint64_t target=next+UINT64_C(0x18774);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1403980a0): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x1403980a1): {next=c.rip+5; // call 0x1403a17ac
{uint64_t target=next+UINT64_C(0x9706);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1403980a6): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x1403980a7): {next=c.rip+5; // call 0x1400014c0
{uint64_t target=next+UINT64_C(0xffffffffffc69414);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1403980ac): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140398100): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398103): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140398110): {next=c.rip+2; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398112): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140398116): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398119): {next=c.rip+3; // mov rcx, qword ptr [rcx]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039811c): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039811f): {next=c.rip+2; // je 0x14039815b
if(m.condition(0))next=next+UINT64_C(0x3a);
c.rip=next;return true;}
case UINT64_C(0x140398121): {next=c.rip+4; // mov rdx, qword ptr [rbx + 0x10]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398125): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140398128): {next=c.rip+7; // cmp rdx, 0x1000
m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1000)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039812f): {next=c.rip+2; // jb 0x140398149
if(m.condition(2))next=next+UINT64_C(0x18);
c.rip=next;return true;}
case UINT64_C(0x140398131): {next=c.rip+4; // mov r8, qword ptr [rcx - 8]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,-8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398135): {next=c.rip+4; // add rdx, 0x27
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x27)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140398139): {next=c.rip+3; // sub rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039813c): {next=c.rip+4; // lea rax, [rcx - 8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,1,-1,1,0,-8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398140): {next=c.rip+4; // cmp rax, 0x1f
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1f)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140398144): {next=c.rip+2; // ja 0x140398161
if(m.condition(5))next=next+UINT64_C(0x1b);
c.rip=next;return true;}
case UINT64_C(0x140398146): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398149): {next=c.rip+5; // call 0x1403a3de0
{uint64_t target=next+UINT64_C(0xbc92);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039814e): {next=c.rip+2; // xor eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140398150): {next=c.rip+3; // mov qword ptr [rbx], rax
m.put(Operand{2,0,64,0,3,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398153): {next=c.rip+4; // mov qword ptr [rbx + 8], rax
m.put(Operand{2,0,64,0,3,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398157): {next=c.rip+4; // mov qword ptr [rbx + 0x10], rax
m.put(Operand{2,0,64,0,3,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039815b): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039815f): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140398160): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140398161): {next=c.rip+5; // call 0x1403b0814
{uint64_t target=next+UINT64_C(0x186ae);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140398166): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140398240): {next=c.rip+3; // mov qword ptr [rcx], rdx
m.put(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398243): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140398250): {next=c.rip+5; // mov qword ptr [rsp + 0x18], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398255): {next=c.rip+1; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398256): {next=c.rip+5; // lea rbp, [rsp - 0x57]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,-87,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039825b): {next=c.rip+7; // sub rsp, 0xb0
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140398262): {next=c.rip+7; // mov rax, qword ptr [rip + 0x74db7]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,16,-1,1,0,478647,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398269): {next=c.rip+3; // xor rax, rsp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14039826c): {next=c.rip+4; // mov qword ptr [rbp + 0x47], rax
m.put(Operand{2,0,64,0,5,-1,1,0,71,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398270): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398273): {next=c.rip+2; // xor ecx, ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140398275): {next=c.rip+4; // mov qword ptr [rbp - 1], rcx
m.put(Operand{2,0,64,0,5,-1,1,0,-1,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398279): {next=c.rip+4; // mov r8, qword ptr [rdx + 0x38]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039827d): {next=c.rip+3; // test r8, r8
m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140398280): {next=c.rip+2; // je 0x140398295
if(m.condition(0))next=next+UINT64_C(0x13);
c.rip=next;return true;}
case UINT64_C(0x140398282): {next=c.rip+3; // mov rax, qword ptr [r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,8,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398285): {next=c.rip+4; // lea rdx, [rbp - 0x39]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-57,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398289): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039828c): {next=c.rip+2; // call qword ptr [rax]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039828e): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398291): {next=c.rip+4; // mov qword ptr [rbp - 1], rax
m.put(Operand{2,0,64,0,5,-1,1,0,-1,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398295): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398298): {next=c.rip+4; // lea rdx, [rbp - 0x39]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-57,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039829c): {next=c.rip+3; // cmp rcx, rdx
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039829f): {next=c.rip+2; // je 0x1403982ba
if(m.condition(0))next=next+UINT64_C(0x19);
c.rip=next;return true;}
case UINT64_C(0x1403982a1): {next=c.rip+4; // mov rdx, qword ptr [rbx + 0x38]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403982a5): {next=c.rip+3; // cmp rdx, rbx
m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1403982a8): {next=c.rip+2; // je 0x1403982ba
if(m.condition(0))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x1403982aa): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403982ad): {next=c.rip+4; // mov qword ptr [rbp - 1], rdx
m.put(Operand{2,0,64,0,5,-1,1,0,-1,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403982b1): {next=c.rip+4; // mov qword ptr [rbx + 0x38], rax
m.put(Operand{2,0,64,0,3,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403982b5): {next=c.rip+5; // jmp 0x1403983a3
next=next+UINT64_C(0xe9);
c.rip=next;return true;}
case UINT64_C(0x1403982ba): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1403982bd): {next=c.rip+4; // mov qword ptr [rbp + 0x3f], r8
m.put(Operand{2,0,64,0,5,-1,1,0,63,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403982c1): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x1403982c4): {next=c.rip+2; // je 0x14039830c
if(m.condition(0))next=next+UINT64_C(0x46);
c.rip=next;return true;}
case UINT64_C(0x1403982c6): {next=c.rip+4; // lea rdx, [rbp - 0x39]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-57,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403982ca): {next=c.rip+3; // cmp rax, rdx
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1403982cd): {next=c.rip+2; // jne 0x1403982ff
if(m.condition(1))next=next+UINT64_C(0x30);
c.rip=next;return true;}
case UINT64_C(0x1403982cf): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403982d2): {next=c.rip+4; // lea rdx, [rbp + 7]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,7,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403982d6): {next=c.rip+3; // call qword ptr [rax + 8]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,8,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1403982d9): {next=c.rip+3; // mov r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403982dc): {next=c.rip+4; // mov qword ptr [rbp + 0x3f], rax
m.put(Operand{2,0,64,0,5,-1,1,0,63,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403982e0): {next=c.rip+4; // mov rcx, qword ptr [rbp - 1]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403982e4): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x1403982e7): {next=c.rip+2; // je 0x14039830c
if(m.condition(0))next=next+UINT64_C(0x23);
c.rip=next;return true;}
case UINT64_C(0x1403982e9): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403982ec): {next=c.rip+4; // lea rdx, [rbp - 0x39]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-57,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403982f0): {next=c.rip+3; // cmp rcx, rdx
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1403982f3): {next=c.rip+3; // setne dl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.condition(1)));
c.rip=next;return true;}
case UINT64_C(0x1403982f6): {next=c.rip+3; // call qword ptr [rax + 0x20]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,32,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1403982f9): {next=c.rip+4; // mov r8, qword ptr [rbp + 0x3f]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,63,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403982fd): {next=c.rip+2; // jmp 0x140398306
next=next+UINT64_C(0x7);
c.rip=next;return true;}
case UINT64_C(0x1403982ff): {next=c.rip+3; // mov r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398302): {next=c.rip+4; // mov qword ptr [rbp + 0x3f], rcx
m.put(Operand{2,0,64,0,5,-1,1,0,63,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398306): {next=c.rip+2; // xor ecx, ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140398308): {next=c.rip+4; // mov qword ptr [rbp - 1], rcx
m.put(Operand{2,0,64,0,5,-1,1,0,-1,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039830c): {next=c.rip+4; // mov r9, qword ptr [rbx + 0x38]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398310): {next=c.rip+3; // test r9, r9
m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140398313): {next=c.rip+2; // je 0x140398362
if(m.condition(0))next=next+UINT64_C(0x4d);
c.rip=next;return true;}
case UINT64_C(0x140398315): {next=c.rip+3; // mov rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398318): {next=c.rip+3; // cmp r9, rbx
m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039831b): {next=c.rip+2; // jne 0x140398356
if(m.condition(1))next=next+UINT64_C(0x39);
c.rip=next;return true;}
case UINT64_C(0x14039831d): {next=c.rip+3; // mov rax, qword ptr [r9]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,9,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398320): {next=c.rip+4; // lea rdx, [rbp - 0x39]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-57,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398324): {next=c.rip+3; // call qword ptr [rax + 8]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,8,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140398327): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039832a): {next=c.rip+4; // mov qword ptr [rbp - 1], rax
m.put(Operand{2,0,64,0,5,-1,1,0,-1,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039832e): {next=c.rip+4; // mov r8, qword ptr [rbx + 0x38]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398332): {next=c.rip+3; // test r8, r8
m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140398335): {next=c.rip+2; // je 0x140398350
if(m.condition(0))next=next+UINT64_C(0x19);
c.rip=next;return true;}
case UINT64_C(0x140398337): {next=c.rip+3; // mov rax, qword ptr [r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,8,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039833a): {next=c.rip+3; // cmp r8, rbx
m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039833d): {next=c.rip+3; // setne dl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.condition(1)));
c.rip=next;return true;}
case UINT64_C(0x140398340): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398343): {next=c.rip+3; // call qword ptr [rax + 0x20]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,32,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140398346): {next=c.rip+4; // mov rcx, qword ptr [rbp - 1]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039834a): {next=c.rip+4; // mov r8, qword ptr [rbp + 0x3f]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,63,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039834e): {next=c.rip+2; // jmp 0x14039835a
next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x140398350): {next=c.rip+4; // mov r8, qword ptr [rbp + 0x3f]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,63,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398354): {next=c.rip+2; // jmp 0x140398362
next=next+UINT64_C(0xc);
c.rip=next;return true;}
case UINT64_C(0x140398356): {next=c.rip+4; // mov qword ptr [rbp - 1], rcx
m.put(Operand{2,0,64,0,5,-1,1,0,-1,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039835a): {next=c.rip+8; // mov qword ptr [rbx + 0x38], 0
m.put(Operand{2,0,64,0,3,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398362): {next=c.rip+3; // test r8, r8
m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140398365): {next=c.rip+2; // je 0x1403983a3
if(m.condition(0))next=next+UINT64_C(0x3c);
c.rip=next;return true;}
case UINT64_C(0x140398367): {next=c.rip+4; // lea rax, [rbp + 7]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,7,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039836b): {next=c.rip+3; // cmp r8, rax
m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039836e): {next=c.rip+2; // jne 0x14039839f
if(m.condition(1))next=next+UINT64_C(0x2f);
c.rip=next;return true;}
case UINT64_C(0x140398370): {next=c.rip+3; // mov rax, qword ptr [r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,8,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398373): {next=c.rip+3; // mov rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398376): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398379): {next=c.rip+3; // call qword ptr [rax + 8]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,8,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039837c): {next=c.rip+4; // mov qword ptr [rbx + 0x38], rax
m.put(Operand{2,0,64,0,3,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398380): {next=c.rip+4; // mov rcx, qword ptr [rbp + 0x3f]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,63,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398384): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140398387): {next=c.rip+2; // je 0x140398399
if(m.condition(0))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x140398389): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039838c): {next=c.rip+4; // lea rdx, [rbp + 7]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,7,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398390): {next=c.rip+3; // cmp rcx, rdx
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140398393): {next=c.rip+3; // setne dl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.condition(1)));
c.rip=next;return true;}
case UINT64_C(0x140398396): {next=c.rip+3; // call qword ptr [rax + 0x20]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,32,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140398399): {next=c.rip+4; // mov rcx, qword ptr [rbp - 1]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039839d): {next=c.rip+2; // jmp 0x1403983a3
next=next+UINT64_C(0x4);
c.rip=next;return true;}
case UINT64_C(0x14039839f): {next=c.rip+4; // mov qword ptr [rbx + 0x38], r8
m.put(Operand{2,0,64,0,3,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403983a3): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x1403983a6): {next=c.rip+2; // je 0x1403983b9
if(m.condition(0))next=next+UINT64_C(0x11);
c.rip=next;return true;}
case UINT64_C(0x1403983a8): {next=c.rip+3; // mov r8, qword ptr [rcx]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403983ab): {next=c.rip+4; // lea rax, [rbp - 0x39]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-57,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403983af): {next=c.rip+3; // cmp rcx, rax
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1403983b2): {next=c.rip+3; // setne dl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.condition(1)));
c.rip=next;return true;}
case UINT64_C(0x1403983b5): {next=c.rip+4; // call qword ptr [r8 + 0x20]
{uint64_t target=m.get(Operand{2,0,64,0,8,-1,1,0,32,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1403983b9): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403983bc): {next=c.rip+4; // mov rcx, qword ptr [rbp + 0x47]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,71,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403983c0): {next=c.rip+3; // xor rcx, rsp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1403983c3): {next=c.rip+5; // call 0x1403a3dc0
{uint64_t target=next+UINT64_C(0xb9f8);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1403983c8): {next=c.rip+8; // mov rbx, qword ptr [rsp + 0xd0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,208,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403983d0): {next=c.rip+7; // add rsp, 0xb0
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1403983d7): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1403983d8): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x1403984e0): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403984e5): {next=c.rip+5; // mov qword ptr [rsp + 0x18], rbp
m.put(Operand{2,0,64,0,4,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403984ea): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403984eb): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1403984ef): {next=c.rip+2; // xor eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1403984f1): {next=c.rip+3; // mov rdi, rdx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403984f4): {next=c.rip+3; // mov qword ptr [rcx], rax
m.put(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403984f7): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403984fa): {next=c.rip+4; // mov qword ptr [rcx + 0x10], rax
m.put(Operand{2,0,64,0,1,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403984fe): {next=c.rip+4; // mov qword ptr [rcx + 0x18], rax
m.put(Operand{2,0,64,0,1,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398502): {next=c.rip+5; // cmp qword ptr [rdx + 0x18], 0x10
m.arithmetic(m.get(Operand{2,0,64,0,2,-1,1,0,24,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x10)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140398507): {next=c.rip+4; // mov rbp, qword ptr [rdx + 0x10]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039850b): {next=c.rip+2; // jb 0x140398510
if(m.condition(2))next=next+UINT64_C(0x3);
c.rip=next;return true;}
case UINT64_C(0x14039850d): {next=c.rip+3; // mov rdi, qword ptr [rdx]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398510): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398515): {next=c.rip+4; // cmp rbp, 0x10
m.arithmetic(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x10)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140398519): {next=c.rip+2; // jae 0x140398528
if(m.condition(3))next=next+UINT64_C(0xd);
c.rip=next;return true;}
case UINT64_C(0x14039851b): {next=c.rip+3; // movups xmm0, xmmword ptr [rdi]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,7,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14039851e): {next=c.rip+5; // mov esi, 0xf
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf)}));
c.rip=next;return true;}
case UINT64_C(0x140398523): {next=c.rip+3; // movups xmmword ptr [rcx], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140398526): {next=c.rip+2; // jmp 0x140398590
next=next+UINT64_C(0x68);
c.rip=next;return true;}
case UINT64_C(0x140398528): {next=c.rip+10; // movabs rcx, 0x7fffffffffffffff
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7fffffffffffffff)}));
c.rip=next;return true;}
case UINT64_C(0x140398532): {next=c.rip+3; // mov rsi, rbp
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398535): {next=c.rip+4; // or rsi, 0xf
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf)}),64));
c.rip=next;return true;}
case UINT64_C(0x140398539): {next=c.rip+3; // cmp rsi, rcx
m.arithmetic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039853c): {next=c.rip+4; // cmova rsi, rcx
if(m.condition(5))m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398540): {next=c.rip+4; // lea rcx, [rsi + 1]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398544): {next=c.rip+7; // cmp rcx, 0x1000
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1000)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039854b): {next=c.rip+2; // jb 0x140398574
if(m.condition(2))next=next+UINT64_C(0x27);
c.rip=next;return true;}
case UINT64_C(0x14039854d): {next=c.rip+4; // lea rax, [rcx + 0x27]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,1,-1,1,0,39,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398551): {next=c.rip+3; // cmp rax, rcx
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140398554): {next=c.rip+2; // jbe 0x1403985b6
if(m.condition(4))next=next+UINT64_C(0x60);
c.rip=next;return true;}
case UINT64_C(0x140398556): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398559): {next=c.rip+5; // call 0x1403a4080
{uint64_t target=next+UINT64_C(0xbb22);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039855e): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398561): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140398564): {next=c.rip+2; // je 0x1403985b0
if(m.condition(0))next=next+UINT64_C(0x4a);
c.rip=next;return true;}
case UINT64_C(0x140398566): {next=c.rip+4; // add rax, 0x27
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x27)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039856a): {next=c.rip+4; // and rax, 0xffffffffffffffe0
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xffffffffffffffe0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14039856e): {next=c.rip+4; // mov qword ptr [rax - 8], rcx
m.put(Operand{2,0,64,0,0,-1,1,0,-8,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398572): {next=c.rip+2; // jmp 0x14039857e
next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x140398574): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140398577): {next=c.rip+2; // je 0x14039857e
if(m.condition(0))next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x140398579): {next=c.rip+5; // call 0x1403a4080
{uint64_t target=next+UINT64_C(0xbb02);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039857e): {next=c.rip+4; // lea r8, [rbp + 1]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398582): {next=c.rip+3; // mov qword ptr [rbx], rax
m.put(Operand{2,0,64,0,3,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398585): {next=c.rip+3; // mov rdx, rdi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398588): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039858b): {next=c.rip+5; // call 0x1403a6070
{uint64_t target=next+UINT64_C(0xdae0);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140398590): {next=c.rip+4; // mov qword ptr [rbx + 0x10], rbp
m.put(Operand{2,0,64,0,3,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398594): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140398597): {next=c.rip+4; // mov qword ptr [rbx + 0x18], rsi
m.put(Operand{2,0,64,0,3,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039859b): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x30]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403985a0): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x38]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403985a5): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x40]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403985aa): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1403985ae): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1403985af): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x1403985b0): {next=c.rip+5; // call 0x1403b0814
{uint64_t target=next+UINT64_C(0x1825f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1403985b5): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x1403985b6): {next=c.rip+5; // call 0x1400014c0
{uint64_t target=next+UINT64_C(0xffffffffffc68f05);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1403985bb): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x1403995e0): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403995e5): {next=c.rip+5; // mov qword ptr [rsp + 8], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403995ea): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403995eb): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1403995ef): {next=c.rip+3; // mov rbx, rdx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403995f2): {next=c.rip+3; // mov rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403995f5): {next=c.rip+3; // mov qword ptr [rcx], rdx
m.put(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403995f8): {next=c.rip+3; // mov rdx, qword ptr [rdx]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403995fb): {next=c.rip+4; // movsxd rax, dword ptr [rdx + 4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,2,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1403995ff): {next=c.rip+5; // mov rcx, qword ptr [rax + rbx + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,3,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399604): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140399607): {next=c.rip+2; // je 0x140399612
if(m.condition(0))next=next+UINT64_C(0x9);
c.rip=next;return true;}
case UINT64_C(0x140399609): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039960c): {next=c.rip+3; // call qword ptr [rax + 8]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,8,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039960f): {next=c.rip+3; // mov rdx, qword ptr [rbx]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399612): {next=c.rip+4; // movsxd rcx, dword ptr [rdx + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,2,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140399616): {next=c.rip+5; // cmp dword ptr [rcx + rbx + 0x10], 0
m.arithmetic(m.get(Operand{2,0,32,0,1,3,1,0,16,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14039961b): {next=c.rip+2; // je 0x140399621
if(m.condition(0))next=next+UINT64_C(0x4);
c.rip=next;return true;}
case UINT64_C(0x14039961d): {next=c.rip+2; // xor al, al
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14039961f): {next=c.rip+2; // jmp 0x140399648
next=next+UINT64_C(0x27);
c.rip=next;return true;}
case UINT64_C(0x140399621): {next=c.rip+5; // mov rcx, qword ptr [rcx + rbx + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,3,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399626): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140399629): {next=c.rip+2; // je 0x140399646
if(m.condition(0))next=next+UINT64_C(0x1b);
c.rip=next;return true;}
case UINT64_C(0x14039962b): {next=c.rip+3; // cmp rcx, rbx
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039962e): {next=c.rip+2; // je 0x140399646
if(m.condition(0))next=next+UINT64_C(0x16);
c.rip=next;return true;}
case UINT64_C(0x140399630): {next=c.rip+5; // call 0x14039a960
{uint64_t target=next+UINT64_C(0x132b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140399635): {next=c.rip+3; // mov rax, qword ptr [rbx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399638): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14039963c): {next=c.rip+5; // cmp dword ptr [rcx + rbx + 0x10], 0
m.arithmetic(m.get(Operand{2,0,32,0,1,3,1,0,16,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140399641): {next=c.rip+3; // sete al
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.condition(0)));
c.rip=next;return true;}
case UINT64_C(0x140399644): {next=c.rip+2; // jmp 0x140399648
next=next+UINT64_C(0x2);
c.rip=next;return true;}
case UINT64_C(0x140399646): {next=c.rip+2; // mov al, 1
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x140399648): {next=c.rip+3; // mov byte ptr [rdi + 8], al
m.put(Operand{2,0,8,0,7,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039964b): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039964e): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x38]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399653): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140399657): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140399658): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x1403997c0): {next=c.rip+2; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403997c2): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1403997c6): {next=c.rip+4; // mov rdx, qword ptr [rcx + 0x18]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,24,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403997ca): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403997cd): {next=c.rip+4; // cmp rdx, 0x10
m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x10)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1403997d1): {next=c.rip+2; // jb 0x1403997ff
if(m.condition(2))next=next+UINT64_C(0x2c);
c.rip=next;return true;}
case UINT64_C(0x1403997d3): {next=c.rip+3; // mov rcx, qword ptr [rcx]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403997d6): {next=c.rip+3; // inc rdx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1403997d9): {next=c.rip+7; // cmp rdx, 0x1000
m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1000)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1403997e0): {next=c.rip+2; // jb 0x1403997fa
if(m.condition(2))next=next+UINT64_C(0x18);
c.rip=next;return true;}
case UINT64_C(0x1403997e2): {next=c.rip+4; // mov r8, qword ptr [rcx - 8]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,-8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403997e6): {next=c.rip+4; // add rdx, 0x27
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x27)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1403997ea): {next=c.rip+3; // sub rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1403997ed): {next=c.rip+4; // lea rax, [rcx - 8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,1,-1,1,0,-8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403997f1): {next=c.rip+4; // cmp rax, 0x1f
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1f)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1403997f5): {next=c.rip+2; // ja 0x140399818
if(m.condition(5))next=next+UINT64_C(0x21);
c.rip=next;return true;}
case UINT64_C(0x1403997f7): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403997fa): {next=c.rip+5; // call 0x1403a3de0
{uint64_t target=next+UINT64_C(0xa5e1);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1403997ff): {next=c.rip+8; // mov qword ptr [rbx + 0x10], 0
m.put(Operand{2,0,64,0,3,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399807): {next=c.rip+8; // mov qword ptr [rbx + 0x18], 0xf
m.put(Operand{2,0,64,0,3,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf)}));
c.rip=next;return true;}
case UINT64_C(0x14039980f): {next=c.rip+3; // mov byte ptr [rbx], 0
m.put(Operand{2,0,8,0,3,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399812): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140399816): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140399817): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140399818): {next=c.rip+5; // call 0x1403b0814
{uint64_t target=next+UINT64_C(0x16ff7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039981d): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140399990): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399995): {next=c.rip+5; // mov qword ptr [rsp + 0x18], rbp
m.put(Operand{2,0,64,0,4,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039999a): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039999b): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039999c): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039999e): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1403999a2): {next=c.rip+4; // mov rbp, qword ptr [rcx + 0x18]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,24,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403999a6): {next=c.rip+3; // mov rsi, r8
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403999a9): {next=c.rip+3; // mov r15, rdx
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403999ac): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403999af): {next=c.rip+3; // cmp r8, rbp
m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1403999b2): {next=c.rip+2; // ja 0x1403999d5
if(m.condition(5))next=next+UINT64_C(0x21);
c.rip=next;return true;}
case UINT64_C(0x1403999b4): {next=c.rip+3; // mov rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403999b7): {next=c.rip+4; // cmp rbp, 0x10
m.arithmetic(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x10)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1403999bb): {next=c.rip+2; // jb 0x1403999c0
if(m.condition(2))next=next+UINT64_C(0x3);
c.rip=next;return true;}
case UINT64_C(0x1403999bd): {next=c.rip+3; // mov rdi, qword ptr [rcx]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403999c0): {next=c.rip+4; // mov qword ptr [rcx + 0x10], rsi
m.put(Operand{2,0,64,0,1,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403999c4): {next=c.rip+3; // mov rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403999c7): {next=c.rip+5; // call 0x1403a6070
{uint64_t target=next+UINT64_C(0xc6a4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1403999cc): {next=c.rip+4; // mov byte ptr [rdi + rsi], 0
m.put(Operand{2,0,8,0,7,6,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403999d0): {next=c.rip+5; // jmp 0x140399ac4
next=next+UINT64_C(0xef);
c.rip=next;return true;}
case UINT64_C(0x1403999d5): {next=c.rip+10; // movabs rdi, 0x7fffffffffffffff
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7fffffffffffffff)}));
c.rip=next;return true;}
case UINT64_C(0x1403999df): {next=c.rip+3; // cmp rsi, rdi
m.arithmetic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1403999e2): {next=c.rip+6; // ja 0x140399ada
if(m.condition(5))next=next+UINT64_C(0xf2);
c.rip=next;return true;}
case UINT64_C(0x1403999e8): {next=c.rip+3; // mov rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403999eb): {next=c.rip+5; // mov qword ptr [rsp + 0x40], r14
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403999f0): {next=c.rip+4; // or rcx, 0xf
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf)}),64));
c.rip=next;return true;}
case UINT64_C(0x1403999f4): {next=c.rip+3; // cmp rcx, rdi
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1403999f7): {next=c.rip+2; // ja 0x140399a33
if(m.condition(5))next=next+UINT64_C(0x3a);
c.rip=next;return true;}
case UINT64_C(0x1403999f9): {next=c.rip+3; // mov rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403999fc): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1403999ff): {next=c.rip+3; // shr rdx, 1
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)},1);
c.rip=next;return true;}
case UINT64_C(0x140399a02): {next=c.rip+3; // sub rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140399a05): {next=c.rip+3; // cmp rbp, rax
m.arithmetic(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140399a08): {next=c.rip+2; // ja 0x140399a33
if(m.condition(5))next=next+UINT64_C(0x29);
c.rip=next;return true;}
case UINT64_C(0x140399a0a): {next=c.rip+4; // lea rax, [rdx + rbp]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,5,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399a0e): {next=c.rip+3; // mov rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399a11): {next=c.rip+3; // cmp rcx, rax
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140399a14): {next=c.rip+4; // cmovb rdi, rax
if(m.condition(2))m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399a18): {next=c.rip+4; // lea rax, [rdi + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399a1c): {next=c.rip+6; // cmp rax, 0x1000
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1000)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140399a22): {next=c.rip+2; // jb 0x140399a59
if(m.condition(2))next=next+UINT64_C(0x35);
c.rip=next;return true;}
case UINT64_C(0x140399a24): {next=c.rip+4; // lea rcx, [rax + 0x27]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,-1,1,0,39,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399a28): {next=c.rip+3; // cmp rcx, rax
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140399a2b): {next=c.rip+6; // jbe 0x140399ae0
if(m.condition(4))next=next+UINT64_C(0xaf);
c.rip=next;return true;}
case UINT64_C(0x140399a31): {next=c.rip+2; // jmp 0x140399a3d
next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x140399a33): {next=c.rip+10; // movabs rcx, 0x8000000000000027
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8000000000000027)}));
c.rip=next;return true;}
case UINT64_C(0x140399a3d): {next=c.rip+5; // call 0x1403a4080
{uint64_t target=next+UINT64_C(0xa63e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140399a42): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140399a45): {next=c.rip+6; // je 0x140399ae6
if(m.condition(0))next=next+UINT64_C(0x9b);
c.rip=next;return true;}
case UINT64_C(0x140399a4b): {next=c.rip+4; // lea r14, [rax + 0x27]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,-1,1,0,39,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399a4f): {next=c.rip+4; // and r14, 0xffffffffffffffe0
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xffffffffffffffe0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140399a53): {next=c.rip+4; // mov qword ptr [r14 - 8], rax
m.put(Operand{2,0,64,0,14,-1,1,0,-8,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399a57): {next=c.rip+2; // jmp 0x140399a6e
next=next+UINT64_C(0x15);
c.rip=next;return true;}
case UINT64_C(0x140399a59): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140399a5c): {next=c.rip+2; // je 0x140399a6b
if(m.condition(0))next=next+UINT64_C(0xd);
c.rip=next;return true;}
case UINT64_C(0x140399a5e): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399a61): {next=c.rip+5; // call 0x1403a4080
{uint64_t target=next+UINT64_C(0xa61a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140399a66): {next=c.rip+3; // mov r14, rax
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399a69): {next=c.rip+2; // jmp 0x140399a6e
next=next+UINT64_C(0x3);
c.rip=next;return true;}
case UINT64_C(0x140399a6b): {next=c.rip+3; // xor r14d, r14d
m.put(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140399a6e): {next=c.rip+3; // mov r8, rsi
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399a71): {next=c.rip+4; // mov qword ptr [rbx + 0x10], rsi
m.put(Operand{2,0,64,0,3,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399a75): {next=c.rip+3; // mov rdx, r15
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399a78): {next=c.rip+4; // mov qword ptr [rbx + 0x18], rdi
m.put(Operand{2,0,64,0,3,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399a7c): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399a7f): {next=c.rip+5; // call 0x1403a6070
{uint64_t target=next+UINT64_C(0xc5ec);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140399a84): {next=c.rip+5; // mov byte ptr [r14 + rsi], 0
m.put(Operand{2,0,8,0,14,6,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399a89): {next=c.rip+4; // cmp rbp, 0x10
m.arithmetic(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x10)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140399a8d): {next=c.rip+2; // jb 0x140399abc
if(m.condition(2))next=next+UINT64_C(0x2d);
c.rip=next;return true;}
case UINT64_C(0x140399a8f): {next=c.rip+3; // mov rcx, qword ptr [rbx]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399a92): {next=c.rip+4; // lea rdx, [rbp + 1]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399a96): {next=c.rip+7; // cmp rdx, 0x1000
m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1000)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140399a9d): {next=c.rip+2; // jb 0x140399ab7
if(m.condition(2))next=next+UINT64_C(0x18);
c.rip=next;return true;}
case UINT64_C(0x140399a9f): {next=c.rip+4; // mov r8, qword ptr [rcx - 8]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,-8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399aa3): {next=c.rip+4; // add rdx, 0x27
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x27)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140399aa7): {next=c.rip+3; // sub rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140399aaa): {next=c.rip+4; // lea rax, [rcx - 8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,1,-1,1,0,-8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399aae): {next=c.rip+4; // cmp rax, 0x1f
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1f)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140399ab2): {next=c.rip+2; // ja 0x140399ae6
if(m.condition(5))next=next+UINT64_C(0x32);
c.rip=next;return true;}
case UINT64_C(0x140399ab4): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399ab7): {next=c.rip+5; // call 0x1403a3de0
{uint64_t target=next+UINT64_C(0xa324);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140399abc): {next=c.rip+3; // mov qword ptr [rbx], r14
m.put(Operand{2,0,64,0,3,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399abf): {next=c.rip+5; // mov r14, qword ptr [rsp + 0x40]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399ac4): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x50]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399ac9): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399acc): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x48]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399ad1): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140399ad5): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140399ad7): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140399ad8): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140399ad9): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140399ada): {next=c.rip+5; // call 0x140001560
{uint64_t target=next+UINT64_C(0xffffffffffc67a81);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140399adf): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140399ae0): {next=c.rip+5; // call 0x1400014c0
{uint64_t target=next+UINT64_C(0xffffffffffc679db);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140399ae5): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140399ae6): {next=c.rip+5; // call 0x1403b0814
{uint64_t target=next+UINT64_C(0x16d29);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140399aeb): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140399af0): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399af5): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399af6): {next=c.rip+4; // sub rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140399afa): {next=c.rip+3; // mov rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399afd): {next=c.rip+3; // mov rsi, r8
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b00): {next=c.rip+4; // mov rcx, qword ptr [rcx + 0x10]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b04): {next=c.rip+4; // mov r8, qword ptr [rdi + 0x18]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,24,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b08): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b0b): {next=c.rip+3; // sub rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140399b0e): {next=c.rip+3; // cmp rsi, rax
m.arithmetic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140399b11): {next=c.rip+2; // ja 0x140399b52
if(m.condition(5))next=next+UINT64_C(0x3f);
c.rip=next;return true;}
case UINT64_C(0x140399b13): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b18): {next=c.rip+4; // lea rax, [rcx + rsi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,1,6,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b1c): {next=c.rip+4; // mov qword ptr [rdi + 0x10], rax
m.put(Operand{2,0,64,0,7,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b20): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b23): {next=c.rip+4; // cmp r8, 0x10
m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x10)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140399b27): {next=c.rip+2; // jb 0x140399b2c
if(m.condition(2))next=next+UINT64_C(0x3);
c.rip=next;return true;}
case UINT64_C(0x140399b29): {next=c.rip+3; // mov rax, qword ptr [rdi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b2c): {next=c.rip+4; // lea rbx, [rax + rcx]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b30): {next=c.rip+3; // mov r8, rsi
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b33): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b36): {next=c.rip+5; // call 0x1403a6070
{uint64_t target=next+UINT64_C(0xc535);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140399b3b): {next=c.rip+4; // mov byte ptr [rbx + rsi], 0
m.put(Operand{2,0,8,0,3,6,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b3f): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b42): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x40]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b47): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x48]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b4c): {next=c.rip+4; // add rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140399b50): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140399b51): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140399b52): {next=c.rip+3; // mov r9, rdx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b55): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b5a): {next=c.rip+3; // mov rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b5d): {next=c.rip+3; // mov rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b60): {next=c.rip+5; // call 0x14039b4f0
{uint64_t target=next+UINT64_C(0x198b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140399b65): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x48]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140399b6a): {next=c.rip+4; // add rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140399b6e): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140399b6f): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14039a960): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039a965): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039a966): {next=c.rip+4; // sub rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039a96a): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039a96d): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039a970): {next=c.rip+4; // movsxd rdx, dword ptr [rax + 4]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14039a974): {next=c.rip+5; // mov rdi, qword ptr [rdx + rcx + 0x48]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039a979): {next=c.rip+3; // test rdi, rdi
m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039a97c): {next=c.rip+2; // je 0x14039a9eb
if(m.condition(0))next=next+UINT64_C(0x6d);
c.rip=next;return true;}
case UINT64_C(0x14039a97e): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039a981): {next=c.rip+5; // lea rcx, [rsp + 0x20]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039a986): {next=c.rip+5; // call 0x1403995e0
{uint64_t target=next+UINT64_C(0xffffffffffffec55);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039a98b): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14039a98c): {next=c.rip+5; // cmp byte ptr [rsp + 0x28], 0
m.arithmetic(m.get(Operand{2,0,8,0,4,-1,1,0,40,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14039a991): {next=c.rip+2; // je 0x14039a9ba
if(m.condition(0))next=next+UINT64_C(0x27);
c.rip=next;return true;}
case UINT64_C(0x14039a993): {next=c.rip+3; // mov rax, qword ptr [rdi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039a996): {next=c.rip+3; // mov rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039a999): {next=c.rip+3; // call qword ptr [rax + 0x68]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,104,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039a99c): {next=c.rip+3; // cmp eax, -1
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xffffffffffffffff)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14039a99f): {next=c.rip+2; // jne 0x14039a9ba
if(m.condition(1))next=next+UINT64_C(0x19);
c.rip=next;return true;}
case UINT64_C(0x14039a9a1): {next=c.rip+3; // mov rax, qword ptr [rbx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039a9a4): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14039a9a8): {next=c.rip+3; // add rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039a9ab): {next=c.rip+3; // mov edx, dword ptr [rcx + 0x10]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039a9ae): {next=c.rip+3; // or edx, 4
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039a9b1): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039a9b4): {next=c.rip+5; // call 0x140001ef0
{uint64_t target=next+UINT64_C(0xffffffffffc67537);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039a9b9): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14039a9ba): {next=c.rip+5; // call 0x1403a2e34
{uint64_t target=next+UINT64_C(0x8475);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039a9bf): {next=c.rip+2; // test al, al
m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14039a9c1): {next=c.rip+2; // jne 0x14039a9ce
if(m.condition(1))next=next+UINT64_C(0xb);
c.rip=next;return true;}
case UINT64_C(0x14039a9c3): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x20]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039a9c8): {next=c.rip+5; // call 0x14039aa00
{uint64_t target=next+UINT64_C(0x33);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039a9cd): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14039a9ce): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x20]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039a9d3): {next=c.rip+3; // mov rax, qword ptr [rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039a9d6): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14039a9da): {next=c.rip+5; // mov rcx, qword ptr [rcx + rdx + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,2,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039a9df): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039a9e2): {next=c.rip+2; // je 0x14039a9eb
if(m.condition(0))next=next+UINT64_C(0x7);
c.rip=next;return true;}
case UINT64_C(0x14039a9e4): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039a9e7): {next=c.rip+3; // call qword ptr [rax + 0x10]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,16,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039a9ea): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14039a9eb): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039a9ee): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x40]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039a9f3): {next=c.rip+4; // add rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039a9f7): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039a9f8): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14039aa00): {next=c.rip+2; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa02): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039aa06): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa09): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa0c): {next=c.rip+4; // movsxd rdx, dword ptr [rax + 4]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14039aa10): {next=c.rip+5; // cmp dword ptr [rdx + rcx + 0x10], 0
m.arithmetic(m.get(Operand{2,0,32,0,2,1,1,0,16,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14039aa15): {next=c.rip+2; // jne 0x14039aa47
if(m.condition(1))next=next+UINT64_C(0x30);
c.rip=next;return true;}
case UINT64_C(0x14039aa17): {next=c.rip+5; // test byte ptr [rdx + rcx + 0x18], 2
m.logic(m.get(Operand{2,0,8,0,2,1,1,0,24,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x2)}),8);
c.rip=next;return true;}
case UINT64_C(0x14039aa1c): {next=c.rip+2; // je 0x14039aa47
if(m.condition(0))next=next+UINT64_C(0x29);
c.rip=next;return true;}
case UINT64_C(0x14039aa1e): {next=c.rip+5; // mov rcx, qword ptr [rdx + rcx + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa23): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa26): {next=c.rip+3; // call qword ptr [rax + 0x68]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,104,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039aa29): {next=c.rip+3; // cmp eax, -1
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xffffffffffffffff)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14039aa2c): {next=c.rip+2; // jne 0x14039aa47
if(m.condition(1))next=next+UINT64_C(0x19);
c.rip=next;return true;}
case UINT64_C(0x14039aa2e): {next=c.rip+3; // mov rax, qword ptr [rbx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa31): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14039aa35): {next=c.rip+3; // add rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039aa38): {next=c.rip+3; // mov edx, dword ptr [rcx + 0x10]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa3b): {next=c.rip+3; // or edx, 4
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039aa3e): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039aa41): {next=c.rip+5; // call 0x140001ef0
{uint64_t target=next+UINT64_C(0xffffffffffc674aa);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039aa46): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14039aa47): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039aa4b): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039aa4c): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14039aa50): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa55): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa56): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039aa5a): {next=c.rip+3; // mov rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa5d): {next=c.rip+7; // lea rax, [rip + 0x32ce4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,208100,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa64): {next=c.rip+3; // mov qword ptr [rcx], rax
m.put(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa67): {next=c.rip+5; // mov ecx, 0x10
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x10)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa6c): {next=c.rip+5; // call 0x1403a4080
{uint64_t target=next+UINT64_C(0x960f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039aa71): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa74): {next=c.rip+2; // mov cl, 1
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa76): {next=c.rip+5; // call 0x1403a2b64
{uint64_t target=next+UINT64_C(0x80e9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039aa7b): {next=c.rip+4; // mov qword ptr [rbx + 8], rax
m.put(Operand{2,0,64,0,3,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa7f): {next=c.rip+4; // mov qword ptr [rdi + 0x60], rbx
m.put(Operand{2,0,64,0,7,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa83): {next=c.rip+4; // lea r10, [rdi + 8]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa87): {next=c.rip+4; // mov qword ptr [rdi + 0x18], r10
m.put(Operand{2,0,64,0,7,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa8b): {next=c.rip+4; // lea r8, [rdi + 0x10]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa8f): {next=c.rip+4; // mov qword ptr [rdi + 0x20], r8
m.put(Operand{2,0,64,0,7,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa93): {next=c.rip+4; // lea r9, [rdi + 0x28]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa97): {next=c.rip+4; // mov qword ptr [rdi + 0x38], r9
m.put(Operand{2,0,64,0,7,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa9b): {next=c.rip+4; // lea rcx, [rdi + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aa9f): {next=c.rip+4; // mov qword ptr [rdi + 0x40], rcx
m.put(Operand{2,0,64,0,7,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aaa3): {next=c.rip+4; // lea rdx, [rdi + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aaa7): {next=c.rip+4; // mov qword ptr [rdi + 0x50], rdx
m.put(Operand{2,0,64,0,7,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aaab): {next=c.rip+4; // lea rax, [rdi + 0x4c]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,76,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aaaf): {next=c.rip+4; // mov qword ptr [rdi + 0x58], rax
m.put(Operand{2,0,64,0,7,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aab3): {next=c.rip+3; // xor r11d, r11d
m.put(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039aab6): {next=c.rip+3; // mov qword ptr [r8], r11
m.put(Operand{2,0,64,0,8,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aab9): {next=c.rip+3; // mov qword ptr [rcx], r11
m.put(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aabc): {next=c.rip+3; // mov dword ptr [rax], r11d
m.put(Operand{2,0,32,0,0,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aabf): {next=c.rip+3; // mov qword ptr [r10], r11
m.put(Operand{2,0,64,0,10,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aac2): {next=c.rip+3; // mov qword ptr [r9], r11
m.put(Operand{2,0,64,0,9,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aac5): {next=c.rip+3; // mov dword ptr [rdx], r11d
m.put(Operand{2,0,32,0,2,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aac8): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aacb): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x30]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aad0): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039aad4): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039aad5): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14039aae0): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aae5): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rbp
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aaea): {next=c.rip+5; // mov qword ptr [rsp + 0x18], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aaef): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aaf4): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aaf6): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039aafa): {next=c.rip+4; // movzx ebp, r8b
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aafe): {next=c.rip+3; // mov rdi, rdx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab01): {next=c.rip+3; // mov rsi, rcx
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab04): {next=c.rip+3; // xor r14d, r14d
m.put(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039ab07): {next=c.rip+4; // mov qword ptr [rcx + 0x40], r14
m.put(Operand{2,0,64,0,1,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab0b): {next=c.rip+4; // mov qword ptr [rcx + 8], r14
m.put(Operand{2,0,64,0,1,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab0f): {next=c.rip+4; // mov dword ptr [rcx + 0x14], r14d
m.put(Operand{2,0,32,0,1,-1,1,0,20,UINT64_C(0x0)},m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab13): {next=c.rip+7; // mov dword ptr [rcx + 0x18], 0x201
m.put(Operand{2,0,32,0,1,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x201)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab1a): {next=c.rip+8; // mov qword ptr [rcx + 0x20], 6
m.put(Operand{2,0,64,0,1,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x6)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab22): {next=c.rip+4; // mov qword ptr [rcx + 0x28], r14
m.put(Operand{2,0,64,0,1,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab26): {next=c.rip+4; // mov qword ptr [rcx + 0x30], r14
m.put(Operand{2,0,64,0,1,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab2a): {next=c.rip+4; // mov qword ptr [rcx + 0x38], r14
m.put(Operand{2,0,64,0,1,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab2e): {next=c.rip+4; // mov dword ptr [rcx + 0x10], r14d
m.put(Operand{2,0,32,0,1,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab32): {next=c.rip+4; // lea ecx, [r14 + 0x10]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,14,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab36): {next=c.rip+5; // call 0x1403a4080
{uint64_t target=next+UINT64_C(0x9545);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039ab3b): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab3e): {next=c.rip+2; // mov cl, 1
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab40): {next=c.rip+5; // call 0x1403a2b64
{uint64_t target=next+UINT64_C(0x801f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039ab45): {next=c.rip+4; // mov qword ptr [rbx + 8], rax
m.put(Operand{2,0,64,0,3,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab49): {next=c.rip+4; // mov qword ptr [rsi + 0x40], rbx
m.put(Operand{2,0,64,0,6,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab4d): {next=c.rip+4; // mov qword ptr [rsi + 0x48], rdi
m.put(Operand{2,0,64,0,6,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab51): {next=c.rip+4; // mov qword ptr [rsi + 0x50], r14
m.put(Operand{2,0,64,0,6,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab55): {next=c.rip+2; // mov dl, 0x20
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x20)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab57): {next=c.rip+3; // mov rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab5a): {next=c.rip+5; // call 0x14039ac30
{uint64_t target=next+UINT64_C(0xd1);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039ab5f): {next=c.rip+3; // mov byte ptr [rsi + 0x58], al
m.put(Operand{2,0,8,0,6,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab62): {next=c.rip+4; // cmp qword ptr [rsi + 0x48], r14
m.arithmetic(m.get(Operand{2,0,64,0,6,-1,1,0,72,UINT64_C(0x0)}),m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039ab66): {next=c.rip+2; // jne 0x14039ab79
if(m.condition(1))next=next+UINT64_C(0x11);
c.rip=next;return true;}
case UINT64_C(0x14039ab68): {next=c.rip+3; // mov edx, dword ptr [rsi + 0x10]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,6,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab6b): {next=c.rip+3; // or edx, 4
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039ab6e): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039ab71): {next=c.rip+3; // mov rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab74): {next=c.rip+5; // call 0x140001ef0
{uint64_t target=next+UINT64_C(0xffffffffffc67377);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039ab79): {next=c.rip+3; // test bpl, bpl
m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14039ab7c): {next=c.rip+2; // je 0x14039ab86
if(m.condition(0))next=next+UINT64_C(0x8);
c.rip=next;return true;}
case UINT64_C(0x14039ab7e): {next=c.rip+3; // mov rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab81): {next=c.rip+5; // call 0x1403a2e3c
{uint64_t target=next+UINT64_C(0x82b6);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039ab86): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x30]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab8b): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x38]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab90): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x40]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab95): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x48]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ab9a): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039ab9e): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039aba0): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14039abb0): {next=c.rip+4; // sub rsp, 0x28
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x28)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039abb4): {next=c.rip+7; // lea rcx, [rip + 0x410a5]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,266405,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039abbb): {next=c.rip+5; // call 0x1403a1810
{uint64_t target=next+UINT64_C(0x6c50);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039abc0): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14039ac30): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac35): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac36): {next=c.rip+4; // sub rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039ac3a): {next=c.rip+3; // movzx ebx, dl
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac3d): {next=c.rip+4; // mov rax, qword ptr [rcx + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac41): {next=c.rip+4; // mov rdi, qword ptr [rax + 8]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac45): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac4a): {next=c.rip+3; // mov rax, qword ptr [rdi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac4d): {next=c.rip+3; // mov rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac50): {next=c.rip+3; // call qword ptr [rax + 8]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,8,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039ac53): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14039ac54): {next=c.rip+5; // lea rcx, [rsp + 0x20]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac59): {next=c.rip+5; // call 0x14039aca0
{uint64_t target=next+UINT64_C(0x42);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039ac5e): {next=c.rip+3; // mov rdx, qword ptr [rax]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac61): {next=c.rip+4; // mov r8, qword ptr [rdx + 0x40]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac65): {next=c.rip+3; // movzx edx, bl
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac68): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac6b): {next=c.rip+3; // call r8
{uint64_t target=m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039ac6e): {next=c.rip+3; // movzx ebx, al
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac71): {next=c.rip+3; // test rdi, rdi
m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039ac74): {next=c.rip+2; // je 0x14039ac95
if(m.condition(0))next=next+UINT64_C(0x1f);
c.rip=next;return true;}
case UINT64_C(0x14039ac76): {next=c.rip+3; // mov rdx, qword ptr [rdi]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac79): {next=c.rip+3; // mov rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac7c): {next=c.rip+3; // call qword ptr [rdx + 0x10]
{uint64_t target=m.get(Operand{2,0,64,0,2,-1,1,0,16,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039ac7f): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039ac82): {next=c.rip+2; // je 0x14039ac92
if(m.condition(0))next=next+UINT64_C(0xe);
c.rip=next;return true;}
case UINT64_C(0x14039ac84): {next=c.rip+3; // mov r8, qword ptr [rax]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac87): {next=c.rip+5; // mov edx, 1
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac8c): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac8f): {next=c.rip+3; // call qword ptr [r8]
{uint64_t target=m.get(Operand{2,0,64,0,8,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039ac92): {next=c.rip+3; // movzx eax, bl
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac95): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x40]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ac9a): {next=c.rip+4; // add rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039ac9e): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039ac9f): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14039aca0): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aca5): {next=c.rip+1; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aca6): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aca7): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039aca8): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039acac): {next=c.rip+3; // mov rbp, rcx
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039acaf): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039acb1): {next=c.rip+5; // lea rcx, [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039acb6): {next=c.rip+5; // call 0x1403a1500
{uint64_t target=next+UINT64_C(0x6845);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039acbb): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14039acbc): {next=c.rip+7; // mov rsi, qword ptr [rip + 0x865ed]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,16,-1,1,0,550381,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039acc3): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039acc8): {next=c.rip+7; // mov rdi, qword ptr [rip + 0x84d99]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,16,-1,1,0,544153,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039accf): {next=c.rip+3; // test rdi, rdi
m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039acd2): {next=c.rip+2; // jne 0x14039ad11
if(m.condition(1))next=next+UINT64_C(0x3d);
c.rip=next;return true;}
case UINT64_C(0x14039acd4): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039acd6): {next=c.rip+5; // lea rcx, [rsp + 0x40]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039acdb): {next=c.rip+5; // call 0x1403a1500
{uint64_t target=next+UINT64_C(0x6820);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039ace0): {next=c.rip+7; // cmp qword ptr [rip + 0x84d81], rdi
m.arithmetic(m.get(Operand{2,0,64,0,16,-1,1,0,544129,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039ace7): {next=c.rip+2; // jne 0x14039ad00
if(m.condition(1))next=next+UINT64_C(0x17);
c.rip=next;return true;}
case UINT64_C(0x14039ace9): {next=c.rip+6; // mov eax, dword ptr [rip + 0x84d61]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,16,-1,1,0,544097,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039acef): {next=c.rip+2; // inc eax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14039acf1): {next=c.rip+6; // mov dword ptr [rip + 0x84d59], eax
m.put(Operand{2,0,32,0,16,-1,1,0,544089,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039acf7): {next=c.rip+2; // cdqe 
c.r[0]=uint64_t(int64_t(int32_t(c.r[0])));
c.rip=next;return true;}
case UINT64_C(0x14039acf9): {next=c.rip+7; // mov qword ptr [rip + 0x84d68], rax
m.put(Operand{2,0,64,0,16,-1,1,0,544104,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad00): {next=c.rip+5; // lea rcx, [rsp + 0x40]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad05): {next=c.rip+5; // call 0x1403a1578
{uint64_t target=next+UINT64_C(0x686e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039ad0a): {next=c.rip+7; // mov rdi, qword ptr [rip + 0x84d57]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,16,-1,1,0,544087,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad11): {next=c.rip+4; // mov rcx, qword ptr [rbp + 8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad15): {next=c.rip+4; // cmp rdi, qword ptr [rcx + 0x18]
m.arithmetic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,1,-1,1,0,24,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039ad19): {next=c.rip+2; // jae 0x14039ad2a
if(m.condition(3))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x14039ad1b): {next=c.rip+4; // mov rax, qword ptr [rcx + 0x10]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad1f): {next=c.rip+4; // mov rbx, qword ptr [rax + rdi*8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,7,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad23): {next=c.rip+3; // test rbx, rbx
m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039ad26): {next=c.rip+2; // jne 0x14039ad89
if(m.condition(1))next=next+UINT64_C(0x61);
c.rip=next;return true;}
case UINT64_C(0x14039ad28): {next=c.rip+2; // jmp 0x14039ad2c
next=next+UINT64_C(0x2);
c.rip=next;return true;}
case UINT64_C(0x14039ad2a): {next=c.rip+2; // xor ebx, ebx
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039ad2c): {next=c.rip+4; // cmp byte ptr [rcx + 0x24], 0
m.arithmetic(m.get(Operand{2,0,8,0,1,-1,1,0,36,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14039ad30): {next=c.rip+2; // je 0x14039ad45
if(m.condition(0))next=next+UINT64_C(0x13);
c.rip=next;return true;}
case UINT64_C(0x14039ad32): {next=c.rip+5; // call 0x1403a2b5c
{uint64_t target=next+UINT64_C(0x7e25);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039ad37): {next=c.rip+4; // cmp rdi, qword ptr [rax + 0x18]
m.arithmetic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,0,-1,1,0,24,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039ad3b): {next=c.rip+2; // jae 0x14039ad4a
if(m.condition(3))next=next+UINT64_C(0xd);
c.rip=next;return true;}
case UINT64_C(0x14039ad3d): {next=c.rip+4; // mov rax, qword ptr [rax + 0x10]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad41): {next=c.rip+4; // mov rbx, qword ptr [rax + rdi*8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,7,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad45): {next=c.rip+3; // test rbx, rbx
m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039ad48): {next=c.rip+2; // jne 0x14039ad89
if(m.condition(1))next=next+UINT64_C(0x3f);
c.rip=next;return true;}
case UINT64_C(0x14039ad4a): {next=c.rip+3; // test rsi, rsi
m.logic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039ad4d): {next=c.rip+2; // je 0x14039ad54
if(m.condition(0))next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x14039ad4f): {next=c.rip+3; // mov rbx, rsi
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad52): {next=c.rip+2; // jmp 0x14039ad89
next=next+UINT64_C(0x35);
c.rip=next;return true;}
case UINT64_C(0x14039ad54): {next=c.rip+3; // mov rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad57): {next=c.rip+5; // lea rcx, [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad5c): {next=c.rip+5; // call 0x140001a50
{uint64_t target=next+UINT64_C(0xffffffffffc66cef);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039ad61): {next=c.rip+4; // cmp rax, -1
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xffffffffffffffff)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039ad65): {next=c.rip+2; // je 0x14039ada3
if(m.condition(0))next=next+UINT64_C(0x3c);
c.rip=next;return true;}
case UINT64_C(0x14039ad67): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x50]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad6c): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad71): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad74): {next=c.rip+5; // call 0x1403a2b24
{uint64_t target=next+UINT64_C(0x7dab);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039ad79): {next=c.rip+3; // mov rdx, qword ptr [rbx]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad7c): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad7f): {next=c.rip+3; // call qword ptr [rdx + 8]
{uint64_t target=m.get(Operand{2,0,64,0,2,-1,1,0,8,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039ad82): {next=c.rip+7; // mov qword ptr [rip + 0x86527], rbx
m.put(Operand{2,0,64,0,16,-1,1,0,550183,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad89): {next=c.rip+5; // lea rcx, [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad8e): {next=c.rip+5; // call 0x1403a1578
{uint64_t target=next+UINT64_C(0x67e5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039ad93): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad96): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x58]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039ad9b): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039ad9f): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039ada0): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039ada1): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039ada2): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14039ada3): {next=c.rip+5; // call 0x140001840
{uint64_t target=next+UINT64_C(0xffffffffffc66a98);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039ada8): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14039ada9): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14039b020): {next=c.rip+3; // test rdx, rdx
m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039b023): {next=c.rip+6; // je 0x14039b0c4
if(m.condition(0))next=next+UINT64_C(0x9b);
c.rip=next;return true;}
case UINT64_C(0x14039b029): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b02e): {next=c.rip+5; // mov qword ptr [rsp + 0x18], rbp
m.put(Operand{2,0,64,0,4,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b033): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b034): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039b038): {next=c.rip+10; // movabs rax, 0x7fffffffffffffff
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7fffffffffffffff)}));
c.rip=next;return true;}
case UINT64_C(0x14039b042): {next=c.rip+3; // mov rbp, r8
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b045): {next=c.rip+3; // mov rbx, rdx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b048): {next=c.rip+3; // mov rsi, rcx
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b04b): {next=c.rip+3; // cmp rdx, rax
m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b04e): {next=c.rip+2; // ja 0x14039b0cb
if(m.condition(5))next=next+UINT64_C(0x7b);
c.rip=next;return true;}
case UINT64_C(0x14039b050): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b055): {next=c.rip+7; // cmp rdx, 0x1000
m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1000)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b05c): {next=c.rip+2; // jb 0x14039b07f
if(m.condition(2))next=next+UINT64_C(0x21);
c.rip=next;return true;}
case UINT64_C(0x14039b05e): {next=c.rip+4; // lea rcx, [rdx + 0x27]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,-1,1,0,39,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b062): {next=c.rip+3; // cmp rcx, rdx
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b065): {next=c.rip+2; // jbe 0x14039b0d1
if(m.condition(4))next=next+UINT64_C(0x6a);
c.rip=next;return true;}
case UINT64_C(0x14039b067): {next=c.rip+5; // call 0x1403a4080
{uint64_t target=next+UINT64_C(0x9014);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b06c): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039b06f): {next=c.rip+2; // je 0x14039b0c5
if(m.condition(0))next=next+UINT64_C(0x54);
c.rip=next;return true;}
case UINT64_C(0x14039b071): {next=c.rip+4; // lea rdi, [rax + 0x27]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,-1,1,0,39,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b075): {next=c.rip+4; // and rdi, 0xffffffffffffffe0
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xffffffffffffffe0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14039b079): {next=c.rip+4; // mov qword ptr [rdi - 8], rax
m.put(Operand{2,0,64,0,7,-1,1,0,-8,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b07d): {next=c.rip+2; // jmp 0x14039b08a
next=next+UINT64_C(0xb);
c.rip=next;return true;}
case UINT64_C(0x14039b07f): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b082): {next=c.rip+5; // call 0x1403a4080
{uint64_t target=next+UINT64_C(0x8ff9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b087): {next=c.rip+3; // mov rdi, rax
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b08a): {next=c.rip+3; // mov qword ptr [rsi], rdi
m.put(Operand{2,0,64,0,6,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b08d): {next=c.rip+4; // lea rcx, [rdi + rbx]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b091): {next=c.rip+4; // mov qword ptr [rsi + 8], rdi
m.put(Operand{2,0,64,0,6,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b095): {next=c.rip+3; // mov r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b098): {next=c.rip+4; // mov qword ptr [rsi + 0x10], rcx
m.put(Operand{2,0,64,0,6,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b09c): {next=c.rip+3; // mov rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b09f): {next=c.rip+4; // movzx edx, byte ptr [rbp]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,5,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b0a3): {next=c.rip+5; // call 0x1403a6720
{uint64_t target=next+UINT64_C(0xb678);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b0a8): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x40]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b0ad): {next=c.rip+4; // lea rax, [rdi + rbx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b0b1): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x30]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b0b6): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x38]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b0bb): {next=c.rip+4; // mov qword ptr [rsi + 8], rax
m.put(Operand{2,0,64,0,6,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b0bf): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039b0c3): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039b0c4): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14039b0c5): {next=c.rip+5; // call 0x1403b0814
{uint64_t target=next+UINT64_C(0x1574a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b0ca): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14039b0cb): {next=c.rip+5; // call 0x14039bc50
{uint64_t target=next+UINT64_C(0xb80);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b0d0): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14039b0d1): {next=c.rip+5; // call 0x1400014c0
{uint64_t target=next+UINT64_C(0xffffffffffc663ea);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b0d6): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14039b0e0): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b0e5): {next=c.rip+1; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b0e6): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b0e7): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b0e9): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039b0ed): {next=c.rip+4; // mov rbp, qword ptr [rcx + 0x10]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b0f1): {next=c.rip+10; // movabs rbx, 0x7fffffffffffffff
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7fffffffffffffff)}));
c.rip=next;return true;}
case UINT64_C(0x14039b0fb): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b0fe): {next=c.rip+4; // movzx r15d, r9b
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b102): {next=c.rip+3; // sub rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039b105): {next=c.rip+3; // mov rsi, rcx
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b108): {next=c.rip+4; // cmp rax, 1
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b10c): {next=c.rip+6; // jb 0x14039b240
if(m.condition(2))next=next+UINT64_C(0x12e);
c.rip=next;return true;}
case UINT64_C(0x14039b112): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b117): {next=c.rip+5; // mov qword ptr [rsp + 0x48], r12
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b11c): {next=c.rip+4; // lea r12, [rbp + 1]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b120): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r14
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b125): {next=c.rip+4; // mov r14, qword ptr [rcx + 0x18]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,24,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b129): {next=c.rip+3; // mov rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b12c): {next=c.rip+4; // or rcx, 0xf
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf)}),64));
c.rip=next;return true;}
case UINT64_C(0x14039b130): {next=c.rip+3; // cmp rcx, rbx
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b133): {next=c.rip+2; // ja 0x14039b16f
if(m.condition(5))next=next+UINT64_C(0x3a);
c.rip=next;return true;}
case UINT64_C(0x14039b135): {next=c.rip+3; // mov rdx, r14
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b138): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b13b): {next=c.rip+3; // shr rdx, 1
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)},1);
c.rip=next;return true;}
case UINT64_C(0x14039b13e): {next=c.rip+3; // sub rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039b141): {next=c.rip+3; // cmp r14, rax
m.arithmetic(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b144): {next=c.rip+2; // ja 0x14039b16f
if(m.condition(5))next=next+UINT64_C(0x29);
c.rip=next;return true;}
case UINT64_C(0x14039b146): {next=c.rip+4; // lea rax, [rdx + r14]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,14,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b14a): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b14d): {next=c.rip+3; // cmp rcx, rax
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b150): {next=c.rip+4; // cmovb rbx, rax
if(m.condition(2))m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b154): {next=c.rip+4; // lea rax, [rbx + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b158): {next=c.rip+6; // cmp rax, 0x1000
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1000)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b15e): {next=c.rip+2; // jb 0x14039b195
if(m.condition(2))next=next+UINT64_C(0x35);
c.rip=next;return true;}
case UINT64_C(0x14039b160): {next=c.rip+4; // lea rcx, [rax + 0x27]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,-1,1,0,39,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b164): {next=c.rip+3; // cmp rcx, rax
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b167): {next=c.rip+6; // jbe 0x14039b23a
if(m.condition(4))next=next+UINT64_C(0xcd);
c.rip=next;return true;}
case UINT64_C(0x14039b16d): {next=c.rip+2; // jmp 0x14039b179
next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x14039b16f): {next=c.rip+10; // movabs rcx, 0x8000000000000027
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8000000000000027)}));
c.rip=next;return true;}
case UINT64_C(0x14039b179): {next=c.rip+5; // call 0x1403a4080
{uint64_t target=next+UINT64_C(0x8f02);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b17e): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039b181): {next=c.rip+6; // je 0x14039b234
if(m.condition(0))next=next+UINT64_C(0xad);
c.rip=next;return true;}
case UINT64_C(0x14039b187): {next=c.rip+4; // lea rdi, [rax + 0x27]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,-1,1,0,39,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b18b): {next=c.rip+4; // and rdi, 0xffffffffffffffe0
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xffffffffffffffe0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14039b18f): {next=c.rip+4; // mov qword ptr [rdi - 8], rax
m.put(Operand{2,0,64,0,7,-1,1,0,-8,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b193): {next=c.rip+2; // jmp 0x14039b1a9
next=next+UINT64_C(0x14);
c.rip=next;return true;}
case UINT64_C(0x14039b195): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039b198): {next=c.rip+2; // je 0x14039b1a7
if(m.condition(0))next=next+UINT64_C(0xd);
c.rip=next;return true;}
case UINT64_C(0x14039b19a): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b19d): {next=c.rip+5; // call 0x1403a4080
{uint64_t target=next+UINT64_C(0x8ede);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b1a2): {next=c.rip+3; // mov rdi, rax
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b1a5): {next=c.rip+2; // jmp 0x14039b1a9
next=next+UINT64_C(0x2);
c.rip=next;return true;}
case UINT64_C(0x14039b1a7): {next=c.rip+2; // xor edi, edi
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039b1a9): {next=c.rip+4; // mov qword ptr [rsi + 0x10], r12
m.put(Operand{2,0,64,0,6,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b1ad): {next=c.rip+3; // mov r8, rbp
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b1b0): {next=c.rip+4; // mov qword ptr [rsi + 0x18], rbx
m.put(Operand{2,0,64,0,6,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b1b4): {next=c.rip+3; // mov rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b1b7): {next=c.rip+4; // cmp r14, 0x10
m.arithmetic(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x10)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b1bb): {next=c.rip+2; // jb 0x14039b200
if(m.condition(2))next=next+UINT64_C(0x43);
c.rip=next;return true;}
case UINT64_C(0x14039b1bd): {next=c.rip+3; // mov rbx, qword ptr [rsi]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,6,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b1c0): {next=c.rip+3; // mov rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b1c3): {next=c.rip+5; // call 0x1403a6070
{uint64_t target=next+UINT64_C(0xaea8);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b1c8): {next=c.rip+4; // lea rdx, [r14 + 1]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,14,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b1cc): {next=c.rip+4; // mov byte ptr [rdi + rbp], r15b
m.put(Operand{2,0,8,0,7,5,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b1d0): {next=c.rip+5; // mov byte ptr [rdi + rbp + 1], 0
m.put(Operand{2,0,8,0,7,5,1,0,1,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b1d5): {next=c.rip+7; // cmp rdx, 0x1000
m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1000)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b1dc): {next=c.rip+2; // jb 0x14039b1f6
if(m.condition(2))next=next+UINT64_C(0x18);
c.rip=next;return true;}
case UINT64_C(0x14039b1de): {next=c.rip+4; // mov rcx, qword ptr [rbx - 8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,-8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b1e2): {next=c.rip+4; // add rdx, 0x27
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x27)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039b1e6): {next=c.rip+3; // sub rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039b1e9): {next=c.rip+4; // lea rax, [rbx - 8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,-1,1,0,-8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b1ed): {next=c.rip+4; // cmp rax, 0x1f
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1f)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b1f1): {next=c.rip+2; // ja 0x14039b234
if(m.condition(5))next=next+UINT64_C(0x41);
c.rip=next;return true;}
case UINT64_C(0x14039b1f3): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b1f6): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b1f9): {next=c.rip+5; // call 0x1403a3de0
{uint64_t target=next+UINT64_C(0x8be2);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b1fe): {next=c.rip+2; // jmp 0x14039b211
next=next+UINT64_C(0x11);
c.rip=next;return true;}
case UINT64_C(0x14039b200): {next=c.rip+3; // mov rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b203): {next=c.rip+5; // call 0x1403a6070
{uint64_t target=next+UINT64_C(0xae68);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b208): {next=c.rip+4; // mov byte ptr [rdi + rbp], r15b
m.put(Operand{2,0,8,0,7,5,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b20c): {next=c.rip+5; // mov byte ptr [rdi + rbp + 1], 0
m.put(Operand{2,0,8,0,7,5,1,0,1,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b211): {next=c.rip+3; // mov qword ptr [rsi], rdi
m.put(Operand{2,0,64,0,6,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b214): {next=c.rip+3; // mov rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b217): {next=c.rip+5; // mov r12, qword ptr [rsp + 0x48]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b21c): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x40]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b221): {next=c.rip+5; // mov r14, qword ptr [rsp + 0x50]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b226): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x58]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b22b): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039b22f): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039b231): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039b232): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039b233): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14039b234): {next=c.rip+5; // call 0x1403b0814
{uint64_t target=next+UINT64_C(0x155db);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b239): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14039b23a): {next=c.rip+5; // call 0x1400014c0
{uint64_t target=next+UINT64_C(0xffffffffffc66281);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b23f): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14039b240): {next=c.rip+5; // call 0x140001560
{uint64_t target=next+UINT64_C(0xffffffffffc6631b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b245): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14039b4f0): {next=c.rip+2; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b4f2): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b4f3): {next=c.rip+2; // push r12
m.push(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b4f5): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b4f7): {next=c.rip+4; // sub rsp, 0x28
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x28)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039b4fb): {next=c.rip+4; // mov r14, qword ptr [rcx + 0x10]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b4ff): {next=c.rip+10; // movabs rbx, 0x7fffffffffffffff
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7fffffffffffffff)}));
c.rip=next;return true;}
case UINT64_C(0x14039b509): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b50c): {next=c.rip+3; // mov r12, r9
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b50f): {next=c.rip+3; // sub rax, r14
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039b512): {next=c.rip+3; // mov rsi, rcx
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b515): {next=c.rip+3; // cmp rax, rdx
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b518): {next=c.rip+6; // jb 0x14039b670
if(m.condition(2))next=next+UINT64_C(0x152);
c.rip=next;return true;}
case UINT64_C(0x14039b51e): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rbp
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b523): {next=c.rip+4; // lea rbp, [r14 + rdx]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,14,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b527): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b52c): {next=c.rip+3; // mov rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b52f): {next=c.rip+5; // mov qword ptr [rsp + 0x60], r13
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b534): {next=c.rip+4; // or rdx, 0xf
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf)}),64));
c.rip=next;return true;}
case UINT64_C(0x14039b538): {next=c.rip+4; // mov r13, qword ptr [rcx + 0x18]
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,24,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b53c): {next=c.rip+5; // mov qword ptr [rsp + 0x20], r15
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b541): {next=c.rip+3; // cmp rdx, rbx
m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b544): {next=c.rip+2; // ja 0x14039b580
if(m.condition(5))next=next+UINT64_C(0x3a);
c.rip=next;return true;}
case UINT64_C(0x14039b546): {next=c.rip+3; // mov rcx, r13
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b549): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b54c): {next=c.rip+3; // shr rcx, 1
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)},1);
c.rip=next;return true;}
case UINT64_C(0x14039b54f): {next=c.rip+3; // sub rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039b552): {next=c.rip+3; // cmp r13, rax
m.arithmetic(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b555): {next=c.rip+2; // ja 0x14039b580
if(m.condition(5))next=next+UINT64_C(0x29);
c.rip=next;return true;}
case UINT64_C(0x14039b557): {next=c.rip+4; // lea rax, [rcx + r13]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,1,13,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b55b): {next=c.rip+3; // mov rbx, rdx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b55e): {next=c.rip+3; // cmp rdx, rax
m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b561): {next=c.rip+4; // cmovb rbx, rax
if(m.condition(2))m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b565): {next=c.rip+4; // lea rax, [rbx + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b569): {next=c.rip+6; // cmp rax, 0x1000
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1000)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b56f): {next=c.rip+2; // jb 0x14039b5a6
if(m.condition(2))next=next+UINT64_C(0x35);
c.rip=next;return true;}
case UINT64_C(0x14039b571): {next=c.rip+4; // lea rcx, [rax + 0x27]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,-1,1,0,39,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b575): {next=c.rip+3; // cmp rcx, rax
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b578): {next=c.rip+6; // jbe 0x14039b66a
if(m.condition(4))next=next+UINT64_C(0xec);
c.rip=next;return true;}
case UINT64_C(0x14039b57e): {next=c.rip+2; // jmp 0x14039b58a
next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x14039b580): {next=c.rip+10; // movabs rcx, 0x8000000000000027
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8000000000000027)}));
c.rip=next;return true;}
case UINT64_C(0x14039b58a): {next=c.rip+5; // call 0x1403a4080
{uint64_t target=next+UINT64_C(0x8af1);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b58f): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039b592): {next=c.rip+6; // je 0x14039b664
if(m.condition(0))next=next+UINT64_C(0xcc);
c.rip=next;return true;}
case UINT64_C(0x14039b598): {next=c.rip+4; // lea rdi, [rax + 0x27]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,-1,1,0,39,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b59c): {next=c.rip+4; // and rdi, 0xffffffffffffffe0
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xffffffffffffffe0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14039b5a0): {next=c.rip+4; // mov qword ptr [rdi - 8], rax
m.put(Operand{2,0,64,0,7,-1,1,0,-8,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b5a4): {next=c.rip+2; // jmp 0x14039b5ba
next=next+UINT64_C(0x14);
c.rip=next;return true;}
case UINT64_C(0x14039b5a6): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14039b5a9): {next=c.rip+2; // je 0x14039b5b8
if(m.condition(0))next=next+UINT64_C(0xd);
c.rip=next;return true;}
case UINT64_C(0x14039b5ab): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b5ae): {next=c.rip+5; // call 0x1403a4080
{uint64_t target=next+UINT64_C(0x8acd);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b5b3): {next=c.rip+3; // mov rdi, rax
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b5b6): {next=c.rip+2; // jmp 0x14039b5ba
next=next+UINT64_C(0x2);
c.rip=next;return true;}
case UINT64_C(0x14039b5b8): {next=c.rip+2; // xor edi, edi
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039b5ba): {next=c.rip+4; // mov qword ptr [rsi + 0x10], rbp
m.put(Operand{2,0,64,0,6,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b5be): {next=c.rip+4; // lea r15, [rdi + r14]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,14,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b5c2): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x70]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b5c7): {next=c.rip+3; // mov r8, r14
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b5ca): {next=c.rip+4; // mov qword ptr [rsi + 0x18], rbx
m.put(Operand{2,0,64,0,6,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b5ce): {next=c.rip+3; // mov rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b5d1): {next=c.rip+4; // cmp r13, 0x10
m.arithmetic(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x10)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b5d5): {next=c.rip+2; // jb 0x14039b624
if(m.condition(2))next=next+UINT64_C(0x4d);
c.rip=next;return true;}
case UINT64_C(0x14039b5d7): {next=c.rip+3; // mov rbx, qword ptr [rsi]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,6,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b5da): {next=c.rip+3; // mov rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b5dd): {next=c.rip+5; // call 0x1403a6070
{uint64_t target=next+UINT64_C(0xaa8e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b5e2): {next=c.rip+3; // mov r8, rbp
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b5e5): {next=c.rip+3; // mov rdx, r12
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b5e8): {next=c.rip+3; // mov rcx, r15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b5eb): {next=c.rip+5; // call 0x1403a6070
{uint64_t target=next+UINT64_C(0xaa80);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b5f0): {next=c.rip+4; // lea rdx, [r13 + 1]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,13,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b5f4): {next=c.rip+5; // mov byte ptr [r15 + rbp], 0
m.put(Operand{2,0,8,0,15,5,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b5f9): {next=c.rip+7; // cmp rdx, 0x1000
m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1000)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b600): {next=c.rip+2; // jb 0x14039b61a
if(m.condition(2))next=next+UINT64_C(0x18);
c.rip=next;return true;}
case UINT64_C(0x14039b602): {next=c.rip+4; // mov rcx, qword ptr [rbx - 8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,-8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b606): {next=c.rip+4; // add rdx, 0x27
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x27)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039b60a): {next=c.rip+3; // sub rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039b60d): {next=c.rip+4; // lea rax, [rbx - 8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,-1,1,0,-8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b611): {next=c.rip+4; // cmp rax, 0x1f
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1f)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14039b615): {next=c.rip+2; // ja 0x14039b664
if(m.condition(5))next=next+UINT64_C(0x4d);
c.rip=next;return true;}
case UINT64_C(0x14039b617): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b61a): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b61d): {next=c.rip+5; // call 0x1403a3de0
{uint64_t target=next+UINT64_C(0x87be);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b622): {next=c.rip+2; // jmp 0x14039b63f
next=next+UINT64_C(0x1b);
c.rip=next;return true;}
case UINT64_C(0x14039b624): {next=c.rip+3; // mov rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b627): {next=c.rip+5; // call 0x1403a6070
{uint64_t target=next+UINT64_C(0xaa44);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b62c): {next=c.rip+3; // mov r8, rbp
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b62f): {next=c.rip+3; // mov rdx, r12
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b632): {next=c.rip+3; // mov rcx, r15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b635): {next=c.rip+5; // call 0x1403a6070
{uint64_t target=next+UINT64_C(0xaa36);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b63a): {next=c.rip+5; // mov byte ptr [r15 + rbp], 0
m.put(Operand{2,0,8,0,15,5,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b63f): {next=c.rip+3; // mov qword ptr [rsi], rdi
m.put(Operand{2,0,64,0,6,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b642): {next=c.rip+3; // mov rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b645): {next=c.rip+5; // mov r13, qword ptr [rsp + 0x60]
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b64a): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x58]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b64f): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x50]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b654): {next=c.rip+5; // mov r15, qword ptr [rsp + 0x20]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039b659): {next=c.rip+4; // add rsp, 0x28
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x28)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14039b65d): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039b65f): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039b661): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039b662): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14039b663): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14039b664): {next=c.rip+5; // call 0x1403b0814
{uint64_t target=next+UINT64_C(0x151ab);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b669): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14039b66a): {next=c.rip+5; // call 0x1400014c0
{uint64_t target=next+UINT64_C(0xffffffffffc65e51);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b66f): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14039b670): {next=c.rip+5; // call 0x140001560
{uint64_t target=next+UINT64_C(0xffffffffffc65eeb);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039b675): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14039bc30): {next=c.rip+2; // xor eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14039bc32): {next=c.rip+3; // mov qword ptr [rcx], rax
m.put(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039bc35): {next=c.rip+4; // mov qword ptr [rcx + 8], rax
m.put(Operand{2,0,64,0,1,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039bc39): {next=c.rip+4; // mov qword ptr [rcx + 0x10], rax
m.put(Operand{2,0,64,0,1,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039bc3d): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039bc40): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14039bc50): {next=c.rip+4; // sub rsp, 0x28
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x28)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14039bc54): {next=c.rip+7; // lea rcx, [rip + 0x4001d]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,262173,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14039bc5b): {next=c.rip+5; // call 0x1403a17ec
{uint64_t target=next+UINT64_C(0x5b8c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14039bc60): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
default:return false;
}}
}
