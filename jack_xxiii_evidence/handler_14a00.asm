140014a00 mov qword ptr [rsp + 0x18], r8
140014a05 push rbx
140014a06 push rdi
140014a07 push r15
140014a09 sub rsp, 0x40
140014a0d movsxd rax, dword ptr [rcx + 0x154]
140014a14 mov rdi, rcx
140014a17 mov r15d, edx
140014a1a movabs rcx, 0x4328aeb5b475ce75
140014a24 imul rax, rcx
140014a28 movabs rcx, 0xe171247e35ab4a4a
140014a32 mov rbx, r8
140014a35 xor rax, qword ptr [rdi + 0xe0]
140014a3c mov qword ptr [rsp + 0x60], rax
140014a41 mov rax, qword ptr [rsp + 0x60]
140014a46 movsxd rax, dword ptr [rdi + 0x154]
140014a4d imul rax, rcx
140014a51 movabs rcx, 0x7b9ba20b6e0c65f
140014a5b xor rax, qword ptr [rdi + 0xe0]
140014a62 mov qword ptr [rsp + 0x60], rax
140014a67 mov rax, qword ptr [rsp + 0x60]
140014a6c movsxd rax, dword ptr [rdi + 0x154]
140014a73 imul rax, rcx
140014a77 xor rax, qword ptr [rdi + 0xe0]
140014a7e mov qword ptr [rsp + 0x60], rax
140014a83 mov rax, qword ptr [rsp + 0x60]
140014a88 mov rax, qword ptr [rdi + 0x100]
140014a8f shr rax, 0xd
140014a93 mov rcx, rax
140014a96 shr rcx, 0x21
140014a9a xor rcx, rax
140014a9d movabs rax, 0xff51afd7ed558ccd
140014aa7 imul rcx, rax
140014aab movabs rax, 0xc4ceb9fe1a85ec53
140014ab5 mov rdx, rcx
140014ab8 shr rdx, 0x21
140014abc xor rdx, rcx
140014abf imul rdx, rax
140014ac3 movabs rax, 0x706e8465dde5e6f3
140014acd mov rcx, rdx
140014ad0 shr rcx, 0x21
140014ad4 xor rcx, rdx
140014ad7 xor rcx, rax
140014ada mov rax, qword ptr [rdi + 0x100]
140014ae1 add rcx, rax
140014ae4 mov qword ptr [rdi + 0x100], rcx
140014aeb mov rcx, rdi
140014aee call 0x140003a50
140014af3 mov rax, qword ptr [rdi + 0x100]
140014afa test r15d, r15d
140014afd jns 0x1400157e6
140014b03 cmp qword ptr [rdi + 0x1170], rbx
140014b0a jne 0x1400157f4
140014b10 movsxd rax, dword ptr [rdi + 0x154]
140014b17 movabs rcx, 0x1eb7bc57962a6751
140014b21 imul rax, rcx
140014b25 mov qword ptr [rsp + 0x68], rbp
140014b2a xor rax, qword ptr [rdi + 0xe0]
140014b31 mov qword ptr [rsp + 0x60], rax
140014b36 mov rax, qword ptr [rsp + 0x60]
140014b3b mov r8, qword ptr [rdi + 0x258]
140014b42 movzx ecx, byte ptr [rdi + 0x282]
140014b49 mov rax, r8
140014b4c mov r11, qword ptr [rdi + 0x1f8]
140014b53 mov rbx, qword ptr [rdi + 0x1e8]
140014b5a mov r10, qword ptr [rdi + 0x28]
140014b5e mov rbp, qword ptr [rdi + 0x30]
140014b62 imul rcx, r11
140014b66 mov qword ptr [rsp + 0x38], rsi
140014b6b movzx esi, byte ptr [rdi + 0x200]
140014b72 xor rcx, rbx
140014b75 mov qword ptr [rsp + 0x30], r12
140014b7a movabs r12, 0x9e3779b97f4a7c15
140014b84 mov qword ptr [rsp + 0x28], r13
140014b89 movabs r13, 0x2545f4914f6cdd1d
140014b93 mov qword ptr [rsp + 0x20], r14
140014b98 mov r14, qword ptr [rdi + 0x1f0]
140014b9f imul r9, r14, 0xb
140014ba3 xor rcx, r9
140014ba6 xor rax, rcx
140014ba9 sub r8, rcx
140014bac test sil, sil
140014baf cmove r8, rax
140014bb3 inc rbp
140014bb6 imul r10, r12
140014bba mov qword ptr [rdi + 0x30], rbp
140014bbe mov rcx, r8
140014bc1 add r10, r13
140014bc4 mov qword ptr [rdi + 0x28], r10
140014bc8 mov rax, r10
140014bcb shr rax, 0x1b
140014bcf movzx edx, al
140014bd2 mov byte ptr [rdi + 0x282], dl
140014bd8 imul rdx, r11
140014bdc xor rdx, rbx
140014bdf xor rdx, r9
140014be2 xor rcx, rdx
140014be5 test sil, sil
140014be8 lea rax, [r8 + rdx]
140014bec cmove rax, rcx
140014bf0 mov qword ptr [rdi + 0x258], rax
140014bf7 test r8d, r8d
140014bfa jne 0x1400157c4
140014c00 cmp dword ptr [rdi + 0x5b8], r8d
140014c07 jne 0x1400157c4
140014c0d mov r8, qword ptr [rdi + 0x208]
140014c14 movzx ecx, byte ptr [rdi + 0x278]
140014c1b imul rcx, r11
140014c1f xor rcx, rbx
140014c22 xor rcx, r14
140014c25 mov rax, rcx
140014c28 xor rax, r8
140014c2b sub r8, rcx
140014c2e test sil, sil
140014c31 cmove r8, rax
140014c35 lea rax, [rbp + 1]
140014c39 mov qword ptr [rdi + 0x30], rax
140014c3d imul r10, r12
140014c41 add r10, r13
140014c44 mov qword ptr [rdi + 0x28], r10
140014c48 mov rax, r10
140014c4b shr rax, 0x1b
140014c4f movzx edx, al
140014c52 mov byte ptr [rdi + 0x278], dl
140014c58 imul rdx, r11
140014c5c xor rdx, rbx
140014c5f xor rdx, r14
140014c62 mov rcx, rdx
140014c65 xor rcx, r8
140014c68 test sil, sil
140014c6b lea rax, [rdx + r8]
140014c6f cmove rax, rcx
140014c73 mov qword ptr [rdi + 0x208], rax
140014c7a cmp r8d, 0x3a9671
140014c81 jne 0x1400157c4
140014c87 mov eax, r15d
140014c8a btr eax, 0x1f
140014c8e cmp eax, 2
140014c91 jae 0x140014cd6
140014c93 imul r10, r12
140014c97 lea rax, [rbp + 2]
140014c9b mov qword ptr [rdi + 0x30], rax
140014c9f add r10, r13
140014ca2 mov qword ptr [rdi + 0x28], r10
140014ca6 shr r10, 0x1b
140014caa movzx eax, r10b
140014cae mov byte ptr [rdi + 0x278], al
140014cb4 imul rax, r11
140014cb8 xor rax, rbx
140014cbb xor rax, r14
140014cbe mov rcx, rax
140014cc1 add rax, 0x2316dd
140014cc7 xor rcx, 0x2316dd
140014cce test sil, sil
140014cd1 jmp 0x1400157b9
140014cd6 mov r9, qword ptr [rdi + 0x210]
140014cdd lea r8, [r14 + r14]
140014ce1 movzx ecx, byte ptr [rdi + 0x279]
140014ce8 mov rax, r9
140014ceb imul rcx, r11
140014cef xor rcx, rbx
140014cf2 xor rcx, r8
140014cf5 xor rax, rcx
140014cf8 sub r9, rcx
140014cfb test sil, sil
140014cfe cmove r9, rax
140014d02 imul r10, r12
140014d06 add r10, r13
140014d09 mov rax, r10
140014d0c shr rax, 0x1b
140014d10 movzx edx, al
140014d13 mov byte ptr [rdi + 0x279], dl
140014d19 imul rdx, r11
140014d1d xor rdx, rbx
140014d20 xor rdx, r8
140014d23 movabs r8, 0xff51afd7ed558ccd
140014d2d mov rcx, rdx
140014d30 xor rcx, r9
140014d33 test sil, sil
140014d36 lea rax, [rdx + r9]
140014d3a cmove rax, rcx
140014d3e mov qword ptr [rdi + 0x210], rax
140014d45 movzx ecx, byte ptr [rdi + 0xf09]
140014d4c mov eax, r9d
140014d4f movabs r9, 0xc4ceb9fe1a85ec53
140014d59 xor rcx, rax
140014d5c xor rcx, qword ptr [rdi + 0x158]
140014d63 mov rax, rcx
140014d66 shr rax, 0x21
140014d6a xor rax, rcx
140014d6d imul rax, r8
140014d71 mov rcx, rax
140014d74 shr rcx, 0x21
140014d78 xor rcx, rax
140014d7b imul rcx, r9
140014d7f mov rdx, rcx
140014d82 shr rdx, 0x21
140014d86 xor rdx, rcx
140014d89 mov qword ptr [rdi + 0x158], rdx
140014d90 xor rdx, qword ptr [rdi + 0xd8]
140014d97 xor rdx, qword ptr [rdi + 0xe0]
140014d9e mov rax, rdx
140014da1 shr rax, 0x21
140014da5 xor rax, rdx
140014da8 imul rax, r8
140014dac lea r8, [r14 + r14*4]
140014db0 mov rcx, rax
140014db3 add r8, r8
140014db6 shr rcx, 0x21
140014dba xor rcx, rax
140014dbd imul rcx, r9
140014dc1 mov rax, rcx
140014dc4 shr rax, 0x21
140014dc8 xor rax, rcx
140014dcb mov qword ptr [rdi + 0xd8], rax
140014dd2 mov rdx, qword ptr [rdi + 0x250]
140014dd9 movzx ecx, byte ptr [rdi + 0x281]
140014de0 imul rcx, r11
140014de4 xor rcx, rbx
140014de7 xor rcx, r8
140014dea mov rax, rcx
140014ded xor rax, rdx
140014df0 sub rdx, rcx
140014df3 test sil, sil
140014df6 cmove rdx, rax
140014dfa lea rax, [rbp + 3]
140014dfe mov qword ptr [rdi + 0x30], rax
140014e02 imul r10, r12
140014e06 add r10, r13
140014e09 mov qword ptr [rdi + 0x28], r10
140014e0d shr r10, 0x1b
140014e11 movzx eax, r10b
140014e15 mov byte ptr [rdi + 0x281], al
140014e1b imul rax, r11
140014e1f xor rax, rbx
140014e22 xor rax, r8
140014e25 mov rcx, rax
140014e28 add rax, rdx
140014e2b xor rcx, rdx
140014e2e test sil, sil
140014e31 cmove rax, rcx
140014e35 mov rcx, rdi
140014e38 mov qword ptr [rdi + 0x250], rax
140014e3f call 0x140005b50
140014e44 mov rdx, qword ptr [rdi + 0x248]
140014e4b movzx ecx, byte ptr [rdi + 0x280]
140014e52 mov r10, qword ptr [rdi + 0x1f8]
140014e59 mov rax, qword ptr [rdi + 0x1f0]
140014e60 mov rbx, qword ptr [rdi + 0x1e8]
140014e67 movzx r9d, byte ptr [rdi + 0x200]
140014e6f imul rcx, r10
140014e73 lea r11, [rax + rax*8]
140014e77 mov rax, rdx
140014e7a xor rcx, r11
140014e7d xor rcx, rbx
140014e80 xor rax, rcx
140014e83 sub rdx, rcx
140014e86 test r9b, r9b
140014e89 cmove rdx, rax
140014e8d mov rax, qword ptr [rdi + 0x28]
140014e91 inc qword ptr [rdi + 0x30]
140014e95 mov rcx, rdx
140014e98 imul rax, r12
140014e9c add rax, r13
140014e9f mov qword ptr [rdi + 0x28], rax
140014ea3 shr rax, 0x1b
140014ea7 movzx r8d, al
140014eab mov byte ptr [rdi + 0x280], r8b
140014eb2 imul r8, r10
140014eb6 xor r8, r11
140014eb9 xor r8, rbx
140014ebc xor rcx, r8
140014ebf test r9b, r9b
140014ec2 lea rax, [rdx + r8]
140014ec6 cmove rax, rcx
140014eca mov rcx, rdi
140014ecd mov qword ptr [rdi + 0x248], rax
140014ed4 call 0x140005b50
140014ed9 mov r9, qword ptr [rdi + 0x210]
140014ee0 movzx ecx, byte ptr [rdi + 0x279]
140014ee7 mov rbx, qword ptr [rdi + 0x1f8]
140014eee mov rsi, qword ptr [rdi + 0x1e8]
140014ef5 movzx ebp, byte ptr [rdi + 0x200]
140014efc mov r10, qword ptr [rdi + 0x28]
140014f00 mov r11, qword ptr [rdi + 0x1f0]
140014f07 imul rcx, rbx
140014f0b lea r8, [r11 + r11]
140014f0f xor rcx, r8
140014f12 xor rcx, rsi
140014f15 mov rax, rcx
140014f18 xor rax, r9
140014f1b sub r9, rcx
140014f1e test bpl, bpl
140014f21 cmove r9, rax
140014f25 inc qword ptr [rdi + 0x30]
140014f29 mov r14, qword ptr [rdi + 0x30]
140014f2d mov rcx, r9
140014f30 imul r10, r12
140014f34 add r10, r13
140014f37 mov qword ptr [rdi + 0x28], r10
140014f3b mov rax, r10
140014f3e shr rax, 0x1b
140014f42 movzx edx, al
140014f45 mov byte ptr [rdi + 0x279], dl
140014f4b imul rdx, rbx
140014f4f xor rdx, r8
140014f52 xor rdx, rsi
140014f55 xor rcx, rdx
140014f58 test bpl, bpl
140014f5b lea rax, [r9 + rdx]
140014f5f cmove rax, rcx
140014f63 mov qword ptr [rdi + 0x210], rax
140014f6a cmp r9d, dword ptr [rdi + 0x1b8]
140014f71 jae 0x140014fa2
140014f73 mov edx, r9d
140014f76 mov rcx, rdi
140014f79 call 0x140005b50
140014f7e mov r11, qword ptr [rdi + 0x1f0]
140014f85 mov r10, qword ptr [rdi + 0x28]
140014f89 mov rbx, qword ptr [rdi + 0x1f8]
140014f90 mov rsi, qword ptr [rdi + 0x1e8]
140014f97 movzx ebp, byte ptr [rdi + 0x200]
140014f9e mov r14, qword ptr [rdi + 0x30]
140014fa2 mov r9, qword ptr [rdi + 0x248]
140014fa9 lea r8, [r11 + r11*8]
140014fad movzx ecx, byte ptr [rdi + 0x280]
140014fb4 mov rax, r9
140014fb7 imul rcx, rbx
140014fbb xor rcx, rsi
140014fbe xor rcx, r8
140014fc1 xor rax, rcx
140014fc4 sub r9, rcx
140014fc7 test bpl, bpl
140014fca cmove r9, rax
140014fce imul r10, r12
140014fd2 add r10, r13
140014fd5 mov rax, r10
140014fd8 shr rax, 0x1b
140014fdc movzx edx, al
140014fdf mov byte ptr [rdi + 0x280], dl
140014fe5 imul rdx, rbx
140014fe9 xor rdx, rsi
140014fec xor rdx, r8
140014fef mov r8d, 0xedba
140014ff5 mov rcx, rdx
140014ff8 xor rcx, r9
140014ffb test bpl, bpl
140014ffe lea rax, [rdx + r9]
140015002 cmove rax, rcx
140015006 mov qword ptr [rdi + 0x248], rax
14001500d lea rax, [r14 + 2]
140015011 mov qword ptr [rdi + 0x30], rax
140015015 lea rax, [r11 + r11*4]
140015019 add rax, rax
14001501c imul r10, r12
140015020 add r10, r13
140015023 mov qword ptr [rdi + 0x28], r10
140015027 shr r10, 0x1b
14001502b movzx edx, r10b
14001502f mov byte ptr [rdi + 0x281], dl
140015035 imul rdx, rbx
140015039 xor rdx, rax
14001503c xor rdx, rsi
14001503f mov rcx, rdx
140015042 xor rcx, r9
140015045 test bpl, bpl
140015048 lea rax, [rdx + r9]
14001504c cmove rax, rcx
140015050 mov rcx, rdi
140015053 mov qword ptr [rdi + 0x250], rax
14001505a movzx edx, byte ptr [rdi + 0xf09]
140015061 xor rdx, qword ptr [rdi + 0xce0]
140015068 call 0x140006770
14001506d mov r8, qword ptr [rdi + 0xce0]
140015074 movabs rbx, 0xff51afd7ed558ccd
14001507e mov rax, r8
140015081 xor rax, qword ptr [rdi + 0xd8]
140015088 mov rcx, rax
14001508b shr rcx, 0x21
14001508f xor rcx, rax
140015092 imul rcx, rbx
140015096 movabs rbx, 0xc4ceb9fe1a85ec53
1400150a0 mov rax, rcx
1400150a3 shr rax, 0x21
1400150a7 xor rax, rcx
1400150aa imul rax, rbx
1400150ae mov rdx, rax
1400150b1 shr rdx, 0x21
1400150b5 xor edx, eax
1400150b7 lea eax, [rdx + 1]
1400150ba mov ecx, eax
1400150bc xor eax, edx
1400150be imul ecx, edx
1400150c1 not ecx
1400150c3 and ecx, eax
1400150c5 test cl, 1
1400150c8 je 0x140015126
1400150ca and r8b, 3
1400150ce cmp r8b, 1
1400150d2 jne 0x140015126
1400150d4 mov rax, qword ptr [rdi + 0x28]
1400150d8 inc qword ptr [rdi + 0x30]
1400150dc imul rax, r12
1400150e0 add rax, r13
1400150e3 mov qword ptr [rdi + 0x28], rax
1400150e7 shr rax, 0x1b
1400150eb movzx eax, al
1400150ee mov byte ptr [rdi + 0x278], al
1400150f4 imul rax, qword ptr [rdi + 0x1f8]
1400150fc xor rax, qword ptr [rdi + 0x1f0]
140015103 xor rax, qword ptr [rdi + 0x1e8]
14001510a mov rcx, rax
14001510d add rax, 0x2b37a3
140015113 xor rcx, 0x2b37a3
14001511a cmp byte ptr [rdi + 0x200], 0
140015121 jmp 0x1400157b9
140015126 mov rbx, qword ptr [rdi + 0x210]
14001512d movzx ecx, byte ptr [rdi + 0x279]
140015134 mov r10, qword ptr [rdi + 0x1f8]
14001513b mov r11, qword ptr [rdi + 0x1e8]
140015142 movzx esi, byte ptr [rdi + 0x200]
140015149 mov r9, qword ptr [rdi + 0x28]
14001514d mov r14, qword ptr [rdi + 0x1f0]
140015154 mov rbp, qword ptr [rdi + 0x30]
140015158 imul rcx, r10
14001515c lea r8, [r14 + r14]
140015160 xor rcx, r8
140015163 xor rcx, r11
140015166 mov rax, rcx
140015169 xor rax, rbx
14001516c sub rbx, rcx
14001516f test sil, sil
140015172 cmove rbx, rax
140015176 inc rbp
140015179 imul r9, r12
14001517d mov qword ptr [rdi + 0x30], rbp
140015181 mov rcx, rbx
140015184 add r9, r13
140015187 mov qword ptr [rdi + 0x28], r9
14001518b mov rax, r9
14001518e shr rax, 0x1b
140015192 movzx edx, al
140015195 mov byte ptr [rdi + 0x279], dl
14001519b imul rdx, r10
14001519f xor rdx, r8
1400151a2 xor rdx, r11
1400151a5 xor rcx, rdx
1400151a8 test sil, sil
1400151ab lea rax, [rbx + rdx]
1400151af cmove rax, rcx
1400151b3 mov qword ptr [rdi + 0x210], rax
1400151ba cmp ebx, dword ptr [rdi + 0x1b8]
1400151c0 jb 0x140015205
1400151c2 imul r9, r12
1400151c6 lea rax, [rbp + 1]
1400151ca mov qword ptr [rdi + 0x30], rax
1400151ce add r9, r13
1400151d1 mov qword ptr [rdi + 0x28], r9
1400151d5 shr r9, 0x1b
1400151d9 movzx eax, r9b
1400151dd mov byte ptr [rdi + 0x278], al
1400151e3 imul rax, r10
1400151e7 xor rax, r11
1400151ea xor rax, r14
1400151ed mov rcx, rax
1400151f0 add rax, 0x2a669
1400151f6 xor rcx, 0x2a669
1400151fd test sil, sil
140015200 jmp 0x1400157b9
140015205 mov edx, ebx
140015207 mov rcx, rdi
14001520a call 0x140007bf0
14001520f movsxd rcx, dword ptr [rdi + 0x154]
140015216 movabs r8, 0xd6e8feb86659fd93
140015220 mov rdx, qword ptr [rdi + 0xd8]
140015227 movabs r11, 0xff51afd7ed558ccd
140015231 imul rcx, r12
140015235 rol rdx, 0x11
140015239 movabs rsi, 0xc4ceb9fe1a85ec53
140015243 xor rcx, qword ptr [rdi + 0x688]
14001524a mov eax, ebx
14001524c imul rax, r8
140015250 mov ebp, ebx
140015252 xor rax, rcx
140015255 xor rax, rdx
140015258 mov rcx, rax
14001525b shr rcx, 0x21
14001525f xor rcx, rax
140015262 imul rcx, r11
140015266 mov rdx, rcx
140015269 shr rdx, 0x21
14001526d xor rdx, rcx
140015270 imul rdx, rsi
140015274 mov rax, rdx
140015277 shr rax, 0x21
14001527b xor rax, rdx
14001527e mov r10, rax
140015281 shr r10, 0x1d
140015285 xor r10, rax
140015288 or r10, 1
14001528c mov rax, r10
14001528f mov qword ptr [rdi + 0x688], r10
140015296 and eax, 0x3ff
14001529b cmp rax, 0x2c5
1400152a1 jne 0x1400152bc
1400152a3 mov rcx, rdi
1400152a6 call 0x14003ebe0
1400152ab mov r10, qword ptr [rdi + 0x688]
1400152b2 movabs r11, 0xff51afd7ed558ccd
1400152bc movzx eax, r10b
1400152c0 and al, 0x1f
1400152c2 cmp al, 0x15
1400152c4 jne 0x1400153b5
1400152ca movsxd rcx, dword ptr [rdi + 0x154]
1400152d1 mov rax, qword ptr [rdi + 0xd8]
1400152d8 xor rcx, 0x5a5a
1400152df rol rax, 0x11
1400152e3 imul rcx, r12
1400152e7 xor rcx, r10
1400152ea xor rcx, rax
1400152ed movabs rax, 0x8f70feda99a6026d
1400152f7 xor rcx, rax
1400152fa mov rax, rcx
1400152fd shr rax, 0x21
140015301 xor rax, rcx
140015304 imul rax, r11
140015308 mov rcx, rax
14001530b shr rcx, 0x21
14001530f xor rcx, rax
140015312 imul rcx, rsi
140015316 mov rax, rcx
140015319 shr rax, 0x21
14001531d xor rax, rcx
140015320 mov r9, rax
140015323 shr r9, 0x1d
140015327 xor r9, rax
14001532a or r9, 1
14001532e mov rax, r9
140015331 mov rcx, r9
140015334 shr rax, 8
140015338 and eax, 3
14001533b shr rcx, 0x28
14001533f imul r8, rax, 0x3e
140015343 mov eax, 0x8421085
140015348 mul ecx
14001534a mov eax, ecx
14001534c sub eax, edx
14001534e shr eax, 1
140015350 add eax, edx
140015352 shr eax, 5
140015355 imul eax, eax, 0x3e
140015358 sub ecx, eax
14001535a mov eax, ecx
14001535c add r8, rax
14001535f mov rax, qword ptr [rdi + 0xf40]
140015366 movsxd rcx, dword ptr [rax + r8*4]
14001536a movsxd rax, dword ptr [rdi + 0xf50]
140015371 xor rcx, rax
140015374 add rcx, qword ptr [rdi + 0xf48]
14001537b xor rcx, r9
14001537e mov rax, rcx
140015381 shr rax, 0x21
140015385 xor rax, rcx
140015388 imul rax, r11
14001538c mov rcx, rax
14001538f shr rcx, 0x21
140015393 xor rcx, rax
140015396 imul rcx, rsi
14001539a mov rax, rcx
14001539d shr rax, 0x21
1400153a1 xor rax, r10
1400153a4 xor rax, rcx
1400153a7 inc qword ptr [rdi + 0x690]
1400153ae mov qword ptr [rdi + 0x688], rax
1400153b5 inc dword ptr [rdi + 0x1194]
1400153bb mov eax, dword ptr [rdi + 0x1194]
1400153c1 cmp eax, dword ptr [rdi + 0x1190]
1400153c7 jb 0x1400153db
1400153c9 mov rcx, rdi
1400153cc mov dword ptr [rdi + 0x1194], 0
1400153d6 call 0x140004930
1400153db mov r8d, ebx
1400153de mov edx, ebx
1400153e0 mov rcx, rdi
1400153e3 call 0x1400058a0
1400153e8 inc qword ptr [rdi + 0x30]
1400153ec mov r9, qword ptr [rdi + 0x28]
1400153f0 imul r9, r12
1400153f4 lea r12d, [rbx + 1]
1400153f8 movabs rbx, 0xff51afd7ed558ccd
140015402 add r9, r13
140015405 mov r13, qword ptr [rdi + 0x30]
140015409 mov qword ptr [rdi + 0x28], r9
14001540d mov rax, r9
140015410 shr rax, 0x1b
140015414 movzx edx, al
140015417 mov byte ptr [rdi + 0x280], dl
14001541d mov r11, qword ptr [rdi + 0x1f8]
140015424 mov r10, qword ptr [rdi + 0x1f0]
14001542b mov rsi, qword ptr [rdi + 0x1e8]
140015432 movzx r14d, byte ptr [rdi + 0x200]
14001543a imul rdx, r11
14001543e lea rax, [r10 + r10*8]
140015442 xor rdx, rax
140015445 xor rdx, rsi
140015448 mov rcx, rdx
14001544b xor rcx, rbp
14001544e test r14b, r14b
140015451 lea rax, [rdx + rbp]
140015455 cmove rax, rcx
140015459 inc r13
14001545c mov qword ptr [rdi + 0x248], rax
140015463 mov rcx, qword ptr [rdi + 0x1b0]
14001546a mov rax, qword ptr [rdi + 0xa8]
140015471 movzx r8d, byte ptr [rcx + rbp]
140015476 mov ecx, r12d
140015479 xor r8b, byte ptr [rax + rbp]
14001547d movabs rax, 0x9e3779b97f4a7c15
140015487 imul r9, rax
14001548b movabs rax, 0x2545f4914f6cdd1d
140015495 mov qword ptr [rdi + 0x30], r13
140015499 add r9, rax
14001549c mov rax, r9
14001549f shr rax, 0x1b
1400154a3 movzx edx, al
1400154a6 lea rax, [r10 + r10]
1400154aa mov byte ptr [rdi + 0x279], dl
1400154b0 imul rdx, r11
1400154b4 xor rdx, rax
1400154b7 xor rdx, rsi
1400154ba xor rcx, rdx
1400154bd test r14b, r14b
1400154c0 lea rax, [r12 + rdx]
1400154c4 cmove rax, rcx
1400154c8 mov qword ptr [rdi + 0x210], rax
1400154cf movsxd rdx, dword ptr [rdi + 0x154]
1400154d6 mov rcx, rdx
1400154d9 xor rcx, qword ptr [rdi + 0xce8]
1400154e0 xor rcx, r12
1400154e3 xor rcx, qword ptr [rdi + 0xce0]
1400154ea xor rcx, qword ptr [rdi + 0xd8]
1400154f1 mov rax, rcx
1400154f4 shr rax, 0x21
1400154f8 xor rax, rcx
1400154fb imul rax, rbx
1400154ff movabs rbx, 0xc4ceb9fe1a85ec53
140015509 mov rcx, rax
14001550c shr rcx, 0x21
140015510 xor rcx, rax
140015513 movzx eax, r8b
140015517 imul rcx, rbx
14001551b xor rax, 0x33
14001551f mov rbx, rcx
140015522 shr rbx, 0x21
140015526 xor rbx, rcx
140015529 lea rcx, [rip - 0x15530]
140015530 movzx ebp, byte ptr [rax + rcx + 0x3dfcb0]
140015538 xor bpl, 0xeb
14001553c mov qword ptr [rdi + 0xe0], rbx
140015543 inc edx
140015545 mov dword ptr [rdi + 0x154], edx
14001554b test dl, 0x1f
14001554e jne 0x1400155a2
140015550 movsxd rax, edx
140015553 xor rax, qword ptr [rdi + 0xce0]
14001555a xor rax, qword ptr [rdi + 0xd8]
140015561 mov rcx, rax
140015564 shr rcx, 0x21
140015568 xor rcx, rax
14001556b movabs rax, 0xff51afd7ed558ccd
140015575 imul rcx, rax
140015579 movabs rax, 0xc4ceb9fe1a85ec53
140015583 mov rdx, rcx
140015586 shr rdx, 0x21
14001558a xor rdx, rcx
14001558d imul rdx, rax
140015591 mov rax, rdx
140015594 shr rax, 0x21
140015598 xor rax, rdx
14001559b mov qword ptr [rdi + 0xce0], rax
1400155a2 movzx r8d, bpl
1400155a6 mov eax, r8d
1400155a9 mov byte ptr [rdi + 0xf09], bpl
1400155b0 xor rax, r12
1400155b3 movabs r12, 0x9e3779b97f4a7c15
1400155bd xor rax, qword ptr [rdi + 0xd8]
1400155c4 mov rcx, rax
1400155c7 shr rcx, 0x21
1400155cb xor rcx, rax
1400155ce movabs rax, 0xff51afd7ed558ccd
1400155d8 imul rcx, rax
1400155dc imul r8, r12
1400155e0 imul r9, r12
1400155e4 mov rdx, rcx
1400155e7 movabs rax, 0xc4ceb9fe1a85ec53
1400155f1 shr rdx, 0x21
1400155f5 xor rdx, rcx
1400155f8 mov ecx, dword ptr [rdi + 0xc]
1400155fb imul rdx, rax
1400155ff mov rax, rdx
140015602 shr rax, 0x21
140015606 xor rax, rdx
140015609 mov qword ptr [rdi + 0xd8], rax
140015610 movabs rax, 0xd6e8feb86659fd93
14001561a imul rcx, rax
14001561e xor rcx, r8
140015621 xor rcx, rbx
140015624 movabs rbx, 0xff51afd7ed558ccd
14001562e mov rax, rcx
140015631 shr rax, 0x21
140015635 xor rax, rcx
140015638 imul rax, rbx
14001563c movabs rbx, 0x2545f4914f6cdd1d
140015646 mov rdx, rax
140015649 add r9, rbx
14001564c shr rdx, 0x21
140015650 xor rdx, rax
140015653 movabs rax, 0xc4ceb9fe1a85ec53
14001565d imul rdx, rax
140015661 lea rax, [r13 + 1]
140015665 shr rdx, 0x21
140015669 and edx, 3
14001566c mov qword ptr [rdi + 0x30], rax
140015670 cmp bpl, 0x3e
140015674 jae 0x14001570a
14001567a inc qword ptr [rdi + 0x80]
140015681 lea rax, [rip - 0x15688]
140015688 mov r8d, dword ptr [rax + rdx*4 + 0x3df8f0]
140015690 mov qword ptr [rdi + 0x28], r9
140015694 shr r9, 0x1b
140015698 movzx eax, r9b
14001569c mov byte ptr [rdi + 0x278], al
1400156a2 imul rax, r11
1400156a6 mov ebx, edx
1400156a8 xor rax, r10
1400156ab xor rax, rsi
1400156ae mov rcx, rax
1400156b1 add rax, r8
1400156b4 xor rcx, r8
1400156b7 movzx r8d, bpl
1400156bb test r14b, r14b
1400156be cmove rax, rcx
1400156c2 mov rcx, rdi
1400156c5 mov qword ptr [rdi + 0x208], rax
1400156cc call 0x1400074d0
1400156d1 mov r8, qword ptr [rsp + 0x70]
1400156d6 lea edx, [r15 - 1]
1400156da mov eax, eax
1400156dc imul rcx, rbx, 0x3e
1400156e0 add rcx, rax
1400156e3 mov rax, qword ptr [rdi + 0xf40]
1400156ea movsxd r9, dword ptr [rax + rcx*4]
1400156ee mov rcx, rdi
1400156f1 movsxd rax, dword ptr [rdi + 0xf50]
1400156f8 xor r9, rax
1400156fb add r9, qword ptr [rdi + 0xf48]
140015702 call r9
140015705 jmp 0x1400157c4
14001570a inc dword ptr [rdi + 0x88]
140015710 mov rax, r9
140015713 shr rax, 0x1b
140015717 movzx ecx, al
14001571a lea rax, [r10*4]
140015722 mov byte ptr [rdi + 0x27b], cl
140015728 imul rcx, r11
14001572c imul r9, r12
140015730 xor rcx, rax
140015733 xor rcx, rsi
140015736 mov qword ptr [rdi + 0x220], rcx
14001573d mov r8, qword ptr [rdi + 0x30]
140015741 add r9, rbx
140015744 mov rax, r9
140015747 shr rax, 0x1b
14001574b movzx edx, al
14001574e mov byte ptr [rdi + 0x282], dl
140015754 imul rax, r10, 0xb
140015758 imul rdx, r11
14001575c xor rdx, rax
14001575f xor rdx, rsi
140015762 mov rcx, rdx
140015765 xor rcx, 1
140015769 test r14b, r14b
14001576c lea rax, [rdx + 1]
140015770 cmove rax, rcx
140015774 mov qword ptr [rdi + 0x258], rax
14001577b lea rax, [r8 + 2]
14001577f mov qword ptr [rdi + 0x30], rax
140015783 imul r9, r12
140015787 add r9, rbx
14001578a mov qword ptr [rdi + 0x28], r9
14001578e shr r9, 0x1b
140015792 movzx eax, r9b
140015796 mov byte ptr [rdi + 0x278], al
14001579c imul rax, r11
1400157a0 xor rax, rsi
1400157a3 xor rax, r10
1400157a6 mov rcx, rax
1400157a9 add rax, 0x2a669
1400157af xor rcx, 0x2a669
1400157b6 test r14b, r14b
1400157b9 cmove rax, rcx
1400157bd mov qword ptr [rdi + 0x208], rax
1400157c4 mov r13, qword ptr [rsp + 0x28]
1400157c9 mov r12, qword ptr [rsp + 0x30]
1400157ce mov rsi, qword ptr [rsp + 0x38]
1400157d3 mov rbp, qword ptr [rsp + 0x68]
1400157d8 mov r14, qword ptr [rsp + 0x20]
1400157dd add rsp, 0x40
1400157e1 pop r15
1400157e3 pop rdi
1400157e4 pop rbx
1400157e5 ret 
1400157e6 mov edx, 0x54485254
1400157eb mov rcx, rdi
1400157ee call 0x1400029a0
1400157f3 int3 
1400157f4 mov edx, 0x43414e59
1400157f9 mov rcx, rdi
1400157fc call 0x1400029a0
140015801 int3 
