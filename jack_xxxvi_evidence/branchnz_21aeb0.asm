21aeb0 mov      qword ptr [rsp + 0x18], r8
21aeb5 push     rbx
21aeb6 push     rbp
21aeb7 push     rsi
21aeb8 push     rdi
21aeb9 push     r13
21aebb push     r14
21aebd sub      rsp, 0x38
21aec1 movsxd   rax, dword ptr [rcx + 0x11e0]
21aec8 mov      r14, rcx
21aecb mov      r13d, edx
21aece movabs   rcx, 0xc653a35ae77bc5b2
21aed8 imul     rax, rcx
21aedc movabs   rcx, 0x640a299166a5418d
21aee6 mov      rbp, r8
21aee9 xor      rax, qword ptr [r14 + 0x28]
21aeed mov      qword ptr [rsp + 0x70], rax
21aef2 mov      rax, qword ptr [rsp + 0x70]
21aef7 movsxd   rax, dword ptr [r14 + 0x11e0]
21aefe imul     rax, rcx
21af02 movabs   rcx, 0x82c2b7cfe5eecd98
21af0c xor      rax, qword ptr [r14 + 0x28]
21af10 mov      qword ptr [rsp + 0x70], rax
21af15 mov      rax, qword ptr [rsp + 0x70]
21af1a movsxd   rax, dword ptr [r14 + 0x11e0]
21af21 imul     rax, rcx
21af25 movabs   rcx, 0xf6782b16ed63d5b6
21af2f xor      rax, qword ptr [r14 + 0x28]
21af33 mov      qword ptr [rsp + 0x70], rax
21af38 mov      rax, qword ptr [rsp + 0x70]
21af3d mov      rax, qword ptr [r14 + 0x2e0]
21af44 xor      rax, rcx
21af47 mov      rcx, rax
21af4a shr      rcx, 0x21
21af4e xor      rcx, rax
21af51 movabs   rax, 0xff51afd7ed558ccd
21af5b imul     rcx, rax
21af5f movabs   rax, 0xc4ceb9fe1a85ec53
21af69 mov      rdx, rcx
21af6c shr      rdx, 0x21
21af70 xor      rdx, rcx
21af73 mov      rcx, r14
21af76 imul     rdx, rax
21af7a mov      rax, rdx
21af7d shr      rax, 0x21
21af81 xor      rdx, rax
21af84 mov      rax, qword ptr [r14 + 0x2e0]
21af8b shr      rax, 7
21af8f add      rax, rdx
21af92 mov      qword ptr [r14 + 0x2e0], rax
21af99 call     0x1401f1c70
21af9e mov      rcx, r14
21afa1 mov      edi, eax
21afa3 call     0x1401ee940
21afa8 mov      rcx, r14
21afab mov      rbx, rax
21afae call     0x1401ee070
21afb3 movzx    r9d, byte ptr [r14 + 0x4ad]
21afbb mov      r8d, eax
21afbe mov      rdx, rbx
21afc1 mov      rcx, r14
21afc4 mov      esi, eax
21afc6 call     0x1401f0e60
21afcb mov      ecx, edi
21afcd mov      rbx, rax
21afd0 call     0x1401ed270
21afd5 xor      r8d, r8d
21afd8 mov      dword ptr [rsp + 0x28], esi
21afdc lea      rcx, [rbx - 1]
21afe0 mov      dword ptr [rsp + 0x20], eax
21afe4 cmp      rcx, rbx
21afe7 mov      r9d, 1
21afed mov      rdx, rbx
21aff0 mov      rcx, r14
21aff3 setae    r8b
21aff7 call     0x1401f10a0
21affc mov      rdx, rax
21afff mov      rcx, r14
21b002 call     0x1401f0db0
21b007 mov      rax, qword ptr [r14 + 0x2e0]
21b00e test     r13d, r13d
21b011 jns      0x14021bb54
21b017 cmp      qword ptr [r14 + 0x11b8], rbp
21b01e jne      0x14021bb62
21b024 movsxd   rax, dword ptr [r14 + 0x11e0]
21b02b movabs   rcx, 0x9d000b97611e1197
21b035 imul     rax, rcx
21b039 mov      rcx, r14
21b03c xor      rax, qword ptr [r14 + 0x28]
21b040 mov      qword ptr [rsp + 0x70], rax
21b045 mov      rax, qword ptr [rsp + 0x70]
21b04a call     0x1401ee450
21b04f test     eax, eax
21b051 jne      0x14021bb47
21b057 cmp      dword ptr [r14 + 0xad0], eax
21b05e jne      0x14021bb47
21b064 mov      r8, qword ptr [r14 + 0xf0]
21b06b movzx    ecx, byte ptr [r14 + 0x160]
21b073 mov      rax, r8
21b076 mov      r10, qword ptr [r14 + 0xe0]
21b07d mov      rbx, qword ptr [r14 + 0xd0]
21b084 mov      r11, qword ptr [r14 + 0xd8]
21b08b movzx    edi, byte ptr [r14 + 0xe8]
21b093 mov      r9, qword ptr [r14 + 0x1b0]
21b09a mov      rsi, qword ptr [r14 + 0x1b8]
21b0a1 imul     rcx, r10
21b0a5 mov      qword ptr [rsp + 0x78], r12
21b0aa movabs   r12, 0x2545f4914f6cdd1d
21b0b4 xor      rcx, rbx
21b0b7 mov      qword ptr [rsp + 0x30], r15
21b0bc xor      rcx, r11
21b0bf movabs   r15, 0x9e3779b97f4a7c15
21b0c9 xor      rax, rcx
21b0cc sub      r8, rcx
21b0cf test     dil, dil
21b0d2 cmove    r8, rax
21b0d6 inc      rsi
21b0d9 imul     r9, r15
21b0dd mov      qword ptr [r14 + 0x1b8], rsi
21b0e4 add      r9, r12
21b0e7 mov      qword ptr [r14 + 0x1b0], r9
21b0ee mov      rax, r9
21b0f1 shr      rax, 0x1b
21b0f5 movzx    edx, al
21b0f8 mov      byte ptr [r14 + 0x160], dl
21b0ff imul     rdx, r10
21b103 xor      rdx, rbx
21b106 xor      rdx, r11
21b109 mov      rcx, rdx
21b10c xor      rcx, r8
21b10f test     dil, dil
21b112 lea      rax, [rdx + r8]
21b116 cmove    rax, rcx
21b11a mov      qword ptr [r14 + 0xf0], rax
21b121 cmp      r8d, 0x48cad
21b128 jne      0x14021bb3d
21b12e mov      eax, r13d
21b131 btr      eax, 0x1f
21b135 cmp      eax, 2
21b138 jae      0x14021b184
21b13a imul     r9, r15
21b13e lea      rax, [rsi + 1]
21b142 mov      qword ptr [r14 + 0x1b8], rax
21b149 add      r9, r12
21b14c mov      qword ptr [r14 + 0x1b0], r9
21b153 shr      r9, 0x1b
21b157 movzx    eax, r9b
21b15b mov      byte ptr [r14 + 0x160], al
21b162 imul     rax, r10
21b166 xor      rax, rbx
21b169 xor      rax, r11
21b16c mov      rcx, rax
21b16f add      rax, 0xf6105
21b175 xor      rcx, 0xf6105
21b17c test     dil, dil
21b17f jmp      0x14021bb32
21b184 mov      rcx, r14
21b187 call     0x1401ee070
21b18c movzx    ecx, byte ptr [r14 + 0x4ad]
21b194 movabs   rbx, 0xff51afd7ed558ccd
21b19e mov      r11, qword ptr [r14 + 0xe0]
21b1a5 movabs   r8, 0xc4ceb9fe1a85ec53
21b1af mov      r10, qword ptr [r14 + 0xd0]
21b1b6 movzx    r9d, byte ptr [r14 + 0xe8]
21b1be mov      eax, eax
21b1c0 xor      rcx, rax
21b1c3 xor      rcx, qword ptr [r14 + 0x11e8]
21b1ca mov      rax, rcx
21b1cd shr      rax, 0x21
21b1d1 xor      rax, rcx
21b1d4 imul     rax, rbx
21b1d8 mov      rcx, rax
21b1db shr      rcx, 0x21
21b1df xor      rcx, rax
21b1e2 imul     rcx, r8
21b1e6 mov      rdx, rcx
21b1e9 shr      rdx, 0x21
21b1ed xor      rdx, rcx
21b1f0 mov      qword ptr [r14 + 0x11e8], rdx
21b1f7 xor      rdx, qword ptr [r14 + 0x28]
21b1fb xor      rdx, qword ptr [r14 + 0x20]
21b1ff mov      rax, rdx
21b202 shr      rax, 0x21
21b206 xor      rax, rdx
21b209 imul     rax, rbx
21b20d mov      rcx, rax
21b210 shr      rcx, 0x21
21b214 xor      rcx, rax
21b217 imul     rcx, r8
21b21b mov      rax, rcx
21b21e shr      rax, 0x21
21b222 xor      rax, rcx
21b225 mov      qword ptr [r14 + 0x20], rax
21b229 mov      rdx, qword ptr [r14 + 0x138]
21b230 movzx    ecx, byte ptr [r14 + 0x169]
21b238 mov      rax, qword ptr [r14 + 0xd8]
21b23f imul     rcx, r11
21b243 lea      rbx, [rax + rax*4]
21b247 mov      rax, rdx
21b24a add      rbx, rbx
21b24d xor      rcx, rbx
21b250 xor      rcx, r10
21b253 xor      rax, rcx
21b256 sub      rdx, rcx
21b259 test     r9b, r9b
21b25c cmove    rdx, rax
21b260 mov      rax, qword ptr [r14 + 0x1b0]
21b267 inc      qword ptr [r14 + 0x1b8]
21b26e imul     rax, r15
21b272 add      rax, r12
21b275 mov      qword ptr [r14 + 0x1b0], rax
21b27c shr      rax, 0x1b
21b280 movzx    r8d, al
21b284 mov      byte ptr [r14 + 0x169], r8b
21b28b imul     r8, r11
21b28f xor      r8, rbx
21b292 xor      r8, r10
21b295 mov      rcx, r8
21b298 xor      rcx, rdx
21b29b test     r9b, r9b
21b29e lea      rax, [r8 + rdx]
21b2a2 cmove    rax, rcx
21b2a6 mov      rcx, r14
21b2a9 mov      qword ptr [r14 + 0x138], rax
21b2b0 call     0x1401f0910
21b2b5 mov      rax, qword ptr [r14 + 0xd8]
21b2bc mov      r10, qword ptr [r14 + 0xe0]
21b2c3 movzx    ecx, byte ptr [r14 + 0x168]
21b2cb mov      rbx, qword ptr [r14 + 0xd0]
21b2d2 mov      rdx, qword ptr [r14 + 0x130]
21b2d9 lea      r11, [rax + rax*8]
21b2dd movzx    r9d, byte ptr [r14 + 0xe8]
21b2e5 mov      rax, rdx
21b2e8 imul     rcx, r10
21b2ec xor      rcx, r11
21b2ef xor      rcx, rbx
21b2f2 xor      rax, rcx
21b2f5 sub      rdx, rcx
21b2f8 test     r9b, r9b
21b2fb cmove    rdx, rax
21b2ff mov      rax, qword ptr [r14 + 0x1b0]
21b306 inc      qword ptr [r14 + 0x1b8]
21b30d mov      rcx, rdx
21b310 imul     rax, r15
21b314 add      rax, r12
21b317 mov      qword ptr [r14 + 0x1b0], rax
21b31e shr      rax, 0x1b
21b322 movzx    r8d, al
21b326 mov      byte ptr [r14 + 0x168], r8b
21b32d imul     r8, r10
21b331 xor      r8, r11
21b334 xor      r8, rbx
21b337 xor      rcx, r8
21b33a test     r9b, r9b
21b33d lea      rax, [rdx + r8]
21b341 cmove    rax, rcx
21b345 mov      rcx, r14
21b348 mov      qword ptr [r14 + 0x130], rax
21b34f call     0x1401f0910
21b354 mov      rcx, r14
21b357 call     0x1401ee070
21b35c cmp      eax, dword ptr [r14 + 0x1d8]
21b363 jae      0x14021b36f
21b365 mov      edx, eax
21b367 mov      rcx, r14
21b36a call     0x1401f0910
21b36f mov      rsi, qword ptr [r14 + 0xe0]
21b376 mov      rbp, qword ptr [r14 + 0xd0]
21b37d mov      r11, qword ptr [r14 + 0x130]
21b384 movzx    edi, byte ptr [r14 + 0xe8]
21b38c mov      rax, r11
21b38f movzx    ecx, byte ptr [r14 + 0x168]
21b397 mov      rbx, qword ptr [r14 + 0xd8]
21b39e mov      r8, qword ptr [r14 + 0x1b8]
21b3a5 mov      r10, qword ptr [r14 + 0x1b0]
21b3ac imul     rcx, rsi
21b3b0 lea      r9, [rbx + rbx*8]
21b3b4 xor      rcx, r9
21b3b7 xor      rcx, rbp
21b3ba xor      rax, rcx
21b3bd sub      r11, rcx
21b3c0 test     dil, dil
21b3c3 cmove    r11, rax
21b3c7 imul     r10, r15
21b3cb mov      rcx, r11
21b3ce add      r10, r12
21b3d1 mov      rax, r10
21b3d4 shr      rax, 0x1b
21b3d8 movzx    edx, al
21b3db mov      byte ptr [r14 + 0x168], dl
21b3e2 imul     rdx, rsi
21b3e6 xor      rdx, r9
21b3e9 xor      rdx, rbp
21b3ec xor      rcx, rdx
21b3ef test     dil, dil
21b3f2 lea      rax, [r11 + rdx]
21b3f6 cmove    rax, rcx
21b3fa mov      rcx, r11
21b3fd mov      qword ptr [r14 + 0x130], rax
21b404 lea      rax, [r8 + 2]
21b408 mov      qword ptr [r14 + 0x1b8], rax
21b40f mov      r8d, 0xfe50
21b415 imul     r10, r15
21b419 lea      rax, [rbx + rbx*4]
21b41d add      rax, rax
21b420 add      r10, r12
21b423 mov      qword ptr [r14 + 0x1b0], r10
21b42a shr      r10, 0x1b
21b42e movzx    edx, r10b
21b432 mov      byte ptr [r14 + 0x169], dl
21b439 imul     rdx, rsi
21b43d xor      rdx, rax
21b440 xor      rdx, rbp
21b443 xor      rcx, rdx
21b446 test     dil, dil
21b449 lea      rax, [r11 + rdx]
21b44d cmove    rax, rcx
21b451 mov      rcx, r14
21b454 mov      qword ptr [r14 + 0x138], rax
21b45b movzx    edx, byte ptr [r14 + 0x4ad]
21b463 xor      rdx, qword ptr [r14 + 0x348]
21b46a call     0x1401f1520
21b46f mov      r8, qword ptr [r14 + 0x348]
21b476 movabs   rdi, 0xff51afd7ed558ccd
21b480 mov      rax, r8
21b483 movabs   rsi, 0xc4ceb9fe1a85ec53
21b48d xor      rax, qword ptr [r14 + 0x20]
21b491 mov      rcx, rax
21b494 shr      rcx, 0x21
21b498 xor      rcx, rax
21b49b imul     rcx, rdi
21b49f mov      rax, rcx
21b4a2 shr      rax, 0x21
21b4a6 xor      rax, rcx
21b4a9 imul     rax, rsi
21b4ad mov      rdx, rax
21b4b0 shr      rdx, 0x21
21b4b4 xor      edx, eax
21b4b6 lea      eax, [rdx + 1]
21b4b9 mov      ecx, eax
21b4bb xor      eax, edx
21b4bd imul     ecx, edx
21b4c0 not      ecx
21b4c2 and      ecx, eax
21b4c4 test     cl, 1
21b4c7 je       0x14021b530
21b4c9 and      r8b, 3
21b4cd cmp      r8b, 1
21b4d1 jne      0x14021b530
21b4d3 mov      rax, qword ptr [r14 + 0x1b0]
21b4da inc      qword ptr [r14 + 0x1b8]
21b4e1 imul     rax, r15
21b4e5 add      rax, r12
21b4e8 mov      qword ptr [r14 + 0x1b0], rax
21b4ef shr      rax, 0x1b
21b4f3 movzx    eax, al
21b4f6 mov      byte ptr [r14 + 0x160], al
21b4fd imul     rax, qword ptr [r14 + 0xe0]
21b505 xor      rax, qword ptr [r14 + 0xd8]
21b50c xor      rax, qword ptr [r14 + 0xd0]
21b513 mov      rcx, rax
21b516 add      rax, 0x116fdf
21b51c xor      rcx, 0x116fdf
21b523 cmp      byte ptr [r14 + 0xe8], 0
21b52b jmp      0x14021bb32
21b530 mov      rcx, r14
21b533 call     0x1401ee070
21b538 mov      ebx, eax
21b53a cmp      eax, dword ptr [r14 + 0x1d8]
21b541 jb       0x14021b5a0
21b543 mov      rax, qword ptr [r14 + 0x1b0]
21b54a inc      qword ptr [r14 + 0x1b8]
21b551 imul     rax, r15
21b555 add      rax, r12
21b558 mov      qword ptr [r14 + 0x1b0], rax
21b55f shr      rax, 0x1b
21b563 movzx    eax, al
21b566 mov      byte ptr [r14 + 0x160], al
21b56d imul     rax, qword ptr [r14 + 0xe0]
21b575 xor      rax, qword ptr [r14 + 0xd8]
21b57c xor      rax, qword ptr [r14 + 0xd0]
21b583 mov      rcx, rax
21b586 add      rax, 0xfe1ab
21b58c xor      rcx, 0xfe1ab
21b593 cmp      byte ptr [r14 + 0xe8], 0
21b59b jmp      0x14021bb32
21b5a0 mov      edx, ebx
21b5a2 mov      rcx, r14
21b5a5 call     0x1401f25b0
21b5aa movsxd   rcx, dword ptr [r14 + 0x11e0]
21b5b1 movabs   r8, 0xd6e8feb86659fd93
21b5bb mov      rdx, qword ptr [r14 + 0x20]
21b5bf mov      rax, rbx
21b5c2 imul     rax, r8
21b5c6 imul     rcx, r15
21b5ca rol      rdx, 0x11
21b5ce xor      rax, rdx
21b5d1 xor      rcx, qword ptr [r14 + 0x260]
21b5d8 xor      rax, rcx
21b5db mov      rcx, rax
21b5de shr      rcx, 0x21
21b5e2 xor      rcx, rax
21b5e5 imul     rcx, rdi
21b5e9 mov      rdx, rcx
21b5ec shr      rdx, 0x21
21b5f0 xor      rdx, rcx
21b5f3 imul     rdx, rsi
21b5f7 mov      rax, rdx
21b5fa shr      rax, 0x21
21b5fe xor      rax, rdx
21b601 mov      r10, rax
21b604 shr      r10, 0x1d
21b608 xor      r10, rax
21b60b or       r10, 1
21b60f mov      rax, r10
21b612 mov      qword ptr [r14 + 0x260], r10
21b619 and      eax, 0x3ff
21b61e cmp      rax, 0x2c5
21b624 jne      0x14021b635
21b626 mov      rcx, r14
21b629 call     0x1402297e0
21b62e mov      r10, qword ptr [r14 + 0x260]
21b635 movzx    eax, r10b
21b639 and      al, 0x1f
21b63b cmp      al, 0x15
21b63d jne      0x14021b72b
21b643 movsxd   rcx, dword ptr [r14 + 0x11e0]
21b64a mov      rax, qword ptr [r14 + 0x20]
21b64e xor      rcx, 0x5a5a
21b655 rol      rax, 0x11
21b659 imul     rcx, r15
21b65d xor      rcx, r10
21b660 xor      rcx, rax
21b663 movabs   rax, 0x8f70feda99a6026d
21b66d xor      rcx, rax
21b670 mov      rax, rcx
21b673 shr      rax, 0x21
21b677 xor      rax, rcx
21b67a imul     rax, rdi
21b67e mov      rcx, rax
21b681 shr      rcx, 0x21
21b685 xor      rcx, rax
21b688 imul     rcx, rsi
21b68c mov      rax, rcx
21b68f shr      rax, 0x21
21b693 xor      rax, rcx
21b696 mov      r9, rax
21b699 shr      r9, 0x1d
21b69d xor      r9, rax
21b6a0 or       r9, 1
21b6a4 mov      rax, r9
21b6a7 mov      rcx, r9
21b6aa shr      rax, 8
21b6ae and      eax, 3
21b6b1 shr      rcx, 0x28
21b6b5 imul     r8, rax, 0x3e
21b6b9 mov      eax, 0x8421085
21b6be mul      ecx
21b6c0 mov      eax, ecx
21b6c2 sub      eax, edx
21b6c4 shr      eax, 1
21b6c6 add      eax, edx
21b6c8 shr      eax, 5
21b6cb imul     eax, eax, 0x3e
21b6ce sub      ecx, eax
21b6d0 mov      eax, ecx
21b6d2 add      r8, rax
21b6d5 mov      rax, qword ptr [r14 + 0x4b8]
21b6dc movsxd   rcx, dword ptr [rax + r8*4]
21b6e0 movsxd   rax, dword ptr [r14 + 0x4c8]
21b6e7 xor      rcx, rax
21b6ea add      rcx, qword ptr [r14 + 0x4c0]
21b6f1 xor      rcx, r9
21b6f4 mov      rax, rcx
21b6f7 shr      rax, 0x21
21b6fb xor      rax, rcx
21b6fe imul     rax, rdi
21b702 mov      rcx, rax
21b705 shr      rcx, 0x21
21b709 xor      rcx, rax
21b70c imul     rcx, rsi
21b710 mov      rax, rcx
21b713 shr      rax, 0x21
21b717 xor      rax, rcx
21b71a xor      rax, r10
21b71d inc      qword ptr [r14 + 0x268]
21b724 mov      qword ptr [r14 + 0x260], rax
21b72b inc      dword ptr [r14 + 0x200]
21b732 mov      eax, dword ptr [r14 + 0x200]
21b739 cmp      eax, dword ptr [r14 + 0x1fc]
21b740 jb       0x14021b755
21b742 mov      rcx, r14
21b745 mov      dword ptr [r14 + 0x200], 0
21b750 call     0x1401ef7c0
21b755 mov      r8d, ebx
21b758 mov      edx, ebx
21b75a mov      rcx, r14
21b75d call     0x1401f0660
21b762 inc      qword ptr [r14 + 0x1b8]
21b769 mov      rcx, rbx
21b76c mov      r9, qword ptr [r14 + 0x1b0]
21b773 mov      rbp, r12
21b776 mov      r10, qword ptr [r14 + 0x1b8]
21b77d imul     r9, r15
21b781 add      r9, r12
21b784 lea      r12d, [rbx + 1]
21b788 mov      qword ptr [r14 + 0x1b0], r9
21b78f mov      rax, r9
21b792 shr      rax, 0x1b
21b796 movzx    edx, al
21b799 mov      byte ptr [r14 + 0x168], dl
21b7a0 mov      rdi, qword ptr [r14 + 0xe0]
21b7a7 mov      r11, qword ptr [r14 + 0xd8]
21b7ae mov      rsi, qword ptr [r14 + 0xd0]
21b7b5 movzx    r15d, byte ptr [r14 + 0xe8]
21b7bd imul     rdx, rdi
21b7c1 lea      rax, [r11 + r11*8]
21b7c5 xor      rdx, rax
21b7c8 xor      rdx, rsi
21b7cb xor      rcx, rdx
21b7ce test     r15b, r15b
21b7d1 lea      rax, [rbx + rdx]
21b7d5 cmove    rax, rcx
21b7d9 inc      r10
21b7dc mov      qword ptr [r14 + 0x130], rax
21b7e3 mov      rcx, qword ptr [r14 + 0x1d0]
21b7ea mov      rax, qword ptr [r14 + 0x48]
21b7ee mov      qword ptr [rsp + 0x70], r10
21b7f3 movzx    r8d, byte ptr [rcx + rbx]
21b7f8 xor      r8b, byte ptr [rax + rbx]
21b7fc movabs   rax, 0x9e3779b97f4a7c15
21b806 imul     r9, rax
21b80a mov      qword ptr [r14 + 0x1b8], r10
21b811 movabs   rbx, 0xff51afd7ed558ccd
21b81b add      r9, rbp
21b81e mov      rax, r9
21b821 shr      rax, 0x1b
21b825 movzx    edx, al
21b828 lea      rax, [r11 + r11]
21b82c mov      byte ptr [r14 + 0x161], dl
21b833 imul     rdx, rdi
21b837 xor      rdx, rax
21b83a xor      rdx, rsi
21b83d mov      rcx, rdx
21b840 xor      rcx, r12
21b843 test     r15b, r15b
21b846 lea      rax, [rdx + r12]
21b84a cmove    rax, rcx
21b84e mov      qword ptr [r14 + 0xf8], rax
21b855 movsxd   rdx, dword ptr [r14 + 0x11e0]
21b85c mov      r10, qword ptr [r14 + 0x20]
21b860 mov      rcx, rdx
21b863 xor      rcx, qword ptr [r14 + 0x350]
21b86a xor      rcx, r10
21b86d xor      rcx, r12
21b870 xor      rcx, qword ptr [r14 + 0x348]
21b877 mov      rax, rcx
21b87a shr      rax, 0x21
21b87e xor      rax, rcx
21b881 imul     rax, rbx
21b885 mov      rcx, rax
21b888 shr      rcx, 0x21
21b88c xor      rcx, rax
21b88f movabs   rax, 0xc4ceb9fe1a85ec53
21b899 imul     rcx, rax
21b89d movzx    eax, r8b
21b8a1 mov      rbx, rcx
21b8a4 xor      rax, 0xdd
21b8aa shr      rbx, 0x21
21b8ae xor      rbx, rcx
21b8b1 lea      rcx, [rip - 0x21b8b8]
21b8b8 mov      qword ptr [r14 + 0x28], rbx
21b8bc movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
21b8c4 xor      bpl, 0x63
21b8c8 inc      edx
21b8ca mov      dword ptr [r14 + 0x11e0], edx
21b8d1 movabs   r8, 0xff51afd7ed558ccd
21b8db test     dl, 0x1f
21b8de jne      0x14021b924
21b8e0 movsxd   rax, edx
21b8e3 xor      rax, r10
21b8e6 xor      rax, qword ptr [r14 + 0x348]
21b8ed mov      rcx, rax
21b8f0 shr      rcx, 0x21
21b8f4 xor      rcx, rax
21b8f7 movabs   rax, 0xc4ceb9fe1a85ec53
21b901 imul     rcx, r8
21b905 mov      rdx, rcx
21b908 shr      rdx, 0x21
21b90c xor      rdx, rcx
21b90f imul     rdx, rax
21b913 mov      rax, rdx
21b916 shr      rax, 0x21
21b91a xor      rax, rdx
21b91d mov      qword ptr [r14 + 0x348], rax
21b924 movzx    edx, bpl
21b928 xor      r10, rdx
21b92b mov      byte ptr [r14 + 0x4ad], bpl
21b932 xor      r10, r12
21b935 movabs   r12, 0xc4ceb9fe1a85ec53
21b93f mov      rax, r10
21b942 shr      rax, 0x21
21b946 xor      rax, r10
21b949 movabs   r10, 0x9e3779b97f4a7c15
21b953 imul     rax, r8
21b957 imul     rdx, r10
21b95b imul     r9, r10
21b95f mov      rcx, rax
21b962 shr      rcx, 0x21
21b966 xor      rcx, rax
21b969 imul     rcx, r12
21b96d mov      rax, rcx
21b970 shr      rax, 0x21
21b974 xor      rax, rcx
21b977 mov      ecx, dword ptr [r14 + 0x1178]
21b97e mov      qword ptr [r14 + 0x20], rax
21b982 movabs   rax, 0xd6e8feb86659fd93
21b98c imul     rcx, rax
21b990 xor      rcx, rdx
21b993 xor      rcx, rbx
21b996 movabs   rbx, 0x2545f4914f6cdd1d
21b9a0 mov      rax, rcx
21b9a3 add      r9, rbx
21b9a6 shr      rax, 0x21
21b9aa xor      rax, rcx
21b9ad imul     rax, r8
21b9b1 mov      rdx, rax
21b9b4 shr      rdx, 0x21
21b9b8 xor      rdx, rax
21b9bb mov      rax, qword ptr [rsp + 0x70]
21b9c0 imul     rdx, r12
21b9c4 shr      rdx, 0x21
21b9c8 and      edx, 3
21b9cb inc      rax
21b9ce mov      qword ptr [r14 + 0x1b8], rax
21b9d5 cmp      bpl, 0x3e
21b9d9 jae      0x14021ba76
21b9df inc      qword ptr [r14 + 0x11a0]
21b9e6 lea      rax, [rip - 0x21b9ed]
21b9ed mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
21b9f5 mov      qword ptr [r14 + 0x1b0], r9
21b9fc shr      r9, 0x1b
21ba00 movzx    eax, r9b
21ba04 mov      byte ptr [r14 + 0x160], al
21ba0b imul     rax, rdi
21ba0f mov      ebx, edx
21ba11 xor      rax, rsi
21ba14 xor      rax, r11
21ba17 mov      rcx, rax
21ba1a add      rax, r8
21ba1d xor      rcx, r8
21ba20 movzx    r8d, bpl
21ba24 test     r15b, r15b
21ba27 cmove    rax, rcx
21ba2b mov      rcx, r14
21ba2e mov      qword ptr [r14 + 0xf0], rax
21ba35 call     0x1401f1f50
21ba3a mov      r8, qword ptr [rsp + 0x80]
21ba42 lea      edx, [r13 - 1]
21ba46 mov      eax, eax
21ba48 imul     rcx, rbx, 0x3e
21ba4c add      rcx, rax
21ba4f mov      rax, qword ptr [r14 + 0x4b8]
21ba56 movsxd   r9, dword ptr [rax + rcx*4]
21ba5a mov      rcx, r14
21ba5d movsxd   rax, dword ptr [r14 + 0x4c8]
21ba64 xor      r9, rax
21ba67 add      r9, qword ptr [r14 + 0x4c0]
21ba6e call     r9
21ba71 jmp      0x14021bb3d
21ba76 inc      dword ptr [r14 + 0x11a8]
21ba7d mov      rax, r9
21ba80 shr      rax, 0x1b
21ba84 movzx    ecx, al
21ba87 lea      rax, [r11*4]
21ba8f mov      byte ptr [r14 + 0x163], cl
21ba96 imul     rcx, rdi
21ba9a imul     r9, r10
21ba9e xor      rcx, rax
21baa1 xor      rcx, rsi
21baa4 mov      qword ptr [r14 + 0x108], rcx
21baab mov      r8, qword ptr [r14 + 0x1b8]
21bab2 add      r9, rbx
21bab5 mov      rax, r9
21bab8 shr      rax, 0x1b
21babc movzx    edx, al
21babf mov      byte ptr [r14 + 0x16a], dl
21bac6 imul     rax, r11, 0xb
21baca imul     rdx, rdi
21bace xor      rdx, rax
21bad1 xor      rdx, rsi
21bad4 mov      rcx, rdx
21bad7 xor      rcx, 1
21badb test     r15b, r15b
21bade lea      rax, [rdx + 1]
21bae2 cmove    rax, rcx
21bae6 mov      qword ptr [r14 + 0x140], rax
21baed lea      rax, [r8 + 2]
21baf1 mov      qword ptr [r14 + 0x1b8], rax
21baf8 imul     r9, r10
21bafc add      r9, rbx
21baff mov      qword ptr [r14 + 0x1b0], r9
21bb06 shr      r9, 0x1b
21bb0a movzx    eax, r9b
21bb0e mov      byte ptr [r14 + 0x160], al
21bb15 imul     rax, rdi
21bb19 xor      rax, rsi
21bb1c xor      rax, r11
21bb1f mov      rcx, rax
21bb22 add      rax, 0xfe1ab
21bb28 xor      rcx, 0xfe1ab
21bb2f test     r15b, r15b
21bb32 cmove    rax, rcx
21bb36 mov      qword ptr [r14 + 0xf0], rax
21bb3d mov      r12, qword ptr [rsp + 0x78]
21bb42 mov      r15, qword ptr [rsp + 0x30]
21bb47 add      rsp, 0x38
21bb4b pop      r14
21bb4d pop      r13
21bb4f pop      rdi
21bb50 pop      rsi
21bb51 pop      rbp
21bb52 pop      rbx
21bb53 ret      
21bb54 mov      edx, 0x54485254
21bb59 mov      rcx, r14
21bb5c call     0x1401ed830
21bb61 int3     
21bb62 mov      edx, 0x43414e59
21bb67 mov      rcx, r14
21bb6a call     0x1401ed830
21bb6f int3     
