209fc0 mov      qword ptr [rsp + 0x20], rbx
209fc5 mov      qword ptr [rsp + 0x18], r8
209fca mov      dword ptr [rsp + 0x10], edx
209fce push     rbp
209fcf push     rsi
209fd0 push     rdi
209fd1 push     r12
209fd3 push     r13
209fd5 push     r14
209fd7 push     r15
209fd9 sub      rsp, 0x30
209fdd movsxd   rax, dword ptr [rcx + 0x11e0]
209fe4 mov      r14, rcx
209fe7 mov      ebp, edx
209fe9 movabs   rcx, 0xc653a35ae77bc5b2
209ff3 imul     rax, rcx
209ff7 movabs   rcx, 0x640a299166a5418d
20a001 mov      r15, r8
20a004 xor      rax, qword ptr [r14 + 0x28]
20a008 mov      qword ptr [rsp + 0x70], rax
20a00d mov      rax, qword ptr [rsp + 0x70]
20a012 movsxd   rax, dword ptr [r14 + 0x11e0]
20a019 imul     rax, rcx
20a01d movabs   rcx, 0x82c2b7cfe5eecd98
20a027 xor      rax, qword ptr [r14 + 0x28]
20a02b mov      qword ptr [rsp + 0x70], rax
20a030 mov      rax, qword ptr [rsp + 0x70]
20a035 movsxd   rax, dword ptr [r14 + 0x11e0]
20a03c imul     rax, rcx
20a040 movabs   rcx, 0x10b0b5486e2859a3
20a04a xor      rax, qword ptr [r14 + 0x28]
20a04e mov      qword ptr [rsp + 0x70], rax
20a053 mov      rax, qword ptr [rsp + 0x70]
20a058 mov      rax, qword ptr [r14 + 0x2e8]
20a05f add      rax, rcx
20a062 mov      rcx, rax
20a065 shr      rcx, 0x21
20a069 xor      rcx, rax
20a06c movabs   rax, 0xff51afd7ed558ccd
20a076 imul     rcx, rax
20a07a movabs   rax, 0xc4ceb9fe1a85ec53
20a084 mov      rdx, rcx
20a087 shr      rdx, 0x21
20a08b xor      rdx, rcx
20a08e mov      rcx, r14
20a091 imul     rdx, rax
20a095 mov      rax, rdx
20a098 shr      rax, 0x21
20a09c xor      rdx, rax
20a09f mov      rax, qword ptr [r14 + 0x2e8]
20a0a6 or       rdx, 1
20a0aa xor      rdx, rax
20a0ad mov      qword ptr [r14 + 0x2e8], rdx
20a0b4 call     0x1401f1c70
20a0b9 mov      rcx, r14
20a0bc mov      esi, eax
20a0be call     0x1401ee940
20a0c3 mov      rdi, qword ptr [r14 + 0xf8]
20a0ca mov      r11, rax
20a0cd movzx    ecx, byte ptr [r14 + 0x161]
20a0d5 mov      rax, rdi
20a0d8 mov      r9, qword ptr [r14 + 0xe0]
20a0df movabs   r12, 0x9e3779b97f4a7c15
20a0e9 mov      r8, qword ptr [r14 + 0xd0]
20a0f0 movabs   r13, 0x2545f4914f6cdd1d
20a0fa movzx    edx, byte ptr [r14 + 0xe8]
20a102 mov      r10, qword ptr [r14 + 0xd8]
20a109 imul     rcx, r9
20a10d add      r10, r10
20a110 xor      rcx, r8
20a113 xor      rcx, r10
20a116 xor      rax, rcx
20a119 sub      rdi, rcx
20a11c test     dl, dl
20a11e cmove    rdi, rax
20a122 mov      rax, qword ptr [r14 + 0x1b0]
20a129 inc      qword ptr [r14 + 0x1b8]
20a130 imul     rax, r12
20a134 add      rax, r13
20a137 mov      qword ptr [r14 + 0x1b0], rax
20a13e shr      rax, 0x1b
20a142 movzx    eax, al
20a145 mov      byte ptr [r14 + 0x161], al
20a14c imul     rax, r9
20a150 xor      rax, r8
20a153 xor      rax, r10
20a156 mov      rcx, rax
20a159 add      rax, rdi
20a15c xor      rcx, rdi
20a15f test     dl, dl
20a161 cmove    rax, rcx
20a165 mov      qword ptr [r14 + 0xf8], rax
20a16c movzx    r9d, byte ptr [r14 + 0x4ad]
20a174 mov      r8d, edi
20a177 mov      rdx, r11
20a17a mov      rcx, r14
20a17d call     0x1401f0e60
20a182 mov      ecx, esi
20a184 mov      rbx, rax
20a187 call     0x1401ed270
20a18c xor      r8d, r8d
20a18f mov      dword ptr [rsp + 0x28], edi
20a193 lea      rcx, [rbx - 1]
20a197 mov      dword ptr [rsp + 0x20], eax
20a19b cmp      rcx, rbx
20a19e mov      r9d, 1
20a1a4 mov      rdx, rbx
20a1a7 mov      rcx, r14
20a1aa setae    r8b
20a1ae call     0x1401f10a0
20a1b3 mov      rdx, rax
20a1b6 mov      rcx, r14
20a1b9 call     0x1401f0db0
20a1be mov      rax, qword ptr [r14 + 0x2e8]
20a1c5 test     ebp, ebp
20a1c7 jns      0x14020acf2
20a1cd cmp      qword ptr [r14 + 0x11b8], r15
20a1d4 jne      0x14020ad00
20a1da movsxd   rax, dword ptr [r14 + 0x11e0]
20a1e1 movabs   rcx, 0x3572ae7b00e0994e
20a1eb imul     rax, rcx
20a1ef mov      rcx, r14
20a1f2 xor      rax, qword ptr [r14 + 0x28]
20a1f6 mov      qword ptr [rsp + 0x70], rax
20a1fb mov      rax, qword ptr [rsp + 0x70]
20a200 call     0x1401ee450
20a205 test     eax, eax
20a207 jne      0x14020acda
20a20d cmp      dword ptr [r14 + 0xad0], eax
20a214 jne      0x14020acda
20a21a mov      r8, qword ptr [r14 + 0xf0]
20a221 movzx    ecx, byte ptr [r14 + 0x160]
20a229 mov      rax, r8
20a22c mov      r10, qword ptr [r14 + 0xe0]
20a233 mov      rbx, qword ptr [r14 + 0xd0]
20a23a mov      r11, qword ptr [r14 + 0xd8]
20a241 movzx    edi, byte ptr [r14 + 0xe8]
20a249 mov      r9, qword ptr [r14 + 0x1b0]
20a250 mov      rsi, qword ptr [r14 + 0x1b8]
20a257 imul     rcx, r10
20a25b xor      rcx, rbx
20a25e xor      rcx, r11
20a261 xor      rax, rcx
20a264 sub      r8, rcx
20a267 test     dil, dil
20a26a cmove    r8, rax
20a26e inc      rsi
20a271 imul     r9, r12
20a275 mov      qword ptr [r14 + 0x1b8], rsi
20a27c add      r9, r13
20a27f mov      qword ptr [r14 + 0x1b0], r9
20a286 mov      rax, r9
20a289 shr      rax, 0x1b
20a28d movzx    edx, al
20a290 mov      byte ptr [r14 + 0x160], dl
20a297 imul     rdx, r10
20a29b xor      rdx, rbx
20a29e xor      rdx, r11
20a2a1 mov      rcx, rdx
20a2a4 xor      rcx, r8
20a2a7 test     dil, dil
20a2aa lea      rax, [rdx + r8]
20a2ae cmove    rax, rcx
20a2b2 mov      qword ptr [r14 + 0xf0], rax
20a2b9 cmp      r8d, 0x338040
20a2c0 jne      0x14020acda
20a2c6 mov      eax, ebp
20a2c8 btr      eax, 0x1f
20a2cc cmp      eax, 2
20a2cf jae      0x14020a31b
20a2d1 imul     r9, r12
20a2d5 lea      rax, [rsi + 1]
20a2d9 mov      qword ptr [r14 + 0x1b8], rax
20a2e0 add      r9, r13
20a2e3 mov      qword ptr [r14 + 0x1b0], r9
20a2ea shr      r9, 0x1b
20a2ee movzx    eax, r9b
20a2f2 mov      byte ptr [r14 + 0x160], al
20a2f9 imul     rax, r10
20a2fd xor      rax, rbx
20a300 xor      rax, r11
20a303 mov      rcx, rax
20a306 add      rax, 0x1ad951
20a30c xor      rcx, 0x1ad951
20a313 test     dil, dil
20a316 jmp      0x14020accf
20a31b mov      rcx, r14
20a31e call     0x1401ee070
20a323 movzx    ecx, byte ptr [r14 + 0x4ad]
20a32b movabs   r8, 0xc4ceb9fe1a85ec53
20a335 mov      r11, qword ptr [r14 + 0xe0]
20a33c movabs   r15, 0xff51afd7ed558ccd
20a346 mov      r9, qword ptr [r14 + 0xd0]
20a34d movzx    r10d, byte ptr [r14 + 0xe8]
20a355 mov      eax, eax
20a357 xor      rcx, rax
20a35a xor      rcx, qword ptr [r14 + 0x11e8]
20a361 mov      rax, rcx
20a364 shr      rax, 0x21
20a368 xor      rax, rcx
20a36b imul     rax, r15
20a36f mov      rcx, rax
20a372 shr      rcx, 0x21
20a376 xor      rcx, rax
20a379 mov      rax, qword ptr [r14 + 0x20]
20a37d xor      rax, qword ptr [r14 + 0x28]
20a381 imul     rcx, r8
20a385 mov      rdx, rcx
20a388 shr      rdx, 0x21
20a38c xor      rdx, rcx
20a38f xor      rax, rdx
20a392 mov      qword ptr [r14 + 0x11e8], rdx
20a399 mov      rcx, rax
20a39c shr      rcx, 0x21
20a3a0 xor      rcx, rax
20a3a3 imul     rcx, r15
20a3a7 mov      rdx, rcx
20a3aa shr      rdx, 0x21
20a3ae xor      rdx, rcx
20a3b1 imul     rdx, r8
20a3b5 mov      rax, rdx
20a3b8 shr      rax, 0x21
20a3bc xor      rax, rdx
20a3bf mov      qword ptr [r14 + 0x20], rax
20a3c3 mov      rdx, qword ptr [r14 + 0x138]
20a3ca movzx    ecx, byte ptr [r14 + 0x169]
20a3d2 mov      rax, qword ptr [r14 + 0xd8]
20a3d9 imul     rcx, r11
20a3dd lea      rbx, [rax + rax*4]
20a3e1 mov      rax, rdx
20a3e4 xor      rcx, r9
20a3e7 add      rbx, rbx
20a3ea xor      rcx, rbx
20a3ed xor      rax, rcx
20a3f0 sub      rdx, rcx
20a3f3 test     r10b, r10b
20a3f6 cmove    rdx, rax
20a3fa mov      rax, qword ptr [r14 + 0x1b0]
20a401 inc      qword ptr [r14 + 0x1b8]
20a408 imul     rax, r12
20a40c add      rax, r13
20a40f mov      qword ptr [r14 + 0x1b0], rax
20a416 shr      rax, 0x1b
20a41a movzx    r8d, al
20a41e mov      byte ptr [r14 + 0x169], r8b
20a425 imul     r8, r11
20a429 xor      r8, r9
20a42c xor      r8, rbx
20a42f mov      rcx, r8
20a432 xor      rcx, rdx
20a435 test     r10b, r10b
20a438 lea      rax, [r8 + rdx]
20a43c cmove    rax, rcx
20a440 mov      rcx, r14
20a443 mov      qword ptr [r14 + 0x138], rax
20a44a call     0x1401f0910
20a44f mov      rax, qword ptr [r14 + 0xd8]
20a456 mov      r11, qword ptr [r14 + 0xe0]
20a45d movzx    ecx, byte ptr [r14 + 0x168]
20a465 mov      r9, qword ptr [r14 + 0xd0]
20a46c mov      rdx, qword ptr [r14 + 0x130]
20a473 lea      rbx, [rax + rax*8]
20a477 movzx    r10d, byte ptr [r14 + 0xe8]
20a47f mov      rax, rdx
20a482 imul     rcx, r11
20a486 xor      rcx, r9
20a489 xor      rcx, rbx
20a48c xor      rax, rcx
20a48f sub      rdx, rcx
20a492 test     r10b, r10b
20a495 cmove    rdx, rax
20a499 mov      rax, qword ptr [r14 + 0x1b0]
20a4a0 inc      qword ptr [r14 + 0x1b8]
20a4a7 mov      rcx, rdx
20a4aa imul     rax, r12
20a4ae add      rax, r13
20a4b1 mov      qword ptr [r14 + 0x1b0], rax
20a4b8 shr      rax, 0x1b
20a4bc movzx    r8d, al
20a4c0 mov      byte ptr [r14 + 0x168], r8b
20a4c7 imul     r8, r11
20a4cb xor      r8, r9
20a4ce xor      r8, rbx
20a4d1 xor      rcx, r8
20a4d4 test     r10b, r10b
20a4d7 lea      rax, [rdx + r8]
20a4db cmove    rax, rcx
20a4df mov      rcx, r14
20a4e2 mov      qword ptr [r14 + 0x130], rax
20a4e9 call     0x1401f0910
20a4ee mov      rcx, r14
20a4f1 call     0x1401ee070
20a4f6 cmp      eax, dword ptr [r14 + 0x1d8]
20a4fd jae      0x14020a509
20a4ff mov      edx, eax
20a501 mov      rcx, r14
20a504 call     0x1401f0910
20a509 mov      rsi, qword ptr [r14 + 0xe0]
20a510 mov      rbp, qword ptr [r14 + 0xd0]
20a517 mov      r11, qword ptr [r14 + 0x130]
20a51e movzx    edi, byte ptr [r14 + 0xe8]
20a526 mov      rax, r11
20a529 movzx    ecx, byte ptr [r14 + 0x168]
20a531 mov      rbx, qword ptr [r14 + 0xd8]
20a538 mov      r8, qword ptr [r14 + 0x1b8]
20a53f mov      r9, qword ptr [r14 + 0x1b0]
20a546 imul     rcx, rsi
20a54a lea      r10, [rbx + rbx*8]
20a54e xor      rcx, rbp
20a551 xor      rcx, r10
20a554 xor      rax, rcx
20a557 sub      r11, rcx
20a55a test     dil, dil
20a55d cmove    r11, rax
20a561 imul     r9, r12
20a565 mov      rcx, r11
20a568 add      r9, r13
20a56b mov      rax, r9
20a56e shr      rax, 0x1b
20a572 movzx    edx, al
20a575 mov      byte ptr [r14 + 0x168], dl
20a57c imul     rdx, rsi
20a580 xor      rdx, rbp
20a583 xor      rdx, r10
20a586 xor      rcx, rdx
20a589 test     dil, dil
20a58c lea      rax, [r11 + rdx]
20a590 cmove    rax, rcx
20a594 mov      rcx, r11
20a597 mov      qword ptr [r14 + 0x130], rax
20a59e lea      rax, [r8 + 2]
20a5a2 mov      qword ptr [r14 + 0x1b8], rax
20a5a9 mov      r8d, 0xda1
20a5af imul     r9, r12
20a5b3 lea      rax, [rbx + rbx*4]
20a5b7 add      rax, rax
20a5ba add      r9, r13
20a5bd mov      qword ptr [r14 + 0x1b0], r9
20a5c4 shr      r9, 0x1b
20a5c8 movzx    edx, r9b
20a5cc mov      byte ptr [r14 + 0x169], dl
20a5d3 imul     rdx, rsi
20a5d7 xor      rdx, rax
20a5da xor      rdx, rbp
20a5dd xor      rcx, rdx
20a5e0 test     dil, dil
20a5e3 lea      rax, [r11 + rdx]
20a5e7 cmove    rax, rcx
20a5eb mov      rcx, r14
20a5ee mov      qword ptr [r14 + 0x138], rax
20a5f5 movzx    edx, byte ptr [r14 + 0x4ad]
20a5fd xor      rdx, qword ptr [r14 + 0x348]
20a604 call     0x1401f1520
20a609 mov      r8, qword ptr [r14 + 0x348]
20a610 movabs   rdi, 0xc4ceb9fe1a85ec53
20a61a mov      rax, r8
20a61d xor      rax, qword ptr [r14 + 0x20]
20a621 mov      rcx, rax
20a624 shr      rcx, 0x21
20a628 xor      rcx, rax
20a62b imul     rcx, r15
20a62f mov      rax, rcx
20a632 shr      rax, 0x21
20a636 xor      rax, rcx
20a639 imul     rax, rdi
20a63d mov      rdx, rax
20a640 shr      rdx, 0x21
20a644 xor      edx, eax
20a646 mov      ecx, edx
20a648 lea      eax, [rdx + 1]
20a64b imul     ecx, eax
20a64e xor      edx, eax
20a650 not      ecx
20a652 and      ecx, edx
20a654 test     cl, 1
20a657 je       0x14020a6c0
20a659 and      r8b, 3
20a65d cmp      r8b, 1
20a661 jne      0x14020a6c0
20a663 mov      rax, qword ptr [r14 + 0x1b0]
20a66a inc      qword ptr [r14 + 0x1b8]
20a671 imul     rax, r12
20a675 add      rax, r13
20a678 mov      qword ptr [r14 + 0x1b0], rax
20a67f shr      rax, 0x1b
20a683 movzx    eax, al
20a686 mov      byte ptr [r14 + 0x160], al
20a68d imul     rax, qword ptr [r14 + 0xe0]
20a695 xor      rax, qword ptr [r14 + 0xd0]
20a69c xor      rax, qword ptr [r14 + 0xd8]
20a6a3 mov      rcx, rax
20a6a6 add      rax, 0x190631
20a6ac xor      rcx, 0x190631
20a6b3 cmp      byte ptr [r14 + 0xe8], 0
20a6bb jmp      0x14020accf
20a6c0 mov      rcx, r14
20a6c3 call     0x1401ee070
20a6c8 mov      ebx, eax
20a6ca cmp      eax, dword ptr [r14 + 0x1d8]
20a6d1 jb       0x14020a730
20a6d3 mov      rax, qword ptr [r14 + 0x1b0]
20a6da inc      qword ptr [r14 + 0x1b8]
20a6e1 imul     rax, r12
20a6e5 add      rax, r13
20a6e8 mov      qword ptr [r14 + 0x1b0], rax
20a6ef shr      rax, 0x1b
20a6f3 movzx    eax, al
20a6f6 mov      byte ptr [r14 + 0x160], al
20a6fd imul     rax, qword ptr [r14 + 0xe0]
20a705 xor      rax, qword ptr [r14 + 0xd0]
20a70c xor      rax, qword ptr [r14 + 0xd8]
20a713 mov      rcx, rax
20a716 add      rax, 0xfe1ab
20a71c xor      rcx, 0xfe1ab
20a723 cmp      byte ptr [r14 + 0xe8], 0
20a72b jmp      0x14020accf
20a730 mov      edx, ebx
20a732 mov      rcx, r14
20a735 call     0x1401f25b0
20a73a movsxd   rcx, dword ptr [r14 + 0x11e0]
20a741 movabs   r8, 0xd6e8feb86659fd93
20a74b mov      rdx, qword ptr [r14 + 0x20]
20a74f mov      rax, rbx
20a752 imul     rax, r8
20a756 imul     rcx, r12
20a75a rol      rdx, 0x11
20a75e xor      rcx, qword ptr [r14 + 0x260]
20a765 xor      rax, rcx
20a768 xor      rax, rdx
20a76b mov      rcx, rax
20a76e shr      rcx, 0x21
20a772 xor      rcx, rax
20a775 imul     rcx, r15
20a779 mov      rdx, rcx
20a77c shr      rdx, 0x21
20a780 xor      rdx, rcx
20a783 imul     rdx, rdi
20a787 mov      rax, rdx
20a78a shr      rax, 0x21
20a78e xor      rax, rdx
20a791 mov      r10, rax
20a794 shr      r10, 0x1d
20a798 xor      r10, rax
20a79b or       r10, 1
20a79f mov      rax, r10
20a7a2 mov      qword ptr [r14 + 0x260], r10
20a7a9 and      eax, 0x3ff
20a7ae cmp      rax, 0x2c5
20a7b4 jne      0x14020a7c5
20a7b6 mov      rcx, r14
20a7b9 call     0x1402297e0
20a7be mov      r10, qword ptr [r14 + 0x260]
20a7c5 movzx    eax, r10b
20a7c9 and      al, 0x1f
20a7cb cmp      al, 0x15
20a7cd jne      0x14020a8bb
20a7d3 movsxd   rcx, dword ptr [r14 + 0x11e0]
20a7da mov      rax, qword ptr [r14 + 0x20]
20a7de xor      rcx, 0x5a5a
20a7e5 rol      rax, 0x11
20a7e9 imul     rcx, r12
20a7ed xor      rcx, r10
20a7f0 xor      rcx, rax
20a7f3 movabs   rax, 0x8f70feda99a6026d
20a7fd xor      rcx, rax
20a800 mov      rax, rcx
20a803 shr      rax, 0x21
20a807 xor      rax, rcx
20a80a imul     rax, r15
20a80e mov      rcx, rax
20a811 shr      rcx, 0x21
20a815 xor      rcx, rax
20a818 imul     rcx, rdi
20a81c mov      rax, rcx
20a81f shr      rax, 0x21
20a823 xor      rax, rcx
20a826 mov      r9, rax
20a829 shr      r9, 0x1d
20a82d xor      r9, rax
20a830 or       r9, 1
20a834 mov      rax, r9
20a837 mov      rcx, r9
20a83a shr      rax, 8
20a83e and      eax, 3
20a841 shr      rcx, 0x28
20a845 imul     r8, rax, 0x3e
20a849 mov      eax, 0x8421085
20a84e mul      ecx
20a850 mov      eax, ecx
20a852 sub      eax, edx
20a854 shr      eax, 1
20a856 add      eax, edx
20a858 shr      eax, 5
20a85b imul     eax, eax, 0x3e
20a85e sub      ecx, eax
20a860 mov      eax, ecx
20a862 add      r8, rax
20a865 mov      rax, qword ptr [r14 + 0x4b8]
20a86c movsxd   rcx, dword ptr [rax + r8*4]
20a870 movsxd   rax, dword ptr [r14 + 0x4c8]
20a877 xor      rcx, rax
20a87a add      rcx, qword ptr [r14 + 0x4c0]
20a881 xor      rcx, r9
20a884 mov      rax, rcx
20a887 shr      rax, 0x21
20a88b xor      rax, rcx
20a88e imul     rax, r15
20a892 mov      rcx, rax
20a895 shr      rcx, 0x21
20a899 xor      rcx, rax
20a89c imul     rcx, rdi
20a8a0 mov      rax, rcx
20a8a3 shr      rax, 0x21
20a8a7 xor      rax, r10
20a8aa xor      rax, rcx
20a8ad inc      qword ptr [r14 + 0x268]
20a8b4 mov      qword ptr [r14 + 0x260], rax
20a8bb inc      dword ptr [r14 + 0x200]
20a8c2 mov      eax, dword ptr [r14 + 0x200]
20a8c9 cmp      eax, dword ptr [r14 + 0x1fc]
20a8d0 jb       0x14020a8e5
20a8d2 mov      rcx, r14
20a8d5 mov      dword ptr [r14 + 0x200], 0
20a8e0 call     0x1401ef7c0
20a8e5 mov      r8d, ebx
20a8e8 mov      edx, ebx
20a8ea mov      rcx, r14
20a8ed call     0x1401f0660
20a8f2 inc      qword ptr [r14 + 0x1b8]
20a8f9 mov      rcx, rbx
20a8fc mov      r9, qword ptr [r14 + 0x1b0]
20a903 imul     r9, r12
20a907 lea      r12d, [rbx + 1]
20a90b add      r9, r13
20a90e mov      r13, qword ptr [r14 + 0x1b8]
20a915 mov      qword ptr [r14 + 0x1b0], r9
20a91c mov      rax, r9
20a91f shr      rax, 0x1b
20a923 movzx    edx, al
20a926 mov      byte ptr [r14 + 0x168], dl
20a92d mov      r11, qword ptr [r14 + 0xe0]
20a934 mov      r10, qword ptr [r14 + 0xd8]
20a93b mov      rdi, qword ptr [r14 + 0xd0]
20a942 movzx    ebp, byte ptr [r14 + 0xe8]
20a94a imul     rdx, r11
20a94e lea      rax, [r10 + r10*8]
20a952 xor      rdx, rax
20a955 xor      rdx, rdi
20a958 xor      rcx, rdx
20a95b test     bpl, bpl
20a95e lea      rax, [rbx + rdx]
20a962 cmove    rax, rcx
20a966 inc      r13
20a969 mov      qword ptr [r14 + 0x130], rax
20a970 mov      rcx, qword ptr [r14 + 0x1d0]
20a977 mov      rax, qword ptr [r14 + 0x48]
20a97b movzx    r8d, byte ptr [rcx + rbx]
20a980 xor      r8b, byte ptr [rax + rbx]
20a984 movabs   rax, 0x9e3779b97f4a7c15
20a98e imul     r9, rax
20a992 movabs   rax, 0x2545f4914f6cdd1d
20a99c mov      qword ptr [r14 + 0x1b8], r13
20a9a3 add      r9, rax
20a9a6 mov      rax, r9
20a9a9 shr      rax, 0x1b
20a9ad movzx    edx, al
20a9b0 lea      rax, [r10 + r10]
20a9b4 mov      byte ptr [r14 + 0x161], dl
20a9bb imul     rdx, r11
20a9bf xor      rdx, rax
20a9c2 xor      rdx, rdi
20a9c5 mov      rcx, rdx
20a9c8 xor      rcx, r12
20a9cb test     bpl, bpl
20a9ce lea      rax, [rdx + r12]
20a9d2 cmove    rax, rcx
20a9d6 mov      qword ptr [r14 + 0xf8], rax
20a9dd movsxd   rdx, dword ptr [r14 + 0x11e0]
20a9e4 mov      rbx, qword ptr [r14 + 0x20]
20a9e8 mov      rcx, rdx
20a9eb xor      rcx, qword ptr [r14 + 0x350]
20a9f2 xor      rcx, r12
20a9f5 xor      rcx, qword ptr [r14 + 0x348]
20a9fc xor      rcx, rbx
20a9ff mov      rax, rcx
20aa02 shr      rax, 0x21
20aa06 xor      rax, rcx
20aa09 imul     rax, r15
20aa0d mov      rcx, rax
20aa10 shr      rcx, 0x21
20aa14 xor      rcx, rax
20aa17 movabs   rax, 0xc4ceb9fe1a85ec53
20aa21 imul     rcx, rax
20aa25 movzx    eax, r8b
20aa29 xor      rax, 0xdd
20aa2f mov      r15, rcx
20aa32 shr      r15, 0x21
20aa36 xor      r15, rcx
20aa39 lea      rcx, [rip - 0x20aa40]
20aa40 mov      qword ptr [r14 + 0x28], r15
20aa44 movzx    esi, byte ptr [rax + rcx + 0x3ecf00]
20aa4c xor      sil, 0x63
20aa50 inc      edx
20aa52 mov      dword ptr [r14 + 0x11e0], edx
20aa59 test     dl, 0x1f
20aa5c jne      0x14020aaac
20aa5e movsxd   rax, edx
20aa61 xor      rax, qword ptr [r14 + 0x348]
20aa68 xor      rax, rbx
20aa6b mov      rcx, rax
20aa6e shr      rcx, 0x21
20aa72 xor      rcx, rax
20aa75 movabs   rax, 0xff51afd7ed558ccd
20aa7f imul     rcx, rax
20aa83 movabs   rax, 0xc4ceb9fe1a85ec53
20aa8d mov      rdx, rcx
20aa90 shr      rdx, 0x21
20aa94 xor      rdx, rcx
20aa97 imul     rdx, rax
20aa9b mov      rax, rdx
20aa9e shr      rax, 0x21
20aaa2 xor      rax, rdx
20aaa5 mov      qword ptr [r14 + 0x348], rax
20aaac movzx    r8d, sil
20aab0 mov      eax, r8d
20aab3 mov      byte ptr [r14 + 0x4ad], sil
20aaba xor      rax, r12
20aabd movabs   r12, 0xff51afd7ed558ccd
20aac7 xor      rax, rbx
20aaca movabs   rbx, 0x9e3779b97f4a7c15
20aad4 mov      rcx, rax
20aad7 shr      rcx, 0x21
20aadb xor      rcx, rax
20aade movabs   rax, 0xc4ceb9fe1a85ec53
20aae8 imul     rcx, r12
20aaec imul     r8, rbx
20aaf0 imul     r9, rbx
20aaf4 mov      rdx, rcx
20aaf7 shr      rdx, 0x21
20aafb xor      rdx, rcx
20aafe mov      ecx, dword ptr [r14 + 0x1178]
20ab05 imul     rdx, rax
20ab09 mov      rax, rdx
20ab0c shr      rax, 0x21
20ab10 xor      rax, rdx
20ab13 mov      qword ptr [r14 + 0x20], rax
20ab17 movabs   rax, 0xd6e8feb86659fd93
20ab21 imul     rcx, rax
20ab25 xor      rcx, r8
20ab28 xor      rcx, r15
20ab2b movabs   r15, 0x2545f4914f6cdd1d
20ab35 mov      rax, rcx
20ab38 add      r9, r15
20ab3b shr      rax, 0x21
20ab3f xor      rax, rcx
20ab42 imul     rax, r12
20ab46 mov      rdx, rax
20ab49 shr      rdx, 0x21
20ab4d xor      rdx, rax
20ab50 movabs   rax, 0xc4ceb9fe1a85ec53
20ab5a imul     rdx, rax
20ab5e lea      rax, [r13 + 1]
20ab62 shr      rdx, 0x21
20ab66 and      edx, 3
20ab69 mov      qword ptr [r14 + 0x1b8], rax
20ab70 cmp      sil, 0x3e
20ab74 jae      0x14020ac13
20ab7a inc      qword ptr [r14 + 0x11a0]
20ab81 lea      rax, [rip - 0x20ab88]
20ab88 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
20ab90 mov      qword ptr [r14 + 0x1b0], r9
20ab97 shr      r9, 0x1b
20ab9b movzx    eax, r9b
20ab9f mov      byte ptr [r14 + 0x160], al
20aba6 imul     rax, r11
20abaa mov      ebx, edx
20abac xor      rax, r10
20abaf xor      rax, rdi
20abb2 mov      rcx, rax
20abb5 add      rax, r8
20abb8 xor      rcx, r8
20abbb movzx    r8d, sil
20abbf test     bpl, bpl
20abc2 cmove    rax, rcx
20abc6 mov      rcx, r14
20abc9 mov      qword ptr [r14 + 0xf0], rax
20abd0 call     0x1401f1f50
20abd5 mov      edx, dword ptr [rsp + 0x78]
20abd9 mov      r8, qword ptr [rsp + 0x80]
20abe1 dec      edx
20abe3 mov      eax, eax
20abe5 imul     rcx, rbx, 0x3e
20abe9 add      rcx, rax
20abec mov      rax, qword ptr [r14 + 0x4b8]
20abf3 movsxd   r9, dword ptr [rax + rcx*4]
20abf7 mov      rcx, r14
20abfa movsxd   rax, dword ptr [r14 + 0x4c8]
20ac01 xor      r9, rax
20ac04 add      r9, qword ptr [r14 + 0x4c0]
20ac0b call     r9
20ac0e jmp      0x14020acda
20ac13 inc      dword ptr [r14 + 0x11a8]
20ac1a mov      rax, r9
20ac1d shr      rax, 0x1b
20ac21 movzx    ecx, al
20ac24 lea      rax, [r10*4]
20ac2c mov      byte ptr [r14 + 0x163], cl
20ac33 imul     rcx, r11
20ac37 imul     r9, rbx
20ac3b xor      rcx, rax
20ac3e xor      rcx, rdi
20ac41 mov      qword ptr [r14 + 0x108], rcx
20ac48 mov      r8, qword ptr [r14 + 0x1b8]
20ac4f add      r9, r15
20ac52 mov      rax, r9
20ac55 shr      rax, 0x1b
20ac59 movzx    edx, al
20ac5c mov      byte ptr [r14 + 0x16a], dl
20ac63 imul     rax, r10, 0xb
20ac67 imul     rdx, r11
20ac6b xor      rdx, rax
20ac6e xor      rdx, rdi
20ac71 mov      rcx, rdx
20ac74 xor      rcx, 1
20ac78 test     bpl, bpl
20ac7b lea      rax, [rdx + 1]
20ac7f cmove    rax, rcx
20ac83 mov      qword ptr [r14 + 0x140], rax
20ac8a lea      rax, [r8 + 2]
20ac8e mov      qword ptr [r14 + 0x1b8], rax
20ac95 imul     r9, rbx
20ac99 add      r9, r15
20ac9c mov      qword ptr [r14 + 0x1b0], r9
20aca3 shr      r9, 0x1b
20aca7 movzx    eax, r9b
20acab mov      byte ptr [r14 + 0x160], al
20acb2 imul     rax, r11
20acb6 xor      rax, rdi
20acb9 xor      rax, r10
20acbc mov      rcx, rax
20acbf add      rax, 0xfe1ab
20acc5 xor      rcx, 0xfe1ab
20accc test     bpl, bpl
20accf cmove    rax, rcx
20acd3 mov      qword ptr [r14 + 0xf0], rax
20acda mov      rbx, qword ptr [rsp + 0x88]
20ace2 add      rsp, 0x30
20ace6 pop      r15
20ace8 pop      r14
20acea pop      r13
20acec pop      r12
20acee pop      rdi
20acef pop      rsi
20acf0 pop      rbp
20acf1 ret      
20acf2 mov      edx, 0x54485254
20acf7 mov      rcx, r14
20acfa call     0x1401ed830
20acff int3     
20ad00 mov      edx, 0x43414e59
20ad05 mov      rcx, r14
20ad08 call     0x1401ed830
20ad0d int3     
