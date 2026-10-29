// Generated literal x64 semantics.
#include "../pafet_hexvm_cpu_xxvi.h"
namespace pafet_xxiv {
bool hexvm_part_16(Machine& m){auto& c=m.c;auto& next=m.next;switch(m.canonical(c.rip)){
case UINT64_C(0x140058005): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140058009): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005800d): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058014): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058018): {next=c.rip+3; // xor rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005801b): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005801e): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058021): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058027): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005802e): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140058031): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058035): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005803c): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x28]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058041): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x30]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058046): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x68]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005804b): {next=c.rip+5; // mov r15, qword ptr [rsp + 0x20]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058050): {next=c.rip+4; // add rsp, 0x38
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058054): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140058056): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140058058): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14005805a): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14005805b): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14005805c): {next=c.rip+5; // mov edx, 0x54485254
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x54485254)}));
c.rip=next;return true;}
case UINT64_C(0x140058061): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058064): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffff12c7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058069): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14005806a): {next=c.rip+5; // mov edx, 0x43414e59
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x43414e59)}));
c.rip=next;return true;}
case UINT64_C(0x14005806f): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058072): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffff12b9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058077): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140058080): {next=c.rip+5; // mov qword ptr [rsp + 0x18], r8
m.put(Operand{2,0,64,0,4,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058085): {next=c.rip+1; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058086): {next=c.rip+1; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058087): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058088): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058089): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005808b): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005808d): {next=c.rip+4; // sub rsp, 0x38
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140058091): {next=c.rip+7; // movsxd rax, dword ptr [rcx + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,1,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140058098): {next=c.rip+3; // mov r14, rcx
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005809b): {next=c.rip+3; // mov r13d, edx
m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005809e): {next=c.rip+10; // movabs rcx, 0x1f4ca5924e9dc001
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1f4ca5924e9dc001)}));
c.rip=next;return true;}
case UINT64_C(0x1400580a8): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400580ac): {next=c.rip+10; // movabs rcx, 0xbd152f59cf43443e
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xbd152f59cf43443e)}));
c.rip=next;return true;}
case UINT64_C(0x1400580b6): {next=c.rip+3; // mov rbp, r8
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400580b9): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400580c0): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400580c5): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400580ca): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400580d1): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400580d5): {next=c.rip+10; // movabs rcx, 0x5bddb1074c08c82b
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5bddb1074c08c82b)}));
c.rip=next;return true;}
case UINT64_C(0x1400580df): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400580e6): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400580eb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400580f0): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400580f7): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400580fb): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058102): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058107): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005810c): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11c8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4552,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058113): {next=c.rip+4; // shr rax, 0xd
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0xd)},1);
c.rip=next;return true;}
case UINT64_C(0x140058117): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005811a): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005811e): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058121): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14005812b): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005812f): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140058139): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005813c): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058140): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058143): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058147): {next=c.rip+10; // movabs rax, 0xd8169f0c5941686
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd8169f0c5941686)}));
c.rip=next;return true;}
case UINT64_C(0x140058151): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058154): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058158): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005815b): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005815e): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11c8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4552,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058165): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058168): {next=c.rip+7; // mov qword ptr [r14 + 0x11c8], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,4552,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005816f): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058172): {next=c.rip+5; // call 0x14004d760
{uint64_t target=next+UINT64_C(0xffffffffffff55e9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058177): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005817a): {next=c.rip+2; // mov edi, eax
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005817c): {next=c.rip+5; // call 0x14004a3d0
{uint64_t target=next+UINT64_C(0xffffffffffff224f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058181): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058184): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058187): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffff19e4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005818c): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x11a4]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058194): {next=c.rip+3; // mov r8d, eax
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058197): {next=c.rip+3; // mov rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005819a): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005819d): {next=c.rip+2; // mov esi, eax
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005819f): {next=c.rip+5; // call 0x14004c930
{uint64_t target=next+UINT64_C(0xffffffffffff478c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400581a4): {next=c.rip+2; // mov ecx, edi
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400581a6): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400581a9): {next=c.rip+5; // call 0x140048d70
{uint64_t target=next+UINT64_C(0xffffffffffff0bc2);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400581ae): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400581b1): {next=c.rip+4; // mov dword ptr [rsp + 0x28], esi
m.put(Operand{2,0,32,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400581b5): {next=c.rip+4; // lea rcx, [rbx - 1]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400581b9): {next=c.rip+4; // mov dword ptr [rsp + 0x20], eax
m.put(Operand{2,0,32,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400581bd): {next=c.rip+3; // cmp rcx, rbx
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400581c0): {next=c.rip+3; // mov rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400581c3): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400581c6): {next=c.rip+4; // setae r8b
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.condition(3)));
c.rip=next;return true;}
case UINT64_C(0x1400581ca): {next=c.rip+3; // xor r9d, r9d
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400581cd): {next=c.rip+5; // call 0x14004cb70
{uint64_t target=next+UINT64_C(0xffffffffffff499e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400581d2): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400581d5): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400581d8): {next=c.rip+5; // call 0x14004c880
{uint64_t target=next+UINT64_C(0xffffffffffff46a3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400581dd): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11c8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4552,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400581e4): {next=c.rip+3; // test r13d, r13d
m.logic(m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x1400581e7): {next=c.rip+6; // jns 0x140058d4b
if(m.condition(11))next=next+UINT64_C(0xb5e);
c.rip=next;return true;}
case UINT64_C(0x1400581ed): {next=c.rip+7; // cmp qword ptr [r14 + 0x1058], rbp
m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4184,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400581f4): {next=c.rip+6; // jne 0x140058d59
if(m.condition(1))next=next+UINT64_C(0xb5f);
c.rip=next;return true;}
case UINT64_C(0x1400581fa): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140058201): {next=c.rip+10; // movabs rcx, 0x987106d56fa71cc7
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x987106d56fa71cc7)}));
c.rip=next;return true;}
case UINT64_C(0x14005820b): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005820f): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058212): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058219): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005821e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058223): {next=c.rip+5; // call 0x140049ee0
{uint64_t target=next+UINT64_C(0xffffffffffff1cb8);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058228): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14005822a): {next=c.rip+6; // jne 0x140058d3e
if(m.condition(1))next=next+UINT64_C(0xb0e);
c.rip=next;return true;}
case UINT64_C(0x140058230): {next=c.rip+7; // cmp dword ptr [r14 + 0x4b8], eax
m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1208,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140058237): {next=c.rip+6; // jne 0x140058d3e
if(m.condition(1))next=next+UINT64_C(0xb01);
c.rip=next;return true;}
case UINT64_C(0x14005823d): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x10d0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058244): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1140]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005824c): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005824f): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058256): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005825d): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058264): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005826c): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058273): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x1188]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005827a): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005827e): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r12
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058283): {next=c.rip+10; // movabs r12, 0x2545f4914f6cdd1d
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14005828d): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058290): {next=c.rip+5; // mov qword ptr [rsp + 0x30], r15
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058295): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058298): {next=c.rip+10; // movabs r15, 0x9e3779b97f4a7c15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x1400582a2): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400582a5): {next=c.rip+3; // sub r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400582a8): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400582ab): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400582af): {next=c.rip+3; // inc rsi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400582b2): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400582b6): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rsi
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400582bd): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400582c0): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400582c7): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400582ca): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400582ce): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400582d1): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400582d8): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400582dc): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400582df): {next=c.rip+3; // xor rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400582e2): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400582e5): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400582e8): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400582eb): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400582ef): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400582f3): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400582fa): {next=c.rip+7; // cmp r8d, 0x14b3da
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x14b3da)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140058301): {next=c.rip+6; // jne 0x140058d34
if(m.condition(1))next=next+UINT64_C(0xa2d);
c.rip=next;return true;}
case UINT64_C(0x140058307): {next=c.rip+3; // mov eax, r13d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005830a): {next=c.rip+4; // btr eax, 0x1f
m.bitop(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)},false);
c.rip=next;return true;}
case UINT64_C(0x14005830e): {next=c.rip+3; // cmp eax, 2
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140058311): {next=c.rip+2; // jae 0x14005835d
if(m.condition(3))next=next+UINT64_C(0x4a);
c.rip=next;return true;}
case UINT64_C(0x140058313): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058317): {next=c.rip+4; // lea rax, [rsi + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005831b): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058322): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058325): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005832c): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140058330): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058334): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005833b): {next=c.rip+4; // imul rax, r10
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005833f): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058342): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058345): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058348): {next=c.rip+6; // add rax, 0x3edeff
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3edeff)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005834e): {next=c.rip+7; // xor rcx, 0x3edeff
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3edeff)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058355): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140058358): {next=c.rip+5; // jmp 0x140058d29
next=next+UINT64_C(0x9cc);
c.rip=next;return true;}
case UINT64_C(0x14005835d): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058360): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffff180b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058365): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005836d): {next=c.rip+10; // movabs rbx, 0xff51afd7ed558ccd
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140058377): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005837e): {next=c.rip+10; // movabs r8, 0xc4ceb9fe1a85ec53
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140058388): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10b0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005838f): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058397): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058399): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005839c): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x930]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400583a3): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400583a6): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400583aa): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400583ad): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400583b1): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400583b4): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400583b8): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400583bb): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400583bf): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400583c2): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400583c6): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400583c9): {next=c.rip+7; // mov qword ptr [r14 + 0x930], rdx
m.put(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400583d0): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x948]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400583d7): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400583de): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400583e1): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400583e5): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400583e8): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400583ec): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400583ef): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400583f3): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400583f6): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400583fa): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400583fd): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058401): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058404): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005840b): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1118]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058412): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1149]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005841a): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058421): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058425): {next=c.rip+4; // lea rbx, [rax + rax*4]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058429): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005842c): {next=c.rip+3; // add rbx, rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005842f): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058432): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058435): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058438): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14005843b): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005843e): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058442): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058449): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140058450): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058453): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058457): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005845a): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058461): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140058465): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058469): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058470): {next=c.rip+4; // imul r8, r11
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058474): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058477): {next=c.rip+3; // xor r8, r10
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005847a): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005847d): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140058480): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058484): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058488): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005848b): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058492): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffff3f29);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058497): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005849e): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400584a5): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400584ad): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400584b4): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1110]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400584bb): {next=c.rip+4; // lea r11, [rax + rax*8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400584bf): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400584c7): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400584ca): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400584ce): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400584d1): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400584d4): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400584d7): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400584da): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400584dd): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400584e1): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400584e8): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400584ef): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400584f2): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400584f6): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400584f9): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058500): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140058504): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058508): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005850f): {next=c.rip+4; // imul r8, r10
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058513): {next=c.rip+3; // xor r8, r11
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058516): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058519): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005851c): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005851f): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058523): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058527): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005852a): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058531): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffff3e8a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058536): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058539): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffff1632);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005853e): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140058545): {next=c.rip+2; // jae 0x140058551
if(m.condition(3))next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x140058547): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058549): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005854c): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffff3e6f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058551): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x10c0]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058558): {next=c.rip+7; // mov rbp, qword ptr [r14 + 0x10b0]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005855f): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x1110]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058566): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005856e): {next=c.rip+3; // mov rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058571): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058579): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058580): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058587): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x1180]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005858e): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058592): {next=c.rip+4; // lea r9, [rbx + rbx*8]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058596): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058599): {next=c.rip+3; // xor rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005859c): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005859f): {next=c.rip+3; // sub r11, rcx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400585a2): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400585a5): {next=c.rip+4; // cmove r11, rax
if(m.condition(0))m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400585a9): {next=c.rip+4; // imul r10, r15
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400585ad): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400585b0): {next=c.rip+3; // add r10, r12
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400585b3): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400585b6): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400585ba): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400585bd): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400585c4): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400585c8): {next=c.rip+3; // xor rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400585cb): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400585ce): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400585d1): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400585d4): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400585d8): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400585dc): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400585df): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400585e6): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400585ea): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400585f1): {next=c.rip+6; // mov r8d, 0x5738
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x5738)}));
c.rip=next;return true;}
case UINT64_C(0x1400585f7): {next=c.rip+4; // imul r10, r15
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400585fb): {next=c.rip+4; // lea rax, [rbx + rbx*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400585ff): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058602): {next=c.rip+3; // add r10, r12
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058605): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r10
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005860c): {next=c.rip+4; // shr r10, 0x1b
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140058610): {next=c.rip+4; // movzx edx, r10b
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058614): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005861b): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005861f): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058622): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058625): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058628): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005862b): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005862f): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058633): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058636): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005863d): {next=c.rip+8; // movzx edx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058645): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x230]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005864c): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xffffffffffff499f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058651): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x230]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058658): {next=c.rip+10; // movabs rdi, 0xff51afd7ed558ccd
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140058662): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058665): {next=c.rip+10; // movabs rsi, 0xc4ceb9fe1a85ec53
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005866f): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058676): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058679): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005867d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058680): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058684): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058687): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005868b): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005868e): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058692): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058695): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058699): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005869b): {next=c.rip+3; // lea eax, [rdx + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005869e): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400586a0): {next=c.rip+2; // xor eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400586a2): {next=c.rip+3; // imul ecx, edx
m.imul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400586a5): {next=c.rip+2; // not ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400586a7): {next=c.rip+2; // and ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400586a9): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400586ac): {next=c.rip+2; // je 0x140058715
if(m.condition(0))next=next+UINT64_C(0x67);
c.rip=next;return true;}
case UINT64_C(0x1400586ae): {next=c.rip+4; // and r8b, 3
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3)}),8));
c.rip=next;return true;}
case UINT64_C(0x1400586b2): {next=c.rip+4; // cmp r8b, 1
m.arithmetic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x1400586b6): {next=c.rip+2; // jne 0x140058715
if(m.condition(1))next=next+UINT64_C(0x5d);
c.rip=next;return true;}
case UINT64_C(0x1400586b8): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400586bf): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400586c6): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400586ca): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400586cd): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400586d4): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400586d8): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400586db): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400586e2): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400586ea): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400586f1): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400586f8): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400586fb): {next=c.rip+6; // add rax, 0x15c9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x15c9)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058701): {next=c.rip+7; // xor rcx, 0x15c9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x15c9)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058708): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140058710): {next=c.rip+5; // jmp 0x140058d29
next=next+UINT64_C(0x614);
c.rip=next;return true;}
case UINT64_C(0x140058715): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058718): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffff1453);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005871d): {next=c.rip+2; // mov ebx, eax
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005871f): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140058726): {next=c.rip+2; // jb 0x140058785
if(m.condition(2))next=next+UINT64_C(0x5d);
c.rip=next;return true;}
case UINT64_C(0x140058728): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005872f): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140058736): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005873a): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005873d): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058744): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140058748): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005874b): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058752): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005875a): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058761): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058768): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005876b): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058771): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058778): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140058780): {next=c.rip+5; // jmp 0x140058d29
next=next+UINT64_C(0x5a4);
c.rip=next;return true;}
case UINT64_C(0x140058785): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058787): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005878a): {next=c.rip+5; // call 0x14004e0d0
{uint64_t target=next+UINT64_C(0xffffffffffff5941);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005878f): {next=c.rip+7; // movsxd rcx, dword ptr [r14 + 0x928]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140058796): {next=c.rip+10; // movabs r8, 0xd6e8feb86659fd93
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x1400587a0): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400587a7): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400587aa): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400587ae): {next=c.rip+4; // imul rcx, r15
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400587b2): {next=c.rip+4; // rol rdx, 0x11
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x1400587b6): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400587b9): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x700]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400587c0): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400587c3): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400587c6): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400587ca): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400587cd): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400587d1): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400587d4): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400587d8): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400587db): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400587df): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400587e2): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400587e6): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400587e9): {next=c.rip+3; // mov r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400587ec): {next=c.rip+4; // shr r10, 0x1d
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x1400587f0): {next=c.rip+3; // xor r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400587f3): {next=c.rip+4; // or r10, 1
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400587f7): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400587fa): {next=c.rip+7; // mov qword ptr [r14 + 0x700], r10
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058801): {next=c.rip+5; // and eax, 0x3ff
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3ff)}),32));
c.rip=next;return true;}
case UINT64_C(0x140058806): {next=c.rip+6; // cmp rax, 0x2c5
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2c5)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14005880c): {next=c.rip+2; // jne 0x14005881d
if(m.condition(1))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x14005880e): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058811): {next=c.rip+5; // call 0x14007fb70
{uint64_t target=next+UINT64_C(0x2735a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058816): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x700]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005881d): {next=c.rip+4; // movzx eax, r10b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058821): {next=c.rip+2; // and al, 0x1f
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8));
c.rip=next;return true;}
case UINT64_C(0x140058823): {next=c.rip+2; // cmp al, 0x15
m.arithmetic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x15)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140058825): {next=c.rip+6; // jne 0x140058916
if(m.condition(1))next=next+UINT64_C(0xeb);
c.rip=next;return true;}
case UINT64_C(0x14005882b): {next=c.rip+7; // movsxd rcx, dword ptr [r14 + 0x928]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140058832): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058839): {next=c.rip+7; // xor rcx, 0x5a5a
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5a5a)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058840): {next=c.rip+4; // rol rax, 0x11
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x140058844): {next=c.rip+4; // imul rcx, r15
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058848): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005884b): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005884e): {next=c.rip+10; // movabs rax, 0x8f70feda99a6026d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8f70feda99a6026d)}));
c.rip=next;return true;}
case UINT64_C(0x140058858): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005885b): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005885e): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058862): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058865): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058869): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005886c): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058870): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058873): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058877): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005887a): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005887e): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058881): {next=c.rip+3; // mov r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058884): {next=c.rip+4; // shr r9, 0x1d
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x140058888): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005888b): {next=c.rip+4; // or r9, 1
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005888f): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058892): {next=c.rip+3; // mov rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058895): {next=c.rip+4; // shr rax, 8
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},1);
c.rip=next;return true;}
case UINT64_C(0x140058899): {next=c.rip+3; // and eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005889c): {next=c.rip+4; // shr rcx, 0x28
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x28)},1);
c.rip=next;return true;}
case UINT64_C(0x1400588a0): {next=c.rip+4; // imul r8, rax, 0x3e
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x1400588a4): {next=c.rip+5; // mov eax, 0x8421085
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8421085)}));
c.rip=next;return true;}
case UINT64_C(0x1400588a9): {next=c.rip+2; // mul ecx
m.mul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400588ab): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400588ad): {next=c.rip+2; // sub eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x1400588af): {next=c.rip+2; // shr eax, 1
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)},1);
c.rip=next;return true;}
case UINT64_C(0x1400588b1): {next=c.rip+2; // add eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x1400588b3): {next=c.rip+3; // shr eax, 5
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x5)},1);
c.rip=next;return true;}
case UINT64_C(0x1400588b6): {next=c.rip+3; // imul eax, eax, 0x3e
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x1400588b9): {next=c.rip+2; // sub ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x1400588bb): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400588bd): {next=c.rip+3; // add r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400588c0): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400588c7): {next=c.rip+4; // movsxd rcx, dword ptr [rax + r8*4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,8,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400588cb): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400588d2): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400588d5): {next=c.rip+7; // add rcx, qword ptr [r14 + 0x4e0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400588dc): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400588df): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400588e2): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400588e6): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400588e9): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400588ed): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400588f0): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400588f4): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400588f7): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400588fb): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400588fe): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058902): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058905): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058908): {next=c.rip+7; // inc qword ptr [r14 + 0x708]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005890f): {next=c.rip+7; // mov qword ptr [r14 + 0x700], rax
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058916): {next=c.rip+7; // inc dword ptr [r14 + 0x75c]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005891d): {next=c.rip+7; // mov eax, dword ptr [r14 + 0x75c]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058924): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x758]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1880,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14005892b): {next=c.rip+2; // jb 0x140058940
if(m.condition(2))next=next+UINT64_C(0x13);
c.rip=next;return true;}
case UINT64_C(0x14005892d): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058930): {next=c.rip+11; // mov dword ptr [r14 + 0x75c], 0
m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005893b): {next=c.rip+5; // call 0x14004b250
{uint64_t target=next+UINT64_C(0xffffffffffff2910);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058940): {next=c.rip+3; // mov r8d, ebx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058943): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058945): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058948): {next=c.rip+5; // call 0x14004c110
{uint64_t target=next+UINT64_C(0xffffffffffff37c3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005894d): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140058954): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058957): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005895e): {next=c.rip+3; // mov rbp, r12
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058961): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x1188]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058968): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005896c): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005896f): {next=c.rip+4; // lea r12d, [rbx + 1]
m.put(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,3,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058973): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005897a): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005897d): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140058981): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058984): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005898b): {next=c.rip+7; // mov rdi, qword ptr [r14 + 0x10c0]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058992): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058999): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x10b0]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400589a0): {next=c.rip+8; // movzx r15d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400589a8): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400589ac): {next=c.rip+4; // lea rax, [r11 + r11*8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,11,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400589b0): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400589b3): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400589b6): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400589b9): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400589bc): {next=c.rip+4; // lea rax, [rbx + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400589c0): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400589c4): {next=c.rip+3; // inc r10
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400589c7): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400589ce): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x8f8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400589d5): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x730]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400589dc): {next=c.rip+5; // mov qword ptr [rsp + 0x70], r10
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400589e1): {next=c.rip+5; // movzx r8d, byte ptr [rcx + rbx]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400589e6): {next=c.rip+4; // xor r8b, byte ptr [rax + rbx]
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,8,0,0,3,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x1400589ea): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x1400589f4): {next=c.rip+4; // imul r9, rax
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400589f8): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], r10
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400589ff): {next=c.rip+10; // movabs rbx, 0xff51afd7ed558ccd
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140058a09): {next=c.rip+3; // add r9, rbp
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058a0c): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058a0f): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140058a13): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058a16): {next=c.rip+4; // lea rax, [r11 + r11]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,11,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058a1a): {next=c.rip+7; // mov byte ptr [r14 + 0x1141], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058a21): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058a25): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058a28): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058a2b): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058a2e): {next=c.rip+3; // xor rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058a31): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140058a34): {next=c.rip+4; // lea rax, [rdx + r12]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,12,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058a38): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058a3c): {next=c.rip+7; // mov qword ptr [r14 + 0x10d8], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058a43): {next=c.rip+7; // movsxd rdx, dword ptr [r14 + 0x928]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140058a4a): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x940]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058a51): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058a54): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x238]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058a5b): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058a5e): {next=c.rip+3; // xor rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058a61): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x230]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058a68): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058a6b): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058a6f): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058a72): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058a76): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058a79): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058a7d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058a80): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140058a8a): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058a8e): {next=c.rip+4; // movzx eax, r8b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058a92): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058a95): {next=c.rip+6; // xor rax, 0x93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x93)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058a9b): {next=c.rip+4; // shr rbx, 0x21
m.shift(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058a9f): {next=c.rip+3; // xor rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058aa2): {next=c.rip+7; // lea rcx, [rip - 0x58aa9]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-363177,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058aa9): {next=c.rip+7; // mov qword ptr [r14 + 0x948], rbx
m.put(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058ab0): {next=c.rip+8; // movzx ebp, byte ptr [rax + rcx + 0x3e3660]
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,1,1,0,4077152,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058ab8): {next=c.rip+4; // xor bpl, 0x27
m.put(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x27)}),8));
c.rip=next;return true;}
case UINT64_C(0x140058abc): {next=c.rip+2; // inc edx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140058abe): {next=c.rip+7; // mov dword ptr [r14 + 0x928], edx
m.put(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058ac5): {next=c.rip+10; // movabs r8, 0xff51afd7ed558ccd
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140058acf): {next=c.rip+3; // test dl, 0x1f
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8);
c.rip=next;return true;}
case UINT64_C(0x140058ad2): {next=c.rip+2; // jne 0x140058b18
if(m.condition(1))next=next+UINT64_C(0x44);
c.rip=next;return true;}
case UINT64_C(0x140058ad4): {next=c.rip+3; // movsxd rax, edx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140058ad7): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058ada): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x230]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058ae1): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058ae4): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058ae8): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058aeb): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140058af5): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058af9): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058afc): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058b00): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058b03): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058b07): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058b0a): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058b0e): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058b11): {next=c.rip+7; // mov qword ptr [r14 + 0x230], rax
m.put(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058b18): {next=c.rip+4; // movzx edx, bpl
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058b1c): {next=c.rip+3; // xor r10, rdx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058b1f): {next=c.rip+7; // mov byte ptr [r14 + 0x11a4], bpl
m.put(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058b26): {next=c.rip+3; // xor r10, r12
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058b29): {next=c.rip+10; // movabs r12, 0xc4ceb9fe1a85ec53
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140058b33): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058b36): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058b3a): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058b3d): {next=c.rip+10; // movabs r10, 0x9e3779b97f4a7c15
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140058b47): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058b4b): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058b4f): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058b53): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058b56): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058b5a): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058b5d): {next=c.rip+4; // imul rcx, r12
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058b61): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058b64): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058b68): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058b6b): {next=c.rip+7; // mov ecx, dword ptr [r14 + 0x8bc]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,2236,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058b72): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058b79): {next=c.rip+10; // movabs rax, 0xd6e8feb86659fd93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x140058b83): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058b87): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058b8a): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058b8d): {next=c.rip+10; // movabs rbx, 0x2545f4914f6cdd1d
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140058b97): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058b9a): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058b9d): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058ba1): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058ba4): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058ba8): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058bab): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058baf): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058bb2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058bb7): {next=c.rip+4; // imul rdx, r12
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058bbb): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058bbf): {next=c.rip+3; // and edx, 3
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x140058bc2): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140058bc5): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058bcc): {next=c.rip+4; // cmp bpl, 0x3e
m.arithmetic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3e)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140058bd0): {next=c.rip+6; // jae 0x140058c6d
if(m.condition(3))next=next+UINT64_C(0x97);
c.rip=next;return true;}
case UINT64_C(0x140058bd6): {next=c.rip+7; // inc qword ptr [r14 + 0x1088]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140058bdd): {next=c.rip+7; // lea rax, [rip - 0x58be4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-363492,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058be4): {next=c.rip+8; // mov r8d, dword ptr [rax + rdx*4 + 0x3e0490]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,0,2,4,0,4064400,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058bec): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058bf3): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140058bf7): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058bfb): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058c02): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058c06): {next=c.rip+2; // mov ebx, edx
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058c08): {next=c.rip+3; // xor rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058c0b): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058c0e): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058c11): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058c14): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058c17): {next=c.rip+4; // movzx r8d, bpl
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058c1b): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140058c1e): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058c22): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058c25): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058c2c): {next=c.rip+5; // call 0x14004da40
{uint64_t target=next+UINT64_C(0xffffffffffff4e0f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058c31): {next=c.rip+8; // mov r8, qword ptr [rsp + 0x80]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058c39): {next=c.rip+4; // lea edx, [r13 - 1]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,13,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058c3d): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058c3f): {next=c.rip+4; // imul rcx, rbx, 0x3e
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x140058c43): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058c46): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058c4d): {next=c.rip+4; // movsxd r9, dword ptr [rax + rcx*4]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,1,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140058c51): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058c54): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140058c5b): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058c5e): {next=c.rip+7; // add r9, qword ptr [r14 + 0x4e0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058c65): {next=c.rip+3; // call r9
{uint64_t target=m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058c68): {next=c.rip+5; // jmp 0x140058d34
next=next+UINT64_C(0xc7);
c.rip=next;return true;}
case UINT64_C(0x140058c6d): {next=c.rip+7; // inc dword ptr [r14 + 0x1090]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140058c74): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058c77): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140058c7b): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058c7e): {next=c.rip+8; // lea rax, [r11*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,-1,11,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058c86): {next=c.rip+7; // mov byte ptr [r14 + 0x1143], cl
m.put(Operand{2,0,8,0,14,-1,1,0,4419,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058c8d): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058c91): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058c95): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058c98): {next=c.rip+3; // xor rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058c9b): {next=c.rip+7; // mov qword ptr [r14 + 0x10e8], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,4328,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058ca2): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058ca9): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058cac): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058caf): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140058cb3): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058cb6): {next=c.rip+7; // mov byte ptr [r14 + 0x114a], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4426,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058cbd): {next=c.rip+4; // imul rax, r11, 0xb
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb)});
c.rip=next;return true;}
case UINT64_C(0x140058cc1): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058cc5): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058cc8): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058ccb): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058cce): {next=c.rip+4; // xor rcx, 1
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058cd2): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140058cd5): {next=c.rip+4; // lea rax, [rdx + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058cd9): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058cdd): {next=c.rip+7; // mov qword ptr [r14 + 0x1120], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4384,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058ce4): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058ce8): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058cef): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058cf3): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058cf6): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058cfd): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140058d01): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058d05): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058d0c): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058d10): {next=c.rip+3; // xor rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058d13): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058d16): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058d19): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058d1f): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058d26): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140058d29): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058d2d): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058d34): {next=c.rip+5; // mov r12, qword ptr [rsp + 0x78]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058d39): {next=c.rip+5; // mov r15, qword ptr [rsp + 0x30]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058d3e): {next=c.rip+4; // add rsp, 0x38
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058d42): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140058d44): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140058d46): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140058d47): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140058d48): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140058d49): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140058d4a): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140058d4b): {next=c.rip+5; // mov edx, 0x54485254
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x54485254)}));
c.rip=next;return true;}
case UINT64_C(0x140058d50): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058d53): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffff05d8);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058d58): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140058d59): {next=c.rip+5; // mov edx, 0x43414e59
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x43414e59)}));
c.rip=next;return true;}
case UINT64_C(0x140058d5e): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058d61): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffff05ca);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058d66): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140058d70): {next=c.rip+5; // mov qword ptr [rsp + 0x18], r8
m.put(Operand{2,0,64,0,4,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058d75): {next=c.rip+1; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058d76): {next=c.rip+1; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058d77): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058d78): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058d7a): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058d7c): {next=c.rip+4; // sub rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140058d80): {next=c.rip+7; // movsxd rax, dword ptr [rcx + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,1,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140058d87): {next=c.rip+3; // mov r14, rcx
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058d8a): {next=c.rip+3; // mov r13d, edx
m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058d8d): {next=c.rip+10; // movabs rcx, 0xe6329a61b4f1b6b7
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xe6329a61b4f1b6b7)}));
c.rip=next;return true;}
case UINT64_C(0x140058d97): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058d9b): {next=c.rip+10; // movabs rcx, 0x446b10aa352f3288
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x446b10aa352f3288)}));
c.rip=next;return true;}
case UINT64_C(0x140058da5): {next=c.rip+10; // movabs rbp, 0xff51afd7ed558ccd
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140058daf): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058db6): {next=c.rip+3; // mov rdi, r8
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058db9): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058dbe): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058dc3): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140058dca): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058dce): {next=c.rip+10; // movabs rcx, 0xa2a38ef4b664be9d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xa2a38ef4b664be9d)}));
c.rip=next;return true;}
case UINT64_C(0x140058dd8): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058ddf): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058de4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058de9): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140058df0): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058df4): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058dfb): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058e00): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058e05): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4536,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058e0c): {next=c.rip+4; // shr rax, 0xd
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0xd)},1);
c.rip=next;return true;}
case UINT64_C(0x140058e10): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058e13): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058e17): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058e1a): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140058e24): {next=c.rip+4; // imul rcx, rbp
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058e28): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058e2b): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058e2f): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058e32): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058e36): {next=c.rip+10; // movabs rax, 0xf4ff56033ff86030
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf4ff56033ff86030)}));
c.rip=next;return true;}
case UINT64_C(0x140058e40): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058e43): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140058e47): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058e4a): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058e4d): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4536,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058e54): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058e57): {next=c.rip+7; // mov qword ptr [r14 + 0x11b8], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,4536,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058e5e): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058e61): {next=c.rip+5; // call 0x14004a3d0
{uint64_t target=next+UINT64_C(0xffffffffffff156a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058e66): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058e69): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058e6c): {next=c.rip+5; // call 0x14004a3d0
{uint64_t target=next+UINT64_C(0xffffffffffff155f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058e71): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140058e73): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058e76): {next=c.rip+3; // cmp rax, rbx
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140058e79): {next=c.rip+3; // setne dl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.condition(1)));
c.rip=next;return true;}
case UINT64_C(0x140058e7c): {next=c.rip+5; // call 0x14004a2b0
{uint64_t target=next+UINT64_C(0xffffffffffff142f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058e81): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4536,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058e88): {next=c.rip+3; // test r13d, r13d
m.logic(m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x140058e8b): {next=c.rip+6; // jns 0x1400599ea
if(m.condition(11))next=next+UINT64_C(0xb59);
c.rip=next;return true;}
case UINT64_C(0x140058e91): {next=c.rip+7; // cmp qword ptr [r14 + 0x1058], rdi
m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4184,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140058e98): {next=c.rip+6; // jne 0x1400599f8
if(m.condition(1))next=next+UINT64_C(0xb5a);
c.rip=next;return true;}
case UINT64_C(0x140058e9e): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140058ea5): {next=c.rip+10; // movabs rcx, 0xa1db44b6d939fcb7
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xa1db44b6d939fcb7)}));
c.rip=next;return true;}
case UINT64_C(0x140058eaf): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058eb3): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058eb6): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058ebd): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058ec2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058ec7): {next=c.rip+5; // call 0x140049ee0
{uint64_t target=next+UINT64_C(0xffffffffffff1014);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140058ecc): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x140058ece): {next=c.rip+6; // jne 0x1400599de
if(m.condition(1))next=next+UINT64_C(0xb0a);
c.rip=next;return true;}
case UINT64_C(0x140058ed4): {next=c.rip+7; // cmp dword ptr [r14 + 0x4b8], eax
m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1208,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140058edb): {next=c.rip+6; // jne 0x1400599de
if(m.condition(1))next=next+UINT64_C(0xafd);
c.rip=next;return true;}
case UINT64_C(0x140058ee1): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x10d0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058ee8): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1140]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058ef0): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058ef3): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058efa): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058f01): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058f08): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058f10): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058f17): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058f1b): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058f20): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x1188]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058f27): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058f2a): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058f2d): {next=c.rip+5; // mov qword ptr [rsp + 0x28], r12
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058f32): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058f35): {next=c.rip+5; // mov qword ptr [rsp + 0x20], r15
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058f3a): {next=c.rip+3; // sub r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140058f3d): {next=c.rip+10; // movabs r15, 0x9e3779b97f4a7c15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140058f47): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140058f4a): {next=c.rip+10; // movabs r12, 0x2545f4914f6cdd1d
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140058f54): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058f58): {next=c.rip+3; // inc rsi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140058f5b): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058f5f): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rsi
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058f66): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058f69): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058f6c): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058f73): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058f76): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140058f7a): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058f7d): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058f84): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058f88): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058f8b): {next=c.rip+3; // xor rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058f8e): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058f91): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140058f94): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058f98): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058f9c): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058fa3): {next=c.rip+7; // cmp r8d, 0x14b3da
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x14b3da)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140058faa): {next=c.rip+6; // jne 0x1400599cf
if(m.condition(1))next=next+UINT64_C(0xa1f);
c.rip=next;return true;}
case UINT64_C(0x140058fb0): {next=c.rip+3; // mov eax, r13d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058fb3): {next=c.rip+4; // btr eax, 0x1f
m.bitop(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)},false);
c.rip=next;return true;}
case UINT64_C(0x140058fb7): {next=c.rip+3; // cmp eax, 2
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140058fba): {next=c.rip+2; // jae 0x140059006
if(m.condition(3))next=next+UINT64_C(0x4a);
c.rip=next;return true;}
case UINT64_C(0x140058fbc): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058fc0): {next=c.rip+4; // lea rax, [rsi + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058fc4): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058fcb): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058fce): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058fd5): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140058fd9): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058fdd): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058fe4): {next=c.rip+4; // imul rax, r10
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140058fe8): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058feb): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058fee): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140058ff1): {next=c.rip+6; // add rax, 0x3edeff
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3edeff)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140058ff7): {next=c.rip+7; // xor rcx, 0x3edeff
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3edeff)}),64));
c.rip=next;return true;}
case UINT64_C(0x140058ffe): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140059001): {next=c.rip+5; // jmp 0x1400599c4
next=next+UINT64_C(0x9be);
c.rip=next;return true;}
case UINT64_C(0x140059006): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059009): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffff0b62);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005900e): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059016): {next=c.rip+10; // movabs r8, 0xc4ceb9fe1a85ec53
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140059020): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059027): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10b0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005902e): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059036): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059038): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005903b): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x930]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059042): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059045): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059049): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005904c): {next=c.rip+4; // imul rax, rbp
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059050): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059053): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059057): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005905a): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005905e): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059061): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059065): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059068): {next=c.rip+7; // mov qword ptr [r14 + 0x930], rdx
m.put(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005906f): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059076): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x948]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005907d): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059080): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059084): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059087): {next=c.rip+4; // imul rax, rbp
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005908b): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005908e): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059092): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059095): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059099): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005909c): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400590a0): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400590a3): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400590aa): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1118]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400590b1): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1149]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400590b9): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400590c0): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400590c4): {next=c.rip+4; // lea rbx, [rax + rax*4]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400590c8): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400590cb): {next=c.rip+3; // add rbx, rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400590ce): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400590d1): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400590d4): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400590d7): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400590da): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400590dd): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400590e1): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400590e8): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400590ef): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400590f3): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400590f6): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400590fd): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140059101): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059105): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005910c): {next=c.rip+4; // imul r8, r11
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059110): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059113): {next=c.rip+3; // xor r8, r10
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059116): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059119): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005911c): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005911f): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059123): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059127): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005912a): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059131): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffff328a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140059136): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005913d): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1110]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059144): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005914b): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059153): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005915a): {next=c.rip+4; // lea r11, [rax + rax*8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005915e): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059166): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059169): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005916d): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059170): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059173): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059176): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140059179): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005917c): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059180): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059187): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005918e): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059191): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059195): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140059198): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005919f): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400591a3): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400591a7): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400591ae): {next=c.rip+4; // imul r8, r10
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400591b2): {next=c.rip+3; // xor r8, r11
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400591b5): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400591b8): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400591bb): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400591be): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400591c2): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400591c6): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400591c9): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400591d0): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffff31eb);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400591d5): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400591d8): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffff0993);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400591dd): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400591e4): {next=c.rip+2; // jae 0x1400591f0
if(m.condition(3))next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x1400591e6): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400591e8): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400591eb): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffff31d0);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400591f0): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x10c0]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400591f7): {next=c.rip+7; // mov rbp, qword ptr [r14 + 0x10b0]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400591fe): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x1110]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059205): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005920d): {next=c.rip+3; // mov rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059210): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059218): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005921f): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059226): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x1180]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005922d): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059231): {next=c.rip+4; // lea r9, [rbx + rbx*8]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059235): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059238): {next=c.rip+3; // xor rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005923b): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005923e): {next=c.rip+3; // sub r11, rcx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140059241): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140059244): {next=c.rip+4; // cmove r11, rax
if(m.condition(0))m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059248): {next=c.rip+4; // imul r10, r15
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005924c): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005924f): {next=c.rip+3; // add r10, r12
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140059252): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059255): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140059259): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005925c): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059263): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059267): {next=c.rip+3; // xor rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005926a): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005926d): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059270): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140059273): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059277): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005927b): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005927e): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059285): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059289): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059290): {next=c.rip+6; // mov r8d, 0x155b
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x155b)}));
c.rip=next;return true;}
case UINT64_C(0x140059296): {next=c.rip+4; // imul r10, r15
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005929a): {next=c.rip+4; // lea rax, [rbx + rbx*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005929e): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400592a1): {next=c.rip+3; // add r10, r12
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400592a4): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r10
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400592ab): {next=c.rip+4; // shr r10, 0x1b
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400592af): {next=c.rip+4; // movzx edx, r10b
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400592b3): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400592ba): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400592be): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400592c1): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400592c4): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400592c7): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400592ca): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400592ce): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400592d2): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400592d5): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400592dc): {next=c.rip+8; // movzx edx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400592e4): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x230]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400592eb): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xffffffffffff3d00);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400592f0): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x230]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400592f7): {next=c.rip+10; // movabs rdi, 0xff51afd7ed558ccd
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140059301): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059304): {next=c.rip+10; // movabs rsi, 0xc4ceb9fe1a85ec53
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005930e): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059315): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059318): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005931c): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005931f): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059323): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059326): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005932a): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005932d): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059331): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059334): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059338): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005933a): {next=c.rip+3; // lea eax, [rdx + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005933d): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005933f): {next=c.rip+2; // xor eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140059341): {next=c.rip+3; // imul ecx, edx
m.imul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059344): {next=c.rip+2; // not ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059346): {next=c.rip+2; // and ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140059348): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005934b): {next=c.rip+2; // je 0x1400593b4
if(m.condition(0))next=next+UINT64_C(0x67);
c.rip=next;return true;}
case UINT64_C(0x14005934d): {next=c.rip+4; // and r8b, 3
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3)}),8));
c.rip=next;return true;}
case UINT64_C(0x140059351): {next=c.rip+4; // cmp r8b, 1
m.arithmetic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140059355): {next=c.rip+2; // jne 0x1400593b4
if(m.condition(1))next=next+UINT64_C(0x5d);
c.rip=next;return true;}
case UINT64_C(0x140059357): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005935e): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140059365): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059369): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005936c): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059373): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140059377): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005937a): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059381): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059389): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059390): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059397): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005939a): {next=c.rip+6; // add rax, 0x15c9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x15c9)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400593a0): {next=c.rip+7; // xor rcx, 0x15c9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x15c9)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400593a7): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x1400593af): {next=c.rip+5; // jmp 0x1400599c4
next=next+UINT64_C(0x610);
c.rip=next;return true;}
case UINT64_C(0x1400593b4): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400593b7): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffff07b4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400593bc): {next=c.rip+2; // mov ebx, eax
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400593be): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400593c5): {next=c.rip+2; // jb 0x140059424
if(m.condition(2))next=next+UINT64_C(0x5d);
c.rip=next;return true;}
case UINT64_C(0x1400593c7): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400593ce): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400593d5): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400593d9): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400593dc): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400593e3): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400593e7): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400593ea): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400593f1): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400593f9): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059400): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059407): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005940a): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140059410): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059417): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14005941f): {next=c.rip+5; // jmp 0x1400599c4
next=next+UINT64_C(0x5a0);
c.rip=next;return true;}
case UINT64_C(0x140059424): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059426): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059429): {next=c.rip+5; // call 0x14004e0d0
{uint64_t target=next+UINT64_C(0xffffffffffff4ca2);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005942e): {next=c.rip+7; // movsxd rcx, dword ptr [r14 + 0x928]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140059435): {next=c.rip+10; // movabs r8, 0xd6e8feb86659fd93
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14005943f): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059446): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059449): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005944d): {next=c.rip+4; // imul rcx, r15
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059451): {next=c.rip+4; // rol rdx, 0x11
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x140059455): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059458): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x700]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005945f): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059462): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059465): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059469): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005946c): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059470): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059473): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059477): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005947a): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005947e): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059481): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059485): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059488): {next=c.rip+3; // mov r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005948b): {next=c.rip+4; // shr r10, 0x1d
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14005948f): {next=c.rip+3; // xor r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059492): {next=c.rip+4; // or r10, 1
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059496): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059499): {next=c.rip+7; // mov qword ptr [r14 + 0x700], r10
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400594a0): {next=c.rip+5; // and eax, 0x3ff
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3ff)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400594a5): {next=c.rip+6; // cmp rax, 0x2c5
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2c5)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400594ab): {next=c.rip+2; // jne 0x1400594bc
if(m.condition(1))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x1400594ad): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400594b0): {next=c.rip+5; // call 0x14007fb70
{uint64_t target=next+UINT64_C(0x266bb);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400594b5): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x700]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400594bc): {next=c.rip+4; // movzx eax, r10b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400594c0): {next=c.rip+2; // and al, 0x1f
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8));
c.rip=next;return true;}
case UINT64_C(0x1400594c2): {next=c.rip+2; // cmp al, 0x15
m.arithmetic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x15)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x1400594c4): {next=c.rip+6; // jne 0x1400595b4
if(m.condition(1))next=next+UINT64_C(0xea);
c.rip=next;return true;}
case UINT64_C(0x1400594ca): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400594d1): {next=c.rip+6; // xor rax, 0x5a5a
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5a5a)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400594d7): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x940]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400594de): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400594e2): {next=c.rip+4; // rol rcx, 0x11
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x1400594e6): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400594e9): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400594ec): {next=c.rip+10; // movabs rax, 0x8f70feda99a6026d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8f70feda99a6026d)}));
c.rip=next;return true;}
case UINT64_C(0x1400594f6): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400594f9): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400594fc): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059500): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059503): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059507): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005950a): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005950e): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059511): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059515): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059518): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005951c): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005951f): {next=c.rip+3; // mov r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059522): {next=c.rip+4; // shr r9, 0x1d
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x140059526): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059529): {next=c.rip+4; // or r9, 1
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005952d): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059530): {next=c.rip+3; // mov rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059533): {next=c.rip+4; // shr rax, 8
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},1);
c.rip=next;return true;}
case UINT64_C(0x140059537): {next=c.rip+3; // and eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005953a): {next=c.rip+4; // shr rcx, 0x28
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x28)},1);
c.rip=next;return true;}
case UINT64_C(0x14005953e): {next=c.rip+4; // imul r8, rax, 0x3e
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x140059542): {next=c.rip+5; // mov eax, 0x8421085
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8421085)}));
c.rip=next;return true;}
case UINT64_C(0x140059547): {next=c.rip+2; // mul ecx
m.mul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059549): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005954b): {next=c.rip+2; // sub eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14005954d): {next=c.rip+2; // shr eax, 1
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)},1);
c.rip=next;return true;}
case UINT64_C(0x14005954f): {next=c.rip+2; // add eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x140059551): {next=c.rip+3; // shr eax, 5
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x5)},1);
c.rip=next;return true;}
case UINT64_C(0x140059554): {next=c.rip+3; // imul eax, eax, 0x3e
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x140059557): {next=c.rip+2; // sub ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x140059559): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005955b): {next=c.rip+3; // add r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005955e): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059565): {next=c.rip+4; // movsxd rcx, dword ptr [rax + r8*4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,8,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140059569): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140059570): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059573): {next=c.rip+7; // add rcx, qword ptr [r14 + 0x4e0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005957a): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005957d): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059580): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059584): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059587): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005958b): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005958e): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059592): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059595): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059599): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005959c): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400595a0): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400595a3): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400595a6): {next=c.rip+7; // inc qword ptr [r14 + 0x708]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400595ad): {next=c.rip+7; // mov qword ptr [r14 + 0x700], rax
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400595b4): {next=c.rip+7; // inc dword ptr [r14 + 0x75c]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400595bb): {next=c.rip+7; // mov eax, dword ptr [r14 + 0x75c]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400595c2): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x758]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1880,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400595c9): {next=c.rip+2; // jb 0x1400595de
if(m.condition(2))next=next+UINT64_C(0x13);
c.rip=next;return true;}
case UINT64_C(0x1400595cb): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400595ce): {next=c.rip+11; // mov dword ptr [r14 + 0x75c], 0
m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400595d9): {next=c.rip+5; // call 0x14004b250
{uint64_t target=next+UINT64_C(0xffffffffffff1c72);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400595de): {next=c.rip+3; // mov r8d, ebx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400595e1): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400595e3): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400595e6): {next=c.rip+5; // call 0x14004c110
{uint64_t target=next+UINT64_C(0xffffffffffff2b25);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400595eb): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400595f2): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400595f5): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400595fc): {next=c.rip+3; // mov rbp, r12
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400595ff): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x1188]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059606): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005960a): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005960d): {next=c.rip+4; // lea r12d, [rbx + 1]
m.put(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,3,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059611): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059618): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005961b): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005961f): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059622): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059629): {next=c.rip+7; // mov rdi, qword ptr [r14 + 0x10c0]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059630): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059637): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x10b0]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005963e): {next=c.rip+8; // movzx r15d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059646): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005964a): {next=c.rip+4; // lea rax, [r11 + r11*8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,11,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005964e): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059651): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059654): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059657): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005965a): {next=c.rip+4; // lea rax, [rbx + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005965e): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059662): {next=c.rip+3; // inc r10
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140059665): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005966c): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x8f8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059673): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x730]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005967a): {next=c.rip+5; // mov qword ptr [rsp + 0x60], r10
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005967f): {next=c.rip+5; // movzx r8d, byte ptr [rcx + rbx]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059684): {next=c.rip+4; // xor r8b, byte ptr [rax + rbx]
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,8,0,0,3,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140059688): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140059692): {next=c.rip+4; // imul r9, rax
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059696): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], r10
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005969d): {next=c.rip+3; // add r9, rbp
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400596a0): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400596a3): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400596a7): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400596aa): {next=c.rip+4; // lea rax, [r11 + r11]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,11,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400596ae): {next=c.rip+7; // mov byte ptr [r14 + 0x1141], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400596b5): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400596b9): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400596bc): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400596bf): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400596c2): {next=c.rip+3; // xor rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400596c5): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400596c8): {next=c.rip+4; // lea rax, [rdx + r12]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,12,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400596cc): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400596d0): {next=c.rip+7; // mov qword ptr [r14 + 0x10d8], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400596d7): {next=c.rip+7; // movsxd rdx, dword ptr [r14 + 0x928]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400596de): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x940]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400596e5): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400596e8): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x238]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400596ef): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400596f2): {next=c.rip+3; // xor rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400596f5): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x230]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400596fc): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400596ff): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059703): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059706): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140059710): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059714): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059717): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005971b): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005971e): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140059728): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005972c): {next=c.rip+4; // movzx eax, r8b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059730): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059733): {next=c.rip+6; // xor rax, 0x93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x93)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059739): {next=c.rip+4; // shr rbx, 0x21
m.shift(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005973d): {next=c.rip+3; // xor rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059740): {next=c.rip+7; // lea rcx, [rip - 0x59747]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-366407,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059747): {next=c.rip+7; // mov qword ptr [r14 + 0x948], rbx
m.put(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005974e): {next=c.rip+8; // movzx ebp, byte ptr [rax + rcx + 0x3e3660]
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,1,1,0,4077152,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059756): {next=c.rip+4; // xor bpl, 0x27
m.put(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x27)}),8));
c.rip=next;return true;}
case UINT64_C(0x14005975a): {next=c.rip+2; // inc edx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005975c): {next=c.rip+7; // mov dword ptr [r14 + 0x928], edx
m.put(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059763): {next=c.rip+10; // movabs r8, 0xff51afd7ed558ccd
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14005976d): {next=c.rip+3; // test dl, 0x1f
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8);
c.rip=next;return true;}
case UINT64_C(0x140059770): {next=c.rip+2; // jne 0x1400597b6
if(m.condition(1))next=next+UINT64_C(0x44);
c.rip=next;return true;}
case UINT64_C(0x140059772): {next=c.rip+3; // movsxd rax, edx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140059775): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059778): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x230]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005977f): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059782): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059786): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059789): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140059793): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059797): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005979a): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005979e): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400597a1): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400597a5): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400597a8): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400597ac): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400597af): {next=c.rip+7; // mov qword ptr [r14 + 0x230], rax
m.put(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400597b6): {next=c.rip+4; // movzx edx, bpl
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400597ba): {next=c.rip+3; // xor r10, rdx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400597bd): {next=c.rip+7; // mov byte ptr [r14 + 0x11a4], bpl
m.put(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400597c4): {next=c.rip+3; // xor r10, r12
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400597c7): {next=c.rip+10; // movabs r12, 0xc4ceb9fe1a85ec53
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x1400597d1): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400597d4): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400597d8): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400597db): {next=c.rip+10; // movabs r10, 0x9e3779b97f4a7c15
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x1400597e5): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400597e9): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400597ed): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400597f1): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400597f4): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400597f8): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400597fb): {next=c.rip+4; // imul rcx, r12
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400597ff): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059802): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059806): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059809): {next=c.rip+7; // mov ecx, dword ptr [r14 + 0x8bc]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,2236,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059810): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059817): {next=c.rip+10; // movabs rax, 0xd6e8feb86659fd93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x140059821): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059825): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059828): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005982b): {next=c.rip+10; // movabs rbx, 0x2545f4914f6cdd1d
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140059835): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059838): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005983b): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005983f): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059842): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059846): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059849): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005984d): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059850): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059855): {next=c.rip+4; // imul rdx, r12
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059859): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005985d): {next=c.rip+3; // and edx, 3
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x140059860): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140059863): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005986a): {next=c.rip+4; // cmp bpl, 0x3e
m.arithmetic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3e)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14005986e): {next=c.rip+6; // jae 0x140059908
if(m.condition(3))next=next+UINT64_C(0x94);
c.rip=next;return true;}
case UINT64_C(0x140059874): {next=c.rip+7; // inc qword ptr [r14 + 0x1088]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005987b): {next=c.rip+7; // lea rax, [rip - 0x59882]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-366722,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059882): {next=c.rip+8; // mov r8d, dword ptr [rax + rdx*4 + 0x3e0490]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,0,2,4,0,4064400,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005988a): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059891): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140059895): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059899): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400598a0): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400598a4): {next=c.rip+2; // mov ebx, edx
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400598a6): {next=c.rip+3; // xor rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400598a9): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400598ac): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400598af): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400598b2): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400598b5): {next=c.rip+4; // movzx r8d, bpl
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400598b9): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400598bc): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400598c0): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400598c3): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400598ca): {next=c.rip+5; // call 0x14004da40
{uint64_t target=next+UINT64_C(0xffffffffffff4171);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400598cf): {next=c.rip+5; // mov r8, qword ptr [rsp + 0x70]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400598d4): {next=c.rip+4; // lea edx, [r13 - 1]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,13,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400598d8): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400598da): {next=c.rip+4; // imul rcx, rbx, 0x3e
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x1400598de): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400598e1): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400598e8): {next=c.rip+4; // movsxd r9, dword ptr [rax + rcx*4]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,1,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400598ec): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400598ef): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400598f6): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400598f9): {next=c.rip+7; // add r9, qword ptr [r14 + 0x4e0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140059900): {next=c.rip+3; // call r9
{uint64_t target=m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140059903): {next=c.rip+5; // jmp 0x1400599cf
next=next+UINT64_C(0xc7);
c.rip=next;return true;}
case UINT64_C(0x140059908): {next=c.rip+7; // inc dword ptr [r14 + 0x1090]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005990f): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059912): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140059916): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059919): {next=c.rip+8; // lea rax, [r11*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,-1,11,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059921): {next=c.rip+7; // mov byte ptr [r14 + 0x1143], cl
m.put(Operand{2,0,8,0,14,-1,1,0,4419,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059928): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005992c): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059930): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059933): {next=c.rip+3; // xor rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059936): {next=c.rip+7; // mov qword ptr [r14 + 0x10e8], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,4328,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005993d): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059944): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140059947): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005994a): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005994e): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059951): {next=c.rip+7; // mov byte ptr [r14 + 0x114a], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4426,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059958): {next=c.rip+4; // imul rax, r11, 0xb
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb)});
c.rip=next;return true;}
case UINT64_C(0x14005995c): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059960): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059963): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059966): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059969): {next=c.rip+4; // xor rcx, 1
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005996d): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140059970): {next=c.rip+4; // lea rax, [rdx + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059974): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059978): {next=c.rip+7; // mov qword ptr [r14 + 0x1120], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4384,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005997f): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059983): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005998a): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005998e): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140059991): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059998): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005999c): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400599a0): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400599a7): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400599ab): {next=c.rip+3; // xor rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400599ae): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400599b1): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400599b4): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400599ba): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400599c1): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400599c4): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400599c8): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400599cf): {next=c.rip+5; // mov r12, qword ptr [rsp + 0x28]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400599d4): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x68]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400599d9): {next=c.rip+5; // mov r15, qword ptr [rsp + 0x20]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400599de): {next=c.rip+4; // add rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400599e2): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400599e4): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400599e6): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400599e7): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400599e8): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400599e9): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x1400599ea): {next=c.rip+5; // mov edx, 0x54485254
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x54485254)}));
c.rip=next;return true;}
case UINT64_C(0x1400599ef): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400599f2): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffef939);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400599f7): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x1400599f8): {next=c.rip+5; // mov edx, 0x43414e59
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x43414e59)}));
c.rip=next;return true;}
case UINT64_C(0x1400599fd): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059a00): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffef92b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140059a05): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140059a10): {next=c.rip+2; // push r12
m.push(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059a12): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059a14): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059a16): {next=c.rip+4; // sub rsp, 0x40
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x40)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140059a1a): {next=c.rip+7; // movsxd rax, dword ptr [rcx + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,1,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140059a21): {next=c.rip+3; // mov r14, rcx
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059a24): {next=c.rip+3; // mov r13d, edx
m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059a27): {next=c.rip+10; // movabs rcx, 0x4328aeb5b475ce75
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4328aeb5b475ce75)}));
c.rip=next;return true;}
case UINT64_C(0x140059a31): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059a35): {next=c.rip+10; // movabs rcx, 0xe171247e35ab4a4a
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xe171247e35ab4a4a)}));
c.rip=next;return true;}
case UINT64_C(0x140059a3f): {next=c.rip+3; // mov r12, r8
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059a42): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059a49): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059a4e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059a53): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140059a5a): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059a5e): {next=c.rip+10; // movabs rcx, 0x7b9ba20b6e0c65f
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7b9ba20b6e0c65f)}));
c.rip=next;return true;}
case UINT64_C(0x140059a68): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059a6f): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059a74): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059a79): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140059a80): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059a84): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059a8b): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059a90): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059a95): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11c8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4552,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059a9c): {next=c.rip+4; // shr rax, 0xd
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0xd)},1);
c.rip=next;return true;}
case UINT64_C(0x140059aa0): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059aa3): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059aa7): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059aaa): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140059ab4): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059ab8): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140059ac2): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059ac5): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059ac9): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059acc): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059ad0): {next=c.rip+10; // movabs rax, 0x51e562d73f7c18f2
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x51e562d73f7c18f2)}));
c.rip=next;return true;}
case UINT64_C(0x140059ada): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059add): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059ae1): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059ae4): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059ae7): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11c8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4552,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059aee): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140059af1): {next=c.rip+7; // mov qword ptr [r14 + 0x11c8], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,4552,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059af8): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059afb): {next=c.rip+5; // call 0x14004a3d0
{uint64_t target=next+UINT64_C(0xffffffffffff08d0);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140059b00): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11c8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4552,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059b07): {next=c.rip+3; // test r13d, r13d
m.logic(m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x140059b0a): {next=c.rip+6; // jns 0x14005a6cc
if(m.condition(11))next=next+UINT64_C(0xbbc);
c.rip=next;return true;}
case UINT64_C(0x140059b10): {next=c.rip+7; // cmp qword ptr [r14 + 0x1058], r12
m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4184,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140059b17): {next=c.rip+6; // jne 0x14005a6da
if(m.condition(1))next=next+UINT64_C(0xbbd);
c.rip=next;return true;}
case UINT64_C(0x140059b1d): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140059b24): {next=c.rip+10; // movabs rcx, 0xf0ff84fb779c31d7
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf0ff84fb779c31d7)}));
c.rip=next;return true;}
case UINT64_C(0x140059b2e): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059b32): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059b35): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059b3c): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059b41): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059b46): {next=c.rip+5; // call 0x140049ee0
{uint64_t target=next+UINT64_C(0xffffffffffff0395);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140059b4b): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x140059b4d): {next=c.rip+6; // jne 0x14005a6c1
if(m.condition(1))next=next+UINT64_C(0xb6e);
c.rip=next;return true;}
case UINT64_C(0x140059b53): {next=c.rip+7; // cmp dword ptr [r14 + 0x4b8], eax
m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1208,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140059b5a): {next=c.rip+6; // jne 0x14005a6c1
if(m.condition(1))next=next+UINT64_C(0xb61);
c.rip=next;return true;}
case UINT64_C(0x140059b60): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x10d0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059b67): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1140]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059b6f): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059b72): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059b79): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059b80): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059b87): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059b8b): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059b90): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059b97): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059b9a): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rbp
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059b9f): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059ba2): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059ba7): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x1188]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059bae): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059bb1): {next=c.rip+3; // sub r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140059bb4): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059bb9): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059bc1): {next=c.rip+10; // movabs rbp, 0x2545f4914f6cdd1d
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140059bcb): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140059bce): {next=c.rip+5; // mov qword ptr [rsp + 0x20], r15
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059bd3): {next=c.rip+10; // movabs r15, 0x9e3779b97f4a7c15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140059bdd): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059be1): {next=c.rip+3; // inc rsi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140059be4): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059be8): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rsi
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059bef): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059bf2): {next=c.rip+3; // add r9, rbp
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140059bf5): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059bfc): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059bff): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140059c03): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059c06): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059c0d): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059c11): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059c14): {next=c.rip+3; // xor rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059c17): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059c1a): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140059c1d): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059c21): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059c25): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059c2c): {next=c.rip+7; // cmp r8d, 0x14b3da
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x14b3da)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140059c33): {next=c.rip+6; // jne 0x14005a6a8
if(m.condition(1))next=next+UINT64_C(0xa6f);
c.rip=next;return true;}
case UINT64_C(0x140059c39): {next=c.rip+3; // mov eax, r13d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059c3c): {next=c.rip+4; // btr eax, 0x1f
m.bitop(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)},false);
c.rip=next;return true;}
case UINT64_C(0x140059c40): {next=c.rip+3; // cmp eax, 2
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140059c43): {next=c.rip+2; // jae 0x140059c8f
if(m.condition(3))next=next+UINT64_C(0x4a);
c.rip=next;return true;}
case UINT64_C(0x140059c45): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059c49): {next=c.rip+4; // lea rax, [rsi + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059c4d): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059c54): {next=c.rip+3; // add r9, rbp
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140059c57): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059c5e): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140059c62): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059c66): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059c6d): {next=c.rip+4; // imul rax, r10
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059c71): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059c74): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059c77): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059c7a): {next=c.rip+6; // add rax, 0x3edeff
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3edeff)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140059c80): {next=c.rip+7; // xor rcx, 0x3edeff
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3edeff)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059c87): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140059c8a): {next=c.rip+5; // jmp 0x14005a69d
next=next+UINT64_C(0xa0e);
c.rip=next;return true;}
case UINT64_C(0x140059c8f): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059c92): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffefed9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140059c97): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059c9f): {next=c.rip+10; // movabs rbx, 0xff51afd7ed558ccd
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140059ca9): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x930]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059cb0): {next=c.rip+10; // movabs r8, 0xc4ceb9fe1a85ec53
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140059cba): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059cc1): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10b0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059cc8): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059cd0): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059cd2): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059cd5): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059cd8): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059cdc): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059cdf): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059ce3): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059ce6): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059cea): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059ced): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059cf1): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059cf4): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059cf8): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059cfb): {next=c.rip+7; // mov qword ptr [r14 + 0x930], rdx
m.put(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059d02): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059d09): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x948]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059d10): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059d13): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059d17): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059d1a): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059d1e): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059d21): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059d25): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059d28): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059d2c): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059d2f): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059d33): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059d36): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059d3d): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1118]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059d44): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1149]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059d4c): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059d53): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059d57): {next=c.rip+4; // lea rbx, [rax + rax*4]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059d5b): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059d5e): {next=c.rip+3; // add rbx, rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140059d61): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059d64): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059d67): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059d6a): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140059d6d): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140059d70): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059d74): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059d7b): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140059d82): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059d86): {next=c.rip+3; // add rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140059d89): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059d90): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140059d94): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059d98): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059d9f): {next=c.rip+4; // imul r8, r11
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059da3): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059da6): {next=c.rip+3; // xor r8, r10
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059da9): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059dac): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059daf): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140059db2): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059db6): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059dba): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059dbd): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059dc4): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffff25f7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140059dc9): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059dd0): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059dd7): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059ddf): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059de6): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1110]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059ded): {next=c.rip+4; // lea r11, [rax + rax*8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059df1): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059df9): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059dfc): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059e00): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059e03): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059e06): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059e09): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140059e0c): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140059e0f): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059e13): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059e1a): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140059e21): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059e24): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059e28): {next=c.rip+3; // add rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140059e2b): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059e32): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140059e36): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059e3a): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059e41): {next=c.rip+4; // imul r8, r10
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059e45): {next=c.rip+3; // xor r8, r11
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059e48): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059e4b): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059e4e): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140059e51): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059e55): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059e59): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059e5c): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059e63): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffff2558);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140059e68): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059e6b): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffefd00);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140059e70): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140059e77): {next=c.rip+2; // jae 0x140059e83
if(m.condition(3))next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x140059e79): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059e7b): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059e7e): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffff253d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140059e83): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x10c0]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059e8a): {next=c.rip+7; // mov rbp, qword ptr [r14 + 0x10b0]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059e91): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x1110]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059e98): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059ea0): {next=c.rip+3; // mov rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059ea3): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059eab): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059eb2): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059eb9): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x1180]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059ec0): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059ec4): {next=c.rip+4; // lea r9, [rbx + rbx*8]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059ec8): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059ecb): {next=c.rip+3; // xor rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059ece): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059ed1): {next=c.rip+3; // sub r11, rcx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140059ed4): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140059ed7): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140059ee1): {next=c.rip+4; // cmove r11, rax
if(m.condition(0))m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059ee5): {next=c.rip+4; // imul r10, r15
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059ee9): {next=c.rip+3; // add r10, rcx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140059eec): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059eef): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059ef2): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140059ef6): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059ef9): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059f00): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059f04): {next=c.rip+3; // xor rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059f07): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059f0a): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059f0d): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140059f10): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059f14): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059f18): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059f1b): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059f22): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140059f2c): {next=c.rip+4; // imul r10, r15
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059f30): {next=c.rip+3; // add r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140059f33): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059f37): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059f3e): {next=c.rip+6; // mov r8d, 0xd516
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xd516)}));
c.rip=next;return true;}
case UINT64_C(0x140059f44): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r10
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059f4b): {next=c.rip+4; // lea rax, [rbx + rbx*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059f4f): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140059f52): {next=c.rip+4; // shr r10, 0x1b
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140059f56): {next=c.rip+4; // movzx edx, r10b
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059f5a): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059f61): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059f65): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059f68): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059f6b): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059f6e): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140059f71): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059f75): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059f79): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059f7c): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059f83): {next=c.rip+8; // movzx edx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059f8b): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x230]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059f92): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xffffffffffff3059);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140059f97): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x230]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059f9e): {next=c.rip+10; // movabs rdi, 0xff51afd7ed558ccd
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140059fa8): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059fab): {next=c.rip+10; // movabs rsi, 0xc4ceb9fe1a85ec53
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140059fb5): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059fbc): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059fbf): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059fc3): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059fc6): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059fca): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059fcd): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059fd1): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140059fd4): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059fd8): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059fdb): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140059fdf): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140059fe1): {next=c.rip+3; // lea eax, [rdx + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059fe4): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059fe6): {next=c.rip+2; // xor eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140059fe8): {next=c.rip+3; // imul ecx, edx
m.imul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140059feb): {next=c.rip+2; // not ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140059fed): {next=c.rip+2; // and ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140059fef): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140059ff2): {next=c.rip+2; // je 0x14005a065
if(m.condition(0))next=next+UINT64_C(0x71);
c.rip=next;return true;}
case UINT64_C(0x140059ff4): {next=c.rip+4; // and r8b, 3
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3)}),8));
c.rip=next;return true;}
case UINT64_C(0x140059ff8): {next=c.rip+4; // cmp r8b, 1
m.arithmetic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140059ffc): {next=c.rip+2; // jne 0x14005a065
if(m.condition(1))next=next+UINT64_C(0x67);
c.rip=next;return true;}
case UINT64_C(0x140059ffe): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a005): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14005a00f): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005a016): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a01a): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a01d): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a024): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a028): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a02b): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a032): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a03a): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a041): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a048): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a04b): {next=c.rip+6; // add rax, 0x15c9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x15c9)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a051): {next=c.rip+7; // xor rcx, 0x15c9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x15c9)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a058): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14005a060): {next=c.rip+5; // jmp 0x14005a69d
next=next+UINT64_C(0x638);
c.rip=next;return true;}
case UINT64_C(0x14005a065): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a068): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffefb03);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005a06d): {next=c.rip+2; // mov ebx, eax
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a06f): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14005a076): {next=c.rip+2; // jb 0x14005a0df
if(m.condition(2))next=next+UINT64_C(0x67);
c.rip=next;return true;}
case UINT64_C(0x14005a078): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a07f): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14005a089): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005a090): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a094): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a097): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a09e): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a0a2): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a0a5): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a0ac): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a0b4): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a0bb): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a0c2): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a0c5): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a0cb): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a0d2): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14005a0da): {next=c.rip+5; // jmp 0x14005a69d
next=next+UINT64_C(0x5be);
c.rip=next;return true;}
case UINT64_C(0x14005a0df): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a0e1): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a0e4): {next=c.rip+5; // call 0x14004e0d0
{uint64_t target=next+UINT64_C(0xffffffffffff3fe7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005a0e9): {next=c.rip+7; // movsxd rcx, dword ptr [r14 + 0x928]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005a0f0): {next=c.rip+10; // movabs r8, 0xd6e8feb86659fd93
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14005a0fa): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a101): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a104): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a108): {next=c.rip+4; // imul rcx, r15
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a10c): {next=c.rip+4; // rol rdx, 0x11
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x14005a110): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a113): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x700]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a11a): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a11d): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a120): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a124): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a127): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a12b): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a12e): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a132): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a135): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a139): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a13c): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a140): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a143): {next=c.rip+3; // mov r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a146): {next=c.rip+4; // shr r10, 0x1d
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a14a): {next=c.rip+3; // xor r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a14d): {next=c.rip+4; // or r10, 1
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a151): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a154): {next=c.rip+7; // mov qword ptr [r14 + 0x700], r10
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a15b): {next=c.rip+5; // and eax, 0x3ff
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3ff)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005a160): {next=c.rip+6; // cmp rax, 0x2c5
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2c5)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14005a166): {next=c.rip+2; // jne 0x14005a177
if(m.condition(1))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x14005a168): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a16b): {next=c.rip+5; // call 0x14007fb70
{uint64_t target=next+UINT64_C(0x25a00);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005a170): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x700]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a177): {next=c.rip+4; // movzx eax, r10b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a17b): {next=c.rip+2; // and al, 0x1f
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8));
c.rip=next;return true;}
case UINT64_C(0x14005a17d): {next=c.rip+2; // cmp al, 0x15
m.arithmetic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x15)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14005a17f): {next=c.rip+6; // jne 0x14005a26f
if(m.condition(1))next=next+UINT64_C(0xea);
c.rip=next;return true;}
case UINT64_C(0x14005a185): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005a18c): {next=c.rip+6; // xor rax, 0x5a5a
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5a5a)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a192): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x940]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a199): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a19d): {next=c.rip+4; // rol rcx, 0x11
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x14005a1a1): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a1a4): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a1a7): {next=c.rip+10; // movabs rax, 0x8f70feda99a6026d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8f70feda99a6026d)}));
c.rip=next;return true;}
case UINT64_C(0x14005a1b1): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a1b4): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a1b7): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a1bb): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a1be): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a1c2): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a1c5): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a1c9): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a1cc): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a1d0): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a1d3): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a1d7): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a1da): {next=c.rip+3; // mov r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a1dd): {next=c.rip+4; // shr r9, 0x1d
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a1e1): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a1e4): {next=c.rip+4; // or r9, 1
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a1e8): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a1eb): {next=c.rip+3; // mov rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a1ee): {next=c.rip+4; // shr rax, 8
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a1f2): {next=c.rip+3; // and eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005a1f5): {next=c.rip+4; // shr rcx, 0x28
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x28)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a1f9): {next=c.rip+4; // imul r8, rax, 0x3e
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x14005a1fd): {next=c.rip+5; // mov eax, 0x8421085
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8421085)}));
c.rip=next;return true;}
case UINT64_C(0x14005a202): {next=c.rip+2; // mul ecx
m.mul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a204): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a206): {next=c.rip+2; // sub eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14005a208): {next=c.rip+2; // shr eax, 1
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a20a): {next=c.rip+2; // add eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14005a20c): {next=c.rip+3; // shr eax, 5
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x5)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a20f): {next=c.rip+3; // imul eax, eax, 0x3e
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x14005a212): {next=c.rip+2; // sub ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14005a214): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a216): {next=c.rip+3; // add r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a219): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a220): {next=c.rip+4; // movsxd rcx, dword ptr [rax + r8*4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,8,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005a224): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005a22b): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a22e): {next=c.rip+7; // add rcx, qword ptr [r14 + 0x4e0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a235): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a238): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a23b): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a23f): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a242): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a246): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a249): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a24d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a250): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a254): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a257): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a25b): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a25e): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a261): {next=c.rip+7; // inc qword ptr [r14 + 0x708]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005a268): {next=c.rip+7; // mov qword ptr [r14 + 0x700], rax
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a26f): {next=c.rip+7; // inc dword ptr [r14 + 0x75c]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005a276): {next=c.rip+7; // mov eax, dword ptr [r14 + 0x75c]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a27d): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x758]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1880,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14005a284): {next=c.rip+2; // jb 0x14005a299
if(m.condition(2))next=next+UINT64_C(0x13);
c.rip=next;return true;}
case UINT64_C(0x14005a286): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a289): {next=c.rip+11; // mov dword ptr [r14 + 0x75c], 0
m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a294): {next=c.rip+5; // call 0x14004b250
{uint64_t target=next+UINT64_C(0xffffffffffff0fb7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005a299): {next=c.rip+3; // mov r8d, ebx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a29c): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a29e): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a2a1): {next=c.rip+5; // call 0x14004c110
{uint64_t target=next+UINT64_C(0xffffffffffff1e6a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005a2a6): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005a2ad): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14005a2b7): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a2be): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x1188]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a2c5): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a2c9): {next=c.rip+3; // add r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a2cc): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a2d3): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a2d6): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a2da): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a2dd): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a2e4): {next=c.rip+7; // mov rdi, qword ptr [r14 + 0x10c0]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a2eb): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a2f2): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x10b0]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a2f9): {next=c.rip+8; // movzx r15d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a301): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a305): {next=c.rip+4; // lea rax, [r11 + r11*8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,11,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a309): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a30c): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a30f): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a312): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a315): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005a318): {next=c.rip+4; // lea rax, [rdx + rbx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a31c): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a320): {next=c.rip+3; // inc r10
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005a323): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a32a): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x8f8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a331): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x730]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a338): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r10
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a33d): {next=c.rip+5; // movzx r8d, byte ptr [rcx + rbx]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a342): {next=c.rip+4; // xor r8b, byte ptr [rax + rbx]
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,8,0,0,3,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14005a346): {next=c.rip+2; // inc ebx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005a348): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], r10
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a34f): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14005a359): {next=c.rip+4; // imul r9, rax
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a35d): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a362): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14005a36c): {next=c.rip+3; // add r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a36f): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a372): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a376): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a379): {next=c.rip+4; // lea rax, [r11 + r11]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,11,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a37d): {next=c.rip+7; // mov byte ptr [r14 + 0x1141], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a384): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a388): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a38b): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a38e): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a391): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a394): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005a397): {next=c.rip+4; // lea rax, [rdx + rbx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a39b): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a39f): {next=c.rip+7; // mov qword ptr [r14 + 0x10d8], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a3a6): {next=c.rip+7; // movsxd rdx, dword ptr [r14 + 0x928]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005a3ad): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x940]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a3b4): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a3b7): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x238]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a3be): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a3c1): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a3c4): {next=c.rip+10; // movabs rbx, 0xff51afd7ed558ccd
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14005a3ce): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x230]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a3d5): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a3d8): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a3dc): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a3df): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a3e3): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a3e6): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a3ea): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a3ed): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005a3f7): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a3fb): {next=c.rip+4; // movzx eax, r8b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a3ff): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a402): {next=c.rip+4; // shr rbx, 0x21
m.shift(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a406): {next=c.rip+3; // xor rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a409): {next=c.rip+7; // lea rcx, [rip - 0x5a410]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-369680,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a410): {next=c.rip+6; // xor rax, 0x93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x93)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a416): {next=c.rip+7; // mov qword ptr [r14 + 0x948], rbx
m.put(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a41d): {next=c.rip+8; // movzx ebp, byte ptr [rax + rcx + 0x3e3660]
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,1,1,0,4077152,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a425): {next=c.rip+4; // xor bpl, 0x27
m.put(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x27)}),8));
c.rip=next;return true;}
case UINT64_C(0x14005a429): {next=c.rip+10; // movabs r8, 0xff51afd7ed558ccd
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14005a433): {next=c.rip+2; // inc edx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005a435): {next=c.rip+7; // mov dword ptr [r14 + 0x928], edx
m.put(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a43c): {next=c.rip+3; // test dl, 0x1f
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005a43f): {next=c.rip+2; // jne 0x14005a485
if(m.condition(1))next=next+UINT64_C(0x44);
c.rip=next;return true;}
case UINT64_C(0x14005a441): {next=c.rip+3; // movsxd rax, edx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005a444): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a447): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x230]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a44e): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a451): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a455): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a458): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005a462): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a466): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a469): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a46d): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a470): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a474): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a477): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a47b): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a47e): {next=c.rip+7; // mov qword ptr [r14 + 0x230], rax
m.put(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a485): {next=c.rip+4; // movzx edx, bpl
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a489): {next=c.rip+3; // xor r10, rdx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a48c): {next=c.rip+7; // mov byte ptr [r14 + 0x11a4], bpl
m.put(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a493): {next=c.rip+5; // xor r10, qword ptr [rsp + 0x60]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a498): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a49b): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a49f): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a4a2): {next=c.rip+10; // movabs r10, 0x9e3779b97f4a7c15
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14005a4ac): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a4b0): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a4b4): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a4b8): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a4bb): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a4bf): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a4c2): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005a4cc): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a4d0): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a4d3): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a4d7): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a4da): {next=c.rip+7; // mov ecx, dword ptr [r14 + 0x8bc]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,2236,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a4e1): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a4e8): {next=c.rip+10; // movabs rax, 0xd6e8feb86659fd93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14005a4f2): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a4f6): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a4f9): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a4fc): {next=c.rip+10; // movabs rbx, 0x2545f4914f6cdd1d
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14005a506): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a509): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a50c): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a510): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a513): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a517): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a51a): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a51e): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a521): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005a52b): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a52f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a534): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a538): {next=c.rip+3; // and edx, 3
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005a53b): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005a53e): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a545): {next=c.rip+4; // cmp bpl, 0x3e
m.arithmetic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3e)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14005a549): {next=c.rip+6; // jae 0x14005a5e1
if(m.condition(3))next=next+UINT64_C(0x92);
c.rip=next;return true;}
case UINT64_C(0x14005a54f): {next=c.rip+7; // inc qword ptr [r14 + 0x1088]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005a556): {next=c.rip+7; // lea rax, [rip - 0x5a55d]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-370013,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a55d): {next=c.rip+8; // mov r8d, dword ptr [rax + rdx*4 + 0x3e0490]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,0,2,4,0,4064400,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a565): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a56c): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a570): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a574): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a57b): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a57f): {next=c.rip+2; // mov ebx, edx
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a581): {next=c.rip+3; // xor rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a584): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a587): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a58a): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a58d): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a590): {next=c.rip+4; // movzx r8d, bpl
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a594): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005a597): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a59b): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a59e): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a5a5): {next=c.rip+5; // call 0x14004da40
{uint64_t target=next+UINT64_C(0xffffffffffff3496);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005a5aa): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a5ac): {next=c.rip+4; // lea edx, [r13 - 1]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,13,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a5b0): {next=c.rip+4; // imul rcx, rbx, 0x3e
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x14005a5b4): {next=c.rip+3; // mov r8, r12
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a5b7): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a5ba): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a5c1): {next=c.rip+4; // movsxd r9, dword ptr [rax + rcx*4]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,1,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005a5c5): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a5c8): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005a5cf): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a5d2): {next=c.rip+7; // add r9, qword ptr [r14 + 0x4e0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a5d9): {next=c.rip+3; // call r9
{uint64_t target=m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005a5dc): {next=c.rip+5; // jmp 0x14005a6a8
next=next+UINT64_C(0xc7);
c.rip=next;return true;}
case UINT64_C(0x14005a5e1): {next=c.rip+7; // inc dword ptr [r14 + 0x1090]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005a5e8): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a5eb): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a5ef): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a5f2): {next=c.rip+8; // lea rax, [r11*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,-1,11,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a5fa): {next=c.rip+7; // mov byte ptr [r14 + 0x1143], cl
m.put(Operand{2,0,8,0,14,-1,1,0,4419,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a601): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a605): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a609): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a60c): {next=c.rip+3; // xor rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a60f): {next=c.rip+7; // mov qword ptr [r14 + 0x10e8], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,4328,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a616): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a61d): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a620): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a623): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a627): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a62a): {next=c.rip+7; // mov byte ptr [r14 + 0x114a], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4426,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a631): {next=c.rip+4; // imul rax, r11, 0xb
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb)});
c.rip=next;return true;}
case UINT64_C(0x14005a635): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a639): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a63c): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a63f): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a642): {next=c.rip+4; // xor rcx, 1
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a646): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005a649): {next=c.rip+4; // lea rax, [rdx + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a64d): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a651): {next=c.rip+7; // mov qword ptr [r14 + 0x1120], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4384,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a658): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a65c): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a663): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a667): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a66a): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a671): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a675): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a679): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a680): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a684): {next=c.rip+3; // xor rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a687): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a68a): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a68d): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a693): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a69a): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005a69d): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a6a1): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a6a8): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x28]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a6ad): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x30]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a6b2): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x38]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a6b7): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x68]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a6bc): {next=c.rip+5; // mov r15, qword ptr [rsp + 0x20]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a6c1): {next=c.rip+4; // add rsp, 0x40
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x40)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a6c5): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14005a6c7): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14005a6c9): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14005a6cb): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14005a6cc): {next=c.rip+5; // mov edx, 0x54485254
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x54485254)}));
c.rip=next;return true;}
case UINT64_C(0x14005a6d1): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a6d4): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffeec57);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005a6d9): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14005a6da): {next=c.rip+5; // mov edx, 0x43414e59
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x43414e59)}));
c.rip=next;return true;}
case UINT64_C(0x14005a6df): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a6e2): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffeec49);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005a6e7): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14005a6f0): {next=c.rip+2; // push r12
m.push(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a6f2): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a6f4): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a6f6): {next=c.rip+4; // sub rsp, 0x40
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x40)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14005a6fa): {next=c.rip+7; // movsxd rax, dword ptr [rcx + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,1,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005a701): {next=c.rip+3; // mov r14, rcx
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a704): {next=c.rip+3; // mov r13d, edx
m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a707): {next=c.rip+10; // movabs rcx, 0x58c3bfd0829beec2
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x58c3bfd0829beec2)}));
c.rip=next;return true;}
case UINT64_C(0x14005a711): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a715): {next=c.rip+10; // movabs rcx, 0xfa9a351b03456afd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xfa9a351b03456afd)}));
c.rip=next;return true;}
case UINT64_C(0x14005a71f): {next=c.rip+3; // mov r12, r8
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a722): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a729): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a72e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a733): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005a73a): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a73e): {next=c.rip+10; // movabs rcx, 0x1c52ab45800ee6e8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1c52ab45800ee6e8)}));
c.rip=next;return true;}
case UINT64_C(0x14005a748): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a74f): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a754): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a759): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005a760): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a764): {next=c.rip+10; // movabs rcx, 0x17a8068677b34386
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x17a8068677b34386)}));
c.rip=next;return true;}
case UINT64_C(0x14005a76e): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a775): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a77a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a77f): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11c8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4552,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a786): {next=c.rip+3; // sub rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14005a789): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a78c): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a790): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a793): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14005a79d): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a7a1): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005a7ab): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a7ae): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a7b2): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a7b5): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a7b8): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a7bc): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a7bf): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a7c3): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a7c6): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11c8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4552,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a7cd): {next=c.rip+4; // or rdx, 1
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a7d1): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a7d4): {next=c.rip+7; // mov qword ptr [r14 + 0x11c8], rdx
m.put(Operand{2,0,64,0,14,-1,1,0,4552,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a7db): {next=c.rip+5; // call 0x14004a3d0
{uint64_t target=next+UINT64_C(0xfffffffffffefbf0);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005a7e0): {next=c.rip+7; // mov rdx, 0xffffffffffffffff
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xffffffffffffffff)}));
c.rip=next;return true;}
case UINT64_C(0x14005a7e7): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a7ea): {next=c.rip+3; // sub rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14005a7ed): {next=c.rip+5; // call 0x14004a2b0
{uint64_t target=next+UINT64_C(0xfffffffffffefabe);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005a7f2): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11c8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4552,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a7f9): {next=c.rip+3; // test r13d, r13d
m.logic(m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14005a7fc): {next=c.rip+6; // jns 0x14005b3be
if(m.condition(11))next=next+UINT64_C(0xbbc);
c.rip=next;return true;}
case UINT64_C(0x14005a802): {next=c.rip+7; // cmp qword ptr [r14 + 0x1058], r12
m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4184,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14005a809): {next=c.rip+6; // jne 0x14005b3cc
if(m.condition(1))next=next+UINT64_C(0xbbd);
c.rip=next;return true;}
case UINT64_C(0x14005a80f): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005a816): {next=c.rip+10; // movabs rcx, 0xa331c22fe25f8c26
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xa331c22fe25f8c26)}));
c.rip=next;return true;}
case UINT64_C(0x14005a820): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a824): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a827): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a82e): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a833): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a838): {next=c.rip+5; // call 0x140049ee0
{uint64_t target=next+UINT64_C(0xfffffffffffef6a3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005a83d): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14005a83f): {next=c.rip+6; // jne 0x14005b3b3
if(m.condition(1))next=next+UINT64_C(0xb6e);
c.rip=next;return true;}
case UINT64_C(0x14005a845): {next=c.rip+7; // cmp dword ptr [r14 + 0x4b8], eax
m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1208,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14005a84c): {next=c.rip+6; // jne 0x14005b3b3
if(m.condition(1))next=next+UINT64_C(0xb61);
c.rip=next;return true;}
case UINT64_C(0x14005a852): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x10d0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a859): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1140]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a861): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a864): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a86b): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a872): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a879): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a87d): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a882): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a889): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a88c): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rbp
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a891): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a894): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a899): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x1188]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a8a0): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a8a3): {next=c.rip+3; // sub r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14005a8a6): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a8ab): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a8b3): {next=c.rip+10; // movabs rbp, 0x2545f4914f6cdd1d
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14005a8bd): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005a8c0): {next=c.rip+5; // mov qword ptr [rsp + 0x20], r15
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a8c5): {next=c.rip+10; // movabs r15, 0x9e3779b97f4a7c15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14005a8cf): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a8d3): {next=c.rip+3; // inc rsi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005a8d6): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a8da): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rsi
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a8e1): {next=c.rip+3; // add r9, rbp
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a8e4): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a8eb): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a8ee): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a8f2): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a8f5): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a8fc): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a900): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a903): {next=c.rip+3; // xor rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a906): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a909): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a90c): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005a90f): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a913): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a917): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a91e): {next=c.rip+7; // cmp r8d, 0x2a7d9c
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2a7d9c)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14005a925): {next=c.rip+6; // jne 0x14005b39a
if(m.condition(1))next=next+UINT64_C(0xa6f);
c.rip=next;return true;}
case UINT64_C(0x14005a92b): {next=c.rip+3; // mov eax, r13d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a92e): {next=c.rip+4; // btr eax, 0x1f
m.bitop(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)},false);
c.rip=next;return true;}
case UINT64_C(0x14005a932): {next=c.rip+3; // cmp eax, 2
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14005a935): {next=c.rip+2; // jae 0x14005a981
if(m.condition(3))next=next+UINT64_C(0x4a);
c.rip=next;return true;}
case UINT64_C(0x14005a937): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a93b): {next=c.rip+4; // lea rax, [rsi + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a93f): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a946): {next=c.rip+3; // add r9, rbp
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a949): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a950): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a954): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a958): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a95f): {next=c.rip+4; // imul rax, r10
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a963): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a966): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a969): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a96c): {next=c.rip+6; // add rax, 0xcaa88
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xcaa88)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005a972): {next=c.rip+7; // xor rcx, 0xcaa88
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xcaa88)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a979): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005a97c): {next=c.rip+5; // jmp 0x14005b38f
next=next+UINT64_C(0xa0e);
c.rip=next;return true;}
case UINT64_C(0x14005a981): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a984): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffef1e7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005a989): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a991): {next=c.rip+10; // movabs rbx, 0xff51afd7ed558ccd
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14005a99b): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x930]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a9a2): {next=c.rip+10; // movabs r8, 0xc4ceb9fe1a85ec53
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005a9ac): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a9b3): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10b0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a9ba): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a9c2): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a9c4): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a9c7): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a9ca): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a9ce): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a9d1): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a9d5): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a9d8): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a9dc): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a9df): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005a9e3): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a9e6): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005a9ea): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a9ed): {next=c.rip+7; // mov qword ptr [r14 + 0x930], rdx
m.put(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005a9f4): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005a9fb): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x948]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aa02): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aa05): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005aa09): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aa0c): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005aa10): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aa13): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005aa17): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aa1a): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005aa1e): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aa21): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005aa25): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aa28): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aa2f): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1118]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aa36): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1149]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aa3e): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aa45): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005aa49): {next=c.rip+4; // lea rbx, [rax + rax*4]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aa4d): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aa50): {next=c.rip+3; // add rbx, rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005aa53): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aa56): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aa59): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aa5c): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14005aa5f): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005aa62): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aa66): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aa6d): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005aa74): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005aa78): {next=c.rip+3; // add rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005aa7b): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aa82): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005aa86): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aa8a): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aa91): {next=c.rip+4; // imul r8, r11
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005aa95): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aa98): {next=c.rip+3; // xor r8, r10
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aa9b): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aa9e): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aaa1): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005aaa4): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aaa8): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aaac): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aaaf): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aab6): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffff1905);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005aabb): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aac2): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aac9): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aad1): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aad8): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1110]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aadf): {next=c.rip+4; // lea r11, [rax + rax*8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aae3): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aaeb): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aaee): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005aaf2): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aaf5): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aaf8): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aafb): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14005aafe): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005ab01): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab05): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab0c): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005ab13): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005ab17): {next=c.rip+3; // add rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005ab1a): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab21): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005ab25): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab29): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab30): {next=c.rip+4; // imul r8, r10
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005ab34): {next=c.rip+3; // xor r8, r11
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ab37): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ab3a): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab3d): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ab40): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005ab43): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab47): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab4b): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab4e): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab55): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffff1866);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005ab5a): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab5d): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffef00e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005ab62): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14005ab69): {next=c.rip+2; // jae 0x14005ab75
if(m.condition(3))next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x14005ab6b): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab6d): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab70): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffff184b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005ab75): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x10c0]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab7c): {next=c.rip+7; // mov rbp, qword ptr [r14 + 0x10b0]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab83): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x1110]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab8a): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab92): {next=c.rip+3; // mov rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab95): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ab9d): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aba4): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005abab): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x1180]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005abb2): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005abb6): {next=c.rip+4; // lea r9, [rbx + rbx*8]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005abba): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005abbd): {next=c.rip+3; // xor rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005abc0): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005abc3): {next=c.rip+3; // sub r11, rcx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14005abc6): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005abc9): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14005abd3): {next=c.rip+4; // cmove r11, rax
if(m.condition(0))m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005abd7): {next=c.rip+4; // imul r10, r15
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005abdb): {next=c.rip+3; // add r10, rcx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005abde): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005abe1): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005abe4): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005abe8): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005abeb): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005abf2): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005abf6): {next=c.rip+3; // xor rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005abf9): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005abfc): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005abff): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005ac02): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac06): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac0a): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac0d): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac14): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac1e): {next=c.rip+4; // imul r10, r15
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005ac22): {next=c.rip+3; // add r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005ac25): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac29): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac30): {next=c.rip+6; // mov r8d, 0x61f5
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x61f5)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac36): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r10
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac3d): {next=c.rip+4; // lea rax, [rbx + rbx*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac41): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005ac44): {next=c.rip+4; // shr r10, 0x1b
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005ac48): {next=c.rip+4; // movzx edx, r10b
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac4c): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac53): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005ac57): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ac5a): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ac5d): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ac60): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005ac63): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac67): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac6b): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac6e): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac75): {next=c.rip+8; // movzx edx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac7d): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x230]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ac84): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xffffffffffff2367);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005ac89): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x230]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac90): {next=c.rip+10; // movabs rdi, 0xff51afd7ed558ccd
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac9a): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ac9d): {next=c.rip+10; // movabs rsi, 0xc4ceb9fe1a85ec53
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005aca7): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005acae): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005acb1): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005acb5): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005acb8): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005acbc): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005acbf): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005acc3): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005acc6): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005acca): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005accd): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005acd1): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005acd3): {next=c.rip+3; // lea eax, [rdx + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005acd6): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005acd8): {next=c.rip+2; // xor eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005acda): {next=c.rip+3; // imul ecx, edx
m.imul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005acdd): {next=c.rip+2; // not ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005acdf): {next=c.rip+2; // and ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005ace1): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005ace4): {next=c.rip+2; // je 0x14005ad57
if(m.condition(0))next=next+UINT64_C(0x71);
c.rip=next;return true;}
case UINT64_C(0x14005ace6): {next=c.rip+4; // and r8b, 3
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3)}),8));
c.rip=next;return true;}
case UINT64_C(0x14005acea): {next=c.rip+4; // cmp r8b, 1
m.arithmetic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14005acee): {next=c.rip+2; // jne 0x14005ad57
if(m.condition(1))next=next+UINT64_C(0x67);
c.rip=next;return true;}
case UINT64_C(0x14005acf0): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005acf7): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14005ad01): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005ad08): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005ad0c): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005ad0f): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ad16): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005ad1a): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ad1d): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ad24): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005ad2c): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ad33): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ad3a): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ad3d): {next=c.rip+6; // add rax, 0x38f6c0
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38f6c0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005ad43): {next=c.rip+7; // xor rcx, 0x38f6c0
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38f6c0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ad4a): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14005ad52): {next=c.rip+5; // jmp 0x14005b38f
next=next+UINT64_C(0x638);
c.rip=next;return true;}
case UINT64_C(0x14005ad57): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ad5a): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffeee11);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005ad5f): {next=c.rip+2; // mov ebx, eax
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ad61): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14005ad68): {next=c.rip+2; // jb 0x14005add1
if(m.condition(2))next=next+UINT64_C(0x67);
c.rip=next;return true;}
case UINT64_C(0x14005ad6a): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ad71): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14005ad7b): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005ad82): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005ad86): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005ad89): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ad90): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005ad94): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ad97): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ad9e): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005ada6): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005adad): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005adb4): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005adb7): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005adbd): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005adc4): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14005adcc): {next=c.rip+5; // jmp 0x14005b38f
next=next+UINT64_C(0x5be);
c.rip=next;return true;}
case UINT64_C(0x14005add1): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005add3): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005add6): {next=c.rip+5; // call 0x14004e0d0
{uint64_t target=next+UINT64_C(0xffffffffffff32f5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005addb): {next=c.rip+7; // movsxd rcx, dword ptr [r14 + 0x928]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005ade2): {next=c.rip+10; // movabs r8, 0xd6e8feb86659fd93
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14005adec): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005adf3): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005adf6): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005adfa): {next=c.rip+4; // imul rcx, r15
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005adfe): {next=c.rip+4; // rol rdx, 0x11
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x14005ae02): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ae05): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x700]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ae0c): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ae0f): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ae12): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005ae16): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ae19): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005ae1d): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ae20): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005ae24): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ae27): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005ae2b): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ae2e): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005ae32): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ae35): {next=c.rip+3; // mov r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ae38): {next=c.rip+4; // shr r10, 0x1d
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14005ae3c): {next=c.rip+3; // xor r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ae3f): {next=c.rip+4; // or r10, 1
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ae43): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ae46): {next=c.rip+7; // mov qword ptr [r14 + 0x700], r10
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ae4d): {next=c.rip+5; // and eax, 0x3ff
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3ff)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005ae52): {next=c.rip+6; // cmp rax, 0x2c5
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2c5)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14005ae58): {next=c.rip+2; // jne 0x14005ae69
if(m.condition(1))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x14005ae5a): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ae5d): {next=c.rip+5; // call 0x14007fb70
{uint64_t target=next+UINT64_C(0x24d0e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005ae62): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x700]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ae69): {next=c.rip+4; // movzx eax, r10b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ae6d): {next=c.rip+2; // and al, 0x1f
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8));
c.rip=next;return true;}
case UINT64_C(0x14005ae6f): {next=c.rip+2; // cmp al, 0x15
m.arithmetic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x15)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14005ae71): {next=c.rip+6; // jne 0x14005af61
if(m.condition(1))next=next+UINT64_C(0xea);
c.rip=next;return true;}
case UINT64_C(0x14005ae77): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005ae7e): {next=c.rip+6; // xor rax, 0x5a5a
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5a5a)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ae84): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x940]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ae8b): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005ae8f): {next=c.rip+4; // rol rcx, 0x11
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x14005ae93): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ae96): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ae99): {next=c.rip+10; // movabs rax, 0x8f70feda99a6026d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8f70feda99a6026d)}));
c.rip=next;return true;}
case UINT64_C(0x14005aea3): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aea6): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aea9): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005aead): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aeb0): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005aeb4): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aeb7): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005aebb): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aebe): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005aec2): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aec5): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005aec9): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aecc): {next=c.rip+3; // mov r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aecf): {next=c.rip+4; // shr r9, 0x1d
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14005aed3): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aed6): {next=c.rip+4; // or r9, 1
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005aeda): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aedd): {next=c.rip+3; // mov rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aee0): {next=c.rip+4; // shr rax, 8
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},1);
c.rip=next;return true;}
case UINT64_C(0x14005aee4): {next=c.rip+3; // and eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005aee7): {next=c.rip+4; // shr rcx, 0x28
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x28)},1);
c.rip=next;return true;}
case UINT64_C(0x14005aeeb): {next=c.rip+4; // imul r8, rax, 0x3e
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x14005aeef): {next=c.rip+5; // mov eax, 0x8421085
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8421085)}));
c.rip=next;return true;}
case UINT64_C(0x14005aef4): {next=c.rip+2; // mul ecx
m.mul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005aef6): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aef8): {next=c.rip+2; // sub eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14005aefa): {next=c.rip+2; // shr eax, 1
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)},1);
c.rip=next;return true;}
case UINT64_C(0x14005aefc): {next=c.rip+2; // add eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14005aefe): {next=c.rip+3; // shr eax, 5
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x5)},1);
c.rip=next;return true;}
case UINT64_C(0x14005af01): {next=c.rip+3; // imul eax, eax, 0x3e
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x14005af04): {next=c.rip+2; // sub ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14005af06): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005af08): {next=c.rip+3; // add r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005af0b): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005af12): {next=c.rip+4; // movsxd rcx, dword ptr [rax + r8*4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,8,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005af16): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005af1d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005af20): {next=c.rip+7; // add rcx, qword ptr [r14 + 0x4e0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005af27): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005af2a): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005af2d): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005af31): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005af34): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005af38): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005af3b): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005af3f): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005af42): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005af46): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005af49): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005af4d): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005af50): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005af53): {next=c.rip+7; // inc qword ptr [r14 + 0x708]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005af5a): {next=c.rip+7; // mov qword ptr [r14 + 0x700], rax
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005af61): {next=c.rip+7; // inc dword ptr [r14 + 0x75c]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005af68): {next=c.rip+7; // mov eax, dword ptr [r14 + 0x75c]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005af6f): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x758]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1880,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14005af76): {next=c.rip+2; // jb 0x14005af8b
if(m.condition(2))next=next+UINT64_C(0x13);
c.rip=next;return true;}
case UINT64_C(0x14005af78): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005af7b): {next=c.rip+11; // mov dword ptr [r14 + 0x75c], 0
m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005af86): {next=c.rip+5; // call 0x14004b250
{uint64_t target=next+UINT64_C(0xffffffffffff02c5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005af8b): {next=c.rip+3; // mov r8d, ebx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005af8e): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005af90): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005af93): {next=c.rip+5; // call 0x14004c110
{uint64_t target=next+UINT64_C(0xffffffffffff1178);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005af98): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005af9f): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14005afa9): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005afb0): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x1188]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005afb7): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005afbb): {next=c.rip+3; // add r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005afbe): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005afc5): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005afc8): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005afcc): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005afcf): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005afd6): {next=c.rip+7; // mov rdi, qword ptr [r14 + 0x10c0]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005afdd): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005afe4): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x10b0]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005afeb): {next=c.rip+8; // movzx r15d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005aff3): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005aff7): {next=c.rip+4; // lea rax, [r11 + r11*8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,11,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005affb): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005affe): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b001): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b004): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b007): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005b00a): {next=c.rip+4; // lea rax, [rdx + rbx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b00e): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b012): {next=c.rip+3; // inc r10
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005b015): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b01c): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x8f8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b023): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x730]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b02a): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r10
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b02f): {next=c.rip+5; // movzx r8d, byte ptr [rcx + rbx]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b034): {next=c.rip+4; // xor r8b, byte ptr [rax + rbx]
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,8,0,0,3,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14005b038): {next=c.rip+2; // inc ebx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005b03a): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], r10
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b041): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14005b04b): {next=c.rip+4; // imul r9, rax
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b04f): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b054): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14005b05e): {next=c.rip+3; // add r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b061): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b064): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b068): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b06b): {next=c.rip+4; // lea rax, [r11 + r11]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,11,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b06f): {next=c.rip+7; // mov byte ptr [r14 + 0x1141], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b076): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b07a): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b07d): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b080): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b083): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b086): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005b089): {next=c.rip+4; // lea rax, [rdx + rbx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b08d): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b091): {next=c.rip+7; // mov qword ptr [r14 + 0x10d8], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b098): {next=c.rip+7; // movsxd rdx, dword ptr [r14 + 0x928]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005b09f): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x940]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b0a6): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b0a9): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x238]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b0b0): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b0b3): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b0b6): {next=c.rip+10; // movabs rbx, 0xff51afd7ed558ccd
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14005b0c0): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x230]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b0c7): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b0ca): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b0ce): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b0d1): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b0d5): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b0d8): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b0dc): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b0df): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005b0e9): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b0ed): {next=c.rip+4; // movzx eax, r8b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b0f1): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b0f4): {next=c.rip+4; // shr rbx, 0x21
m.shift(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b0f8): {next=c.rip+3; // xor rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b0fb): {next=c.rip+7; // lea rcx, [rip - 0x5b102]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-372994,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b102): {next=c.rip+6; // xor rax, 0x93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x93)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b108): {next=c.rip+7; // mov qword ptr [r14 + 0x948], rbx
m.put(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b10f): {next=c.rip+8; // movzx ebp, byte ptr [rax + rcx + 0x3e3660]
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,1,1,0,4077152,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b117): {next=c.rip+4; // xor bpl, 0x27
m.put(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x27)}),8));
c.rip=next;return true;}
case UINT64_C(0x14005b11b): {next=c.rip+10; // movabs r8, 0xff51afd7ed558ccd
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14005b125): {next=c.rip+2; // inc edx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005b127): {next=c.rip+7; // mov dword ptr [r14 + 0x928], edx
m.put(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b12e): {next=c.rip+3; // test dl, 0x1f
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005b131): {next=c.rip+2; // jne 0x14005b177
if(m.condition(1))next=next+UINT64_C(0x44);
c.rip=next;return true;}
case UINT64_C(0x14005b133): {next=c.rip+3; // movsxd rax, edx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005b136): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b139): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x230]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b140): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b143): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b147): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b14a): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005b154): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b158): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b15b): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b15f): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b162): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b166): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b169): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b16d): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b170): {next=c.rip+7; // mov qword ptr [r14 + 0x230], rax
m.put(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b177): {next=c.rip+4; // movzx edx, bpl
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b17b): {next=c.rip+3; // xor r10, rdx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b17e): {next=c.rip+7; // mov byte ptr [r14 + 0x11a4], bpl
m.put(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b185): {next=c.rip+5; // xor r10, qword ptr [rsp + 0x60]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b18a): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b18d): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b191): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b194): {next=c.rip+10; // movabs r10, 0x9e3779b97f4a7c15
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14005b19e): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b1a2): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b1a6): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b1aa): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b1ad): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b1b1): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b1b4): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005b1be): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b1c2): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b1c5): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b1c9): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b1cc): {next=c.rip+7; // mov ecx, dword ptr [r14 + 0x8bc]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,2236,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b1d3): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b1da): {next=c.rip+10; // movabs rax, 0xd6e8feb86659fd93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14005b1e4): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b1e8): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b1eb): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b1ee): {next=c.rip+10; // movabs rbx, 0x2545f4914f6cdd1d
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14005b1f8): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b1fb): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b1fe): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b202): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b205): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b209): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b20c): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b210): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b213): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005b21d): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b221): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b226): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b22a): {next=c.rip+3; // and edx, 3
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005b22d): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005b230): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b237): {next=c.rip+4; // cmp bpl, 0x3e
m.arithmetic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3e)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14005b23b): {next=c.rip+6; // jae 0x14005b2d3
if(m.condition(3))next=next+UINT64_C(0x92);
c.rip=next;return true;}
case UINT64_C(0x14005b241): {next=c.rip+7; // inc qword ptr [r14 + 0x1088]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005b248): {next=c.rip+7; // lea rax, [rip - 0x5b24f]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-373327,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b24f): {next=c.rip+8; // mov r8d, dword ptr [rax + rdx*4 + 0x3e0490]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,0,2,4,0,4064400,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b257): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b25e): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b262): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b266): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b26d): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b271): {next=c.rip+2; // mov ebx, edx
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b273): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b276): {next=c.rip+3; // xor rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b279): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b27c): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b27f): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b282): {next=c.rip+4; // movzx r8d, bpl
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b286): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005b289): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b28d): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b290): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b297): {next=c.rip+5; // call 0x14004da40
{uint64_t target=next+UINT64_C(0xffffffffffff27a4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005b29c): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b29e): {next=c.rip+4; // lea edx, [r13 - 1]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,13,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b2a2): {next=c.rip+4; // imul rcx, rbx, 0x3e
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x14005b2a6): {next=c.rip+3; // mov r8, r12
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b2a9): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b2ac): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b2b3): {next=c.rip+4; // movsxd r9, dword ptr [rax + rcx*4]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,1,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005b2b7): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b2ba): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005b2c1): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b2c4): {next=c.rip+7; // add r9, qword ptr [r14 + 0x4e0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b2cb): {next=c.rip+3; // call r9
{uint64_t target=m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005b2ce): {next=c.rip+5; // jmp 0x14005b39a
next=next+UINT64_C(0xc7);
c.rip=next;return true;}
case UINT64_C(0x14005b2d3): {next=c.rip+7; // inc dword ptr [r14 + 0x1090]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005b2da): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b2dd): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b2e1): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b2e4): {next=c.rip+8; // lea rax, [r11*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,-1,11,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b2ec): {next=c.rip+7; // mov byte ptr [r14 + 0x1143], cl
m.put(Operand{2,0,8,0,14,-1,1,0,4419,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b2f3): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b2f7): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b2fb): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b2fe): {next=c.rip+3; // xor rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b301): {next=c.rip+7; // mov qword ptr [r14 + 0x10e8], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,4328,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b308): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b30f): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b312): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b315): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b319): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b31c): {next=c.rip+7; // mov byte ptr [r14 + 0x114a], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4426,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b323): {next=c.rip+4; // imul rax, r11, 0xb
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb)});
c.rip=next;return true;}
case UINT64_C(0x14005b327): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b32b): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b32e): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b331): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b334): {next=c.rip+4; // xor rcx, 1
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b338): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005b33b): {next=c.rip+4; // lea rax, [rdx + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b33f): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b343): {next=c.rip+7; // mov qword ptr [r14 + 0x1120], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4384,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b34a): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b34e): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b355): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b359): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b35c): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b363): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b367): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b36b): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b372): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b376): {next=c.rip+3; // xor rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b379): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b37c): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b37f): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b385): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b38c): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005b38f): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b393): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b39a): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x28]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b39f): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x30]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b3a4): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x38]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b3a9): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x68]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b3ae): {next=c.rip+5; // mov r15, qword ptr [rsp + 0x20]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b3b3): {next=c.rip+4; // add rsp, 0x40
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x40)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b3b7): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14005b3b9): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14005b3bb): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14005b3bd): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14005b3be): {next=c.rip+5; // mov edx, 0x54485254
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x54485254)}));
c.rip=next;return true;}
case UINT64_C(0x14005b3c3): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b3c6): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffedf65);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005b3cb): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14005b3cc): {next=c.rip+5; // mov edx, 0x43414e59
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x43414e59)}));
c.rip=next;return true;}
case UINT64_C(0x14005b3d1): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b3d4): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffedf57);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005b3d9): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14005b3e0): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b3e5): {next=c.rip+5; // mov qword ptr [rsp + 0x18], r8
m.put(Operand{2,0,64,0,4,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b3ea): {next=c.rip+4; // mov dword ptr [rsp + 0x10], edx
m.put(Operand{2,0,32,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b3ee): {next=c.rip+1; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b3ef): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b3f0): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b3f1): {next=c.rip+2; // push r12
m.push(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b3f3): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b3f5): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b3f7): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b3f9): {next=c.rip+4; // sub rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14005b3fd): {next=c.rip+7; // movsxd rax, dword ptr [rcx + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,1,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005b404): {next=c.rip+3; // mov r14, rcx
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b407): {next=c.rip+2; // mov ebp, edx
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b409): {next=c.rip+10; // movabs rcx, 0x1f4ca5924e9dc001
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1f4ca5924e9dc001)}));
c.rip=next;return true;}
case UINT64_C(0x14005b413): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b417): {next=c.rip+10; // movabs rcx, 0xbd152f59cf43443e
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xbd152f59cf43443e)}));
c.rip=next;return true;}
case UINT64_C(0x14005b421): {next=c.rip+3; // mov r15, r8
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b424): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b42b): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b430): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b435): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005b43c): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b440): {next=c.rip+10; // movabs rcx, 0x5bddb1074c08c82b
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5bddb1074c08c82b)}));
c.rip=next;return true;}
case UINT64_C(0x14005b44a): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b451): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b456): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b45b): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005b462): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b466): {next=c.rip+10; // movabs rcx, 0x50271cc4bbb56d47
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x50271cc4bbb56d47)}));
c.rip=next;return true;}
case UINT64_C(0x14005b470): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b477): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b47c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b481): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4528,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b488): {next=c.rip+3; // sub rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14005b48b): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b48e): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b492): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b495): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14005b49f): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b4a3): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005b4ad): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b4b0): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b4b4): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b4b7): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b4ba): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b4be): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b4c1): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b4c5): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b4c8): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4528,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b4cf): {next=c.rip+4; // or rdx, 1
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b4d3): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b4d6): {next=c.rip+7; // mov qword ptr [r14 + 0x11b0], rdx
m.put(Operand{2,0,64,0,14,-1,1,0,4528,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b4dd): {next=c.rip+5; // call 0x14004d760
{uint64_t target=next+UINT64_C(0xffffffffffff227e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005b4e2): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b4e5): {next=c.rip+2; // mov esi, eax
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b4e7): {next=c.rip+5; // call 0x14004a3d0
{uint64_t target=next+UINT64_C(0xfffffffffffeeee4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005b4ec): {next=c.rip+7; // mov rdi, qword ptr [r14 + 0x10d8]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4312,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b4f3): {next=c.rip+3; // mov r11, rax
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b4f6): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1141]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4417,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b4fe): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b501): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x10c0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b508): {next=c.rip+10; // movabs r12, 0x9e3779b97f4a7c15
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14005b512): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x10b0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b519): {next=c.rip+10; // movabs r13, 0x2545f4914f6cdd1d
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14005b523): {next=c.rip+8; // movzx edx, byte ptr [r14 + 0x10c8]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b52b): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10b8]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b532): {next=c.rip+4; // imul rcx, r9
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b536): {next=c.rip+3; // add r10, r10
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b539): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b53c): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b53f): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b542): {next=c.rip+3; // sub rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14005b545): {next=c.rip+2; // test dl, dl
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005b547): {next=c.rip+4; // cmove rdi, rax
if(m.condition(0))m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b54b): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b552): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005b559): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b55d): {next=c.rip+3; // add rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b560): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b567): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b56b): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b56e): {next=c.rip+7; // mov byte ptr [r14 + 0x1141], al
m.put(Operand{2,0,8,0,14,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b575): {next=c.rip+4; // imul rax, r9
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b579): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b57c): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b57f): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b582): {next=c.rip+3; // add rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b585): {next=c.rip+3; // xor rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b588): {next=c.rip+2; // test dl, dl
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005b58a): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b58e): {next=c.rip+7; // mov qword ptr [r14 + 0x10d8], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b595): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x11a4]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b59d): {next=c.rip+3; // mov r8d, edi
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b5a0): {next=c.rip+3; // mov rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b5a3): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b5a6): {next=c.rip+5; // call 0x14004c930
{uint64_t target=next+UINT64_C(0xffffffffffff1385);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005b5ab): {next=c.rip+2; // mov ecx, esi
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b5ad): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b5b0): {next=c.rip+5; // call 0x140048d70
{uint64_t target=next+UINT64_C(0xfffffffffffed7bb);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005b5b5): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005b5b8): {next=c.rip+4; // mov dword ptr [rsp + 0x28], edi
m.put(Operand{2,0,32,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b5bc): {next=c.rip+4; // lea rcx, [rbx - 1]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b5c0): {next=c.rip+4; // mov dword ptr [rsp + 0x20], eax
m.put(Operand{2,0,32,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b5c4): {next=c.rip+3; // cmp rcx, rbx
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14005b5c7): {next=c.rip+3; // mov rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b5ca): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b5cd): {next=c.rip+4; // setae r8b
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.condition(3)));
c.rip=next;return true;}
case UINT64_C(0x14005b5d1): {next=c.rip+3; // xor r9d, r9d
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005b5d4): {next=c.rip+5; // call 0x14004cb70
{uint64_t target=next+UINT64_C(0xffffffffffff1597);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005b5d9): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b5dc): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b5df): {next=c.rip+5; // call 0x14004c880
{uint64_t target=next+UINT64_C(0xffffffffffff129c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005b5e4): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4528,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b5eb): {next=c.rip+2; // test ebp, ebp
m.logic(m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14005b5ed): {next=c.rip+6; // jns 0x14005c139
if(m.condition(11))next=next+UINT64_C(0xb46);
c.rip=next;return true;}
case UINT64_C(0x14005b5f3): {next=c.rip+7; // cmp qword ptr [r14 + 0x1058], r15
m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4184,UINT64_C(0x0)}),m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14005b5fa): {next=c.rip+6; // jne 0x14005c147
if(m.condition(1))next=next+UINT64_C(0xb47);
c.rip=next;return true;}
case UINT64_C(0x14005b600): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005b607): {next=c.rip+10; // movabs rcx, 0xe4bf56053af75c19
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xe4bf56053af75c19)}));
c.rip=next;return true;}
case UINT64_C(0x14005b611): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b615): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b618): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b61f): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b624): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b629): {next=c.rip+5; // call 0x140049ee0
{uint64_t target=next+UINT64_C(0xfffffffffffee8b2);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005b62e): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14005b630): {next=c.rip+6; // jne 0x14005c121
if(m.condition(1))next=next+UINT64_C(0xaeb);
c.rip=next;return true;}
case UINT64_C(0x14005b636): {next=c.rip+7; // cmp dword ptr [r14 + 0x4b8], eax
m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1208,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14005b63d): {next=c.rip+6; // jne 0x14005c121
if(m.condition(1))next=next+UINT64_C(0xade);
c.rip=next;return true;}
case UINT64_C(0x14005b643): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x10d0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b64a): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1140]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b652): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b655): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b65c): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b663): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b66a): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b672): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b679): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x1188]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b680): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b684): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b687): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b68a): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b68d): {next=c.rip+3; // sub r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14005b690): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005b693): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b697): {next=c.rip+3; // inc rsi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005b69a): {next=c.rip+4; // imul r9, r12
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b69e): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rsi
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b6a5): {next=c.rip+3; // add r9, r13
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b6a8): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b6af): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b6b2): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b6b6): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b6b9): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b6c0): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b6c4): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b6c7): {next=c.rip+3; // xor rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b6ca): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b6cd): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b6d0): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005b6d3): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b6d7): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b6db): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b6e2): {next=c.rip+7; // cmp r8d, 0x2a7d9c
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2a7d9c)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14005b6e9): {next=c.rip+6; // jne 0x14005c121
if(m.condition(1))next=next+UINT64_C(0xa32);
c.rip=next;return true;}
case UINT64_C(0x14005b6ef): {next=c.rip+2; // mov eax, ebp
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b6f1): {next=c.rip+4; // btr eax, 0x1f
m.bitop(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)},false);
c.rip=next;return true;}
case UINT64_C(0x14005b6f5): {next=c.rip+3; // cmp eax, 2
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14005b6f8): {next=c.rip+2; // jae 0x14005b744
if(m.condition(3))next=next+UINT64_C(0x4a);
c.rip=next;return true;}
case UINT64_C(0x14005b6fa): {next=c.rip+4; // imul r9, r12
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b6fe): {next=c.rip+4; // lea rax, [rsi + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b702): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b709): {next=c.rip+3; // add r9, r13
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b70c): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b713): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b717): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b71b): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b722): {next=c.rip+4; // imul rax, r10
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b726): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b729): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b72c): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b72f): {next=c.rip+6; // add rax, 0xcaa88
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xcaa88)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b735): {next=c.rip+7; // xor rcx, 0xcaa88
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xcaa88)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b73c): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005b73f): {next=c.rip+5; // jmp 0x14005c116
next=next+UINT64_C(0x9d2);
c.rip=next;return true;}
case UINT64_C(0x14005b744): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b747): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffee424);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005b74c): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b754): {next=c.rip+10; // movabs r8, 0xc4ceb9fe1a85ec53
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005b75e): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b765): {next=c.rip+10; // movabs r15, 0xff51afd7ed558ccd
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14005b76f): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x10b0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b776): {next=c.rip+8; // movzx r10d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b77e): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b780): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b783): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x930]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b78a): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b78d): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b791): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b794): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b798): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b79b): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b79f): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b7a2): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b7a9): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b7b0): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b7b4): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b7b7): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b7bb): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b7be): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b7c1): {next=c.rip+7; // mov qword ptr [r14 + 0x930], rdx
m.put(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b7c8): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b7cb): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b7cf): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b7d2): {next=c.rip+4; // imul rcx, r15
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b7d6): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b7d9): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b7dd): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b7e0): {next=c.rip+4; // imul rdx, r8
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b7e4): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b7e7): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b7eb): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b7ee): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b7f5): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1118]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b7fc): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1149]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b804): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b80b): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b80f): {next=c.rip+4; // lea rbx, [rax + rax*4]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b813): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b816): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b819): {next=c.rip+3; // add rbx, rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b81c): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b81f): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b822): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14005b825): {next=c.rip+3; // test r10b, r10b
m.logic(m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005b828): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b82c): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b833): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005b83a): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b83e): {next=c.rip+3; // add rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b841): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b848): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b84c): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b850): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b857): {next=c.rip+4; // imul r8, r11
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b85b): {next=c.rip+3; // xor r8, r9
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b85e): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b861): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b864): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b867): {next=c.rip+3; // test r10b, r10b
m.logic(m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005b86a): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b86e): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b872): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b875): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b87c): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffff0b3f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005b881): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b888): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b88f): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b897): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x10b0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b89e): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1110]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b8a5): {next=c.rip+4; // lea rbx, [rax + rax*8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b8a9): {next=c.rip+8; // movzx r10d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b8b1): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b8b4): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b8b8): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b8bb): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b8be): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b8c1): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14005b8c4): {next=c.rip+3; // test r10b, r10b
m.logic(m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005b8c7): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b8cb): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b8d2): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005b8d9): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b8dc): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b8e0): {next=c.rip+3; // add rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b8e3): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b8ea): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b8ee): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b8f2): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b8f9): {next=c.rip+4; // imul r8, r11
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b8fd): {next=c.rip+3; // xor r8, r9
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b900): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b903): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b906): {next=c.rip+3; // test r10b, r10b
m.logic(m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005b909): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b90d): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b911): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b914): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b91b): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffff0aa0);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005b920): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b923): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffee248);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005b928): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14005b92f): {next=c.rip+2; // jae 0x14005b93b
if(m.condition(3))next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x14005b931): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b933): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b936): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffff0a85);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005b93b): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x10c0]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b942): {next=c.rip+7; // mov rbp, qword ptr [r14 + 0x10b0]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b949): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x1110]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b950): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b958): {next=c.rip+3; // mov rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b95b): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b963): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b96a): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b971): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b978): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b97c): {next=c.rip+4; // lea r10, [rbx + rbx*8]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b980): {next=c.rip+3; // xor rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b983): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b986): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b989): {next=c.rip+3; // sub r11, rcx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14005b98c): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005b98f): {next=c.rip+4; // cmove r11, rax
if(m.condition(0))m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b993): {next=c.rip+4; // imul r9, r12
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b997): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b99a): {next=c.rip+3; // add r9, r13
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b99d): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b9a0): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b9a4): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b9a7): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b9ae): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b9b2): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b9b5): {next=c.rip+3; // xor rdx, r10
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b9b8): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005b9bb): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005b9be): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b9c2): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b9c6): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b9c9): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b9d0): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b9d4): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b9db): {next=c.rip+6; // mov r8d, 0xf5df
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf5df)}));
c.rip=next;return true;}
case UINT64_C(0x14005b9e1): {next=c.rip+4; // imul r9, r12
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005b9e5): {next=c.rip+4; // lea rax, [rbx + rbx*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b9e9): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b9ec): {next=c.rip+3; // add r9, r13
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005b9ef): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b9f6): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005b9fa): {next=c.rip+4; // movzx edx, r9b
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005b9fe): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ba05): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005ba09): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ba0c): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ba0f): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ba12): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005ba15): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ba19): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ba1d): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ba20): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ba27): {next=c.rip+8; // movzx edx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ba2f): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x230]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ba36): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xffffffffffff15b5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005ba3b): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x230]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ba42): {next=c.rip+10; // movabs rdi, 0xc4ceb9fe1a85ec53
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005ba4c): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ba4f): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ba56): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ba59): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005ba5d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ba60): {next=c.rip+4; // imul rcx, r15
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005ba64): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ba67): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005ba6b): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005ba6e): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005ba72): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ba75): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005ba79): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005ba7b): {next=c.rip+2; // mov ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ba7d): {next=c.rip+3; // lea eax, [rdx + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ba80): {next=c.rip+3; // imul ecx, eax
m.imul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005ba83): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005ba85): {next=c.rip+2; // not ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ba87): {next=c.rip+2; // and ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005ba89): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005ba8c): {next=c.rip+2; // je 0x14005baf5
if(m.condition(0))next=next+UINT64_C(0x67);
c.rip=next;return true;}
case UINT64_C(0x14005ba8e): {next=c.rip+4; // and r8b, 3
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3)}),8));
c.rip=next;return true;}
case UINT64_C(0x14005ba92): {next=c.rip+4; // cmp r8b, 1
m.arithmetic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14005ba96): {next=c.rip+2; // jne 0x14005baf5
if(m.condition(1))next=next+UINT64_C(0x5d);
c.rip=next;return true;}
case UINT64_C(0x14005ba98): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005ba9f): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005baa6): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005baaa): {next=c.rip+3; // add rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005baad): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bab4): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bab8): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005babb): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bac2): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005baca): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bad1): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bad8): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005badb): {next=c.rip+6; // add rax, 0x38f6c0
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38f6c0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005bae1): {next=c.rip+7; // xor rcx, 0x38f6c0
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38f6c0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bae8): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14005baf0): {next=c.rip+5; // jmp 0x14005c116
next=next+UINT64_C(0x621);
c.rip=next;return true;}
case UINT64_C(0x14005baf5): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005baf8): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffee073);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005bafd): {next=c.rip+2; // mov ebx, eax
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005baff): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14005bb06): {next=c.rip+2; // jb 0x14005bb65
if(m.condition(2))next=next+UINT64_C(0x5d);
c.rip=next;return true;}
case UINT64_C(0x14005bb08): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bb0f): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005bb16): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bb1a): {next=c.rip+3; // add rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005bb1d): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bb24): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bb28): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bb2b): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bb32): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bb3a): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bb41): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bb48): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bb4b): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005bb51): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bb58): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14005bb60): {next=c.rip+5; // jmp 0x14005c116
next=next+UINT64_C(0x5b1);
c.rip=next;return true;}
case UINT64_C(0x14005bb65): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bb67): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bb6a): {next=c.rip+5; // call 0x14004e0d0
{uint64_t target=next+UINT64_C(0xffffffffffff2561);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005bb6f): {next=c.rip+7; // movsxd rcx, dword ptr [r14 + 0x928]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005bb76): {next=c.rip+10; // movabs r8, 0xd6e8feb86659fd93
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14005bb80): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bb87): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bb8a): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bb8e): {next=c.rip+4; // imul rcx, r12
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bb92): {next=c.rip+4; // rol rdx, 0x11
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x14005bb96): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x700]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bb9d): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bba0): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bba3): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bba6): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bbaa): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bbad): {next=c.rip+4; // imul rcx, r15
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bbb1): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bbb4): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bbb8): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bbbb): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bbbf): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bbc2): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bbc6): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bbc9): {next=c.rip+3; // mov r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bbcc): {next=c.rip+4; // shr r10, 0x1d
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bbd0): {next=c.rip+3; // xor r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bbd3): {next=c.rip+4; // or r10, 1
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bbd7): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bbda): {next=c.rip+7; // mov qword ptr [r14 + 0x700], r10
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bbe1): {next=c.rip+5; // and eax, 0x3ff
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3ff)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005bbe6): {next=c.rip+6; // cmp rax, 0x2c5
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2c5)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14005bbec): {next=c.rip+2; // jne 0x14005bbfd
if(m.condition(1))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x14005bbee): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bbf1): {next=c.rip+5; // call 0x14007fb70
{uint64_t target=next+UINT64_C(0x23f7a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005bbf6): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x700]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bbfd): {next=c.rip+4; // movzx eax, r10b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bc01): {next=c.rip+2; // and al, 0x1f
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8));
c.rip=next;return true;}
case UINT64_C(0x14005bc03): {next=c.rip+2; // cmp al, 0x15
m.arithmetic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x15)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14005bc05): {next=c.rip+6; // jne 0x14005bcf6
if(m.condition(1))next=next+UINT64_C(0xeb);
c.rip=next;return true;}
case UINT64_C(0x14005bc0b): {next=c.rip+7; // movsxd rcx, dword ptr [r14 + 0x928]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005bc12): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bc19): {next=c.rip+7; // xor rcx, 0x5a5a
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5a5a)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bc20): {next=c.rip+4; // rol rax, 0x11
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x14005bc24): {next=c.rip+4; // imul rcx, r12
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bc28): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bc2b): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bc2e): {next=c.rip+10; // movabs rax, 0x8f70feda99a6026d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8f70feda99a6026d)}));
c.rip=next;return true;}
case UINT64_C(0x14005bc38): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bc3b): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bc3e): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bc42): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bc45): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bc49): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bc4c): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bc50): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bc53): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bc57): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bc5a): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bc5e): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bc61): {next=c.rip+3; // mov r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bc64): {next=c.rip+4; // shr r9, 0x1d
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bc68): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bc6b): {next=c.rip+4; // or r9, 1
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bc6f): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bc72): {next=c.rip+3; // mov rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bc75): {next=c.rip+4; // shr rax, 8
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bc79): {next=c.rip+3; // and eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005bc7c): {next=c.rip+4; // shr rcx, 0x28
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x28)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bc80): {next=c.rip+4; // imul r8, rax, 0x3e
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x14005bc84): {next=c.rip+5; // mov eax, 0x8421085
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8421085)}));
c.rip=next;return true;}
case UINT64_C(0x14005bc89): {next=c.rip+2; // mul ecx
m.mul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bc8b): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bc8d): {next=c.rip+2; // sub eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14005bc8f): {next=c.rip+2; // shr eax, 1
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bc91): {next=c.rip+2; // add eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14005bc93): {next=c.rip+3; // shr eax, 5
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x5)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bc96): {next=c.rip+3; // imul eax, eax, 0x3e
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x14005bc99): {next=c.rip+2; // sub ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14005bc9b): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bc9d): {next=c.rip+3; // add r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005bca0): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bca7): {next=c.rip+4; // movsxd rcx, dword ptr [rax + r8*4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,8,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005bcab): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005bcb2): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bcb5): {next=c.rip+7; // add rcx, qword ptr [r14 + 0x4e0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005bcbc): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bcbf): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bcc2): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bcc6): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bcc9): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bccd): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bcd0): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bcd4): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bcd7): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bcdb): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bcde): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bce2): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bce5): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bce8): {next=c.rip+7; // inc qword ptr [r14 + 0x708]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005bcef): {next=c.rip+7; // mov qword ptr [r14 + 0x700], rax
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bcf6): {next=c.rip+7; // inc dword ptr [r14 + 0x75c]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005bcfd): {next=c.rip+7; // mov eax, dword ptr [r14 + 0x75c]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd04): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x758]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1880,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14005bd0b): {next=c.rip+2; // jb 0x14005bd20
if(m.condition(2))next=next+UINT64_C(0x13);
c.rip=next;return true;}
case UINT64_C(0x14005bd0d): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd10): {next=c.rip+11; // mov dword ptr [r14 + 0x75c], 0
m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd1b): {next=c.rip+5; // call 0x14004b250
{uint64_t target=next+UINT64_C(0xfffffffffffef530);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005bd20): {next=c.rip+3; // mov r8d, ebx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd23): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd25): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd28): {next=c.rip+5; // call 0x14004c110
{uint64_t target=next+UINT64_C(0xffffffffffff03e3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14005bd2d): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005bd34): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd37): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd3e): {next=c.rip+4; // imul r9, r12
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bd42): {next=c.rip+4; // lea r12d, [rbx + 1]
m.put(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,3,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd46): {next=c.rip+3; // add r9, r13
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005bd49): {next=c.rip+7; // mov r13, qword ptr [r14 + 0x1188]
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd50): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd57): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd5a): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bd5e): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd61): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd68): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd6f): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10b8]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd76): {next=c.rip+7; // mov rdi, qword ptr [r14 + 0x10b0]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd7d): {next=c.rip+8; // movzx ebp, byte ptr [r14 + 0x10c8]
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd85): {next=c.rip+4; // imul rdx, r11
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bd89): {next=c.rip+4; // lea rax, [r10 + r10*8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,10,10,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd8d): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bd90): {next=c.rip+3; // xor rdx, rdi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bd93): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bd96): {next=c.rip+3; // test bpl, bpl
m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005bd99): {next=c.rip+4; // lea rax, [rbx + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bd9d): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bda1): {next=c.rip+3; // inc r13
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005bda4): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bdab): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x8f8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bdb2): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x730]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bdb9): {next=c.rip+5; // movzx r8d, byte ptr [rcx + rbx]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bdbe): {next=c.rip+4; // xor r8b, byte ptr [rax + rbx]
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,8,0,0,3,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14005bdc2): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14005bdcc): {next=c.rip+4; // imul r9, rax
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bdd0): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14005bdda): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], r13
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bde1): {next=c.rip+3; // add r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005bde4): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bde7): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bdeb): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bdee): {next=c.rip+4; // lea rax, [r10 + r10]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,10,10,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bdf2): {next=c.rip+7; // mov byte ptr [r14 + 0x1141], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bdf9): {next=c.rip+4; // imul rdx, r11
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bdfd): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005be00): {next=c.rip+3; // xor rdx, rdi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005be03): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005be06): {next=c.rip+3; // xor rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005be09): {next=c.rip+3; // test bpl, bpl
m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005be0c): {next=c.rip+4; // lea rax, [rdx + r12]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,12,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005be10): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005be14): {next=c.rip+7; // mov qword ptr [r14 + 0x10d8], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005be1b): {next=c.rip+7; // movsxd rdx, dword ptr [r14 + 0x928]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005be22): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x940]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005be29): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005be2c): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x238]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005be33): {next=c.rip+3; // xor rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005be36): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x230]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005be3d): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005be40): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005be43): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005be47): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005be4a): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005be4e): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005be51): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005be55): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005be58): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005be62): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005be66): {next=c.rip+4; // movzx eax, r8b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005be6a): {next=c.rip+6; // xor rax, 0x93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x93)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005be70): {next=c.rip+3; // mov r15, rcx
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005be73): {next=c.rip+4; // shr r15, 0x21
m.shift(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005be77): {next=c.rip+3; // xor r15, rcx
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005be7a): {next=c.rip+7; // lea rcx, [rip - 0x5be81]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-376449,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005be81): {next=c.rip+7; // mov qword ptr [r14 + 0x948], r15
m.put(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005be88): {next=c.rip+8; // movzx esi, byte ptr [rax + rcx + 0x3e3660]
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,1,1,0,4077152,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005be90): {next=c.rip+4; // xor sil, 0x27
m.put(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x27)}),8));
c.rip=next;return true;}
case UINT64_C(0x14005be94): {next=c.rip+2; // inc edx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005be96): {next=c.rip+7; // mov dword ptr [r14 + 0x928], edx
m.put(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005be9d): {next=c.rip+3; // test dl, 0x1f
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8);
c.rip=next;return true;}
case UINT64_C(0x14005bea0): {next=c.rip+2; // jne 0x14005bef0
if(m.condition(1))next=next+UINT64_C(0x4e);
c.rip=next;return true;}
case UINT64_C(0x14005bea2): {next=c.rip+3; // movsxd rax, edx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14005bea5): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x230]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005beac): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005beaf): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005beb2): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005beb6): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005beb9): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14005bec3): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bec7): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005bed1): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bed4): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bed8): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bedb): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bedf): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bee2): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bee6): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bee9): {next=c.rip+7; // mov qword ptr [r14 + 0x230], rax
m.put(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bef0): {next=c.rip+4; // movzx r8d, sil
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bef4): {next=c.rip+3; // mov eax, r8d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bef7): {next=c.rip+7; // mov byte ptr [r14 + 0x11a4], sil
m.put(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)},m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005befe): {next=c.rip+3; // xor rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bf01): {next=c.rip+10; // movabs r12, 0xff51afd7ed558ccd
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14005bf0b): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bf0e): {next=c.rip+10; // movabs rbx, 0x9e3779b97f4a7c15
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14005bf18): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bf1b): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bf1f): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bf22): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005bf2c): {next=c.rip+4; // imul rcx, r12
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bf30): {next=c.rip+4; // imul r8, rbx
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bf34): {next=c.rip+4; // imul r9, rbx
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bf38): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bf3b): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bf3f): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bf42): {next=c.rip+7; // mov ecx, dword ptr [r14 + 0x8bc]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,2236,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bf49): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bf4d): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bf50): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bf54): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bf57): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bf5e): {next=c.rip+10; // movabs rax, 0xd6e8feb86659fd93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14005bf68): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bf6c): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bf6f): {next=c.rip+3; // xor rcx, r15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bf72): {next=c.rip+10; // movabs r15, 0x2545f4914f6cdd1d
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14005bf7c): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bf7f): {next=c.rip+3; // add r9, r15
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005bf82): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bf86): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bf89): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bf8d): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bf90): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bf94): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bf97): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14005bfa1): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bfa5): {next=c.rip+4; // lea rax, [r13 + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,13,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bfa9): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bfad): {next=c.rip+3; // and edx, 3
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x14005bfb0): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bfb7): {next=c.rip+4; // cmp sil, 0x3e
m.arithmetic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3e)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14005bfbb): {next=c.rip+6; // jae 0x14005c05a
if(m.condition(3))next=next+UINT64_C(0x99);
c.rip=next;return true;}
case UINT64_C(0x14005bfc1): {next=c.rip+7; // inc qword ptr [r14 + 0x1088]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14005bfc8): {next=c.rip+7; // lea rax, [rip - 0x5bfcf]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-376783,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bfcf): {next=c.rip+8; // mov r8d, dword ptr [rax + rdx*4 + 0x3e0490]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,0,2,4,0,4064400,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bfd7): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bfde): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14005bfe2): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bfe6): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bfed): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14005bff1): {next=c.rip+2; // mov ebx, edx
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bff3): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bff6): {next=c.rip+3; // xor rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14005bff9): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14005bffc): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14005bfff): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
default:return false;
}}
}
