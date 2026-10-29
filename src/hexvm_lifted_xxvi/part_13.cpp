// Generated literal x64 semantics.
#include "../pafet_hexvm_cpu_xxvi.h"
namespace pafet_xxiv {
bool hexvm_part_13(Machine& m){auto& c=m.c;auto& next=m.next;switch(m.canonical(c.rip)){
case UINT64_C(0x14004c004): {next=c.rip+4; // pxor xmm1, xmm0
{uint8_t x[16],y[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},y);for(int k=0;k<16;k++)x[k]^=y[k];m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);}
c.rip=next;return true;}
case UINT64_C(0x14004c008): {next=c.rip+6; // movdqu xmmword ptr [rcx + r10], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,1,10,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004c00e): {next=c.rip+3; // lea ecx, [rbx + 0x10]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,3,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c011): {next=c.rip+4; // movdqa xmm1, xmm2
{if((Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16)||(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)}.kind==2&&m.address(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)})%16))throw Fault(4,c.rip,"unaligned MOVDQA");uint8_t v[16];m.vector_get(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004c015): {next=c.rip+6; // movdqu xmm0, xmmword ptr [rbx + r10]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,3,10,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004c01b): {next=c.rip+4; // pxor xmm0, xmm2
{uint8_t x[16],y[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);m.vector_get(Operand{3,2,128,0,-1,-1,1,0,0,UINT64_C(0x0)},y);for(int k=0;k<16;k++)x[k]^=y[k];m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);}
c.rip=next;return true;}
case UINT64_C(0x14004c01f): {next=c.rip+6; // movdqu xmmword ptr [rbx + r10], xmm0
{uint8_t v[16];m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,3,10,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004c025): {next=c.rip+3; // lea ebx, [rbx + 0x40]
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,3,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c028): {next=c.rip+6; // movdqu xmm0, xmmword ptr [rcx + r10]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,1,10,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004c02e): {next=c.rip+4; // pxor xmm1, xmm0
{uint8_t x[16],y[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},y);for(int k=0;k<16;k++)x[k]^=y[k];m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);}
c.rip=next;return true;}
case UINT64_C(0x14004c032): {next=c.rip+6; // movdqu xmmword ptr [rcx + r10], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,1,10,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004c038): {next=c.rip+2; // cmp eax, edi
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c03a): {next=c.rip+2; // jb 0x14004bfe0
if(m.condition(2))next=next+UINT64_C(0xffffffffffffffa4);
c.rip=next;return true;}
case UINT64_C(0x14004c03c): {next=c.rip+3; // cmp eax, r8d
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c03f): {next=c.rip+2; // jae 0x14004c062
if(m.condition(3))next=next+UINT64_C(0x21);
c.rip=next;return true;}
case UINT64_C(0x14004c041): {next=c.rip+4; // nop dword ptr [rax]

c.rip=next;return true;}
case UINT64_C(0x14004c045): {next=c.rip+11; // nop word ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x14004c050): {next=c.rip+7; // mov rcx, qword ptr [r9 + 0x730]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,9,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c057): {next=c.rip+4; // xor byte ptr [rax + rcx], r11b
m.put(Operand{2,0,8,0,0,1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,8,0,0,1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004c05b): {next=c.rip+2; // inc eax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004c05d): {next=c.rip+3; // cmp eax, r8d
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c060): {next=c.rip+2; // jb 0x14004c050
if(m.condition(2))next=next+UINT64_C(0xffffffffffffffee);
c.rip=next;return true;}
case UINT64_C(0x14004c062): {next=c.rip+4; // mov rdi, qword ptr [rsp]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c066): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x10]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c06b): {next=c.rip+4; // add rsp, 8
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004c06f): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004c070): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c075): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c076): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004c07a): {next=c.rip+7; // mov rax, qword ptr [rcx + 0x11e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4584,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c081): {next=c.rip+3; // cmp edx, 0x4f
m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4f)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c084): {next=c.rip+5; // mov edi, 0x4e
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4e)}));
c.rip=next;return true;}
case UINT64_C(0x14004c089): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c08c): {next=c.rip+3; // cmovb edi, edx
if(m.condition(2))m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c08f): {next=c.rip+6; // mov dword ptr [rcx + 0x11f4], edi
m.put(Operand{2,0,32,0,1,-1,1,0,4596,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c095): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14004c098): {next=c.rip+2; // je 0x14004c0ca
if(m.condition(0))next=next+UINT64_C(0x30);
c.rip=next;return true;}
case UINT64_C(0x14004c09a): {next=c.rip+7; // cmp dword ptr [rcx + 0x11f0], 0
m.arithmetic(m.get(Operand{2,0,32,0,1,-1,1,0,4592,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c0a1): {next=c.rip+2; // je 0x14004c0ca
if(m.condition(0))next=next+UINT64_C(0x27);
c.rip=next;return true;}
case UINT64_C(0x14004c0a3): {next=c.rip+3; // cmp edi, 0x4f
m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4f)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c0a6): {next=c.rip+2; // jae 0x14004c0ca
if(m.condition(3))next=next+UINT64_C(0x22);
c.rip=next;return true;}
case UINT64_C(0x14004c0a8): {next=c.rip+4; // cmp byte ptr [rdi + rax], 0
m.arithmetic(m.get(Operand{2,0,8,0,7,0,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004c0ac): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c0b1): {next=c.rip+2; // jne 0x14004c0c5
if(m.condition(1))next=next+UINT64_C(0x12);
c.rip=next;return true;}
case UINT64_C(0x14004c0b3): {next=c.rip+2; // mov edx, edi
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c0b5): {next=c.rip+5; // call 0x14004bec0
{uint64_t target=next+UINT64_C(0xfffffffffffffe06);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c0ba): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x11e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4584,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c0c1): {next=c.rip+4; // mov byte ptr [rdi + rax], 1
m.put(Operand{2,0,8,0,7,0,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14004c0c5): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x30]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c0ca): {next=c.rip+3; // lea edx, [rdi + 1]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,7,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c0cd): {next=c.rip+3; // cmp edx, 0x4f
m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4f)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c0d0): {next=c.rip+2; // jae 0x14004c102
if(m.condition(3))next=next+UINT64_C(0x30);
c.rip=next;return true;}
case UINT64_C(0x14004c0d2): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x11e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4584,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c0d9): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14004c0dc): {next=c.rip+2; // je 0x14004c102
if(m.condition(0))next=next+UINT64_C(0x24);
c.rip=next;return true;}
case UINT64_C(0x14004c0de): {next=c.rip+7; // cmp dword ptr [rbx + 0x11f0], 0
m.arithmetic(m.get(Operand{2,0,32,0,3,-1,1,0,4592,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c0e5): {next=c.rip+2; // je 0x14004c102
if(m.condition(0))next=next+UINT64_C(0x1b);
c.rip=next;return true;}
case UINT64_C(0x14004c0e7): {next=c.rip+4; // cmp byte ptr [rdx + rax], 0
m.arithmetic(m.get(Operand{2,0,8,0,2,0,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004c0eb): {next=c.rip+2; // mov edi, edx
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c0ed): {next=c.rip+2; // jne 0x14004c102
if(m.condition(1))next=next+UINT64_C(0x13);
c.rip=next;return true;}
case UINT64_C(0x14004c0ef): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c0f2): {next=c.rip+5; // call 0x14004bec0
{uint64_t target=next+UINT64_C(0xfffffffffffffdc9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c0f7): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x11e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4584,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c0fe): {next=c.rip+4; // mov byte ptr [rdi + rax], 1
m.put(Operand{2,0,8,0,7,0,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14004c102): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x38]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c107): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004c10b): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004c10c): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004c110): {next=c.rip+2; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c112): {next=c.rip+4; // sub rsp, 0x40
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x40)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004c116): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c119): {next=c.rip+3; // mov r10d, edx
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c11c): {next=c.rip+6; // mov ecx, dword ptr [rcx + 0x1048]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,-1,1,0,4168,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c122): {next=c.rip+2; // test ecx, ecx
m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004c124): {next=c.rip+6; // je 0x14004c3b9
if(m.condition(0))next=next+UINT64_C(0x28f);
c.rip=next;return true;}
case UINT64_C(0x14004c12a): {next=c.rip+6; // mov eax, dword ptr [rbx + 0x738]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,1848,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c130): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004c132): {next=c.rip+6; // je 0x14004c3b9
if(m.condition(0))next=next+UINT64_C(0x281);
c.rip=next;return true;}
case UINT64_C(0x14004c138): {next=c.rip+5; // mov qword ptr [rsp + 0x50], rbp
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c13d): {next=c.rip+5; // mov qword ptr [rsp + 0x58], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c142): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c147): {next=c.rip+5; // mov qword ptr [rsp + 0x38], r12
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c14c): {next=c.rip+5; // mov qword ptr [rsp + 0x30], r13
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c151): {next=c.rip+5; // mov qword ptr [rsp + 0x20], r15
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c156): {next=c.rip+3; // cmp r8d, eax
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c159): {next=c.rip+2; // jb 0x14004c15f
if(m.condition(2))next=next+UINT64_C(0x4);
c.rip=next;return true;}
case UINT64_C(0x14004c15b): {next=c.rip+4; // lea r8d, [rax - 1]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c15f): {next=c.rip+7; // mov r11d, dword ptr [rbx + 0x11f0]
m.put(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,4592,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c166): {next=c.rip+3; // cmp r10d, r8d
m.arithmetic(m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c169): {next=c.rip+4; // cmova r10d, r8d
if(m.condition(5))m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c16d): {next=c.rip+2; // dec eax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,true));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004c16f): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004c171): {next=c.rip+2; // add eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14004c173): {next=c.rip+2; // div ecx
m.divide(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c175): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004c177): {next=c.rip+2; // mov esi, eax
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c179): {next=c.rip+3; // mov eax, r10d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c17c): {next=c.rip+2; // div ecx
m.divide(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c17e): {next=c.rip+4; // lea r13d, [rsi - 1]
m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,6,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c182): {next=c.rip+2; // cmp eax, esi
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c184): {next=c.rip+3; // mov r15d, r13d
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c187): {next=c.rip+3; // mov edi, r13d
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c18a): {next=c.rip+4; // cmovb r15d, eax
if(m.condition(2))m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c18e): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004c190): {next=c.rip+3; // mov eax, r8d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c193): {next=c.rip+2; // div ecx
m.divide(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c195): {next=c.rip+2; // cmp eax, esi
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c197): {next=c.rip+3; // cmovb edi, eax
if(m.condition(2))m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c19a): {next=c.rip+3; // xor r9d, r9d
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004c19d): {next=c.rip+3; // mov ebp, r9d
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c1a0): {next=c.rip+3; // mov edx, r9d
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c1a3): {next=c.rip+3; // test r11d, r11d
m.logic(m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004c1a6): {next=c.rip+2; // je 0x14004c1cb
if(m.condition(0))next=next+UINT64_C(0x23);
c.rip=next;return true;}
case UINT64_C(0x14004c1a8): {next=c.rip+3; // mov eax, r10d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c1ab): {next=c.rip+3; // div r11d
m.divide(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c1ae): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004c1b0): {next=c.rip+2; // mov ebp, eax
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c1b2): {next=c.rip+3; // mov eax, r8d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c1b5): {next=c.rip+3; // div r11d
m.divide(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c1b8): {next=c.rip+3; // cmp ebp, 0x4f
m.arithmetic(m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4f)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c1bb): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c1bd): {next=c.rip+5; // mov eax, 0x4e
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4e)}));
c.rip=next;return true;}
case UINT64_C(0x14004c1c2): {next=c.rip+3; // cmovae ebp, eax
if(m.condition(3))m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c1c5): {next=c.rip+3; // cmp edx, 0x4f
m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4f)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c1c8): {next=c.rip+3; // cmovae edx, eax
if(m.condition(3))m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c1cb): {next=c.rip+2; // mov ecx, edi
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c1cd): {next=c.rip+3; // sub ecx, r15d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14004c1d0): {next=c.rip+3; // cmp ecx, 1
m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c1d3): {next=c.rip+2; // ja 0x14004c1f8
if(m.condition(5))next=next+UINT64_C(0x23);
c.rip=next;return true;}
case UINT64_C(0x14004c1d5): {next=c.rip+6; // mov eax, dword ptr [rbx + 0x1044]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,4164,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c1db): {next=c.rip+3; // lea ecx, [rax + 1]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c1de): {next=c.rip+3; // cmp r15d, eax
m.arithmetic(m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c1e1): {next=c.rip+2; // je 0x14004c1e8
if(m.condition(0))next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x14004c1e3): {next=c.rip+3; // cmp r15d, ecx
m.arithmetic(m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c1e6): {next=c.rip+2; // jne 0x14004c1f8
if(m.condition(1))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x14004c1e8): {next=c.rip+2; // cmp edi, eax
m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c1ea): {next=c.rip+2; // je 0x14004c1f0
if(m.condition(0))next=next+UINT64_C(0x4);
c.rip=next;return true;}
case UINT64_C(0x14004c1ec): {next=c.rip+2; // cmp edi, ecx
m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c1ee): {next=c.rip+2; // jne 0x14004c1f8
if(m.condition(1))next=next+UINT64_C(0x8);
c.rip=next;return true;}
case UINT64_C(0x14004c1f0): {next=c.rip+6; // mov r12d, 1
m.put(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14004c1f6): {next=c.rip+2; // jmp 0x14004c1fb
next=next+UINT64_C(0x3);
c.rip=next;return true;}
case UINT64_C(0x14004c1f8): {next=c.rip+3; // mov r12d, r9d
m.put(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c1fb): {next=c.rip+3; // test r11d, r11d
m.logic(m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004c1fe): {next=c.rip+2; // je 0x14004c227
if(m.condition(0))next=next+UINT64_C(0x27);
c.rip=next;return true;}
case UINT64_C(0x14004c200): {next=c.rip+2; // mov eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c202): {next=c.rip+2; // sub eax, ebp
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14004c204): {next=c.rip+3; // cmp eax, 1
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c207): {next=c.rip+2; // ja 0x14004c22d
if(m.condition(5))next=next+UINT64_C(0x24);
c.rip=next;return true;}
case UINT64_C(0x14004c209): {next=c.rip+6; // mov ecx, dword ptr [rbx + 0x11f4]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,4596,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c20f): {next=c.rip+3; // cmp ecx, -1
m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xffffffffffffffff)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c212): {next=c.rip+2; // je 0x14004c22d
if(m.condition(0))next=next+UINT64_C(0x19);
c.rip=next;return true;}
case UINT64_C(0x14004c214): {next=c.rip+3; // lea eax, [rcx + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c217): {next=c.rip+2; // cmp ebp, ecx
m.arithmetic(m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c219): {next=c.rip+2; // je 0x14004c21f
if(m.condition(0))next=next+UINT64_C(0x4);
c.rip=next;return true;}
case UINT64_C(0x14004c21b): {next=c.rip+2; // cmp ebp, eax
m.arithmetic(m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c21d): {next=c.rip+2; // jne 0x14004c22d
if(m.condition(1))next=next+UINT64_C(0xe);
c.rip=next;return true;}
case UINT64_C(0x14004c21f): {next=c.rip+2; // cmp edx, ecx
m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c221): {next=c.rip+2; // je 0x14004c227
if(m.condition(0))next=next+UINT64_C(0x4);
c.rip=next;return true;}
case UINT64_C(0x14004c223): {next=c.rip+2; // cmp edx, eax
m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c225): {next=c.rip+2; // jne 0x14004c22d
if(m.condition(1))next=next+UINT64_C(0x6);
c.rip=next;return true;}
case UINT64_C(0x14004c227): {next=c.rip+6; // mov r9d, 1
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14004c22d): {next=c.rip+3; // test r12d, r12d
m.logic(m.get(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004c230): {next=c.rip+2; // je 0x14004c23b
if(m.condition(0))next=next+UINT64_C(0x9);
c.rip=next;return true;}
case UINT64_C(0x14004c232): {next=c.rip+3; // test r9d, r9d
m.logic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004c235): {next=c.rip+6; // jne 0x14004c39b
if(m.condition(1))next=next+UINT64_C(0x160);
c.rip=next;return true;}
case UINT64_C(0x14004c23b): {next=c.rip+6; // mov edx, dword ptr [rbx + 0x11f4]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,4596,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c241): {next=c.rip+3; // cmp edx, -1
m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xffffffffffffffff)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c244): {next=c.rip+6; // je 0x14004c2cf
if(m.condition(0))next=next+UINT64_C(0x85);
c.rip=next;return true;}
case UINT64_C(0x14004c24a): {next=c.rip+7; // mov rcx, qword ptr [rbx + 0x11e8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4584,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c251): {next=c.rip+3; // mov r8d, edx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c254): {next=c.rip+5; // mov qword ptr [rsp + 0x28], r14
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c259): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c25c): {next=c.rip+3; // test rcx, rcx
m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14004c25f): {next=c.rip+2; // je 0x14004c296
if(m.condition(0))next=next+UINT64_C(0x35);
c.rip=next;return true;}
case UINT64_C(0x14004c261): {next=c.rip+3; // test r11d, r11d
m.logic(m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004c264): {next=c.rip+2; // je 0x14004c296
if(m.condition(0))next=next+UINT64_C(0x30);
c.rip=next;return true;}
case UINT64_C(0x14004c266): {next=c.rip+3; // cmp edx, 0x4f
m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4f)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c269): {next=c.rip+2; // jae 0x14004c296
if(m.condition(3))next=next+UINT64_C(0x2b);
c.rip=next;return true;}
case UINT64_C(0x14004c26b): {next=c.rip+4; // cmp byte ptr [rdx + rcx], 0
m.arithmetic(m.get(Operand{2,0,8,0,2,1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004c26f): {next=c.rip+3; // mov r14d, edx
m.put(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c272): {next=c.rip+2; // je 0x14004c296
if(m.condition(0))next=next+UINT64_C(0x22);
c.rip=next;return true;}
case UINT64_C(0x14004c274): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c277): {next=c.rip+5; // call 0x14004bec0
{uint64_t target=next+UINT64_C(0xfffffffffffffc44);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c27c): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x11e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4584,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c283): {next=c.rip+5; // mov byte ptr [r14 + rax], 0
m.put(Operand{2,0,8,0,14,0,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c288): {next=c.rip+7; // mov r8d, dword ptr [rbx + 0x11f4]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,4596,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c28f): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x11e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4584,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c296): {next=c.rip+4; // lea edx, [r8 + 1]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,8,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c29a): {next=c.rip+3; // test rax, rax
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14004c29d): {next=c.rip+2; // je 0x14004c2ca
if(m.condition(0))next=next+UINT64_C(0x2b);
c.rip=next;return true;}
case UINT64_C(0x14004c29f): {next=c.rip+7; // cmp dword ptr [rbx + 0x11f0], 0
m.arithmetic(m.get(Operand{2,0,32,0,3,-1,1,0,4592,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c2a6): {next=c.rip+2; // je 0x14004c2ca
if(m.condition(0))next=next+UINT64_C(0x22);
c.rip=next;return true;}
case UINT64_C(0x14004c2a8): {next=c.rip+3; // cmp edx, 0x4f
m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4f)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c2ab): {next=c.rip+2; // jae 0x14004c2ca
if(m.condition(3))next=next+UINT64_C(0x1d);
c.rip=next;return true;}
case UINT64_C(0x14004c2ad): {next=c.rip+4; // cmp byte ptr [rdx + rax], 0
m.arithmetic(m.get(Operand{2,0,8,0,2,0,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004c2b1): {next=c.rip+3; // mov r14d, edx
m.put(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c2b4): {next=c.rip+2; // je 0x14004c2ca
if(m.condition(0))next=next+UINT64_C(0x14);
c.rip=next;return true;}
case UINT64_C(0x14004c2b6): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c2b9): {next=c.rip+5; // call 0x14004bec0
{uint64_t target=next+UINT64_C(0xfffffffffffffc02);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c2be): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x11e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4584,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c2c5): {next=c.rip+5; // mov byte ptr [r14 + rax], 0
m.put(Operand{2,0,8,0,14,0,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c2ca): {next=c.rip+5; // mov r14, qword ptr [rsp + 0x28]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c2cf): {next=c.rip+3; // test r12d, r12d
m.logic(m.get(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004c2d2): {next=c.rip+6; // jne 0x14004c388
if(m.condition(1))next=next+UINT64_C(0xb0);
c.rip=next;return true;}
case UINT64_C(0x14004c2d8): {next=c.rip+6; // mov edx, dword ptr [rbx + 0x1044]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,4164,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c2de): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c2e1): {next=c.rip+5; // call 0x14004bd40
{uint64_t target=next+UINT64_C(0xfffffffffffffa5a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c2e6): {next=c.rip+6; // mov edx, dword ptr [rbx + 0x1044]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,4164,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c2ec): {next=c.rip+2; // inc edx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004c2ee): {next=c.rip+2; // cmp edx, esi
m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c2f0): {next=c.rip+2; // jae 0x14004c2fa
if(m.condition(3))next=next+UINT64_C(0x8);
c.rip=next;return true;}
case UINT64_C(0x14004c2f2): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c2f5): {next=c.rip+5; // call 0x14004bd40
{uint64_t target=next+UINT64_C(0xfffffffffffffa46);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c2fa): {next=c.rip+3; // mov edx, r13d
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c2fd): {next=c.rip+3; // cmp r15d, esi
m.arithmetic(m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c300): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c303): {next=c.rip+4; // cmovb edx, r15d
if(m.condition(2))m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c307): {next=c.rip+6; // mov dword ptr [rbx + 0x1044], edx
m.put(Operand{2,0,32,0,3,-1,1,0,4164,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c30d): {next=c.rip+5; // call 0x14004bd40
{uint64_t target=next+UINT64_C(0xfffffffffffffa2e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c312): {next=c.rip+6; // mov edx, dword ptr [rbx + 0x1044]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,4164,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c318): {next=c.rip+3; // lea eax, [rdx + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c31b): {next=c.rip+2; // cmp eax, esi
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c31d): {next=c.rip+2; // jae 0x14004c32f
if(m.condition(3))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x14004c31f): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c321): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c324): {next=c.rip+5; // call 0x14004bd40
{uint64_t target=next+UINT64_C(0xfffffffffffffa17);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c329): {next=c.rip+6; // mov edx, dword ptr [rbx + 0x1044]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,4164,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c32f): {next=c.rip+2; // cmp edi, edx
m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c331): {next=c.rip+2; // je 0x14004c388
if(m.condition(0))next=next+UINT64_C(0x55);
c.rip=next;return true;}
case UINT64_C(0x14004c333): {next=c.rip+3; // lea eax, [rdx + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c336): {next=c.rip+2; // cmp edi, eax
m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c338): {next=c.rip+2; // je 0x14004c388
if(m.condition(0))next=next+UINT64_C(0x4e);
c.rip=next;return true;}
case UINT64_C(0x14004c33a): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c33d): {next=c.rip+5; // call 0x14004bd40
{uint64_t target=next+UINT64_C(0xfffffffffffff9fe);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c342): {next=c.rip+6; // mov edx, dword ptr [rbx + 0x1044]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,4164,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c348): {next=c.rip+2; // inc edx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004c34a): {next=c.rip+2; // cmp edx, esi
m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c34c): {next=c.rip+2; // jae 0x14004c356
if(m.condition(3))next=next+UINT64_C(0x8);
c.rip=next;return true;}
case UINT64_C(0x14004c34e): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c351): {next=c.rip+5; // call 0x14004bd40
{uint64_t target=next+UINT64_C(0xfffffffffffff9ea);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c356): {next=c.rip+2; // test edi, edi
m.logic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004c358): {next=c.rip+2; // je 0x14004c35c
if(m.condition(0))next=next+UINT64_C(0x2);
c.rip=next;return true;}
case UINT64_C(0x14004c35a): {next=c.rip+2; // dec edi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,true));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004c35c): {next=c.rip+2; // cmp edi, esi
m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c35e): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c361): {next=c.rip+4; // cmovb r13d, edi
if(m.condition(2))m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c365): {next=c.rip+3; // mov edx, r13d
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c368): {next=c.rip+7; // mov dword ptr [rbx + 0x1044], r13d
m.put(Operand{2,0,32,0,3,-1,1,0,4164,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c36f): {next=c.rip+5; // call 0x14004bd40
{uint64_t target=next+UINT64_C(0xfffffffffffff9cc);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c374): {next=c.rip+6; // mov edx, dword ptr [rbx + 0x1044]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,4164,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c37a): {next=c.rip+2; // inc edx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004c37c): {next=c.rip+2; // cmp edx, esi
m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c37e): {next=c.rip+2; // jae 0x14004c388
if(m.condition(3))next=next+UINT64_C(0x8);
c.rip=next;return true;}
case UINT64_C(0x14004c380): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c383): {next=c.rip+5; // call 0x14004bd40
{uint64_t target=next+UINT64_C(0xfffffffffffff9b8);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c388): {next=c.rip+7; // cmp dword ptr [rbx + 0x11f0], 0
m.arithmetic(m.get(Operand{2,0,32,0,3,-1,1,0,4592,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c38f): {next=c.rip+2; // je 0x14004c39b
if(m.condition(0))next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x14004c391): {next=c.rip+2; // mov edx, ebp
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c393): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c396): {next=c.rip+5; // call 0x14004c070
{uint64_t target=next+UINT64_C(0xfffffffffffffcd5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c39b): {next=c.rip+5; // mov r13, qword ptr [rsp + 0x30]
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c3a0): {next=c.rip+5; // mov r12, qword ptr [rsp + 0x38]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c3a5): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x60]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c3aa): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x58]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c3af): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x50]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c3b4): {next=c.rip+5; // mov r15, qword ptr [rsp + 0x20]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c3b9): {next=c.rip+4; // add rsp, 0x40
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x40)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004c3bd): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004c3be): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004c3c0): {next=c.rip+4; // sub rsp, 0x28
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x28)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004c3c4): {next=c.rip+3; // mov r10, rcx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c3c7): {next=c.rip+6; // cmp edx, dword ptr [rcx + 0x738]
m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,1,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c3cd): {next=c.rip+6; // jae 0x14004c480
if(m.condition(3))next=next+UINT64_C(0xad);
c.rip=next;return true;}
case UINT64_C(0x14004c3d3): {next=c.rip+2; // mov ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c3d5): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004c3df): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c3e3): {next=c.rip+3; // mov r9d, edx
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c3e6): {next=c.rip+7; // xor rcx, qword ptr [r10 + 0x940]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,10,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c3ed): {next=c.rip+7; // xor rcx, qword ptr [r10 + 0x908]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,10,-1,1,0,2312,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c3f4): {next=c.rip+7; // xor rcx, qword ptr [r10 + 0x900]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,10,-1,1,0,2304,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c3fb): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c3fe): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c402): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c405): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004c40f): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c413): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c416): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c41a): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c41d): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004c427): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c42b): {next=c.rip+3; // mov r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c42e): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c432): {next=c.rip+3; // xor r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c435): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c438): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c43b): {next=c.rip+4; // shr rax, 0x18
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x18)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c43f): {next=c.rip+4; // shr rcx, 0x28
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x28)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c443): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004c445): {next=c.rip+5; // mov eax, 0x5a
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x5a)}));
c.rip=next;return true;}
case UINT64_C(0x14004c44a): {next=c.rip+3; // xor cl, r8b
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004c44d): {next=c.rip+3; // movzx edx, cl
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c450): {next=c.rip+3; // cmove edx, eax
if(m.condition(0))m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c453): {next=c.rip+7; // mov rax, qword ptr [r10 + 0x730]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,10,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c45a): {next=c.rip+4; // or r8, 1
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c45e): {next=c.rip+4; // xor byte ptr [rax + r9], dl
m.put(Operand{2,0,8,0,0,9,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,8,0,0,9,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004c462): {next=c.rip+7; // mov rax, qword ptr [r10 + 0x8f8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,10,-1,1,0,2296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c469): {next=c.rip+4; // xor byte ptr [rax + r9], dl
m.put(Operand{2,0,8,0,0,9,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,8,0,0,9,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004c46d): {next=c.rip+7; // inc qword ptr [r10 + 0x908]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,10,-1,1,0,2312,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,10,-1,1,0,2312,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004c474): {next=c.rip+7; // mov qword ptr [r10 + 0x900], r8
m.put(Operand{2,0,64,0,10,-1,1,0,2304,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c47b): {next=c.rip+4; // add rsp, 0x28
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x28)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004c47f): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004c480): {next=c.rip+5; // mov edx, 0x534d4351
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x534d4351)}));
c.rip=next;return true;}
case UINT64_C(0x14004c485): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffffcea6);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c48a): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004c490): {next=c.rip+7; // mov rax, qword ptr [rcx + 0x4b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,1200,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c497): {next=c.rip+3; // mov r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c49a): {next=c.rip+7; // xor rax, qword ptr [rcx + 0x230]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c4a1): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c4a4): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c4a8): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c4ab): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004c4b5): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c4b9): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004c4c3): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c4c6): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c4ca): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c4cd): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c4d1): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c4d4): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c4d8): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c4db): {next=c.rip+7; // mov qword ptr [r8 + 0x230], rax
m.put(Operand{2,0,64,0,8,-1,1,0,560,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c4e2): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004c4f0): {next=c.rip+7; // mov r8, qword ptr [rcx + 0x4b0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,1200,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c4f7): {next=c.rip+3; // mov r9, rcx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c4fa): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c4fd): {next=c.rip+4; // shr rax, 7
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x7)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c501): {next=c.rip+7; // xor rax, qword ptr [rcx + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c508): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c50b): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c50f): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c512): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004c51c): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c520): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004c52a): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c52d): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c531): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c534): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c538): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c53b): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c53f): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c542): {next=c.rip+7; // mov qword ptr [r9 + 0x940], rax
m.put(Operand{2,0,64,0,9,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c549): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004c553): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004c556): {next=c.rip+7; // mov qword ptr [r9 + 0x4b0], rax
m.put(Operand{2,0,64,0,9,-1,1,0,1200,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c55d): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004c560): {next=c.rip+7; // mov rax, qword ptr [rcx + 0x230]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,560,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c567): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004c56a): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c56d): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c571): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c574): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004c57e): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c582): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004c58c): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c58f): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c593): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c596): {next=c.rip+4; // imul r8, rax
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c59a): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c59d): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c5a1): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c5a4): {next=c.rip+7; // xor qword ptr [rcx + 0x4b0], rax
m.put(Operand{2,0,64,0,1,-1,1,0,1200,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,1,-1,1,0,1200,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c5ab): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004c5b0): {next=c.rip+6; // mov eax, dword ptr [rcx + 0x4b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,-1,1,0,1200,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c5b6): {next=c.rip+3; // and eax, 6
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x6)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004c5b9): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c5bd): {next=c.rip+7; // add qword ptr [rcx + 0x230], rax
m.put(Operand{2,0,64,0,1,-1,1,0,560,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,1,-1,1,0,560,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004c5c4): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004c5d0): {next=c.rip+7; // mov rax, qword ptr [rcx + 0x4b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,1200,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c5d7): {next=c.rip+7; // xor rax, qword ptr [rcx + 0x230]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c5de): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c5e1): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c5e5): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c5e8): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004c5f2): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c5f6): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004c600): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c603): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c607): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c60a): {next=c.rip+4; // imul r8, rax
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c60e): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c611): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c615): {next=c.rip+7; // xor rax, qword ptr [rcx + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c61c): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c61f): {next=c.rip+7; // mov qword ptr [rcx + 0x940], rax
m.put(Operand{2,0,64,0,1,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c626): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004c630): {next=c.rip+7; // mov rax, qword ptr [rcx + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c637): {next=c.rip+3; // mov r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c63a): {next=c.rip+7; // xor rax, qword ptr [rcx + 0x4b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,1200,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c641): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c644): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c648): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c64b): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004c655): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c659): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004c663): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c666): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c66a): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c66d): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c671): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c674): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c678): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c67b): {next=c.rip+7; // mov qword ptr [r8 + 0x4b0], rax
m.put(Operand{2,0,64,0,8,-1,1,0,1200,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c682): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004c690): {next=c.rip+7; // movzx eax, byte ptr [rcx + 0x4b4]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,1204,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c697): {next=c.rip+7; // xor qword ptr [rcx + 0x230], rax
m.put(Operand{2,0,64,0,1,-1,1,0,560,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,1,-1,1,0,560,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c69e): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004c6a0): {next=c.rip+7; // mov rax, qword ptr [rcx + 0x4b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,1200,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c6a7): {next=c.rip+7; // add rax, qword ptr [rcx + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,1,-1,1,0,2368,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004c6ae): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c6b1): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c6b5): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c6b8): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004c6c2): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c6c6): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004c6d0): {next=c.rip+3; // mov r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c6d3): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c6d7): {next=c.rip+3; // xor r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c6da): {next=c.rip+4; // imul r8, rax
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c6de): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c6e1): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c6e5): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c6e8): {next=c.rip+7; // mov qword ptr [rcx + 0x940], rax
m.put(Operand{2,0,64,0,1,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c6ef): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004c6f0): {next=c.rip+4; // sub rsp, 0x28
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x28)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004c6f4): {next=c.rip+6; // mov eax, dword ptr [rcx + 0x4b8]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,-1,1,0,1208,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c6fa): {next=c.rip+3; // cmp eax, 0x40
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x40)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c6fd): {next=c.rip+2; // jae 0x14004c712
if(m.condition(3))next=next+UINT64_C(0x13);
c.rip=next;return true;}
case UINT64_C(0x14004c6ff): {next=c.rip+8; // mov qword ptr [rcx + rax*8 + 0x2b0], rdx
m.put(Operand{2,0,64,0,1,0,8,0,688,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c707): {next=c.rip+6; // inc dword ptr [rcx + 0x4b8]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,1,-1,1,0,1208,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,1,-1,1,0,1208,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004c70d): {next=c.rip+4; // add rsp, 0x28
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x28)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004c711): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004c712): {next=c.rip+5; // mov edx, 0x4a4f5046
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4a4f5046)}));
c.rip=next;return true;}
case UINT64_C(0x14004c717): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffffcc14);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c71c): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004c720): {next=c.rip+2; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c722): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c723): {next=c.rip+4; // sub rsp, 0x28
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x28)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004c727): {next=c.rip+3; // mov rsi, rcx
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c72a): {next=c.rip+2; // xor ebx, ebx
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004c72c): {next=c.rip+6; // mov ecx, dword ptr [rcx + 0x4b8]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,-1,1,0,1208,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c732): {next=c.rip+2; // test ecx, ecx
m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004c734): {next=c.rip+6; // je 0x14004c873
if(m.condition(0))next=next+UINT64_C(0x139);
c.rip=next;return true;}
case UINT64_C(0x14004c73a): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rbp
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c73f): {next=c.rip+10; // movabs rbp, 0x9e3779b97f4a7c15
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004c749): {next=c.rip+5; // mov qword ptr [rsp + 0x50], r12
m.put(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c74e): {next=c.rip+10; // movabs r12, 0x2545f4914f6cdd1d
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004c758): {next=c.rip+5; // mov qword ptr [rsp + 0x58], r14
m.put(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c75d): {next=c.rip+10; // movabs r14, 0xff51afd7ed558ccd
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004c767): {next=c.rip+5; // mov qword ptr [rsp + 0x20], r15
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c76c): {next=c.rip+10; // movabs r15, 0xc4ceb9fe1a85ec53
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004c776): {next=c.rip+5; // mov qword ptr [rsp + 0x48], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c77b): {next=c.rip+5; // nop dword ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x14004c780): {next=c.rip+2; // mov eax, ebx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c782): {next=c.rip+2; // inc ebx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004c784): {next=c.rip+3; // cmp eax, 8
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c787): {next=c.rip+6; // jae 0x14004c85a
if(m.condition(3))next=next+UINT64_C(0xcd);
c.rip=next;return true;}
case UINT64_C(0x14004c78d): {next=c.rip+7; // mov r8, qword ptr [rsi + 0x4b0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,6,-1,1,0,1200,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c794): {next=c.rip+3; // lea eax, [rcx - 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,1,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c797): {next=c.rip+6; // mov dword ptr [rsi + 0x4b8], eax
m.put(Operand{2,0,32,0,6,-1,1,0,1208,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c79d): {next=c.rip+3; // mov rdi, r8
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c7a0): {next=c.rip+8; // mov rdx, qword ptr [rsi + rax*8 + 0x2b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,6,0,8,0,688,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c7a8): {next=c.rip+3; // xor rdi, rdx
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c7ab): {next=c.rip+4; // imul r8, rbp
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c7af): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c7b2): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c7b6): {next=c.rip+3; // add r8, rdx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004c7b9): {next=c.rip+3; // xor rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c7bc): {next=c.rip+4; // shr r8, 0x3d
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3d)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c7c0): {next=c.rip+4; // imul rax, r14
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c7c4): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c7c7): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c7cb): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c7ce): {next=c.rip+4; // imul rcx, r15
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c7d2): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c7d5): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c7d9): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c7dc): {next=c.rip+3; // mov rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c7df): {next=c.rip+7; // mov qword ptr [rsi + 0x4b0], rax
m.put(Operand{2,0,64,0,6,-1,1,0,1200,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c7e6): {next=c.rip+8; // call qword ptr [rsi + r8*8 + 0x9b8]
{uint64_t target=m.get(Operand{2,0,64,0,6,8,8,0,2488,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c7ee): {next=c.rip+7; // inc qword ptr [rsi + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,6,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,6,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004c7f5): {next=c.rip+7; // mov rax, qword ptr [rsi + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,6,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c7fc): {next=c.rip+4; // imul rax, rbp
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c800): {next=c.rip+3; // mov r8d, edi
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c803): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004c806): {next=c.rip+7; // mov qword ptr [rsi + 0x1180], rax
m.put(Operand{2,0,64,0,6,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c80d): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c811): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c814): {next=c.rip+6; // mov byte ptr [rsi + 0x1140], dl
m.put(Operand{2,0,8,0,6,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c81a): {next=c.rip+8; // imul rdx, qword ptr [rsi + 0x10c0]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,6,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c822): {next=c.rip+7; // xor rdx, qword ptr [rsi + 0x10b8]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,6,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c829): {next=c.rip+7; // xor rdx, qword ptr [rsi + 0x10b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,6,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c830): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c833): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c836): {next=c.rip+7; // cmp byte ptr [rsi + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,6,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004c83d): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c841): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c845): {next=c.rip+7; // mov qword ptr [rsi + 0x10d0], rax
m.put(Operand{2,0,64,0,6,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c84c): {next=c.rip+6; // mov ecx, dword ptr [rsi + 0x4b8]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,6,-1,1,0,1208,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c852): {next=c.rip+2; // test ecx, ecx
m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004c854): {next=c.rip+6; // jne 0x14004c780
if(m.condition(1))next=next+UINT64_C(0xffffffffffffff26);
c.rip=next;return true;}
case UINT64_C(0x14004c85a): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x48]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c85f): {next=c.rip+5; // mov r12, qword ptr [rsp + 0x50]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c864): {next=c.rip+5; // mov r14, qword ptr [rsp + 0x58]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c869): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x40]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c86e): {next=c.rip+5; // mov r15, qword ptr [rsp + 0x20]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c873): {next=c.rip+4; // add rsp, 0x28
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x28)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004c877): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004c878): {next=c.rip+1; // pop rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004c879): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004c880): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c885): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c886): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004c88a): {next=c.rip+7; // inc qword ptr [rcx + 0x4c0]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,1,-1,1,0,1216,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,1,-1,1,0,1216,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004c891): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c894): {next=c.rip+2; // mov edi, edx
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c896): {next=c.rip+7; // xor rdi, qword ptr [rcx + 0x4b0]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,1200,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c89d): {next=c.rip+7; // mov rcx, qword ptr [rcx + 0x4c0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,1216,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c8a4): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c8a7): {next=c.rip+7; // xor rax, qword ptr [rbx + 0x700]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c8ae): {next=c.rip+6; // test rax, 0x1ff
m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1ff)}),64);
c.rip=next;return true;}
case UINT64_C(0x14004c8b4): {next=c.rip+2; // jne 0x14004c8c5
if(m.condition(1))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x14004c8b6): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c8b9): {next=c.rip+5; // call 0x14007fb70
{uint64_t target=next+UINT64_C(0x332b2);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c8be): {next=c.rip+7; // mov rcx, qword ptr [rbx + 0x4c0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,1216,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c8c5): {next=c.rip+4; // cmp rcx, 1
m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004c8c9): {next=c.rip+2; // je 0x14004c907
if(m.condition(0))next=next+UINT64_C(0x3c);
c.rip=next;return true;}
case UINT64_C(0x14004c8cb): {next=c.rip+7; // imul rax, rcx, -0x3eb
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xfffffffffffffc15)});
c.rip=next;return true;}
case UINT64_C(0x14004c8d2): {next=c.rip+6; // xor eax, dword ptr [rbx + 0x4b0]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,32,0,3,-1,1,0,1200,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004c8d8): {next=c.rip+5; // and eax, 0xfff
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xfff)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004c8dd): {next=c.rip+4; // cmp rax, 0x1f
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1f)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004c8e1): {next=c.rip+2; // je 0x14004c907
if(m.condition(0))next=next+UINT64_C(0x24);
c.rip=next;return true;}
case UINT64_C(0x14004c8e3): {next=c.rip+6; // mov eax, dword ptr [rbx + 0x4b8]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,1208,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c8e9): {next=c.rip+3; // cmp eax, 0x40
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x40)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004c8ec): {next=c.rip+2; // jae 0x14004c91e
if(m.condition(3))next=next+UINT64_C(0x30);
c.rip=next;return true;}
case UINT64_C(0x14004c8ee): {next=c.rip+8; // mov qword ptr [rbx + rax*8 + 0x2b0], rdi
m.put(Operand{2,0,64,0,3,0,8,0,688,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c8f6): {next=c.rip+6; // inc dword ptr [rbx + 0x4b8]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,3,-1,1,0,1208,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,3,-1,1,0,1208,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004c8fc): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x38]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c901): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004c905): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004c906): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004c907): {next=c.rip+7; // lea rdx, [rip + 0x3be98a]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,3926410,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c90e): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c913): {next=c.rip+5; // lea rcx, [rsp + 0x30]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c918): {next=c.rip+5; // call 0x1403a5fa0
{uint64_t target=next+UINT64_C(0x359683);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c91d): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004c91e): {next=c.rip+5; // mov edx, 0x4a4f5046
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4a4f5046)}));
c.rip=next;return true;}
case UINT64_C(0x14004c923): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c926): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffffca05);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004c92b): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004c930): {next=c.rip+3; // mov r10d, r8d
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c933): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004c93d): {next=c.rip+3; // inc r10
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004c940): {next=c.rip+10; // movabs r8, 0xff51afd7ed558ccd
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004c94a): {next=c.rip+4; // imul r10, rax
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c94e): {next=c.rip+6; // mov eax, dword ptr [rcx + 0x1020]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,-1,1,0,4128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c954): {next=c.rip+3; // mov r11, rdx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c957): {next=c.rip+3; // xor r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c95a): {next=c.rip+7; // xor r10, qword ptr [rcx + 0x940]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c961): {next=c.rip+7; // xor r10, qword ptr [rcx + 0x700]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c968): {next=c.rip+7; // xor r10, qword ptr [rcx + 0x238]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c96f): {next=c.rip+3; // xor r10, r9
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c972): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c975): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c979): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c97c): {next=c.rip+10; // movabs r10, 0xc4ceb9fe1a85ec53
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004c986): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c98a): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c98d): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c991): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c994): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c998): {next=c.rip+3; // mov r9, rcx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c99b): {next=c.rip+4; // shr r9, 0x21
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c99f): {next=c.rip+3; // xor r9, rcx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c9a2): {next=c.rip+3; // mov ecx, r9d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c9a5): {next=c.rip+3; // and ecx, 0x3f
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3f)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004c9a8): {next=c.rip+2; // je 0x14004c9ad
if(m.condition(0))next=next+UINT64_C(0x3);
c.rip=next;return true;}
case UINT64_C(0x14004c9aa): {next=c.rip+3; // rol r11, cl
m.shift(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},2);
c.rip=next;return true;}
case UINT64_C(0x14004c9ad): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c9b0): {next=c.rip+6; // xor rax, 0x4e524d31
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4e524d31)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c9b6): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c9b9): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c9bd): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c9c0): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c9c4): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c9c7): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c9cb): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c9ce): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c9d2): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c9d5): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c9d9): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c9dc): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c9e0): {next=c.rip+4; // imul r11, rax
m.imul(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c9e4): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c9e7): {next=c.rip+6; // xor rax, 0x4e524d32
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4e524d32)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c9ed): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c9f0): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004c9f4): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004c9f7): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004c9fb): {next=c.rip+3; // mov r8, r11
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004c9fe): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ca01): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ca05): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ca08): {next=c.rip+3; // mov rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ca0b): {next=c.rip+4; // shr rcx, 0x13
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x13)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ca0f): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ca13): {next=c.rip+3; // and cl, 0x1f
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004ca16): {next=c.rip+4; // shr r9, 0x29
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x29)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ca1a): {next=c.rip+2; // inc cl
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,8,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004ca1c): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ca1f): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ca23): {next=c.rip+4; // and r9b, 0x1f
m.put(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004ca27): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ca2a): {next=c.rip+3; // shr r8, cl
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ca2d): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ca31): {next=c.rip+3; // xor r8, r11
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ca34): {next=c.rip+4; // imul r8, rax
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ca38): {next=c.rip+4; // lea ecx, [r9 + 1]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,9,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ca3c): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ca3f): {next=c.rip+3; // shr rax, cl
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ca42): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ca45): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004ca50): {next=c.rip+10; // movabs rax, 0xd6e8feb86659fd93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14004ca5a): {next=c.rip+3; // mov r9d, edx
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ca5d): {next=c.rip+4; // imul r9, rax
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ca61): {next=c.rip+10; // movabs rax, 0xc2b2ae3d27d4eb4f
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc2b2ae3d27d4eb4f)}));
c.rip=next;return true;}
case UINT64_C(0x14004ca6b): {next=c.rip+4; // and r8d, 1
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004ca6f): {next=c.rip+4; // imul r8, rax
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ca73): {next=c.rip+6; // mov eax, dword ptr [rcx + 0x1020]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,-1,1,0,4128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ca79): {next=c.rip+3; // xor r9, r8
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ca7c): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ca7f): {next=c.rip+7; // xor r9, qword ptr [rcx + 0x700]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ca86): {next=c.rip+7; // xor r9, qword ptr [rcx + 0x238]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ca8d): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004ca97): {next=c.rip+7; // xor r9, 0x42524d4b
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x42524d4b)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ca9e): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004caa1): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004caa5): {next=c.rip+3; // xor rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004caa8): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004caac): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004caaf): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004cab3): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cab6): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004cac0): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cac4): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cac7): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004cacb): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cace): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004cad0): {next=c.rip+3; // mov r10d, edx
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cad3): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004cadd): {next=c.rip+4; // imul r10, rax
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cae1): {next=c.rip+10; // movabs rax, 0xd6e8feb86659fd93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14004caeb): {next=c.rip+4; // and r8d, 1
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004caef): {next=c.rip+4; // imul r8, rax
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004caf3): {next=c.rip+3; // mov eax, r9d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004caf6): {next=c.rip+10; // movabs rdx, 0xc2b2ae3d27d4eb4f
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc2b2ae3d27d4eb4f)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb00): {next=c.rip+4; // imul rax, rdx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cb04): {next=c.rip+3; // xor r10, r8
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cb07): {next=c.rip+3; // xor r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cb0a): {next=c.rip+6; // mov eax, dword ptr [rcx + 0x1020]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,-1,1,0,4128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb10): {next=c.rip+3; // xor r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cb13): {next=c.rip+7; // xor r10, qword ptr [rcx + 0x700]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cb1a): {next=c.rip+7; // xor r10, qword ptr [rcx + 0x238]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cb21): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb2b): {next=c.rip+7; // xor r10, 0x42525441
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x42525441)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cb32): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb35): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004cb39): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cb3c): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cb40): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb43): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004cb47): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cb4a): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb54): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cb58): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb5b): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004cb5f): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cb62): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004cb70): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb75): {next=c.rip+5; // mov dword ptr [rsp + 0x18], r8d
m.put(Operand{2,0,32,0,4,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb7a): {next=c.rip+1; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb7b): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb7c): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb7d): {next=c.rip+2; // push r12
m.push(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb7f): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb81): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb83): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb85): {next=c.rip+4; // sub rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004cb89): {next=c.rip+6; // mov esi, dword ptr [rcx + 0x1020]
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,-1,1,0,4128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb8f): {next=c.rip+3; // mov r14, rcx
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb92): {next=c.rip+7; // mov rbx, qword ptr [rcx + 0x700]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,1792,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb99): {next=c.rip+3; // mov r12, rdx
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cb9c): {next=c.rip+7; // mov r11, qword ptr [rcx + 0x238]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,568,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cba3): {next=c.rip+3; // mov ebp, r8d
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cba6): {next=c.rip+8; // mov r10d, dword ptr [rsp + 0x98]
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,152,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cbae): {next=c.rip+3; // neg r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(0,m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004cbb1): {next=c.rip+7; // mov r15, qword ptr [r14 + 0x1180]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cbb8): {next=c.rip+2; // not ebp
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cbba): {next=c.rip+7; // mov rdi, qword ptr [r14 + 0x1188]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cbc1): {next=c.rip+3; // and ebp, 1
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004cbc4): {next=c.rip+4; // shr rdx, 0x3f
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3f)},1);
c.rip=next;return true;}
case UINT64_C(0x14004cbc8): {next=c.rip+10; // movabs rcx, 0xc2b2ae3d27d4eb4f
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc2b2ae3d27d4eb4f)}));
c.rip=next;return true;}
case UINT64_C(0x14004cbd2): {next=c.rip+4; // shr r12, 0x3f
m.shift(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3f)},1);
c.rip=next;return true;}
case UINT64_C(0x14004cbd6): {next=c.rip+3; // or r12d, edx
m.put(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004cbd9): {next=c.rip+4; // xor r12d, 1
m.put(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004cbdd): {next=c.rip+3; // mov eax, r12d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cbe0): {next=c.rip+3; // xor ebp, r12d
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004cbe3): {next=c.rip+3; // xor eax, r9d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004cbe6): {next=c.rip+8; // mov r9d, dword ptr [rsp + 0x90]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,144,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cbee): {next=c.rip+2; // and eax, ebp
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004cbf0): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cbf2): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cbf7): {next=c.rip+4; // imul rdx, rcx
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cbfb): {next=c.rip+10; // movabs rcx, 0xd6e8feb86659fd93
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14004cc05): {next=c.rip+3; // mov eax, r10d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cc08): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cc0c): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cc0f): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004cc19): {next=c.rip+3; // xor rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cc1c): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cc1f): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cc22): {next=c.rip+7; // xor rdx, 0x42524d4b
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x42524d4b)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cc29): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cc2c): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004cc30): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cc33): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cc37): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cc3a): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004cc3e): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cc41): {next=c.rip+10; // movabs rcx, 0xc4ceb9fe1a85ec53
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004cc4b): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cc4f): {next=c.rip+3; // mov r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cc52): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cc54): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004cc58): {next=c.rip+3; // xor r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cc5b): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004cc65): {next=c.rip+4; // imul r15, rax
m.imul(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cc69): {next=c.rip+3; // xor r8, r9
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cc6c): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004cc76): {next=c.rip+3; // add r15, rax
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004cc79): {next=c.rip+3; // mov rax, r15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cc7c): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004cc80): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cc83): {next=c.rip+7; // mov byte ptr [r14 + 0x1144], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4420,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cc8a): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10c0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cc91): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cc98): {next=c.rip+7; // mov r13, qword ptr [r14 + 0x10b8]
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cc9f): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cca3): {next=c.rip+5; // mov qword ptr [rsp + 0x70], rax
m.put(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cca8): {next=c.rip+8; // lea rax, [r13*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,-1,13,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ccb0): {next=c.rip+3; // add rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004ccb3): {next=c.rip+5; // mov qword ptr [rsp + 0x78], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ccb8): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ccbb): {next=c.rip+8; // movzx eax, byte ptr [r14 + 0x10c8]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ccc3): {next=c.rip+7; // mov byte ptr [rsp + 0x90], al
m.put(Operand{2,0,8,0,4,-1,1,0,144,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ccca): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cccd): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ccd0): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ccd3): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ccd7): {next=c.rip+9; // movzx r8d, byte ptr [rsp + 0x90]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,144,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cce0): {next=c.rip+3; // test r8b, r8b
m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004cce3): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cce7): {next=c.rip+7; // mov qword ptr [r14 + 0x10f0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4336,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ccee): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004ccf8): {next=c.rip+4; // imul r15, rax
m.imul(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ccfc): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004cd06): {next=c.rip+3; // add r15, rax
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004cd09): {next=c.rip+3; // mov rax, r15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cd0c): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004cd10): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cd13): {next=c.rip+8; // lea rax, [r13*2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,-1,13,2,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cd1b): {next=c.rip+3; // add rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004cd1e): {next=c.rip+7; // mov byte ptr [r14 + 0x1145], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4421,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cd25): {next=c.rip+6; // imul rdx, qword ptr [rsp + 0x70]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cd2b): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004cd2e): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cd31): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cd36): {next=c.rip+5; // xor rdx, qword ptr [rsp + 0x78]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cd3b): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cd3e): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cd41): {next=c.rip+3; // add rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004cd44): {next=c.rip+3; // test r8b, r8b
m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004cd47): {next=c.rip+3; // mov r8d, esi
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cd4a): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cd4e): {next=c.rip+7; // mov qword ptr [r14 + 0x10f8], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4344,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cd55): {next=c.rip+7; // mov eax, dword ptr [rsp + 0x98]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,152,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cd5c): {next=c.rip+3; // xor r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cd5f): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004cd69): {next=c.rip+4; // imul r15, rax
m.imul(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cd6d): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004cd77): {next=c.rip+3; // add r15, rax
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004cd7a): {next=c.rip+3; // mov rax, r15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cd7d): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004cd81): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cd84): {next=c.rip+8; // lea rax, [r13*2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,-1,13,2,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cd8c): {next=c.rip+3; // add rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004cd8f): {next=c.rip+7; // mov byte ptr [r14 + 0x114b], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4427,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cd96): {next=c.rip+6; // imul rdx, qword ptr [rsp + 0x70]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cd9c): {next=c.rip+4; // shl rax, 2
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x2)},0);
c.rip=next;return true;}
case UINT64_C(0x14004cda0): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cda3): {next=c.rip+5; // xor rdx, qword ptr [rsp + 0x78]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cda8): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cdab): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cdae): {next=c.rip+8; // cmp byte ptr [rsp + 0x90], 0
m.arithmetic(m.get(Operand{2,0,8,0,4,-1,1,0,144,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004cdb6): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cdba): {next=c.rip+10; // movabs rdx, 0xd6e8feb86659fd93
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14004cdc4): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cdc8): {next=c.rip+3; // mov ecx, r9d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cdcb): {next=c.rip+5; // mov r9, qword ptr [rsp + 0x70]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cdd0): {next=c.rip+7; // mov qword ptr [r14 + 0x1128], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4392,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cdd7): {next=c.rip+10; // movabs rax, 0xc2b2ae3d27d4eb4f
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc2b2ae3d27d4eb4f)}));
c.rip=next;return true;}
case UINT64_C(0x14004cde1): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cde5): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004cdef): {next=c.rip+4; // imul r10, rax
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cdf3): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x20]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cdf8): {next=c.rip+4; // imul rax, rdx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cdfc): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cdff): {next=c.rip+5; // mov r10, qword ptr [rsp + 0x78]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ce04): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ce07): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ce0a): {next=c.rip+10; // movabs r11, 0x9e3779b97f4a7c15
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004ce14): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ce17): {next=c.rip+10; // movabs rbx, 0x2545f4914f6cdd1d
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004ce21): {next=c.rip+3; // xor rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ce24): {next=c.rip+10; // movabs rsi, 0xff51afd7ed558ccd
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004ce2e): {next=c.rip+7; // xor rcx, 0x42525441
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x42525441)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ce35): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ce38): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ce3c): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ce3f): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ce43): {next=c.rip+4; // imul r15, r11
m.imul(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ce47): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ce4a): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ce4e): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ce51): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004ce5b): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ce5f): {next=c.rip+3; // add r15, rbx
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004ce62): {next=c.rip+3; // mov r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ce65): {next=c.rip+3; // mov rax, r15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ce68): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ce6c): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ce6f): {next=c.rip+7; // mov byte ptr [r14 + 0x114c], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4428,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ce76): {next=c.rip+4; // imul rdx, r9
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ce7a): {next=c.rip+4; // imul rax, r13, 0xd
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd)});
c.rip=next;return true;}
case UINT64_C(0x14004ce7e): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ce82): {next=c.rip+3; // xor r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ce85): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ce88): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ce8b): {next=c.rip+3; // xor rdx, r10
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ce8e): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ce91): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ce95): {next=c.rip+9; // movzx r8d, byte ptr [rsp + 0x90]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,4,-1,1,0,144,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ce9e): {next=c.rip+3; // test r8b, r8b
m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004cea1): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cea5): {next=c.rip+4; // add rdi, 5
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004cea9): {next=c.rip+7; // mov qword ptr [r14 + 0x1130], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4400,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ceb0): {next=c.rip+4; // imul r15, r11
m.imul(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ceb4): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rdi
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cebb): {next=c.rip+3; // add r15, rbx
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004cebe): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r15
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cec5): {next=c.rip+3; // mov rax, r15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cec8): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004cecc): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cecf): {next=c.rip+7; // mov byte ptr [r14 + 0x1146], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4422,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ced6): {next=c.rip+4; // imul rax, r13, 7
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7)});
c.rip=next;return true;}
case UINT64_C(0x14004ceda): {next=c.rip+4; // imul rdx, r9
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cede): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cee1): {next=c.rip+3; // xor rdx, r10
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cee4): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cee7): {next=c.rip+4; // xor rcx, 1
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ceeb): {next=c.rip+3; // test r8b, r8b
m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004ceee): {next=c.rip+4; // lea rax, [rdx + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cef2): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cef6): {next=c.rip+7; // mov qword ptr [r14 + 0x1100], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4352,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cefd): {next=c.rip+7; // inc qword ptr [r14 + 0x1028]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4136,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4136,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004cf04): {next=c.rip+2; // test ebp, ebp
m.logic(m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004cf06): {next=c.rip+6; // je 0x14004cfe1
if(m.condition(0))next=next+UINT64_C(0xd5);
c.rip=next;return true;}
case UINT64_C(0x14004cf0c): {next=c.rip+7; // mov ecx, dword ptr [rsp + 0x80]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cf13): {next=c.rip+3; // and ecx, 1
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004cf16): {next=c.rip+3; // mov eax, r12d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cf19): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cf1c): {next=c.rip+7; // mov eax, dword ptr [rsp + 0x98]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,152,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cf23): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cf27): {next=c.rip+4; // imul r15, r11
m.imul(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cf2b): {next=c.rip+7; // xor qword ptr [r14 + 0x230], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cf32): {next=c.rip+4; // mov ecx, dword ptr [rsp + 0x20]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cf36): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cf39): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x940]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cf40): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cf43): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004cf47): {next=c.rip+3; // add r15, rbx
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004cf4a): {next=c.rip+8; // mov rbx, qword ptr [rsp + 0x88]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,136,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cf52): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cf55): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cf59): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r15
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cf60): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cf63): {next=c.rip+4; // shr r15, 0x1b
m.shift(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004cf67): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004cf6b): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cf6e): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004cf78): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cf7c): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cf7f): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004cf83): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cf86): {next=c.rip+4; // movzx ecx, r15b
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cf8a): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cf91): {next=c.rip+4; // lea rax, [rdi + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,7,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cf95): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cf9c): {next=c.rip+5; // mov eax, 0xe0bf0
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xe0bf0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cfa1): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], cl
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cfa8): {next=c.rip+4; // imul rcx, r9
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004cfac): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cfaf): {next=c.rip+3; // xor rcx, r13
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cfb2): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cfb5): {next=c.rip+7; // add rcx, 0xe0bf0
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xe0bf0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004cfbc): {next=c.rip+7; // xor rdx, 0xe0bf0
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xe0bf0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004cfc3): {next=c.rip+3; // test r8b, r8b
m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004cfc6): {next=c.rip+4; // cmove rcx, rdx
if(m.condition(0))m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cfca): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cfd1): {next=c.rip+4; // add rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004cfd5): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004cfd7): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004cfd9): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004cfdb): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004cfdd): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004cfde): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004cfdf): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004cfe0): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004cfe1): {next=c.rip+5; // mov edx, 0x42524147
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x42524147)}));
c.rip=next;return true;}
case UINT64_C(0x14004cfe6): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cfe9): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffffc342);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004cfee): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004cff0): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cff5): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rbp
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cffa): {next=c.rip+5; // mov qword ptr [rsp + 0x18], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004cfff): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d000): {next=c.rip+2; // push r12
m.push(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d002): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d004): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d006): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d008): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004d00c): {next=c.rip+7; // mov r10, qword ptr [rcx + 0x238]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,568,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d013): {next=c.rip+3; // mov rbp, rcx
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d016): {next=c.rip+7; // mov r9d, dword ptr [rcx + 0x1020]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,-1,1,0,4128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d01d): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004d027): {next=c.rip+3; // mov r14d, r8d
m.put(Operand{0,14,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d02a): {next=c.rip+10; // movabs r12, 0xff51afd7ed558ccd
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004d034): {next=c.rip+4; // imul r14, rax
m.imul(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d038): {next=c.rip+3; // mov r15d, r8d
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d03b): {next=c.rip+10; // movabs rax, 0x95e8f2fe312fca73
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x95e8f2fe312fca73)}));
c.rip=next;return true;}
case UINT64_C(0x14004d045): {next=c.rip+3; // add rax, r14
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d048): {next=c.rip+10; // movabs r13, 0xc4ceb9fe1a85ec53
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004d052): {next=c.rip+7; // xor rax, qword ptr [rcx + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,1,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d059): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d05c): {next=c.rip+3; // xor rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d05f): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d062): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d066): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d069): {next=c.rip+4; // imul rcx, r12
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d06d): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d070): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d074): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d077): {next=c.rip+4; // imul rax, r13
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d07b): {next=c.rip+3; // mov r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d07e): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d082): {next=c.rip+3; // xor r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d085): {next=c.rip+3; // mov rsi, r8
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d088): {next=c.rip+3; // mov ecx, r8d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d08b): {next=c.rip+3; // xor rsi, rdx
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d08e): {next=c.rip+3; // and ecx, 0x3f
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3f)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004d091): {next=c.rip+2; // je 0x14004d096
if(m.condition(0))next=next+UINT64_C(0x3);
c.rip=next;return true;}
case UINT64_C(0x14004d093): {next=c.rip+3; // rol rsi, cl
m.shift(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},2);
c.rip=next;return true;}
case UINT64_C(0x14004d096): {next=c.rip+7; // xor r8, 0x44454331
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x44454331)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d09d): {next=c.rip+10; // movabs rdx, 0xd6e8feb86659fd93
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14004d0a7): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d0aa): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d0ae): {next=c.rip+3; // xor rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d0b1): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d0b5): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d0b8): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d0bc): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d0bf): {next=c.rip+4; // imul rcx, r13
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d0c3): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d0c6): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d0ca): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d0cd): {next=c.rip+5; // mov ecx, 0x42524d4b
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x42524d4b)}));
c.rip=next;return true;}
case UINT64_C(0x14004d0d2): {next=c.rip+4; // or rax, 1
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d0d6): {next=c.rip+4; // imul rsi, rax
m.imul(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d0da): {next=c.rip+10; // movabs rax, 0xc2b2ae3d6586a604
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc2b2ae3d6586a604)}));
c.rip=next;return true;}
case UINT64_C(0x14004d0e4): {next=c.rip+4; // lea rdi, [rsi - 1]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d0e8): {next=c.rip+3; // cmp rdi, rsi
m.arithmetic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004d0eb): {next=c.rip+4; // cmovae rcx, rax
if(m.condition(3))m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d0ef): {next=c.rip+3; // mov rax, r15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d0f2): {next=c.rip+4; // imul rax, rdx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d0f6): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d0f9): {next=c.rip+7; // xor rcx, qword ptr [rbp + 0x700]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,5,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d100): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d103): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d106): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d109): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d10d): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d110): {next=c.rip+3; // mov rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d113): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d117): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d11a): {next=c.rip+4; // shr rbx, 0x21
m.shift(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d11e): {next=c.rip+3; // xor rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d121): {next=c.rip+4; // imul rbx, r13
m.imul(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d125): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffffca46);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004d12a): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d12c): {next=c.rip+5; // mov ecx, 0x42525441
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x42525441)}));
c.rip=next;return true;}
case UINT64_C(0x14004d131): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d134): {next=c.rip+10; // movabs r8, 0xc2b2ae3d27d4eb4f
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc2b2ae3d27d4eb4f)}));
c.rip=next;return true;}
case UINT64_C(0x14004d13e): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d142): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d145): {next=c.rip+10; // movabs rax, 0xd6e8feb8240ba9d2
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb8240ba9d2)}));
c.rip=next;return true;}
case UINT64_C(0x14004d14f): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d152): {next=c.rip+3; // cmp rdi, rsi
m.arithmetic(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004d155): {next=c.rip+4; // cmovae rcx, rax
if(m.condition(3))m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d159): {next=c.rip+7; // xor r15, qword ptr [rbp + 0x940]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,5,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d160): {next=c.rip+2; // mov eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d162): {next=c.rip+3; // xor r15, rsi
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d165): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d169): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d16c): {next=c.rip+6; // mov eax, dword ptr [rbp + 0x1020]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,5,-1,1,0,4128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d172): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d175): {next=c.rip+7; // xor rcx, qword ptr [rbp + 0x700]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,5,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d17c): {next=c.rip+7; // xor rcx, qword ptr [rbp + 0x238]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,5,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d183): {next=c.rip+3; // xor rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d186): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d189): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d18d): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d190): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d194): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d197): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d19b): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d19e): {next=c.rip+4; // imul rcx, r13
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d1a2): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d1a5): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d1a9): {next=c.rip+7; // xor rax, qword ptr [rbp + 0x230]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,5,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d1b0): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d1b3): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d1b6): {next=c.rip+7; // mov qword ptr [rbp + 0x230], rax
m.put(Operand{2,0,64,0,5,-1,1,0,560,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d1bd): {next=c.rip+3; // mov rax, r15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d1c0): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d1c4): {next=c.rip+3; // xor rax, r15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d1c7): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d1cb): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d1ce): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d1d2): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d1d5): {next=c.rip+4; // imul rcx, r13
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d1d9): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d1dc): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d1e0): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d1e3): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x50]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d1e8): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x60]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d1ed): {next=c.rip+7; // mov qword ptr [rbp + 0x940], rax
m.put(Operand{2,0,64,0,5,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d1f4): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x58]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,88,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d1f9): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d1fd): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004d1ff): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004d201): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004d203): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004d205): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004d206): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004d210): {next=c.rip+5; // mov qword ptr [rsp + 0x18], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d215): {next=c.rip+5; // mov qword ptr [rsp + 8], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d21a): {next=c.rip+1; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d21b): {next=c.rip+1; // push rsi
m.push(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d21c): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d21d): {next=c.rip+2; // push r12
m.push(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d21f): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d221): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d223): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d225): {next=c.rip+4; // sub rsp, 0x40
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x40)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004d229): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d22c): {next=c.rip+3; // mov edi, r8d
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d22f): {next=c.rip+2; // xor ecx, ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004d231): {next=c.rip+4; // lea rax, [rdx - 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d235): {next=c.rip+3; // cmp rax, rdx
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004d238): {next=c.rip+3; // mov eax, r8d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d23b): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rax
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d240): {next=c.rip+10; // movabs r8, 0xc2b2ae3d27d4eb4f
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc2b2ae3d27d4eb4f)}));
c.rip=next;return true;}
case UINT64_C(0x14004d24a): {next=c.rip+3; // setae cl
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.condition(3)));
c.rip=next;return true;}
case UINT64_C(0x14004d24d): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d250): {next=c.rip+8; // mov qword ptr [rsp + 0x98], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,152,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d258): {next=c.rip+4; // imul rdx, r8
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d25c): {next=c.rip+10; // movabs rcx, 0xd6e8feb86659fd93
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14004d266): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d26a): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004d274): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d277): {next=c.rip+6; // mov eax, dword ptr [rbx + 0x1020]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,3,-1,1,0,4128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d27d): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d280): {next=c.rip+7; // xor rdx, qword ptr [rbx + 0x700]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d287): {next=c.rip+7; // xor rdx, qword ptr [rbx + 0x238]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d28e): {next=c.rip+7; // xor rdx, 0x42524d4b
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x42524d4b)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d295): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d298): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d29c): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d29f): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d2a3): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d2a6): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d2aa): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d2ad): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004d2b7): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d2bb): {next=c.rip+3; // mov rbp, rcx
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d2be): {next=c.rip+4; // shr rbp, 0x21
m.shift(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d2c2): {next=c.rip+3; // xor rbp, rcx
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d2c5): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d2c8): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rbp
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d2cd): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffffc89e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004d2d2): {next=c.rip+7; // mov r10, qword ptr [rbx + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d2d9): {next=c.rip+10; // movabs rdx, 0x9e3779b97f4a7c15
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004d2e3): {next=c.rip+7; // mov rsi, qword ptr [rbx + 0x10b8]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d2ea): {next=c.rip+7; // mov r13, qword ptr [rbx + 0x10b0]
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d2f1): {next=c.rip+7; // mov r15, qword ptr [rbx + 0x1100]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4352,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d2f8): {next=c.rip+8; // movzx r12d, byte ptr [rbx + 0x10c8]
m.put(Operand{0,12,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d300): {next=c.rip+7; // movzx ecx, byte ptr [rbx + 0x1146]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4422,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d307): {next=c.rip+4; // lea r9, [rsi + rsi*4]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,6,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d30b): {next=c.rip+7; // mov r8, qword ptr [rbx + 0x10f0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4336,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d312): {next=c.rip+7; // mov r14, qword ptr [rbx + 0x1188]
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d319): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d31d): {next=c.rip+3; // mov r11d, eax
m.put(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d320): {next=c.rip+4; // imul rax, rsi, 7
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7)});
c.rip=next;return true;}
case UINT64_C(0x14004d324): {next=c.rip+8; // mov qword ptr [rsp + 0x88], r10
m.put(Operand{2,0,64,0,4,-1,1,0,136,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d32c): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d32f): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rax
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d334): {next=c.rip+3; // xor rcx, r13
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d337): {next=c.rip+3; // mov rax, r15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d33a): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d33d): {next=c.rip+3; // sub r15, rcx
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004d340): {next=c.rip+7; // movzx ecx, byte ptr [rbx + 0x1144]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,3,-1,1,0,4420,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d347): {next=c.rip+3; // test r12b, r12b
m.logic(m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004d34a): {next=c.rip+4; // cmove r15, rax
if(m.condition(0))m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d34e): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d351): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d355): {next=c.rip+4; // and r15d, 1
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004d359): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d35c): {next=c.rip+3; // neg r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(0,m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004d35f): {next=c.rip+3; // xor rcx, r13
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d362): {next=c.rip+3; // mov rbx, r15
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d365): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d368): {next=c.rip+3; // sub r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004d36b): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x80]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d373): {next=c.rip+3; // test r12b, r12b
m.logic(m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004d376): {next=c.rip+3; // not rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d379): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d37d): {next=c.rip+2; // mov eax, ebp
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d37f): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d382): {next=c.rip+3; // and r8, r15
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d385): {next=c.rip+7; // mov rbp, qword ptr [rcx + 0x1180]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d38c): {next=c.rip+3; // and rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d38f): {next=c.rip+3; // or r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d392): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004d39c): {next=c.rip+4; // imul rbp, rdx
m.imul(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d3a0): {next=c.rip+3; // add rbp, rax
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d3a3): {next=c.rip+4; // imul rbp, rdx
m.imul(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d3a7): {next=c.rip+3; // add rbp, rax
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d3aa): {next=c.rip+4; // imul rbp, rdx
m.imul(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d3ae): {next=c.rip+3; // add rbp, rax
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d3b1): {next=c.rip+3; // mov rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d3b4): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d3b8): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d3bb): {next=c.rip+6; // mov byte ptr [rcx + 0x1144], dl
m.put(Operand{2,0,8,0,1,-1,1,0,4420,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d3c1): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d3c5): {next=c.rip+3; // xor rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d3c8): {next=c.rip+4; // lea r9, [rsi + rsi*2]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,6,2,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d3cc): {next=c.rip+3; // xor rdx, r13
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d3cf): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d3d2): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d3d5): {next=c.rip+3; // test r12b, r12b
m.logic(m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004d3d8): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d3dc): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0x80]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d3e4): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d3e8): {next=c.rip+3; // add r9, r9
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d3eb): {next=c.rip+7; // mov r8, qword ptr [rdx + 0x10f8]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,-1,1,0,4344,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d3f2): {next=c.rip+7; // mov qword ptr [rdx + 0x10f0], rax
m.put(Operand{2,0,64,0,2,-1,1,0,4336,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d3f9): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d3fc): {next=c.rip+7; // movzx ecx, byte ptr [rdx + 0x1145]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,2,-1,1,0,4421,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d403): {next=c.rip+10; // movabs rdx, 0x9e3779b97f4a7c15
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004d40d): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d411): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d414): {next=c.rip+3; // xor rcx, r13
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d417): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d41a): {next=c.rip+3; // sub r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004d41d): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x80]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d425): {next=c.rip+3; // test r12b, r12b
m.logic(m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004d428): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d42c): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x98]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,152,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d434): {next=c.rip+4; // imul rbp, rdx
m.imul(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d438): {next=c.rip+3; // and rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d43b): {next=c.rip+3; // and r8, r15
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d43e): {next=c.rip+3; // or r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d441): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004d44b): {next=c.rip+3; // add rbp, rax
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d44e): {next=c.rip+4; // imul rbp, rdx
m.imul(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d452): {next=c.rip+3; // add rbp, rax
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d455): {next=c.rip+3; // mov rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d458): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d45c): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d45f): {next=c.rip+6; // mov byte ptr [rcx + 0x1145], dl
m.put(Operand{2,0,8,0,1,-1,1,0,4421,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d465): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d469): {next=c.rip+3; // xor rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d46c): {next=c.rip+4; // lea r9, [rsi + rsi*2]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,6,2,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d470): {next=c.rip+3; // xor rdx, r13
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d473): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d476): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d479): {next=c.rip+3; // test r12b, r12b
m.logic(m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004d47c): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d480): {next=c.rip+8; // mov rdx, qword ptr [rsp + 0x80]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d488): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d48c): {next=c.rip+4; // shl r9, 2
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x2)},0);
c.rip=next;return true;}
case UINT64_C(0x14004d490): {next=c.rip+7; // mov r8, qword ptr [rdx + 0x1128]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,2,-1,1,0,4392,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d497): {next=c.rip+7; // mov qword ptr [rdx + 0x10f8], rax
m.put(Operand{2,0,64,0,2,-1,1,0,4344,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d49e): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d4a1): {next=c.rip+7; // movzx ecx, byte ptr [rdx + 0x114b]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,2,-1,1,0,4427,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d4a8): {next=c.rip+9; // imul rcx, qword ptr [rsp + 0x88]
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,4,-1,1,0,136,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d4b1): {next=c.rip+7; // mov r10d, dword ptr [rdx + 0x1020]
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,2,-1,1,0,4128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d4b8): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d4bb): {next=c.rip+3; // xor rcx, r13
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d4be): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d4c1): {next=c.rip+3; // sub r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004d4c4): {next=c.rip+3; // test r12b, r12b
m.logic(m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004d4c7): {next=c.rip+3; // mov ecx, r10d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d4ca): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d4ce): {next=c.rip+3; // xor rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d4d1): {next=c.rip+3; // and rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d4d4): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004d4de): {next=c.rip+3; // and r8, r15
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d4e1): {next=c.rip+3; // or r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d4e4): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004d4ee): {next=c.rip+4; // imul rbp, rcx
m.imul(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d4f2): {next=c.rip+3; // add rbp, rax
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d4f5): {next=c.rip+4; // imul rbp, rcx
m.imul(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d4f9): {next=c.rip+3; // add rbp, rax
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d4fc): {next=c.rip+3; // mov rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d4ff): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d503): {next=c.rip+8; // mov rdi, qword ptr [rsp + 0x88]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,136,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d50b): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d50e): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d511): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x80]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d519): {next=c.rip+6; // mov byte ptr [rax + 0x114b], dl
m.put(Operand{2,0,8,0,0,-1,1,0,4427,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d51f): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d523): {next=c.rip+3; // xor rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d526): {next=c.rip+3; // xor rdx, r13
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d529): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d52c): {next=c.rip+3; // test r12b, r12b
m.logic(m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004d52f): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d533): {next=c.rip+10; // movabs rdx, 0x9e3779b97f4a7c15
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004d53d): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d541): {next=c.rip+8; // mov rcx, qword ptr [rsp + 0x80]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d549): {next=c.rip+4; // imul r9, rsi, 0xd
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd)});
c.rip=next;return true;}
case UINT64_C(0x14004d54d): {next=c.rip+7; // mov qword ptr [rcx + 0x1128], rax
m.put(Operand{2,0,64,0,1,-1,1,0,4392,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d554): {next=c.rip+10; // movabs rsi, 0x9e3779b97f4a7c15
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004d55e): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x20]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d563): {next=c.rip+10; // movabs rax, 0xc2b2ae3d27d4eb4f
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc2b2ae3d27d4eb4f)}));
c.rip=next;return true;}
case UINT64_C(0x14004d56d): {next=c.rip+4; // imul rcx, rdx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d571): {next=c.rip+4; // imul r11, rax
m.imul(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d575): {next=c.rip+10; // movabs rdx, 0xd6e8feb86659fd93
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14004d57f): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d582): {next=c.rip+8; // mov r11, qword ptr [rsp + 0x98]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,152,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d58a): {next=c.rip+3; // mov rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d58d): {next=c.rip+4; // imul rax, rdx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d591): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d594): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d597): {next=c.rip+8; // mov r10, qword ptr [rsp + 0x80]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d59f): {next=c.rip+7; // xor rcx, qword ptr [r10 + 0x700]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,10,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d5a6): {next=c.rip+7; // xor rcx, qword ptr [r10 + 0x238]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,10,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d5ad): {next=c.rip+7; // mov r8, qword ptr [r10 + 0x1130]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,10,-1,1,0,4400,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d5b4): {next=c.rip+7; // xor rcx, 0x42525441
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x42525441)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d5bb): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d5be): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d5c2): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d5c5): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004d5cf): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d5d3): {next=c.rip+8; // movzx ecx, byte ptr [r10 + 0x114c]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,10,-1,1,0,4428,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d5db): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d5de): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d5e2): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d5e5): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004d5ef): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d5f3): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d5f7): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d5fa): {next=c.rip+3; // xor rcx, r13
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d5fd): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d600): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d603): {next=c.rip+3; // sub r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004d606): {next=c.rip+3; // test r12b, r12b
m.logic(m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004d609): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d60d): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d610): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d614): {next=c.rip+3; // and r8, r15
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d617): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d61a): {next=c.rip+3; // and rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d61d): {next=c.rip+10; // movabs rbx, 0x2545f4914f6cdd1d
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004d627): {next=c.rip+3; // or r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d62a): {next=c.rip+4; // imul rbp, rsi
m.imul(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d62e): {next=c.rip+3; // add rbp, rbx
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d631): {next=c.rip+4; // imul rbp, rsi
m.imul(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d635): {next=c.rip+3; // add rbp, rbx
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d638): {next=c.rip+3; // mov rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d63b): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d63f): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d642): {next=c.rip+7; // mov byte ptr [r10 + 0x114c], dl
m.put(Operand{2,0,8,0,10,-1,1,0,4428,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d649): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d64d): {next=c.rip+3; // xor rdx, r13
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d650): {next=c.rip+3; // xor rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d653): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d656): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d659): {next=c.rip+3; // test r12b, r12b
m.logic(m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004d65c): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d660): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d664): {next=c.rip+4; // and r15d, 1
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004d668): {next=c.rip+7; // mov qword ptr [r10 + 0x1130], rax
m.put(Operand{2,0,64,0,10,-1,1,0,4400,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d66f): {next=c.rip+4; // lea rax, [r14 + 0xa]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,14,-1,1,0,10,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d673): {next=c.rip+4; // imul rbp, rsi
m.imul(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d677): {next=c.rip+3; // add rbp, rbx
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d67a): {next=c.rip+7; // mov qword ptr [r10 + 0x1180], rbp
m.put(Operand{2,0,64,0,10,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d681): {next=c.rip+8; // mov rbx, qword ptr [rsp + 0x90]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,144,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d689): {next=c.rip+10; // movabs r8, 0xff51afd7ed558ccd
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004d693): {next=c.rip+7; // mov qword ptr [r10 + 0x1188], rax
m.put(Operand{2,0,64,0,10,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d69a): {next=c.rip+3; // mov ecx, r15d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d69d): {next=c.rip+4; // shr rbp, 0x1b
m.shift(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d6a1): {next=c.rip+10; // movabs rdx, 0xc4ceb9fe1a85ec53
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004d6ab): {next=c.rip+4; // movzx eax, bpl
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d6af): {next=c.rip+7; // mov byte ptr [r10 + 0x1146], al
m.put(Operand{2,0,8,0,10,-1,1,0,4422,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d6b6): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d6ba): {next=c.rip+3; // xor rax, r13
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d6bd): {next=c.rip+5; // xor rax, qword ptr [rsp + 0x28]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d6c2): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d6c5): {next=c.rip+3; // add rax, r15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d6c8): {next=c.rip+3; // test r12b, r12b
m.logic(m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,12,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004d6cb): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d6cf): {next=c.rip+5; // xor r11, qword ptr [rsp + 0x30]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d6d4): {next=c.rip+7; // mov qword ptr [r10 + 0x1100], rax
m.put(Operand{2,0,64,0,10,-1,1,0,4352,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d6db): {next=c.rip+3; // mov rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d6de): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d6e2): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d6e5): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d6e9): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d6ec): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d6f0): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d6f3): {next=c.rip+4; // imul rcx, rdx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d6f7): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d6fa): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d6fe): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d701): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x20]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d706): {next=c.rip+7; // xor rcx, qword ptr [r10 + 0x940]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,10,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d70d): {next=c.rip+7; // xor qword ptr [r10 + 0x230], rax
m.put(Operand{2,0,64,0,10,-1,1,0,560,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,64,0,10,-1,1,0,560,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d714): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d717): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d71b): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d71e): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d722): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d725): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d729): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d72c): {next=c.rip+4; // imul rcx, rdx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d730): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d733): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d737): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d73a): {next=c.rip+7; // mov qword ptr [r10 + 0x940], rax
m.put(Operand{2,0,64,0,10,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d741): {next=c.rip+4; // add rsp, 0x40
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x40)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d745): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004d747): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004d749): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004d74b): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004d74d): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004d74e): {next=c.rip+1; // pop rsi
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004d74f): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004d750): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004d760): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d765): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d766): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004d76a): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d76d): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffffc3fe);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004d772): {next=c.rip+2; // mov edi, eax
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d774): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d777): {next=c.rip+4; // lea r8d, [rdi + 3]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,7,-1,1,0,3,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d77b): {next=c.rip+7; // cmp r8d, dword ptr [rbx + 0x738]
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,3,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004d782): {next=c.rip+6; // jae 0x14004d85d
if(m.condition(3))next=next+UINT64_C(0xd5);
c.rip=next;return true;}
case UINT64_C(0x14004d788): {next=c.rip+2; // mov edx, edi
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d78a): {next=c.rip+5; // call 0x14004c110
{uint64_t target=next+UINT64_C(0xffffffffffffe981);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004d78f): {next=c.rip+2; // mov ecx, edi
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d791): {next=c.rip+4; // lea r8d, [rdi + 4]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,7,-1,1,0,4,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d795): {next=c.rip+7; // add rcx, qword ptr [rbx + 0x730]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,3,-1,1,0,1840,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d79c): {next=c.rip+3; // movzx eax, byte ptr [rcx]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d79f): {next=c.rip+5; // movzx r9d, byte ptr [rcx + 1]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d7a4): {next=c.rip+4; // shl r9d, 8
m.shift(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},0);
c.rip=next;return true;}
case UINT64_C(0x14004d7a8): {next=c.rip+3; // or r9d, eax
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004d7ab): {next=c.rip+4; // movzx eax, byte ptr [rcx + 3]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,3,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d7af): {next=c.rip+4; // shl r9d, 8
m.shift(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},0);
c.rip=next;return true;}
case UINT64_C(0x14004d7b3): {next=c.rip+3; // or r9d, eax
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004d7b6): {next=c.rip+4; // movzx eax, byte ptr [rcx + 2]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d7ba): {next=c.rip+7; // inc qword ptr [rbx + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004d7c1): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004d7cb): {next=c.rip+4; // shl r9d, 8
m.shift(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},0);
c.rip=next;return true;}
case UINT64_C(0x14004d7cf): {next=c.rip+3; // or r9d, eax
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004d7d2): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d7d9): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d7dd): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004d7e7): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d7ea): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d7f1): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d7f5): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d7f8): {next=c.rip+6; // mov byte ptr [rbx + 0x1141], dl
m.put(Operand{2,0,8,0,3,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d7fe): {next=c.rip+8; // imul rdx, qword ptr [rbx + 0x10c0]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d806): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d80d): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d810): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d813): {next=c.rip+7; // xor rdx, qword ptr [rbx + 0x10b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d81a): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d81d): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d820): {next=c.rip+7; // cmp byte ptr [rbx + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004d827): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d82b): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d82f): {next=c.rip+7; // mov qword ptr [rbx + 0x10d8], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d836): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x30]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d83b): {next=c.rip+6; // imul eax, edi, 0x4baacb87
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4baacb87)});
c.rip=next;return true;}
case UINT64_C(0x14004d841): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d843): {next=c.rip+3; // shr ecx, 0xd
m.shift(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0xd)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d846): {next=c.rip+2; // xor ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004d848): {next=c.rip+3; // xor ecx, r9d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004d84b): {next=c.rip+6; // xor ecx, 0x25f42c16
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x25f42c16)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004d851): {next=c.rip+6; // imul eax, ecx, 0xe22145fb
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xe22145fb)});
c.rip=next;return true;}
case UINT64_C(0x14004d857): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d85b): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004d85c): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004d85d): {next=c.rip+5; // mov edx, 0x52445533
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x52445533)}));
c.rip=next;return true;}
case UINT64_C(0x14004d862): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffffbac9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004d867): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004d870): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d875): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d876): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004d87a): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d87d): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffffc2ee);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004d882): {next=c.rip+2; // mov edi, eax
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d884): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d887): {next=c.rip+4; // lea r8d, [rdi + 1]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,7,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d88b): {next=c.rip+7; // cmp r8d, dword ptr [rbx + 0x738]
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,3,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004d892): {next=c.rip+6; // jae 0x14004d95b
if(m.condition(3))next=next+UINT64_C(0xc3);
c.rip=next;return true;}
case UINT64_C(0x14004d898): {next=c.rip+2; // mov edx, edi
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d89a): {next=c.rip+5; // call 0x14004c110
{uint64_t target=next+UINT64_C(0xffffffffffffe871);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004d89f): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004d8a9): {next=c.rip+4; // lea r8d, [rdi + 2]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,7,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d8ad): {next=c.rip+2; // mov eax, edi
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d8af): {next=c.rip+7; // add rax, qword ptr [rbx + 0x730]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,3,-1,1,0,1840,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d8b6): {next=c.rip+5; // movzx r9d, byte ptr [rax + 1]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d8bb): {next=c.rip+4; // movzx r10d, byte ptr [rax]
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d8bf): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d8c6): {next=c.rip+7; // inc qword ptr [rbx + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004d8cd): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d8d1): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004d8db): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d8de): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d8e5): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d8e9): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d8ec): {next=c.rip+6; // mov byte ptr [rbx + 0x1141], dl
m.put(Operand{2,0,8,0,3,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d8f2): {next=c.rip+8; // imul rdx, qword ptr [rbx + 0x10c0]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d8fa): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d901): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d904): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d907): {next=c.rip+7; // xor rdx, qword ptr [rbx + 0x10b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d90e): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d911): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d914): {next=c.rip+7; // cmp byte ptr [rbx + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004d91b): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d91f): {next=c.rip+3; // mov edx, r9d
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d922): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d926): {next=c.rip+3; // shl edx, 8
m.shift(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},0);
c.rip=next;return true;}
case UINT64_C(0x14004d929): {next=c.rip+7; // mov qword ptr [rbx + 0x10d8], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d930): {next=c.rip+3; // or edx, r10d
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004d933): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x30]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d938): {next=c.rip+6; // imul ecx, edi, 0x4baacb87
m.imul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4baacb87)});
c.rip=next;return true;}
case UINT64_C(0x14004d93e): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d940): {next=c.rip+5; // xor eax, 0x582c000
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x582c000)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004d945): {next=c.rip+3; // shr eax, 0xd
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0xd)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d948): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004d94a): {next=c.rip+2; // xor edx, ecx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004d94c): {next=c.rip+6; // imul eax, edx, 0x4ffb
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4ffb)});
c.rip=next;return true;}
case UINT64_C(0x14004d952): {next=c.rip+3; // movzx eax, ax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,16,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d955): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d959): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004d95a): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004d95b): {next=c.rip+5; // mov edx, 0x52445532
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x52445532)}));
c.rip=next;return true;}
case UINT64_C(0x14004d960): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffffb9cb);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004d965): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004d970): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d975): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d976): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004d97a): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d97d): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffffc1ee);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004d982): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d985): {next=c.rip+2; // mov edi, eax
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d987): {next=c.rip+6; // cmp eax, dword ptr [rbx + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,3,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004d98d): {next=c.rip+6; // jae 0x14004da2f
if(m.condition(3))next=next+UINT64_C(0x9c);
c.rip=next;return true;}
case UINT64_C(0x14004d993): {next=c.rip+3; // mov r8d, edi
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d996): {next=c.rip+2; // mov edx, edi
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d998): {next=c.rip+5; // call 0x14004c110
{uint64_t target=next+UINT64_C(0xffffffffffffe773);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004d99d): {next=c.rip+7; // inc qword ptr [rbx + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,3,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004d9a4): {next=c.rip+4; // lea r8d, [rdi + 1]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,7,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d9a8): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d9af): {next=c.rip+10; // movabs rcx, 0x9e3779b97f4a7c15
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004d9b9): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d9bd): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004d9c7): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d9ca): {next=c.rip+7; // mov qword ptr [rbx + 0x1180], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d9d1): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004d9d5): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d9d8): {next=c.rip+6; // mov byte ptr [rbx + 0x1141], dl
m.put(Operand{2,0,8,0,3,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d9de): {next=c.rip+8; // imul rdx, qword ptr [rbx + 0x10c0]
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,3,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004d9e6): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d9ed): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004d9f0): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d9f3): {next=c.rip+7; // xor rdx, qword ptr [rbx + 0x10b0]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,3,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004d9fa): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004d9fd): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004da00): {next=c.rip+7; // cmp byte ptr [rbx + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,3,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004da07): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da0b): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da0f): {next=c.rip+7; // mov qword ptr [rbx + 0x10d8], rax
m.put(Operand{2,0,64,0,3,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da16): {next=c.rip+7; // mov rax, qword ptr [rbx + 0x730]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,3,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da1d): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x30]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da22): {next=c.rip+4; // movzx eax, byte ptr [rax + rdi]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,7,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da26): {next=c.rip+3; // xor eax, 0x47
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x47)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004da29): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004da2d): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004da2e): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004da2f): {next=c.rip+5; // mov edx, 0x52445538
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x52445538)}));
c.rip=next;return true;}
case UINT64_C(0x14004da34): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffffb8f7);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004da39): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004da40): {next=c.rip+5; // mov qword ptr [rsp + 8], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da45): {next=c.rip+5; // mov qword ptr [rsp + 0x10], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da4a): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da4b): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004da4f): {next=c.rip+2; // mov eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da51): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da54): {next=c.rip+4; // imul rsi, rax, 0x3e
m.imul(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x14004da58): {next=c.rip+3; // mov edi, r8d
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da5b): {next=c.rip+4; // cmp r8d, 0x3d
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3d)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004da5f): {next=c.rip+2; // jne 0x14004da81
if(m.condition(1))next=next+UINT64_C(0x20);
c.rip=next;return true;}
case UINT64_C(0x14004da61): {next=c.rip+5; // call 0x14004d870
{uint64_t target=next+UINT64_C(0xfffffffffffffe0a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004da66): {next=c.rip+3; // lea edx, [rax + 0x3e]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,62,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da69): {next=c.rip+3; // add rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004da6c): {next=c.rip+5; // movzx eax, word ptr [rbx + rdx*2 + 0x14]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,16,0,3,2,2,0,20,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da71): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x30]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da76): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x38]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da7b): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004da7f): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004da80): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004da81): {next=c.rip+3; // cmp edi, 0x3c
m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3c)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004da84): {next=c.rip+2; // jne 0x14004daa6
if(m.condition(1))next=next+UINT64_C(0x20);
c.rip=next;return true;}
case UINT64_C(0x14004da86): {next=c.rip+5; // call 0x14004d870
{uint64_t target=next+UINT64_C(0xfffffffffffffde5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004da8b): {next=c.rip+3; // lea ecx, [rax + 0x3e]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,62,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da8e): {next=c.rip+3; // add rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004da91): {next=c.rip+5; // movzx eax, word ptr [rbx + rcx*2 + 0x14]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,16,0,3,1,2,0,20,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da96): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x30]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004da9b): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x38]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004daa0): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004daa4): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004daa5): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004daa6): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffffc0c5);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004daab): {next=c.rip+4; // lea rax, [rsi + rdi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,7,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004daaf): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x38]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dab4): {next=c.rip+5; // movzx eax, word ptr [rbx + rax*2 + 0x14]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,16,0,3,0,2,0,20,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dab9): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x30]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dabe): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004dac2): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004dac3): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004dad0): {next=c.rip+3; // mov rax, rsp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dad3): {next=c.rip+4; // mov dword ptr [rax + 0x18], r8d
m.put(Operand{2,0,32,0,0,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dad7): {next=c.rip+3; // mov dword ptr [rax + 0x10], edx
m.put(Operand{2,0,32,0,0,-1,1,0,16,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dada): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dadb): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dadd): {next=c.rip+4; // sub rsp, 0x58
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x58)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004dae1): {next=c.rip+3; // mov edi, r8d
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dae4): {next=c.rip+3; // mov r14, rcx
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dae7): {next=c.rip+4; // cmp r8d, 0x4f
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4f)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004daeb): {next=c.rip+6; // jae 0x14004e0bb
if(m.condition(3))next=next+UINT64_C(0x5ca);
c.rip=next;return true;}
case UINT64_C(0x14004daf1): {next=c.rip+4; // mov qword ptr [rax + 8], rbx
m.put(Operand{2,0,64,0,0,-1,1,0,8,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004daf5): {next=c.rip+4; // mov qword ptr [rax - 0x18], rbp
m.put(Operand{2,0,64,0,0,-1,1,0,-24,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004daf9): {next=c.rip+4; // mov qword ptr [rax - 0x20], rsi
m.put(Operand{2,0,64,0,0,-1,1,0,-32,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dafd): {next=c.rip+2; // xor esi, esi
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004daff): {next=c.rip+4; // mov qword ptr [rax - 0x28], r12
m.put(Operand{2,0,64,0,0,-1,1,0,-40,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db03): {next=c.rip+4; // mov qword ptr [rax - 0x30], r13
m.put(Operand{2,0,64,0,0,-1,1,0,-48,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db07): {next=c.rip+4; // mov qword ptr [rax - 0x38], r15
m.put(Operand{2,0,64,0,0,-1,1,0,-56,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db0b): {next=c.rip+3; // test r8d, r8d
m.logic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004db0e): {next=c.rip+2; // je 0x14004db30
if(m.condition(0))next=next+UINT64_C(0x20);
c.rip=next;return true;}
case UINT64_C(0x14004db10): {next=c.rip+3; // lea eax, [rdi - 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,7,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db13): {next=c.rip+2; // mov ebx, esi
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db15): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db17): {next=c.rip+5; // call 0x140048ac0
{uint64_t target=next+UINT64_C(0xffffffffffffafa4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004db1c): {next=c.rip+3; // cmp eax, 0x4e
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4e)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004db1f): {next=c.rip+2; // jb 0x14004db2c
if(m.condition(2))next=next+UINT64_C(0xb);
c.rip=next;return true;}
case UINT64_C(0x14004db21): {next=c.rip+2; // inc ebx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004db23): {next=c.rip+3; // cmp ebx, 0x40
m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x40)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004db26): {next=c.rip+2; // jl 0x14004db15
if(m.condition(6))next=next+UINT64_C(0xffffffffffffffed);
c.rip=next;return true;}
case UINT64_C(0x14004db28): {next=c.rip+2; // mov eax, edi
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db2a): {next=c.rip+2; // jmp 0x14004db32
next=next+UINT64_C(0x6);
c.rip=next;return true;}
case UINT64_C(0x14004db2c): {next=c.rip+2; // inc eax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004db2e): {next=c.rip+2; // jmp 0x14004db32
next=next+UINT64_C(0x2);
c.rip=next;return true;}
case UINT64_C(0x14004db30): {next=c.rip+2; // mov eax, esi
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db32): {next=c.rip+7; // mov r15d, dword ptr [r14 + 0x738]
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db39): {next=c.rip+3; // mov ebp, r15d
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db3c): {next=c.rip+3; // imul eax, eax, 0x19
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x19)});
c.rip=next;return true;}
case UINT64_C(0x14004db3f): {next=c.rip+3; // cmp eax, r15d
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004db42): {next=c.rip+3; // cmovbe ebp, eax
if(m.condition(4))m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db45): {next=c.rip+3; // lea ecx, [rax + 0x19]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,25,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db48): {next=c.rip+4; // mov dword ptr [rsp + 0x78], ebp
m.put(Operand{2,0,32,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db4c): {next=c.rip+3; // cmp ecx, r15d
m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004db4f): {next=c.rip+3; // mov r8d, ebp
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db52): {next=c.rip+4; // cmovbe r15d, ecx
if(m.condition(4))m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db56): {next=c.rip+3; // cmp ebp, r15d
m.arithmetic(m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004db59): {next=c.rip+2; // jae 0x14004db8b
if(m.condition(3))next=next+UINT64_C(0x30);
c.rip=next;return true;}
case UINT64_C(0x14004db5b): {next=c.rip+7; // lea r9, [rip + 0x39e5be]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,3794366,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db62): {next=c.rip+3; // add r9, r8
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004db65): {next=c.rip+11; // nop word ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x14004db70): {next=c.rip+4; // movzx eax, byte ptr [r9]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,9,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db74): {next=c.rip+4; // lea r9, [r9 + 1]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,9,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db78): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x730]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db7f): {next=c.rip+4; // mov byte ptr [r8 + rcx], al
m.put(Operand{2,0,8,0,8,1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db83): {next=c.rip+3; // inc r8d
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004db86): {next=c.rip+3; // cmp r8d, r15d
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004db89): {next=c.rip+2; // jb 0x14004db70
if(m.condition(2))next=next+UINT64_C(0xffffffffffffffe5);
c.rip=next;return true;}
case UINT64_C(0x14004db8b): {next=c.rip+3; // mov rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db8e): {next=c.rip+5; // mov ecx, 3
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}));
c.rip=next;return true;}
case UINT64_C(0x14004db93): {next=c.rip+8; // mov qword ptr [rsp + 0x88], rax
m.put(Operand{2,0,64,0,4,-1,1,0,136,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004db9b): {next=c.rip+10; // movabs rbx, 0x9e3779b97f4a7c15
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004dba5): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dbaa): {next=c.rip+10; // movabs rdx, 0x2545f4914f6cdd1d
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004dbb4): {next=c.rip+10; // movabs r8, 0xd6e8feb86659fd93
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14004dbbe): {next=c.rip+10; // movabs r9, 0xff51afd7ed558ccd
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004dbc8): {next=c.rip+10; // movabs r10, 0xc4ceb9fe1a85ec53
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004dbd2): {next=c.rip+3; // mov r13d, ebp
m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dbd5): {next=c.rip+3; // cmp ebp, r15d
m.arithmetic(m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004dbd8): {next=c.rip+6; // jae 0x14004dd1d
if(m.condition(3))next=next+UINT64_C(0x13f);
c.rip=next;return true;}
case UINT64_C(0x14004dbde): {next=c.rip+8; // mov rbp, qword ptr [rsp + 0x88]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,136,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dbe6): {next=c.rip+3; // mov r12, rdi
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dbe9): {next=c.rip+4; // imul r12, r8
m.imul(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004dbed): {next=c.rip+3; // nop dword ptr [rax]

c.rip=next;return true;}
case UINT64_C(0x14004dbf0): {next=c.rip+2; // test edi, edi
m.logic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004dbf2): {next=c.rip+2; // je 0x14004dc57
if(m.condition(0))next=next+UINT64_C(0x63);
c.rip=next;return true;}
case UINT64_C(0x14004dbf4): {next=c.rip+3; // lea eax, [rdi - 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,7,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dbf7): {next=c.rip+2; // mov ebx, esi
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dbf9): {next=c.rip+7; // nop dword ptr [rax]

c.rip=next;return true;}
case UINT64_C(0x14004dc00): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dc02): {next=c.rip+5; // call 0x140048ac0
{uint64_t target=next+UINT64_C(0xffffffffffffaeb9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004dc07): {next=c.rip+3; // cmp eax, 0x4e
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4e)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004dc0a): {next=c.rip+2; // jb 0x14004dc35
if(m.condition(2))next=next+UINT64_C(0x29);
c.rip=next;return true;}
case UINT64_C(0x14004dc0c): {next=c.rip+2; // inc ebx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004dc0e): {next=c.rip+3; // cmp ebx, 0x40
m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x40)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004dc11): {next=c.rip+2; // jl 0x14004dc00
if(m.condition(6))next=next+UINT64_C(0xffffffffffffffed);
c.rip=next;return true;}
case UINT64_C(0x14004dc13): {next=c.rip+2; // mov eax, edi
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dc15): {next=c.rip+10; // movabs rbx, 0x9e3779b97f4a7c15
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004dc1f): {next=c.rip+10; // movabs r9, 0xff51afd7ed558ccd
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004dc29): {next=c.rip+10; // movabs r10, 0xc4ceb9fe1a85ec53
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004dc33): {next=c.rip+2; // jmp 0x14004dc59
next=next+UINT64_C(0x24);
c.rip=next;return true;}
case UINT64_C(0x14004dc35): {next=c.rip+2; // inc eax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004dc37): {next=c.rip+10; // movabs rbx, 0x9e3779b97f4a7c15
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004dc41): {next=c.rip+10; // movabs r9, 0xff51afd7ed558ccd
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004dc4b): {next=c.rip+10; // movabs r10, 0xc4ceb9fe1a85ec53
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004dc55): {next=c.rip+2; // jmp 0x14004dc59
next=next+UINT64_C(0x2);
c.rip=next;return true;}
case UINT64_C(0x14004dc57): {next=c.rip+2; // mov eax, esi
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dc59): {next=c.rip+3; // imul ecx, eax, 0x19
m.imul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x19)});
c.rip=next;return true;}
case UINT64_C(0x14004dc5c): {next=c.rip+10; // movabs rax, 0xf2ecef0d703934d6
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf2ecef0d703934d6)}));
c.rip=next;return true;}
case UINT64_C(0x14004dc66): {next=c.rip+3; // mov edx, r13d
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dc69): {next=c.rip+4; // imul rdx, rbx
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004dc6d): {next=c.rip+4; // imul rcx, rbx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004dc71): {next=c.rip+3; // mov r8d, r13d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dc74): {next=c.rip+3; // inc r13d
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004dc77): {next=c.rip+3; // xor rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004dc7a): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004dc7d): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dc80): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004dc84): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004dc87): {next=c.rip+4; // imul rax, r9
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004dc8b): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dc8e): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004dc92): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004dc95): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004dc99): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dc9c): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004dca0): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004dca3): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dca5): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x730]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dcac): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004dcaf): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004dcb2): {next=c.rip+10; // movabs rax, 0xf2ecef0d62343caf
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf2ecef0d62343caf)}));
c.rip=next;return true;}
case UINT64_C(0x14004dcbc): {next=c.rip+3; // xor rdx, r12
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004dcbf): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004dcc2): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dcc5): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004dcc9): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004dccc): {next=c.rip+4; // imul rax, r9
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004dcd0): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dcd3): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004dcd7): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004dcda): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004dcde): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dce1): {next=c.rip+4; // shr rdx, 0x18
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x18)},1);
c.rip=next;return true;}
case UINT64_C(0x14004dce5): {next=c.rip+4; // shr rax, 0x39
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x39)},1);
c.rip=next;return true;}
case UINT64_C(0x14004dce9): {next=c.rip+2; // xor al, dl
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004dceb): {next=c.rip+4; // xor byte ptr [rcx + r8], al
m.put(Operand{2,0,8,0,1,8,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,8,0,1,8,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004dcef): {next=c.rip+3; // cmp r13d, r15d
m.arithmetic(m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004dcf2): {next=c.rip+6; // jb 0x14004dbf0
if(m.condition(2))next=next+UINT64_C(0xfffffffffffffef8);
c.rip=next;return true;}
case UINT64_C(0x14004dcf8): {next=c.rip+4; // mov ebp, dword ptr [rsp + 0x78]
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dcfc): {next=c.rip+10; // movabs rdx, 0x2545f4914f6cdd1d
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004dd06): {next=c.rip+8; // mov rax, qword ptr [rsp + 0x88]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,136,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dd0e): {next=c.rip+10; // movabs r8, 0xd6e8feb86659fd93
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14004dd18): {next=c.rip+5; // mov rcx, qword ptr [rsp + 0x20]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dd1d): {next=c.rip+3; // add rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004dd20): {next=c.rip+4; // sub rcx, 1
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004dd24): {next=c.rip+8; // mov qword ptr [rsp + 0x88], rax
m.put(Operand{2,0,64,0,4,-1,1,0,136,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dd2c): {next=c.rip+5; // mov qword ptr [rsp + 0x20], rcx
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dd31): {next=c.rip+6; // jne 0x14004dbd2
if(m.condition(1))next=next+UINT64_C(0xfffffffffffffe9b);
c.rip=next;return true;}
case UINT64_C(0x14004dd37): {next=c.rip+10; // movabs r12, 0xff51afd7ed558ccd
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004dd41): {next=c.rip+3; // mov rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dd44): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004dd48): {next=c.rip+10; // movabs r13, 0xc4ceb9fe1a85ec53
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004dd52): {next=c.rip+3; // mov r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dd55): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dd58): {next=c.rip+3; // mov r10d, ebp
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dd5b): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004dd5f): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004dd62): {next=c.rip+7; // xor rcx, 0x424c4b31
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x424c4b31)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004dd69): {next=c.rip+4; // imul rcx, r12
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004dd6d): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dd70): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004dd74): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004dd77): {next=c.rip+10; // movabs rcx, 0xf2ecef0d713d3ead
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf2ecef0d713d3ead)}));
c.rip=next;return true;}
case UINT64_C(0x14004dd81): {next=c.rip+4; // imul rax, r13
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004dd85): {next=c.rip+3; // mov r11, rax
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dd88): {next=c.rip+4; // shr r11, 0x21
m.shift(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004dd8c): {next=c.rip+3; // xor r11, rax
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004dd8f): {next=c.rip+3; // mov rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dd92): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004dd95): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dd98): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004dd9c): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004dd9f): {next=c.rip+4; // imul rcx, r12
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004dda3): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dda6): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ddaa): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ddad): {next=c.rip+4; // imul rdx, r13
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ddb1): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ddb4): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ddb8): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ddbb): {next=c.rip+4; // cmovne r9, rax
if(m.condition(1))m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ddbf): {next=c.rip+3; // cmp ebp, r15d
m.arithmetic(m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004ddc2): {next=c.rip+6; // jae 0x14004dfc2
if(m.condition(3))next=next+UINT64_C(0x1fa);
c.rip=next;return true;}
case UINT64_C(0x14004ddc8): {next=c.rip+10; // movabs rax, 0xf2ecef0d32757fe4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf2ecef0d32757fe4)}));
c.rip=next;return true;}
case UINT64_C(0x14004ddd2): {next=c.rip+10; // movabs rbx, 0x3436bbe72fbae733
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3436bbe72fbae733)}));
c.rip=next;return true;}
case UINT64_C(0x14004dddc): {next=c.rip+3; // xor r11, rax
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004dddf): {next=c.rip+10; // movabs rdi, 0x1fd72d531f8172e7
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1fd72d531f8172e7)}));
c.rip=next;return true;}
case UINT64_C(0x14004dde9): {next=c.rip+10; // movabs r12, 0x8d6fddc5e5691d2d
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8d6fddc5e5691d2d)}));
c.rip=next;return true;}
case UINT64_C(0x14004ddf3): {next=c.rip+10; // movabs r13, 0xe028d2ace07e8d19
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xe028d2ace07e8d19)}));
c.rip=next;return true;}
case UINT64_C(0x14004ddfd): {next=c.rip+3; // nop dword ptr [rax]

c.rip=next;return true;}
case UINT64_C(0x14004de00): {next=c.rip+3; // mov ecx, r10d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004de03): {next=c.rip+3; // mov r8d, r10d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004de06): {next=c.rip+7; // add r8, qword ptr [r14 + 0x730]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1840,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004de0d): {next=c.rip+2; // sub ecx, ebp
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14004de0f): {next=c.rip+4; // imul rcx, rbx
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004de13): {next=c.rip+3; // inc r10d
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004de16): {next=c.rip+3; // add rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004de19): {next=c.rip+3; // xor rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004de1c): {next=c.rip+7; // imul rax, rcx, 0x2001
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2001)});
c.rip=next;return true;}
case UINT64_C(0x14004de23): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004de26): {next=c.rip+4; // shr rcx, 7
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x7)},1);
c.rip=next;return true;}
case UINT64_C(0x14004de2a): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004de2d): {next=c.rip+4; // lea rax, [rcx + rcx*8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,1,1,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004de31): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004de34): {next=c.rip+4; // shr rdx, 0x11
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},1);
c.rip=next;return true;}
case UINT64_C(0x14004de38): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004de3b): {next=c.rip+3; // add rdx, r13
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004de3e): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004de41): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004de44): {next=c.rip+4; // shr rax, 0x18
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x18)},1);
c.rip=next;return true;}
case UINT64_C(0x14004de48): {next=c.rip+4; // shr rcx, 0x28
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x28)},1);
c.rip=next;return true;}
case UINT64_C(0x14004de4c): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004de4e): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004de51): {next=c.rip+4; // shr rax, 0x1d
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14004de55): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004de57): {next=c.rip+2; // xor cl, dl
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004de59): {next=c.rip+3; // xor cl, byte ptr [r8]
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,8,0,8,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004de5c): {next=c.rip+3; // xor cl, 0x78
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x78)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004de5f): {next=c.rip+3; // movzx eax, cl
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004de62): {next=c.rip+3; // xor rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004de65): {next=c.rip+3; // mov byte ptr [r8], cl
m.put(Operand{2,0,8,0,8,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004de68): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004de6c): {next=c.rip+3; // sub rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004de6f): {next=c.rip+3; // mov r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004de72): {next=c.rip+4; // shr r9, 0x1f
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)},1);
c.rip=next;return true;}
case UINT64_C(0x14004de76): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004de79): {next=c.rip+3; // cmp r10d, r15d
m.arithmetic(m.get(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004de7c): {next=c.rip+2; // jb 0x14004de00
if(m.condition(2))next=next+UINT64_C(0xffffffffffffff82);
c.rip=next;return true;}
case UINT64_C(0x14004de7e): {next=c.rip+7; // mov edi, dword ptr [rsp + 0x80]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,4,-1,1,0,128,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004de85): {next=c.rip+3; // mov r11d, r15d
m.put(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004de88): {next=c.rip+3; // sub r11d, ebp
m.put(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14004de8b): {next=c.rip+3; // mov r8d, ebp
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004de8e): {next=c.rip+4; // cmp r11d, 0x40
m.arithmetic(m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x40)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004de92): {next=c.rip+6; // jb 0x14004df82
if(m.condition(2))next=next+UINT64_C(0xea);
c.rip=next;return true;}
case UINT64_C(0x14004de98): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x8f8]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004de9f): {next=c.rip+4; // lea eax, [r15 - 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,15,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dea3): {next=c.rip+2; // mov edx, ebp
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dea5): {next=c.rip+7; // lea r12, [r14 + 0x730]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,14,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004deac): {next=c.rip+4; // mov r9, qword ptr [r12]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,12,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004deb0): {next=c.rip+4; // lea r13, [r9 + rdx]
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,9,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004deb4): {next=c.rip+3; // add rdx, r10
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004deb7): {next=c.rip+4; // lea rbx, [r9 + rax]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,9,0,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004debb): {next=c.rip+3; // add rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004debe): {next=c.rip+3; // cmp r13, rax
m.arithmetic(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004dec1): {next=c.rip+2; // ja 0x14004decc
if(m.condition(5))next=next+UINT64_C(0x9);
c.rip=next;return true;}
case UINT64_C(0x14004dec3): {next=c.rip+3; // cmp rbx, rdx
m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004dec6): {next=c.rip+6; // jae 0x14004df82
if(m.condition(3))next=next+UINT64_C(0xb6);
c.rip=next;return true;}
case UINT64_C(0x14004decc): {next=c.rip+3; // cmp r13, r12
m.arithmetic(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004decf): {next=c.rip+2; // ja 0x14004dedd
if(m.condition(5))next=next+UINT64_C(0xc);
c.rip=next;return true;}
case UINT64_C(0x14004ded1): {next=c.rip+3; // mov r8d, ebp
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ded4): {next=c.rip+3; // cmp rbx, r12
m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004ded7): {next=c.rip+6; // jae 0x14004df82
if(m.condition(3))next=next+UINT64_C(0xa5);
c.rip=next;return true;}
case UINT64_C(0x14004dedd): {next=c.rip+7; // lea rax, [r14 + 0x8f8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,14,-1,1,0,2296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dee4): {next=c.rip+3; // cmp r13, rax
m.arithmetic(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004dee7): {next=c.rip+2; // ja 0x14004def5
if(m.condition(5))next=next+UINT64_C(0xc);
c.rip=next;return true;}
case UINT64_C(0x14004dee9): {next=c.rip+3; // mov r8d, ebp
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004deec): {next=c.rip+3; // cmp rbx, rax
m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004deef): {next=c.rip+6; // jae 0x14004df82
if(m.condition(3))next=next+UINT64_C(0x8d);
c.rip=next;return true;}
case UINT64_C(0x14004def5): {next=c.rip+4; // and r11d, 0x3f
m.put(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3f)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004def9): {next=c.rip+3; // mov ebx, r15d
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004defc): {next=c.rip+3; // sub ebx, r11d
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,11,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14004deff): {next=c.rip+3; // lea edx, [rbp + 0x20]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,5,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004df02): {next=c.rip+3; // mov r8d, ebp
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004df05): {next=c.rip+11; // nop word ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x14004df10): {next=c.rip+3; // mov eax, r8d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004df13): {next=c.rip+4; // add r8d, 0x40
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x40)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14004df17): {next=c.rip+6; // movdqu xmm0, xmmword ptr [r9 + rax]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,9,0,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004df1d): {next=c.rip+6; // movdqu xmm1, xmmword ptr [r10 + rax]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,10,0,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004df23): {next=c.rip+4; // pxor xmm1, xmm0
{uint8_t x[16],y[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},y);for(int k=0;k<16;k++)x[k]^=y[k];m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);}
c.rip=next;return true;}
case UINT64_C(0x14004df27): {next=c.rip+6; // movdqu xmmword ptr [r9 + rax], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,9,0,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004df2d): {next=c.rip+3; // lea eax, [rdx - 0x10]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,-16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004df30): {next=c.rip+6; // movdqu xmm0, xmmword ptr [rax + r9]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,0,9,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004df36): {next=c.rip+6; // movdqu xmm1, xmmword ptr [rax + r10]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,0,10,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004df3c): {next=c.rip+4; // pxor xmm1, xmm0
{uint8_t x[16],y[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},y);for(int k=0;k<16;k++)x[k]^=y[k];m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);}
c.rip=next;return true;}
case UINT64_C(0x14004df40): {next=c.rip+6; // movdqu xmmword ptr [rax + r9], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,0,9,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004df46): {next=c.rip+3; // lea eax, [rdx + 0x10]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,16,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004df49): {next=c.rip+6; // movdqu xmm0, xmmword ptr [rdx + r9]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,2,9,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004df4f): {next=c.rip+6; // movdqu xmm1, xmmword ptr [rdx + r10]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,2,10,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004df55): {next=c.rip+4; // pxor xmm1, xmm0
{uint8_t x[16],y[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},y);for(int k=0;k<16;k++)x[k]^=y[k];m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);}
c.rip=next;return true;}
case UINT64_C(0x14004df59): {next=c.rip+6; // movdqu xmmword ptr [rdx + r9], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,2,9,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004df5f): {next=c.rip+3; // lea edx, [rdx + 0x40]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004df62): {next=c.rip+6; // movdqu xmm0, xmmword ptr [rax + r9]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,0,9,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004df68): {next=c.rip+6; // movdqu xmm1, xmmword ptr [rax + r10]
{uint8_t v[16];m.vector_get(Operand{2,0,128,0,0,10,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004df6e): {next=c.rip+4; // pxor xmm1, xmm0
{uint8_t x[16],y[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);m.vector_get(Operand{3,0,128,0,-1,-1,1,0,0,UINT64_C(0x0)},y);for(int k=0;k<16;k++)x[k]^=y[k];m.vector_put(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},x);}
c.rip=next;return true;}
case UINT64_C(0x14004df72): {next=c.rip+6; // movdqu xmmword ptr [rax + r9], xmm1
{uint8_t v[16];m.vector_get(Operand{3,1,128,0,-1,-1,1,0,0,UINT64_C(0x0)},v);m.vector_put(Operand{2,0,128,0,0,9,1,0,0,UINT64_C(0x0)},v);}
c.rip=next;return true;}
case UINT64_C(0x14004df78): {next=c.rip+3; // cmp r8d, ebx
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004df7b): {next=c.rip+2; // jb 0x14004df10
if(m.condition(2))next=next+UINT64_C(0xffffffffffffff93);
c.rip=next;return true;}
case UINT64_C(0x14004df7d): {next=c.rip+3; // cmp r8d, r15d
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004df80): {next=c.rip+2; // jae 0x14004dfa4
if(m.condition(3))next=next+UINT64_C(0x22);
c.rip=next;return true;}
case UINT64_C(0x14004df82): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x730]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004df89): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x8f8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004df90): {next=c.rip+3; // mov ecx, r8d
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004df93): {next=c.rip+3; // inc r8d
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004df96): {next=c.rip+3; // add rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004df99): {next=c.rip+4; // movzx ecx, byte ptr [rax + rcx]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004df9d): {next=c.rip+2; // xor byte ptr [rdx], cl
m.put(Operand{2,0,8,0,2,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,8,0,2,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004df9f): {next=c.rip+3; // cmp r8d, r15d
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004dfa2): {next=c.rip+2; // jb 0x14004df82
if(m.condition(2))next=next+UINT64_C(0xffffffffffffffde);
c.rip=next;return true;}
case UINT64_C(0x14004dfa4): {next=c.rip+10; // movabs r13, 0xc4ceb9fe1a85ec53
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004dfae): {next=c.rip+10; // movabs r12, 0xff51afd7ed558ccd
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004dfb8): {next=c.rip+10; // movabs rbx, 0x9e3779b97f4a7c15
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004dfc2): {next=c.rip+8; // cmp dword ptr [r14 + 0x1048], 0
m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,4168,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004dfca): {next=c.rip+6; // je 0x14004e054
if(m.condition(0))next=next+UINT64_C(0x84);
c.rip=next;return true;}
case UINT64_C(0x14004dfd0): {next=c.rip+3; // cmp ebp, r15d
m.arithmetic(m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004dfd3): {next=c.rip+6; // jae 0x14004e054
if(m.condition(3))next=next+UINT64_C(0x7b);
c.rip=next;return true;}
case UINT64_C(0x14004dfd9): {next=c.rip+10; // movabs r9, 0xf2ecef0d613038a9
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xf2ecef0d613038a9)}));
c.rip=next;return true;}
case UINT64_C(0x14004dfe3): {next=c.rip+7; // mov ecx, dword ptr [r14 + 0x1044]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,4164,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dfea): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004dfec): {next=c.rip+2; // mov eax, ebp
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004dfee): {next=c.rip+7; // div dword ptr [r14 + 0x1048]
m.divide(Operand{2,0,32,0,14,-1,1,0,4168,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004dff5): {next=c.rip+2; // cmp eax, ecx
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004dff7): {next=c.rip+2; // je 0x14004e04d
if(m.condition(0))next=next+UINT64_C(0x54);
c.rip=next;return true;}
case UINT64_C(0x14004dff9): {next=c.rip+2; // inc ecx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004dffb): {next=c.rip+2; // cmp eax, ecx
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004dffd): {next=c.rip+2; // je 0x14004e04d
if(m.condition(0))next=next+UINT64_C(0x4e);
c.rip=next;return true;}
case UINT64_C(0x14004dfff): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x730]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e006): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e00a): {next=c.rip+3; // xor rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e00d): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e010): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e014): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e017): {next=c.rip+4; // imul rcx, r12
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e01b): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e01e): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e022): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e025): {next=c.rip+2; // mov ecx, ebp
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e027): {next=c.rip+4; // imul rax, r13
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e02b): {next=c.rip+3; // add rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e02e): {next=c.rip+3; // mov r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e031): {next=c.rip+4; // shr r8, 0x21
m.shift(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e035): {next=c.rip+3; // xor r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e038): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e03b): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e03e): {next=c.rip+4; // shr rcx, 0x10
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x10)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e042): {next=c.rip+4; // shr rax, 8
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e046): {next=c.rip+2; // xor cl, al
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004e048): {next=c.rip+3; // xor cl, r8b
m.put(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004e04b): {next=c.rip+2; // xor byte ptr [rdx], cl
m.put(Operand{2,0,8,0,2,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{2,0,8,0,2,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004e04d): {next=c.rip+2; // inc ebp
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004e04f): {next=c.rip+3; // cmp ebp, r15d
m.arithmetic(m.get(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004e052): {next=c.rip+2; // jb 0x14004dfe3
if(m.condition(2))next=next+UINT64_C(0xffffffffffffff8f);
c.rip=next;return true;}
case UINT64_C(0x14004e054): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x11e8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4584,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e05b): {next=c.rip+5; // mov r15, qword ptr [rsp + 0x30]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e060): {next=c.rip+5; // mov r13, qword ptr [rsp + 0x38]
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e065): {next=c.rip+5; // mov r12, qword ptr [rsp + 0x40]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e06a): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x50]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,80,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e06f): {next=c.rip+3; // test rbx, rbx
m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64);
c.rip=next;return true;}
case UINT64_C(0x14004e072): {next=c.rip+2; // je 0x14004e0a2
if(m.condition(0))next=next+UINT64_C(0x2e);
c.rip=next;return true;}
case UINT64_C(0x14004e074): {next=c.rip+2; // test edi, edi
m.logic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004e076): {next=c.rip+2; // je 0x14004e09a
if(m.condition(0))next=next+UINT64_C(0x22);
c.rip=next;return true;}
case UINT64_C(0x14004e078): {next=c.rip+3; // lea eax, [rdi - 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,7,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e07b): {next=c.rip+5; // nop dword ptr [rax + rax]

c.rip=next;return true;}
case UINT64_C(0x14004e080): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e082): {next=c.rip+5; // call 0x140048ac0
{uint64_t target=next+UINT64_C(0xffffffffffffaa39);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004e087): {next=c.rip+3; // cmp eax, 0x4e
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4e)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004e08a): {next=c.rip+2; // jb 0x14004e095
if(m.condition(2))next=next+UINT64_C(0x9);
c.rip=next;return true;}
case UINT64_C(0x14004e08c): {next=c.rip+2; // inc esi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004e08e): {next=c.rip+3; // cmp esi, 0x40
m.arithmetic(m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x40)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004e091): {next=c.rip+2; // jl 0x14004e080
if(m.condition(6))next=next+UINT64_C(0xffffffffffffffed);
c.rip=next;return true;}
case UINT64_C(0x14004e093): {next=c.rip+2; // jmp 0x14004e09c
next=next+UINT64_C(0x7);
c.rip=next;return true;}
case UINT64_C(0x14004e095): {next=c.rip+3; // lea edi, [rax + 1]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e098): {next=c.rip+2; // jmp 0x14004e09c
next=next+UINT64_C(0x2);
c.rip=next;return true;}
case UINT64_C(0x14004e09a): {next=c.rip+2; // mov edi, esi
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e09c): {next=c.rip+2; // mov eax, edi
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e09e): {next=c.rip+4; // mov byte ptr [rax + rbx], 1
m.put(Operand{2,0,8,0,0,3,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14004e0a2): {next=c.rip+7; // inc qword ptr [r14 + 0x790]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,1936,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,1936,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004e0a9): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x48]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,72,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e0ae): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x70]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,112,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e0b3): {next=c.rip+4; // add rsp, 0x58
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x58)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e0b7): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004e0b9): {next=c.rip+1; // pop rdi
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004e0ba): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004e0bb): {next=c.rip+5; // mov edx, 0x504b4f50
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x504b4f50)}));
c.rip=next;return true;}
case UINT64_C(0x14004e0c0): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffffb26b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004e0c5): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004e0d0): {next=c.rip+2; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e0d2): {next=c.rip+4; // sub rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004e0d6): {next=c.rip+6; // mov eax, dword ptr [rcx + 0x738]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,-1,1,0,1848,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e0dc): {next=c.rip+3; // mov rbp, rcx
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e0df): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004e0e1): {next=c.rip+6; // je 0x14004e173
if(m.condition(0))next=next+UINT64_C(0x8c);
c.rip=next;return true;}
case UINT64_C(0x14004e0e7): {next=c.rip+2; // cmp edx, eax
m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004e0e9): {next=c.rip+6; // jae 0x14004e173
if(m.condition(3))next=next+UINT64_C(0x84);
c.rip=next;return true;}
case UINT64_C(0x14004e0ef): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e0f4): {next=c.rip+5; // mov eax, 0x51eb851f
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x51eb851f)}));
c.rip=next;return true;}
case UINT64_C(0x14004e0f9): {next=c.rip+2; // mul edx
m.mul(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e0fb): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e100): {next=c.rip+2; // xor esi, esi
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004e102): {next=c.rip+5; // mov qword ptr [rsp + 0x40], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e107): {next=c.rip+2; // mov edi, edx
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e109): {next=c.rip+3; // shr edi, 3
m.shift(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e10c): {next=c.rip+3; // cmp edi, 0x4f
m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4f)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004e10f): {next=c.rip+2; // jb 0x14004e116
if(m.condition(2))next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x14004e111): {next=c.rip+3; // lea edi, [rsi + 0x4f]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,6,-1,1,0,79,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e114): {next=c.rip+2; // jmp 0x14004e13c
next=next+UINT64_C(0x26);
c.rip=next;return true;}
case UINT64_C(0x14004e116): {next=c.rip+2; // test edi, edi
m.logic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004e118): {next=c.rip+2; // je 0x14004e13a
if(m.condition(0))next=next+UINT64_C(0x20);
c.rip=next;return true;}
case UINT64_C(0x14004e11a): {next=c.rip+3; // lea eax, [rdi - 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,7,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e11d): {next=c.rip+2; // mov ebx, esi
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e11f): {next=c.rip+1; // nop 

c.rip=next;return true;}
case UINT64_C(0x14004e120): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e122): {next=c.rip+5; // call 0x140048c20
{uint64_t target=next+UINT64_C(0xffffffffffffaaf9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004e127): {next=c.rip+3; // cmp eax, 0x4e
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4e)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004e12a): {next=c.rip+2; // jb 0x14004e135
if(m.condition(2))next=next+UINT64_C(0x9);
c.rip=next;return true;}
case UINT64_C(0x14004e12c): {next=c.rip+2; // inc ebx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004e12e): {next=c.rip+3; // cmp ebx, 0x40
m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x40)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004e131): {next=c.rip+2; // jl 0x14004e120
if(m.condition(6))next=next+UINT64_C(0xffffffffffffffed);
c.rip=next;return true;}
case UINT64_C(0x14004e133): {next=c.rip+2; // jmp 0x14004e13c
next=next+UINT64_C(0x7);
c.rip=next;return true;}
case UINT64_C(0x14004e135): {next=c.rip+3; // lea edi, [rax + 1]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,0,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e138): {next=c.rip+2; // jmp 0x14004e13c
next=next+UINT64_C(0x2);
c.rip=next;return true;}
case UINT64_C(0x14004e13a): {next=c.rip+2; // mov edi, esi
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e13c): {next=c.rip+7; // mov rax, qword ptr [rbp + 0x780]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,5,-1,1,0,1920,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e143): {next=c.rip+3; // cmp edi, 0x4f
m.arithmetic(m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x4f)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004e146): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x30]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e14b): {next=c.rip+3; // cmovb esi, edi
if(m.condition(2))m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e14e): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x40]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,64,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e153): {next=c.rip+6; // mov dword ptr [rbp + 0x788], esi
m.put(Operand{2,0,32,0,5,-1,1,0,1928,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e159): {next=c.rip+4; // cmp byte ptr [rax + rsi], 0
m.arithmetic(m.get(Operand{2,0,8,0,0,6,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004e15d): {next=c.rip+2; // jne 0x14004e16e
if(m.condition(1))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x14004e15f): {next=c.rip+3; // mov r8d, esi
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e162): {next=c.rip+4; // mov byte ptr [rax + rsi], 1
m.put(Operand{2,0,8,0,0,6,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}));
c.rip=next;return true;}
case UINT64_C(0x14004e166): {next=c.rip+3; // mov rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e169): {next=c.rip+5; // call 0x14004dad0
{uint64_t target=next+UINT64_C(0xfffffffffffff962);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004e16e): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x38]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e173): {next=c.rip+4; // add rsp, 0x20
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x20)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e177): {next=c.rip+1; // pop rbp
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004e178): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004e180): {next=c.rip+2; // push r12
m.push(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e182): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e184): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e186): {next=c.rip+4; // sub rsp, 0x40
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x40)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004e18a): {next=c.rip+7; // movsxd rax, dword ptr [rcx + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,1,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004e191): {next=c.rip+3; // mov r14, rcx
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e194): {next=c.rip+3; // mov r13d, edx
m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e197): {next=c.rip+10; // movabs rcx, 0x58c3bfd0829beec2
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x58c3bfd0829beec2)}));
c.rip=next;return true;}
case UINT64_C(0x14004e1a1): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e1a5): {next=c.rip+10; // movabs rcx, 0xfa9a351b03456afd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xfa9a351b03456afd)}));
c.rip=next;return true;}
case UINT64_C(0x14004e1af): {next=c.rip+3; // mov r12, r8
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e1b2): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e1b9): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e1be): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e1c3): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004e1ca): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e1ce): {next=c.rip+10; // movabs rcx, 0x1c52ab45800ee6e8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1c52ab45800ee6e8)}));
c.rip=next;return true;}
case UINT64_C(0x14004e1d8): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e1df): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e1e4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e1e9): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004e1f0): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e1f4): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e1fb): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e200): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e205): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4528,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e20c): {next=c.rip+4; // shr rax, 0xd
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0xd)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e210): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e213): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e217): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e21a): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004e224): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e228): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004e232): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e235): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e239): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e23c): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e240): {next=c.rip+10; // movabs rax, 0x4a0e73b209923845
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x4a0e73b209923845)}));
c.rip=next;return true;}
case UINT64_C(0x14004e24a): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e24d): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e251): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e254): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e257): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4528,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e25e): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e261): {next=c.rip+7; // mov qword ptr [r14 + 0x11b0], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,4528,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e268): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e26b): {next=c.rip+5; // call 0x14004a3d0
{uint64_t target=next+UINT64_C(0xffffffffffffc160);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004e270): {next=c.rip+3; // not rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e273): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e276): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e279): {next=c.rip+5; // call 0x14004a2b0
{uint64_t target=next+UINT64_C(0xffffffffffffc032);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004e27e): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4528,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e285): {next=c.rip+3; // test r13d, r13d
m.logic(m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004e288): {next=c.rip+6; // jns 0x14004ee4a
if(m.condition(11))next=next+UINT64_C(0xbbc);
c.rip=next;return true;}
case UINT64_C(0x14004e28e): {next=c.rip+7; // cmp qword ptr [r14 + 0x1058], r12
m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4184,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004e295): {next=c.rip+6; // jne 0x14004ee58
if(m.condition(1))next=next+UINT64_C(0xbbd);
c.rip=next;return true;}
case UINT64_C(0x14004e29b): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004e2a2): {next=c.rip+10; // movabs rcx, 0xe39e2bb086f9bef4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xe39e2bb086f9bef4)}));
c.rip=next;return true;}
case UINT64_C(0x14004e2ac): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e2b0): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e2b3): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e2ba): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e2bf): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e2c4): {next=c.rip+5; // call 0x140049ee0
{uint64_t target=next+UINT64_C(0xffffffffffffbc17);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004e2c9): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004e2cb): {next=c.rip+6; // jne 0x14004ee3f
if(m.condition(1))next=next+UINT64_C(0xb6e);
c.rip=next;return true;}
case UINT64_C(0x14004e2d1): {next=c.rip+7; // cmp dword ptr [r14 + 0x4b8], eax
m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1208,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004e2d8): {next=c.rip+6; // jne 0x14004ee3f
if(m.condition(1))next=next+UINT64_C(0xb61);
c.rip=next;return true;}
case UINT64_C(0x14004e2de): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x10d0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e2e5): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1140]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e2ed): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e2f0): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e2f7): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e2fe): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e305): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e309): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e30e): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e315): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e318): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rbp
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e31d): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e320): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e325): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x1188]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e32c): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e32f): {next=c.rip+3; // sub r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004e332): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e337): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e33f): {next=c.rip+10; // movabs rbp, 0x2545f4914f6cdd1d
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004e349): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004e34c): {next=c.rip+5; // mov qword ptr [rsp + 0x20], r15
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e351): {next=c.rip+10; // movabs r15, 0x9e3779b97f4a7c15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004e35b): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e35f): {next=c.rip+3; // inc rsi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004e362): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e366): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rsi
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e36d): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e370): {next=c.rip+3; // add r9, rbp
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e373): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e37a): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e37d): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e381): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e384): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e38b): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e38f): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e392): {next=c.rip+3; // xor rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e395): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e398): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004e39b): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e39f): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e3a3): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e3aa): {next=c.rip+7; // cmp r8d, 0x14b3da
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x14b3da)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004e3b1): {next=c.rip+6; // jne 0x14004ee26
if(m.condition(1))next=next+UINT64_C(0xa6f);
c.rip=next;return true;}
case UINT64_C(0x14004e3b7): {next=c.rip+3; // mov eax, r13d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e3ba): {next=c.rip+4; // btr eax, 0x1f
m.bitop(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)},false);
c.rip=next;return true;}
case UINT64_C(0x14004e3be): {next=c.rip+3; // cmp eax, 2
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004e3c1): {next=c.rip+2; // jae 0x14004e40d
if(m.condition(3))next=next+UINT64_C(0x4a);
c.rip=next;return true;}
case UINT64_C(0x14004e3c3): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e3c7): {next=c.rip+4; // lea rax, [rsi + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e3cb): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e3d2): {next=c.rip+3; // add r9, rbp
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e3d5): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e3dc): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e3e0): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e3e4): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e3eb): {next=c.rip+4; // imul rax, r10
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e3ef): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e3f2): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e3f5): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e3f8): {next=c.rip+6; // add rax, 0x3edeff
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3edeff)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e3fe): {next=c.rip+7; // xor rcx, 0x3edeff
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3edeff)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e405): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004e408): {next=c.rip+5; // jmp 0x14004ee1b
next=next+UINT64_C(0xa0e);
c.rip=next;return true;}
case UINT64_C(0x14004e40d): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e410): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffffb75b);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004e415): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e41d): {next=c.rip+10; // movabs rbx, 0xff51afd7ed558ccd
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004e427): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e42e): {next=c.rip+10; // movabs r8, 0xc4ceb9fe1a85ec53
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004e438): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10b0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e43f): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e447): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e449): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e44c): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x930]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e453): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e456): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e45a): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e45d): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e461): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e464): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e468): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e46b): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e46f): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e472): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e476): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e479): {next=c.rip+7; // mov qword ptr [r14 + 0x930], rdx
m.put(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e480): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x948]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e487): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e48e): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e491): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e495): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e498): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e49c): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e49f): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e4a3): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e4a6): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e4aa): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e4ad): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e4b1): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e4b4): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e4bb): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1118]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e4c2): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1149]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e4ca): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e4d1): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e4d5): {next=c.rip+4; // lea rbx, [rax + rax*4]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e4d9): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e4dc): {next=c.rip+3; // add rbx, rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e4df): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e4e2): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e4e5): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e4e8): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004e4eb): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004e4ee): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e4f2): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e4f9): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004e500): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e504): {next=c.rip+3; // add rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e507): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e50e): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e512): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e516): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e51d): {next=c.rip+4; // imul r8, r11
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e521): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e524): {next=c.rip+3; // xor r8, r10
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e527): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e52a): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e52d): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004e530): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e534): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e538): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e53b): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e542): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffffde79);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004e547): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e54e): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e555): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e55d): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e564): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1110]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e56b): {next=c.rip+4; // lea r11, [rax + rax*8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e56f): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e577): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e57a): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e57e): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e581): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e584): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e587): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004e58a): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004e58d): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e591): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e598): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004e59f): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e5a2): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e5a6): {next=c.rip+3; // add rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e5a9): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e5b0): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e5b4): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e5b8): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e5bf): {next=c.rip+4; // imul r8, r10
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e5c3): {next=c.rip+3; // xor r8, r11
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e5c6): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e5c9): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e5cc): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004e5cf): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e5d3): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e5d7): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e5da): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e5e1): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffffddda);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004e5e6): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e5e9): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffffb582);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004e5ee): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004e5f5): {next=c.rip+2; // jae 0x14004e601
if(m.condition(3))next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x14004e5f7): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e5f9): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e5fc): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffffddbf);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004e601): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x10c0]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e608): {next=c.rip+7; // mov rbp, qword ptr [r14 + 0x10b0]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e60f): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x1110]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e616): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e61e): {next=c.rip+3; // mov rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e621): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e629): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e630): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e637): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x1180]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e63e): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e642): {next=c.rip+4; // lea r9, [rbx + rbx*8]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e646): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e649): {next=c.rip+3; // xor rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e64c): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e64f): {next=c.rip+3; // sub r11, rcx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004e652): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004e655): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004e65f): {next=c.rip+4; // cmove r11, rax
if(m.condition(0))m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e663): {next=c.rip+4; // imul r10, r15
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e667): {next=c.rip+3; // add r10, rcx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e66a): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e66d): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e670): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e674): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e677): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e67e): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e682): {next=c.rip+3; // xor rdx, r9
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e685): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e688): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e68b): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004e68e): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e692): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e696): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e699): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e6a0): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004e6aa): {next=c.rip+4; // imul r10, r15
m.imul(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e6ae): {next=c.rip+3; // add r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e6b1): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e6b5): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e6bc): {next=c.rip+6; // mov r8d, 0x7a5d
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x7a5d)}));
c.rip=next;return true;}
case UINT64_C(0x14004e6c2): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r10
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e6c9): {next=c.rip+4; // lea rax, [rbx + rbx*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e6cd): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e6d0): {next=c.rip+4; // shr r10, 0x1b
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e6d4): {next=c.rip+4; // movzx edx, r10b
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e6d8): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e6df): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e6e3): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e6e6): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e6e9): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e6ec): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004e6ef): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e6f3): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e6f7): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e6fa): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e701): {next=c.rip+8; // movzx edx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e709): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x230]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e710): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xffffffffffffe8db);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004e715): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x230]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e71c): {next=c.rip+10; // movabs rdi, 0xff51afd7ed558ccd
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004e726): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e729): {next=c.rip+10; // movabs rsi, 0xc4ceb9fe1a85ec53
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004e733): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e73a): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e73d): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e741): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e744): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e748): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e74b): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e74f): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e752): {next=c.rip+4; // imul rax, rsi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e756): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e759): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e75d): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004e75f): {next=c.rip+3; // lea eax, [rdx + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e762): {next=c.rip+2; // mov ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e764): {next=c.rip+2; // xor eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004e766): {next=c.rip+3; // imul ecx, edx
m.imul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e769): {next=c.rip+2; // not ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e76b): {next=c.rip+2; // and ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004e76d): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004e770): {next=c.rip+2; // je 0x14004e7e3
if(m.condition(0))next=next+UINT64_C(0x71);
c.rip=next;return true;}
case UINT64_C(0x14004e772): {next=c.rip+4; // and r8b, 3
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004e776): {next=c.rip+4; // cmp r8b, 1
m.arithmetic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004e77a): {next=c.rip+2; // jne 0x14004e7e3
if(m.condition(1))next=next+UINT64_C(0x67);
c.rip=next;return true;}
case UINT64_C(0x14004e77c): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e783): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004e78d): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004e794): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e798): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e79b): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e7a2): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e7a6): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e7a9): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e7b0): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e7b8): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e7bf): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e7c6): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e7c9): {next=c.rip+6; // add rax, 0x15c9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x15c9)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e7cf): {next=c.rip+7; // xor rcx, 0x15c9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x15c9)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e7d6): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004e7de): {next=c.rip+5; // jmp 0x14004ee1b
next=next+UINT64_C(0x638);
c.rip=next;return true;}
case UINT64_C(0x14004e7e3): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e7e6): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffffb385);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004e7eb): {next=c.rip+2; // mov ebx, eax
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e7ed): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004e7f4): {next=c.rip+2; // jb 0x14004e85d
if(m.condition(2))next=next+UINT64_C(0x67);
c.rip=next;return true;}
case UINT64_C(0x14004e7f6): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e7fd): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004e807): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004e80e): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e812): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e815): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e81c): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e820): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e823): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e82a): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e832): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e839): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e840): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e843): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e849): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e850): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004e858): {next=c.rip+5; // jmp 0x14004ee1b
next=next+UINT64_C(0x5be);
c.rip=next;return true;}
case UINT64_C(0x14004e85d): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e85f): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e862): {next=c.rip+5; // call 0x14004e0d0
{uint64_t target=next+UINT64_C(0xfffffffffffff869);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004e867): {next=c.rip+7; // movsxd rcx, dword ptr [r14 + 0x928]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004e86e): {next=c.rip+10; // movabs r8, 0xd6e8feb86659fd93
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14004e878): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e87f): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e882): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e886): {next=c.rip+4; // imul rcx, r15
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e88a): {next=c.rip+4; // rol rdx, 0x11
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x14004e88e): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e891): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x700]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e898): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e89b): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e89e): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e8a2): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e8a5): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e8a9): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e8ac): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e8b0): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e8b3): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e8b7): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e8ba): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e8be): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e8c1): {next=c.rip+3; // mov r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e8c4): {next=c.rip+4; // shr r10, 0x1d
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e8c8): {next=c.rip+3; // xor r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e8cb): {next=c.rip+4; // or r10, 1
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e8cf): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e8d2): {next=c.rip+7; // mov qword ptr [r14 + 0x700], r10
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e8d9): {next=c.rip+5; // and eax, 0x3ff
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3ff)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004e8de): {next=c.rip+6; // cmp rax, 0x2c5
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2c5)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004e8e4): {next=c.rip+2; // jne 0x14004e8f5
if(m.condition(1))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x14004e8e6): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e8e9): {next=c.rip+5; // call 0x14007fb70
{uint64_t target=next+UINT64_C(0x31282);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004e8ee): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x700]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e8f5): {next=c.rip+4; // movzx eax, r10b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e8f9): {next=c.rip+2; // and al, 0x1f
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004e8fb): {next=c.rip+2; // cmp al, 0x15
m.arithmetic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x15)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004e8fd): {next=c.rip+6; // jne 0x14004e9ed
if(m.condition(1))next=next+UINT64_C(0xea);
c.rip=next;return true;}
case UINT64_C(0x14004e903): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004e90a): {next=c.rip+6; // xor rax, 0x5a5a
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5a5a)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e910): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x940]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e917): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e91b): {next=c.rip+4; // rol rcx, 0x11
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x14004e91f): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e922): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e925): {next=c.rip+10; // movabs rax, 0x8f70feda99a6026d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8f70feda99a6026d)}));
c.rip=next;return true;}
case UINT64_C(0x14004e92f): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e932): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e935): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e939): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e93c): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e940): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e943): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e947): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e94a): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e94e): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e951): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e955): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e958): {next=c.rip+3; // mov r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e95b): {next=c.rip+4; // shr r9, 0x1d
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e95f): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e962): {next=c.rip+4; // or r9, 1
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e966): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e969): {next=c.rip+3; // mov rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e96c): {next=c.rip+4; // shr rax, 8
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e970): {next=c.rip+3; // and eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004e973): {next=c.rip+4; // shr rcx, 0x28
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x28)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e977): {next=c.rip+4; // imul r8, rax, 0x3e
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x14004e97b): {next=c.rip+5; // mov eax, 0x8421085
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8421085)}));
c.rip=next;return true;}
case UINT64_C(0x14004e980): {next=c.rip+2; // mul ecx
m.mul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e982): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e984): {next=c.rip+2; // sub eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14004e986): {next=c.rip+2; // shr eax, 1
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e988): {next=c.rip+2; // add eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14004e98a): {next=c.rip+3; // shr eax, 5
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x5)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e98d): {next=c.rip+3; // imul eax, eax, 0x3e
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x14004e990): {next=c.rip+2; // sub ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14004e992): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e994): {next=c.rip+3; // add r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e997): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e99e): {next=c.rip+4; // movsxd rcx, dword ptr [rax + r8*4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,8,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004e9a2): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004e9a9): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e9ac): {next=c.rip+7; // add rcx, qword ptr [r14 + 0x4e0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004e9b3): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e9b6): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e9b9): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e9bd): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e9c0): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e9c4): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e9c7): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e9cb): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e9ce): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004e9d2): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e9d5): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004e9d9): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e9dc): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004e9df): {next=c.rip+7; // inc qword ptr [r14 + 0x708]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004e9e6): {next=c.rip+7; // mov qword ptr [r14 + 0x700], rax
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e9ed): {next=c.rip+7; // inc dword ptr [r14 + 0x75c]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004e9f4): {next=c.rip+7; // mov eax, dword ptr [r14 + 0x75c]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004e9fb): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x758]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1880,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004ea02): {next=c.rip+2; // jb 0x14004ea17
if(m.condition(2))next=next+UINT64_C(0x13);
c.rip=next;return true;}
case UINT64_C(0x14004ea04): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea07): {next=c.rip+11; // mov dword ptr [r14 + 0x75c], 0
m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea12): {next=c.rip+5; // call 0x14004b250
{uint64_t target=next+UINT64_C(0xffffffffffffc839);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004ea17): {next=c.rip+3; // mov r8d, ebx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea1a): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea1c): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea1f): {next=c.rip+5; // call 0x14004c110
{uint64_t target=next+UINT64_C(0xffffffffffffd6ec);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004ea24): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004ea2b): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea35): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea3c): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x1188]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea43): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ea47): {next=c.rip+3; // add r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004ea4a): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea51): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea54): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ea58): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea5b): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea62): {next=c.rip+7; // mov rdi, qword ptr [r14 + 0x10c0]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea69): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea70): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x10b0]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea77): {next=c.rip+8; // movzx r15d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea7f): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ea83): {next=c.rip+4; // lea rax, [r11 + r11*8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,11,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea87): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ea8a): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ea8d): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea90): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ea93): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004ea96): {next=c.rip+4; // lea rax, [rdx + rbx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea9a): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ea9e): {next=c.rip+3; // inc r10
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004eaa1): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eaa8): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x8f8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eaaf): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x730]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eab6): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r10
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eabb): {next=c.rip+5; // movzx r8d, byte ptr [rcx + rbx]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eac0): {next=c.rip+4; // xor r8b, byte ptr [rax + rbx]
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,8,0,0,3,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004eac4): {next=c.rip+2; // inc ebx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004eac6): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], r10
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eacd): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004ead7): {next=c.rip+4; // imul r9, rax
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004eadb): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eae0): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004eaea): {next=c.rip+3; // add r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004eaed): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eaf0): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004eaf4): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eaf7): {next=c.rip+4; // lea rax, [r11 + r11]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,11,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eafb): {next=c.rip+7; // mov byte ptr [r14 + 0x1141], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eb02): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004eb06): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004eb09): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004eb0c): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eb0f): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004eb12): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004eb15): {next=c.rip+4; // lea rax, [rdx + rbx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eb19): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eb1d): {next=c.rip+7; // mov qword ptr [r14 + 0x10d8], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eb24): {next=c.rip+7; // movsxd rdx, dword ptr [r14 + 0x928]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004eb2b): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x940]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eb32): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eb35): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x238]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004eb3c): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004eb3f): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004eb42): {next=c.rip+10; // movabs rbx, 0xff51afd7ed558ccd
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004eb4c): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x230]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004eb53): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eb56): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004eb5a): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004eb5d): {next=c.rip+4; // imul rax, rbx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004eb61): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eb64): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004eb68): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004eb6b): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004eb75): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004eb79): {next=c.rip+4; // movzx eax, r8b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eb7d): {next=c.rip+3; // mov rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eb80): {next=c.rip+4; // shr rbx, 0x21
m.shift(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004eb84): {next=c.rip+3; // xor rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004eb87): {next=c.rip+7; // lea rcx, [rip - 0x4eb8e]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-322446,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eb8e): {next=c.rip+6; // xor rax, 0x93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x93)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004eb94): {next=c.rip+7; // mov qword ptr [r14 + 0x948], rbx
m.put(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eb9b): {next=c.rip+8; // movzx ebp, byte ptr [rax + rcx + 0x3e3660]
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,1,1,0,4077152,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eba3): {next=c.rip+4; // xor bpl, 0x27
m.put(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x27)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004eba7): {next=c.rip+10; // movabs r8, 0xff51afd7ed558ccd
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004ebb1): {next=c.rip+2; // inc edx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004ebb3): {next=c.rip+7; // mov dword ptr [r14 + 0x928], edx
m.put(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ebba): {next=c.rip+3; // test dl, 0x1f
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004ebbd): {next=c.rip+2; // jne 0x14004ec03
if(m.condition(1))next=next+UINT64_C(0x44);
c.rip=next;return true;}
case UINT64_C(0x14004ebbf): {next=c.rip+3; // movsxd rax, edx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004ebc2): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ebc5): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x230]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ebcc): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ebcf): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ebd3): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ebd6): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004ebe0): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ebe4): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ebe7): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ebeb): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ebee): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ebf2): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ebf5): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ebf9): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ebfc): {next=c.rip+7; // mov qword ptr [r14 + 0x230], rax
m.put(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ec03): {next=c.rip+4; // movzx edx, bpl
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ec07): {next=c.rip+3; // xor r10, rdx
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ec0a): {next=c.rip+7; // mov byte ptr [r14 + 0x11a4], bpl
m.put(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ec11): {next=c.rip+5; // xor r10, qword ptr [rsp + 0x60]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ec16): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ec19): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ec1d): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ec20): {next=c.rip+10; // movabs r10, 0x9e3779b97f4a7c15
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004ec2a): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ec2e): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ec32): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ec36): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ec39): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ec3d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ec40): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004ec4a): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ec4e): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ec51): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ec55): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ec58): {next=c.rip+7; // mov ecx, dword ptr [r14 + 0x8bc]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,2236,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ec5f): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ec66): {next=c.rip+10; // movabs rax, 0xd6e8feb86659fd93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14004ec70): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ec74): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ec77): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ec7a): {next=c.rip+10; // movabs rbx, 0x2545f4914f6cdd1d
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004ec84): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ec87): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004ec8a): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ec8e): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ec91): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ec95): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ec98): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ec9c): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ec9f): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004eca9): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ecad): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ecb2): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ecb6): {next=c.rip+3; // and edx, 3
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004ecb9): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004ecbc): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ecc3): {next=c.rip+4; // cmp bpl, 0x3e
m.arithmetic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3e)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004ecc7): {next=c.rip+6; // jae 0x14004ed5f
if(m.condition(3))next=next+UINT64_C(0x92);
c.rip=next;return true;}
case UINT64_C(0x14004eccd): {next=c.rip+7; // inc qword ptr [r14 + 0x1088]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004ecd4): {next=c.rip+7; // lea rax, [rip - 0x4ecdb]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-322779,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ecdb): {next=c.rip+8; // mov r8d, dword ptr [rax + rdx*4 + 0x3e0490]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,0,2,4,0,4064400,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ece3): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ecea): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ecee): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ecf2): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ecf9): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ecfd): {next=c.rip+2; // mov ebx, edx
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ecff): {next=c.rip+3; // xor rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ed02): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ed05): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ed08): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004ed0b): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ed0e): {next=c.rip+4; // movzx r8d, bpl
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ed12): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004ed15): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ed19): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ed1c): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ed23): {next=c.rip+5; // call 0x14004da40
{uint64_t target=next+UINT64_C(0xffffffffffffed18);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004ed28): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ed2a): {next=c.rip+4; // lea edx, [r13 - 1]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,13,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ed2e): {next=c.rip+4; // imul rcx, rbx, 0x3e
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x14004ed32): {next=c.rip+3; // mov r8, r12
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ed35): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004ed38): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ed3f): {next=c.rip+4; // movsxd r9, dword ptr [rax + rcx*4]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,1,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004ed43): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ed46): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004ed4d): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ed50): {next=c.rip+7; // add r9, qword ptr [r14 + 0x4e0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004ed57): {next=c.rip+3; // call r9
{uint64_t target=m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004ed5a): {next=c.rip+5; // jmp 0x14004ee26
next=next+UINT64_C(0xc7);
c.rip=next;return true;}
case UINT64_C(0x14004ed5f): {next=c.rip+7; // inc dword ptr [r14 + 0x1090]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004ed66): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ed69): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ed6d): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ed70): {next=c.rip+8; // lea rax, [r11*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,-1,11,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ed78): {next=c.rip+7; // mov byte ptr [r14 + 0x1143], cl
m.put(Operand{2,0,8,0,14,-1,1,0,4419,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ed7f): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ed83): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ed87): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ed8a): {next=c.rip+3; // xor rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ed8d): {next=c.rip+7; // mov qword ptr [r14 + 0x10e8], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,4328,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ed94): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ed9b): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004ed9e): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eda1): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004eda5): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eda8): {next=c.rip+7; // mov byte ptr [r14 + 0x114a], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4426,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004edaf): {next=c.rip+4; // imul rax, r11, 0xb
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb)});
c.rip=next;return true;}
case UINT64_C(0x14004edb3): {next=c.rip+4; // imul rdx, rdi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004edb7): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004edba): {next=c.rip+3; // xor rdx, rsi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004edbd): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004edc0): {next=c.rip+4; // xor rcx, 1
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004edc4): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004edc7): {next=c.rip+4; // lea rax, [rdx + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004edcb): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004edcf): {next=c.rip+7; // mov qword ptr [r14 + 0x1120], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4384,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004edd6): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004edda): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ede1): {next=c.rip+4; // imul r9, r10
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ede5): {next=c.rip+3; // add r9, rbx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004ede8): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004edef): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004edf3): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004edf7): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004edfe): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ee02): {next=c.rip+3; // xor rax, rsi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ee05): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ee08): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee0b): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004ee11): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ee18): {next=c.rip+3; // test r15b, r15b
m.logic(m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004ee1b): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee1f): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee26): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x28]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee2b): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x30]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee30): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x38]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee35): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x68]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee3a): {next=c.rip+5; // mov r15, qword ptr [rsp + 0x20]
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee3f): {next=c.rip+4; // add rsp, 0x40
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x40)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004ee43): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004ee45): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004ee47): {next=c.rip+2; // pop r12
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004ee49): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004ee4a): {next=c.rip+5; // mov edx, 0x54485254
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x54485254)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee4f): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee52): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffffa4d9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004ee57): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004ee58): {next=c.rip+5; // mov edx, 0x43414e59
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x43414e59)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee5d): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee60): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffffa4cb);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004ee65): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004ee70): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee72): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee74): {next=c.rip+2; // push r15
m.push(m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee76): {next=c.rip+4; // sub rsp, 0x40
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x40)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004ee7a): {next=c.rip+7; // movsxd rax, dword ptr [rcx + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,1,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004ee81): {next=c.rip+3; // mov r14, rcx
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee84): {next=c.rip+3; // mov r15d, edx
m.put(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee87): {next=c.rip+10; // movabs rcx, 0x33e684c9b3f98733
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x33e684c9b3f98733)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee91): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ee95): {next=c.rip+10; // movabs rcx, 0x91bf0e023227030c
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x91bf0e023227030c)}));
c.rip=next;return true;}
case UINT64_C(0x14004ee9f): {next=c.rip+3; // mov r13, r8
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eea2): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004eea9): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eeae): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eeb3): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004eeba): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004eebe): {next=c.rip+10; // movabs rcx, 0x7777905cb16c8f19
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x7777905cb16c8f19)}));
c.rip=next;return true;}
case UINT64_C(0x14004eec8): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004eecf): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eed4): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eed9): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004eee0): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004eee4): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004eeeb): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eef0): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eef5): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4536,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eefc): {next=c.rip+4; // shr rax, 0xd
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0xd)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ef00): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef03): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ef07): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ef0a): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef14): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ef18): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef22): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef25): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ef29): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ef2c): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ef30): {next=c.rip+10; // movabs rax, 0x212b48ab38f051b4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x212b48ab38f051b4)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef3a): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef3d): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ef41): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ef44): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ef47): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4536,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef4e): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004ef51): {next=c.rip+7; // mov qword ptr [r14 + 0x11b8], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,4536,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef58): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef5b): {next=c.rip+5; // call 0x14004d760
{uint64_t target=next+UINT64_C(0xffffffffffffe800);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004ef60): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004ef62): {next=c.rip+3; // cmp eax, 0xa
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004ef65): {next=c.rip+2; // mov ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef67): {next=c.rip+3; // cmovb ecx, eax
if(m.condition(2))m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef6a): {next=c.rip+3; // cmp ecx, 0xa
m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xa)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004ef6d): {next=c.rip+3; // cmovae ecx, edx
if(m.condition(3))m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef70): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef72): {next=c.rip+7; // lea rcx, [rip - 0x4ef79]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-323449,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef79): {next=c.rip+8; // mov r8d, dword ptr [rcx + rax*4 + 0x3eaa88]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,1,0,4,0,4106888,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef81): {next=c.rip+5; // mov eax, 0xaaaaaaab
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0xaaaaaaab)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef86): {next=c.rip+3; // mul r8d
m.mul(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ef89): {next=c.rip+8; // mov r9, qword ptr [rcx + r8*8 + 0x3eba20]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,8,8,0,4110880,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef91): {next=c.rip+8; // mov rcx, qword ptr [rcx + r8*8 + 0x3eba70]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,1,8,8,0,4110960,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef99): {next=c.rip+2; // shr edx, 1
m.shift(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ef9b): {next=c.rip+3; // lea eax, [rdx + rdx*2]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,2,2,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ef9e): {next=c.rip+3; // sub r8d, eax
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14004efa1): {next=c.rip+2; // je 0x14004efb3
if(m.condition(0))next=next+UINT64_C(0x10);
c.rip=next;return true;}
case UINT64_C(0x14004efa3): {next=c.rip+4; // cmp r8d, 1
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004efa7): {next=c.rip+2; // je 0x14004efae
if(m.condition(0))next=next+UINT64_C(0x5);
c.rip=next;return true;}
case UINT64_C(0x14004efa9): {next=c.rip+3; // sub rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004efac): {next=c.rip+2; // jmp 0x14004efb6
next=next+UINT64_C(0x8);
c.rip=next;return true;}
case UINT64_C(0x14004efae): {next=c.rip+3; // add rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004efb1): {next=c.rip+2; // jmp 0x14004efb6
next=next+UINT64_C(0x3);
c.rip=next;return true;}
case UINT64_C(0x14004efb3): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004efb6): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004efb9): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004efbc): {next=c.rip+5; // call 0x14004a2b0
{uint64_t target=next+UINT64_C(0xffffffffffffb2ef);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004efc1): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4536,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004efc8): {next=c.rip+3; // test r15d, r15d
m.logic(m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004efcb): {next=c.rip+6; // jns 0x14004fba5
if(m.condition(11))next=next+UINT64_C(0xbd4);
c.rip=next;return true;}
case UINT64_C(0x14004efd1): {next=c.rip+7; // cmp qword ptr [r14 + 0x1058], r13
m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4184,UINT64_C(0x0)}),m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004efd8): {next=c.rip+6; // jne 0x14004fbb3
if(m.condition(1))next=next+UINT64_C(0xbd5);
c.rip=next;return true;}
case UINT64_C(0x14004efde): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004efe5): {next=c.rip+10; // movabs rcx, 0x9af276b4dae54236
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9af276b4dae54236)}));
c.rip=next;return true;}
case UINT64_C(0x14004efef): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004eff3): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004eff6): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004effd): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f002): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f007): {next=c.rip+5; // call 0x140049ee0
{uint64_t target=next+UINT64_C(0xffffffffffffaed4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004f00c): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004f00e): {next=c.rip+6; // jne 0x14004fb9a
if(m.condition(1))next=next+UINT64_C(0xb86);
c.rip=next;return true;}
case UINT64_C(0x14004f014): {next=c.rip+7; // cmp dword ptr [r14 + 0x4b8], eax
m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1208,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004f01b): {next=c.rip+6; // jne 0x14004fb9a
if(m.condition(1))next=next+UINT64_C(0xb79);
c.rip=next;return true;}
case UINT64_C(0x14004f021): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x10d0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f028): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1140]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f030): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f033): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f03a): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f041): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f048): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f04c): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rbx
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f051): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f058): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f05b): {next=c.rip+5; // mov qword ptr [rsp + 0x38], rbp
m.put(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)},m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f060): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f063): {next=c.rip+5; // mov qword ptr [rsp + 0x30], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f068): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x1188]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f06f): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f072): {next=c.rip+3; // sub r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004f075): {next=c.rip+5; // mov qword ptr [rsp + 0x28], rdi
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f07a): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f082): {next=c.rip+10; // movabs rbp, 0x2545f4914f6cdd1d
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004f08c): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004f08f): {next=c.rip+5; // mov qword ptr [rsp + 0x20], r12
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f094): {next=c.rip+10; // movabs r12, 0x9e3779b97f4a7c15
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004f09e): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f0a2): {next=c.rip+3; // inc rsi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004f0a5): {next=c.rip+4; // imul r9, r12
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f0a9): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rsi
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f0b0): {next=c.rip+3; // add r9, rbp
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004f0b3): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f0ba): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f0bd): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f0c1): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f0c4): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f0cb): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f0cf): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f0d2): {next=c.rip+3; // xor rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f0d5): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f0d8): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f0db): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004f0de): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f0e2): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f0e6): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f0ed): {next=c.rip+7; // cmp r8d, 0x14b3da
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x14b3da)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004f0f4): {next=c.rip+6; // jne 0x14004fb81
if(m.condition(1))next=next+UINT64_C(0xa87);
c.rip=next;return true;}
case UINT64_C(0x14004f0fa): {next=c.rip+3; // mov eax, r15d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,15,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f0fd): {next=c.rip+4; // btr eax, 0x1f
m.bitop(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)},false);
c.rip=next;return true;}
case UINT64_C(0x14004f101): {next=c.rip+3; // cmp eax, 2
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004f104): {next=c.rip+2; // jae 0x14004f150
if(m.condition(3))next=next+UINT64_C(0x4a);
c.rip=next;return true;}
case UINT64_C(0x14004f106): {next=c.rip+4; // imul r9, r12
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f10a): {next=c.rip+4; // lea rax, [rsi + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f10e): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f115): {next=c.rip+3; // add r9, rbp
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004f118): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f11f): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f123): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f127): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f12e): {next=c.rip+4; // imul rax, r10
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f132): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f135): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f138): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f13b): {next=c.rip+6; // add rax, 0x3edeff
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3edeff)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004f141): {next=c.rip+7; // xor rcx, 0x3edeff
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3edeff)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f148): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004f14b): {next=c.rip+5; // jmp 0x14004fb76
next=next+UINT64_C(0xa26);
c.rip=next;return true;}
case UINT64_C(0x14004f150): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f153): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffffaa18);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004f158): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f160): {next=c.rip+10; // movabs r8, 0xff51afd7ed558ccd
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004f16a): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f171): {next=c.rip+10; // movabs r9, 0xc4ceb9fe1a85ec53
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004f17b): {next=c.rip+8; // movzx r10d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f183): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f185): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f188): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x930]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f18f): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f192): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f196): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f199): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f19d): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f1a0): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f1a4): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f1a7): {next=c.rip+4; // imul rcx, r9
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f1ab): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f1ae): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f1b2): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f1b5): {next=c.rip+7; // mov qword ptr [r14 + 0x930], rdx
m.put(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f1bc): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x948]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f1c3): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f1ca): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f1cd): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f1d1): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f1d4): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f1d8): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f1db): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f1df): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f1e2): {next=c.rip+4; // imul rcx, r9
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f1e6): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x10b0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f1ed): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f1f0): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f1f4): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f1f7): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f1fe): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1118]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f205): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1149]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f20d): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f214): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f218): {next=c.rip+4; // lea rbx, [rax + rax*4]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f21c): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f21f): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f222): {next=c.rip+3; // add rbx, rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004f225): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f228): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f22b): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004f22e): {next=c.rip+3; // test r10b, r10b
m.logic(m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004f231): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f235): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f23c): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004f243): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f247): {next=c.rip+3; // add rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004f24a): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f251): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f255): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f259): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f260): {next=c.rip+4; // imul r8, r11
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f264): {next=c.rip+3; // xor r8, r9
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f267): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f26a): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f26d): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f270): {next=c.rip+3; // test r10b, r10b
m.logic(m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004f273): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f277): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f27b): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f27e): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f285): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffffd136);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004f28a): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f291): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f298): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f2a0): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x10b0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f2a7): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1110]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f2ae): {next=c.rip+4; // lea rbx, [rax + rax*8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f2b2): {next=c.rip+8; // movzx r10d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,10,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f2ba): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f2bd): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f2c1): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f2c4): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f2c7): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f2ca): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004f2cd): {next=c.rip+3; // test r10b, r10b
m.logic(m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004f2d0): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f2d4): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f2db): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004f2e2): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f2e5): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f2e9): {next=c.rip+3; // add rax, rbp
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004f2ec): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f2f3): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f2f7): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f2fb): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f302): {next=c.rip+4; // imul r8, r11
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f306): {next=c.rip+3; // xor r8, r9
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f309): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f30c): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f30f): {next=c.rip+3; // test r10b, r10b
m.logic(m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004f312): {next=c.rip+4; // lea rax, [rdx + r8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,8,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f316): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f31a): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f31d): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f324): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffffd097);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004f329): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f32c): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffffa83f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004f331): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004f338): {next=c.rip+2; // jae 0x14004f344
if(m.condition(3))next=next+UINT64_C(0xa);
c.rip=next;return true;}
case UINT64_C(0x14004f33a): {next=c.rip+2; // mov edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f33c): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f33f): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffffd07c);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004f344): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x10c0]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f34b): {next=c.rip+7; // mov rbp, qword ptr [r14 + 0x10b0]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f352): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x1110]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f359): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f361): {next=c.rip+3; // mov rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f364): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f36c): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b8]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f373): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f37a): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f381): {next=c.rip+4; // imul rcx, rsi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f385): {next=c.rip+4; // lea r10, [rbx + rbx*8]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f389): {next=c.rip+3; // xor rcx, rbp
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f38c): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f38f): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f392): {next=c.rip+3; // sub r11, rcx
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004f395): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004f398): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004f3a2): {next=c.rip+4; // cmove r11, rax
if(m.condition(0))m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f3a6): {next=c.rip+4; // imul r9, r12
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f3aa): {next=c.rip+3; // add r9, rcx
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004f3ad): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f3b0): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f3b3): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f3b7): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f3ba): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f3c1): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f3c5): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f3c8): {next=c.rip+3; // xor rdx, r10
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f3cb): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f3ce): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004f3d1): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f3d5): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f3d9): {next=c.rip+3; // mov rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f3dc): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f3e3): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004f3ed): {next=c.rip+4; // imul r9, r12
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f3f1): {next=c.rip+3; // add r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004f3f4): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f3f8): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f3ff): {next=c.rip+6; // mov r8d, 0x2759
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2759)}));
c.rip=next;return true;}
case UINT64_C(0x14004f405): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f40c): {next=c.rip+4; // lea rax, [rbx + rbx*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,3,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f410): {next=c.rip+3; // add rax, rax
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004f413): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f417): {next=c.rip+4; // movzx edx, r9b
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f41b): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f422): {next=c.rip+4; // imul rdx, rsi
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f426): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f429): {next=c.rip+3; // xor rdx, rbp
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f42c): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f42f): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004f432): {next=c.rip+4; // lea rax, [r11 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,11,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f436): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f43a): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f43d): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f444): {next=c.rip+8; // movzx edx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f44c): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x230]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f453): {next=c.rip+5; // call 0x14004cff0
{uint64_t target=next+UINT64_C(0xffffffffffffdb98);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004f458): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x230]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f45f): {next=c.rip+10; // movabs rdi, 0xff51afd7ed558ccd
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004f469): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f46c): {next=c.rip+10; // movabs rbp, 0xc4ceb9fe1a85ec53
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004f476): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x940]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f47d): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f480): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f484): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f487): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f48b): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f48e): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f492): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f495): {next=c.rip+4; // imul rax, rbp
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f499): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f49c): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f4a0): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004f4a2): {next=c.rip+2; // mov ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f4a4): {next=c.rip+3; // lea eax, [rdx + 1]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f4a7): {next=c.rip+3; // imul ecx, eax
m.imul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f4aa): {next=c.rip+2; // xor edx, eax
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004f4ac): {next=c.rip+2; // not ecx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},~m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f4ae): {next=c.rip+2; // and ecx, edx
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004f4b0): {next=c.rip+3; // test cl, 1
m.logic(m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004f4b3): {next=c.rip+2; // je 0x14004f526
if(m.condition(0))next=next+UINT64_C(0x71);
c.rip=next;return true;}
case UINT64_C(0x14004f4b5): {next=c.rip+4; // and r8b, 3
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004f4b9): {next=c.rip+4; // cmp r8b, 1
m.arithmetic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004f4bd): {next=c.rip+2; // jne 0x14004f526
if(m.condition(1))next=next+UINT64_C(0x67);
c.rip=next;return true;}
case UINT64_C(0x14004f4bf): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f4c6): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004f4d0): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004f4d7): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f4db): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004f4de): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f4e5): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f4e9): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f4ec): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f4f3): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f4fb): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f502): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f509): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f50c): {next=c.rip+6; // add rax, 0x15c9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x15c9)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004f512): {next=c.rip+7; // xor rcx, 0x15c9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x15c9)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f519): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004f521): {next=c.rip+5; // jmp 0x14004fb76
next=next+UINT64_C(0x650);
c.rip=next;return true;}
case UINT64_C(0x14004f526): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f529): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffffa642);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004f52e): {next=c.rip+2; // mov ebx, eax
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f530): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x738]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1848,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004f537): {next=c.rip+2; // jb 0x14004f5a0
if(m.condition(2))next=next+UINT64_C(0x67);
c.rip=next;return true;}
case UINT64_C(0x14004f539): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f540): {next=c.rip+10; // movabs rcx, 0x2545f4914f6cdd1d
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004f54a): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004f551): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f555): {next=c.rip+3; // add rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004f558): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f55f): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f563): {next=c.rip+3; // movzx eax, al
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f566): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f56d): {next=c.rip+8; // imul rax, qword ptr [r14 + 0x10c0]
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f575): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f57c): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x10b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f583): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f586): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004f58c): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f593): {next=c.rip+8; // cmp byte ptr [r14 + 0x10c8], 0
m.arithmetic(m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004f59b): {next=c.rip+5; // jmp 0x14004fb76
next=next+UINT64_C(0x5d6);
c.rip=next;return true;}
case UINT64_C(0x14004f5a0): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f5a2): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f5a5): {next=c.rip+5; // call 0x14004e0d0
{uint64_t target=next+UINT64_C(0xffffffffffffeb26);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004f5aa): {next=c.rip+7; // movsxd rcx, dword ptr [r14 + 0x928]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004f5b1): {next=c.rip+10; // movabs r8, 0xd6e8feb86659fd93
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14004f5bb): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f5c2): {next=c.rip+3; // mov rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f5c5): {next=c.rip+4; // imul rax, r8
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f5c9): {next=c.rip+4; // imul rcx, r12
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f5cd): {next=c.rip+4; // rol rdx, 0x11
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x14004f5d1): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f5d4): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x700]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f5db): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f5de): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f5e1): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f5e5): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f5e8): {next=c.rip+4; // imul rcx, rdi
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f5ec): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f5ef): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f5f3): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f5f6): {next=c.rip+4; // imul rdx, rbp
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f5fa): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f5fd): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f601): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f604): {next=c.rip+3; // mov r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f607): {next=c.rip+4; // shr r10, 0x1d
m.shift(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f60b): {next=c.rip+3; // xor r10, rax
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f60e): {next=c.rip+4; // or r10, 1
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f612): {next=c.rip+3; // mov rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f615): {next=c.rip+7; // mov qword ptr [r14 + 0x700], r10
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f61c): {next=c.rip+5; // and eax, 0x3ff
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3ff)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004f621): {next=c.rip+6; // cmp rax, 0x2c5
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2c5)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004f627): {next=c.rip+2; // jne 0x14004f638
if(m.condition(1))next=next+UINT64_C(0xf);
c.rip=next;return true;}
case UINT64_C(0x14004f629): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f62c): {next=c.rip+5; // call 0x14007fb70
{uint64_t target=next+UINT64_C(0x3053f);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004f631): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x700]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f638): {next=c.rip+4; // movzx eax, r10b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,10,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f63c): {next=c.rip+2; // and al, 0x1f
m.put(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004f63e): {next=c.rip+2; // cmp al, 0x15
m.arithmetic(m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x15)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004f640): {next=c.rip+6; // jne 0x14004f730
if(m.condition(1))next=next+UINT64_C(0xea);
c.rip=next;return true;}
case UINT64_C(0x14004f646): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004f64d): {next=c.rip+6; // xor rax, 0x5a5a
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x5a5a)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f653): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x940]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f65a): {next=c.rip+4; // imul rax, r12
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f65e): {next=c.rip+4; // rol rcx, 0x11
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x11)},2);
c.rip=next;return true;}
case UINT64_C(0x14004f662): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f665): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f668): {next=c.rip+10; // movabs rax, 0x8f70feda99a6026d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8f70feda99a6026d)}));
c.rip=next;return true;}
case UINT64_C(0x14004f672): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f675): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f678): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f67c): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f67f): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f683): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f686): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f68a): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f68d): {next=c.rip+4; // imul rcx, rbp
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f691): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f694): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f698): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f69b): {next=c.rip+3; // mov r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f69e): {next=c.rip+4; // shr r9, 0x1d
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1d)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f6a2): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f6a5): {next=c.rip+4; // or r9, 1
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})|m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f6a9): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f6ac): {next=c.rip+3; // mov rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f6af): {next=c.rip+4; // shr rax, 8
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x8)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f6b3): {next=c.rip+3; // and eax, 3
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004f6b6): {next=c.rip+4; // shr rcx, 0x28
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x28)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f6ba): {next=c.rip+4; // imul r8, rax, 0x3e
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x14004f6be): {next=c.rip+5; // mov eax, 0x8421085
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x8421085)}));
c.rip=next;return true;}
case UINT64_C(0x14004f6c3): {next=c.rip+2; // mul ecx
m.mul(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f6c5): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f6c7): {next=c.rip+2; // sub eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14004f6c9): {next=c.rip+2; // shr eax, 1
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x1)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f6cb): {next=c.rip+2; // add eax, edx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,false));
c.rip=next;return true;}
case UINT64_C(0x14004f6cd): {next=c.rip+3; // shr eax, 5
m.shift(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x5)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f6d0): {next=c.rip+3; // imul eax, eax, 0x3e
m.imul(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x14004f6d3): {next=c.rip+2; // sub ecx, eax
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true));
c.rip=next;return true;}
case UINT64_C(0x14004f6d5): {next=c.rip+2; // mov eax, ecx
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f6d7): {next=c.rip+3; // add r8, rax
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004f6da): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f6e1): {next=c.rip+4; // movsxd rcx, dword ptr [rax + r8*4]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,8,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004f6e5): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004f6ec): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f6ef): {next=c.rip+7; // add rcx, qword ptr [r14 + 0x4e0]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004f6f6): {next=c.rip+3; // xor rcx, r9
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f6f9): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f6fc): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f700): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f703): {next=c.rip+4; // imul rax, rdi
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f707): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f70a): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f70e): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f711): {next=c.rip+4; // imul rcx, rbp
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f715): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f718): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f71c): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f71f): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f722): {next=c.rip+7; // inc qword ptr [r14 + 0x708]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,1800,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004f729): {next=c.rip+7; // mov qword ptr [r14 + 0x700], rax
m.put(Operand{2,0,64,0,14,-1,1,0,1792,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f730): {next=c.rip+7; // inc dword ptr [r14 + 0x75c]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004f737): {next=c.rip+7; // mov eax, dword ptr [r14 + 0x75c]
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f73e): {next=c.rip+7; // cmp eax, dword ptr [r14 + 0x758]
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,32,0,14,-1,1,0,1880,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004f745): {next=c.rip+2; // jb 0x14004f75a
if(m.condition(2))next=next+UINT64_C(0x13);
c.rip=next;return true;}
case UINT64_C(0x14004f747): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f74a): {next=c.rip+11; // mov dword ptr [r14 + 0x75c], 0
m.put(Operand{2,0,32,0,14,-1,1,0,1884,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f755): {next=c.rip+5; // call 0x14004b250
{uint64_t target=next+UINT64_C(0xffffffffffffbaf6);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004f75a): {next=c.rip+3; // mov r8d, ebx
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f75d): {next=c.rip+2; // mov edx, ebx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f75f): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f762): {next=c.rip+5; // call 0x14004c110
{uint64_t target=next+UINT64_C(0xffffffffffffc9a9);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004f767): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004f76e): {next=c.rip+3; // lea esi, [rbx + 1]
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,3,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f771): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f778): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004f782): {next=c.rip+4; // imul r9, r12
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f786): {next=c.rip+7; // mov r12, qword ptr [r14 + 0x1188]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f78d): {next=c.rip+3; // mov rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f790): {next=c.rip+3; // add r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004f793): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f798): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f79f): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f7a2): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f7a6): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f7a9): {next=c.rip+7; // mov byte ptr [r14 + 0x1148], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f7b0): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f7b7): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10b8]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f7be): {next=c.rip+7; // mov rdi, qword ptr [r14 + 0x10b0]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f7c5): {next=c.rip+8; // movzx ebp, byte ptr [r14 + 0x10c8]
m.put(Operand{0,5,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f7cd): {next=c.rip+4; // imul rdx, r11
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f7d1): {next=c.rip+4; // lea rax, [r10 + r10*8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,10,10,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f7d5): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f7d8): {next=c.rip+3; // xor rdx, rdi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f7db): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f7de): {next=c.rip+3; // test bpl, bpl
m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004f7e1): {next=c.rip+4; // lea rax, [rbx + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,3,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f7e5): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f7e9): {next=c.rip+3; // inc r12
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004f7ec): {next=c.rip+7; // mov qword ptr [r14 + 0x1110], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f7f3): {next=c.rip+7; // mov rcx, qword ptr [r14 + 0x8f8]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f7fa): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x730]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1840,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f801): {next=c.rip+5; // mov qword ptr [rsp + 0x78], r12
m.put(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f806): {next=c.rip+5; // movzx r8d, byte ptr [rcx + rbx]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,1,3,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f80b): {next=c.rip+4; // xor r8b, byte ptr [rax + rbx]
m.put(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,8,0,0,3,1,0,0,UINT64_C(0x0)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004f80f): {next=c.rip+10; // movabs rax, 0x9e3779b97f4a7c15
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004f819): {next=c.rip+4; // imul r9, rax
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f81d): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], r12
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f824): {next=c.rip+10; // movabs rax, 0x2545f4914f6cdd1d
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004f82e): {next=c.rip+3; // add r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004f831): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f834): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f838): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f83b): {next=c.rip+4; // lea rax, [r10 + r10]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,10,10,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f83f): {next=c.rip+7; // mov byte ptr [r14 + 0x1141], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4417,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f846): {next=c.rip+4; // imul rdx, r11
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f84a): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f84d): {next=c.rip+3; // xor rdx, rdi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f850): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f853): {next=c.rip+3; // xor rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f856): {next=c.rip+3; // test bpl, bpl
m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004f859): {next=c.rip+4; // lea rax, [rdx + rsi]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,6,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f85d): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f861): {next=c.rip+7; // mov qword ptr [r14 + 0x10d8], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4312,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f868): {next=c.rip+7; // movsxd rdx, dword ptr [r14 + 0x928]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004f86f): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x940]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f876): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f879): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x238]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,568,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f880): {next=c.rip+3; // xor rcx, rsi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f883): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x230]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f88a): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f88d): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f890): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f894): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f897): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004f8a1): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f8a5): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f8a8): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f8ac): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f8af): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004f8b9): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f8bd): {next=c.rip+4; // movzx eax, r8b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f8c1): {next=c.rip+3; // mov r12, rcx
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f8c4): {next=c.rip+4; // shr r12, 0x21
m.shift(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f8c8): {next=c.rip+3; // xor r12, rcx
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f8cb): {next=c.rip+7; // lea rcx, [rip - 0x4f8d2]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-325842,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f8d2): {next=c.rip+6; // xor rax, 0x93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x93)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f8d8): {next=c.rip+7; // mov qword ptr [r14 + 0x948], r12
m.put(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f8df): {next=c.rip+8; // movzx esi, byte ptr [rax + rcx + 0x3e3660]
m.put(Operand{0,6,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,0,1,1,0,4077152,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f8e7): {next=c.rip+4; // xor sil, 0x27
m.put(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x27)}),8));
c.rip=next;return true;}
case UINT64_C(0x14004f8eb): {next=c.rip+2; // inc edx
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004f8ed): {next=c.rip+7; // mov dword ptr [r14 + 0x928], edx
m.put(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f8f4): {next=c.rip+3; // test dl, 0x1f
m.logic(m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004f8f7): {next=c.rip+2; // jne 0x14004f947
if(m.condition(1))next=next+UINT64_C(0x4e);
c.rip=next;return true;}
case UINT64_C(0x14004f8f9): {next=c.rip+3; // movsxd rax, edx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004f8fc): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x230]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f903): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f906): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f909): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f90d): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f910): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004f91a): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f91e): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004f928): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f92b): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f92f): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f932): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f936): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f939): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f93d): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f940): {next=c.rip+7; // mov qword ptr [r14 + 0x230], rax
m.put(Operand{2,0,64,0,14,-1,1,0,560,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f947): {next=c.rip+4; // movzx r8d, sil
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f94b): {next=c.rip+3; // mov eax, r8d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f94e): {next=c.rip+7; // mov byte ptr [r14 + 0x11a4], sil
m.put(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)},m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f955): {next=c.rip+5; // xor rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f95a): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f95d): {next=c.rip+10; // movabs rbx, 0x9e3779b97f4a7c15
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004f967): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f96a): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f96e): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f971): {next=c.rip+10; // movabs rax, 0xff51afd7ed558ccd
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004f97b): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f97f): {next=c.rip+4; // imul r8, rbx
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f983): {next=c.rip+4; // imul r9, rbx
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f987): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f98a): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004f994): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f998): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f99b): {next=c.rip+7; // mov ecx, dword ptr [r14 + 0x8bc]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,14,-1,1,0,2236,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f9a2): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f9a6): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f9a9): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f9ad): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f9b0): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f9b7): {next=c.rip+10; // movabs rax, 0xd6e8feb86659fd93
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xd6e8feb86659fd93)}));
c.rip=next;return true;}
case UINT64_C(0x14004f9c1): {next=c.rip+4; // imul rcx, rax
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f9c5): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f9c8): {next=c.rip+3; // xor rcx, r12
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f9cb): {next=c.rip+10; // movabs r12, 0x2545f4914f6cdd1d
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004f9d5): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f9d8): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004f9db): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f9df): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f9e2): {next=c.rip+10; // movabs rcx, 0xff51afd7ed558ccd
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004f9ec): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004f9f0): {next=c.rip+3; // mov rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004f9f3): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004f9f7): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004f9fa): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004fa04): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fa08): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x78]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,120,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fa0d): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004fa11): {next=c.rip+3; // and edx, 3
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x3)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004fa14): {next=c.rip+3; // inc rax
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004fa17): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fa1e): {next=c.rip+4; // cmp sil, 0x3e
m.arithmetic(m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x3e)}),8,true);
c.rip=next;return true;}
case UINT64_C(0x14004fa22): {next=c.rip+6; // jae 0x14004faba
if(m.condition(3))next=next+UINT64_C(0x92);
c.rip=next;return true;}
case UINT64_C(0x14004fa28): {next=c.rip+7; // inc qword ptr [r14 + 0x1088]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4232,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004fa2f): {next=c.rip+7; // lea rax, [rip - 0x4fa36]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,16,-1,1,0,-326198,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fa36): {next=c.rip+8; // mov r8d, dword ptr [rax + rdx*4 + 0x3e0490]
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,32,0,0,2,4,0,4064400,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fa3e): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fa45): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004fa49): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fa4d): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fa54): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fa58): {next=c.rip+2; // mov ebx, edx
m.put(Operand{0,3,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fa5a): {next=c.rip+3; // xor rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fa5d): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fa60): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fa63): {next=c.rip+3; // add rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004fa66): {next=c.rip+3; // xor rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fa69): {next=c.rip+4; // movzx r8d, sil
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,6,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fa6d): {next=c.rip+3; // test bpl, bpl
m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004fa70): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fa74): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fa77): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fa7e): {next=c.rip+5; // call 0x14004da40
{uint64_t target=next+UINT64_C(0xffffffffffffdfbd);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004fa83): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fa85): {next=c.rip+4; // lea edx, [r15 - 1]
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,32,0,15,-1,1,0,-1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fa89): {next=c.rip+4; // imul rcx, rbx, 0x3e
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3e)});
c.rip=next;return true;}
case UINT64_C(0x14004fa8d): {next=c.rip+3; // mov r8, r13
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fa90): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004fa93): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x4d8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,1240,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fa9a): {next=c.rip+4; // movsxd r9, dword ptr [rax + rcx*4]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,0,1,4,0,0,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004fa9e): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004faa1): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x4e8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,1256,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004faa8): {next=c.rip+3; // xor r9, rax
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004faab): {next=c.rip+7; // add r9, qword ptr [r14 + 0x4e0]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{2,0,64,0,14,-1,1,0,1248,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004fab2): {next=c.rip+3; // call r9
{uint64_t target=m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)});m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004fab5): {next=c.rip+5; // jmp 0x14004fb81
next=next+UINT64_C(0xc7);
c.rip=next;return true;}
case UINT64_C(0x14004faba): {next=c.rip+7; // inc dword ptr [r14 + 0x1090]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,4240,UINT64_C(0x0)}),1,32,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004fac1): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fac4): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004fac8): {next=c.rip+3; // movzx ecx, al
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004facb): {next=c.rip+8; // lea rax, [r10*4]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,-1,10,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fad3): {next=c.rip+7; // mov byte ptr [r14 + 0x1143], cl
m.put(Operand{2,0,8,0,14,-1,1,0,4419,UINT64_C(0x0)},m.get(Operand{0,1,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fada): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fade): {next=c.rip+4; // imul r9, rbx
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fae2): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fae5): {next=c.rip+3; // xor rcx, rdi
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fae8): {next=c.rip+7; // mov qword ptr [r14 + 0x10e8], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,4328,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004faef): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x1188]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004faf6): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004faf9): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fafc): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004fb00): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb03): {next=c.rip+7; // mov byte ptr [r14 + 0x114a], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4426,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb0a): {next=c.rip+4; // imul rax, r10, 0xb
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb)});
c.rip=next;return true;}
case UINT64_C(0x14004fb0e): {next=c.rip+4; // imul rdx, r11
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fb12): {next=c.rip+3; // xor rdx, rax
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fb15): {next=c.rip+3; // xor rdx, rdi
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fb18): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb1b): {next=c.rip+4; // xor rcx, 1
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x1)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fb1f): {next=c.rip+3; // test bpl, bpl
m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004fb22): {next=c.rip+4; // lea rax, [rdx + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,2,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb26): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb2a): {next=c.rip+7; // mov qword ptr [r14 + 0x1120], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4384,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb31): {next=c.rip+4; // lea rax, [r8 + 2]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,-1,1,0,2,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb35): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb3c): {next=c.rip+4; // imul r9, rbx
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fb40): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004fb43): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb4a): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004fb4e): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb52): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb59): {next=c.rip+4; // imul rax, r11
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fb5d): {next=c.rip+3; // xor rax, rdi
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fb60): {next=c.rip+3; // xor rax, r10
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fb63): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb66): {next=c.rip+6; // add rax, 0x2188a4
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004fb6c): {next=c.rip+7; // xor rcx, 0x2188a4
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2188a4)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fb73): {next=c.rip+3; // test bpl, bpl
m.logic(m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,5,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004fb76): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb7a): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb81): {next=c.rip+5; // mov rdi, qword ptr [rsp + 0x28]
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb86): {next=c.rip+5; // mov rsi, qword ptr [rsp + 0x30]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,48,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb8b): {next=c.rip+5; // mov rbp, qword ptr [rsp + 0x38]
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,56,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb90): {next=c.rip+5; // mov rbx, qword ptr [rsp + 0x68]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb95): {next=c.rip+5; // mov r12, qword ptr [rsp + 0x20]
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fb9a): {next=c.rip+4; // add rsp, 0x40
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x40)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004fb9e): {next=c.rip+2; // pop r15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004fba0): {next=c.rip+2; // pop r14
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004fba2): {next=c.rip+2; // pop r13
m.put(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.pop());
c.rip=next;return true;}
case UINT64_C(0x14004fba4): {next=c.rip+1; // ret 
next=m.pop();
c.rip=next;return true;}
case UINT64_C(0x14004fba5): {next=c.rip+5; // mov edx, 0x54485254
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x54485254)}));
c.rip=next;return true;}
case UINT64_C(0x14004fbaa): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fbad): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffff977e);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004fbb2): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004fbb3): {next=c.rip+5; // mov edx, 0x43414e59
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x43414e59)}));
c.rip=next;return true;}
case UINT64_C(0x14004fbb8): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fbbb): {next=c.rip+5; // call 0x140049330
{uint64_t target=next+UINT64_C(0xffffffffffff9770);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004fbc0): {next=c.rip+1; // int3 
throw Fault(5,c.rip,"INT3");
c.rip=next;return true;}
case UINT64_C(0x14004fbd0): {next=c.rip+5; // mov qword ptr [rsp + 0x18], r8
m.put(Operand{2,0,64,0,4,-1,1,0,24,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fbd5): {next=c.rip+1; // push rbx
m.push(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fbd6): {next=c.rip+1; // push rbp
m.push(m.get(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fbd7): {next=c.rip+1; // push rdi
m.push(m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fbd8): {next=c.rip+2; // push r13
m.push(m.get(Operand{0,13,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fbda): {next=c.rip+2; // push r14
m.push(m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fbdc): {next=c.rip+4; // sub rsp, 0x30
m.put(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,4,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x30)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004fbe0): {next=c.rip+7; // movsxd rax, dword ptr [rcx + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,1,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004fbe7): {next=c.rip+3; // mov r14, rcx
m.put(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fbea): {next=c.rip+3; // mov r13d, edx
m.put(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fbed): {next=c.rip+10; // movabs rcx, 0x62f799b88183bf4e
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x62f799b88183bf4e)}));
c.rip=next;return true;}
case UINT64_C(0x14004fbf7): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fbfb): {next=c.rip+10; // movabs rcx, 0xc0ae1373005d3b71
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc0ae1373005d3b71)}));
c.rip=next;return true;}
case UINT64_C(0x14004fc05): {next=c.rip+10; // movabs rbp, 0xff51afd7ed558ccd
m.put(Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xff51afd7ed558ccd)}));
c.rip=next;return true;}
case UINT64_C(0x14004fc0f): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fc16): {next=c.rip+3; // mov rdi, r8
m.put(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fc19): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fc1e): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fc23): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004fc2a): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fc2e): {next=c.rip+10; // movabs rcx, 0x26668d2d8316b764
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x26668d2d8316b764)}));
c.rip=next;return true;}
case UINT64_C(0x14004fc38): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fc3f): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fc44): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fc49): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004fc50): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fc54): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fc5b): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fc60): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fc65): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4528,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fc6c): {next=c.rip+4; // shr rax, 0xd
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0xd)},1);
c.rip=next;return true;}
case UINT64_C(0x14004fc70): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fc73): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004fc77): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fc7a): {next=c.rip+10; // movabs rax, 0xc4ceb9fe1a85ec53
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004fc84): {next=c.rip+4; // imul rcx, rbp
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fc88): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fc8b): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004fc8f): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fc92): {next=c.rip+4; // imul rdx, rax
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fc96): {next=c.rip+10; // movabs rax, 0x703a55da0a8a69c9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x703a55da0a8a69c9)}));
c.rip=next;return true;}
case UINT64_C(0x14004fca0): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fca3): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004fca7): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fcaa): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fcad): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4528,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fcb4): {next=c.rip+3; // add rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004fcb7): {next=c.rip+7; // mov qword ptr [r14 + 0x11b0], rcx
m.put(Operand{2,0,64,0,14,-1,1,0,4528,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fcbe): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fcc1): {next=c.rip+5; // call 0x14004a3d0
{uint64_t target=next+UINT64_C(0xffffffffffffa70a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004fcc6): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fcc9): {next=c.rip+3; // mov rbx, rax
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fccc): {next=c.rip+5; // call 0x14004a3d0
{uint64_t target=next+UINT64_C(0xffffffffffffa6ff);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004fcd1): {next=c.rip+10; // movabs rcx, 0x8000000000000000
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x8000000000000000)}));
c.rip=next;return true;}
case UINT64_C(0x14004fcdb): {next=c.rip+2; // xor edx, edx
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32));
c.rip=next;return true;}
case UINT64_C(0x14004fcdd): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fce0): {next=c.rip+3; // xor rbx, rcx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fce3): {next=c.rip+3; // cmp rax, rbx
m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004fce6): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fce9): {next=c.rip+3; // seta dl
m.put(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.condition(5)));
c.rip=next;return true;}
case UINT64_C(0x14004fcec): {next=c.rip+5; // call 0x14004a2b0
{uint64_t target=next+UINT64_C(0xffffffffffffa5bf);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004fcf1): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x11b0]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4528,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fcf8): {next=c.rip+3; // test r13d, r13d
m.logic(m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004fcfb): {next=c.rip+6; // jns 0x14005085a
if(m.condition(11))next=next+UINT64_C(0xb59);
c.rip=next;return true;}
case UINT64_C(0x14004fd01): {next=c.rip+7; // cmp qword ptr [r14 + 0x1058], rdi
m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4184,UINT64_C(0x0)}),m.get(Operand{0,7,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true);
c.rip=next;return true;}
case UINT64_C(0x14004fd08): {next=c.rip+6; // jne 0x140050868
if(m.condition(1))next=next+UINT64_C(0xb5a);
c.rip=next;return true;}
case UINT64_C(0x14004fd0e): {next=c.rip+7; // movsxd rax, dword ptr [r14 + 0x928]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},uint64_t(m.signed_value(m.get(Operand{2,0,32,0,14,-1,1,0,2344,UINT64_C(0x0)}),32)));
c.rip=next;return true;}
case UINT64_C(0x14004fd15): {next=c.rip+10; // movabs rcx, 0xb529d28b1fbc1a69
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xb529d28b1fbc1a69)}));
c.rip=next;return true;}
case UINT64_C(0x14004fd1f): {next=c.rip+4; // imul rax, rcx
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fd23): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fd26): {next=c.rip+7; // xor rax, qword ptr [r14 + 0x948]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fd2d): {next=c.rip+5; // mov qword ptr [rsp + 0x60], rax
m.put(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fd32): {next=c.rip+5; // mov rax, qword ptr [rsp + 0x60]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,4,-1,1,0,96,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fd37): {next=c.rip+5; // call 0x140049ee0
{uint64_t target=next+UINT64_C(0xffffffffffffa1a4);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004fd3c): {next=c.rip+2; // test eax, eax
m.logic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32);
c.rip=next;return true;}
case UINT64_C(0x14004fd3e): {next=c.rip+6; // jne 0x14005084e
if(m.condition(1))next=next+UINT64_C(0xb0a);
c.rip=next;return true;}
case UINT64_C(0x14004fd44): {next=c.rip+7; // cmp dword ptr [r14 + 0x4b8], eax
m.arithmetic(m.get(Operand{2,0,32,0,14,-1,1,0,1208,UINT64_C(0x0)}),m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004fd4b): {next=c.rip+6; // jne 0x14005084e
if(m.condition(1))next=next+UINT64_C(0xafd);
c.rip=next;return true;}
case UINT64_C(0x14004fd51): {next=c.rip+7; // mov r8, qword ptr [r14 + 0x10d0]
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fd58): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1140]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fd60): {next=c.rip+3; // mov rax, r8
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fd63): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fd6a): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fd71): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10b8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fd78): {next=c.rip+8; // movzx edi, byte ptr [r14 + 0x10c8]
m.put(Operand{0,7,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fd80): {next=c.rip+7; // mov r9, qword ptr [r14 + 0x1180]
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fd87): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fd8b): {next=c.rip+5; // mov qword ptr [rsp + 0x68], rsi
m.put(Operand{2,0,64,0,4,-1,1,0,104,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fd90): {next=c.rip+7; // mov rsi, qword ptr [r14 + 0x1188]
m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fd97): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fd9a): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fd9d): {next=c.rip+5; // mov qword ptr [rsp + 0x28], r12
m.put(Operand{2,0,64,0,4,-1,1,0,40,UINT64_C(0x0)},m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fda2): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fda5): {next=c.rip+5; // mov qword ptr [rsp + 0x20], r15
m.put(Operand{2,0,64,0,4,-1,1,0,32,UINT64_C(0x0)},m.get(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fdaa): {next=c.rip+3; // sub r8, rcx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004fdad): {next=c.rip+10; // movabs r15, 0x9e3779b97f4a7c15
m.put(Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x9e3779b97f4a7c15)}));
c.rip=next;return true;}
case UINT64_C(0x14004fdb7): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004fdba): {next=c.rip+10; // movabs r12, 0x2545f4914f6cdd1d
m.put(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x2545f4914f6cdd1d)}));
c.rip=next;return true;}
case UINT64_C(0x14004fdc4): {next=c.rip+4; // cmove r8, rax
if(m.condition(0))m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fdc8): {next=c.rip+3; // inc rsi
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004fdcb): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fdcf): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rsi
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,6,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fdd6): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fdd9): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004fddc): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fde3): {next=c.rip+3; // mov rax, r9
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fde6): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004fdea): {next=c.rip+3; // movzx edx, al
m.put(Operand{0,2,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fded): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], dl
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,2,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fdf4): {next=c.rip+4; // imul rdx, r10
m.imul(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fdf8): {next=c.rip+3; // xor rdx, rbx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fdfb): {next=c.rip+3; // xor rdx, r11
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fdfe): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fe01): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004fe04): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fe08): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fe0c): {next=c.rip+7; // mov qword ptr [r14 + 0x10d0], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4304,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fe13): {next=c.rip+7; // cmp r8d, 0x14b3da
m.arithmetic(m.get(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x14b3da)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004fe1a): {next=c.rip+6; // jne 0x14005083f
if(m.condition(1))next=next+UINT64_C(0xa1f);
c.rip=next;return true;}
case UINT64_C(0x14004fe20): {next=c.rip+3; // mov eax, r13d
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,13,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fe23): {next=c.rip+4; // btr eax, 0x1f
m.bitop(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1f)},false);
c.rip=next;return true;}
case UINT64_C(0x14004fe27): {next=c.rip+3; // cmp eax, 2
m.arithmetic(m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,32,0,-1,-1,1,0,0,UINT64_C(0x2)}),32,true);
c.rip=next;return true;}
case UINT64_C(0x14004fe2a): {next=c.rip+2; // jae 0x14004fe76
if(m.condition(3))next=next+UINT64_C(0x4a);
c.rip=next;return true;}
case UINT64_C(0x14004fe2c): {next=c.rip+4; // imul r9, r15
m.imul(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fe30): {next=c.rip+4; // lea rax, [rsi + 1]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,6,-1,1,0,1,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fe34): {next=c.rip+7; // mov qword ptr [r14 + 0x1188], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fe3b): {next=c.rip+3; // add r9, r12
m.put(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004fe3e): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], r9
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fe45): {next=c.rip+4; // shr r9, 0x1b
m.shift(Operand{0,9,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004fe49): {next=c.rip+4; // movzx eax, r9b
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fe4d): {next=c.rip+7; // mov byte ptr [r14 + 0x1140], al
m.put(Operand{2,0,8,0,14,-1,1,0,4416,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fe54): {next=c.rip+4; // imul rax, r10
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fe58): {next=c.rip+3; // xor rax, rbx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fe5b): {next=c.rip+3; // xor rax, r11
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fe5e): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fe61): {next=c.rip+6; // add rax, 0x3edeff
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3edeff)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004fe67): {next=c.rip+7; // xor rcx, 0x3edeff
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0x3edeff)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fe6e): {next=c.rip+3; // test dil, dil
m.logic(m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,7,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004fe71): {next=c.rip+5; // jmp 0x140050834
next=next+UINT64_C(0x9be);
c.rip=next;return true;}
case UINT64_C(0x14004fe76): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fe79): {next=c.rip+5; // call 0x140049b70
{uint64_t target=next+UINT64_C(0xffffffffffff9cf2);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004fe7e): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x11a4]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4516,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fe86): {next=c.rip+10; // movabs r8, 0xc4ceb9fe1a85ec53
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{1,0,64,0,-1,-1,1,0,0,UINT64_C(0xc4ceb9fe1a85ec53)}));
c.rip=next;return true;}
case UINT64_C(0x14004fe90): {next=c.rip+7; // mov r11, qword ptr [r14 + 0x10c0]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fe97): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10b0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fe9e): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fea6): {next=c.rip+2; // mov eax, eax
m.put(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,32,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fea8): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004feab): {next=c.rip+7; // xor rcx, qword ptr [r14 + 0x930]
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004feb2): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004feb5): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004feb9): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004febc): {next=c.rip+4; // imul rax, rbp
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fec0): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fec3): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004fec7): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004feca): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fece): {next=c.rip+3; // mov rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fed1): {next=c.rip+4; // shr rdx, 0x21
m.shift(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004fed5): {next=c.rip+3; // xor rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fed8): {next=c.rip+7; // mov qword ptr [r14 + 0x930], rdx
m.put(Operand{2,0,64,0,14,-1,1,0,2352,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fedf): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x940]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fee6): {next=c.rip+7; // xor rdx, qword ptr [r14 + 0x948]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{2,0,64,0,14,-1,1,0,2376,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004feed): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fef0): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004fef4): {next=c.rip+3; // xor rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004fef7): {next=c.rip+4; // imul rax, rbp
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,5,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004fefb): {next=c.rip+3; // mov rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fefe): {next=c.rip+4; // shr rcx, 0x21
m.shift(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ff02): {next=c.rip+3; // xor rcx, rax
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ff05): {next=c.rip+4; // imul rcx, r8
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ff09): {next=c.rip+3; // mov rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ff0c): {next=c.rip+4; // shr rax, 0x21
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x21)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ff10): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ff13): {next=c.rip+7; // mov qword ptr [r14 + 0x940], rax
m.put(Operand{2,0,64,0,14,-1,1,0,2368,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ff1a): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1118]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ff21): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1149]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ff29): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ff30): {next=c.rip+4; // imul rcx, r11
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ff34): {next=c.rip+4; // lea rbx, [rax + rax*4]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,4,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ff38): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ff3b): {next=c.rip+3; // add rbx, rbx
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004ff3e): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ff41): {next=c.rip+3; // xor rcx, r10
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ff44): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ff47): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004ff4a): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004ff4d): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ff51): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ff58): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004ff5f): {next=c.rip+4; // imul rax, r15
m.imul(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,15,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ff63): {next=c.rip+3; // add rax, r12
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,12,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,false));
c.rip=next;return true;}
case UINT64_C(0x14004ff66): {next=c.rip+7; // mov qword ptr [r14 + 0x1180], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ff6d): {next=c.rip+4; // shr rax, 0x1b
m.shift(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{1,0,8,0,-1,-1,1,0,0,UINT64_C(0x1b)},1);
c.rip=next;return true;}
case UINT64_C(0x14004ff71): {next=c.rip+4; // movzx r8d, al
m.put(Operand{0,8,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ff75): {next=c.rip+7; // mov byte ptr [r14 + 0x1149], r8b
m.put(Operand{2,0,8,0,14,-1,1,0,4425,UINT64_C(0x0)},m.get(Operand{0,8,8,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ff7c): {next=c.rip+4; // imul r8, r11
m.imul(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ff80): {next=c.rip+3; // xor r8, rbx
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ff83): {next=c.rip+3; // xor r8, r10
m.put(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ff86): {next=c.rip+3; // mov rcx, r8
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,8,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ff89): {next=c.rip+3; // xor rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ff8c): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004ff8f): {next=c.rip+4; // lea rax, [r8 + rdx]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,8,2,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ff93): {next=c.rip+4; // cmove rax, rcx
if(m.condition(0))m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ff97): {next=c.rip+3; // mov rcx, r14
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,14,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ff9a): {next=c.rip+7; // mov qword ptr [r14 + 0x1118], rax
m.put(Operand{2,0,64,0,14,-1,1,0,4376,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ffa1): {next=c.rip+5; // call 0x14004c3c0
{uint64_t target=next+UINT64_C(0xffffffffffffc41a);m.push(next);next=target;}
c.rip=next;return true;}
case UINT64_C(0x14004ffa6): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x10b8]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4280,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ffad): {next=c.rip+7; // mov rdx, qword ptr [r14 + 0x1110]
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4368,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ffb4): {next=c.rip+7; // mov r10, qword ptr [r14 + 0x10c0]
m.put(Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4288,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ffbb): {next=c.rip+8; // movzx ecx, byte ptr [r14 + 0x1148]
m.put(Operand{0,1,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4424,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ffc3): {next=c.rip+7; // mov rbx, qword ptr [r14 + 0x10b0]
m.put(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4272,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ffca): {next=c.rip+4; // lea r11, [rax + rax*8]
m.put(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.address(Operand{2,0,64,0,0,0,8,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ffce): {next=c.rip+8; // movzx r9d, byte ptr [r14 + 0x10c8]
m.put(Operand{0,9,32,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,8,0,14,-1,1,0,4296,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ffd6): {next=c.rip+3; // mov rax, rdx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004ffd9): {next=c.rip+4; // imul rcx, r10
m.imul(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},Operand{0,10,64,0,-1,-1,1,0,0,UINT64_C(0x0)});
c.rip=next;return true;}
case UINT64_C(0x14004ffdd): {next=c.rip+3; // xor rcx, r11
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,11,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ffe0): {next=c.rip+3; // xor rcx, rbx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,3,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ffe3): {next=c.rip+3; // xor rax, rcx
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.logic(m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)})^m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64));
c.rip=next;return true;}
case UINT64_C(0x14004ffe6): {next=c.rip+3; // sub rdx, rcx
m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.arithmetic(m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),m.get(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)}),64,true));
c.rip=next;return true;}
case UINT64_C(0x14004ffe9): {next=c.rip+3; // test r9b, r9b
m.logic(m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)})&m.get(Operand{0,9,8,0,-1,-1,1,0,0,UINT64_C(0x0)}),8);
c.rip=next;return true;}
case UINT64_C(0x14004ffec): {next=c.rip+4; // cmove rdx, rax
if(m.condition(0))m.put(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fff0): {next=c.rip+7; // mov rax, qword ptr [r14 + 0x1180]
m.put(Operand{0,0,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{2,0,64,0,14,-1,1,0,4480,UINT64_C(0x0)}));
c.rip=next;return true;}
case UINT64_C(0x14004fff7): {next=c.rip+7; // inc qword ptr [r14 + 0x1188]
{uint64_t cf=c.flags&CF,defined=c.defined&CF;m.put(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)},m.arithmetic(m.get(Operand{2,0,64,0,14,-1,1,0,4488,UINT64_C(0x0)}),1,64,false));c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}
c.rip=next;return true;}
case UINT64_C(0x14004fffe): {next=c.rip+3; // mov rcx, rdx
m.put(Operand{0,1,64,0,-1,-1,1,0,0,UINT64_C(0x0)},m.get(Operand{0,2,64,0,-1,-1,1,0,0,UINT64_C(0x0)}));
c.rip=next;return true;}
default:return false;
}}
}
