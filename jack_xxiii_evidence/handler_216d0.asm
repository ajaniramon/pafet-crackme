1400216d0 mov qword ptr [rsp + 0x20], rbx
1400216d5 mov qword ptr [rsp + 0x18], r8
1400216da mov dword ptr [rsp + 0x10], edx
1400216de push rbp
1400216df push rsi
1400216e0 push rdi
1400216e1 push r12
1400216e3 push r13
1400216e5 push r14
1400216e7 push r15
1400216e9 sub rsp, 0x20
1400216ed movsxd rax, dword ptr [rcx + 0x154]
1400216f4 mov rdi, rcx
1400216f7 mov r15d, edx
1400216fa movabs rcx, 0x974281eb19518d67
140021704 imul rax, rcx
140021708 movabs rcx, 0x351b0b20988f0958
140021712 movabs rbp, 0xff51afd7ed558ccd
14002171c xor rax, qword ptr [rdi + 0xe0]
140021723 movabs r14, 0xc4ceb9fe1a85ec53
14002172d mov qword ptr [rsp + 0x60], rax
140021732 mov rsi, r8
140021735 mov rax, qword ptr [rsp + 0x60]
14002173a movsxd rax, dword ptr [rdi + 0x154]
140021741 imul rax, rcx
140021745 movabs rcx, 0xd3d3957e1bc4854d
14002174f xor rax, qword ptr [rdi + 0xe0]
140021756 mov qword ptr [rsp + 0x60], rax
14002175b mov rax, qword ptr [rsp + 0x60]
140021760 movsxd rax, dword ptr [rdi + 0x154]
140021767 imul rax, rcx
14002176b movabs rcx, 0x65d21f0f11f21de
140021775 xor rax, qword ptr [rdi + 0xe0]
14002177c mov qword ptr [rsp + 0x60], rax
140021781 mov rax, qword ptr [rsp + 0x60]
140021786 mov rax, qword ptr [rdi + 0x108]
14002178d add rax, rcx
140021790 mov rcx, rax
140021793 shr rcx, 0x21
140021797 xor rcx, rax
14002179a imul rcx, rbp
14002179e mov rdx, rcx
1400217a1 shr rdx, 0x21
1400217a5 xor rdx, rcx
1400217a8 mov rcx, rdi
1400217ab imul rdx, r14
1400217af mov rax, rdx
1400217b2 shr rax, 0x21
1400217b6 xor rdx, rax
1400217b9 mov rax, qword ptr [rdi + 0x108]
1400217c0 or rdx, 1
1400217c4 xor rdx, rax
1400217c7 mov qword ptr [rdi + 0x108], rdx
1400217ce call 0x1400071e0
1400217d3 mov rcx, rdi
1400217d6 mov ebx, eax
1400217d8 call 0x140003a50
1400217dd mov rcx, qword ptr [rdi + 0x28]
1400217e1 mov r9, rax
1400217e4 inc qword ptr [rdi + 0x30]
1400217e8 movabs r12, 0x9e3779b97f4a7c15
1400217f2 mov r8d, dword ptr [rdi + 0x1188]
1400217f9 movabs r13, 0x2545f4914f6cdd1d
140021803 movzx r10d, bl
140021807 add r8d, r10d
14002180a mov eax, r10d
14002180d imul rcx, r12
140021811 and r8d, 1
140021815 add rcx, r13
140021818 mov qword ptr [rdi + 0x28], rcx
14002181c shr rcx, 0x1b
140021820 movzx edx, cl
140021823 mov byte ptr [r10 + rdi + 0x69f], dl
14002182b imul rax, qword ptr [rdi + 0x180]
140021833 imul rdx, qword ptr [rdi + 0x18]
140021838 xor rdx, rax
14002183b xor rdx, qword ptr [rdi + 0x178]
140021842 mov rax, rdx
140021845 add rdx, r9
140021848 xor rax, r9
14002184b cmp byte ptr [rdi + 0x118c], 0
140021852 cmove rdx, rax
140021856 mov rax, qword ptr [rdi + 0x1158]
14002185d shl r8d, 8
140021861 add r8d, r10d
140021864 mov qword ptr [rax + r8*8], rdx
140021868 xor r10, qword ptr [rdi + 0x1178]
14002186f xor r10, r9
140021872 mov rax, r10
140021875 shr rax, 0x21
140021879 xor rax, r10
14002187c imul rax, rbp
140021880 mov rcx, rax
140021883 shr rcx, 0x21
140021887 xor rcx, rax
14002188a imul rcx, r14
14002188e mov rax, rcx
140021891 shr rax, 0x21
140021895 xor rax, rcx
140021898 mov qword ptr [rdi + 0x1178], rax
14002189f mov rax, qword ptr [rdi + 0x108]
1400218a6 test r15d, r15d
1400218a9 jns 0x14002252d
1400218af cmp qword ptr [rdi + 0x1170], rsi
1400218b6 jne 0x14002253b
1400218bc movsxd rax, dword ptr [rdi + 0x154]
1400218c3 movabs rcx, 0xaba9161e569fc52d
1400218cd imul rax, rcx
1400218d1 xor rax, qword ptr [rdi + 0xe0]
1400218d8 mov qword ptr [rsp + 0x60], rax
1400218dd mov rax, qword ptr [rsp + 0x60]
1400218e2 mov r8, qword ptr [rdi + 0x258]
1400218e9 movzx ecx, byte ptr [rdi + 0x282]
1400218f0 mov rax, r8
1400218f3 mov r11, qword ptr [rdi + 0x1f8]
1400218fa mov rbx, qword ptr [rdi + 0x1e8]
140021901 movzx esi, byte ptr [rdi + 0x200]
140021908 mov r10, qword ptr [rdi + 0x28]
14002190c mov r14, qword ptr [rdi + 0x1f0]
140021913 mov rbp, qword ptr [rdi + 0x30]
140021917 imul rcx, r11
14002191b imul r9, r14, 0xb
14002191f xor rcx, r9
140021922 xor rcx, rbx
140021925 xor rax, rcx
140021928 sub r8, rcx
14002192b test sil, sil
14002192e cmove r8, rax
140021932 inc rbp
140021935 imul r10, r12
140021939 mov qword ptr [rdi + 0x30], rbp
14002193d add r10, r13
140021940 mov qword ptr [rdi + 0x28], r10
140021944 mov rax, r10
140021947 shr rax, 0x1b
14002194b movzx edx, al
14002194e mov byte ptr [rdi + 0x282], dl
140021954 imul rdx, r11
140021958 xor rdx, r9
14002195b xor rdx, rbx
14002195e mov rcx, rdx
140021961 xor rcx, r8
140021964 test sil, sil
140021967 lea rax, [rdx + r8]
14002196b cmove rax, rcx
14002196f mov qword ptr [rdi + 0x258], rax
140021976 test r8d, r8d
140021979 jne 0x140022518
14002197f cmp dword ptr [rdi + 0x5b8], r8d
140021986 jne 0x140022518
14002198c mov r8, qword ptr [rdi + 0x208]
140021993 movzx ecx, byte ptr [rdi + 0x278]
14002199a mov rax, r8
14002199d imul rcx, r11
1400219a1 xor rcx, rbx
1400219a4 xor rcx, r14
1400219a7 xor rax, rcx
1400219aa sub r8, rcx
1400219ad test sil, sil
1400219b0 cmove r8, rax
1400219b4 lea rax, [rbp + 1]
1400219b8 mov qword ptr [rdi + 0x30], rax
1400219bc mov rcx, r8
1400219bf imul r10, r12
1400219c3 add r10, r13
1400219c6 mov qword ptr [rdi + 0x28], r10
1400219ca mov rax, r10
1400219cd shr rax, 0x1b
1400219d1 movzx edx, al
1400219d4 mov byte ptr [rdi + 0x278], dl
1400219da imul rdx, r11
1400219de xor rdx, rbx
1400219e1 xor rdx, r14
1400219e4 xor rcx, rdx
1400219e7 test sil, sil
1400219ea lea rax, [r8 + rdx]
1400219ee cmove rax, rcx
1400219f2 mov qword ptr [rdi + 0x208], rax
1400219f9 cmp r8d, 0x108ac4
140021a00 jne 0x140022518
140021a06 mov eax, r15d
140021a09 btr eax, 0x1f
140021a0d cmp eax, 2
140021a10 jae 0x140021a55
140021a12 imul r10, r12
140021a16 lea rax, [rbp + 2]
140021a1a mov qword ptr [rdi + 0x30], rax
140021a1e add r10, r13
140021a21 mov qword ptr [rdi + 0x28], r10
140021a25 shr r10, 0x1b
140021a29 movzx eax, r10b
140021a2d mov byte ptr [rdi + 0x278], al
140021a33 imul rax, r11
140021a37 xor rax, rbx
140021a3a xor rax, r14
140021a3d mov rcx, rax
140021a40 add rax, 0x11bd71
140021a46 xor rcx, 0x11bd71
140021a4d test sil, sil
140021a50 jmp 0x14002250d
140021a55 mov r9, qword ptr [rdi + 0x210]
140021a5c lea r8, [r14 + r14]
140021a60 movzx ecx, byte ptr [rdi + 0x279]
140021a67 mov rax, r9
140021a6a imul rcx, r11
140021a6e movabs r15, 0xff51afd7ed558ccd
140021a78 xor rcx, rbx
140021a7b xor rcx, r8
140021a7e xor rax, rcx
140021a81 sub r9, rcx
140021a84 test sil, sil
140021a87 cmove r9, rax
140021a8b imul r10, r12
140021a8f mov rcx, r9
140021a92 add r10, r13
140021a95 mov rax, r10
140021a98 shr rax, 0x1b
140021a9c movzx edx, al
140021a9f mov byte ptr [rdi + 0x279], dl
140021aa5 imul rdx, r11
140021aa9 xor rdx, rbx
140021aac xor rdx, r8
140021aaf movabs r8, 0xc4ceb9fe1a85ec53
140021ab9 xor rcx, rdx
140021abc test sil, sil
140021abf lea rax, [r9 + rdx]
140021ac3 cmove rax, rcx
140021ac7 mov qword ptr [rdi + 0x210], rax
140021ace movzx ecx, byte ptr [rdi + 0xf09]
140021ad5 mov eax, r9d
140021ad8 xor rcx, rax
140021adb xor rcx, qword ptr [rdi + 0x158]
140021ae2 mov rax, rcx
140021ae5 shr rax, 0x21
140021ae9 xor rax, rcx
140021aec imul rax, r15
140021af0 mov rcx, rax
140021af3 shr rcx, 0x21
140021af7 xor rcx, rax
140021afa imul rcx, r8
140021afe mov rdx, rcx
140021b01 shr rdx, 0x21
140021b05 xor rdx, rcx
140021b08 mov qword ptr [rdi + 0x158], rdx
140021b0f xor rdx, qword ptr [rdi + 0xe0]
140021b16 xor rdx, qword ptr [rdi + 0xd8]
140021b1d mov rax, rdx
140021b20 shr rax, 0x21
140021b24 xor rax, rdx
140021b27 imul rax, r15
140021b2b mov rcx, rax
140021b2e shr rcx, 0x21
140021b32 xor rcx, rax
140021b35 imul rcx, r8
140021b39 lea r8, [r14 + r14*4]
140021b3d mov rax, rcx
140021b40 add r8, r8
140021b43 shr rax, 0x21
140021b47 xor rax, rcx
140021b4a mov qword ptr [rdi + 0xd8], rax
140021b51 mov rdx, qword ptr [rdi + 0x250]
140021b58 movzx ecx, byte ptr [rdi + 0x281]
140021b5f mov rax, rdx
140021b62 imul rcx, r11
140021b66 xor rcx, rbx
140021b69 xor rcx, r8
140021b6c xor rax, rcx
140021b6f sub rdx, rcx
140021b72 test sil, sil
140021b75 cmove rdx, rax
140021b79 lea rax, [rbp + 3]
140021b7d mov qword ptr [rdi + 0x30], rax
140021b81 imul r10, r12
140021b85 add r10, r13
140021b88 mov qword ptr [rdi + 0x28], r10
140021b8c shr r10, 0x1b
140021b90 movzx eax, r10b
140021b94 mov byte ptr [rdi + 0x281], al
140021b9a imul rax, r11
140021b9e xor rax, rbx
140021ba1 xor rax, r8
140021ba4 mov rcx, rax
140021ba7 add rax, rdx
140021baa xor rcx, rdx
140021bad test sil, sil
140021bb0 cmove rax, rcx
140021bb4 mov rcx, rdi
140021bb7 mov qword ptr [rdi + 0x250], rax
140021bbe call 0x140005b50
140021bc3 mov rdx, qword ptr [rdi + 0x248]
140021bca movzx ecx, byte ptr [rdi + 0x280]
140021bd1 mov r10, qword ptr [rdi + 0x1f8]
140021bd8 mov rax, qword ptr [rdi + 0x1f0]
140021bdf mov rbx, qword ptr [rdi + 0x1e8]
140021be6 movzx r9d, byte ptr [rdi + 0x200]
140021bee imul rcx, r10
140021bf2 lea r11, [rax + rax*8]
140021bf6 mov rax, rdx
140021bf9 xor rcx, r11
140021bfc xor rcx, rbx
140021bff xor rax, rcx
140021c02 sub rdx, rcx
140021c05 test r9b, r9b
140021c08 cmove rdx, rax
140021c0c mov rax, qword ptr [rdi + 0x28]
140021c10 inc qword ptr [rdi + 0x30]
140021c14 mov rcx, rdx
140021c17 imul rax, r12
140021c1b add rax, r13
140021c1e mov qword ptr [rdi + 0x28], rax
140021c22 shr rax, 0x1b
140021c26 movzx r8d, al
140021c2a mov byte ptr [rdi + 0x280], r8b
140021c31 imul r8, r10
140021c35 xor r8, r11
140021c38 xor r8, rbx
140021c3b xor rcx, r8
140021c3e test r9b, r9b
140021c41 lea rax, [rdx + r8]
140021c45 cmove rax, rcx
140021c49 mov rcx, rdi
140021c4c mov qword ptr [rdi + 0x248], rax
140021c53 call 0x140005b50
140021c58 mov r9, qword ptr [rdi + 0x210]
140021c5f movzx ecx, byte ptr [rdi + 0x279]
140021c66 mov rbx, qword ptr [rdi + 0x1f8]
140021c6d mov rsi, qword ptr [rdi + 0x1e8]
140021c74 movzx ebp, byte ptr [rdi + 0x200]
140021c7b mov r10, qword ptr [rdi + 0x28]
140021c7f mov r11, qword ptr [rdi + 0x1f0]
140021c86 imul rcx, rbx
140021c8a lea r8, [r11 + r11]
140021c8e xor rcx, r8
140021c91 xor rcx, rsi
140021c94 mov rax, rcx
140021c97 xor rax, r9
140021c9a sub r9, rcx
140021c9d test bpl, bpl
140021ca0 cmove r9, rax
140021ca4 inc qword ptr [rdi + 0x30]
140021ca8 mov r14, qword ptr [rdi + 0x30]
140021cac imul r10, r12
140021cb0 add r10, r13
140021cb3 mov qword ptr [rdi + 0x28], r10
140021cb7 mov rax, r10
140021cba shr rax, 0x1b
140021cbe movzx edx, al
140021cc1 mov byte ptr [rdi + 0x279], dl
140021cc7 imul rdx, rbx
140021ccb xor rdx, r8
140021cce xor rdx, rsi
140021cd1 mov rcx, rdx
140021cd4 xor rcx, r9
140021cd7 test bpl, bpl
140021cda lea rax, [rdx + r9]
140021cde cmove rax, rcx
140021ce2 mov qword ptr [rdi + 0x210], rax
140021ce9 cmp r9d, dword ptr [rdi + 0x1b8]
140021cf0 jae 0x140021d21
140021cf2 mov edx, r9d
140021cf5 mov rcx, rdi
140021cf8 call 0x140005b50
140021cfd mov r11, qword ptr [rdi + 0x1f0]
140021d04 mov r10, qword ptr [rdi + 0x28]
140021d08 mov rbx, qword ptr [rdi + 0x1f8]
140021d0f mov rsi, qword ptr [rdi + 0x1e8]
140021d16 movzx ebp, byte ptr [rdi + 0x200]
140021d1d mov r14, qword ptr [rdi + 0x30]
140021d21 mov r9, qword ptr [rdi + 0x248]
140021d28 lea r8, [r11 + r11*8]
140021d2c movzx ecx, byte ptr [rdi + 0x280]
140021d33 mov rax, r9
140021d36 imul rcx, rbx
140021d3a xor rcx, r8
140021d3d xor rcx, rsi
140021d40 xor rax, rcx
140021d43 sub r9, rcx
140021d46 test bpl, bpl
140021d49 cmove r9, rax
140021d4d imul r10, r12
140021d51 add r10, r13
140021d54 mov rax, r10
140021d57 shr rax, 0x1b
140021d5b movzx edx, al
140021d5e mov byte ptr [rdi + 0x280], dl
140021d64 imul rdx, rbx
140021d68 xor rdx, rsi
140021d6b xor rdx, r8
140021d6e mov r8d, 0xb5c4
140021d74 mov rcx, rdx
140021d77 xor rcx, r9
140021d7a test bpl, bpl
140021d7d lea rax, [rdx + r9]
140021d81 cmove rax, rcx
140021d85 mov qword ptr [rdi + 0x248], rax
140021d8c lea rax, [r14 + 2]
140021d90 mov qword ptr [rdi + 0x30], rax
140021d94 lea rax, [r11 + r11*4]
140021d98 add rax, rax
140021d9b imul r10, r12
140021d9f add r10, r13
140021da2 mov qword ptr [rdi + 0x28], r10
140021da6 shr r10, 0x1b
140021daa movzx edx, r10b
140021dae mov byte ptr [rdi + 0x281], dl
140021db4 imul rdx, rbx
140021db8 xor rdx, rax
140021dbb xor rdx, rsi
140021dbe mov rcx, rdx
140021dc1 xor rcx, r9
140021dc4 test bpl, bpl
140021dc7 lea rax, [rdx + r9]
140021dcb cmove rax, rcx
140021dcf mov rcx, rdi
140021dd2 mov qword ptr [rdi + 0x250], rax
140021dd9 movzx edx, byte ptr [rdi + 0xf09]
140021de0 xor rdx, qword ptr [rdi + 0xce0]
140021de7 call 0x140006770
140021dec mov r8, qword ptr [rdi + 0xce0]
140021df3 movabs rbx, 0xc4ceb9fe1a85ec53
140021dfd mov rax, r8
140021e00 xor rax, qword ptr [rdi + 0xd8]
140021e07 mov rcx, rax
140021e0a shr rcx, 0x21
140021e0e xor rcx, rax
140021e11 imul rcx, r15
140021e15 mov rax, rcx
140021e18 shr rax, 0x21
140021e1c xor rax, rcx
140021e1f imul rax, rbx
140021e23 mov rdx, rax
140021e26 shr rdx, 0x21
140021e2a xor edx, eax
140021e2c lea eax, [rdx + 1]
140021e2f mov ecx, eax
140021e31 xor eax, edx
140021e33 imul ecx, edx
140021e36 not ecx
140021e38 and ecx, eax
140021e3a test cl, 1
140021e3d je 0x140021e9b
140021e3f and r8b, 3
140021e43 cmp r8b, 1
140021e47 jne 0x140021e9b
140021e49 mov rax, qword ptr [rdi + 0x28]
140021e4d inc qword ptr [rdi + 0x30]
140021e51 imul rax, r12
140021e55 add rax, r13
140021e58 mov qword ptr [rdi + 0x28], rax
140021e5c shr rax, 0x1b
140021e60 movzx eax, al
140021e63 mov byte ptr [rdi + 0x278], al
140021e69 imul rax, qword ptr [rdi + 0x1f8]
140021e71 xor rax, qword ptr [rdi + 0x1f0]
140021e78 xor rax, qword ptr [rdi + 0x1e8]
140021e7f mov rcx, rax
140021e82 add rax, 0x3cbe2e
140021e88 xor rcx, 0x3cbe2e
140021e8f cmp byte ptr [rdi + 0x200], 0
140021e96 jmp 0x14002250d
140021e9b mov rbx, qword ptr [rdi + 0x210]
140021ea2 movzx ecx, byte ptr [rdi + 0x279]
140021ea9 mov r10, qword ptr [rdi + 0x1f8]
140021eb0 mov r11, qword ptr [rdi + 0x1e8]
140021eb7 movzx esi, byte ptr [rdi + 0x200]
140021ebe mov r9, qword ptr [rdi + 0x28]
140021ec2 mov r14, qword ptr [rdi + 0x1f0]
140021ec9 mov rbp, qword ptr [rdi + 0x30]
140021ecd imul rcx, r10
140021ed1 lea r8, [r14 + r14]
140021ed5 xor rcx, r8
140021ed8 xor rcx, r11
140021edb mov rax, rcx
140021ede xor rax, rbx
140021ee1 sub rbx, rcx
140021ee4 test sil, sil
140021ee7 cmove rbx, rax
140021eeb inc rbp
140021eee imul r9, r12
140021ef2 mov qword ptr [rdi + 0x30], rbp
140021ef6 add r9, r13
140021ef9 mov qword ptr [rdi + 0x28], r9
140021efd mov rax, r9
140021f00 shr rax, 0x1b
140021f04 movzx edx, al
140021f07 mov byte ptr [rdi + 0x279], dl
140021f0d imul rdx, r10
140021f11 xor rdx, r8
140021f14 xor rdx, r11
140021f17 mov rcx, rdx
140021f1a xor rcx, rbx
140021f1d test sil, sil
140021f20 lea rax, [rdx + rbx]
140021f24 cmove rax, rcx
140021f28 mov qword ptr [rdi + 0x210], rax
140021f2f cmp ebx, dword ptr [rdi + 0x1b8]
140021f35 jb 0x140021f7a
140021f37 imul r9, r12
140021f3b lea rax, [rbp + 1]
140021f3f mov qword ptr [rdi + 0x30], rax
140021f43 add r9, r13
140021f46 mov qword ptr [rdi + 0x28], r9
140021f4a shr r9, 0x1b
140021f4e movzx eax, r9b
140021f52 mov byte ptr [rdi + 0x278], al
140021f58 imul rax, r10
140021f5c xor rax, r11
140021f5f xor rax, r14
140021f62 mov rcx, rax
140021f65 add rax, 0x2a669
140021f6b xor rcx, 0x2a669
140021f72 test sil, sil
140021f75 jmp 0x14002250d
140021f7a mov edx, ebx
140021f7c mov rcx, rdi
140021f7f call 0x140007bf0
140021f84 movsxd rcx, dword ptr [rdi + 0x154]
140021f8b movabs r8, 0xd6e8feb86659fd93
140021f95 mov rdx, qword ptr [rdi + 0xd8]
140021f9c movabs r11, 0xc4ceb9fe1a85ec53
140021fa6 imul rcx, r12
140021faa rol rdx, 0x11
140021fae xor rcx, qword ptr [rdi + 0x688]
140021fb5 mov eax, ebx
140021fb7 imul rax, r8
140021fbb mov ebp, ebx
140021fbd xor rax, rcx
140021fc0 xor rax, rdx
140021fc3 mov rcx, rax
140021fc6 shr rcx, 0x21
140021fca xor rcx, rax
140021fcd imul rcx, r15
140021fd1 mov rdx, rcx
140021fd4 shr rdx, 0x21
140021fd8 xor rdx, rcx
140021fdb imul rdx, r11
140021fdf mov rax, rdx
140021fe2 shr rax, 0x21
140021fe6 xor rax, rdx
140021fe9 mov r10, rax
140021fec shr r10, 0x1d
140021ff0 xor r10, rax
140021ff3 or r10, 1
140021ff7 mov rax, r10
140021ffa mov qword ptr [rdi + 0x688], r10
140022001 and eax, 0x3ff
140022006 cmp rax, 0x2c5
14002200c jne 0x140022027
14002200e mov rcx, rdi
140022011 call 0x14003ebe0
140022016 mov r10, qword ptr [rdi + 0x688]
14002201d movabs r11, 0xc4ceb9fe1a85ec53
140022027 movzx eax, r10b
14002202b and al, 0x1f
14002202d cmp al, 0x15
14002202f jne 0x140022120
140022035 movsxd rcx, dword ptr [rdi + 0x154]
14002203c mov rax, qword ptr [rdi + 0xd8]
140022043 xor rcx, 0x5a5a
14002204a rol rax, 0x11
14002204e imul rcx, r12
140022052 xor rcx, r10
140022055 xor rcx, rax
140022058 movabs rax, 0x8f70feda99a6026d
140022062 xor rcx, rax
140022065 mov rax, rcx
140022068 shr rax, 0x21
14002206c xor rax, rcx
14002206f imul rax, r15
140022073 mov rcx, rax
140022076 shr rcx, 0x21
14002207a xor rcx, rax
14002207d imul rcx, r11
140022081 mov rax, rcx
140022084 shr rax, 0x21
140022088 xor rax, rcx
14002208b mov r9, rax
14002208e shr r9, 0x1d
140022092 xor r9, rax
140022095 or r9, 1
140022099 mov rax, r9
14002209c mov rcx, r9
14002209f shr rax, 8
1400220a3 and eax, 3
1400220a6 shr rcx, 0x28
1400220aa imul r8, rax, 0x3e
1400220ae mov eax, 0x8421085
1400220b3 mul ecx
1400220b5 mov eax, ecx
1400220b7 sub eax, edx
1400220b9 shr eax, 1
1400220bb add eax, edx
1400220bd shr eax, 5
1400220c0 imul eax, eax, 0x3e
1400220c3 sub ecx, eax
1400220c5 mov eax, ecx
1400220c7 add r8, rax
1400220ca mov rax, qword ptr [rdi + 0xf40]
1400220d1 movsxd rcx, dword ptr [rax + r8*4]
1400220d5 movsxd rax, dword ptr [rdi + 0xf50]
1400220dc xor rcx, rax
1400220df add rcx, qword ptr [rdi + 0xf48]
1400220e6 xor rcx, r9
1400220e9 mov rax, rcx
1400220ec shr rax, 0x21
1400220f0 xor rax, rcx
1400220f3 imul rax, r15
1400220f7 mov rcx, rax
1400220fa shr rcx, 0x21
1400220fe xor rcx, rax
140022101 imul rcx, r11
140022105 mov rax, rcx
140022108 shr rax, 0x21
14002210c xor rax, r10
14002210f xor rax, rcx
140022112 inc qword ptr [rdi + 0x690]
140022119 mov qword ptr [rdi + 0x688], rax
140022120 inc dword ptr [rdi + 0x1194]
140022126 mov eax, dword ptr [rdi + 0x1194]
14002212c cmp eax, dword ptr [rdi + 0x1190]
140022132 jb 0x140022146
140022134 mov rcx, rdi
140022137 mov dword ptr [rdi + 0x1194], 0
140022141 call 0x140004930
140022146 mov r8d, ebx
140022149 mov edx, ebx
14002214b mov rcx, rdi
14002214e call 0x1400058a0
140022153 inc qword ptr [rdi + 0x30]
140022157 lea r15d, [rbx + 1]
14002215b mov r9, qword ptr [rdi + 0x28]
14002215f movabs rbx, 0xc4ceb9fe1a85ec53
140022169 imul r9, r12
14002216d add r9, r13
140022170 mov r13, qword ptr [rdi + 0x30]
140022174 mov qword ptr [rdi + 0x28], r9
140022178 mov rax, r9
14002217b shr rax, 0x1b
14002217f movzx edx, al
140022182 mov byte ptr [rdi + 0x280], dl
140022188 mov r11, qword ptr [rdi + 0x1f8]
14002218f mov r10, qword ptr [rdi + 0x1f0]
140022196 mov rsi, qword ptr [rdi + 0x1e8]
14002219d movzx r14d, byte ptr [rdi + 0x200]
1400221a5 imul rdx, r11
1400221a9 lea rax, [r10 + r10*8]
1400221ad xor rdx, rax
1400221b0 xor rdx, rsi
1400221b3 mov rcx, rdx
1400221b6 xor rcx, rbp
1400221b9 test r14b, r14b
1400221bc lea rax, [rdx + rbp]
1400221c0 cmove rax, rcx
1400221c4 inc r13
1400221c7 mov qword ptr [rdi + 0x248], rax
1400221ce mov rcx, qword ptr [rdi + 0x1b0]
1400221d5 mov rax, qword ptr [rdi + 0xa8]
1400221dc imul r9, r12
1400221e0 movzx r8d, byte ptr [rcx + rbp]
1400221e5 mov ecx, r15d
1400221e8 xor r8b, byte ptr [rax + rbp]
1400221ec movabs rax, 0x2545f4914f6cdd1d
1400221f6 add r9, rax
1400221f9 mov qword ptr [rdi + 0x30], r13
1400221fd mov rax, r9
140022200 shr rax, 0x1b
140022204 movzx edx, al
140022207 lea rax, [r10 + r10]
14002220b mov byte ptr [rdi + 0x279], dl
140022211 imul rdx, r11
140022215 xor rdx, rax
140022218 xor rdx, rsi
14002221b xor rcx, rdx
14002221e test r14b, r14b
140022221 lea rax, [r15 + rdx]
140022225 cmove rax, rcx
140022229 mov qword ptr [rdi + 0x210], rax
140022230 movsxd rdx, dword ptr [rdi + 0x154]
140022237 mov r12, qword ptr [rdi + 0xd8]
14002223e mov rcx, rdx
140022241 xor rcx, qword ptr [rdi + 0xce8]
140022248 xor rcx, r15
14002224b xor rcx, qword ptr [rdi + 0xce0]
140022252 xor rcx, r12
140022255 mov rax, rcx
140022258 shr rax, 0x21
14002225c xor rax, rcx
14002225f movabs rcx, 0xff51afd7ed558ccd
140022269 imul rax, rcx
14002226d mov rcx, rax
140022270 shr rcx, 0x21
140022274 xor rcx, rax
140022277 movzx eax, r8b
14002227b imul rcx, rbx
14002227f xor rax, 0x33
140022283 mov rbx, rcx
140022286 shr rbx, 0x21
14002228a xor rbx, rcx
14002228d lea rcx, [rip - 0x22294]
140022294 movzx ebp, byte ptr [rax + rcx + 0x3dfcb0]
14002229c xor bpl, 0xeb
1400222a0 mov qword ptr [rdi + 0xe0], rbx
1400222a7 inc edx
1400222a9 mov dword ptr [rdi + 0x154], edx
1400222af test dl, 0x1f
1400222b2 jne 0x140022302
1400222b4 movsxd rax, edx
1400222b7 xor rax, qword ptr [rdi + 0xce0]
1400222be xor rax, r12
1400222c1 mov rcx, rax
1400222c4 shr rcx, 0x21
1400222c8 xor rcx, rax
1400222cb movabs rax, 0xff51afd7ed558ccd
1400222d5 imul rcx, rax
1400222d9 movabs rax, 0xc4ceb9fe1a85ec53
1400222e3 mov rdx, rcx
1400222e6 shr rdx, 0x21
1400222ea xor rdx, rcx
1400222ed imul rdx, rax
1400222f1 mov rax, rdx
1400222f4 shr rax, 0x21
1400222f8 xor rax, rdx
1400222fb mov qword ptr [rdi + 0xce0], rax
140022302 movzx r8d, bpl
140022306 mov eax, r8d
140022309 mov byte ptr [rdi + 0xf09], bpl
140022310 xor rax, r15
140022313 movabs r15, 0x9e3779b97f4a7c15
14002231d xor rax, r12
140022320 movabs r12, 0xff51afd7ed558ccd
14002232a mov rcx, rax
14002232d shr rcx, 0x21
140022331 xor rcx, rax
140022334 movabs rax, 0xc4ceb9fe1a85ec53
14002233e imul rcx, r12
140022342 imul r8, r15
140022346 imul r9, r15
14002234a mov rdx, rcx
14002234d shr rdx, 0x21
140022351 xor rdx, rcx
140022354 mov ecx, dword ptr [rdi + 0xc]
140022357 imul rdx, rax
14002235b mov rax, rdx
14002235e shr rax, 0x21
140022362 xor rax, rdx
140022365 mov qword ptr [rdi + 0xd8], rax
14002236c movabs rax, 0xd6e8feb86659fd93
140022376 imul rcx, rax
14002237a xor rcx, r8
14002237d xor rcx, rbx
140022380 movabs rbx, 0x2545f4914f6cdd1d
14002238a mov rax, rcx
14002238d add r9, rbx
140022390 shr rax, 0x21
140022394 xor rax, rcx
140022397 imul rax, r12
14002239b mov rdx, rax
14002239e shr rdx, 0x21
1400223a2 xor rdx, rax
1400223a5 movabs rax, 0xc4ceb9fe1a85ec53
1400223af imul rdx, rax
1400223b3 lea rax, [r13 + 1]
1400223b7 shr rdx, 0x21
1400223bb and edx, 3
1400223be mov qword ptr [rdi + 0x30], rax
1400223c2 cmp bpl, 0x3e
1400223c6 jae 0x14002245e
1400223cc inc qword ptr [rdi + 0x80]
1400223d3 lea rax, [rip - 0x223da]
1400223da mov r8d, dword ptr [rax + rdx*4 + 0x3df8f0]
1400223e2 mov qword ptr [rdi + 0x28], r9
1400223e6 shr r9, 0x1b
1400223ea movzx eax, r9b
1400223ee mov byte ptr [rdi + 0x278], al
1400223f4 imul rax, r11
1400223f8 mov ebx, edx
1400223fa xor rax, r10
1400223fd xor rax, rsi
140022400 mov rcx, rax
140022403 add rax, r8
140022406 xor rcx, r8
140022409 movzx r8d, bpl
14002240d test r14b, r14b
140022410 cmove rax, rcx
140022414 mov rcx, rdi
140022417 mov qword ptr [rdi + 0x208], rax
14002241e call 0x1400074d0
140022423 mov edx, dword ptr [rsp + 0x68]
140022427 mov r8, qword ptr [rsp + 0x70]
14002242c dec edx
14002242e mov eax, eax
140022430 imul rcx, rbx, 0x3e
140022434 add rcx, rax
140022437 mov rax, qword ptr [rdi + 0xf40]
14002243e movsxd r9, dword ptr [rax + rcx*4]
140022442 mov rcx, rdi
140022445 movsxd rax, dword ptr [rdi + 0xf50]
14002244c xor r9, rax
14002244f add r9, qword ptr [rdi + 0xf48]
140022456 call r9
140022459 jmp 0x140022518
14002245e inc dword ptr [rdi + 0x88]
140022464 mov rax, r9
140022467 shr rax, 0x1b
14002246b movzx ecx, al
14002246e lea rax, [r10*4]
140022476 mov byte ptr [rdi + 0x27b], cl
14002247c imul rcx, r11
140022480 imul r9, r15
140022484 xor rcx, rax
140022487 xor rcx, rsi
14002248a mov qword ptr [rdi + 0x220], rcx
140022491 mov r8, qword ptr [rdi + 0x30]
140022495 add r9, rbx
140022498 mov rax, r9
14002249b shr rax, 0x1b
14002249f movzx edx, al
1400224a2 mov byte ptr [rdi + 0x282], dl
1400224a8 imul rax, r10, 0xb
1400224ac imul rdx, r11
1400224b0 xor rdx, rax
1400224b3 xor rdx, rsi
1400224b6 mov rcx, rdx
1400224b9 xor rcx, 1
1400224bd test r14b, r14b
1400224c0 lea rax, [rdx + 1]
1400224c4 cmove rax, rcx
1400224c8 mov qword ptr [rdi + 0x258], rax
1400224cf lea rax, [r8 + 2]
1400224d3 mov qword ptr [rdi + 0x30], rax
1400224d7 imul r9, r15
1400224db add r9, rbx
1400224de mov qword ptr [rdi + 0x28], r9
1400224e2 shr r9, 0x1b
1400224e6 movzx eax, r9b
1400224ea mov byte ptr [rdi + 0x278], al
1400224f0 imul rax, r11
1400224f4 xor rax, rsi
1400224f7 xor rax, r10
1400224fa mov rcx, rax
1400224fd add rax, 0x2a669
140022503 xor rcx, 0x2a669
14002250a test r14b, r14b
14002250d cmove rax, rcx
140022511 mov qword ptr [rdi + 0x208], rax
140022518 mov rbx, qword ptr [rsp + 0x78]
14002251d add rsp, 0x20
140022521 pop r15
140022523 pop r14
140022525 pop r13
140022527 pop r12
140022529 pop rdi
14002252a pop rsi
14002252b pop rbp
14002252c ret 
14002252d mov edx, 0x54485254
140022532 mov rcx, rdi
140022535 call 0x1400029a0
14002253a int3 
14002253b mov edx, 0x43414e59
140022540 mov rcx, rdi
140022543 call 0x1400029a0
140022548 int3 
