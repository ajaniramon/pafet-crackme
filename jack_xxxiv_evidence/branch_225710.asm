225710 push     rbx
225712 push     rdi
225713 push     r12
225715 push     r13
225717 push     r14
225719 sub      rsp, 0x40
22571d movsxd   rax, dword ptr [rcx + 0x11e0]
225724 mov      r14, rcx
225727 mov      r13d, edx
22572a movabs   rcx, 0x34a5a4cbb437c294
225734 imul     rax, rcx
225738 movabs   rcx, 0x96fc2e0035e946ab
225742 mov      r12, r8
225745 xor      rax, qword ptr [r14 + 0x28]
225749 mov      qword ptr [rsp + 0x70], rax
22574e mov      rax, qword ptr [rsp + 0x70]
225753 movsxd   rax, dword ptr [r14 + 0x11e0]
22575a imul     rax, rcx
22575e movabs   rcx, 0x7034b05eb6a2cabe
225768 xor      rax, qword ptr [r14 + 0x28]
22576c mov      qword ptr [rsp + 0x70], rax
225771 mov      rax, qword ptr [rsp + 0x70]
225776 movsxd   rax, dword ptr [r14 + 0x11e0]
22577d imul     rax, rcx
225781 movabs   rcx, 0x590a58b1c126a905
22578b xor      rax, qword ptr [r14 + 0x28]
22578f mov      qword ptr [rsp + 0x70], rax
225794 mov      rax, qword ptr [rsp + 0x70]
225799 mov      rax, qword ptr [r14 + 0x2e8]
2257a0 mov      rax, qword ptr [r14 + 0x2e8]
2257a7 sub      rax, rcx
2257aa mov      rcx, rax
2257ad shr      rcx, 0x21
2257b1 xor      rcx, rax
2257b4 movabs   rax, 0xff51afd7ed558ccd
2257be imul     rcx, rax
2257c2 movabs   rax, 0xc4ceb9fe1a85ec53
2257cc mov      rdx, rcx
2257cf shr      rdx, 0x21
2257d3 xor      rdx, rcx
2257d6 mov      rcx, r14
2257d9 imul     rdx, rax
2257dd mov      rax, rdx
2257e0 shr      rax, 0x21
2257e4 xor      rdx, rax
2257e7 mov      rax, qword ptr [r14 + 0x2e8]
2257ee shr      rax, 3
2257f2 xor      rax, rdx
2257f5 mov      qword ptr [r14 + 0x2e8], rax
2257fc call     0x1401f1c70
225801 mov      rcx, r14
225804 mov      ebx, eax
225806 call     0x1401ee070
22580b mov      ecx, ebx
22580d mov      edi, eax
22580f call     0x1401ed270
225814 xor      r9d, r9d
225817 mov      dword ptr [rsp + 0x28], edi
22581b xor      edx, edx
22581d mov      dword ptr [rsp + 0x20], eax
225821 mov      rcx, r14
225824 lea      r8d, [r9 + 1]
225828 call     0x1401f10a0
22582d mov      rdx, rax
225830 mov      rcx, r14
225833 call     0x1401f0db0
225838 mov      rax, qword ptr [r14 + 0x2e8]
22583f test     r13d, r13d
225842 jns      0x1402263d7
225848 cmp      qword ptr [r14 + 0x11b8], r12
22584f jne      0x1402263e5
225855 movsxd   rax, dword ptr [r14 + 0x11e0]
22585c movabs   rcx, 0x693b6788e67e8ca1
225866 imul     rax, rcx
22586a mov      rcx, r14
22586d xor      rax, qword ptr [r14 + 0x28]
225871 mov      qword ptr [rsp + 0x70], rax
225876 mov      rax, qword ptr [rsp + 0x70]
22587b call     0x1401ee450
225880 test     eax, eax
225882 jne      0x1402263ca
225888 cmp      dword ptr [r14 + 0xad0], eax
22588f jne      0x1402263ca
225895 mov      r8, qword ptr [r14 + 0xf0]
22589c movzx    ecx, byte ptr [r14 + 0x160]
2258a4 mov      rax, r8
2258a7 mov      r10, qword ptr [r14 + 0xe0]
2258ae mov      rbx, qword ptr [r14 + 0xd0]
2258b5 mov      r11, qword ptr [r14 + 0xd8]
2258bc movzx    edi, byte ptr [r14 + 0xe8]
2258c4 mov      r9, qword ptr [r14 + 0x1b0]
2258cb imul     rcx, r10
2258cf mov      qword ptr [rsp + 0x78], rbp
2258d4 movabs   rbp, 0x2545f4914f6cdd1d
2258de xor      rcx, rbx
2258e1 mov      qword ptr [rsp + 0x38], rsi
2258e6 mov      rsi, qword ptr [r14 + 0x1b8]
2258ed xor      rcx, r11
2258f0 xor      rax, rcx
2258f3 mov      qword ptr [rsp + 0x30], r15
2258f8 sub      r8, rcx
2258fb movabs   r15, 0x9e3779b97f4a7c15
225905 test     dil, dil
225908 cmove    r8, rax
22590c inc      rsi
22590f imul     r9, r15
225913 mov      qword ptr [r14 + 0x1b8], rsi
22591a mov      rcx, r8
22591d add      r9, rbp
225920 mov      qword ptr [r14 + 0x1b0], r9
225927 mov      rax, r9
22592a shr      rax, 0x1b
22592e movzx    edx, al
225931 mov      byte ptr [r14 + 0x160], dl
225938 imul     rdx, r10
22593c xor      rdx, rbx
22593f xor      rdx, r11
225942 xor      rcx, rdx
225945 test     dil, dil
225948 lea      rax, [r8 + rdx]
22594c cmove    rax, rcx
225950 mov      qword ptr [r14 + 0xf0], rax
225957 cmp      r8d, 0x2a0025
22595e jne      0x1402263bb
225964 mov      eax, r13d
225967 btr      eax, 0x1f
22596b cmp      eax, 2
22596e jae      0x1402259ba
225970 imul     r9, r15
225974 lea      rax, [rsi + 1]
225978 mov      qword ptr [r14 + 0x1b8], rax
22597f add      r9, rbp
225982 mov      qword ptr [r14 + 0x1b0], r9
225989 shr      r9, 0x1b
22598d movzx    eax, r9b
225991 mov      byte ptr [r14 + 0x160], al
225998 imul     rax, r10
22599c xor      rax, rbx
22599f xor      rax, r11
2259a2 mov      rcx, rax
2259a5 add      rax, 0x85b36
2259ab xor      rcx, 0x85b36
2259b2 test     dil, dil
2259b5 jmp      0x1402263b0
2259ba mov      rcx, r14
2259bd call     0x1401ee070
2259c2 movzx    ecx, byte ptr [r14 + 0x4ad]
2259ca movabs   rbx, 0xff51afd7ed558ccd
2259d4 mov      r11, qword ptr [r14 + 0xe0]
2259db movabs   r8, 0xc4ceb9fe1a85ec53
2259e5 mov      r10, qword ptr [r14 + 0xd0]
2259ec movzx    r9d, byte ptr [r14 + 0xe8]
2259f4 mov      eax, eax
2259f6 xor      rcx, rax
2259f9 xor      rcx, qword ptr [r14 + 0x11e8]
225a00 mov      rax, rcx
225a03 shr      rax, 0x21
225a07 xor      rax, rcx
225a0a imul     rax, rbx
225a0e mov      rcx, rax
225a11 shr      rcx, 0x21
225a15 xor      rcx, rax
225a18 imul     rcx, r8
225a1c mov      rdx, rcx
225a1f shr      rdx, 0x21
225a23 xor      rdx, rcx
225a26 mov      qword ptr [r14 + 0x11e8], rdx
225a2d xor      rdx, qword ptr [r14 + 0x28]
225a31 xor      rdx, qword ptr [r14 + 0x20]
225a35 mov      rax, rdx
225a38 shr      rax, 0x21
225a3c xor      rax, rdx
225a3f imul     rax, rbx
225a43 mov      rcx, rax
225a46 shr      rcx, 0x21
225a4a xor      rcx, rax
225a4d imul     rcx, r8
225a51 mov      rax, rcx
225a54 shr      rax, 0x21
225a58 xor      rax, rcx
225a5b mov      qword ptr [r14 + 0x20], rax
225a5f mov      rdx, qword ptr [r14 + 0x138]
225a66 movzx    ecx, byte ptr [r14 + 0x169]
225a6e mov      rax, qword ptr [r14 + 0xd8]
225a75 imul     rcx, r11
225a79 lea      rbx, [rax + rax*4]
225a7d mov      rax, rdx
225a80 add      rbx, rbx
225a83 xor      rcx, rbx
225a86 xor      rcx, r10
225a89 xor      rax, rcx
225a8c sub      rdx, rcx
225a8f test     r9b, r9b
225a92 cmove    rdx, rax
225a96 mov      rax, qword ptr [r14 + 0x1b0]
225a9d inc      qword ptr [r14 + 0x1b8]
225aa4 imul     rax, r15
225aa8 add      rax, rbp
225aab mov      qword ptr [r14 + 0x1b0], rax
225ab2 shr      rax, 0x1b
225ab6 movzx    r8d, al
225aba mov      byte ptr [r14 + 0x169], r8b
225ac1 imul     r8, r11
225ac5 xor      r8, rbx
225ac8 xor      r8, r10
225acb mov      rcx, r8
225ace xor      rcx, rdx
225ad1 test     r9b, r9b
225ad4 lea      rax, [r8 + rdx]
225ad8 cmove    rax, rcx
225adc mov      rcx, r14
225adf mov      qword ptr [r14 + 0x138], rax
225ae6 call     0x1401f0910
225aeb mov      rax, qword ptr [r14 + 0xd8]
225af2 mov      r10, qword ptr [r14 + 0xe0]
225af9 movzx    ecx, byte ptr [r14 + 0x168]
225b01 mov      rbx, qword ptr [r14 + 0xd0]
225b08 mov      rdx, qword ptr [r14 + 0x130]
225b0f lea      r11, [rax + rax*8]
225b13 movzx    r9d, byte ptr [r14 + 0xe8]
225b1b mov      rax, rdx
225b1e imul     rcx, r10
225b22 xor      rcx, r11
225b25 xor      rcx, rbx
225b28 xor      rax, rcx
225b2b sub      rdx, rcx
225b2e test     r9b, r9b
225b31 cmove    rdx, rax
225b35 mov      rax, qword ptr [r14 + 0x1b0]
225b3c inc      qword ptr [r14 + 0x1b8]
225b43 mov      rcx, rdx
225b46 imul     rax, r15
225b4a add      rax, rbp
225b4d mov      qword ptr [r14 + 0x1b0], rax
225b54 shr      rax, 0x1b
225b58 movzx    r8d, al
225b5c mov      byte ptr [r14 + 0x168], r8b
225b63 imul     r8, r10
225b67 xor      r8, r11
225b6a xor      r8, rbx
225b6d xor      rcx, r8
225b70 test     r9b, r9b
225b73 lea      rax, [rdx + r8]
225b77 cmove    rax, rcx
225b7b mov      rcx, r14
225b7e mov      qword ptr [r14 + 0x130], rax
225b85 call     0x1401f0910
225b8a mov      rcx, r14
225b8d call     0x1401ee070
225b92 cmp      eax, dword ptr [r14 + 0x1d8]
225b99 jae      0x140225ba5
225b9b mov      edx, eax
225b9d mov      rcx, r14
225ba0 call     0x1401f0910
225ba5 mov      rsi, qword ptr [r14 + 0xe0]
225bac mov      rbp, qword ptr [r14 + 0xd0]
225bb3 mov      r11, qword ptr [r14 + 0x130]
225bba movzx    edi, byte ptr [r14 + 0xe8]
225bc2 mov      rax, r11
225bc5 movzx    ecx, byte ptr [r14 + 0x168]
225bcd mov      rbx, qword ptr [r14 + 0xd8]
225bd4 mov      r8, qword ptr [r14 + 0x1b8]
225bdb mov      r10, qword ptr [r14 + 0x1b0]
225be2 imul     rcx, rsi
225be6 lea      r9, [rbx + rbx*8]
225bea xor      rcx, r9
225bed xor      rcx, rbp
225bf0 xor      rax, rcx
225bf3 sub      r11, rcx
225bf6 test     dil, dil
225bf9 movabs   rcx, 0x2545f4914f6cdd1d
225c03 cmove    r11, rax
225c07 imul     r10, r15
225c0b add      r10, rcx
225c0e mov      rcx, r11
225c11 mov      rax, r10
225c14 shr      rax, 0x1b
225c18 movzx    edx, al
225c1b mov      byte ptr [r14 + 0x168], dl
225c22 imul     rdx, rsi
225c26 xor      rdx, r9
225c29 xor      rdx, rbp
225c2c xor      rcx, rdx
225c2f test     dil, dil
225c32 lea      rax, [r11 + rdx]
225c36 cmove    rax, rcx
225c3a mov      rcx, r11
225c3d mov      qword ptr [r14 + 0x130], rax
225c44 movabs   rax, 0x2545f4914f6cdd1d
225c4e imul     r10, r15
225c52 add      r10, rax
225c55 lea      rax, [r8 + 2]
225c59 mov      qword ptr [r14 + 0x1b8], rax
225c60 mov      r8d, 0x203c
225c66 mov      qword ptr [r14 + 0x1b0], r10
225c6d lea      rax, [rbx + rbx*4]
225c71 add      rax, rax
225c74 shr      r10, 0x1b
225c78 movzx    edx, r10b
225c7c mov      byte ptr [r14 + 0x169], dl
225c83 imul     rdx, rsi
225c87 xor      rdx, rax
225c8a xor      rdx, rbp
225c8d xor      rcx, rdx
225c90 test     dil, dil
225c93 lea      rax, [r11 + rdx]
225c97 cmove    rax, rcx
225c9b mov      rcx, r14
225c9e mov      qword ptr [r14 + 0x138], rax
225ca5 movzx    edx, byte ptr [r14 + 0x4ad]
225cad xor      rdx, qword ptr [r14 + 0x348]
225cb4 call     0x1401f1520
225cb9 mov      r8, qword ptr [r14 + 0x348]
225cc0 movabs   rdi, 0xff51afd7ed558ccd
225cca mov      rax, r8
225ccd movabs   rsi, 0xc4ceb9fe1a85ec53
225cd7 xor      rax, qword ptr [r14 + 0x20]
225cdb mov      rcx, rax
225cde shr      rcx, 0x21
225ce2 xor      rcx, rax
225ce5 imul     rcx, rdi
225ce9 mov      rax, rcx
225cec shr      rax, 0x21
225cf0 xor      rax, rcx
225cf3 imul     rax, rsi
225cf7 mov      rdx, rax
225cfa shr      rdx, 0x21
225cfe xor      edx, eax
225d00 lea      eax, [rdx + 1]
225d03 mov      ecx, eax
225d05 xor      eax, edx
225d07 imul     ecx, edx
225d0a not      ecx
225d0c and      ecx, eax
225d0e test     cl, 1
225d11 je       0x140225d84
225d13 and      r8b, 3
225d17 cmp      r8b, 1
225d1b jne      0x140225d84
225d1d mov      rax, qword ptr [r14 + 0x1b0]
225d24 movabs   rcx, 0x2545f4914f6cdd1d
225d2e inc      qword ptr [r14 + 0x1b8]
225d35 imul     rax, r15
225d39 add      rax, rcx
225d3c mov      qword ptr [r14 + 0x1b0], rax
225d43 shr      rax, 0x1b
225d47 movzx    eax, al
225d4a mov      byte ptr [r14 + 0x160], al
225d51 imul     rax, qword ptr [r14 + 0xe0]
225d59 xor      rax, qword ptr [r14 + 0xd8]
225d60 xor      rax, qword ptr [r14 + 0xd0]
225d67 mov      rcx, rax
225d6a add      rax, 0x3dd18f
225d70 xor      rcx, 0x3dd18f
225d77 cmp      byte ptr [r14 + 0xe8], 0
225d7f jmp      0x1402263b0
225d84 mov      rcx, r14
225d87 call     0x1401ee070
225d8c mov      ebx, eax
225d8e cmp      eax, dword ptr [r14 + 0x1d8]
225d95 jb       0x140225dfe
225d97 mov      rax, qword ptr [r14 + 0x1b0]
225d9e movabs   rcx, 0x2545f4914f6cdd1d
225da8 inc      qword ptr [r14 + 0x1b8]
225daf imul     rax, r15
225db3 add      rax, rcx
225db6 mov      qword ptr [r14 + 0x1b0], rax
225dbd shr      rax, 0x1b
225dc1 movzx    eax, al
225dc4 mov      byte ptr [r14 + 0x160], al
225dcb imul     rax, qword ptr [r14 + 0xe0]
225dd3 xor      rax, qword ptr [r14 + 0xd8]
225dda xor      rax, qword ptr [r14 + 0xd0]
225de1 mov      rcx, rax
225de4 add      rax, 0xfe1ab
225dea xor      rcx, 0xfe1ab
225df1 cmp      byte ptr [r14 + 0xe8], 0
225df9 jmp      0x1402263b0
225dfe mov      edx, ebx
225e00 mov      rcx, r14
225e03 call     0x1401f25b0
225e08 movsxd   rcx, dword ptr [r14 + 0x11e0]
225e0f movabs   r8, 0xd6e8feb86659fd93
225e19 mov      rdx, qword ptr [r14 + 0x20]
225e1d mov      rax, rbx
225e20 imul     rax, r8
225e24 imul     rcx, r15
225e28 rol      rdx, 0x11
225e2c xor      rax, rdx
225e2f xor      rcx, qword ptr [r14 + 0x260]
225e36 xor      rax, rcx
225e39 mov      rcx, rax
225e3c shr      rcx, 0x21
225e40 xor      rcx, rax
225e43 imul     rcx, rdi
225e47 mov      rdx, rcx
225e4a shr      rdx, 0x21
225e4e xor      rdx, rcx
225e51 imul     rdx, rsi
225e55 mov      rax, rdx
225e58 shr      rax, 0x21
225e5c xor      rax, rdx
225e5f mov      r10, rax
225e62 shr      r10, 0x1d
225e66 xor      r10, rax
225e69 or       r10, 1
225e6d mov      rax, r10
225e70 mov      qword ptr [r14 + 0x260], r10
225e77 and      eax, 0x3ff
225e7c cmp      rax, 0x2c5
225e82 jne      0x140225e93
225e84 mov      rcx, r14
225e87 call     0x1402297e0
225e8c mov      r10, qword ptr [r14 + 0x260]
225e93 movzx    eax, r10b
225e97 and      al, 0x1f
225e99 cmp      al, 0x15
225e9b jne      0x140225f88
225ea1 movsxd   rax, dword ptr [r14 + 0x11e0]
225ea8 xor      rax, 0x5a5a
225eae mov      rcx, qword ptr [r14 + 0x20]
225eb2 imul     rax, r15
225eb6 rol      rcx, 0x11
225eba xor      rax, r10
225ebd xor      rcx, rax
225ec0 movabs   rax, 0x8f70feda99a6026d
225eca xor      rcx, rax
225ecd mov      rax, rcx
225ed0 shr      rax, 0x21
225ed4 xor      rax, rcx
225ed7 imul     rax, rdi
225edb mov      rcx, rax
225ede shr      rcx, 0x21
225ee2 xor      rcx, rax
225ee5 imul     rcx, rsi
225ee9 mov      rax, rcx
225eec shr      rax, 0x21
225ef0 xor      rax, rcx
225ef3 mov      r9, rax
225ef6 shr      r9, 0x1d
225efa xor      r9, rax
225efd or       r9, 1
225f01 mov      rax, r9
225f04 mov      rcx, r9
225f07 shr      rax, 8
225f0b and      eax, 3
225f0e shr      rcx, 0x28
225f12 imul     r8, rax, 0x3e
225f16 mov      eax, 0x8421085
225f1b mul      ecx
225f1d mov      eax, ecx
225f1f sub      eax, edx
225f21 shr      eax, 1
225f23 add      eax, edx
225f25 shr      eax, 5
225f28 imul     eax, eax, 0x3e
225f2b sub      ecx, eax
225f2d mov      eax, ecx
225f2f add      r8, rax
225f32 mov      rax, qword ptr [r14 + 0x4b8]
225f39 movsxd   rcx, dword ptr [rax + r8*4]
225f3d movsxd   rax, dword ptr [r14 + 0x4c8]
225f44 xor      rcx, rax
225f47 add      rcx, qword ptr [r14 + 0x4c0]
225f4e xor      rcx, r9
225f51 mov      rax, rcx
225f54 shr      rax, 0x21
225f58 xor      rax, rcx
225f5b imul     rax, rdi
225f5f mov      rcx, rax
225f62 shr      rcx, 0x21
225f66 xor      rcx, rax
225f69 imul     rcx, rsi
225f6d mov      rax, rcx
225f70 shr      rax, 0x21
225f74 xor      rax, rcx
225f77 xor      rax, r10
225f7a inc      qword ptr [r14 + 0x268]
225f81 mov      qword ptr [r14 + 0x260], rax
225f88 inc      dword ptr [r14 + 0x200]
225f8f mov      eax, dword ptr [r14 + 0x200]
225f96 cmp      eax, dword ptr [r14 + 0x1fc]
225f9d jb       0x140225fb2
225f9f mov      rcx, r14
225fa2 mov      dword ptr [r14 + 0x200], 0
225fad call     0x1401ef7c0
225fb2 mov      r8d, ebx
225fb5 mov      edx, ebx
225fb7 mov      rcx, r14
225fba call     0x1401f0660
225fbf inc      qword ptr [r14 + 0x1b8]
225fc6 movabs   rax, 0x2545f4914f6cdd1d
225fd0 mov      r9, qword ptr [r14 + 0x1b0]
225fd7 mov      r10, qword ptr [r14 + 0x1b8]
225fde imul     r9, r15
225fe2 add      r9, rax
225fe5 mov      qword ptr [r14 + 0x1b0], r9
225fec mov      rax, r9
225fef shr      rax, 0x1b
225ff3 movzx    edx, al
225ff6 mov      byte ptr [r14 + 0x168], dl
225ffd mov      rdi, qword ptr [r14 + 0xe0]
226004 mov      r11, qword ptr [r14 + 0xd8]
22600b mov      rsi, qword ptr [r14 + 0xd0]
226012 movzx    r15d, byte ptr [r14 + 0xe8]
22601a imul     rdx, rdi
22601e lea      rax, [r11 + r11*8]
226022 xor      rdx, rax
226025 xor      rdx, rsi
226028 mov      rcx, rdx
22602b xor      rcx, rbx
22602e test     r15b, r15b
226031 lea      rax, [rdx + rbx]
226035 cmove    rax, rcx
226039 inc      r10
22603c mov      qword ptr [r14 + 0x130], rax
226043 mov      rcx, qword ptr [r14 + 0x1d0]
22604a mov      rax, qword ptr [r14 + 0x48]
22604e mov      qword ptr [rsp + 0x88], r10
226056 movzx    r8d, byte ptr [rcx + rbx]
22605b xor      r8b, byte ptr [rax + rbx]
22605f inc      ebx
226061 mov      qword ptr [r14 + 0x1b8], r10
226068 movabs   rax, 0x9e3779b97f4a7c15
226072 imul     r9, rax
226076 mov      qword ptr [rsp + 0x70], rbx
22607b movabs   rax, 0x2545f4914f6cdd1d
226085 add      r9, rax
226088 mov      rax, r9
22608b shr      rax, 0x1b
22608f movzx    edx, al
226092 lea      rax, [r11 + r11]
226096 mov      byte ptr [r14 + 0x161], dl
22609d imul     rdx, rdi
2260a1 xor      rdx, rax
2260a4 xor      rdx, rsi
2260a7 mov      rcx, rdx
2260aa xor      rcx, rbx
2260ad test     r15b, r15b
2260b0 lea      rax, [rdx + rbx]
2260b4 cmove    rax, rcx
2260b8 mov      qword ptr [r14 + 0xf8], rax
2260bf movsxd   rdx, dword ptr [r14 + 0x11e0]
2260c6 mov      r10, qword ptr [r14 + 0x20]
2260ca mov      rcx, rdx
2260cd xor      rcx, qword ptr [r14 + 0x350]
2260d4 xor      rcx, r10
2260d7 xor      rcx, rbx
2260da movabs   rbx, 0xff51afd7ed558ccd
2260e4 xor      rcx, qword ptr [r14 + 0x348]
2260eb mov      rax, rcx
2260ee shr      rax, 0x21
2260f2 xor      rax, rcx
2260f5 imul     rax, rbx
2260f9 mov      rcx, rax
2260fc shr      rcx, 0x21
226100 xor      rcx, rax
226103 movabs   rax, 0xc4ceb9fe1a85ec53
22610d imul     rcx, rax
226111 movzx    eax, r8b
226115 mov      rbx, rcx
226118 shr      rbx, 0x21
22611c xor      rbx, rcx
22611f lea      rcx, [rip - 0x226126]
226126 xor      rax, 0xdd
22612c mov      qword ptr [r14 + 0x28], rbx
226130 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
226138 xor      bpl, 0x63
22613c movabs   r8, 0xff51afd7ed558ccd
226146 inc      edx
226148 mov      dword ptr [r14 + 0x11e0], edx
22614f test     dl, 0x1f
226152 jne      0x140226198
226154 movsxd   rax, edx
226157 xor      rax, r10
22615a xor      rax, qword ptr [r14 + 0x348]
226161 mov      rcx, rax
226164 shr      rcx, 0x21
226168 xor      rcx, rax
22616b movabs   rax, 0xc4ceb9fe1a85ec53
226175 imul     rcx, r8
226179 mov      rdx, rcx
22617c shr      rdx, 0x21
226180 xor      rdx, rcx
226183 imul     rdx, rax
226187 mov      rax, rdx
22618a shr      rax, 0x21
22618e xor      rax, rdx
226191 mov      qword ptr [r14 + 0x348], rax
226198 movzx    edx, bpl
22619c xor      r10, rdx
22619f mov      byte ptr [r14 + 0x4ad], bpl
2261a6 xor      r10, qword ptr [rsp + 0x70]
2261ab mov      rax, r10
2261ae shr      rax, 0x21
2261b2 xor      rax, r10
2261b5 movabs   r10, 0x9e3779b97f4a7c15
2261bf imul     rax, r8
2261c3 imul     rdx, r10
2261c7 imul     r9, r10
2261cb mov      rcx, rax
2261ce shr      rcx, 0x21
2261d2 xor      rcx, rax
2261d5 movabs   rax, 0xc4ceb9fe1a85ec53
2261df imul     rcx, rax
2261e3 mov      rax, rcx
2261e6 shr      rax, 0x21
2261ea xor      rax, rcx
2261ed mov      ecx, dword ptr [r14 + 0x1178]
2261f4 mov      qword ptr [r14 + 0x20], rax
2261f8 movabs   rax, 0xd6e8feb86659fd93
226202 imul     rcx, rax
226206 xor      rcx, rdx
226209 xor      rcx, rbx
22620c movabs   rbx, 0x2545f4914f6cdd1d
226216 mov      rax, rcx
226219 add      r9, rbx
22621c shr      rax, 0x21
226220 xor      rax, rcx
226223 imul     rax, r8
226227 mov      rdx, rax
22622a shr      rdx, 0x21
22622e xor      rdx, rax
226231 movabs   rax, 0xc4ceb9fe1a85ec53
22623b imul     rdx, rax
22623f mov      rax, qword ptr [rsp + 0x88]
226247 shr      rdx, 0x21
22624b and      edx, 3
22624e inc      rax
226251 mov      qword ptr [r14 + 0x1b8], rax
226258 cmp      bpl, 0x3e
22625c jae      0x1402262f4
226262 inc      qword ptr [r14 + 0x11a0]
226269 lea      rax, [rip - 0x226270]
226270 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
226278 mov      qword ptr [r14 + 0x1b0], r9
22627f shr      r9, 0x1b
226283 movzx    eax, r9b
226287 mov      byte ptr [r14 + 0x160], al
22628e imul     rax, rdi
226292 mov      ebx, edx
226294 xor      rax, rsi
226297 xor      rax, r11
22629a mov      rcx, rax
22629d add      rax, r8
2262a0 xor      rcx, r8
2262a3 movzx    r8d, bpl
2262a7 test     r15b, r15b
2262aa cmove    rax, rcx
2262ae mov      rcx, r14
2262b1 mov      qword ptr [r14 + 0xf0], rax
2262b8 call     0x1401f1f50
2262bd mov      eax, eax
2262bf lea      edx, [r13 - 1]
2262c3 imul     rcx, rbx, 0x3e
2262c7 mov      r8, r12
2262ca add      rcx, rax
2262cd mov      rax, qword ptr [r14 + 0x4b8]
2262d4 movsxd   r9, dword ptr [rax + rcx*4]
2262d8 mov      rcx, r14
2262db movsxd   rax, dword ptr [r14 + 0x4c8]
2262e2 xor      r9, rax
2262e5 add      r9, qword ptr [r14 + 0x4c0]
2262ec call     r9
2262ef jmp      0x1402263bb
2262f4 inc      dword ptr [r14 + 0x11a8]
2262fb mov      rax, r9
2262fe shr      rax, 0x1b
226302 movzx    ecx, al
226305 lea      rax, [r11*4]
22630d mov      byte ptr [r14 + 0x163], cl
226314 imul     rcx, rdi
226318 imul     r9, r10
22631c xor      rcx, rax
22631f xor      rcx, rsi
226322 mov      qword ptr [r14 + 0x108], rcx
226329 mov      r8, qword ptr [r14 + 0x1b8]
226330 add      r9, rbx
226333 mov      rax, r9
226336 shr      rax, 0x1b
22633a movzx    edx, al
22633d mov      byte ptr [r14 + 0x16a], dl
226344 imul     rax, r11, 0xb
226348 imul     rdx, rdi
22634c xor      rdx, rax
22634f xor      rdx, rsi
226352 mov      rcx, rdx
226355 xor      rcx, 1
226359 test     r15b, r15b
22635c lea      rax, [rdx + 1]
226360 cmove    rax, rcx
226364 mov      qword ptr [r14 + 0x140], rax
22636b lea      rax, [r8 + 2]
22636f mov      qword ptr [r14 + 0x1b8], rax
226376 imul     r9, r10
22637a add      r9, rbx
22637d mov      qword ptr [r14 + 0x1b0], r9
226384 shr      r9, 0x1b
226388 movzx    eax, r9b
22638c mov      byte ptr [r14 + 0x160], al
226393 imul     rax, rdi
226397 xor      rax, rsi
22639a xor      rax, r11
22639d mov      rcx, rax
2263a0 add      rax, 0xfe1ab
2263a6 xor      rcx, 0xfe1ab
2263ad test     r15b, r15b
2263b0 cmove    rax, rcx
2263b4 mov      qword ptr [r14 + 0xf0], rax
2263bb mov      rsi, qword ptr [rsp + 0x38]
2263c0 mov      rbp, qword ptr [rsp + 0x78]
2263c5 mov      r15, qword ptr [rsp + 0x30]
2263ca add      rsp, 0x40
2263ce pop      r14
2263d0 pop      r13
2263d2 pop      r12
2263d4 pop      rdi
2263d5 pop      rbx
2263d6 ret      
2263d7 mov      edx, 0x54485254
2263dc mov      rcx, r14
2263df call     0x1401ed830
2263e4 int3     
2263e5 mov      edx, 0x43414e59
2263ea mov      rcx, r14
2263ed call     0x1401ed830
2263f2 int3     
