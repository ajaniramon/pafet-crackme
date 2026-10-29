// Generated literal x64 semantics.
#include "../pafet_hexvm_cpu_xxvi.h"
namespace pafet_xxiv {
bool hexvm_part_12(Machine& m){auto& c=m.c;auto& next=m.next;switch(m.canonical(c.rip)){
case UINT64_C(0x140048940): {next=c.rip+3; // mov qword ptr [rcx], rdx
m.put(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048943): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048946): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140048ac0): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048ac5): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048aca): {next=c.rip+3; // mov r8d, ecx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048acd): {next=c.rip+2; // mov edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048acf): {next=c.rip+4; // and r8d, 0xf
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048ad3): {next=c.rip+3; // shr edx, 4
m.shift(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x4)},1);
c.rip=next;return true;}
case UINT64_C(0x140048ad6): {next=c.rip+3; // mov eax, r8d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048ad9): {next=c.rip+10; // movabs rbx, 0xd6e8feb86659fd93
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x140048ae3): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048ae7): {next=c.rip+10; // movabs rdi, 0xff51afd7ed558ccd
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140048af1): {next=c.rip+10; // movabs r11, 0xc4ceb9fe1a85ec53
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140048afb): {next=c.rip+10; // movabs rcx, 0xff7a8b2362bf776e
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff7a8b2362bf776e)}));
c.rip=next;return true;}
case UINT64_C(0x140048b05): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048b08): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048b0b): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140048b0f): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048b12): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048b16): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048b19): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140048b1d): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048b20): {next=c.rip+10; // movabs rcx, 0x5d2301e8e361f351
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5d2301e8e361f351)}));
c.rip=next;return true;}
case UINT64_C(0x140048b2a): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048b2e): {next=c.rip+3; // mov r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048b31): {next=c.rip+4; // shr rax, 0x11
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},1);
c.rip=next;return true;}
case UINT64_C(0x140048b35): {next=c.rip+4; // shr r9, 0x32
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x32)},1);
c.rip=next;return true;}
case UINT64_C(0x140048b39): {next=c.rip+3; // xor r9d, eax
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048b3c): {next=c.rip+3; // xor r9d, edx
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048b3f): {next=c.rip+4; // and r9d, 0xf
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048b43): {next=c.rip+3; // mov eax, r9d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048b46): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048b4a): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048b4d): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048b50): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140048b54): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048b57): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048b5b): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048b5e): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140048b62): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048b65): {next=c.rip+10; // movabs rcx, 0xbbeb9fb6602a7f44
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xbbeb9fb6602a7f44)}));
c.rip=next;return true;}
case UINT64_C(0x140048b6f): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048b73): {next=c.rip+3; // mov r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048b76): {next=c.rip+4; // shr rax, 0x11
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},1);
c.rip=next;return true;}
case UINT64_C(0x140048b7a): {next=c.rip+4; // shr r10, 0x32
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x32)},1);
c.rip=next;return true;}
case UINT64_C(0x140048b7e): {next=c.rip+3; // xor r10d, eax
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048b81): {next=c.rip+3; // xor r10d, r8d
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048b84): {next=c.rip+4; // and r10d, 0xf
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048b88): {next=c.rip+3; // mov eax, r10d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048b8b): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048b8f): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048b92): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048b95): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140048b99): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048b9c): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048ba0): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048ba3): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140048ba7): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048baa): {next=c.rip+10; // movabs rcx, 0x1990147fe0dcfb2f
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1990147fe0dcfb2f)}));
c.rip=next;return true;}
case UINT64_C(0x140048bb4): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048bb8): {next=c.rip+3; // mov r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048bbb): {next=c.rip+4; // shr rax, 0x11
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},1);
c.rip=next;return true;}
case UINT64_C(0x140048bbf): {next=c.rip+4; // shr r8, 0x32
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x32)},1);
c.rip=next;return true;}
case UINT64_C(0x140048bc3): {next=c.rip+3; // xor r8d, eax
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048bc6): {next=c.rip+3; // xor r8d, r9d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048bc9): {next=c.rip+4; // and r8d, 0xf
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048bcd): {next=c.rip+3; // mov eax, r8d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048bd0): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048bd4): {next=c.rip+4; // shl r8d, 4
m.shift(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x4)},0);
c.rip=next;return true;}
case UINT64_C(0x140048bd8): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048bdb): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048bde): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140048be2): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048be5): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048be9): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048bec): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140048bf0): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048bf3): {next=c.rip+4; // imul rdx, r11
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048bf7): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048bfa): {next=c.rip+4; // shr rdx, 0x11
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},1);
c.rip=next;return true;}
case UINT64_C(0x140048bfe): {next=c.rip+4; // shr rax, 0x32
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x32)},1);
c.rip=next;return true;}
case UINT64_C(0x140048c02): {next=c.rip+2; // xor eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048c04): {next=c.rip+3; // xor eax, r10d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048c07): {next=c.rip+3; // and eax, 0xf
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048c0a): {next=c.rip+3; // or eax, r8d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048c0d): {next=c.rip+5; // mov rbx, qword ptr [rsp + 8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048c12): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x10]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048c17): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140048c20): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048c25): {next=c.rip+3; // mov r8d, ecx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048c28): {next=c.rip+10; // movabs rbx, 0xff51afd7ed558ccd
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140048c32): {next=c.rip+4; // shr r8d, 4
m.shift(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x4)},1);
c.rip=next;return true;}
case UINT64_C(0x140048c36): {next=c.rip+10; // movabs r11, 0xd6e8feb86659fd93
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x140048c40): {next=c.rip+3; // mov eax, r8d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048c43): {next=c.rip+10; // movabs r10, 0xc4ceb9fe1a85ec53
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140048c4d): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048c51): {next=c.rip+10; // movabs rdx, 0x1990147fe0dcfb2f
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1990147fe0dcfb2f)}));
c.rip=next;return true;}
case UINT64_C(0x140048c5b): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048c5e): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048c61): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140048c65): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048c68): {next=c.rip+4; // imul rdx, rbx
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048c6c): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048c6f): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140048c73): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048c76): {next=c.rip+4; // imul rax, r10
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048c7a): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048c7d): {next=c.rip+4; // shr rax, 0x11
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},1);
c.rip=next;return true;}
case UINT64_C(0x140048c81): {next=c.rip+4; // shr rdx, 0x32
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x32)},1);
c.rip=next;return true;}
case UINT64_C(0x140048c85): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048c87): {next=c.rip+2; // xor edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048c89): {next=c.rip+10; // movabs rcx, 0xbbeb9fb6602a7f44
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xbbeb9fb6602a7f44)}));
c.rip=next;return true;}
case UINT64_C(0x140048c93): {next=c.rip+3; // and edx, 0xf
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048c96): {next=c.rip+2; // mov eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048c98): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048c9c): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048c9f): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048ca2): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140048ca6): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048ca9): {next=c.rip+4; // imul rcx, rbx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048cad): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048cb0): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140048cb4): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048cb7): {next=c.rip+10; // movabs rcx, 0x5d2301e8e361f351
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5d2301e8e361f351)}));
c.rip=next;return true;}
case UINT64_C(0x140048cc1): {next=c.rip+4; // imul rax, r10
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048cc5): {next=c.rip+3; // mov r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048cc8): {next=c.rip+4; // shr rax, 0x11
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},1);
c.rip=next;return true;}
case UINT64_C(0x140048ccc): {next=c.rip+4; // shr r9, 0x32
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x32)},1);
c.rip=next;return true;}
case UINT64_C(0x140048cd0): {next=c.rip+3; // xor r9d, eax
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048cd3): {next=c.rip+3; // xor r9d, r8d
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048cd6): {next=c.rip+4; // and r9d, 0xf
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048cda): {next=c.rip+3; // mov eax, r9d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048cdd): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048ce1): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048ce4): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048ce7): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140048ceb): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048cee): {next=c.rip+4; // imul rcx, rbx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048cf2): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048cf5): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140048cf9): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048cfc): {next=c.rip+10; // movabs rcx, 0xff7a8b2362bf776e
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff7a8b2362bf776e)}));
c.rip=next;return true;}
case UINT64_C(0x140048d06): {next=c.rip+4; // imul rax, r10
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048d0a): {next=c.rip+3; // mov r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048d0d): {next=c.rip+4; // shr rax, 0x11
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},1);
c.rip=next;return true;}
case UINT64_C(0x140048d11): {next=c.rip+4; // shr r8, 0x32
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x32)},1);
c.rip=next;return true;}
case UINT64_C(0x140048d15): {next=c.rip+3; // xor r8d, eax
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048d18): {next=c.rip+3; // xor r8d, edx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048d1b): {next=c.rip+4; // and r8d, 0xf
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048d1f): {next=c.rip+3; // mov eax, r8d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048d22): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048d26): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048d29): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048d2c): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140048d30): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048d33): {next=c.rip+4; // imul rcx, rbx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048d37): {next=c.rip+5; // mov rbx, qword ptr [rsp + 8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048d3c): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048d3f): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140048d43): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048d46): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048d4a): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048d4d): {next=c.rip+4; // shr rdx, 0x11
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},1);
c.rip=next;return true;}
case UINT64_C(0x140048d51): {next=c.rip+4; // shr rax, 0x32
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x32)},1);
c.rip=next;return true;}
case UINT64_C(0x140048d55): {next=c.rip+2; // xor eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048d57): {next=c.rip+3; // xor eax, r9d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048d5a): {next=c.rip+3; // and eax, 0xf
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048d5d): {next=c.rip+3; // shl eax, 4
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x4)},0);
c.rip=next;return true;}
case UINT64_C(0x140048d60): {next=c.rip+3; // or eax, r8d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048d63): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140048d70): {next=c.rip+2; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048d72): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140048d76): {next=c.rip+2; // mov esi, ecx
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048d78): {next=c.rip+3; // cmp ecx, 0x4f
m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4f)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140048d7b): {next=c.rip+2; // jae 0x140048df1
if(m.condition(3))next=next+UINT64_C(0x74);
c.rip=next;return true;}
case UINT64_C(0x140048d7d): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048d82): {next=c.rip+2; // xor ebx, ebx
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048d84): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048d89): {next=c.rip+2; // mov edi, ebx
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048d8b): {next=c.rip+2; // test ecx, ecx
m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x140048d8d): {next=c.rip+2; // je 0x140048ddf
if(m.condition(0))next=next+UINT64_C(0x50);
c.rip=next;return true;}
case UINT64_C(0x140048d8f): {next=c.rip+3; // lea eax, [rcx - 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048d92): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048d94): {next=c.rip+5; // call 0x140048ac0
{uint64_t target=next+UINT64_C(0xfffffffffffffd27);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140048d99): {next=c.rip+3; // cmp eax, 0x4e
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4e)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140048d9c): {next=c.rip+2; // jb 0x140048da9
if(m.condition(2))next=next+UINT64_C(0xb);
c.rip=next;return true;}
case UINT64_C(0x140048d9e): {next=c.rip+2; // inc edi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140048da0): {next=c.rip+3; // cmp edi, 0x40
m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x40)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140048da3): {next=c.rip+2; // jl 0x140048d92
if(m.condition(6))next=next+UINT64_C(0xffffffffffffffed);
c.rip=next;return true;}
case UINT64_C(0x140048da5): {next=c.rip+2; // mov eax, esi
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048da7): {next=c.rip+2; // jmp 0x140048dab
next=next+UINT64_C(0x2);
c.rip=next;return true;}
case UINT64_C(0x140048da9): {next=c.rip+2; // inc eax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140048dab): {next=c.rip+3; // imul edi, eax, 0x19
m.imul(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x19)});
c.rip=next;return true;}
case UINT64_C(0x140048dae): {next=c.rip+6; // cmp edi, 0x7b7
m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x7b7)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140048db4): {next=c.rip+2; // jae 0x140048dfc
if(m.condition(3))next=next+UINT64_C(0x46);
c.rip=next;return true;}
case UINT64_C(0x140048db6): {next=c.rip+3; // lea eax, [rsi - 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,6,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048db9): {next=c.rip+7; // nop dword ptr [rax]

c.rip=next;return true;}
case UINT64_C(0x140048dc0): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048dc2): {next=c.rip+5; // call 0x140048ac0
{uint64_t target=next+UINT64_C(0xfffffffffffffcf9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140048dc7): {next=c.rip+3; // cmp eax, 0x4e
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4e)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140048dca): {next=c.rip+2; // jb 0x140048dd5
if(m.condition(2))next=next+UINT64_C(0x9);
c.rip=next;return true;}
case UINT64_C(0x140048dcc): {next=c.rip+2; // inc ebx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140048dce): {next=c.rip+3; // cmp ebx, 0x40
m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x40)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140048dd1): {next=c.rip+2; // jl 0x140048dc0
if(m.condition(6))next=next+UINT64_C(0xffffffffffffffed);
c.rip=next;return true;}
case UINT64_C(0x140048dd3): {next=c.rip+2; // jmp 0x140048dd8
next=next+UINT64_C(0x3);
c.rip=next;return true;}
case UINT64_C(0x140048dd5): {next=c.rip+3; // lea esi, [rax + 1]
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048dd8): {next=c.rip+3; // imul eax, esi, 0x19
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x19)});
c.rip=next;return true;}
case UINT64_C(0x140048ddb): {next=c.rip+2; // cmp edi, eax
m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140048ddd): {next=c.rip+2; // jne 0x140048dfc
if(m.condition(1))next=next+UINT64_C(0x1d);
c.rip=next;return true;}
case UINT64_C(0x140048ddf): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x30]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048de4): {next=c.rip+2; // mov eax, edi
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048de6): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x38]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048deb): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140048def): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x140048df0): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140048df1): {next=c.rip+5; // mov ecx, 0x424c4b49
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x424c4b49)}));
c.rip=next;return true;}
case UINT64_C(0x140048df6): {next=c.rip+5; // call 0x140049890
{uint64_t target=next+UINT64_C(0xa95);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140048dfb): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140048dfc): {next=c.rip+5; // mov ecx, 0x424c4b50
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x424c4b50)}));
c.rip=next;return true;}
case UINT64_C(0x140048e01): {next=c.rip+5; // call 0x140049890
{uint64_t target=next+UINT64_C(0xa8a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140048e06): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140048e10): {next=c.rip+2; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e12): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e13): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e15): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e17): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e19): {next=c.rip+3; // mov rbp, rsp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e1c): {next=c.rip+4; // sub rsp, 0x60
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x60)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140048e20): {next=c.rip+7; // mov rax, qword ptr [rip + 0x3c41f9]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,16,-1,1,0,3949049,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e27): {next=c.rip+3; // xor rax, rsp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048e2a): {next=c.rip+4; // mov qword ptr [rbp - 0x18], rax
m.put(Operand{2,0,64,0,5,-1,1,0,-24,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e2e): {next=c.rip+2; // xor esi, esi
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048e30): {next=c.rip+4; // mov qword ptr [rbp - 0x38], r8
m.put(Operand{2,0,64,0,5,-1,1,0,-56,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e34): {next=c.rip+4; // mov qword ptr [rbp - 0x30], r9
m.put(Operand{2,0,64,0,5,-1,1,0,-48,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e38): {next=c.rip+3; // mov r15, r9
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e3b): {next=c.rip+4; // mov qword ptr [rbp - 0x28], rsi
m.put(Operand{2,0,64,0,5,-1,1,0,-40,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e3f): {next=c.rip+3; // mov r14, r8
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e42): {next=c.rip+4; // mov qword ptr [rbp - 0x20], rsi
m.put(Operand{2,0,64,0,5,-1,1,0,-32,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e46): {next=c.rip+3; // mov r13d, ecx
m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e49): {next=c.rip+3; // cmp edx, 0xc
m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140048e4c): {next=c.rip+6; // jae 0x1400491e2
if(m.condition(3))next=next+UINT64_C(0x390);
c.rip=next;return true;}
case UINT64_C(0x140048e52): {next=c.rip+8; // mov qword ptr [rsp + 0xa0], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,160,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e5a): {next=c.rip+7; // lea r11, [rip - 0x48e61]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-298593,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e61): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e66): {next=c.rip+10; // movabs rax, 0x59b26b99084f4a7
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x59b26b99084f4a7)}));
c.rip=next;return true;}
case UINT64_C(0x140048e70): {next=c.rip+3; // lea edi, [rdx + 1]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e73): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r12
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e78): {next=c.rip+10; // movabs r8, 0x9e3779b97f4a7c15
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140048e82): {next=c.rip+3; // mov r12d, esi
m.put(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e85): {next=c.rip+4; // imul rdi, r8
m.imul(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048e89): {next=c.rip+3; // xor rdi, rax
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048e8c): {next=c.rip+2; // mov eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e8e): {next=c.rip+8; // mov ecx, dword ptr [r11 + rax*4 + 0x3e1240]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,11,0,4,0,4067904,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e96): {next=c.rip+8; // mov eax, dword ptr [r11 + rax*4 + 0x3e7110]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,11,0,4,0,4092176,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048e9e): {next=c.rip+3; // mov dword ptr [rbp - 0x3c], ecx
m.put(Operand{2,0,32,0,5,-1,1,0,-60,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048ea1): {next=c.rip+3; // mov dword ptr [rbp - 0x40], eax
m.put(Operand{2,0,32,0,5,-1,1,0,-64,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048ea4): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x140048ea6): {next=c.rip+6; // je 0x1400491a9
if(m.condition(0))next=next+UINT64_C(0x2fd);
c.rip=next;return true;}
case UINT64_C(0x140048eac): {next=c.rip+4; // lea r9d, [rcx + r12*4]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,12,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048eb0): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048eb3): {next=c.rip+4; // shr rax, 0x20
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x20)},1);
c.rip=next;return true;}
case UINT64_C(0x140048eb7): {next=c.rip+10; // movabs rbx, 0xbf58476d1ce4e5b9
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xbf58476d1ce4e5b9)}));
c.rip=next;return true;}
case UINT64_C(0x140048ec1): {next=c.rip+6; // imul ecx, eax, 0x7a143595
m.imul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x7a143595)});
c.rip=next;return true;}
case UINT64_C(0x140048ec7): {next=c.rip+7; // imul edx, r9d, 0x9e3779b1
m.imul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x9e3779b1)});
c.rip=next;return true;}
case UINT64_C(0x140048ece): {next=c.rip+2; // mov eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048ed0): {next=c.rip+2; // sub eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x140048ed2): {next=c.rip+6; // lea ecx, [rax - 0x44422503]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,-1145185539,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048ed8): {next=c.rip+2; // add ecx, edi
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x140048eda): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048edc): {next=c.rip+3; // shr eax, 0xf
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0xf)},1);
c.rip=next;return true;}
case UINT64_C(0x140048edf): {next=c.rip+2; // xor eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048ee1): {next=c.rip+6; // imul ecx, eax, 0xc2b2ae35
m.imul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc2b2ae35)});
c.rip=next;return true;}
case UINT64_C(0x140048ee7): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048ee9): {next=c.rip+3; // shr eax, 0xd
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0xd)},1);
c.rip=next;return true;}
case UINT64_C(0x140048eec): {next=c.rip+2; // xor eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048eee): {next=c.rip+6; // imul ecx, eax, 0x27d4eb2f
m.imul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x27d4eb2f)});
c.rip=next;return true;}
case UINT64_C(0x140048ef4): {next=c.rip+3; // mov r10d, ecx
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048ef7): {next=c.rip+4; // shr r10d, 0x10
m.shift(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x10)},1);
c.rip=next;return true;}
case UINT64_C(0x140048efb): {next=c.rip+8; // xor r10d, dword ptr [r11 + r9*4 + 0x3e2500]
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,32,0,11,9,4,0,4072704,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048f03): {next=c.rip+3; // xor r10d, ecx
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048f06): {next=c.rip+3; // mov eax, r10d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048f09): {next=c.rip+3; // xor rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048f0c): {next=c.rip+7; // lea rdi, [rip - 0x48f13]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-298771,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048f13): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048f17): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048f1a): {next=c.rip+4; // shr rcx, 0x1d
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x140048f1e): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048f21): {next=c.rip+4; // imul rcx, rbx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048f25): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048f27): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048f2a): {next=c.rip+4; // shr rbx, 0x20
m.shift(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x20)},1);
c.rip=next;return true;}
case UINT64_C(0x140048f2e): {next=c.rip+3; // xor rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048f31): {next=c.rip+4; // lea r8d, [rdx + rbx]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048f35): {next=c.rip+7; // lea eax, [r8 + 0x59f554ae]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,1509250222,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048f3c): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048f3e): {next=c.rip+3; // shr ecx, 0xf
m.shift(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0xf)},1);
c.rip=next;return true;}
case UINT64_C(0x140048f41): {next=c.rip+2; // xor ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048f43): {next=c.rip+6; // imul eax, ecx, 0xc2b2ae35
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc2b2ae35)});
c.rip=next;return true;}
case UINT64_C(0x140048f49): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048f4b): {next=c.rip+3; // shr ecx, 0xd
m.shift(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0xd)},1);
c.rip=next;return true;}
case UINT64_C(0x140048f4e): {next=c.rip+2; // xor ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048f50): {next=c.rip+6; // imul edx, ecx, 0x27d4eb2f
m.imul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x27d4eb2f)});
c.rip=next;return true;}
case UINT64_C(0x140048f56): {next=c.rip+4; // lea ecx, [r9 + 1]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,9,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048f5a): {next=c.rip+2; // mov eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048f5c): {next=c.rip+3; // shr eax, 0x10
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x10)},1);
c.rip=next;return true;}
case UINT64_C(0x140048f5f): {next=c.rip+8; // xor eax, dword ptr [r11 + rcx*4 + 0x3e2500]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,32,0,11,1,4,0,4072704,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048f67): {next=c.rip+2; // xor eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048f69): {next=c.rip+3; // mov r11d, eax
m.put(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048f6c): {next=c.rip+7; // lea eax, [r8 - 0x7d331a1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,-131281313,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048f73): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048f75): {next=c.rip+3; // shr ecx, 0xf
m.shift(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0xf)},1);
c.rip=next;return true;}
case UINT64_C(0x140048f78): {next=c.rip+2; // xor ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048f7a): {next=c.rip+6; // imul eax, ecx, 0xc2b2ae35
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc2b2ae35)});
c.rip=next;return true;}
case UINT64_C(0x140048f80): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048f82): {next=c.rip+3; // shr ecx, 0xd
m.shift(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0xd)},1);
c.rip=next;return true;}
case UINT64_C(0x140048f85): {next=c.rip+2; // xor ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048f87): {next=c.rip+6; // imul edx, ecx, 0x27d4eb2f
m.imul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x27d4eb2f)});
c.rip=next;return true;}
case UINT64_C(0x140048f8d): {next=c.rip+4; // lea ecx, [r9 + 2]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,9,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048f91): {next=c.rip+2; // mov eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048f93): {next=c.rip+3; // shr eax, 0x10
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x10)},1);
c.rip=next;return true;}
case UINT64_C(0x140048f96): {next=c.rip+7; // xor eax, dword ptr [rdi + rcx*4 + 0x3e2500]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,32,0,7,1,4,0,4072704,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048f9d): {next=c.rip+2; // xor eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048f9f): {next=c.rip+2; // mov edi, eax
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048fa1): {next=c.rip+7; // lea eax, [r8 - 0x699bb7f0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,-1771812848,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048fa8): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048faa): {next=c.rip+3; // shr ecx, 0xf
m.shift(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0xf)},1);
c.rip=next;return true;}
case UINT64_C(0x140048fad): {next=c.rip+2; // xor ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048faf): {next=c.rip+6; // imul eax, ecx, 0xc2b2ae35
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc2b2ae35)});
c.rip=next;return true;}
case UINT64_C(0x140048fb5): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048fb7): {next=c.rip+3; // shr ecx, 0xd
m.shift(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0xd)},1);
c.rip=next;return true;}
case UINT64_C(0x140048fba): {next=c.rip+2; // xor ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048fbc): {next=c.rip+4; // lea eax, [r9 + 3]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,9,-1,1,0,3,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048fc0): {next=c.rip+6; // imul edx, ecx, 0x27d4eb2f
m.imul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x27d4eb2f)});
c.rip=next;return true;}
case UINT64_C(0x140048fc6): {next=c.rip+7; // lea r9, [rip - 0x48fcd]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-298957,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048fcd): {next=c.rip+3; // mov r8d, edx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048fd0): {next=c.rip+4; // shr r8d, 0x10
m.shift(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x10)},1);
c.rip=next;return true;}
case UINT64_C(0x140048fd4): {next=c.rip+8; // xor r8d, dword ptr [r9 + rax*4 + 0x3e2500]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,32,0,9,0,4,0,4072704,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048fdc): {next=c.rip+2; // mov eax, edi
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048fde): {next=c.rip+3; // xor r8d, edx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140048fe1): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048fe4): {next=c.rip+10; // movabs rdx, 0x9e3779b97f4a7c15
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140048fee): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048ff1): {next=c.rip+4; // imul rax, rdx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140048ff5): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140048ff8): {next=c.rip+4; // shr rcx, 0x1d
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x140048ffc): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140048fff): {next=c.rip+10; // movabs rax, 0xbf58476d1ce4e5b9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xbf58476d1ce4e5b9)}));
c.rip=next;return true;}
case UINT64_C(0x140049009): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004900d): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049010): {next=c.rip+4; // shr rax, 0x20
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x20)},1);
c.rip=next;return true;}
case UINT64_C(0x140049014): {next=c.rip+2; // xor eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140049016): {next=c.rip+3; // cmp r8d, eax
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140049019): {next=c.rip+6; // jne 0x1400491d7
if(m.condition(1))next=next+UINT64_C(0x1b8);
c.rip=next;return true;}
case UINT64_C(0x14004901f): {next=c.rip+3; // mov eax, r8d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049022): {next=c.rip+10; // movabs r8, 0xbf58476d1ce4e5b9
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xbf58476d1ce4e5b9)}));
c.rip=next;return true;}
case UINT64_C(0x14004902c): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004902f): {next=c.rip+3; // mov ebx, r10d
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049032): {next=c.rip+4; // imul rax, rdx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049036): {next=c.rip+4; // shr r10d, 2
m.shift(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x2)},1);
c.rip=next;return true;}
case UINT64_C(0x14004903a): {next=c.rip+3; // and ebx, 3
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004903d): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049040): {next=c.rip+4; // shr rcx, 0x1d
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x140049044): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049047): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004904b): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004904d): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049050): {next=c.rip+4; // shr rdx, 0x20
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x20)},1);
c.rip=next;return true;}
case UINT64_C(0x140049054): {next=c.rip+3; // xor rdx, rdi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049057): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004905a): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140049064): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049068): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004906b): {next=c.rip+4; // shr rax, 0x1d
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14004906f): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049072): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049076): {next=c.rip+3; // mov r8d, r10d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049079): {next=c.rip+7; // and r10d, 0x3000
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3000)}),32));
c.rip=next;return true;}
case UINT64_C(0x140049080): {next=c.rip+3; // mov rdi, rax
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049083): {next=c.rip+4; // and r8d, 3
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x140049087): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049089): {next=c.rip+4; // shr rdi, 0x20
m.shift(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x20)},1);
c.rip=next;return true;}
case UINT64_C(0x14004908d): {next=c.rip+3; // xor rdi, rax
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049090): {next=c.rip+3; // mov eax, r11d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049093): {next=c.rip+5; // and eax, 0xc000
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xc000)}),32));
c.rip=next;return true;}
case UINT64_C(0x140049098): {next=c.rip+3; // or eax, r10d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004909b): {next=c.rip+3; // shr eax, 0xc
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0xc)},1);
c.rip=next;return true;}
case UINT64_C(0x14004909e): {next=c.rip+3; // cmp eax, 0xa
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x1400490a1): {next=c.rip+6; // ja 0x1400491ed
if(m.condition(5))next=next+UINT64_C(0x146);
c.rip=next;return true;}
case UINT64_C(0x1400490a7): {next=c.rip+8; // mov eax, dword ptr [r9 + rax*4 + 0x491f8]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,9,0,4,0,299512,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400490af): {next=c.rip+3; // add rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400490b2): {next=c.rip+2; // jmp rax
next=m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400490b4): {next=c.rip+5; // mov qword ptr [rbp + rbx*8 - 0x38], r14
m.put(Operand{2,0,64,0,5,3,8,0,-56,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400490b9): {next=c.rip+5; // jmp 0x14004917b
next=next+UINT64_C(0xbd);
c.rip=next;return true;}
case UINT64_C(0x1400490be): {next=c.rip+5; // mov qword ptr [rbp + rbx*8 - 0x38], r15
m.put(Operand{2,0,64,0,5,3,8,0,-56,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400490c3): {next=c.rip+5; // jmp 0x14004917b
next=next+UINT64_C(0xb3);
c.rip=next;return true;}
case UINT64_C(0x1400490c8): {next=c.rip+5; // mov rax, qword ptr [rbp + r8*8 - 0x38]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,8,8,0,-56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400490cd): {next=c.rip+5; // mov qword ptr [rbp + rbx*8 - 0x38], rax
m.put(Operand{2,0,64,0,5,3,8,0,-56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400490d2): {next=c.rip+5; // jmp 0x14004917b
next=next+UINT64_C(0xa4);
c.rip=next;return true;}
case UINT64_C(0x1400490d7): {next=c.rip+5; // mov rcx, qword ptr [rbp + r8*8 - 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,8,8,0,-56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400490dc): {next=c.rip+4; // lea rdx, [rbp - 0x38]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400490e0): {next=c.rip+4; // add qword ptr [rdx + rbx*8], rcx
m.put(Operand{2,0,64,0,2,3,8,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,2,3,8,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400490e4): {next=c.rip+4; // lea rdx, [rdx + rbx*8]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,3,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400490e8): {next=c.rip+5; // jmp 0x14004917b
next=next+UINT64_C(0x8e);
c.rip=next;return true;}
case UINT64_C(0x1400490ed): {next=c.rip+5; // mov rcx, qword ptr [rbp + r8*8 - 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,8,8,0,-56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400490f2): {next=c.rip+4; // lea rdx, [rbp - 0x38]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400490f6): {next=c.rip+4; // sub qword ptr [rdx + rbx*8], rcx
m.put(Operand{2,0,64,0,2,3,8,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,2,3,8,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400490fa): {next=c.rip+4; // lea rdx, [rdx + rbx*8]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,3,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400490fe): {next=c.rip+2; // jmp 0x14004917b
next=next+UINT64_C(0x7b);
c.rip=next;return true;}
case UINT64_C(0x140049100): {next=c.rip+5; // mov rcx, qword ptr [rbp + r8*8 - 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,8,8,0,-56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049105): {next=c.rip+4; // lea rdx, [rbp - 0x38]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049109): {next=c.rip+4; // xor qword ptr [rdx + rbx*8], rcx
m.put(Operand{2,0,64,0,2,3,8,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,2,3,8,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004910d): {next=c.rip+4; // lea rdx, [rdx + rbx*8]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,3,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049111): {next=c.rip+2; // jmp 0x14004917b
next=next+UINT64_C(0x68);
c.rip=next;return true;}
case UINT64_C(0x140049113): {next=c.rip+5; // mov rcx, qword ptr [rbp + r8*8 - 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,8,8,0,-56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049118): {next=c.rip+4; // lea rdx, [rbp - 0x38]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004911c): {next=c.rip+4; // and qword ptr [rdx + rbx*8], rcx
m.put(Operand{2,0,64,0,2,3,8,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,2,3,8,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049120): {next=c.rip+4; // lea rdx, [rdx + rbx*8]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,3,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049124): {next=c.rip+2; // jmp 0x14004917b
next=next+UINT64_C(0x55);
c.rip=next;return true;}
case UINT64_C(0x140049126): {next=c.rip+5; // mov rcx, qword ptr [rbp + r8*8 - 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,8,8,0,-56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004912b): {next=c.rip+4; // lea rdx, [rbp - 0x38]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004912f): {next=c.rip+4; // or qword ptr [rdx + rbx*8], rcx
m.put(Operand{2,0,64,0,2,3,8,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,2,3,8,0,0,UINT64_C(0x0)})|m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049133): {next=c.rip+4; // lea rdx, [rdx + rbx*8]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,3,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049137): {next=c.rip+2; // jmp 0x14004917b
next=next+UINT64_C(0x42);
c.rip=next;return true;}
case UINT64_C(0x140049139): {next=c.rip+4; // lea rcx, [rbp - 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004913d): {next=c.rip+4; // not qword ptr [rcx + rbx*8]
m.put(Operand{2,0,64,0,1,3,8,0,0,UINT64_C(0x0)},~m.get(Operand{2,0,64,0,1,3,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049141): {next=c.rip+4; // lea rcx, [rcx + rbx*8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,1,3,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049145): {next=c.rip+2; // jmp 0x14004917b
next=next+UINT64_C(0x34);
c.rip=next;return true;}
case UINT64_C(0x140049147): {next=c.rip+5; // shl qword ptr [rbp + rbx*8 - 0x38], 1
m.shift(Operand{2,0,64,0,5,3,8,0,-56,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)},0);
c.rip=next;return true;}
case UINT64_C(0x14004914c): {next=c.rip+2; // jmp 0x14004917b
next=next+UINT64_C(0x2d);
c.rip=next;return true;}
case UINT64_C(0x14004914e): {next=c.rip+4; // cmp r13d, 4
m.arithmetic(m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140049152): {next=c.rip+2; // jge 0x140049173
if(m.condition(9))next=next+UINT64_C(0x1f);
c.rip=next;return true;}
case UINT64_C(0x140049154): {next=c.rip+4; // shr r11d, 0x10
m.shift(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x10)},1);
c.rip=next;return true;}
case UINT64_C(0x140049158): {next=c.rip+4; // lea ecx, [r13 + 1]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,13,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004915c): {next=c.rip+4; // and r11d, 0xf
m.put(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xf)}),32));
c.rip=next;return true;}
case UINT64_C(0x140049160): {next=c.rip+3; // mov r9, r15
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049163): {next=c.rip+3; // mov edx, r11d
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049166): {next=c.rip+3; // mov r8, r14
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049169): {next=c.rip+5; // call 0x140048e10
{uint64_t target=next+UINT64_C(0xfffffffffffffca2);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004916e): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049171): {next=c.rip+2; // jmp 0x140049176
next=next+UINT64_C(0x3);
c.rip=next;return true;}
case UINT64_C(0x140049173): {next=c.rip+3; // mov rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049176): {next=c.rip+5; // mov qword ptr [rbp + rbx*8 - 0x38], rcx
m.put(Operand{2,0,64,0,5,3,8,0,-56,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004917b): {next=c.rip+3; // inc r12d
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004917e): {next=c.rip+4; // cmp r12d, dword ptr [rbp - 0x40]
m.arithmetic(m.get(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,5,-1,1,0,-64,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140049182): {next=c.rip+2; // jae 0x1400491a5
if(m.condition(3))next=next+UINT64_C(0x21);
c.rip=next;return true;}
case UINT64_C(0x140049184): {next=c.rip+4; // mov r15, qword ptr [rbp - 0x30]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,-48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049188): {next=c.rip+7; // lea r11, [rip - 0x4918f]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-299407,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004918f): {next=c.rip+4; // mov r14, qword ptr [rbp - 0x38]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,-56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049193): {next=c.rip+10; // movabs r8, 0x9e3779b97f4a7c15
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004919d): {next=c.rip+3; // mov ecx, dword ptr [rbp - 0x3c]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,5,-1,1,0,-60,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400491a0): {next=c.rip+5; // jmp 0x140048eac
next=next+UINT64_C(0xfffffffffffffd07);
c.rip=next;return true;}
case UINT64_C(0x1400491a5): {next=c.rip+4; // mov rsi, qword ptr [rbp - 0x20]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,-32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400491a9): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x58]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400491ae): {next=c.rip+3; // mov rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400491b1): {next=c.rip+8; // mov rbx, qword ptr [rsp + 0xa0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,160,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400491b9): {next=c.rip+5; // mov r12, qword ptr [rsp + 0x50]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400491be): {next=c.rip+4; // mov rcx, qword ptr [rbp - 0x18]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,-24,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400491c2): {next=c.rip+3; // xor rcx, rsp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400491c5): {next=c.rip+5; // call 0x1403a3dc0
{uint64_t target=next+UINT64_C(0x35abf6);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400491ca): {next=c.rip+4; // add rsp, 0x60
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x60)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400491ce): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400491d0): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400491d2): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400491d4): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400491d5): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400491d6): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x1400491d7): {next=c.rip+5; // mov ecx, 0x4e565345
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4e565345)}));
c.rip=next;return true;}
case UINT64_C(0x1400491dc): {next=c.rip+5; // call 0x140049890
{uint64_t target=next+UINT64_C(0x6af);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400491e1): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x1400491e2): {next=c.rip+5; // mov ecx, 0x4e564e50
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4e564e50)}));
c.rip=next;return true;}
case UINT64_C(0x1400491e7): {next=c.rip+5; // call 0x140049890
{uint64_t target=next+UINT64_C(0x6a4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400491ec): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x1400491ed): {next=c.rip+5; // mov ecx, 0x4e564f50
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4e564f50)}));
c.rip=next;return true;}
case UINT64_C(0x1400491f2): {next=c.rip+5; // call 0x140049890
{uint64_t target=next+UINT64_C(0x699);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400491f7): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x140049230): {next=c.rip+2; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049232): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049234): {next=c.rip+2; // mov ebx, ecx
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049236): {next=c.rip+3; // and eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x140049239): {next=c.rip+3; // mov r10, r8
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004923c): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140049246): {next=c.rip+3; // and ebx, 3
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x140049249): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004924d): {next=c.rip+10; // movabs rcx, 0xc4ceb9fe1a85ec53
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140049257): {next=c.rip+3; // mov r11, rdx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004925a): {next=c.rip+3; // xor rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004925d): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004925f): {next=c.rip+3; // mov r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049262): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049266): {next=c.rip+3; // xor r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049269): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140049273): {next=c.rip+4; // imul r8, rax
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049277): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004927a): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004927e): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049281): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049285): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049288): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004928c): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004928f): {next=c.rip+3; // sub edx, 1
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x140049292): {next=c.rip+2; // je 0x1400492f5
if(m.condition(0))next=next+UINT64_C(0x61);
c.rip=next;return true;}
case UINT64_C(0x140049294): {next=c.rip+3; // cmp edx, 1
m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x140049297): {next=c.rip+7; // lea rdx, [rip + 0x39702a]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,3764266,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004929e): {next=c.rip+2; // je 0x1400492cc
if(m.condition(0))next=next+UINT64_C(0x2c);
c.rip=next;return true;}
case UINT64_C(0x1400492a0): {next=c.rip+3; // sub r10, rcx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400492a3): {next=c.rip+4; // lea r8, [rcx + r11]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,1,11,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400492a7): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400492aa): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400492ad): {next=c.rip+4; // shr rcx, 3
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3)},1);
c.rip=next;return true;}
case UINT64_C(0x1400492b1): {next=c.rip+3; // mov r9, r10
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400492b4): {next=c.rip+4; // shr rax, 2
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x2)},1);
c.rip=next;return true;}
case UINT64_C(0x1400492b8): {next=c.rip+2; // xor ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400492ba): {next=c.rip+3; // and ecx, 1
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400492bd): {next=c.rip+3; // lea eax, [rbx + rcx*4]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,3,1,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400492c0): {next=c.rip+2; // xor ecx, ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400492c2): {next=c.rip+4; // movzx edx, byte ptr [rax + rdx]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400492c6): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400492c7): {next=c.rip+5; // jmp 0x140048e10
next=next+UINT64_C(0xfffffffffffffb44);
c.rip=next;return true;}
case UINT64_C(0x1400492cc): {next=c.rip+3; // mov r9, rcx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400492cf): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400492d2): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400492d5): {next=c.rip+3; // xor r9, r10
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400492d8): {next=c.rip+3; // shr rax, 1
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)},1);
c.rip=next;return true;}
case UINT64_C(0x1400492db): {next=c.rip+3; // mov r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400492de): {next=c.rip+3; // xor rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400492e1): {next=c.rip+2; // xor ecx, ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400492e3): {next=c.rip+4; // shr rax, 2
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x2)},1);
c.rip=next;return true;}
case UINT64_C(0x1400492e7): {next=c.rip+3; // and eax, 1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x1400492ea): {next=c.rip+5; // movzx edx, byte ptr [rdx + rax*4 + 2]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,2,0,4,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400492ef): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x1400492f0): {next=c.rip+5; // jmp 0x140048e10
next=next+UINT64_C(0xfffffffffffffb1b);
c.rip=next;return true;}
case UINT64_C(0x1400492f5): {next=c.rip+4; // lea r8, [rcx + r11]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,1,11,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400492f9): {next=c.rip+4; // lea r9, [rcx + r10]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,1,10,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400492fd): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049300): {next=c.rip+3; // shr rax, 1
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)},1);
c.rip=next;return true;}
case UINT64_C(0x140049303): {next=c.rip+7; // lea rdx, [rip + 0x396fbe]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,3764158,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004930a): {next=c.rip+3; // xor rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004930d): {next=c.rip+2; // xor ecx, ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004930f): {next=c.rip+4; // shr rax, 2
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x2)},1);
c.rip=next;return true;}
case UINT64_C(0x140049313): {next=c.rip+3; // and eax, 1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x140049316): {next=c.rip+5; // movzx edx, byte ptr [rdx + rax*4 + 1]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,2,0,4,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004931b): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004931c): {next=c.rip+5; // jmp 0x140048e10
next=next+UINT64_C(0xfffffffffffffaef);
c.rip=next;return true;}
case UINT64_C(0x140049330): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049335): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rbp
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004933a): {next=c.rip+5; // mov qword ptr [rsp + 0x18], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004933f): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049344): {next=c.rip+7; // movsxd r9, dword ptr [rcx + 0x928]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,1,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004934b): {next=c.rip+10; // movabs rsi, 0xff51afd7ed558ccd
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x140049355): {next=c.rip+7; // mov r10, qword ptr [rcx + 0x700]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,1792,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004935c): {next=c.rip+10; // movabs rbp, 0xc4ceb9fe1a85ec53
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x140049366): {next=c.rip+3; // mov r8, r9
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049369): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140049373): {next=c.rip+4; // imul r8, rax
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049377): {next=c.rip+3; // not r9d
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004937a): {next=c.rip+7; // xor r8, qword ptr [rcx + 0x238]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049381): {next=c.rip+7; // xor r8, qword ptr [rcx + 0x228]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,552,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049388): {next=c.rip+3; // xor r8, r10
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004938b): {next=c.rip+7; // mov dword ptr [rcx + 0x928], r9d
m.put(Operand{2,0,32,0,1,-1,1,0,2344,UINT64_C(0x0)},m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049392): {next=c.rip+7; // xor r8, qword ptr [rcx + 0x1058]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,4184,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049399): {next=c.rip+7; // xor r8, qword ptr [rcx + 0x930]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,2352,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400493a0): {next=c.rip+7; // xor r8, qword ptr [rcx + 0x230]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400493a7): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400493aa): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400493ad): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400493b1): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400493b4): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400493b8): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400493bb): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400493bf): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400493c2): {next=c.rip+4; // imul rdx, rbp
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400493c6): {next=c.rip+3; // mov rdi, rdx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400493c9): {next=c.rip+4; // shr rdi, 0x21
m.shift(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400493cd): {next=c.rip+3; // xor rdi, rdx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400493d0): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400493d3): {next=c.rip+7; // mov qword ptr [rcx + 0x940], rdi
m.put(Operand{2,0,64,0,1,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400493da): {next=c.rip+3; // not rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400493dd): {next=c.rip+7; // mov qword ptr [rcx + 0x1058], rdi
m.put(Operand{2,0,64,0,1,-1,1,0,4184,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400493e4): {next=c.rip+7; // mov qword ptr [rcx + 0x930], rax
m.put(Operand{2,0,64,0,1,-1,1,0,2352,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400493eb): {next=c.rip+3; // xor r10, rdi
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400493ee): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400493f1): {next=c.rip+6; // xor rax, 0x4d454d54
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4d454d54)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400493f7): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400493fa): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400493fe): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049401): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049405): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049408): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004940c): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004940f): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049413): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049416): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004941a): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004941d): {next=c.rip+7; // mov qword ptr [rcx + 0x1060], rax
m.put(Operand{2,0,64,0,1,-1,1,0,4192,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049424): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049427): {next=c.rip+6; // xor rax, 0x44454144
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x44454144)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004942d): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049430): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049434): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049437): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004943b): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004943e): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049442): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049445): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049449): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004944c): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049450): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049453): {next=c.rip+7; // mov qword ptr [rcx + 0x230], rax
m.put(Operand{2,0,64,0,1,-1,1,0,560,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004945a): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004945d): {next=c.rip+7; // xor rax, qword ptr [rcx + 0x4b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,1200,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049464): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049467): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004946b): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004946e): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049472): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049475): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049479): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004947c): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049480): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049483): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049487): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004948a): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004948e): {next=c.rip+7; // mov qword ptr [rcx + 0x4b0], rax
m.put(Operand{2,0,64,0,1,-1,1,0,1200,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049495): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049498): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004949c): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004949f): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400494a3): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400494a6): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400494aa): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400494ad): {next=c.rip+4; // imul rdx, rbp
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400494b1): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400494b4): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400494b8): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400494bb): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400494bf): {next=c.rip+7; // mov qword ptr [rcx + 0x700], rax
m.put(Operand{2,0,64,0,1,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400494c6): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400494c9): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400494cd): {next=c.rip+3; // xor rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400494d0): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400494d4): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400494d7): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400494db): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400494de): {next=c.rip+4; // imul rdx, rbp
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400494e2): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400494e5): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400494e9): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400494ec): {next=c.rip+7; // mov qword ptr [rcx + 0x10d0], rax
m.put(Operand{2,0,64,0,1,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400494f3): {next=c.rip+4; // lea rax, [rdi + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400494f7): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400494fa): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400494fe): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049501): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049505): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049508): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004950c): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004950f): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049513): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049516): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004951a): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004951d): {next=c.rip+7; // mov qword ptr [rcx + 0x10d8], rax
m.put(Operand{2,0,64,0,1,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049524): {next=c.rip+4; // lea rax, [rdi + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049528): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004952b): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004952f): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049532): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049536): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049539): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004953d): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049540): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049544): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049547): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004954b): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004954e): {next=c.rip+7; // mov qword ptr [rcx + 0x10e0], rax
m.put(Operand{2,0,64,0,1,-1,1,0,4320,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049555): {next=c.rip+4; // lea rax, [rdi + 3]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,3,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049559): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004955c): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049560): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049563): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049567): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004956a): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004956e): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049571): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049575): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049578): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004957c): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004957f): {next=c.rip+7; // mov qword ptr [rcx + 0x10e8], rax
m.put(Operand{2,0,64,0,1,-1,1,0,4328,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049586): {next=c.rip+4; // lea rax, [rdi + 4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,4,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004958a): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004958d): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049591): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049594): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049598): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004959b): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004959f): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400495a2): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400495a6): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400495a9): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400495ad): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400495b0): {next=c.rip+7; // mov qword ptr [rcx + 0x10f0], rax
m.put(Operand{2,0,64,0,1,-1,1,0,4336,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400495b7): {next=c.rip+4; // lea rax, [rdi + 5]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,5,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400495bb): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400495be): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400495c2): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400495c5): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400495c9): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400495cc): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400495d0): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400495d3): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400495d7): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400495da): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400495de): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400495e1): {next=c.rip+7; // mov qword ptr [rcx + 0x10f8], rax
m.put(Operand{2,0,64,0,1,-1,1,0,4344,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400495e8): {next=c.rip+4; // lea rax, [rdi + 6]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,6,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400495ec): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400495ef): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400495f3): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400495f6): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400495fa): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400495fd): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049601): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049604): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049608): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004960b): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004960f): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049612): {next=c.rip+7; // mov qword ptr [rcx + 0x1100], rax
m.put(Operand{2,0,64,0,1,-1,1,0,4352,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049619): {next=c.rip+4; // lea rax, [rdi + 7]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,7,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004961d): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049620): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049624): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049627): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004962b): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004962e): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049632): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049635): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049639): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004963c): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049640): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049643): {next=c.rip+7; // mov qword ptr [rcx + 0x1108], rax
m.put(Operand{2,0,64,0,1,-1,1,0,4360,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004964a): {next=c.rip+4; // lea rax, [rdi + 8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004964e): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049651): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049655): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049658): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004965c): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004965f): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049663): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049666): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004966a): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004966d): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049671): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049674): {next=c.rip+7; // mov qword ptr [rcx + 0x1110], rax
m.put(Operand{2,0,64,0,1,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004967b): {next=c.rip+4; // lea rax, [rdi + 9]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,9,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004967f): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049682): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049686): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049689): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004968d): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049690): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049694): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049697): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004969b): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004969e): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400496a2): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400496a5): {next=c.rip+7; // mov qword ptr [rcx + 0x1118], rax
m.put(Operand{2,0,64,0,1,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400496ac): {next=c.rip+4; // lea rax, [rdi + 0xa]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,10,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400496b0): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400496b3): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400496b7): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400496ba): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400496be): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400496c1): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400496c5): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400496c8): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400496cc): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400496cf): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400496d3): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400496d6): {next=c.rip+7; // mov qword ptr [rcx + 0x1120], rax
m.put(Operand{2,0,64,0,1,-1,1,0,4384,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400496dd): {next=c.rip+4; // lea rax, [rdi + 0xb]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,11,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400496e1): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400496e4): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400496e8): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400496eb): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400496ef): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400496f2): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400496f6): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400496f9): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400496fd): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049700): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049704): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049707): {next=c.rip+7; // mov qword ptr [rcx + 0x1128], rax
m.put(Operand{2,0,64,0,1,-1,1,0,4392,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004970e): {next=c.rip+7; // lea r9, [rdi + 0x1000]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,4096,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049715): {next=c.rip+4; // lea rax, [rdi + 0xc]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,12,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049719): {next=c.rip+5; // mov ebx, 0x200
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x200)}));
c.rip=next;return true;}
case UINT64_C(0x14004971e): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049721): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049725): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049728): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004972c): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004972f): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049733): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049736): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004973a): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004973d): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049741): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049744): {next=c.rip+7; // mov qword ptr [rcx + 0x1130], rax
m.put(Operand{2,0,64,0,1,-1,1,0,4400,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004974b): {next=c.rip+4; // lea rax, [rdi + 0xd]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,13,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004974f): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049752): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049756): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049759): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004975d): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049760): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049764): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049767): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004976b): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004976e): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049772): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049775): {next=c.rip+3; // xor r10d, r10d
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x140049778): {next=c.rip+7; // mov qword ptr [rcx + 0x1138], rax
m.put(Operand{2,0,64,0,1,-1,1,0,4408,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004977f): {next=c.rip+3; // mov r11d, r10d
m.put(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049782): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049785): {next=c.rip+4; // lea r11, [r11 + 8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049789): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004978d): {next=c.rip+3; // xor rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049790): {next=c.rip+3; // inc r9
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140049793): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049797): {next=c.rip+3; // mov r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004979a): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004979e): {next=c.rip+3; // xor r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400497a1): {next=c.rip+7; // mov rax, qword ptr [rcx + 0x288]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,648,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400497a8): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400497ac): {next=c.rip+3; // mov rdx, r8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400497af): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400497b3): {next=c.rip+3; // xor rdx, r8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400497b6): {next=c.rip+5; // mov qword ptr [r11 + rax - 8], rdx
m.put(Operand{2,0,64,0,11,0,1,0,-8,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400497bb): {next=c.rip+4; // sub rbx, 1
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x1400497bf): {next=c.rip+2; // jne 0x140049782
if(m.condition(1))next=next+UINT64_C(0xffffffffffffffc1);
c.rip=next;return true;}
case UINT64_C(0x1400497c1): {next=c.rip+7; // lea r9, [rdi + 0x2000]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,8192,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400497c8): {next=c.rip+6; // mov r11d, 0x400
m.put(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x400)}));
c.rip=next;return true;}
case UINT64_C(0x1400497ce): {next=c.rip+2; // nop 

c.rip=next;return true;}
case UINT64_C(0x1400497d0): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400497d3): {next=c.rip+4; // lea r10, [r10 + 8]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,10,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400497d7): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400497db): {next=c.rip+3; // xor rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400497de): {next=c.rip+3; // inc r9
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400497e1): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400497e5): {next=c.rip+3; // mov r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400497e8): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x1400497ec): {next=c.rip+3; // xor r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x1400497ef): {next=c.rip+7; // mov rax, qword ptr [rcx + 0x290]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,656,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400497f6): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400497fa): {next=c.rip+3; // mov rdx, r8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400497fd): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049801): {next=c.rip+3; // xor rdx, r8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049804): {next=c.rip+5; // mov qword ptr [r10 + rax - 8], rdx
m.put(Operand{2,0,64,0,10,0,1,0,-8,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049809): {next=c.rip+4; // sub r11, 1
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004980d): {next=c.rip+2; // jne 0x1400497d0
if(m.condition(1))next=next+UINT64_C(0xffffffffffffffc1);
c.rip=next;return true;}
case UINT64_C(0x14004980f): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049812): {next=c.rip+5; // and eax, 0xff8
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xff8)}),32));
c.rip=next;return true;}
case UINT64_C(0x140049817): {next=c.rip+3; // mov qword ptr [rax], rdi
m.put(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004981a): {next=c.rip+6; // nop word ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x140049820): {next=c.rip+7; // mov rax, qword ptr [rcx + 0x230]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,560,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049827): {next=c.rip+6; // not dword ptr [rcx + 0x928]
m.put(Operand{2,0,32,0,1,-1,1,0,2344,UINT64_C(0x0)},~m.get(Operand{2,0,32,0,1,-1,1,0,2344,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004982d): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140049830): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049833): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049837): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004983a): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004983e): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049841): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049845): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049848): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004984c): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004984f): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x140049853): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049856): {next=c.rip+7; // mov qword ptr [rcx + 0x230], rax
m.put(Operand{2,0,64,0,1,-1,1,0,560,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004985d): {next=c.rip+2; // jmp 0x140049820
next=next+UINT64_C(0xffffffffffffffc1);
c.rip=next;return true;}
case UINT64_C(0x140049860): {next=c.rip+2; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049862): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140049866): {next=c.rip+7; // lea rbx, [rcx + 0x968]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,1,-1,1,0,2408,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004986d): {next=c.rip+4; // mov rcx, qword ptr [rbx + 0x38]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049871): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x140049874): {next=c.rip+2; // je 0x14004988a
if(m.condition(0))next=next+UINT64_C(0x14);
c.rip=next;return true;}
case UINT64_C(0x140049876): {next=c.rip+3; // mov rax, qword ptr [rcx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049879): {next=c.rip+3; // cmp rcx, rbx
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004987c): {next=c.rip+3; // setne dl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.condition(1)));
c.rip=next;return true;}
case UINT64_C(0x14004987f): {next=c.rip+3; // call qword ptr [rax + 0x20]
{uint64_t target=m.get(Operand{2,0,64,0,0,-1,1,0,32,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x140049882): {next=c.rip+8; // mov qword ptr [rbx + 0x38], 0
m.put(Operand{2,0,64,0,3,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004988a): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004988e): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004988f): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140049890): {next=c.rip+4; // sub rsp, 0x28
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x28)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140049894): {next=c.rip+9; // mov rax, qword ptr gs:[0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,-1,-1,1,1,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004989d): {next=c.rip+3; // mov r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400498a0): {next=c.rip+5; // mov ecx, 0x50
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x50)}));
c.rip=next;return true;}
case UINT64_C(0x1400498a5): {next=c.rip+3; // mov rdx, qword ptr [rax]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400498a8): {next=c.rip+4; // mov rax, qword ptr [rcx + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400498ac): {next=c.rip+7; // lea rcx, [rip + 0x3f012d]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,4129069,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400498b3): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x1400498b6): {next=c.rip+3; // mov rdx, r8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400498b9): {next=c.rip+4; // cmovne rcx, rax
if(m.condition(1))m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400498bd): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xfffffffffffffa6e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x1400498c2): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x1400498d0): {next=c.rip+3; // mov r11, rcx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400498d3): {next=c.rip+3; // movsxd r8, edx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400498d6): {next=c.rip+3; // lea eax, [rdx + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400498d9): {next=c.rip+3; // movsxd r10, eax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400498dc): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400498df): {next=c.rip+8; // imul rax, qword ptr [rcx + 0x10b8]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,1,-1,1,0,4280,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400498e7): {next=c.rip+8; // mov r9, qword ptr [rcx + r8*8 + 0x10d0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,8,8,0,4304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400498ef): {next=c.rip+9; // movzx edx, byte ptr [r8 + rcx + 0x1140]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,8,1,1,0,4416,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400498f8): {next=c.rip+8; // imul rdx, qword ptr [rcx + 0x10c0]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,1,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049900): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049903): {next=c.rip+7; // xor rdx, qword ptr [rcx + 0x10b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004990a): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004990d): {next=c.rip+3; // xor rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049910): {next=c.rip+3; // sub r9, rdx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140049913): {next=c.rip+7; // cmp byte ptr [rcx + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,1,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004991a): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140049924): {next=c.rip+4; // cmove r9, rax
if(m.condition(0))m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049928): {next=c.rip+7; // mov rax, qword ptr [r11 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,11,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004992f): {next=c.rip+7; // inc qword ptr [r11 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,11,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,11,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140049936): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004993a): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140049944): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140049947): {next=c.rip+7; // mov qword ptr [r11 + 0x1180], rax
m.put(Operand{2,0,64,0,11,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004994e): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140049952): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049955): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049958): {next=c.rip+8; // mov byte ptr [r8 + r11 + 0x1140], cl
m.put(Operand{2,0,8,0,8,11,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049960): {next=c.rip+8; // imul rcx, qword ptr [r11 + 0x10c0]
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,11,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049968): {next=c.rip+8; // imul r10, qword ptr [r11 + 0x10b8]
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,11,-1,1,0,4280,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049970): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049973): {next=c.rip+7; // xor rcx, qword ptr [r11 + 0x10b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,11,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004997a): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004997d): {next=c.rip+3; // add rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140049980): {next=c.rip+3; // xor rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049983): {next=c.rip+8; // cmp byte ptr [r11 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,11,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004998b): {next=c.rip+4; // cmove rcx, rdx
if(m.condition(0))m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004998f): {next=c.rip+8; // mov qword ptr [r11 + r8*8 + 0x10d0], rcx
m.put(Operand{2,0,64,0,11,8,8,0,4304,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049997): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x1400499a0): {next=c.rip+3; // mov r10, rcx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400499a3): {next=c.rip+3; // mov r9, r8
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400499a6): {next=c.rip+3; // movsxd r8, edx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400499a9): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x1400499b3): {next=c.rip+7; // mov rax, qword ptr [r10 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,10,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400499ba): {next=c.rip+7; // inc qword ptr [r10 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,10,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,10,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x1400499c1): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400499c5): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x1400499cf): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x1400499d2): {next=c.rip+7; // mov qword ptr [r10 + 0x1180], rax
m.put(Operand{2,0,64,0,10,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400499d9): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x1400499dd): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400499e0): {next=c.rip+3; // lea eax, [rdx + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400499e3): {next=c.rip+8; // mov byte ptr [r8 + r10 + 0x1140], cl
m.put(Operand{2,0,8,0,8,10,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x1400499eb): {next=c.rip+8; // imul rcx, qword ptr [r10 + 0x10c0]
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,10,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400499f3): {next=c.rip+3; // movsxd rdx, eax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x1400499f6): {next=c.rip+8; // imul rdx, qword ptr [r10 + 0x10b8]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,10,-1,1,0,4280,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x1400499fe): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049a01): {next=c.rip+7; // xor rdx, qword ptr [r10 + 0x10b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,10,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049a08): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049a0b): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049a0e): {next=c.rip+8; // cmp byte ptr [r10 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,10,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140049a16): {next=c.rip+4; // lea rax, [rdx + r9]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,9,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049a1a): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049a1e): {next=c.rip+8; // mov qword ptr [r10 + r8*8 + 0x10d0], rax
m.put(Operand{2,0,64,0,10,8,8,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049a26): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140049a30): {next=c.rip+5; // mov qword ptr [rsp + 8], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049a35): {next=c.rip+7; // mov r11, qword ptr [rcx + 0x10d0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049a3c): {next=c.rip+3; // mov rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049a3f): {next=c.rip+7; // movzx edx, byte ptr [rcx + 0x1140]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,4416,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049a46): {next=c.rip+8; // movzx r10d, byte ptr [rcx + 0x10c8]
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049a4e): {next=c.rip+7; // mov r8, qword ptr [rcx + 0x10c0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049a55): {next=c.rip+7; // mov r9, qword ptr [rcx + 0x10b0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049a5c): {next=c.rip+4; // imul rdx, r8
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049a60): {next=c.rip+3; // xor rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049a63): {next=c.rip+7; // xor rdx, qword ptr [rcx + 0x10b8]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049a6a): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140049a74): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049a77): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049a7a): {next=c.rip+3; // sub r11, rdx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140049a7d): {next=c.rip+3; // test r10b, r10b
m.logic(m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140049a80): {next=c.rip+4; // cmove r11, rax
if(m.condition(0))m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049a84): {next=c.rip+7; // mov rax, qword ptr [rdi + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049a8b): {next=c.rip+7; // inc qword ptr [rdi + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,7,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,7,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140049a92): {next=c.rip+3; // mov rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049a95): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049a99): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140049aa3): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140049aa6): {next=c.rip+7; // mov qword ptr [rdi + 0x1180], rax
m.put(Operand{2,0,64,0,7,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049aad): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140049ab1): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049ab4): {next=c.rip+3; // mov eax, r11d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049ab7): {next=c.rip+6; // mov byte ptr [rdi + 0x1140], cl
m.put(Operand{2,0,8,0,7,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049abd): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049ac1): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049ac4): {next=c.rip+7; // xor rcx, qword ptr [rdi + 0x10b8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,7,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049acb): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049ace): {next=c.rip+3; // add rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140049ad1): {next=c.rip+3; // test r10b, r10b
m.logic(m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140049ad4): {next=c.rip+4; // cmove rcx, rdx
if(m.condition(0))m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049ad8): {next=c.rip+7; // mov qword ptr [rdi + 0x10d0], rcx
m.put(Operand{2,0,64,0,7,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049adf): {next=c.rip+5; // mov rdi, qword ptr [rsp + 8]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049ae4): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140049af0): {next=c.rip+3; // mov r9, rcx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049af3): {next=c.rip+3; // mov r8d, edx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049af6): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140049b00): {next=c.rip+7; // mov rax, qword ptr [r9 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,9,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049b07): {next=c.rip+7; // inc qword ptr [r9 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,9,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,9,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140049b0e): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049b12): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140049b1c): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140049b1f): {next=c.rip+7; // mov qword ptr [r9 + 0x1180], rax
m.put(Operand{2,0,64,0,9,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049b26): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140049b2a): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049b2d): {next=c.rip+7; // mov byte ptr [r9 + 0x1140], dl
m.put(Operand{2,0,8,0,9,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049b34): {next=c.rip+8; // imul rdx, qword ptr [r9 + 0x10c0]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,9,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049b3c): {next=c.rip+7; // xor rdx, qword ptr [r9 + 0x10b8]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,9,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049b43): {next=c.rip+7; // xor rdx, qword ptr [r9 + 0x10b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,9,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049b4a): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049b4d): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049b50): {next=c.rip+8; // cmp byte ptr [r9 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,9,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140049b58): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049b5c): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049b60): {next=c.rip+7; // mov qword ptr [r9 + 0x10d0], rax
m.put(Operand{2,0,64,0,9,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049b67): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140049b70): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049b75): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049b7a): {next=c.rip+7; // mov r11, qword ptr [rcx + 0x10d8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4312,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049b81): {next=c.rip+3; // mov rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049b84): {next=c.rip+7; // movzx edx, byte ptr [rcx + 0x1141]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,4417,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049b8b): {next=c.rip+8; // movzx r9d, byte ptr [rcx + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049b93): {next=c.rip+7; // mov r10, qword ptr [rcx + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049b9a): {next=c.rip+7; // mov rbx, qword ptr [rcx + 0x10b8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049ba1): {next=c.rip+7; // mov r8, qword ptr [rcx + 0x10b0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049ba8): {next=c.rip+3; // add rbx, rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140049bab): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049baf): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140049bb9): {next=c.rip+3; // xor rdx, r8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049bbc): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049bbf): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049bc2): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049bc5): {next=c.rip+3; // sub r11, rdx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140049bc8): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140049bcb): {next=c.rip+4; // cmove r11, rax
if(m.condition(0))m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049bcf): {next=c.rip+7; // mov rax, qword ptr [rdi + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049bd6): {next=c.rip+7; // inc qword ptr [rdi + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,7,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,7,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140049bdd): {next=c.rip+3; // mov rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049be0): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049be4): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140049bee): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140049bf1): {next=c.rip+7; // mov qword ptr [rdi + 0x1180], rax
m.put(Operand{2,0,64,0,7,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049bf8): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140049bfc): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049bff): {next=c.rip+3; // mov eax, r11d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049c02): {next=c.rip+6; // mov byte ptr [rdi + 0x1141], cl
m.put(Operand{2,0,8,0,7,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049c08): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049c0c): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049c0f): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049c12): {next=c.rip+5; // mov rbx, qword ptr [rsp + 8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049c17): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049c1a): {next=c.rip+3; // add rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140049c1d): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140049c20): {next=c.rip+4; // cmove rcx, rdx
if(m.condition(0))m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049c24): {next=c.rip+7; // mov qword ptr [rdi + 0x10d8], rcx
m.put(Operand{2,0,64,0,7,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049c2b): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x10]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049c30): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140049c40): {next=c.rip+3; // mov r9, rcx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049c43): {next=c.rip+3; // mov r8d, edx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049c46): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140049c50): {next=c.rip+7; // mov rax, qword ptr [r9 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,9,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049c57): {next=c.rip+7; // inc qword ptr [r9 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,9,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,9,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140049c5e): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049c62): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140049c6c): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140049c6f): {next=c.rip+7; // mov qword ptr [r9 + 0x1180], rax
m.put(Operand{2,0,64,0,9,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049c76): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140049c7a): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049c7d): {next=c.rip+7; // mov byte ptr [r9 + 0x1141], dl
m.put(Operand{2,0,8,0,9,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049c84): {next=c.rip+8; // imul rdx, qword ptr [r9 + 0x10c0]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,9,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049c8c): {next=c.rip+7; // mov rax, qword ptr [r9 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,9,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049c93): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140049c96): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049c99): {next=c.rip+7; // xor rdx, qword ptr [r9 + 0x10b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,9,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049ca0): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049ca3): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049ca6): {next=c.rip+8; // cmp byte ptr [r9 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,9,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140049cae): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049cb2): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049cb6): {next=c.rip+7; // mov qword ptr [r9 + 0x10d8], rax
m.put(Operand{2,0,64,0,9,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049cbd): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140049cc0): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049cc5): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049cca): {next=c.rip+7; // mov r11, qword ptr [rcx + 0x10e0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4320,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049cd1): {next=c.rip+3; // mov rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049cd4): {next=c.rip+7; // movzx edx, byte ptr [rcx + 0x1142]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,4418,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049cdb): {next=c.rip+7; // mov rax, qword ptr [rcx + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049ce2): {next=c.rip+8; // movzx r9d, byte ptr [rcx + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049cea): {next=c.rip+7; // mov r10, qword ptr [rcx + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049cf1): {next=c.rip+7; // mov r8, qword ptr [rcx + 0x10b0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049cf8): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140049d02): {next=c.rip+4; // lea rbx, [rax + rax*2]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,2,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049d06): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049d0a): {next=c.rip+3; // xor rdx, r8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049d0d): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049d10): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049d13): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049d16): {next=c.rip+3; // sub r11, rdx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140049d19): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140049d1c): {next=c.rip+4; // cmove r11, rax
if(m.condition(0))m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049d20): {next=c.rip+7; // mov rax, qword ptr [rdi + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049d27): {next=c.rip+7; // inc qword ptr [rdi + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,7,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,7,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140049d2e): {next=c.rip+3; // mov rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049d31): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049d35): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140049d3f): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140049d42): {next=c.rip+7; // mov qword ptr [rdi + 0x1180], rax
m.put(Operand{2,0,64,0,7,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049d49): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140049d4d): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049d50): {next=c.rip+3; // mov eax, r11d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049d53): {next=c.rip+6; // mov byte ptr [rdi + 0x1142], cl
m.put(Operand{2,0,8,0,7,-1,1,0,4418,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049d59): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049d5d): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049d60): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049d63): {next=c.rip+5; // mov rbx, qword ptr [rsp + 8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049d68): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049d6b): {next=c.rip+3; // add rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140049d6e): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140049d71): {next=c.rip+4; // cmove rcx, rdx
if(m.condition(0))m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049d75): {next=c.rip+7; // mov qword ptr [rdi + 0x10e0], rcx
m.put(Operand{2,0,64,0,7,-1,1,0,4320,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049d7c): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x10]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049d81): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140049d90): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049d95): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049d9a): {next=c.rip+7; // mov r10, qword ptr [rcx + 0x10e8]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4328,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049da1): {next=c.rip+3; // mov rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049da4): {next=c.rip+7; // movzx edx, byte ptr [rcx + 0x1143]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,4419,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049dab): {next=c.rip+8; // movzx r9d, byte ptr [rcx + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049db3): {next=c.rip+7; // mov r11, qword ptr [rcx + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049dba): {next=c.rip+7; // mov rbx, qword ptr [rcx + 0x10b8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049dc1): {next=c.rip+7; // mov r8, qword ptr [rcx + 0x10b0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049dc8): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140049dd2): {next=c.rip+4; // imul rdx, r11
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049dd6): {next=c.rip+4; // shl rbx, 2
m.shift(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x2)},0);
c.rip=next;return true;}
case UINT64_C(0x140049dda): {next=c.rip+3; // xor rdx, r8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049ddd): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049de0): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049de3): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049de6): {next=c.rip+3; // sub r10, rdx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140049de9): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140049dec): {next=c.rip+4; // cmove r10, rax
if(m.condition(0))m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049df0): {next=c.rip+7; // mov rax, qword ptr [rdi + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049df7): {next=c.rip+7; // inc qword ptr [rdi + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,7,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,7,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140049dfe): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049e02): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140049e0c): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140049e0f): {next=c.rip+7; // mov qword ptr [rdi + 0x1180], rax
m.put(Operand{2,0,64,0,7,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049e16): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140049e1a): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049e1d): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049e20): {next=c.rip+6; // mov byte ptr [rdi + 0x1143], cl
m.put(Operand{2,0,8,0,7,-1,1,0,4419,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049e26): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049e2a): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049e2d): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049e30): {next=c.rip+5; // mov rbx, qword ptr [rsp + 8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049e35): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049e38): {next=c.rip+3; // add rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140049e3b): {next=c.rip+3; // xor rdx, r10
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049e3e): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140049e41): {next=c.rip+4; // cmove rcx, rdx
if(m.condition(0))m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049e45): {next=c.rip+7; // mov qword ptr [rdi + 0x10e8], rcx
m.put(Operand{2,0,64,0,7,-1,1,0,4328,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049e4c): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x10]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049e51): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140049e60): {next=c.rip+3; // mov r9, rcx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049e63): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049e66): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140049e70): {next=c.rip+7; // mov rax, qword ptr [r9 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,9,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049e77): {next=c.rip+7; // inc qword ptr [r9 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,9,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,9,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140049e7e): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049e82): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140049e8c): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140049e8f): {next=c.rip+7; // mov qword ptr [r9 + 0x1180], rax
m.put(Operand{2,0,64,0,9,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049e96): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140049e9a): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049e9d): {next=c.rip+7; // mov byte ptr [r9 + 0x1143], dl
m.put(Operand{2,0,8,0,9,-1,1,0,4419,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049ea4): {next=c.rip+8; // imul rdx, qword ptr [r9 + 0x10c0]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,9,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049eac): {next=c.rip+7; // mov rax, qword ptr [r9 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,9,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049eb3): {next=c.rip+4; // shl rax, 2
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x2)},0);
c.rip=next;return true;}
case UINT64_C(0x140049eb7): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049eba): {next=c.rip+7; // xor rdx, qword ptr [r9 + 0x10b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,9,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049ec1): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049ec4): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049ec7): {next=c.rip+8; // cmp byte ptr [r9 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,9,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x140049ecf): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049ed3): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049ed7): {next=c.rip+7; // mov qword ptr [r9 + 0x10e8], rax
m.put(Operand{2,0,64,0,9,-1,1,0,4328,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049ede): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140049ee0): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049ee5): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049eea): {next=c.rip+7; // mov r11, qword ptr [rcx + 0x1120]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4384,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049ef1): {next=c.rip+3; // mov rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049ef4): {next=c.rip+8; // imul rbx, qword ptr [rcx + 0x10b8], 0xb
m.imul(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,1,-1,1,0,4280,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb)});
c.rip=next;return true;}
case UINT64_C(0x140049efc): {next=c.rip+7; // movzx edx, byte ptr [rcx + 0x114a]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,4426,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049f03): {next=c.rip+8; // movzx r10d, byte ptr [rcx + 0x10c8]
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049f0b): {next=c.rip+7; // mov r8, qword ptr [rcx + 0x10c0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049f12): {next=c.rip+7; // mov r9, qword ptr [rcx + 0x10b0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049f19): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140049f23): {next=c.rip+4; // imul rdx, r8
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049f27): {next=c.rip+3; // xor rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049f2a): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049f2d): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049f30): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049f33): {next=c.rip+3; // sub r11, rdx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x140049f36): {next=c.rip+3; // test r10b, r10b
m.logic(m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140049f39): {next=c.rip+4; // cmove r11, rax
if(m.condition(0))m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049f3d): {next=c.rip+7; // mov rax, qword ptr [rdi + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049f44): {next=c.rip+7; // inc qword ptr [rdi + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,7,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,7,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140049f4b): {next=c.rip+3; // mov rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049f4e): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049f52): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140049f5c): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140049f5f): {next=c.rip+7; // mov qword ptr [rdi + 0x1180], rax
m.put(Operand{2,0,64,0,7,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049f66): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140049f6a): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049f6d): {next=c.rip+3; // mov eax, r11d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049f70): {next=c.rip+6; // mov byte ptr [rdi + 0x114a], cl
m.put(Operand{2,0,8,0,7,-1,1,0,4426,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049f76): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049f7a): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049f7d): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049f80): {next=c.rip+5; // mov rbx, qword ptr [rsp + 8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049f85): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049f88): {next=c.rip+3; // add rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140049f8b): {next=c.rip+3; // test r10b, r10b
m.logic(m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x140049f8e): {next=c.rip+4; // cmove rcx, rdx
if(m.condition(0))m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049f92): {next=c.rip+7; // mov qword ptr [rdi + 0x1120], rcx
m.put(Operand{2,0,64,0,7,-1,1,0,4384,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049f99): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x10]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049f9e): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x140049fa0): {next=c.rip+3; // mov r9, rcx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049fa3): {next=c.rip+3; // mov r8d, edx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049fa6): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x140049fb0): {next=c.rip+7; // mov rax, qword ptr [r9 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,9,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049fb7): {next=c.rip+7; // inc qword ptr [r9 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,9,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,9,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x140049fbe): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049fc2): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x140049fcc): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x140049fcf): {next=c.rip+7; // mov qword ptr [r9 + 0x1180], rax
m.put(Operand{2,0,64,0,9,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049fd6): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x140049fda): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049fdd): {next=c.rip+7; // mov byte ptr [r9 + 0x114a], dl
m.put(Operand{2,0,8,0,9,-1,1,0,4426,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x140049fe4): {next=c.rip+8; // imul rax, qword ptr [r9 + 0x10b8], 0xb
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,9,-1,1,0,4280,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb)});
c.rip=next;return true;}
case UINT64_C(0x140049fec): {next=c.rip+8; // imul rdx, qword ptr [r9 + 0x10c0]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,9,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x140049ff4): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049ff7): {next=c.rip+7; // xor rdx, qword ptr [r9 + 0x10b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,9,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x140049ffe): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a001): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a004): {next=c.rip+8; // cmp byte ptr [r9 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,9,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004a00c): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a010): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a014): {next=c.rip+7; // mov qword ptr [r9 + 0x1120], rax
m.put(Operand{2,0,64,0,9,-1,1,0,4384,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a01b): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004a020): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a025): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a02a): {next=c.rip+7; // mov r11, qword ptr [rcx + 0x1138]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4408,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a031): {next=c.rip+3; // mov rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a034): {next=c.rip+8; // imul rbx, qword ptr [rcx + 0x10b8], 0xe
m.imul(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,1,-1,1,0,4280,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xe)});
c.rip=next;return true;}
case UINT64_C(0x14004a03c): {next=c.rip+7; // movzx edx, byte ptr [rcx + 0x114d]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,4429,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a043): {next=c.rip+8; // movzx r10d, byte ptr [rcx + 0x10c8]
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a04b): {next=c.rip+7; // mov r8, qword ptr [rcx + 0x10c0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a052): {next=c.rip+7; // mov r9, qword ptr [rcx + 0x10b0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a059): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004a063): {next=c.rip+4; // imul rdx, r8
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a067): {next=c.rip+3; // xor rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a06a): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a06d): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a070): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a073): {next=c.rip+3; // sub r11, rdx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004a076): {next=c.rip+3; // test r10b, r10b
m.logic(m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004a079): {next=c.rip+4; // cmove r11, rax
if(m.condition(0))m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a07d): {next=c.rip+7; // mov rax, qword ptr [rdi + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a084): {next=c.rip+7; // inc qword ptr [rdi + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,7,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,7,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004a08b): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a08f): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004a099): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a09c): {next=c.rip+7; // mov qword ptr [rdi + 0x1180], rax
m.put(Operand{2,0,64,0,7,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a0a3): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a0a7): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a0aa): {next=c.rip+3; // mov rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a0ad): {next=c.rip+6; // mov byte ptr [rdi + 0x114d], cl
m.put(Operand{2,0,8,0,7,-1,1,0,4429,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a0b3): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a0b7): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a0ba): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a0bd): {next=c.rip+5; // mov rbx, qword ptr [rsp + 8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a0c2): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a0c5): {next=c.rip+3; // add rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a0c8): {next=c.rip+3; // xor rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a0cb): {next=c.rip+3; // test r10b, r10b
m.logic(m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004a0ce): {next=c.rip+4; // cmove rcx, rdx
if(m.condition(0))m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a0d2): {next=c.rip+7; // mov qword ptr [rdi + 0x1138], rcx
m.put(Operand{2,0,64,0,7,-1,1,0,4408,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a0d9): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x10]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a0de): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004a0e0): {next=c.rip+7; // mov r9d, dword ptr [rcx + 0x750]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,-1,1,0,1872,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a0e7): {next=c.rip+3; // mov r11, rcx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a0ea): {next=c.rip+4; // movzx r10d, dl
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a0ee): {next=c.rip+3; // add r9d, r10d
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14004a0f1): {next=c.rip+3; // mov eax, r10d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a0f4): {next=c.rip+8; // imul rax, qword ptr [rcx + 0x268]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,1,-1,1,0,616,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a0fc): {next=c.rip+9; // movzx edx, byte ptr [r10 + rcx + 0xa15]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,10,1,1,0,2581,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a105): {next=c.rip+4; // and r9d, 1
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004a109): {next=c.rip+8; // imul rdx, qword ptr [rcx + 0x1170]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,1,-1,1,0,4464,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a111): {next=c.rip+4; // shl r9d, 8
m.shift(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},0);
c.rip=next;return true;}
case UINT64_C(0x14004a115): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a118): {next=c.rip+3; // add r9d, r10d
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14004a11b): {next=c.rip+7; // xor rdx, qword ptr [rcx + 0x260]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,608,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a122): {next=c.rip+7; // mov rax, qword ptr [rcx + 0x288]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,648,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a129): {next=c.rip+4; // mov r8, qword ptr [rax + r9*8]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,9,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a12d): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a130): {next=c.rip+3; // sub r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004a133): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a136): {next=c.rip+7; // cmp byte ptr [rcx + 0x754], 0
m.arithmetic(m.get(Operand{2,0,8,0,1,-1,1,0,1876,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004a13d): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004a147): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a14b): {next=c.rip+7; // mov rax, qword ptr [r11 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,11,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a152): {next=c.rip+7; // inc qword ptr [r11 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,11,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,11,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004a159): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a15d): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004a167): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a16a): {next=c.rip+7; // mov qword ptr [r11 + 0x1180], rax
m.put(Operand{2,0,64,0,11,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a171): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a175): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a178): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a17b): {next=c.rip+8; // mov byte ptr [r10 + r11 + 0xa15], dl
m.put(Operand{2,0,8,0,10,11,1,0,2581,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a183): {next=c.rip+8; // imul rdx, qword ptr [r11 + 0x1170]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,11,-1,1,0,4464,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a18b): {next=c.rip+8; // imul r10, qword ptr [r11 + 0x268]
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,11,-1,1,0,616,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a193): {next=c.rip+3; // xor rdx, r10
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a196): {next=c.rip+7; // xor rdx, qword ptr [r11 + 0x260]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,11,-1,1,0,608,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a19d): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a1a0): {next=c.rip+3; // add rdx, r8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a1a3): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a1a6): {next=c.rip+8; // cmp byte ptr [r11 + 0x754], 0
m.arithmetic(m.get(Operand{2,0,8,0,11,-1,1,0,1876,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004a1ae): {next=c.rip+4; // cmove rdx, rcx
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a1b2): {next=c.rip+7; // mov rcx, qword ptr [r11 + 0x288]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,11,-1,1,0,648,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a1b9): {next=c.rip+4; // mov qword ptr [rcx + r9*8], rdx
m.put(Operand{2,0,64,0,1,9,8,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a1bd): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004a1c0): {next=c.rip+7; // mov r9d, dword ptr [rcx + 0x750]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,-1,1,0,1872,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a1c7): {next=c.rip+3; // mov r11, rcx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a1ca): {next=c.rip+4; // movzx r10d, dl
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a1ce): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004a1d8): {next=c.rip+3; // add r9d, r10d
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14004a1db): {next=c.rip+4; // and r9d, 1
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004a1df): {next=c.rip+7; // mov rax, qword ptr [r11 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,11,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a1e6): {next=c.rip+7; // inc qword ptr [r11 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,11,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,11,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004a1ed): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a1f1): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004a1fb): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a1fe): {next=c.rip+7; // mov qword ptr [r11 + 0x1180], rax
m.put(Operand{2,0,64,0,11,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a205): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a209): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a20c): {next=c.rip+3; // mov eax, r10d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a20f): {next=c.rip+8; // mov byte ptr [r10 + r11 + 0xa15], cl
m.put(Operand{2,0,8,0,10,11,1,0,2581,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a217): {next=c.rip+8; // imul rax, qword ptr [r11 + 0x268]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,11,-1,1,0,616,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a21f): {next=c.rip+8; // imul rcx, qword ptr [r11 + 0x1170]
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,11,-1,1,0,4464,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a227): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a22a): {next=c.rip+7; // xor rcx, qword ptr [r11 + 0x260]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,11,-1,1,0,608,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a231): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a234): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a237): {next=c.rip+8; // cmp byte ptr [r11 + 0x754], 0
m.arithmetic(m.get(Operand{2,0,8,0,11,-1,1,0,1876,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004a23f): {next=c.rip+4; // lea rdx, [rcx + r8]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,1,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a243): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004a24d): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a251): {next=c.rip+7; // mov rax, qword ptr [r11 + 0x288]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,11,-1,1,0,648,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a258): {next=c.rip+4; // shl r9d, 8
m.shift(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},0);
c.rip=next;return true;}
case UINT64_C(0x14004a25c): {next=c.rip+3; // add r9d, r10d
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14004a25f): {next=c.rip+4; // mov qword ptr [rax + r9*8], rdx
m.put(Operand{2,0,64,0,0,9,8,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a263): {next=c.rip+7; // xor r10, qword ptr [r11 + 0x1060]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,11,-1,1,0,4192,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a26a): {next=c.rip+3; // xor r10, r8
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a26d): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a270): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a274): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a277): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a27b): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a27e): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a282): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a285): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004a28f): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a293): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a296): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a29a): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a29d): {next=c.rip+7; // mov qword ptr [r11 + 0x1060], rax
m.put(Operand{2,0,64,0,11,-1,1,0,4192,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a2a4): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004a2b0): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a2b5): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a2b6): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004a2ba): {next=c.rip+3; // mov rdi, rdx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a2bd): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a2c0): {next=c.rip+5; // call 0x140049cc0
{uint64_t target=next+UINT64_C(0xfffffffffffff9fb);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004a2c5): {next=c.rip+5; // cmp eax, 0x3fe
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3fe)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004a2ca): {next=c.rip+6; // ja 0x14004a3c0
if(m.condition(5))next=next+UINT64_C(0xf0);
c.rip=next;return true;}
case UINT64_C(0x14004a2d0): {next=c.rip+7; // mov r8, qword ptr [rbx + 0x1180]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a2d7): {next=c.rip+10; // movabs r10, 0x9e3779b97f4a7c15
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004a2e1): {next=c.rip+7; // inc qword ptr [rbx + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004a2e8): {next=c.rip+10; // movabs r11, 0x2545f4914f6cdd1d
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004a2f2): {next=c.rip+3; // movsxd r9, eax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004a2f5): {next=c.rip+4; // imul r8, r10
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a2f9): {next=c.rip+3; // add r8, r11
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a2fc): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], r8
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a303): {next=c.rip+4; // shr r8, 0x1b
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a307): {next=c.rip+2; // inc eax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004a309): {next=c.rip+4; // movzx edx, r8b
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a30d): {next=c.rip+3; // movsxd r8, eax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004a310): {next=c.rip+8; // mov byte ptr [r9 + rbx + 0xc15], dl
m.put(Operand{2,0,8,0,9,3,1,0,3093,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a318): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a31b): {next=c.rip+8; // imul rax, qword ptr [rbx + 0x278]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,632,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a323): {next=c.rip+8; // imul rdx, qword ptr [rbx + 0x1178]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,4472,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a32b): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a32e): {next=c.rip+7; // xor rdx, qword ptr [rbx + 0x270]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,624,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a335): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a338): {next=c.rip+4; // shr rax, 0x3a
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3a)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a33c): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004a33e): {next=c.rip+2; // je 0x14004a345
if(m.condition(0))next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x14004a340): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a342): {next=c.rip+3; // rol rdi, cl
m.shift(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},2);
c.rip=next;return true;}
case UINT64_C(0x14004a345): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x290]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,656,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a34c): {next=c.rip+3; // xor rdi, rdx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a34f): {next=c.rip+4; // mov qword ptr [rax + r9*8], rdi
m.put(Operand{2,0,64,0,0,9,8,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a353): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a35a): {next=c.rip+7; // inc qword ptr [rbx + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004a361): {next=c.rip+4; // imul rax, r10
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a365): {next=c.rip+3; // add rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a368): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a36f): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a373): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a376): {next=c.rip+6; // mov byte ptr [rbx + 0x1142], dl
m.put(Operand{2,0,8,0,3,-1,1,0,4418,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a37c): {next=c.rip+8; // imul rdx, qword ptr [rbx + 0x10c0]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a384): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a38b): {next=c.rip+4; // lea rcx, [rax + rax*2]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,2,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a38f): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a392): {next=c.rip+7; // xor rdx, qword ptr [rbx + 0x10b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a399): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a39c): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a39f): {next=c.rip+7; // cmp byte ptr [rbx + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004a3a6): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a3aa): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a3ae): {next=c.rip+7; // mov qword ptr [rbx + 0x10e0], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4320,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a3b5): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x30]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a3ba): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a3be): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004a3bf): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004a3c0): {next=c.rip+5; // mov edx, 0x53505553
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x53505553)}));
c.rip=next;return true;}
case UINT64_C(0x14004a3c5): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a3c8): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffffef63);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004a3cd): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004a3d0): {next=c.rip+2; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a3d2): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004a3d6): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a3d9): {next=c.rip+5; // call 0x140049cc0
{uint64_t target=next+UINT64_C(0xfffffffffffff8e2);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004a3de): {next=c.rip+3; // movsxd r10, eax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004a3e1): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004a3e3): {next=c.rip+6; // jle 0x14004a545
if(m.condition(7))next=next+UINT64_C(0x15c);
c.rip=next;return true;}
case UINT64_C(0x14004a3e9): {next=c.rip+7; // mov r9, qword ptr [rbx + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a3f0): {next=c.rip+2; // dec eax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,true));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004a3f2): {next=c.rip+3; // movsxd r8, eax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004a3f5): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rbp
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a3fa): {next=c.rip+10; // movabs rbp, 0x2545f4914f6cdd1d
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004a404): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a409): {next=c.rip+10; // movabs rsi, 0x9e3779b97f4a7c15
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004a413): {next=c.rip+4; // imul r9, rsi
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a417): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a41c): {next=c.rip+8; // lea r11, [r8*8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,-1,8,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a424): {next=c.rip+7; // mov rdi, qword ptr [rbx + 0x1188]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a42b): {next=c.rip+3; // add r9, rbp
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a42e): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], r9
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a435): {next=c.rip+3; // inc rdi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004a438): {next=c.rip+7; // mov qword ptr [rbx + 0x1188], rdi
m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a43f): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a442): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a446): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a449): {next=c.rip+6; // mov byte ptr [rbx + 0x1142], dl
m.put(Operand{2,0,8,0,3,-1,1,0,4418,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a44f): {next=c.rip+8; // imul rdx, qword ptr [rbx + 0x10c0]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a457): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a45e): {next=c.rip+4; // lea rcx, [rax + rax*2]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,2,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a462): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a465): {next=c.rip+7; // xor rdx, qword ptr [rbx + 0x10b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a46c): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a46f): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a472): {next=c.rip+7; // cmp byte ptr [rbx + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004a479): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a47d): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a481): {next=c.rip+7; // mov qword ptr [rbx + 0x10e0], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4320,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a488): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a48b): {next=c.rip+8; // imul rax, qword ptr [rbx + 0x278]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,632,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a493): {next=c.rip+9; // movzx ecx, byte ptr [r8 + rbx + 0xc15]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,8,3,1,0,3093,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a49c): {next=c.rip+8; // imul rcx, qword ptr [rbx + 0x1178]
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,4472,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a4a4): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a4a7): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x290]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,656,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a4ae): {next=c.rip+7; // xor rcx, qword ptr [rbx + 0x270]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,624,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a4b5): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a4b8): {next=c.rip+4; // shr rcx, 0x3a
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3a)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a4bc): {next=c.rip+4; // xor rdx, qword ptr [r11 + rax]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,11,0,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a4c0): {next=c.rip+2; // test ecx, ecx
m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004a4c2): {next=c.rip+2; // je 0x14004a4c7
if(m.condition(0))next=next+UINT64_C(0x3);
c.rip=next;return true;}
case UINT64_C(0x14004a4c4): {next=c.rip+3; // ror rdx, cl
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},3);
c.rip=next;return true;}
case UINT64_C(0x14004a4c7): {next=c.rip+4; // imul r9, rsi
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a4cb): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x38]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a4d0): {next=c.rip+4; // lea rax, [rdi + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a4d4): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x40]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a4d9): {next=c.rip+3; // add r9, rbp
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a4dc): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x30]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a4e1): {next=c.rip+7; // mov qword ptr [rbx + 0x1188], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a4e8): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], r9
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a4ef): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a4f3): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a4f7): {next=c.rip+8; // mov byte ptr [r8 + rbx + 0xc15], al
m.put(Operand{2,0,8,0,8,3,1,0,3093,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a4ff): {next=c.rip+8; // imul rax, qword ptr [rbx + 0x1178]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,4472,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a507): {next=c.rip+8; // imul r10, qword ptr [rbx + 0x278]
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,632,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a50f): {next=c.rip+7; // xor r8, qword ptr [rbx + 0x1180]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a516): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a519): {next=c.rip+7; // xor rax, qword ptr [rbx + 0x270]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,624,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a520): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a523): {next=c.rip+4; // shr rcx, 0x3a
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3a)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a527): {next=c.rip+2; // test ecx, ecx
m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004a529): {next=c.rip+2; // je 0x14004a52e
if(m.condition(0))next=next+UINT64_C(0x3);
c.rip=next;return true;}
case UINT64_C(0x14004a52b): {next=c.rip+3; // rol r8, cl
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},2);
c.rip=next;return true;}
case UINT64_C(0x14004a52e): {next=c.rip+7; // mov rcx, qword ptr [rbx + 0x290]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,656,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a535): {next=c.rip+3; // xor r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a538): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a53b): {next=c.rip+4; // mov qword ptr [r11 + rcx], r8
m.put(Operand{2,0,64,0,11,1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a53f): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a543): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004a544): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004a545): {next=c.rip+5; // mov edx, 0x53504f50
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x53504f50)}));
c.rip=next;return true;}
case UINT64_C(0x14004a54a): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a54d): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffffedde);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004a552): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004a590): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a595): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a59a): {next=c.rip+9; // mov rax, qword ptr gs:[0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,-1,-1,1,1,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a5a3): {next=c.rip+3; // movsxd r10, ecx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004a5a6): {next=c.rip+3; // movsxd r9, edx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004a5a9): {next=c.rip+5; // mov edi, 0x2a60
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2a60)}));
c.rip=next;return true;}
case UINT64_C(0x14004a5ae): {next=c.rip+3; // add rdi, qword ptr [rax]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a5b1): {next=c.rip+4; // lea rax, [r10 + r10*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,10,10,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a5b5): {next=c.rip+4; // lea r11, [r9 + rax*8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,9,0,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a5b9): {next=c.rip+7; // lea eax, [rcx*4 + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,-1,1,4,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a5c0): {next=c.rip+2; // add eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14004a5c2): {next=c.rip+4; // lea rcx, [r9 + r10*4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,9,10,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a5c6): {next=c.rip+6; // movzx edx, byte ptr [r11 + rdi + 0x20]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,11,7,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a5cc): {next=c.rip+3; // add rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a5cf): {next=c.rip+8; // imul rdx, qword ptr [rdi + 0x510]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,7,-1,1,0,1296,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a5d7): {next=c.rip+4; // mov r9, qword ptr [rdi + rcx*8]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,1,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a5db): {next=c.rip+4; // lea r8, [rdi + rcx*8]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,1,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a5df): {next=c.rip+3; // movsxd rbx, eax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004a5e2): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004a5ec): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a5ef): {next=c.rip+8; // imul rax, qword ptr [rdi + 0x508]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,7,-1,1,0,1288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a5f7): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a5fa): {next=c.rip+7; // xor rdx, qword ptr [rdi + 0x500]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,7,-1,1,0,1280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a601): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a604): {next=c.rip+3; // xor rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a607): {next=c.rip+3; // sub r9, rdx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004a60a): {next=c.rip+7; // cmp byte ptr [rdi + 0x520], 0
m.arithmetic(m.get(Operand{2,0,8,0,7,-1,1,0,1312,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004a611): {next=c.rip+4; // cmove r9, rax
if(m.condition(0))m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a615): {next=c.rip+7; // mov rax, qword ptr [rdi + 0x518]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,1304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a61c): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a620): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004a62a): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a62d): {next=c.rip+7; // mov qword ptr [rdi + 0x518], rax
m.put(Operand{2,0,64,0,7,-1,1,0,1304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a634): {next=c.rip+4; // shr rax, 0x1d
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a638): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a63b): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a63e): {next=c.rip+5; // mov byte ptr [r11 + rdi + 0x20], cl
m.put(Operand{2,0,8,0,11,7,1,0,32,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a643): {next=c.rip+8; // imul rcx, qword ptr [rdi + 0x510]
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,7,-1,1,0,1296,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a64b): {next=c.rip+8; // imul rbx, qword ptr [rdi + 0x508]
m.imul(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,7,-1,1,0,1288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a653): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a656): {next=c.rip+5; // mov rbx, qword ptr [rsp + 8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a65b): {next=c.rip+7; // xor rcx, qword ptr [rdi + 0x500]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,7,-1,1,0,1280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a662): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a665): {next=c.rip+3; // add rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a668): {next=c.rip+3; // xor rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a66b): {next=c.rip+7; // cmp byte ptr [rdi + 0x520], 0
m.arithmetic(m.get(Operand{2,0,8,0,7,-1,1,0,1312,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004a672): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x10]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a677): {next=c.rip+4; // cmove rcx, rdx
if(m.condition(0))m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a67b): {next=c.rip+3; // mov qword ptr [r8], rcx
m.put(Operand{2,0,64,0,8,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a67e): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004a680): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a685): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a68a): {next=c.rip+9; // mov rax, qword ptr gs:[0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,-1,-1,1,1,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a693): {next=c.rip+5; // mov rbx, qword ptr [rsp + 8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a698): {next=c.rip+3; // movsxd r9, ecx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004a69b): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004a6a5): {next=c.rip+3; // movsxd r10, edx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004a6a8): {next=c.rip+5; // mov edi, 0x2a60
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2a60)}));
c.rip=next;return true;}
case UINT64_C(0x14004a6ad): {next=c.rip+3; // add rdi, qword ptr [rax]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a6b0): {next=c.rip+7; // mov rax, qword ptr [rdi + 0x518]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,1304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a6b7): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a6bb): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004a6c5): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a6c8): {next=c.rip+7; // mov qword ptr [rdi + 0x518], rax
m.put(Operand{2,0,64,0,7,-1,1,0,1304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a6cf): {next=c.rip+4; // shr rax, 0x1d
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a6d3): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a6d6): {next=c.rip+4; // lea rax, [r9 + r9*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,9,9,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a6da): {next=c.rip+4; // lea rcx, [r10 + rax*8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,10,0,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a6de): {next=c.rip+4; // mov byte ptr [rcx + rdi + 0x20], dl
m.put(Operand{2,0,8,0,1,7,1,0,32,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a6e2): {next=c.rip+8; // lea eax, [r9*4 + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,-1,9,4,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a6ea): {next=c.rip+8; // imul rdx, qword ptr [rdi + 0x510]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,7,-1,1,0,1296,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a6f2): {next=c.rip+3; // add eax, r10d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14004a6f5): {next=c.rip+3; // movsxd rcx, eax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004a6f8): {next=c.rip+8; // imul rcx, qword ptr [rdi + 0x508]
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,7,-1,1,0,1288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a700): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a703): {next=c.rip+7; // xor rcx, qword ptr [rdi + 0x500]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,7,-1,1,0,1280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a70a): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a70d): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a710): {next=c.rip+7; // cmp byte ptr [rdi + 0x520], 0
m.arithmetic(m.get(Operand{2,0,8,0,7,-1,1,0,1312,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004a717): {next=c.rip+4; // lea rdx, [rcx + r8]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,1,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a71b): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a71f): {next=c.rip+4; // lea rcx, [r10 + r9*4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,10,9,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a723): {next=c.rip+3; // add rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a726): {next=c.rip+4; // mov qword ptr [rdi + rcx*8], rdx
m.put(Operand{2,0,64,0,7,1,8,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a72a): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x10]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a72f): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004a730): {next=c.rip+5; // mov qword ptr [rsp + 0x18], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a735): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbp
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a73a): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a73b): {next=c.rip+2; // push r12
m.push(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a73d): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a73f): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a741): {next=c.rip+9; // mov rax, qword ptr gs:[0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,-1,-1,1,1,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a74a): {next=c.rip+3; // mov r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a74d): {next=c.rip+10; // movabs rbx, 0xff51afd7ed558ccd
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004a757): {next=c.rip+5; // mov ecx, 0x2a60
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2a60)}));
c.rip=next;return true;}
case UINT64_C(0x14004a75c): {next=c.rip+10; // movabs r11, 0xc4ceb9fe1a85ec53
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004a766): {next=c.rip+3; // mov rax, qword ptr [rax]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a769): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a76c): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004a776): {next=c.rip+7; // mov rsi, qword ptr [rax + 0x510]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,1296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a77d): {next=c.rip+7; // mov r10d, dword ptr [rax + 0x524]
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,0,-1,1,0,1316,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a784): {next=c.rip+7; // mov rbp, qword ptr [rax + 0x500]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,1280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a78b): {next=c.rip+7; // mov r14, qword ptr [rax + 0x508]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,1288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a792): {next=c.rip+8; // movzx r12d, byte ptr [rax + 0x520]
m.put(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,-1,1,0,1312,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a79a): {next=c.rip+4; // lea edx, [r10 + 1]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,10,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a79e): {next=c.rip+4; // imul rdx, rcx
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a7a2): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a7a5): {next=c.rip+3; // xor rdx, r8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a7a8): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a7ab): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a7af): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a7b2): {next=c.rip+4; // imul rcx, rbx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a7b6): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a7b9): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a7bd): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a7c0): {next=c.rip+5; // mov ecx, 0x4346534b
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4346534b)}));
c.rip=next;return true;}
case UINT64_C(0x14004a7c5): {next=c.rip+4; // imul rdx, r11
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a7c9): {next=c.rip+3; // mov r9, rdx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a7cc): {next=c.rip+4; // shr r9, 0x21
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a7d0): {next=c.rip+3; // xor r9, rdx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a7d3): {next=c.rip+4; // cmove r9, rcx
if(m.condition(0))m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a7d7): {next=c.rip+3; // mov rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a7da): {next=c.rip+7; // xor rcx, 0x43465341
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x43465341)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a7e1): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a7e4): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a7e8): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a7eb): {next=c.rip+4; // imul rdx, rbx
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a7ef): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a7f2): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a7f6): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a7f9): {next=c.rip+4; // imul r8, r11
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a7fd): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a800): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a804): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a807): {next=c.rip+7; // mov qword ptr [rax + 0x500], rcx
m.put(Operand{2,0,64,0,0,-1,1,0,1280,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a80e): {next=c.rip+3; // mov rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a811): {next=c.rip+7; // xor rcx, 0x43465353
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x43465353)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a818): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a81b): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a81f): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a822): {next=c.rip+4; // imul rdx, rbx
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a826): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a829): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a82d): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a830): {next=c.rip+4; // imul r8, r11
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a834): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a837): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a83b): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a83e): {next=c.rip+4; // or rcx, 1
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a842): {next=c.rip+7; // mov qword ptr [rax + 0x508], rcx
m.put(Operand{2,0,64,0,0,-1,1,0,1288,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a849): {next=c.rip+3; // mov rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a84c): {next=c.rip+7; // xor rcx, 0x43465354
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x43465354)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a853): {next=c.rip+7; // xor r9, 0x43465346
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x43465346)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a85a): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a85d): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a861): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a864): {next=c.rip+4; // imul rdx, rbx
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a868): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a86b): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a86f): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a872): {next=c.rip+4; // imul r8, r11
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a876): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a879): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a87d): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a880): {next=c.rip+4; // or rcx, 1
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a884): {next=c.rip+7; // mov qword ptr [rax + 0x510], rcx
m.put(Operand{2,0,64,0,0,-1,1,0,1296,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a88b): {next=c.rip+3; // mov rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a88e): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a892): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a895): {next=c.rip+4; // imul rcx, rbx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a899): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a89c): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a8a0): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a8a3): {next=c.rip+3; // xor r15d, r15d
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004a8a6): {next=c.rip+4; // imul rdx, r11
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a8aa): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a8ad): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a8b1): {next=c.rip+2; // xor cl, dl
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004a8b3): {next=c.rip+3; // and cl, 1
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004a8b6): {next=c.rip+6; // mov byte ptr [rax + 0x520], cl
m.put(Operand{2,0,8,0,0,-1,1,0,1312,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a8bc): {next=c.rip+3; // test r10d, r10d
m.logic(m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004a8bf): {next=c.rip+6; // je 0x14004ab5c
if(m.condition(0))next=next+UINT64_C(0x297);
c.rip=next;return true;}
case UINT64_C(0x14004a8c5): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a8ca): {next=c.rip+5; // mov edi, 2
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}));
c.rip=next;return true;}
case UINT64_C(0x14004a8cf): {next=c.rip+5; // mov qword ptr [rsp + 0x30], r13
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a8d4): {next=c.rip+10; // movabs r13, 0x2545f4914f6cdd1d
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004a8de): {next=c.rip+2; // nop 

c.rip=next;return true;}
case UINT64_C(0x14004a8e0): {next=c.rip+6; // cmp edi, 0x82
m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x82)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004a8e6): {next=c.rip+6; // jae 0x14004ab52
if(m.condition(3))next=next+UINT64_C(0x266);
c.rip=next;return true;}
case UINT64_C(0x14004a8ec): {next=c.rip+4; // lea rbx, [r15 + r15*4]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,15,15,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a8f0): {next=c.rip+4; // mov r9, qword ptr [rax + rbx*8]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,3,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a8f4): {next=c.rip+4; // lea rcx, [r15 + r15*4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,15,15,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a8f8): {next=c.rip+8; // lea r11, [rcx*8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,-1,1,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a900): {next=c.rip+6; // movzx edx, byte ptr [r11 + rax + 0x20]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,11,0,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a906): {next=c.rip+3; // lea ecx, [rdi - 1]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,7,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a909): {next=c.rip+3; // movsxd r10, ecx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004a90c): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a910): {next=c.rip+3; // mov rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a913): {next=c.rip+4; // imul rcx, r14
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a917): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a91a): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a91d): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a920): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a923): {next=c.rip+3; // sub r9, rdx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004a926): {next=c.rip+3; // test r12b, r12b
m.logic(m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004a929): {next=c.rip+10; // movabs rdx, 0x9e3779b97f4a7c15
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004a933): {next=c.rip+4; // cmove r9, rcx
if(m.condition(0))m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a937): {next=c.rip+7; // mov rcx, qword ptr [rax + 0x518]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,1304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a93e): {next=c.rip+4; // imul rcx, rdx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a942): {next=c.rip+3; // mov rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a945): {next=c.rip+3; // add rcx, r13
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a948): {next=c.rip+7; // mov qword ptr [rax + 0x518], rcx
m.put(Operand{2,0,64,0,0,-1,1,0,1304,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a94f): {next=c.rip+4; // shr rcx, 0x1d
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a953): {next=c.rip+4; // movzx r8d, cl
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a957): {next=c.rip+5; // mov byte ptr [r11 + rax + 0x20], r8b
m.put(Operand{2,0,8,0,11,0,1,0,32,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a95c): {next=c.rip+8; // imul r8, qword ptr [rax + 0x510]
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,0,-1,1,0,1296,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a964): {next=c.rip+8; // imul r10, qword ptr [rax + 0x508]
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,0,-1,1,0,1288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a96c): {next=c.rip+3; // xor r8, r10
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a96f): {next=c.rip+3; // movsxd r10, edi
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004a972): {next=c.rip+7; // xor r8, qword ptr [rax + 0x500]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,0,-1,1,0,1280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a979): {next=c.rip+3; // xor rdx, r8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a97c): {next=c.rip+7; // cmp byte ptr [rax + 0x520], 0
m.arithmetic(m.get(Operand{2,0,8,0,0,-1,1,0,1312,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004a983): {next=c.rip+4; // lea rcx, [r9 + r8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,9,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a987): {next=c.rip+5; // mov r9, qword ptr [rax + rbx*8 + 8]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,3,8,0,8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a98c): {next=c.rip+4; // cmove rcx, rdx
if(m.condition(0))m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a990): {next=c.rip+4; // mov qword ptr [rax + rbx*8], rcx
m.put(Operand{2,0,64,0,0,3,8,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a994): {next=c.rip+3; // mov rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a997): {next=c.rip+6; // movzx edx, byte ptr [r11 + rax + 0x21]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,11,0,1,0,33,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a99d): {next=c.rip+4; // imul rcx, r14
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a9a1): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a9a5): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a9a8): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a9ab): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a9ae): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a9b1): {next=c.rip+3; // sub r9, rdx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004a9b4): {next=c.rip+3; // test r12b, r12b
m.logic(m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004a9b7): {next=c.rip+10; // movabs rdx, 0x9e3779b97f4a7c15
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004a9c1): {next=c.rip+4; // cmove r9, rcx
if(m.condition(0))m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a9c5): {next=c.rip+7; // mov rcx, qword ptr [rax + 0x518]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,1304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a9cc): {next=c.rip+4; // imul rcx, rdx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a9d0): {next=c.rip+3; // mov rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a9d3): {next=c.rip+3; // add rcx, r13
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004a9d6): {next=c.rip+7; // mov qword ptr [rax + 0x518], rcx
m.put(Operand{2,0,64,0,0,-1,1,0,1304,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a9dd): {next=c.rip+4; // shr rcx, 0x1d
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14004a9e1): {next=c.rip+4; // movzx r8d, cl
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a9e5): {next=c.rip+5; // mov byte ptr [r11 + rax + 0x21], r8b
m.put(Operand{2,0,8,0,11,0,1,0,33,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004a9ea): {next=c.rip+8; // imul r8, qword ptr [rax + 0x510]
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,0,-1,1,0,1296,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a9f2): {next=c.rip+8; // imul r10, qword ptr [rax + 0x508]
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,0,-1,1,0,1288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004a9fa): {next=c.rip+3; // xor r8, r10
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004a9fd): {next=c.rip+7; // xor r8, qword ptr [rax + 0x500]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,0,-1,1,0,1280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004aa04): {next=c.rip+3; // xor rdx, r8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004aa07): {next=c.rip+7; // cmp byte ptr [rax + 0x520], 0
m.arithmetic(m.get(Operand{2,0,8,0,0,-1,1,0,1312,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004aa0e): {next=c.rip+4; // lea rcx, [r9 + r8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,9,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aa12): {next=c.rip+5; // mov r9, qword ptr [rax + rbx*8 + 0x10]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,3,8,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aa17): {next=c.rip+4; // cmove rcx, rdx
if(m.condition(0))m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aa1b): {next=c.rip+5; // mov qword ptr [rax + rbx*8 + 8], rcx
m.put(Operand{2,0,64,0,0,3,8,0,8,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aa20): {next=c.rip+3; // lea ecx, [rdi + 1]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,7,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aa23): {next=c.rip+6; // movzx edx, byte ptr [r11 + rax + 0x22]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,11,0,1,0,34,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aa29): {next=c.rip+3; // movsxd r10, ecx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004aa2c): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004aa30): {next=c.rip+3; // mov rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aa33): {next=c.rip+4; // imul rcx, r14
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004aa37): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004aa3a): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004aa3d): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aa40): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004aa43): {next=c.rip+3; // sub r9, rdx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004aa46): {next=c.rip+3; // test r12b, r12b
m.logic(m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004aa49): {next=c.rip+4; // cmove r9, rcx
if(m.condition(0))m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aa4d): {next=c.rip+7; // mov rcx, qword ptr [rax + 0x518]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,1304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aa54): {next=c.rip+10; // movabs rdx, 0x9e3779b97f4a7c15
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004aa5e): {next=c.rip+4; // imul rcx, rdx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004aa62): {next=c.rip+3; // mov rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aa65): {next=c.rip+3; // add rcx, r13
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004aa68): {next=c.rip+7; // mov qword ptr [rax + 0x518], rcx
m.put(Operand{2,0,64,0,0,-1,1,0,1304,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aa6f): {next=c.rip+4; // shr rcx, 0x1d
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14004aa73): {next=c.rip+4; // movzx r8d, cl
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aa77): {next=c.rip+5; // mov byte ptr [r11 + rax + 0x22], r8b
m.put(Operand{2,0,8,0,11,0,1,0,34,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aa7c): {next=c.rip+8; // imul r8, qword ptr [rax + 0x510]
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,0,-1,1,0,1296,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004aa84): {next=c.rip+8; // imul r10, qword ptr [rax + 0x508]
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,0,-1,1,0,1288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004aa8c): {next=c.rip+3; // xor r8, r10
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004aa8f): {next=c.rip+7; // xor r8, qword ptr [rax + 0x500]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,0,-1,1,0,1280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004aa96): {next=c.rip+3; // xor rdx, r8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004aa99): {next=c.rip+7; // cmp byte ptr [rax + 0x520], 0
m.arithmetic(m.get(Operand{2,0,8,0,0,-1,1,0,1312,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004aaa0): {next=c.rip+4; // lea rcx, [r9 + r8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,9,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aaa4): {next=c.rip+5; // mov r9, qword ptr [rax + rbx*8 + 0x18]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,3,8,0,24,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aaa9): {next=c.rip+4; // cmove rcx, rdx
if(m.condition(0))m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aaad): {next=c.rip+5; // mov qword ptr [rax + rbx*8 + 0x10], rcx
m.put(Operand{2,0,64,0,0,3,8,0,16,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aab2): {next=c.rip+3; // lea ecx, [rdi + 2]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,7,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aab5): {next=c.rip+6; // movzx edx, byte ptr [r11 + rax + 0x23]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,11,0,1,0,35,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aabb): {next=c.rip+3; // movsxd r10, ecx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004aabe): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004aac2): {next=c.rip+3; // mov rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aac5): {next=c.rip+4; // imul rcx, r14
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004aac9): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004aacc): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004aacf): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aad2): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004aad5): {next=c.rip+3; // sub r9, rdx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004aad8): {next=c.rip+3; // test r12b, r12b
m.logic(m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004aadb): {next=c.rip+10; // movabs rdx, 0x9e3779b97f4a7c15
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004aae5): {next=c.rip+4; // cmove r9, rcx
if(m.condition(0))m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aae9): {next=c.rip+7; // mov rcx, qword ptr [rax + 0x518]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,1304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aaf0): {next=c.rip+4; // imul rcx, rdx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004aaf4): {next=c.rip+3; // mov rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aaf7): {next=c.rip+3; // add rcx, r13
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004aafa): {next=c.rip+7; // mov qword ptr [rax + 0x518], rcx
m.put(Operand{2,0,64,0,0,-1,1,0,1304,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ab01): {next=c.rip+4; // shr rcx, 0x1d
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ab05): {next=c.rip+4; // movzx r8d, cl
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ab09): {next=c.rip+5; // mov byte ptr [r11 + rax + 0x23], r8b
m.put(Operand{2,0,8,0,11,0,1,0,35,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ab0e): {next=c.rip+8; // imul r8, qword ptr [rax + 0x510]
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,0,-1,1,0,1296,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ab16): {next=c.rip+8; // imul r10, qword ptr [rax + 0x508]
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,0,-1,1,0,1288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ab1e): {next=c.rip+3; // xor r8, r10
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ab21): {next=c.rip+7; // xor r8, qword ptr [rax + 0x500]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,0,-1,1,0,1280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ab28): {next=c.rip+3; // xor rdx, r8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ab2b): {next=c.rip+7; // cmp byte ptr [rax + 0x520], 0
m.arithmetic(m.get(Operand{2,0,8,0,0,-1,1,0,1312,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004ab32): {next=c.rip+4; // lea rcx, [r9 + r8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,9,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ab36): {next=c.rip+4; // cmove rcx, rdx
if(m.condition(0))m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ab3a): {next=c.rip+3; // inc r15d
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004ab3d): {next=c.rip+3; // add edi, 4
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14004ab40): {next=c.rip+5; // mov qword ptr [rax + rbx*8 + 0x18], rcx
m.put(Operand{2,0,64,0,0,3,8,0,24,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ab45): {next=c.rip+7; // cmp r15d, dword ptr [rax + 0x524]
m.arithmetic(m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,0,-1,1,0,1316,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004ab4c): {next=c.rip+6; // jb 0x14004a8e0
if(m.condition(2))next=next+UINT64_C(0xfffffffffffffd8e);
c.rip=next;return true;}
case UINT64_C(0x14004ab52): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x28]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ab57): {next=c.rip+5; // mov r13, qword ptr [rsp + 0x30]
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ab5c): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x38]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ab61): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x40]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ab66): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004ab68): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004ab6a): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004ab6c): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004ab6d): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004ab70): {next=c.rip+9; // mov rax, qword ptr gs:[0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,-1,-1,1,1,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ab79): {next=c.rip+3; // mov r9, rcx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ab7c): {next=c.rip+6; // mov r8d, 0x2a60
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2a60)}));
c.rip=next;return true;}
case UINT64_C(0x14004ab82): {next=c.rip+3; // add r8, qword ptr [rax]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004ab85): {next=c.rip+8; // cmp dword ptr [r8 + 0x524], 0
m.arithmetic(m.get(Operand{2,0,32,0,8,-1,1,0,1316,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004ab8d): {next=c.rip+6; // jne 0x14004a730
if(m.condition(1))next=next+UINT64_C(0xfffffffffffffb9d);
c.rip=next;return true;}
case UINT64_C(0x14004ab93): {next=c.rip+10; // movabs r11, 0xff51afd7ed558ccd
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004ab9d): {next=c.rip+10; // movabs r10, 0xc4ceb9fe1a85ec53
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004aba7): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004abaa): {next=c.rip+6; // xor rax, 0x43465341
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x43465341)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004abb0): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004abb3): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004abb7): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004abba): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004abbe): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004abc1): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004abc5): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004abc8): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004abcc): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004abcf): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004abd3): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004abd6): {next=c.rip+7; // mov qword ptr [r8 + 0x500], rax
m.put(Operand{2,0,64,0,8,-1,1,0,1280,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004abdd): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004abe0): {next=c.rip+6; // xor rax, 0x43465353
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x43465353)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004abe6): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004abe9): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004abed): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004abf0): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004abf4): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004abf7): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004abfb): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004abfe): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ac02): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ac05): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ac09): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ac0c): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ac10): {next=c.rip+7; // mov qword ptr [r8 + 0x508], rax
m.put(Operand{2,0,64,0,8,-1,1,0,1288,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ac17): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ac1a): {next=c.rip+6; // xor rax, 0x43465354
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x43465354)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ac20): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ac23): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ac27): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ac2a): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ac2e): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ac31): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ac35): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ac38): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ac3c): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ac3f): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ac43): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ac46): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ac4a): {next=c.rip+7; // mov qword ptr [r8 + 0x510], rax
m.put(Operand{2,0,64,0,8,-1,1,0,1296,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ac51): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ac54): {next=c.rip+6; // xor rax, 0x43465346
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x43465346)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ac5a): {next=c.rip+7; // xor r9, 0x43465352
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x43465352)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ac61): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ac64): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ac68): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ac6b): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ac6f): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ac72): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ac76): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ac79): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ac7d): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ac80): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ac84): {next=c.rip+2; // xor al, dl
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004ac86): {next=c.rip+2; // and al, 1
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004ac88): {next=c.rip+7; // mov byte ptr [r8 + 0x520], al
m.put(Operand{2,0,8,0,8,-1,1,0,1312,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ac8f): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ac92): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ac96): {next=c.rip+3; // xor rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ac99): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ac9d): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aca0): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004aca4): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004aca7): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004acab): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004acae): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004acb2): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004acb5): {next=c.rip+7; // mov qword ptr [r8 + 0x518], rax
m.put(Operand{2,0,64,0,8,-1,1,0,1304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004acbc): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004acc0): {next=c.rip+2; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004acc2): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004acc4): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004acc6): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004acca): {next=c.rip+9; // mov rax, qword ptr gs:[0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,-1,-1,1,1,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004acd3): {next=c.rip+3; // mov r15, rcx
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004acd6): {next=c.rip+5; // mov ebp, 0x2a60
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2a60)}));
c.rip=next;return true;}
case UINT64_C(0x14004acdb): {next=c.rip+3; // add rbp, qword ptr [rax]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004acde): {next=c.rip+7; // mov r14d, dword ptr [rbp + 0x524]
m.put(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,5,-1,1,0,1316,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ace5): {next=c.rip+4; // cmp r14d, 0x20
m.arithmetic(m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x20)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004ace9): {next=c.rip+6; // jae 0x14004adfe
if(m.condition(3))next=next+UINT64_C(0x10f);
c.rip=next;return true;}
case UINT64_C(0x14004acef): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004acf4): {next=c.rip+3; // mov ecx, r14d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004acf7): {next=c.rip+2; // mov ebx, edx
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004acf9): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004acfe): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ad03): {next=c.rip+3; // mov edi, r8d
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ad06): {next=c.rip+3; // mov r8d, edx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ad09): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004ad0b): {next=c.rip+3; // mov r11d, r9d
m.put(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ad0e): {next=c.rip+5; // call 0x14004a680
{uint64_t target=next+UINT64_C(0xfffffffffffff96d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004ad13): {next=c.rip+5; // mov edx, 1
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14004ad18): {next=c.rip+3; // mov ecx, r14d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ad1b): {next=c.rip+3; // mov r8d, edi
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ad1e): {next=c.rip+5; // call 0x14004a680
{uint64_t target=next+UINT64_C(0xfffffffffffff95d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004ad23): {next=c.rip+5; // mov edx, 2
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}));
c.rip=next;return true;}
case UINT64_C(0x14004ad28): {next=c.rip+3; // mov ecx, r14d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ad2b): {next=c.rip+3; // mov r8d, r11d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ad2e): {next=c.rip+5; // call 0x14004a680
{uint64_t target=next+UINT64_C(0xfffffffffffff94d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004ad33): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004ad3d): {next=c.rip+4; // lea esi, [r14 + 1]
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,14,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ad41): {next=c.rip+10; // movabs rdx, 0xbf58476d1ce4e5b9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xbf58476d1ce4e5b9)}));
c.rip=next;return true;}
case UINT64_C(0x14004ad4b): {next=c.rip+2; // mov ecx, esi
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ad4d): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ad51): {next=c.rip+4; // lea rax, [r11 + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ad55): {next=c.rip+4; // imul rax, rdx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ad59): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ad5c): {next=c.rip+10; // movabs rax, 0xd6e8feb86659fd93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14004ad66): {next=c.rip+4; // imul rbx, rax
m.imul(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ad6a): {next=c.rip+10; // movabs rax, 0xc2b2ae3d27d4eb4f
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc2b2ae3d27d4eb4f)}));
c.rip=next;return true;}
case UINT64_C(0x14004ad74): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ad77): {next=c.rip+4; // imul rdi, rax
m.imul(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ad7b): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004ad85): {next=c.rip+3; // xor rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ad88): {next=c.rip+7; // xor rcx, qword ptr [r15 + 0x238]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,15,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ad8f): {next=c.rip+7; // xor rcx, qword ptr [r15 + 0x228]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,15,-1,1,0,552,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ad96): {next=c.rip+7; // xor rcx, 0x43465354
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x43465354)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ad9d): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ada0): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ada4): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ada7): {next=c.rip+10; // movabs rcx, 0xc4ceb9fe1a85ec53
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004adb1): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004adb5): {next=c.rip+3; // mov r9, rdx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004adb8): {next=c.rip+4; // shr r9, 0x21
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004adbc): {next=c.rip+3; // xor r9, rdx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004adbf): {next=c.rip+5; // mov edx, 3
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}));
c.rip=next;return true;}
case UINT64_C(0x14004adc4): {next=c.rip+4; // imul r9, rcx
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004adc8): {next=c.rip+3; // mov ecx, r14d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004adcb): {next=c.rip+3; // mov r8, r9
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004adce): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004add2): {next=c.rip+3; // xor r8, r9
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004add5): {next=c.rip+5; // call 0x14004a680
{uint64_t target=next+UINT64_C(0xfffffffffffff8a6);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004adda): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x50]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004addf): {next=c.rip+5; // mov eax, 1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14004ade4): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x40]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ade9): {next=c.rip+6; // mov dword ptr [rbp + 0x524], esi
m.put(Operand{2,0,32,0,5,-1,1,0,1316,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004adef): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x48]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004adf4): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004adf8): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004adfa): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004adfc): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004adfd): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004adfe): {next=c.rip+5; // mov edx, 0x43465056
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x43465056)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae03): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffffe528);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004ae08): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004ae10): {next=c.rip+2; // push r12
m.push(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae12): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae14): {next=c.rip+4; // sub rsp, 0x38
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004ae18): {next=c.rip+9; // mov rax, qword ptr gs:[0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,-1,-1,1,1,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae21): {next=c.rip+3; // mov r15, rcx
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae24): {next=c.rip+6; // mov r12d, 0x2a60
m.put(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2a60)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae2a): {next=c.rip+3; // add r12, qword ptr [rax]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004ae2d): {next=c.rip+8; // mov eax, dword ptr [r12 + 0x524]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,12,-1,1,0,1316,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae35): {next=c.rip+4; // mov dword ptr [rsp + 0x58], eax
m.put(Operand{2,0,32,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae39): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004ae3b): {next=c.rip+6; // je 0x14004b228
if(m.condition(0))next=next+UINT64_C(0x3e7);
c.rip=next;return true;}
case UINT64_C(0x14004ae41): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae46): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004ae48): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbp
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae4d): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae52): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae57): {next=c.rip+5; // mov qword ptr [rsp + 0x28], r13
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae5c): {next=c.rip+5; // mov qword ptr [rsp + 0x20], r14
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae61): {next=c.rip+4; // lea r14d, [rax - 1]
m.put(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae65): {next=c.rip+3; // mov ecx, r14d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae68): {next=c.rip+5; // call 0x14004a590
{uint64_t target=next+UINT64_C(0xfffffffffffff723);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004ae6d): {next=c.rip+5; // mov edx, 1
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae72): {next=c.rip+3; // mov ecx, r14d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae75): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae78): {next=c.rip+5; // call 0x14004a590
{uint64_t target=next+UINT64_C(0xfffffffffffff713);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004ae7d): {next=c.rip+5; // mov edx, 2
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae82): {next=c.rip+3; // mov ecx, r14d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae85): {next=c.rip+3; // mov rdi, rax
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae88): {next=c.rip+5; // call 0x14004a590
{uint64_t target=next+UINT64_C(0xfffffffffffff703);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004ae8d): {next=c.rip+5; // mov edx, 3
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae92): {next=c.rip+3; // mov ecx, r14d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae95): {next=c.rip+3; // mov rsi, rax
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ae98): {next=c.rip+5; // call 0x14004a590
{uint64_t target=next+UINT64_C(0xfffffffffffff6f3);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004ae9d): {next=c.rip+4; // mov edx, dword ptr [rsp + 0x58]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aea1): {next=c.rip+8; // lea r10d, [r14*4]
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,-1,14,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aea9): {next=c.rip+3; // mov rbp, rax
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aeac): {next=c.rip+2; // mov ecx, edi
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aeae): {next=c.rip+10; // movabs r8, 0x9e3779b97f4a7c15
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004aeb8): {next=c.rip+3; // mov r13d, ebx
m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aebb): {next=c.rip+4; // imul rdx, r8
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004aebf): {next=c.rip+10; // movabs rax, 0xc2b2ae3d27d4eb4f
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc2b2ae3d27d4eb4f)}));
c.rip=next;return true;}
case UINT64_C(0x14004aec9): {next=c.rip+4; // lea r11, [r14 + r14*4]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,14,14,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aecd): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004aed1): {next=c.rip+10; // movabs rax, 0xbf58476d1ce4e5b9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xbf58476d1ce4e5b9)}));
c.rip=next;return true;}
case UINT64_C(0x14004aedb): {next=c.rip+10; // movabs rdi, 0x2545f4914f6cdd1d
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004aee5): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004aee8): {next=c.rip+4; // lea rcx, [rsi + 1]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aeec): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004aef0): {next=c.rip+2; // mov eax, ebx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004aef2): {next=c.rip+10; // movabs rsi, 0xc4ceb9fe1a85ec53
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004aefc): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004aeff): {next=c.rip+10; // movabs rcx, 0xd6e8feb86659fd93
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14004af09): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004af0d): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004af17): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004af1a): {next=c.rip+7; // xor rdx, qword ptr [r15 + 0x238]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,15,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004af21): {next=c.rip+7; // xor rdx, qword ptr [r15 + 0x228]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,15,-1,1,0,552,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004af28): {next=c.rip+7; // xor rdx, 0x43465354
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x43465354)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004af2f): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004af32): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004af36): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004af39): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004af3d): {next=c.rip+4; // lea ecx, [r10 + 1]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,10,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004af41): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004af44): {next=c.rip+4; // shr rbx, 0x21
m.shift(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004af48): {next=c.rip+3; // xor rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004af4b): {next=c.rip+4; // lea rax, [r14 + r14*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,14,14,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004af4f): {next=c.rip+8; // lea r9, [rax*8]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,-1,0,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004af57): {next=c.rip+8; // mov rax, qword ptr [r12 + 0x518]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,12,-1,1,0,1304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004af5f): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004af63): {next=c.rip+4; // imul rbx, rsi
m.imul(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004af67): {next=c.rip+3; // add rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004af6a): {next=c.rip+3; // movsxd r8, ecx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004af6d): {next=c.rip+8; // mov qword ptr [r12 + 0x518], rax
m.put(Operand{2,0,64,0,12,-1,1,0,1304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004af75): {next=c.rip+4; // shr rax, 0x1d
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14004af79): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004af7c): {next=c.rip+5; // mov byte ptr [r9 + r12 + 0x20], al
m.put(Operand{2,0,8,0,9,12,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004af81): {next=c.rip+8; // mov rdx, qword ptr [r12 + 0x510]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,12,-1,1,0,1296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004af89): {next=c.rip+9; // imul r8, qword ptr [r12 + 0x508]
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,12,-1,1,0,1288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004af92): {next=c.rip+4; // imul rax, rdx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004af96): {next=c.rip+3; // xor r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004af99): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004af9b): {next=c.rip+8; // xor r8, qword ptr [r12 + 0x500]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,12,-1,1,0,1280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004afa3): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004afa6): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004afa9): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004afad): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004afb0): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004afba): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004afbe): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004afc1): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004afc5): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004afc8): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004afcc): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004afcf): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004afd3): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004afd6): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004afd9): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004afdc): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004afdf): {next=c.rip+9; // cmp byte ptr [r12 + 0x520], 0
m.arithmetic(m.get(Operand{2,0,8,0,12,-1,1,0,1312,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004afe8): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004afec): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004aff6): {next=c.rip+4; // mov qword ptr [r12 + r11*8], rax
m.put(Operand{2,0,64,0,12,11,8,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004affa): {next=c.rip+8; // mov rax, qword ptr [r12 + 0x518]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,12,-1,1,0,1304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b002): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b006): {next=c.rip+4; // lea ecx, [r10 + 2]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,10,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b00a): {next=c.rip+3; // add rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004b00d): {next=c.rip+3; // movsxd r8, ecx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004b010): {next=c.rip+8; // mov qword ptr [r12 + 0x518], rax
m.put(Operand{2,0,64,0,12,-1,1,0,1304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b018): {next=c.rip+4; // shr rax, 0x1d
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b01c): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b01f): {next=c.rip+5; // mov byte ptr [r12 + r9 + 0x21], al
m.put(Operand{2,0,8,0,12,9,1,0,33,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b024): {next=c.rip+9; // imul r8, qword ptr [r12 + 0x508]
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,12,-1,1,0,1288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b02d): {next=c.rip+8; // mov rdx, qword ptr [r12 + 0x510]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,12,-1,1,0,1296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b035): {next=c.rip+4; // imul rax, rdx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b039): {next=c.rip+3; // xor r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b03c): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b03e): {next=c.rip+8; // xor r8, qword ptr [r12 + 0x500]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,12,-1,1,0,1280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b046): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b049): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b04c): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b050): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b053): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004b05d): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b061): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b064): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b068): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b06b): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b06f): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b072): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b076): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b079): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b07c): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004b07f): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b082): {next=c.rip+9; // cmp byte ptr [r12 + 0x520], 0
m.arithmetic(m.get(Operand{2,0,8,0,12,-1,1,0,1312,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004b08b): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b08f): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004b099): {next=c.rip+5; // mov qword ptr [r12 + r11*8 + 8], rax
m.put(Operand{2,0,64,0,12,11,8,0,8,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b09e): {next=c.rip+8; // mov rax, qword ptr [r12 + 0x518]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,12,-1,1,0,1304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b0a6): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b0aa): {next=c.rip+3; // add rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004b0ad): {next=c.rip+8; // mov qword ptr [r12 + 0x518], rax
m.put(Operand{2,0,64,0,12,-1,1,0,1304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b0b5): {next=c.rip+4; // shr rax, 0x1d
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b0b9): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b0bc): {next=c.rip+4; // lea eax, [r10 + 3]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,10,-1,1,0,3,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b0c0): {next=c.rip+5; // mov byte ptr [r12 + r9 + 0x22], cl
m.put(Operand{2,0,8,0,12,9,1,0,34,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b0c5): {next=c.rip+8; // mov rdx, qword ptr [r12 + 0x510]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,12,-1,1,0,1296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b0cd): {next=c.rip+4; // imul rcx, rdx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b0d1): {next=c.rip+3; // movsxd r8, eax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004b0d4): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b0d7): {next=c.rip+9; // imul r8, qword ptr [r12 + 0x508]
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,12,-1,1,0,1288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b0e0): {next=c.rip+3; // xor r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b0e3): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b0e6): {next=c.rip+8; // xor r8, qword ptr [r12 + 0x500]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,12,-1,1,0,1280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b0ee): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b0f2): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b0f5): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004b0ff): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b103): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b106): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b10a): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b10d): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b111): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b114): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b118): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b11b): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b11e): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004b121): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b124): {next=c.rip+9; // cmp byte ptr [r12 + 0x520], 0
m.arithmetic(m.get(Operand{2,0,8,0,12,-1,1,0,1312,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004b12d): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b131): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004b13b): {next=c.rip+5; // mov qword ptr [r12 + r11*8 + 0x10], rax
m.put(Operand{2,0,64,0,12,11,8,0,16,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b140): {next=c.rip+8; // mov rax, qword ptr [r12 + 0x518]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,12,-1,1,0,1304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b148): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b14c): {next=c.rip+4; // lea ecx, [r10 + 4]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,10,-1,1,0,4,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b150): {next=c.rip+3; // add rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004b153): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x30]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b158): {next=c.rip+8; // mov qword ptr [r12 + 0x518], rax
m.put(Operand{2,0,64,0,12,-1,1,0,1304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b160): {next=c.rip+4; // shr rax, 0x1d
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b164): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b168): {next=c.rip+5; // mov byte ptr [r12 + r9 + 0x23], r8b
m.put(Operand{2,0,8,0,12,9,1,0,35,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b16d): {next=c.rip+8; // mov rdx, qword ptr [r12 + 0x510]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,12,-1,1,0,1296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b175): {next=c.rip+4; // imul r8, rdx
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b179): {next=c.rip+3; // movsxd rax, ecx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004b17c): {next=c.rip+9; // imul rax, qword ptr [r12 + 0x508]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,12,-1,1,0,1288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b185): {next=c.rip+3; // xor r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b188): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b18a): {next=c.rip+8; // xor r8, qword ptr [r12 + 0x500]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,12,-1,1,0,1280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b192): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b195): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b198): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b19c): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b19f): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004b1a9): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b1ad): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b1b0): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b1b4): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b1b7): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b1bb): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x68]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b1c0): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b1c3): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b1c7): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b1ca): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b1cd): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004b1d0): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b1d3): {next=c.rip+9; // cmp byte ptr [r12 + 0x520], 0
m.arithmetic(m.get(Operand{2,0,8,0,12,-1,1,0,1312,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004b1dc): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b1e0): {next=c.rip+5; // mov qword ptr [r12 + r11*8 + 0x18], rax
m.put(Operand{2,0,64,0,12,11,8,0,24,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b1e5): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b1e8): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b1ec): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b1ef): {next=c.rip+8; // mov dword ptr [r12 + 0x524], r14d
m.put(Operand{2,0,32,0,12,-1,1,0,1316,UINT64_C(0x0)},m.get(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b1f7): {next=c.rip+5; // mov r14, qword ptr [rsp + 0x20]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b1fc): {next=c.rip+3; // cmp rax, rbp
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004b1ff): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x60]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b204): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x50]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b209): {next=c.rip+2; // jne 0x14004b233
if(m.condition(1))next=next+UINT64_C(0x28);
c.rip=next;return true;}
case UINT64_C(0x14004b20b): {next=c.rip+7; // mov eax, dword ptr [r15 + 0x738]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,15,-1,1,0,1848,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b212): {next=c.rip+3; // cmp r13, rax
m.arithmetic(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004b215): {next=c.rip+2; // ja 0x14004b241
if(m.condition(5))next=next+UINT64_C(0x2a);
c.rip=next;return true;}
case UINT64_C(0x14004b217): {next=c.rip+3; // mov eax, r13d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b21a): {next=c.rip+5; // mov r13, qword ptr [rsp + 0x28]
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b21f): {next=c.rip+4; // add rsp, 0x38
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x38)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004b223): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004b225): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004b227): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004b228): {next=c.rip+5; // mov edx, 0x4346454d
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4346454d)}));
c.rip=next;return true;}
case UINT64_C(0x14004b22d): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffffe0fe);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004b232): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004b233): {next=c.rip+5; // mov edx, 0x43464241
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x43464241)}));
c.rip=next;return true;}
case UINT64_C(0x14004b238): {next=c.rip+3; // mov rcx, r15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b23b): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffffe0f0);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004b240): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004b241): {next=c.rip+5; // mov edx, 0x43464242
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x43464242)}));
c.rip=next;return true;}
case UINT64_C(0x14004b246): {next=c.rip+3; // mov rcx, r15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b249): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffffe0e2);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004b24e): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004b250): {next=c.rip+2; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b252): {next=c.rip+1; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b253): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b254): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b255): {next=c.rip+2; // push r12
m.push(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b257): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b259): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b25b): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b25d): {next=c.rip+4; // sub rsp, 0x78
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x78)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004b261): {next=c.rip+7; // mov rax, qword ptr [rcx + 0x268]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,616,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b268): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b26b): {next=c.rip+7; // mov r15, qword ptr [rcx + 0x10b0]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b272): {next=c.rip+7; // mov r12, qword ptr [rcx + 0x210]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,528,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b279): {next=c.rip+7; // mov rbp, qword ptr [rcx + 0x260]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,608,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b280): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rax
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b285): {next=c.rip+7; // mov rax, qword ptr [rcx + 0x1170]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4464,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b28c): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rax
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b291): {next=c.rip+7; // mov rax, qword ptr [rcx + 0x270]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,624,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b298): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rax
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b29d): {next=c.rip+7; // mov rax, qword ptr [rcx + 0x278]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,632,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b2a4): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rax
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b2a9): {next=c.rip+7; // mov rax, qword ptr [rcx + 0x1178]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4472,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b2b0): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rax
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b2b5): {next=c.rip+7; // mov rax, qword ptr [rcx + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b2bc): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b2c1): {next=c.rip+7; // mov rax, qword ptr [rcx + 0x10c0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b2c8): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rax
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b2cd): {next=c.rip+6; // mov eax, dword ptr [rcx + 0x750]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,-1,1,0,1872,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b2d3): {next=c.rip+7; // mov dword ptr [rsp + 0xd0], eax
m.put(Operand{2,0,32,0,4,-1,1,0,208,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b2da): {next=c.rip+7; // movzx eax, byte ptr [rcx + 0x754]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,1876,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b2e1): {next=c.rip+7; // mov byte ptr [rsp + 0xc0], al
m.put(Operand{2,0,8,0,4,-1,1,0,192,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b2e8): {next=c.rip+7; // movzx eax, byte ptr [rcx + 0x10c8]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b2ef): {next=c.rip+7; // mov byte ptr [rsp + 0xc8], al
m.put(Operand{2,0,8,0,4,-1,1,0,200,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b2f6): {next=c.rip+5; // mov qword ptr [rsp + 0x20], r15
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b2fb): {next=c.rip+5; // mov qword ptr [rsp + 0x30], r12
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b300): {next=c.rip+5; // call 0x140049cc0
{uint64_t target=next+UINT64_C(0xffffffffffffe9bb);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004b305): {next=c.rip+7; // movsxd r9, dword ptr [rbx + 0x750]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,3,-1,1,0,1872,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004b30c): {next=c.rip+10; // movabs rsi, 0xff51afd7ed558ccd
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004b316): {next=c.rip+7; // mov r8, qword ptr [rbx + 0x258]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,600,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b31d): {next=c.rip+10; // movabs rdi, 0x9e3779b97f4a7c15
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004b327): {next=c.rip+7; // mov r11, qword ptr [rbx + 0x228]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,552,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b32e): {next=c.rip+3; // mov rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b331): {next=c.rip+7; // mov dword ptr [rsp + 0xd8], eax
m.put(Operand{2,0,32,0,4,-1,1,0,216,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b338): {next=c.rip+10; // movabs r14, 0xc4ceb9fe1a85ec53
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004b342): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b346): {next=c.rip+10; // movabs rax, 0x74009f6e12215379
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x74009f6e12215379)}));
c.rip=next;return true;}
case UINT64_C(0x14004b350): {next=c.rip+3; // add rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004b353): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b356): {next=c.rip+6; // xor rax, 0x504e5452
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x504e5452)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b35c): {next=c.rip+3; // xor rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b35f): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b362): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b366): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b369): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b36d): {next=c.rip+3; // mov r10, rcx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b370): {next=c.rip+4; // shr r10, 0x21
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b374): {next=c.rip+3; // xor r10, rcx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b377): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b37a): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b37e): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b381): {next=c.rip+10; // movabs rax, 0xd6e8feb86659fd93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14004b38b): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b38f): {next=c.rip+4; // imul r10, r14
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b393): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b396): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b39a): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b39d): {next=c.rip+4; // lea ecx, [r9 + 1]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,9,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b3a1): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b3a5): {next=c.rip+4; // imul rdx, r14
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b3a9): {next=c.rip+7; // movsxd rax, dword ptr [rbx + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,3,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004b3b0): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b3b4): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b3b7): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b3ba): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b3bd): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b3c1): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b3c4): {next=c.rip+8; // lea rax, [r8*8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,-1,8,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b3cc): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b3cf): {next=c.rip+7; // xor rcx, qword ptr [rbx + 0x940]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b3d6): {next=c.rip+7; // xor rcx, qword ptr [rbx + 0x930]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,2352,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b3dd): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b3e0): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b3e3): {next=c.rip+7; // xor rcx, qword ptr [rbx + 0x230]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b3ea): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b3ed): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b3f0): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b3f3): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b3f7): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b3fa): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b3fe): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b401): {next=c.rip+8; // mov r12d, dword ptr [rsp + 0xd0]
m.put(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,208,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b409): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b40d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b410): {next=c.rip+4; // imul rcx, r14
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b414): {next=c.rip+5; // lea eax, [r12 + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,12,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b419): {next=c.rip+6; // mov dword ptr [rbx + 0x750], eax
m.put(Operand{2,0,32,0,3,-1,1,0,1872,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b41f): {next=c.rip+3; // mov r13, rcx
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b422): {next=c.rip+4; // shr r13, 0x21
m.shift(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b426): {next=c.rip+3; // xor r13, rcx
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b429): {next=c.rip+4; // cmove r13, rdi
if(m.condition(0))m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b42d): {next=c.rip+3; // mov rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b430): {next=c.rip+5; // mov qword ptr [rsp + 0x28], r13
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b435): {next=c.rip+6; // xor rax, 0x464f524d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x464f524d)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b43b): {next=c.rip+7; // mov qword ptr [rbx + 0x258], r13
m.put(Operand{2,0,64,0,3,-1,1,0,600,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b442): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b445): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b449): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b44c): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b450): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b453): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b457): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b45a): {next=c.rip+4; // imul rdx, r14
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b45e): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b461): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b465): {next=c.rip+2; // xor al, dl
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004b467): {next=c.rip+2; // and al, 1
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004b469): {next=c.rip+6; // mov byte ptr [rbx + 0x754], al
m.put(Operand{2,0,8,0,3,-1,1,0,1876,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b46f): {next=c.rip+3; // mov rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b472): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b476): {next=c.rip+3; // xor rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b479): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b47d): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b480): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b484): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b487): {next=c.rip+4; // imul rcx, r14
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b48b): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b48e): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b492): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b495): {next=c.rip+7; // mov qword ptr [rbx + 0x260], rax
m.put(Operand{2,0,64,0,3,-1,1,0,608,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b49c): {next=c.rip+3; // mov rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b49f): {next=c.rip+6; // xor rax, 0x4c495645
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4c495645)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b4a5): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b4a8): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b4ac): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b4af): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b4b3): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b4b6): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b4ba): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b4bd): {next=c.rip+4; // imul rdx, r14
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b4c1): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b4c4): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b4c8): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b4cb): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b4cf): {next=c.rip+7; // mov qword ptr [rbx + 0x268], rax
m.put(Operand{2,0,64,0,3,-1,1,0,616,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b4d6): {next=c.rip+3; // mov rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b4d9): {next=c.rip+6; // xor rax, 0x544b5231
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x544b5231)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b4df): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b4e2): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b4e6): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b4e9): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b4ed): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b4f0): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b4f4): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b4f7): {next=c.rip+4; // imul rdx, r14
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b4fb): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b4fe): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b502): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b505): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b509): {next=c.rip+7; // mov qword ptr [rbx + 0x1170], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4464,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b510): {next=c.rip+3; // mov rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b513): {next=c.rip+6; // xor rax, 0x53544b4b
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x53544b4b)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b519): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b51c): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b520): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b523): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b527): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b52a): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b52e): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b531): {next=c.rip+4; // imul rdx, r14
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b535): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b538): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b53c): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b53f): {next=c.rip+7; // mov qword ptr [rbx + 0x270], rax
m.put(Operand{2,0,64,0,3,-1,1,0,624,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b546): {next=c.rip+3; // mov rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b549): {next=c.rip+6; // xor rax, 0x53544b53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x53544b53)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b54f): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b552): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b556): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b559): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b55d): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b560): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b564): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b567): {next=c.rip+4; // imul rdx, r14
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b56b): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b56e): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b572): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b575): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b579): {next=c.rip+7; // mov qword ptr [rbx + 0x278], rax
m.put(Operand{2,0,64,0,3,-1,1,0,632,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b580): {next=c.rip+3; // mov rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b583): {next=c.rip+6; // xor rax, 0x544b5232
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x544b5232)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b589): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b58c): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b590): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b593): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b597): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b59a): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b59e): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b5a1): {next=c.rip+4; // imul rdx, r14
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b5a5): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b5a8): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b5ac): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b5af): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b5b3): {next=c.rip+7; // mov qword ptr [rbx + 0x1178], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4472,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b5ba): {next=c.rip+3; // mov rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b5bd): {next=c.rip+6; // xor rax, 0x4354524c
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4354524c)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b5c3): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b5c6): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b5ca): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b5cd): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b5d1): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b5d4): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b5d8): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b5db): {next=c.rip+4; // imul rdx, r14
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b5df): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b5e2): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b5e6): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b5e9): {next=c.rip+7; // mov qword ptr [rbx + 0x10b0], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b5f0): {next=c.rip+3; // mov rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b5f3): {next=c.rip+6; // xor rax, 0x43545253
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x43545253)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b5f9): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b5fc): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b600): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b603): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b607): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b60a): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b60e): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b611): {next=c.rip+4; // imul rdx, r14
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b615): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b618): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b61c): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b61f): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b623): {next=c.rip+7; // mov qword ptr [rbx + 0x10b8], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b62a): {next=c.rip+3; // mov rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b62d): {next=c.rip+6; // xor rax, 0x43545254
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x43545254)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b633): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b636): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b63a): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b63d): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b641): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b644): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b648): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b64b): {next=c.rip+4; // imul rdx, r14
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b64f): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b652): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b656): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b659): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b65d): {next=c.rip+7; // mov qword ptr [rbx + 0x10c0], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b664): {next=c.rip+3; // mov rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b667): {next=c.rip+6; // xor rax, 0x4354464d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4354464d)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b66d): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b670): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b674): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b677): {next=c.rip+7; // mov rdi, qword ptr [rbx + 0x1190]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4496,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b67e): {next=c.rip+5; // mov r15, qword ptr [rsp + 0x40]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b683): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b687): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b68a): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b68e): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b691): {next=c.rip+4; // imul rdx, r14
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b695): {next=c.rip+7; // lea r14, [rbx + 0xa15]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,-1,1,0,2581,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b69c): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b69f): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b6a3): {next=c.rip+2; // xor al, dl
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004b6a5): {next=c.rip+2; // and al, 1
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004b6a7): {next=c.rip+6; // mov byte ptr [rbx + 0x10c8], al
m.put(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b6ad): {next=c.rip+3; // mov rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b6b0): {next=c.rip+5; // mov r13, qword ptr [rsp + 0x38]
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b6b5): {next=c.rip+4; // shr rax, 0x11
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b6b9): {next=c.rip+3; // and eax, 0x3f
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3f)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004b6bc): {next=c.rip+3; // add eax, 0x30
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x30)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14004b6bf): {next=c.rip+2; // xor esi, esi
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004b6c1): {next=c.rip+6; // mov dword ptr [rbx + 0x758], eax
m.put(Operand{2,0,32,0,3,-1,1,0,1880,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b6c7): {next=c.rip+3; // mov r11d, esi
m.put(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b6ca): {next=c.rip+8; // movzx esi, byte ptr [rsp + 0xc0]
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,192,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b6d2): {next=c.rip+4; // nop dword ptr [rax]

c.rip=next;return true;}
case UINT64_C(0x14004b6d6): {next=c.rip+10; // nop word ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x14004b6e0): {next=c.rip+4; // movzx r9d, byte ptr [r14]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b6e4): {next=c.rip+4; // lea ecx, [r11 + r12]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,11,12,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b6e8): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x288]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,648,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b6ef): {next=c.rip+4; // lea r14, [r14 + 1]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,14,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b6f3): {next=c.rip+7; // mov r10d, dword ptr [rbx + 0x750]
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,1872,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b6fa): {next=c.rip+3; // and ecx, 1
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004b6fd): {next=c.rip+3; // shl ecx, 8
m.shift(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},0);
c.rip=next;return true;}
case UINT64_C(0x14004b700): {next=c.rip+3; // add r10d, r11d
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14004b703): {next=c.rip+3; // add ecx, r11d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14004b706): {next=c.rip+4; // and r10d, 1
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004b70a): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b70e): {next=c.rip+4; // mov rdx, qword ptr [rax + rcx*8]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,1,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b712): {next=c.rip+3; // mov r8d, r11d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b715): {next=c.rip+7; // and r8d, 0x1ff
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1ff)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004b71c): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b71f): {next=c.rip+3; // mov eax, r8d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b722): {next=c.rip+4; // imul rax, r13
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b726): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b729): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b72c): {next=c.rip+3; // xor r9, rdx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b72f): {next=c.rip+3; // xor rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b732): {next=c.rip+3; // xor r9, rbp
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b735): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004b738): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b73f): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004b742): {next=c.rip+4; // cmovne r9, rcx
if(m.condition(1))m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b746): {next=c.rip+7; // inc qword ptr [rbx + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004b74d): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004b757): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b75b): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004b765): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004b768): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b76f): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b773): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b776): {next=c.rip+4; // mov byte ptr [r14 - 1], cl
m.put(Operand{2,0,8,0,14,-1,1,0,-1,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b77a): {next=c.rip+8; // imul rcx, qword ptr [rbx + 0x1170]
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,4464,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b782): {next=c.rip+8; // imul r8, qword ptr [rbx + 0x268]
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,616,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b78a): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b78d): {next=c.rip+7; // xor rcx, qword ptr [rbx + 0x260]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,608,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b794): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b797): {next=c.rip+3; // xor rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b79a): {next=c.rip+7; // cmp byte ptr [rbx + 0x754], 0
m.arithmetic(m.get(Operand{2,0,8,0,3,-1,1,0,1876,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004b7a1): {next=c.rip+4; // lea rdx, [rcx + r9]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,1,9,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b7a5): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b7a9): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x288]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,648,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b7b0): {next=c.rip+4; // shl r10d, 8
m.shift(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},0);
c.rip=next;return true;}
case UINT64_C(0x14004b7b4): {next=c.rip+3; // xor rdi, rdx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b7b7): {next=c.rip+3; // add r10d, r11d
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14004b7ba): {next=c.rip+3; // inc r11d
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004b7bd): {next=c.rip+4; // mov qword ptr [rax + r10*8], rdx
m.put(Operand{2,0,64,0,0,10,8,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b7c1): {next=c.rip+7; // cmp r11d, 0x100
m.arithmetic(m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x100)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004b7c8): {next=c.rip+6; // jl 0x14004b6e0
if(m.condition(6))next=next+UINT64_C(0xffffffffffffff12);
c.rip=next;return true;}
case UINT64_C(0x14004b7ce): {next=c.rip+7; // mov eax, dword ptr [rsp + 0xd8]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,216,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b7d5): {next=c.rip+5; // mov esi, 0
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b7da): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004b7dc): {next=c.rip+2; // jns 0x14004b7e2
if(m.condition(11))next=next+UINT64_C(0x4);
c.rip=next;return true;}
case UINT64_C(0x14004b7de): {next=c.rip+2; // mov eax, esi
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b7e0): {next=c.rip+2; // jmp 0x14004b7ec
next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x14004b7e2): {next=c.rip+5; // mov ecx, 0x3ff
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3ff)}));
c.rip=next;return true;}
case UINT64_C(0x14004b7e7): {next=c.rip+2; // cmp eax, ecx
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004b7e9): {next=c.rip+3; // cmovg eax, ecx
if(m.condition(8))m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b7ec): {next=c.rip+5; // mov r15, qword ptr [rsp + 0x20]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b7f1): {next=c.rip+3; // movsxd r14, eax
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004b7f4): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004b7f6): {next=c.rip+6; // jle 0x14004b8e6
if(m.condition(7))next=next+UINT64_C(0xea);
c.rip=next;return true;}
case UINT64_C(0x14004b7fc): {next=c.rip+7; // mov r8, qword ptr [rbx + 0x290]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,656,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b803): {next=c.rip+7; // lea r11, [rbx + 0xc15]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,-1,1,0,3093,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b80a): {next=c.rip+5; // mov r15, qword ptr [rsp + 0x48]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b80f): {next=c.rip+3; // mov r9, rsi
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b812): {next=c.rip+5; // mov r12, qword ptr [rsp + 0x50]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b817): {next=c.rip+10; // movabs rsi, 0x9e3779b97f4a7c15
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004b821): {next=c.rip+5; // mov r13, qword ptr [rsp + 0x58]
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b826): {next=c.rip+5; // mov ebp, 1
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14004b82b): {next=c.rip+5; // nop dword ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x14004b830): {next=c.rip+4; // movzx ecx, byte ptr [r11]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,11,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b834): {next=c.rip+4; // imul rcx, r13
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b838): {next=c.rip+3; // movsxd r10, ebp
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004b83b): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b83e): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b842): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b845): {next=c.rip+3; // xor rcx, r15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b848): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b84b): {next=c.rip+4; // shr rcx, 0x3a
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3a)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b84f): {next=c.rip+4; // xor rdx, qword ptr [r9 + r8]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,9,8,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b853): {next=c.rip+2; // test ecx, ecx
m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004b855): {next=c.rip+2; // je 0x14004b85a
if(m.condition(0))next=next+UINT64_C(0x3);
c.rip=next;return true;}
case UINT64_C(0x14004b857): {next=c.rip+3; // ror rdx, cl
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},3);
c.rip=next;return true;}
case UINT64_C(0x14004b85a): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b861): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004b86b): {next=c.rip+7; // inc qword ptr [rbx + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004b872): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b876): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004b879): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b880): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b884): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b888): {next=c.rip+3; // mov byte ptr [r11], r8b
m.put(Operand{2,0,8,0,11,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b88b): {next=c.rip+8; // imul r8, qword ptr [rbx + 0x1178]
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,4472,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b893): {next=c.rip+8; // imul r10, qword ptr [rbx + 0x278]
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,632,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b89b): {next=c.rip+3; // xor r8, r10
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b89e): {next=c.rip+7; // xor r8, qword ptr [rbx + 0x270]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,624,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b8a5): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b8a8): {next=c.rip+4; // shr rax, 0x3a
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3a)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b8ac): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004b8ae): {next=c.rip+2; // je 0x14004b8b5
if(m.condition(0))next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x14004b8b0): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b8b2): {next=c.rip+3; // rol rdx, cl
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},2);
c.rip=next;return true;}
case UINT64_C(0x14004b8b5): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x290]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,656,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b8bc): {next=c.rip+3; // xor rdx, r8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b8bf): {next=c.rip+2; // inc ebp
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004b8c1): {next=c.rip+3; // inc r11
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004b8c4): {next=c.rip+4; // mov qword ptr [r9 + rax], rdx
m.put(Operand{2,0,64,0,9,0,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b8c8): {next=c.rip+7; // mov r8, qword ptr [rbx + 0x290]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,656,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b8cf): {next=c.rip+4; // xor rdi, qword ptr [r9 + r8]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,9,8,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b8d3): {next=c.rip+4; // add r9, 8
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004b8d7): {next=c.rip+4; // sub r14, 1
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004b8db): {next=c.rip+6; // jne 0x14004b830
if(m.condition(1))next=next+UINT64_C(0xffffffffffffff4f);
c.rip=next;return true;}
case UINT64_C(0x14004b8e1): {next=c.rip+5; // mov r15, qword ptr [rsp + 0x20]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b8e6): {next=c.rip+5; // mov r12, qword ptr [rsp + 0x60]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b8eb): {next=c.rip+7; // lea r10, [rbx + 0x1141]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,-1,1,0,4417,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b8f2): {next=c.rip+5; // mov r13, qword ptr [rsp + 0x68]
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b8f7): {next=c.rip+7; // lea r11, [rbx + 0x10d8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,-1,1,0,4312,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b8fe): {next=c.rip+8; // movzx esi, byte ptr [rsp + 0xc8]
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,200,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b906): {next=c.rip+5; // mov ebp, 2
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}));
c.rip=next;return true;}
case UINT64_C(0x14004b90b): {next=c.rip+4; // lea r14d, [rbp + 5]
m.put(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,5,-1,1,0,5,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b90f): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14004b910): {next=c.rip+5; // movzx r9d, byte ptr [r10 - 1]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,10,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b915): {next=c.rip+4; // lea r8, [rbp - 1]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,5,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b919): {next=c.rip+4; // mov rcx, qword ptr [r11 - 8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,11,-1,1,0,-8,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b91d): {next=c.rip+4; // lea r11, [r11 + 0x10]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b921): {next=c.rip+4; // imul r9, r13
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b925): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b928): {next=c.rip+4; // lea r10, [r10 + 2]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,10,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b92c): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b930): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b933): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b936): {next=c.rip+4; // xor r9, qword ptr [r11 - 0x18]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,11,-1,1,0,-24,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b93a): {next=c.rip+3; // xor rax, r15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b93d): {next=c.rip+3; // xor r9, r15
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b940): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004b943): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b94a): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004b94d): {next=c.rip+4; // cmovne r9, rcx
if(m.condition(1))m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b951): {next=c.rip+7; // inc qword ptr [rbx + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004b958): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004b962): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b966): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004b970): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004b973): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b97a): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004b97e): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b981): {next=c.rip+4; // mov byte ptr [r10 - 3], cl
m.put(Operand{2,0,8,0,10,-1,1,0,-3,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b985): {next=c.rip+8; // imul rcx, qword ptr [rbx + 0x10c0]
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b98d): {next=c.rip+8; // imul r8, qword ptr [rbx + 0x10b8]
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b995): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b998): {next=c.rip+7; // xor rcx, qword ptr [rbx + 0x10b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b99f): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b9a2): {next=c.rip+3; // add rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004b9a5): {next=c.rip+3; // xor rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b9a8): {next=c.rip+7; // cmp byte ptr [rbx + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004b9af): {next=c.rip+4; // cmove rcx, rax
if(m.condition(0))m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b9b3): {next=c.rip+3; // mov rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b9b6): {next=c.rip+4; // mov qword ptr [r11 - 0x18], rcx
m.put(Operand{2,0,64,0,11,-1,1,0,-24,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b9ba): {next=c.rip+3; // xor rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b9bd): {next=c.rip+5; // movzx r8d, byte ptr [r10 - 2]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,10,-1,1,0,-2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b9c2): {next=c.rip+4; // mov rcx, qword ptr [r11 - 0x10]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,11,-1,1,0,-16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b9c6): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b9ca): {next=c.rip+4; // imul r8, r13
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b9ce): {next=c.rip+3; // xor r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b9d1): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b9d4): {next=c.rip+4; // xor r8, qword ptr [r11 - 0x10]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,11,-1,1,0,-16,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b9d8): {next=c.rip+3; // xor rax, r15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b9db): {next=c.rip+3; // xor r8, r15
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004b9de): {next=c.rip+3; // sub rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004b9e1): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b9e8): {next=c.rip+3; // test sil, sil
m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004b9eb): {next=c.rip+4; // cmovne r8, rcx
if(m.condition(1))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004b9ef): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004b9f9): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004b9fd): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004ba07): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004ba0a): {next=c.rip+3; // mov rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ba0d): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], rcx
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ba14): {next=c.rip+7; // inc qword ptr [rbx + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004ba1b): {next=c.rip+4; // shr rcx, 0x1b
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ba1f): {next=c.rip+3; // movzx edx, cl
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ba22): {next=c.rip+4; // mov byte ptr [r10 - 2], dl
m.put(Operand{2,0,8,0,10,-1,1,0,-2,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ba26): {next=c.rip+8; // imul rax, qword ptr [rbx + 0x10b8]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ba2e): {next=c.rip+8; // imul rdx, qword ptr [rbx + 0x10c0]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ba36): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ba39): {next=c.rip+7; // xor rdx, qword ptr [rbx + 0x10b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ba40): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ba43): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ba46): {next=c.rip+7; // cmp byte ptr [rbx + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004ba4d): {next=c.rip+4; // lea rcx, [rdx + r8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ba51): {next=c.rip+4; // cmove rcx, rax
if(m.condition(0))m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ba55): {next=c.rip+4; // add rbp, 2
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004ba59): {next=c.rip+3; // xor rdi, rcx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ba5c): {next=c.rip+4; // mov qword ptr [r11 - 0x10], rcx
m.put(Operand{2,0,64,0,11,-1,1,0,-16,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ba60): {next=c.rip+4; // sub r14, 1
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004ba64): {next=c.rip+6; // jne 0x14004b910
if(m.condition(1))next=next+UINT64_C(0xfffffffffffffea6);
c.rip=next;return true;}
case UINT64_C(0x14004ba6a): {next=c.rip+5; // mov r13, qword ptr [rsp + 0x28]
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ba6f): {next=c.rip+10; // movabs rbp, 0xff51afd7ed558ccd
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004ba79): {next=c.rip+5; // mov r12, qword ptr [rsp + 0x30]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ba7e): {next=c.rip+3; // mov rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ba81): {next=c.rip+6; // xor rax, 0x54524559
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x54524559)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ba87): {next=c.rip+10; // movabs r14, 0xc4ceb9fe1a85ec53
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004ba91): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ba94): {next=c.rip+5; // mov esi, 0
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ba99): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ba9d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004baa0): {next=c.rip+4; // imul rcx, rbp
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004baa4): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004baa7): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004baab): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004baae): {next=c.rip+4; // imul rdx, r14
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004bab2): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bab5): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bab9): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004babc): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bac0): {next=c.rip+7; // cmp dword ptr [rbx + 0x7a4], 0
m.arithmetic(m.get(Operand{2,0,32,0,3,-1,1,0,1956,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004bac7): {next=c.rip+7; // mov qword ptr [rbx + 0x210], rax
m.put(Operand{2,0,64,0,3,-1,1,0,528,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bace): {next=c.rip+2; // jbe 0x14004bb0f
if(m.condition(4))next=next+UINT64_C(0x3f);
c.rip=next;return true;}
case UINT64_C(0x14004bad0): {next=c.rip+3; // cmp esi, 0x20
m.arithmetic(m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x20)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004bad3): {next=c.rip+2; // jae 0x14004bb0f
if(m.condition(3))next=next+UINT64_C(0x3a);
c.rip=next;return true;}
case UINT64_C(0x14004bad5): {next=c.rip+2; // mov ecx, esi
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bad7): {next=c.rip+3; // mov eax, r12d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bada): {next=c.rip+2; // inc esi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004badc): {next=c.rip+7; // xor eax, dword ptr [rbx + rcx*8 + 0x7a8]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,32,0,3,1,8,0,1960,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004bae3): {next=c.rip+6; // xor eax, dword ptr [rbx + 0x210]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,32,0,3,-1,1,0,528,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004bae9): {next=c.rip+7; // mov dword ptr [rbx + rcx*8 + 0x7a8], eax
m.put(Operand{2,0,32,0,3,1,8,0,1960,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004baf0): {next=c.rip+3; // mov eax, r12d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004baf3): {next=c.rip+7; // xor eax, dword ptr [rbx + rcx*8 + 0x7ac]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,32,0,3,1,8,0,1964,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004bafa): {next=c.rip+6; // xor eax, dword ptr [rbx + 0x210]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,32,0,3,-1,1,0,528,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004bb00): {next=c.rip+7; // mov dword ptr [rbx + rcx*8 + 0x7ac], eax
m.put(Operand{2,0,32,0,3,1,8,0,1964,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bb07): {next=c.rip+6; // cmp esi, dword ptr [rbx + 0x7a4]
m.arithmetic(m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,3,-1,1,0,1956,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004bb0d): {next=c.rip+2; // jb 0x14004bad0
if(m.condition(2))next=next+UINT64_C(0xffffffffffffffc1);
c.rip=next;return true;}
case UINT64_C(0x14004bb0f): {next=c.rip+9; // mov rax, qword ptr gs:[0x58]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,-1,-1,1,1,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bb18): {next=c.rip+5; // mov edx, 0x2a60
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2a60)}));
c.rip=next;return true;}
case UINT64_C(0x14004bb1d): {next=c.rip+3; // mov rcx, qword ptr [rax]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bb20): {next=c.rip+8; // cmp dword ptr [rdx + rcx + 0x524], 0
m.arithmetic(m.get(Operand{2,0,32,0,2,1,1,0,1316,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004bb28): {next=c.rip+2; // je 0x14004bb32
if(m.condition(0))next=next+UINT64_C(0x8);
c.rip=next;return true;}
case UINT64_C(0x14004bb2a): {next=c.rip+3; // mov rcx, r13
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bb2d): {next=c.rip+5; // call 0x14004a730
{uint64_t target=next+UINT64_C(0xffffffffffffebfe);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004bb32): {next=c.rip+6; // mov ecx, dword ptr [rbx + 0x750]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,1872,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bb38): {next=c.rip+3; // xor rdi, r13
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bb3b): {next=c.rip+7; // inc qword ptr [rbx + 0x1150]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,3,-1,1,0,4432,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4432,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004bb42): {next=c.rip+2; // inc ecx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004bb44): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004bb4e): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004bb52): {next=c.rip+6; // mov eax, dword ptr [rbx + 0x8bc]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,2236,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bb58): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bb5b): {next=c.rip+3; // xor rcx, r13
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bb5e): {next=c.rip+7; // xor r13, qword ptr [rbx + 0x230]
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bb65): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bb68): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bb6c): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bb6f): {next=c.rip+4; // imul rax, rbp
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004bb73): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bb76): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bb7a): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bb7d): {next=c.rip+4; // imul rcx, r14
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004bb81): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bb84): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bb88): {next=c.rip+2; // xor eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004bb8a): {next=c.rip+6; // mov dword ptr [rbx + 0x8bc], eax
m.put(Operand{2,0,32,0,3,-1,1,0,2236,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bb90): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bb93): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bb97): {next=c.rip+3; // xor rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bb9a): {next=c.rip+4; // imul rax, rbp
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004bb9e): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bba1): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bba5): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bba8): {next=c.rip+4; // imul rcx, r14
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004bbac): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bbaf): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bbb3): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bbb6): {next=c.rip+7; // mov qword ptr [rbx + 0x1190], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4496,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bbbd): {next=c.rip+3; // mov rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bbc0): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bbc4): {next=c.rip+3; // xor rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bbc7): {next=c.rip+4; // imul rax, rbp
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004bbcb): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bbce): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bbd2): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bbd5): {next=c.rip+4; // imul rcx, r14
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004bbd9): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bbdc): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bbe0): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bbe3): {next=c.rip+7; // inc qword ptr [rbx + 0x760]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,3,-1,1,0,1888,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,1888,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004bbea): {next=c.rip+7; // mov qword ptr [rbx + 0x230], rax
m.put(Operand{2,0,64,0,3,-1,1,0,560,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bbf1): {next=c.rip+4; // add rsp, 0x78
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x78)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004bbf5): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004bbf7): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004bbf9): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004bbfb): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004bbfd): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004bbfe): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004bbff): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004bc00): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004bc01): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004bc10): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bc15): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bc16): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004bc1a): {next=c.rip+5; // call 0x1403a1490
{uint64_t target=next+UINT64_C(0x355871);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004bc1f): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bc22): {next=c.rip+5; // call 0x1403a1474
{uint64_t target=next+UINT64_C(0x35584d);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004bc27): {next=c.rip+7; // cmp rbx, 0x989680
m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x989680)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004bc2e): {next=c.rip+2; // jne 0x14004bc36
if(m.condition(1))next=next+UINT64_C(0x6);
c.rip=next;return true;}
case UINT64_C(0x14004bc30): {next=c.rip+4; // imul rbx, rax, 0x64
m.imul(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x64)});
c.rip=next;return true;}
case UINT64_C(0x14004bc34): {next=c.rip+2; // jmp 0x14004bc57
next=next+UINT64_C(0x21);
c.rip=next;return true;}
case UINT64_C(0x14004bc36): {next=c.rip+2; // cqo 
c.r[2]=(c.r[0]>>63)?~uint64_t(0):0;
c.rip=next;return true;}
case UINT64_C(0x14004bc38): {next=c.rip+3; // idiv rbx
m.signed_divide_accumulator(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bc3b): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bc3e): {next=c.rip+7; // imul rax, rdx, 0x3b9aca00
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3b9aca00)});
c.rip=next;return true;}
case UINT64_C(0x14004bc45): {next=c.rip+2; // cqo 
c.r[2]=(c.r[0]>>63)?~uint64_t(0):0;
c.rip=next;return true;}
case UINT64_C(0x14004bc47): {next=c.rip+3; // idiv rbx
m.signed_divide_accumulator(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bc4a): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bc4d): {next=c.rip+7; // imul rax, rcx, 0x3b9aca00
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3b9aca00)});
c.rip=next;return true;}
case UINT64_C(0x14004bc54): {next=c.rip+3; // add rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004bc57): {next=c.rip+3; // xor r8d, r8d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004bc5a): {next=c.rip+10; // movabs rax, 0x671ae3e65cd34f0d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x671ae3e65cd34f0d)}));
c.rip=next;return true;}
case UINT64_C(0x14004bc64): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bc69): {next=c.rip+10; // movabs r10, 0xff51afd7ed558ccd
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004bc73): {next=c.rip+10; // movabs r11, 0xc4ceb9fe1a85ec53
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004bc7d): {next=c.rip+4; // lea r9d, [r8 + 0x40]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bc81): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bc86): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004bc89): {next=c.rip+3; // inc r8
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004bc8c): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bc8f): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bc93): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bc96): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004bc9a): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bc9d): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bca1): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bca4): {next=c.rip+4; // imul rdx, r11
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004bca8): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bcab): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bcaf): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bcb2): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rax
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bcb7): {next=c.rip+4; // sub r9, 1
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004bcbb): {next=c.rip+2; // jne 0x14004bc81
if(m.condition(1))next=next+UINT64_C(0xffffffffffffffc4);
c.rip=next;return true;}
case UINT64_C(0x14004bcbd): {next=c.rip+5; // call 0x1403a1490
{uint64_t target=next+UINT64_C(0x3557ce);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004bcc2): {next=c.rip+3; // mov rdi, rax
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bcc5): {next=c.rip+5; // call 0x1403a1474
{uint64_t target=next+UINT64_C(0x3557aa);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004bcca): {next=c.rip+7; // cmp rdi, 0x989680
m.arithmetic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x989680)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004bcd1): {next=c.rip+2; // jne 0x14004bcd9
if(m.condition(1))next=next+UINT64_C(0x6);
c.rip=next;return true;}
case UINT64_C(0x14004bcd3): {next=c.rip+4; // imul rcx, rax, 0x64
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x64)});
c.rip=next;return true;}
case UINT64_C(0x14004bcd7): {next=c.rip+2; // jmp 0x14004bcfa
next=next+UINT64_C(0x21);
c.rip=next;return true;}
case UINT64_C(0x14004bcd9): {next=c.rip+2; // cqo 
c.r[2]=(c.r[0]>>63)?~uint64_t(0):0;
c.rip=next;return true;}
case UINT64_C(0x14004bcdb): {next=c.rip+3; // idiv rdi
m.signed_divide_accumulator(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bcde): {next=c.rip+3; // mov r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bce1): {next=c.rip+7; // imul rax, rdx, 0x3b9aca00
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3b9aca00)});
c.rip=next;return true;}
case UINT64_C(0x14004bce8): {next=c.rip+2; // cqo 
c.r[2]=(c.r[0]>>63)?~uint64_t(0):0;
c.rip=next;return true;}
case UINT64_C(0x14004bcea): {next=c.rip+3; // idiv rdi
m.signed_divide_accumulator(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bced): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bcf0): {next=c.rip+7; // imul rax, r8, 0x3b9aca00
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3b9aca00)});
c.rip=next;return true;}
case UINT64_C(0x14004bcf7): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004bcfa): {next=c.rip+3; // sub rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004bcfd): {next=c.rip+10; // movabs rax, 0x20c49ba5e353f7cf
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20c49ba5e353f7cf)}));
c.rip=next;return true;}
case UINT64_C(0x14004bd07): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x38]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bd0c): {next=c.rip+3; // imul rcx
m.signed_multiply_accumulator(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bd0f): {next=c.rip+4; // sar rdx, 7
{const auto dst=Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)};unsigned count=unsigned(m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x7)}))&63;if(count){uint64_t v=m.get(dst);bool neg=(v>>63)!=0;uint64_t result=count>=64?(neg?m.mask(64):0):uint64_t(m.signed_value(v,64)>>count);m.put(dst,result);m.bit(CF,count>=64?neg:((v>>(count-1))&1));m.zsp(result,64);c.defined&=~AF;if(count==1)m.bit(OF,false);else c.defined&=~OF;}}
c.rip=next;return true;}
case UINT64_C(0x14004bd13): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bd16): {next=c.rip+4; // shr rax, 0x3f
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3f)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bd1a): {next=c.rip+3; // add rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004bd1d): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x30]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bd22): {next=c.rip+4; // shr rdx, 0x3f
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3f)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bd26): {next=c.rip+3; // and eax, 1
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004bd29): {next=c.rip+3; // xor edx, 1
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004bd2c): {next=c.rip+2; // or eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004bd2e): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004bd32): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004bd33): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004bd40): {next=c.rip+4; // sub rsp, 8
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004bd44): {next=c.rip+3; // mov r10, rcx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bd47): {next=c.rip+6; // mov ecx, dword ptr [rcx + 0x1048]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,-1,1,0,4168,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bd4d): {next=c.rip+2; // test ecx, ecx
m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004bd4f): {next=c.rip+6; // je 0x14004bebb
if(m.condition(0))next=next+UINT64_C(0x166);
c.rip=next;return true;}
case UINT64_C(0x14004bd55): {next=c.rip+7; // mov r9d, dword ptr [r10 + 0x738]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,10,-1,1,0,1848,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bd5c): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bd5e): {next=c.rip+3; // imul eax, edx
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004bd61): {next=c.rip+3; // cmp eax, r9d
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004bd64): {next=c.rip+6; // jae 0x14004bebb
if(m.condition(3))next=next+UINT64_C(0x151);
c.rip=next;return true;}
case UINT64_C(0x14004bd6a): {next=c.rip+4; // lea r8d, [rcx + rax]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,0,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bd6e): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bd73): {next=c.rip+2; // mov ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bd75): {next=c.rip+3; // cmp r8d, r9d
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004bd78): {next=c.rip+10; // movabs rdx, 0x9e3779b97f4a7c15
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004bd82): {next=c.rip+4; // cmovbe r9d, r8d
if(m.condition(4))m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bd86): {next=c.rip+4; // imul rcx, rdx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004bd8a): {next=c.rip+10; // movabs rdx, 0xf2ecef0d613038a9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf2ecef0d613038a9)}));
c.rip=next;return true;}
case UINT64_C(0x14004bd94): {next=c.rip+3; // mov ebx, r9d
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bd97): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bd9a): {next=c.rip+2; // sub ebx, eax
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14004bd9c): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bd9f): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bda3): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bda6): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004bdb0): {next=c.rip+4; // imul rdx, rcx
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004bdb4): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bdb7): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bdbb): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bdbe): {next=c.rip+10; // movabs rdx, 0xc4ceb9fe1a85ec53
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004bdc8): {next=c.rip+4; // imul rcx, rdx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004bdcc): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bdcf): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bdd3): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bdd6): {next=c.rip+3; // mov r11, rdx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bdd9): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bddc): {next=c.rip+4; // shr r11, 0x10
m.shift(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x10)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bde0): {next=c.rip+4; // shr rcx, 8
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bde4): {next=c.rip+3; // xor r11b, cl
m.put(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004bde7): {next=c.rip+3; // xor r11b, dl
m.put(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004bdea): {next=c.rip+4; // movsx ecx, r11b
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8)));
c.rip=next;return true;}
case UINT64_C(0x14004bdee): {next=c.rip+4; // movd xmm1, ecx
{uint8_t v[16]{};uint32_t x=uint32_t(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));std::memcpy(v,&x,4);m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004bdf2): {next=c.rip+4; // punpcklbw xmm1, xmm1
{uint8_t x[16],y[16],z[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},y);for(int k=0;k<8;k++){std::memcpy(z+k*2,x+k*1,1);std::memcpy(z+k*2+1,y+k*1,1);}m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},z);}
c.rip=next;return true;}
case UINT64_C(0x14004bdf6): {next=c.rip+4; // punpcklwd xmm1, xmm1
{uint8_t x[16],y[16],z[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},y);for(int k=0;k<4;k++){std::memcpy(z+k*4,x+k*2,2);std::memcpy(z+k*4+2,y+k*2,2);}m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},z);}
c.rip=next;return true;}
case UINT64_C(0x14004bdfa): {next=c.rip+5; // pshufd xmm1, xmm1, 0
{uint8_t x[16],z[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);uint64_t control=m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)});for(int k=0;k<4;k++)std::memcpy(z+4*k,x+4*((control>>(2*k))&3),4);m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},z);}
c.rip=next;return true;}
case UINT64_C(0x14004bdff): {next=c.rip+3; // cmp eax, r9d
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004be02): {next=c.rip+6; // jae 0x14004beb6
if(m.condition(3))next=next+UINT64_C(0xae);
c.rip=next;return true;}
case UINT64_C(0x14004be08): {next=c.rip+4; // mov qword ptr [rsp], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004be0c): {next=c.rip+3; // cmp ebx, 0x40
m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x40)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004be0f): {next=c.rip+6; // jb 0x14004bea0
if(m.condition(2))next=next+UINT64_C(0x8b);
c.rip=next;return true;}
case UINT64_C(0x14004be15): {next=c.rip+7; // lea rdi, [r10 + 0x730]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,10,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004be1c): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004be1e): {next=c.rip+3; // mov r8, qword ptr [rdi]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004be21): {next=c.rip+4; // lea edx, [r9 - 1]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,9,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004be25): {next=c.rip+3; // add rdx, r8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004be28): {next=c.rip+3; // add rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004be2b): {next=c.rip+3; // cmp rcx, rdi
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004be2e): {next=c.rip+2; // ja 0x14004be35
if(m.condition(5))next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x14004be30): {next=c.rip+3; // cmp rdx, rdi
m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004be33): {next=c.rip+2; // jae 0x14004bea0
if(m.condition(3))next=next+UINT64_C(0x6b);
c.rip=next;return true;}
case UINT64_C(0x14004be35): {next=c.rip+3; // and ebx, 0x3f
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3f)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004be38): {next=c.rip+3; // mov edi, r9d
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004be3b): {next=c.rip+2; // sub edi, ebx
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14004be3d): {next=c.rip+3; // lea ebx, [rax + 0x20]
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004be40): {next=c.rip+6; // movdqu xmm0, xmmword ptr [rax + r8]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,0,8,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004be46): {next=c.rip+3; // lea ecx, [rbx - 0x10]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,3,-1,1,0,-16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004be49): {next=c.rip+4; // pxor xmm0, xmm1
{uint8_t x[16],y[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},y);for(int k=0;k<16;k++)x[k]^=y[k];m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);}
c.rip=next;return true;}
case UINT64_C(0x14004be4d): {next=c.rip+6; // movdqu xmmword ptr [rax + r8], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,0,8,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004be53): {next=c.rip+3; // add eax, 0x40
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x40)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14004be56): {next=c.rip+6; // movdqu xmm0, xmmword ptr [rcx + r8]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,1,8,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004be5c): {next=c.rip+4; // pxor xmm0, xmm1
{uint8_t x[16],y[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},y);for(int k=0;k<16;k++)x[k]^=y[k];m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);}
c.rip=next;return true;}
case UINT64_C(0x14004be60): {next=c.rip+6; // movdqu xmmword ptr [rcx + r8], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,1,8,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004be66): {next=c.rip+3; // lea ecx, [rbx + 0x10]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,3,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004be69): {next=c.rip+6; // movdqu xmm0, xmmword ptr [rbx + r8]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,3,8,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004be6f): {next=c.rip+4; // pxor xmm0, xmm1
{uint8_t x[16],y[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},y);for(int k=0;k<16;k++)x[k]^=y[k];m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);}
c.rip=next;return true;}
case UINT64_C(0x14004be73): {next=c.rip+6; // movdqu xmmword ptr [rbx + r8], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,3,8,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004be79): {next=c.rip+3; // lea ebx, [rbx + 0x40]
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,3,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004be7c): {next=c.rip+6; // movdqu xmm0, xmmword ptr [rcx + r8]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,1,8,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004be82): {next=c.rip+4; // pxor xmm0, xmm1
{uint8_t x[16],y[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},y);for(int k=0;k<16;k++)x[k]^=y[k];m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);}
c.rip=next;return true;}
case UINT64_C(0x14004be86): {next=c.rip+6; // movdqu xmmword ptr [rcx + r8], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,1,8,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004be8c): {next=c.rip+2; // cmp eax, edi
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004be8e): {next=c.rip+2; // jb 0x14004be40
if(m.condition(2))next=next+UINT64_C(0xffffffffffffffb0);
c.rip=next;return true;}
case UINT64_C(0x14004be90): {next=c.rip+3; // cmp eax, r9d
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004be93): {next=c.rip+2; // jae 0x14004beb2
if(m.condition(3))next=next+UINT64_C(0x1d);
c.rip=next;return true;}
case UINT64_C(0x14004be95): {next=c.rip+11; // nop word ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x14004bea0): {next=c.rip+7; // mov rcx, qword ptr [r10 + 0x730]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,10,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bea7): {next=c.rip+4; // xor byte ptr [rax + rcx], r11b
m.put(Operand{2,0,8,0,0,1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,8,0,0,1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004beab): {next=c.rip+2; // inc eax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004bead): {next=c.rip+3; // cmp eax, r9d
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004beb0): {next=c.rip+2; // jb 0x14004bea0
if(m.condition(2))next=next+UINT64_C(0xffffffffffffffee);
c.rip=next;return true;}
case UINT64_C(0x14004beb2): {next=c.rip+4; // mov rdi, qword ptr [rsp]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004beb6): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x10]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bebb): {next=c.rip+4; // add rsp, 8
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004bebf): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004bec0): {next=c.rip+4; // sub rsp, 8
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004bec4): {next=c.rip+8; // cmp qword ptr [rcx + 0x11e8], 0
m.arithmetic(m.get(Operand{2,0,64,0,1,-1,1,0,4584,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004becc): {next=c.rip+3; // mov r9, rcx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004becf): {next=c.rip+6; // je 0x14004c06b
if(m.condition(0))next=next+UINT64_C(0x196);
c.rip=next;return true;}
case UINT64_C(0x14004bed5): {next=c.rip+6; // mov ecx, dword ptr [rcx + 0x11f0]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,-1,1,0,4592,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bedb): {next=c.rip+2; // test ecx, ecx
m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004bedd): {next=c.rip+6; // je 0x14004c06b
if(m.condition(0))next=next+UINT64_C(0x188);
c.rip=next;return true;}
case UINT64_C(0x14004bee3): {next=c.rip+3; // cmp edx, 0x4f
m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4f)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004bee6): {next=c.rip+6; // jae 0x14004c06b
if(m.condition(3))next=next+UINT64_C(0x17f);
c.rip=next;return true;}
case UINT64_C(0x14004beec): {next=c.rip+7; // mov r8d, dword ptr [r9 + 0x738]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,9,-1,1,0,1848,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bef3): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bef5): {next=c.rip+3; // imul eax, edx
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004bef8): {next=c.rip+4; // lea r10d, [rcx + rax]
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,0,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004befc): {next=c.rip+3; // cmp eax, r8d
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004beff): {next=c.rip+6; // jae 0x14004c06b
if(m.condition(3))next=next+UINT64_C(0x166);
c.rip=next;return true;}
case UINT64_C(0x14004bf05): {next=c.rip+2; // mov ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bf07): {next=c.rip+3; // cmp r10d, r8d
m.arithmetic(m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004bf0a): {next=c.rip+10; // movabs rdx, 0x9e3779b97f4a7c15
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004bf14): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bf19): {next=c.rip+4; // cmovbe r8d, r10d
if(m.condition(4))m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bf1d): {next=c.rip+4; // imul rcx, rdx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004bf21): {next=c.rip+10; // movabs rdx, 0xf2ecef0d703934a8
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf2ecef0d703934a8)}));
c.rip=next;return true;}
case UINT64_C(0x14004bf2b): {next=c.rip+3; // mov ebx, r8d
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bf2e): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bf31): {next=c.rip+2; // sub ebx, eax
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14004bf33): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bf36): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bf3a): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bf3d): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004bf47): {next=c.rip+4; // imul rdx, rcx
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004bf4b): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bf4e): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bf52): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bf55): {next=c.rip+10; // movabs rdx, 0xc4ceb9fe1a85ec53
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004bf5f): {next=c.rip+4; // imul rcx, rdx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004bf63): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bf66): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bf6a): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004bf6d): {next=c.rip+3; // mov r11, rdx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bf70): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bf73): {next=c.rip+4; // shr r11, 0x15
m.shift(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x15)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bf77): {next=c.rip+4; // shr rcx, 9
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x9)},1);
c.rip=next;return true;}
case UINT64_C(0x14004bf7b): {next=c.rip+3; // xor r11b, cl
m.put(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004bf7e): {next=c.rip+3; // xor r11b, dl
m.put(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004bf81): {next=c.rip+4; // movsx ecx, r11b
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8)));
c.rip=next;return true;}
case UINT64_C(0x14004bf85): {next=c.rip+4; // movd xmm2, ecx
{uint8_t v[16]{};uint32_t x=uint32_t(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));std::memcpy(v,&x,4);m.vector_put(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004bf89): {next=c.rip+4; // punpcklbw xmm2, xmm2
{uint8_t x[16],y[16],z[16];m.vector_get(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);m.vector_get(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)},y);for(int k=0;k<8;k++){std::memcpy(z+k*2,x+k*1,1);std::memcpy(z+k*2+1,y+k*1,1);}m.vector_put(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)},z);}
c.rip=next;return true;}
case UINT64_C(0x14004bf8d): {next=c.rip+4; // punpcklwd xmm2, xmm2
{uint8_t x[16],y[16],z[16];m.vector_get(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);m.vector_get(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)},y);for(int k=0;k<4;k++){std::memcpy(z+k*4,x+k*2,2);std::memcpy(z+k*4+2,y+k*2,2);}m.vector_put(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)},z);}
c.rip=next;return true;}
case UINT64_C(0x14004bf91): {next=c.rip+5; // pshufd xmm2, xmm2, 0
{uint8_t x[16],z[16];m.vector_get(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);uint64_t control=m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)});for(int k=0;k<4;k++)std::memcpy(z+4*k,x+4*((control>>(2*k))&3),4);m.vector_put(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)},z);}
c.rip=next;return true;}
case UINT64_C(0x14004bf96): {next=c.rip+3; // cmp eax, r8d
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004bf99): {next=c.rip+6; // jae 0x14004c066
if(m.condition(3))next=next+UINT64_C(0xc7);
c.rip=next;return true;}
case UINT64_C(0x14004bf9f): {next=c.rip+4; // mov qword ptr [rsp], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bfa3): {next=c.rip+3; // cmp ebx, 0x40
m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x40)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004bfa6): {next=c.rip+6; // jb 0x14004c050
if(m.condition(2))next=next+UINT64_C(0xa4);
c.rip=next;return true;}
case UINT64_C(0x14004bfac): {next=c.rip+7; // lea rdi, [r9 + 0x730]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,9,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bfb3): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bfb5): {next=c.rip+3; // mov r10, qword ptr [rdi]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,7,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bfb8): {next=c.rip+4; // lea edx, [r8 - 1]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bfbc): {next=c.rip+3; // add rdx, r10
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004bfbf): {next=c.rip+3; // add rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004bfc2): {next=c.rip+3; // cmp rcx, rdi
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004bfc5): {next=c.rip+2; // ja 0x14004bfd0
if(m.condition(5))next=next+UINT64_C(0x9);
c.rip=next;return true;}
case UINT64_C(0x14004bfc7): {next=c.rip+3; // cmp rdx, rdi
m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004bfca): {next=c.rip+6; // jae 0x14004c050
if(m.condition(3))next=next+UINT64_C(0x80);
c.rip=next;return true;}
case UINT64_C(0x14004bfd0): {next=c.rip+3; // and ebx, 0x3f
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3f)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004bfd3): {next=c.rip+3; // mov edi, r8d
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bfd6): {next=c.rip+2; // sub edi, ebx
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14004bfd8): {next=c.rip+3; // lea ebx, [rax + 0x20]
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bfdb): {next=c.rip+5; // nop dword ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x14004bfe0): {next=c.rip+6; // movdqu xmm0, xmmword ptr [rax + r10]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,0,10,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004bfe6): {next=c.rip+3; // lea ecx, [rbx - 0x10]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,3,-1,1,0,-16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004bfe9): {next=c.rip+4; // movdqa xmm1, xmm2
{if((Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16)||(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16))throw Fault(4,c.rip,"unaligned MOVDQA");uint8_t v[16];m.vector_get(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004bfed): {next=c.rip+4; // pxor xmm1, xmm0
{uint8_t x[16],y[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},y);for(int k=0;k<16;k++)x[k]^=y[k];m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);}
c.rip=next;return true;}
case UINT64_C(0x14004bff1): {next=c.rip+6; // movdqu xmmword ptr [rax + r10], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,0,10,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004bff7): {next=c.rip+3; // add eax, 0x40
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x40)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14004bffa): {next=c.rip+4; // movdqa xmm1, xmm2
{if((Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16)||(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16))throw Fault(4,c.rip,"unaligned MOVDQA");uint8_t v[16];m.vector_get(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004bffe): {next=c.rip+6; // movdqu xmm0, xmmword ptr [rcx + r10]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,1,10,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
default:return false;
}}
}
