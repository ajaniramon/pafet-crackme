000000014008735f  movzx eax, byte ptr [rsp + 0x3b0]
0000000140087367  lea ecx, [rax + 0xff]
000000014008736d  xor cl, al
000000014008736f  test cl, 1
0000000140087372  jne 0x1400873cd
0000000140087374  mov eax, 0x91c412f7
0000000140087379  mov qword ptr [rsp + 0x20], rax
000000014008737e  mov eax, 0xa90b048d
0000000140087383  mov qword ptr [rsp + 0x28], rax
0000000140087388  mov rcx, qword ptr [rsp + 0x28]
000000014008738d  mov rax, qword ptr [rsp + 0x20]
0000000140087392  xor rcx, rax
0000000140087395  mov qword ptr [rsp + 0x30], rcx
000000014008739a  mov rcx, qword ptr [rsp + 0x30]
000000014008739f  mov rax, qword ptr [rsp + 0x30]
00000001400873a4  imul rcx, rax
00000001400873a8  and ecx, 1
00000001400873ab  mov rax, qword ptr [rsp + 0x30]
00000001400873b0  and eax, 1
00000001400873b3  cmp rcx, rax
00000001400873b6  je 0x1400873c8
00000001400873b8  mov rax, qword ptr [rsp + 0x30]
00000001400873bd  xor rax, 0xdead
00000001400873c3  mov qword ptr [rsp + 0x30], rax
00000001400873c8  mov rax, qword ptr [rsp + 0x30]
00000001400873cd  mov rcx, qword ptr [rsp + 0x3b0]
00000001400873d5  inc rcx
00000001400873d8  call 0x140002040
00000001400873dd  xor qword ptr [rsp + 0x3b0], rax
00000001400873e5  mov qword ptr [rsp + 0x20], 0xf4a6231
00000001400873ee  mov ebx, 0xf33f72c7
00000001400873f3  mov qword ptr [rsp + 0x28], rbx
00000001400873f8  mov rcx, qword ptr [rsp + 0x28]
00000001400873fd  mov rax, qword ptr [rsp + 0x20]
0000000140087402  xor rcx, rax
0000000140087405  mov qword ptr [rsp + 0x30], rcx
000000014008740a  mov qword ptr [rsp + 0x78], r13
000000014008740f  nop
0000000140087410  mov rax, qword ptr [rsp + 0x78]
0000000140087415  cmp rax, 3
0000000140087419  jae 0x140085f6a
000000014008741f  mov rcx, qword ptr [rsp + 0x78]
0000000140087424  mov rax, qword ptr [rsp + 0x30]
0000000140087429  add rcx, rax
000000014008742c  call 0x140002040
0000000140087431  mov qword ptr [rsp + 0x30], rax
0000000140087436  mov rax, qword ptr [rsp + 0x78]
000000014008743b  inc rax
000000014008743e  mov qword ptr [rsp + 0x78], rax
0000000140087443  jmp 0x140087410
