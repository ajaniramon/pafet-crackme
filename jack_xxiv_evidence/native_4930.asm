140004930 push rbx
140004932 push rbp
140004933 push rsi
140004934 push rdi
140004935 push r12
140004937 push r13
140004939 push r14
14000493b push r15
14000493d sub rsp, 0x78
140004941 mov r15, qword ptr [rcx + 0x1e8]
140004948 mov rbx, rcx
14000494b mov rax, qword ptr [rcx + 0x180]
140004952 movabs rsi, 0x9e3779b97f4a7c15
14000495c mov r9, qword ptr [rcx + 0x1f8]
140004963 movabs r14, 0xff51afd7ed558ccd
14000496d movsxd rdi, dword ptr [rcx + 0x1188]
140004974 mov rbp, qword ptr [rcx + 0x178]
14000497b mov r11, qword ptr [rbx + 0x218]
140004982 movzx r10d, byte ptr [rbx + 0x200]
14000498a mov r12, qword ptr [rbx + 0x11b0]
140004991 mov qword ptr [rsp + 0x30], rax
140004996 mov rax, qword ptr [rcx + 0x18]
14000499a mov qword ptr [rsp + 0x38], rax
14000499f mov rax, qword ptr [rcx + 0x188]
1400049a6 mov qword ptr [rsp + 0x48], rax
1400049ab mov rax, qword ptr [rcx + 0x190]
1400049b2 mov qword ptr [rsp + 0x50], rax
1400049b7 mov rax, qword ptr [rcx + 0x20]
1400049bb mov qword ptr [rsp + 0x58], rax
1400049c0 mov rax, qword ptr [rcx + 0x1f0]
1400049c7 movzx ecx, byte ptr [rcx + 0x118c]
1400049ce mov byte ptr [rsp + 0xc0], cl
1400049d5 movzx ecx, byte ptr [rbx + 0x27a]
1400049dc lea r8, [rax + rax*2]
1400049e0 mov qword ptr [rsp + 0x60], rax
1400049e5 imul rcx, r9
1400049e9 mov rax, r11
1400049ec mov byte ptr [rsp + 0xc8], r10b
1400049f4 xor rcx, r15
1400049f7 mov qword ptr [rsp + 0xd8], r15
1400049ff xor rcx, r8
140004a02 mov qword ptr [rsp + 0x68], r9
140004a07 xor rax, rcx
140004a0a mov dword ptr [rsp + 0xd0], edi
140004a11 sub r11, rcx
140004a14 mov qword ptr [rsp + 0x28], r12
140004a19 test r10b, r10b
140004a1c movabs rcx, 0x2545f4914f6cdd1d
140004a26 cmove r11, rax
140004a2a mov rax, qword ptr [rbx + 0x28]
140004a2e inc qword ptr [rbx + 0x30]
140004a32 imul rax, rsi
140004a36 mov qword ptr [rsp + 0x40], r11
140004a3b add rax, rcx
140004a3e mov rcx, r11
140004a41 mov qword ptr [rbx + 0x28], rax
140004a45 shr rax, 0x1b
140004a49 movzx edx, al
140004a4c mov byte ptr [rbx + 0x27a], dl
140004a52 imul rdx, r9
140004a56 xor rdx, r15
140004a59 movabs r15, 0xc4ceb9fe1a85ec53
140004a63 xor rdx, r8
140004a66 xor rcx, rdx
140004a69 test r10b, r10b
140004a6c lea rax, [r11 + rdx]
140004a70 cmove rax, rcx
140004a74 movabs rcx, 0x3ba27450488eada6
140004a7e mov qword ptr [rbx + 0x218], rax
140004a85 mov rax, rdi
140004a88 mov r11, qword ptr [rbx + 0xcd8]
140004a8f mov r8, qword ptr [rbx + 0x170]
140004a96 imul rax, rsi
140004a9a add rax, rcx
140004a9d xor rax, r11
140004aa0 mov rcx, rax
140004aa3 shr rcx, 0x21
140004aa7 xor rcx, rax
140004aaa mov rax, r8
140004aad imul rcx, r14
140004ab1 xor rax, 0x504e5452
140004ab7 mov r10, rcx
140004aba shr r10, 0x21
140004abe xor r10, rcx
140004ac1 mov rcx, rax
140004ac4 shr rcx, 0x21
140004ac8 xor rcx, rax
140004acb imul r10, r15
140004acf imul rcx, r14
140004ad3 mov rdx, rcx
140004ad6 shr rdx, 0x21
140004ada lea r9d, [rdi + 1]
140004ade xor rdx, rcx
140004ae1 mov dword ptr [rbx + 0x1188], r9d
140004ae8 movsxd rcx, dword ptr [rbx + 0x154]
140004aef movabs rdi, 0xd6e8feb86659fd93
140004af9 imul rcx, rsi
140004afd imul rdx, r15
140004b01 mov rax, rdx
140004b04 xor rax, r10
140004b07 shr rax, 0x21
140004b0b xor rcx, rax
140004b0e mov eax, r9d
140004b11 imul rax, rdi
140004b15 xor rcx, rax
140004b18 lea rax, [r8*8]
140004b20 xor rcx, rax
140004b23 xor rcx, qword ptr [rbx + 0x158]
140004b2a xor rcx, qword ptr [rbx + 0xd8]
140004b31 xor rcx, qword ptr [rbx + 0xce0]
140004b38 xor rcx, r8
140004b3b xor rcx, r11
140004b3e xor rcx, rdx
140004b41 xor rcx, r10
140004b44 mov rax, rcx
140004b47 shr rax, 0x21
140004b4b xor rax, rcx
140004b4e imul rax, r14
140004b52 mov rcx, rax
140004b55 shr rcx, 0x21
140004b59 xor rcx, rax
140004b5c imul rcx, r15
140004b60 mov r13, rcx
140004b63 shr r13, 0x21
140004b67 xor r13, rcx
140004b6a cmove r13, rsi
140004b6e mov rax, r13
140004b71 mov qword ptr [rsp + 0x20], r13
140004b76 xor rax, 0x464f524d
140004b7c mov qword ptr [rbx + 0x170], r13
140004b83 mov rcx, rax
140004b86 shr rcx, 0x21
140004b8a xor rcx, rax
140004b8d imul rcx, r14
140004b91 mov rdx, rcx
140004b94 shr rdx, 0x21
140004b98 xor rdx, rcx
140004b9b imul rdx, r15
140004b9f mov rax, rdx
140004ba2 shr rax, 0x21
140004ba6 xor al, dl
140004ba8 and al, 1
140004baa mov byte ptr [rbx + 0x118c], al
140004bb0 mov rax, r13
140004bb3 shr rax, 0x21
140004bb7 xor rax, r13
140004bba imul rax, r14
140004bbe mov rcx, rax
140004bc1 shr rcx, 0x21
140004bc5 xor rcx, rax
140004bc8 imul rcx, r15
140004bcc mov rax, rcx
140004bcf shr rax, 0x21
140004bd3 xor rax, rcx
140004bd6 mov qword ptr [rbx + 0x178], rax
140004bdd mov rax, r13
140004be0 xor rax, 0x4c495645
140004be6 mov rcx, rax
140004be9 shr rcx, 0x21
140004bed xor rcx, rax
140004bf0 imul rcx, r14
140004bf4 mov rdx, rcx
140004bf7 shr rdx, 0x21
140004bfb xor rdx, rcx
140004bfe imul rdx, r15
140004c02 mov rax, rdx
140004c05 shr rax, 0x21
140004c09 xor rax, rdx
140004c0c or rax, 1
140004c10 mov qword ptr [rbx + 0x180], rax
140004c17 mov rax, r13
140004c1a xor rax, 0x544b5231
140004c20 mov rcx, rax
140004c23 shr rcx, 0x21
140004c27 xor rcx, rax
140004c2a imul rcx, r14
140004c2e mov rdx, rcx
140004c31 shr rdx, 0x21
140004c35 xor rdx, rcx
140004c38 imul rdx, r15
140004c3c mov rax, rdx
140004c3f shr rax, 0x21
140004c43 xor rax, rdx
140004c46 or rax, 1
140004c4a mov qword ptr [rbx + 0x18], rax
140004c4e mov rax, r13
140004c51 xor rax, 0x53544b4b
140004c57 mov rcx, rax
140004c5a shr rcx, 0x21
140004c5e xor rcx, rax
140004c61 imul rcx, r14
140004c65 mov rdx, rcx
140004c68 shr rdx, 0x21
140004c6c xor rdx, rcx
140004c6f imul rdx, r15
140004c73 mov rax, rdx
140004c76 shr rax, 0x21
140004c7a xor rax, rdx
140004c7d mov qword ptr [rbx + 0x188], rax
140004c84 mov rax, r13
140004c87 xor rax, 0x53544b53
140004c8d mov rcx, rax
140004c90 shr rcx, 0x21
140004c94 xor rcx, rax
140004c97 imul rcx, r14
140004c9b mov rdx, rcx
140004c9e shr rdx, 0x21
140004ca2 xor rdx, rcx
140004ca5 imul rdx, r15
140004ca9 mov rax, rdx
140004cac shr rax, 0x21
140004cb0 xor rax, rdx
140004cb3 or rax, 1
140004cb7 mov qword ptr [rbx + 0x190], rax
140004cbe mov rax, r13
140004cc1 xor rax, 0x544b5232
140004cc7 mov rcx, rax
140004cca shr rcx, 0x21
140004cce xor rcx, rax
140004cd1 imul rcx, r14
140004cd5 mov rdx, rcx
140004cd8 shr rdx, 0x21
140004cdc xor rdx, rcx
140004cdf imul rdx, r15
140004ce3 mov rax, rdx
140004ce6 shr rax, 0x21
140004cea xor rax, rdx
140004ced or rax, 1
140004cf1 mov qword ptr [rbx + 0x20], rax
140004cf5 mov rax, r13
140004cf8 xor rax, 0x4354524c
140004cfe mov rcx, rax
140004d01 shr rcx, 0x21
140004d05 xor rcx, rax
140004d08 imul rcx, r14
140004d0c mov rdx, rcx
140004d0f shr rdx, 0x21
140004d13 xor rdx, rcx
140004d16 imul rdx, r15
140004d1a mov rax, rdx
140004d1d shr rax, 0x21
140004d21 xor rax, rdx
140004d24 mov qword ptr [rbx + 0x1e8], rax
140004d2b mov rax, r13
140004d2e xor rax, 0x43545253
140004d34 mov rcx, rax
140004d37 shr rcx, 0x21
140004d3b xor rcx, rax
140004d3e imul rcx, r14
140004d42 mov rdx, rcx
140004d45 shr rdx, 0x21
140004d49 xor rdx, rcx
140004d4c mov rdi, qword ptr [rbx + 0x38]
140004d50 mov r12d, dword ptr [rsp + 0xd0]
140004d58 imul rdx, r15
140004d5c mov rax, rdx
140004d5f shr rax, 0x21
140004d63 xor rax, rdx
140004d66 or rax, 1
140004d6a mov qword ptr [rbx + 0x1f0], rax
140004d71 mov rax, r13
140004d74 xor rax, 0x43545254
140004d7a mov rcx, rax
140004d7d shr rcx, 0x21
140004d81 xor rcx, rax
140004d84 imul rcx, r14
140004d88 mov rdx, rcx
140004d8b shr rdx, 0x21
140004d8f xor rdx, rcx
140004d92 imul rdx, r15
140004d96 mov rax, rdx
140004d99 shr rax, 0x21
140004d9d xor rax, rdx
140004da0 or rax, 1
140004da4 mov qword ptr [rbx + 0x1f8], rax
140004dab mov rax, r13
140004dae xor rax, 0x4354464d
140004db4 mov rcx, rax
140004db7 shr rcx, 0x21
140004dbb xor rcx, rax
140004dbe imul rcx, r14
140004dc2 lea r14, [rbx + 0x69f]
140004dc9 mov rdx, rcx
140004dcc shr rdx, 0x21
140004dd0 xor rdx, rcx
140004dd3 imul rdx, r15
140004dd7 mov r15, qword ptr [rsp + 0x38]
140004ddc mov rax, rdx
140004ddf shr rax, 0x21
140004de3 xor al, dl
140004de5 and al, 1
140004de7 mov byte ptr [rbx + 0x200], al
140004ded mov rax, r13
140004df0 mov r13, qword ptr [rsp + 0x30]
140004df5 shr rax, 0x11
140004df9 and eax, 0x3f
140004dfc add eax, 0x30
140004dff xor esi, esi
140004e01 mov dword ptr [rbx + 0x1190], eax
140004e07 mov r11d, esi
140004e0a movzx esi, byte ptr [rsp + 0xc0]
140004e12 nop dword ptr [rax]
140004e16 nop word ptr [rax + rax]
140004e20 movzx r9d, byte ptr [r14]
140004e24 lea ecx, [r11 + r12]
140004e28 mov rax, qword ptr [rbx + 0x1158]
140004e2f lea r14, [r14 + 1]
140004e33 mov r10d, dword ptr [rbx + 0x1188]
140004e3a and ecx, 1
140004e3d shl ecx, 8
140004e40 add r10d, r11d
140004e43 add ecx, r11d
140004e46 and r10d, 1
140004e4a imul r9, r15
140004e4e mov rdx, qword ptr [rax + rcx*8]
140004e52 mov r8d, r11d
140004e55 and r8d, 0x1ff
140004e5c mov rcx, rdx
140004e5f mov eax, r8d
140004e62 imul rax, r13
140004e66 xor r9, rax
140004e69 mov rax, r9
140004e6c xor r9, rdx
140004e6f xor rax, rbp
140004e72 xor r9, rbp
140004e75 sub rcx, rax
140004e78 mov rax, qword ptr [rbx + 0x28]
140004e7c test sil, sil
140004e7f cmovne r9, rcx
140004e83 inc qword ptr [rbx + 0x30]
140004e87 movabs rcx, 0x9e3779b97f4a7c15
140004e91 imul rax, rcx
140004e95 movabs rcx, 0x2545f4914f6cdd1d
140004e9f add rax, rcx
140004ea2 mov qword ptr [rbx + 0x28], rax
140004ea6 shr rax, 0x1b
140004eaa movzx ecx, al
140004ead mov byte ptr [r14 - 1], cl
140004eb1 imul rcx, qword ptr [rbx + 0x18]
140004eb6 imul r8, qword ptr [rbx + 0x180]
140004ebe xor rcx, r8
140004ec1 xor rcx, qword ptr [rbx + 0x178]
140004ec8 mov rax, rcx
140004ecb xor rax, r9
140004ece cmp byte ptr [rbx + 0x118c], 0
140004ed5 lea rdx, [rcx + r9]
140004ed9 cmove rdx, rax
140004edd mov rax, qword ptr [rbx + 0x1158]
140004ee4 shl r10d, 8
140004ee8 xor rdi, rdx
140004eeb add r10d, r11d
140004eee inc r11d
140004ef1 mov qword ptr [rax + r10*8], rdx
140004ef5 cmp r11d, 0x100
140004efc jl 0x140004e20
140004f02 mov rcx, qword ptr [rsp + 0x40]
140004f07 xor esi, esi
140004f09 mov r15, qword ptr [rsp + 0xd8]
140004f11 test ecx, ecx
140004f13 mov eax, esi
140004f15 cmovns eax, ecx
140004f18 mov ecx, 0x3ff
140004f1d cmp eax, ecx
140004f1f cmovg eax, ecx
140004f22 movsxd r14, eax
140004f25 test eax, eax
140004f27 jle 0x14000500d
140004f2d mov r8, qword ptr [rbx + 0x1160]
140004f34 lea ebp, [rsi + 1]
140004f37 mov r15, qword ptr [rsp + 0x48]
140004f3c lea r11, [rbx + 0x89f]
140004f43 mov r12, qword ptr [rsp + 0x50]
140004f48 mov r9d, esi
140004f4b mov r13, qword ptr [rsp + 0x58]
140004f50 movabs rsi, 0x9e3779b97f4a7c15
140004f5a nop word ptr [rax + rax]
140004f60 movzx ecx, byte ptr [r11]
140004f64 imul rcx, r13
140004f68 movsxd r10, ebp
140004f6b mov rax, r10
140004f6e imul rax, r12
140004f72 xor rcx, rax
140004f75 xor rcx, r15
140004f78 mov rdx, rcx
140004f7b shr rcx, 0x3a
140004f7f xor rdx, qword ptr [r8 + r9]
140004f83 test ecx, ecx
140004f85 je 0x140004f8a
140004f87 ror rdx, cl
140004f8a mov rax, qword ptr [rbx + 0x28]
140004f8e movabs rcx, 0x2545f4914f6cdd1d
140004f98 inc qword ptr [rbx + 0x30]
140004f9c imul rax, rsi
140004fa0 add rax, rcx
140004fa3 mov qword ptr [rbx + 0x28], rax
140004fa7 shr rax, 0x1b
140004fab movzx r8d, al
140004faf mov byte ptr [r11], r8b
140004fb2 imul r8, qword ptr [rbx + 0x20]
140004fb7 imul r10, qword ptr [rbx + 0x190]
140004fbf xor r8, r10
140004fc2 xor r8, qword ptr [rbx + 0x188]
140004fc9 mov rax, r8
140004fcc shr rax, 0x3a
140004fd0 test eax, eax
140004fd2 je 0x140004fd9
140004fd4 mov ecx, eax
140004fd6 rol rdx, cl
140004fd9 mov rax, qword ptr [rbx + 0x1160]
140004fe0 xor rdx, r8
140004fe3 inc ebp
140004fe5 inc r11
140004fe8 mov qword ptr [r9 + rax], rdx
140004fec mov r8, qword ptr [rbx + 0x1160]
140004ff3 xor rdi, qword ptr [r8 + r9]
140004ff7 add r9, 8
140004ffb sub r14, 1
140004fff jne 0x140004f60
140005005 mov r15, qword ptr [rsp + 0xd8]
14000500d mov r12, qword ptr [rsp + 0x60]
140005012 lea r10, [rbx + 0x279]
140005019 mov r13, qword ptr [rsp + 0x68]
14000501e lea r11, [rbx + 0x210]
140005025 movzx esi, byte ptr [rsp + 0xc8]
14000502d mov ebp, 2
140005032 lea r14d, [rbp + 5]
140005036 nop word ptr [rax + rax]
140005040 movzx r9d, byte ptr [r10 - 1]
140005045 lea r8, [rbp - 1]
140005049 mov rcx, qword ptr [r11 - 8]
14000504d lea r11, [r11 + 0x10]
140005051 imul r9, r13
140005055 mov rax, r8
140005058 lea r10, [r10 + 2]
14000505c imul rax, r12
140005060 xor r9, rax
140005063 mov rax, r9
140005066 xor r9, qword ptr [r11 - 0x18]
14000506a xor rax, r15
14000506d xor r9, r15
140005070 sub rcx, rax
140005073 mov rax, qword ptr [rbx + 0x28]
140005077 test sil, sil
14000507a cmovne r9, rcx
14000507e inc qword ptr [rbx + 0x30]
140005082 movabs rcx, 0x9e3779b97f4a7c15
14000508c imul rax, rcx
140005090 movabs rcx, 0x2545f4914f6cdd1d
14000509a add rax, rcx
14000509d mov qword ptr [rbx + 0x28], rax
1400050a1 shr rax, 0x1b
1400050a5 movzx ecx, al
1400050a8 mov byte ptr [r10 - 3], cl
1400050ac imul rcx, qword ptr [rbx + 0x1f8]
1400050b4 imul r8, qword ptr [rbx + 0x1f0]
1400050bc xor rcx, r8
1400050bf xor rcx, qword ptr [rbx + 0x1e8]
1400050c6 mov rax, rcx
1400050c9 add rcx, r9
1400050cc xor rax, r9
1400050cf cmp byte ptr [rbx + 0x200], 0
1400050d6 cmove rcx, rax
1400050da mov rax, rbp
1400050dd mov qword ptr [r11 - 0x18], rcx
1400050e1 xor rdi, rcx
1400050e4 movzx r8d, byte ptr [r10 - 2]
1400050e9 mov rcx, qword ptr [r11 - 0x10]
1400050ed imul rax, r12
1400050f1 imul r8, r13
1400050f5 xor r8, rax
1400050f8 mov rax, r8
1400050fb xor r8, qword ptr [r11 - 0x10]
1400050ff xor rax, r15
140005102 xor r8, r15
140005105 sub rcx, rax
140005108 mov rax, qword ptr [rbx + 0x28]
14000510c test sil, sil
14000510f cmovne r8, rcx
140005113 movabs rcx, 0x9e3779b97f4a7c15
14000511d imul rax, rcx
140005121 movabs rcx, 0x2545f4914f6cdd1d
14000512b add rcx, rax
14000512e mov rax, rbp
140005131 mov qword ptr [rbx + 0x28], rcx
140005135 inc qword ptr [rbx + 0x30]
140005139 shr rcx, 0x1b
14000513d movzx edx, cl
140005140 mov byte ptr [r10 - 2], dl
140005144 imul rax, qword ptr [rbx + 0x1f0]
14000514c imul rdx, qword ptr [rbx + 0x1f8]
140005154 xor rdx, rax
140005157 xor rdx, qword ptr [rbx + 0x1e8]
14000515e mov rax, rdx
140005161 xor rax, r8
140005164 cmp byte ptr [rbx + 0x200], 0
14000516b lea rcx, [rdx + r8]
14000516f cmove rcx, rax
140005173 add rbp, 2
140005177 xor rdi, rcx
14000517a mov qword ptr [r11 - 0x10], rcx
14000517e sub r14, 1
140005182 jne 0x140005040
140005188 mov r13, qword ptr [rsp + 0x20]
14000518d movabs rbp, 0xff51afd7ed558ccd
140005197 mov r12, qword ptr [rsp + 0x28]
14000519c mov rax, r13
14000519f xor rax, 0x54524559
1400051a5 movabs r14, 0xc4ceb9fe1a85ec53
1400051af mov rcx, rax
1400051b2 mov esi, 0
1400051b7 shr rcx, 0x21
1400051bb xor rcx, rax
1400051be imul rcx, rbp
1400051c2 mov rdx, rcx
1400051c5 shr rdx, 0x21
1400051c9 xor rdx, rcx
1400051cc imul rdx, r14
1400051d0 mov rax, rdx
1400051d3 shr rax, 0x21
1400051d7 xor rax, rdx
1400051da or rax, 1
1400051de cmp dword ptr [rbx + 0x298], 0
1400051e5 mov qword ptr [rbx + 0x11b0], rax
1400051ec jbe 0x14000522f
1400051ee nop 
1400051f0 cmp esi, 0x20
1400051f3 jae 0x14000522f
1400051f5 mov ecx, esi
1400051f7 mov eax, r12d
1400051fa inc esi
1400051fc xor eax, dword ptr [rbx + rcx*8 + 0x29c]
140005203 xor eax, dword ptr [rbx + 0x11b0]
140005209 mov dword ptr [rbx + rcx*8 + 0x29c], eax
140005210 mov eax, r12d
140005213 xor eax, dword ptr [rbx + rcx*8 + 0x2a0]
14000521a xor eax, dword ptr [rbx + 0x11b0]
140005220 mov dword ptr [rbx + rcx*8 + 0x2a0], eax
140005227 cmp esi, dword ptr [rbx + 0x298]
14000522d jb 0x1400051f0
14000522f mov rax, qword ptr gs:[0x58]
140005238 mov edx, 0x15a0
14000523d mov rcx, qword ptr [rax]
140005240 cmp dword ptr [rdx + rcx + 0x524], 0
140005248 je 0x140005252
14000524a mov rcx, r13
14000524d call 0x140003e10
140005252 mov ecx, dword ptr [rbx + 0x1188]
140005258 xor rdi, r13
14000525b inc qword ptr [rbx + 0x288]
140005262 inc ecx
140005264 movabs rax, 0x9e3779b97f4a7c15
14000526e imul rcx, rax
140005272 mov eax, dword ptr [rbx + 0xc]
140005275 xor rcx, rax
140005278 xor rcx, r13
14000527b xor r13, qword ptr [rbx + 0xce0]
140005282 mov rax, rcx
140005285 shr rax, 0x21
140005289 xor rax, rcx
14000528c imul rax, rbp
140005290 mov rcx, rax
140005293 shr rcx, 0x21
140005297 xor rcx, rax
14000529a imul rcx, r14
14000529e mov rax, rcx
1400052a1 shr rax, 0x21
1400052a5 xor eax, ecx
1400052a7 mov dword ptr [rbx + 0xc], eax
1400052aa mov rax, rdi
1400052ad shr rax, 0x21
1400052b1 xor rax, rdi
1400052b4 imul rax, rbp
1400052b8 mov rcx, rax
1400052bb shr rcx, 0x21
1400052bf xor rcx, rax
1400052c2 imul rcx, r14
1400052c6 mov rax, rcx
1400052c9 shr rax, 0x21
1400052cd xor rax, rcx
1400052d0 mov qword ptr [rbx + 0x38], rax
1400052d4 mov rax, r13
1400052d7 shr rax, 0x21
1400052db xor rax, r13
1400052de imul rax, rbp
1400052e2 mov rcx, rax
1400052e5 shr rcx, 0x21
1400052e9 xor rcx, rax
1400052ec imul rcx, r14
1400052f0 mov rax, rcx
1400052f3 shr rax, 0x21
1400052f7 xor rax, rcx
1400052fa inc qword ptr [rbx + 0x1198]
140005301 mov qword ptr [rbx + 0xce0], rax
140005308 add rsp, 0x78
14000530c pop r15
14000530e pop r14
140005310 pop r13
140005312 pop r12
140005314 pop rdi
140005315 pop rsi
140005316 pop rbp
140005317 pop rbx
140005318 ret 
