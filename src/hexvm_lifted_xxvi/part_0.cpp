// Generated literal x64 semantics.
#include "../pafet_hexvm_cpu_xxvi.h"
namespace pafet_xxiv {
bool hexvm_part_0(Machine& m){auto& c=m.c;auto& next=m.next;switch(m.canonical(c.rip)){
case UINT64_C(0x140001490): {next=c.rip+7; // lea rax, [rip + 0x3da669]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,4040297,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001497): {next=c.rip+8; // mov qword ptr [rcx + 0x10], 0
m.put(Operand{2,0,64,0,1,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14000149f): {next=c.rip+4; // mov qword ptr [rcx + 8], rax
m.put(Operand{2,0,64,0,1,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400014a3): {next=c.rip+7; // lea rax, [rip + 0x3cc15e]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,3981662,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400014aa): {next=c.rip+3; // mov qword ptr [rcx], rax
m.put(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400014ad): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400014b0): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x1400014c0): {next=c.rip+4; // sub rsp, 0x48
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x48)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400014c4): {next=c.rip+5; // lea rcx, [rsp + 0x20]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400014c9): {next=c.rip+5; // call 0x140001490
{uint64_t target=next+UINT64_C(0xffffffffffffffc2);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400014ce): {next=c.rip+7; // lea rdx, [rip + 0x40a613]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,4236819,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400014d5): {next=c.rip+5; // lea rcx, [rsp + 0x20]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400014da): {next=c.rip+5; // call 0x1403a5fa0
{uint64_t target=next+UINT64_C(0x3a4ac1);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400014df): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140001560): {next=c.rip+4; // sub rsp, 0x28
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x28)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140001564): {next=c.rip+7; // lea rcx, [rip + 0x3da5ad]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,4040109,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14000156b): {next=c.rip+5; // call 0x1403a17ec
{uint64_t target=next+UINT64_C(0x3a027c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001570): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140001630): {next=c.rip+7; // lea rax, [rip + 0x41cb51]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,4311889,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001637): {next=c.rip+2; // mov dword ptr [rcx], edx
m.put(Operand{2,0,32,0,1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001639): {next=c.rip+4; // mov qword ptr [rcx + 8], rax
m.put(Operand{2,0,64,0,1,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14000163d): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001640): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140001810): {next=c.rip+7; // lea rax, [rip + 0x3da329]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,4039465,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001817): {next=c.rip+8; // mov qword ptr [rcx + 0x10], 0
m.put(Operand{2,0,64,0,1,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14000181f): {next=c.rip+4; // mov qword ptr [rcx + 8], rax
m.put(Operand{2,0,64,0,1,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001823): {next=c.rip+7; // lea rax, [rip + 0x3cbe5e]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,3980894,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14000182a): {next=c.rip+3; // mov qword ptr [rcx], rax
m.put(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14000182d): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001830): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140001840): {next=c.rip+4; // sub rsp, 0x48
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x48)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140001844): {next=c.rip+5; // lea rcx, [rsp + 0x20]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001849): {next=c.rip+5; // call 0x140001810
{uint64_t target=next+UINT64_C(0xffffffffffffffc2);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14000184e): {next=c.rip+7; // lea rdx, [rip + 0x409e03]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,4234755,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001855): {next=c.rip+5; // lea rcx, [rsp + 0x20]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14000185a): {next=c.rip+5; // call 0x1403a5fa0
{uint64_t target=next+UINT64_C(0x3a4741);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14000185f): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140001a50): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001a55): {next=c.rip+5; // mov qword ptr [rsp + 0x18], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001a5a): {next=c.rip+1; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001a5b): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001a5c): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001a5e): {next=c.rip+5; // lea rbp, [rsp - 0x47]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,-71,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001a63): {next=c.rip+7; // sub rsp, 0xb0
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140001a6a): {next=c.rip+3; // mov rbx, rdx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001a6d): {next=c.rip+3; // mov rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001a70): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140001a73): {next=c.rip+6; // je 0x140001bb2
if(m.condition(0))next=next+UINT64_C(0x139);
c.rip=next;return true;}
case UINT64_C(0x140001a79): {next=c.rip+4; // cmp qword ptr [rcx], 0
m.arithmetic(m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140001a7d): {next=c.rip+6; // jne 0x140001bb2
if(m.condition(1))next=next+UINT64_C(0x12f);
c.rip=next;return true;}
case UINT64_C(0x140001a83): {next=c.rip+5; // mov ecx, 0x30
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x30)}));
c.rip=next;return true;}
case UINT64_C(0x140001a88): {next=c.rip+5; // call 0x1403a4080
{uint64_t target=next+UINT64_C(0x3a25f3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001a8d): {next=c.rip+3; // mov rsi, rax
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001a90): {next=c.rip+4; // mov qword ptr [rbp + 0x67], rax
m.put(Operand{2,0,64,0,5,-1,1,0,103,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001a94): {next=c.rip+4; // mov rcx, qword ptr [rbx + 8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001a98): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140001a9b): {next=c.rip+2; // je 0x140001aac
if(m.condition(0))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x140001a9d): {next=c.rip+4; // mov rbx, qword ptr [rcx + 0x28]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001aa1): {next=c.rip+3; // test rbx, rbx
m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140001aa4): {next=c.rip+2; // jne 0x140001ab3
if(m.condition(1))next=next+UINT64_C(0xd);
c.rip=next;return true;}
case UINT64_C(0x140001aa6): {next=c.rip+4; // lea rbx, [rcx + 0x30]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,1,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001aaa): {next=c.rip+2; // jmp 0x140001ab3
next=next+UINT64_C(0x7);
c.rip=next;return true;}
case UINT64_C(0x140001aac): {next=c.rip+7; // lea rbx, [rip + 0x3da078]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,4038776,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001ab3): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140001ab5): {next=c.rip+4; // lea rcx, [rbp - 0x49]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-73,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001ab9): {next=c.rip+5; // call 0x1403a1500
{uint64_t target=next+UINT64_C(0x39fa42);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001abe): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140001abf): {next=c.rip+3; // xor r14d, r14d
m.put(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140001ac2): {next=c.rip+4; // mov qword ptr [rbp - 0x41], r14
m.put(Operand{2,0,64,0,5,-1,1,0,-65,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001ac6): {next=c.rip+4; // mov byte ptr [rbp - 0x39], r14b
m.put(Operand{2,0,8,0,5,-1,1,0,-57,UINT64_C(0x0)},m.get(Operand{0,14,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001aca): {next=c.rip+4; // mov qword ptr [rbp - 0x31], r14
m.put(Operand{2,0,64,0,5,-1,1,0,-49,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001ace): {next=c.rip+4; // mov byte ptr [rbp - 0x29], r14b
m.put(Operand{2,0,8,0,5,-1,1,0,-41,UINT64_C(0x0)},m.get(Operand{0,14,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001ad2): {next=c.rip+4; // mov qword ptr [rbp - 0x21], r14
m.put(Operand{2,0,64,0,5,-1,1,0,-33,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001ad6): {next=c.rip+5; // mov word ptr [rbp - 0x19], r14w
m.put(Operand{2,0,16,0,5,-1,1,0,-25,UINT64_C(0x0)},m.get(Operand{0,14,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001adb): {next=c.rip+4; // mov qword ptr [rbp - 0x11], r14
m.put(Operand{2,0,64,0,5,-1,1,0,-17,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001adf): {next=c.rip+5; // mov word ptr [rbp - 9], r14w
m.put(Operand{2,0,16,0,5,-1,1,0,-9,UINT64_C(0x0)},m.get(Operand{0,14,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001ae4): {next=c.rip+4; // mov qword ptr [rbp - 1], r14
m.put(Operand{2,0,64,0,5,-1,1,0,-1,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001ae8): {next=c.rip+4; // mov byte ptr [rbp + 7], r14b
m.put(Operand{2,0,8,0,5,-1,1,0,7,UINT64_C(0x0)},m.get(Operand{0,14,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001aec): {next=c.rip+4; // mov qword ptr [rbp + 0xf], r14
m.put(Operand{2,0,64,0,5,-1,1,0,15,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001af0): {next=c.rip+4; // mov byte ptr [rbp + 0x17], r14b
m.put(Operand{2,0,8,0,5,-1,1,0,23,UINT64_C(0x0)},m.get(Operand{0,14,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001af4): {next=c.rip+3; // test rbx, rbx
m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140001af7): {next=c.rip+6; // je 0x140001bcf
if(m.condition(0))next=next+UINT64_C(0xd2);
c.rip=next;return true;}
case UINT64_C(0x140001afd): {next=c.rip+3; // mov rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b00): {next=c.rip+4; // lea rcx, [rbp - 0x49]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-73,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b04): {next=c.rip+5; // call 0x1403a2cd8
{uint64_t target=next+UINT64_C(0x3a11cf);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001b09): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140001b0a): {next=c.rip+4; // mov dword ptr [rsi + 8], r14d
m.put(Operand{2,0,32,0,6,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b0e): {next=c.rip+7; // lea rax, [rip + 0x3cbbab]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,3980203,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b15): {next=c.rip+3; // mov qword ptr [rsi], rax
m.put(Operand{2,0,64,0,6,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b18): {next=c.rip+4; // lea rcx, [rbp + 0x1f]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,31,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b1c): {next=c.rip+5; // call 0x1403a32c4
{uint64_t target=next+UINT64_C(0x3a17a3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001b21): {next=c.rip+3; // movups xmm0, xmmword ptr [rax]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,0,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140001b24): {next=c.rip+4; // movups xmmword ptr [rsi + 0x10], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,6,-1,1,0,16,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140001b28): {next=c.rip+4; // movups xmm1, xmmword ptr [rax + 0x10]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,0,-1,1,0,16,UINT64_C(0x0)},v);m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140001b2c): {next=c.rip+4; // movups xmmword ptr [rsi + 0x20], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,6,-1,1,0,32,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140001b30): {next=c.rip+3; // mov qword ptr [rdi], rsi
m.put(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b33): {next=c.rip+4; // lea rcx, [rbp - 0x49]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-73,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b37): {next=c.rip+5; // call 0x1403a2d44
{uint64_t target=next+UINT64_C(0x3a1208);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001b3c): {next=c.rip+4; // mov rcx, qword ptr [rbp + 0xf]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,15,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b40): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140001b43): {next=c.rip+2; // je 0x140001b4a
if(m.condition(0))next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x140001b45): {next=c.rip+5; // call 0x1403b0364
{uint64_t target=next+UINT64_C(0x3ae81a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001b4a): {next=c.rip+4; // mov qword ptr [rbp + 0xf], r14
m.put(Operand{2,0,64,0,5,-1,1,0,15,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b4e): {next=c.rip+4; // mov rcx, qword ptr [rbp - 1]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b52): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140001b55): {next=c.rip+2; // je 0x140001b5c
if(m.condition(0))next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x140001b57): {next=c.rip+5; // call 0x1403b0364
{uint64_t target=next+UINT64_C(0x3ae808);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001b5c): {next=c.rip+4; // mov qword ptr [rbp - 1], r14
m.put(Operand{2,0,64,0,5,-1,1,0,-1,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b60): {next=c.rip+4; // mov rcx, qword ptr [rbp - 0x11]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,-17,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b64): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140001b67): {next=c.rip+2; // je 0x140001b6e
if(m.condition(0))next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x140001b69): {next=c.rip+5; // call 0x1403b0364
{uint64_t target=next+UINT64_C(0x3ae7f6);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001b6e): {next=c.rip+4; // mov qword ptr [rbp - 0x11], r14
m.put(Operand{2,0,64,0,5,-1,1,0,-17,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b72): {next=c.rip+4; // mov rcx, qword ptr [rbp - 0x21]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,-33,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b76): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140001b79): {next=c.rip+2; // je 0x140001b80
if(m.condition(0))next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x140001b7b): {next=c.rip+5; // call 0x1403b0364
{uint64_t target=next+UINT64_C(0x3ae7e4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001b80): {next=c.rip+4; // mov qword ptr [rbp - 0x21], r14
m.put(Operand{2,0,64,0,5,-1,1,0,-33,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b84): {next=c.rip+4; // mov rcx, qword ptr [rbp - 0x31]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,-49,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b88): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140001b8b): {next=c.rip+2; // je 0x140001b92
if(m.condition(0))next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x140001b8d): {next=c.rip+5; // call 0x1403b0364
{uint64_t target=next+UINT64_C(0x3ae7d2);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001b92): {next=c.rip+4; // mov qword ptr [rbp - 0x31], r14
m.put(Operand{2,0,64,0,5,-1,1,0,-49,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b96): {next=c.rip+4; // mov rcx, qword ptr [rbp - 0x41]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,-65,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001b9a): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140001b9d): {next=c.rip+2; // je 0x140001ba4
if(m.condition(0))next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x140001b9f): {next=c.rip+5; // call 0x1403b0364
{uint64_t target=next+UINT64_C(0x3ae7c0);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001ba4): {next=c.rip+4; // mov qword ptr [rbp - 0x41], r14
m.put(Operand{2,0,64,0,5,-1,1,0,-65,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001ba8): {next=c.rip+4; // lea rcx, [rbp - 0x49]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-73,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001bac): {next=c.rip+5; // call 0x1403a1578
{uint64_t target=next+UINT64_C(0x39f9c7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001bb1): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140001bb2): {next=c.rip+5; // mov eax, 2
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}));
c.rip=next;return true;}
case UINT64_C(0x140001bb7): {next=c.rip+8; // lea r11, [rsp + 0xb0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,176,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001bbf): {next=c.rip+4; // mov rbx, qword ptr [r11 + 0x28]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,11,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001bc3): {next=c.rip+4; // mov rsi, qword ptr [r11 + 0x30]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,11,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001bc7): {next=c.rip+3; // mov rsp, r11
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001bca): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140001bcc): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140001bcd): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140001bce): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140001bcf): {next=c.rip+7; // lea rcx, [rip + 0x3d9f7a]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,4038522,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001bd6): {next=c.rip+5; // call 0x1403a1834
{uint64_t target=next+UINT64_C(0x39fc59);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001bdb): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140001d60): {next=c.rip+2; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001d62): {next=c.rip+1; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001d63): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001d64): {next=c.rip+5; // lea rbp, [rsp - 0x47]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,-71,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001d69): {next=c.rip+7; // sub rsp, 0xd0
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140001d70): {next=c.rip+8; // movaps xmmword ptr [rsp + 0xc0], xmm6
{uint8_t v[16];if((Operand{2,0,128,0,4,-1,1,0,192,UINT64_C(0x0)}.kind==2&&m.address(Operand{2,0,128,0,4,-1,1,0,192,UINT64_C(0x0)})%16)||(Operand{3,6,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,6,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16))throw Fault(4,c.rip,"unaligned MOVAPS");m.vector_get(Operand{3,6,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,192,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140001d78): {next=c.rip+7; // mov rax, qword ptr [rip + 0x40b2a1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,16,-1,1,0,4240033,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001d7f): {next=c.rip+3; // xor rax, rsp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140001d82): {next=c.rip+4; // mov qword ptr [rbp + 0x27], rax
m.put(Operand{2,0,64,0,5,-1,1,0,39,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001d86): {next=c.rip+3; // mov rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001d89): {next=c.rip+4; // mov qword ptr [rbp - 0x69], rcx
m.put(Operand{2,0,64,0,5,-1,1,0,-105,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001d8d): {next=c.rip+4; // movups xmm6, xmmword ptr [r8]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,8,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,6,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140001d91): {next=c.rip+8; // mov qword ptr [rbp + 7], 0
m.put(Operand{2,0,64,0,5,-1,1,0,7,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001d99): {next=c.rip+8; // movdqa xmm0, xmmword ptr [rip + 0x3efe4f]
{if((Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16)||(Operand{2,0,128,0,16,-1,1,0,4128335,UINT64_C(0x0)}.kind==2&&m.address(Operand{2,0,128,0,16,-1,1,0,4128335,UINT64_C(0x0)})%16))throw Fault(4,c.rip,"unaligned MOVDQA");uint8_t v[16];m.vector_get(Operand{2,0,128,0,16,-1,1,0,4128335,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140001da1): {next=c.rip+5; // movdqu xmmword ptr [rbp + 0x17], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,5,-1,1,0,23,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140001da6): {next=c.rip+4; // mov byte ptr [rbp + 7], 0
m.put(Operand{2,0,8,0,5,-1,1,0,7,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001daa): {next=c.rip+7; // mov r8, 0xffffffffffffffff
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xffffffffffffffff)}));
c.rip=next;return true;}
case UINT64_C(0x140001db1): {next=c.rip+3; // inc r8
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140001db4): {next=c.rip+5; // cmp byte ptr [rdx + r8], 0
m.arithmetic(m.get(Operand{2,0,8,0,2,8,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140001db9): {next=c.rip+2; // jne 0x140001db1
if(m.condition(1))next=next+UINT64_C(0xfffffffffffffff6);
c.rip=next;return true;}
case UINT64_C(0x140001dbb): {next=c.rip+4; // lea rcx, [rbp + 7]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,7,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001dbf): {next=c.rip+5; // call 0x140399990
{uint64_t target=next+UINT64_C(0x397bcc);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001dc4): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140001dc5): {next=c.rip+4; // lea rdx, [rbp + 7]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,7,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001dc9): {next=c.rip+4; // lea rcx, [rbp - 0x59]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-89,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001dcd): {next=c.rip+5; // call 0x1403984e0
{uint64_t target=next+UINT64_C(0x39670e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001dd2): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001dd5): {next=c.rip+4; // mov qword ptr [rbp - 0x69], rax
m.put(Operand{2,0,64,0,5,-1,1,0,-105,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001dd9): {next=c.rip+5; // cmp qword ptr [rax + 0x10], 0
m.arithmetic(m.get(Operand{2,0,64,0,0,-1,1,0,16,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140001dde): {next=c.rip+2; // je 0x140001df5
if(m.condition(0))next=next+UINT64_C(0x15);
c.rip=next;return true;}
case UINT64_C(0x140001de0): {next=c.rip+6; // mov r8d, 2
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}));
c.rip=next;return true;}
case UINT64_C(0x140001de6): {next=c.rip+7; // lea rdx, [rip + 0x3d9d3b]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,4037947,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001ded): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001df0): {next=c.rip+5; // call 0x140399af0
{uint64_t target=next+UINT64_C(0x397cfb);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001df5): {next=c.rip+4; // movdqa xmm0, xmm6
{if((Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16)||(Operand{3,6,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,6,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16))throw Fault(4,c.rip,"unaligned MOVDQA");uint8_t v[16];m.vector_get(Operand{3,6,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140001df9): {next=c.rip+5; // psrldq xmm0, 8
{uint8_t x[16],v[16]{};m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);for(int k=0;k<16;k++)if(k+8<16)v[k]=x[k+8];m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140001dfe): {next=c.rip+5; // movq rcx, xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);uint64_t x;std::memcpy(&x,v,8);m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},x);}
c.rip=next;return true;}
case UINT64_C(0x140001e03): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e06): {next=c.rip+5; // movd r8d, xmm6
{uint8_t v[16];m.vector_get(Operand{3,6,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);uint32_t x;std::memcpy(&x,v,4);m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},x);}
c.rip=next;return true;}
case UINT64_C(0x140001e0b): {next=c.rip+4; // lea rdx, [rbp - 0x39]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-57,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e0f): {next=c.rip+3; // call qword ptr [rax + 0x10]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,16,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001e12): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140001e13): {next=c.rip+4; // lea rdx, [rbp - 0x39]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-57,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e17): {next=c.rip+5; // cmp qword ptr [rbp - 0x21], 0x10
m.arithmetic(m.get(Operand{2,0,64,0,5,-1,1,0,-33,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x10)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140001e1c): {next=c.rip+5; // cmovae rdx, qword ptr [rbp - 0x39]
if(m.condition(3))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,-57,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e21): {next=c.rip+4; // mov r8, qword ptr [rbp - 0x29]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,-41,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e25): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e28): {next=c.rip+5; // call 0x140399af0
{uint64_t target=next+UINT64_C(0x397cc3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001e2d): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140001e2e): {next=c.rip+4; // lea rcx, [rbp - 0x39]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-57,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e32): {next=c.rip+5; // call 0x1403997c0
{uint64_t target=next+UINT64_C(0x397989);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001e37): {next=c.rip+3; // movups xmm0, xmmword ptr [rbx]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,3,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140001e3a): {next=c.rip+4; // movups xmmword ptr [rbp - 0x19], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,5,-1,1,0,-25,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140001e3e): {next=c.rip+4; // movups xmm1, xmmword ptr [rbx + 0x10]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,3,-1,1,0,16,UINT64_C(0x0)},v);m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140001e42): {next=c.rip+4; // movups xmmword ptr [rbp - 9], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,5,-1,1,0,-9,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140001e46): {next=c.rip+8; // mov qword ptr [rbx + 0x10], 0
m.put(Operand{2,0,64,0,3,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e4e): {next=c.rip+8; // mov qword ptr [rbx + 0x18], 0xf
m.put(Operand{2,0,64,0,3,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf)}));
c.rip=next;return true;}
case UINT64_C(0x140001e56): {next=c.rip+3; // mov byte ptr [rbx], 0
m.put(Operand{2,0,8,0,3,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e59): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e5c): {next=c.rip+5; // call 0x1403997c0
{uint64_t target=next+UINT64_C(0x39795f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001e61): {next=c.rip+4; // lea rax, [rbp - 0x19]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-25,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e65): {next=c.rip+5; // cmp qword ptr [rbp - 1], 0x10
m.arithmetic(m.get(Operand{2,0,64,0,5,-1,1,0,-1,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x10)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140001e6a): {next=c.rip+5; // cmovae rax, qword ptr [rbp - 0x19]
if(m.condition(3))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,-25,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e6f): {next=c.rip+7; // lea rcx, [rip + 0x3cb6c2]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,3978946,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e76): {next=c.rip+3; // mov qword ptr [rdi], rcx
m.put(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e79): {next=c.rip+4; // lea rdx, [rdi + 8]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e7d): {next=c.rip+3; // xorps xmm0, xmm0
{uint8_t a[16],b[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},b);for(int k=0;k<16;k++)a[k]^=b[k];m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);}
c.rip=next;return true;}
case UINT64_C(0x140001e80): {next=c.rip+3; // movups xmmword ptr [rdx], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,2,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140001e83): {next=c.rip+4; // mov qword ptr [rbp - 0x69], rax
m.put(Operand{2,0,64,0,5,-1,1,0,-105,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e87): {next=c.rip+4; // mov byte ptr [rbp - 0x61], 1
m.put(Operand{2,0,8,0,5,-1,1,0,-97,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x140001e8b): {next=c.rip+4; // lea rcx, [rbp - 0x69]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-105,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e8f): {next=c.rip+5; // call 0x1403a5cd8
{uint64_t target=next+UINT64_C(0x3a3e44);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001e94): {next=c.rip+7; // lea rax, [rip + 0x3cb755]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,3979093,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e9b): {next=c.rip+3; // mov qword ptr [rdi], rax
m.put(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001e9e): {next=c.rip+4; // lea rcx, [rbp - 0x19]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-25,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001ea2): {next=c.rip+5; // call 0x1403997c0
{uint64_t target=next+UINT64_C(0x397919);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001ea7): {next=c.rip+7; // lea rax, [rip + 0x3cb772]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,3979122,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001eae): {next=c.rip+3; // mov qword ptr [rdi], rax
m.put(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001eb1): {next=c.rip+4; // movups xmmword ptr [rdi + 0x18], xmm6
{uint8_t v[16];m.vector_get(Operand{3,6,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,7,-1,1,0,24,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140001eb5): {next=c.rip+4; // lea rcx, [rbp + 7]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,7,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001eb9): {next=c.rip+5; // call 0x1403997c0
{uint64_t target=next+UINT64_C(0x397902);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001ebe): {next=c.rip+7; // lea rax, [rip + 0x3cb85b]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,3979355,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001ec5): {next=c.rip+3; // mov qword ptr [rdi], rax
m.put(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001ec8): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001ecb): {next=c.rip+4; // mov rcx, qword ptr [rbp + 0x27]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,39,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001ecf): {next=c.rip+3; // xor rcx, rsp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140001ed2): {next=c.rip+5; // call 0x1403a3dc0
{uint64_t target=next+UINT64_C(0x3a1ee9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001ed7): {next=c.rip+8; // movaps xmm6, xmmword ptr [rsp + 0xc0]
{uint8_t v[16];if((Operand{3,6,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,6,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16)||(Operand{2,0,128,0,4,-1,1,0,192,UINT64_C(0x0)}.kind==2&&m.address(Operand{2,0,128,0,4,-1,1,0,192,UINT64_C(0x0)})%16))throw Fault(4,c.rip,"unaligned MOVAPS");m.vector_get(Operand{2,0,128,0,4,-1,1,0,192,UINT64_C(0x0)},v);m.vector_put(Operand{3,6,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140001edf): {next=c.rip+7; // add rsp, 0xd0
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140001ee6): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140001ee7): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140001ee8): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140001ee9): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140001ef0): {next=c.rip+4; // sub rsp, 0x68
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x68)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140001ef4): {next=c.rip+3; // and edx, 0x17
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x17)}),32));
c.rip=next;return true;}
case UINT64_C(0x140001ef7): {next=c.rip+3; // mov dword ptr [rcx + 0x10], edx
m.put(Operand{2,0,32,0,1,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001efa): {next=c.rip+3; // and edx, dword ptr [rcx + 0x14]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,32,0,1,-1,1,0,20,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140001efd): {next=c.rip+2; // je 0x140001f06
if(m.condition(0))next=next+UINT64_C(0x7);
c.rip=next;return true;}
case UINT64_C(0x140001eff): {next=c.rip+3; // test r8b, r8b
m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140001f02): {next=c.rip+2; // je 0x140001f15
if(m.condition(0))next=next+UINT64_C(0x11);
c.rip=next;return true;}
case UINT64_C(0x140001f04): {next=c.rip+2; // jmp 0x140001f0b
next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x140001f06): {next=c.rip+4; // add rsp, 0x68
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x68)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140001f0a): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140001f0b): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140001f0d): {next=c.rip+2; // xor ecx, ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140001f0f): {next=c.rip+5; // call 0x1403a5fa0
{uint64_t target=next+UINT64_C(0x3a408c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001f14): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140001f15): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001f1a): {next=c.rip+3; // test dl, 4
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x4)}),8);
c.rip=next;return true;}
case UINT64_C(0x140001f1d): {next=c.rip+2; // je 0x140001f28
if(m.condition(0))next=next+UINT64_C(0x9);
c.rip=next;return true;}
case UINT64_C(0x140001f1f): {next=c.rip+7; // lea rbx, [rip + 0x3d9c4a]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,4037706,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001f26): {next=c.rip+2; // jmp 0x140001f3d
next=next+UINT64_C(0x15);
c.rip=next;return true;}
case UINT64_C(0x140001f28): {next=c.rip+3; // test dl, 2
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x2)}),8);
c.rip=next;return true;}
case UINT64_C(0x140001f2b): {next=c.rip+7; // lea rbx, [rip + 0x3d9c56]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,4037718,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001f32): {next=c.rip+7; // lea rax, [rip + 0x3d9c67]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,4037735,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001f39): {next=c.rip+4; // cmove rbx, rax
if(m.condition(0))m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001f3d): {next=c.rip+5; // mov edx, 1
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x140001f42): {next=c.rip+5; // lea rcx, [rsp + 0x20]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001f47): {next=c.rip+5; // call 0x140001630
{uint64_t target=next+UINT64_C(0xfffffffffffff6e4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001f4c): {next=c.rip+3; // mov r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001f4f): {next=c.rip+5; // lea rcx, [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001f54): {next=c.rip+3; // mov rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001f57): {next=c.rip+5; // call 0x140001d60
{uint64_t target=next+UINT64_C(0xfffffffffffffe04);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001f5c): {next=c.rip+7; // lea rdx, [rip + 0x40981d]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,4233245,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001f63): {next=c.rip+5; // lea rcx, [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001f68): {next=c.rip+5; // call 0x1403a5fa0
{uint64_t target=next+UINT64_C(0x3a4033);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140001f6d): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x60]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140001f72): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140002020): {next=c.rip+7; // and dword ptr [rcx + 0x18], 0xfffff9ff
m.put(Operand{2,0,32,0,1,-1,1,0,24,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,32,0,1,-1,1,0,24,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xfffff9ff)}),32));
c.rip=next;return true;}
case UINT64_C(0x140002027): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14000202a): {next=c.rip+7; // or dword ptr [rcx + 0x18], 0x800
m.put(Operand{2,0,32,0,1,-1,1,0,24,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,32,0,1,-1,1,0,24,UINT64_C(0x0)})|m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x800)}),32));
c.rip=next;return true;}
case UINT64_C(0x140002031): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140002040): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140002043): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140002047): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14000204a): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140002054): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140002058): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14000205b): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14000205f): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140002062): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14000206c): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140002070): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140002073): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140002077): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14000207a): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x1400023d0): {next=c.rip+2; // xor eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400023d2): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x1400023e0): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400023e3): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400023e6): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400023ea): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400023ed): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x1400023f7): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400023fb): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400023fe): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140002402): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140002405): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14000240f): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140002413): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140002416): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14000241a): {next=c.rip+2; // xor edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14000241c): {next=c.rip+3; // lea ecx, [rdx + 1]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14000241f): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140002421): {next=c.rip+2; // xor ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140002423): {next=c.rip+3; // imul eax, edx
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140002426): {next=c.rip+2; // not eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140002428): {next=c.rip+2; // and eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14000242a): {next=c.rip+3; // and eax, 1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x14000242d): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140002430): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140002433): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140002436): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14000243a): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14000243d): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140002447): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14000244b): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14000244e): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140002452): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140002455): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14000245f): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140002463): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140002466): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14000246a): {next=c.rip+2; // xor ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14000246c): {next=c.rip+3; // lea eax, [rcx - 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14000246f): {next=c.rip+3; // imul eax, ecx
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140002472): {next=c.rip+3; // and eax, 1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x140002475): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140002ed0): {next=c.rip+2; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140002ed2): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140002ed6): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140002ed9): {next=c.rip+4; // mov rcx, qword ptr [rcx + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140002edd): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140002ee0): {next=c.rip+2; // je 0x140002ef6
if(m.condition(0))next=next+UINT64_C(0x14);
c.rip=next;return true;}
case UINT64_C(0x140002ee2): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140002ee5): {next=c.rip+3; // cmp rcx, rbx
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140002ee8): {next=c.rip+3; // setne dl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.condition(1)));
c.rip=next;return true;}
case UINT64_C(0x140002eeb): {next=c.rip+3; // call qword ptr [rax + 0x20]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,32,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140002eee): {next=c.rip+8; // mov qword ptr [rbx + 0x38], 0
m.put(Operand{2,0,64,0,3,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140002ef6): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140002efa): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140002efb): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
default:return false;
}}
}
