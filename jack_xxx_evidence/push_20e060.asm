20e060 push     r13
20e062 push     r14
20e064 push     r15
20e066 sub      rsp, 0x40
20e06a movsxd   rax, dword ptr [rcx + 0x11e0]
20e071 mov      r14, rcx
20e074 mov      r15d, edx
20e077 movabs   rcx, 0x33e684c9b3f98733
20e081 imul     rax, rcx
20e085 movabs   rcx, 0x91bf0e023227030c
20e08f mov      r13, r8
20e092 xor      rax, qword ptr [r14 + 0x28]
20e096 mov      qword ptr [rsp + 0x60], rax
20e09b mov      rax, qword ptr [rsp + 0x60]
20e0a0 movsxd   rax, dword ptr [r14 + 0x11e0]
20e0a7 imul     rax, rcx
20e0ab movabs   rcx, 0x7777905cb16c8f19
20e0b5 xor      rax, qword ptr [r14 + 0x28]
20e0b9 mov      qword ptr [rsp + 0x60], rax
20e0be mov      rax, qword ptr [rsp + 0x60]
20e0c3 movsxd   rax, dword ptr [r14 + 0x11e0]
20e0ca imul     rax, rcx
20e0ce movabs   rcx, 0x3cd0c85b9e19737
20e0d8 xor      rax, qword ptr [r14 + 0x28]
20e0dc mov      qword ptr [rsp + 0x60], rax
20e0e1 mov      rax, qword ptr [rsp + 0x60]
20e0e6 mov      rax, qword ptr [r14 + 0x2e8]
20e0ed xor      rax, rcx
20e0f0 mov      rcx, rax
20e0f3 shr      rcx, 0x21
20e0f7 xor      rcx, rax
20e0fa movabs   rax, 0xff51afd7ed558ccd
20e104 imul     rcx, rax
20e108 movabs   rax, 0xc4ceb9fe1a85ec53
20e112 mov      rdx, rcx
20e115 shr      rdx, 0x21
20e119 xor      rdx, rcx
20e11c mov      rcx, r14
20e11f imul     rdx, rax
20e123 mov      rax, rdx
20e126 shr      rax, 0x21
20e12a xor      rdx, rax
20e12d mov      rax, qword ptr [r14 + 0x2e8]
20e134 shr      rax, 7
20e138 add      rax, rdx
20e13b mov      qword ptr [r14 + 0x2e8], rax
20e142 call     0x1401f1c70
20e147 xor      edx, edx
20e149 cmp      eax, 0x11
20e14c mov      ecx, edx
20e14e cmovb    ecx, eax
20e151 cmp      ecx, 0x11
20e154 cmovae   ecx, edx
20e157 mov      eax, ecx
20e159 lea      rcx, [rip - 0x20e160]
20e160 mov      r8d, dword ptr [rcx + rax*4 + 0x3ead00]
20e168 mov      eax, 0xaaaaaaab
20e16d mul      r8d
20e170 mov      r9, qword ptr [rcx + r8*8 + 0x3ead80]
20e178 mov      rcx, qword ptr [rcx + r8*8 + 0x3eae40]
20e180 shr      edx, 1
20e182 lea      eax, [rdx + rdx*2]
20e185 sub      r8d, eax
20e188 je       0x14020e19a
20e18a cmp      r8d, 1
20e18e je       0x14020e195
20e190 sub      rcx, r9
20e193 jmp      0x14020e19d
20e195 add      rcx, r9
20e198 jmp      0x14020e19d
20e19a xor      rcx, r9
20e19d mov      rdx, rcx
20e1a0 mov      rcx, r14
20e1a3 call     0x1401ee820
20e1a8 mov      rax, qword ptr [r14 + 0x2e8]
20e1af test     r15d, r15d
20e1b2 jns      0x14020ed6b
20e1b8 cmp      qword ptr [r14 + 0x11b8], r13
20e1bf jne      0x14020ed79
20e1c5 movsxd   rax, dword ptr [r14 + 0x11e0]
20e1cc movabs   rcx, 0x174865a393f93273
20e1d6 imul     rax, rcx
20e1da mov      rcx, r14
20e1dd xor      rax, qword ptr [r14 + 0x28]
20e1e1 mov      qword ptr [rsp + 0x60], rax
20e1e6 mov      rax, qword ptr [rsp + 0x60]
20e1eb call     0x1401ee450
20e1f0 test     eax, eax
20e1f2 jne      0x14020ed60
20e1f8 cmp      dword ptr [r14 + 0xad0], eax
20e1ff jne      0x14020ed60
20e205 mov      r8, qword ptr [r14 + 0xf0]
20e20c movzx    ecx, byte ptr [r14 + 0x160]
20e214 mov      rax, r8
20e217 mov      r10, qword ptr [r14 + 0xe0]
20e21e mov      r11, qword ptr [r14 + 0xd8]
20e225 mov      r9, qword ptr [r14 + 0x1b0]
20e22c imul     rcx, r10
20e230 mov      qword ptr [rsp + 0x68], rbx
20e235 mov      rbx, qword ptr [r14 + 0xd0]
20e23c xor      rcx, rbx
20e23f mov      qword ptr [rsp + 0x38], rbp
20e244 xor      rcx, r11
20e247 mov      qword ptr [rsp + 0x30], rsi
20e24c mov      rsi, qword ptr [r14 + 0x1b8]
20e253 xor      rax, rcx
20e256 sub      r8, rcx
20e259 mov      qword ptr [rsp + 0x28], rdi
20e25e movzx    edi, byte ptr [r14 + 0xe8]
20e266 movabs   rbp, 0x2545f4914f6cdd1d
20e270 test     dil, dil
20e273 mov      qword ptr [rsp + 0x20], r12
20e278 movabs   r12, 0x9e3779b97f4a7c15
20e282 cmove    r8, rax
20e286 inc      rsi
20e289 imul     r9, r12
20e28d mov      qword ptr [r14 + 0x1b8], rsi
20e294 add      r9, rbp
20e297 mov      qword ptr [r14 + 0x1b0], r9
20e29e mov      rax, r9
20e2a1 shr      rax, 0x1b
20e2a5 movzx    edx, al
20e2a8 mov      byte ptr [r14 + 0x160], dl
20e2af imul     rdx, r10
20e2b3 xor      rdx, rbx
20e2b6 xor      rdx, r11
20e2b9 mov      rcx, rdx
20e2bc xor      rcx, r8
20e2bf test     dil, dil
20e2c2 lea      rax, [rdx + r8]
20e2c6 cmove    rax, rcx
20e2ca mov      qword ptr [r14 + 0xf0], rax
20e2d1 cmp      r8d, 0x48cad
20e2d8 jne      0x14020ed47
20e2de mov      eax, r15d
20e2e1 btr      eax, 0x1f
20e2e5 cmp      eax, 2
20e2e8 jae      0x14020e334
20e2ea imul     r9, r12
20e2ee lea      rax, [rsi + 1]
20e2f2 mov      qword ptr [r14 + 0x1b8], rax
20e2f9 add      r9, rbp
20e2fc mov      qword ptr [r14 + 0x1b0], r9
20e303 shr      r9, 0x1b
20e307 movzx    eax, r9b
20e30b mov      byte ptr [r14 + 0x160], al
20e312 imul     rax, r10
20e316 xor      rax, rbx
20e319 xor      rax, r11
20e31c mov      rcx, rax
20e31f add      rax, 0xf6105
20e325 xor      rcx, 0xf6105
20e32c test     dil, dil
20e32f jmp      0x14020ed3c
20e334 mov      rcx, r14
20e337 call     0x1401ee070
20e33c movzx    ecx, byte ptr [r14 + 0x4ad]
20e344 movabs   r8, 0xff51afd7ed558ccd
20e34e xor      rcx, qword ptr [r14 + 0x11e8]
20e355 movabs   r9, 0xc4ceb9fe1a85ec53
20e35f mov      r11, qword ptr [r14 + 0xe0]
20e366 movzx    r10d, byte ptr [r14 + 0xe8]
20e36e mov      eax, eax
20e370 xor      rcx, rax
20e373 mov      rax, rcx
20e376 shr      rax, 0x21
20e37a xor      rax, rcx
20e37d imul     rax, r8
20e381 mov      rcx, rax
20e384 shr      rcx, 0x21
20e388 xor      rcx, rax
20e38b imul     rcx, r9
20e38f mov      rdx, rcx
20e392 shr      rdx, 0x21
20e396 xor      rdx, rcx
20e399 mov      qword ptr [r14 + 0x11e8], rdx
20e3a0 xor      rdx, qword ptr [r14 + 0x28]
20e3a4 xor      rdx, qword ptr [r14 + 0x20]
20e3a8 mov      rax, rdx
20e3ab shr      rax, 0x21
20e3af xor      rax, rdx
20e3b2 imul     rax, r8
20e3b6 mov      rcx, rax
20e3b9 shr      rcx, 0x21
20e3bd xor      rcx, rax
20e3c0 imul     rcx, r9
20e3c4 mov      r9, qword ptr [r14 + 0xd0]
20e3cb mov      rax, rcx
20e3ce shr      rax, 0x21
20e3d2 xor      rax, rcx
20e3d5 mov      qword ptr [r14 + 0x20], rax
20e3d9 mov      rdx, qword ptr [r14 + 0x138]
20e3e0 movzx    ecx, byte ptr [r14 + 0x169]
20e3e8 mov      rax, qword ptr [r14 + 0xd8]
20e3ef imul     rcx, r11
20e3f3 lea      rbx, [rax + rax*4]
20e3f7 mov      rax, rdx
20e3fa xor      rcx, r9
20e3fd add      rbx, rbx
20e400 xor      rcx, rbx
20e403 xor      rax, rcx
20e406 sub      rdx, rcx
20e409 test     r10b, r10b
20e40c cmove    rdx, rax
20e410 mov      rax, qword ptr [r14 + 0x1b0]
20e417 inc      qword ptr [r14 + 0x1b8]
20e41e imul     rax, r12
20e422 add      rax, rbp
20e425 mov      qword ptr [r14 + 0x1b0], rax
20e42c shr      rax, 0x1b
20e430 movzx    r8d, al
20e434 mov      byte ptr [r14 + 0x169], r8b
20e43b imul     r8, r11
20e43f xor      r8, r9
20e442 xor      r8, rbx
20e445 mov      rcx, r8
20e448 xor      rcx, rdx
20e44b test     r10b, r10b
20e44e lea      rax, [r8 + rdx]
20e452 cmove    rax, rcx
20e456 mov      rcx, r14
20e459 mov      qword ptr [r14 + 0x138], rax
20e460 call     0x1401f0910
20e465 mov      rax, qword ptr [r14 + 0xd8]
20e46c mov      r11, qword ptr [r14 + 0xe0]
20e473 movzx    ecx, byte ptr [r14 + 0x168]
20e47b mov      r9, qword ptr [r14 + 0xd0]
20e482 mov      rdx, qword ptr [r14 + 0x130]
20e489 lea      rbx, [rax + rax*8]
20e48d movzx    r10d, byte ptr [r14 + 0xe8]
20e495 mov      rax, rdx
20e498 imul     rcx, r11
20e49c xor      rcx, r9
20e49f xor      rcx, rbx
20e4a2 xor      rax, rcx
20e4a5 sub      rdx, rcx
20e4a8 test     r10b, r10b
20e4ab cmove    rdx, rax
20e4af mov      rax, qword ptr [r14 + 0x1b0]
20e4b6 inc      qword ptr [r14 + 0x1b8]
20e4bd mov      rcx, rdx
20e4c0 imul     rax, r12
20e4c4 add      rax, rbp
20e4c7 mov      qword ptr [r14 + 0x1b0], rax
20e4ce shr      rax, 0x1b
20e4d2 movzx    r8d, al
20e4d6 mov      byte ptr [r14 + 0x168], r8b
20e4dd imul     r8, r11
20e4e1 xor      r8, r9
20e4e4 xor      r8, rbx
20e4e7 xor      rcx, r8
20e4ea test     r10b, r10b
20e4ed lea      rax, [rdx + r8]
20e4f1 cmove    rax, rcx
20e4f5 mov      rcx, r14
20e4f8 mov      qword ptr [r14 + 0x130], rax
20e4ff call     0x1401f0910
20e504 mov      rcx, r14
20e507 call     0x1401ee070
20e50c cmp      eax, dword ptr [r14 + 0x1d8]
20e513 jae      0x14020e51f
20e515 mov      edx, eax
20e517 mov      rcx, r14
20e51a call     0x1401f0910
20e51f mov      rsi, qword ptr [r14 + 0xe0]
20e526 mov      rbp, qword ptr [r14 + 0xd0]
20e52d mov      r11, qword ptr [r14 + 0x130]
20e534 movzx    edi, byte ptr [r14 + 0xe8]
20e53c mov      rax, r11
20e53f movzx    ecx, byte ptr [r14 + 0x168]
20e547 mov      rbx, qword ptr [r14 + 0xd8]
20e54e mov      r8, qword ptr [r14 + 0x1b8]
20e555 mov      r9, qword ptr [r14 + 0x1b0]
20e55c imul     rcx, rsi
20e560 lea      r10, [rbx + rbx*8]
20e564 xor      rcx, rbp
20e567 xor      rcx, r10
20e56a xor      rax, rcx
20e56d sub      r11, rcx
20e570 test     dil, dil
20e573 movabs   rcx, 0x2545f4914f6cdd1d
20e57d cmove    r11, rax
20e581 imul     r9, r12
20e585 add      r9, rcx
20e588 mov      rcx, r11
20e58b mov      rax, r9
20e58e shr      rax, 0x1b
20e592 movzx    edx, al
20e595 mov      byte ptr [r14 + 0x168], dl
20e59c imul     rdx, rsi
20e5a0 xor      rdx, rbp
20e5a3 xor      rdx, r10
20e5a6 xor      rcx, rdx
20e5a9 test     dil, dil
20e5ac lea      rax, [r11 + rdx]
20e5b0 cmove    rax, rcx
20e5b4 mov      rcx, r11
20e5b7 mov      qword ptr [r14 + 0x130], rax
20e5be movabs   rax, 0x2545f4914f6cdd1d
20e5c8 imul     r9, r12
20e5cc add      r9, rax
20e5cf lea      rax, [r8 + 2]
20e5d3 mov      qword ptr [r14 + 0x1b8], rax
20e5da mov      r8d, 0x9064
20e5e0 mov      qword ptr [r14 + 0x1b0], r9
20e5e7 lea      rax, [rbx + rbx*4]
20e5eb add      rax, rax
20e5ee shr      r9, 0x1b
20e5f2 movzx    edx, r9b
20e5f6 mov      byte ptr [r14 + 0x169], dl
20e5fd imul     rdx, rsi
20e601 xor      rdx, rax
20e604 xor      rdx, rbp
20e607 xor      rcx, rdx
20e60a test     dil, dil
20e60d lea      rax, [r11 + rdx]
20e611 cmove    rax, rcx
20e615 mov      rcx, r14
20e618 mov      qword ptr [r14 + 0x138], rax
20e61f movzx    edx, byte ptr [r14 + 0x4ad]
20e627 xor      rdx, qword ptr [r14 + 0x348]
20e62e call     0x1401f1520
20e633 mov      r8, qword ptr [r14 + 0x348]
20e63a movabs   rdi, 0xff51afd7ed558ccd
20e644 mov      rax, r8
20e647 movabs   rbp, 0xc4ceb9fe1a85ec53
20e651 xor      rax, qword ptr [r14 + 0x20]
20e655 mov      rcx, rax
20e658 shr      rcx, 0x21
20e65c xor      rcx, rax
20e65f imul     rcx, rdi
20e663 mov      rax, rcx
20e666 shr      rax, 0x21
20e66a xor      rax, rcx
20e66d imul     rax, rbp
20e671 mov      rdx, rax
20e674 shr      rdx, 0x21
20e678 xor      edx, eax
20e67a mov      ecx, edx
20e67c lea      eax, [rdx + 1]
20e67f imul     ecx, eax
20e682 xor      edx, eax
20e684 not      ecx
20e686 and      ecx, edx
20e688 test     cl, 1
20e68b je       0x14020e6fe
20e68d and      r8b, 3
20e691 cmp      r8b, 1
20e695 jne      0x14020e6fe
20e697 mov      rax, qword ptr [r14 + 0x1b0]
20e69e movabs   rcx, 0x2545f4914f6cdd1d
20e6a8 inc      qword ptr [r14 + 0x1b8]
20e6af imul     rax, r12
20e6b3 add      rax, rcx
20e6b6 mov      qword ptr [r14 + 0x1b0], rax
20e6bd shr      rax, 0x1b
20e6c1 movzx    eax, al
20e6c4 mov      byte ptr [r14 + 0x160], al
20e6cb imul     rax, qword ptr [r14 + 0xe0]
20e6d3 xor      rax, qword ptr [r14 + 0xd8]
20e6da xor      rax, qword ptr [r14 + 0xd0]
20e6e1 mov      rcx, rax
20e6e4 add      rax, 0x116fdf
20e6ea xor      rcx, 0x116fdf
20e6f1 cmp      byte ptr [r14 + 0xe8], 0
20e6f9 jmp      0x14020ed3c
20e6fe mov      rcx, r14
20e701 call     0x1401ee070
20e706 mov      ebx, eax
20e708 cmp      eax, dword ptr [r14 + 0x1d8]
20e70f jb       0x14020e778
20e711 mov      rax, qword ptr [r14 + 0x1b0]
20e718 movabs   rcx, 0x2545f4914f6cdd1d
20e722 inc      qword ptr [r14 + 0x1b8]
20e729 imul     rax, r12
20e72d add      rax, rcx
20e730 mov      qword ptr [r14 + 0x1b0], rax
20e737 shr      rax, 0x1b
20e73b movzx    eax, al
20e73e mov      byte ptr [r14 + 0x160], al
20e745 imul     rax, qword ptr [r14 + 0xe0]
20e74d xor      rax, qword ptr [r14 + 0xd8]
20e754 xor      rax, qword ptr [r14 + 0xd0]
20e75b mov      rcx, rax
20e75e add      rax, 0xfe1ab
20e764 xor      rcx, 0xfe1ab
20e76b cmp      byte ptr [r14 + 0xe8], 0
20e773 jmp      0x14020ed3c
20e778 mov      edx, ebx
20e77a mov      rcx, r14
20e77d call     0x1401f25b0
20e782 movsxd   rcx, dword ptr [r14 + 0x11e0]
20e789 movabs   r8, 0xd6e8feb86659fd93
20e793 mov      rdx, qword ptr [r14 + 0x20]
20e797 mov      rax, rbx
20e79a imul     rax, r8
20e79e imul     rcx, r12
20e7a2 rol      rdx, 0x11
20e7a6 xor      rax, rdx
20e7a9 xor      rcx, qword ptr [r14 + 0x260]
20e7b0 xor      rax, rcx
20e7b3 mov      rcx, rax
20e7b6 shr      rcx, 0x21
20e7ba xor      rcx, rax
20e7bd imul     rcx, rdi
20e7c1 mov      rdx, rcx
20e7c4 shr      rdx, 0x21
20e7c8 xor      rdx, rcx
20e7cb imul     rdx, rbp
20e7cf mov      rax, rdx
20e7d2 shr      rax, 0x21
20e7d6 xor      rax, rdx
20e7d9 mov      r10, rax
20e7dc shr      r10, 0x1d
20e7e0 xor      r10, rax
20e7e3 or       r10, 1
20e7e7 mov      rax, r10
20e7ea mov      qword ptr [r14 + 0x260], r10
20e7f1 and      eax, 0x3ff
20e7f6 cmp      rax, 0x2c5
20e7fc jne      0x14020e80d
20e7fe mov      rcx, r14
20e801 call     0x1402297e0
20e806 mov      r10, qword ptr [r14 + 0x260]
20e80d movzx    eax, r10b
20e811 and      al, 0x1f
20e813 cmp      al, 0x15
20e815 jne      0x14020e902
20e81b movsxd   rax, dword ptr [r14 + 0x11e0]
20e822 xor      rax, 0x5a5a
20e828 mov      rcx, qword ptr [r14 + 0x20]
20e82c imul     rax, r12
20e830 rol      rcx, 0x11
20e834 xor      rax, r10
20e837 xor      rcx, rax
20e83a movabs   rax, 0x8f70feda99a6026d
20e844 xor      rcx, rax
20e847 mov      rax, rcx
20e84a shr      rax, 0x21
20e84e xor      rax, rcx
20e851 imul     rax, rdi
20e855 mov      rcx, rax
20e858 shr      rcx, 0x21
20e85c xor      rcx, rax
20e85f imul     rcx, rbp
20e863 mov      rax, rcx
20e866 shr      rax, 0x21
20e86a xor      rax, rcx
20e86d mov      r9, rax
20e870 shr      r9, 0x1d
20e874 xor      r9, rax
20e877 or       r9, 1
20e87b mov      rax, r9
20e87e mov      rcx, r9
20e881 shr      rax, 8
20e885 and      eax, 3
20e888 shr      rcx, 0x28
20e88c imul     r8, rax, 0x3e
20e890 mov      eax, 0x8421085
20e895 mul      ecx
20e897 mov      eax, ecx
20e899 sub      eax, edx
20e89b shr      eax, 1
20e89d add      eax, edx
20e89f shr      eax, 5
20e8a2 imul     eax, eax, 0x3e
20e8a5 sub      ecx, eax
20e8a7 mov      eax, ecx
20e8a9 add      r8, rax
20e8ac mov      rax, qword ptr [r14 + 0x4b8]
20e8b3 movsxd   rcx, dword ptr [rax + r8*4]
20e8b7 movsxd   rax, dword ptr [r14 + 0x4c8]
20e8be xor      rcx, rax
20e8c1 add      rcx, qword ptr [r14 + 0x4c0]
20e8c8 xor      rcx, r9
20e8cb mov      rax, rcx
20e8ce shr      rax, 0x21
20e8d2 xor      rax, rcx
20e8d5 imul     rax, rdi
20e8d9 mov      rcx, rax
20e8dc shr      rcx, 0x21
20e8e0 xor      rcx, rax
20e8e3 imul     rcx, rbp
20e8e7 mov      rax, rcx
20e8ea shr      rax, 0x21
20e8ee xor      rax, rcx
20e8f1 xor      rax, r10
20e8f4 inc      qword ptr [r14 + 0x268]
20e8fb mov      qword ptr [r14 + 0x260], rax
20e902 inc      dword ptr [r14 + 0x200]
20e909 mov      eax, dword ptr [r14 + 0x200]
20e910 cmp      eax, dword ptr [r14 + 0x1fc]
20e917 jb       0x14020e92c
20e919 mov      rcx, r14
20e91c mov      dword ptr [r14 + 0x200], 0
20e927 call     0x1401ef7c0
20e92c mov      r8d, ebx
20e92f mov      edx, ebx
20e931 mov      rcx, r14
20e934 call     0x1401f0660
20e939 inc      qword ptr [r14 + 0x1b8]
20e940 lea      esi, [rbx + 1]
20e943 mov      r9, qword ptr [r14 + 0x1b0]
20e94a movabs   rax, 0x2545f4914f6cdd1d
20e954 imul     r9, r12
20e958 mov      r12, qword ptr [r14 + 0x1b8]
20e95f mov      rcx, rbx
20e962 add      r9, rax
20e965 mov      qword ptr [rsp + 0x60], rsi
20e96a mov      qword ptr [r14 + 0x1b0], r9
20e971 mov      rax, r9
20e974 shr      rax, 0x1b
20e978 movzx    edx, al
20e97b mov      byte ptr [r14 + 0x168], dl
20e982 mov      r11, qword ptr [r14 + 0xe0]
20e989 mov      r10, qword ptr [r14 + 0xd8]
20e990 mov      rdi, qword ptr [r14 + 0xd0]
20e997 movzx    ebp, byte ptr [r14 + 0xe8]
20e99f imul     rdx, r11
20e9a3 lea      rax, [r10 + r10*8]
20e9a7 xor      rdx, rax
20e9aa xor      rdx, rdi
20e9ad xor      rcx, rdx
20e9b0 test     bpl, bpl
20e9b3 lea      rax, [rbx + rdx]
20e9b7 cmove    rax, rcx
20e9bb inc      r12
20e9be mov      qword ptr [r14 + 0x130], rax
20e9c5 mov      rcx, qword ptr [r14 + 0x1d0]
20e9cc mov      rax, qword ptr [r14 + 0x48]
20e9d0 mov      qword ptr [rsp + 0x78], r12
20e9d5 movzx    r8d, byte ptr [rcx + rbx]
20e9da xor      r8b, byte ptr [rax + rbx]
20e9de movabs   rax, 0x9e3779b97f4a7c15
20e9e8 imul     r9, rax
20e9ec mov      qword ptr [r14 + 0x1b8], r12
20e9f3 movabs   rax, 0x2545f4914f6cdd1d
20e9fd add      r9, rax
20ea00 mov      rax, r9
20ea03 shr      rax, 0x1b
20ea07 movzx    edx, al
20ea0a lea      rax, [r10 + r10]
20ea0e mov      byte ptr [r14 + 0x161], dl
20ea15 imul     rdx, r11
20ea19 xor      rdx, rax
20ea1c xor      rdx, rdi
20ea1f mov      rcx, rdx
20ea22 xor      rcx, rsi
20ea25 test     bpl, bpl
20ea28 lea      rax, [rdx + rsi]
20ea2c cmove    rax, rcx
20ea30 mov      qword ptr [r14 + 0xf8], rax
20ea37 movsxd   rdx, dword ptr [r14 + 0x11e0]
20ea3e mov      rbx, qword ptr [r14 + 0x20]
20ea42 mov      rcx, rdx
20ea45 xor      rcx, qword ptr [r14 + 0x350]
20ea4c xor      rcx, rsi
20ea4f xor      rcx, qword ptr [r14 + 0x348]
20ea56 xor      rcx, rbx
20ea59 mov      rax, rcx
20ea5c shr      rax, 0x21
20ea60 xor      rax, rcx
20ea63 movabs   rcx, 0xff51afd7ed558ccd
20ea6d imul     rax, rcx
20ea71 mov      rcx, rax
20ea74 shr      rcx, 0x21
20ea78 xor      rcx, rax
20ea7b movabs   rax, 0xc4ceb9fe1a85ec53
20ea85 imul     rcx, rax
20ea89 movzx    eax, r8b
20ea8d mov      r12, rcx
20ea90 shr      r12, 0x21
20ea94 xor      r12, rcx
20ea97 lea      rcx, [rip - 0x20ea9e]
20ea9e xor      rax, 0xdd
20eaa4 mov      qword ptr [r14 + 0x28], r12
20eaa8 movzx    esi, byte ptr [rax + rcx + 0x3ecf00]
20eab0 xor      sil, 0x63
20eab4 inc      edx
20eab6 mov      dword ptr [r14 + 0x11e0], edx
20eabd test     dl, 0x1f
20eac0 jne      0x14020eb10
20eac2 movsxd   rax, edx
20eac5 xor      rax, qword ptr [r14 + 0x348]
20eacc xor      rax, rbx
20eacf mov      rcx, rax
20ead2 shr      rcx, 0x21
20ead6 xor      rcx, rax
20ead9 movabs   rax, 0xff51afd7ed558ccd
20eae3 imul     rcx, rax
20eae7 movabs   rax, 0xc4ceb9fe1a85ec53
20eaf1 mov      rdx, rcx
20eaf4 shr      rdx, 0x21
20eaf8 xor      rdx, rcx
20eafb imul     rdx, rax
20eaff mov      rax, rdx
20eb02 shr      rax, 0x21
20eb06 xor      rax, rdx
20eb09 mov      qword ptr [r14 + 0x348], rax
20eb10 movzx    r8d, sil
20eb14 mov      eax, r8d
20eb17 mov      byte ptr [r14 + 0x4ad], sil
20eb1e xor      rax, qword ptr [rsp + 0x60]
20eb23 xor      rax, rbx
20eb26 movabs   rbx, 0x9e3779b97f4a7c15
20eb30 mov      rcx, rax
20eb33 shr      rcx, 0x21
20eb37 xor      rcx, rax
20eb3a movabs   rax, 0xff51afd7ed558ccd
20eb44 imul     rcx, rax
20eb48 imul     r8, rbx
20eb4c imul     r9, rbx
20eb50 mov      rdx, rcx
20eb53 movabs   rax, 0xc4ceb9fe1a85ec53
20eb5d shr      rdx, 0x21
20eb61 xor      rdx, rcx
20eb64 mov      ecx, dword ptr [r14 + 0x1178]
20eb6b imul     rdx, rax
20eb6f mov      rax, rdx
20eb72 shr      rax, 0x21
20eb76 xor      rax, rdx
20eb79 mov      qword ptr [r14 + 0x20], rax
20eb7d movabs   rax, 0xd6e8feb86659fd93
20eb87 imul     rcx, rax
20eb8b xor      rcx, r8
20eb8e xor      rcx, r12
20eb91 movabs   r12, 0x2545f4914f6cdd1d
20eb9b mov      rax, rcx
20eb9e add      r9, r12
20eba1 shr      rax, 0x21
20eba5 xor      rax, rcx
20eba8 movabs   rcx, 0xff51afd7ed558ccd
20ebb2 imul     rax, rcx
20ebb6 mov      rdx, rax
20ebb9 shr      rdx, 0x21
20ebbd xor      rdx, rax
20ebc0 movabs   rax, 0xc4ceb9fe1a85ec53
20ebca imul     rdx, rax
20ebce mov      rax, qword ptr [rsp + 0x78]
20ebd3 shr      rdx, 0x21
20ebd7 and      edx, 3
20ebda inc      rax
20ebdd mov      qword ptr [r14 + 0x1b8], rax
20ebe4 cmp      sil, 0x3e
20ebe8 jae      0x14020ec80
20ebee inc      qword ptr [r14 + 0x11a0]
20ebf5 lea      rax, [rip - 0x20ebfc]
20ebfc mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
20ec04 mov      qword ptr [r14 + 0x1b0], r9
20ec0b shr      r9, 0x1b
20ec0f movzx    eax, r9b
20ec13 mov      byte ptr [r14 + 0x160], al
20ec1a imul     rax, r11
20ec1e mov      ebx, edx
20ec20 xor      rax, rdi
20ec23 xor      rax, r10
20ec26 mov      rcx, rax
20ec29 add      rax, r8
20ec2c xor      rcx, r8
20ec2f movzx    r8d, sil
20ec33 test     bpl, bpl
20ec36 cmove    rax, rcx
20ec3a mov      rcx, r14
20ec3d mov      qword ptr [r14 + 0xf0], rax
20ec44 call     0x1401f1f50
20ec49 mov      eax, eax
20ec4b lea      edx, [r15 - 1]
20ec4f imul     rcx, rbx, 0x3e
20ec53 mov      r8, r13
20ec56 add      rcx, rax
20ec59 mov      rax, qword ptr [r14 + 0x4b8]
20ec60 movsxd   r9, dword ptr [rax + rcx*4]
20ec64 mov      rcx, r14
20ec67 movsxd   rax, dword ptr [r14 + 0x4c8]
20ec6e xor      r9, rax
20ec71 add      r9, qword ptr [r14 + 0x4c0]
20ec78 call     r9
20ec7b jmp      0x14020ed47
20ec80 inc      dword ptr [r14 + 0x11a8]
20ec87 mov      rax, r9
20ec8a shr      rax, 0x1b
20ec8e movzx    ecx, al
20ec91 lea      rax, [r10*4]
20ec99 mov      byte ptr [r14 + 0x163], cl
20eca0 imul     rcx, r11
20eca4 imul     r9, rbx
20eca8 xor      rcx, rax
20ecab xor      rcx, rdi
20ecae mov      qword ptr [r14 + 0x108], rcx
20ecb5 mov      r8, qword ptr [r14 + 0x1b8]
20ecbc add      r9, r12
20ecbf mov      rax, r9
20ecc2 shr      rax, 0x1b
20ecc6 movzx    edx, al
20ecc9 mov      byte ptr [r14 + 0x16a], dl
20ecd0 imul     rax, r10, 0xb
20ecd4 imul     rdx, r11
20ecd8 xor      rdx, rax
20ecdb xor      rdx, rdi
20ecde mov      rcx, rdx
20ece1 xor      rcx, 1
20ece5 test     bpl, bpl
20ece8 lea      rax, [rdx + 1]
20ecec cmove    rax, rcx
20ecf0 mov      qword ptr [r14 + 0x140], rax
20ecf7 lea      rax, [r8 + 2]
20ecfb mov      qword ptr [r14 + 0x1b8], rax
20ed02 imul     r9, rbx
20ed06 add      r9, r12
20ed09 mov      qword ptr [r14 + 0x1b0], r9
20ed10 shr      r9, 0x1b
20ed14 movzx    eax, r9b
20ed18 mov      byte ptr [r14 + 0x160], al
20ed1f imul     rax, r11
20ed23 xor      rax, rdi
20ed26 xor      rax, r10
20ed29 mov      rcx, rax
20ed2c add      rax, 0xfe1ab
20ed32 xor      rcx, 0xfe1ab
20ed39 test     bpl, bpl
20ed3c cmove    rax, rcx
20ed40 mov      qword ptr [r14 + 0xf0], rax
20ed47 mov      rdi, qword ptr [rsp + 0x28]
20ed4c mov      rsi, qword ptr [rsp + 0x30]
20ed51 mov      rbp, qword ptr [rsp + 0x38]
20ed56 mov      rbx, qword ptr [rsp + 0x68]
20ed5b mov      r12, qword ptr [rsp + 0x20]
20ed60 add      rsp, 0x40
20ed64 pop      r15
20ed66 pop      r14
20ed68 pop      r13
20ed6a ret      
20ed6b mov      edx, 0x54485254
20ed70 mov      rcx, r14
20ed73 call     0x1401ed830
20ed78 int3     
20ed79 mov      edx, 0x43414e59
20ed7e mov      rcx, r14
20ed81 call     0x1401ed830
20ed86 int3     
