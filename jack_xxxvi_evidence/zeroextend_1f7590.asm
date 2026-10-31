1f7590 mov      qword ptr [rsp + 0x18], r8
1f7595 push     rbx
1f7596 push     rbp
1f7597 push     rdi
1f7598 push     r13
1f759a push     r14
1f759c sub      rsp, 0x30
1f75a0 movsxd   rax, dword ptr [rcx + 0x11e0]
1f75a7 mov      r14, rcx
1f75aa mov      r13d, edx
1f75ad movabs   rcx, 0xc0acca8e825d1261
1f75b7 imul     rax, rcx
1f75bb movabs   rcx, 0x62f540450383965e
1f75c5 movabs   rbp, 0xff51afd7ed558ccd
1f75cf xor      rax, qword ptr [r14 + 0x28]
1f75d3 mov      rdi, r8
1f75d6 mov      qword ptr [rsp + 0x60], rax
1f75db mov      rax, qword ptr [rsp + 0x60]
1f75e0 movsxd   rax, dword ptr [r14 + 0x11e0]
1f75e7 imul     rax, rcx
1f75eb movabs   rcx, 0x843dde1b80c81a4b
1f75f5 xor      rax, qword ptr [r14 + 0x28]
1f75f9 mov      qword ptr [rsp + 0x60], rax
1f75fe mov      rax, qword ptr [rsp + 0x60]
1f7603 movsxd   rax, dword ptr [r14 + 0x11e0]
1f760a imul     rax, rcx
1f760e xor      rax, qword ptr [r14 + 0x28]
1f7612 mov      qword ptr [rsp + 0x60], rax
1f7617 mov      rax, qword ptr [rsp + 0x60]
1f761c mov      rax, qword ptr [r14 + 0x2e8]
1f7623 shr      rax, 0xd
1f7627 mov      rcx, rax
1f762a shr      rcx, 0x21
1f762e xor      rcx, rax
1f7631 movabs   rax, 0xc4ceb9fe1a85ec53
1f763b imul     rcx, rbp
1f763f mov      rdx, rcx
1f7642 shr      rdx, 0x21
1f7646 xor      rdx, rcx
1f7649 imul     rdx, rax
1f764d movabs   rax, 0xb41656578ad00a4f
1f7657 mov      rcx, rdx
1f765a shr      rcx, 0x21
1f765e xor      rcx, rdx
1f7661 xor      rcx, rax
1f7664 mov      rax, qword ptr [r14 + 0x2e8]
1f766b add      rcx, rax
1f766e mov      qword ptr [r14 + 0x2e8], rcx
1f7675 mov      rcx, r14
1f7678 call     0x1401f1e80
1f767d mov      rcx, r14
1f7680 mov      ebx, eax
1f7682 call     0x1401ee940
1f7687 and      ebx, 0x3f
1f768a je       0x1401f769e
1f768c mov      ecx, ebx
1f768e mov      edx, 1
1f7693 shl      rdx, cl
1f7696 dec      rdx
1f7699 and      rdx, rax
1f769c jmp      0x1401f76a0
1f769e xor      edx, edx
1f76a0 mov      rcx, r14
1f76a3 call     0x1401ee820
1f76a8 mov      rax, qword ptr [r14 + 0x2e8]
1f76af test     r13d, r13d
1f76b2 jns      0x1401f81f0
1f76b8 cmp      qword ptr [r14 + 0x11b8], rdi
1f76bf jne      0x1401f81fe
1f76c5 movsxd   rax, dword ptr [r14 + 0x11e0]
1f76cc movabs   rcx, 0x721aa443592b1645
1f76d6 imul     rax, rcx
1f76da mov      rcx, r14
1f76dd xor      rax, qword ptr [r14 + 0x28]
1f76e1 mov      qword ptr [rsp + 0x60], rax
1f76e6 mov      rax, qword ptr [rsp + 0x60]
1f76eb call     0x1401ee450
1f76f0 test     eax, eax
1f76f2 jne      0x1401f81e4
1f76f8 cmp      dword ptr [r14 + 0xad0], eax
1f76ff jne      0x1401f81e4
1f7705 mov      r8, qword ptr [r14 + 0xf0]
1f770c movzx    ecx, byte ptr [r14 + 0x160]
1f7714 mov      rax, r8
1f7717 mov      r10, qword ptr [r14 + 0xe0]
1f771e mov      rbx, qword ptr [r14 + 0xd0]
1f7725 mov      r11, qword ptr [r14 + 0xd8]
1f772c movzx    edi, byte ptr [r14 + 0xe8]
1f7734 mov      r9, qword ptr [r14 + 0x1b0]
1f773b imul     rcx, r10
1f773f mov      qword ptr [rsp + 0x68], rsi
1f7744 mov      rsi, qword ptr [r14 + 0x1b8]
1f774b xor      rcx, rbx
1f774e xor      rcx, r11
1f7751 mov      qword ptr [rsp + 0x28], r12
1f7756 xor      rax, rcx
1f7759 mov      qword ptr [rsp + 0x20], r15
1f775e sub      r8, rcx
1f7761 movabs   r15, 0x9e3779b97f4a7c15
1f776b test     dil, dil
1f776e movabs   r12, 0x2545f4914f6cdd1d
1f7778 cmove    r8, rax
1f777c inc      rsi
1f777f imul     r9, r15
1f7783 mov      qword ptr [r14 + 0x1b8], rsi
1f778a mov      rcx, r8
1f778d add      r9, r12
1f7790 mov      qword ptr [r14 + 0x1b0], r9
1f7797 mov      rax, r9
1f779a shr      rax, 0x1b
1f779e movzx    edx, al
1f77a1 mov      byte ptr [r14 + 0x160], dl
1f77a8 imul     rdx, r10
1f77ac xor      rdx, rbx
1f77af xor      rdx, r11
1f77b2 xor      rcx, rdx
1f77b5 test     dil, dil
1f77b8 lea      rax, [r8 + rdx]
1f77bc cmove    rax, rcx
1f77c0 mov      qword ptr [r14 + 0xf0], rax
1f77c7 cmp      r8d, 0x26dc07
1f77ce jne      0x1401f81d5
1f77d4 mov      eax, r13d
1f77d7 btr      eax, 0x1f
1f77db cmp      eax, 2
1f77de jae      0x1401f782a
1f77e0 imul     r9, r15
1f77e4 lea      rax, [rsi + 1]
1f77e8 mov      qword ptr [r14 + 0x1b8], rax
1f77ef add      r9, r12
1f77f2 mov      qword ptr [r14 + 0x1b0], r9
1f77f9 shr      r9, 0x1b
1f77fd movzx    eax, r9b
1f7801 mov      byte ptr [r14 + 0x160], al
1f7808 imul     rax, r10
1f780c xor      rax, rbx
1f780f xor      rax, r11
1f7812 mov      rcx, rax
1f7815 add      rax, 0x3abaef
1f781b xor      rcx, 0x3abaef
1f7822 test     dil, dil
1f7825 jmp      0x1401f81ca
1f782a mov      rcx, r14
1f782d call     0x1401ee070
1f7832 movzx    ecx, byte ptr [r14 + 0x4ad]
1f783a movabs   r8, 0xc4ceb9fe1a85ec53
1f7844 mov      r11, qword ptr [r14 + 0xe0]
1f784b mov      r10, qword ptr [r14 + 0xd0]
1f7852 movzx    r9d, byte ptr [r14 + 0xe8]
1f785a mov      eax, eax
1f785c xor      rcx, rax
1f785f xor      rcx, qword ptr [r14 + 0x11e8]
1f7866 mov      rax, rcx
1f7869 shr      rax, 0x21
1f786d xor      rax, rcx
1f7870 imul     rax, rbp
1f7874 mov      rcx, rax
1f7877 shr      rcx, 0x21
1f787b xor      rcx, rax
1f787e imul     rcx, r8
1f7882 mov      rdx, rcx
1f7885 shr      rdx, 0x21
1f7889 xor      rdx, rcx
1f788c mov      qword ptr [r14 + 0x11e8], rdx
1f7893 xor      rdx, qword ptr [r14 + 0x28]
1f7897 xor      rdx, qword ptr [r14 + 0x20]
1f789b mov      rax, rdx
1f789e shr      rax, 0x21
1f78a2 xor      rax, rdx
1f78a5 imul     rax, rbp
1f78a9 mov      rcx, rax
1f78ac shr      rcx, 0x21
1f78b0 xor      rcx, rax
1f78b3 imul     rcx, r8
1f78b7 mov      rax, rcx
1f78ba shr      rax, 0x21
1f78be xor      rax, rcx
1f78c1 mov      qword ptr [r14 + 0x20], rax
1f78c5 mov      rdx, qword ptr [r14 + 0x138]
1f78cc movzx    ecx, byte ptr [r14 + 0x169]
1f78d4 mov      rax, qword ptr [r14 + 0xd8]
1f78db imul     rcx, r11
1f78df lea      rbx, [rax + rax*4]
1f78e3 mov      rax, rdx
1f78e6 add      rbx, rbx
1f78e9 xor      rcx, rbx
1f78ec xor      rcx, r10
1f78ef xor      rax, rcx
1f78f2 sub      rdx, rcx
1f78f5 test     r9b, r9b
1f78f8 cmove    rdx, rax
1f78fc mov      rax, qword ptr [r14 + 0x1b0]
1f7903 inc      qword ptr [r14 + 0x1b8]
1f790a imul     rax, r15
1f790e add      rax, r12
1f7911 mov      qword ptr [r14 + 0x1b0], rax
1f7918 shr      rax, 0x1b
1f791c movzx    r8d, al
1f7920 mov      byte ptr [r14 + 0x169], r8b
1f7927 imul     r8, r11
1f792b xor      r8, rbx
1f792e xor      r8, r10
1f7931 mov      rcx, r8
1f7934 xor      rcx, rdx
1f7937 test     r9b, r9b
1f793a lea      rax, [r8 + rdx]
1f793e cmove    rax, rcx
1f7942 mov      rcx, r14
1f7945 mov      qword ptr [r14 + 0x138], rax
1f794c call     0x1401f0910
1f7951 mov      rax, qword ptr [r14 + 0xd8]
1f7958 mov      rdx, qword ptr [r14 + 0x130]
1f795f mov      r10, qword ptr [r14 + 0xe0]
1f7966 movzx    ecx, byte ptr [r14 + 0x168]
1f796e mov      rbx, qword ptr [r14 + 0xd0]
1f7975 lea      r11, [rax + rax*8]
1f7979 movzx    r9d, byte ptr [r14 + 0xe8]
1f7981 mov      rax, rdx
1f7984 imul     rcx, r10
1f7988 xor      rcx, r11
1f798b xor      rcx, rbx
1f798e xor      rax, rcx
1f7991 sub      rdx, rcx
1f7994 test     r9b, r9b
1f7997 cmove    rdx, rax
1f799b mov      rax, qword ptr [r14 + 0x1b0]
1f79a2 inc      qword ptr [r14 + 0x1b8]
1f79a9 mov      rcx, rdx
1f79ac imul     rax, r15
1f79b0 add      rax, r12
1f79b3 mov      qword ptr [r14 + 0x1b0], rax
1f79ba shr      rax, 0x1b
1f79be movzx    r8d, al
1f79c2 mov      byte ptr [r14 + 0x168], r8b
1f79c9 imul     r8, r10
1f79cd xor      r8, r11
1f79d0 xor      r8, rbx
1f79d3 xor      rcx, r8
1f79d6 test     r9b, r9b
1f79d9 lea      rax, [rdx + r8]
1f79dd cmove    rax, rcx
1f79e1 mov      rcx, r14
1f79e4 mov      qword ptr [r14 + 0x130], rax
1f79eb call     0x1401f0910
1f79f0 mov      rcx, r14
1f79f3 call     0x1401ee070
1f79f8 cmp      eax, dword ptr [r14 + 0x1d8]
1f79ff jae      0x1401f7a0b
1f7a01 mov      edx, eax
1f7a03 mov      rcx, r14
1f7a06 call     0x1401f0910
1f7a0b mov      rsi, qword ptr [r14 + 0xe0]
1f7a12 mov      rbp, qword ptr [r14 + 0xd0]
1f7a19 mov      r11, qword ptr [r14 + 0x130]
1f7a20 movzx    edi, byte ptr [r14 + 0xe8]
1f7a28 mov      rax, r11
1f7a2b movzx    ecx, byte ptr [r14 + 0x168]
1f7a33 mov      rbx, qword ptr [r14 + 0xd8]
1f7a3a mov      r8, qword ptr [r14 + 0x1b8]
1f7a41 mov      r10, qword ptr [r14 + 0x1b0]
1f7a48 imul     rcx, rsi
1f7a4c lea      r9, [rbx + rbx*8]
1f7a50 xor      rcx, r9
1f7a53 xor      rcx, rbp
1f7a56 xor      rax, rcx
1f7a59 sub      r11, rcx
1f7a5c test     dil, dil
1f7a5f cmove    r11, rax
1f7a63 imul     r10, r15
1f7a67 mov      rcx, r11
1f7a6a add      r10, r12
1f7a6d mov      rax, r10
1f7a70 shr      rax, 0x1b
1f7a74 movzx    edx, al
1f7a77 mov      byte ptr [r14 + 0x168], dl
1f7a7e imul     rdx, rsi
1f7a82 xor      rdx, r9
1f7a85 xor      rdx, rbp
1f7a88 xor      rcx, rdx
1f7a8b test     dil, dil
1f7a8e lea      rax, [r11 + rdx]
1f7a92 cmove    rax, rcx
1f7a96 mov      rcx, r11
1f7a99 mov      qword ptr [r14 + 0x130], rax
1f7aa0 lea      rax, [r8 + 2]
1f7aa4 mov      qword ptr [r14 + 0x1b8], rax
1f7aab mov      r8d, 0xf5ae
1f7ab1 imul     r10, r15
1f7ab5 lea      rax, [rbx + rbx*4]
1f7ab9 add      rax, rax
1f7abc add      r10, r12
1f7abf mov      qword ptr [r14 + 0x1b0], r10
1f7ac6 shr      r10, 0x1b
1f7aca movzx    edx, r10b
1f7ace mov      byte ptr [r14 + 0x169], dl
1f7ad5 imul     rdx, rsi
1f7ad9 xor      rdx, rax
1f7adc xor      rdx, rbp
1f7adf xor      rcx, rdx
1f7ae2 test     dil, dil
1f7ae5 lea      rax, [r11 + rdx]
1f7ae9 cmove    rax, rcx
1f7aed mov      rcx, r14
1f7af0 mov      qword ptr [r14 + 0x138], rax
1f7af7 movzx    edx, byte ptr [r14 + 0x4ad]
1f7aff xor      rdx, qword ptr [r14 + 0x348]
1f7b06 call     0x1401f1520
1f7b0b mov      r8, qword ptr [r14 + 0x348]
1f7b12 movabs   rdi, 0xff51afd7ed558ccd
1f7b1c mov      rax, r8
1f7b1f movabs   rsi, 0xc4ceb9fe1a85ec53
1f7b29 xor      rax, qword ptr [r14 + 0x20]
1f7b2d mov      rcx, rax
1f7b30 shr      rcx, 0x21
1f7b34 xor      rcx, rax
1f7b37 imul     rcx, rdi
1f7b3b mov      rax, rcx
1f7b3e shr      rax, 0x21
1f7b42 xor      rax, rcx
1f7b45 imul     rax, rsi
1f7b49 mov      rdx, rax
1f7b4c shr      rdx, 0x21
1f7b50 xor      edx, eax
1f7b52 lea      eax, [rdx + 1]
1f7b55 mov      ecx, eax
1f7b57 xor      eax, edx
1f7b59 imul     ecx, edx
1f7b5c not      ecx
1f7b5e and      ecx, eax
1f7b60 test     cl, 1
1f7b63 je       0x1401f7bcc
1f7b65 and      r8b, 3
1f7b69 cmp      r8b, 1
1f7b6d jne      0x1401f7bcc
1f7b6f mov      rax, qword ptr [r14 + 0x1b0]
1f7b76 inc      qword ptr [r14 + 0x1b8]
1f7b7d imul     rax, r15
1f7b81 add      rax, r12
1f7b84 mov      qword ptr [r14 + 0x1b0], rax
1f7b8b shr      rax, 0x1b
1f7b8f movzx    eax, al
1f7b92 mov      byte ptr [r14 + 0x160], al
1f7b99 imul     rax, qword ptr [r14 + 0xe0]
1f7ba1 xor      rax, qword ptr [r14 + 0xd8]
1f7ba8 xor      rax, qword ptr [r14 + 0xd0]
1f7baf mov      rcx, rax
1f7bb2 add      rax, 0x17ed28
1f7bb8 xor      rcx, 0x17ed28
1f7bbf cmp      byte ptr [r14 + 0xe8], 0
1f7bc7 jmp      0x1401f81ca
1f7bcc mov      rcx, r14
1f7bcf call     0x1401ee070
1f7bd4 mov      ebx, eax
1f7bd6 cmp      eax, dword ptr [r14 + 0x1d8]
1f7bdd jb       0x1401f7c3c
1f7bdf mov      rax, qword ptr [r14 + 0x1b0]
1f7be6 inc      qword ptr [r14 + 0x1b8]
1f7bed imul     rax, r15
1f7bf1 add      rax, r12
1f7bf4 mov      qword ptr [r14 + 0x1b0], rax
1f7bfb shr      rax, 0x1b
1f7bff movzx    eax, al
1f7c02 mov      byte ptr [r14 + 0x160], al
1f7c09 imul     rax, qword ptr [r14 + 0xe0]
1f7c11 xor      rax, qword ptr [r14 + 0xd8]
1f7c18 xor      rax, qword ptr [r14 + 0xd0]
1f7c1f mov      rcx, rax
1f7c22 add      rax, 0xfe1ab
1f7c28 xor      rcx, 0xfe1ab
1f7c2f cmp      byte ptr [r14 + 0xe8], 0
1f7c37 jmp      0x1401f81ca
1f7c3c mov      edx, ebx
1f7c3e mov      rcx, r14
1f7c41 call     0x1401f25b0
1f7c46 movsxd   rcx, dword ptr [r14 + 0x11e0]
1f7c4d movabs   r8, 0xd6e8feb86659fd93
1f7c57 mov      rdx, qword ptr [r14 + 0x20]
1f7c5b mov      rax, rbx
1f7c5e imul     rax, r8
1f7c62 imul     rcx, r15
1f7c66 rol      rdx, 0x11
1f7c6a xor      rax, rdx
1f7c6d xor      rcx, qword ptr [r14 + 0x260]
1f7c74 xor      rax, rcx
1f7c77 mov      rcx, rax
1f7c7a shr      rcx, 0x21
1f7c7e xor      rcx, rax
1f7c81 imul     rcx, rdi
1f7c85 mov      rdx, rcx
1f7c88 shr      rdx, 0x21
1f7c8c xor      rdx, rcx
1f7c8f imul     rdx, rsi
1f7c93 mov      rax, rdx
1f7c96 shr      rax, 0x21
1f7c9a xor      rax, rdx
1f7c9d mov      r10, rax
1f7ca0 shr      r10, 0x1d
1f7ca4 xor      r10, rax
1f7ca7 or       r10, 1
1f7cab mov      rax, r10
1f7cae mov      qword ptr [r14 + 0x260], r10
1f7cb5 and      eax, 0x3ff
1f7cba cmp      rax, 0x2c5
1f7cc0 jne      0x1401f7cd1
1f7cc2 mov      rcx, r14
1f7cc5 call     0x1402297e0
1f7cca mov      r10, qword ptr [r14 + 0x260]
1f7cd1 movzx    eax, r10b
1f7cd5 and      al, 0x1f
1f7cd7 cmp      al, 0x15
1f7cd9 jne      0x1401f7dc6
1f7cdf movsxd   rax, dword ptr [r14 + 0x11e0]
1f7ce6 xor      rax, 0x5a5a
1f7cec mov      rcx, qword ptr [r14 + 0x20]
1f7cf0 imul     rax, r15
1f7cf4 rol      rcx, 0x11
1f7cf8 xor      rax, r10
1f7cfb xor      rcx, rax
1f7cfe movabs   rax, 0x8f70feda99a6026d
1f7d08 xor      rcx, rax
1f7d0b mov      rax, rcx
1f7d0e shr      rax, 0x21
1f7d12 xor      rax, rcx
1f7d15 imul     rax, rdi
1f7d19 mov      rcx, rax
1f7d1c shr      rcx, 0x21
1f7d20 xor      rcx, rax
1f7d23 imul     rcx, rsi
1f7d27 mov      rax, rcx
1f7d2a shr      rax, 0x21
1f7d2e xor      rax, rcx
1f7d31 mov      r9, rax
1f7d34 shr      r9, 0x1d
1f7d38 xor      r9, rax
1f7d3b or       r9, 1
1f7d3f mov      rax, r9
1f7d42 mov      rcx, r9
1f7d45 shr      rax, 8
1f7d49 and      eax, 3
1f7d4c shr      rcx, 0x28
1f7d50 imul     r8, rax, 0x3e
1f7d54 mov      eax, 0x8421085
1f7d59 mul      ecx
1f7d5b mov      eax, ecx
1f7d5d sub      eax, edx
1f7d5f shr      eax, 1
1f7d61 add      eax, edx
1f7d63 shr      eax, 5
1f7d66 imul     eax, eax, 0x3e
1f7d69 sub      ecx, eax
1f7d6b mov      eax, ecx
1f7d6d add      r8, rax
1f7d70 mov      rax, qword ptr [r14 + 0x4b8]
1f7d77 movsxd   rcx, dword ptr [rax + r8*4]
1f7d7b movsxd   rax, dword ptr [r14 + 0x4c8]
1f7d82 xor      rcx, rax
1f7d85 add      rcx, qword ptr [r14 + 0x4c0]
1f7d8c xor      rcx, r9
1f7d8f mov      rax, rcx
1f7d92 shr      rax, 0x21
1f7d96 xor      rax, rcx
1f7d99 imul     rax, rdi
1f7d9d mov      rcx, rax
1f7da0 shr      rcx, 0x21
1f7da4 xor      rcx, rax
1f7da7 imul     rcx, rsi
1f7dab mov      rax, rcx
1f7dae shr      rax, 0x21
1f7db2 xor      rax, rcx
1f7db5 xor      rax, r10
1f7db8 inc      qword ptr [r14 + 0x268]
1f7dbf mov      qword ptr [r14 + 0x260], rax
1f7dc6 inc      dword ptr [r14 + 0x200]
1f7dcd mov      eax, dword ptr [r14 + 0x200]
1f7dd4 cmp      eax, dword ptr [r14 + 0x1fc]
1f7ddb jb       0x1401f7df0
1f7ddd mov      rcx, r14
1f7de0 mov      dword ptr [r14 + 0x200], 0
1f7deb call     0x1401ef7c0
1f7df0 mov      r8d, ebx
1f7df3 mov      edx, ebx
1f7df5 mov      rcx, r14
1f7df8 call     0x1401f0660
1f7dfd inc      qword ptr [r14 + 0x1b8]
1f7e04 mov      rcx, rbx
1f7e07 mov      r9, qword ptr [r14 + 0x1b0]
1f7e0e mov      rbp, r12
1f7e11 mov      r10, qword ptr [r14 + 0x1b8]
1f7e18 imul     r9, r15
1f7e1c add      r9, r12
1f7e1f lea      r12d, [rbx + 1]
1f7e23 mov      qword ptr [r14 + 0x1b0], r9
1f7e2a mov      rax, r9
1f7e2d shr      rax, 0x1b
1f7e31 movzx    edx, al
1f7e34 mov      byte ptr [r14 + 0x168], dl
1f7e3b mov      rdi, qword ptr [r14 + 0xe0]
1f7e42 mov      r11, qword ptr [r14 + 0xd8]
1f7e49 mov      rsi, qword ptr [r14 + 0xd0]
1f7e50 movzx    r15d, byte ptr [r14 + 0xe8]
1f7e58 imul     rdx, rdi
1f7e5c lea      rax, [r11 + r11*8]
1f7e60 xor      rdx, rax
1f7e63 xor      rdx, rsi
1f7e66 xor      rcx, rdx
1f7e69 test     r15b, r15b
1f7e6c lea      rax, [rbx + rdx]
1f7e70 cmove    rax, rcx
1f7e74 inc      r10
1f7e77 mov      qword ptr [r14 + 0x130], rax
1f7e7e mov      rcx, qword ptr [r14 + 0x1d0]
1f7e85 mov      rax, qword ptr [r14 + 0x48]
1f7e89 mov      qword ptr [rsp + 0x60], r10
1f7e8e movzx    r8d, byte ptr [rcx + rbx]
1f7e93 xor      r8b, byte ptr [rax + rbx]
1f7e97 movabs   rax, 0x9e3779b97f4a7c15
1f7ea1 imul     r9, rax
1f7ea5 mov      qword ptr [r14 + 0x1b8], r10
1f7eac add      r9, rbp
1f7eaf mov      rax, r9
1f7eb2 shr      rax, 0x1b
1f7eb6 movzx    edx, al
1f7eb9 lea      rax, [r11 + r11]
1f7ebd mov      byte ptr [r14 + 0x161], dl
1f7ec4 imul     rdx, rdi
1f7ec8 xor      rdx, rax
1f7ecb xor      rdx, rsi
1f7ece mov      rcx, rdx
1f7ed1 xor      rcx, r12
1f7ed4 test     r15b, r15b
1f7ed7 lea      rax, [rdx + r12]
1f7edb cmove    rax, rcx
1f7edf mov      qword ptr [r14 + 0xf8], rax
1f7ee6 movsxd   rdx, dword ptr [r14 + 0x11e0]
1f7eed mov      r10, qword ptr [r14 + 0x20]
1f7ef1 mov      rcx, rdx
1f7ef4 xor      rcx, qword ptr [r14 + 0x350]
1f7efb xor      rcx, r10
1f7efe xor      rcx, r12
1f7f01 xor      rcx, qword ptr [r14 + 0x348]
1f7f08 mov      rax, rcx
1f7f0b shr      rax, 0x21
1f7f0f xor      rax, rcx
1f7f12 movabs   rcx, 0xff51afd7ed558ccd
1f7f1c imul     rax, rcx
1f7f20 mov      rcx, rax
1f7f23 shr      rcx, 0x21
1f7f27 xor      rcx, rax
1f7f2a movabs   rax, 0xc4ceb9fe1a85ec53
1f7f34 imul     rcx, rax
1f7f38 movzx    eax, r8b
1f7f3c mov      rbx, rcx
1f7f3f xor      rax, 0xdd
1f7f45 shr      rbx, 0x21
1f7f49 xor      rbx, rcx
1f7f4c lea      rcx, [rip - 0x1f7f53]
1f7f53 mov      qword ptr [r14 + 0x28], rbx
1f7f57 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
1f7f5f xor      bpl, 0x63
1f7f63 inc      edx
1f7f65 mov      dword ptr [r14 + 0x11e0], edx
1f7f6c movabs   r8, 0xff51afd7ed558ccd
1f7f76 test     dl, 0x1f
1f7f79 jne      0x1401f7fbf
1f7f7b movsxd   rax, edx
1f7f7e xor      rax, r10
1f7f81 xor      rax, qword ptr [r14 + 0x348]
1f7f88 mov      rcx, rax
1f7f8b shr      rcx, 0x21
1f7f8f xor      rcx, rax
1f7f92 movabs   rax, 0xc4ceb9fe1a85ec53
1f7f9c imul     rcx, r8
1f7fa0 mov      rdx, rcx
1f7fa3 shr      rdx, 0x21
1f7fa7 xor      rdx, rcx
1f7faa imul     rdx, rax
1f7fae mov      rax, rdx
1f7fb1 shr      rax, 0x21
1f7fb5 xor      rax, rdx
1f7fb8 mov      qword ptr [r14 + 0x348], rax
1f7fbf movzx    edx, bpl
1f7fc3 xor      r10, rdx
1f7fc6 mov      byte ptr [r14 + 0x4ad], bpl
1f7fcd xor      r10, r12
1f7fd0 movabs   r12, 0xc4ceb9fe1a85ec53
1f7fda mov      rax, r10
1f7fdd shr      rax, 0x21
1f7fe1 xor      rax, r10
1f7fe4 movabs   r10, 0x9e3779b97f4a7c15
1f7fee imul     rax, r8
1f7ff2 imul     rdx, r10
1f7ff6 imul     r9, r10
1f7ffa mov      rcx, rax
1f7ffd shr      rcx, 0x21
1f8001 xor      rcx, rax
1f8004 imul     rcx, r12
1f8008 mov      rax, rcx
1f800b shr      rax, 0x21
1f800f xor      rax, rcx
1f8012 mov      ecx, dword ptr [r14 + 0x1178]
1f8019 mov      qword ptr [r14 + 0x20], rax
1f801d movabs   rax, 0xd6e8feb86659fd93
1f8027 imul     rcx, rax
1f802b xor      rcx, rdx
1f802e xor      rcx, rbx
1f8031 movabs   rbx, 0x2545f4914f6cdd1d
1f803b mov      rax, rcx
1f803e add      r9, rbx
1f8041 shr      rax, 0x21
1f8045 xor      rax, rcx
1f8048 imul     rax, r8
1f804c mov      rdx, rax
1f804f shr      rdx, 0x21
1f8053 xor      rdx, rax
1f8056 mov      rax, qword ptr [rsp + 0x60]
1f805b imul     rdx, r12
1f805f shr      rdx, 0x21
1f8063 and      edx, 3
1f8066 inc      rax
1f8069 mov      qword ptr [r14 + 0x1b8], rax
1f8070 cmp      bpl, 0x3e
1f8074 jae      0x1401f810e
1f807a inc      qword ptr [r14 + 0x11a0]
1f8081 lea      rax, [rip - 0x1f8088]
1f8088 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
1f8090 mov      qword ptr [r14 + 0x1b0], r9
1f8097 shr      r9, 0x1b
1f809b movzx    eax, r9b
1f809f mov      byte ptr [r14 + 0x160], al
1f80a6 imul     rax, rdi
1f80aa mov      ebx, edx
1f80ac xor      rax, rsi
1f80af xor      rax, r11
1f80b2 mov      rcx, rax
1f80b5 add      rax, r8
1f80b8 xor      rcx, r8
1f80bb movzx    r8d, bpl
1f80bf test     r15b, r15b
1f80c2 cmove    rax, rcx
1f80c6 mov      rcx, r14
1f80c9 mov      qword ptr [r14 + 0xf0], rax
1f80d0 call     0x1401f1f50
1f80d5 mov      r8, qword ptr [rsp + 0x70]
1f80da lea      edx, [r13 - 1]
1f80de mov      eax, eax
1f80e0 imul     rcx, rbx, 0x3e
1f80e4 add      rcx, rax
1f80e7 mov      rax, qword ptr [r14 + 0x4b8]
1f80ee movsxd   r9, dword ptr [rax + rcx*4]
1f80f2 mov      rcx, r14
1f80f5 movsxd   rax, dword ptr [r14 + 0x4c8]
1f80fc xor      r9, rax
1f80ff add      r9, qword ptr [r14 + 0x4c0]
1f8106 call     r9
1f8109 jmp      0x1401f81d5
1f810e inc      dword ptr [r14 + 0x11a8]
1f8115 mov      rax, r9
1f8118 shr      rax, 0x1b
1f811c movzx    ecx, al
1f811f lea      rax, [r11*4]
1f8127 mov      byte ptr [r14 + 0x163], cl
1f812e imul     rcx, rdi
1f8132 imul     r9, r10
1f8136 xor      rcx, rax
1f8139 xor      rcx, rsi
1f813c mov      qword ptr [r14 + 0x108], rcx
1f8143 mov      r8, qword ptr [r14 + 0x1b8]
1f814a add      r9, rbx
1f814d mov      rax, r9
1f8150 shr      rax, 0x1b
1f8154 movzx    edx, al
1f8157 mov      byte ptr [r14 + 0x16a], dl
1f815e imul     rax, r11, 0xb
1f8162 imul     rdx, rdi
1f8166 xor      rdx, rax
1f8169 xor      rdx, rsi
1f816c mov      rcx, rdx
1f816f xor      rcx, 1
1f8173 test     r15b, r15b
1f8176 lea      rax, [rdx + 1]
1f817a cmove    rax, rcx
1f817e mov      qword ptr [r14 + 0x140], rax
1f8185 lea      rax, [r8 + 2]
1f8189 mov      qword ptr [r14 + 0x1b8], rax
1f8190 imul     r9, r10
1f8194 add      r9, rbx
1f8197 mov      qword ptr [r14 + 0x1b0], r9
1f819e shr      r9, 0x1b
1f81a2 movzx    eax, r9b
1f81a6 mov      byte ptr [r14 + 0x160], al
1f81ad imul     rax, rdi
1f81b1 xor      rax, rsi
1f81b4 xor      rax, r11
1f81b7 mov      rcx, rax
1f81ba add      rax, 0xfe1ab
1f81c0 xor      rcx, 0xfe1ab
1f81c7 test     r15b, r15b
1f81ca cmove    rax, rcx
1f81ce mov      qword ptr [r14 + 0xf0], rax
1f81d5 mov      r12, qword ptr [rsp + 0x28]
1f81da mov      rsi, qword ptr [rsp + 0x68]
1f81df mov      r15, qword ptr [rsp + 0x20]
1f81e4 add      rsp, 0x30
1f81e8 pop      r14
1f81ea pop      r13
1f81ec pop      rdi
1f81ed pop      rbp
1f81ee pop      rbx
1f81ef ret      
1f81f0 mov      edx, 0x54485254
1f81f5 mov      rcx, r14
1f81f8 call     0x1401ed830
1f81fd int3     
1f81fe mov      edx, 0x43414e59
1f8203 mov      rcx, r14
1f8206 call     0x1401ed830
1f820b int3     
