// Generated literal x64 semantics.
#include "../pafet_hexvm_cpu_xxvi.h"
namespace pafet_xxiv {
bool hexvm_part_e5(Machine& m){auto& c=m.c;auto& next=m.next;switch(m.canonical(c.rip)){
case UINT64_C(0x140397be0): {next=c.rip+2; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397be2): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140397be6): {next=c.rip+4; // test byte ptr [rcx + 0x70], 1
m.logic(m.get(Operand{2,0,8,0,1,-1,1,0,112,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140397bea): {next=c.rip+7; // lea rax, [rip + 0x59d27]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,367911,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397bf1): {next=c.rip+3; // mov qword ptr [rcx], rax
m.put(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397bf4): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397bf7): {next=c.rip+2; // je 0x140397c53
if(m.condition(0))next=next+UINT64_C(0x5a);
c.rip=next;return true;}
case UINT64_C(0x140397bf9): {next=c.rip+4; // mov rax, qword ptr [rcx + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397bfd): {next=c.rip+3; // mov rcx, qword ptr [rax]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c00): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140397c03): {next=c.rip+2; // je 0x140397c11
if(m.condition(0))next=next+UINT64_C(0xc);
c.rip=next;return true;}
case UINT64_C(0x140397c05): {next=c.rip+4; // mov rax, qword ptr [rbx + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c09): {next=c.rip+3; // movsxd rdx, dword ptr [rax]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140397c0c): {next=c.rip+3; // add rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140397c0f): {next=c.rip+2; // jmp 0x140397c1f
next=next+UINT64_C(0xe);
c.rip=next;return true;}
case UINT64_C(0x140397c11): {next=c.rip+4; // mov rax, qword ptr [rbx + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c15): {next=c.rip+3; // movsxd rdx, dword ptr [rax]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140397c18): {next=c.rip+4; // mov rax, qword ptr [rbx + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c1c): {next=c.rip+3; // add rdx, qword ptr [rax]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140397c1f): {next=c.rip+4; // mov rax, qword ptr [rbx + 0x18]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,24,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c23): {next=c.rip+3; // mov rcx, qword ptr [rax]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c26): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140397c29): {next=c.rip+7; // cmp rdx, 0x1000
m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1000)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140397c30): {next=c.rip+2; // jb 0x140397c4e
if(m.condition(2))next=next+UINT64_C(0x1c);
c.rip=next;return true;}
case UINT64_C(0x140397c32): {next=c.rip+4; // mov r8, qword ptr [rcx - 8]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,-8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c36): {next=c.rip+4; // add rdx, 0x27
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x27)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140397c3a): {next=c.rip+3; // sub rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140397c3d): {next=c.rip+4; // lea rax, [rcx - 8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,1,-1,1,0,-8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c41): {next=c.rip+4; // cmp rax, 0x1f
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1f)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140397c45): {next=c.rip+6; // ja 0x140397cd2
if(m.condition(5))next=next+UINT64_C(0x87);
c.rip=next;return true;}
case UINT64_C(0x140397c4b): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c4e): {next=c.rip+5; // call 0x1403a3de0
{uint64_t target=next+UINT64_C(0xc18d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140397c53): {next=c.rip+4; // mov rax, qword ptr [rbx + 0x18]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,24,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c57): {next=c.rip+2; // xor ecx, ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140397c59): {next=c.rip+3; // mov qword ptr [rax], rcx
m.put(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c5c): {next=c.rip+4; // mov rax, qword ptr [rbx + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c60): {next=c.rip+3; // mov qword ptr [rax], rcx
m.put(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c63): {next=c.rip+4; // mov rax, qword ptr [rbx + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c67): {next=c.rip+2; // mov dword ptr [rax], ecx
m.put(Operand{2,0,32,0,0,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c69): {next=c.rip+4; // mov rax, qword ptr [rbx + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c6d): {next=c.rip+3; // mov qword ptr [rax], rcx
m.put(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c70): {next=c.rip+4; // mov rax, qword ptr [rbx + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c74): {next=c.rip+3; // mov qword ptr [rax], rcx
m.put(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c77): {next=c.rip+4; // mov rax, qword ptr [rbx + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c7b): {next=c.rip+2; // mov dword ptr [rax], ecx
m.put(Operand{2,0,32,0,0,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c7d): {next=c.rip+7; // lea rax, [rip + 0x35ac4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,219844,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c84): {next=c.rip+4; // and dword ptr [rbx + 0x70], 0xfffffffe
m.put(Operand{2,0,32,0,3,-1,1,0,112,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,32,0,3,-1,1,0,112,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xfffffffe)}),32));
c.rip=next;return true;}
case UINT64_C(0x140397c88): {next=c.rip+3; // mov qword ptr [rbx], rax
m.put(Operand{2,0,64,0,3,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c8b): {next=c.rip+4; // mov qword ptr [rbx + 0x68], rcx
m.put(Operand{2,0,64,0,3,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c8f): {next=c.rip+4; // mov rbx, qword ptr [rbx + 0x60]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c93): {next=c.rip+3; // test rbx, rbx
m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140397c96): {next=c.rip+2; // je 0x140397ccc
if(m.condition(0))next=next+UINT64_C(0x34);
c.rip=next;return true;}
case UINT64_C(0x140397c98): {next=c.rip+4; // mov rcx, qword ptr [rbx + 8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397c9c): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140397c9f): {next=c.rip+2; // je 0x140397cba
if(m.condition(0))next=next+UINT64_C(0x19);
c.rip=next;return true;}
case UINT64_C(0x140397ca1): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397ca4): {next=c.rip+3; // call qword ptr [rax + 0x10]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,16,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140397ca7): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140397caa): {next=c.rip+2; // je 0x140397cba
if(m.condition(0))next=next+UINT64_C(0xe);
c.rip=next;return true;}
case UINT64_C(0x140397cac): {next=c.rip+3; // mov r8, qword ptr [rax]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397caf): {next=c.rip+5; // mov edx, 1
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x140397cb4): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397cb7): {next=c.rip+3; // call qword ptr [r8]
{uint64_t target=m.get(Operand{2,0,64,0,8,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140397cba): {next=c.rip+5; // mov edx, 0x10
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x10)}));
c.rip=next;return true;}
case UINT64_C(0x140397cbf): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397cc2): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140397cc6): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140397cc7): {next=c.rip+5; // jmp 0x1403a3de0
next=next+UINT64_C(0xc114);
c.rip=next;return true;}
case UINT64_C(0x140397ccc): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140397cd0): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140397cd1): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140397cd2): {next=c.rip+5; // call 0x1403b0814
{uint64_t target=next+UINT64_C(0x18b3d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140397cd7): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140397f20): {next=c.rip+5; // mov dword ptr [rsp + 0x20], r9d
m.put(Operand{2,0,32,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f25): {next=c.rip+5; // mov qword ptr [rsp + 8], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f2a): {next=c.rip+1; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f2b): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f2c): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f2d): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f2f): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f31): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140397f35): {next=c.rip+3; // mov r15, rdx
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f38): {next=c.rip+3; // mov r14, rcx
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f3b): {next=c.rip+2; // xor ebx, ebx
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140397f3d): {next=c.rip+4; // mov dword ptr [rsp + 0x68], ebx
m.put(Operand{2,0,32,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f41): {next=c.rip+7; // lea rax, [rip + 0x59b70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,367472,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f48): {next=c.rip+3; // mov qword ptr [rcx], rax
m.put(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f4b): {next=c.rip+7; // mov qword ptr [rcx + 0x98], rbx
m.put(Operand{2,0,64,0,1,-1,1,0,152,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f52): {next=c.rip+7; // mov qword ptr [rcx + 0xc0], rbx
m.put(Operand{2,0,64,0,1,-1,1,0,192,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f59): {next=c.rip+7; // mov qword ptr [rcx + 0xc8], rbx
m.put(Operand{2,0,64,0,1,-1,1,0,200,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f60): {next=c.rip+7; // mov qword ptr [rcx + 0xd0], rbx
m.put(Operand{2,0,64,0,1,-1,1,0,208,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f67): {next=c.rip+7; // lea rax, [rip + 0x358da]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,219354,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f6e): {next=c.rip+7; // mov qword ptr [rcx + 0x90], rax
m.put(Operand{2,0,64,0,1,-1,1,0,144,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f75): {next=c.rip+8; // mov dword ptr [rsp + 0x68], 1
m.put(Operand{2,0,32,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x140397f7d): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f80): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140397f84): {next=c.rip+7; // lea rax, [rip + 0x3595d]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,219485,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f8b): {next=c.rip+4; // mov qword ptr [rcx + r14], rax
m.put(Operand{2,0,64,0,1,14,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f8f): {next=c.rip+3; // mov rax, qword ptr [r14]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f92): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140397f96): {next=c.rip+3; // lea edx, [rcx - 0x18]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,-1,1,0,-24,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f99): {next=c.rip+5; // mov dword ptr [rcx + r14 - 4], edx
m.put(Operand{2,0,32,0,1,14,1,0,-4,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397f9e): {next=c.rip+4; // mov qword ptr [r14 + 8], rbx
m.put(Operand{2,0,64,0,14,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397fa2): {next=c.rip+3; // mov rax, qword ptr [r14]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397fa5): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140397fa9): {next=c.rip+3; // add rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140397fac): {next=c.rip+4; // lea rsi, [r14 + 0x10]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,14,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397fb0): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140397fb3): {next=c.rip+3; // mov rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397fb6): {next=c.rip+5; // call 0x14039aae0
{uint64_t target=next+UINT64_C(0x2b25);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140397fbb): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140397fbc): {next=c.rip+3; // mov rax, qword ptr [r14]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397fbf): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140397fc3): {next=c.rip+7; // lea rax, [rip + 0x59bc6]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,367558,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397fca): {next=c.rip+4; // mov qword ptr [rcx + r14], rax
m.put(Operand{2,0,64,0,1,14,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397fce): {next=c.rip+3; // mov rax, qword ptr [r14]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397fd1): {next=c.rip+4; // movsxd rcx, dword ptr [rax + 4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,-1,1,0,4,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140397fd5): {next=c.rip+6; // lea edx, [rcx - 0x90]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,-1,1,0,-144,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397fdb): {next=c.rip+5; // mov dword ptr [rcx + r14 - 4], edx
m.put(Operand{2,0,32,0,1,14,1,0,-4,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397fe0): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397fe5): {next=c.rip+3; // mov rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397fe8): {next=c.rip+5; // call 0x14039aa50
{uint64_t target=next+UINT64_C(0x2a63);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140397fed): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140397fee): {next=c.rip+7; // lea rax, [rip + 0x59923]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,366883,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397ff5): {next=c.rip+3; // mov qword ptr [rsi], rax
m.put(Operand{2,0,64,0,6,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397ff8): {next=c.rip+4; // mov rdi, qword ptr [r15 + 0x10]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,15,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140397ffc): {next=c.rip+5; // cmp qword ptr [r15 + 0x18], 0x10
m.arithmetic(m.get(Operand{2,0,64,0,15,-1,1,0,24,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x10)}),64,true);
c.rip=next;return true;}
default:return false;
}}
}
