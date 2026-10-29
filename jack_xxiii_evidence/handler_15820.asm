140015820 mov qword ptr [rsp + 0x18], r8
140015825 mov dword ptr [rsp + 0x10], edx
140015829 push rbx
14001582a push rsi
14001582b push rdi
14001582c push r12
14001582e push r13
140015830 push r15
140015832 sub rsp, 0x38
140015836 movsxd rax, dword ptr [rcx + 0x154]
14001583d mov rdi, rcx
140015840 mov r15d, edx
140015843 movabs rcx, 0x34a5a4cbb437c294
14001584d imul rax, rcx
140015851 movabs rcx, 0x96fc2e0035e946ab
14001585b mov rsi, r8
14001585e xor rax, qword ptr [rdi + 0xe0]
140015865 mov qword ptr [rsp + 0x70], rax
14001586a mov rax, qword ptr [rsp + 0x70]
14001586f movsxd rax, dword ptr [rdi + 0x154]
140015876 imul rax, rcx
14001587a movabs rcx, 0x7034b05eb6a2cabe
140015884 xor rax, qword ptr [rdi + 0xe0]
14001588b mov qword ptr [rsp + 0x70], rax
140015890 mov rax, qword ptr [rsp + 0x70]
140015895 movsxd rax, dword ptr [rdi + 0x154]
14001589c imul rax, rcx
1400158a0 movabs rcx, 0x5a45fb2fa38691d3
1400158aa xor rax, qword ptr [rdi + 0xe0]
1400158b1 mov qword ptr [rsp + 0x70], rax
1400158b6 mov rax, qword ptr [rsp + 0x70]
1400158bb mov rax, qword ptr [rdi + 0x110]
1400158c2 sub rax, rcx
1400158c5 mov rcx, rax
1400158c8 shr rcx, 0x21
1400158cc xor rcx, rax
1400158cf movabs rax, 0xff51afd7ed558ccd
1400158d9 imul rcx, rax
1400158dd movabs rax, 0xc4ceb9fe1a85ec53
1400158e7 mov rdx, rcx
1400158ea shr rdx, 0x21
1400158ee xor rdx, rcx
1400158f1 mov rcx, rdi
1400158f4 imul rdx, rax
1400158f8 mov rax, rdx
1400158fb shr rax, 0x21
1400158ff xor rdx, rax
140015902 mov rax, qword ptr [rdi + 0x110]
140015909 or rdx, 1
14001590d xor rdx, rax
140015910 mov qword ptr [rdi + 0x110], rdx
140015917 call 0x140007040
14001591c mov rbx, qword ptr [rdi + 0x210]
140015923 mov r11d, eax
140015926 movzx ecx, byte ptr [rdi + 0x279]
14001592d mov rax, rbx
140015930 mov r9, qword ptr [rdi + 0x1f8]
140015937 movabs r12, 0x9e3779b97f4a7c15
140015941 mov r8, qword ptr [rdi + 0x1e8]
140015948 movabs r13, 0x2545f4914f6cdd1d
140015952 movzx edx, byte ptr [rdi + 0x200]
140015959 mov r10, qword ptr [rdi + 0x1f0]
140015960 imul rcx, r9
140015964 add r10, r10
140015967 xor rcx, r8
14001596a xor rcx, r10
14001596d xor rax, rcx
140015970 sub rbx, rcx
140015973 test dl, dl
140015975 cmove rbx, rax
140015979 mov rax, qword ptr [rdi + 0x28]
14001597d inc qword ptr [rdi + 0x30]
140015981 mov rcx, rbx
140015984 imul rax, r12
140015988 add rax, r13
14001598b mov qword ptr [rdi + 0x28], rax
14001598f shr rax, 0x1b
140015993 movzx eax, al
140015996 mov byte ptr [rdi + 0x279], al
14001599c imul rax, r9
1400159a0 xor rax, r8
1400159a3 xor rax, r10
1400159a6 xor rcx, rax
1400159a9 add rax, rbx
1400159ac test dl, dl
1400159ae cmove rax, rcx
1400159b2 mov ecx, r11d
1400159b5 mov qword ptr [rdi + 0x210], rax
1400159bc call 0x140002330
1400159c1 mov dword ptr [rsp + 0x28], ebx
1400159c5 xor r9d, r9d
1400159c8 mov dword ptr [rsp + 0x20], eax
1400159cc xor edx, edx
1400159ce mov rcx, rdi
1400159d1 lea r8d, [r9 + 1]
1400159d5 call 0x140006300
1400159da mov rdx, rax
1400159dd mov rcx, rdi
1400159e0 call 0x140006010
1400159e5 mov rax, qword ptr [rdi + 0x110]
1400159ec test r15d, r15d
1400159ef jns 0x140016689
1400159f5 cmp qword ptr [rdi + 0x1170], rsi
1400159fc jne 0x140016697
140015a02 movsxd rax, dword ptr [rdi + 0x154]
140015a09 movabs rcx, 0xc0dc23b281d972a8
140015a13 imul rax, rcx
140015a17 mov qword ptr [rsp + 0x88], rbp
140015a1f xor rax, qword ptr [rdi + 0xe0]
140015a26 mov qword ptr [rsp + 0x70], rax
140015a2b mov rax, qword ptr [rsp + 0x70]
140015a30 mov r8, qword ptr [rdi + 0x258]
140015a37 movzx ecx, byte ptr [rdi + 0x282]
140015a3e mov rax, r8
140015a41 mov r11, qword ptr [rdi + 0x1f8]
140015a48 mov rbx, qword ptr [rdi + 0x1e8]
140015a4f movzx esi, byte ptr [rdi + 0x200]
140015a56 mov r10, qword ptr [rdi + 0x28]
140015a5a mov rbp, qword ptr [rdi + 0x30]
140015a5e imul rcx, r11
140015a62 mov qword ptr [rsp + 0x30], r14
140015a67 mov r14, qword ptr [rdi + 0x1f0]
140015a6e imul r9, r14, 0xb
140015a72 xor rcx, r9
140015a75 xor rcx, rbx
140015a78 xor rax, rcx
140015a7b sub r8, rcx
140015a7e test sil, sil
140015a81 cmove r8, rax
140015a85 inc rbp
140015a88 imul r10, r12
140015a8c mov qword ptr [rdi + 0x30], rbp
140015a90 mov rcx, r8
140015a93 add r10, r13
140015a96 mov qword ptr [rdi + 0x28], r10
140015a9a mov rax, r10
140015a9d shr rax, 0x1b
140015aa1 movzx edx, al
140015aa4 mov byte ptr [rdi + 0x282], dl
140015aaa imul rdx, r11
140015aae xor rdx, r9
140015ab1 xor rdx, rbx
140015ab4 xor rcx, rdx
140015ab7 test sil, sil
140015aba lea rax, [r8 + rdx]
140015abe cmove rax, rcx
140015ac2 mov qword ptr [rdi + 0x258], rax
140015ac9 test r8d, r8d
140015acc jne 0x14001666e
140015ad2 cmp dword ptr [rdi + 0x5b8], r8d
140015ad9 jne 0x14001666e
140015adf mov r8, qword ptr [rdi + 0x208]
140015ae6 movzx ecx, byte ptr [rdi + 0x278]
140015aed mov rax, r8
140015af0 imul rcx, r11
140015af4 xor rcx, rbx
140015af7 xor rcx, r14
140015afa xor rax, rcx
140015afd sub r8, rcx
140015b00 test sil, sil
140015b03 cmove r8, rax
140015b07 lea rax, [rbp + 1]
140015b0b mov qword ptr [rdi + 0x30], rax
140015b0f imul r10, r12
140015b13 add r10, r13
140015b16 mov qword ptr [rdi + 0x28], r10
140015b1a mov rax, r10
140015b1d shr rax, 0x1b
140015b21 movzx edx, al
140015b24 mov byte ptr [rdi + 0x278], dl
140015b2a imul rdx, r11
140015b2e xor rdx, rbx
140015b31 xor rdx, r14
140015b34 mov rcx, rdx
140015b37 xor rcx, r8
140015b3a test sil, sil
140015b3d lea rax, [rdx + r8]
140015b41 cmove rax, rcx
140015b45 mov qword ptr [rdi + 0x208], rax
140015b4c cmp r8d, 0x108ac4
140015b53 jne 0x14001666e
140015b59 mov eax, r15d
140015b5c btr eax, 0x1f
140015b60 cmp eax, 2
140015b63 jae 0x140015ba8
140015b65 imul r10, r12
140015b69 lea rax, [rbp + 2]
140015b6d mov qword ptr [rdi + 0x30], rax
140015b71 add r10, r13
140015b74 mov qword ptr [rdi + 0x28], r10
140015b78 shr r10, 0x1b
140015b7c movzx eax, r10b
140015b80 mov byte ptr [rdi + 0x278], al
140015b86 imul rax, r11
140015b8a xor rax, rbx
140015b8d xor rax, r14
140015b90 mov rcx, rax
140015b93 add rax, 0x11bd71
140015b99 xor rcx, 0x11bd71
140015ba0 test sil, sil
140015ba3 jmp 0x140016663
140015ba8 mov r9, qword ptr [rdi + 0x210]
140015baf lea r8, [r14 + r14]
140015bb3 movzx ecx, byte ptr [rdi + 0x279]
140015bba movabs r15, 0xff51afd7ed558ccd
140015bc4 imul rcx, r11
140015bc8 xor rcx, rbx
140015bcb xor rcx, r8
140015bce mov rax, rcx
140015bd1 xor rax, r9
140015bd4 sub r9, rcx
140015bd7 test sil, sil
140015bda cmove r9, rax
140015bde imul r10, r12
140015be2 add r10, r13
140015be5 mov rax, r10
140015be8 shr rax, 0x1b
140015bec movzx edx, al
140015bef mov byte ptr [rdi + 0x279], dl
140015bf5 imul rdx, r11
140015bf9 xor rdx, rbx
140015bfc xor rdx, r8
140015bff movabs r8, 0xc4ceb9fe1a85ec53
140015c09 mov rcx, rdx
140015c0c xor rcx, r9
140015c0f test sil, sil
140015c12 lea rax, [rdx + r9]
140015c16 cmove rax, rcx
140015c1a mov ecx, r9d
140015c1d mov qword ptr [rdi + 0x210], rax
140015c24 movzx eax, byte ptr [rdi + 0xf09]
140015c2b xor rcx, rax
140015c2e xor rcx, qword ptr [rdi + 0x158]
140015c35 mov rax, rcx
140015c38 shr rax, 0x21
140015c3c xor rax, rcx
140015c3f imul rax, r15
140015c43 mov rcx, rax
140015c46 shr rcx, 0x21
140015c4a xor rcx, rax
140015c4d imul rcx, r8
140015c51 mov rdx, rcx
140015c54 shr rdx, 0x21
140015c58 xor rdx, rcx
140015c5b mov qword ptr [rdi + 0x158], rdx
140015c62 xor rdx, qword ptr [rdi + 0xe0]
140015c69 xor rdx, qword ptr [rdi + 0xd8]
140015c70 mov rax, rdx
140015c73 shr rax, 0x21
140015c77 xor rax, rdx
140015c7a imul rax, r15
140015c7e mov rcx, rax
140015c81 shr rcx, 0x21
140015c85 xor rcx, rax
140015c88 imul rcx, r8
140015c8c lea r8, [r14 + r14*4]
140015c90 mov rax, rcx
140015c93 add r8, r8
140015c96 shr rax, 0x21
140015c9a xor rax, rcx
140015c9d mov qword ptr [rdi + 0xd8], rax
140015ca4 mov rdx, qword ptr [rdi + 0x250]
140015cab movzx ecx, byte ptr [rdi + 0x281]
140015cb2 mov rax, rdx
140015cb5 imul rcx, r11
140015cb9 xor rcx, rbx
140015cbc xor rcx, r8
140015cbf xor rax, rcx
140015cc2 sub rdx, rcx
140015cc5 test sil, sil
140015cc8 cmove rdx, rax
140015ccc lea rax, [rbp + 3]
140015cd0 mov qword ptr [rdi + 0x30], rax
140015cd4 imul r10, r12
140015cd8 add r10, r13
140015cdb mov qword ptr [rdi + 0x28], r10
140015cdf shr r10, 0x1b
140015ce3 movzx eax, r10b
140015ce7 mov byte ptr [rdi + 0x281], al
140015ced imul rax, r11
140015cf1 xor rax, rbx
140015cf4 xor rax, r8
140015cf7 mov rcx, rdx
140015cfa xor rcx, rax
140015cfd add rax, rdx
140015d00 test sil, sil
140015d03 cmove rax, rcx
140015d07 mov rcx, rdi
140015d0a mov qword ptr [rdi + 0x250], rax
140015d11 call 0x140005b50
140015d16 mov rdx, qword ptr [rdi + 0x248]
140015d1d movzx ecx, byte ptr [rdi + 0x280]
140015d24 mov r10, qword ptr [rdi + 0x1f8]
140015d2b mov rax, qword ptr [rdi + 0x1f0]
140015d32 mov rbx, qword ptr [rdi + 0x1e8]
140015d39 movzx r9d, byte ptr [rdi + 0x200]
140015d41 imul rcx, r10
140015d45 lea r11, [rax + rax*8]
140015d49 mov rax, rdx
140015d4c xor rcx, r11
140015d4f xor rcx, rbx
140015d52 xor rax, rcx
140015d55 sub rdx, rcx
140015d58 test r9b, r9b
140015d5b cmove rdx, rax
140015d5f mov rax, qword ptr [rdi + 0x28]
140015d63 inc qword ptr [rdi + 0x30]
140015d67 imul rax, r12
140015d6b add rax, r13
140015d6e mov qword ptr [rdi + 0x28], rax
140015d72 shr rax, 0x1b
140015d76 movzx r8d, al
140015d7a mov byte ptr [rdi + 0x280], r8b
140015d81 imul r8, r10
140015d85 xor r8, r11
140015d88 xor r8, rbx
140015d8b mov rcx, r8
140015d8e xor rcx, rdx
140015d91 test r9b, r9b
140015d94 lea rax, [r8 + rdx]
140015d98 cmove rax, rcx
140015d9c mov rcx, rdi
140015d9f mov qword ptr [rdi + 0x248], rax
140015da6 call 0x140005b50
140015dab mov r9, qword ptr [rdi + 0x210]
140015db2 movzx ecx, byte ptr [rdi + 0x279]
140015db9 mov rax, r9
140015dbc mov rbx, qword ptr [rdi + 0x1f8]
140015dc3 mov rsi, qword ptr [rdi + 0x1e8]
140015dca movzx ebp, byte ptr [rdi + 0x200]
140015dd1 mov r10, qword ptr [rdi + 0x28]
140015dd5 mov r11, qword ptr [rdi + 0x1f0]
140015ddc imul rcx, rbx
140015de0 lea r8, [r11 + r11]
140015de4 xor rcx, rsi
140015de7 xor rcx, r8
140015dea xor rax, rcx
140015ded sub r9, rcx
140015df0 test bpl, bpl
140015df3 cmove r9, rax
140015df7 inc qword ptr [rdi + 0x30]
140015dfb mov r14, qword ptr [rdi + 0x30]
140015dff imul r10, r12
140015e03 add r10, r13
140015e06 mov qword ptr [rdi + 0x28], r10
140015e0a mov rax, r10
140015e0d shr rax, 0x1b
140015e11 movzx edx, al
140015e14 mov byte ptr [rdi + 0x279], dl
140015e1a imul rdx, rbx
140015e1e xor rdx, rsi
140015e21 xor rdx, r8
140015e24 mov rcx, rdx
140015e27 xor rcx, r9
140015e2a test bpl, bpl
140015e2d lea rax, [rdx + r9]
140015e31 cmove rax, rcx
140015e35 mov qword ptr [rdi + 0x210], rax
140015e3c cmp r9d, dword ptr [rdi + 0x1b8]
140015e43 jae 0x140015e74
140015e45 mov edx, r9d
140015e48 mov rcx, rdi
140015e4b call 0x140005b50
140015e50 mov r11, qword ptr [rdi + 0x1f0]
140015e57 mov r10, qword ptr [rdi + 0x28]
140015e5b mov rbx, qword ptr [rdi + 0x1f8]
140015e62 mov rsi, qword ptr [rdi + 0x1e8]
140015e69 movzx ebp, byte ptr [rdi + 0x200]
140015e70 mov r14, qword ptr [rdi + 0x30]
140015e74 mov r9, qword ptr [rdi + 0x248]
140015e7b lea r8, [r11 + r11*8]
140015e7f movzx ecx, byte ptr [rdi + 0x280]
140015e86 mov rax, r9
140015e89 imul rcx, rbx
140015e8d xor rcx, r8
140015e90 xor rcx, rsi
140015e93 xor rax, rcx
140015e96 sub r9, rcx
140015e99 test bpl, bpl
140015e9c cmove r9, rax
140015ea0 imul r10, r12
140015ea4 add r10, r13
140015ea7 mov rax, r10
140015eaa shr rax, 0x1b
140015eae movzx edx, al
140015eb1 mov byte ptr [rdi + 0x280], dl
140015eb7 imul rdx, rbx
140015ebb xor rdx, rsi
140015ebe xor rdx, r8
140015ec1 mov r8d, 0x8068
140015ec7 mov rcx, rdx
140015eca xor rcx, r9
140015ecd test bpl, bpl
140015ed0 lea rax, [rdx + r9]
140015ed4 cmove rax, rcx
140015ed8 mov qword ptr [rdi + 0x248], rax
140015edf lea rax, [r14 + 2]
140015ee3 mov qword ptr [rdi + 0x30], rax
140015ee7 lea rax, [r11 + r11*4]
140015eeb add rax, rax
140015eee imul r10, r12
140015ef2 add r10, r13
140015ef5 mov qword ptr [rdi + 0x28], r10
140015ef9 shr r10, 0x1b
140015efd movzx edx, r10b
140015f01 mov byte ptr [rdi + 0x281], dl
140015f07 imul rdx, rbx
140015f0b xor rdx, rax
140015f0e xor rdx, rsi
140015f11 mov rcx, rdx
140015f14 xor rcx, r9
140015f17 test bpl, bpl
140015f1a lea rax, [rdx + r9]
140015f1e cmove rax, rcx
140015f22 mov rcx, rdi
140015f25 mov qword ptr [rdi + 0x250], rax
140015f2c movzx edx, byte ptr [rdi + 0xf09]
140015f33 xor rdx, qword ptr [rdi + 0xce0]
140015f3a call 0x140006770
140015f3f mov r8, qword ptr [rdi + 0xce0]
140015f46 movabs rbx, 0xc4ceb9fe1a85ec53
140015f50 mov rax, r8
140015f53 xor rax, qword ptr [rdi + 0xd8]
140015f5a mov rcx, rax
140015f5d shr rcx, 0x21
140015f61 xor rcx, rax
140015f64 imul rcx, r15
140015f68 mov rax, rcx
140015f6b shr rax, 0x21
140015f6f xor rax, rcx
140015f72 imul rax, rbx
140015f76 mov rdx, rax
140015f79 shr rdx, 0x21
140015f7d xor edx, eax
140015f7f mov ecx, edx
140015f81 lea eax, [rdx + 1]
140015f84 imul ecx, eax
140015f87 xor edx, eax
140015f89 not ecx
140015f8b and ecx, edx
140015f8d test cl, 1
140015f90 je 0x140015fee
140015f92 and r8b, 3
140015f96 cmp r8b, 1
140015f9a jne 0x140015fee
140015f9c mov rax, qword ptr [rdi + 0x28]
140015fa0 inc qword ptr [rdi + 0x30]
140015fa4 imul rax, r12
140015fa8 add rax, r13
140015fab mov qword ptr [rdi + 0x28], rax
140015faf shr rax, 0x1b
140015fb3 movzx eax, al
140015fb6 mov byte ptr [rdi + 0x278], al
140015fbc imul rax, qword ptr [rdi + 0x1f8]
140015fc4 xor rax, qword ptr [rdi + 0x1e8]
140015fcb xor rax, qword ptr [rdi + 0x1f0]
140015fd2 mov rcx, rax
140015fd5 add rax, 0x3cbe2e
140015fdb xor rcx, 0x3cbe2e
140015fe2 cmp byte ptr [rdi + 0x200], 0
140015fe9 jmp 0x140016663
140015fee mov rbx, qword ptr [rdi + 0x210]
140015ff5 movzx ecx, byte ptr [rdi + 0x279]
140015ffc mov rax, rbx
140015fff mov r10, qword ptr [rdi + 0x1f8]
140016006 mov r11, qword ptr [rdi + 0x1e8]
14001600d movzx esi, byte ptr [rdi + 0x200]
140016014 mov r9, qword ptr [rdi + 0x28]
140016018 mov rbp, qword ptr [rdi + 0x30]
14001601c mov r14, qword ptr [rdi + 0x1f0]
140016023 imul rcx, r10
140016027 lea r8, [r14 + r14]
14001602b xor rcx, r11
14001602e xor rcx, r8
140016031 xor rax, rcx
140016034 sub rbx, rcx
140016037 test sil, sil
14001603a cmove rbx, rax
14001603e inc rbp
140016041 imul r9, r12
140016045 mov qword ptr [rdi + 0x30], rbp
140016049 mov rcx, rbx
14001604c add r9, r13
14001604f mov qword ptr [rdi + 0x28], r9
140016053 mov rax, r9
140016056 shr rax, 0x1b
14001605a movzx edx, al
14001605d mov byte ptr [rdi + 0x279], dl
140016063 imul rdx, r10
140016067 xor rdx, r11
14001606a xor rdx, r8
14001606d xor rcx, rdx
140016070 test sil, sil
140016073 lea rax, [rbx + rdx]
140016077 cmove rax, rcx
14001607b mov qword ptr [rdi + 0x210], rax
140016082 cmp ebx, dword ptr [rdi + 0x1b8]
140016088 jb 0x1400160cd
14001608a imul r9, r12
14001608e lea rax, [rbp + 1]
140016092 mov qword ptr [rdi + 0x30], rax
140016096 add r9, r13
140016099 mov qword ptr [rdi + 0x28], r9
14001609d shr r9, 0x1b
1400160a1 movzx eax, r9b
1400160a5 mov byte ptr [rdi + 0x278], al
1400160ab imul rax, r10
1400160af xor rax, r11
1400160b2 xor rax, r14
1400160b5 mov rcx, rax
1400160b8 add rax, 0x2a669
1400160be xor rcx, 0x2a669
1400160c5 test sil, sil
1400160c8 jmp 0x140016663
1400160cd mov edx, ebx
1400160cf mov rcx, rdi
1400160d2 call 0x140007bf0
1400160d7 movsxd rcx, dword ptr [rdi + 0x154]
1400160de movabs r8, 0xd6e8feb86659fd93
1400160e8 mov rdx, qword ptr [rdi + 0xd8]
1400160ef movabs r11, 0xc4ceb9fe1a85ec53
1400160f9 imul rcx, r12
1400160fd rol rdx, 0x11
140016101 xor rcx, qword ptr [rdi + 0x688]
140016108 mov eax, ebx
14001610a imul rax, r8
14001610e mov ebp, ebx
140016110 xor rax, rcx
140016113 xor rax, rdx
140016116 mov rcx, rax
140016119 shr rcx, 0x21
14001611d xor rcx, rax
140016120 imul rcx, r15
140016124 mov rdx, rcx
140016127 shr rdx, 0x21
14001612b xor rdx, rcx
14001612e imul rdx, r11
140016132 mov rax, rdx
140016135 shr rax, 0x21
140016139 xor rax, rdx
14001613c mov r10, rax
14001613f shr r10, 0x1d
140016143 xor r10, rax
140016146 or r10, 1
14001614a mov rax, r10
14001614d mov qword ptr [rdi + 0x688], r10
140016154 and eax, 0x3ff
140016159 cmp rax, 0x2c5
14001615f jne 0x14001617a
140016161 mov rcx, rdi
140016164 call 0x14003ebe0
140016169 mov r10, qword ptr [rdi + 0x688]
140016170 movabs r11, 0xc4ceb9fe1a85ec53
14001617a movzx eax, r10b
14001617e and al, 0x1f
140016180 cmp al, 0x15
140016182 jne 0x140016273
140016188 movsxd rcx, dword ptr [rdi + 0x154]
14001618f mov rax, qword ptr [rdi + 0xd8]
140016196 xor rcx, 0x5a5a
14001619d rol rax, 0x11
1400161a1 imul rcx, r12
1400161a5 xor rcx, r10
1400161a8 xor rcx, rax
1400161ab movabs rax, 0x8f70feda99a6026d
1400161b5 xor rcx, rax
1400161b8 mov rax, rcx
1400161bb shr rax, 0x21
1400161bf xor rax, rcx
1400161c2 imul rax, r15
1400161c6 mov rcx, rax
1400161c9 shr rcx, 0x21
1400161cd xor rcx, rax
1400161d0 imul rcx, r11
1400161d4 mov rax, rcx
1400161d7 shr rax, 0x21
1400161db xor rax, rcx
1400161de mov r9, rax
1400161e1 shr r9, 0x1d
1400161e5 xor r9, rax
1400161e8 or r9, 1
1400161ec mov rax, r9
1400161ef mov rcx, r9
1400161f2 shr rax, 8
1400161f6 and eax, 3
1400161f9 shr rcx, 0x28
1400161fd imul r8, rax, 0x3e
140016201 mov eax, 0x8421085
140016206 mul ecx
140016208 mov eax, ecx
14001620a sub eax, edx
14001620c shr eax, 1
14001620e add eax, edx
140016210 shr eax, 5
140016213 imul eax, eax, 0x3e
140016216 sub ecx, eax
140016218 mov eax, ecx
14001621a add r8, rax
14001621d mov rax, qword ptr [rdi + 0xf40]
140016224 movsxd rcx, dword ptr [rax + r8*4]
140016228 movsxd rax, dword ptr [rdi + 0xf50]
14001622f xor rcx, rax
140016232 add rcx, qword ptr [rdi + 0xf48]
140016239 xor rcx, r9
14001623c mov rax, rcx
14001623f shr rax, 0x21
140016243 xor rax, rcx
140016246 imul rax, r15
14001624a mov rcx, rax
14001624d shr rcx, 0x21
140016251 xor rcx, rax
140016254 imul rcx, r11
140016258 mov rax, rcx
14001625b shr rax, 0x21
14001625f xor rax, r10
140016262 xor rax, rcx
140016265 inc qword ptr [rdi + 0x690]
14001626c mov qword ptr [rdi + 0x688], rax
140016273 inc dword ptr [rdi + 0x1194]
140016279 mov eax, dword ptr [rdi + 0x1194]
14001627f cmp eax, dword ptr [rdi + 0x1190]
140016285 jb 0x140016299
140016287 mov rcx, rdi
14001628a mov dword ptr [rdi + 0x1194], 0
140016294 call 0x140004930
140016299 mov r8d, ebx
14001629c mov edx, ebx
14001629e mov rcx, rdi
1400162a1 call 0x1400058a0
1400162a6 inc qword ptr [rdi + 0x30]
1400162aa lea r15d, [rbx + 1]
1400162ae mov r9, qword ptr [rdi + 0x28]
1400162b2 movabs rbx, 0xc4ceb9fe1a85ec53
1400162bc imul r9, r12
1400162c0 add r9, r13
1400162c3 mov r13, qword ptr [rdi + 0x30]
1400162c7 mov qword ptr [rdi + 0x28], r9
1400162cb mov rax, r9
1400162ce shr rax, 0x1b
1400162d2 movzx edx, al
1400162d5 mov byte ptr [rdi + 0x280], dl
1400162db mov r11, qword ptr [rdi + 0x1f8]
1400162e2 mov r10, qword ptr [rdi + 0x1f0]
1400162e9 mov rsi, qword ptr [rdi + 0x1e8]
1400162f0 movzx r14d, byte ptr [rdi + 0x200]
1400162f8 imul rdx, r11
1400162fc lea rax, [r10 + r10*8]
140016300 xor rdx, rax
140016303 xor rdx, rsi
140016306 mov rcx, rdx
140016309 xor rcx, rbp
14001630c test r14b, r14b
14001630f lea rax, [rdx + rbp]
140016313 cmove rax, rcx
140016317 inc r13
14001631a mov qword ptr [rdi + 0x248], rax
140016321 mov rcx, qword ptr [rdi + 0x1b0]
140016328 mov rax, qword ptr [rdi + 0xa8]
14001632f imul r9, r12
140016333 movzx r8d, byte ptr [rcx + rbp]
140016338 mov ecx, r15d
14001633b xor r8b, byte ptr [rax + rbp]
14001633f movabs rax, 0x2545f4914f6cdd1d
140016349 add r9, rax
14001634c mov qword ptr [rdi + 0x30], r13
140016350 mov rax, r9
140016353 shr rax, 0x1b
140016357 movzx edx, al
14001635a lea rax, [r10 + r10]
14001635e mov byte ptr [rdi + 0x279], dl
140016364 imul rdx, r11
140016368 xor rdx, rax
14001636b xor rdx, rsi
14001636e xor rcx, rdx
140016371 test r14b, r14b
140016374 lea rax, [r15 + rdx]
140016378 cmove rax, rcx
14001637c mov qword ptr [rdi + 0x210], rax
140016383 movsxd rdx, dword ptr [rdi + 0x154]
14001638a mov r12, qword ptr [rdi + 0xd8]
140016391 mov rcx, rdx
140016394 xor rcx, qword ptr [rdi + 0xce8]
14001639b xor rcx, r15
14001639e xor rcx, qword ptr [rdi + 0xce0]
1400163a5 xor rcx, r12
1400163a8 mov rax, rcx
1400163ab shr rax, 0x21
1400163af xor rax, rcx
1400163b2 movabs rcx, 0xff51afd7ed558ccd
1400163bc imul rax, rcx
1400163c0 mov rcx, rax
1400163c3 shr rcx, 0x21
1400163c7 xor rcx, rax
1400163ca movzx eax, r8b
1400163ce imul rcx, rbx
1400163d2 xor rax, 0x33
1400163d6 mov rbx, rcx
1400163d9 shr rbx, 0x21
1400163dd xor rbx, rcx
1400163e0 lea rcx, [rip - 0x163e7]
1400163e7 movzx ebp, byte ptr [rax + rcx + 0x3dfcb0]
1400163ef xor bpl, 0xeb
1400163f3 mov qword ptr [rdi + 0xe0], rbx
1400163fa inc edx
1400163fc mov dword ptr [rdi + 0x154], edx
140016402 test dl, 0x1f
140016405 jne 0x140016455
140016407 movsxd rax, edx
14001640a xor rax, qword ptr [rdi + 0xce0]
140016411 xor rax, r12
140016414 mov rcx, rax
140016417 shr rcx, 0x21
14001641b xor rcx, rax
14001641e movabs rax, 0xff51afd7ed558ccd
140016428 imul rcx, rax
14001642c movabs rax, 0xc4ceb9fe1a85ec53
140016436 mov rdx, rcx
140016439 shr rdx, 0x21
14001643d xor rdx, rcx
140016440 imul rdx, rax
140016444 mov rax, rdx
140016447 shr rax, 0x21
14001644b xor rax, rdx
14001644e mov qword ptr [rdi + 0xce0], rax
140016455 movzx r8d, bpl
140016459 mov eax, r8d
14001645c mov byte ptr [rdi + 0xf09], bpl
140016463 xor rax, r15
140016466 movabs r15, 0x9e3779b97f4a7c15
140016470 xor rax, r12
140016473 movabs r12, 0xff51afd7ed558ccd
14001647d mov rcx, rax
140016480 shr rcx, 0x21
140016484 xor rcx, rax
140016487 movabs rax, 0xc4ceb9fe1a85ec53
140016491 imul rcx, r12
140016495 imul r8, r15
140016499 imul r9, r15
14001649d mov rdx, rcx
1400164a0 shr rdx, 0x21
1400164a4 xor rdx, rcx
1400164a7 mov ecx, dword ptr [rdi + 0xc]
1400164aa imul rdx, rax
1400164ae mov rax, rdx
1400164b1 shr rax, 0x21
1400164b5 xor rax, rdx
1400164b8 mov qword ptr [rdi + 0xd8], rax
1400164bf movabs rax, 0xd6e8feb86659fd93
1400164c9 imul rcx, rax
1400164cd xor rcx, r8
1400164d0 xor rcx, rbx
1400164d3 movabs rbx, 0x2545f4914f6cdd1d
1400164dd mov rax, rcx
1400164e0 add r9, rbx
1400164e3 shr rax, 0x21
1400164e7 xor rax, rcx
1400164ea imul rax, r12
1400164ee mov rdx, rax
1400164f1 shr rdx, 0x21
1400164f5 xor rdx, rax
1400164f8 movabs rax, 0xc4ceb9fe1a85ec53
140016502 imul rdx, rax
140016506 lea rax, [r13 + 1]
14001650a shr rdx, 0x21
14001650e and edx, 3
140016511 mov qword ptr [rdi + 0x30], rax
140016515 cmp bpl, 0x3e
140016519 jae 0x1400165b4
14001651f inc qword ptr [rdi + 0x80]
140016526 lea rax, [rip - 0x1652d]
14001652d mov r8d, dword ptr [rax + rdx*4 + 0x3df8f0]
140016535 mov qword ptr [rdi + 0x28], r9
140016539 shr r9, 0x1b
14001653d movzx eax, r9b
140016541 mov byte ptr [rdi + 0x278], al
140016547 imul rax, r11
14001654b mov ebx, edx
14001654d xor rax, rsi
140016550 xor rax, r10
140016553 mov rcx, rax
140016556 add rax, r8
140016559 xor rcx, r8
14001655c movzx r8d, bpl
140016560 test r14b, r14b
140016563 cmove rax, rcx
140016567 mov rcx, rdi
14001656a mov qword ptr [rdi + 0x208], rax
140016571 call 0x1400074d0
140016576 mov edx, dword ptr [rsp + 0x78]
14001657a mov r8, qword ptr [rsp + 0x80]
140016582 dec edx
140016584 mov eax, eax
140016586 imul rcx, rbx, 0x3e
14001658a add rcx, rax
14001658d mov rax, qword ptr [rdi + 0xf40]
140016594 movsxd r9, dword ptr [rax + rcx*4]
140016598 mov rcx, rdi
14001659b movsxd rax, dword ptr [rdi + 0xf50]
1400165a2 xor r9, rax
1400165a5 add r9, qword ptr [rdi + 0xf48]
1400165ac call r9
1400165af jmp 0x14001666e
1400165b4 inc dword ptr [rdi + 0x88]
1400165ba mov rax, r9
1400165bd shr rax, 0x1b
1400165c1 movzx ecx, al
1400165c4 lea rax, [r10*4]
1400165cc mov byte ptr [rdi + 0x27b], cl
1400165d2 imul rcx, r11
1400165d6 imul r9, r15
1400165da xor rcx, rax
1400165dd xor rcx, rsi
1400165e0 mov qword ptr [rdi + 0x220], rcx
1400165e7 mov r8, qword ptr [rdi + 0x30]
1400165eb add r9, rbx
1400165ee mov rax, r9
1400165f1 shr rax, 0x1b
1400165f5 movzx edx, al
1400165f8 mov byte ptr [rdi + 0x282], dl
1400165fe imul rax, r10, 0xb
140016602 imul rdx, r11
140016606 xor rdx, rax
140016609 xor rdx, rsi
14001660c mov rcx, rdx
14001660f xor rcx, 1
140016613 test r14b, r14b
140016616 lea rax, [rdx + 1]
14001661a cmove rax, rcx
14001661e mov qword ptr [rdi + 0x258], rax
140016625 lea rax, [r8 + 2]
140016629 mov qword ptr [rdi + 0x30], rax
14001662d imul r9, r15
140016631 add r9, rbx
140016634 mov qword ptr [rdi + 0x28], r9
140016638 shr r9, 0x1b
14001663c movzx eax, r9b
140016640 mov byte ptr [rdi + 0x278], al
140016646 imul rax, r11
14001664a xor rax, rsi
14001664d xor rax, r10
140016650 mov rcx, rax
140016653 add rax, 0x2a669
140016659 xor rcx, 0x2a669
140016660 test r14b, r14b
140016663 cmove rax, rcx
140016667 mov qword ptr [rdi + 0x208], rax
14001666e mov rbp, qword ptr [rsp + 0x88]
140016676 mov r14, qword ptr [rsp + 0x30]
14001667b add rsp, 0x38
14001667f pop r15
140016681 pop r13
140016683 pop r12
140016685 pop rdi
140016686 pop rsi
140016687 pop rbx
140016688 ret 
140016689 mov edx, 0x54485254
14001668e mov rcx, rdi
140016691 call 0x1400029a0
140016696 int3 
140016697 mov edx, 0x43414e59
14001669c mov rcx, rdi
14001669f call 0x1400029a0
1400166a4 int3 
