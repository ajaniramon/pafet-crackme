222470 mov      qword ptr [rsp + 0x18], r8
222475 push     rbx
222476 push     rbp
222477 push     rdi
222478 push     r13
22247a push     r14
22247c sub      rsp, 0x30
222480 movsxd   rax, dword ptr [rcx + 0x11e0]
222487 mov      r14, rcx
22248a mov      r13d, edx
22248d movabs   rcx, 0xc0acca8e825d1261
222497 imul     rax, rcx
22249b movabs   rcx, 0x62f540450383965e
2224a5 movabs   rbp, 0xff51afd7ed558ccd
2224af xor      rax, qword ptr [r14 + 0x28]
2224b3 mov      rdi, r8
2224b6 mov      qword ptr [rsp + 0x60], rax
2224bb mov      rax, qword ptr [rsp + 0x60]
2224c0 movsxd   rax, dword ptr [r14 + 0x11e0]
2224c7 imul     rax, rcx
2224cb movabs   rcx, 0x843dde1b80c81a4b
2224d5 xor      rax, qword ptr [r14 + 0x28]
2224d9 mov      qword ptr [rsp + 0x60], rax
2224de mov      rax, qword ptr [rsp + 0x60]
2224e3 movsxd   rax, dword ptr [r14 + 0x11e0]
2224ea imul     rax, rcx
2224ee movabs   rcx, 0x52fcc90b08b3860e
2224f8 xor      rax, qword ptr [r14 + 0x28]
2224fc mov      qword ptr [rsp + 0x60], rax
222501 mov      rax, qword ptr [rsp + 0x60]
222506 mov      rax, qword ptr [r14 + 0x2e0]
22250d mov      rax, qword ptr [r14 + 0x2e0]
222514 add      rax, rcx
222517 mov      rcx, rax
22251a shr      rcx, 0x21
22251e xor      rcx, rax
222521 movabs   rax, 0xc4ceb9fe1a85ec53
22252b imul     rcx, rbp
22252f mov      rdx, rcx
222532 shr      rdx, 0x21
222536 xor      rdx, rcx
222539 mov      rcx, r14
22253c imul     rdx, rax
222540 mov      rax, rdx
222543 shr      rax, 0x21
222547 xor      rdx, rax
22254a mov      rax, qword ptr [r14 + 0x2e0]
222551 shr      rax, 3
222555 xor      rax, rdx
222558 mov      qword ptr [r14 + 0x2e0], rax
22255f call     0x1401f1e80
222564 mov      rcx, r14
222567 mov      ebx, eax
222569 call     0x1401ee940
22256e and      ebx, 0x3f
222571 je       0x140222585
222573 mov      ecx, ebx
222575 mov      edx, 1
22257a shl      rdx, cl
22257d dec      rdx
222580 and      rdx, rax
222583 jmp      0x140222587
222585 xor      edx, edx
222587 mov      rcx, r14
22258a call     0x1401ee820
22258f mov      rax, qword ptr [r14 + 0x2e0]
222596 test     r13d, r13d
222599 jns      0x1402230d7
22259f cmp      qword ptr [r14 + 0x11b8], rdi
2225a6 jne      0x1402230e5
2225ac movsxd   rax, dword ptr [r14 + 0x11e0]
2225b3 movabs   rcx, 0x4be23517cc52bb1a
2225bd imul     rax, rcx
2225c1 mov      rcx, r14
2225c4 xor      rax, qword ptr [r14 + 0x28]
2225c8 mov      qword ptr [rsp + 0x60], rax
2225cd mov      rax, qword ptr [rsp + 0x60]
2225d2 call     0x1401ee450
2225d7 test     eax, eax
2225d9 jne      0x1402230cb
2225df cmp      dword ptr [r14 + 0xad0], eax
2225e6 jne      0x1402230cb
2225ec mov      r8, qword ptr [r14 + 0xf0]
2225f3 movzx    ecx, byte ptr [r14 + 0x160]
2225fb mov      rax, r8
2225fe mov      r10, qword ptr [r14 + 0xe0]
222605 mov      rbx, qword ptr [r14 + 0xd0]
22260c mov      r11, qword ptr [r14 + 0xd8]
222613 movzx    edi, byte ptr [r14 + 0xe8]
22261b mov      r9, qword ptr [r14 + 0x1b0]
222622 imul     rcx, r10
222626 mov      qword ptr [rsp + 0x68], rsi
22262b mov      rsi, qword ptr [r14 + 0x1b8]
222632 xor      rcx, rbx
222635 xor      rcx, r11
222638 mov      qword ptr [rsp + 0x28], r12
22263d xor      rax, rcx
222640 mov      qword ptr [rsp + 0x20], r15
222645 sub      r8, rcx
222648 movabs   r15, 0x9e3779b97f4a7c15
222652 test     dil, dil
222655 movabs   r12, 0x2545f4914f6cdd1d
22265f cmove    r8, rax
222663 inc      rsi
222666 imul     r9, r15
22266a mov      qword ptr [r14 + 0x1b8], rsi
222671 mov      rcx, r8
222674 add      r9, r12
222677 mov      qword ptr [r14 + 0x1b0], r9
22267e mov      rax, r9
222681 shr      rax, 0x1b
222685 movzx    edx, al
222688 mov      byte ptr [r14 + 0x160], dl
22268f imul     rdx, r10
222693 xor      rdx, rbx
222696 xor      rdx, r11
222699 xor      rcx, rdx
22269c test     dil, dil
22269f lea      rax, [r8 + rdx]
2226a3 cmove    rax, rcx
2226a7 mov      qword ptr [r14 + 0xf0], rax
2226ae cmp      r8d, 0x2a0025
2226b5 jne      0x1402230bc
2226bb mov      eax, r13d
2226be btr      eax, 0x1f
2226c2 cmp      eax, 2
2226c5 jae      0x140222711
2226c7 imul     r9, r15
2226cb lea      rax, [rsi + 1]
2226cf mov      qword ptr [r14 + 0x1b8], rax
2226d6 add      r9, r12
2226d9 mov      qword ptr [r14 + 0x1b0], r9
2226e0 shr      r9, 0x1b
2226e4 movzx    eax, r9b
2226e8 mov      byte ptr [r14 + 0x160], al
2226ef imul     rax, r10
2226f3 xor      rax, rbx
2226f6 xor      rax, r11
2226f9 mov      rcx, rax
2226fc add      rax, 0x85b36
222702 xor      rcx, 0x85b36
222709 test     dil, dil
22270c jmp      0x1402230b1
222711 mov      rcx, r14
222714 call     0x1401ee070
222719 movzx    ecx, byte ptr [r14 + 0x4ad]
222721 movabs   r8, 0xc4ceb9fe1a85ec53
22272b mov      r11, qword ptr [r14 + 0xe0]
222732 mov      r10, qword ptr [r14 + 0xd0]
222739 movzx    r9d, byte ptr [r14 + 0xe8]
222741 mov      eax, eax
222743 xor      rcx, rax
222746 xor      rcx, qword ptr [r14 + 0x11e8]
22274d mov      rax, rcx
222750 shr      rax, 0x21
222754 xor      rax, rcx
222757 imul     rax, rbp
22275b mov      rcx, rax
22275e shr      rcx, 0x21
222762 xor      rcx, rax
222765 imul     rcx, r8
222769 mov      rdx, rcx
22276c shr      rdx, 0x21
222770 xor      rdx, rcx
222773 mov      qword ptr [r14 + 0x11e8], rdx
22277a xor      rdx, qword ptr [r14 + 0x20]
22277e xor      rdx, qword ptr [r14 + 0x28]
222782 mov      rax, rdx
222785 shr      rax, 0x21
222789 xor      rax, rdx
22278c imul     rax, rbp
222790 mov      rcx, rax
222793 shr      rcx, 0x21
222797 xor      rcx, rax
22279a imul     rcx, r8
22279e mov      rax, rcx
2227a1 shr      rax, 0x21
2227a5 xor      rax, rcx
2227a8 mov      qword ptr [r14 + 0x20], rax
2227ac mov      rdx, qword ptr [r14 + 0x138]
2227b3 movzx    ecx, byte ptr [r14 + 0x169]
2227bb mov      rax, qword ptr [r14 + 0xd8]
2227c2 imul     rcx, r11
2227c6 lea      rbx, [rax + rax*4]
2227ca mov      rax, rdx
2227cd add      rbx, rbx
2227d0 xor      rcx, rbx
2227d3 xor      rcx, r10
2227d6 xor      rax, rcx
2227d9 sub      rdx, rcx
2227dc test     r9b, r9b
2227df cmove    rdx, rax
2227e3 mov      rax, qword ptr [r14 + 0x1b0]
2227ea inc      qword ptr [r14 + 0x1b8]
2227f1 imul     rax, r15
2227f5 add      rax, r12
2227f8 mov      qword ptr [r14 + 0x1b0], rax
2227ff shr      rax, 0x1b
222803 movzx    r8d, al
222807 mov      byte ptr [r14 + 0x169], r8b
22280e imul     r8, r11
222812 xor      r8, rbx
222815 xor      r8, r10
222818 mov      rcx, r8
22281b xor      rcx, rdx
22281e test     r9b, r9b
222821 lea      rax, [r8 + rdx]
222825 cmove    rax, rcx
222829 mov      rcx, r14
22282c mov      qword ptr [r14 + 0x138], rax
222833 call     0x1401f0910
222838 mov      rax, qword ptr [r14 + 0xd8]
22283f mov      rdx, qword ptr [r14 + 0x130]
222846 mov      r10, qword ptr [r14 + 0xe0]
22284d movzx    ecx, byte ptr [r14 + 0x168]
222855 mov      rbx, qword ptr [r14 + 0xd0]
22285c lea      r11, [rax + rax*8]
222860 movzx    r9d, byte ptr [r14 + 0xe8]
222868 mov      rax, rdx
22286b imul     rcx, r10
22286f xor      rcx, r11
222872 xor      rcx, rbx
222875 xor      rax, rcx
222878 sub      rdx, rcx
22287b test     r9b, r9b
22287e cmove    rdx, rax
222882 mov      rax, qword ptr [r14 + 0x1b0]
222889 inc      qword ptr [r14 + 0x1b8]
222890 mov      rcx, rdx
222893 imul     rax, r15
222897 add      rax, r12
22289a mov      qword ptr [r14 + 0x1b0], rax
2228a1 shr      rax, 0x1b
2228a5 movzx    r8d, al
2228a9 mov      byte ptr [r14 + 0x168], r8b
2228b0 imul     r8, r10
2228b4 xor      r8, r11
2228b7 xor      r8, rbx
2228ba xor      rcx, r8
2228bd test     r9b, r9b
2228c0 lea      rax, [rdx + r8]
2228c4 cmove    rax, rcx
2228c8 mov      rcx, r14
2228cb mov      qword ptr [r14 + 0x130], rax
2228d2 call     0x1401f0910
2228d7 mov      rcx, r14
2228da call     0x1401ee070
2228df cmp      eax, dword ptr [r14 + 0x1d8]
2228e6 jae      0x1402228f2
2228e8 mov      edx, eax
2228ea mov      rcx, r14
2228ed call     0x1401f0910
2228f2 mov      rsi, qword ptr [r14 + 0xe0]
2228f9 mov      rbp, qword ptr [r14 + 0xd0]
222900 mov      r11, qword ptr [r14 + 0x130]
222907 movzx    edi, byte ptr [r14 + 0xe8]
22290f mov      rax, r11
222912 movzx    ecx, byte ptr [r14 + 0x168]
22291a mov      rbx, qword ptr [r14 + 0xd8]
222921 mov      r8, qword ptr [r14 + 0x1b8]
222928 mov      r10, qword ptr [r14 + 0x1b0]
22292f imul     rcx, rsi
222933 lea      r9, [rbx + rbx*8]
222937 xor      rcx, r9
22293a xor      rcx, rbp
22293d xor      rax, rcx
222940 sub      r11, rcx
222943 test     dil, dil
222946 cmove    r11, rax
22294a imul     r10, r15
22294e mov      rcx, r11
222951 add      r10, r12
222954 mov      rax, r10
222957 shr      rax, 0x1b
22295b movzx    edx, al
22295e mov      byte ptr [r14 + 0x168], dl
222965 imul     rdx, rsi
222969 xor      rdx, r9
22296c xor      rdx, rbp
22296f xor      rcx, rdx
222972 test     dil, dil
222975 lea      rax, [r11 + rdx]
222979 cmove    rax, rcx
22297d mov      rcx, r11
222980 mov      qword ptr [r14 + 0x130], rax
222987 lea      rax, [r8 + 2]
22298b mov      qword ptr [r14 + 0x1b8], rax
222992 mov      r8d, 0x72a3
222998 imul     r10, r15
22299c lea      rax, [rbx + rbx*4]
2229a0 add      rax, rax
2229a3 add      r10, r12
2229a6 mov      qword ptr [r14 + 0x1b0], r10
2229ad shr      r10, 0x1b
2229b1 movzx    edx, r10b
2229b5 mov      byte ptr [r14 + 0x169], dl
2229bc imul     rdx, rsi
2229c0 xor      rdx, rax
2229c3 xor      rdx, rbp
2229c6 xor      rcx, rdx
2229c9 test     dil, dil
2229cc lea      rax, [r11 + rdx]
2229d0 cmove    rax, rcx
2229d4 mov      rcx, r14
2229d7 mov      qword ptr [r14 + 0x138], rax
2229de movzx    edx, byte ptr [r14 + 0x4ad]
2229e6 xor      rdx, qword ptr [r14 + 0x348]
2229ed call     0x1401f1520
2229f2 mov      r8, qword ptr [r14 + 0x348]
2229f9 movabs   rdi, 0xff51afd7ed558ccd
222a03 mov      rax, r8
222a06 movabs   rsi, 0xc4ceb9fe1a85ec53
222a10 xor      rax, qword ptr [r14 + 0x20]
222a14 mov      rcx, rax
222a17 shr      rcx, 0x21
222a1b xor      rcx, rax
222a1e imul     rcx, rdi
222a22 mov      rax, rcx
222a25 shr      rax, 0x21
222a29 xor      rax, rcx
222a2c imul     rax, rsi
222a30 mov      rdx, rax
222a33 shr      rdx, 0x21
222a37 xor      edx, eax
222a39 lea      eax, [rdx + 1]
222a3c mov      ecx, eax
222a3e xor      eax, edx
222a40 imul     ecx, edx
222a43 not      ecx
222a45 and      ecx, eax
222a47 test     cl, 1
222a4a je       0x140222ab3
222a4c and      r8b, 3
222a50 cmp      r8b, 1
222a54 jne      0x140222ab3
222a56 mov      rax, qword ptr [r14 + 0x1b0]
222a5d inc      qword ptr [r14 + 0x1b8]
222a64 imul     rax, r15
222a68 add      rax, r12
222a6b mov      qword ptr [r14 + 0x1b0], rax
222a72 shr      rax, 0x1b
222a76 movzx    eax, al
222a79 mov      byte ptr [r14 + 0x160], al
222a80 imul     rax, qword ptr [r14 + 0xe0]
222a88 xor      rax, qword ptr [r14 + 0xd8]
222a8f xor      rax, qword ptr [r14 + 0xd0]
222a96 mov      rcx, rax
222a99 add      rax, 0x3dd18f
222a9f xor      rcx, 0x3dd18f
222aa6 cmp      byte ptr [r14 + 0xe8], 0
222aae jmp      0x1402230b1
222ab3 mov      rcx, r14
222ab6 call     0x1401ee070
222abb mov      ebx, eax
222abd cmp      eax, dword ptr [r14 + 0x1d8]
222ac4 jb       0x140222b23
222ac6 mov      rax, qword ptr [r14 + 0x1b0]
222acd inc      qword ptr [r14 + 0x1b8]
222ad4 imul     rax, r15
222ad8 add      rax, r12
222adb mov      qword ptr [r14 + 0x1b0], rax
222ae2 shr      rax, 0x1b
222ae6 movzx    eax, al
222ae9 mov      byte ptr [r14 + 0x160], al
222af0 imul     rax, qword ptr [r14 + 0xe0]
222af8 xor      rax, qword ptr [r14 + 0xd8]
222aff xor      rax, qword ptr [r14 + 0xd0]
222b06 mov      rcx, rax
222b09 add      rax, 0xfe1ab
222b0f xor      rcx, 0xfe1ab
222b16 cmp      byte ptr [r14 + 0xe8], 0
222b1e jmp      0x1402230b1
222b23 mov      edx, ebx
222b25 mov      rcx, r14
222b28 call     0x1401f25b0
222b2d movsxd   rcx, dword ptr [r14 + 0x11e0]
222b34 movabs   r8, 0xd6e8feb86659fd93
222b3e mov      rdx, qword ptr [r14 + 0x20]
222b42 mov      rax, rbx
222b45 imul     rax, r8
222b49 imul     rcx, r15
222b4d rol      rdx, 0x11
222b51 xor      rax, rdx
222b54 xor      rcx, qword ptr [r14 + 0x260]
222b5b xor      rax, rcx
222b5e mov      rcx, rax
222b61 shr      rcx, 0x21
222b65 xor      rcx, rax
222b68 imul     rcx, rdi
222b6c mov      rdx, rcx
222b6f shr      rdx, 0x21
222b73 xor      rdx, rcx
222b76 imul     rdx, rsi
222b7a mov      rax, rdx
222b7d shr      rax, 0x21
222b81 xor      rax, rdx
222b84 mov      r10, rax
222b87 shr      r10, 0x1d
222b8b xor      r10, rax
222b8e or       r10, 1
222b92 mov      rax, r10
222b95 mov      qword ptr [r14 + 0x260], r10
222b9c and      eax, 0x3ff
222ba1 cmp      rax, 0x2c5
222ba7 jne      0x140222bb8
222ba9 mov      rcx, r14
222bac call     0x1402297e0
222bb1 mov      r10, qword ptr [r14 + 0x260]
222bb8 movzx    eax, r10b
222bbc and      al, 0x1f
222bbe cmp      al, 0x15
222bc0 jne      0x140222cad
222bc6 movsxd   rax, dword ptr [r14 + 0x11e0]
222bcd xor      rax, 0x5a5a
222bd3 mov      rcx, qword ptr [r14 + 0x20]
222bd7 imul     rax, r15
222bdb rol      rcx, 0x11
222bdf xor      rax, r10
222be2 xor      rcx, rax
222be5 movabs   rax, 0x8f70feda99a6026d
222bef xor      rcx, rax
222bf2 mov      rax, rcx
222bf5 shr      rax, 0x21
222bf9 xor      rax, rcx
222bfc imul     rax, rdi
222c00 mov      rcx, rax
222c03 shr      rcx, 0x21
222c07 xor      rcx, rax
222c0a imul     rcx, rsi
222c0e mov      rax, rcx
222c11 shr      rax, 0x21
222c15 xor      rax, rcx
222c18 mov      r9, rax
222c1b shr      r9, 0x1d
222c1f xor      r9, rax
222c22 or       r9, 1
222c26 mov      rax, r9
222c29 mov      rcx, r9
222c2c shr      rax, 8
222c30 and      eax, 3
222c33 shr      rcx, 0x28
222c37 imul     r8, rax, 0x3e
222c3b mov      eax, 0x8421085
222c40 mul      ecx
222c42 mov      eax, ecx
222c44 sub      eax, edx
222c46 shr      eax, 1
222c48 add      eax, edx
222c4a shr      eax, 5
222c4d imul     eax, eax, 0x3e
222c50 sub      ecx, eax
222c52 mov      eax, ecx
222c54 add      r8, rax
222c57 mov      rax, qword ptr [r14 + 0x4b8]
222c5e movsxd   rcx, dword ptr [rax + r8*4]
222c62 movsxd   rax, dword ptr [r14 + 0x4c8]
222c69 xor      rcx, rax
222c6c add      rcx, qword ptr [r14 + 0x4c0]
222c73 xor      rcx, r9
222c76 mov      rax, rcx
222c79 shr      rax, 0x21
222c7d xor      rax, rcx
222c80 imul     rax, rdi
222c84 mov      rcx, rax
222c87 shr      rcx, 0x21
222c8b xor      rcx, rax
222c8e imul     rcx, rsi
222c92 mov      rax, rcx
222c95 shr      rax, 0x21
222c99 xor      rax, rcx
222c9c xor      rax, r10
222c9f inc      qword ptr [r14 + 0x268]
222ca6 mov      qword ptr [r14 + 0x260], rax
222cad inc      dword ptr [r14 + 0x200]
222cb4 mov      eax, dword ptr [r14 + 0x200]
222cbb cmp      eax, dword ptr [r14 + 0x1fc]
222cc2 jb       0x140222cd7
222cc4 mov      rcx, r14
222cc7 mov      dword ptr [r14 + 0x200], 0
222cd2 call     0x1401ef7c0
222cd7 mov      r8d, ebx
222cda mov      edx, ebx
222cdc mov      rcx, r14
222cdf call     0x1401f0660
222ce4 inc      qword ptr [r14 + 0x1b8]
222ceb mov      rcx, rbx
222cee mov      r9, qword ptr [r14 + 0x1b0]
222cf5 mov      rbp, r12
222cf8 mov      r10, qword ptr [r14 + 0x1b8]
222cff imul     r9, r15
222d03 add      r9, r12
222d06 lea      r12d, [rbx + 1]
222d0a mov      qword ptr [r14 + 0x1b0], r9
222d11 mov      rax, r9
222d14 shr      rax, 0x1b
222d18 movzx    edx, al
222d1b mov      byte ptr [r14 + 0x168], dl
222d22 mov      rdi, qword ptr [r14 + 0xe0]
222d29 mov      r11, qword ptr [r14 + 0xd8]
222d30 mov      rsi, qword ptr [r14 + 0xd0]
222d37 movzx    r15d, byte ptr [r14 + 0xe8]
222d3f imul     rdx, rdi
222d43 lea      rax, [r11 + r11*8]
222d47 xor      rdx, rax
222d4a xor      rdx, rsi
222d4d xor      rcx, rdx
222d50 test     r15b, r15b
222d53 lea      rax, [rbx + rdx]
222d57 cmove    rax, rcx
222d5b inc      r10
222d5e mov      qword ptr [r14 + 0x130], rax
222d65 mov      rcx, qword ptr [r14 + 0x1d0]
222d6c mov      rax, qword ptr [r14 + 0x48]
222d70 mov      qword ptr [rsp + 0x60], r10
222d75 movzx    r8d, byte ptr [rcx + rbx]
222d7a xor      r8b, byte ptr [rax + rbx]
222d7e movabs   rax, 0x9e3779b97f4a7c15
222d88 imul     r9, rax
222d8c mov      qword ptr [r14 + 0x1b8], r10
222d93 add      r9, rbp
222d96 mov      rax, r9
222d99 shr      rax, 0x1b
222d9d movzx    edx, al
222da0 lea      rax, [r11 + r11]
222da4 mov      byte ptr [r14 + 0x161], dl
222dab imul     rdx, rdi
222daf xor      rdx, rax
222db2 xor      rdx, rsi
222db5 mov      rcx, rdx
222db8 xor      rcx, r12
222dbb test     r15b, r15b
222dbe lea      rax, [rdx + r12]
222dc2 cmove    rax, rcx
222dc6 mov      qword ptr [r14 + 0xf8], rax
222dcd movsxd   rdx, dword ptr [r14 + 0x11e0]
222dd4 mov      r10, qword ptr [r14 + 0x20]
222dd8 mov      rcx, rdx
222ddb xor      rcx, qword ptr [r14 + 0x350]
222de2 xor      rcx, r10
222de5 xor      rcx, r12
222de8 xor      rcx, qword ptr [r14 + 0x348]
222def mov      rax, rcx
222df2 shr      rax, 0x21
222df6 xor      rax, rcx
222df9 movabs   rcx, 0xff51afd7ed558ccd
222e03 imul     rax, rcx
222e07 mov      rcx, rax
222e0a shr      rcx, 0x21
222e0e xor      rcx, rax
222e11 movabs   rax, 0xc4ceb9fe1a85ec53
222e1b imul     rcx, rax
222e1f movzx    eax, r8b
222e23 mov      rbx, rcx
222e26 xor      rax, 0xdd
222e2c shr      rbx, 0x21
222e30 xor      rbx, rcx
222e33 lea      rcx, [rip - 0x222e3a]
222e3a mov      qword ptr [r14 + 0x28], rbx
222e3e movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
222e46 xor      bpl, 0x63
222e4a inc      edx
222e4c mov      dword ptr [r14 + 0x11e0], edx
222e53 movabs   r8, 0xff51afd7ed558ccd
222e5d test     dl, 0x1f
222e60 jne      0x140222ea6
222e62 movsxd   rax, edx
222e65 xor      rax, r10
222e68 xor      rax, qword ptr [r14 + 0x348]
222e6f mov      rcx, rax
222e72 shr      rcx, 0x21
222e76 xor      rcx, rax
222e79 movabs   rax, 0xc4ceb9fe1a85ec53
222e83 imul     rcx, r8
222e87 mov      rdx, rcx
222e8a shr      rdx, 0x21
222e8e xor      rdx, rcx
222e91 imul     rdx, rax
222e95 mov      rax, rdx
222e98 shr      rax, 0x21
222e9c xor      rax, rdx
222e9f mov      qword ptr [r14 + 0x348], rax
222ea6 movzx    edx, bpl
222eaa xor      r10, rdx
222ead mov      byte ptr [r14 + 0x4ad], bpl
222eb4 xor      r10, r12
222eb7 movabs   r12, 0xc4ceb9fe1a85ec53
222ec1 mov      rax, r10
222ec4 shr      rax, 0x21
222ec8 xor      rax, r10
222ecb movabs   r10, 0x9e3779b97f4a7c15
222ed5 imul     rax, r8
222ed9 imul     rdx, r10
222edd imul     r9, r10
222ee1 mov      rcx, rax
222ee4 shr      rcx, 0x21
222ee8 xor      rcx, rax
222eeb imul     rcx, r12
222eef mov      rax, rcx
222ef2 shr      rax, 0x21
222ef6 xor      rax, rcx
222ef9 mov      ecx, dword ptr [r14 + 0x1178]
222f00 mov      qword ptr [r14 + 0x20], rax
222f04 movabs   rax, 0xd6e8feb86659fd93
222f0e imul     rcx, rax
222f12 xor      rcx, rdx
222f15 xor      rcx, rbx
222f18 movabs   rbx, 0x2545f4914f6cdd1d
222f22 mov      rax, rcx
222f25 add      r9, rbx
222f28 shr      rax, 0x21
222f2c xor      rax, rcx
222f2f imul     rax, r8
222f33 mov      rdx, rax
222f36 shr      rdx, 0x21
222f3a xor      rdx, rax
222f3d mov      rax, qword ptr [rsp + 0x60]
222f42 imul     rdx, r12
222f46 shr      rdx, 0x21
222f4a and      edx, 3
222f4d inc      rax
222f50 mov      qword ptr [r14 + 0x1b8], rax
222f57 cmp      bpl, 0x3e
222f5b jae      0x140222ff5
222f61 inc      qword ptr [r14 + 0x11a0]
222f68 lea      rax, [rip - 0x222f6f]
222f6f mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
222f77 mov      qword ptr [r14 + 0x1b0], r9
222f7e shr      r9, 0x1b
222f82 movzx    eax, r9b
222f86 mov      byte ptr [r14 + 0x160], al
222f8d imul     rax, rdi
222f91 mov      ebx, edx
222f93 xor      rax, rsi
222f96 xor      rax, r11
222f99 mov      rcx, rax
222f9c add      rax, r8
222f9f xor      rcx, r8
222fa2 movzx    r8d, bpl
222fa6 test     r15b, r15b
222fa9 cmove    rax, rcx
222fad mov      rcx, r14
222fb0 mov      qword ptr [r14 + 0xf0], rax
222fb7 call     0x1401f1f50
222fbc mov      r8, qword ptr [rsp + 0x70]
222fc1 lea      edx, [r13 - 1]
222fc5 mov      eax, eax
222fc7 imul     rcx, rbx, 0x3e
222fcb add      rcx, rax
222fce mov      rax, qword ptr [r14 + 0x4b8]
222fd5 movsxd   r9, dword ptr [rax + rcx*4]
222fd9 mov      rcx, r14
222fdc movsxd   rax, dword ptr [r14 + 0x4c8]
222fe3 xor      r9, rax
222fe6 add      r9, qword ptr [r14 + 0x4c0]
222fed call     r9
222ff0 jmp      0x1402230bc
222ff5 inc      dword ptr [r14 + 0x11a8]
222ffc mov      rax, r9
222fff shr      rax, 0x1b
223003 movzx    ecx, al
223006 lea      rax, [r11*4]
22300e mov      byte ptr [r14 + 0x163], cl
223015 imul     rcx, rdi
223019 imul     r9, r10
22301d xor      rcx, rax
223020 xor      rcx, rsi
223023 mov      qword ptr [r14 + 0x108], rcx
22302a mov      r8, qword ptr [r14 + 0x1b8]
223031 add      r9, rbx
223034 mov      rax, r9
223037 shr      rax, 0x1b
22303b movzx    edx, al
22303e mov      byte ptr [r14 + 0x16a], dl
223045 imul     rax, r11, 0xb
223049 imul     rdx, rdi
22304d xor      rdx, rax
223050 xor      rdx, rsi
223053 mov      rcx, rdx
223056 xor      rcx, 1
22305a test     r15b, r15b
22305d lea      rax, [rdx + 1]
223061 cmove    rax, rcx
223065 mov      qword ptr [r14 + 0x140], rax
22306c lea      rax, [r8 + 2]
223070 mov      qword ptr [r14 + 0x1b8], rax
223077 imul     r9, r10
22307b add      r9, rbx
22307e mov      qword ptr [r14 + 0x1b0], r9
223085 shr      r9, 0x1b
223089 movzx    eax, r9b
22308d mov      byte ptr [r14 + 0x160], al
223094 imul     rax, rdi
223098 xor      rax, rsi
22309b xor      rax, r11
22309e mov      rcx, rax
2230a1 add      rax, 0xfe1ab
2230a7 xor      rcx, 0xfe1ab
2230ae test     r15b, r15b
2230b1 cmove    rax, rcx
2230b5 mov      qword ptr [r14 + 0xf0], rax
2230bc mov      r12, qword ptr [rsp + 0x28]
2230c1 mov      rsi, qword ptr [rsp + 0x68]
2230c6 mov      r15, qword ptr [rsp + 0x20]
2230cb add      rsp, 0x30
2230cf pop      r14
2230d1 pop      r13
2230d3 pop      rdi
2230d4 pop      rbp
2230d5 pop      rbx
2230d6 ret      
2230d7 mov      edx, 0x54485254
2230dc mov      rcx, r14
2230df call     0x1401ed830
2230e4 int3     
2230e5 mov      edx, 0x43414e59
2230ea mov      rcx, r14
2230ed call     0x1401ed830
2230f2 int3     
