208610 mov      qword ptr [rsp + 0x18], r8
208615 push     rbx
208616 push     rbp
208617 push     rdi
208618 push     r13
20861a push     r14
20861c sub      rsp, 0x30
208620 movsxd   rax, dword ptr [rcx + 0x11e0]
208627 mov      r14, rcx
20862a mov      r13d, edx
20862d movabs   rcx, 0xc0acca8e825d1261
208637 imul     rax, rcx
20863b movabs   rcx, 0x62f540450383965e
208645 movabs   rbp, 0xff51afd7ed558ccd
20864f xor      rax, qword ptr [r14 + 0x28]
208653 mov      rdi, r8
208656 mov      qword ptr [rsp + 0x60], rax
20865b mov      rax, qword ptr [rsp + 0x60]
208660 movsxd   rax, dword ptr [r14 + 0x11e0]
208667 imul     rax, rcx
20866b movabs   rcx, 0x843dde1b80c81a4b
208675 xor      rax, qword ptr [r14 + 0x28]
208679 mov      qword ptr [rsp + 0x60], rax
20867e mov      rax, qword ptr [rsp + 0x60]
208683 movsxd   rax, dword ptr [r14 + 0x11e0]
20868a imul     rax, rcx
20868e movabs   rcx, 0x164fdc9c0b0e8e70
208698 xor      rax, qword ptr [r14 + 0x28]
20869c mov      qword ptr [rsp + 0x60], rax
2086a1 mov      rax, qword ptr [rsp + 0x60]
2086a6 mov      rax, qword ptr [r14 + 0x2f0]
2086ad add      rax, rcx
2086b0 mov      rcx, rax
2086b3 shr      rcx, 0x21
2086b7 xor      rcx, rax
2086ba movabs   rax, 0xc4ceb9fe1a85ec53
2086c4 imul     rcx, rbp
2086c8 mov      rdx, rcx
2086cb shr      rdx, 0x21
2086cf xor      rdx, rcx
2086d2 mov      rcx, r14
2086d5 imul     rdx, rax
2086d9 mov      rax, rdx
2086dc shr      rax, 0x21
2086e0 xor      rdx, rax
2086e3 mov      rax, qword ptr [r14 + 0x2f0]
2086ea or       rdx, 1
2086ee xor      rdx, rax
2086f1 mov      qword ptr [r14 + 0x2f0], rdx
2086f8 call     0x1401f1e80
2086fd mov      rcx, r14
208700 mov      ebx, eax
208702 call     0x1401ee940
208707 and      ebx, 0x3f
20870a je       0x14020871e
20870c mov      ecx, ebx
20870e mov      edx, 1
208713 shl      rdx, cl
208716 dec      rdx
208719 and      rdx, rax
20871c jmp      0x140208720
20871e xor      edx, edx
208720 mov      rcx, r14
208723 call     0x1401ee820
208728 mov      rax, qword ptr [r14 + 0x2f0]
20872f test     r13d, r13d
208732 jns      0x140209270
208738 cmp      qword ptr [r14 + 0x11b8], rdi
20873f jne      0x14020927e
208745 movsxd   rax, dword ptr [r14 + 0x11e0]
20874c movabs   rcx, 0x1be135410d3dacda
208756 imul     rax, rcx
20875a mov      rcx, r14
20875d xor      rax, qword ptr [r14 + 0x28]
208761 mov      qword ptr [rsp + 0x60], rax
208766 mov      rax, qword ptr [rsp + 0x60]
20876b call     0x1401ee450
208770 test     eax, eax
208772 jne      0x140209264
208778 cmp      dword ptr [r14 + 0xad0], eax
20877f jne      0x140209264
208785 mov      r8, qword ptr [r14 + 0xf0]
20878c movzx    ecx, byte ptr [r14 + 0x160]
208794 mov      rax, r8
208797 mov      r10, qword ptr [r14 + 0xe0]
20879e mov      rbx, qword ptr [r14 + 0xd0]
2087a5 mov      r11, qword ptr [r14 + 0xd8]
2087ac movzx    edi, byte ptr [r14 + 0xe8]
2087b4 mov      r9, qword ptr [r14 + 0x1b0]
2087bb imul     rcx, r10
2087bf mov      qword ptr [rsp + 0x68], rsi
2087c4 mov      rsi, qword ptr [r14 + 0x1b8]
2087cb xor      rcx, rbx
2087ce xor      rcx, r11
2087d1 mov      qword ptr [rsp + 0x28], r12
2087d6 xor      rax, rcx
2087d9 mov      qword ptr [rsp + 0x20], r15
2087de sub      r8, rcx
2087e1 movabs   r15, 0x9e3779b97f4a7c15
2087eb test     dil, dil
2087ee movabs   r12, 0x2545f4914f6cdd1d
2087f8 cmove    r8, rax
2087fc inc      rsi
2087ff imul     r9, r15
208803 mov      qword ptr [r14 + 0x1b8], rsi
20880a add      r9, r12
20880d mov      qword ptr [r14 + 0x1b0], r9
208814 mov      rax, r9
208817 shr      rax, 0x1b
20881b movzx    edx, al
20881e mov      byte ptr [r14 + 0x160], dl
208825 imul     rdx, r10
208829 xor      rdx, rbx
20882c xor      rdx, r11
20882f mov      rcx, rdx
208832 xor      rcx, r8
208835 test     dil, dil
208838 lea      rax, [rdx + r8]
20883c cmove    rax, rcx
208840 mov      qword ptr [r14 + 0xf0], rax
208847 cmp      r8d, 0x338040
20884e jne      0x140209255
208854 mov      eax, r13d
208857 btr      eax, 0x1f
20885b cmp      eax, 2
20885e jae      0x1402088aa
208860 imul     r9, r15
208864 lea      rax, [rsi + 1]
208868 mov      qword ptr [r14 + 0x1b8], rax
20886f add      r9, r12
208872 mov      qword ptr [r14 + 0x1b0], r9
208879 shr      r9, 0x1b
20887d movzx    eax, r9b
208881 mov      byte ptr [r14 + 0x160], al
208888 imul     rax, r10
20888c xor      rax, rbx
20888f xor      rax, r11
208892 mov      rcx, rax
208895 add      rax, 0x1ad951
20889b xor      rcx, 0x1ad951
2088a2 test     dil, dil
2088a5 jmp      0x14020924a
2088aa mov      rcx, r14
2088ad call     0x1401ee070
2088b2 movzx    ecx, byte ptr [r14 + 0x4ad]
2088ba movabs   r8, 0xc4ceb9fe1a85ec53
2088c4 mov      r11, qword ptr [r14 + 0xe0]
2088cb mov      r10, qword ptr [r14 + 0xd0]
2088d2 movzx    r9d, byte ptr [r14 + 0xe8]
2088da mov      eax, eax
2088dc xor      rcx, rax
2088df xor      rcx, qword ptr [r14 + 0x11e8]
2088e6 mov      rax, rcx
2088e9 shr      rax, 0x21
2088ed xor      rax, rcx
2088f0 imul     rax, rbp
2088f4 mov      rcx, rax
2088f7 shr      rcx, 0x21
2088fb xor      rcx, rax
2088fe imul     rcx, r8
208902 mov      rdx, rcx
208905 shr      rdx, 0x21
208909 xor      rdx, rcx
20890c mov      qword ptr [r14 + 0x11e8], rdx
208913 xor      rdx, qword ptr [r14 + 0x20]
208917 xor      rdx, qword ptr [r14 + 0x28]
20891b mov      rax, rdx
20891e shr      rax, 0x21
208922 xor      rax, rdx
208925 imul     rax, rbp
208929 mov      rcx, rax
20892c shr      rcx, 0x21
208930 xor      rcx, rax
208933 imul     rcx, r8
208937 mov      rax, rcx
20893a shr      rax, 0x21
20893e xor      rax, rcx
208941 mov      qword ptr [r14 + 0x20], rax
208945 mov      rdx, qword ptr [r14 + 0x138]
20894c movzx    ecx, byte ptr [r14 + 0x169]
208954 mov      rax, qword ptr [r14 + 0xd8]
20895b imul     rcx, r11
20895f lea      rbx, [rax + rax*4]
208963 mov      rax, rdx
208966 add      rbx, rbx
208969 xor      rcx, rbx
20896c xor      rcx, r10
20896f xor      rax, rcx
208972 sub      rdx, rcx
208975 test     r9b, r9b
208978 cmove    rdx, rax
20897c mov      rax, qword ptr [r14 + 0x1b0]
208983 inc      qword ptr [r14 + 0x1b8]
20898a imul     rax, r15
20898e add      rax, r12
208991 mov      qword ptr [r14 + 0x1b0], rax
208998 shr      rax, 0x1b
20899c movzx    r8d, al
2089a0 mov      byte ptr [r14 + 0x169], r8b
2089a7 imul     r8, r11
2089ab xor      r8, rbx
2089ae xor      r8, r10
2089b1 mov      rcx, r8
2089b4 xor      rcx, rdx
2089b7 test     r9b, r9b
2089ba lea      rax, [r8 + rdx]
2089be cmove    rax, rcx
2089c2 mov      rcx, r14
2089c5 mov      qword ptr [r14 + 0x138], rax
2089cc call     0x1401f0910
2089d1 mov      rax, qword ptr [r14 + 0xd8]
2089d8 mov      rdx, qword ptr [r14 + 0x130]
2089df mov      r10, qword ptr [r14 + 0xe0]
2089e6 movzx    ecx, byte ptr [r14 + 0x168]
2089ee mov      rbx, qword ptr [r14 + 0xd0]
2089f5 lea      r11, [rax + rax*8]
2089f9 movzx    r9d, byte ptr [r14 + 0xe8]
208a01 mov      rax, rdx
208a04 imul     rcx, r10
208a08 xor      rcx, r11
208a0b xor      rcx, rbx
208a0e xor      rax, rcx
208a11 sub      rdx, rcx
208a14 test     r9b, r9b
208a17 cmove    rdx, rax
208a1b mov      rax, qword ptr [r14 + 0x1b0]
208a22 inc      qword ptr [r14 + 0x1b8]
208a29 imul     rax, r15
208a2d add      rax, r12
208a30 mov      qword ptr [r14 + 0x1b0], rax
208a37 shr      rax, 0x1b
208a3b movzx    r8d, al
208a3f mov      byte ptr [r14 + 0x168], r8b
208a46 imul     r8, r10
208a4a xor      r8, r11
208a4d xor      r8, rbx
208a50 mov      rcx, r8
208a53 xor      rcx, rdx
208a56 test     r9b, r9b
208a59 lea      rax, [r8 + rdx]
208a5d cmove    rax, rcx
208a61 mov      rcx, r14
208a64 mov      qword ptr [r14 + 0x130], rax
208a6b call     0x1401f0910
208a70 mov      rcx, r14
208a73 call     0x1401ee070
208a78 cmp      eax, dword ptr [r14 + 0x1d8]
208a7f jae      0x140208a8b
208a81 mov      edx, eax
208a83 mov      rcx, r14
208a86 call     0x1401f0910
208a8b mov      rsi, qword ptr [r14 + 0xe0]
208a92 mov      rbp, qword ptr [r14 + 0xd0]
208a99 mov      r11, qword ptr [r14 + 0x130]
208aa0 movzx    edi, byte ptr [r14 + 0xe8]
208aa8 mov      rax, r11
208aab movzx    ecx, byte ptr [r14 + 0x168]
208ab3 mov      rbx, qword ptr [r14 + 0xd8]
208aba mov      r8, qword ptr [r14 + 0x1b8]
208ac1 mov      r10, qword ptr [r14 + 0x1b0]
208ac8 imul     rcx, rsi
208acc lea      r9, [rbx + rbx*8]
208ad0 xor      rcx, r9
208ad3 xor      rcx, rbp
208ad6 xor      rax, rcx
208ad9 sub      r11, rcx
208adc test     dil, dil
208adf cmove    r11, rax
208ae3 imul     r10, r15
208ae7 mov      rcx, r11
208aea add      r10, r12
208aed mov      rax, r10
208af0 shr      rax, 0x1b
208af4 movzx    edx, al
208af7 mov      byte ptr [r14 + 0x168], dl
208afe imul     rdx, rsi
208b02 xor      rdx, r9
208b05 xor      rdx, rbp
208b08 xor      rcx, rdx
208b0b test     dil, dil
208b0e lea      rax, [r11 + rdx]
208b12 cmove    rax, rcx
208b16 mov      rcx, r11
208b19 mov      qword ptr [r14 + 0x130], rax
208b20 lea      rax, [r8 + 2]
208b24 mov      qword ptr [r14 + 0x1b8], rax
208b2b mov      r8d, 0x969b
208b31 imul     r10, r15
208b35 lea      rax, [rbx + rbx*4]
208b39 add      rax, rax
208b3c add      r10, r12
208b3f mov      qword ptr [r14 + 0x1b0], r10
208b46 shr      r10, 0x1b
208b4a movzx    edx, r10b
208b4e mov      byte ptr [r14 + 0x169], dl
208b55 imul     rdx, rsi
208b59 xor      rdx, rax
208b5c xor      rdx, rbp
208b5f xor      rcx, rdx
208b62 test     dil, dil
208b65 lea      rax, [r11 + rdx]
208b69 cmove    rax, rcx
208b6d mov      rcx, r14
208b70 mov      qword ptr [r14 + 0x138], rax
208b77 movzx    edx, byte ptr [r14 + 0x4ad]
208b7f xor      rdx, qword ptr [r14 + 0x348]
208b86 call     0x1401f1520
208b8b mov      r8, qword ptr [r14 + 0x348]
208b92 movabs   rdi, 0xff51afd7ed558ccd
208b9c mov      rax, r8
208b9f movabs   rsi, 0xc4ceb9fe1a85ec53
208ba9 xor      rax, qword ptr [r14 + 0x20]
208bad mov      rcx, rax
208bb0 shr      rcx, 0x21
208bb4 xor      rcx, rax
208bb7 imul     rcx, rdi
208bbb mov      rax, rcx
208bbe shr      rax, 0x21
208bc2 xor      rax, rcx
208bc5 imul     rax, rsi
208bc9 mov      rdx, rax
208bcc shr      rdx, 0x21
208bd0 xor      edx, eax
208bd2 lea      eax, [rdx + 1]
208bd5 mov      ecx, eax
208bd7 xor      eax, edx
208bd9 imul     ecx, edx
208bdc not      ecx
208bde and      ecx, eax
208be0 test     cl, 1
208be3 je       0x140208c4c
208be5 and      r8b, 3
208be9 cmp      r8b, 1
208bed jne      0x140208c4c
208bef mov      rax, qword ptr [r14 + 0x1b0]
208bf6 inc      qword ptr [r14 + 0x1b8]
208bfd imul     rax, r15
208c01 add      rax, r12
208c04 mov      qword ptr [r14 + 0x1b0], rax
208c0b shr      rax, 0x1b
208c0f movzx    eax, al
208c12 mov      byte ptr [r14 + 0x160], al
208c19 imul     rax, qword ptr [r14 + 0xe0]
208c21 xor      rax, qword ptr [r14 + 0xd8]
208c28 xor      rax, qword ptr [r14 + 0xd0]
208c2f mov      rcx, rax
208c32 add      rax, 0x190631
208c38 xor      rcx, 0x190631
208c3f cmp      byte ptr [r14 + 0xe8], 0
208c47 jmp      0x14020924a
208c4c mov      rcx, r14
208c4f call     0x1401ee070
208c54 mov      ebx, eax
208c56 cmp      eax, dword ptr [r14 + 0x1d8]
208c5d jb       0x140208cbc
208c5f mov      rax, qword ptr [r14 + 0x1b0]
208c66 inc      qword ptr [r14 + 0x1b8]
208c6d imul     rax, r15
208c71 add      rax, r12
208c74 mov      qword ptr [r14 + 0x1b0], rax
208c7b shr      rax, 0x1b
208c7f movzx    eax, al
208c82 mov      byte ptr [r14 + 0x160], al
208c89 imul     rax, qword ptr [r14 + 0xe0]
208c91 xor      rax, qword ptr [r14 + 0xd8]
208c98 xor      rax, qword ptr [r14 + 0xd0]
208c9f mov      rcx, rax
208ca2 add      rax, 0xfe1ab
208ca8 xor      rcx, 0xfe1ab
208caf cmp      byte ptr [r14 + 0xe8], 0
208cb7 jmp      0x14020924a
208cbc mov      edx, ebx
208cbe mov      rcx, r14
208cc1 call     0x1401f25b0
208cc6 movsxd   rcx, dword ptr [r14 + 0x11e0]
208ccd movabs   r8, 0xd6e8feb86659fd93
208cd7 mov      rdx, qword ptr [r14 + 0x20]
208cdb mov      rax, rbx
208cde imul     rax, r8
208ce2 imul     rcx, r15
208ce6 rol      rdx, 0x11
208cea xor      rax, rdx
208ced xor      rcx, qword ptr [r14 + 0x260]
208cf4 xor      rax, rcx
208cf7 mov      rcx, rax
208cfa shr      rcx, 0x21
208cfe xor      rcx, rax
208d01 imul     rcx, rdi
208d05 mov      rdx, rcx
208d08 shr      rdx, 0x21
208d0c xor      rdx, rcx
208d0f imul     rdx, rsi
208d13 mov      rax, rdx
208d16 shr      rax, 0x21
208d1a xor      rax, rdx
208d1d mov      r10, rax
208d20 shr      r10, 0x1d
208d24 xor      r10, rax
208d27 or       r10, 1
208d2b mov      rax, r10
208d2e mov      qword ptr [r14 + 0x260], r10
208d35 and      eax, 0x3ff
208d3a cmp      rax, 0x2c5
208d40 jne      0x140208d51
208d42 mov      rcx, r14
208d45 call     0x1402297e0
208d4a mov      r10, qword ptr [r14 + 0x260]
208d51 movzx    eax, r10b
208d55 and      al, 0x1f
208d57 cmp      al, 0x15
208d59 jne      0x140208e46
208d5f movsxd   rax, dword ptr [r14 + 0x11e0]
208d66 xor      rax, 0x5a5a
208d6c mov      rcx, qword ptr [r14 + 0x20]
208d70 imul     rax, r15
208d74 rol      rcx, 0x11
208d78 xor      rax, r10
208d7b xor      rcx, rax
208d7e movabs   rax, 0x8f70feda99a6026d
208d88 xor      rcx, rax
208d8b mov      rax, rcx
208d8e shr      rax, 0x21
208d92 xor      rax, rcx
208d95 imul     rax, rdi
208d99 mov      rcx, rax
208d9c shr      rcx, 0x21
208da0 xor      rcx, rax
208da3 imul     rcx, rsi
208da7 mov      rax, rcx
208daa shr      rax, 0x21
208dae xor      rax, rcx
208db1 mov      r9, rax
208db4 shr      r9, 0x1d
208db8 xor      r9, rax
208dbb or       r9, 1
208dbf mov      rax, r9
208dc2 mov      rcx, r9
208dc5 shr      rax, 8
208dc9 and      eax, 3
208dcc shr      rcx, 0x28
208dd0 imul     r8, rax, 0x3e
208dd4 mov      eax, 0x8421085
208dd9 mul      ecx
208ddb mov      eax, ecx
208ddd sub      eax, edx
208ddf shr      eax, 1
208de1 add      eax, edx
208de3 shr      eax, 5
208de6 imul     eax, eax, 0x3e
208de9 sub      ecx, eax
208deb mov      eax, ecx
208ded add      r8, rax
208df0 mov      rax, qword ptr [r14 + 0x4b8]
208df7 movsxd   rcx, dword ptr [rax + r8*4]
208dfb movsxd   rax, dword ptr [r14 + 0x4c8]
208e02 xor      rcx, rax
208e05 add      rcx, qword ptr [r14 + 0x4c0]
208e0c xor      rcx, r9
208e0f mov      rax, rcx
208e12 shr      rax, 0x21
208e16 xor      rax, rcx
208e19 imul     rax, rdi
208e1d mov      rcx, rax
208e20 shr      rcx, 0x21
208e24 xor      rcx, rax
208e27 imul     rcx, rsi
208e2b mov      rax, rcx
208e2e shr      rax, 0x21
208e32 xor      rax, rcx
208e35 xor      rax, r10
208e38 inc      qword ptr [r14 + 0x268]
208e3f mov      qword ptr [r14 + 0x260], rax
208e46 inc      dword ptr [r14 + 0x200]
208e4d mov      eax, dword ptr [r14 + 0x200]
208e54 cmp      eax, dword ptr [r14 + 0x1fc]
208e5b jb       0x140208e70
208e5d mov      rcx, r14
208e60 mov      dword ptr [r14 + 0x200], 0
208e6b call     0x1401ef7c0
208e70 mov      r8d, ebx
208e73 mov      edx, ebx
208e75 mov      rcx, r14
208e78 call     0x1401f0660
208e7d inc      qword ptr [r14 + 0x1b8]
208e84 mov      rcx, rbx
208e87 mov      r9, qword ptr [r14 + 0x1b0]
208e8e mov      rbp, r12
208e91 mov      r10, qword ptr [r14 + 0x1b8]
208e98 imul     r9, r15
208e9c add      r9, r12
208e9f lea      r12d, [rbx + 1]
208ea3 mov      qword ptr [r14 + 0x1b0], r9
208eaa mov      rax, r9
208ead shr      rax, 0x1b
208eb1 movzx    edx, al
208eb4 mov      byte ptr [r14 + 0x168], dl
208ebb mov      rdi, qword ptr [r14 + 0xe0]
208ec2 mov      r11, qword ptr [r14 + 0xd8]
208ec9 mov      rsi, qword ptr [r14 + 0xd0]
208ed0 movzx    r15d, byte ptr [r14 + 0xe8]
208ed8 imul     rdx, rdi
208edc lea      rax, [r11 + r11*8]
208ee0 xor      rdx, rax
208ee3 xor      rdx, rsi
208ee6 xor      rcx, rdx
208ee9 test     r15b, r15b
208eec lea      rax, [rbx + rdx]
208ef0 cmove    rax, rcx
208ef4 inc      r10
208ef7 mov      qword ptr [r14 + 0x130], rax
208efe mov      rcx, qword ptr [r14 + 0x1d0]
208f05 mov      rax, qword ptr [r14 + 0x48]
208f09 mov      qword ptr [rsp + 0x60], r10
208f0e movzx    r8d, byte ptr [rcx + rbx]
208f13 xor      r8b, byte ptr [rax + rbx]
208f17 movabs   rax, 0x9e3779b97f4a7c15
208f21 imul     r9, rax
208f25 mov      qword ptr [r14 + 0x1b8], r10
208f2c add      r9, rbp
208f2f mov      rax, r9
208f32 shr      rax, 0x1b
208f36 movzx    edx, al
208f39 lea      rax, [r11 + r11]
208f3d mov      byte ptr [r14 + 0x161], dl
208f44 imul     rdx, rdi
208f48 xor      rdx, rax
208f4b xor      rdx, rsi
208f4e mov      rcx, rdx
208f51 xor      rcx, r12
208f54 test     r15b, r15b
208f57 lea      rax, [rdx + r12]
208f5b cmove    rax, rcx
208f5f mov      qword ptr [r14 + 0xf8], rax
208f66 movsxd   rdx, dword ptr [r14 + 0x11e0]
208f6d mov      r10, qword ptr [r14 + 0x20]
208f71 mov      rcx, rdx
208f74 xor      rcx, qword ptr [r14 + 0x350]
208f7b xor      rcx, r10
208f7e xor      rcx, r12
208f81 xor      rcx, qword ptr [r14 + 0x348]
208f88 mov      rax, rcx
208f8b shr      rax, 0x21
208f8f xor      rax, rcx
208f92 movabs   rcx, 0xff51afd7ed558ccd
208f9c imul     rax, rcx
208fa0 mov      rcx, rax
208fa3 shr      rcx, 0x21
208fa7 xor      rcx, rax
208faa movabs   rax, 0xc4ceb9fe1a85ec53
208fb4 imul     rcx, rax
208fb8 movzx    eax, r8b
208fbc mov      rbx, rcx
208fbf xor      rax, 0xdd
208fc5 shr      rbx, 0x21
208fc9 xor      rbx, rcx
208fcc lea      rcx, [rip - 0x208fd3]
208fd3 mov      qword ptr [r14 + 0x28], rbx
208fd7 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
208fdf xor      bpl, 0x63
208fe3 inc      edx
208fe5 mov      dword ptr [r14 + 0x11e0], edx
208fec movabs   r8, 0xff51afd7ed558ccd
208ff6 test     dl, 0x1f
208ff9 jne      0x14020903f
208ffb movsxd   rax, edx
208ffe xor      rax, r10
209001 xor      rax, qword ptr [r14 + 0x348]
209008 mov      rcx, rax
20900b shr      rcx, 0x21
20900f xor      rcx, rax
209012 movabs   rax, 0xc4ceb9fe1a85ec53
20901c imul     rcx, r8
209020 mov      rdx, rcx
209023 shr      rdx, 0x21
209027 xor      rdx, rcx
20902a imul     rdx, rax
20902e mov      rax, rdx
209031 shr      rax, 0x21
209035 xor      rax, rdx
209038 mov      qword ptr [r14 + 0x348], rax
20903f movzx    edx, bpl
209043 xor      r10, rdx
209046 mov      byte ptr [r14 + 0x4ad], bpl
20904d xor      r10, r12
209050 movabs   r12, 0xc4ceb9fe1a85ec53
20905a mov      rax, r10
20905d shr      rax, 0x21
209061 xor      rax, r10
209064 movabs   r10, 0x9e3779b97f4a7c15
20906e imul     rax, r8
209072 imul     rdx, r10
209076 imul     r9, r10
20907a mov      rcx, rax
20907d shr      rcx, 0x21
209081 xor      rcx, rax
209084 imul     rcx, r12
209088 mov      rax, rcx
20908b shr      rax, 0x21
20908f xor      rax, rcx
209092 mov      ecx, dword ptr [r14 + 0x1178]
209099 mov      qword ptr [r14 + 0x20], rax
20909d movabs   rax, 0xd6e8feb86659fd93
2090a7 imul     rcx, rax
2090ab xor      rcx, rdx
2090ae xor      rcx, rbx
2090b1 movabs   rbx, 0x2545f4914f6cdd1d
2090bb mov      rax, rcx
2090be add      r9, rbx
2090c1 shr      rax, 0x21
2090c5 xor      rax, rcx
2090c8 imul     rax, r8
2090cc mov      rdx, rax
2090cf shr      rdx, 0x21
2090d3 xor      rdx, rax
2090d6 mov      rax, qword ptr [rsp + 0x60]
2090db imul     rdx, r12
2090df shr      rdx, 0x21
2090e3 and      edx, 3
2090e6 inc      rax
2090e9 mov      qword ptr [r14 + 0x1b8], rax
2090f0 cmp      bpl, 0x3e
2090f4 jae      0x14020918e
2090fa inc      qword ptr [r14 + 0x11a0]
209101 lea      rax, [rip - 0x209108]
209108 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
209110 mov      qword ptr [r14 + 0x1b0], r9
209117 shr      r9, 0x1b
20911b movzx    eax, r9b
20911f mov      byte ptr [r14 + 0x160], al
209126 imul     rax, rdi
20912a mov      ebx, edx
20912c xor      rax, r11
20912f xor      rax, rsi
209132 mov      rcx, rax
209135 add      rax, r8
209138 xor      rcx, r8
20913b movzx    r8d, bpl
20913f test     r15b, r15b
209142 cmove    rax, rcx
209146 mov      rcx, r14
209149 mov      qword ptr [r14 + 0xf0], rax
209150 call     0x1401f1f50
209155 mov      r8, qword ptr [rsp + 0x70]
20915a lea      edx, [r13 - 1]
20915e mov      eax, eax
209160 imul     rcx, rbx, 0x3e
209164 add      rcx, rax
209167 mov      rax, qword ptr [r14 + 0x4b8]
20916e movsxd   r9, dword ptr [rax + rcx*4]
209172 mov      rcx, r14
209175 movsxd   rax, dword ptr [r14 + 0x4c8]
20917c xor      r9, rax
20917f add      r9, qword ptr [r14 + 0x4c0]
209186 call     r9
209189 jmp      0x140209255
20918e inc      dword ptr [r14 + 0x11a8]
209195 mov      rax, r9
209198 shr      rax, 0x1b
20919c movzx    ecx, al
20919f lea      rax, [r11*4]
2091a7 mov      byte ptr [r14 + 0x163], cl
2091ae imul     rcx, rdi
2091b2 imul     r9, r10
2091b6 xor      rcx, rax
2091b9 xor      rcx, rsi
2091bc mov      qword ptr [r14 + 0x108], rcx
2091c3 mov      r8, qword ptr [r14 + 0x1b8]
2091ca add      r9, rbx
2091cd mov      rax, r9
2091d0 shr      rax, 0x1b
2091d4 movzx    edx, al
2091d7 mov      byte ptr [r14 + 0x16a], dl
2091de imul     rax, r11, 0xb
2091e2 imul     rdx, rdi
2091e6 xor      rdx, rax
2091e9 xor      rdx, rsi
2091ec mov      rcx, rdx
2091ef xor      rcx, 1
2091f3 test     r15b, r15b
2091f6 lea      rax, [rdx + 1]
2091fa cmove    rax, rcx
2091fe mov      qword ptr [r14 + 0x140], rax
209205 lea      rax, [r8 + 2]
209209 mov      qword ptr [r14 + 0x1b8], rax
209210 imul     r9, r10
209214 add      r9, rbx
209217 mov      qword ptr [r14 + 0x1b0], r9
20921e shr      r9, 0x1b
209222 movzx    eax, r9b
209226 mov      byte ptr [r14 + 0x160], al
20922d imul     rax, rdi
209231 xor      rax, rsi
209234 xor      rax, r11
209237 mov      rcx, rax
20923a add      rax, 0xfe1ab
209240 xor      rcx, 0xfe1ab
209247 test     r15b, r15b
20924a cmove    rax, rcx
20924e mov      qword ptr [r14 + 0xf0], rax
209255 mov      r12, qword ptr [rsp + 0x28]
20925a mov      rsi, qword ptr [rsp + 0x68]
20925f mov      r15, qword ptr [rsp + 0x20]
209264 add      rsp, 0x30
209268 pop      r14
20926a pop      r13
20926c pop      rdi
20926d pop      rbp
20926e pop      rbx
20926f ret      
209270 mov      edx, 0x54485254
209275 mov      rcx, r14
209278 call     0x1401ed830
20927d int3     
20927e mov      edx, 0x43414e59
209283 mov      rcx, r14
209286 call     0x1401ed830
20928b int3     
