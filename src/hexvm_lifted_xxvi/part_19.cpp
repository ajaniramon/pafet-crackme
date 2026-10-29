// Generated literal x64 semantics.
#include "../pafet_hexvm_cpu_xxvi.h"
namespace pafet_xxiv {
bool hexvm_part_19(Machine& m){auto& c=m.c;auto& next=m.next;switch(m.canonical(c.rip)){
case UINT64_C(0x140064002): {next=c.rip+3; // inc r10
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140064005): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006400c): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x8f8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064013): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x730]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006401a): {next=c.rip+5; // mov qword ptr [rsp + 0x60], r10
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006401f): {next=c.rip+5; // movzx r8d, byte ptr [rcx + rbx]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064024): {next=c.rip+4; // xor r8b, byte ptr [rax + rbx]
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,8,0,0,3,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140064028): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140064032): {next=c.rip+4; // imul r9, rax
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064036): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], r10
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006403d): {next=c.rip+3; // add r9, rbp
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064040): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064043): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140064047): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006404a): {next=c.rip+4; // lea rax, [r11 + r11]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,11,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006404e): {next=c.rip+7; // mov byte ptr [r14 + 0x1141], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064055): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064059): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006405c): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006405f): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064062): {next=c.rip+3; // xor rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064065): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140064068): {next=c.rip+4; // lea rax, [rdx + r12]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,12,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006406c): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064070): {next=c.rip+7; // mov qword ptr [r14 + 0x10d8], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064077): {next=c.rip+7; // movsxd rdx, dword ptr [r14 + 0x928]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14006407e): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x940]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064085): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064088): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x238]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006408f): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064092): {next=c.rip+3; // xor rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064095): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x230]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006409c): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006409f): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400640a3): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400640a6): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x1400640b0): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400640b4): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400640b7): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400640bb): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400640be): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x1400640c8): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400640cc): {next=c.rip+4; // movzx eax, r8b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400640d0): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400640d3): {next=c.rip+6; // xor rax, 0x93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x93)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400640d9): {next=c.rip+4; // shr rbx, 0x21
m.shift(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400640dd): {next=c.rip+3; // xor rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400640e0): {next=c.rip+7; // lea rcx, [rip - 0x640e7]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-409831,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400640e7): {next=c.rip+7; // mov qword ptr [r14 + 0x948], rbx
m.put(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400640ee): {next=c.rip+8; // movzx ebp, byte ptr [rax + rcx + 0x3e3660]
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,1,1,0,4077152,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400640f6): {next=c.rip+4; // xor bpl, 0x27
m.put(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x27)}),8));
c.rip=next;return true;}
case UINT64_C(0x1400640fa): {next=c.rip+2; // inc edx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400640fc): {next=c.rip+7; // mov dword ptr [r14 + 0x928], edx
m.put(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064103): {next=c.rip+10; // movabs r8, 0xff51afd7ed558ccd
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14006410d): {next=c.rip+3; // test dl, 0x1f
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8);
c.rip=next;return true;}
case UINT64_C(0x140064110): {next=c.rip+2; // jne 0x140064156
if(m.condition(1))next=next+UINT64_C(0x44);
c.rip=next;return true;}
case UINT64_C(0x140064112): {next=c.rip+3; // movsxd rax, edx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140064115): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064118): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x230]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006411f): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064122): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064126): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064129): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140064133): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064137): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006413a): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14006413e): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064141): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064145): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064148): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14006414c): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006414f): {next=c.rip+7; // mov qword ptr [r14 + 0x230], rax
m.put(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064156): {next=c.rip+4; // movzx edx, bpl
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006415a): {next=c.rip+3; // xor r10, rdx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006415d): {next=c.rip+7; // mov byte ptr [r14 + 0x11a4], bpl
m.put(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064164): {next=c.rip+3; // xor r10, r12
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064167): {next=c.rip+10; // movabs r12, 0xc4ceb9fe1a85ec53
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140064171): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064174): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064178): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006417b): {next=c.rip+10; // movabs r10, 0x9e3779b97f4a7c15
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140064185): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064189): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006418d): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064191): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064194): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064198): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006419b): {next=c.rip+4; // imul rcx, r12
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006419f): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400641a2): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400641a6): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400641a9): {next=c.rip+7; // mov ecx, dword ptr [r14 + 0x8bc]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,2236,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400641b0): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400641b7): {next=c.rip+10; // movabs rax, 0xd6e8feb86659fd93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x1400641c1): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400641c5): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400641c8): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400641cb): {next=c.rip+10; // movabs rbx, 0x2545f4914f6cdd1d
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x1400641d5): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400641d8): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400641db): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400641df): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400641e2): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400641e6): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400641e9): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400641ed): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400641f0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400641f5): {next=c.rip+4; // imul rdx, r12
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400641f9): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400641fd): {next=c.rip+3; // and edx, 3
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x140064200): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140064203): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006420a): {next=c.rip+4; // cmp bpl, 0x3e
m.arithmetic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3e)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14006420e): {next=c.rip+6; // jae 0x1400642a8
if(m.condition(3))next=next+UINT64_C(0x94);
c.rip=next;return true;}
case UINT64_C(0x140064214): {next=c.rip+7; // inc qword ptr [r14 + 0x1088]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14006421b): {next=c.rip+7; // lea rax, [rip - 0x64222]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-410146,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064222): {next=c.rip+8; // mov r8d, dword ptr [rax + rdx*4 + 0x3e0490]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,0,2,4,0,4064400,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006422a): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064231): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140064235): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064239): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064240): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064244): {next=c.rip+2; // mov ebx, edx
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064246): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064249): {next=c.rip+3; // xor rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006424c): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006424f): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064252): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064255): {next=c.rip+4; // movzx r8d, bpl
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064259): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14006425c): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064260): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064263): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006426a): {next=c.rip+5; // call 0x14004da40
{uint64_t target=next+UINT64_C(0xfffffffffffe97d1);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14006426f): {next=c.rip+5; // mov r8, qword ptr [rsp + 0x70]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064274): {next=c.rip+4; // lea edx, [r13 - 1]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,13,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064278): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006427a): {next=c.rip+4; // imul rcx, rbx, 0x3e
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x14006427e): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064281): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064288): {next=c.rip+4; // movsxd r9, dword ptr [rax + rcx*4]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,1,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14006428c): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006428f): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140064296): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064299): {next=c.rip+7; // add r9, qword ptr [r14 + 0x4e0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400642a0): {next=c.rip+3; // call r9
{uint64_t target=m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400642a3): {next=c.rip+5; // jmp 0x14006436f
next=next+UINT64_C(0xc7);
c.rip=next;return true;}
case UINT64_C(0x1400642a8): {next=c.rip+7; // inc dword ptr [r14 + 0x1090]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400642af): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400642b2): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400642b6): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400642b9): {next=c.rip+8; // lea rax, [r11*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,-1,11,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400642c1): {next=c.rip+7; // mov byte ptr [r14 + 0x1143], cl
m.put(Operand{2,0,8,0,14,-1,1,0,4419,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400642c8): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400642cc): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400642d0): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400642d3): {next=c.rip+3; // xor rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400642d6): {next=c.rip+7; // mov qword ptr [r14 + 0x10e8], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,4328,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400642dd): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400642e4): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400642e7): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400642ea): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400642ee): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400642f1): {next=c.rip+7; // mov byte ptr [r14 + 0x114a], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4426,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400642f8): {next=c.rip+4; // imul rax, r11, 0xb
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb)});
c.rip=next;return true;}
case UINT64_C(0x1400642fc): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064300): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064303): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064306): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064309): {next=c.rip+4; // xor rcx, 1
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006430d): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140064310): {next=c.rip+4; // lea rax, [rdx + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064314): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064318): {next=c.rip+7; // mov qword ptr [r14 + 0x1120], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4384,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006431f): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064323): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006432a): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006432e): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064331): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064338): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14006433c): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064340): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064347): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006434b): {next=c.rip+3; // xor rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006434e): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064351): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064354): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14006435a): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064361): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140064364): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064368): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006436f): {next=c.rip+5; // mov r12, qword ptr [rsp + 0x28]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064374): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x68]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064379): {next=c.rip+5; // mov r15, qword ptr [rsp + 0x20]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006437e): {next=c.rip+4; // add rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064382): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140064384): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140064386): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140064387): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140064388): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140064389): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14006438a): {next=c.rip+5; // mov edx, 0x54485254
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x54485254)}));
c.rip=next;return true;}
case UINT64_C(0x14006438f): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064392): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffe4f99);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140064397): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140064398): {next=c.rip+5; // mov edx, 0x43414e59
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x43414e59)}));
c.rip=next;return true;}
case UINT64_C(0x14006439d): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400643a0): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffe4f8b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400643a5): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x1400643b0): {next=c.rip+5; // mov qword ptr [rsp + 0x18], r8
m.put(Operand{2,0,64,0,4,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400643b5): {next=c.rip+1; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400643b6): {next=c.rip+1; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400643b7): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400643b8): {next=c.rip+2; // push r12
m.push(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400643ba): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400643bc): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400643be): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400643c0): {next=c.rip+4; // sub rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400643c4): {next=c.rip+7; // movsxd rax, dword ptr [rcx + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,1,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400643cb): {next=c.rip+3; // mov r14, rcx
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400643ce): {next=c.rip+3; // mov r13d, edx
m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400643d1): {next=c.rip+10; // movabs rcx, 0x34a5a4cbb437c294
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x34a5a4cbb437c294)}));
c.rip=next;return true;}
case UINT64_C(0x1400643db): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400643df): {next=c.rip+10; // movabs rcx, 0x96fc2e0035e946ab
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x96fc2e0035e946ab)}));
c.rip=next;return true;}
case UINT64_C(0x1400643e9): {next=c.rip+10; // movabs rbp, 0xff51afd7ed558ccd
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x1400643f3): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400643fa): {next=c.rip+3; // mov rdi, r8
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400643fd): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064402): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064407): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14006440e): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064412): {next=c.rip+10; // movabs rcx, 0x7034b05eb6a2cabe
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7034b05eb6a2cabe)}));
c.rip=next;return true;}
case UINT64_C(0x14006441c): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064423): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064428): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006442d): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140064434): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064438): {next=c.rip+10; // movabs rcx, 0x7bce1d9d411f6fd4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7bce1d9d411f6fd4)}));
c.rip=next;return true;}
case UINT64_C(0x140064442): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064449): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006444e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064453): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4536,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006445a): {next=c.rip+3; // sub rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14006445d): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064460): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064464): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064467): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140064471): {next=c.rip+4; // imul rcx, rbp
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064475): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064478): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14006447c): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006447f): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064482): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064486): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064489): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14006448d): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064490): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4536,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064497): {next=c.rip+4; // or rdx, 1
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006449b): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006449e): {next=c.rip+7; // mov qword ptr [r14 + 0x11b8], rdx
m.put(Operand{2,0,64,0,14,-1,1,0,4536,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400644a5): {next=c.rip+5; // call 0x14004d760
{uint64_t target=next+UINT64_C(0xfffffffffffe92b6);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400644aa): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10d8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4312,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400644b1): {next=c.rip+3; // mov r11d, eax
m.put(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400644b4): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1141]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4417,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400644bc): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400644bf): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x10c0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400644c6): {next=c.rip+10; // movabs r15, 0x9e3779b97f4a7c15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x1400644d0): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x10b0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400644d7): {next=c.rip+10; // movabs r12, 0x2545f4914f6cdd1d
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x1400644e1): {next=c.rip+8; // movzx edx, byte ptr [r14 + 0x10c8]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400644e9): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10b8]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400644f0): {next=c.rip+4; // imul rcx, r9
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400644f4): {next=c.rip+3; // add r10, r10
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400644f7): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400644fa): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400644fd): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064500): {next=c.rip+3; // sub rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140064503): {next=c.rip+2; // test dl, dl
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140064505): {next=c.rip+4; // cmove rbx, rax
if(m.condition(0))m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064509): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064510): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140064517): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006451b): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14006451e): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064525): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140064529): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006452c): {next=c.rip+7; // mov byte ptr [r14 + 0x1141], al
m.put(Operand{2,0,8,0,14,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064533): {next=c.rip+4; // imul rax, r9
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064537): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006453a): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006453d): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064540): {next=c.rip+3; // add rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064543): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064546): {next=c.rip+2; // test dl, dl
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140064548): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006454c): {next=c.rip+3; // mov ecx, r11d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006454f): {next=c.rip+7; // mov qword ptr [r14 + 0x10d8], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064556): {next=c.rip+5; // call 0x140048d70
{uint64_t target=next+UINT64_C(0xfffffffffffe4815);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14006455b): {next=c.rip+4; // mov dword ptr [rsp + 0x28], ebx
m.put(Operand{2,0,32,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006455f): {next=c.rip+3; // xor r9d, r9d
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140064562): {next=c.rip+4; // mov dword ptr [rsp + 0x20], eax
m.put(Operand{2,0,32,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064566): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140064568): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006456b): {next=c.rip+4; // lea r8d, [r9 + 1]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,9,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006456f): {next=c.rip+5; // call 0x14004cb70
{uint64_t target=next+UINT64_C(0xfffffffffffe85fc);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140064574): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064577): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006457a): {next=c.rip+5; // call 0x14004c880
{uint64_t target=next+UINT64_C(0xfffffffffffe8301);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14006457f): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4536,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064586): {next=c.rip+3; // test r13d, r13d
m.logic(m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x140064589): {next=c.rip+6; // jns 0x1400650e9
if(m.condition(11))next=next+UINT64_C(0xb5a);
c.rip=next;return true;}
case UINT64_C(0x14006458f): {next=c.rip+7; // cmp qword ptr [r14 + 0x1058], rdi
m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4184,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140064596): {next=c.rip+6; // jne 0x1400650f7
if(m.condition(1))next=next+UINT64_C(0xb5b);
c.rip=next;return true;}
case UINT64_C(0x14006459c): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400645a3): {next=c.rip+10; // movabs rcx, 0xd936baf6a133b099
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd936baf6a133b099)}));
c.rip=next;return true;}
case UINT64_C(0x1400645ad): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400645b1): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400645b4): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400645bb): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400645c0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400645c5): {next=c.rip+5; // call 0x140049ee0
{uint64_t target=next+UINT64_C(0xfffffffffffe5916);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400645ca): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x1400645cc): {next=c.rip+6; // jne 0x1400650d9
if(m.condition(1))next=next+UINT64_C(0xb07);
c.rip=next;return true;}
case UINT64_C(0x1400645d2): {next=c.rip+7; // cmp dword ptr [r14 + 0x4b8], eax
m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1208,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400645d9): {next=c.rip+6; // jne 0x1400650d9
if(m.condition(1))next=next+UINT64_C(0xafa);
c.rip=next;return true;}
case UINT64_C(0x1400645df): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x10d0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400645e6): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1140]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400645ee): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400645f1): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400645f8): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400645ff): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064606): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006460e): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064615): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064619): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006461e): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x1188]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064625): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064628): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006462b): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006462e): {next=c.rip+3; // sub r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140064631): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140064634): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064638): {next=c.rip+3; // inc rsi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14006463b): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006463f): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rsi
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064646): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064649): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064650): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064653): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140064657): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006465a): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064661): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064665): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064668): {next=c.rip+3; // xor rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006466b): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006466e): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064671): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140064674): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064678): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006467c): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064683): {next=c.rip+7; // cmp r8d, 0x2a7d9c
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2a7d9c)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14006468a): {next=c.rip+6; // jne 0x1400650d4
if(m.condition(1))next=next+UINT64_C(0xa44);
c.rip=next;return true;}
case UINT64_C(0x140064690): {next=c.rip+3; // mov eax, r13d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064693): {next=c.rip+4; // btr eax, 0x1f
m.bitop(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)},false);
c.rip=next;return true;}
case UINT64_C(0x140064697): {next=c.rip+3; // cmp eax, 2
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14006469a): {next=c.rip+2; // jae 0x1400646e6
if(m.condition(3))next=next+UINT64_C(0x4a);
c.rip=next;return true;}
case UINT64_C(0x14006469c): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400646a0): {next=c.rip+4; // lea rax, [rsi + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400646a4): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400646ab): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400646ae): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400646b5): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400646b9): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400646bd): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400646c4): {next=c.rip+4; // imul rax, r10
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400646c8): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400646cb): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400646ce): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400646d1): {next=c.rip+6; // add rax, 0xcaa88
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xcaa88)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400646d7): {next=c.rip+7; // xor rcx, 0xcaa88
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xcaa88)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400646de): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400646e1): {next=c.rip+5; // jmp 0x1400650c9
next=next+UINT64_C(0x9e3);
c.rip=next;return true;}
case UINT64_C(0x1400646e6): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400646e9): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffe5482);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400646ee): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400646f6): {next=c.rip+10; // movabs r8, 0xc4ceb9fe1a85ec53
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140064700): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x930]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064707): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006470e): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x10b0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064715): {next=c.rip+8; // movzx r10d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006471d): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006471f): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064722): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064725): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064729): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006472c): {next=c.rip+4; // imul rax, rbp
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064730): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064733): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064737): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006473a): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064741): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064748): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006474c): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006474f): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064753): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064756): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064759): {next=c.rip+7; // mov qword ptr [r14 + 0x930], rdx
m.put(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064760): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064763): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064767): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006476a): {next=c.rip+4; // imul rcx, rbp
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006476e): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064771): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064775): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064778): {next=c.rip+4; // imul rdx, r8
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006477c): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006477f): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064783): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064786): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006478d): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1118]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064794): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1149]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006479c): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400647a3): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400647a7): {next=c.rip+4; // lea rbx, [rax + rax*4]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400647ab): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400647ae): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400647b1): {next=c.rip+3; // add rbx, rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400647b4): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400647b7): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400647ba): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400647bd): {next=c.rip+3; // test r10b, r10b
m.logic(m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400647c0): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400647c4): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400647cb): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400647d2): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400647d6): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400647d9): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400647e0): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400647e4): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400647e8): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400647ef): {next=c.rip+4; // imul r8, r11
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400647f3): {next=c.rip+3; // xor r8, r9
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400647f6): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400647f9): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400647fc): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400647ff): {next=c.rip+3; // test r10b, r10b
m.logic(m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140064802): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064806): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006480a): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006480d): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064814): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffe7ba7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140064819): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064820): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064827): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006482f): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x10b0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064836): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1110]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006483d): {next=c.rip+4; // lea rbx, [rax + rax*8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064841): {next=c.rip+8; // movzx r10d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064849): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006484c): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064850): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064853): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064856): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064859): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14006485c): {next=c.rip+3; // test r10b, r10b
m.logic(m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14006485f): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064863): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006486a): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140064871): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064874): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064878): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14006487b): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064882): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140064886): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006488a): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064891): {next=c.rip+4; // imul r8, r11
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064895): {next=c.rip+3; // xor r8, r9
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064898): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006489b): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006489e): {next=c.rip+3; // test r10b, r10b
m.logic(m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400648a1): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400648a5): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400648a9): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400648ac): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400648b3): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffe7b08);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400648b8): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400648bb): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffe52b0);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400648c0): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400648c7): {next=c.rip+2; // jae 0x1400648d3
if(m.condition(3))next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x1400648c9): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400648cb): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400648ce): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffe7aed);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400648d3): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x10c0]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400648da): {next=c.rip+7; // mov rbp, qword ptr [r14 + 0x10b0]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400648e1): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x1110]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400648e8): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400648f0): {next=c.rip+3; // mov rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400648f3): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400648fb): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064902): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064909): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064910): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064914): {next=c.rip+4; // lea r10, [rbx + rbx*8]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064918): {next=c.rip+3; // xor rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006491b): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006491e): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064921): {next=c.rip+3; // sub r11, rcx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140064924): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140064927): {next=c.rip+4; // cmove r11, rax
if(m.condition(0))m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006492b): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006492f): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064932): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064935): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064938): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14006493c): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006493f): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064946): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006494a): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006494d): {next=c.rip+3; // xor rdx, r10
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064950): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064953): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140064956): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006495a): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006495e): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064961): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064968): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006496c): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064973): {next=c.rip+6; // mov r8d, 0x192c
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x192c)}));
c.rip=next;return true;}
case UINT64_C(0x140064979): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006497d): {next=c.rip+4; // lea rax, [rbx + rbx*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064981): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064984): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064987): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006498e): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140064992): {next=c.rip+4; // movzx edx, r9b
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064996): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006499d): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400649a1): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400649a4): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400649a7): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400649aa): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400649ad): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400649b1): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400649b5): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400649b8): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400649bf): {next=c.rip+8; // movzx edx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400649c7): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x230]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400649ce): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffe861d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400649d3): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x230]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400649da): {next=c.rip+10; // movabs rdi, 0xff51afd7ed558ccd
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x1400649e4): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400649e7): {next=c.rip+10; // movabs rbp, 0xc4ceb9fe1a85ec53
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x1400649f1): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400649f8): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400649fb): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400649ff): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064a02): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064a06): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064a09): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064a0d): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064a10): {next=c.rip+4; // imul rax, rbp
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064a14): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064a17): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064a1b): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140064a1d): {next=c.rip+2; // mov ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064a1f): {next=c.rip+3; // lea eax, [rdx + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064a22): {next=c.rip+3; // imul ecx, eax
m.imul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064a25): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140064a27): {next=c.rip+2; // not ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064a29): {next=c.rip+2; // and ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140064a2b): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x140064a2e): {next=c.rip+2; // je 0x140064a97
if(m.condition(0))next=next+UINT64_C(0x67);
c.rip=next;return true;}
case UINT64_C(0x140064a30): {next=c.rip+4; // and r8b, 3
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3)}),8));
c.rip=next;return true;}
case UINT64_C(0x140064a34): {next=c.rip+4; // cmp r8b, 1
m.arithmetic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140064a38): {next=c.rip+2; // jne 0x140064a97
if(m.condition(1))next=next+UINT64_C(0x5d);
c.rip=next;return true;}
case UINT64_C(0x140064a3a): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064a41): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140064a48): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064a4c): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064a4f): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064a56): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140064a5a): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064a5d): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064a64): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064a6c): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064a73): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064a7a): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064a7d): {next=c.rip+6; // add rax, 0x38f6c0
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38f6c0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064a83): {next=c.rip+7; // xor rcx, 0x38f6c0
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38f6c0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064a8a): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140064a92): {next=c.rip+5; // jmp 0x1400650c9
next=next+UINT64_C(0x632);
c.rip=next;return true;}
case UINT64_C(0x140064a97): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064a9a): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffe50d1);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140064a9f): {next=c.rip+2; // mov ebx, eax
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064aa1): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140064aa8): {next=c.rip+2; // jb 0x140064b07
if(m.condition(2))next=next+UINT64_C(0x5d);
c.rip=next;return true;}
case UINT64_C(0x140064aaa): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064ab1): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140064ab8): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064abc): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064abf): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064ac6): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140064aca): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064acd): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064ad4): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064adc): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064ae3): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064aea): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064aed): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064af3): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064afa): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140064b02): {next=c.rip+5; // jmp 0x1400650c9
next=next+UINT64_C(0x5c2);
c.rip=next;return true;}
case UINT64_C(0x140064b07): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064b09): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064b0c): {next=c.rip+5; // call 0x14004e0d0
{uint64_t target=next+UINT64_C(0xfffffffffffe95bf);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140064b11): {next=c.rip+7; // movsxd rcx, dword ptr [r14 + 0x928]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140064b18): {next=c.rip+10; // movabs r8, 0xd6e8feb86659fd93
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x140064b22): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064b29): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064b2c): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064b30): {next=c.rip+4; // imul rcx, r15
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064b34): {next=c.rip+4; // rol rdx, 0x11
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x140064b38): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x700]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064b3f): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064b42): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064b45): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064b48): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064b4c): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064b4f): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064b53): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064b56): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064b5a): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064b5d): {next=c.rip+4; // imul rdx, rbp
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064b61): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064b64): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064b68): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064b6b): {next=c.rip+3; // mov r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064b6e): {next=c.rip+4; // shr r10, 0x1d
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x140064b72): {next=c.rip+3; // xor r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064b75): {next=c.rip+4; // or r10, 1
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064b79): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064b7c): {next=c.rip+7; // mov qword ptr [r14 + 0x700], r10
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064b83): {next=c.rip+5; // and eax, 0x3ff
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3ff)}),32));
c.rip=next;return true;}
case UINT64_C(0x140064b88): {next=c.rip+6; // cmp rax, 0x2c5
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2c5)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140064b8e): {next=c.rip+2; // jne 0x140064b9f
if(m.condition(1))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x140064b90): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064b93): {next=c.rip+5; // call 0x14007fb70
{uint64_t target=next+UINT64_C(0x1afd8);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140064b98): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x700]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064b9f): {next=c.rip+4; // movzx eax, r10b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064ba3): {next=c.rip+2; // and al, 0x1f
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8));
c.rip=next;return true;}
case UINT64_C(0x140064ba5): {next=c.rip+2; // cmp al, 0x15
m.arithmetic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x15)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140064ba7): {next=c.rip+6; // jne 0x140064c98
if(m.condition(1))next=next+UINT64_C(0xeb);
c.rip=next;return true;}
case UINT64_C(0x140064bad): {next=c.rip+7; // movsxd rcx, dword ptr [r14 + 0x928]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140064bb4): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064bbb): {next=c.rip+7; // xor rcx, 0x5a5a
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5a5a)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064bc2): {next=c.rip+4; // rol rax, 0x11
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x140064bc6): {next=c.rip+4; // imul rcx, r15
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064bca): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064bcd): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064bd0): {next=c.rip+10; // movabs rax, 0x8f70feda99a6026d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8f70feda99a6026d)}));
c.rip=next;return true;}
case UINT64_C(0x140064bda): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064bdd): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064be0): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064be4): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064be7): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064beb): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064bee): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064bf2): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064bf5): {next=c.rip+4; // imul rcx, rbp
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064bf9): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064bfc): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064c00): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064c03): {next=c.rip+3; // mov r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064c06): {next=c.rip+4; // shr r9, 0x1d
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x140064c0a): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064c0d): {next=c.rip+4; // or r9, 1
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064c11): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064c14): {next=c.rip+3; // mov rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064c17): {next=c.rip+4; // shr rax, 8
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},1);
c.rip=next;return true;}
case UINT64_C(0x140064c1b): {next=c.rip+3; // and eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x140064c1e): {next=c.rip+4; // shr rcx, 0x28
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x28)},1);
c.rip=next;return true;}
case UINT64_C(0x140064c22): {next=c.rip+4; // imul r8, rax, 0x3e
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x140064c26): {next=c.rip+5; // mov eax, 0x8421085
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8421085)}));
c.rip=next;return true;}
case UINT64_C(0x140064c2b): {next=c.rip+2; // mul ecx
m.mul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064c2d): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064c2f): {next=c.rip+2; // sub eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x140064c31): {next=c.rip+2; // shr eax, 1
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)},1);
c.rip=next;return true;}
case UINT64_C(0x140064c33): {next=c.rip+2; // add eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x140064c35): {next=c.rip+3; // shr eax, 5
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x5)},1);
c.rip=next;return true;}
case UINT64_C(0x140064c38): {next=c.rip+3; // imul eax, eax, 0x3e
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x140064c3b): {next=c.rip+2; // sub ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x140064c3d): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064c3f): {next=c.rip+3; // add r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064c42): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064c49): {next=c.rip+4; // movsxd rcx, dword ptr [rax + r8*4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,8,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140064c4d): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140064c54): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064c57): {next=c.rip+7; // add rcx, qword ptr [r14 + 0x4e0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064c5e): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064c61): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064c64): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064c68): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064c6b): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064c6f): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064c72): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064c76): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064c79): {next=c.rip+4; // imul rcx, rbp
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064c7d): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064c80): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064c84): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064c87): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064c8a): {next=c.rip+7; // inc qword ptr [r14 + 0x708]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140064c91): {next=c.rip+7; // mov qword ptr [r14 + 0x700], rax
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064c98): {next=c.rip+7; // inc dword ptr [r14 + 0x75c]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140064c9f): {next=c.rip+7; // mov eax, dword ptr [r14 + 0x75c]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064ca6): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x758]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1880,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140064cad): {next=c.rip+2; // jb 0x140064cc2
if(m.condition(2))next=next+UINT64_C(0x13);
c.rip=next;return true;}
case UINT64_C(0x140064caf): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064cb2): {next=c.rip+11; // mov dword ptr [r14 + 0x75c], 0
m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064cbd): {next=c.rip+5; // call 0x14004b250
{uint64_t target=next+UINT64_C(0xfffffffffffe658e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140064cc2): {next=c.rip+3; // mov r8d, ebx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064cc5): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064cc7): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064cca): {next=c.rip+5; // call 0x14004c110
{uint64_t target=next+UINT64_C(0xfffffffffffe7441);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140064ccf): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140064cd6): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064cd9): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064ce0): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064ce4): {next=c.rip+7; // mov r15, qword ptr [r14 + 0x1188]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064ceb): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064cee): {next=c.rip+4; // lea r12d, [rbx + 1]
m.put(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,3,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064cf2): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064cf9): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064cfc): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140064d00): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064d03): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064d0a): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064d11): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10b8]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064d18): {next=c.rip+7; // mov rdi, qword ptr [r14 + 0x10b0]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064d1f): {next=c.rip+8; // movzx ebp, byte ptr [r14 + 0x10c8]
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064d27): {next=c.rip+4; // imul rdx, r11
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064d2b): {next=c.rip+4; // lea rax, [r10 + r10*8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,10,10,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064d2f): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064d32): {next=c.rip+3; // xor rdx, rdi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064d35): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064d38): {next=c.rip+3; // test bpl, bpl
m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140064d3b): {next=c.rip+4; // lea rax, [rbx + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064d3f): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064d43): {next=c.rip+3; // inc r15
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140064d46): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064d4d): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x8f8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064d54): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x730]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064d5b): {next=c.rip+5; // mov qword ptr [rsp + 0x70], r15
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064d60): {next=c.rip+5; // movzx r8d, byte ptr [rcx + rbx]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064d65): {next=c.rip+4; // xor r8b, byte ptr [rax + rbx]
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,8,0,0,3,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140064d69): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140064d73): {next=c.rip+4; // imul r9, rax
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064d77): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], r15
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064d7e): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140064d88): {next=c.rip+3; // add r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064d8b): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064d8e): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140064d92): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064d95): {next=c.rip+4; // lea rax, [r10 + r10]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,10,10,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064d99): {next=c.rip+7; // mov byte ptr [r14 + 0x1141], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064da0): {next=c.rip+4; // imul rdx, r11
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064da4): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064da7): {next=c.rip+3; // xor rdx, rdi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064daa): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064dad): {next=c.rip+3; // xor rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064db0): {next=c.rip+3; // test bpl, bpl
m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140064db3): {next=c.rip+4; // lea rax, [rdx + r12]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,12,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064db7): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064dbb): {next=c.rip+7; // mov qword ptr [r14 + 0x10d8], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064dc2): {next=c.rip+7; // movsxd rdx, dword ptr [r14 + 0x928]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140064dc9): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x940]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064dd0): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064dd3): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x238]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064dda): {next=c.rip+3; // xor rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064ddd): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x230]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064de4): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064de7): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064dea): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064dee): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064df1): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140064dfb): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064dff): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064e02): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064e06): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064e09): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140064e13): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064e17): {next=c.rip+4; // movzx eax, r8b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064e1b): {next=c.rip+3; // mov r15, rcx
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064e1e): {next=c.rip+6; // xor rax, 0x93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x93)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064e24): {next=c.rip+4; // shr r15, 0x21
m.shift(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064e28): {next=c.rip+3; // xor r15, rcx
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064e2b): {next=c.rip+7; // lea rcx, [rip - 0x64e32]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-413234,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064e32): {next=c.rip+7; // mov qword ptr [r14 + 0x948], r15
m.put(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064e39): {next=c.rip+8; // movzx esi, byte ptr [rax + rcx + 0x3e3660]
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,1,1,0,4077152,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064e41): {next=c.rip+4; // xor sil, 0x27
m.put(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x27)}),8));
c.rip=next;return true;}
case UINT64_C(0x140064e45): {next=c.rip+2; // inc edx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140064e47): {next=c.rip+7; // mov dword ptr [r14 + 0x928], edx
m.put(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064e4e): {next=c.rip+3; // test dl, 0x1f
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8);
c.rip=next;return true;}
case UINT64_C(0x140064e51): {next=c.rip+2; // jne 0x140064ea1
if(m.condition(1))next=next+UINT64_C(0x4e);
c.rip=next;return true;}
case UINT64_C(0x140064e53): {next=c.rip+3; // movsxd rax, edx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140064e56): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x230]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064e5d): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064e60): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064e63): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064e67): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064e6a): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140064e74): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064e78): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140064e82): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064e85): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064e89): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064e8c): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064e90): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064e93): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064e97): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064e9a): {next=c.rip+7; // mov qword ptr [r14 + 0x230], rax
m.put(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064ea1): {next=c.rip+4; // movzx r8d, sil
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064ea5): {next=c.rip+3; // mov eax, r8d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064ea8): {next=c.rip+7; // mov byte ptr [r14 + 0x11a4], sil
m.put(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)},m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064eaf): {next=c.rip+3; // xor rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064eb2): {next=c.rip+10; // movabs r12, 0xff51afd7ed558ccd
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140064ebc): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064ebf): {next=c.rip+10; // movabs rbx, 0x9e3779b97f4a7c15
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140064ec9): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064ecc): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064ed0): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064ed3): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140064edd): {next=c.rip+4; // imul rcx, r12
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064ee1): {next=c.rip+4; // imul r8, rbx
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064ee5): {next=c.rip+4; // imul r9, rbx
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064ee9): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064eec): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064ef0): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064ef3): {next=c.rip+7; // mov ecx, dword ptr [r14 + 0x8bc]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,2236,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064efa): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064efe): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064f01): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064f05): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064f08): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064f0f): {next=c.rip+10; // movabs rax, 0xd6e8feb86659fd93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x140064f19): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064f1d): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064f20): {next=c.rip+3; // xor rcx, r15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064f23): {next=c.rip+10; // movabs r15, 0x2545f4914f6cdd1d
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140064f2d): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064f30): {next=c.rip+3; // add r9, r15
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064f33): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064f37): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064f3a): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064f3e): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064f41): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064f45): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064f48): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140064f52): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064f56): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064f5b): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140064f5f): {next=c.rip+3; // and edx, 3
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x140064f62): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140064f65): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064f6c): {next=c.rip+4; // cmp sil, 0x3e
m.arithmetic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3e)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140064f70): {next=c.rip+6; // jae 0x14006500d
if(m.condition(3))next=next+UINT64_C(0x97);
c.rip=next;return true;}
case UINT64_C(0x140064f76): {next=c.rip+7; // inc qword ptr [r14 + 0x1088]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140064f7d): {next=c.rip+7; // lea rax, [rip - 0x64f84]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-413572,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064f84): {next=c.rip+8; // mov r8d, dword ptr [rax + rdx*4 + 0x3e0490]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,0,2,4,0,4064400,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064f8c): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064f93): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140064f97): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064f9b): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064fa2): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140064fa6): {next=c.rip+2; // mov ebx, edx
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064fa8): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064fab): {next=c.rip+3; // xor rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064fae): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064fb1): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064fb4): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064fb7): {next=c.rip+4; // movzx r8d, sil
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064fbb): {next=c.rip+3; // test bpl, bpl
m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140064fbe): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064fc2): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064fc5): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064fcc): {next=c.rip+5; // call 0x14004da40
{uint64_t target=next+UINT64_C(0xfffffffffffe8a6f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140064fd1): {next=c.rip+8; // mov r8, qword ptr [rsp + 0x80]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064fd9): {next=c.rip+4; // lea edx, [r13 - 1]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,13,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064fdd): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064fdf): {next=c.rip+4; // imul rcx, rbx, 0x3e
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x140064fe3): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140064fe6): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064fed): {next=c.rip+4; // movsxd r9, dword ptr [rax + rcx*4]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,1,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140064ff1): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140064ff4): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140064ffb): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140064ffe): {next=c.rip+7; // add r9, qword ptr [r14 + 0x4e0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065005): {next=c.rip+3; // call r9
{uint64_t target=m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140065008): {next=c.rip+5; // jmp 0x1400650d4
next=next+UINT64_C(0xc7);
c.rip=next;return true;}
case UINT64_C(0x14006500d): {next=c.rip+7; // inc dword ptr [r14 + 0x1090]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140065014): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065017): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14006501b): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006501e): {next=c.rip+8; // lea rax, [r10*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,-1,10,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065026): {next=c.rip+7; // mov byte ptr [r14 + 0x1143], cl
m.put(Operand{2,0,8,0,14,-1,1,0,4419,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006502d): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065031): {next=c.rip+4; // imul r9, rbx
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065035): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065038): {next=c.rip+3; // xor rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006503b): {next=c.rip+7; // mov qword ptr [r14 + 0x10e8], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,4328,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065042): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065049): {next=c.rip+3; // add r9, r15
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14006504c): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006504f): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140065053): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065056): {next=c.rip+7; // mov byte ptr [r14 + 0x114a], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4426,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006505d): {next=c.rip+4; // imul rax, r10, 0xb
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb)});
c.rip=next;return true;}
case UINT64_C(0x140065061): {next=c.rip+4; // imul rdx, r11
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065065): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065068): {next=c.rip+3; // xor rdx, rdi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006506b): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006506e): {next=c.rip+4; // xor rcx, 1
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065072): {next=c.rip+3; // test bpl, bpl
m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140065075): {next=c.rip+4; // lea rax, [rdx + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065079): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006507d): {next=c.rip+7; // mov qword ptr [r14 + 0x1120], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4384,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065084): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065088): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006508f): {next=c.rip+4; // imul r9, rbx
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065093): {next=c.rip+3; // add r9, r15
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065096): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006509d): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400650a1): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400650a5): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400650ac): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400650b0): {next=c.rip+3; // xor rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400650b3): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400650b6): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400650b9): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400650bf): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400650c6): {next=c.rip+3; // test bpl, bpl
m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400650c9): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400650cd): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400650d4): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x78]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400650d9): {next=c.rip+4; // add rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400650dd): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400650df): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400650e1): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400650e3): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400650e5): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400650e6): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400650e7): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400650e8): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x1400650e9): {next=c.rip+5; // mov edx, 0x54485254
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x54485254)}));
c.rip=next;return true;}
case UINT64_C(0x1400650ee): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400650f1): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffe423a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400650f6): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x1400650f7): {next=c.rip+5; // mov edx, 0x43414e59
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x43414e59)}));
c.rip=next;return true;}
case UINT64_C(0x1400650fc): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400650ff): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffe422c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140065104): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140065110): {next=c.rip+2; // push r12
m.push(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065112): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065114): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065116): {next=c.rip+4; // sub rsp, 0x40
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x40)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14006511a): {next=c.rip+7; // movsxd rax, dword ptr [rcx + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,1,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140065121): {next=c.rip+3; // mov r14, rcx
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065124): {next=c.rip+3; // mov r13d, edx
m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065127): {next=c.rip+10; // movabs rcx, 0x4328aeb5b475ce75
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4328aeb5b475ce75)}));
c.rip=next;return true;}
case UINT64_C(0x140065131): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065135): {next=c.rip+10; // movabs rcx, 0xe171247e35ab4a4a
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xe171247e35ab4a4a)}));
c.rip=next;return true;}
case UINT64_C(0x14006513f): {next=c.rip+3; // mov r12, r8
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065142): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065149): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006514e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065153): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14006515a): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006515e): {next=c.rip+10; // movabs rcx, 0x7b9ba20b6e0c65f
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7b9ba20b6e0c65f)}));
c.rip=next;return true;}
case UINT64_C(0x140065168): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006516f): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065174): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065179): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140065180): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065184): {next=c.rip+10; // movabs rcx, 0xc4317e3415d6333
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4317e3415d6333)}));
c.rip=next;return true;}
case UINT64_C(0x14006518e): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065195): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006519a): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006519f): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4528,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400651a6): {next=c.rip+3; // sub rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400651a9): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400651ac): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400651b0): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400651b3): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x1400651bd): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400651c1): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x1400651cb): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400651ce): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400651d2): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400651d5): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400651d8): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400651dc): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400651df): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400651e3): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400651e6): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4528,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400651ed): {next=c.rip+4; // or rdx, 1
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400651f1): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400651f4): {next=c.rip+7; // mov qword ptr [r14 + 0x11b0], rdx
m.put(Operand{2,0,64,0,14,-1,1,0,4528,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400651fb): {next=c.rip+5; // call 0x14004a3d0
{uint64_t target=next+UINT64_C(0xfffffffffffe51d0);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140065200): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4528,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065207): {next=c.rip+3; // test r13d, r13d
m.logic(m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14006520a): {next=c.rip+6; // jns 0x140065dcc
if(m.condition(11))next=next+UINT64_C(0xbbc);
c.rip=next;return true;}
case UINT64_C(0x140065210): {next=c.rip+7; // cmp qword ptr [r14 + 0x1058], r12
m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4184,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140065217): {next=c.rip+6; // jne 0x140065dda
if(m.condition(1))next=next+UINT64_C(0xbbd);
c.rip=next;return true;}
case UINT64_C(0x14006521d): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140065224): {next=c.rip+10; // movabs rcx, 0xc45b755c143eefd6
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc45b755c143eefd6)}));
c.rip=next;return true;}
case UINT64_C(0x14006522e): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065232): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065235): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006523c): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065241): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065246): {next=c.rip+5; // call 0x140049ee0
{uint64_t target=next+UINT64_C(0xfffffffffffe4c95);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14006524b): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14006524d): {next=c.rip+6; // jne 0x140065dc1
if(m.condition(1))next=next+UINT64_C(0xb6e);
c.rip=next;return true;}
case UINT64_C(0x140065253): {next=c.rip+7; // cmp dword ptr [r14 + 0x4b8], eax
m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1208,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14006525a): {next=c.rip+6; // jne 0x140065dc1
if(m.condition(1))next=next+UINT64_C(0xb61);
c.rip=next;return true;}
case UINT64_C(0x140065260): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x10d0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065267): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1140]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006526f): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065272): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065279): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065280): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065287): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006528b): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065290): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065297): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006529a): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rbp
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006529f): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400652a2): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400652a7): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x1188]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400652ae): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400652b1): {next=c.rip+3; // sub r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400652b4): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400652b9): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400652c1): {next=c.rip+10; // movabs rbp, 0x2545f4914f6cdd1d
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x1400652cb): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400652ce): {next=c.rip+5; // mov qword ptr [rsp + 0x20], r15
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400652d3): {next=c.rip+10; // movabs r15, 0x9e3779b97f4a7c15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x1400652dd): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400652e1): {next=c.rip+3; // inc rsi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400652e4): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400652e8): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rsi
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400652ef): {next=c.rip+3; // add r9, rbp
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400652f2): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400652f9): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400652fc): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140065300): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065303): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006530a): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006530e): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065311): {next=c.rip+3; // xor rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065314): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065317): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006531a): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14006531d): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065321): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065325): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006532c): {next=c.rip+7; // cmp r8d, 0x2a7d9c
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2a7d9c)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140065333): {next=c.rip+6; // jne 0x140065da8
if(m.condition(1))next=next+UINT64_C(0xa6f);
c.rip=next;return true;}
case UINT64_C(0x140065339): {next=c.rip+3; // mov eax, r13d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006533c): {next=c.rip+4; // btr eax, 0x1f
m.bitop(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)},false);
c.rip=next;return true;}
case UINT64_C(0x140065340): {next=c.rip+3; // cmp eax, 2
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140065343): {next=c.rip+2; // jae 0x14006538f
if(m.condition(3))next=next+UINT64_C(0x4a);
c.rip=next;return true;}
case UINT64_C(0x140065345): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065349): {next=c.rip+4; // lea rax, [rsi + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006534d): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065354): {next=c.rip+3; // add r9, rbp
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065357): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006535e): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140065362): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065366): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006536d): {next=c.rip+4; // imul rax, r10
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065371): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065374): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065377): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006537a): {next=c.rip+6; // add rax, 0xcaa88
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xcaa88)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065380): {next=c.rip+7; // xor rcx, 0xcaa88
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xcaa88)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065387): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14006538a): {next=c.rip+5; // jmp 0x140065d9d
next=next+UINT64_C(0xa0e);
c.rip=next;return true;}
case UINT64_C(0x14006538f): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065392): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffe47d9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140065397): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006539f): {next=c.rip+10; // movabs rbx, 0xff51afd7ed558ccd
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x1400653a9): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400653b0): {next=c.rip+10; // movabs r8, 0xc4ceb9fe1a85ec53
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x1400653ba): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10b0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400653c1): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400653c9): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400653cb): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400653ce): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x930]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400653d5): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400653d8): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400653dc): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400653df): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400653e3): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400653e6): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400653ea): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400653ed): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400653f1): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400653f4): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400653f8): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400653fb): {next=c.rip+7; // mov qword ptr [r14 + 0x930], rdx
m.put(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065402): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x948]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065409): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065410): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065413): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065417): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006541a): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006541e): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065421): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065425): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065428): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006542c): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006542f): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065433): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065436): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006543d): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1118]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065444): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1149]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006544c): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065453): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065457): {next=c.rip+4; // lea rbx, [rax + rax*4]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006545b): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006545e): {next=c.rip+3; // add rbx, rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065461): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065464): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065467): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006546a): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14006546d): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140065470): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065474): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006547b): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140065482): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065486): {next=c.rip+3; // add rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065489): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065490): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140065494): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065498): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006549f): {next=c.rip+4; // imul r8, r11
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400654a3): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400654a6): {next=c.rip+3; // xor r8, r10
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400654a9): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400654ac): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400654af): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400654b2): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400654b6): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400654ba): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400654bd): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400654c4): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffe6ef7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400654c9): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400654d0): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400654d7): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400654df): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400654e6): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1110]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400654ed): {next=c.rip+4; // lea r11, [rax + rax*8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400654f1): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400654f9): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400654fc): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065500): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065503): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065506): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065509): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14006550c): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14006550f): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065513): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006551a): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140065521): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065525): {next=c.rip+3; // add rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065528): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006552f): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140065533): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065537): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006553e): {next=c.rip+4; // imul r8, r10
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065542): {next=c.rip+3; // xor r8, r11
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065545): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065548): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006554b): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006554e): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140065551): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065555): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065559): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006555c): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065563): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffe6e58);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140065568): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006556b): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffe4600);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140065570): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140065577): {next=c.rip+2; // jae 0x140065583
if(m.condition(3))next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x140065579): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006557b): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006557e): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffe6e3d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140065583): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x10c0]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006558a): {next=c.rip+7; // mov rbp, qword ptr [r14 + 0x10b0]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065591): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x1110]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065598): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400655a0): {next=c.rip+3; // mov rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400655a3): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400655ab): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400655b2): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400655b9): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x1180]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400655c0): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400655c4): {next=c.rip+4; // lea r9, [rbx + rbx*8]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400655c8): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400655cb): {next=c.rip+3; // xor rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400655ce): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400655d1): {next=c.rip+3; // sub r11, rcx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400655d4): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400655d7): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x1400655e1): {next=c.rip+4; // cmove r11, rax
if(m.condition(0))m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400655e5): {next=c.rip+4; // imul r10, r15
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400655e9): {next=c.rip+3; // add r10, rcx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400655ec): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400655ef): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400655f2): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400655f6): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400655f9): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065600): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065604): {next=c.rip+3; // xor rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065607): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006560a): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006560d): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140065610): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065614): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065618): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006561b): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065622): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14006562c): {next=c.rip+4; // imul r10, r15
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065630): {next=c.rip+3; // add r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065633): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065637): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006563e): {next=c.rip+6; // mov r8d, 0xd686
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xd686)}));
c.rip=next;return true;}
case UINT64_C(0x140065644): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r10
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006564b): {next=c.rip+4; // lea rax, [rbx + rbx*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006564f): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065652): {next=c.rip+4; // shr r10, 0x1b
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140065656): {next=c.rip+4; // movzx edx, r10b
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006565a): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065661): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065665): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065668): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006566b): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006566e): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140065671): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065675): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065679): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006567c): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065683): {next=c.rip+8; // movzx edx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006568b): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x230]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065692): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffe7959);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140065697): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x230]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006569e): {next=c.rip+10; // movabs rdi, 0xff51afd7ed558ccd
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x1400656a8): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400656ab): {next=c.rip+10; // movabs rsi, 0xc4ceb9fe1a85ec53
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x1400656b5): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400656bc): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400656bf): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400656c3): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400656c6): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400656ca): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400656cd): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400656d1): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400656d4): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400656d8): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400656db): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400656df): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400656e1): {next=c.rip+3; // lea eax, [rdx + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400656e4): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400656e6): {next=c.rip+2; // xor eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400656e8): {next=c.rip+3; // imul ecx, edx
m.imul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400656eb): {next=c.rip+2; // not ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400656ed): {next=c.rip+2; // and ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400656ef): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400656f2): {next=c.rip+2; // je 0x140065765
if(m.condition(0))next=next+UINT64_C(0x71);
c.rip=next;return true;}
case UINT64_C(0x1400656f4): {next=c.rip+4; // and r8b, 3
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3)}),8));
c.rip=next;return true;}
case UINT64_C(0x1400656f8): {next=c.rip+4; // cmp r8b, 1
m.arithmetic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x1400656fc): {next=c.rip+2; // jne 0x140065765
if(m.condition(1))next=next+UINT64_C(0x67);
c.rip=next;return true;}
case UINT64_C(0x1400656fe): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065705): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14006570f): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140065716): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006571a): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14006571d): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065724): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140065728): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006572b): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065732): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006573a): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065741): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065748): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006574b): {next=c.rip+6; // add rax, 0x38f6c0
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38f6c0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065751): {next=c.rip+7; // xor rcx, 0x38f6c0
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38f6c0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065758): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140065760): {next=c.rip+5; // jmp 0x140065d9d
next=next+UINT64_C(0x638);
c.rip=next;return true;}
case UINT64_C(0x140065765): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065768): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffe4403);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14006576d): {next=c.rip+2; // mov ebx, eax
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006576f): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140065776): {next=c.rip+2; // jb 0x1400657df
if(m.condition(2))next=next+UINT64_C(0x67);
c.rip=next;return true;}
case UINT64_C(0x140065778): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006577f): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140065789): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140065790): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065794): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065797): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006579e): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400657a2): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400657a5): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400657ac): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400657b4): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400657bb): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400657c2): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400657c5): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400657cb): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400657d2): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x1400657da): {next=c.rip+5; // jmp 0x140065d9d
next=next+UINT64_C(0x5be);
c.rip=next;return true;}
case UINT64_C(0x1400657df): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400657e1): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400657e4): {next=c.rip+5; // call 0x14004e0d0
{uint64_t target=next+UINT64_C(0xfffffffffffe88e7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400657e9): {next=c.rip+7; // movsxd rcx, dword ptr [r14 + 0x928]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400657f0): {next=c.rip+10; // movabs r8, 0xd6e8feb86659fd93
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x1400657fa): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065801): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065804): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065808): {next=c.rip+4; // imul rcx, r15
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006580c): {next=c.rip+4; // rol rdx, 0x11
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x140065810): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065813): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x700]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006581a): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006581d): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065820): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065824): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065827): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006582b): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006582e): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065832): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065835): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065839): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006583c): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065840): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065843): {next=c.rip+3; // mov r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065846): {next=c.rip+4; // shr r10, 0x1d
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14006584a): {next=c.rip+3; // xor r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006584d): {next=c.rip+4; // or r10, 1
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065851): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065854): {next=c.rip+7; // mov qword ptr [r14 + 0x700], r10
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006585b): {next=c.rip+5; // and eax, 0x3ff
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3ff)}),32));
c.rip=next;return true;}
case UINT64_C(0x140065860): {next=c.rip+6; // cmp rax, 0x2c5
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2c5)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140065866): {next=c.rip+2; // jne 0x140065877
if(m.condition(1))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x140065868): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006586b): {next=c.rip+5; // call 0x14007fb70
{uint64_t target=next+UINT64_C(0x1a300);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140065870): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x700]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065877): {next=c.rip+4; // movzx eax, r10b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006587b): {next=c.rip+2; // and al, 0x1f
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8));
c.rip=next;return true;}
case UINT64_C(0x14006587d): {next=c.rip+2; // cmp al, 0x15
m.arithmetic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x15)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14006587f): {next=c.rip+6; // jne 0x14006596f
if(m.condition(1))next=next+UINT64_C(0xea);
c.rip=next;return true;}
case UINT64_C(0x140065885): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14006588c): {next=c.rip+6; // xor rax, 0x5a5a
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5a5a)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065892): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x940]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065899): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006589d): {next=c.rip+4; // rol rcx, 0x11
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x1400658a1): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400658a4): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400658a7): {next=c.rip+10; // movabs rax, 0x8f70feda99a6026d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8f70feda99a6026d)}));
c.rip=next;return true;}
case UINT64_C(0x1400658b1): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400658b4): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400658b7): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400658bb): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400658be): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400658c2): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400658c5): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400658c9): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400658cc): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400658d0): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400658d3): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400658d7): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400658da): {next=c.rip+3; // mov r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400658dd): {next=c.rip+4; // shr r9, 0x1d
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x1400658e1): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400658e4): {next=c.rip+4; // or r9, 1
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400658e8): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400658eb): {next=c.rip+3; // mov rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400658ee): {next=c.rip+4; // shr rax, 8
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},1);
c.rip=next;return true;}
case UINT64_C(0x1400658f2): {next=c.rip+3; // and eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400658f5): {next=c.rip+4; // shr rcx, 0x28
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x28)},1);
c.rip=next;return true;}
case UINT64_C(0x1400658f9): {next=c.rip+4; // imul r8, rax, 0x3e
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x1400658fd): {next=c.rip+5; // mov eax, 0x8421085
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8421085)}));
c.rip=next;return true;}
case UINT64_C(0x140065902): {next=c.rip+2; // mul ecx
m.mul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065904): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065906): {next=c.rip+2; // sub eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x140065908): {next=c.rip+2; // shr eax, 1
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)},1);
c.rip=next;return true;}
case UINT64_C(0x14006590a): {next=c.rip+2; // add eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14006590c): {next=c.rip+3; // shr eax, 5
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x5)},1);
c.rip=next;return true;}
case UINT64_C(0x14006590f): {next=c.rip+3; // imul eax, eax, 0x3e
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x140065912): {next=c.rip+2; // sub ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x140065914): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065916): {next=c.rip+3; // add r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065919): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065920): {next=c.rip+4; // movsxd rcx, dword ptr [rax + r8*4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,8,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140065924): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14006592b): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006592e): {next=c.rip+7; // add rcx, qword ptr [r14 + 0x4e0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065935): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065938): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006593b): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14006593f): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065942): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065946): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065949): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14006594d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065950): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065954): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065957): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14006595b): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006595e): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065961): {next=c.rip+7; // inc qword ptr [r14 + 0x708]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140065968): {next=c.rip+7; // mov qword ptr [r14 + 0x700], rax
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006596f): {next=c.rip+7; // inc dword ptr [r14 + 0x75c]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140065976): {next=c.rip+7; // mov eax, dword ptr [r14 + 0x75c]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006597d): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x758]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1880,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140065984): {next=c.rip+2; // jb 0x140065999
if(m.condition(2))next=next+UINT64_C(0x13);
c.rip=next;return true;}
case UINT64_C(0x140065986): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065989): {next=c.rip+11; // mov dword ptr [r14 + 0x75c], 0
m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065994): {next=c.rip+5; // call 0x14004b250
{uint64_t target=next+UINT64_C(0xfffffffffffe58b7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140065999): {next=c.rip+3; // mov r8d, ebx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006599c): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006599e): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400659a1): {next=c.rip+5; // call 0x14004c110
{uint64_t target=next+UINT64_C(0xfffffffffffe676a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400659a6): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400659ad): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x1400659b7): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400659be): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x1188]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400659c5): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400659c9): {next=c.rip+3; // add r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400659cc): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400659d3): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400659d6): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400659da): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400659dd): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400659e4): {next=c.rip+7; // mov rdi, qword ptr [r14 + 0x10c0]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400659eb): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400659f2): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x10b0]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400659f9): {next=c.rip+8; // movzx r15d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a01): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065a05): {next=c.rip+4; // lea rax, [r11 + r11*8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,11,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a09): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065a0c): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065a0f): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a12): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065a15): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140065a18): {next=c.rip+4; // lea rax, [rdx + rbx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a1c): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a20): {next=c.rip+3; // inc r10
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140065a23): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a2a): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x8f8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a31): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x730]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a38): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r10
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a3d): {next=c.rip+5; // movzx r8d, byte ptr [rcx + rbx]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a42): {next=c.rip+4; // xor r8b, byte ptr [rax + rbx]
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,8,0,0,3,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140065a46): {next=c.rip+2; // inc ebx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140065a48): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], r10
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a4f): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140065a59): {next=c.rip+4; // imul r9, rax
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065a5d): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a62): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140065a6c): {next=c.rip+3; // add r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065a6f): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a72): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140065a76): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a79): {next=c.rip+4; // lea rax, [r11 + r11]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,11,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a7d): {next=c.rip+7; // mov byte ptr [r14 + 0x1141], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a84): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065a88): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065a8b): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065a8e): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a91): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065a94): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140065a97): {next=c.rip+4; // lea rax, [rdx + rbx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a9b): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065a9f): {next=c.rip+7; // mov qword ptr [r14 + 0x10d8], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065aa6): {next=c.rip+7; // movsxd rdx, dword ptr [r14 + 0x928]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140065aad): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x940]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065ab4): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065ab7): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x238]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065abe): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x230]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065ac5): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065ac8): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065acb): {next=c.rip+10; // movabs rbx, 0xff51afd7ed558ccd
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140065ad5): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065ad8): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065adc): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065adf): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065ae3): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065ae6): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065aea): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065aed): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140065af7): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065afb): {next=c.rip+4; // movzx eax, r8b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065aff): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065b02): {next=c.rip+4; // shr rbx, 0x21
m.shift(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065b06): {next=c.rip+3; // xor rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065b09): {next=c.rip+7; // lea rcx, [rip - 0x65b10]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-416528,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065b10): {next=c.rip+6; // xor rax, 0x93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x93)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065b16): {next=c.rip+7; // mov qword ptr [r14 + 0x948], rbx
m.put(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065b1d): {next=c.rip+8; // movzx ebp, byte ptr [rax + rcx + 0x3e3660]
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,1,1,0,4077152,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065b25): {next=c.rip+4; // xor bpl, 0x27
m.put(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x27)}),8));
c.rip=next;return true;}
case UINT64_C(0x140065b29): {next=c.rip+10; // movabs r8, 0xff51afd7ed558ccd
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140065b33): {next=c.rip+2; // inc edx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140065b35): {next=c.rip+7; // mov dword ptr [r14 + 0x928], edx
m.put(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065b3c): {next=c.rip+3; // test dl, 0x1f
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8);
c.rip=next;return true;}
case UINT64_C(0x140065b3f): {next=c.rip+2; // jne 0x140065b85
if(m.condition(1))next=next+UINT64_C(0x44);
c.rip=next;return true;}
case UINT64_C(0x140065b41): {next=c.rip+3; // movsxd rax, edx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140065b44): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x230]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065b4b): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065b4e): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065b51): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065b55): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065b58): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140065b62): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065b66): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065b69): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065b6d): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065b70): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065b74): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065b77): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065b7b): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065b7e): {next=c.rip+7; // mov qword ptr [r14 + 0x230], rax
m.put(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065b85): {next=c.rip+4; // movzx edx, bpl
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065b89): {next=c.rip+3; // xor r10, rdx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065b8c): {next=c.rip+7; // mov byte ptr [r14 + 0x11a4], bpl
m.put(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065b93): {next=c.rip+5; // xor r10, qword ptr [rsp + 0x60]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065b98): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065b9b): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065b9f): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065ba2): {next=c.rip+10; // movabs r10, 0x9e3779b97f4a7c15
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140065bac): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065bb0): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065bb4): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065bb8): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065bbb): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065bbf): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065bc2): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140065bcc): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065bd0): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065bd3): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065bd7): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065bda): {next=c.rip+7; // mov ecx, dword ptr [r14 + 0x8bc]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,2236,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065be1): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065be8): {next=c.rip+10; // movabs rax, 0xd6e8feb86659fd93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x140065bf2): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065bf6): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065bf9): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065bfc): {next=c.rip+10; // movabs rbx, 0x2545f4914f6cdd1d
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140065c06): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065c09): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065c0c): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065c10): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065c13): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065c17): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065c1a): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065c1e): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065c21): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140065c2b): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065c2f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065c34): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065c38): {next=c.rip+3; // and edx, 3
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x140065c3b): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140065c3e): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065c45): {next=c.rip+4; // cmp bpl, 0x3e
m.arithmetic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3e)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140065c49): {next=c.rip+6; // jae 0x140065ce1
if(m.condition(3))next=next+UINT64_C(0x92);
c.rip=next;return true;}
case UINT64_C(0x140065c4f): {next=c.rip+7; // inc qword ptr [r14 + 0x1088]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140065c56): {next=c.rip+7; // lea rax, [rip - 0x65c5d]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-416861,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065c5d): {next=c.rip+8; // mov r8d, dword ptr [rax + rdx*4 + 0x3e0490]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,0,2,4,0,4064400,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065c65): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065c6c): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140065c70): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065c74): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065c7b): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065c7f): {next=c.rip+2; // mov ebx, edx
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065c81): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065c84): {next=c.rip+3; // xor rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065c87): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065c8a): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065c8d): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065c90): {next=c.rip+4; // movzx r8d, bpl
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065c94): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140065c97): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065c9b): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065c9e): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065ca5): {next=c.rip+5; // call 0x14004da40
{uint64_t target=next+UINT64_C(0xfffffffffffe7d96);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140065caa): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065cac): {next=c.rip+4; // lea edx, [r13 - 1]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,13,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065cb0): {next=c.rip+4; // imul rcx, rbx, 0x3e
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x140065cb4): {next=c.rip+3; // mov r8, r12
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065cb7): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065cba): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065cc1): {next=c.rip+4; // movsxd r9, dword ptr [rax + rcx*4]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,1,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140065cc5): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065cc8): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140065ccf): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065cd2): {next=c.rip+7; // add r9, qword ptr [r14 + 0x4e0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065cd9): {next=c.rip+3; // call r9
{uint64_t target=m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140065cdc): {next=c.rip+5; // jmp 0x140065da8
next=next+UINT64_C(0xc7);
c.rip=next;return true;}
case UINT64_C(0x140065ce1): {next=c.rip+7; // inc dword ptr [r14 + 0x1090]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140065ce8): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065ceb): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140065cef): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065cf2): {next=c.rip+8; // lea rax, [r11*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,-1,11,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065cfa): {next=c.rip+7; // mov byte ptr [r14 + 0x1143], cl
m.put(Operand{2,0,8,0,14,-1,1,0,4419,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065d01): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065d05): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065d09): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065d0c): {next=c.rip+3; // xor rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065d0f): {next=c.rip+7; // mov qword ptr [r14 + 0x10e8], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,4328,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065d16): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065d1d): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065d20): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065d23): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140065d27): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065d2a): {next=c.rip+7; // mov byte ptr [r14 + 0x114a], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4426,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065d31): {next=c.rip+4; // imul rax, r11, 0xb
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb)});
c.rip=next;return true;}
case UINT64_C(0x140065d35): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065d39): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065d3c): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065d3f): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065d42): {next=c.rip+4; // xor rcx, 1
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065d46): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140065d49): {next=c.rip+4; // lea rax, [rdx + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065d4d): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065d51): {next=c.rip+7; // mov qword ptr [r14 + 0x1120], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4384,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065d58): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065d5c): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065d63): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065d67): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065d6a): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065d71): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140065d75): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065d79): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065d80): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065d84): {next=c.rip+3; // xor rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065d87): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065d8a): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065d8d): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065d93): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065d9a): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140065d9d): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065da1): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065da8): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x28]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065dad): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x30]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065db2): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x38]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065db7): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x68]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065dbc): {next=c.rip+5; // mov r15, qword ptr [rsp + 0x20]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065dc1): {next=c.rip+4; // add rsp, 0x40
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x40)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065dc5): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140065dc7): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140065dc9): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140065dcb): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140065dcc): {next=c.rip+5; // mov edx, 0x54485254
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x54485254)}));
c.rip=next;return true;}
case UINT64_C(0x140065dd1): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065dd4): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffe3557);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140065dd9): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140065dda): {next=c.rip+5; // mov edx, 0x43414e59
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x43414e59)}));
c.rip=next;return true;}
case UINT64_C(0x140065ddf): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065de2): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffe3549);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140065de7): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140065df0): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065df5): {next=c.rip+1; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065df6): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065df7): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065df8): {next=c.rip+2; // push r12
m.push(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065dfa): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065dfc): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065dfe): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065e00): {next=c.rip+7; // sub rsp, 0x170
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x170)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140065e07): {next=c.rip+7; // mov rax, qword ptr [rip + 0x3a7212]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,16,-1,1,0,3830290,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065e0e): {next=c.rip+3; // xor rax, rsp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065e11): {next=c.rip+8; // mov qword ptr [rsp + 0x160], rax
m.put(Operand{2,0,64,0,4,-1,1,0,352,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065e19): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r8
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065e1e): {next=c.rip+3; // mov r13d, edx
m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065e21): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065e24): {next=c.rip+7; // movsxd rax, dword ptr [rcx + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,1,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140065e2b): {next=c.rip+10; // movabs rcx, 0x2a3fac7c4ed3d3e6
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2a3fac7c4ed3d3e6)}));
c.rip=next;return true;}
case UINT64_C(0x140065e35): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065e39): {next=c.rip+7; // xor rax, qword ptr [rbx + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065e40): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065e45): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065e4a): {next=c.rip+7; // movsxd rax, dword ptr [rbx + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,3,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140065e51): {next=c.rip+10; // movabs rcx, 0x886626b7cf0d57d9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x886626b7cf0d57d9)}));
c.rip=next;return true;}
case UINT64_C(0x140065e5b): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065e5f): {next=c.rip+7; // xor rax, qword ptr [rbx + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065e66): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065e6b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065e70): {next=c.rip+7; // movsxd rax, dword ptr [rbx + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,3,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140065e77): {next=c.rip+10; // movabs rcx, 0x6eaeb8e94c46dbcc
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x6eaeb8e94c46dbcc)}));
c.rip=next;return true;}
case UINT64_C(0x140065e81): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065e85): {next=c.rip+7; // xor rax, qword ptr [rbx + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065e8c): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065e91): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065e96): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x11c8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4552,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065e9d): {next=c.rip+10; // movabs rcx, 0x6554152abbfb7ea2
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x6554152abbfb7ea2)}));
c.rip=next;return true;}
case UINT64_C(0x140065ea7): {next=c.rip+3; // sub rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140065eaa): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065ead): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065eb1): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065eb4): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140065ebe): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065ec2): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065ec5): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065ec9): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065ecc): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140065ed6): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065eda): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065edd): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140065ee1): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065ee4): {next=c.rip+4; // or rdx, 1
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065ee8): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x11c8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4552,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065eef): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065ef2): {next=c.rip+7; // mov qword ptr [rbx + 0x11c8], rdx
m.put(Operand{2,0,64,0,3,-1,1,0,4552,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065ef9): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065efc): {next=c.rip+5; // call 0x14004d870
{uint64_t target=next+UINT64_C(0xfffffffffffe796f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140065f01): {next=c.rip+4; // mov dword ptr [rsp + 0x28], eax
m.put(Operand{2,0,32,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065f05): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065f08): {next=c.rip+5; // call 0x14004d970
{uint64_t target=next+UINT64_C(0xfffffffffffe7a63);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140065f0d): {next=c.rip+3; // mov r15d, eax
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065f10): {next=c.rip+3; // cmp eax, 0x20
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x20)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140065f13): {next=c.rip+2; // jbe 0x140065f1d
if(m.condition(4))next=next+UINT64_C(0x8);
c.rip=next;return true;}
case UINT64_C(0x140065f15): {next=c.rip+6; // mov r15d, 0x20
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x20)}));
c.rip=next;return true;}
case UINT64_C(0x140065f1b): {next=c.rip+2; // jmp 0x140065f21
next=next+UINT64_C(0x4);
c.rip=next;return true;}
case UINT64_C(0x140065f1d): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x140065f1f): {next=c.rip+2; // je 0x140065f3e
if(m.condition(0))next=next+UINT64_C(0x1d);
c.rip=next;return true;}
case UINT64_C(0x140065f21): {next=c.rip+2; // xor edi, edi
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140065f23): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065f26): {next=c.rip+5; // call 0x14004a3d0
{uint64_t target=next+UINT64_C(0xfffffffffffe44a5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140065f2b): {next=c.rip+3; // mov ecx, r15d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065f2e): {next=c.rip+2; // sub ecx, edi
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x140065f30): {next=c.rip+2; // dec ecx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,true));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140065f32): {next=c.rip+5; // mov qword ptr [rsp + rcx*8 + 0x60], rax
m.put(Operand{2,0,64,0,4,1,8,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065f37): {next=c.rip+2; // inc edi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140065f39): {next=c.rip+3; // cmp edi, r15d
m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140065f3c): {next=c.rip+2; // jb 0x140065f23
if(m.condition(2))next=next+UINT64_C(0xffffffffffffffe5);
c.rip=next;return true;}
case UINT64_C(0x140065f3e): {next=c.rip+6; // mov r12d, 0x2a60
m.put(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2a60)}));
c.rip=next;return true;}
case UINT64_C(0x140065f44): {next=c.rip+9; // mov rax, qword ptr gs:[0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,-1,-1,1,1,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065f4d): {next=c.rip+3; // add r12, qword ptr [rax]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065f50): {next=c.rip+8; // mov eax, dword ptr [r12 + 0x524]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,12,-1,1,0,1316,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065f58): {next=c.rip+4; // mov dword ptr [rsp + 0x20], eax
m.put(Operand{2,0,32,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065f5c): {next=c.rip+7; // mov r14, qword ptr [rbx + 0x10c0]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065f63): {next=c.rip+7; // mov r10, qword ptr [rbx + 0x10b8]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065f6a): {next=c.rip+4; // lea r8, [r10 + r10*2]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,10,10,2,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065f6e): {next=c.rip+7; // mov rbp, qword ptr [rbx + 0x10b0]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065f75): {next=c.rip+7; // movzx ecx, byte ptr [rbx + 0x1142]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4418,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065f7c): {next=c.rip+4; // imul rcx, r14
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065f80): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065f83): {next=c.rip+3; // xor rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065f86): {next=c.rip+7; // movzx esi, byte ptr [rbx + 0x10c8]
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065f8d): {next=c.rip+7; // mov rdi, qword ptr [rbx + 0x10e0]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4320,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065f94): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065f97): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065f9a): {next=c.rip+3; // sub rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140065f9d): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140065fa0): {next=c.rip+4; // cmove rdi, rax
if(m.condition(0))m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065fa4): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140065fae): {next=c.rip+7; // mov r11, qword ptr [rbx + 0x1180]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065fb5): {next=c.rip+4; // imul r11, rax
m.imul(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065fb9): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140065fc3): {next=c.rip+3; // add r11, rax
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140065fc6): {next=c.rip+7; // mov r9, qword ptr [rbx + 0x1188]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065fcd): {next=c.rip+3; // mov rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065fd0): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140065fd4): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065fd7): {next=c.rip+6; // mov byte ptr [rbx + 0x1142], dl
m.put(Operand{2,0,8,0,3,-1,1,0,4418,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065fdd): {next=c.rip+4; // imul rdx, r14
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140065fe1): {next=c.rip+3; // xor rdx, r8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065fe4): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065fe7): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065fea): {next=c.rip+3; // xor rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140065fed): {next=c.rip+4; // lea rax, [rdx + rdi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,7,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065ff1): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140065ff4): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065ff8): {next=c.rip+7; // mov qword ptr [rbx + 0x10e0], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4320,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140065fff): {next=c.rip+4; // lea r8, [r10 + r10]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,10,10,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066003): {next=c.rip+7; // movzx ecx, byte ptr [rbx + 0x1141]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4417,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006600a): {next=c.rip+4; // imul rcx, r14
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006600e): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066011): {next=c.rip+3; // xor rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066014): {next=c.rip+7; // mov rdx, qword ptr [rbx + 0x10d8]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4312,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006601b): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006601e): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066021): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140066024): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140066027): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006602b): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140066035): {next=c.rip+4; // imul r11, rax
m.imul(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066039): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140066043): {next=c.rip+3; // add r11, rax
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066046): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], r11
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006604d): {next=c.rip+4; // lea rax, [r9 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,9,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066051): {next=c.rip+7; // mov qword ptr [rbx + 0x1188], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066058): {next=c.rip+4; // shr r11, 0x1b
m.shift(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14006605c): {next=c.rip+4; // movzx eax, r11b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066060): {next=c.rip+6; // mov byte ptr [rbx + 0x1141], al
m.put(Operand{2,0,8,0,3,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066066): {next=c.rip+4; // imul rax, r14
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006606a): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006606d): {next=c.rip+3; // xor rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066070): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066073): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066076): {next=c.rip+3; // add rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066079): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14006607c): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066080): {next=c.rip+7; // mov qword ptr [rbx + 0x10d8], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066087): {next=c.rip+3; // mov r9d, edi
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006608a): {next=c.rip+4; // mov edi, dword ptr [rsp + 0x28]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006608e): {next=c.rip+3; // mov r8d, edi
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066091): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066094): {next=c.rip+5; // call 0x14004acc0
{uint64_t target=next+UINT64_C(0xfffffffffffe4c27);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140066099): {next=c.rip+4; // mov dword ptr [rsp + 0x48], eax
m.put(Operand{2,0,32,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006609d): {next=c.rip+7; // mov r8, qword ptr [rbx + 0x10c0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400660a4): {next=c.rip+8; // imul r10, qword ptr [rbx + 0x10b8], 0xe
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xe)});
c.rip=next;return true;}
case UINT64_C(0x1400660ac): {next=c.rip+7; // mov r11, qword ptr [rbx + 0x10b0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400660b3): {next=c.rip+7; // movzx ecx, byte ptr [rbx + 0x114d]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4429,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400660ba): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400660be): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400660c1): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400660c4): {next=c.rip+8; // movzx r9d, byte ptr [rbx + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400660cc): {next=c.rip+7; // mov rdx, qword ptr [rbx + 0x1138]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4408,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400660d3): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400660d6): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400660d9): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400660dc): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400660df): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400660e3): {next=c.rip+3; // inc rdx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400660e6): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400660ed): {next=c.rip+10; // movabs rbp, 0x9e3779b97f4a7c15
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x1400660f7): {next=c.rip+4; // imul rax, rbp
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400660fb): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140066105): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066108): {next=c.rip+4; // imul rax, rbp
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006610c): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14006610f): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066116): {next=c.rip+8; // add qword ptr [rbx + 0x1188], 2
m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14006611e): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140066122): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066125): {next=c.rip+6; // mov byte ptr [rbx + 0x114d], al
m.put(Operand{2,0,8,0,3,-1,1,0,4429,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006612b): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006612f): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066132): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066135): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066138): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006613b): {next=c.rip+3; // add rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14006613e): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140066141): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066145): {next=c.rip+7; // mov qword ptr [rbx + 0x1138], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4408,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006614c): {next=c.rip+5; // mov dword ptr [rsp + 0x38], r15d
m.put(Operand{2,0,32,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066151): {next=c.rip+5; // lea rax, [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066156): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006615b): {next=c.rip+4; // mov dword ptr [rsp + 0x40], edi
m.put(Operand{2,0,32,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006615f): {next=c.rip+7; // mov rcx, qword ptr [rbx + 0x9a0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,2464,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066166): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140066169): {next=c.rip+6; // je 0x140066f3a
if(m.condition(0))next=next+UINT64_C(0xdcb);
c.rip=next;return true;}
case UINT64_C(0x14006616f): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066172): {next=c.rip+5; // lea r9, [rsp + 0x38]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066177): {next=c.rip+5; // lea r8, [rsp + 0x30]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006617c): {next=c.rip+5; // lea rdx, [rsp + 0x40]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066181): {next=c.rip+3; // call qword ptr [rax + 0x10]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,16,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140066184): {next=c.rip+3; // mov r15, rax
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066187): {next=c.rip+7; // mov r11, qword ptr [rbx + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006618e): {next=c.rip+7; // mov r14, qword ptr [rbx + 0x10b8]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066195): {next=c.rip+4; // imul r8, r14, 0xe
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xe)});
c.rip=next;return true;}
case UINT64_C(0x140066199): {next=c.rip+7; // mov rdi, qword ptr [rbx + 0x10b0]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400661a0): {next=c.rip+7; // movzx ecx, byte ptr [rbx + 0x114d]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4429,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400661a7): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400661ab): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400661ae): {next=c.rip+3; // xor rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400661b1): {next=c.rip+7; // movzx esi, byte ptr [rbx + 0x10c8]
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400661b8): {next=c.rip+7; // mov rdx, qword ptr [rbx + 0x1138]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4408,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400661bf): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400661c2): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400661c5): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400661c8): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400661cb): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400661cf): {next=c.rip+3; // dec rdx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,true));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400661d2): {next=c.rip+7; // mov r10, qword ptr [rbx + 0x1180]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400661d9): {next=c.rip+4; // imul r10, rbp
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400661dd): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x1400661e7): {next=c.rip+3; // add r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400661ea): {next=c.rip+4; // imul r10, rbp
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400661ee): {next=c.rip+3; // add r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400661f1): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], r10
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400661f8): {next=c.rip+8; // add qword ptr [rbx + 0x1188], 2
m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066200): {next=c.rip+7; // mov r9, qword ptr [rbx + 0x1188]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066207): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006620a): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14006620e): {next=c.rip+3; // movzx ebp, al
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066211): {next=c.rip+7; // mov byte ptr [rbx + 0x114d], bpl
m.put(Operand{2,0,8,0,3,-1,1,0,4429,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066218): {next=c.rip+2; // mov ecx, ebp
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006621a): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006621e): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066221): {next=c.rip+3; // xor rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066224): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066227): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006622a): {next=c.rip+4; // lea r8, [rdx + rcx]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006622e): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140066231): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066235): {next=c.rip+7; // mov qword ptr [rbx + 0x1138], r8
m.put(Operand{2,0,64,0,3,-1,1,0,4408,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006623c): {next=c.rip+5; // cmp dword ptr [rsp + 0x48], 0
m.arithmetic(m.get(Operand{2,0,32,0,4,-1,1,0,72,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140066241): {next=c.rip+6; // je 0x1400662de
if(m.condition(0))next=next+UINT64_C(0x97);
c.rip=next;return true;}
case UINT64_C(0x140066247): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006624a): {next=c.rip+5; // call 0x14004ae10
{uint64_t target=next+UINT64_C(0xfffffffffffe4bc1);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14006624f): {next=c.rip+3; // mov r8d, eax
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066252): {next=c.rip+7; // mov r10, qword ptr [rbx + 0x1180]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066259): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140066263): {next=c.rip+4; // imul r10, rax
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066267): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140066271): {next=c.rip+3; // add r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066274): {next=c.rip+7; // mov r9, qword ptr [rbx + 0x1188]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006627b): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006627e): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140066282): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066285): {next=c.rip+6; // mov byte ptr [rbx + 0x1141], dl
m.put(Operand{2,0,8,0,3,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006628b): {next=c.rip+7; // mov r11, qword ptr [rbx + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066292): {next=c.rip+7; // mov r14, qword ptr [rbx + 0x10b8]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066299): {next=c.rip+7; // mov rdi, qword ptr [rbx + 0x10b0]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400662a0): {next=c.rip+4; // imul rdx, r11
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400662a4): {next=c.rip+4; // lea rax, [r14 + r14]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,14,14,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400662a8): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400662ab): {next=c.rip+3; // xor rdx, rdi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400662ae): {next=c.rip+7; // movzx esi, byte ptr [rbx + 0x10c8]
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400662b5): {next=c.rip+3; // mov ecx, r8d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400662b8): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400662bb): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400662bf): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400662c2): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400662c6): {next=c.rip+7; // mov qword ptr [rbx + 0x10d8], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400662cd): {next=c.rip+7; // movzx ebp, byte ptr [rbx + 0x114d]
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4429,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400662d4): {next=c.rip+7; // mov r8, qword ptr [rbx + 0x1138]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4408,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400662db): {next=c.rip+3; // inc r9
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400662de): {next=c.rip+4; // imul rdx, r14, 0xe
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xe)});
c.rip=next;return true;}
case UINT64_C(0x1400662e2): {next=c.rip+4; // movzx ecx, bpl
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400662e6): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400662ea): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400662ed): {next=c.rip+3; // xor rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400662f0): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400662f3): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400662f6): {next=c.rip+3; // sub r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400662f9): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400662fc): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066300): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14006630a): {next=c.rip+4; // imul r10, rax
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006630e): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140066318): {next=c.rip+3; // add r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14006631b): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], r10
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066322): {next=c.rip+4; // lea rax, [r9 + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,9,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066326): {next=c.rip+7; // mov qword ptr [rbx + 0x1188], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006632d): {next=c.rip+4; // shr r10, 0x1b
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140066331): {next=c.rip+4; // movzx eax, r10b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066335): {next=c.rip+6; // mov byte ptr [rbx + 0x114d], al
m.put(Operand{2,0,8,0,3,-1,1,0,4429,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006633b): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006633f): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066342): {next=c.rip+3; // xor rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066345): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066348): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006634b): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14006634e): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140066351): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066355): {next=c.rip+7; // mov qword ptr [rbx + 0x1138], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4408,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006635c): {next=c.rip+4; // mov eax, dword ptr [rsp + 0x28]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066360): {next=c.rip+7; // xor rax, qword ptr [rbx + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066367): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006636a): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006636d): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066371): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066374): {next=c.rip+10; // movabs r14, 0xff51afd7ed558ccd
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14006637e): {next=c.rip+4; // imul rcx, r14
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066382): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066385): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066389): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006638c): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140066396): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006639a): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006639d): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400663a1): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400663a4): {next=c.rip+7; // mov qword ptr [rbx + 0x940], rax
m.put(Operand{2,0,64,0,3,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400663ab): {next=c.rip+3; // mov rdx, r15
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400663ae): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400663b1): {next=c.rip+5; // call 0x14004a2b0
{uint64_t target=next+UINT64_C(0xfffffffffffe3efa);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400663b6): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x11c8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4552,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400663bd): {next=c.rip+4; // mov eax, dword ptr [rsp + 0x20]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400663c1): {next=c.rip+8; // cmp dword ptr [r12 + 0x524], eax
m.arithmetic(m.get(Operand{2,0,32,0,12,-1,1,0,1316,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400663c9): {next=c.rip+2; // jbe 0x1400663d3
if(m.condition(4))next=next+UINT64_C(0x8);
c.rip=next;return true;}
case UINT64_C(0x1400663cb): {next=c.rip+8; // mov dword ptr [r12 + 0x524], eax
m.put(Operand{2,0,32,0,12,-1,1,0,1316,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400663d3): {next=c.rip+3; // test r13d, r13d
m.logic(m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x1400663d6): {next=c.rip+6; // jns 0x140066f40
if(m.condition(11))next=next+UINT64_C(0xb64);
c.rip=next;return true;}
case UINT64_C(0x1400663dc): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x50]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400663e1): {next=c.rip+7; // cmp qword ptr [rbx + 0x1058], rax
m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4184,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400663e8): {next=c.rip+6; // jne 0x140066f2c
if(m.condition(1))next=next+UINT64_C(0xb3e);
c.rip=next;return true;}
case UINT64_C(0x1400663ee): {next=c.rip+7; // movsxd rax, dword ptr [rbx + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,3,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400663f5): {next=c.rip+10; // movabs rcx, 0xa867a3995088118b
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xa867a3995088118b)}));
c.rip=next;return true;}
case UINT64_C(0x1400663ff): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066403): {next=c.rip+7; // xor rax, qword ptr [rbx + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006640a): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006640f): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066414): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066417): {next=c.rip+5; // call 0x140049ee0
{uint64_t target=next+UINT64_C(0xfffffffffffe3ac4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14006641c): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14006641e): {next=c.rip+6; // jne 0x140066f01
if(m.condition(1))next=next+UINT64_C(0xadd);
c.rip=next;return true;}
case UINT64_C(0x140066424): {next=c.rip+6; // cmp dword ptr [rbx + 0x4b8], eax
m.arithmetic(m.get(Operand{2,0,32,0,3,-1,1,0,1208,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14006642a): {next=c.rip+6; // jne 0x140066f01
if(m.condition(1))next=next+UINT64_C(0xad1);
c.rip=next;return true;}
case UINT64_C(0x140066430): {next=c.rip+7; // mov r10, qword ptr [rbx + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066437): {next=c.rip+7; // mov r11, qword ptr [rbx + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006643e): {next=c.rip+7; // mov rdi, qword ptr [rbx + 0x10b0]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066445): {next=c.rip+7; // movzx ecx, byte ptr [rbx + 0x1140]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4416,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006644c): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066450): {next=c.rip+3; // xor rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066453): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066456): {next=c.rip+7; // movzx esi, byte ptr [rbx + 0x10c8]
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006645d): {next=c.rip+7; // mov r8, qword ptr [rbx + 0x10d0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066464): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066467): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006646a): {next=c.rip+3; // sub r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14006646d): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140066470): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066474): {next=c.rip+7; // mov r9, qword ptr [rbx + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006647b): {next=c.rip+10; // movabs r15, 0x9e3779b97f4a7c15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140066485): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066489): {next=c.rip+10; // movabs r12, 0x2545f4914f6cdd1d
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140066493): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066496): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], r9
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006649d): {next=c.rip+7; // mov rbp, qword ptr [rbx + 0x1188]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400664a4): {next=c.rip+3; // inc rbp
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400664a7): {next=c.rip+7; // mov qword ptr [rbx + 0x1188], rbp
m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400664ae): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400664b1): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400664b5): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400664b8): {next=c.rip+6; // mov byte ptr [rbx + 0x1140], dl
m.put(Operand{2,0,8,0,3,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400664be): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400664c2): {next=c.rip+3; // xor rdx, rdi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400664c5): {next=c.rip+3; // xor rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400664c8): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400664cb): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400664ce): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400664d2): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400664d5): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400664d9): {next=c.rip+7; // mov qword ptr [rbx + 0x10d0], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400664e0): {next=c.rip+7; // cmp r8d, 0x2a7d9c
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2a7d9c)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400664e7): {next=c.rip+6; // jne 0x140066f01
if(m.condition(1))next=next+UINT64_C(0xa14);
c.rip=next;return true;}
case UINT64_C(0x1400664ed): {next=c.rip+3; // mov eax, r13d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400664f0): {next=c.rip+4; // btr eax, 0x1f
m.bitop(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)},false);
c.rip=next;return true;}
case UINT64_C(0x1400664f4): {next=c.rip+3; // cmp eax, 2
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400664f7): {next=c.rip+2; // jae 0x140066542
if(m.condition(3))next=next+UINT64_C(0x49);
c.rip=next;return true;}
case UINT64_C(0x1400664f9): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400664fd): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066500): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], r9
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066507): {next=c.rip+4; // lea rax, [rbp + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006650b): {next=c.rip+7; // mov qword ptr [rbx + 0x1188], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066512): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140066516): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006651a): {next=c.rip+6; // mov byte ptr [rbx + 0x1140], al
m.put(Operand{2,0,8,0,3,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066520): {next=c.rip+4; // imul rax, r10
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066524): {next=c.rip+3; // xor rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066527): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006652a): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006652d): {next=c.rip+7; // xor rcx, 0xcaa88
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xcaa88)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066534): {next=c.rip+6; // add rax, 0xcaa88
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xcaa88)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14006653a): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14006653d): {next=c.rip+5; // jmp 0x140066ef6
next=next+UINT64_C(0x9b4);
c.rip=next;return true;}
case UINT64_C(0x140066542): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066545): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffe3626);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14006654a): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006654c): {next=c.rip+7; // movzx ecx, byte ptr [rbx + 0x11a4]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066553): {next=c.rip+7; // xor rcx, qword ptr [rbx + 0x930]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,2352,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006655a): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006655d): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066560): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066564): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066567): {next=c.rip+4; // imul rax, r14
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006656b): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006656e): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066572): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066575): {next=c.rip+10; // movabs r8, 0xc4ceb9fe1a85ec53
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14006657f): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066583): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066586): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14006658a): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006658d): {next=c.rip+7; // mov qword ptr [rbx + 0x930], rdx
m.put(Operand{2,0,64,0,3,-1,1,0,2352,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066594): {next=c.rip+7; // xor rdx, qword ptr [rbx + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006659b): {next=c.rip+7; // xor rdx, qword ptr [rbx + 0x948]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400665a2): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400665a5): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400665a9): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400665ac): {next=c.rip+4; // imul rax, r14
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400665b0): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400665b3): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400665b7): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400665ba): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400665be): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400665c1): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400665c5): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400665c8): {next=c.rip+7; // mov qword ptr [rbx + 0x940], rax
m.put(Operand{2,0,64,0,3,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400665cf): {next=c.rip+7; // mov r11, qword ptr [rbx + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400665d6): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400665dd): {next=c.rip+4; // lea rdi, [rax + rax*4]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400665e1): {next=c.rip+3; // add rdi, rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400665e4): {next=c.rip+7; // mov r10, qword ptr [rbx + 0x10b0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400665eb): {next=c.rip+7; // movzx ecx, byte ptr [rbx + 0x1149]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4425,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400665f2): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400665f6): {next=c.rip+3; // xor rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400665f9): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400665fc): {next=c.rip+8; // movzx r9d, byte ptr [rbx + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066604): {next=c.rip+7; // mov rdx, qword ptr [rbx + 0x1118]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4376,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006660b): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006660e): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066611): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140066614): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140066617): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006661b): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066622): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066626): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066629): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066630): {next=c.rip+7; // inc qword ptr [rbx + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140066637): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14006663b): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006663f): {next=c.rip+7; // mov byte ptr [rbx + 0x1149], r8b
m.put(Operand{2,0,8,0,3,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066646): {next=c.rip+4; // imul r8, r11
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006664a): {next=c.rip+3; // xor r8, rdi
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006664d): {next=c.rip+3; // xor r8, r10
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066650): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066653): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066656): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006665a): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14006665d): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066661): {next=c.rip+7; // mov qword ptr [rbx + 0x1118], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066668): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006666b): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffe5d50);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140066670): {next=c.rip+7; // mov r10, qword ptr [rbx + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066677): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006667e): {next=c.rip+4; // lea rdi, [rax + rax*8]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066682): {next=c.rip+7; // mov r9, qword ptr [rbx + 0x10b0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066689): {next=c.rip+7; // movzx ecx, byte ptr [rbx + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066690): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066694): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066697): {next=c.rip+3; // xor rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006669a): {next=c.rip+8; // movzx r11d, byte ptr [rbx + 0x10c8]
m.put(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400666a2): {next=c.rip+7; // mov rdx, qword ptr [rbx + 0x1110]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400666a9): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400666ac): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400666af): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400666b2): {next=c.rip+3; // test r11b, r11b
m.logic(m.get(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400666b5): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400666b9): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400666c0): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400666c4): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400666c7): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400666ce): {next=c.rip+7; // inc qword ptr [rbx + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400666d5): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400666d9): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400666dd): {next=c.rip+7; // mov byte ptr [rbx + 0x1148], r8b
m.put(Operand{2,0,8,0,3,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400666e4): {next=c.rip+4; // imul r8, r10
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400666e8): {next=c.rip+3; // xor r8, r9
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400666eb): {next=c.rip+3; // xor r8, rdi
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400666ee): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400666f1): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400666f4): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400666f8): {next=c.rip+3; // test r11b, r11b
m.logic(m.get(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400666fb): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400666ff): {next=c.rip+7; // mov qword ptr [rbx + 0x1110], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066706): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066709): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffe5cb2);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14006670e): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066711): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffe345a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140066716): {next=c.rip+6; // cmp eax, dword ptr [rbx + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,3,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14006671c): {next=c.rip+2; // jae 0x140066728
if(m.condition(3))next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x14006671e): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066720): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066723): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffe5c98);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140066728): {next=c.rip+7; // mov rbp, qword ptr [rbx + 0x10c0]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006672f): {next=c.rip+7; // mov rdi, qword ptr [rbx + 0x10b8]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066736): {next=c.rip+4; // lea r10, [rdi + rdi*8]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,7,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006673a): {next=c.rip+7; // mov r14, qword ptr [rbx + 0x10b0]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066741): {next=c.rip+7; // movzx ecx, byte ptr [rbx + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066748): {next=c.rip+4; // imul rcx, rbp
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006674c): {next=c.rip+3; // xor rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006674f): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066752): {next=c.rip+7; // movzx esi, byte ptr [rbx + 0x10c8]
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066759): {next=c.rip+7; // mov r11, qword ptr [rbx + 0x1110]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066760): {next=c.rip+3; // mov rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066763): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066766): {next=c.rip+3; // sub r11, rcx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140066769): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14006676c): {next=c.rip+4; // cmove r11, rax
if(m.condition(0))m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066770): {next=c.rip+7; // mov r9, qword ptr [rbx + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066777): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006677b): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14006677e): {next=c.rip+7; // mov r8, qword ptr [rbx + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066785): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066788): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14006678c): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006678f): {next=c.rip+6; // mov byte ptr [rbx + 0x1148], dl
m.put(Operand{2,0,8,0,3,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066795): {next=c.rip+4; // imul rdx, rbp
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066799): {next=c.rip+3; // xor rdx, r14
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006679c): {next=c.rip+3; // xor rdx, r10
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006679f): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400667a2): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400667a5): {next=c.rip+4; // lea rax, [rdx + r11]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,11,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400667a9): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400667ac): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400667b0): {next=c.rip+7; // mov qword ptr [rbx + 0x1110], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400667b7): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400667bb): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400667be): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], r9
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400667c5): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400667c9): {next=c.rip+7; // mov qword ptr [rbx + 0x1188], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400667d0): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400667d4): {next=c.rip+4; // movzx edx, r9b
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400667d8): {next=c.rip+6; // mov byte ptr [rbx + 0x1149], dl
m.put(Operand{2,0,8,0,3,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400667de): {next=c.rip+4; // imul rdx, rbp
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400667e2): {next=c.rip+4; // lea rax, [rdi + rdi*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,7,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400667e6): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400667e9): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400667ec): {next=c.rip+3; // xor rdx, r14
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400667ef): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400667f2): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400667f5): {next=c.rip+4; // lea rax, [rdx + r11]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,11,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400667f9): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400667fc): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066800): {next=c.rip+7; // mov qword ptr [rbx + 0x1118], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066807): {next=c.rip+7; // movzx edx, byte ptr [rbx + 0x11a4]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006680e): {next=c.rip+7; // xor rdx, qword ptr [rbx + 0x230]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066815): {next=c.rip+6; // mov r8d, 0x43
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x43)}));
c.rip=next;return true;}
case UINT64_C(0x14006681b): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006681e): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffe67cd);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140066823): {next=c.rip+7; // mov r8, qword ptr [rbx + 0x230]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,560,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006682a): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006682d): {next=c.rip+7; // xor rax, qword ptr [rbx + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066834): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066837): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14006683b): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006683e): {next=c.rip+10; // movabs rsi, 0xff51afd7ed558ccd
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140066848): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006684c): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006684f): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066853): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066856): {next=c.rip+10; // movabs rbp, 0xc4ceb9fe1a85ec53
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140066860): {next=c.rip+4; // imul rax, rbp
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066864): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066867): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14006686b): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14006686d): {next=c.rip+3; // lea eax, [rdx + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066870): {next=c.rip+2; // mov ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066872): {next=c.rip+3; // imul ecx, eax
m.imul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066875): {next=c.rip+2; // not ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066877): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140066879): {next=c.rip+2; // and ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14006687b): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x14006687e): {next=c.rip+2; // je 0x1400668e5
if(m.condition(0))next=next+UINT64_C(0x65);
c.rip=next;return true;}
case UINT64_C(0x140066880): {next=c.rip+4; // and r8b, 3
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3)}),8));
c.rip=next;return true;}
case UINT64_C(0x140066884): {next=c.rip+4; // cmp r8b, 1
m.arithmetic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140066888): {next=c.rip+2; // jne 0x1400668e5
if(m.condition(1))next=next+UINT64_C(0x5b);
c.rip=next;return true;}
case UINT64_C(0x14006688a): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066891): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066895): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066898): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006689f): {next=c.rip+7; // inc qword ptr [rbx + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400668a6): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400668aa): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400668ad): {next=c.rip+6; // mov byte ptr [rbx + 0x1140], al
m.put(Operand{2,0,8,0,3,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400668b3): {next=c.rip+8; // imul rax, qword ptr [rbx + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400668bb): {next=c.rip+7; // xor rax, qword ptr [rbx + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400668c2): {next=c.rip+7; // xor rax, qword ptr [rbx + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400668c9): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400668cc): {next=c.rip+7; // xor rcx, 0x38f6c0
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38f6c0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400668d3): {next=c.rip+6; // add rax, 0x38f6c0
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38f6c0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400668d9): {next=c.rip+7; // cmp byte ptr [rbx + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x1400668e0): {next=c.rip+5; // jmp 0x140066ef6
next=next+UINT64_C(0x611);
c.rip=next;return true;}
case UINT64_C(0x1400668e5): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400668e8): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffe3283);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400668ed): {next=c.rip+2; // mov edi, eax
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400668ef): {next=c.rip+6; // cmp eax, dword ptr [rbx + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,3,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400668f5): {next=c.rip+2; // jb 0x140066952
if(m.condition(2))next=next+UINT64_C(0x5b);
c.rip=next;return true;}
case UINT64_C(0x1400668f7): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400668fe): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066902): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066905): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006690c): {next=c.rip+7; // inc qword ptr [rbx + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140066913): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140066917): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006691a): {next=c.rip+6; // mov byte ptr [rbx + 0x1140], al
m.put(Operand{2,0,8,0,3,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066920): {next=c.rip+8; // imul rax, qword ptr [rbx + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066928): {next=c.rip+7; // xor rax, qword ptr [rbx + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006692f): {next=c.rip+7; // xor rax, qword ptr [rbx + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066936): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066939): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066940): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066946): {next=c.rip+7; // cmp byte ptr [rbx + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14006694d): {next=c.rip+5; // jmp 0x140066ef6
next=next+UINT64_C(0x5a4);
c.rip=next;return true;}
case UINT64_C(0x140066952): {next=c.rip+2; // mov edx, edi
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066954): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066957): {next=c.rip+5; // call 0x14004e0d0
{uint64_t target=next+UINT64_C(0xfffffffffffe7774);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14006695c): {next=c.rip+7; // mov r8, qword ptr [rbx + 0x940]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066963): {next=c.rip+7; // movsxd r9, dword ptr [rbx + 0x928]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,3,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14006696a): {next=c.rip+3; // mov rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006696d): {next=c.rip+4; // imul rdx, r15
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066971): {next=c.rip+7; // xor rdx, qword ptr [rbx + 0x700]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066978): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006697b): {next=c.rip+4; // rol rax, 0x11
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x14006697f): {next=c.rip+10; // movabs r10, 0xd6e8feb86659fd93
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x140066989): {next=c.rip+3; // mov rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006698c): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066990): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066993): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066996): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066999): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14006699d): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400669a0): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400669a4): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400669a7): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400669ab): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400669ae): {next=c.rip+4; // imul rcx, rbp
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400669b2): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400669b5): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400669b9): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400669bc): {next=c.rip+3; // mov r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400669bf): {next=c.rip+4; // shr r10, 0x1d
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x1400669c3): {next=c.rip+3; // xor r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400669c6): {next=c.rip+4; // or r10, 1
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400669ca): {next=c.rip+7; // mov qword ptr [rbx + 0x700], r10
m.put(Operand{2,0,64,0,3,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400669d1): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400669d4): {next=c.rip+5; // and eax, 0x3ff
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3ff)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400669d9): {next=c.rip+6; // cmp rax, 0x2c5
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2c5)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x1400669df): {next=c.rip+2; // jne 0x1400669fe
if(m.condition(1))next=next+UINT64_C(0x1d);
c.rip=next;return true;}
case UINT64_C(0x1400669e1): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400669e4): {next=c.rip+5; // call 0x14007fb70
{uint64_t target=next+UINT64_C(0x19187);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400669e9): {next=c.rip+7; // mov r8, qword ptr [rbx + 0x940]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400669f0): {next=c.rip+7; // mov r9d, dword ptr [rbx + 0x928]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,2344,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400669f7): {next=c.rip+7; // mov r10, qword ptr [rbx + 0x700]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,1792,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400669fe): {next=c.rip+4; // movzx eax, r10b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066a02): {next=c.rip+2; // and al, 0x1f
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8));
c.rip=next;return true;}
case UINT64_C(0x140066a04): {next=c.rip+2; // cmp al, 0x15
m.arithmetic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x15)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140066a06): {next=c.rip+6; // jne 0x140066aeb
if(m.condition(1))next=next+UINT64_C(0xdf);
c.rip=next;return true;}
case UINT64_C(0x140066a0c): {next=c.rip+3; // movsxd rax, r9d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140066a0f): {next=c.rip+6; // xor rax, 0x5a5a
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5a5a)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066a15): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066a19): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066a1c): {next=c.rip+4; // rol r8, 0x11
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x140066a20): {next=c.rip+3; // xor r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066a23): {next=c.rip+10; // movabs rax, 0x8f70feda99a6026d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8f70feda99a6026d)}));
c.rip=next;return true;}
case UINT64_C(0x140066a2d): {next=c.rip+3; // xor r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066a30): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066a33): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066a37): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066a3a): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066a3e): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066a41): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066a45): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066a48): {next=c.rip+4; // imul rcx, rbp
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066a4c): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066a4f): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066a53): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066a56): {next=c.rip+3; // mov r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066a59): {next=c.rip+4; // shr r9, 0x1d
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x140066a5d): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066a60): {next=c.rip+4; // or r9, 1
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066a64): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066a67): {next=c.rip+4; // shr rax, 8
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},1);
c.rip=next;return true;}
case UINT64_C(0x140066a6b): {next=c.rip+3; // and eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x140066a6e): {next=c.rip+4; // imul r8, rax, 0x3e
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x140066a72): {next=c.rip+3; // mov rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066a75): {next=c.rip+4; // shr rcx, 0x28
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x28)},1);
c.rip=next;return true;}
case UINT64_C(0x140066a79): {next=c.rip+5; // mov eax, 0x8421085
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8421085)}));
c.rip=next;return true;}
case UINT64_C(0x140066a7e): {next=c.rip+2; // mul ecx
m.mul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066a80): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066a82): {next=c.rip+2; // sub eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x140066a84): {next=c.rip+2; // shr eax, 1
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)},1);
c.rip=next;return true;}
case UINT64_C(0x140066a86): {next=c.rip+2; // add eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x140066a88): {next=c.rip+3; // shr eax, 5
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x5)},1);
c.rip=next;return true;}
case UINT64_C(0x140066a8b): {next=c.rip+3; // imul eax, eax, 0x3e
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x140066a8e): {next=c.rip+2; // sub ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x140066a90): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066a92): {next=c.rip+3; // add r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066a95): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066a9c): {next=c.rip+4; // movsxd rcx, dword ptr [rax + r8*4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,8,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140066aa0): {next=c.rip+7; // movsxd rax, dword ptr [rbx + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,3,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140066aa7): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066aaa): {next=c.rip+7; // add rcx, qword ptr [rbx + 0x4e0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,3,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066ab1): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066ab4): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066ab7): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066abb): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066abe): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066ac2): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066ac5): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066ac9): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066acc): {next=c.rip+4; // imul rcx, rbp
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066ad0): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066ad3): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066ad7): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066ada): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066add): {next=c.rip+7; // mov qword ptr [rbx + 0x700], rax
m.put(Operand{2,0,64,0,3,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066ae4): {next=c.rip+7; // inc qword ptr [rbx + 0x708]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,3,-1,1,0,1800,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,1800,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140066aeb): {next=c.rip+6; // inc dword ptr [rbx + 0x75c]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,3,-1,1,0,1884,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,3,-1,1,0,1884,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140066af1): {next=c.rip+6; // mov eax, dword ptr [rbx + 0x75c]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,1884,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066af7): {next=c.rip+6; // cmp eax, dword ptr [rbx + 0x758]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,3,-1,1,0,1880,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140066afd): {next=c.rip+2; // jb 0x140066b11
if(m.condition(2))next=next+UINT64_C(0x12);
c.rip=next;return true;}
case UINT64_C(0x140066aff): {next=c.rip+10; // mov dword ptr [rbx + 0x75c], 0
m.put(Operand{2,0,32,0,3,-1,1,0,1884,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b09): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b0c): {next=c.rip+5; // call 0x14004b250
{uint64_t target=next+UINT64_C(0xfffffffffffe473f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140066b11): {next=c.rip+3; // mov r8d, edi
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b14): {next=c.rip+2; // mov edx, edi
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b16): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b19): {next=c.rip+5; // call 0x14004c110
{uint64_t target=next+UINT64_C(0xfffffffffffe55f2);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140066b1e): {next=c.rip+7; // mov r9, qword ptr [rbx + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b25): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066b29): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066b2c): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], r9
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b33): {next=c.rip+7; // inc qword ptr [rbx + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140066b3a): {next=c.rip+7; // mov r10, qword ptr [rbx + 0x1188]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b41): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b44): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140066b48): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b4b): {next=c.rip+6; // mov byte ptr [rbx + 0x1148], dl
m.put(Operand{2,0,8,0,3,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b51): {next=c.rip+7; // mov rsi, qword ptr [rbx + 0x10c0]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b58): {next=c.rip+7; // mov r11, qword ptr [rbx + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b5f): {next=c.rip+7; // mov rbp, qword ptr [rbx + 0x10b0]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b66): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066b6a): {next=c.rip+4; // lea rax, [r11 + r11*8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,11,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b6e): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066b71): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066b74): {next=c.rip+8; // movzx r15d, byte ptr [rbx + 0x10c8]
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b7c): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b7f): {next=c.rip+3; // xor rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066b82): {next=c.rip+4; // lea rax, [rdx + rdi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,7,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b86): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140066b89): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b8d): {next=c.rip+7; // mov qword ptr [rbx + 0x1110], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b94): {next=c.rip+7; // mov rcx, qword ptr [rbx + 0x8f8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,2296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066b9b): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x730]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066ba2): {next=c.rip+5; // movzx r8d, byte ptr [rcx + rdi]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,7,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066ba7): {next=c.rip+4; // xor r8b, byte ptr [rax + rdi]
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,8,0,0,7,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x140066bab): {next=c.rip+4; // lea r12d, [rdi + 1]
m.put(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,7,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066baf): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140066bb9): {next=c.rip+4; // imul r9, rax
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066bbd): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140066bc7): {next=c.rip+3; // add r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066bca): {next=c.rip+3; // inc r10
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140066bcd): {next=c.rip+5; // mov qword ptr [rsp + 0x30], r10
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066bd2): {next=c.rip+7; // mov qword ptr [rbx + 0x1188], r10
m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066bd9): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066bdc): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140066be0): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066be3): {next=c.rip+6; // mov byte ptr [rbx + 0x1141], dl
m.put(Operand{2,0,8,0,3,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066be9): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066bed): {next=c.rip+4; // lea rax, [r11 + r11]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,11,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066bf1): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066bf4): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066bf7): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066bfa): {next=c.rip+3; // xor rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066bfd): {next=c.rip+4; // lea rax, [rdx + r12]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,12,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066c01): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140066c04): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066c08): {next=c.rip+7; // mov qword ptr [rbx + 0x10d8], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066c0f): {next=c.rip+7; // movsxd rdx, dword ptr [rbx + 0x928]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,3,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140066c16): {next=c.rip+7; // mov r10, qword ptr [rbx + 0x940]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066c1d): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066c20): {next=c.rip+7; // xor rcx, qword ptr [rbx + 0x238]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066c27): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066c2a): {next=c.rip+3; // xor rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066c2d): {next=c.rip+7; // xor rcx, qword ptr [rbx + 0x230]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066c34): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066c37): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066c3b): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066c3e): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140066c48): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066c4c): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066c4f): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066c53): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066c56): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140066c60): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066c64): {next=c.rip+3; // mov rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066c67): {next=c.rip+4; // shr rdi, 0x21
m.shift(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066c6b): {next=c.rip+3; // xor rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066c6e): {next=c.rip+7; // mov qword ptr [rbx + 0x948], rdi
m.put(Operand{2,0,64,0,3,-1,1,0,2376,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066c75): {next=c.rip+4; // movzx eax, r8b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066c79): {next=c.rip+6; // xor rax, 0x93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x93)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066c7f): {next=c.rip+7; // lea rcx, [rip - 0x66c86]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-420998,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066c86): {next=c.rip+9; // movzx r14d, byte ptr [rax + rcx + 0x3e3660]
m.put(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,1,1,0,4077152,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066c8f): {next=c.rip+4; // xor r14b, 0x27
m.put(Operand{0,14,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,14,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x27)}),8));
c.rip=next;return true;}
case UINT64_C(0x140066c93): {next=c.rip+2; // inc edx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140066c95): {next=c.rip+6; // mov dword ptr [rbx + 0x928], edx
m.put(Operand{2,0,32,0,3,-1,1,0,2344,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066c9b): {next=c.rip+10; // movabs r8, 0xff51afd7ed558ccd
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140066ca5): {next=c.rip+3; // test dl, 0x1f
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8);
c.rip=next;return true;}
case UINT64_C(0x140066ca8): {next=c.rip+2; // jne 0x140066cee
if(m.condition(1))next=next+UINT64_C(0x44);
c.rip=next;return true;}
case UINT64_C(0x140066caa): {next=c.rip+3; // movsxd rax, edx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140066cad): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066cb0): {next=c.rip+7; // xor rax, qword ptr [rbx + 0x230]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066cb7): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066cba): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066cbe): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066cc1): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066cc5): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066cc8): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066ccc): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066ccf): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140066cd9): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066cdd): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066ce0): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066ce4): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066ce7): {next=c.rip+7; // mov qword ptr [rbx + 0x230], rax
m.put(Operand{2,0,64,0,3,-1,1,0,560,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066cee): {next=c.rip+4; // movzx edx, r14b
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066cf2): {next=c.rip+3; // xor r10, rdx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066cf5): {next=c.rip+3; // xor r10, r12
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066cf8): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066cfb): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066cff): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066d02): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066d06): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066d09): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066d0d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066d10): {next=c.rip+10; // movabs r12, 0xc4ceb9fe1a85ec53
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140066d1a): {next=c.rip+4; // imul rcx, r12
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066d1e): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066d21): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066d25): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066d28): {next=c.rip+7; // mov qword ptr [rbx + 0x940], rax
m.put(Operand{2,0,64,0,3,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066d2f): {next=c.rip+7; // mov byte ptr [rbx + 0x11a4], r14b
m.put(Operand{2,0,8,0,3,-1,1,0,4516,UINT64_C(0x0)},m.get(Operand{0,14,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066d36): {next=c.rip+6; // mov ecx, dword ptr [rbx + 0x8bc]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,2236,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066d3c): {next=c.rip+10; // movabs rax, 0xd6e8feb86659fd93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x140066d46): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066d4a): {next=c.rip+10; // movabs r10, 0x9e3779b97f4a7c15
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140066d54): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066d58): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066d5b): {next=c.rip+3; // xor rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066d5e): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066d61): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066d65): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066d68): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066d6c): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066d6f): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066d73): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066d76): {next=c.rip+4; // imul rdx, r12
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066d7a): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140066d7e): {next=c.rip+3; // and edx, 3
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x140066d81): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066d85): {next=c.rip+10; // movabs rdi, 0x2545f4914f6cdd1d
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140066d8f): {next=c.rip+3; // add r9, rdi
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066d92): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066d97): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140066d9a): {next=c.rip+7; // mov qword ptr [rbx + 0x1188], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066da1): {next=c.rip+4; // cmp r14b, 0x3e
m.arithmetic(m.get(Operand{0,14,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3e)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140066da5): {next=c.rip+6; // jae 0x140066e3e
if(m.condition(3))next=next+UINT64_C(0x93);
c.rip=next;return true;}
case UINT64_C(0x140066dab): {next=c.rip+7; // inc qword ptr [rbx + 0x1088]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,3,-1,1,0,4232,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4232,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140066db2): {next=c.rip+2; // mov edi, edx
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066db4): {next=c.rip+7; // lea rax, [rip - 0x66dbb]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-421307,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066dbb): {next=c.rip+8; // mov r8d, dword ptr [rax + rdx*4 + 0x3e0490]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,0,2,4,0,4064400,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066dc3): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], r9
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066dca): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140066dce): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066dd2): {next=c.rip+6; // mov byte ptr [rbx + 0x1140], al
m.put(Operand{2,0,8,0,3,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066dd8): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066ddc): {next=c.rip+3; // xor rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066ddf): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066de2): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066de5): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066de8): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066deb): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140066dee): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066df2): {next=c.rip+7; // mov qword ptr [rbx + 0x10d0], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066df9): {next=c.rip+4; // movzx r8d, r14b
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066dfd): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066e00): {next=c.rip+5; // call 0x14004da40
{uint64_t target=next+UINT64_C(0xfffffffffffe6c3b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140066e05): {next=c.rip+4; // lea edx, [r13 - 1]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,13,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066e09): {next=c.rip+4; // imul rcx, rdi, 0x3e
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x140066e0d): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066e0f): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066e12): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066e19): {next=c.rip+4; // movsxd r9, dword ptr [rax + rcx*4]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,1,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140066e1d): {next=c.rip+7; // movsxd rax, dword ptr [rbx + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,3,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140066e24): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066e27): {next=c.rip+7; // add r9, qword ptr [rbx + 0x4e0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,3,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066e2e): {next=c.rip+5; // mov r8, qword ptr [rsp + 0x50]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066e33): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066e36): {next=c.rip+3; // call r9
{uint64_t target=m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140066e39): {next=c.rip+5; // jmp 0x140066f01
next=next+UINT64_C(0xc3);
c.rip=next;return true;}
case UINT64_C(0x140066e3e): {next=c.rip+6; // inc dword ptr [rbx + 0x1090]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,3,-1,1,0,4240,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,3,-1,1,0,4240,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140066e44): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066e47): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140066e4b): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066e4e): {next=c.rip+6; // mov byte ptr [rbx + 0x1143], cl
m.put(Operand{2,0,8,0,3,-1,1,0,4419,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066e54): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066e58): {next=c.rip+8; // lea rax, [r11*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,-1,11,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066e60): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066e63): {next=c.rip+3; // xor rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066e66): {next=c.rip+7; // mov qword ptr [rbx + 0x10e8], rcx
m.put(Operand{2,0,64,0,3,-1,1,0,4328,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066e6d): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066e71): {next=c.rip+3; // add r9, rdi
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066e74): {next=c.rip+7; // mov r8, qword ptr [rbx + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066e7b): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066e7e): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140066e82): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066e85): {next=c.rip+6; // mov byte ptr [rbx + 0x114a], dl
m.put(Operand{2,0,8,0,3,-1,1,0,4426,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066e8b): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066e8f): {next=c.rip+4; // imul rax, r11, 0xb
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb)});
c.rip=next;return true;}
case UINT64_C(0x140066e93): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066e96): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066e99): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066e9c): {next=c.rip+4; // xor rcx, 1
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066ea0): {next=c.rip+4; // lea rax, [rdx + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066ea4): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140066ea7): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066eab): {next=c.rip+7; // mov qword ptr [rbx + 0x1120], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4384,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066eb2): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066eb6): {next=c.rip+3; // add r9, rdi
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066eb9): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], r9
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066ec0): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066ec4): {next=c.rip+7; // mov qword ptr [rbx + 0x1188], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066ecb): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140066ecf): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066ed3): {next=c.rip+6; // mov byte ptr [rbx + 0x1140], al
m.put(Operand{2,0,8,0,3,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066ed9): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066edd): {next=c.rip+3; // xor rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066ee0): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066ee3): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066ee6): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066eed): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066ef3): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140066ef6): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066efa): {next=c.rip+7; // mov qword ptr [rbx + 0x10d0], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066f01): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x160]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,352,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066f09): {next=c.rip+3; // xor rcx, rsp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066f0c): {next=c.rip+5; // call 0x1403a3dc0
{uint64_t target=next+UINT64_C(0x33ceaf);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140066f11): {next=c.rip+8; // mov rbx, qword ptr [rsp + 0x1c8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,456,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066f19): {next=c.rip+7; // add rsp, 0x170
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x170)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140066f20): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140066f22): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140066f24): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140066f26): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140066f28): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140066f29): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140066f2a): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140066f2b): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140066f2c): {next=c.rip+5; // mov edx, 0x43414e59
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x43414e59)}));
c.rip=next;return true;}
case UINT64_C(0x140066f31): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066f34): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffe23f7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140066f39): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140066f3a): {next=c.rip+5; // call 0x1403a17cc
{uint64_t target=next+UINT64_C(0x33a88d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140066f3f): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x140066f40): {next=c.rip+5; // mov edx, 0x54485254
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x54485254)}));
c.rip=next;return true;}
case UINT64_C(0x140066f45): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066f48): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffe23e3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140066f4d): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140066f50): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066f55): {next=c.rip+5; // mov qword ptr [rsp + 0x18], r8
m.put(Operand{2,0,64,0,4,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066f5a): {next=c.rip+1; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066f5b): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066f5c): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066f5d): {next=c.rip+2; // push r12
m.push(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066f5f): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066f61): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066f63): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066f65): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140066f69): {next=c.rip+7; // movsxd rax, dword ptr [rcx + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,1,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140066f70): {next=c.rip+3; // mov r14, rcx
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066f73): {next=c.rip+3; // mov r13d, edx
m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066f76): {next=c.rip+10; // movabs rcx, 0x974281eb19518d67
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x974281eb19518d67)}));
c.rip=next;return true;}
case UINT64_C(0x140066f80): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066f84): {next=c.rip+10; // movabs rcx, 0x351b0b20988f0958
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x351b0b20988f0958)}));
c.rip=next;return true;}
case UINT64_C(0x140066f8e): {next=c.rip+10; // movabs rbp, 0xff51afd7ed558ccd
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140066f98): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066f9f): {next=c.rip+10; // movabs rsi, 0xc4ceb9fe1a85ec53
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140066fa9): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066fae): {next=c.rip+3; // mov rdi, r8
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066fb1): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066fb6): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140066fbd): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066fc1): {next=c.rip+10; // movabs rcx, 0xd3d3957e1bc4854d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd3d3957e1bc4854d)}));
c.rip=next;return true;}
case UINT64_C(0x140066fcb): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066fd2): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066fd7): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066fdc): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140066fe3): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140066fe7): {next=c.rip+10; // movabs rcx, 0xc11e591c90cd53ca
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc11e591c90cd53ca)}));
c.rip=next;return true;}
case UINT64_C(0x140066ff1): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140066ff8): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140066ffd): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067002): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11c8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4552,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067009): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006700c): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006700f): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067013): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067016): {next=c.rip+4; // imul rcx, rbp
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006701a): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006701d): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067021): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067024): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067027): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006702b): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006702e): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067032): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067035): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11c8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4552,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006703c): {next=c.rip+4; // shr rax, 7
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x7)},1);
c.rip=next;return true;}
case UINT64_C(0x140067040): {next=c.rip+3; // add rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067043): {next=c.rip+7; // mov qword ptr [r14 + 0x11c8], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4552,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006704a): {next=c.rip+5; // call 0x14004d870
{uint64_t target=next+UINT64_C(0xfffffffffffe6821);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14006704f): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067052): {next=c.rip+2; // mov ebx, eax
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067054): {next=c.rip+5; // call 0x14004a3d0
{uint64_t target=next+UINT64_C(0xfffffffffffe3377);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067059): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x1180]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067060): {next=c.rip+3; // mov r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067063): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14006706a): {next=c.rip+10; // movabs r15, 0x9e3779b97f4a7c15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140067074): {next=c.rip+7; // mov r8d, dword ptr [r14 + 0x750]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,1872,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006707b): {next=c.rip+10; // movabs r12, 0x2545f4914f6cdd1d
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140067085): {next=c.rip+4; // movzx r10d, bl
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067089): {next=c.rip+3; // add r8d, r10d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14006708c): {next=c.rip+3; // mov eax, r10d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006708f): {next=c.rip+4; // imul rcx, r15
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067093): {next=c.rip+4; // and r8d, 1
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x140067097): {next=c.rip+3; // add rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14006709a): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400670a1): {next=c.rip+4; // shr rcx, 0x1b
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400670a5): {next=c.rip+3; // movzx edx, cl
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400670a8): {next=c.rip+8; // mov byte ptr [r10 + r14 + 0xa15], dl
m.put(Operand{2,0,8,0,10,14,1,0,2581,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400670b0): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x268]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,616,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400670b8): {next=c.rip+8; // imul rdx, qword ptr [r14 + 0x1170]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4464,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400670c0): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400670c3): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x260]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,608,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400670ca): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400670cd): {next=c.rip+3; // add rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400670d0): {next=c.rip+3; // xor rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400670d3): {next=c.rip+8; // cmp byte ptr [r14 + 0x754], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,1876,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x1400670db): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400670df): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x288]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,648,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400670e6): {next=c.rip+4; // shl r8d, 8
m.shift(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},0);
c.rip=next;return true;}
case UINT64_C(0x1400670ea): {next=c.rip+3; // add r8d, r10d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x1400670ed): {next=c.rip+4; // mov qword ptr [rax + r8*8], rdx
m.put(Operand{2,0,64,0,0,8,8,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400670f1): {next=c.rip+7; // xor r10, qword ptr [r14 + 0x1060]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4192,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400670f8): {next=c.rip+3; // xor r10, r9
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400670fb): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400670fe): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067102): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067105): {next=c.rip+4; // imul rax, rbp
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067109): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006710c): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067110): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067113): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067117): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006711a): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14006711e): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067121): {next=c.rip+7; // mov qword ptr [r14 + 0x1060], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4192,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067128): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11c8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4552,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006712f): {next=c.rip+3; // test r13d, r13d
m.logic(m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x140067132): {next=c.rip+6; // jns 0x140067c8a
if(m.condition(11))next=next+UINT64_C(0xb52);
c.rip=next;return true;}
case UINT64_C(0x140067138): {next=c.rip+7; // cmp qword ptr [r14 + 0x1058], rdi
m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4184,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14006713f): {next=c.rip+6; // jne 0x140067c98
if(m.condition(1))next=next+UINT64_C(0xb53);
c.rip=next;return true;}
case UINT64_C(0x140067145): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14006714c): {next=c.rip+10; // movabs rcx, 0x46e8f0a76a6e1775
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x46e8f0a76a6e1775)}));
c.rip=next;return true;}
case UINT64_C(0x140067156): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006715a): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006715d): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067164): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067169): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006716e): {next=c.rip+5; // call 0x140049ee0
{uint64_t target=next+UINT64_C(0xfffffffffffe2d6d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067173): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x140067175): {next=c.rip+6; // jne 0x140067c75
if(m.condition(1))next=next+UINT64_C(0xafa);
c.rip=next;return true;}
case UINT64_C(0x14006717b): {next=c.rip+7; // cmp dword ptr [r14 + 0x4b8], eax
m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1208,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140067182): {next=c.rip+6; // jne 0x140067c75
if(m.condition(1))next=next+UINT64_C(0xaed);
c.rip=next;return true;}
case UINT64_C(0x140067188): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x10d0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006718f): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1140]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067197): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006719a): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400671a1): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400671a8): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400671af): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400671b7): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400671be): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x1188]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400671c5): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400671c9): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400671cc): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400671cf): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400671d2): {next=c.rip+3; // sub r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400671d5): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400671d8): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400671dc): {next=c.rip+3; // inc rsi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400671df): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400671e3): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rsi
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400671ea): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400671ed): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400671f4): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400671f7): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400671fb): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400671fe): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067205): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067209): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006720c): {next=c.rip+3; // xor rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006720f): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067212): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067215): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140067218): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006721c): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067220): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067227): {next=c.rip+7; // cmp r8d, 0x322898
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x322898)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14006722e): {next=c.rip+6; // jne 0x140067c75
if(m.condition(1))next=next+UINT64_C(0xa41);
c.rip=next;return true;}
case UINT64_C(0x140067234): {next=c.rip+3; // mov eax, r13d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067237): {next=c.rip+4; // btr eax, 0x1f
m.bitop(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)},false);
c.rip=next;return true;}
case UINT64_C(0x14006723b): {next=c.rip+3; // cmp eax, 2
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14006723e): {next=c.rip+2; // jae 0x14006728a
if(m.condition(3))next=next+UINT64_C(0x4a);
c.rip=next;return true;}
case UINT64_C(0x140067240): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067244): {next=c.rip+4; // lea rax, [rsi + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067248): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006724f): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067252): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067259): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14006725d): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067261): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067268): {next=c.rip+4; // imul rax, r10
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006726c): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006726f): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067272): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067275): {next=c.rip+6; // add rax, 0x101651
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x101651)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14006727b): {next=c.rip+7; // xor rcx, 0x101651
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x101651)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067282): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140067285): {next=c.rip+5; // jmp 0x140067c6a
next=next+UINT64_C(0x9e0);
c.rip=next;return true;}
case UINT64_C(0x14006728a): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006728d): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffe28de);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067292): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006729a): {next=c.rip+10; // movabs r8, 0xc4ceb9fe1a85ec53
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x1400672a4): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400672ab): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10b0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400672b2): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400672ba): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400672bc): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400672bf): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x930]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400672c6): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400672c9): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400672cd): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400672d0): {next=c.rip+4; // imul rax, rbp
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400672d4): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400672d7): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400672db): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400672de): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400672e5): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400672ec): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400672f0): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400672f3): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400672f7): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400672fa): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400672fd): {next=c.rip+7; // mov qword ptr [r14 + 0x930], rdx
m.put(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067304): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067307): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14006730b): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006730e): {next=c.rip+4; // imul rcx, rbp
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067312): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067315): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067319): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006731c): {next=c.rip+4; // imul rdx, r8
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067320): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067323): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067327): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006732a): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067331): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1118]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067338): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1149]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067340): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067347): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006734b): {next=c.rip+4; // lea rbx, [rax + rax*4]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006734f): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067352): {next=c.rip+3; // add rbx, rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067355): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067358): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006735b): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006735e): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140067361): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140067364): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067368): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006736f): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140067376): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006737a): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14006737d): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067384): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140067388): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006738c): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067393): {next=c.rip+4; // imul r8, r11
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067397): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006739a): {next=c.rip+3; // xor r8, r10
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006739d): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400673a0): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400673a3): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400673a6): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400673aa): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400673ae): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400673b1): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400673b8): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffe5003);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400673bd): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400673c4): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400673cb): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400673d3): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400673da): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1110]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400673e1): {next=c.rip+4; // lea r11, [rax + rax*8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400673e5): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400673ed): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400673f0): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400673f4): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400673f7): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400673fa): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400673fd): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140067400): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140067403): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067407): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006740e): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140067415): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067418): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006741c): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14006741f): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067426): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14006742a): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006742e): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067435): {next=c.rip+4; // imul r8, r10
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067439): {next=c.rip+3; // xor r8, r11
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006743c): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006743f): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067442): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140067445): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067449): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006744d): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067450): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067457): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffe4f64);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14006745c): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006745f): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffe270c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067464): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14006746b): {next=c.rip+2; // jae 0x140067477
if(m.condition(3))next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x14006746d): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006746f): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067472): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xfffffffffffe4f49);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067477): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x10c0]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006747e): {next=c.rip+7; // mov rbp, qword ptr [r14 + 0x10b0]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067485): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x1110]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006748c): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067494): {next=c.rip+3; // mov rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067497): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006749f): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400674a6): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400674ad): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400674b4): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400674b8): {next=c.rip+4; // lea r10, [rbx + rbx*8]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400674bc): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400674bf): {next=c.rip+3; // xor rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400674c2): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400674c5): {next=c.rip+3; // sub r11, rcx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400674c8): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400674cb): {next=c.rip+4; // cmove r11, rax
if(m.condition(0))m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400674cf): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400674d3): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400674d6): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400674d9): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400674dc): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400674e0): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400674e3): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400674ea): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400674ee): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400674f1): {next=c.rip+3; // xor rdx, r10
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400674f4): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400674f7): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400674fa): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400674fe): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067502): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067505): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006750c): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067510): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067517): {next=c.rip+6; // mov r8d, 0x560
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x560)}));
c.rip=next;return true;}
case UINT64_C(0x14006751d): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067521): {next=c.rip+4; // lea rax, [rbx + rbx*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067525): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067528): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14006752b): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067532): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140067536): {next=c.rip+4; // movzx edx, r9b
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006753a): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067541): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067545): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067548): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006754b): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006754e): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140067551): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067555): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067559): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006755c): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067563): {next=c.rip+8; // movzx edx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006756b): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x230]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067572): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xfffffffffffe5a79);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067577): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x230]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006757e): {next=c.rip+10; // movabs rdi, 0xff51afd7ed558ccd
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140067588): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006758b): {next=c.rip+10; // movabs rbp, 0xc4ceb9fe1a85ec53
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140067595): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006759c): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006759f): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400675a3): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400675a6): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400675aa): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400675ad): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400675b1): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400675b4): {next=c.rip+4; // imul rax, rbp
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400675b8): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400675bb): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400675bf): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400675c1): {next=c.rip+2; // mov ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400675c3): {next=c.rip+3; // lea eax, [rdx + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400675c6): {next=c.rip+3; // imul ecx, eax
m.imul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400675c9): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400675cb): {next=c.rip+2; // not ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400675cd): {next=c.rip+2; // and ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400675cf): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400675d2): {next=c.rip+2; // je 0x14006763b
if(m.condition(0))next=next+UINT64_C(0x67);
c.rip=next;return true;}
case UINT64_C(0x1400675d4): {next=c.rip+4; // and r8b, 3
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3)}),8));
c.rip=next;return true;}
case UINT64_C(0x1400675d8): {next=c.rip+4; // cmp r8b, 1
m.arithmetic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x1400675dc): {next=c.rip+2; // jne 0x14006763b
if(m.condition(1))next=next+UINT64_C(0x5d);
c.rip=next;return true;}
case UINT64_C(0x1400675de): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400675e5): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400675ec): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400675f0): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400675f3): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400675fa): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400675fe): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067601): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067608): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067610): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067617): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006761e): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067621): {next=c.rip+6; // add rax, 0x35606a
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x35606a)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067627): {next=c.rip+7; // xor rcx, 0x35606a
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x35606a)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006762e): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140067636): {next=c.rip+5; // jmp 0x140067c6a
next=next+UINT64_C(0x62f);
c.rip=next;return true;}
case UINT64_C(0x14006763b): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006763e): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffe252d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067643): {next=c.rip+2; // mov ebx, eax
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067645): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14006764c): {next=c.rip+2; // jb 0x1400676ab
if(m.condition(2))next=next+UINT64_C(0x5d);
c.rip=next;return true;}
case UINT64_C(0x14006764e): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067655): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14006765c): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067660): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067663): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006766a): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14006766e): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067671): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067678): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067680): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067687): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006768e): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067691): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067697): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006769e): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x1400676a6): {next=c.rip+5; // jmp 0x140067c6a
next=next+UINT64_C(0x5bf);
c.rip=next;return true;}
case UINT64_C(0x1400676ab): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400676ad): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400676b0): {next=c.rip+5; // call 0x14004e0d0
{uint64_t target=next+UINT64_C(0xfffffffffffe6a1b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400676b5): {next=c.rip+7; // movsxd rcx, dword ptr [r14 + 0x928]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400676bc): {next=c.rip+10; // movabs r8, 0xd6e8feb86659fd93
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x1400676c6): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400676cd): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400676d0): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400676d4): {next=c.rip+4; // imul rcx, r15
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400676d8): {next=c.rip+4; // rol rdx, 0x11
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x1400676dc): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400676df): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x700]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400676e6): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400676e9): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400676ec): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400676f0): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400676f3): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400676f7): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400676fa): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400676fe): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067701): {next=c.rip+4; // imul rdx, rbp
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067705): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067708): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14006770c): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006770f): {next=c.rip+3; // mov r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067712): {next=c.rip+4; // shr r10, 0x1d
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x140067716): {next=c.rip+3; // xor r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067719): {next=c.rip+4; // or r10, 1
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006771d): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067720): {next=c.rip+7; // mov qword ptr [r14 + 0x700], r10
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067727): {next=c.rip+5; // and eax, 0x3ff
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3ff)}),32));
c.rip=next;return true;}
case UINT64_C(0x14006772c): {next=c.rip+6; // cmp rax, 0x2c5
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2c5)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140067732): {next=c.rip+2; // jne 0x140067743
if(m.condition(1))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x140067734): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067737): {next=c.rip+5; // call 0x14007fb70
{uint64_t target=next+UINT64_C(0x18434);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14006773c): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x700]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067743): {next=c.rip+4; // movzx eax, r10b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067747): {next=c.rip+2; // and al, 0x1f
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8));
c.rip=next;return true;}
case UINT64_C(0x140067749): {next=c.rip+2; // cmp al, 0x15
m.arithmetic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x15)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14006774b): {next=c.rip+6; // jne 0x14006783c
if(m.condition(1))next=next+UINT64_C(0xeb);
c.rip=next;return true;}
case UINT64_C(0x140067751): {next=c.rip+7; // movsxd rcx, dword ptr [r14 + 0x928]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140067758): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006775f): {next=c.rip+7; // xor rcx, 0x5a5a
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5a5a)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067766): {next=c.rip+4; // rol rax, 0x11
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x14006776a): {next=c.rip+4; // imul rcx, r15
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006776e): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067771): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067774): {next=c.rip+10; // movabs rax, 0x8f70feda99a6026d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8f70feda99a6026d)}));
c.rip=next;return true;}
case UINT64_C(0x14006777e): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067781): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067784): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067788): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006778b): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006778f): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067792): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067796): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067799): {next=c.rip+4; // imul rcx, rbp
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006779d): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400677a0): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400677a4): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400677a7): {next=c.rip+3; // mov r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400677aa): {next=c.rip+4; // shr r9, 0x1d
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x1400677ae): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400677b1): {next=c.rip+4; // or r9, 1
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400677b5): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400677b8): {next=c.rip+3; // mov rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400677bb): {next=c.rip+4; // shr rax, 8
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},1);
c.rip=next;return true;}
case UINT64_C(0x1400677bf): {next=c.rip+3; // and eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400677c2): {next=c.rip+4; // shr rcx, 0x28
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x28)},1);
c.rip=next;return true;}
case UINT64_C(0x1400677c6): {next=c.rip+4; // imul r8, rax, 0x3e
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x1400677ca): {next=c.rip+5; // mov eax, 0x8421085
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8421085)}));
c.rip=next;return true;}
case UINT64_C(0x1400677cf): {next=c.rip+2; // mul ecx
m.mul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400677d1): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400677d3): {next=c.rip+2; // sub eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x1400677d5): {next=c.rip+2; // shr eax, 1
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)},1);
c.rip=next;return true;}
case UINT64_C(0x1400677d7): {next=c.rip+2; // add eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x1400677d9): {next=c.rip+3; // shr eax, 5
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x5)},1);
c.rip=next;return true;}
case UINT64_C(0x1400677dc): {next=c.rip+3; // imul eax, eax, 0x3e
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x1400677df): {next=c.rip+2; // sub ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x1400677e1): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400677e3): {next=c.rip+3; // add r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400677e6): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400677ed): {next=c.rip+4; // movsxd rcx, dword ptr [rax + r8*4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,8,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400677f1): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400677f8): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400677fb): {next=c.rip+7; // add rcx, qword ptr [r14 + 0x4e0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067802): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067805): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067808): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14006780c): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006780f): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067813): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067816): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14006781a): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006781d): {next=c.rip+4; // imul rcx, rbp
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067821): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067824): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067828): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006782b): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006782e): {next=c.rip+7; // inc qword ptr [r14 + 0x708]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140067835): {next=c.rip+7; // mov qword ptr [r14 + 0x700], rax
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006783c): {next=c.rip+7; // inc dword ptr [r14 + 0x75c]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140067843): {next=c.rip+7; // mov eax, dword ptr [r14 + 0x75c]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006784a): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x758]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1880,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140067851): {next=c.rip+2; // jb 0x140067866
if(m.condition(2))next=next+UINT64_C(0x13);
c.rip=next;return true;}
case UINT64_C(0x140067853): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067856): {next=c.rip+11; // mov dword ptr [r14 + 0x75c], 0
m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067861): {next=c.rip+5; // call 0x14004b250
{uint64_t target=next+UINT64_C(0xfffffffffffe39ea);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067866): {next=c.rip+3; // mov r8d, ebx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067869): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006786b): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006786e): {next=c.rip+5; // call 0x14004c110
{uint64_t target=next+UINT64_C(0xfffffffffffe489d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067873): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14006787a): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006787d): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067884): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067888): {next=c.rip+7; // mov r15, qword ptr [r14 + 0x1188]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006788f): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067892): {next=c.rip+4; // lea r12d, [rbx + 1]
m.put(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,3,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067896): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006789d): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400678a0): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400678a4): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400678a7): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400678ae): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400678b5): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10b8]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400678bc): {next=c.rip+7; // mov rdi, qword ptr [r14 + 0x10b0]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400678c3): {next=c.rip+8; // movzx ebp, byte ptr [r14 + 0x10c8]
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400678cb): {next=c.rip+4; // imul rdx, r11
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400678cf): {next=c.rip+4; // lea rax, [r10 + r10*8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,10,10,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400678d3): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400678d6): {next=c.rip+3; // xor rdx, rdi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400678d9): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400678dc): {next=c.rip+3; // test bpl, bpl
m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400678df): {next=c.rip+4; // lea rax, [rbx + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400678e3): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400678e7): {next=c.rip+3; // inc r15
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400678ea): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400678f1): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x8f8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400678f8): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x730]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400678ff): {next=c.rip+5; // mov qword ptr [rsp + 0x60], r15
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067904): {next=c.rip+5; // movzx r8d, byte ptr [rcx + rbx]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067909): {next=c.rip+4; // xor r8b, byte ptr [rax + rbx]
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,8,0,0,3,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14006790d): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140067917): {next=c.rip+4; // imul r9, rax
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14006791b): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], r15
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067922): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14006792c): {next=c.rip+3; // add r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14006792f): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067932): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140067936): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067939): {next=c.rip+4; // lea rax, [r10 + r10]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,10,10,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006793d): {next=c.rip+7; // mov byte ptr [r14 + 0x1141], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067944): {next=c.rip+4; // imul rdx, r11
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067948): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006794b): {next=c.rip+3; // xor rdx, rdi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006794e): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067951): {next=c.rip+3; // xor rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067954): {next=c.rip+3; // test bpl, bpl
m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140067957): {next=c.rip+4; // lea rax, [rdx + r12]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,12,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006795b): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006795f): {next=c.rip+7; // mov qword ptr [r14 + 0x10d8], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067966): {next=c.rip+7; // movsxd rdx, dword ptr [r14 + 0x928]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14006796d): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x940]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067974): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067977): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x238]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006797e): {next=c.rip+3; // xor rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067981): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x230]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067988): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14006798b): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14006798e): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067992): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067995): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14006799f): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400679a3): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400679a6): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400679aa): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400679ad): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x1400679b7): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400679bb): {next=c.rip+4; // movzx eax, r8b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400679bf): {next=c.rip+3; // mov r15, rcx
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400679c2): {next=c.rip+6; // xor rax, 0x93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x93)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400679c8): {next=c.rip+4; // shr r15, 0x21
m.shift(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400679cc): {next=c.rip+3; // xor r15, rcx
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400679cf): {next=c.rip+7; // lea rcx, [rip - 0x679d6]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-424406,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400679d6): {next=c.rip+7; // mov qword ptr [r14 + 0x948], r15
m.put(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400679dd): {next=c.rip+8; // movzx esi, byte ptr [rax + rcx + 0x3e3660]
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,1,1,0,4077152,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400679e5): {next=c.rip+4; // xor sil, 0x27
m.put(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x27)}),8));
c.rip=next;return true;}
case UINT64_C(0x1400679e9): {next=c.rip+2; // inc edx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400679eb): {next=c.rip+7; // mov dword ptr [r14 + 0x928], edx
m.put(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400679f2): {next=c.rip+3; // test dl, 0x1f
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8);
c.rip=next;return true;}
case UINT64_C(0x1400679f5): {next=c.rip+2; // jne 0x140067a45
if(m.condition(1))next=next+UINT64_C(0x4e);
c.rip=next;return true;}
case UINT64_C(0x1400679f7): {next=c.rip+3; // movsxd rax, edx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400679fa): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x230]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067a01): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067a04): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067a07): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067a0b): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067a0e): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140067a18): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067a1c): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140067a26): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067a29): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067a2d): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067a30): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067a34): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067a37): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067a3b): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067a3e): {next=c.rip+7; // mov qword ptr [r14 + 0x230], rax
m.put(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067a45): {next=c.rip+4; // movzx r8d, sil
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067a49): {next=c.rip+3; // mov eax, r8d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067a4c): {next=c.rip+7; // mov byte ptr [r14 + 0x11a4], sil
m.put(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)},m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067a53): {next=c.rip+3; // xor rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067a56): {next=c.rip+10; // movabs r12, 0xff51afd7ed558ccd
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140067a60): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067a63): {next=c.rip+10; // movabs rbx, 0x9e3779b97f4a7c15
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140067a6d): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067a70): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067a74): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067a77): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140067a81): {next=c.rip+4; // imul rcx, r12
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067a85): {next=c.rip+4; // imul r8, rbx
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067a89): {next=c.rip+4; // imul r9, rbx
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067a8d): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067a90): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067a94): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067a97): {next=c.rip+7; // mov ecx, dword ptr [r14 + 0x8bc]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,2236,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067a9e): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067aa2): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067aa5): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067aa9): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067aac): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067ab3): {next=c.rip+10; // movabs rax, 0xd6e8feb86659fd93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x140067abd): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067ac1): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067ac4): {next=c.rip+3; // xor rcx, r15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067ac7): {next=c.rip+10; // movabs r15, 0x2545f4914f6cdd1d
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140067ad1): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067ad4): {next=c.rip+3; // add r9, r15
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067ad7): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067adb): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067ade): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067ae2): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067ae5): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067ae9): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067aec): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140067af6): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067afa): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067aff): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067b03): {next=c.rip+3; // and edx, 3
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x140067b06): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140067b09): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067b10): {next=c.rip+4; // cmp sil, 0x3e
m.arithmetic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3e)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140067b14): {next=c.rip+6; // jae 0x140067bae
if(m.condition(3))next=next+UINT64_C(0x94);
c.rip=next;return true;}
case UINT64_C(0x140067b1a): {next=c.rip+7; // inc qword ptr [r14 + 0x1088]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140067b21): {next=c.rip+7; // lea rax, [rip - 0x67b28]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-424744,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067b28): {next=c.rip+8; // mov r8d, dword ptr [rax + rdx*4 + 0x3e0490]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,0,2,4,0,4064400,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067b30): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067b37): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140067b3b): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067b3f): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067b46): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067b4a): {next=c.rip+2; // mov ebx, edx
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067b4c): {next=c.rip+3; // xor rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067b4f): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067b52): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067b55): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067b58): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067b5b): {next=c.rip+4; // movzx r8d, sil
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067b5f): {next=c.rip+3; // test bpl, bpl
m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140067b62): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067b66): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067b69): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067b70): {next=c.rip+5; // call 0x14004da40
{uint64_t target=next+UINT64_C(0xfffffffffffe5ecb);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067b75): {next=c.rip+5; // mov r8, qword ptr [rsp + 0x70]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067b7a): {next=c.rip+4; // lea edx, [r13 - 1]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,13,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067b7e): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067b80): {next=c.rip+4; // imul rcx, rbx, 0x3e
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x140067b84): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067b87): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067b8e): {next=c.rip+4; // movsxd r9, dword ptr [rax + rcx*4]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,1,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140067b92): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067b95): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140067b9c): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067b9f): {next=c.rip+7; // add r9, qword ptr [r14 + 0x4e0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067ba6): {next=c.rip+3; // call r9
{uint64_t target=m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067ba9): {next=c.rip+5; // jmp 0x140067c75
next=next+UINT64_C(0xc7);
c.rip=next;return true;}
case UINT64_C(0x140067bae): {next=c.rip+7; // inc dword ptr [r14 + 0x1090]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140067bb5): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067bb8): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140067bbc): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067bbf): {next=c.rip+8; // lea rax, [r10*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,-1,10,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067bc7): {next=c.rip+7; // mov byte ptr [r14 + 0x1143], cl
m.put(Operand{2,0,8,0,14,-1,1,0,4419,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067bce): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067bd2): {next=c.rip+4; // imul r9, rbx
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067bd6): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067bd9): {next=c.rip+3; // xor rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067bdc): {next=c.rip+7; // mov qword ptr [r14 + 0x10e8], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,4328,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067be3): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067bea): {next=c.rip+3; // add r9, r15
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067bed): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067bf0): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140067bf4): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067bf7): {next=c.rip+7; // mov byte ptr [r14 + 0x114a], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4426,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067bfe): {next=c.rip+4; // imul rax, r10, 0xb
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb)});
c.rip=next;return true;}
case UINT64_C(0x140067c02): {next=c.rip+4; // imul rdx, r11
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067c06): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067c09): {next=c.rip+3; // xor rdx, rdi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067c0c): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067c0f): {next=c.rip+4; // xor rcx, 1
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067c13): {next=c.rip+3; // test bpl, bpl
m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140067c16): {next=c.rip+4; // lea rax, [rdx + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067c1a): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067c1e): {next=c.rip+7; // mov qword ptr [r14 + 0x1120], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4384,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067c25): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067c29): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067c30): {next=c.rip+4; // imul r9, rbx
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067c34): {next=c.rip+3; // add r9, r15
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067c37): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067c3e): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140067c42): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067c46): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067c4d): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067c51): {next=c.rip+3; // xor rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067c54): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067c57): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067c5a): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067c60): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067c67): {next=c.rip+3; // test bpl, bpl
m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140067c6a): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067c6e): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067c75): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x68]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067c7a): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067c7e): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140067c80): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140067c82): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140067c84): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140067c86): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140067c87): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140067c88): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140067c89): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140067c8a): {next=c.rip+5; // mov edx, 0x54485254
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x54485254)}));
c.rip=next;return true;}
case UINT64_C(0x140067c8f): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067c92): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffe1699);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067c97): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140067c98): {next=c.rip+5; // mov edx, 0x43414e59
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x43414e59)}));
c.rip=next;return true;}
case UINT64_C(0x140067c9d): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067ca0): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffe168b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067ca5): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140067cb0): {next=c.rip+5; // mov qword ptr [rsp + 0x18], r8
m.put(Operand{2,0,64,0,4,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067cb5): {next=c.rip+1; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067cb6): {next=c.rip+1; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067cb7): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067cb8): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067cb9): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067cbb): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067cbd): {next=c.rip+4; // sub rsp, 0x38
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140067cc1): {next=c.rip+7; // movsxd rax, dword ptr [rcx + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,1,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140067cc8): {next=c.rip+3; // mov r14, rcx
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067ccb): {next=c.rip+3; // mov r13d, edx
m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067cce): {next=c.rip+10; // movabs rcx, 0xc653a35ae77bc5b2
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc653a35ae77bc5b2)}));
c.rip=next;return true;}
case UINT64_C(0x140067cd8): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067cdc): {next=c.rip+10; // movabs rcx, 0x640a299166a5418d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x640a299166a5418d)}));
c.rip=next;return true;}
case UINT64_C(0x140067ce6): {next=c.rip+3; // mov rbp, r8
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067ce9): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067cf0): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067cf5): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067cfa): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140067d01): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067d05): {next=c.rip+10; // movabs rcx, 0x82c2b7cfe5eecd98
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x82c2b7cfe5eecd98)}));
c.rip=next;return true;}
case UINT64_C(0x140067d0f): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067d16): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067d1b): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067d20): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140067d27): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067d2b): {next=c.rip+10; // movabs rcx, 0x900f7bad6ee71b1f
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x900f7bad6ee71b1f)}));
c.rip=next;return true;}
case UINT64_C(0x140067d35): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067d3c): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067d41): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067d46): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11c0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4544,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067d4d): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067d50): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067d53): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067d57): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067d5a): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140067d64): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067d68): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140067d72): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067d75): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067d79): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067d7c): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067d7f): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067d83): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067d86): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067d8a): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067d8d): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11c0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4544,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067d94): {next=c.rip+4; // shr rax, 7
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x7)},1);
c.rip=next;return true;}
case UINT64_C(0x140067d98): {next=c.rip+3; // add rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067d9b): {next=c.rip+7; // mov qword ptr [r14 + 0x11c0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4544,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067da2): {next=c.rip+5; // call 0x14004d760
{uint64_t target=next+UINT64_C(0xfffffffffffe59b9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067da7): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067daa): {next=c.rip+2; // mov edi, eax
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067dac): {next=c.rip+5; // call 0x14004a3d0
{uint64_t target=next+UINT64_C(0xfffffffffffe261f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067db1): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067db4): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067db7): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffe1db4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067dbc): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x11a4]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067dc4): {next=c.rip+3; // mov r8d, eax
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067dc7): {next=c.rip+3; // mov rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067dca): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067dcd): {next=c.rip+2; // mov esi, eax
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067dcf): {next=c.rip+5; // call 0x14004c930
{uint64_t target=next+UINT64_C(0xfffffffffffe4b5c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067dd4): {next=c.rip+2; // mov ecx, edi
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067dd6): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067dd9): {next=c.rip+5; // call 0x140048d70
{uint64_t target=next+UINT64_C(0xfffffffffffe0f92);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067dde): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140067de1): {next=c.rip+4; // mov dword ptr [rsp + 0x28], esi
m.put(Operand{2,0,32,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067de5): {next=c.rip+4; // lea rcx, [rbx - 1]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067de9): {next=c.rip+4; // mov dword ptr [rsp + 0x20], eax
m.put(Operand{2,0,32,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067ded): {next=c.rip+3; // cmp rcx, rbx
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140067df0): {next=c.rip+6; // mov r9d, 1
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x140067df6): {next=c.rip+3; // mov rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067df9): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067dfc): {next=c.rip+4; // setae r8b
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.condition(3)));
c.rip=next;return true;}
case UINT64_C(0x140067e00): {next=c.rip+5; // call 0x14004cb70
{uint64_t target=next+UINT64_C(0xfffffffffffe4d6b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067e05): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067e08): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067e0b): {next=c.rip+5; // call 0x14004c880
{uint64_t target=next+UINT64_C(0xfffffffffffe4a70);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067e10): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11c0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4544,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067e17): {next=c.rip+3; // test r13d, r13d
m.logic(m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x140067e1a): {next=c.rip+6; // jns 0x14006897e
if(m.condition(11))next=next+UINT64_C(0xb5e);
c.rip=next;return true;}
case UINT64_C(0x140067e20): {next=c.rip+7; // cmp qword ptr [r14 + 0x1058], rbp
m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4184,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x140067e27): {next=c.rip+6; // jne 0x14006898c
if(m.condition(1))next=next+UINT64_C(0xb5f);
c.rip=next;return true;}
case UINT64_C(0x140067e2d): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x140067e34): {next=c.rip+10; // movabs rcx, 0x4f95a31d0385258b
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4f95a31d0385258b)}));
c.rip=next;return true;}
case UINT64_C(0x140067e3e): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067e42): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067e45): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067e4c): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067e51): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x70]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067e56): {next=c.rip+5; // call 0x140049ee0
{uint64_t target=next+UINT64_C(0xfffffffffffe2085);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067e5b): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x140067e5d): {next=c.rip+6; // jne 0x140068971
if(m.condition(1))next=next+UINT64_C(0xb0e);
c.rip=next;return true;}
case UINT64_C(0x140067e63): {next=c.rip+7; // cmp dword ptr [r14 + 0x4b8], eax
m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1208,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140067e6a): {next=c.rip+6; // jne 0x140068971
if(m.condition(1))next=next+UINT64_C(0xb01);
c.rip=next;return true;}
case UINT64_C(0x140067e70): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x10d0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067e77): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1140]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067e7f): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067e82): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067e89): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067e90): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067e97): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067e9f): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067ea6): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x1188]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067ead): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067eb1): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r12
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067eb6): {next=c.rip+10; // movabs r12, 0x2545f4914f6cdd1d
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140067ec0): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067ec3): {next=c.rip+5; // mov qword ptr [rsp + 0x30], r15
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067ec8): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067ecb): {next=c.rip+10; // movabs r15, 0x9e3779b97f4a7c15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140067ed5): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067ed8): {next=c.rip+3; // sub r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140067edb): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140067ede): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067ee2): {next=c.rip+3; // inc rsi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140067ee5): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067ee9): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rsi
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067ef0): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067ef3): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067efa): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067efd): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140067f01): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067f04): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067f0b): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067f0f): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067f12): {next=c.rip+3; // xor rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067f15): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067f18): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067f1b): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140067f1e): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067f22): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067f26): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067f2d): {next=c.rip+7; // cmp r8d, 0x322898
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x322898)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140067f34): {next=c.rip+6; // jne 0x140068967
if(m.condition(1))next=next+UINT64_C(0xa2d);
c.rip=next;return true;}
case UINT64_C(0x140067f3a): {next=c.rip+3; // mov eax, r13d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067f3d): {next=c.rip+4; // btr eax, 0x1f
m.bitop(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)},false);
c.rip=next;return true;}
case UINT64_C(0x140067f41): {next=c.rip+3; // cmp eax, 2
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140067f44): {next=c.rip+2; // jae 0x140067f90
if(m.condition(3))next=next+UINT64_C(0x4a);
c.rip=next;return true;}
case UINT64_C(0x140067f46): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067f4a): {next=c.rip+4; // lea rax, [rsi + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067f4e): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067f55): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067f58): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067f5f): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140067f63): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067f67): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067f6e): {next=c.rip+4; // imul rax, r10
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067f72): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067f75): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067f78): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067f7b): {next=c.rip+6; // add rax, 0x101651
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x101651)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140067f81): {next=c.rip+7; // xor rcx, 0x101651
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x101651)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067f88): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140067f8b): {next=c.rip+5; // jmp 0x14006895c
next=next+UINT64_C(0x9cc);
c.rip=next;return true;}
case UINT64_C(0x140067f90): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067f93): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xfffffffffffe1bd8);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140067f98): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067fa0): {next=c.rip+10; // movabs rbx, 0xff51afd7ed558ccd
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140067faa): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067fb1): {next=c.rip+10; // movabs r8, 0xc4ceb9fe1a85ec53
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140067fbb): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10b0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067fc2): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067fca): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067fcc): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067fcf): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x930]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067fd6): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067fd9): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067fdd): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067fe0): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067fe4): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067fe7): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067feb): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067fee): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140067ff2): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140067ff5): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140067ff9): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140067ffc): {next=c.rip+7; // mov qword ptr [r14 + 0x930], rdx
m.put(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
default:return false;
}}
}
