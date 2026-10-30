20d330 mov      qword ptr [rsp + 0x18], r8
20d335 push     rbx
20d336 push     rbp
20d337 push     rdi
20d338 push     r12
20d33a push     r13
20d33c push     r14
20d33e push     r15
20d340 sub      rsp, 0x30
20d344 movsxd   rax, dword ptr [rcx + 0x11e0]
20d34b mov      r14, rcx
20d34e mov      r13d, edx
20d351 movabs   rcx, 0x34a5a4cbb437c294
20d35b imul     rax, rcx
20d35f movabs   rcx, 0x96fc2e0035e946ab
20d369 movabs   rbp, 0xff51afd7ed558ccd
20d373 xor      rax, qword ptr [r14 + 0x28]
20d377 mov      rdi, r8
20d37a mov      qword ptr [rsp + 0x70], rax
20d37f mov      rax, qword ptr [rsp + 0x70]
20d384 movsxd   rax, dword ptr [r14 + 0x11e0]
20d38b imul     rax, rcx
20d38f movabs   rcx, 0x7034b05eb6a2cabe
20d399 xor      rax, qword ptr [r14 + 0x28]
20d39d mov      qword ptr [rsp + 0x70], rax
20d3a2 mov      rax, qword ptr [rsp + 0x70]
20d3a7 movsxd   rax, dword ptr [r14 + 0x11e0]
20d3ae imul     rax, rcx
20d3b2 movabs   rcx, 0x1db94d26c29ba17b
20d3bc xor      rax, qword ptr [r14 + 0x28]
20d3c0 mov      qword ptr [rsp + 0x70], rax
20d3c5 mov      rax, qword ptr [rsp + 0x70]
20d3ca mov      rax, qword ptr [r14 + 0x2f8]
20d3d1 sub      rax, rcx
20d3d4 mov      rcx, rax
20d3d7 shr      rcx, 0x21
20d3db xor      rcx, rax
20d3de movabs   rax, 0xc4ceb9fe1a85ec53
20d3e8 imul     rcx, rbp
20d3ec mov      rdx, rcx
20d3ef shr      rdx, 0x21
20d3f3 xor      rdx, rcx
20d3f6 mov      rcx, r14
20d3f9 imul     rdx, rax
20d3fd mov      rax, rdx
20d400 shr      rax, 0x21
20d404 xor      rdx, rax
20d407 mov      rax, qword ptr [r14 + 0x2f8]
20d40e or       rdx, 1
20d412 xor      rdx, rax
20d415 mov      qword ptr [r14 + 0x2f8], rdx
20d41c call     0x1401f1c70
20d421 mov      rbx, qword ptr [r14 + 0xf8]
20d428 mov      r11d, eax
20d42b movzx    ecx, byte ptr [r14 + 0x161]
20d433 mov      rax, rbx
20d436 mov      r9, qword ptr [r14 + 0xe0]
20d43d movabs   r15, 0x9e3779b97f4a7c15
20d447 mov      r8, qword ptr [r14 + 0xd0]
20d44e movabs   r12, 0x2545f4914f6cdd1d
20d458 movzx    edx, byte ptr [r14 + 0xe8]
20d460 mov      r10, qword ptr [r14 + 0xd8]
20d467 imul     rcx, r9
20d46b add      r10, r10
20d46e xor      rcx, r8
20d471 xor      rcx, r10
20d474 xor      rax, rcx
20d477 sub      rbx, rcx
20d47a test     dl, dl
20d47c cmove    rbx, rax
20d480 mov      rax, qword ptr [r14 + 0x1b0]
20d487 inc      qword ptr [r14 + 0x1b8]
20d48e imul     rax, r15
20d492 add      rax, r12
20d495 mov      qword ptr [r14 + 0x1b0], rax
20d49c shr      rax, 0x1b
20d4a0 movzx    eax, al
20d4a3 mov      byte ptr [r14 + 0x161], al
20d4aa imul     rax, r9
20d4ae xor      rax, r8
20d4b1 xor      rax, r10
20d4b4 mov      rcx, rax
20d4b7 add      rax, rbx
20d4ba xor      rcx, rbx
20d4bd test     dl, dl
20d4bf cmove    rax, rcx
20d4c3 mov      ecx, r11d
20d4c6 mov      qword ptr [r14 + 0xf8], rax
20d4cd call     0x1401ed270
20d4d2 mov      dword ptr [rsp + 0x28], ebx
20d4d6 xor      r9d, r9d
20d4d9 mov      dword ptr [rsp + 0x20], eax
20d4dd xor      edx, edx
20d4df mov      rcx, r14
20d4e2 lea      r8d, [r9 + 1]
20d4e6 call     0x1401f10a0
20d4eb mov      rdx, rax
20d4ee mov      rcx, r14
20d4f1 call     0x1401f0db0
20d4f6 mov      rax, qword ptr [r14 + 0x2f8]
20d4fd test     r13d, r13d
20d500 jns      0x14020e03c
20d506 cmp      qword ptr [r14 + 0x11b8], rdi
20d50d jne      0x14020e04a
20d513 movsxd   rax, dword ptr [r14 + 0x11e0]
20d51a movabs   rcx, 0x5a4785f2cbb1fdd8
20d524 imul     rax, rcx
20d528 mov      rcx, r14
20d52b xor      rax, qword ptr [r14 + 0x28]
20d52f mov      qword ptr [rsp + 0x70], rax
20d534 mov      rax, qword ptr [rsp + 0x70]
20d539 call     0x1401ee450
20d53e test     eax, eax
20d540 jne      0x14020e02c
20d546 cmp      dword ptr [r14 + 0xad0], eax
20d54d jne      0x14020e02c
20d553 mov      r8, qword ptr [r14 + 0xf0]
20d55a movzx    ecx, byte ptr [r14 + 0x160]
20d562 mov      rax, r8
20d565 mov      r10, qword ptr [r14 + 0xe0]
20d56c mov      rbx, qword ptr [r14 + 0xd0]
20d573 mov      r11, qword ptr [r14 + 0xd8]
20d57a movzx    edi, byte ptr [r14 + 0xe8]
20d582 mov      r9, qword ptr [r14 + 0x1b0]
20d589 imul     rcx, r10
20d58d mov      qword ptr [rsp + 0x78], rsi
20d592 mov      rsi, qword ptr [r14 + 0x1b8]
20d599 xor      rcx, rbx
20d59c xor      rcx, r11
20d59f xor      rax, rcx
20d5a2 sub      r8, rcx
20d5a5 test     dil, dil
20d5a8 cmove    r8, rax
20d5ac inc      rsi
20d5af imul     r9, r15
20d5b3 mov      qword ptr [r14 + 0x1b8], rsi
20d5ba add      r9, r12
20d5bd mov      qword ptr [r14 + 0x1b0], r9
20d5c4 mov      rax, r9
20d5c7 shr      rax, 0x1b
20d5cb movzx    edx, al
20d5ce mov      byte ptr [r14 + 0x160], dl
20d5d5 imul     rdx, r10
20d5d9 xor      rdx, rbx
20d5dc xor      rdx, r11
20d5df mov      rcx, rdx
20d5e2 xor      rcx, r8
20d5e5 test     dil, dil
20d5e8 lea      rax, [rdx + r8]
20d5ec cmove    rax, rcx
20d5f0 mov      qword ptr [r14 + 0xf0], rax
20d5f7 cmp      r8d, 0x338040
20d5fe jne      0x14020e027
20d604 mov      eax, r13d
20d607 btr      eax, 0x1f
20d60b cmp      eax, 2
20d60e jae      0x14020d65a
20d610 imul     r9, r15
20d614 lea      rax, [rsi + 1]
20d618 mov      qword ptr [r14 + 0x1b8], rax
20d61f add      r9, r12
20d622 mov      qword ptr [r14 + 0x1b0], r9
20d629 shr      r9, 0x1b
20d62d movzx    eax, r9b
20d631 mov      byte ptr [r14 + 0x160], al
20d638 imul     rax, r10
20d63c xor      rax, rbx
20d63f xor      rax, r11
20d642 mov      rcx, rax
20d645 add      rax, 0x1ad951
20d64b xor      rcx, 0x1ad951
20d652 test     dil, dil
20d655 jmp      0x14020e01c
20d65a mov      rcx, r14
20d65d call     0x1401ee070
20d662 movzx    ecx, byte ptr [r14 + 0x4ad]
20d66a movabs   r8, 0xc4ceb9fe1a85ec53
20d674 xor      rcx, qword ptr [r14 + 0x11e8]
20d67b mov      r11, qword ptr [r14 + 0xe0]
20d682 mov      r9, qword ptr [r14 + 0xd0]
20d689 movzx    r10d, byte ptr [r14 + 0xe8]
20d691 mov      eax, eax
20d693 xor      rcx, rax
20d696 mov      rax, rcx
20d699 shr      rax, 0x21
20d69d xor      rax, rcx
20d6a0 imul     rax, rbp
20d6a4 mov      rcx, rax
20d6a7 shr      rcx, 0x21
20d6ab xor      rcx, rax
20d6ae imul     rcx, r8
20d6b2 mov      rdx, rcx
20d6b5 shr      rdx, 0x21
20d6b9 xor      rdx, rcx
20d6bc mov      qword ptr [r14 + 0x11e8], rdx
20d6c3 xor      rdx, qword ptr [r14 + 0x28]
20d6c7 xor      rdx, qword ptr [r14 + 0x20]
20d6cb mov      rax, rdx
20d6ce shr      rax, 0x21
20d6d2 xor      rax, rdx
20d6d5 imul     rax, rbp
20d6d9 mov      rcx, rax
20d6dc shr      rcx, 0x21
20d6e0 xor      rcx, rax
20d6e3 imul     rcx, r8
20d6e7 mov      rax, rcx
20d6ea shr      rax, 0x21
20d6ee xor      rax, rcx
20d6f1 mov      qword ptr [r14 + 0x20], rax
20d6f5 mov      rdx, qword ptr [r14 + 0x138]
20d6fc movzx    ecx, byte ptr [r14 + 0x169]
20d704 mov      rax, qword ptr [r14 + 0xd8]
20d70b imul     rcx, r11
20d70f lea      rbx, [rax + rax*4]
20d713 mov      rax, rdx
20d716 xor      rcx, r9
20d719 add      rbx, rbx
20d71c xor      rcx, rbx
20d71f xor      rax, rcx
20d722 sub      rdx, rcx
20d725 test     r10b, r10b
20d728 cmove    rdx, rax
20d72c mov      rax, qword ptr [r14 + 0x1b0]
20d733 inc      qword ptr [r14 + 0x1b8]
20d73a imul     rax, r15
20d73e add      rax, r12
20d741 mov      qword ptr [r14 + 0x1b0], rax
20d748 shr      rax, 0x1b
20d74c movzx    r8d, al
20d750 mov      byte ptr [r14 + 0x169], r8b
20d757 imul     r8, r11
20d75b xor      r8, r9
20d75e xor      r8, rbx
20d761 mov      rcx, r8
20d764 xor      rcx, rdx
20d767 test     r10b, r10b
20d76a lea      rax, [r8 + rdx]
20d76e cmove    rax, rcx
20d772 mov      rcx, r14
20d775 mov      qword ptr [r14 + 0x138], rax
20d77c call     0x1401f0910
20d781 mov      rax, qword ptr [r14 + 0xd8]
20d788 mov      rdx, qword ptr [r14 + 0x130]
20d78f mov      r11, qword ptr [r14 + 0xe0]
20d796 movzx    ecx, byte ptr [r14 + 0x168]
20d79e mov      r9, qword ptr [r14 + 0xd0]
20d7a5 lea      rbx, [rax + rax*8]
20d7a9 movzx    r10d, byte ptr [r14 + 0xe8]
20d7b1 mov      rax, rdx
20d7b4 imul     rcx, r11
20d7b8 xor      rcx, r9
20d7bb xor      rcx, rbx
20d7be xor      rax, rcx
20d7c1 sub      rdx, rcx
20d7c4 test     r10b, r10b
20d7c7 cmove    rdx, rax
20d7cb mov      rax, qword ptr [r14 + 0x1b0]
20d7d2 inc      qword ptr [r14 + 0x1b8]
20d7d9 mov      rcx, rdx
20d7dc imul     rax, r15
20d7e0 add      rax, r12
20d7e3 mov      qword ptr [r14 + 0x1b0], rax
20d7ea shr      rax, 0x1b
20d7ee movzx    r8d, al
20d7f2 mov      byte ptr [r14 + 0x168], r8b
20d7f9 imul     r8, r11
20d7fd xor      r8, r9
20d800 xor      r8, rbx
20d803 xor      rcx, r8
20d806 test     r10b, r10b
20d809 lea      rax, [rdx + r8]
20d80d cmove    rax, rcx
20d811 mov      rcx, r14
20d814 mov      qword ptr [r14 + 0x130], rax
20d81b call     0x1401f0910
20d820 mov      rcx, r14
20d823 call     0x1401ee070
20d828 cmp      eax, dword ptr [r14 + 0x1d8]
20d82f jae      0x14020d83b
20d831 mov      edx, eax
20d833 mov      rcx, r14
20d836 call     0x1401f0910
20d83b mov      rsi, qword ptr [r14 + 0xe0]
20d842 mov      rbp, qword ptr [r14 + 0xd0]
20d849 mov      r11, qword ptr [r14 + 0x130]
20d850 movzx    edi, byte ptr [r14 + 0xe8]
20d858 mov      rax, r11
20d85b movzx    ecx, byte ptr [r14 + 0x168]
20d863 mov      rbx, qword ptr [r14 + 0xd8]
20d86a mov      r8, qword ptr [r14 + 0x1b8]
20d871 mov      r9, qword ptr [r14 + 0x1b0]
20d878 imul     rcx, rsi
20d87c lea      r10, [rbx + rbx*8]
20d880 xor      rcx, rbp
20d883 xor      rcx, r10
20d886 xor      rax, rcx
20d889 sub      r11, rcx
20d88c test     dil, dil
20d88f cmove    r11, rax
20d893 imul     r9, r15
20d897 mov      rcx, r11
20d89a add      r9, r12
20d89d mov      rax, r9
20d8a0 shr      rax, 0x1b
20d8a4 movzx    edx, al
20d8a7 mov      byte ptr [r14 + 0x168], dl
20d8ae imul     rdx, rsi
20d8b2 xor      rdx, rbp
20d8b5 xor      rdx, r10
20d8b8 xor      rcx, rdx
20d8bb test     dil, dil
20d8be lea      rax, [r11 + rdx]
20d8c2 cmove    rax, rcx
20d8c6 mov      rcx, r11
20d8c9 mov      qword ptr [r14 + 0x130], rax
20d8d0 lea      rax, [r8 + 2]
20d8d4 mov      qword ptr [r14 + 0x1b8], rax
20d8db mov      r8d, 0x2628
20d8e1 imul     r9, r15
20d8e5 lea      rax, [rbx + rbx*4]
20d8e9 add      rax, rax
20d8ec add      r9, r12
20d8ef mov      qword ptr [r14 + 0x1b0], r9
20d8f6 shr      r9, 0x1b
20d8fa movzx    edx, r9b
20d8fe mov      byte ptr [r14 + 0x169], dl
20d905 imul     rdx, rsi
20d909 xor      rdx, rax
20d90c xor      rdx, rbp
20d90f xor      rcx, rdx
20d912 test     dil, dil
20d915 lea      rax, [r11 + rdx]
20d919 cmove    rax, rcx
20d91d mov      rcx, r14
20d920 mov      qword ptr [r14 + 0x138], rax
20d927 movzx    edx, byte ptr [r14 + 0x4ad]
20d92f xor      rdx, qword ptr [r14 + 0x348]
20d936 call     0x1401f1520
20d93b mov      r8, qword ptr [r14 + 0x348]
20d942 movabs   rdi, 0xff51afd7ed558ccd
20d94c mov      rax, r8
20d94f movabs   rbp, 0xc4ceb9fe1a85ec53
20d959 xor      rax, qword ptr [r14 + 0x20]
20d95d mov      rcx, rax
20d960 shr      rcx, 0x21
20d964 xor      rcx, rax
20d967 imul     rcx, rdi
20d96b mov      rax, rcx
20d96e shr      rax, 0x21
20d972 xor      rax, rcx
20d975 imul     rax, rbp
20d979 mov      rdx, rax
20d97c shr      rdx, 0x21
20d980 xor      edx, eax
20d982 mov      ecx, edx
20d984 lea      eax, [rdx + 1]
20d987 imul     ecx, eax
20d98a xor      edx, eax
20d98c not      ecx
20d98e and      ecx, edx
20d990 test     cl, 1
20d993 je       0x14020d9fc
20d995 and      r8b, 3
20d999 cmp      r8b, 1
20d99d jne      0x14020d9fc
20d99f mov      rax, qword ptr [r14 + 0x1b0]
20d9a6 inc      qword ptr [r14 + 0x1b8]
20d9ad imul     rax, r15
20d9b1 add      rax, r12
20d9b4 mov      qword ptr [r14 + 0x1b0], rax
20d9bb shr      rax, 0x1b
20d9bf movzx    eax, al
20d9c2 mov      byte ptr [r14 + 0x160], al
20d9c9 imul     rax, qword ptr [r14 + 0xe0]
20d9d1 xor      rax, qword ptr [r14 + 0xd0]
20d9d8 xor      rax, qword ptr [r14 + 0xd8]
20d9df mov      rcx, rax
20d9e2 add      rax, 0x190631
20d9e8 xor      rcx, 0x190631
20d9ef cmp      byte ptr [r14 + 0xe8], 0
20d9f7 jmp      0x14020e01c
20d9fc mov      rcx, r14
20d9ff call     0x1401ee070
20da04 mov      ebx, eax
20da06 cmp      eax, dword ptr [r14 + 0x1d8]
20da0d jb       0x14020da6c
20da0f mov      rax, qword ptr [r14 + 0x1b0]
20da16 inc      qword ptr [r14 + 0x1b8]
20da1d imul     rax, r15
20da21 add      rax, r12
20da24 mov      qword ptr [r14 + 0x1b0], rax
20da2b shr      rax, 0x1b
20da2f movzx    eax, al
20da32 mov      byte ptr [r14 + 0x160], al
20da39 imul     rax, qword ptr [r14 + 0xe0]
20da41 xor      rax, qword ptr [r14 + 0xd0]
20da48 xor      rax, qword ptr [r14 + 0xd8]
20da4f mov      rcx, rax
20da52 add      rax, 0xfe1ab
20da58 xor      rcx, 0xfe1ab
20da5f cmp      byte ptr [r14 + 0xe8], 0
20da67 jmp      0x14020e01c
20da6c mov      edx, ebx
20da6e mov      rcx, r14
20da71 call     0x1401f25b0
20da76 movsxd   rcx, dword ptr [r14 + 0x11e0]
20da7d movabs   r8, 0xd6e8feb86659fd93
20da87 mov      rdx, qword ptr [r14 + 0x20]
20da8b mov      rax, rbx
20da8e imul     rax, r8
20da92 imul     rcx, r15
20da96 rol      rdx, 0x11
20da9a xor      rcx, qword ptr [r14 + 0x260]
20daa1 xor      rax, rcx
20daa4 xor      rax, rdx
20daa7 mov      rcx, rax
20daaa shr      rcx, 0x21
20daae xor      rcx, rax
20dab1 imul     rcx, rdi
20dab5 mov      rdx, rcx
20dab8 shr      rdx, 0x21
20dabc xor      rdx, rcx
20dabf imul     rdx, rbp
20dac3 mov      rax, rdx
20dac6 shr      rax, 0x21
20daca xor      rax, rdx
20dacd mov      r10, rax
20dad0 shr      r10, 0x1d
20dad4 xor      r10, rax
20dad7 or       r10, 1
20dadb mov      rax, r10
20dade mov      qword ptr [r14 + 0x260], r10
20dae5 and      eax, 0x3ff
20daea cmp      rax, 0x2c5
20daf0 jne      0x14020db01
20daf2 mov      rcx, r14
20daf5 call     0x1402297e0
20dafa mov      r10, qword ptr [r14 + 0x260]
20db01 movzx    eax, r10b
20db05 and      al, 0x1f
20db07 cmp      al, 0x15
20db09 jne      0x14020dbf7
20db0f movsxd   rcx, dword ptr [r14 + 0x11e0]
20db16 mov      rax, qword ptr [r14 + 0x20]
20db1a xor      rcx, 0x5a5a
20db21 rol      rax, 0x11
20db25 imul     rcx, r15
20db29 xor      rcx, r10
20db2c xor      rcx, rax
20db2f movabs   rax, 0x8f70feda99a6026d
20db39 xor      rcx, rax
20db3c mov      rax, rcx
20db3f shr      rax, 0x21
20db43 xor      rax, rcx
20db46 imul     rax, rdi
20db4a mov      rcx, rax
20db4d shr      rcx, 0x21
20db51 xor      rcx, rax
20db54 imul     rcx, rbp
20db58 mov      rax, rcx
20db5b shr      rax, 0x21
20db5f xor      rax, rcx
20db62 mov      r9, rax
20db65 shr      r9, 0x1d
20db69 xor      r9, rax
20db6c or       r9, 1
20db70 mov      rax, r9
20db73 mov      rcx, r9
20db76 shr      rax, 8
20db7a and      eax, 3
20db7d shr      rcx, 0x28
20db81 imul     r8, rax, 0x3e
20db85 mov      eax, 0x8421085
20db8a mul      ecx
20db8c mov      eax, ecx
20db8e sub      eax, edx
20db90 shr      eax, 1
20db92 add      eax, edx
20db94 shr      eax, 5
20db97 imul     eax, eax, 0x3e
20db9a sub      ecx, eax
20db9c mov      eax, ecx
20db9e add      r8, rax
20dba1 mov      rax, qword ptr [r14 + 0x4b8]
20dba8 movsxd   rcx, dword ptr [rax + r8*4]
20dbac movsxd   rax, dword ptr [r14 + 0x4c8]
20dbb3 xor      rcx, rax
20dbb6 add      rcx, qword ptr [r14 + 0x4c0]
20dbbd xor      rcx, r9
20dbc0 mov      rax, rcx
20dbc3 shr      rax, 0x21
20dbc7 xor      rax, rcx
20dbca imul     rax, rdi
20dbce mov      rcx, rax
20dbd1 shr      rcx, 0x21
20dbd5 xor      rcx, rax
20dbd8 imul     rcx, rbp
20dbdc mov      rax, rcx
20dbdf shr      rax, 0x21
20dbe3 xor      rax, r10
20dbe6 xor      rax, rcx
20dbe9 inc      qword ptr [r14 + 0x268]
20dbf0 mov      qword ptr [r14 + 0x260], rax
20dbf7 inc      dword ptr [r14 + 0x200]
20dbfe mov      eax, dword ptr [r14 + 0x200]
20dc05 cmp      eax, dword ptr [r14 + 0x1fc]
20dc0c jb       0x14020dc21
20dc0e mov      rcx, r14
20dc11 mov      dword ptr [r14 + 0x200], 0
20dc1c call     0x1401ef7c0
20dc21 mov      r8d, ebx
20dc24 mov      edx, ebx
20dc26 mov      rcx, r14
20dc29 call     0x1401f0660
20dc2e inc      qword ptr [r14 + 0x1b8]
20dc35 mov      rcx, rbx
20dc38 mov      r9, qword ptr [r14 + 0x1b0]
20dc3f imul     r9, r15
20dc43 mov      r15, qword ptr [r14 + 0x1b8]
20dc4a add      r9, r12
20dc4d lea      r12d, [rbx + 1]
20dc51 mov      qword ptr [r14 + 0x1b0], r9
20dc58 mov      rax, r9
20dc5b shr      rax, 0x1b
20dc5f movzx    edx, al
20dc62 mov      byte ptr [r14 + 0x168], dl
20dc69 mov      r11, qword ptr [r14 + 0xe0]
20dc70 mov      r10, qword ptr [r14 + 0xd8]
20dc77 mov      rdi, qword ptr [r14 + 0xd0]
20dc7e movzx    ebp, byte ptr [r14 + 0xe8]
20dc86 imul     rdx, r11
20dc8a lea      rax, [r10 + r10*8]
20dc8e xor      rdx, rax
20dc91 xor      rdx, rdi
20dc94 xor      rcx, rdx
20dc97 test     bpl, bpl
20dc9a lea      rax, [rbx + rdx]
20dc9e cmove    rax, rcx
20dca2 inc      r15
20dca5 mov      qword ptr [r14 + 0x130], rax
20dcac mov      rcx, qword ptr [r14 + 0x1d0]
20dcb3 mov      rax, qword ptr [r14 + 0x48]
20dcb7 mov      qword ptr [rsp + 0x70], r15
20dcbc movzx    r8d, byte ptr [rcx + rbx]
20dcc1 xor      r8b, byte ptr [rax + rbx]
20dcc5 movabs   rax, 0x9e3779b97f4a7c15
20dccf imul     r9, rax
20dcd3 mov      qword ptr [r14 + 0x1b8], r15
20dcda movabs   rax, 0x2545f4914f6cdd1d
20dce4 add      r9, rax
20dce7 mov      rax, r9
20dcea shr      rax, 0x1b
20dcee movzx    edx, al
20dcf1 lea      rax, [r10 + r10]
20dcf5 mov      byte ptr [r14 + 0x161], dl
20dcfc imul     rdx, r11
20dd00 xor      rdx, rax
20dd03 xor      rdx, rdi
20dd06 mov      rcx, rdx
20dd09 xor      rcx, r12
20dd0c test     bpl, bpl
20dd0f lea      rax, [rdx + r12]
20dd13 cmove    rax, rcx
20dd17 mov      qword ptr [r14 + 0xf8], rax
20dd1e movsxd   rdx, dword ptr [r14 + 0x11e0]
20dd25 mov      rbx, qword ptr [r14 + 0x20]
20dd29 mov      rcx, rdx
20dd2c xor      rcx, qword ptr [r14 + 0x350]
20dd33 xor      rcx, r12
20dd36 xor      rcx, qword ptr [r14 + 0x348]
20dd3d xor      rcx, rbx
20dd40 mov      rax, rcx
20dd43 shr      rax, 0x21
20dd47 xor      rax, rcx
20dd4a movabs   rcx, 0xff51afd7ed558ccd
20dd54 imul     rax, rcx
20dd58 mov      rcx, rax
20dd5b shr      rcx, 0x21
20dd5f xor      rcx, rax
20dd62 movabs   rax, 0xc4ceb9fe1a85ec53
20dd6c imul     rcx, rax
20dd70 movzx    eax, r8b
20dd74 mov      r15, rcx
20dd77 xor      rax, 0xdd
20dd7d shr      r15, 0x21
20dd81 xor      r15, rcx
20dd84 lea      rcx, [rip - 0x20dd8b]
20dd8b mov      qword ptr [r14 + 0x28], r15
20dd8f movzx    esi, byte ptr [rax + rcx + 0x3ecf00]
20dd97 xor      sil, 0x63
20dd9b inc      edx
20dd9d mov      dword ptr [r14 + 0x11e0], edx
20dda4 test     dl, 0x1f
20dda7 jne      0x14020ddf7
20dda9 movsxd   rax, edx
20ddac xor      rax, qword ptr [r14 + 0x348]
20ddb3 xor      rax, rbx
20ddb6 mov      rcx, rax
20ddb9 shr      rcx, 0x21
20ddbd xor      rcx, rax
20ddc0 movabs   rax, 0xff51afd7ed558ccd
20ddca imul     rcx, rax
20ddce movabs   rax, 0xc4ceb9fe1a85ec53
20ddd8 mov      rdx, rcx
20dddb shr      rdx, 0x21
20dddf xor      rdx, rcx
20dde2 imul     rdx, rax
20dde6 mov      rax, rdx
20dde9 shr      rax, 0x21
20dded xor      rax, rdx
20ddf0 mov      qword ptr [r14 + 0x348], rax
20ddf7 movzx    r8d, sil
20ddfb mov      eax, r8d
20ddfe mov      byte ptr [r14 + 0x4ad], sil
20de05 xor      rax, r12
20de08 movabs   r12, 0xff51afd7ed558ccd
20de12 xor      rax, rbx
20de15 movabs   rbx, 0x9e3779b97f4a7c15
20de1f mov      rcx, rax
20de22 shr      rcx, 0x21
20de26 xor      rcx, rax
20de29 movabs   rax, 0xc4ceb9fe1a85ec53
20de33 imul     rcx, r12
20de37 imul     r8, rbx
20de3b imul     r9, rbx
20de3f mov      rdx, rcx
20de42 shr      rdx, 0x21
20de46 xor      rdx, rcx
20de49 mov      ecx, dword ptr [r14 + 0x1178]
20de50 imul     rdx, rax
20de54 mov      rax, rdx
20de57 shr      rax, 0x21
20de5b xor      rax, rdx
20de5e mov      qword ptr [r14 + 0x20], rax
20de62 movabs   rax, 0xd6e8feb86659fd93
20de6c imul     rcx, rax
20de70 xor      rcx, r8
20de73 xor      rcx, r15
20de76 movabs   r15, 0x2545f4914f6cdd1d
20de80 mov      rax, rcx
20de83 add      r9, r15
20de86 shr      rax, 0x21
20de8a xor      rax, rcx
20de8d imul     rax, r12
20de91 mov      rdx, rax
20de94 shr      rdx, 0x21
20de98 xor      rdx, rax
20de9b movabs   rax, 0xc4ceb9fe1a85ec53
20dea5 imul     rdx, rax
20dea9 mov      rax, qword ptr [rsp + 0x70]
20deae shr      rdx, 0x21
20deb2 and      edx, 3
20deb5 inc      rax
20deb8 mov      qword ptr [r14 + 0x1b8], rax
20debf cmp      sil, 0x3e
20dec3 jae      0x14020df60
20dec9 inc      qword ptr [r14 + 0x11a0]
20ded0 lea      rax, [rip - 0x20ded7]
20ded7 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
20dedf mov      qword ptr [r14 + 0x1b0], r9
20dee6 shr      r9, 0x1b
20deea movzx    eax, r9b
20deee mov      byte ptr [r14 + 0x160], al
20def5 imul     rax, r11
20def9 mov      ebx, edx
20defb xor      rax, r10
20defe xor      rax, rdi
20df01 mov      rcx, rax
20df04 add      rax, r8
20df07 xor      rcx, r8
20df0a movzx    r8d, sil
20df0e test     bpl, bpl
20df11 cmove    rax, rcx
20df15 mov      rcx, r14
20df18 mov      qword ptr [r14 + 0xf0], rax
20df1f call     0x1401f1f50
20df24 mov      r8, qword ptr [rsp + 0x80]
20df2c lea      edx, [r13 - 1]
20df30 mov      eax, eax
20df32 imul     rcx, rbx, 0x3e
20df36 add      rcx, rax
20df39 mov      rax, qword ptr [r14 + 0x4b8]
20df40 movsxd   r9, dword ptr [rax + rcx*4]
20df44 mov      rcx, r14
20df47 movsxd   rax, dword ptr [r14 + 0x4c8]
20df4e xor      r9, rax
20df51 add      r9, qword ptr [r14 + 0x4c0]
20df58 call     r9
20df5b jmp      0x14020e027
20df60 inc      dword ptr [r14 + 0x11a8]
20df67 mov      rax, r9
20df6a shr      rax, 0x1b
20df6e movzx    ecx, al
20df71 lea      rax, [r10*4]
20df79 mov      byte ptr [r14 + 0x163], cl
20df80 imul     rcx, r11
20df84 imul     r9, rbx
20df88 xor      rcx, rax
20df8b xor      rcx, rdi
20df8e mov      qword ptr [r14 + 0x108], rcx
20df95 mov      r8, qword ptr [r14 + 0x1b8]
20df9c add      r9, r15
20df9f mov      rax, r9
20dfa2 shr      rax, 0x1b
20dfa6 movzx    edx, al
20dfa9 mov      byte ptr [r14 + 0x16a], dl
20dfb0 imul     rax, r10, 0xb
20dfb4 imul     rdx, r11
20dfb8 xor      rdx, rax
20dfbb xor      rdx, rdi
20dfbe mov      rcx, rdx
20dfc1 xor      rcx, 1
20dfc5 test     bpl, bpl
20dfc8 lea      rax, [rdx + 1]
20dfcc cmove    rax, rcx
20dfd0 mov      qword ptr [r14 + 0x140], rax
20dfd7 lea      rax, [r8 + 2]
20dfdb mov      qword ptr [r14 + 0x1b8], rax
20dfe2 imul     r9, rbx
20dfe6 add      r9, r15
20dfe9 mov      qword ptr [r14 + 0x1b0], r9
20dff0 shr      r9, 0x1b
20dff4 movzx    eax, r9b
20dff8 mov      byte ptr [r14 + 0x160], al
20dfff imul     rax, r11
20e003 xor      rax, rdi
20e006 xor      rax, r10
20e009 mov      rcx, rax
20e00c add      rax, 0xfe1ab
20e012 xor      rcx, 0xfe1ab
20e019 test     bpl, bpl
20e01c cmove    rax, rcx
20e020 mov      qword ptr [r14 + 0xf0], rax
20e027 mov      rsi, qword ptr [rsp + 0x78]
20e02c add      rsp, 0x30
20e030 pop      r15
20e032 pop      r14
20e034 pop      r13
20e036 pop      r12
20e038 pop      rdi
20e039 pop      rbp
20e03a pop      rbx
20e03b ret      
20e03c mov      edx, 0x54485254
20e041 mov      rcx, r14
20e044 call     0x1401ed830
20e049 int3     
20e04a mov      edx, 0x43414e59
20e04f mov      rcx, r14
20e052 call     0x1401ed830
20e057 int3     
