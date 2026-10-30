21e270 mov      qword ptr [rsp + 0x10], rbx
21e275 mov      qword ptr [rsp + 0x18], r8
21e27a push     rbp
21e27b push     rsi
21e27c push     rdi
21e27d push     r12
21e27f push     r13
21e281 push     r14
21e283 push     r15
21e285 sub      rsp, 0x20
21e289 movsxd   rax, dword ptr [rcx + 0x11e0]
21e290 mov      r14, rcx
21e293 mov      r13d, edx
21e296 movabs   rcx, 0x974281eb19518d67
21e2a0 imul     rax, rcx
21e2a4 movabs   rcx, 0x351b0b20988f0958
21e2ae movabs   rbp, 0xff51afd7ed558ccd
21e2b8 xor      rax, qword ptr [r14 + 0x28]
21e2bc movabs   rsi, 0xc4ceb9fe1a85ec53
21e2c6 mov      qword ptr [rsp + 0x60], rax
21e2cb mov      rdi, r8
21e2ce mov      rax, qword ptr [rsp + 0x60]
21e2d3 movsxd   rax, dword ptr [r14 + 0x11e0]
21e2da imul     rax, rcx
21e2de movabs   rcx, 0xd3d3957e1bc4854d
21e2e8 xor      rax, qword ptr [r14 + 0x28]
21e2ec mov      qword ptr [rsp + 0x60], rax
21e2f1 mov      rax, qword ptr [rsp + 0x60]
21e2f6 movsxd   rax, dword ptr [r14 + 0x11e0]
21e2fd imul     rax, rcx
21e301 movabs   rcx, 0x512826e93bf1908
21e30b xor      rax, qword ptr [r14 + 0x28]
21e30f mov      qword ptr [rsp + 0x60], rax
21e314 mov      rax, qword ptr [rsp + 0x60]
21e319 mov      rax, qword ptr [r14 + 0x2f0]
21e320 mov      rax, qword ptr [r14 + 0x2f0]
21e327 add      rax, rcx
21e32a mov      rcx, rax
21e32d shr      rcx, 0x21
21e331 xor      rcx, rax
21e334 imul     rcx, rbp
21e338 mov      rdx, rcx
21e33b shr      rdx, 0x21
21e33f xor      rdx, rcx
21e342 mov      rcx, r14
21e345 imul     rdx, rsi
21e349 mov      rax, rdx
21e34c shr      rax, 0x21
21e350 xor      rdx, rax
21e353 mov      rax, qword ptr [r14 + 0x2f0]
21e35a shr      rax, 3
21e35e xor      rax, rdx
21e361 mov      qword ptr [r14 + 0x2f0], rax
21e368 call     0x1401f1d80
21e36d mov      rcx, r14
21e370 mov      ebx, eax
21e372 call     0x1401ee940
21e377 mov      rcx, qword ptr [r14 + 0x1b0]
21e37e mov      r9, rax
21e381 inc      qword ptr [r14 + 0x1b8]
21e388 movabs   r15, 0x9e3779b97f4a7c15
21e392 mov      r8d, dword ptr [r14 + 0x1f4]
21e399 movabs   r12, 0x2545f4914f6cdd1d
21e3a3 movzx    r10d, bl
21e3a7 add      r8d, r10d
21e3aa mov      eax, r10d
21e3ad imul     rcx, r15
21e3b1 and      r8d, 1
21e3b5 add      rcx, r12
21e3b8 mov      qword ptr [r14 + 0x1b0], rcx
21e3bf shr      rcx, 0x1b
21e3c3 movzx    edx, cl
21e3c6 mov      byte ptr [r10 + r14 + 0xb65], dl
21e3ce imul     rax, qword ptr [r14 + 0x238]
21e3d6 imul     rdx, qword ptr [r14 + 0x1a0]
21e3de xor      rdx, rax
21e3e1 xor      rdx, qword ptr [r14 + 0x230]
21e3e8 mov      rax, rdx
21e3eb add      rdx, r9
21e3ee xor      rax, r9
21e3f1 cmp      byte ptr [r14 + 0x1f8], 0
21e3f9 cmove    rdx, rax
21e3fd mov      rax, qword ptr [r14 + 0x180]
21e404 shl      r8d, 8
21e408 add      r8d, r10d
21e40b xor      r10, r9
21e40e mov      qword ptr [rax + r8*8], rdx
21e412 xor      r10, qword ptr [r14 + 0x11c0]
21e419 mov      rax, r10
21e41c shr      rax, 0x21
21e420 xor      rax, r10
21e423 imul     rax, rbp
21e427 mov      rcx, rax
21e42a shr      rcx, 0x21
21e42e xor      rcx, rax
21e431 imul     rcx, rsi
21e435 mov      rax, rcx
21e438 shr      rax, 0x21
21e43c xor      rax, rcx
21e43f mov      qword ptr [r14 + 0x11c0], rax
21e446 mov      rax, qword ptr [r14 + 0x2f0]
21e44d test     r13d, r13d
21e450 jns      0x14021ef87
21e456 cmp      qword ptr [r14 + 0x11b8], rdi
21e45d jne      0x14021ef95
21e463 movsxd   rax, dword ptr [r14 + 0x11e0]
21e46a movabs   rcx, 0xf154179b1e3106eb
21e474 imul     rax, rcx
21e478 mov      rcx, r14
21e47b xor      rax, qword ptr [r14 + 0x28]
21e47f mov      qword ptr [rsp + 0x60], rax
21e484 mov      rax, qword ptr [rsp + 0x60]
21e489 call     0x1401ee450
21e48e test     eax, eax
21e490 jne      0x14021ef72
21e496 cmp      dword ptr [r14 + 0xad0], eax
21e49d jne      0x14021ef72
21e4a3 mov      r8, qword ptr [r14 + 0xf0]
21e4aa movzx    ecx, byte ptr [r14 + 0x160]
21e4b2 mov      rax, r8
21e4b5 mov      r10, qword ptr [r14 + 0xe0]
21e4bc mov      rbx, qword ptr [r14 + 0xd0]
21e4c3 mov      r11, qword ptr [r14 + 0xd8]
21e4ca movzx    edi, byte ptr [r14 + 0xe8]
21e4d2 mov      r9, qword ptr [r14 + 0x1b0]
21e4d9 mov      rsi, qword ptr [r14 + 0x1b8]
21e4e0 imul     rcx, r10
21e4e4 xor      rcx, rbx
21e4e7 xor      rcx, r11
21e4ea xor      rax, rcx
21e4ed sub      r8, rcx
21e4f0 test     dil, dil
21e4f3 cmove    r8, rax
21e4f7 inc      rsi
21e4fa imul     r9, r15
21e4fe mov      qword ptr [r14 + 0x1b8], rsi
21e505 add      r9, r12
21e508 mov      qword ptr [r14 + 0x1b0], r9
21e50f mov      rax, r9
21e512 shr      rax, 0x1b
21e516 movzx    edx, al
21e519 mov      byte ptr [r14 + 0x160], dl
21e520 imul     rdx, r10
21e524 xor      rdx, rbx
21e527 xor      rdx, r11
21e52a mov      rcx, rdx
21e52d xor      rcx, r8
21e530 test     dil, dil
21e533 lea      rax, [rdx + r8]
21e537 cmove    rax, rcx
21e53b mov      qword ptr [r14 + 0xf0], rax
21e542 cmp      r8d, 0x2a0025
21e549 jne      0x14021ef72
21e54f mov      eax, r13d
21e552 btr      eax, 0x1f
21e556 cmp      eax, 2
21e559 jae      0x14021e5a5
21e55b imul     r9, r15
21e55f lea      rax, [rsi + 1]
21e563 mov      qword ptr [r14 + 0x1b8], rax
21e56a add      r9, r12
21e56d mov      qword ptr [r14 + 0x1b0], r9
21e574 shr      r9, 0x1b
21e578 movzx    eax, r9b
21e57c mov      byte ptr [r14 + 0x160], al
21e583 imul     rax, r10
21e587 xor      rax, rbx
21e58a xor      rax, r11
21e58d mov      rcx, rax
21e590 add      rax, 0x85b36
21e596 xor      rcx, 0x85b36
21e59d test     dil, dil
21e5a0 jmp      0x14021ef67
21e5a5 mov      rcx, r14
21e5a8 call     0x1401ee070
21e5ad movzx    ecx, byte ptr [r14 + 0x4ad]
21e5b5 movabs   r8, 0xc4ceb9fe1a85ec53
21e5bf mov      r11, qword ptr [r14 + 0xe0]
21e5c6 mov      r10, qword ptr [r14 + 0xd0]
21e5cd movzx    r9d, byte ptr [r14 + 0xe8]
21e5d5 mov      eax, eax
21e5d7 xor      rcx, rax
21e5da xor      rcx, qword ptr [r14 + 0x11e8]
21e5e1 mov      rax, rcx
21e5e4 shr      rax, 0x21
21e5e8 xor      rax, rcx
21e5eb imul     rax, rbp
21e5ef mov      rcx, rax
21e5f2 shr      rcx, 0x21
21e5f6 xor      rcx, rax
21e5f9 mov      rax, qword ptr [r14 + 0x20]
21e5fd xor      rax, qword ptr [r14 + 0x28]
21e601 imul     rcx, r8
21e605 mov      rdx, rcx
21e608 shr      rdx, 0x21
21e60c xor      rdx, rcx
21e60f xor      rax, rdx
21e612 mov      qword ptr [r14 + 0x11e8], rdx
21e619 mov      rcx, rax
21e61c shr      rcx, 0x21
21e620 xor      rcx, rax
21e623 imul     rcx, rbp
21e627 mov      rdx, rcx
21e62a shr      rdx, 0x21
21e62e xor      rdx, rcx
21e631 imul     rdx, r8
21e635 mov      rax, rdx
21e638 shr      rax, 0x21
21e63c xor      rax, rdx
21e63f mov      qword ptr [r14 + 0x20], rax
21e643 mov      rdx, qword ptr [r14 + 0x138]
21e64a movzx    ecx, byte ptr [r14 + 0x169]
21e652 mov      rax, qword ptr [r14 + 0xd8]
21e659 imul     rcx, r11
21e65d lea      rbx, [rax + rax*4]
21e661 mov      rax, rdx
21e664 add      rbx, rbx
21e667 xor      rcx, rbx
21e66a xor      rcx, r10
21e66d xor      rax, rcx
21e670 sub      rdx, rcx
21e673 test     r9b, r9b
21e676 cmove    rdx, rax
21e67a mov      rax, qword ptr [r14 + 0x1b0]
21e681 inc      qword ptr [r14 + 0x1b8]
21e688 imul     rax, r15
21e68c add      rax, r12
21e68f mov      qword ptr [r14 + 0x1b0], rax
21e696 shr      rax, 0x1b
21e69a movzx    r8d, al
21e69e mov      byte ptr [r14 + 0x169], r8b
21e6a5 imul     r8, r11
21e6a9 xor      r8, rbx
21e6ac xor      r8, r10
21e6af mov      rcx, r8
21e6b2 xor      rcx, rdx
21e6b5 test     r9b, r9b
21e6b8 lea      rax, [r8 + rdx]
21e6bc cmove    rax, rcx
21e6c0 mov      rcx, r14
21e6c3 mov      qword ptr [r14 + 0x138], rax
21e6ca call     0x1401f0910
21e6cf mov      rax, qword ptr [r14 + 0xd8]
21e6d6 mov      r10, qword ptr [r14 + 0xe0]
21e6dd movzx    ecx, byte ptr [r14 + 0x168]
21e6e5 mov      rbx, qword ptr [r14 + 0xd0]
21e6ec mov      rdx, qword ptr [r14 + 0x130]
21e6f3 lea      r11, [rax + rax*8]
21e6f7 movzx    r9d, byte ptr [r14 + 0xe8]
21e6ff mov      rax, rdx
21e702 imul     rcx, r10
21e706 xor      rcx, r11
21e709 xor      rcx, rbx
21e70c xor      rax, rcx
21e70f sub      rdx, rcx
21e712 test     r9b, r9b
21e715 cmove    rdx, rax
21e719 mov      rax, qword ptr [r14 + 0x1b0]
21e720 inc      qword ptr [r14 + 0x1b8]
21e727 mov      rcx, rdx
21e72a imul     rax, r15
21e72e add      rax, r12
21e731 mov      qword ptr [r14 + 0x1b0], rax
21e738 shr      rax, 0x1b
21e73c movzx    r8d, al
21e740 mov      byte ptr [r14 + 0x168], r8b
21e747 imul     r8, r10
21e74b xor      r8, r11
21e74e xor      r8, rbx
21e751 xor      rcx, r8
21e754 test     r9b, r9b
21e757 lea      rax, [rdx + r8]
21e75b cmove    rax, rcx
21e75f mov      rcx, r14
21e762 mov      qword ptr [r14 + 0x130], rax
21e769 call     0x1401f0910
21e76e mov      rcx, r14
21e771 call     0x1401ee070
21e776 cmp      eax, dword ptr [r14 + 0x1d8]
21e77d jae      0x14021e789
21e77f mov      edx, eax
21e781 mov      rcx, r14
21e784 call     0x1401f0910
21e789 mov      rsi, qword ptr [r14 + 0xe0]
21e790 mov      rbp, qword ptr [r14 + 0xd0]
21e797 mov      r11, qword ptr [r14 + 0x130]
21e79e movzx    edi, byte ptr [r14 + 0xe8]
21e7a6 mov      rax, r11
21e7a9 movzx    ecx, byte ptr [r14 + 0x168]
21e7b1 mov      rbx, qword ptr [r14 + 0xd8]
21e7b8 mov      r8, qword ptr [r14 + 0x1b8]
21e7bf mov      r9, qword ptr [r14 + 0x1b0]
21e7c6 imul     rcx, rsi
21e7ca lea      r10, [rbx + rbx*8]
21e7ce xor      rcx, r10
21e7d1 xor      rcx, rbp
21e7d4 xor      rax, rcx
21e7d7 sub      r11, rcx
21e7da test     dil, dil
21e7dd cmove    r11, rax
21e7e1 imul     r9, r15
21e7e5 mov      rcx, r11
21e7e8 add      r9, r12
21e7eb mov      rax, r9
21e7ee shr      rax, 0x1b
21e7f2 movzx    edx, al
21e7f5 mov      byte ptr [r14 + 0x168], dl
21e7fc imul     rdx, rsi
21e800 xor      rdx, rbp
21e803 xor      rdx, r10
21e806 xor      rcx, rdx
21e809 test     dil, dil
21e80c lea      rax, [r11 + rdx]
21e810 cmove    rax, rcx
21e814 mov      rcx, r11
21e817 mov      qword ptr [r14 + 0x130], rax
21e81e lea      rax, [r8 + 2]
21e822 mov      qword ptr [r14 + 0x1b8], rax
21e829 mov      r8d, 0x502f
21e82f imul     r9, r15
21e833 lea      rax, [rbx + rbx*4]
21e837 add      rax, rax
21e83a add      r9, r12
21e83d mov      qword ptr [r14 + 0x1b0], r9
21e844 shr      r9, 0x1b
21e848 movzx    edx, r9b
21e84c mov      byte ptr [r14 + 0x169], dl
21e853 imul     rdx, rsi
21e857 xor      rdx, rax
21e85a xor      rdx, rbp
21e85d xor      rcx, rdx
21e860 test     dil, dil
21e863 lea      rax, [r11 + rdx]
21e867 cmove    rax, rcx
21e86b mov      rcx, r14
21e86e mov      qword ptr [r14 + 0x138], rax
21e875 movzx    edx, byte ptr [r14 + 0x4ad]
21e87d xor      rdx, qword ptr [r14 + 0x348]
21e884 call     0x1401f1520
21e889 mov      r8, qword ptr [r14 + 0x348]
21e890 movabs   rdi, 0xff51afd7ed558ccd
21e89a mov      rax, r8
21e89d movabs   rbp, 0xc4ceb9fe1a85ec53
21e8a7 xor      rax, qword ptr [r14 + 0x20]
21e8ab mov      rcx, rax
21e8ae shr      rcx, 0x21
21e8b2 xor      rcx, rax
21e8b5 imul     rcx, rdi
21e8b9 mov      rax, rcx
21e8bc shr      rax, 0x21
21e8c0 xor      rax, rcx
21e8c3 imul     rax, rbp
21e8c7 mov      rdx, rax
21e8ca shr      rdx, 0x21
21e8ce xor      edx, eax
21e8d0 mov      ecx, edx
21e8d2 lea      eax, [rdx + 1]
21e8d5 imul     ecx, eax
21e8d8 xor      edx, eax
21e8da not      ecx
21e8dc and      ecx, edx
21e8de test     cl, 1
21e8e1 je       0x14021e94a
21e8e3 and      r8b, 3
21e8e7 cmp      r8b, 1
21e8eb jne      0x14021e94a
21e8ed mov      rax, qword ptr [r14 + 0x1b0]
21e8f4 inc      qword ptr [r14 + 0x1b8]
21e8fb imul     rax, r15
21e8ff add      rax, r12
21e902 mov      qword ptr [r14 + 0x1b0], rax
21e909 shr      rax, 0x1b
21e90d movzx    eax, al
21e910 mov      byte ptr [r14 + 0x160], al
21e917 imul     rax, qword ptr [r14 + 0xe0]
21e91f xor      rax, qword ptr [r14 + 0xd8]
21e926 xor      rax, qword ptr [r14 + 0xd0]
21e92d mov      rcx, rax
21e930 add      rax, 0x3dd18f
21e936 xor      rcx, 0x3dd18f
21e93d cmp      byte ptr [r14 + 0xe8], 0
21e945 jmp      0x14021ef67
21e94a mov      rcx, r14
21e94d call     0x1401ee070
21e952 mov      ebx, eax
21e954 cmp      eax, dword ptr [r14 + 0x1d8]
21e95b jb       0x14021e9ba
21e95d mov      rax, qword ptr [r14 + 0x1b0]
21e964 inc      qword ptr [r14 + 0x1b8]
21e96b imul     rax, r15
21e96f add      rax, r12
21e972 mov      qword ptr [r14 + 0x1b0], rax
21e979 shr      rax, 0x1b
21e97d movzx    eax, al
21e980 mov      byte ptr [r14 + 0x160], al
21e987 imul     rax, qword ptr [r14 + 0xe0]
21e98f xor      rax, qword ptr [r14 + 0xd8]
21e996 xor      rax, qword ptr [r14 + 0xd0]
21e99d mov      rcx, rax
21e9a0 add      rax, 0xfe1ab
21e9a6 xor      rcx, 0xfe1ab
21e9ad cmp      byte ptr [r14 + 0xe8], 0
21e9b5 jmp      0x14021ef67
21e9ba mov      edx, ebx
21e9bc mov      rcx, r14
21e9bf call     0x1401f25b0
21e9c4 movsxd   rcx, dword ptr [r14 + 0x11e0]
21e9cb movabs   r8, 0xd6e8feb86659fd93
21e9d5 mov      rdx, qword ptr [r14 + 0x20]
21e9d9 mov      rax, rbx
21e9dc imul     rax, r8
21e9e0 imul     rcx, r15
21e9e4 rol      rdx, 0x11
21e9e8 xor      rcx, qword ptr [r14 + 0x260]
21e9ef xor      rax, rcx
21e9f2 xor      rax, rdx
21e9f5 mov      rcx, rax
21e9f8 shr      rcx, 0x21
21e9fc xor      rcx, rax
21e9ff imul     rcx, rdi
21ea03 mov      rdx, rcx
21ea06 shr      rdx, 0x21
21ea0a xor      rdx, rcx
21ea0d imul     rdx, rbp
21ea11 mov      rax, rdx
21ea14 shr      rax, 0x21
21ea18 xor      rax, rdx
21ea1b mov      r10, rax
21ea1e shr      r10, 0x1d
21ea22 xor      r10, rax
21ea25 or       r10, 1
21ea29 mov      rax, r10
21ea2c mov      qword ptr [r14 + 0x260], r10
21ea33 and      eax, 0x3ff
21ea38 cmp      rax, 0x2c5
21ea3e jne      0x14021ea4f
21ea40 mov      rcx, r14
21ea43 call     0x1402297e0
21ea48 mov      r10, qword ptr [r14 + 0x260]
21ea4f movzx    eax, r10b
21ea53 and      al, 0x1f
21ea55 cmp      al, 0x15
21ea57 jne      0x14021eb45
21ea5d movsxd   rcx, dword ptr [r14 + 0x11e0]
21ea64 mov      rax, qword ptr [r14 + 0x20]
21ea68 xor      rcx, 0x5a5a
21ea6f rol      rax, 0x11
21ea73 imul     rcx, r15
21ea77 xor      rcx, r10
21ea7a xor      rcx, rax
21ea7d movabs   rax, 0x8f70feda99a6026d
21ea87 xor      rcx, rax
21ea8a mov      rax, rcx
21ea8d shr      rax, 0x21
21ea91 xor      rax, rcx
21ea94 imul     rax, rdi
21ea98 mov      rcx, rax
21ea9b shr      rcx, 0x21
21ea9f xor      rcx, rax
21eaa2 imul     rcx, rbp
21eaa6 mov      rax, rcx
21eaa9 shr      rax, 0x21
21eaad xor      rax, rcx
21eab0 mov      r9, rax
21eab3 shr      r9, 0x1d
21eab7 xor      r9, rax
21eaba or       r9, 1
21eabe mov      rax, r9
21eac1 mov      rcx, r9
21eac4 shr      rax, 8
21eac8 and      eax, 3
21eacb shr      rcx, 0x28
21eacf imul     r8, rax, 0x3e
21ead3 mov      eax, 0x8421085
21ead8 mul      ecx
21eada mov      eax, ecx
21eadc sub      eax, edx
21eade shr      eax, 1
21eae0 add      eax, edx
21eae2 shr      eax, 5
21eae5 imul     eax, eax, 0x3e
21eae8 sub      ecx, eax
21eaea mov      eax, ecx
21eaec add      r8, rax
21eaef mov      rax, qword ptr [r14 + 0x4b8]
21eaf6 movsxd   rcx, dword ptr [rax + r8*4]
21eafa movsxd   rax, dword ptr [r14 + 0x4c8]
21eb01 xor      rcx, rax
21eb04 add      rcx, qword ptr [r14 + 0x4c0]
21eb0b xor      rcx, r9
21eb0e mov      rax, rcx
21eb11 shr      rax, 0x21
21eb15 xor      rax, rcx
21eb18 imul     rax, rdi
21eb1c mov      rcx, rax
21eb1f shr      rcx, 0x21
21eb23 xor      rcx, rax
21eb26 imul     rcx, rbp
21eb2a mov      rax, rcx
21eb2d shr      rax, 0x21
21eb31 xor      rax, r10
21eb34 xor      rax, rcx
21eb37 inc      qword ptr [r14 + 0x268]
21eb3e mov      qword ptr [r14 + 0x260], rax
21eb45 inc      dword ptr [r14 + 0x200]
21eb4c mov      eax, dword ptr [r14 + 0x200]
21eb53 cmp      eax, dword ptr [r14 + 0x1fc]
21eb5a jb       0x14021eb6f
21eb5c mov      rcx, r14
21eb5f mov      dword ptr [r14 + 0x200], 0
21eb6a call     0x1401ef7c0
21eb6f mov      r8d, ebx
21eb72 mov      edx, ebx
21eb74 mov      rcx, r14
21eb77 call     0x1401f0660
21eb7c inc      qword ptr [r14 + 0x1b8]
21eb83 mov      rcx, rbx
21eb86 mov      r9, qword ptr [r14 + 0x1b0]
21eb8d imul     r9, r15
21eb91 mov      r15, qword ptr [r14 + 0x1b8]
21eb98 add      r9, r12
21eb9b lea      r12d, [rbx + 1]
21eb9f mov      qword ptr [r14 + 0x1b0], r9
21eba6 mov      rax, r9
21eba9 shr      rax, 0x1b
21ebad movzx    edx, al
21ebb0 mov      byte ptr [r14 + 0x168], dl
21ebb7 mov      r11, qword ptr [r14 + 0xe0]
21ebbe mov      r10, qword ptr [r14 + 0xd8]
21ebc5 mov      rdi, qword ptr [r14 + 0xd0]
21ebcc movzx    ebp, byte ptr [r14 + 0xe8]
21ebd4 imul     rdx, r11
21ebd8 lea      rax, [r10 + r10*8]
21ebdc xor      rdx, rax
21ebdf xor      rdx, rdi
21ebe2 xor      rcx, rdx
21ebe5 test     bpl, bpl
21ebe8 lea      rax, [rbx + rdx]
21ebec cmove    rax, rcx
21ebf0 inc      r15
21ebf3 mov      qword ptr [r14 + 0x130], rax
21ebfa mov      rcx, qword ptr [r14 + 0x1d0]
21ec01 mov      rax, qword ptr [r14 + 0x48]
21ec05 mov      qword ptr [rsp + 0x60], r15
21ec0a movzx    r8d, byte ptr [rcx + rbx]
21ec0f xor      r8b, byte ptr [rax + rbx]
21ec13 movabs   rax, 0x9e3779b97f4a7c15
21ec1d imul     r9, rax
21ec21 mov      qword ptr [r14 + 0x1b8], r15
21ec28 movabs   rax, 0x2545f4914f6cdd1d
21ec32 add      r9, rax
21ec35 mov      rax, r9
21ec38 shr      rax, 0x1b
21ec3c movzx    edx, al
21ec3f lea      rax, [r10 + r10]
21ec43 mov      byte ptr [r14 + 0x161], dl
21ec4a imul     rdx, r11
21ec4e xor      rdx, rax
21ec51 xor      rdx, rdi
21ec54 mov      rcx, rdx
21ec57 xor      rcx, r12
21ec5a test     bpl, bpl
21ec5d lea      rax, [rdx + r12]
21ec61 cmove    rax, rcx
21ec65 mov      qword ptr [r14 + 0xf8], rax
21ec6c movsxd   rdx, dword ptr [r14 + 0x11e0]
21ec73 mov      rbx, qword ptr [r14 + 0x20]
21ec77 mov      rcx, rdx
21ec7a xor      rcx, qword ptr [r14 + 0x350]
21ec81 xor      rcx, r12
21ec84 xor      rcx, qword ptr [r14 + 0x348]
21ec8b xor      rcx, rbx
21ec8e mov      rax, rcx
21ec91 shr      rax, 0x21
21ec95 xor      rax, rcx
21ec98 movabs   rcx, 0xff51afd7ed558ccd
21eca2 imul     rax, rcx
21eca6 mov      rcx, rax
21eca9 shr      rcx, 0x21
21ecad xor      rcx, rax
21ecb0 movabs   rax, 0xc4ceb9fe1a85ec53
21ecba imul     rcx, rax
21ecbe movzx    eax, r8b
21ecc2 mov      r15, rcx
21ecc5 xor      rax, 0xdd
21eccb shr      r15, 0x21
21eccf xor      r15, rcx
21ecd2 lea      rcx, [rip - 0x21ecd9]
21ecd9 mov      qword ptr [r14 + 0x28], r15
21ecdd movzx    esi, byte ptr [rax + rcx + 0x3ecf00]
21ece5 xor      sil, 0x63
21ece9 inc      edx
21eceb mov      dword ptr [r14 + 0x11e0], edx
21ecf2 test     dl, 0x1f
21ecf5 jne      0x14021ed45
21ecf7 movsxd   rax, edx
21ecfa xor      rax, qword ptr [r14 + 0x348]
21ed01 xor      rax, rbx
21ed04 mov      rcx, rax
21ed07 shr      rcx, 0x21
21ed0b xor      rcx, rax
21ed0e movabs   rax, 0xff51afd7ed558ccd
21ed18 imul     rcx, rax
21ed1c movabs   rax, 0xc4ceb9fe1a85ec53
21ed26 mov      rdx, rcx
21ed29 shr      rdx, 0x21
21ed2d xor      rdx, rcx
21ed30 imul     rdx, rax
21ed34 mov      rax, rdx
21ed37 shr      rax, 0x21
21ed3b xor      rax, rdx
21ed3e mov      qword ptr [r14 + 0x348], rax
21ed45 movzx    r8d, sil
21ed49 mov      eax, r8d
21ed4c mov      byte ptr [r14 + 0x4ad], sil
21ed53 xor      rax, r12
21ed56 movabs   r12, 0xff51afd7ed558ccd
21ed60 xor      rax, rbx
21ed63 movabs   rbx, 0x9e3779b97f4a7c15
21ed6d mov      rcx, rax
21ed70 shr      rcx, 0x21
21ed74 xor      rcx, rax
21ed77 movabs   rax, 0xc4ceb9fe1a85ec53
21ed81 imul     rcx, r12
21ed85 imul     r8, rbx
21ed89 imul     r9, rbx
21ed8d mov      rdx, rcx
21ed90 shr      rdx, 0x21
21ed94 xor      rdx, rcx
21ed97 mov      ecx, dword ptr [r14 + 0x1178]
21ed9e imul     rdx, rax
21eda2 mov      rax, rdx
21eda5 shr      rax, 0x21
21eda9 xor      rax, rdx
21edac mov      qword ptr [r14 + 0x20], rax
21edb0 movabs   rax, 0xd6e8feb86659fd93
21edba imul     rcx, rax
21edbe xor      rcx, r8
21edc1 xor      rcx, r15
21edc4 movabs   r15, 0x2545f4914f6cdd1d
21edce mov      rax, rcx
21edd1 add      r9, r15
21edd4 shr      rax, 0x21
21edd8 xor      rax, rcx
21eddb imul     rax, r12
21eddf mov      rdx, rax
21ede2 shr      rdx, 0x21
21ede6 xor      rdx, rax
21ede9 movabs   rax, 0xc4ceb9fe1a85ec53
21edf3 imul     rdx, rax
21edf7 mov      rax, qword ptr [rsp + 0x60]
21edfc shr      rdx, 0x21
21ee00 and      edx, 3
21ee03 inc      rax
21ee06 mov      qword ptr [r14 + 0x1b8], rax
21ee0d cmp      sil, 0x3e
21ee11 jae      0x14021eeab
21ee17 inc      qword ptr [r14 + 0x11a0]
21ee1e lea      rax, [rip - 0x21ee25]
21ee25 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
21ee2d mov      qword ptr [r14 + 0x1b0], r9
21ee34 shr      r9, 0x1b
21ee38 movzx    eax, r9b
21ee3c mov      byte ptr [r14 + 0x160], al
21ee43 imul     rax, r11
21ee47 mov      ebx, edx
21ee49 xor      rax, rdi
21ee4c xor      rax, r10
21ee4f mov      rcx, rax
21ee52 add      rax, r8
21ee55 xor      rcx, r8
21ee58 movzx    r8d, sil
21ee5c test     bpl, bpl
21ee5f cmove    rax, rcx
21ee63 mov      rcx, r14
21ee66 mov      qword ptr [r14 + 0xf0], rax
21ee6d call     0x1401f1f50
21ee72 mov      r8, qword ptr [rsp + 0x70]
21ee77 lea      edx, [r13 - 1]
21ee7b mov      eax, eax
21ee7d imul     rcx, rbx, 0x3e
21ee81 add      rcx, rax
21ee84 mov      rax, qword ptr [r14 + 0x4b8]
21ee8b movsxd   r9, dword ptr [rax + rcx*4]
21ee8f mov      rcx, r14
21ee92 movsxd   rax, dword ptr [r14 + 0x4c8]
21ee99 xor      r9, rax
21ee9c add      r9, qword ptr [r14 + 0x4c0]
21eea3 call     r9
21eea6 jmp      0x14021ef72
21eeab inc      dword ptr [r14 + 0x11a8]
21eeb2 mov      rax, r9
21eeb5 shr      rax, 0x1b
21eeb9 movzx    ecx, al
21eebc lea      rax, [r10*4]
21eec4 mov      byte ptr [r14 + 0x163], cl
21eecb imul     rcx, r11
21eecf imul     r9, rbx
21eed3 xor      rcx, rax
21eed6 xor      rcx, rdi
21eed9 mov      qword ptr [r14 + 0x108], rcx
21eee0 mov      r8, qword ptr [r14 + 0x1b8]
21eee7 add      r9, r15
21eeea mov      rax, r9
21eeed shr      rax, 0x1b
21eef1 movzx    edx, al
21eef4 mov      byte ptr [r14 + 0x16a], dl
21eefb imul     rax, r10, 0xb
21eeff imul     rdx, r11
21ef03 xor      rdx, rax
21ef06 xor      rdx, rdi
21ef09 mov      rcx, rdx
21ef0c xor      rcx, 1
21ef10 test     bpl, bpl
21ef13 lea      rax, [rdx + 1]
21ef17 cmove    rax, rcx
21ef1b mov      qword ptr [r14 + 0x140], rax
21ef22 lea      rax, [r8 + 2]
21ef26 mov      qword ptr [r14 + 0x1b8], rax
21ef2d imul     r9, rbx
21ef31 add      r9, r15
21ef34 mov      qword ptr [r14 + 0x1b0], r9
21ef3b shr      r9, 0x1b
21ef3f movzx    eax, r9b
21ef43 mov      byte ptr [r14 + 0x160], al
21ef4a imul     rax, r11
21ef4e xor      rax, rdi
21ef51 xor      rax, r10
21ef54 mov      rcx, rax
21ef57 add      rax, 0xfe1ab
21ef5d xor      rcx, 0xfe1ab
21ef64 test     bpl, bpl
21ef67 cmove    rax, rcx
21ef6b mov      qword ptr [r14 + 0xf0], rax
21ef72 mov      rbx, qword ptr [rsp + 0x68]
21ef77 add      rsp, 0x20
21ef7b pop      r15
21ef7d pop      r14
21ef7f pop      r13
21ef81 pop      r12
21ef83 pop      rdi
21ef84 pop      rsi
21ef85 pop      rbp
21ef86 ret      
21ef87 mov      edx, 0x54485254
21ef8c mov      rcx, r14
21ef8f call     0x1401ed830
21ef94 int3     
21ef95 mov      edx, 0x43414e59
21ef9a mov      rcx, r14
21ef9d call     0x1401ed830
21efa2 int3     
