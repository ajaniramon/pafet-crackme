000000014007fb70  push rbx
000000014007fb72  push rbp
000000014007fb73  push rsi
000000014007fb74  push rdi
000000014007fb75  push r12
000000014007fb77  push r13
000000014007fb79  push r14
000000014007fb7b  push r15
000000014007fb7d  sub rsp, 0x48
000000014007fb81  movsxd r8, dword ptr [rcx + 0x928]
000000014007fb88  mov rbp, rcx
000000014007fb8b  mov r9, qword ptr [rcx + 0x700]
000000014007fb92  movabs rax, 0x9e3779b97f4a7c15
000000014007fb9c  mov rdx, r8
000000014007fb9f  movabs r15, 0xff51afd7ed558ccd
000000014007fba9  imul rdx, rax
000000014007fbad  movabs r12, 0xc4ceb9fe1a85ec53
000000014007fbb7  lea rbx, [rbp + 0x4e0]
000000014007fbbe  xor rdx, qword ptr [rcx + 0x940]
000000014007fbc5  xor r13d, r13d
000000014007fbc8  xor rdx, qword ptr [rcx + 0x4b0]
000000014007fbcf  xor rdx, qword ptr [rcx + 0x230]
000000014007fbd6  xor rdx, r9
000000014007fbd9  mov qword ptr [rsp + 0xa8], rbx
000000014007fbe1  xor rdx, qword ptr [rcx + 0x8d8]
000000014007fbe8  mov rax, rdx
000000014007fbeb  mov dword ptr [rip + 0x3baff6], r13d
000000014007fbf2  shr rax, 0x21
000000014007fbf6  xor rax, rdx
000000014007fbf9  imul rax, r15
000000014007fbfd  mov rcx, rax
000000014007fc00  shr rcx, 0x21
000000014007fc04  xor rcx, rax
000000014007fc07  imul rcx, r12
000000014007fc0b  mov rdx, rcx
000000014007fc0e  shr rdx, 0x21
000000014007fc12  xor rdx, rcx
000000014007fc15  mov rcx, r9
000000014007fc18  or rdx, 1
000000014007fc1c  shr rcx, 0x11
000000014007fc20  mov rax, rdx
000000014007fc23  mov qword ptr [rbp + 0x8d8], rdx
000000014007fc2a  shr rax, 0x20
000000014007fc2e  xor ecx, eax
000000014007fc30  imul eax, r8d, 0x9e3779b9
000000014007fc37  xor ecx, eax
000000014007fc39  xor ecx, edx
000000014007fc3b  mov dword ptr [rbp + 0x4e8], ecx
000000014007fc41  cmp dword ptr [rbp + 0x1080], r13d
000000014007fc48  je 0x14007fc9a
000000014007fc4a  mov rax, qword ptr [rbp + 0x1078]
000000014007fc51  xor r9, rdx
000000014007fc54  mov qword ptr [rbx], rax
000000014007fc57  movabs rax, 0x48444c4b4559
000000014007fc61  xor r9, rax
000000014007fc64  mov rax, r9
000000014007fc67  shr rax, 0x21
000000014007fc6b  xor rax, r9
000000014007fc6e  imul rax, r15
000000014007fc72  mov rdx, rax
000000014007fc75  shr rdx, 0x21
000000014007fc79  xor rdx, rax
000000014007fc7c  mov rax, qword ptr [rbp + 0x1078]
000000014007fc83  imul rdx, r12
000000014007fc87  mov rcx, rdx
000000014007fc8a  shr rcx, 0x21
000000014007fc8e  xor rcx, rdx
000000014007fc91  or rcx, 1
000000014007fc95  mov qword ptr [rax], rcx
000000014007fc98  jmp 0x14007fcac
000000014007fc9a  mov rax, qword ptr [rip + 0x36530f]
000000014007fca1  mov qword ptr [rbx], rax
000000014007fca4  mov qword ptr [rsp + 0xa8], rbx
000000014007fcac  mov eax, r13d
000000014007fcaf  mov qword ptr [rsp + 0xa0], r13
000000014007fcb7  mov rdx, r13
000000014007fcba  mov dword ptr [rsp + 0x90], eax
000000014007fcc1  mov qword ptr [rsp + 0x98], rdx
000000014007fcc9  lea rsi, [rbp + 0x502]
000000014007fcd0  mov r14, r13
000000014007fcd3  mov qword ptr [rsp + 0x20], r13
000000014007fcd8  mov rdi, r13
000000014007fcdb  jmp 0x14007fcf4
000000014007fcdd  nop dword ptr [rax]
000000014007fce0  movabs r15, 0xff51afd7ed558ccd
000000014007fcea  movabs r12, 0xc4ceb9fe1a85ec53
000000014007fcf4  mov ecx, dword ptr [rbp + 0x8d8]
000000014007fcfa  lea r10, [rsi + 2]
000000014007fcfe  xor ecx, 0xa5a5a5a5
000000014007fd04  imul eax, eax, 0x61c88647
000000014007fd0a  sub ecx, eax
000000014007fd0c  mov eax, ecx
000000014007fd0e  xor rax, 0x4a495421
000000014007fd14  imul rax, r15
000000014007fd18  mov rcx, rax
000000014007fd1b  shr rcx, 0x21
000000014007fd1f  xor rcx, rax
000000014007fd22  imul rcx, r12
000000014007fd26  mov r11, rcx
000000014007fd29  shr r11, 0x21
000000014007fd2d  xor r11d, ecx
000000014007fd30  mov rcx, qword ptr [rbp + 0x8d8]
000000014007fd37  inc rcx
000000014007fd3a  add rcx, rdx
000000014007fd3d  mov rax, rcx
000000014007fd40  shr rax, 0x21
000000014007fd44  xor rax, rcx
000000014007fd47  imul rax, r15
000000014007fd4b  mov rcx, rax
000000014007fd4e  shr rcx, 0x21
000000014007fd52  xor rcx, rax
000000014007fd55  imul rcx, r12
000000014007fd59  mov rax, rcx
000000014007fd5c  shr rax, 0x21
000000014007fd60  xor rax, rcx
000000014007fd63  mov rcx, r10
000000014007fd66  or rax, 1
000000014007fd6a  mov qword ptr [rbp + 0x8d8], rax
000000014007fd71  mov eax, 1
000000014007fd76  mov word ptr [rsi], r13w
000000014007fd7a  nop word ptr [rax + rax]
000000014007fd80  mov word ptr [rcx], ax
000000014007fd83  lea rcx, [rcx + 2]
000000014007fd87  inc eax
000000014007fd89  cmp eax, 0x3e
000000014007fd8c  jb 0x14007fd80
000000014007fd8e  mov r9d, 0x3e
000000014007fd94  add r10, 0x78
000000014007fd98  nop dword ptr [rax + rax]
000000014007fda0  movzx r8d, word ptr [r10]
000000014007fda4  lea r10, [r10 - 2]
000000014007fda8  imul edx, r9d, 0x9e3779b9
000000014007fdaf  mov eax, r11d
000000014007fdb2  xor rdx, rax
000000014007fdb5  xor rdx, 0x4a495421
000000014007fdbc  imul rdx, r15
000000014007fdc0  mov rcx, rdx
000000014007fdc3  shr rcx, 0x21
000000014007fdc7  xor rcx, rdx
000000014007fdca  xor edx, edx
000000014007fdcc  imul rcx, r12
000000014007fdd0  mov rax, rcx
000000014007fdd3  shr rax, 0x21
000000014007fdd7  xor eax, ecx
000000014007fdd9  mov r11d, eax
000000014007fddc  div r9d
000000014007fddf  dec r9d
000000014007fde2  movzx eax, word ptr [rsi + rdx*2]
000000014007fde6  mov word ptr [r10 + 2], ax
000000014007fdeb  mov word ptr [rsi + rdx*2], r8w
000000014007fdf0  cmp r9d, 1
000000014007fdf4  ja 0x14007fda0
000000014007fdf6  mov ecx, r13d
000000014007fdf9  mov rdx, rsi
000000014007fdfc  nop dword ptr [rax]
000000014007fe00  movzx eax, word ptr [rdx]
000000014007fe03  lea rdx, [rdx + 2]
000000014007fe07  mov word ptr [rsi + rax*2 - 0x4ee], cx
000000014007fe0f  inc ecx
000000014007fe11  cmp ecx, 0x3e
000000014007fe14  jb 0x14007fe00
000000014007fe16  lea rax, [rip - 0x7fe1d]
000000014007fe1d  mov r15, r13
000000014007fe20  mov rcx, qword ptr [rdi + rax + 0x3e03f0]
000000014007fe28  movabs r12, 0x9e3779b97f4a7c15
000000014007fe32  mov rdx, qword ptr [rdi + rax + 0x3e4fb0]
000000014007fe3a  mov r13d, 0x3e
000000014007fe40  mov qword ptr [rsp + 0x30], rcx
000000014007fe45  mov qword ptr [rsp + 0x28], rdx
000000014007fe4a  nop word ptr [rax + rax]
000000014007fe50  cmp dword ptr [rbp + 0x1080], 0
000000014007fe57  movzx eax, word ptr [rsi]
000000014007fe5a  movzx eax, word ptr [rcx + rax*2]
000000014007fe5e  mov rax, qword ptr [rdx + rax*8]
000000014007fe62  je 0x14007ff18
000000014007fe68  mov rcx, qword ptr [rsp + 0x98]
000000014007fe70  mov r9, qword ptr [rbp + 0x1078]
000000014007fe77  xor rcx, r12
000000014007fe7a  xor rcx, qword ptr [rbp + 0x8d8]
000000014007fe81  mov rdi, qword ptr [rsp + 0xa0]
000000014007fe89  mov rdx, rcx
000000014007fe8c  shr rdx, 0x21
000000014007fe90  inc rdi
000000014007fe93  xor rdx, rcx
000000014007fe96  add rdi, r15
000000014007fe99  movabs rcx, 0xff51afd7ed558ccd
000000014007fea3  shl rdi, 5
000000014007fea7  imul rdx, rcx
000000014007feab  add rdi, r9
000000014007feae  mov rcx, rdx
000000014007feb1  shr rcx, 0x21
000000014007feb5  xor rcx, rdx
000000014007feb8  movabs rdx, 0xc4ceb9fe1a85ec53
000000014007fec2  imul rcx, rdx
000000014007fec6  mov rdx, rax
000000014007fec9  mov rbx, rcx
000000014007fecc  shr rcx, 9
000000014007fed0  shr rbx, 0x2a
000000014007fed4  xor ebx, ecx
000000014007fed6  mov rcx, rdi
000000014007fed9  and ebx, 3
000000014007fedc  mov r8d, ebx
000000014007fedf  call 0x14003e9a0
000000014007fee4  mov r8d, dword ptr [rip + 0x3bacfd]
000000014007feeb  mov rax, qword ptr [rbp + 0x4d8]
000000014007fef2  bts r8d, ebx
000000014007fef6  mov rbx, qword ptr [rsp + 0xa8]
000000014007fefe  mov rdx, qword ptr [rsp + 0x28]
000000014007ff03  mov dword ptr [rip + 0x3bacde], r8d
000000014007ff0a  sub edi, dword ptr [rbx]
000000014007ff0c  xor edi, dword ptr [rbp + 0x4e8]
000000014007ff12  mov dword ptr [r14 + rax], edi
000000014007ff16  jmp 0x14007ff2b
000000014007ff18  sub eax, dword ptr [rbx]
000000014007ff1a  mov rcx, qword ptr [rbp + 0x4d8]
000000014007ff21  xor eax, dword ptr [rbp + 0x4e8]
000000014007ff27  mov dword ptr [r14 + rcx], eax
000000014007ff2b  mov rcx, qword ptr [rsp + 0x30]
000000014007ff30  movabs rax, 0x61c8864680b583eb
000000014007ff3a  sub r12, rax
000000014007ff3d  inc r15
000000014007ff40  add r14, 4
000000014007ff44  add rsi, 2
000000014007ff48  sub r13, 1
000000014007ff4c  jne 0x14007fe50
000000014007ff52  mov eax, dword ptr [rsp + 0x90]
000000014007ff59  mov r13d, 0
000000014007ff5f  mov rdx, qword ptr [rsp + 0x98]
000000014007ff67  inc eax
000000014007ff69  mov rdi, qword ptr [rsp + 0x20]
000000014007ff6e  inc rdx
000000014007ff71  add qword ptr [rsp + 0xa0], 0x3e
000000014007ff7a  add rdi, 8
000000014007ff7e  mov dword ptr [rsp + 0x90], eax
000000014007ff85  mov qword ptr [rsp + 0x98], rdx
000000014007ff8d  mov qword ptr [rsp + 0x20], rdi
000000014007ff92  cmp eax, 4
000000014007ff95  jb 0x14007fce0
000000014007ff9b  mov eax, dword ptr [rbp + 0x8bc]
000000014007ffa1  xor rax, qword ptr [rbp + 0x8d8]
000000014007ffa8  mov rcx, rax
000000014007ffab  shr rcx, 0x21
000000014007ffaf  xor rcx, rax
000000014007ffb2  movabs rax, 0xff51afd7ed558ccd
000000014007ffbc  imul rcx, rax
000000014007ffc0  movabs rax, 0xc4ceb9fe1a85ec53
000000014007ffca  mov rdx, rcx
000000014007ffcd  shr rdx, 0x21
000000014007ffd1  xor rdx, rcx
000000014007ffd4  imul rdx, rax
000000014007ffd8  mov rax, rdx
000000014007ffdb  shr rax, 0x21
000000014007ffdf  xor eax, edx
000000014007ffe1  inc dword ptr [rbp + 0x8e0]
000000014007ffe7  mov dword ptr [rbp + 0x8bc], eax
000000014007ffed  add rsp, 0x48
000000014007fff1  pop r15
000000014007fff3  pop r14
000000014007fff5  pop r13
000000014007fff7  pop r12
000000014007fff9  pop rdi
000000014007fffa  pop rsi
000000014007fffb  pop rbp
000000014007fffc  pop rbx
000000014007fffd  ret
