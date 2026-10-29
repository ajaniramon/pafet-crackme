// Generated literal x64 semantics.
#include "../pafet_hexvm_cpu_xxvi.h"
namespace pafet_xxiv {
bool hexvm_part_20(Machine& m){auto& c=m.c;auto& next=m.next;switch(m.canonical(c.rip)){
case UINT64_C(0x140080000): {next=c.rip+2; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080002): {next=c.rip+2; // push r12
m.push(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080004): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080006): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080008): {next=c.rip+4; // sub rsp, 0x28
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x28)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008000c): {next=c.rip+3; // mov rbp, rcx
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008000f): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffc9b5c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080014): {next=c.rip+3; // mov r14d, eax
m.put(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080017): {next=c.rip+6; // cmp eax, dword ptr [rbp + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,5,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008001d): {next=c.rip+6; // jb 0x1400800a4
if(m.condition(2))next=next+UINT64_C(0x81);
c.rip=next;return true;}
case UINT64_C(0x140080023): {next=c.rip+7; // mov rax, qword ptr [rbp + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008002a): {next=c.rip+10; // movabs r15, 0x9e3779b97f4a7c15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140080034): {next=c.rip+7; // inc qword ptr [rbp + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,5,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,5,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14008003b): {next=c.rip+10; // movabs r12, 0x2545f4914f6cdd1d
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140080045): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080049): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008004c): {next=c.rip+7; // mov qword ptr [rbp + 0x1180], rax
m.put(Operand{2,0,64,0,5,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080053): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140080057): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008005a): {next=c.rip+6; // mov byte ptr [rbp + 0x1140], al
m.put(Operand{2,0,8,0,5,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080060): {next=c.rip+8; // imul rax, qword ptr [rbp + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,5,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080068): {next=c.rip+7; // xor rax, qword ptr [rbp + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,5,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008006f): {next=c.rip+7; // xor rax, qword ptr [rbp + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,5,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080076): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080079): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008007f): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080086): {next=c.rip+7; // cmp byte ptr [rbp + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,5,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14008008d): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080091): {next=c.rip+7; // mov qword ptr [rbp + 0x10d0], rax
m.put(Operand{2,0,64,0,5,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080098): {next=c.rip+4; // add rsp, 0x28
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x28)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008009c): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14008009e): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400800a0): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400800a2): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400800a3): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x1400800a4): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400800a9): {next=c.rip+3; // mov edx, r14d
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400800ac): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400800b1): {next=c.rip+3; // mov rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400800b4): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400800b9): {next=c.rip+5; // mov qword ptr [rsp + 0x20], r13
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400800be): {next=c.rip+5; // call 0x14004e0d0
{uint64_t target=next+UINT64_C(0xfffffffffffce00d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400800c3): {next=c.rip+7; // movsxd rcx, dword ptr [rbp + 0x928]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,5,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400800ca): {next=c.rip+10; // movabs r8, 0xd6e8feb86659fd93
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x1400800d4): {next=c.rip+7; // mov rdx, qword ptr [rbp + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400800db): {next=c.rip+3; // mov rax, r14
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400800de): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400800e2): {next=c.rip+4; // rol rdx, 0x11
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x1400800e6): {next=c.rip+10; // movabs r15, 0x9e3779b97f4a7c15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x1400800f0): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400800f3): {next=c.rip+10; // movabs r11, 0xff51afd7ed558ccd
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x1400800fd): {next=c.rip+4; // imul rcx, r15
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080101): {next=c.rip+10; // movabs rbx, 0xc4ceb9fe1a85ec53
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14008010b): {next=c.rip+7; // xor rcx, qword ptr [rbp + 0x700]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,5,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080112): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080115): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080118): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14008011c): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008011f): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080123): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080126): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14008012a): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008012d): {next=c.rip+4; // imul rdx, rbx
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080131): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080134): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080138): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008013b): {next=c.rip+3; // mov r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008013e): {next=c.rip+4; // shr r10, 0x1d
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x140080142): {next=c.rip+3; // xor r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080145): {next=c.rip+4; // or r10, 1
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080149): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008014c): {next=c.rip+7; // mov qword ptr [rbp + 0x700], r10
m.put(Operand{2,0,64,0,5,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080153): {next=c.rip+5; // and eax, 0x3ff
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3ff)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080158): {next=c.rip+6; // cmp rax, 0x2c5
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2c5)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14008015e): {next=c.rip+2; // jne 0x140080179
if(m.condition(1))next=next+UINT64_C(0x19);
c.rip=next;return true;}
case UINT64_C(0x140080160): {next=c.rip+3; // mov rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080163): {next=c.rip+5; // call 0x14007fb70
{uint64_t target=next+UINT64_C(0xfffffffffffffa08);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080168): {next=c.rip+7; // mov r10, qword ptr [rbp + 0x700]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,1792,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008016f): {next=c.rip+10; // movabs r11, 0xff51afd7ed558ccd
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140080179): {next=c.rip+4; // movzx eax, r10b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008017d): {next=c.rip+2; // and al, 0x1f
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8));
c.rip=next;return true;}
case UINT64_C(0x14008017f): {next=c.rip+2; // cmp al, 0x15
m.arithmetic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x15)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140080181): {next=c.rip+6; // jne 0x140080271
if(m.condition(1))next=next+UINT64_C(0xea);
c.rip=next;return true;}
case UINT64_C(0x140080187): {next=c.rip+7; // movsxd rax, dword ptr [rbp + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,5,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14008018e): {next=c.rip+6; // xor rax, 0x5a5a
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5a5a)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080194): {next=c.rip+7; // mov rcx, qword ptr [rbp + 0x940]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008019b): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14008019f): {next=c.rip+4; // rol rcx, 0x11
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x1400801a3): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400801a6): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400801a9): {next=c.rip+10; // movabs rax, 0x8f70feda99a6026d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8f70feda99a6026d)}));
c.rip=next;return true;}
case UINT64_C(0x1400801b3): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400801b6): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400801b9): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400801bd): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400801c0): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400801c4): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400801c7): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400801cb): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400801ce): {next=c.rip+4; // imul rcx, rbx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400801d2): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400801d5): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400801d9): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400801dc): {next=c.rip+3; // mov r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400801df): {next=c.rip+4; // shr r9, 0x1d
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x1400801e3): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400801e6): {next=c.rip+4; // or r9, 1
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400801ea): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400801ed): {next=c.rip+3; // mov rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400801f0): {next=c.rip+4; // shr rax, 8
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},1);
c.rip=next;return true;}
case UINT64_C(0x1400801f4): {next=c.rip+3; // and eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400801f7): {next=c.rip+4; // shr rcx, 0x28
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x28)},1);
c.rip=next;return true;}
case UINT64_C(0x1400801fb): {next=c.rip+4; // imul r8, rax, 0x3e
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x1400801ff): {next=c.rip+5; // mov eax, 0x8421085
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8421085)}));
c.rip=next;return true;}
case UINT64_C(0x140080204): {next=c.rip+2; // mul ecx
m.mul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080206): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080208): {next=c.rip+2; // sub eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14008020a): {next=c.rip+2; // shr eax, 1
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)},1);
c.rip=next;return true;}
case UINT64_C(0x14008020c): {next=c.rip+2; // add eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14008020e): {next=c.rip+3; // shr eax, 5
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x5)},1);
c.rip=next;return true;}
case UINT64_C(0x140080211): {next=c.rip+3; // imul eax, eax, 0x3e
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x140080214): {next=c.rip+2; // sub ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x140080216): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080218): {next=c.rip+3; // add r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008021b): {next=c.rip+7; // mov rax, qword ptr [rbp + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080222): {next=c.rip+4; // movsxd rcx, dword ptr [rax + r8*4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,8,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140080226): {next=c.rip+7; // movsxd rax, dword ptr [rbp + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,5,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14008022d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080230): {next=c.rip+7; // add rcx, qword ptr [rbp + 0x4e0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,5,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140080237): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008023a): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008023d): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080241): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080244): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080248): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008024b): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14008024f): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080252): {next=c.rip+4; // imul rcx, rbx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080256): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080259): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14008025d): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080260): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080263): {next=c.rip+7; // inc qword ptr [rbp + 0x708]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,5,-1,1,0,1800,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,5,-1,1,0,1800,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14008026a): {next=c.rip+7; // mov qword ptr [rbp + 0x700], rax
m.put(Operand{2,0,64,0,5,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080271): {next=c.rip+6; // inc dword ptr [rbp + 0x75c]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,5,-1,1,0,1884,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,5,-1,1,0,1884,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140080277): {next=c.rip+6; // mov eax, dword ptr [rbp + 0x75c]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,5,-1,1,0,1884,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008027d): {next=c.rip+6; // cmp eax, dword ptr [rbp + 0x758]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,5,-1,1,0,1880,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140080283): {next=c.rip+2; // jb 0x140080297
if(m.condition(2))next=next+UINT64_C(0x12);
c.rip=next;return true;}
case UINT64_C(0x140080285): {next=c.rip+3; // mov rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080288): {next=c.rip+10; // mov dword ptr [rbp + 0x75c], 0
m.put(Operand{2,0,32,0,5,-1,1,0,1884,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080292): {next=c.rip+5; // call 0x14004b250
{uint64_t target=next+UINT64_C(0xfffffffffffcafb9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080297): {next=c.rip+3; // mov r8d, r14d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008029a): {next=c.rip+3; // mov edx, r14d
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008029d): {next=c.rip+3; // mov rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400802a0): {next=c.rip+5; // call 0x14004c110
{uint64_t target=next+UINT64_C(0xfffffffffffcbe6b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400802a5): {next=c.rip+7; // inc qword ptr [rbp + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,5,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,5,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400802ac): {next=c.rip+10; // movabs r12, 0x2545f4914f6cdd1d
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x1400802b6): {next=c.rip+7; // mov rdi, qword ptr [rbp + 0x1180]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400802bd): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400802c0): {next=c.rip+7; // mov r8, qword ptr [rbp + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400802c7): {next=c.rip+4; // imul rdi, r15
m.imul(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400802cb): {next=c.rip+3; // add rdi, r12
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400802ce): {next=c.rip+7; // mov qword ptr [rbp + 0x1180], rdi
m.put(Operand{2,0,64,0,5,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400802d5): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400802d8): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400802dc): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400802df): {next=c.rip+6; // mov byte ptr [rbp + 0x1148], dl
m.put(Operand{2,0,8,0,5,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400802e5): {next=c.rip+7; // mov r9, qword ptr [rbp + 0x10c0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400802ec): {next=c.rip+7; // mov r10, qword ptr [rbp + 0x10b8]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400802f3): {next=c.rip+7; // mov rbx, qword ptr [rbp + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400802fa): {next=c.rip+8; // movzx r11d, byte ptr [rbp + 0x10c8]
m.put(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,5,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080302): {next=c.rip+4; // imul rdx, r9
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080306): {next=c.rip+4; // lea rax, [r10 + r10*8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,10,10,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008030a): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008030d): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080310): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080313): {next=c.rip+3; // test r11b, r11b
m.logic(m.get(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140080316): {next=c.rip+4; // lea rax, [rdx + r14]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,14,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008031a): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008031e): {next=c.rip+7; // mov qword ptr [rbp + 0x1110], rax
m.put(Operand{2,0,64,0,5,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080325): {next=c.rip+7; // mov rcx, qword ptr [rbp + 0x8f8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,2296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008032c): {next=c.rip+7; // mov rax, qword ptr [rbp + 0x730]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080333): {next=c.rip+4; // imul rdi, r15
m.imul(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080337): {next=c.rip+5; // movzx esi, byte ptr [rcx + r14]
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,14,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008033c): {next=c.rip+4; // xor sil, byte ptr [rax + r14]
m.put(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,8,0,0,14,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140080340): {next=c.rip+3; // add rdi, r12
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140080343): {next=c.rip+3; // inc r14d
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140080346): {next=c.rip+7; // mov qword ptr [rbp + 0x1180], rdi
m.put(Operand{2,0,64,0,5,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008034d): {next=c.rip+4; // lea rax, [r8 + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080351): {next=c.rip+4; // shr rdi, 0x1b
m.shift(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140080355): {next=c.rip+7; // mov qword ptr [rbp + 0x1188], rax
m.put(Operand{2,0,64,0,5,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008035c): {next=c.rip+3; // mov ecx, r14d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008035f): {next=c.rip+4; // lea rax, [r10 + r10]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,10,10,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080363): {next=c.rip+4; // movzx edx, dil
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080367): {next=c.rip+6; // mov byte ptr [rbp + 0x1141], dl
m.put(Operand{2,0,8,0,5,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008036d): {next=c.rip+4; // imul rdx, r9
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080371): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080374): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080377): {next=c.rip+10; // movabs rbx, 0xc4ceb9fe1a85ec53
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140080381): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080384): {next=c.rip+3; // test r11b, r11b
m.logic(m.get(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140080387): {next=c.rip+10; // movabs r11, 0xff51afd7ed558ccd
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140080391): {next=c.rip+4; // lea rax, [r14 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,14,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080395): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080399): {next=c.rip+7; // mov qword ptr [rbp + 0x10d8], rax
m.put(Operand{2,0,64,0,5,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400803a0): {next=c.rip+7; // movsxd rdx, dword ptr [rbp + 0x928]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,5,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400803a7): {next=c.rip+7; // mov r10, qword ptr [rbp + 0x230]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,560,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400803ae): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400803b1): {next=c.rip+7; // xor rcx, qword ptr [rbp + 0x238]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,5,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400803b8): {next=c.rip+7; // mov r9, qword ptr [rbp + 0x940]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400803bf): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400803c2): {next=c.rip+3; // xor rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400803c5): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400803c8): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400803cb): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400803cf): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400803d2): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400803d6): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400803d9): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400803dd): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400803e0): {next=c.rip+4; // imul rcx, rbx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400803e4): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400803e7): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400803eb): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400803ee): {next=c.rip+7; // lea rcx, [rip + 0x36326b]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,3551851,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400803f5): {next=c.rip+7; // mov qword ptr [rbp + 0x948], rax
m.put(Operand{2,0,64,0,5,-1,1,0,2376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400803fc): {next=c.rip+4; // movzx eax, sil
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080400): {next=c.rip+6; // xor rax, 0x93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x93)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080406): {next=c.rip+5; // movzx r8d, byte ptr [rax + rcx]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008040b): {next=c.rip+4; // xor r8b, 0x27
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x27)}),8));
c.rip=next;return true;}
case UINT64_C(0x14008040f): {next=c.rip+2; // inc edx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140080411): {next=c.rip+6; // mov dword ptr [rbp + 0x928], edx
m.put(Operand{2,0,32,0,5,-1,1,0,2344,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080417): {next=c.rip+5; // mov r13, qword ptr [rsp + 0x20]
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008041c): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x60]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080421): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x58]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080426): {next=c.rip+3; // test dl, 0x1f
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8);
c.rip=next;return true;}
case UINT64_C(0x140080429): {next=c.rip+2; // jne 0x140080461
if(m.condition(1))next=next+UINT64_C(0x36);
c.rip=next;return true;}
case UINT64_C(0x14008042b): {next=c.rip+3; // movsxd rax, edx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14008042e): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080431): {next=c.rip+3; // xor rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080434): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080437): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14008043b): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008043e): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080442): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080445): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080449): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008044c): {next=c.rip+4; // imul rdx, rbx
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080450): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080453): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080457): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008045a): {next=c.rip+7; // mov qword ptr [rbp + 0x230], rax
m.put(Operand{2,0,64,0,5,-1,1,0,560,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080461): {next=c.rip+4; // movzx eax, r8b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080465): {next=c.rip+3; // xor rax, r14
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080468): {next=c.rip+7; // mov byte ptr [rbp + 0x11a4], r8b
m.put(Operand{2,0,8,0,5,-1,1,0,4516,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008046f): {next=c.rip+3; // xor rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080472): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080475): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080479): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008047c): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080480): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080483): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080487): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008048a): {next=c.rip+3; // mov rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008048d): {next=c.rip+4; // imul rdx, rbx
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080491): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080494): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080498): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008049b): {next=c.rip+5; // mov edx, 0x36da17
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x36da17)}));
c.rip=next;return true;}
case UINT64_C(0x1400804a0): {next=c.rip+7; // mov qword ptr [rbp + 0x940], rax
m.put(Operand{2,0,64,0,5,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400804a7): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x50]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400804ac): {next=c.rip+4; // add rsp, 0x28
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x28)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400804b0): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400804b2): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400804b4): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400804b6): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400804b7): {next=c.rip+5; // jmp 0x14004c880
next=next+UINT64_C(0xfffffffffffcc3c4);
c.rip=next;return true;}
case UINT64_C(0x1400804c0): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400804c5): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400804ca): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400804cb): {next=c.rip+2; // push r12
m.push(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400804cd): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400804cf): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400804d1): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400804d3): {next=c.rip+5; // mov eax, 0x47c0
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x47c0)}));
c.rip=next;return true;}
case UINT64_C(0x1400804d8): {next=c.rip+5; // call 0x1403a49a0
{uint64_t target=next+UINT64_C(0x3244c3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400804dd): {next=c.rip+3; // sub rsp, rax
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400804e0): {next=c.rip+7; // mov rax, qword ptr [rip + 0x38cb39]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,16,-1,1,0,3722041,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400804e7): {next=c.rip+3; // xor rax, rsp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400804ea): {next=c.rip+8; // mov qword ptr [rsp + 0x47b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,18352,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400804f2): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400804f5): {next=c.rip+8; // mov qword ptr [rsp + 0xd8], rax
m.put(Operand{2,0,64,0,4,-1,1,0,216,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400804fd): {next=c.rip+8; // mov qword ptr [rsp + 0xb8], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,184,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080505): {next=c.rip+8; // mov qword ptr [rsp + 0x100], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,256,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008050d): {next=c.rip+8; // mov qword ptr [rsp + 0x1380], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4992,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080515): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080518): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14008051c): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008051f): {next=c.rip+10; // movabs rbx, 0xff51afd7ed558ccd
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140080529): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14008052d): {next=c.rip+3; // mov rdi, rax
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080530): {next=c.rip+4; // shr rdi, 0x21
m.shift(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080534): {next=c.rip+3; // xor rdi, rax
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080537): {next=c.rip+10; // movabs rsi, 0xc4ceb9fe1a85ec53
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140080541): {next=c.rip+4; // imul rdi, rsi
m.imul(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080545): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080548): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14008054c): {next=c.rip+3; // xor rdi, rax
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008054f): {next=c.rip+10; // movabs rax, 0x89dbcf488520c821
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x89dbcf488520c821)}));
c.rip=next;return true;}
case UINT64_C(0x140080559): {next=c.rip+3; // xor rdi, rax
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008055c): {next=c.rip+8; // mov qword ptr [rsp + 0xa8], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,168,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080564): {next=c.rip+5; // call 0x14004bc10
{uint64_t target=next+UINT64_C(0xfffffffffffcb6a7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080569): {next=c.rip+3; // movsxd rcx, eax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14008056c): {next=c.rip+3; // xor rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008056f): {next=c.rip+10; // movabs rax, 0xf2ecef0d32757fe4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf2ecef0d32757fe4)}));
c.rip=next;return true;}
case UINT64_C(0x140080579): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008057c): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008057f): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080583): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080586): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14008058a): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008058d): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080591): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080594): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080598): {next=c.rip+3; // mov r14, rcx
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008059b): {next=c.rip+4; // shr r14, 0x21
m.shift(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14008059f): {next=c.rip+3; // xor r14, rcx
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400805a2): {next=c.rip+8; // mov byte ptr [rsp + 0xa0], 0
m.put(Operand{2,0,8,0,4,-1,1,0,160,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400805aa): {next=c.rip+8; // lea rcx, [rsp + 0x160]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,352,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400805b2): {next=c.rip+5; // call 0x14039bc30
{uint64_t target=next+UINT64_C(0x31b679);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400805b7): {next=c.rip+8; // lea r8, [rsp + 0xa0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,160,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400805bf): {next=c.rip+5; // mov edx, 0x7b7
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x7b7)}));
c.rip=next;return true;}
case UINT64_C(0x1400805c4): {next=c.rip+8; // lea rcx, [rsp + 0x160]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,352,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400805cc): {next=c.rip+5; // call 0x14039b020
{uint64_t target=next+UINT64_C(0x31aa4f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400805d1): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x1400805d2): {next=c.rip+8; // mov rsi, qword ptr [rsp + 0x160]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,352,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400805da): {next=c.rip+8; // mov qword ptr [rsp + 0xe8], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,232,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400805e2): {next=c.rip+8; // mov byte ptr [rsp + 0xa1], 0
m.put(Operand{2,0,8,0,4,-1,1,0,161,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400805ea): {next=c.rip+8; // lea rcx, [rsp + 0x148]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,328,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400805f2): {next=c.rip+5; // call 0x14039bc30
{uint64_t target=next+UINT64_C(0x31b639);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400805f7): {next=c.rip+8; // lea r8, [rsp + 0xa1]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,161,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400805ff): {next=c.rip+5; // mov edx, 0x7b7
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x7b7)}));
c.rip=next;return true;}
case UINT64_C(0x140080604): {next=c.rip+8; // lea rcx, [rsp + 0x148]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,328,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008060c): {next=c.rip+5; // call 0x14039b020
{uint64_t target=next+UINT64_C(0x31aa0f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080611): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140080612): {next=c.rip+8; // mov r15, qword ptr [rsp + 0x148]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,328,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008061a): {next=c.rip+8; // mov byte ptr [rsp + 0xa2], 0
m.put(Operand{2,0,8,0,4,-1,1,0,162,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080622): {next=c.rip+8; // lea rcx, [rsp + 0x130]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008062a): {next=c.rip+5; // call 0x14039bc30
{uint64_t target=next+UINT64_C(0x31b601);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008062f): {next=c.rip+8; // lea r8, [rsp + 0xa2]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,162,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080637): {next=c.rip+5; // mov edx, 0x50
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x50)}));
c.rip=next;return true;}
case UINT64_C(0x14008063c): {next=c.rip+8; // lea rcx, [rsp + 0x130]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080644): {next=c.rip+5; // call 0x14039b020
{uint64_t target=next+UINT64_C(0x31a9d7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080649): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14008064a): {next=c.rip+8; // mov r12, qword ptr [rsp + 0x130]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080652): {next=c.rip+8; // mov byte ptr [rsp + 0xa3], 0
m.put(Operand{2,0,8,0,4,-1,1,0,163,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008065a): {next=c.rip+8; // lea rcx, [rsp + 0x118]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080662): {next=c.rip+5; // call 0x14039bc30
{uint64_t target=next+UINT64_C(0x31b5c9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080667): {next=c.rip+8; // lea r8, [rsp + 0xa3]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,163,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008066f): {next=c.rip+5; // mov edx, 0x50
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x50)}));
c.rip=next;return true;}
case UINT64_C(0x140080674): {next=c.rip+8; // lea rcx, [rsp + 0x118]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008067c): {next=c.rip+5; // call 0x14039b020
{uint64_t target=next+UINT64_C(0x31a99f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080681): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140080682): {next=c.rip+10; // movabs rcx, 0x671ae3e65cd34f0d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x671ae3e65cd34f0d)}));
c.rip=next;return true;}
case UINT64_C(0x14008068c): {next=c.rip+3; // xor r13d, r13d
m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14008068f): {next=c.rip+3; // mov edx, r13d
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080692): {next=c.rip+7; // lea r8, [rip + 0x36ba87]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,3586695,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080699): {next=c.rip+6; // mov r9d, 0x7b7
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x7b7)}));
c.rip=next;return true;}
case UINT64_C(0x14008069f): {next=c.rip+10; // movabs r10, 0xc4ceb9fe1a85ec53
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x1400806a9): {next=c.rip+7; // nop dword ptr [rax]

c.rip=next;return true;}
case UINT64_C(0x1400806b0): {next=c.rip+4; // movzx eax, byte ptr [r8]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,8,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400806b4): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400806b7): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400806ba): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400806bd): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400806c1): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400806c4): {next=c.rip+4; // imul rcx, rbx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400806c8): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400806cb): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400806cf): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400806d2): {next=c.rip+4; // imul rax, r10
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400806d6): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400806d9): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400806dd): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400806e0): {next=c.rip+3; // inc rdx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400806e3): {next=c.rip+4; // lea r8, [r8 + 1]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400806e7): {next=c.rip+4; // sub r9, 1
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400806eb): {next=c.rip+2; // jne 0x1400806b0
if(m.condition(1))next=next+UINT64_C(0xffffffffffffffc3);
c.rip=next;return true;}
case UINT64_C(0x1400806ed): {next=c.rip+8; // mov qword ptr [rsp + 0xb0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,176,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400806f5): {next=c.rip+8; // mov qword ptr [rsp + 0xf0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,240,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400806fd): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400806ff): {next=c.rip+6; // mov r8d, 0x1000
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1000)}));
c.rip=next;return true;}
case UINT64_C(0x140080705): {next=c.rip+8; // lea rcx, [rsp + 0x17b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,6064,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008070d): {next=c.rip+5; // call 0x1403a6720
{uint64_t target=next+UINT64_C(0x32600e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080712): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080714): {next=c.rip+6; // mov r8d, 0x2000
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2000)}));
c.rip=next;return true;}
case UINT64_C(0x14008071a): {next=c.rip+8; // lea rcx, [rsp + 0x27b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,10160,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080722): {next=c.rip+5; // call 0x1403a6720
{uint64_t target=next+UINT64_C(0x325ff9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080727): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008072a): {next=c.rip+6; // xor rax, 0x43414e59
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x43414e59)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080730): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080733): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080737): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008073a): {next=c.rip+4; // imul rcx, rbx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14008073e): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080741): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080745): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080748): {next=c.rip+10; // movabs rdx, 0xc4ceb9fe1a85ec53
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140080752): {next=c.rip+4; // imul rax, rdx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080756): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080759): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14008075d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080760): {next=c.rip+8; // mov qword ptr [rsp + 0xd0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,208,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080768): {next=c.rip+3; // mov rbx, r14
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008076b): {next=c.rip+3; // xor rbx, rdi
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008076e): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080771): {next=c.rip+6; // xor rax, 0x4d454d54
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4d454d54)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080777): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008077a): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14008077e): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080781): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14008078b): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14008078f): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080792): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080796): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080799): {next=c.rip+4; // imul rax, rdx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14008079d): {next=c.rip+3; // mov rdi, rax
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400807a0): {next=c.rip+4; // shr rdi, 0x21
m.shift(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400807a4): {next=c.rip+3; // xor rdi, rax
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400807a7): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400807a9): {next=c.rip+6; // mov r8d, 0x20c
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x20c)}));
c.rip=next;return true;}
case UINT64_C(0x1400807af): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400807b7): {next=c.rip+5; // call 0x1403a6720
{uint64_t target=next+UINT64_C(0x325f64);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400807bc): {next=c.rip+2; // xor eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400807be): {next=c.rip+8; // mov qword ptr [rsp + 0x390], rax
m.put(Operand{2,0,64,0,4,-1,1,0,912,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400807c6): {next=c.rip+8; // mov qword ptr [rsp + 0x398], rax
m.put(Operand{2,0,64,0,4,-1,1,0,920,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400807ce): {next=c.rip+7; // mov dword ptr [rsp + 0x3a0], eax
m.put(Operand{2,0,32,0,4,-1,1,0,928,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400807d5): {next=c.rip+8; // mov word ptr [rsp + 0x3a4], ax
m.put(Operand{2,0,16,0,4,-1,1,0,932,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400807dd): {next=c.rip+7; // mov byte ptr [rsp + 0x3a6], al
m.put(Operand{2,0,8,0,4,-1,1,0,934,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400807e4): {next=c.rip+3; // xorps xmm0, xmm0
{uint8_t a[16],b[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},b);for(int k=0;k<16;k++)a[k]^=b[k];m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);}
c.rip=next;return true;}
case UINT64_C(0x1400807e7): {next=c.rip+8; // movups xmmword ptr [rsp + 0x3a8], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,936,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x1400807ef): {next=c.rip+8; // mov qword ptr [rsp + 0x3b8], rax
m.put(Operand{2,0,64,0,4,-1,1,0,952,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400807f7): {next=c.rip+3; // xorps xmm1, xmm1
{uint8_t a[16],b[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},b);for(int k=0;k<16;k++)a[k]^=b[k];m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);}
c.rip=next;return true;}
case UINT64_C(0x1400807fa): {next=c.rip+8; // movups xmmword ptr [rsp + 0x3c0], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,960,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080802): {next=c.rip+7; // mov byte ptr [rsp + 0x3d0], al
m.put(Operand{2,0,8,0,4,-1,1,0,976,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080809): {next=c.rip+8; // movups xmmword ptr [rsp + 0x3d8], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,984,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080811): {next=c.rip+8; // movups xmmword ptr [rsp + 0x3e8], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,1000,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080819): {next=c.rip+8; // mov qword ptr [rsp + 0x3f8], rax
m.put(Operand{2,0,64,0,4,-1,1,0,1016,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080821): {next=c.rip+8; // mov qword ptr [rsp + 0x400], rax
m.put(Operand{2,0,64,0,4,-1,1,0,1024,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080829): {next=c.rip+8; // movups xmmword ptr [rsp + 0x408], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,1032,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080831): {next=c.rip+8; // mov word ptr [rsp + 0x418], ax
m.put(Operand{2,0,16,0,4,-1,1,0,1048,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080839): {next=c.rip+8; // movups xmmword ptr [rsp + 0x41a], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,1050,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080841): {next=c.rip+7; // mov byte ptr [rsp + 0x42a], al
m.put(Operand{2,0,8,0,4,-1,1,0,1066,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080848): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14008084a): {next=c.rip+6; // mov r8d, 0x200
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x200)}));
c.rip=next;return true;}
case UINT64_C(0x140080850): {next=c.rip+8; // lea rcx, [rsp + 0x430]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,1072,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080858): {next=c.rip+5; // call 0x1403a6720
{uint64_t target=next+UINT64_C(0x325ec3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008085d): {next=c.rip+3; // xorps xmm0, xmm0
{uint8_t a[16],b[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},b);for(int k=0;k<16;k++)a[k]^=b[k];m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);}
c.rip=next;return true;}
case UINT64_C(0x140080860): {next=c.rip+8; // movups xmmword ptr [rsp + 0x630], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,1584,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080868): {next=c.rip+8; // movups xmmword ptr [rsp + 0x640], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,1600,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080870): {next=c.rip+2; // xor eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080872): {next=c.rip+7; // mov dword ptr [rsp + 0x650], eax
m.put(Operand{2,0,32,0,4,-1,1,0,1616,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080879): {next=c.rip+8; // mov word ptr [rsp + 0x654], ax
m.put(Operand{2,0,16,0,4,-1,1,0,1620,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080881): {next=c.rip+8; // movups xmmword ptr [rsp + 0x658], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,1624,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080889): {next=c.rip+7; // mov dword ptr [rsp + 0x668], eax
m.put(Operand{2,0,32,0,4,-1,1,0,1640,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080890): {next=c.rip+8; // mov word ptr [rsp + 0x66c], ax
m.put(Operand{2,0,16,0,4,-1,1,0,1644,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080898): {next=c.rip+8; // movups xmmword ptr [rsp + 0x66e], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,1646,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x1400808a0): {next=c.rip+7; // mov dword ptr [rsp + 0x67e], eax
m.put(Operand{2,0,32,0,4,-1,1,0,1662,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400808a7): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400808a9): {next=c.rip+6; // mov r8d, 0x1f0
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1f0)}));
c.rip=next;return true;}
case UINT64_C(0x1400808af): {next=c.rip+8; // lea rcx, [rsp + 0x682]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,1666,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400808b7): {next=c.rip+5; // call 0x1403a6720
{uint64_t target=next+UINT64_C(0x325e64);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400808bc): {next=c.rip+2; // xor eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400808be): {next=c.rip+8; // mov qword ptr [rsp + 0x872], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2162,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400808c6): {next=c.rip+8; // mov word ptr [rsp + 0x87a], ax
m.put(Operand{2,0,16,0,4,-1,1,0,2170,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400808ce): {next=c.rip+3; // xorps xmm0, xmm0
{uint8_t a[16],b[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},b);for(int k=0;k<16;k++)a[k]^=b[k];m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);}
c.rip=next;return true;}
case UINT64_C(0x1400808d1): {next=c.rip+8; // movups xmmword ptr [rsp + 0x880], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,2176,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x1400808d9): {next=c.rip+8; // mov qword ptr [rsp + 0x890], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2192,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400808e1): {next=c.rip+7; // mov dword ptr [rsp + 0x898], eax
m.put(Operand{2,0,32,0,4,-1,1,0,2200,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400808e8): {next=c.rip+8; // mov word ptr [rsp + 0x89c], ax
m.put(Operand{2,0,16,0,4,-1,1,0,2204,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400808f0): {next=c.rip+8; // movups xmmword ptr [rsp + 0x89e], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,2206,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x1400808f8): {next=c.rip+8; // mov word ptr [rsp + 0x8ae], ax
m.put(Operand{2,0,16,0,4,-1,1,0,2222,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080900): {next=c.rip+8; // movups xmmword ptr [rsp + 0x8bc], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,2236,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080908): {next=c.rip+8; // mov word ptr [rsp + 0x8cc], ax
m.put(Operand{2,0,16,0,4,-1,1,0,2252,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080910): {next=c.rip+3; // xorps xmm1, xmm1
{uint8_t a[16],b[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},b);for(int k=0;k<16;k++)a[k]^=b[k];m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);}
c.rip=next;return true;}
case UINT64_C(0x140080913): {next=c.rip+8; // movups xmmword ptr [rsp + 0x8d0], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,2256,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14008091b): {next=c.rip+8; // mov qword ptr [rsp + 0x8e0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2272,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080923): {next=c.rip+8; // movups xmmword ptr [rsp + 0x8e8], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,2280,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14008092b): {next=c.rip+8; // mov word ptr [rsp + 0x8f8], ax
m.put(Operand{2,0,16,0,4,-1,1,0,2296,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080933): {next=c.rip+8; // movups xmmword ptr [rsp + 0x900], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,2304,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14008093b): {next=c.rip+8; // mov qword ptr [rsp + 0x918], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2328,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080943): {next=c.rip+8; // mov qword ptr [rsp + 0x920], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2336,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008094b): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14008094d): {next=c.rip+6; // mov r8d, 0x100
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x100)}));
c.rip=next;return true;}
case UINT64_C(0x140080953): {next=c.rip+8; // lea rcx, [rsp + 0x928]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,2344,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008095b): {next=c.rip+5; // call 0x1403a6720
{uint64_t target=next+UINT64_C(0x325dc0);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080960): {next=c.rip+3; // xorps xmm0, xmm0
{uint8_t a[16],b[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},b);for(int k=0;k<16;k++)a[k]^=b[k];m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);}
c.rip=next;return true;}
case UINT64_C(0x140080963): {next=c.rip+2; // xor eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080965): {next=c.rip+8; // movups xmmword ptr [rsp + 0xa28], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,2600,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14008096d): {next=c.rip+8; // mov qword ptr [rsp + 0xa38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2616,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080975): {next=c.rip+8; // movups xmmword ptr [rsp + 0xa40], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,2624,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14008097d): {next=c.rip+8; // mov word ptr [rsp + 0xa50], ax
m.put(Operand{2,0,16,0,4,-1,1,0,2640,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080985): {next=c.rip+8; // movups xmmword ptr [rsp + 0xa58], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,2648,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14008098d): {next=c.rip+8; // mov qword ptr [rsp + 0xa68], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2664,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080995): {next=c.rip+7; // mov dword ptr [rsp + 0xa70], eax
m.put(Operand{2,0,32,0,4,-1,1,0,2672,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008099c): {next=c.rip+8; // mov word ptr [rsp + 0xa74], ax
m.put(Operand{2,0,16,0,4,-1,1,0,2676,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400809a4): {next=c.rip+7; // mov byte ptr [rsp + 0xa76], al
m.put(Operand{2,0,8,0,4,-1,1,0,2678,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400809ab): {next=c.rip+8; // movups xmmword ptr [rsp + 0xa78], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,2680,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x1400809b3): {next=c.rip+8; // mov qword ptr [rsp + 0xa88], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2696,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400809bb): {next=c.rip+3; // xorps xmm1, xmm1
{uint8_t a[16],b[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},b);for(int k=0;k<16;k++)a[k]^=b[k];m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);}
c.rip=next;return true;}
case UINT64_C(0x1400809be): {next=c.rip+8; // movups xmmword ptr [rsp + 0xa90], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,2704,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x1400809c6): {next=c.rip+8; // mov qword ptr [rsp + 0xaa0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2720,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400809ce): {next=c.rip+8; // movups xmmword ptr [rsp + 0xaa8], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,2728,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x1400809d6): {next=c.rip+7; // mov byte ptr [rsp + 0xab8], al
m.put(Operand{2,0,8,0,4,-1,1,0,2744,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400809dd): {next=c.rip+8; // movups xmmword ptr [rsp + 0xac0], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,2752,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x1400809e5): {next=c.rip+8; // movups xmmword ptr [rsp + 0xad0], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,2768,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x1400809ed): {next=c.rip+7; // mov byte ptr [rsp + 0xae0], al
m.put(Operand{2,0,8,0,4,-1,1,0,2784,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400809f4): {next=c.rip+8; // mov qword ptr [rsp + 0xb20], r13
m.put(Operand{2,0,64,0,4,-1,1,0,2848,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400809fc): {next=c.rip+8; // mov qword ptr [rsp + 0xb28], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2856,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080a04): {next=c.rip+8; // mov word ptr [rsp + 0xb30], ax
m.put(Operand{2,0,16,0,4,-1,1,0,2864,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080a0c): {next=c.rip+7; // mov byte ptr [rsp + 0xb32], al
m.put(Operand{2,0,8,0,4,-1,1,0,2866,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080a13): {next=c.rip+8; // movups xmmword ptr [rsp + 0xb38], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,2872,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080a1b): {next=c.rip+8; // movups xmmword ptr [rsp + 0xb48], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,2888,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080a23): {next=c.rip+8; // movups xmmword ptr [rsp + 0xb58], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,2904,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080a2b): {next=c.rip+8; // movups xmmword ptr [rsp + 0xb68], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,2920,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080a33): {next=c.rip+8; // mov qword ptr [rsp + 0xb78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2936,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080a3b): {next=c.rip+7; // mov dword ptr [rsp + 0xb80], eax
m.put(Operand{2,0,32,0,4,-1,1,0,2944,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080a42): {next=c.rip+8; // mov word ptr [rsp + 0xb84], ax
m.put(Operand{2,0,16,0,4,-1,1,0,2948,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080a4a): {next=c.rip+7; // mov byte ptr [rsp + 0xb86], al
m.put(Operand{2,0,8,0,4,-1,1,0,2950,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080a51): {next=c.rip+8; // mov qword ptr [rsp + 0xb88], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2952,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080a59): {next=c.rip+7; // mov dword ptr [rsp + 0xb90], eax
m.put(Operand{2,0,32,0,4,-1,1,0,2960,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080a60): {next=c.rip+7; // mov byte ptr [rsp + 0xb94], al
m.put(Operand{2,0,8,0,4,-1,1,0,2964,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080a67): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080a69): {next=c.rip+6; // mov r8d, 0x200
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x200)}));
c.rip=next;return true;}
case UINT64_C(0x140080a6f): {next=c.rip+8; // lea rcx, [rsp + 0xb95]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,2965,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080a77): {next=c.rip+5; // call 0x1403a6720
{uint64_t target=next+UINT64_C(0x325ca4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080a7c): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080a7e): {next=c.rip+6; // mov r8d, 0x400
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x400)}));
c.rip=next;return true;}
case UINT64_C(0x140080a84): {next=c.rip+8; // lea rcx, [rsp + 0xd95]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,3477,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080a8c): {next=c.rip+5; // call 0x1403a6720
{uint64_t target=next+UINT64_C(0x325c8f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080a91): {next=c.rip+2; // xor eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080a93): {next=c.rip+8; // mov qword ptr [rsp + 0x1195], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4501,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080a9b): {next=c.rip+8; // mov word ptr [rsp + 0x119d], ax
m.put(Operand{2,0,16,0,4,-1,1,0,4509,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080aa3): {next=c.rip+7; // mov byte ptr [rsp + 0x119f], al
m.put(Operand{2,0,8,0,4,-1,1,0,4511,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080aaa): {next=c.rip+3; // xorps xmm0, xmm0
{uint8_t a[16],b[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},b);for(int k=0;k<16;k++)a[k]^=b[k];m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);}
c.rip=next;return true;}
case UINT64_C(0x140080aad): {next=c.rip+8; // movups xmmword ptr [rsp + 0x11a0], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4512,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080ab5): {next=c.rip+3; // xorps xmm1, xmm1
{uint8_t a[16],b[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},b);for(int k=0;k<16;k++)a[k]^=b[k];m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},a);}
c.rip=next;return true;}
case UINT64_C(0x140080ab8): {next=c.rip+8; // movups xmmword ptr [rsp + 0x11b0], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4528,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080ac0): {next=c.rip+7; // mov dword ptr [rsp + 0x11c0], eax
m.put(Operand{2,0,32,0,4,-1,1,0,4544,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080ac7): {next=c.rip+8; // mov qword ptr [rsp + 0x11c4], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4548,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080acf): {next=c.rip+8; // mov qword ptr [rsp + 0x11cc], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4556,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080ad7): {next=c.rip+7; // mov dword ptr [rsp + 0x11d4], eax
m.put(Operand{2,0,32,0,4,-1,1,0,4564,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080ade): {next=c.rip+8; // movups xmmword ptr [rsp + 0x11d8], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4568,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080ae6): {next=c.rip+8; // mov qword ptr [rsp + 0x11e8], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4584,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080aee): {next=c.rip+7; // mov dword ptr [rsp + 0x11f0], eax
m.put(Operand{2,0,32,0,4,-1,1,0,4592,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080af5): {next=c.rip+8; // mov word ptr [rsp + 0x11f4], ax
m.put(Operand{2,0,16,0,4,-1,1,0,4596,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080afd): {next=c.rip+7; // mov byte ptr [rsp + 0x11f6], al
m.put(Operand{2,0,8,0,4,-1,1,0,4598,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080b04): {next=c.rip+8; // movups xmmword ptr [rsp + 0x11f8], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4600,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080b0c): {next=c.rip+8; // mov qword ptr [rsp + 0x1208], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4616,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080b14): {next=c.rip+7; // mov dword ptr [rsp + 0x1210], eax
m.put(Operand{2,0,32,0,4,-1,1,0,4624,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080b1b): {next=c.rip+8; // movups xmmword ptr [rsp + 0x1214], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4628,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080b23): {next=c.rip+8; // mov qword ptr [rsp + 0x1224], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4644,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080b2b): {next=c.rip+8; // movups xmmword ptr [rsp + 0x1230], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4656,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080b33): {next=c.rip+8; // movups xmmword ptr [rsp + 0x1240], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4672,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080b3b): {next=c.rip+8; // movups xmmword ptr [rsp + 0x1258], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4696,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080b43): {next=c.rip+8; // movups xmmword ptr [rsp + 0x1268], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4712,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080b4b): {next=c.rip+8; // movups xmmword ptr [rsp + 0x1278], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4728,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080b53): {next=c.rip+8; // movups xmmword ptr [rsp + 0x1288], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4744,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080b5b): {next=c.rip+8; // movups xmmword ptr [rsp + 0x1298], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4760,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080b63): {next=c.rip+8; // movups xmmword ptr [rsp + 0x12a8], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4776,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080b6b): {next=c.rip+8; // mov qword ptr [rsp + 0x12b8], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4792,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080b73): {next=c.rip+8; // mov qword ptr [rsp + 0x12c0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4800,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080b7b): {next=c.rip+7; // mov dword ptr [rsp + 0x12c8], eax
m.put(Operand{2,0,32,0,4,-1,1,0,4808,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080b82): {next=c.rip+8; // mov word ptr [rsp + 0x12cc], ax
m.put(Operand{2,0,16,0,4,-1,1,0,4812,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080b8a): {next=c.rip+8; // mov qword ptr [rsp + 0x12d0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4816,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080b92): {next=c.rip+8; // movups xmmword ptr [rsp + 0x12d8], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4824,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080b9a): {next=c.rip+8; // mov word ptr [rsp + 0x12e8], ax
m.put(Operand{2,0,16,0,4,-1,1,0,4840,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080ba2): {next=c.rip+8; // movups xmmword ptr [rsp + 0x12f0], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4848,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080baa): {next=c.rip+8; // movups xmmword ptr [rsp + 0x1300], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4864,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080bb2): {next=c.rip+8; // mov qword ptr [rsp + 0x1310], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4880,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080bba): {next=c.rip+8; // mov qword ptr [rsp + 0x1318], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4888,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080bc2): {next=c.rip+7; // mov dword ptr [rsp + 0x1320], eax
m.put(Operand{2,0,32,0,4,-1,1,0,4896,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080bc9): {next=c.rip+7; // mov dword ptr [rsp + 0x1325], eax
m.put(Operand{2,0,32,0,4,-1,1,0,4901,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080bd0): {next=c.rip+8; // mov word ptr [rsp + 0x1329], ax
m.put(Operand{2,0,16,0,4,-1,1,0,4905,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080bd8): {next=c.rip+8; // movups xmmword ptr [rsp + 0x1330], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4912,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080be0): {next=c.rip+8; // movups xmmword ptr [rsp + 0x1340], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4928,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080be8): {next=c.rip+8; // movups xmmword ptr [rsp + 0x1350], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4944,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080bf0): {next=c.rip+7; // mov dword ptr [rsp + 0x1360], eax
m.put(Operand{2,0,32,0,4,-1,1,0,4960,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080bf7): {next=c.rip+8; // mov word ptr [rsp + 0x1364], ax
m.put(Operand{2,0,16,0,4,-1,1,0,4964,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080bff): {next=c.rip+8; // movups xmmword ptr [rsp + 0x1368], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,4968,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x140080c07): {next=c.rip+8; // mov qword ptr [rsp + 0x8b0], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,2224,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080c0f): {next=c.rip+11; // mov dword ptr [rsp + 0x8b8], 0x7b7
m.put(Operand{2,0,32,0,4,-1,1,0,2232,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x7b7)}));
c.rip=next;return true;}
case UINT64_C(0x140080c1a): {next=c.rip+7; // mov byte ptr [rsp + 0x1324], al
m.put(Operand{2,0,8,0,4,-1,1,0,4900,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080c21): {next=c.rip+8; // mov qword ptr [rsp + 0x900], r12
m.put(Operand{2,0,64,0,4,-1,1,0,2304,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080c29): {next=c.rip+11; // mov dword ptr [rsp + 0x908], 0xffffffff
m.put(Operand{2,0,32,0,4,-1,1,0,2312,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xffffffff)}));
c.rip=next;return true;}
case UINT64_C(0x140080c34): {next=c.rip+8; // mov qword ptr [rsp + 0x910], r13
m.put(Operand{2,0,64,0,4,-1,1,0,2320,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080c3c): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x118]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080c44): {next=c.rip+8; // mov qword ptr [rsp + 0x1368], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4968,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080c4c): {next=c.rip+11; // mov dword ptr [rsp + 0x1370], 0x19
m.put(Operand{2,0,32,0,4,-1,1,0,4976,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x19)}));
c.rip=next;return true;}
case UINT64_C(0x140080c57): {next=c.rip+8; // mov dword ptr [rsp + 0x11c4], r13d
m.put(Operand{2,0,32,0,4,-1,1,0,4548,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080c5f): {next=c.rip+11; // mov dword ptr [rsp + 0x1374], 0xffffffff
m.put(Operand{2,0,32,0,4,-1,1,0,4980,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xffffffff)}));
c.rip=next;return true;}
case UINT64_C(0x140080c6a): {next=c.rip+8; // lea rax, [rsp + 0x17b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,6064,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080c72): {next=c.rip+8; // mov qword ptr [rsp + 0x408], rax
m.put(Operand{2,0,64,0,4,-1,1,0,1032,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080c7a): {next=c.rip+8; // lea rax, [rsp + 0x27b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,10160,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080c82): {next=c.rip+8; // mov qword ptr [rsp + 0x410], rax
m.put(Operand{2,0,64,0,4,-1,1,0,1040,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080c8a): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080c8d): {next=c.rip+6; // xor rax, 0x4354524c
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4354524c)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080c93): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080c96): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080c9a): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080c9d): {next=c.rip+10; // movabs r11, 0xff51afd7ed558ccd
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140080ca7): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080cab): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080cae): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080cb2): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080cb5): {next=c.rip+10; // movabs rsi, 0xc4ceb9fe1a85ec53
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140080cbf): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080cc3): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080cc6): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080cca): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080ccd): {next=c.rip+8; // mov qword ptr [rsp + 0x1230], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4656,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080cd5): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080cd8): {next=c.rip+6; // xor rax, 0x43545253
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x43545253)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080cde): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080ce1): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080ce5): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080ce8): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080cec): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080cef): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080cf3): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080cf6): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080cfa): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080cfd): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080d01): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080d04): {next=c.rip+4; // or rdx, 1
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080d08): {next=c.rip+8; // mov qword ptr [rsp + 0x1238], rdx
m.put(Operand{2,0,64,0,4,-1,1,0,4664,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080d10): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080d13): {next=c.rip+6; // xor rax, 0x43545254
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x43545254)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080d19): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080d1c): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080d20): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080d23): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080d27): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080d2a): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080d2e): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080d31): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080d35): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080d38): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080d3c): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080d3f): {next=c.rip+4; // or rdx, 1
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080d43): {next=c.rip+8; // mov qword ptr [rsp + 0x1240], rdx
m.put(Operand{2,0,64,0,4,-1,1,0,4672,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080d4b): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080d4e): {next=c.rip+6; // xor rax, 0x4354464d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4354464d)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080d54): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080d57): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080d5b): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080d5e): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080d62): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080d65): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080d69): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080d6c): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080d70): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080d73): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080d77): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080d7a): {next=c.rip+3; // and dl, 1
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8));
c.rip=next;return true;}
case UINT64_C(0x140080d7d): {next=c.rip+7; // mov byte ptr [rsp + 0x1248], dl
m.put(Operand{2,0,8,0,4,-1,1,0,4680,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080d84): {next=c.rip+8; // lea r8, [rsp + 0x12c0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,4800,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080d8c): {next=c.rip+3; // mov rdx, r14
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080d8f): {next=c.rip+8; // lea r9, [rsp + 0x1250]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,4688,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080d97): {next=c.rip+6; // mov r10d, 0xe
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xe)}));
c.rip=next;return true;}
case UINT64_C(0x140080d9d): {next=c.rip+3; // nop dword ptr [rax]

c.rip=next;return true;}
case UINT64_C(0x140080da0): {next=c.rip+3; // mov qword ptr [r9], r13
m.put(Operand{2,0,64,0,9,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080da3): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080da6): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080daa): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080dad): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080db1): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080db4): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080db8): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080dbb): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140080dbf): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080dc2): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140080dc6): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080dc9): {next=c.rip+3; // mov byte ptr [r8], cl
m.put(Operand{2,0,8,0,8,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080dcc): {next=c.rip+3; // inc rdx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140080dcf): {next=c.rip+4; // lea r9, [r9 + 8]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,9,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080dd3): {next=c.rip+4; // lea r8, [r8 + 1]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080dd7): {next=c.rip+4; // sub r10, 1
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140080ddb): {next=c.rip+2; // jne 0x140080da0
if(m.condition(1))next=next+UINT64_C(0xffffffffffffffc3);
c.rip=next;return true;}
case UINT64_C(0x140080ddd): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080ddf): {next=c.rip+6; // mov r8d, 0x1746e
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1746e)}));
c.rip=next;return true;}
case UINT64_C(0x140080de5): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080ded): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc8bae);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080df2): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080df5): {next=c.rip+4; // lea edx, [r8 + 1]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080df9): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080e01): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc8b9a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080e06): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080e09): {next=c.rip+4; // lea edx, [r8 + 2]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080e0d): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080e15): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc8b86);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080e1a): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080e1d): {next=c.rip+4; // lea edx, [r8 + 3]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,3,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080e21): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080e29): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc8b72);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080e2e): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080e31): {next=c.rip+4; // lea edx, [r8 + 0xa]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,10,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080e35): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080e3d): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc8b5e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080e42): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080e45): {next=c.rip+4; // lea edx, [r8 + 4]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,4,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080e49): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080e51): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc8b4a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080e56): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080e59): {next=c.rip+4; // lea edx, [r8 + 5]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,5,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080e5d): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080e65): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc8b36);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080e6a): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080e6d): {next=c.rip+4; // lea edx, [r8 + 6]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,6,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080e71): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080e79): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc8b22);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080e7e): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080e81): {next=c.rip+4; // lea edx, [r8 + 7]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,7,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080e85): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080e8d): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc8b0e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080e92): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080e95): {next=c.rip+4; // lea edx, [r8 + 8]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080e99): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080ea1): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc8afa);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080ea6): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080ea9): {next=c.rip+4; // lea edx, [r8 + 9]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,9,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080ead): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080eb5): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc8ae6);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080eba): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080ebd): {next=c.rip+4; // lea edx, [r8 + 0xb]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,11,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080ec1): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080ec9): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc8ad2);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080ece): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080ed1): {next=c.rip+4; // lea edx, [r8 + 0xc]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,12,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080ed5): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080edd): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc8abe);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080ee2): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140080ee5): {next=c.rip+4; // lea edx, [r8 + 0xd]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,13,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080ee9): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080ef1): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc8aaa);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080ef6): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080ef9): {next=c.rip+7; // xor rcx, 0x54524559
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x54524559)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080f00): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff8113b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080f05): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080f09): {next=c.rip+8; // mov qword ptr [rsp + 0x390], rax
m.put(Operand{2,0,64,0,4,-1,1,0,912,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080f11): {next=c.rip+8; // mov qword ptr [rsp + 0x12d0], r13
m.put(Operand{2,0,64,0,4,-1,1,0,4816,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080f19): {next=c.rip+8; // mov rsi, qword ptr [rsp + 0xa8]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,168,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080f21): {next=c.rip+8; // mov qword ptr [rsp + 0x3a8], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,936,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080f29): {next=c.rip+10; // movabs rax, 0x671ae3e65cd34f0d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x671ae3e65cd34f0d)}));
c.rip=next;return true;}
case UINT64_C(0x140080f33): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080f3b): {next=c.rip+8; // mov qword ptr [rsp + 0x3b8], r14
m.put(Operand{2,0,64,0,4,-1,1,0,952,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080f43): {next=c.rip+8; // mov dword ptr [rsp + 0xaa8], r13d
m.put(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080f4b): {next=c.rip+8; // mov r12, qword ptr [rsp + 0xb0]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,176,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080f53): {next=c.rip+8; // mov qword ptr [rsp + 0xab0], r12
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080f5b): {next=c.rip+3; // mov rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080f5e): {next=c.rip+3; // xor rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080f61): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff810da);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080f66): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080f6e): {next=c.rip+8; // mov qword ptr [rsp + 0xac8], r14
m.put(Operand{2,0,64,0,4,-1,1,0,2760,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080f76): {next=c.rip+5; // mov edx, 0x50
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x50)}));
c.rip=next;return true;}
case UINT64_C(0x140080f7b): {next=c.rip+9; // mov rax, qword ptr gs:[0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,-1,-1,1,1,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080f84): {next=c.rip+3; // mov rcx, qword ptr [rax]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080f87): {next=c.rip+8; // lea rax, [rsp + 0x180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080f8f): {next=c.rip+4; // mov qword ptr [rdx + rcx], rax
m.put(Operand{2,0,64,0,2,1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080f93): {next=c.rip+10; // movabs rax, 0x1d03b1512f9e93a3
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1d03b1512f9e93a3)}));
c.rip=next;return true;}
case UINT64_C(0x140080f9d): {next=c.rip+3; // cmp r12, rax
m.arithmetic(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140080fa0): {next=c.rip+2; // je 0x140080fb4
if(m.condition(0))next=next+UINT64_C(0x12);
c.rip=next;return true;}
case UINT64_C(0x140080fa2): {next=c.rip+5; // mov edx, 0x41545453
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x41545453)}));
c.rip=next;return true;}
case UINT64_C(0x140080fa7): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080faf): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffc837c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080fb4): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xb8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,184,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080fbc): {next=c.rip+3; // xor rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080fbf): {next=c.rip+3; // xor rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080fc2): {next=c.rip+7; // lea rax, [rip - 0x7bb79]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-506745,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080fc9): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080fcc): {next=c.rip+7; // xor rcx, 0x41534531
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x41534531)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080fd3): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff81068);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140080fd8): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140080fdc): {next=c.rip+8; // mov qword ptr [rsp + 0x880], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2176,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080fe4): {next=c.rip+8; // mov qword ptr [rsp + 0x888], r13
m.put(Operand{2,0,64,0,4,-1,1,0,2184,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080fec): {next=c.rip+11; // mov dword ptr [rsp + 0x11c8], 0x20
m.put(Operand{2,0,32,0,4,-1,1,0,4552,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x20)}));
c.rip=next;return true;}
case UINT64_C(0x140080ff7): {next=c.rip+8; // mov dword ptr [rsp + 0x11c4], r13d
m.put(Operand{2,0,32,0,4,-1,1,0,4548,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140080fff): {next=c.rip+8; // mov rax, qword ptr [rsp + 0xd0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,208,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081007): {next=c.rip+8; // mov qword ptr [rsp + 0x11d8], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4568,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008100f): {next=c.rip+8; // mov qword ptr [rsp + 0x11e0], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,4576,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081017): {next=c.rip+8; // mov qword ptr [rsp + 0xa78], r15
m.put(Operand{2,0,64,0,4,-1,1,0,2680,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008101f): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081022): {next=c.rip+7; // xor rcx, 0x534d4353
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x534d4353)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081029): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff81012);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008102e): {next=c.rip+8; // mov qword ptr [rsp + 0xa80], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2688,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081036): {next=c.rip+8; // mov qword ptr [rsp + 0xa88], r13
m.put(Operand{2,0,64,0,4,-1,1,0,2696,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008103e): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xd8]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,216,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081046): {next=c.rip+8; // lea rcx, [rsp + 0xae8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,2792,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008104e): {next=c.rip+5; // call 0x140398250
{uint64_t target=next+UINT64_C(0x3171fd);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081053): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081056): {next=c.rip+7; // xor rcx, 0x4c495645
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4c495645)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008105d): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80fde);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081062): {next=c.rip+8; // mov qword ptr [rsp + 0x3d8], rax
m.put(Operand{2,0,64,0,4,-1,1,0,984,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008106a): {next=c.rip+8; // mov dword ptr [rsp + 0x8d0], r13d
m.put(Operand{2,0,32,0,4,-1,1,0,2256,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081072): {next=c.rip+6; // xor rax, 0x464f524d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x464f524d)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081078): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008107b): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80fc0);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081080): {next=c.rip+2; // and al, 1
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8));
c.rip=next;return true;}
case UINT64_C(0x140081082): {next=c.rip+7; // mov byte ptr [rsp + 0x8d4], al
m.put(Operand{2,0,8,0,4,-1,1,0,2260,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081089): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3d8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,984,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081091): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80faa);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081096): {next=c.rip+8; // mov qword ptr [rsp + 0x3e0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,992,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008109e): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3d8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,984,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400810a6): {next=c.rip+7; // xor rcx, 0x4c495645
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4c495645)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400810ad): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80f8e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400810b2): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400810b6): {next=c.rip+8; // mov qword ptr [rsp + 0x3e8], rax
m.put(Operand{2,0,64,0,4,-1,1,0,1000,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400810be): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3d8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,984,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400810c6): {next=c.rip+7; // xor rcx, 0x544b5231
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x544b5231)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400810cd): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80f6e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400810d2): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400810d6): {next=c.rip+8; // mov qword ptr [rsp + 0x12f0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4848,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400810de): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3d8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,984,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400810e6): {next=c.rip+7; // xor rcx, 0x53544b4b
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x53544b4b)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400810ed): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80f4e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400810f2): {next=c.rip+8; // mov qword ptr [rsp + 0x3f0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,1008,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400810fa): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3d8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,984,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081102): {next=c.rip+7; // xor rcx, 0x53544b53
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x53544b53)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081109): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80f32);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008110e): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081112): {next=c.rip+8; // mov qword ptr [rsp + 0x3f8], rax
m.put(Operand{2,0,64,0,4,-1,1,0,1016,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008111a): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3d8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,984,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081122): {next=c.rip+7; // xor rcx, 0x544b5232
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x544b5232)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081129): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80f12);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008112e): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081132): {next=c.rip+8; // mov qword ptr [rsp + 0x12f8], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4856,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008113a): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008113d): {next=c.rip+7; // xor rcx, 0x52415443
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x52415443)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081144): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80ef7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081149): {next=c.rip+8; // mov qword ptr [rsp + 0x1300], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4864,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081151): {next=c.rip+8; // mov qword ptr [rsp + 0x1308], r13
m.put(Operand{2,0,64,0,4,-1,1,0,4872,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081159): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008115c): {next=c.rip+7; // xor rcx, 0x43465345
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x43465345)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081163): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80ed8);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081168): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008116b): {next=c.rip+5; // call 0x14004ab70
{uint64_t target=next+UINT64_C(0xfffffffffffc9a00);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081170): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081173): {next=c.rip+7; // xor rcx, 0x524f5021
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x524f5021)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008117a): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80ec1);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008117f): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081183): {next=c.rip+8; // mov qword ptr [rsp + 0x630], rax
m.put(Operand{2,0,64,0,4,-1,1,0,1584,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008118b): {next=c.rip+8; // mov dword ptr [rsp + 0x638], r13d
m.put(Operand{2,0,32,0,4,-1,1,0,1592,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081193): {next=c.rip+8; // mov qword ptr [rsp + 0x640], r13
m.put(Operand{2,0,64,0,4,-1,1,0,1600,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008119b): {next=c.rip+8; // mov qword ptr [rsp + 0x648], r13
m.put(Operand{2,0,64,0,4,-1,1,0,1608,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400811a3): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400811a6): {next=c.rip+7; // xor rcx, 0x42524b59
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x42524b59)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400811ad): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80e8e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400811b2): {next=c.rip+3; // or eax, 1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400811b5): {next=c.rip+7; // mov dword ptr [rsp + 0x11a0], eax
m.put(Operand{2,0,32,0,4,-1,1,0,4512,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400811bc): {next=c.rip+8; // mov qword ptr [rsp + 0x11a8], r13
m.put(Operand{2,0,64,0,4,-1,1,0,4520,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400811c4): {next=c.rip+7; // mov ecx, dword ptr [rsp + 0x630]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,1584,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400811cb): {next=c.rip+3; // and ecx, 7
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x7)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400811ce): {next=c.rip+7; // lea rdx, [rip - 0x811d5]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-528853,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400811d5): {next=c.rip+8; // mov rax, qword ptr [rdx + rcx*8 + 0x3dbca0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,1,8,0,4045984,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400811dd): {next=c.rip+8; // mov qword ptr [rsp + 0xb38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2872,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400811e5): {next=c.rip+3; // lea eax, [rcx + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400811e8): {next=c.rip+3; // and eax, 7
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x7)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400811eb): {next=c.rip+8; // mov rax, qword ptr [rdx + rax*8 + 0x3dbca0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,0,8,0,4045984,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400811f3): {next=c.rip+8; // mov qword ptr [rsp + 0xb40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2880,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400811fb): {next=c.rip+3; // lea eax, [rcx + 2]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400811fe): {next=c.rip+3; // and eax, 7
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x7)}),32));
c.rip=next;return true;}
case UINT64_C(0x140081201): {next=c.rip+8; // mov rax, qword ptr [rdx + rax*8 + 0x3dbca0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,0,8,0,4045984,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081209): {next=c.rip+8; // mov qword ptr [rsp + 0xb48], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2888,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081211): {next=c.rip+3; // lea eax, [rcx + 3]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,-1,1,0,3,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081214): {next=c.rip+3; // and eax, 7
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x7)}),32));
c.rip=next;return true;}
case UINT64_C(0x140081217): {next=c.rip+8; // mov rax, qword ptr [rdx + rax*8 + 0x3dbca0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,0,8,0,4045984,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008121f): {next=c.rip+8; // mov qword ptr [rsp + 0xb50], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2896,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081227): {next=c.rip+3; // lea eax, [rcx - 4]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,-1,1,0,-4,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008122a): {next=c.rip+3; // and eax, 7
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x7)}),32));
c.rip=next;return true;}
case UINT64_C(0x14008122d): {next=c.rip+8; // mov rax, qword ptr [rdx + rax*8 + 0x3dbca0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,0,8,0,4045984,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081235): {next=c.rip+8; // mov qword ptr [rsp + 0xb58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2904,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008123d): {next=c.rip+3; // lea eax, [rcx - 3]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,-1,1,0,-3,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081240): {next=c.rip+3; // and eax, 7
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x7)}),32));
c.rip=next;return true;}
case UINT64_C(0x140081243): {next=c.rip+8; // mov rax, qword ptr [rdx + rax*8 + 0x3dbca0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,0,8,0,4045984,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008124b): {next=c.rip+8; // mov qword ptr [rsp + 0xb60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2912,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081253): {next=c.rip+3; // lea eax, [rcx - 2]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,-1,1,0,-2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081256): {next=c.rip+3; // and eax, 7
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x7)}),32));
c.rip=next;return true;}
case UINT64_C(0x140081259): {next=c.rip+8; // mov rax, qword ptr [rdx + rax*8 + 0x3dbca0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,0,8,0,4045984,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081261): {next=c.rip+8; // mov qword ptr [rsp + 0xb68], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2920,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081269): {next=c.rip+3; // lea eax, [rcx - 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008126c): {next=c.rip+3; // and eax, 7
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x7)}),32));
c.rip=next;return true;}
case UINT64_C(0x14008126f): {next=c.rip+8; // mov rax, qword ptr [rdx + rax*8 + 0x3dbca0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,0,8,0,4045984,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081277): {next=c.rip+8; // mov qword ptr [rsp + 0xb70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2928,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008127f): {next=c.rip+8; // lea rax, [rsp + 0x13d0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,5072,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081287): {next=c.rip+8; // mov qword ptr [rsp + 0x658], rax
m.put(Operand{2,0,64,0,4,-1,1,0,1624,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008128f): {next=c.rip+11; // mov dword ptr [rsp + 0xa64], 0x3e
m.put(Operand{2,0,32,0,4,-1,1,0,2660,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3e)}));
c.rip=next;return true;}
case UINT64_C(0x14008129a): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008129d): {next=c.rip+7; // xor rcx, 0x4a495421
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4a495421)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400812a4): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80d97);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400812a9): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400812ad): {next=c.rip+8; // mov qword ptr [rsp + 0xa58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2648,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400812b5): {next=c.rip+8; // mov dword ptr [rsp + 0xa60], r13d
m.put(Operand{2,0,32,0,4,-1,1,0,2656,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400812bd): {next=c.rip+8; // mov qword ptr [rsp + 0x1208], r13
m.put(Operand{2,0,64,0,4,-1,1,0,4616,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400812c5): {next=c.rip+8; // mov dword ptr [rsp + 0x1210], r13d
m.put(Operand{2,0,32,0,4,-1,1,0,4624,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400812cd): {next=c.rip+8; // mov dword ptr [rsp + 0x924], r13d
m.put(Operand{2,0,32,0,4,-1,1,0,2340,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400812d5): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400812d8): {next=c.rip+7; // xor rcx, 0x4d44524f
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4d44524f)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400812df): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80d5c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400812e4): {next=c.rip+7; // mov dword ptr [rsp + 0xa3c], eax
m.put(Operand{2,0,32,0,4,-1,1,0,2620,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400812eb): {next=c.rip+5; // mov edi, 0x4d44534c
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4d44534c)}));
c.rip=next;return true;}
case UINT64_C(0x1400812f0): {next=c.rip+8; // lea rsi, [rsp + 0x1330]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,4912,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400812f8): {next=c.rip+6; // mov r15d, 4
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4)}));
c.rip=next;return true;}
case UINT64_C(0x1400812fe): {next=c.rip+8; // mov r12, qword ptr [rsp + 0xa8]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,168,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081306): {next=c.rip+10; // nop word ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x140081310): {next=c.rip+3; // mov rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081313): {next=c.rip+3; // xor rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081316): {next=c.rip+3; // xor rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081319): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80d22);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008131e): {next=c.rip+3; // mov qword ptr [rsi], rax
m.put(Operand{2,0,64,0,6,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081321): {next=c.rip+3; // inc rdi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140081324): {next=c.rip+4; // lea rsi, [rsi + 8]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081328): {next=c.rip+4; // sub r15, 1
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008132c): {next=c.rip+2; // jne 0x140081310
if(m.condition(1))next=next+UINT64_C(0xffffffffffffffe2);
c.rip=next;return true;}
case UINT64_C(0x14008132e): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081336): {next=c.rip+5; // call 0x14007fa70
{uint64_t target=next+UINT64_C(0xffffffffffffe735);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008133b): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081343): {next=c.rip+5; // call 0x14007fb70
{uint64_t target=next+UINT64_C(0xffffffffffffe828);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081348): {next=c.rip+12; // mov qword ptr [rsp + 0x8d8], 3
m.put(Operand{2,0,64,0,4,-1,1,0,2264,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3)}));
c.rip=next;return true;}
case UINT64_C(0x140081354): {next=c.rip+8; // mov qword ptr [rsp + 0x8e0], r13
m.put(Operand{2,0,64,0,4,-1,1,0,2272,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008135c): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,984,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081364): {next=c.rip+8; // mov qword ptr [rsp + 0x1310], rax
m.put(Operand{2,0,64,0,4,-1,1,0,4880,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008136c): {next=c.rip+8; // lea rdx, [rsp + 0x180]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081374): {next=c.rip+8; // lea rcx, [rsp + 0xe0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,224,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008137c): {next=c.rip+5; // call 0x140048940
{uint64_t target=next+UINT64_C(0xfffffffffffc75bf);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081381): {next=c.rip+8; // lea rdx, [rsp + 0x180]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081389): {next=c.rip+8; // lea rcx, [rsp + 0x110]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081391): {next=c.rip+5; // call 0x140048940
{uint64_t target=next+UINT64_C(0xfffffffffffc75aa);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081396): {next=c.rip+3; // mov edi, r13d
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081399): {next=c.rip+3; // mov rsi, r13
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008139c): {next=c.rip+8; // mov r12, qword ptr [rsp + 0xb0]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,176,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400813a4): {next=c.rip+8; // mov r15, qword ptr [rsp + 0xb8]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,184,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400813ac): {next=c.rip+4; // nop dword ptr [rax]

c.rip=next;return true;}
case UINT64_C(0x1400813b0): {next=c.rip+6; // cmp edi, 0x100
m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x100)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400813b6): {next=c.rip+2; // jge 0x1400813d6
if(m.condition(9))next=next+UINT64_C(0x1e);
c.rip=next;return true;}
case UINT64_C(0x1400813b8): {next=c.rip+4; // mov r8, qword ptr [r15 + rsi*8]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,15,6,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400813bc): {next=c.rip+2; // mov edx, edi
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400813be): {next=c.rip+8; // lea rcx, [rsp + 0x110]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400813c6): {next=c.rip+5; // call 0x1400889f0
{uint64_t target=next+UINT64_C(0x7625);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400813cb): {next=c.rip+2; // inc edi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400813cd): {next=c.rip+3; // inc rsi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400813d0): {next=c.rip+4; // cmp rsi, 0x10
m.arithmetic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x10)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400813d4): {next=c.rip+2; // jl 0x1400813b0
if(m.condition(6))next=next+UINT64_C(0xffffffffffffffda);
c.rip=next;return true;}
case UINT64_C(0x1400813d6): {next=c.rip+8; // mov r14, qword ptr [rsp + 0xa8]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,168,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400813de): {next=c.rip+3; // mov rdx, r14
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400813e1): {next=c.rip+8; // lea rcx, [rsp + 0xc8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,200,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400813e9): {next=c.rip+5; // call 0x140048940
{uint64_t target=next+UINT64_C(0xfffffffffffc7552);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400813ee): {next=c.rip+2; // mov ecx, ebx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400813f0): {next=c.rip+3; // and ecx, 7
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x7)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400813f3): {next=c.rip+5; // mov edi, 8
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8)}));
c.rip=next;return true;}
case UINT64_C(0x1400813f8): {next=c.rip+2; // test ecx, ecx
m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x1400813fa): {next=c.rip+2; // je 0x140081442
if(m.condition(0))next=next+UINT64_C(0x46);
c.rip=next;return true;}
case UINT64_C(0x1400813fc): {next=c.rip+3; // sub ecx, 1
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x1400813ff): {next=c.rip+2; // je 0x140081421
if(m.condition(0))next=next+UINT64_C(0x20);
c.rip=next;return true;}
case UINT64_C(0x140081401): {next=c.rip+3; // cmp ecx, 1
m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140081404): {next=c.rip+2; // je 0x14008140b
if(m.condition(0))next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x140081406): {next=c.rip+3; // mov ecx, r13d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081409): {next=c.rip+2; // jmp 0x140081456
next=next+UINT64_C(0x4b);
c.rip=next;return true;}
case UINT64_C(0x14008140b): {next=c.rip+7; // imul rcx, rbx, 0xbf58
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xbf58)});
c.rip=next;return true;}
case UINT64_C(0x140081412): {next=c.rip+3; // inc rcx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140081415): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80c26);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008141a): {next=c.rip+5; // mov ecx, 3
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}));
c.rip=next;return true;}
case UINT64_C(0x14008141f): {next=c.rip+2; // jmp 0x140081453
next=next+UINT64_C(0x32);
c.rip=next;return true;}
case UINT64_C(0x140081421): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140081423): {next=c.rip+8; // lea rcx, [rsp + 0xc8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,200,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008142b): {next=c.rip+5; // call 0x140398100
{uint64_t target=next+UINT64_C(0x316cd0);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081430): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081433): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081436): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80c05);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008143b): {next=c.rip+5; // mov ecx, 2
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}));
c.rip=next;return true;}
case UINT64_C(0x140081440): {next=c.rip+2; // jmp 0x140081453
next=next+UINT64_C(0x11);
c.rip=next;return true;}
case UINT64_C(0x140081442): {next=c.rip+7; // lea rcx, [rbx + 0x9e37]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,-1,1,0,40503,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081449): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80bf2);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008144e): {next=c.rip+5; // mov ecx, 1
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x140081453): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081456): {next=c.rip+4; // sub rdi, 1
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008145a): {next=c.rip+2; // jne 0x1400813f8
if(m.condition(1))next=next+UINT64_C(0xffffffffffffff9c);
c.rip=next;return true;}
case UINT64_C(0x14008145c): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14008145f): {next=c.rip+3; // mov rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081462): {next=c.rip+8; // lea rcx, [rsp + 0xc8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,200,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008146a): {next=c.rip+5; // call 0x140398240
{uint64_t target=next+UINT64_C(0x316dd1);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008146f): {next=c.rip+7; // mov ecx, dword ptr [rsp + 0x11c8]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,4552,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081476): {next=c.rip+2; // test ecx, ecx
m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x140081478): {next=c.rip+2; // je 0x1400814d3
if(m.condition(0))next=next+UINT64_C(0x59);
c.rip=next;return true;}
case UINT64_C(0x14008147a): {next=c.rip+6; // lea eax, [rcx + 0x7b6]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,-1,1,0,1974,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081480): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140081482): {next=c.rip+2; // div ecx
m.divide(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140081484): {next=c.rip+2; // mov edi, eax
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081486): {next=c.rip+3; // mov ebx, r13d
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081489): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14008148b): {next=c.rip+2; // je 0x1400814a5
if(m.condition(0))next=next+UINT64_C(0x18);
c.rip=next;return true;}
case UINT64_C(0x14008148d): {next=c.rip+3; // nop dword ptr [rax]

c.rip=next;return true;}
case UINT64_C(0x140081490): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081492): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008149a): {next=c.rip+5; // call 0x14004bd40
{uint64_t target=next+UINT64_C(0xfffffffffffca8a1);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008149f): {next=c.rip+2; // inc ebx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400814a1): {next=c.rip+2; // cmp ebx, edi
m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400814a3): {next=c.rip+2; // jb 0x140081490
if(m.condition(2))next=next+UINT64_C(0xffffffffffffffeb);
c.rip=next;return true;}
case UINT64_C(0x1400814a5): {next=c.rip+8; // mov dword ptr [rsp + 0x11c4], r13d
m.put(Operand{2,0,32,0,4,-1,1,0,4548,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400814ad): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400814af): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400814b7): {next=c.rip+5; // call 0x14004bd40
{uint64_t target=next+UINT64_C(0xfffffffffffca884);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400814bc): {next=c.rip+3; // cmp edi, 1
m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400814bf): {next=c.rip+2; // jbe 0x1400814d3
if(m.condition(4))next=next+UINT64_C(0x12);
c.rip=next;return true;}
case UINT64_C(0x1400814c1): {next=c.rip+5; // mov edx, 1
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x1400814c6): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400814ce): {next=c.rip+5; // call 0x14004bd40
{uint64_t target=next+UINT64_C(0xfffffffffffca86d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400814d3): {next=c.rip+3; // mov ebx, r13d
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400814d6): {next=c.rip+3; // mov rdi, r13
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400814d9): {next=c.rip+7; // nop dword ptr [rax]

c.rip=next;return true;}
case UINT64_C(0x1400814e0): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x1368]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,4968,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400814e8): {next=c.rip+4; // mov byte ptr [rdi + rax], 0
m.put(Operand{2,0,8,0,7,0,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400814ec): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400814ee): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400814f6): {next=c.rip+5; // call 0x14004bec0
{uint64_t target=next+UINT64_C(0xfffffffffffca9c5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400814fb): {next=c.rip+2; // inc ebx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400814fd): {next=c.rip+4; // lea rdi, [rdi + 1]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081501): {next=c.rip+3; // cmp ebx, 0x4f
m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4f)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140081504): {next=c.rip+2; // jb 0x1400814e0
if(m.condition(2))next=next+UINT64_C(0xffffffffffffffda);
c.rip=next;return true;}
case UINT64_C(0x140081506): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140081508): {next=c.rip+4; // lea r8d, [rdx + 0x4f]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,79,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008150c): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081514): {next=c.rip+5; // call 0x14004c070
{uint64_t target=next+UINT64_C(0xfffffffffffcab57);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081519): {next=c.rip+3; // mov rdx, r14
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008151c): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081524): {next=c.rip+5; // call 0x1400023e0
{uint64_t target=next+UINT64_C(0xfffffffffff80eb7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081529): {next=c.rip+7; // mov dword ptr [rsp + 0xc0], eax
m.put(Operand{2,0,32,0,4,-1,1,0,192,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081530): {next=c.rip+8; // mov dword ptr [rsp + 0xa4], r13d
m.put(Operand{2,0,32,0,4,-1,1,0,164,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081538): {next=c.rip+8; // nop dword ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x140081540): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081548): {next=c.rip+5; // call 0x140049ee0
{uint64_t target=next+UINT64_C(0xfffffffffffc8993);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008154d): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14008154f): {next=c.rip+6; // je 0x140081683
if(m.condition(0))next=next+UINT64_C(0x12e);
c.rip=next;return true;}
case UINT64_C(0x140081555): {next=c.rip+5; // mov edx, 6
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x6)}));
c.rip=next;return true;}
case UINT64_C(0x14008155a): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081562): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc8369);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081567): {next=c.rip+2; // test al, 1
m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140081569): {next=c.rip+6; // jne 0x140081683
if(m.condition(1))next=next+UINT64_C(0x114);
c.rip=next;return true;}
case UINT64_C(0x14008156f): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140081571): {next=c.rip+8; // lea rcx, [rsp + 0xc8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,200,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081579): {next=c.rip+5; // call 0x140398100
{uint64_t target=next+UINT64_C(0x316b82);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008157e): {next=c.rip+8; // xor qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081586): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008158e): {next=c.rip+5; // call 0x14007fae0
{uint64_t target=next+UINT64_C(0xffffffffffffe54d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081593): {next=c.rip+3; // mov rbx, r13
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081596): {next=c.rip+7; // cmp r13d, 0x100
m.arithmetic(m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x100)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008159d): {next=c.rip+2; // jge 0x1400815bf
if(m.condition(9))next=next+UINT64_C(0x20);
c.rip=next;return true;}
case UINT64_C(0x14008159f): {next=c.rip+3; // mov edx, r13d
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400815a2): {next=c.rip+8; // lea rcx, [rsp + 0xe0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,224,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400815aa): {next=c.rip+5; // call 0x1400889e0
{uint64_t target=next+UINT64_C(0x7431);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400815af): {next=c.rip+4; // mov qword ptr [r15 + rbx*8], rax
m.put(Operand{2,0,64,0,15,3,8,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400815b3): {next=c.rip+3; // inc r13d
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400815b6): {next=c.rip+3; // inc rbx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400815b9): {next=c.rip+4; // cmp rbx, 0x10
m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x10)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400815bd): {next=c.rip+2; // jl 0x140081596
if(m.condition(6))next=next+UINT64_C(0xffffffffffffffd7);
c.rip=next;return true;}
case UINT64_C(0x1400815bf): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400815c1): {next=c.rip+6; // mov r8d, 0x7b7
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x7b7)}));
c.rip=next;return true;}
case UINT64_C(0x1400815c7): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xe8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,232,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400815cf): {next=c.rip+5; // call 0x1403a6720
{uint64_t target=next+UINT64_C(0x32514c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400815d4): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400815dc): {next=c.rip+5; // and eax, 0x2b2
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2b2)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400815e1): {next=c.rip+7; // lea rcx, [rip - 0x815e8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-529896,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400815e8): {next=c.rip+8; // movzx eax, byte ptr [rax + rcx + 0x4195d0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,1,1,0,4298192,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400815f0): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400815f8): {next=c.rip+5; // call 0x140049d90
{uint64_t target=next+UINT64_C(0xfffffffffffc8793);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400815fd): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081600): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081608): {next=c.rip+5; // call 0x140049860
{uint64_t target=next+UINT64_C(0xfffffffffffc8253);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008160d): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14008160e): {next=c.rip+8; // lea rcx, [rsp + 0x118]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081616): {next=c.rip+5; // call 0x140398110
{uint64_t target=next+UINT64_C(0x316af5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008161b): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14008161c): {next=c.rip+8; // lea rcx, [rsp + 0x130]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081624): {next=c.rip+5; // call 0x140398110
{uint64_t target=next+UINT64_C(0x316ae7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081629): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14008162a): {next=c.rip+8; // lea rcx, [rsp + 0x148]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,328,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081632): {next=c.rip+5; // call 0x140398110
{uint64_t target=next+UINT64_C(0x316ad9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081637): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140081638): {next=c.rip+8; // lea rcx, [rsp + 0x160]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,352,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081640): {next=c.rip+5; // call 0x140398110
{uint64_t target=next+UINT64_C(0x316acb);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081645): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140081646): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xd8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,216,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008164e): {next=c.rip+5; // call 0x140002ed0
{uint64_t target=next+UINT64_C(0xfffffffffff8187d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081653): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081656): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x47b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,18352,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008165e): {next=c.rip+3; // xor rcx, rsp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081661): {next=c.rip+5; // call 0x1403a3dc0
{uint64_t target=next+UINT64_C(0x32275a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081666): {next=c.rip+8; // lea r11, [rsp + 0x47c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,18368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008166e): {next=c.rip+4; // mov rbx, qword ptr [r11 + 0x38]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,11,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081672): {next=c.rip+4; // mov rsi, qword ptr [r11 + 0x48]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,11,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081676): {next=c.rip+3; // mov rsp, r11
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081679): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14008167b): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14008167d): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14008167f): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140081681): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140081682): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140081683): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008168b): {next=c.rip+5; // call 0x14004c720
{uint64_t target=next+UINT64_C(0xfffffffffffcb090);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081690): {next=c.rip+5; // mov edx, 6
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x6)}));
c.rip=next;return true;}
case UINT64_C(0x140081695): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008169d): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc822e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400816a2): {next=c.rip+3; // mov rsi, rax
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400816a5): {next=c.rip+3; // not rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400816a8): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400816b0): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400816b8): {next=c.rip+5; // call 0x140002430
{uint64_t target=next+UINT64_C(0xfffffffffff80d73);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400816bd): {next=c.rip+3; // mov rdi, r13
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400816c0): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x1400816c2): {next=c.rip+4; // setne dil
m.put(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.condition(1)));
c.rip=next;return true;}
case UINT64_C(0x1400816c6): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400816ce): {next=c.rip+5; // call 0x1400023d0
{uint64_t target=next+UINT64_C(0xfffffffffff80cfd);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400816d3): {next=c.rip+3; // mov rbx, r13
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400816d6): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x1400816d8): {next=c.rip+3; // setne bl
m.put(Operand{0,3,8,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.condition(1)));
c.rip=next;return true;}
case UINT64_C(0x1400816db): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400816e3): {next=c.rip+5; // call 0x140049a30
{uint64_t target=next+UINT64_C(0xfffffffffffc8348);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400816e8): {next=c.rip+2; // or ebx, edi
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400816ea): {next=c.rip+2; // and ebx, esi
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400816ec): {next=c.rip+2; // neg ebx
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(0,m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x1400816ee): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400816f0): {next=c.rip+5; // mov esi, 0x21edf0
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x21edf0)}));
c.rip=next;return true;}
case UINT64_C(0x1400816f5): {next=c.rip+2; // xor edx, esi
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400816f7): {next=c.rip+2; // and edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400816f9): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400816fb): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081703): {next=c.rip+5; // call 0x140049af0
{uint64_t target=next+UINT64_C(0xfffffffffffc83e8);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081708): {next=c.rip+8; // mov rdi, qword ptr [rsp + 0xd0]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,208,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081710): {next=c.rip+8; // cmp qword ptr [rsp + 0x11d8], rdi
m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,4568,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140081718): {next=c.rip+2; // je 0x14008172c
if(m.condition(0))next=next+UINT64_C(0x12);
c.rip=next;return true;}
case UINT64_C(0x14008171a): {next=c.rip+5; // mov edx, 0x43414e59
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x43414e59)}));
c.rip=next;return true;}
case UINT64_C(0x14008171f): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081727): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffc7c04);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008172c): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081734): {next=c.rip+5; // call 0x140049a30
{uint64_t target=next+UINT64_C(0xfffffffffffc82f7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081739): {next=c.rip+5; // cmp eax, 0x1e8688
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1e8688)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008173e): {next=c.rip+6; // jg 0x140085669
if(m.condition(8))next=next+UINT64_C(0x3f25);
c.rip=next;return true;}
case UINT64_C(0x140081744): {next=c.rip+6; // je 0x1400854d4
if(m.condition(0))next=next+UINT64_C(0x3d8a);
c.rip=next;return true;}
case UINT64_C(0x14008174a): {next=c.rip+5; // cmp eax, 0x119872
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x119872)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008174f): {next=c.rip+6; // jg 0x14008378a
if(m.condition(8))next=next+UINT64_C(0x2035);
c.rip=next;return true;}
case UINT64_C(0x140081755): {next=c.rip+6; // je 0x14008353b
if(m.condition(0))next=next+UINT64_C(0x1de0);
c.rip=next;return true;}
case UINT64_C(0x14008175b): {next=c.rip+5; // cmp eax, 0x94219
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x94219)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140081760): {next=c.rip+6; // jg 0x140082508
if(m.condition(8))next=next+UINT64_C(0xda2);
c.rip=next;return true;}
case UINT64_C(0x140081766): {next=c.rip+6; // je 0x140082399
if(m.condition(0))next=next+UINT64_C(0xc2d);
c.rip=next;return true;}
case UINT64_C(0x14008176c): {next=c.rip+5; // cmp eax, 0x42cef
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x42cef)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140081771): {next=c.rip+6; // jg 0x140081ee3
if(m.condition(8))next=next+UINT64_C(0x76c);
c.rip=next;return true;}
case UINT64_C(0x140081777): {next=c.rip+6; // je 0x140081d68
if(m.condition(0))next=next+UINT64_C(0x5eb);
c.rip=next;return true;}
case UINT64_C(0x14008177d): {next=c.rip+5; // cmp eax, 0x15c9
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x15c9)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140081782): {next=c.rip+6; // je 0x140081b67
if(m.condition(0))next=next+UINT64_C(0x3df);
c.rip=next;return true;}
case UINT64_C(0x140081788): {next=c.rip+5; // cmp eax, 0xa665
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa665)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008178d): {next=c.rip+6; // je 0x1400819ce
if(m.condition(0))next=next+UINT64_C(0x23b);
c.rip=next;return true;}
case UINT64_C(0x140081793): {next=c.rip+5; // cmp eax, 0x1746e
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1746e)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140081798): {next=c.rip+6; // je 0x1400819a3
if(m.condition(0))next=next+UINT64_C(0x205);
c.rip=next;return true;}
case UINT64_C(0x14008179e): {next=c.rip+5; // cmp eax, 0x1afe0
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1afe0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400817a3): {next=c.rip+6; // jne 0x14008839a
if(m.condition(1))next=next+UINT64_C(0x6bf1);
c.rip=next;return true;}
case UINT64_C(0x1400817a9): {next=c.rip+5; // mov ebx, 0xcc58b931
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xcc58b931)}));
c.rip=next;return true;}
case UINT64_C(0x1400817ae): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400817b3): {next=c.rip+5; // mov ebx, 0xefd48dbb
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xefd48dbb)}));
c.rip=next;return true;}
case UINT64_C(0x1400817b8): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400817bd): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400817c2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400817c7): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400817ca): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400817cf): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400817d4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400817d9): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400817dc): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400817df): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400817e4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400817e9): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400817ec): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400817ef): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400817f4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400817f9): {next=c.rip+8; // movsxd rcx, dword ptr [rsp + 0xaa8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140081801): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081809): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80832);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008180e): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081816): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0xd8782d7
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd8782d7)}));
c.rip=next;return true;}
case UINT64_C(0x14008181f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081824): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081829): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008182c): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081831): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081836): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008183e): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081841): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081846): {next=c.rip+8; // or rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008184e): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081851): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081859): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008185e): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081866): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008186b): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081870): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081878): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008187b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081880): {next=c.rip+8; // or rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081888): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008188b): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081893): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081898): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xab0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400818a0): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400818a3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400818a8): {next=c.rip+8; // xor rax, qword ptr [rsp + 0xab0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400818b0): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400818b3): {next=c.rip+8; // mov qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400818bb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400818c0): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400818c8): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400818cd): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400818d2): {next=c.rip+4; // xor rax, 0x1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1d)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400818d6): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400818db): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400818e0): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff8075b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400818e5): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400818ed): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400818f5): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400818f8): {next=c.rip+6; // mov r8d, 0x11ec3b
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x11ec3b)}));
c.rip=next;return true;}
case UINT64_C(0x1400818fe): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081906): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffcb6e5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008190b): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081913): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081916): {next=c.rip+4; // and rax, 0xfffffffffffffffe
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xfffffffffffffffe)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008191a): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008191d): {next=c.rip+4; // cmp rcx, 1
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140081921): {next=c.rip+2; // jbe 0x140081972
if(m.condition(4))next=next+UINT64_C(0x4f);
c.rip=next;return true;}
case UINT64_C(0x140081923): {next=c.rip+5; // mov eax, 0xbd80235f
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xbd80235f)}));
c.rip=next;return true;}
case UINT64_C(0x140081928): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008192d): {next=c.rip+5; // mov eax, 0xc84bdec5
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc84bdec5)}));
c.rip=next;return true;}
case UINT64_C(0x140081932): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rax
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081937): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008193c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081941): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081944): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081949): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008194e): {next=c.rip+3; // dec rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,true));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140081951): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081956): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140081958): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x14008195b): {next=c.rip+2; // jne 0x14008196d
if(m.condition(1))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x14008195d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081962): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081968): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008196d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081972): {next=c.rip+5; // mov ebx, 0xb72a2ab9
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xb72a2ab9)}));
c.rip=next;return true;}
case UINT64_C(0x140081977): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008197c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081981): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081986): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008198b): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008198e): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081993): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081998): {next=c.rip+6; // add rax, 0x3c543b
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3c543b)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008199e): {next=c.rip+5; // jmp 0x140081d2a
next=next+UINT64_C(0x387);
c.rip=next;return true;}
case UINT64_C(0x1400819a3): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400819ab): {next=c.rip+8; // cmp dword ptr [rsp + 0xc0], 0
m.arithmetic(m.get(Operand{2,0,32,0,4,-1,1,0,192,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400819b3): {next=c.rip+2; // je 0x1400819bf
if(m.condition(0))next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x1400819b5): {next=c.rip+5; // mov edx, 0x2d409a
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2d409a)}));
c.rip=next;return true;}
case UINT64_C(0x1400819ba): {next=c.rip+5; // jmp 0x140081d5e
next=next+UINT64_C(0x39f);
c.rip=next;return true;}
case UINT64_C(0x1400819bf): {next=c.rip+5; // mov edx, 0x23180e
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x23180e)}));
c.rip=next;return true;}
case UINT64_C(0x1400819c4): {next=c.rip+5; // call 0x14004c880
{uint64_t target=next+UINT64_C(0xfffffffffffcaeb7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400819c9): {next=c.rip+5; // jmp 0x140088983
next=next+UINT64_C(0x6fb5);
c.rip=next;return true;}
case UINT64_C(0x1400819ce): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400819d6): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400819de): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff8065d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400819e3): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400819e8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400819ed): {next=c.rip+5; // mov eax, 0x89f023d9
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x89f023d9)}));
c.rip=next;return true;}
case UINT64_C(0x1400819f2): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rax
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400819f7): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400819fc): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r13
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081a01): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081a06): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081a0e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081a13): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081a1b): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140081a1e): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081a26): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081a2b): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081a33): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081a36): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081a3b): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081a43): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081a46): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081a4b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081a50): {next=c.rip+8; // xor qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081a58): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081a5d): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xab0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081a65): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081a6a): {next=c.rip+8; // and rax, qword ptr [rsp + 0xab0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081a72): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081a75): {next=c.rip+8; // mov qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081a7d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081a82): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081a8a): {next=c.rip+4; // xor rax, 0x26
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x26)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081a8e): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081a93): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081a98): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff805a3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081a9d): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081aa5): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081aad): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081ab0): {next=c.rip+6; // mov r8d, 0x177c2a
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x177c2a)}));
c.rip=next;return true;}
case UINT64_C(0x140081ab6): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081abe): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffcb52d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081ac3): {next=c.rip+8; // movzx ecx, byte ptr [rsp + 0x3b0]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081acb): {next=c.rip+2; // mov edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081acd): {next=c.rip+3; // imul edx, ecx
m.imul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140081ad0): {next=c.rip+2; // xor dl, cl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140081ad2): {next=c.rip+5; // mov ebx, 0xeff2364f
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xeff2364f)}));
c.rip=next;return true;}
case UINT64_C(0x140081ad7): {next=c.rip+3; // test dl, 1
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140081ada): {next=c.rip+2; // jne 0x140081b08
if(m.condition(1))next=next+UINT64_C(0x2c);
c.rip=next;return true;}
case UINT64_C(0x140081adc): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081ae1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081ae6): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081aeb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081af0): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140081af3): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081af8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081afd): {next=c.rip+6; // add rax, 0x2511e6
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2511e6)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081b03): {next=c.rip+5; // jmp 0x140085213
next=next+UINT64_C(0x370b);
c.rip=next;return true;}
case UINT64_C(0x140081b08): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x1fbd152f
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1fbd152f)}));
c.rip=next;return true;}
case UINT64_C(0x140081b11): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x27ff92f3
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x27ff92f3)}));
c.rip=next;return true;}
case UINT64_C(0x140081b1a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081b1f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081b24): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081b27): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081b2c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081b31): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081b36): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081b3b): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081b40): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081b45): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081b4a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081b4f): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140081b52): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081b57): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081b5c): {next=c.rip+6; // add rax, 0x2511e6
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2511e6)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081b62): {next=c.rip+5; // jmp 0x140085213
next=next+UINT64_C(0x36ac);
c.rip=next;return true;}
case UINT64_C(0x140081b67): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x4093f37
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4093f37)}));
c.rip=next;return true;}
case UINT64_C(0x140081b70): {next=c.rip+5; // mov ebx, 0xf830c4df
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf830c4df)}));
c.rip=next;return true;}
case UINT64_C(0x140081b75): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081b7a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081b7f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081b84): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081b87): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081b8c): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081b91): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081b96): {next=c.rip+4; // cmp rax, 2
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140081b9a): {next=c.rip+2; // jae 0x140081bc2
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x140081b9c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081ba1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081ba6): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081ba9): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff80492);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081bae): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081bb3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081bb8): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140081bbb): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081bc0): {next=c.rip+2; // jmp 0x140081b91
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x140081bc2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081bc7): {next=c.rip+5; // mov ebx, 0xce58daad
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xce58daad)}));
c.rip=next;return true;}
case UINT64_C(0x140081bcc): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081bd1): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081bd6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081bdb): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140081bde): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081be3): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081be8): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081bf0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081bf5): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081bfd): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140081c00): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081c08): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081c0d): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081c15): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081c18): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081c1d): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081c25): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081c28): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081c2d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081c32): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081c3a): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081c3d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081c42): {next=c.rip+8; // or rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081c4a): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081c4d): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081c55): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081c5a): {next=c.rip+8; // add qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081c62): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081c67): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081c6f): {next=c.rip+4; // xor rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081c73): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081c78): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081c7d): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff803be);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081c82): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081c8a): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081c92): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081c95): {next=c.rip+6; // mov r8d, 0x9e37
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x9e37)}));
c.rip=next;return true;}
case UINT64_C(0x140081c9b): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081ca3): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffcb348);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081ca8): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081cb0): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081cb6): {next=c.rip+2; // or cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140081cb8): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140081cbb): {next=c.rip+2; // jne 0x140081cf1
if(m.condition(1))next=next+UINT64_C(0x34);
c.rip=next;return true;}
case UINT64_C(0x140081cbd): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x18f102f9
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x18f102f9)}));
c.rip=next;return true;}
case UINT64_C(0x140081cc6): {next=c.rip+5; // mov ebx, 0x97baef9b
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x97baef9b)}));
c.rip=next;return true;}
case UINT64_C(0x140081ccb): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081cd0): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081cd5): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081cda): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081cdd): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081ce2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081ce7): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081cec): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081cf1): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x3032b517
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3032b517)}));
c.rip=next;return true;}
case UINT64_C(0x140081cfa): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081cff): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081d04): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081d09): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140081d0c): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081d11): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081d16): {next=c.rip+7; // or rcx, 0x38f6c0
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38f6c0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081d1d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081d22): {next=c.rip+5; // and eax, 0x38f6c0
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x38f6c0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140081d27): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081d2a): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081d2f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081d34): {next=c.rip+3; // movsxd rcx, eax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140081d37): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081d3c): {next=c.rip+3; // movsxd r8, eax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140081d3f): {next=c.rip+3; // or r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081d42): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081d47): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081d4c): {next=c.rip+2; // and ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140081d4e): {next=c.rip+2; // not ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081d50): {next=c.rip+3; // movsxd rdx, ecx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140081d53): {next=c.rip+3; // and rdx, r8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081d56): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081d5e): {next=c.rip+5; // call 0x14004c880
{uint64_t target=next+UINT64_C(0xfffffffffffcab1d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081d63): {next=c.rip+5; // jmp 0x140088983
next=next+UINT64_C(0x6c1b);
c.rip=next;return true;}
case UINT64_C(0x140081d68): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081d70): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081d75): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081d7a): {next=c.rip+8; // movsxd rax, dword ptr [rsp + 0xaa8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140081d82): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081d85): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081d8a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081d8f): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff802ac);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081d94): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081d9c): {next=c.rip+8; // movsxd rcx, dword ptr [rsp + 0xaa8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140081da4): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081da7): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081dac): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081db1): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff8028a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081db6): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081dbe): {next=c.rip+5; // mov eax, 0xbc26e8c5
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xbc26e8c5)}));
c.rip=next;return true;}
case UINT64_C(0x140081dc3): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rax
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081dc8): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081dcd): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081dd2): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081dd5): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081dda): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081ddf): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081de7): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081dea): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081ded): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140081df0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081df5): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081df8): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081e00): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081e05): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081e0d): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081e12): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081e17): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081e1f): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081e22): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081e25): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140081e28): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081e2d): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081e30): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081e38): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081e3d): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081e45): {next=c.rip+4; // xor rax, 6
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x6)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081e49): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081e4e): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081e53): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff801e8);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081e58): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081e60): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081e68): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081e6b): {next=c.rip+6; // mov r8d, 0x3b54a
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3b54a)}));
c.rip=next;return true;}
case UINT64_C(0x140081e71): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081e79): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffcb172);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081e7e): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x35a90f03
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x35a90f03)}));
c.rip=next;return true;}
case UINT64_C(0x140081e87): {next=c.rip+5; // mov ebx, 0xcfc1c001
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xcfc1c001)}));
c.rip=next;return true;}
case UINT64_C(0x140081e8c): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081e91): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081e96): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081e9b): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081e9e): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081ea3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081ea8): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081ead): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081eb2): {next=c.rip+5; // mov ebx, 0xb1694dc9
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xb1694dc9)}));
c.rip=next;return true;}
case UINT64_C(0x140081eb7): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081ebc): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081ec1): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081ec6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081ecb): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140081ece): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081ed3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081ed8): {next=c.rip+6; // add rax, 0x123c34
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x123c34)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081ede): {next=c.rip+5; // jmp 0x140081d2a
next=next+UINT64_C(0xfffffffffffffe47);
c.rip=next;return true;}
case UINT64_C(0x140081ee3): {next=c.rip+5; // cmp eax, 0x44746
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x44746)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140081ee8): {next=c.rip+6; // je 0x1400822cc
if(m.condition(0))next=next+UINT64_C(0x3de);
c.rip=next;return true;}
case UINT64_C(0x140081eee): {next=c.rip+5; // cmp eax, 0x4fe3f
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4fe3f)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140081ef3): {next=c.rip+6; // je 0x140082107
if(m.condition(0))next=next+UINT64_C(0x20e);
c.rip=next;return true;}
case UINT64_C(0x140081ef9): {next=c.rip+5; // cmp eax, 0x8453b
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8453b)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140081efe): {next=c.rip+6; // je 0x1400820c4
if(m.condition(0))next=next+UINT64_C(0x1c0);
c.rip=next;return true;}
case UINT64_C(0x140081f04): {next=c.rip+5; // cmp eax, 0x85014
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x85014)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140081f09): {next=c.rip+6; // jne 0x14008839a
if(m.condition(1))next=next+UINT64_C(0x648b);
c.rip=next;return true;}
case UINT64_C(0x140081f0f): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081f17): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081f1f): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff8011c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081f24): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081f29): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081f2e): {next=c.rip+5; // mov ebx, 0xce72b35d
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xce72b35d)}));
c.rip=next;return true;}
case UINT64_C(0x140081f33): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081f38): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081f3d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081f42): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140081f45): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081f4a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081f4f): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081f57): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081f5c): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081f64): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140081f67): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081f6f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081f74): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081f7c): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081f7f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081f84): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081f8c): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140081f8f): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081f94): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081f99): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081fa1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081fa6): {next=c.rip+8; // and rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081fae): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140081fb1): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081fb9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081fbe): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081fc6): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081fcb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081fd0): {next=c.rip+4; // xor rax, 0x33
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x33)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081fd4): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081fd9): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081fde): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff8005d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140081fe3): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081feb): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140081ff3): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140081ff6): {next=c.rip+6; // mov r8d, 0x1f84f5
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1f84f5)}));
c.rip=next;return true;}
case UINT64_C(0x140081ffc): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082004): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffcafe7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082009): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082011): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082014): {next=c.rip+4; // and rax, 0xfffffffffffffffe
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xfffffffffffffffe)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082018): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008201b): {next=c.rip+4; // cmp rcx, 2
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14008201f): {next=c.rip+2; // jb 0x140082086
if(m.condition(2))next=next+UINT64_C(0x65);
c.rip=next;return true;}
case UINT64_C(0x140082021): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x532ccc05
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x532ccc05)}));
c.rip=next;return true;}
case UINT64_C(0x14008202a): {next=c.rip+5; // mov ebx, 0xc0b83dab
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc0b83dab)}));
c.rip=next;return true;}
case UINT64_C(0x14008202f): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082034): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082039): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008203e): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082041): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082046): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008204b): {next=c.rip+5; // nop dword ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x140082050): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082055): {next=c.rip+4; // cmp rax, 3
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140082059): {next=c.rip+2; // jae 0x140082081
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x14008205b): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082060): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082065): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082068): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7ffd3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008206d): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082072): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082077): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14008207a): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008207f): {next=c.rip+2; // jmp 0x140082050
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x140082081): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082086): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0xc1c64d9
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc1c64d9)}));
c.rip=next;return true;}
case UINT64_C(0x14008208f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082094): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082099): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008209e): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400820a1): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400820a6): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400820ab): {next=c.rip+6; // and ecx, 0xf2064
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf2064)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400820b1): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400820b4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400820b9): {next=c.rip+6; // xor rax, 0xf2064
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf2064)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400820bf): {next=c.rip+5; // jmp 0x140081d27
next=next+UINT64_C(0xfffffffffffffc63);
c.rip=next;return true;}
case UINT64_C(0x1400820c4): {next=c.rip+10; // movabs rax, 0x1d03b1512f9e93a3
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1d03b1512f9e93a3)}));
c.rip=next;return true;}
case UINT64_C(0x1400820ce): {next=c.rip+3; // cmp r12, rax
m.arithmetic(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400820d1): {next=c.rip+2; // je 0x1400820e5
if(m.condition(0))next=next+UINT64_C(0x12);
c.rip=next;return true;}
case UINT64_C(0x1400820d3): {next=c.rip+5; // mov edx, 0x41545432
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x41545432)}));
c.rip=next;return true;}
case UINT64_C(0x1400820d8): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400820e0): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffc724b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400820e5): {next=c.rip+11; // mov dword ptr [rsp + 0xa4], 1
m.put(Operand{2,0,32,0,4,-1,1,0,164,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x1400820f0): {next=c.rip+5; // mov edx, 0x171a87
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x171a87)}));
c.rip=next;return true;}
case UINT64_C(0x1400820f5): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400820fd): {next=c.rip+5; // call 0x14004c880
{uint64_t target=next+UINT64_C(0xfffffffffffca77e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082102): {next=c.rip+5; // jmp 0x140088983
next=next+UINT64_C(0x687c);
c.rip=next;return true;}
case UINT64_C(0x140082107): {next=c.rip+5; // mov eax, 0xff5724df
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xff5724df)}));
c.rip=next;return true;}
case UINT64_C(0x14008210c): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rax
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082111): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082116): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008211b): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008211e): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082123): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082128): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082130): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082133): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082136): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140082139): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008213e): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082141): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082149): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008214e): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082156): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008215b): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082163): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082166): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008216b): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082170): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082178): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008217b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082180): {next=c.rip+8; // or rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082188): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008218b): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082193): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082198): {next=c.rip+8; // add qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400821a0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400821a5): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400821ad): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400821b2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400821b7): {next=c.rip+4; // xor rax, 0x1c
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1c)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400821bb): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400821c0): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400821c5): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7fe76);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400821ca): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400821d2): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400821da): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400821dd): {next=c.rip+6; // mov r8d, 0x114e04
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x114e04)}));
c.rip=next;return true;}
case UINT64_C(0x1400821e3): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400821eb): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffcae00);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400821f0): {next=c.rip+8; // movzx ecx, byte ptr [rsp + 0x3b0]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400821f8): {next=c.rip+2; // mov edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400821fa): {next=c.rip+3; // imul edx, ecx
m.imul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400821fd): {next=c.rip+2; // xor dl, cl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x1400821ff): {next=c.rip+5; // mov ebx, 0xc0550963
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc0550963)}));
c.rip=next;return true;}
case UINT64_C(0x140082204): {next=c.rip+3; // test dl, 1
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140082207): {next=c.rip+2; // jne 0x140082243
if(m.condition(1))next=next+UINT64_C(0x3a);
c.rip=next;return true;}
case UINT64_C(0x140082209): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008220e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082213): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082218): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008221d): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140082220): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082225): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008222a): {next=c.rip+6; // and ecx, 0x1afe0
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1afe0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140082230): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082233): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082238): {next=c.rip+6; // xor rax, 0x1afe0
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1afe0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008223e): {next=c.rip+5; // jmp 0x140081d27
next=next+UINT64_C(0xfffffffffffffae4);
c.rip=next;return true;}
case UINT64_C(0x140082243): {next=c.rip+5; // mov eax, 0xca5612e1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xca5612e1)}));
c.rip=next;return true;}
case UINT64_C(0x140082248): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008224d): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x7ec6f56d
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7ec6f56d)}));
c.rip=next;return true;}
case UINT64_C(0x140082256): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008225b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082260): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082263): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082268): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008226d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082272): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082275): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082278): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008227d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082282): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082285): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082288): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008228d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082292): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082297): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008229c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400822a1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400822a6): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400822a9): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400822ae): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400822b3): {next=c.rip+6; // and ecx, 0x1afe0
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1afe0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400822b9): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400822bc): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400822c1): {next=c.rip+6; // xor rax, 0x1afe0
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1afe0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400822c7): {next=c.rip+5; // jmp 0x140081d27
next=next+UINT64_C(0xfffffffffffffa5b);
c.rip=next;return true;}
case UINT64_C(0x1400822cc): {next=c.rip+9; // movzx r8d, byte ptr [rsp + 0x1324]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,4900,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400822d5): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400822dd): {next=c.rip+4; // cmp r8d, 0x3e
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3e)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400822e1): {next=c.rip+2; // jae 0x140082330
if(m.condition(3))next=next+UINT64_C(0x4d);
c.rip=next;return true;}
case UINT64_C(0x1400822e3): {next=c.rip+8; // inc qword ptr [rsp + 0x1208]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,4,-1,1,0,4616,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,4616,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400822eb): {next=c.rip+5; // mov ebx, 4
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4)}));
c.rip=next;return true;}
case UINT64_C(0x1400822f0): {next=c.rip+8; // cmp dword ptr [rsp + 0xa4], 0
m.arithmetic(m.get(Operand{2,0,32,0,4,-1,1,0,164,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400822f8): {next=c.rip+5; // mov eax, 0x80000004
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x80000004)}));
c.rip=next;return true;}
case UINT64_C(0x1400822fd): {next=c.rip+3; // cmovne ebx, eax
if(m.condition(1))m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082300): {next=c.rip+5; // mov edx, 3
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}));
c.rip=next;return true;}
case UINT64_C(0x140082305): {next=c.rip+5; // call 0x14004da40
{uint64_t target=next+UINT64_C(0xfffffffffffcb736);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008230a): {next=c.rip+3; // mov r8d, eax
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008230d): {next=c.rip+5; // mov edx, 3
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}));
c.rip=next;return true;}
case UINT64_C(0x140082312): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008231a): {next=c.rip+5; // call 0x14007fb40
{uint64_t target=next+UINT64_C(0xffffffffffffd821);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008231f): {next=c.rip+3; // mov r8, rdi
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082322): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082324): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008232c): {next=c.rip+2; // call rax
{uint64_t target=m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008232e): {next=c.rip+2; // jmp 0x140082362
next=next+UINT64_C(0x32);
c.rip=next;return true;}
case UINT64_C(0x140082330): {next=c.rip+7; // inc dword ptr [rsp + 0x1210]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,4,-1,1,0,4624,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,4,-1,1,0,4624,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140082337): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140082339): {next=c.rip+5; // call 0x140049e60
{uint64_t target=next+UINT64_C(0xfffffffffffc7b22);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008233e): {next=c.rip+5; // mov edx, 1
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x140082343): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008234b): {next=c.rip+5; // call 0x140049fa0
{uint64_t target=next+UINT64_C(0xfffffffffffc7c50);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082350): {next=c.rip+5; // mov edx, 0x2188a4
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}));
c.rip=next;return true;}
case UINT64_C(0x140082355): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008235d): {next=c.rip+5; // call 0x140049af0
{uint64_t target=next+UINT64_C(0xfffffffffffc778e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082362): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008236a): {next=c.rip+5; // call 0x140049ee0
{uint64_t target=next+UINT64_C(0xfffffffffffc7b71);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008236f): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x140082371): {next=c.rip+6; // jne 0x140088983
if(m.condition(1))next=next+UINT64_C(0x660c);
c.rip=next;return true;}
case UINT64_C(0x140082377): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008237f): {next=c.rip+5; // call 0x140049a30
{uint64_t target=next+UINT64_C(0xfffffffffffc76ac);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082384): {next=c.rip+5; // cmp eax, 0x44746
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x44746)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140082389): {next=c.rip+6; // jne 0x140088983
if(m.condition(1))next=next+UINT64_C(0x65f4);
c.rip=next;return true;}
case UINT64_C(0x14008238f): {next=c.rip+5; // mov edx, 0x2e08cf
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2e08cf)}));
c.rip=next;return true;}
case UINT64_C(0x140082394): {next=c.rip+5; // jmp 0x140081d56
next=next+UINT64_C(0xfffffffffffff9bd);
c.rip=next;return true;}
case UINT64_C(0x140082399): {next=c.rip+8; // movsxd rcx, dword ptr [rsp + 0xaa8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400823a1): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400823a9): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7fc92);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400823ae): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400823b6): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400823bb): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400823c0): {next=c.rip+8; // movsxd rax, dword ptr [rsp + 0xaa8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400823c8): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400823cb): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400823d0): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400823d5): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7fc66);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400823da): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400823e2): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x5f170747
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5f170747)}));
c.rip=next;return true;}
case UINT64_C(0x1400823eb): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400823f0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400823f5): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400823f8): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400823fd): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082402): {next=c.rip+8; // xor qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008240a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008240f): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082417): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008241c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082421): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082429): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008242c): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008242f): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140082432): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082437): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008243a): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082442): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082447): {next=c.rip+8; // add qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008244f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082454): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008245c): {next=c.rip+4; // xor rcx, 0xb
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082460): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7fbdb);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082465): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008246d): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082475): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082478): {next=c.rip+6; // mov r8d, 0x6cc5d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x6cc5d)}));
c.rip=next;return true;}
case UINT64_C(0x14008247e): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082486): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffcab65);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008248b): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082493): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082496): {next=c.rip+4; // and rax, 0xfffffffffffffffe
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xfffffffffffffffe)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008249a): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008249d): {next=c.rip+4; // cmp rcx, 2
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400824a1): {next=c.rip+2; // jb 0x1400824d8
if(m.condition(2))next=next+UINT64_C(0x35);
c.rip=next;return true;}
case UINT64_C(0x1400824a3): {next=c.rip+5; // mov ebx, 0xc56313f7
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc56313f7)}));
c.rip=next;return true;}
case UINT64_C(0x1400824a8): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400824ad): {next=c.rip+5; // mov ebx, 0x82078dc1
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x82078dc1)}));
c.rip=next;return true;}
case UINT64_C(0x1400824b2): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400824b7): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400824bc): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400824c1): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400824c4): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400824c9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400824ce): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400824d3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400824d8): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x21a098e3
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x21a098e3)}));
c.rip=next;return true;}
case UINT64_C(0x1400824e1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400824e6): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400824eb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400824f0): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400824f3): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400824f8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400824fd): {next=c.rip+6; // add rax, 0xab5d2
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xab5d2)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082503): {next=c.rip+5; // jmp 0x140085213
next=next+UINT64_C(0x2d0b);
c.rip=next;return true;}
case UINT64_C(0x140082508): {next=c.rip+5; // cmp eax, 0xe0bf0
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xe0bf0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008250d): {next=c.rip+6; // jg 0x140082cf1
if(m.condition(8))next=next+UINT64_C(0x7de);
c.rip=next;return true;}
case UINT64_C(0x140082513): {next=c.rip+6; // je 0x140082ac6
if(m.condition(0))next=next+UINT64_C(0x5ad);
c.rip=next;return true;}
case UINT64_C(0x140082519): {next=c.rip+5; // cmp eax, 0x949f0
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x949f0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008251e): {next=c.rip+6; // je 0x14008296a
if(m.condition(0))next=next+UINT64_C(0x446);
c.rip=next;return true;}
case UINT64_C(0x140082524): {next=c.rip+5; // cmp eax, 0xab5d2
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xab5d2)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140082529): {next=c.rip+6; // je 0x1400827e9
if(m.condition(0))next=next+UINT64_C(0x2ba);
c.rip=next;return true;}
case UINT64_C(0x14008252f): {next=c.rip+5; // cmp eax, 0xcaa88
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xcaa88)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140082534): {next=c.rip+6; // je 0x1400825e7
if(m.condition(0))next=next+UINT64_C(0xad);
c.rip=next;return true;}
case UINT64_C(0x14008253a): {next=c.rip+5; // cmp eax, 0xce50c
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xce50c)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008253f): {next=c.rip+6; // jne 0x14008839a
if(m.condition(1))next=next+UINT64_C(0x5e55);
c.rip=next;return true;}
case UINT64_C(0x140082545): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008254d): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082555): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7fae6);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008255a): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008255f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082564): {next=c.rip+8; // movsxd rax, dword ptr [rsp + 0xaa8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14008256c): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082574): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082579): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008257e): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7fabd);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082583): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008258b): {next=c.rip+8; // movzx edx, byte ptr [rsp + 0x1324]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,4900,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082593): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082596): {next=c.rip+6; // mov r8d, 0x147b4
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x147b4)}));
c.rip=next;return true;}
case UINT64_C(0x14008259c): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400825a4): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffcaa47);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400825a9): {next=c.rip+8; // movdqa xmm0, xmmword ptr [rip + 0x36f72f]
{if((Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16)||(Operand{2,0,128,0,16,-1,1,0,3602223,UINT64_C(0x0)}.kind==2&&m.address(Operand{2,0,128,0,16,-1,1,0,3602223,UINT64_C(0x0)})%16))throw Fault(4,c.rip,"unaligned MOVDQA");uint8_t v[16];m.vector_get(Operand{2,0,128,0,16,-1,1,0,3602223,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x1400825b1): {next=c.rip+9; // movdqu xmmword ptr [rsp + 0x1388], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,4,-1,1,0,5000,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x1400825ba): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x1324]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,4900,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400825c2): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400825ca): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400825cd): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400825d5): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400825d8): {next=c.rip+3; // and eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400825db): {next=c.rip+7; // mov ebx, dword ptr [rsp + rax*4 + 0x1388]
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,0,4,0,5000,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400825e2): {next=c.rip+5; // jmp 0x140086626
next=next+UINT64_C(0x403f);
c.rip=next;return true;}
case UINT64_C(0x1400825e7): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400825ef): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffc757c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400825f4): {next=c.rip+8; // movzx ecx, byte ptr [rsp + 0x1324]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,4900,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400825fc): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400825fe): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082601): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0xab0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082609): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7fa32);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008260e): {next=c.rip+8; // mov qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082616): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2760,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008261e): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082626): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082629): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7fa12);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008262e): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082636): {next=c.rip+5; // mov edx, 9
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x9)}));
c.rip=next;return true;}
case UINT64_C(0x14008263b): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082643): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc7288);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082648): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008264a): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082652): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffc9d69);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082657): {next=c.rip+5; // mov edx, 8
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8)}));
c.rip=next;return true;}
case UINT64_C(0x14008265c): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082664): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc7267);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082669): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008266b): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082673): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffc9d48);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082678): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082680): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffc74eb);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082685): {next=c.rip+7; // cmp eax, dword ptr [rsp + 0x8b8]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,4,-1,1,0,2232,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008268c): {next=c.rip+2; // jae 0x14008269d
if(m.condition(3))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x14008268e): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082690): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082698): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffc9d23);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008269d): {next=c.rip+5; // mov edx, 8
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8)}));
c.rip=next;return true;}
case UINT64_C(0x1400826a2): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400826aa): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc7221);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400826af): {next=c.rip+3; // mov r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400826b2): {next=c.rip+5; // mov edx, 9
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x9)}));
c.rip=next;return true;}
case UINT64_C(0x1400826b7): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400826bf): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc72dc);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400826c4): {next=c.rip+8; // movsxd rcx, dword ptr [rsp + 0xaa8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400826cc): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400826d4): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7f967);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400826d9): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400826e1): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400826e6): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400826eb): {next=c.rip+8; // movsxd rax, dword ptr [rsp + 0xaa8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400826f3): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400826f6): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400826fb): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082700): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7f93b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082705): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008270d): {next=c.rip+5; // mov ebx, 0xda2e5cd5
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xda2e5cd5)}));
c.rip=next;return true;}
case UINT64_C(0x140082712): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082717): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008271c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082721): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082724): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082729): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008272e): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140082731): {next=c.rip+3; // or rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082734): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082739): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008273e): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082746): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008274b): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082753): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140082756): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008275e): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082763): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008276b): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008276e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082773): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008277b): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008277e): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082783): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082788): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082790): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082793): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082796): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140082799): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008279e): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400827a1): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400827a9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400827ae): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400827b6): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400827be): {next=c.rip+5; // call 0x1400023e0
{uint64_t target=next+UINT64_C(0xfffffffffff7fc1d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400827c3): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x1400827c5): {next=c.rip+2; // je 0x1400827df
if(m.condition(0))next=next+UINT64_C(0x18);
c.rip=next;return true;}
case UINT64_C(0x1400827c7): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400827cf): {next=c.rip+2; // and al, 3
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3)}),8));
c.rip=next;return true;}
case UINT64_C(0x1400827d1): {next=c.rip+2; // cmp al, 1
m.arithmetic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x1400827d3): {next=c.rip+2; // jne 0x1400827df
if(m.condition(1))next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x1400827d5): {next=c.rip+5; // mov edx, 0x38f6c0
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x38f6c0)}));
c.rip=next;return true;}
case UINT64_C(0x1400827da): {next=c.rip+5; // jmp 0x140081d56
next=next+UINT64_C(0xfffffffffffff577);
c.rip=next;return true;}
case UINT64_C(0x1400827df): {next=c.rip+5; // mov edx, 0x229f6f
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x229f6f)}));
c.rip=next;return true;}
case UINT64_C(0x1400827e4): {next=c.rip+5; // jmp 0x140081d56
next=next+UINT64_C(0xfffffffffffff56d);
c.rip=next;return true;}
case UINT64_C(0x1400827e9): {next=c.rip+8; // movzx ecx, byte ptr [rsp + 0x3b0]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400827f1): {next=c.rip+2; // mov edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400827f3): {next=c.rip+3; // imul edx, ecx
m.imul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400827f6): {next=c.rip+2; // xor dl, cl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x1400827f8): {next=c.rip+3; // test dl, 1
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400827fb): {next=c.rip+2; // je 0x140082866
if(m.condition(0))next=next+UINT64_C(0x69);
c.rip=next;return true;}
case UINT64_C(0x1400827fd): {next=c.rip+5; // mov eax, 0xb1b1485b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xb1b1485b)}));
c.rip=next;return true;}
case UINT64_C(0x140082802): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082807): {next=c.rip+5; // mov eax, 0xf04992c1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf04992c1)}));
c.rip=next;return true;}
case UINT64_C(0x14008280c): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rax
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082811): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082816): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008281b): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008281e): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082823): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082828): {next=c.rip+8; // nop dword ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x140082830): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082835): {next=c.rip+4; // cmp rax, 1
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140082839): {next=c.rip+2; // jae 0x140082861
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x14008283b): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082840): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082845): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082848): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7f7f3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008284d): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082852): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082857): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14008285a): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008285f): {next=c.rip+2; // jmp 0x140082830
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x140082861): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082866): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x6e6c20cb
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x6e6c20cb)}));
c.rip=next;return true;}
case UINT64_C(0x14008286f): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082874): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082879): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008287c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082881): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082886): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140082889): {next=c.rip+3; // or rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008288c): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082891): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082896): {next=c.rip+8; // xor qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008289e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400828a3): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400828ab): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400828b0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400828b5): {next=c.rip+8; // xor qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400828bd): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400828c2): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400828ca): {next=c.rip+4; // xor rcx, 0xc
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400828ce): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7f76d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400828d3): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400828db): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400828e3): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400828e6): {next=c.rip+6; // mov r8d, 0x76a94
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x76a94)}));
c.rip=next;return true;}
case UINT64_C(0x1400828ec): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400828f4): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffca6f7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400828f9): {next=c.rip+5; // mov ebx, 0xdd200283
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xdd200283)}));
c.rip=next;return true;}
case UINT64_C(0x1400828fe): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082903): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x36851e5
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x36851e5)}));
c.rip=next;return true;}
case UINT64_C(0x14008290c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082911): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082916): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082919): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008291e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082923): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082928): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008292d): {next=c.rip+3; // and rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082930): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082935): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008293a): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x30f62ed3
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30f62ed3)}));
c.rip=next;return true;}
case UINT64_C(0x140082943): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082948): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008294d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082952): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140082955): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008295a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008295f): {next=c.rip+6; // add rax, 0x2216c9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2216c9)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082965): {next=c.rip+5; // jmp 0x140085213
next=next+UINT64_C(0x28a9);
c.rip=next;return true;}
case UINT64_C(0x14008296a): {next=c.rip+5; // mov ebx, 0xae7c1d0d
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xae7c1d0d)}));
c.rip=next;return true;}
case UINT64_C(0x14008296f): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082974): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x2ecf4ec1
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2ecf4ec1)}));
c.rip=next;return true;}
case UINT64_C(0x14008297d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082982): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082987): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008298a): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008298f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082994): {next=c.rip+3; // dec rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,true));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140082997): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008299c): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14008299e): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400829a1): {next=c.rip+2; // jne 0x1400829b3
if(m.condition(1))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x1400829a3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400829a8): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400829ae): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400829b3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400829b8): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x5034c4cf
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5034c4cf)}));
c.rip=next;return true;}
case UINT64_C(0x1400829c1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400829c6): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r13
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400829cb): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400829d0): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400829d8): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400829db): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400829e0): {next=c.rip+8; // or rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400829e8): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400829eb): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400829f3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400829f8): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082a00): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082a05): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082a0a): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082a12): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082a17): {next=c.rip+8; // and rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082a1f): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140082a22): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082a2a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082a2f): {next=c.rip+8; // add qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082a37): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082a3c): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082a44): {next=c.rip+4; // xor rax, 0x30
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082a48): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082a4d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082a52): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082a57): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082a5c): {next=c.rip+3; // and rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082a5f): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7f5dc);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082a64): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082a6c): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082a74): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082a77): {next=c.rip+6; // mov r8d, 0x1daa50
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1daa50)}));
c.rip=next;return true;}
case UINT64_C(0x140082a7d): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082a85): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffca566);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082a8a): {next=c.rip+5; // mov ebx, 0xf3548469
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf3548469)}));
c.rip=next;return true;}
case UINT64_C(0x140082a8f): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082a94): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082a99): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082a9e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082aa3): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140082aa6): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082aab): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ab0): {next=c.rip+7; // or rcx, 0x136b61
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x136b61)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082ab7): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082abc): {next=c.rip+5; // and eax, 0x136b61
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x136b61)}),32));
c.rip=next;return true;}
case UINT64_C(0x140082ac1): {next=c.rip+5; // jmp 0x140085210
next=next+UINT64_C(0x274a);
c.rip=next;return true;}
case UINT64_C(0x140082ac6): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ace): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082ad6): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7f565);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082adb): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ae0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ae5): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082aed): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082af3): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082af5): {next=c.rip+3; // movzx eax, cl
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082af8): {next=c.rip+3; // imul eax, edx
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140082afb): {next=c.rip+2; // test al, 1
m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140082afd): {next=c.rip+2; // je 0x140082b4d
if(m.condition(0))next=next+UINT64_C(0x4e);
c.rip=next;return true;}
case UINT64_C(0x140082aff): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x4d33f6a3
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4d33f6a3)}));
c.rip=next;return true;}
case UINT64_C(0x140082b08): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x308af1af
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x308af1af)}));
c.rip=next;return true;}
case UINT64_C(0x140082b11): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082b16): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082b1b): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082b1e): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082b23): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082b28): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082b2d): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082b30): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082b33): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082b38): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082b3d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082b40): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082b43): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082b48): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082b4d): {next=c.rip+5; // mov ebx, 0xea567b75
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xea567b75)}));
c.rip=next;return true;}
case UINT64_C(0x140082b52): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082b57): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082b5c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082b61): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082b64): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082b69): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082b6e): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140082b71): {next=c.rip+3; // or rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082b74): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082b79): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082b7e): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082b86): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082b8b): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082b93): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140082b96): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082b9e): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ba3): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082bab): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082bae): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082bb3): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082bbb): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082bbe): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082bc3): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082bc8): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082bd0): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082bd3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082bd8): {next=c.rip+8; // or rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082be0): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082be3): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082beb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082bf0): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082bf8): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082bfd): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082c02): {next=c.rip+4; // xor rax, 0x1b
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1b)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082c06): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082c0b): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082c10): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7f42b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082c15): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082c1d): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082c25): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082c28): {next=c.rip+6; // mov r8d, 0x10afcd
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x10afcd)}));
c.rip=next;return true;}
case UINT64_C(0x140082c2e): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082c36): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffca3b5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082c3b): {next=c.rip+8; // movzx ecx, byte ptr [rsp + 0x3b0]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082c43): {next=c.rip+2; // mov edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082c45): {next=c.rip+3; // imul edx, ecx
m.imul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140082c48): {next=c.rip+2; // xor dl, cl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140082c4a): {next=c.rip+3; // test dl, 1
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140082c4d): {next=c.rip+2; // je 0x140082cb6
if(m.condition(0))next=next+UINT64_C(0x67);
c.rip=next;return true;}
case UINT64_C(0x140082c4f): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x689ac93d
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x689ac93d)}));
c.rip=next;return true;}
case UINT64_C(0x140082c58): {next=c.rip+5; // mov ebx, 0xeb30cf51
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xeb30cf51)}));
c.rip=next;return true;}
case UINT64_C(0x140082c5d): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082c62): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082c67): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082c6c): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082c6f): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082c74): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082c79): {next=c.rip+7; // nop dword ptr [rax]

c.rip=next;return true;}
case UINT64_C(0x140082c80): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082c85): {next=c.rip+4; // cmp rax, 3
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140082c89): {next=c.rip+2; // jae 0x140082cb1
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x140082c8b): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082c90): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082c95): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082c98): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7f3a3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082c9d): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ca2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ca7): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140082caa): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082caf): {next=c.rip+2; // jmp 0x140082c80
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x140082cb1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082cb6): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x7fea3f53
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7fea3f53)}));
c.rip=next;return true;}
case UINT64_C(0x140082cbf): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082cc4): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082cc9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082cce): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140082cd1): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082cd6): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082cdb): {next=c.rip+7; // or rcx, 0x4fe3f
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4fe3f)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082ce2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ce7): {next=c.rip+5; // and eax, 0x4fe3f
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4fe3f)}),32));
c.rip=next;return true;}
case UINT64_C(0x140082cec): {next=c.rip+5; // jmp 0x140083e2c
next=next+UINT64_C(0x113b);
c.rip=next;return true;}
case UINT64_C(0x140082cf1): {next=c.rip+5; // cmp eax, 0xe72f0
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xe72f0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140082cf6): {next=c.rip+6; // je 0x140083367
if(m.condition(0))next=next+UINT64_C(0x66b);
c.rip=next;return true;}
case UINT64_C(0x140082cfc): {next=c.rip+5; // cmp eax, 0xf2064
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf2064)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140082d01): {next=c.rip+6; // je 0x140083137
if(m.condition(0))next=next+UINT64_C(0x430);
c.rip=next;return true;}
case UINT64_C(0x140082d07): {next=c.rip+5; // cmp eax, 0x101651
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x101651)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140082d0c): {next=c.rip+6; // je 0x140082f0e
if(m.condition(0))next=next+UINT64_C(0x1fc);
c.rip=next;return true;}
case UINT64_C(0x140082d12): {next=c.rip+5; // cmp eax, 0x10776f
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x10776f)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140082d17): {next=c.rip+6; // jne 0x14008839a
if(m.condition(1))next=next+UINT64_C(0x567d);
c.rip=next;return true;}
case UINT64_C(0x140082d1d): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082d25): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082d2a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082d2f): {next=c.rip+8; // movsxd rax, dword ptr [rsp + 0xaa8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140082d37): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082d3a): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082d3f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082d44): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7f2f7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082d49): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082d51): {next=c.rip+5; // mov eax, 0xb5a63797
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xb5a63797)}));
c.rip=next;return true;}
case UINT64_C(0x140082d56): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082d5b): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x1e169ff1
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1e169ff1)}));
c.rip=next;return true;}
case UINT64_C(0x140082d64): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082d69): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082d6e): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082d71): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082d76): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082d7b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082d80): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082d83): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082d88): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082d8b): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082d90): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082d95): {next=c.rip+5; // mov eax, 0xcaca2165
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xcaca2165)}));
c.rip=next;return true;}
case UINT64_C(0x140082d9a): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rax
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082d9f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082da4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082da9): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140082dac): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082db1): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082db6): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082dbe): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082dc3): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082dcb): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140082dce): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082dd6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ddb): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082de3): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082de8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ded): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082df5): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082df8): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082dfb): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140082dfe): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082e03): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140082e06): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082e0e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082e13): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082e1b): {next=c.rip+4; // xor rax, 0x10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x10)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082e1f): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082e24): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082e29): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7f212);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082e2e): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082e36): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082e3e): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082e41): {next=c.rip+6; // mov r8d, 0x9e370
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x9e370)}));
c.rip=next;return true;}
case UINT64_C(0x140082e47): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082e4f): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffca19c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082e54): {next=c.rip+8; // movzx ecx, byte ptr [rsp + 0x3b0]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082e5c): {next=c.rip+2; // mov edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082e5e): {next=c.rip+3; // imul edx, ecx
m.imul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140082e61): {next=c.rip+2; // xor dl, cl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140082e63): {next=c.rip+5; // mov ebx, 0xd23aa41b
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xd23aa41b)}));
c.rip=next;return true;}
case UINT64_C(0x140082e68): {next=c.rip+3; // test dl, 1
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140082e6b): {next=c.rip+2; // jne 0x140082ea4
if(m.condition(1))next=next+UINT64_C(0x37);
c.rip=next;return true;}
case UINT64_C(0x140082e6d): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082e72): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082e77): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082e7c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082e81): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140082e84): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082e89): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082e8e): {next=c.rip+7; // or rcx, 0x290921
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x290921)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082e95): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082e9a): {next=c.rip+5; // and eax, 0x290921
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x290921)}),32));
c.rip=next;return true;}
case UINT64_C(0x140082e9f): {next=c.rip+5; // jmp 0x140083e2c
next=next+UINT64_C(0xf88);
c.rip=next;return true;}
case UINT64_C(0x140082ea4): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x7c6fa9f
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7c6fa9f)}));
c.rip=next;return true;}
case UINT64_C(0x140082ead): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x51d187c5
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x51d187c5)}));
c.rip=next;return true;}
case UINT64_C(0x140082eb6): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ebb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ec0): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082ec3): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ec8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ecd): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ed2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ed7): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082edc): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ee1): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ee6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082eeb): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140082eee): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ef3): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ef8): {next=c.rip+7; // or rcx, 0x290921
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x290921)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082eff): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082f04): {next=c.rip+5; // and eax, 0x290921
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x290921)}),32));
c.rip=next;return true;}
case UINT64_C(0x140082f09): {next=c.rip+5; // jmp 0x140083e2c
next=next+UINT64_C(0xf1e);
c.rip=next;return true;}
case UINT64_C(0x140082f0e): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082f16): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffc6c55);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082f1b): {next=c.rip+8; // movzx ecx, byte ptr [rsp + 0x1324]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,4900,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082f23): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082f25): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082f28): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0xab0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082f30): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7f10b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082f35): {next=c.rip+8; // mov qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082f3d): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2760,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082f45): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082f4d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140082f50): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7f0eb);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082f55): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082f5d): {next=c.rip+5; // mov edx, 9
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x9)}));
c.rip=next;return true;}
case UINT64_C(0x140082f62): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082f6a): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc6961);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082f6f): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082f71): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082f79): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffc9442);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082f7e): {next=c.rip+5; // mov edx, 8
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8)}));
c.rip=next;return true;}
case UINT64_C(0x140082f83): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082f8b): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc6940);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082f90): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082f92): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082f9a): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffc9421);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082f9f): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082fa7): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffc6bc4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082fac): {next=c.rip+7; // cmp eax, dword ptr [rsp + 0x8b8]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,4,-1,1,0,2232,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140082fb3): {next=c.rip+2; // jae 0x140082fc4
if(m.condition(3))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x140082fb5): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082fb7): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082fbf): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffc93fc);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082fc4): {next=c.rip+5; // mov edx, 8
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8)}));
c.rip=next;return true;}
case UINT64_C(0x140082fc9): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082fd1): {next=c.rip+5; // call 0x1400498d0
{uint64_t target=next+UINT64_C(0xfffffffffffc68fa);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082fd6): {next=c.rip+3; // mov r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082fd9): {next=c.rip+5; // mov edx, 9
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x9)}));
c.rip=next;return true;}
case UINT64_C(0x140082fde): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082fe6): {next=c.rip+5; // call 0x1400499a0
{uint64_t target=next+UINT64_C(0xfffffffffffc69b5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140082feb): {next=c.rip+8; // movzx ecx, byte ptr [rsp + 0x3b0]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ff3): {next=c.rip+2; // mov edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140082ff5): {next=c.rip+3; // imul edx, ecx
m.imul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140082ff8): {next=c.rip+2; // xor dl, cl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140082ffa): {next=c.rip+3; // test dl, 1
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140082ffd): {next=c.rip+2; // je 0x14008304d
if(m.condition(0))next=next+UINT64_C(0x4e);
c.rip=next;return true;}
case UINT64_C(0x140082fff): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x46ba997
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x46ba997)}));
c.rip=next;return true;}
case UINT64_C(0x140083008): {next=c.rip+5; // mov eax, 0x8168ef79
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8168ef79)}));
c.rip=next;return true;}
case UINT64_C(0x14008300d): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rax
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083012): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083017): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008301c): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008301f): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083024): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083029): {next=c.rip+3; // dec rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,true));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14008302c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083031): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140083033): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140083036): {next=c.rip+2; // jne 0x140083048
if(m.condition(1))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x140083038): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008303d): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083043): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083048): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008304d): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x4fd05d41
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4fd05d41)}));
c.rip=next;return true;}
case UINT64_C(0x140083056): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008305b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083060): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083063): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083068): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008306d): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083070): {next=c.rip+3; // or rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083073): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083078): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008307d): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083085): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083088): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008308d): {next=c.rip+8; // or rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083095): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083098): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400830a0): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400830a5): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400830ad): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400830b2): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400830ba): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400830bd): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400830c2): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400830c7): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400830cf): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400830d2): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400830d7): {next=c.rip+8; // or rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400830df): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400830e2): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400830ea): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400830ef): {next=c.rip+8; // add qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400830f7): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400830fc): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083104): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008310c): {next=c.rip+5; // call 0x1400023e0
{uint64_t target=next+UINT64_C(0xfffffffffff7f2cf);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140083111): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x140083113): {next=c.rip+2; // je 0x14008312d
if(m.condition(0))next=next+UINT64_C(0x18);
c.rip=next;return true;}
case UINT64_C(0x140083115): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008311d): {next=c.rip+2; // and al, 3
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3)}),8));
c.rip=next;return true;}
case UINT64_C(0x14008311f): {next=c.rip+2; // cmp al, 1
m.arithmetic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140083121): {next=c.rip+2; // jne 0x14008312d
if(m.condition(1))next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x140083123): {next=c.rip+5; // mov edx, 0x35606a
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x35606a)}));
c.rip=next;return true;}
case UINT64_C(0x140083128): {next=c.rip+5; // jmp 0x140081d56
next=next+UINT64_C(0xffffffffffffec29);
c.rip=next;return true;}
case UINT64_C(0x14008312d): {next=c.rip+5; // mov edx, 0x3c061e
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3c061e)}));
c.rip=next;return true;}
case UINT64_C(0x140083132): {next=c.rip+5; // jmp 0x140081d56
next=next+UINT64_C(0xffffffffffffec1f);
c.rip=next;return true;}
case UINT64_C(0x140083137): {next=c.rip+9; // movzx r8d, byte ptr [rsp + 0x3b0]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083140): {next=c.rip+7; // lea eax, [r8 + 0xff]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083147): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008314a): {next=c.rip+4; // imul edx, r8d
m.imul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14008314e): {next=c.rip+3; // test dl, 1
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140083151): {next=c.rip+2; // je 0x1400831b1
if(m.condition(0))next=next+UINT64_C(0x5e);
c.rip=next;return true;}
case UINT64_C(0x140083153): {next=c.rip+5; // mov eax, 0x93fa6bd1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x93fa6bd1)}));
c.rip=next;return true;}
case UINT64_C(0x140083158): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008315d): {next=c.rip+5; // mov eax, 0xa3462a89
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa3462a89)}));
c.rip=next;return true;}
case UINT64_C(0x140083162): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rax
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083167): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008316c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083171): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083174): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083179): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008317e): {next=c.rip+3; // dec rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,true));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140083181): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083186): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083189): {next=c.rip+3; // movzx eax, cl
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008318c): {next=c.rip+3; // imul eax, edx
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14008318f): {next=c.rip+2; // test al, 1
m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140083191): {next=c.rip+2; // je 0x1400831a3
if(m.condition(0))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x140083193): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083198): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008319e): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400831a3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400831a8): {next=c.rip+9; // movzx r8d, byte ptr [rsp + 0x3b0]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400831b1): {next=c.rip+4; // movzx eax, r8b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400831b5): {next=c.rip+4; // movzx ecx, r8b
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400831b9): {next=c.rip+3; // imul ecx, eax
m.imul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400831bc): {next=c.rip+3; // xor cl, r8b
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x1400831bf): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400831c2): {next=c.rip+2; // je 0x1400831f8
if(m.condition(0))next=next+UINT64_C(0x34);
c.rip=next;return true;}
case UINT64_C(0x1400831c4): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x186e9a2d
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x186e9a2d)}));
c.rip=next;return true;}
case UINT64_C(0x1400831cd): {next=c.rip+5; // mov eax, 0xd19c32e9
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xd19c32e9)}));
c.rip=next;return true;}
case UINT64_C(0x1400831d2): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rax
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400831d7): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400831dc): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400831e1): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400831e4): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400831e9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400831ee): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400831f3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400831f8): {next=c.rip+5; // mov ebx, 0x9724ed19
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x9724ed19)}));
c.rip=next;return true;}
case UINT64_C(0x1400831fd): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083202): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083207): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008320c): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008320f): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083214): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083219): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083221): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083224): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083229): {next=c.rip+8; // or rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083231): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083234): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008323c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083241): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083249): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008324e): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083253): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008325b): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008325e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083263): {next=c.rip+8; // or rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008326b): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008326e): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083276): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008327b): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083283): {next=c.rip+4; // xor rax, 0x34
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x34)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083287): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008328c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083291): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7edaa);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140083296): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008329e): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400832a6): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400832a9): {next=c.rip+6; // mov r8d, 0x20232c
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x20232c)}));
c.rip=next;return true;}
case UINT64_C(0x1400832af): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400832b7): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc9d34);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400832bc): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400832c4): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400832ca): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400832cc): {next=c.rip+3; // movzx eax, cl
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400832cf): {next=c.rip+3; // imul eax, edx
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400832d2): {next=c.rip+2; // test al, 1
m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400832d4): {next=c.rip+2; // je 0x140083337
if(m.condition(0))next=next+UINT64_C(0x61);
c.rip=next;return true;}
case UINT64_C(0x1400832d6): {next=c.rip+5; // mov ebx, 0xdabd9dcf
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xdabd9dcf)}));
c.rip=next;return true;}
case UINT64_C(0x1400832db): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400832e0): {next=c.rip+5; // mov ebx, 0x8265bc79
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8265bc79)}));
c.rip=next;return true;}
case UINT64_C(0x1400832e5): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400832ea): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400832ef): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400832f4): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400832f7): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400832fc): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r13
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083301): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083306): {next=c.rip+4; // cmp rax, 3
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14008330a): {next=c.rip+2; // jae 0x140083332
if(m.condition(3))next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x14008330c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x78]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083311): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083316): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083319): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7ed22);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008331e): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083323): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083328): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14008332b): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rax
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083330): {next=c.rip+2; // jmp 0x140083301
next=next+UINT64_C(0xffffffffffffffcf);
c.rip=next;return true;}
case UINT64_C(0x140083332): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083337): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x4c5d0e2b
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4c5d0e2b)}));
c.rip=next;return true;}
case UINT64_C(0x140083340): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083345): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008334a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008334f): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083352): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083357): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008335c): {next=c.rip+6; // add rax, 0x20ff08
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20ff08)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083362): {next=c.rip+5; // jmp 0x140081d2a
next=next+UINT64_C(0xffffffffffffe9c3);
c.rip=next;return true;}
case UINT64_C(0x140083367): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008336f): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083374): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083379): {next=c.rip+8; // movsxd rax, dword ptr [rsp + 0xaa8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140083381): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083384): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083389): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008338e): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7ecad);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140083393): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008339b): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400833a3): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400833a6): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7ec95);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400833ab): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400833b0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400833b5): {next=c.rip+5; // mov eax, 0xa1b1278f
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa1b1278f)}));
c.rip=next;return true;}
case UINT64_C(0x1400833ba): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rax
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400833bf): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x48]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400833c4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400833c9): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400833cc): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400833d1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400833d6): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400833d9): {next=c.rip+3; // or rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400833dc): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400833e1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400833e6): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400833ee): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400833f1): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400833f4): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400833f7): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400833fc): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400833ff): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083407): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008340c): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083414): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083417): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008341c): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083424): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083427): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008342c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083431): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083439): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008343c): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008343f): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083442): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083447): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008344a): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083452): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083457): {next=c.rip+8; // add qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008345f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083464): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008346c): {next=c.rip+4; // xor rax, 0x28
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x28)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083470): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083475): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008347a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008347f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083484): {next=c.rip+3; // and rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083487): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7ebb4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008348c): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083494): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008349c): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008349f): {next=c.rip+6; // mov r8d, 0x18b898
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x18b898)}));
c.rip=next;return true;}
case UINT64_C(0x1400834a5): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400834ad): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc9b3e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400834b2): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x6b38fc23
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x6b38fc23)}));
c.rip=next;return true;}
case UINT64_C(0x1400834bb): {next=c.rip+5; // mov ebx, 0xd718cff9
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xd718cff9)}));
c.rip=next;return true;}
case UINT64_C(0x1400834c0): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400834c5): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400834ca): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400834cf): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400834d2): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400834d7): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400834dc): {next=c.rip+3; // dec rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,true));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400834df): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400834e4): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x1400834e6): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400834e9): {next=c.rip+2; // jne 0x1400834fb
if(m.condition(1))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x1400834eb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400834f0): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400834f6): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400834fb): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083500): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0xadd4f1b
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xadd4f1b)}));
c.rip=next;return true;}
case UINT64_C(0x140083509): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008350e): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083513): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083518): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008351b): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083520): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083525): {next=c.rip+7; // or rcx, 0x148e03
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x148e03)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008352c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083531): {next=c.rip+5; // and eax, 0x148e03
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x148e03)}),32));
c.rip=next;return true;}
case UINT64_C(0x140083536): {next=c.rip+5; // jmp 0x140081d27
next=next+UINT64_C(0xffffffffffffe7ec);
c.rip=next;return true;}
case UINT64_C(0x14008353b): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x2d899e2f
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2d899e2f)}));
c.rip=next;return true;}
case UINT64_C(0x140083544): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x2592e623
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2592e623)}));
c.rip=next;return true;}
case UINT64_C(0x14008354d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083552): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083557): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008355a): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008355f): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083564): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083569): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008356c): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008356f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083574): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083579): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008357c): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008357f): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083584): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083589): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083591): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083594): {next=c.rip+4; // and rax, 0xfffffffffffffffe
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xfffffffffffffffe)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083598): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008359b): {next=c.rip+4; // cmp rcx, 1
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14008359f): {next=c.rip+2; // jbe 0x1400835f3
if(m.condition(4))next=next+UINT64_C(0x52);
c.rip=next;return true;}
case UINT64_C(0x1400835a1): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x3082849f
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3082849f)}));
c.rip=next;return true;}
case UINT64_C(0x1400835aa): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x3cdf83a9
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3cdf83a9)}));
c.rip=next;return true;}
case UINT64_C(0x1400835b3): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400835b8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400835bd): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400835c0): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400835c5): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400835ca): {next=c.rip+3; // and ecx, 1
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400835cd): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400835d2): {next=c.rip+3; // and eax, 1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400835d5): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400835d8): {next=c.rip+4; // cmp rax, 2
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400835dc): {next=c.rip+2; // jbe 0x1400835ee
if(m.condition(4))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x1400835de): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400835e3): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400835e9): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400835ee): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400835f3): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x18649a4f
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x18649a4f)}));
c.rip=next;return true;}
case UINT64_C(0x1400835fc): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083601): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083606): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083609): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008360e): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083613): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008361b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083620): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083628): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008362b): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083633): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083638): {next=c.rip+8; // add rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083640): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083645): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008364a): {next=c.rip+8; // xor qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083652): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083657): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xab0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008365f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083664): {next=c.rip+8; // and rax, qword ptr [rsp + 0xab0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008366c): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008366f): {next=c.rip+8; // mov qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083677): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008367c): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083684): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083689): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008368e): {next=c.rip+4; // xor rax, 4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083692): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083697): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008369c): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7e99f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400836a1): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400836a9): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400836b1): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400836b4): {next=c.rip+6; // mov r8d, 0x278dc
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x278dc)}));
c.rip=next;return true;}
case UINT64_C(0x1400836ba): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400836c2): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc9929);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400836c7): {next=c.rip+8; // movzx eax, byte ptr [rsp + 0x3b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400836cf): {next=c.rip+6; // lea ecx, [rax + 0xff]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,255,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400836d5): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x1400836d7): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400836da): {next=c.rip+2; // jne 0x14008372a
if(m.condition(1))next=next+UINT64_C(0x4e);
c.rip=next;return true;}
case UINT64_C(0x1400836dc): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x719ccc27
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x719ccc27)}));
c.rip=next;return true;}
case UINT64_C(0x1400836e5): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x34b9993f
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x34b9993f)}));
c.rip=next;return true;}
case UINT64_C(0x1400836ee): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400836f3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400836f8): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400836fb): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083700): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083705): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008370a): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008370d): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083710): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083715): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008371a): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008371d): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083720): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083725): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008372a): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x4284631
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4284631)}));
c.rip=next;return true;}
case UINT64_C(0x140083733): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083738): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008373d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083742): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083745): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008374a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008374f): {next=c.rip+7; // or rcx, 0x1b381f
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1b381f)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083756): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008375b): {next=c.rip+5; // and eax, 0x1b381f
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1b381f)}),32));
c.rip=next;return true;}
case UINT64_C(0x140083760): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083763): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083768): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x70]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008376d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083772): {next=c.rip+2; // or edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140083774): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x70]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083779): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008377e): {next=c.rip+2; // and ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140083780): {next=c.rip+2; // sub edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x140083782): {next=c.rip+3; // movsxd rdx, edx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140083785): {next=c.rip+5; // jmp 0x140081d56
next=next+UINT64_C(0xffffffffffffe5cc);
c.rip=next;return true;}
case UINT64_C(0x14008378a): {next=c.rip+5; // cmp eax, 0x15ba79
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x15ba79)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14008378f): {next=c.rip+6; // jg 0x140084675
if(m.condition(8))next=next+UINT64_C(0xee0);
c.rip=next;return true;}
case UINT64_C(0x140083795): {next=c.rip+6; // je 0x140084436
if(m.condition(0))next=next+UINT64_C(0xc9b);
c.rip=next;return true;}
case UINT64_C(0x14008379b): {next=c.rip+5; // cmp eax, 0x144c84
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x144c84)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400837a0): {next=c.rip+6; // jg 0x140083e9d
if(m.condition(8))next=next+UINT64_C(0x6f7);
c.rip=next;return true;}
case UINT64_C(0x1400837a6): {next=c.rip+6; // je 0x140083e4c
if(m.condition(0))next=next+UINT64_C(0x6a0);
c.rip=next;return true;}
case UINT64_C(0x1400837ac): {next=c.rip+5; // cmp eax, 0x123c34
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x123c34)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400837b1): {next=c.rip+6; // je 0x140083c5e
if(m.condition(0))next=next+UINT64_C(0x4a7);
c.rip=next;return true;}
case UINT64_C(0x1400837b7): {next=c.rip+5; // cmp eax, 0x132233
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x132233)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400837bc): {next=c.rip+6; // je 0x140083aca
if(m.condition(0))next=next+UINT64_C(0x308);
c.rip=next;return true;}
case UINT64_C(0x1400837c2): {next=c.rip+5; // cmp eax, 0x133867
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x133867)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400837c7): {next=c.rip+6; // je 0x14008394c
if(m.condition(0))next=next+UINT64_C(0x17f);
c.rip=next;return true;}
case UINT64_C(0x1400837cd): {next=c.rip+5; // cmp eax, 0x136b61
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x136b61)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400837d2): {next=c.rip+6; // jne 0x14008839a
if(m.condition(1))next=next+UINT64_C(0x4bc2);
c.rip=next;return true;}
case UINT64_C(0x1400837d8): {next=c.rip+8; // movsxd rax, dword ptr [rsp + 0xaa8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400837e0): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400837e8): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400837ed): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400837f2): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7e849);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400837f7): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400837ff): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083807): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008380a): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7e831);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14008380f): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083814): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083819): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x581d769f
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x581d769f)}));
c.rip=next;return true;}
case UINT64_C(0x140083822): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083827): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r13
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008382c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083831): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083839): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008383c): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008383f): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083842): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083847): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14008384a): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083852): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083857): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008385f): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083862): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083867): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008386f): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083872): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083877): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008387c): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083884): {next=c.rip+3; // not rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083887): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008388c): {next=c.rip+8; // or rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083894): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083897): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008389f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400838a4): {next=c.rip+8; // add qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400838ac): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400838b1): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400838b9): {next=c.rip+4; // xor rcx, 0x31
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x31)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400838bd): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7e77e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400838c2): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400838ca): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400838d2): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400838d5): {next=c.rip+6; // mov r8d, 0x1e4887
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1e4887)}));
c.rip=next;return true;}
case UINT64_C(0x1400838db): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400838e3): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc9708);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400838e8): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x6071d26f
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x6071d26f)}));
c.rip=next;return true;}
case UINT64_C(0x1400838f1): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0xb0686ed
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb0686ed)}));
c.rip=next;return true;}
case UINT64_C(0x1400838fa): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400838ff): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083904): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083907): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008390c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083911): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083916): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008391b): {next=c.rip+5; // mov ebx, 0xc4a807f5
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc4a807f5)}));
c.rip=next;return true;}
case UINT64_C(0x140083920): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083925): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008392a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008392f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083934): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083937): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008393c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083941): {next=c.rip+6; // add rax, 0x29b3fa
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x29b3fa)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083947): {next=c.rip+5; // jmp 0x140083763
next=next+UINT64_C(0xfffffffffffffe17);
c.rip=next;return true;}
case UINT64_C(0x14008394c): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083954): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008395c): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7e6df);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140083961): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083966): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008396b): {next=c.rip+5; // mov eax, 0xa503362b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa503362b)}));
c.rip=next;return true;}
case UINT64_C(0x140083970): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rax
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083975): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008397a): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r13
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14008397f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083984): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14008398c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083991): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083999): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14008399c): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400839a4): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400839a9): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400839b1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400839b6): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400839be): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400839c1): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400839c6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400839cb): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400839d3): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400839d6): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400839d9): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400839dc): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400839e1): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400839e4): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400839ec): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400839f1): {next=c.rip+8; // add qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400839f9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400839fe): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083a06): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083a0b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083a10): {next=c.rip+4; // xor rax, 0xf
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083a14): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083a19): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083a1e): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7e61d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140083a23): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083a2b): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083a33): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083a36): {next=c.rip+6; // mov r8d, 0x94539
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x94539)}));
c.rip=next;return true;}
case UINT64_C(0x140083a3c): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083a44): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc95a7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140083a49): {next=c.rip+5; // mov ebx, 0xc3d07a29
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc3d07a29)}));
c.rip=next;return true;}
case UINT64_C(0x140083a4e): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083a53): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x60174f6d
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x60174f6d)}));
c.rip=next;return true;}
case UINT64_C(0x140083a5c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083a61): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083a66): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083a69): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083a6e): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083a73): {next=c.rip+4; // and rcx, 0xfffffffffffffffe
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xfffffffffffffffe)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083a77): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083a7c): {next=c.rip+3; // sub rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083a7f): {next=c.rip+4; // cmp rax, 1
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140083a83): {next=c.rip+2; // jbe 0x140083a95
if(m.condition(4))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x140083a85): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083a8a): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083a90): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083a95): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083a9a): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x61e42cb1
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x61e42cb1)}));
c.rip=next;return true;}
case UINT64_C(0x140083aa3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083aa8): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083aad): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083ab2): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083ab5): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083aba): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083abf): {next=c.rip+6; // add rax, 0x10776f
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x10776f)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083ac5): {next=c.rip+5; // jmp 0x140083763
next=next+UINT64_C(0xfffffffffffffc99);
c.rip=next;return true;}
case UINT64_C(0x140083aca): {next=c.rip+8; // movsxd rax, dword ptr [rsp + 0xaa8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140083ad2): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083ada): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083adf): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083ae4): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7e557);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140083ae9): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083af1): {next=c.rip+8; // movsxd rcx, dword ptr [rsp + 0xaa8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,4,-1,1,0,2728,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140083af9): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083afc): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7e53f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140083b01): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083b09): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x140a7ef5
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x140a7ef5)}));
c.rip=next;return true;}
case UINT64_C(0x140083b12): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083b17): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083b1c): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083b1f): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083b24): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083b29): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083b31): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083b34): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083b37): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083b3a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083b3f): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083b42): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083b4a): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083b4f): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083b57): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083b5a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083b5f): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083b67): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083b6a): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083b6f): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083b74): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083b7c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083b81): {next=c.rip+8; // and rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083b89): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083b8c): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083b94): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083b99): {next=c.rip+8; // add qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083ba1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083ba6): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083bae): {next=c.rip+4; // xor rcx, 0x23
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x23)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083bb2): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7e489);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140083bb7): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083bbf): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083bc7): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083bca): {next=c.rip+6; // mov r8d, 0x15a185
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x15a185)}));
c.rip=next;return true;}
case UINT64_C(0x140083bd0): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083bd8): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc9413);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140083bdd): {next=c.rip+5; // mov ebx, 0xb94fd207
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xb94fd207)}));
c.rip=next;return true;}
case UINT64_C(0x140083be2): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083be7): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x36dd5c39
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x36dd5c39)}));
c.rip=next;return true;}
case UINT64_C(0x140083bf0): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083bf5): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083bfa): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083bfd): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c02): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c07): {next=c.rip+4; // and rcx, 0xfffffffffffffffe
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xfffffffffffffffe)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083c0b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c10): {next=c.rip+3; // sub rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083c13): {next=c.rip+4; // cmp rax, 1
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140083c17): {next=c.rip+2; // jbe 0x140083c29
if(m.condition(4))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x140083c19): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c1e): {next=c.rip+6; // xor rax, 0xdead
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xdead)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083c24): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c29): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c2e): {next=c.rip+9; // mov qword ptr [rsp + 0x60], 0x28a36275
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x28a36275)}));
c.rip=next;return true;}
case UINT64_C(0x140083c37): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c3c): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c41): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c46): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083c49): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c4e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c53): {next=c.rip+6; // add rax, 0x167eac
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x167eac)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083c59): {next=c.rip+5; // jmp 0x140083763
next=next+UINT64_C(0xfffffffffffffb05);
c.rip=next;return true;}
case UINT64_C(0x140083c5e): {next=c.rip+5; // mov eax, 0x8b529c45
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8b529c45)}));
c.rip=next;return true;}
case UINT64_C(0x140083c63): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c68): {next=c.rip+5; // mov eax, 0xf4206529
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf4206529)}));
c.rip=next;return true;}
case UINT64_C(0x140083c6d): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rax
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c72): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c77): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c7c): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083c7f): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c84): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x28]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c89): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c8e): {next=c.rip+3; // and rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083c91): {next=c.rip+3; // add rdx, rdx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083c94): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c99): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083c9e): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083ca1): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083ca4): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083ca9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083cae): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x4f75dffd
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4f75dffd)}));
c.rip=next;return true;}
case UINT64_C(0x140083cb7): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083cbc): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083cc1): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083cc4): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083cc9): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083cce): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083cd6): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083cd9): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083cdc): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083cdf): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083ce4): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083ce7): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083cef): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083cf4): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083cfc): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083d01): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083d09): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083d0c): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083d11): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083d16): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083d1e): {next=c.rip+3; // and rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083d21): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083d24): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083d27): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083d2c): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083d2f): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083d37): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083d3c): {next=c.rip+8; // and rcx, qword ptr [rsp + 0xab0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083d44): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083d47): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083d4c): {next=c.rip+8; // xor rax, qword ptr [rsp + 0xab0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083d54): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083d57): {next=c.rip+8; // mov qword ptr [rsp + 0xab0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083d5f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083d64): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083d6c): {next=c.rip+4; // xor rcx, 7
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083d70): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7e2cb);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140083d75): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083d7d): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083d85): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083d88): {next=c.rip+6; // mov r8d, 0x45381
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x45381)}));
c.rip=next;return true;}
case UINT64_C(0x140083d8e): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083d96): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc9255);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140083d9b): {next=c.rip+8; // movzx ecx, byte ptr [rsp + 0x3b0]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083da3): {next=c.rip+2; // mov edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083da5): {next=c.rip+3; // imul edx, ecx
m.imul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140083da8): {next=c.rip+2; // xor dl, cl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140083daa): {next=c.rip+3; // test dl, 1
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140083dad): {next=c.rip+2; // je 0x140083df2
if(m.condition(0))next=next+UINT64_C(0x43);
c.rip=next;return true;}
case UINT64_C(0x140083daf): {next=c.rip+9; // mov qword ptr [rsp + 0x20], 0x59ed2aa1
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x59ed2aa1)}));
c.rip=next;return true;}
case UINT64_C(0x140083db8): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x6d6a02d3
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x6d6a02d3)}));
c.rip=next;return true;}
case UINT64_C(0x140083dc1): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083dc6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083dcb): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083dce): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083dd3): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083dd8): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083ddd): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083de0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083de5): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083de8): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083ded): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083df2): {next=c.rip+5; // mov ebx, 0xdfeaace7
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xdfeaace7)}));
c.rip=next;return true;}
case UINT64_C(0x140083df7): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083dfc): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083e01): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x60]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083e06): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083e0b): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083e0e): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083e13): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x68]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083e18): {next=c.rip+6; // and ecx, 0x265774
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x265774)}),32));
c.rip=next;return true;}
case UINT64_C(0x140083e1e): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083e21): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083e26): {next=c.rip+6; // xor rax, 0x265774
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x265774)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083e2c): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083e2f): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083e34): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083e39): {next=c.rip+3; // movsxd rcx, eax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140083e3c): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x68]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083e41): {next=c.rip+3; // movsxd rdx, eax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140083e44): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083e47): {next=c.rip+5; // jmp 0x140081d56
next=next+UINT64_C(0xffffffffffffdf0a);
c.rip=next;return true;}
case UINT64_C(0x140083e4c): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083e54): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0xab0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2736,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083e5c): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083e64): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083e6c): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7e1cf);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140083e71): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083e79): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083e81): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083e84): {next=c.rip+5; // call 0x1400023e0
{uint64_t target=next+UINT64_C(0xfffffffffff7e557);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140083e89): {next=c.rip+5; // mov edx, 0x19dad3
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x19dad3)}));
c.rip=next;return true;}
case UINT64_C(0x140083e8e): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x140083e90): {next=c.rip+5; // mov ebx, 0x295b7f
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x295b7f)}));
c.rip=next;return true;}
case UINT64_C(0x140083e95): {next=c.rip+3; // cmovne edx, ebx
if(m.condition(1))m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083e98): {next=c.rip+5; // jmp 0x140081d56
next=next+UINT64_C(0xffffffffffffdeb9);
c.rip=next;return true;}
case UINT64_C(0x140083e9d): {next=c.rip+5; // cmp eax, 0x148e03
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x148e03)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140083ea2): {next=c.rip+6; // je 0x140084276
if(m.condition(0))next=next+UINT64_C(0x3ce);
c.rip=next;return true;}
case UINT64_C(0x140083ea8): {next=c.rip+5; // cmp eax, 0x14b3da
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x14b3da)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140083ead): {next=c.rip+6; // je 0x1400841af
if(m.condition(0))next=next+UINT64_C(0x2fc);
c.rip=next;return true;}
case UINT64_C(0x140083eb3): {next=c.rip+5; // cmp eax, 0x14ebd6
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x14ebd6)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140083eb8): {next=c.rip+6; // je 0x140084076
if(m.condition(0))next=next+UINT64_C(0x1b8);
c.rip=next;return true;}
case UINT64_C(0x140083ebe): {next=c.rip+5; // cmp eax, 0x15649b
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x15649b)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140083ec3): {next=c.rip+6; // jne 0x14008839a
if(m.condition(1))next=next+UINT64_C(0x44d1);
c.rip=next;return true;}
case UINT64_C(0x140083ec9): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083ed1): {next=c.rip+8; // xor rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083ed9): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7e162);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140083ede): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083ee3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x40]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083ee8): {next=c.rip+9; // mov qword ptr [rsp + 0x48], 0x7d26c9b7
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7d26c9b7)}));
c.rip=next;return true;}
case UINT64_C(0x140083ef1): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x48]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083ef6): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x48]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083efb): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083efe): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083f03): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083f08): {next=c.rip+8; // or rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083f10): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083f15): {next=c.rip+8; // and rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083f1d): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083f20): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083f28): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083f2d): {next=c.rip+8; // and rcx, qword ptr [rsp + 0x3b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083f35): {next=c.rip+3; // add rcx, rcx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083f38): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083f3d): {next=c.rip+8; // xor rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083f45): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083f48): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083f4d): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x50]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083f52): {next=c.rip+8; // or rcx, qword ptr [rsp + 0xac0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083f5a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083f5f): {next=c.rip+8; // and rax, qword ptr [rsp + 0xac0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083f67): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140083f6a): {next=c.rip+8; // mov qword ptr [rsp + 0xac0], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083f72): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083f77): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x3b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083f7f): {next=c.rip+4; // xor rax, 0x16
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x16)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083f83): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083f88): {next=c.rip+5; // mov rdx, qword ptr [rsp + 0x38]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083f8d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083f92): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083f95): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083f9a): {next=c.rip+3; // add rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140083f9d): {next=c.rip+5; // call 0x140002040
{uint64_t target=next+UINT64_C(0xfffffffffff7e09e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140083fa2): {next=c.rip+8; // mov qword ptr [rsp + 0x3b0], rax
m.put(Operand{2,0,64,0,4,-1,1,0,944,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083faa): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0xac0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,2752,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083fb2): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083fb5): {next=c.rip+6; // mov r8d, 0xd98ba
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xd98ba)}));
c.rip=next;return true;}
case UINT64_C(0x140083fbb): {next=c.rip+8; // lea rcx, [rsp + 0x180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083fc3): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffc9028);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140083fc8): {next=c.rip+8; // movzx ecx, byte ptr [rsp + 0x3b0]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,944,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083fd0): {next=c.rip+2; // mov edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083fd2): {next=c.rip+3; // imul edx, ecx
m.imul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140083fd5): {next=c.rip+2; // xor dl, cl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140083fd7): {next=c.rip+3; // test dl, 1
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140083fda): {next=c.rip+2; // je 0x140084046
if(m.condition(0))next=next+UINT64_C(0x6a);
c.rip=next;return true;}
case UINT64_C(0x140083fdc): {next=c.rip+5; // mov ebx, 0x8d43d427
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8d43d427)}));
c.rip=next;return true;}
case UINT64_C(0x140083fe1): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083fe6): {next=c.rip+9; // mov qword ptr [rsp + 0x28], 0x6c1bfe17
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x6c1bfe17)}));
c.rip=next;return true;}
case UINT64_C(0x140083fef): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x28]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083ff4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140083ff9): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140083ffc): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
default:return false;
}}
}
