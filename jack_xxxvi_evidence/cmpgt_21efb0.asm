21efb0 mov      qword ptr [rsp + 0x18], r8
21efb5 push     rbx
21efb6 push     rbp
21efb7 push     rdi
21efb8 push     r13
21efba push     r14
21efbc sub      rsp, 0x30
21efc0 movsxd   rax, dword ptr [rcx + 0x11e0]
21efc7 mov      r14, rcx
21efca mov      r13d, edx
21efcd movabs   rcx, 0x62f799b88183bf4e
21efd7 imul     rax, rcx
21efdb movabs   rcx, 0xc0ae1373005d3b71
21efe5 movabs   rbp, 0xff51afd7ed558ccd
21efef xor      rax, qword ptr [r14 + 0x28]
21eff3 mov      rdi, r8
21eff6 mov      qword ptr [rsp + 0x60], rax
21effb mov      rax, qword ptr [rsp + 0x60]
21f000 movsxd   rax, dword ptr [r14 + 0x11e0]
21f007 imul     rax, rcx
21f00b movabs   rcx, 0x26668d2d8316b764
21f015 xor      rax, qword ptr [r14 + 0x28]
21f019 mov      qword ptr [rsp + 0x60], rax
21f01e mov      rax, qword ptr [rsp + 0x60]
21f023 movsxd   rax, dword ptr [r14 + 0x11e0]
21f02a imul     rax, rcx
21f02e movabs   rcx, 0xf5865c2f492d4df
21f038 xor      rax, qword ptr [r14 + 0x28]
21f03c mov      qword ptr [rsp + 0x60], rax
21f041 mov      rax, qword ptr [rsp + 0x60]
21f046 mov      rax, qword ptr [r14 + 0x2f8]
21f04d mov      rax, qword ptr [r14 + 0x2f8]
21f054 sub      rax, rcx
21f057 mov      rcx, rax
21f05a shr      rcx, 0x21
21f05e xor      rcx, rax
21f061 movabs   rax, 0xc4ceb9fe1a85ec53
21f06b imul     rcx, rbp
21f06f mov      rdx, rcx
21f072 shr      rdx, 0x21
21f076 xor      rdx, rcx
21f079 mov      rcx, r14
21f07c imul     rdx, rax
21f080 mov      rax, rdx
21f083 shr      rax, 0x21
21f087 xor      rdx, rax
21f08a mov      rax, qword ptr [r14 + 0x2f8]
21f091 shr      rax, 3
21f095 xor      rax, rdx
21f098 mov      qword ptr [r14 + 0x2f8], rax
21f09f call     0x1401ee940
21f0a4 mov      rcx, r14
21f0a7 mov      rbx, rax
21f0aa call     0x1401ee940
21f0af movabs   rcx, 0x8000000000000000
21f0b9 xor      edx, edx
21f0bb xor      rax, rcx
21f0be xor      rbx, rcx
21f0c1 cmp      rax, rbx
21f0c4 mov      rcx, r14
21f0c7 seta     dl
21f0ca call     0x1401ee820
21f0cf mov      rax, qword ptr [r14 + 0x2f8]
21f0d6 test     r13d, r13d
21f0d9 jns      0x14021fc17
21f0df cmp      qword ptr [r14 + 0x11b8], rdi
21f0e6 jne      0x14021fc25
21f0ec movsxd   rax, dword ptr [r14 + 0x11e0]
21f0f3 movabs   rcx, 0xc433ca6de650dab4
21f0fd imul     rax, rcx
21f101 mov      rcx, r14
21f104 xor      rax, qword ptr [r14 + 0x28]
21f108 mov      qword ptr [rsp + 0x60], rax
21f10d mov      rax, qword ptr [rsp + 0x60]
21f112 call     0x1401ee450
21f117 test     eax, eax
21f119 jne      0x14021fc0b
21f11f cmp      dword ptr [r14 + 0xad0], eax
21f126 jne      0x14021fc0b
21f12c mov      r8, qword ptr [r14 + 0xf0]
21f133 movzx    ecx, byte ptr [r14 + 0x160]
21f13b mov      rax, r8
21f13e mov      r10, qword ptr [r14 + 0xe0]
21f145 mov      rbx, qword ptr [r14 + 0xd0]
21f14c mov      r11, qword ptr [r14 + 0xd8]
21f153 movzx    edi, byte ptr [r14 + 0xe8]
21f15b mov      r9, qword ptr [r14 + 0x1b0]
21f162 imul     rcx, r10
21f166 mov      qword ptr [rsp + 0x68], rsi
21f16b mov      rsi, qword ptr [r14 + 0x1b8]
21f172 xor      rcx, rbx
21f175 xor      rcx, r11
21f178 mov      qword ptr [rsp + 0x28], r12
21f17d xor      rax, rcx
21f180 mov      qword ptr [rsp + 0x20], r15
21f185 sub      r8, rcx
21f188 movabs   r15, 0x9e3779b97f4a7c15
21f192 test     dil, dil
21f195 movabs   r12, 0x2545f4914f6cdd1d
21f19f cmove    r8, rax
21f1a3 inc      rsi
21f1a6 imul     r9, r15
21f1aa mov      qword ptr [r14 + 0x1b8], rsi
21f1b1 mov      rcx, r8
21f1b4 add      r9, r12
21f1b7 mov      qword ptr [r14 + 0x1b0], r9
21f1be mov      rax, r9
21f1c1 shr      rax, 0x1b
21f1c5 movzx    edx, al
21f1c8 mov      byte ptr [r14 + 0x160], dl
21f1cf imul     rdx, r10
21f1d3 xor      rdx, rbx
21f1d6 xor      rdx, r11
21f1d9 xor      rcx, rdx
21f1dc test     dil, dil
21f1df lea      rax, [r8 + rdx]
21f1e3 cmove    rax, rcx
21f1e7 mov      qword ptr [r14 + 0xf0], rax
21f1ee cmp      r8d, 0x2a0025
21f1f5 jne      0x14021fbfc
21f1fb mov      eax, r13d
21f1fe btr      eax, 0x1f
21f202 cmp      eax, 2
21f205 jae      0x14021f251
21f207 imul     r9, r15
21f20b lea      rax, [rsi + 1]
21f20f mov      qword ptr [r14 + 0x1b8], rax
21f216 add      r9, r12
21f219 mov      qword ptr [r14 + 0x1b0], r9
21f220 shr      r9, 0x1b
21f224 movzx    eax, r9b
21f228 mov      byte ptr [r14 + 0x160], al
21f22f imul     rax, r10
21f233 xor      rax, rbx
21f236 xor      rax, r11
21f239 mov      rcx, rax
21f23c add      rax, 0x85b36
21f242 xor      rcx, 0x85b36
21f249 test     dil, dil
21f24c jmp      0x14021fbf1
21f251 mov      rcx, r14
21f254 call     0x1401ee070
21f259 movzx    ecx, byte ptr [r14 + 0x4ad]
21f261 movabs   r8, 0xc4ceb9fe1a85ec53
21f26b xor      rcx, qword ptr [r14 + 0x11e8]
21f272 mov      r11, qword ptr [r14 + 0xe0]
21f279 mov      r10, qword ptr [r14 + 0xd0]
21f280 movzx    r9d, byte ptr [r14 + 0xe8]
21f288 mov      eax, eax
21f28a xor      rcx, rax
21f28d mov      rax, rcx
21f290 shr      rax, 0x21
21f294 xor      rax, rcx
21f297 imul     rax, rbp
21f29b mov      rcx, rax
21f29e shr      rcx, 0x21
21f2a2 xor      rcx, rax
21f2a5 imul     rcx, r8
21f2a9 mov      rdx, rcx
21f2ac shr      rdx, 0x21
21f2b0 xor      rdx, rcx
21f2b3 mov      qword ptr [r14 + 0x11e8], rdx
21f2ba xor      rdx, qword ptr [r14 + 0x28]
21f2be xor      rdx, qword ptr [r14 + 0x20]
21f2c2 mov      rax, rdx
21f2c5 shr      rax, 0x21
21f2c9 xor      rax, rdx
21f2cc imul     rax, rbp
21f2d0 mov      rcx, rax
21f2d3 shr      rcx, 0x21
21f2d7 xor      rcx, rax
21f2da imul     rcx, r8
21f2de mov      rax, rcx
21f2e1 shr      rax, 0x21
21f2e5 xor      rax, rcx
21f2e8 mov      qword ptr [r14 + 0x20], rax
21f2ec mov      rdx, qword ptr [r14 + 0x138]
21f2f3 movzx    ecx, byte ptr [r14 + 0x169]
21f2fb mov      rax, qword ptr [r14 + 0xd8]
21f302 imul     rcx, r11
21f306 lea      rbx, [rax + rax*4]
21f30a mov      rax, rdx
21f30d add      rbx, rbx
21f310 xor      rcx, rbx
21f313 xor      rcx, r10
21f316 xor      rax, rcx
21f319 sub      rdx, rcx
21f31c test     r9b, r9b
21f31f cmove    rdx, rax
21f323 mov      rax, qword ptr [r14 + 0x1b0]
21f32a inc      qword ptr [r14 + 0x1b8]
21f331 imul     rax, r15
21f335 add      rax, r12
21f338 mov      qword ptr [r14 + 0x1b0], rax
21f33f shr      rax, 0x1b
21f343 movzx    r8d, al
21f347 mov      byte ptr [r14 + 0x169], r8b
21f34e imul     r8, r11
21f352 xor      r8, rbx
21f355 xor      r8, r10
21f358 mov      rcx, r8
21f35b xor      rcx, rdx
21f35e test     r9b, r9b
21f361 lea      rax, [r8 + rdx]
21f365 cmove    rax, rcx
21f369 mov      rcx, r14
21f36c mov      qword ptr [r14 + 0x138], rax
21f373 call     0x1401f0910
21f378 mov      rax, qword ptr [r14 + 0xd8]
21f37f mov      rdx, qword ptr [r14 + 0x130]
21f386 mov      r10, qword ptr [r14 + 0xe0]
21f38d movzx    ecx, byte ptr [r14 + 0x168]
21f395 mov      rbx, qword ptr [r14 + 0xd0]
21f39c lea      r11, [rax + rax*8]
21f3a0 movzx    r9d, byte ptr [r14 + 0xe8]
21f3a8 mov      rax, rdx
21f3ab imul     rcx, r10
21f3af xor      rcx, r11
21f3b2 xor      rcx, rbx
21f3b5 xor      rax, rcx
21f3b8 sub      rdx, rcx
21f3bb test     r9b, r9b
21f3be cmove    rdx, rax
21f3c2 mov      rax, qword ptr [r14 + 0x1b0]
21f3c9 inc      qword ptr [r14 + 0x1b8]
21f3d0 mov      rcx, rdx
21f3d3 imul     rax, r15
21f3d7 add      rax, r12
21f3da mov      qword ptr [r14 + 0x1b0], rax
21f3e1 shr      rax, 0x1b
21f3e5 movzx    r8d, al
21f3e9 mov      byte ptr [r14 + 0x168], r8b
21f3f0 imul     r8, r10
21f3f4 xor      r8, r11
21f3f7 xor      r8, rbx
21f3fa xor      rcx, r8
21f3fd test     r9b, r9b
21f400 lea      rax, [rdx + r8]
21f404 cmove    rax, rcx
21f408 mov      rcx, r14
21f40b mov      qword ptr [r14 + 0x130], rax
21f412 call     0x1401f0910
21f417 mov      rcx, r14
21f41a call     0x1401ee070
21f41f cmp      eax, dword ptr [r14 + 0x1d8]
21f426 jae      0x14021f432
21f428 mov      edx, eax
21f42a mov      rcx, r14
21f42d call     0x1401f0910
21f432 mov      rsi, qword ptr [r14 + 0xe0]
21f439 mov      rbp, qword ptr [r14 + 0xd0]
21f440 mov      r11, qword ptr [r14 + 0x130]
21f447 movzx    edi, byte ptr [r14 + 0xe8]
21f44f mov      rax, r11
21f452 movzx    ecx, byte ptr [r14 + 0x168]
21f45a mov      rbx, qword ptr [r14 + 0xd8]
21f461 mov      r8, qword ptr [r14 + 0x1b8]
21f468 mov      r10, qword ptr [r14 + 0x1b0]
21f46f imul     rcx, rsi
21f473 lea      r9, [rbx + rbx*8]
21f477 xor      rcx, r9
21f47a xor      rcx, rbp
21f47d xor      rax, rcx
21f480 sub      r11, rcx
21f483 test     dil, dil
21f486 cmove    r11, rax
21f48a imul     r10, r15
21f48e mov      rcx, r11
21f491 add      r10, r12
21f494 mov      rax, r10
21f497 shr      rax, 0x1b
21f49b movzx    edx, al
21f49e mov      byte ptr [r14 + 0x168], dl
21f4a5 imul     rdx, rsi
21f4a9 xor      rdx, r9
21f4ac xor      rdx, rbp
21f4af xor      rcx, rdx
21f4b2 test     dil, dil
21f4b5 lea      rax, [r11 + rdx]
21f4b9 cmove    rax, rcx
21f4bd mov      rcx, r11
21f4c0 mov      qword ptr [r14 + 0x130], rax
21f4c7 lea      rax, [r8 + 2]
21f4cb mov      qword ptr [r14 + 0x1b8], rax
21f4d2 mov      r8d, 0x8dd9
21f4d8 imul     r10, r15
21f4dc lea      rax, [rbx + rbx*4]
21f4e0 add      rax, rax
21f4e3 add      r10, r12
21f4e6 mov      qword ptr [r14 + 0x1b0], r10
21f4ed shr      r10, 0x1b
21f4f1 movzx    edx, r10b
21f4f5 mov      byte ptr [r14 + 0x169], dl
21f4fc imul     rdx, rsi
21f500 xor      rdx, rax
21f503 xor      rdx, rbp
21f506 xor      rcx, rdx
21f509 test     dil, dil
21f50c lea      rax, [r11 + rdx]
21f510 cmove    rax, rcx
21f514 mov      rcx, r14
21f517 mov      qword ptr [r14 + 0x138], rax
21f51e movzx    edx, byte ptr [r14 + 0x4ad]
21f526 xor      rdx, qword ptr [r14 + 0x348]
21f52d call     0x1401f1520
21f532 mov      r8, qword ptr [r14 + 0x348]
21f539 movabs   rdi, 0xff51afd7ed558ccd
21f543 mov      rax, r8
21f546 movabs   rsi, 0xc4ceb9fe1a85ec53
21f550 xor      rax, qword ptr [r14 + 0x20]
21f554 mov      rcx, rax
21f557 shr      rcx, 0x21
21f55b xor      rcx, rax
21f55e imul     rcx, rdi
21f562 mov      rax, rcx
21f565 shr      rax, 0x21
21f569 xor      rax, rcx
21f56c imul     rax, rsi
21f570 mov      rdx, rax
21f573 shr      rdx, 0x21
21f577 xor      edx, eax
21f579 lea      eax, [rdx + 1]
21f57c mov      ecx, eax
21f57e xor      eax, edx
21f580 imul     ecx, edx
21f583 not      ecx
21f585 and      ecx, eax
21f587 test     cl, 1
21f58a je       0x14021f5f3
21f58c and      r8b, 3
21f590 cmp      r8b, 1
21f594 jne      0x14021f5f3
21f596 mov      rax, qword ptr [r14 + 0x1b0]
21f59d inc      qword ptr [r14 + 0x1b8]
21f5a4 imul     rax, r15
21f5a8 add      rax, r12
21f5ab mov      qword ptr [r14 + 0x1b0], rax
21f5b2 shr      rax, 0x1b
21f5b6 movzx    eax, al
21f5b9 mov      byte ptr [r14 + 0x160], al
21f5c0 imul     rax, qword ptr [r14 + 0xe0]
21f5c8 xor      rax, qword ptr [r14 + 0xd8]
21f5cf xor      rax, qword ptr [r14 + 0xd0]
21f5d6 mov      rcx, rax
21f5d9 add      rax, 0x3dd18f
21f5df xor      rcx, 0x3dd18f
21f5e6 cmp      byte ptr [r14 + 0xe8], 0
21f5ee jmp      0x14021fbf1
21f5f3 mov      rcx, r14
21f5f6 call     0x1401ee070
21f5fb mov      ebx, eax
21f5fd cmp      eax, dword ptr [r14 + 0x1d8]
21f604 jb       0x14021f663
21f606 mov      rax, qword ptr [r14 + 0x1b0]
21f60d inc      qword ptr [r14 + 0x1b8]
21f614 imul     rax, r15
21f618 add      rax, r12
21f61b mov      qword ptr [r14 + 0x1b0], rax
21f622 shr      rax, 0x1b
21f626 movzx    eax, al
21f629 mov      byte ptr [r14 + 0x160], al
21f630 imul     rax, qword ptr [r14 + 0xe0]
21f638 xor      rax, qword ptr [r14 + 0xd8]
21f63f xor      rax, qword ptr [r14 + 0xd0]
21f646 mov      rcx, rax
21f649 add      rax, 0xfe1ab
21f64f xor      rcx, 0xfe1ab
21f656 cmp      byte ptr [r14 + 0xe8], 0
21f65e jmp      0x14021fbf1
21f663 mov      edx, ebx
21f665 mov      rcx, r14
21f668 call     0x1401f25b0
21f66d movsxd   rcx, dword ptr [r14 + 0x11e0]
21f674 movabs   r8, 0xd6e8feb86659fd93
21f67e mov      rdx, qword ptr [r14 + 0x20]
21f682 mov      rax, rbx
21f685 imul     rax, r8
21f689 imul     rcx, r15
21f68d rol      rdx, 0x11
21f691 xor      rax, rdx
21f694 xor      rcx, qword ptr [r14 + 0x260]
21f69b xor      rax, rcx
21f69e mov      rcx, rax
21f6a1 shr      rcx, 0x21
21f6a5 xor      rcx, rax
21f6a8 imul     rcx, rdi
21f6ac mov      rdx, rcx
21f6af shr      rdx, 0x21
21f6b3 xor      rdx, rcx
21f6b6 imul     rdx, rsi
21f6ba mov      rax, rdx
21f6bd shr      rax, 0x21
21f6c1 xor      rax, rdx
21f6c4 mov      r10, rax
21f6c7 shr      r10, 0x1d
21f6cb xor      r10, rax
21f6ce or       r10, 1
21f6d2 mov      rax, r10
21f6d5 mov      qword ptr [r14 + 0x260], r10
21f6dc and      eax, 0x3ff
21f6e1 cmp      rax, 0x2c5
21f6e7 jne      0x14021f6f8
21f6e9 mov      rcx, r14
21f6ec call     0x1402297e0
21f6f1 mov      r10, qword ptr [r14 + 0x260]
21f6f8 movzx    eax, r10b
21f6fc and      al, 0x1f
21f6fe cmp      al, 0x15
21f700 jne      0x14021f7ed
21f706 movsxd   rax, dword ptr [r14 + 0x11e0]
21f70d xor      rax, 0x5a5a
21f713 mov      rcx, qword ptr [r14 + 0x20]
21f717 imul     rax, r15
21f71b rol      rcx, 0x11
21f71f xor      rax, r10
21f722 xor      rcx, rax
21f725 movabs   rax, 0x8f70feda99a6026d
21f72f xor      rcx, rax
21f732 mov      rax, rcx
21f735 shr      rax, 0x21
21f739 xor      rax, rcx
21f73c imul     rax, rdi
21f740 mov      rcx, rax
21f743 shr      rcx, 0x21
21f747 xor      rcx, rax
21f74a imul     rcx, rsi
21f74e mov      rax, rcx
21f751 shr      rax, 0x21
21f755 xor      rax, rcx
21f758 mov      r9, rax
21f75b shr      r9, 0x1d
21f75f xor      r9, rax
21f762 or       r9, 1
21f766 mov      rax, r9
21f769 mov      rcx, r9
21f76c shr      rax, 8
21f770 and      eax, 3
21f773 shr      rcx, 0x28
21f777 imul     r8, rax, 0x3e
21f77b mov      eax, 0x8421085
21f780 mul      ecx
21f782 mov      eax, ecx
21f784 sub      eax, edx
21f786 shr      eax, 1
21f788 add      eax, edx
21f78a shr      eax, 5
21f78d imul     eax, eax, 0x3e
21f790 sub      ecx, eax
21f792 mov      eax, ecx
21f794 add      r8, rax
21f797 mov      rax, qword ptr [r14 + 0x4b8]
21f79e movsxd   rcx, dword ptr [rax + r8*4]
21f7a2 movsxd   rax, dword ptr [r14 + 0x4c8]
21f7a9 xor      rcx, rax
21f7ac add      rcx, qword ptr [r14 + 0x4c0]
21f7b3 xor      rcx, r9
21f7b6 mov      rax, rcx
21f7b9 shr      rax, 0x21
21f7bd xor      rax, rcx
21f7c0 imul     rax, rdi
21f7c4 mov      rcx, rax
21f7c7 shr      rcx, 0x21
21f7cb xor      rcx, rax
21f7ce imul     rcx, rsi
21f7d2 mov      rax, rcx
21f7d5 shr      rax, 0x21
21f7d9 xor      rax, rcx
21f7dc xor      rax, r10
21f7df inc      qword ptr [r14 + 0x268]
21f7e6 mov      qword ptr [r14 + 0x260], rax
21f7ed inc      dword ptr [r14 + 0x200]
21f7f4 mov      eax, dword ptr [r14 + 0x200]
21f7fb cmp      eax, dword ptr [r14 + 0x1fc]
21f802 jb       0x14021f817
21f804 mov      rcx, r14
21f807 mov      dword ptr [r14 + 0x200], 0
21f812 call     0x1401ef7c0
21f817 mov      r8d, ebx
21f81a mov      edx, ebx
21f81c mov      rcx, r14
21f81f call     0x1401f0660
21f824 inc      qword ptr [r14 + 0x1b8]
21f82b mov      rcx, rbx
21f82e mov      r9, qword ptr [r14 + 0x1b0]
21f835 mov      rbp, r12
21f838 mov      r10, qword ptr [r14 + 0x1b8]
21f83f imul     r9, r15
21f843 add      r9, r12
21f846 lea      r12d, [rbx + 1]
21f84a mov      qword ptr [r14 + 0x1b0], r9
21f851 mov      rax, r9
21f854 shr      rax, 0x1b
21f858 movzx    edx, al
21f85b mov      byte ptr [r14 + 0x168], dl
21f862 mov      rdi, qword ptr [r14 + 0xe0]
21f869 mov      r11, qword ptr [r14 + 0xd8]
21f870 mov      rsi, qword ptr [r14 + 0xd0]
21f877 movzx    r15d, byte ptr [r14 + 0xe8]
21f87f imul     rdx, rdi
21f883 lea      rax, [r11 + r11*8]
21f887 xor      rdx, rax
21f88a xor      rdx, rsi
21f88d xor      rcx, rdx
21f890 test     r15b, r15b
21f893 lea      rax, [rbx + rdx]
21f897 cmove    rax, rcx
21f89b inc      r10
21f89e mov      qword ptr [r14 + 0x130], rax
21f8a5 mov      rcx, qword ptr [r14 + 0x1d0]
21f8ac mov      rax, qword ptr [r14 + 0x48]
21f8b0 mov      qword ptr [rsp + 0x60], r10
21f8b5 movzx    r8d, byte ptr [rcx + rbx]
21f8ba xor      r8b, byte ptr [rax + rbx]
21f8be movabs   rax, 0x9e3779b97f4a7c15
21f8c8 imul     r9, rax
21f8cc mov      qword ptr [r14 + 0x1b8], r10
21f8d3 add      r9, rbp
21f8d6 mov      rax, r9
21f8d9 shr      rax, 0x1b
21f8dd movzx    edx, al
21f8e0 lea      rax, [r11 + r11]
21f8e4 mov      byte ptr [r14 + 0x161], dl
21f8eb imul     rdx, rdi
21f8ef xor      rdx, rax
21f8f2 xor      rdx, rsi
21f8f5 mov      rcx, rdx
21f8f8 xor      rcx, r12
21f8fb test     r15b, r15b
21f8fe lea      rax, [rdx + r12]
21f902 cmove    rax, rcx
21f906 mov      qword ptr [r14 + 0xf8], rax
21f90d movsxd   rdx, dword ptr [r14 + 0x11e0]
21f914 mov      r10, qword ptr [r14 + 0x20]
21f918 mov      rcx, rdx
21f91b xor      rcx, qword ptr [r14 + 0x350]
21f922 xor      rcx, r10
21f925 xor      rcx, r12
21f928 xor      rcx, qword ptr [r14 + 0x348]
21f92f mov      rax, rcx
21f932 shr      rax, 0x21
21f936 xor      rax, rcx
21f939 movabs   rcx, 0xff51afd7ed558ccd
21f943 imul     rax, rcx
21f947 mov      rcx, rax
21f94a shr      rcx, 0x21
21f94e xor      rcx, rax
21f951 movabs   rax, 0xc4ceb9fe1a85ec53
21f95b imul     rcx, rax
21f95f movzx    eax, r8b
21f963 mov      rbx, rcx
21f966 xor      rax, 0xdd
21f96c shr      rbx, 0x21
21f970 xor      rbx, rcx
21f973 lea      rcx, [rip - 0x21f97a]
21f97a mov      qword ptr [r14 + 0x28], rbx
21f97e movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
21f986 xor      bpl, 0x63
21f98a inc      edx
21f98c mov      dword ptr [r14 + 0x11e0], edx
21f993 movabs   r8, 0xff51afd7ed558ccd
21f99d test     dl, 0x1f
21f9a0 jne      0x14021f9e6
21f9a2 movsxd   rax, edx
21f9a5 xor      rax, r10
21f9a8 xor      rax, qword ptr [r14 + 0x348]
21f9af mov      rcx, rax
21f9b2 shr      rcx, 0x21
21f9b6 xor      rcx, rax
21f9b9 movabs   rax, 0xc4ceb9fe1a85ec53
21f9c3 imul     rcx, r8
21f9c7 mov      rdx, rcx
21f9ca shr      rdx, 0x21
21f9ce xor      rdx, rcx
21f9d1 imul     rdx, rax
21f9d5 mov      rax, rdx
21f9d8 shr      rax, 0x21
21f9dc xor      rax, rdx
21f9df mov      qword ptr [r14 + 0x348], rax
21f9e6 movzx    edx, bpl
21f9ea xor      r10, rdx
21f9ed mov      byte ptr [r14 + 0x4ad], bpl
21f9f4 xor      r10, r12
21f9f7 movabs   r12, 0xc4ceb9fe1a85ec53
21fa01 mov      rax, r10
21fa04 shr      rax, 0x21
21fa08 xor      rax, r10
21fa0b movabs   r10, 0x9e3779b97f4a7c15
21fa15 imul     rax, r8
21fa19 imul     rdx, r10
21fa1d imul     r9, r10
21fa21 mov      rcx, rax
21fa24 shr      rcx, 0x21
21fa28 xor      rcx, rax
21fa2b imul     rcx, r12
21fa2f mov      rax, rcx
21fa32 shr      rax, 0x21
21fa36 xor      rax, rcx
21fa39 mov      ecx, dword ptr [r14 + 0x1178]
21fa40 mov      qword ptr [r14 + 0x20], rax
21fa44 movabs   rax, 0xd6e8feb86659fd93
21fa4e imul     rcx, rax
21fa52 xor      rcx, rdx
21fa55 xor      rcx, rbx
21fa58 movabs   rbx, 0x2545f4914f6cdd1d
21fa62 mov      rax, rcx
21fa65 add      r9, rbx
21fa68 shr      rax, 0x21
21fa6c xor      rax, rcx
21fa6f imul     rax, r8
21fa73 mov      rdx, rax
21fa76 shr      rdx, 0x21
21fa7a xor      rdx, rax
21fa7d mov      rax, qword ptr [rsp + 0x60]
21fa82 imul     rdx, r12
21fa86 shr      rdx, 0x21
21fa8a and      edx, 3
21fa8d inc      rax
21fa90 mov      qword ptr [r14 + 0x1b8], rax
21fa97 cmp      bpl, 0x3e
21fa9b jae      0x14021fb35
21faa1 inc      qword ptr [r14 + 0x11a0]
21faa8 lea      rax, [rip - 0x21faaf]
21faaf mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
21fab7 mov      qword ptr [r14 + 0x1b0], r9
21fabe shr      r9, 0x1b
21fac2 movzx    eax, r9b
21fac6 mov      byte ptr [r14 + 0x160], al
21facd imul     rax, rdi
21fad1 mov      ebx, edx
21fad3 xor      rax, rsi
21fad6 xor      rax, r11
21fad9 mov      rcx, rax
21fadc add      rax, r8
21fadf xor      rcx, r8
21fae2 movzx    r8d, bpl
21fae6 test     r15b, r15b
21fae9 cmove    rax, rcx
21faed mov      rcx, r14
21faf0 mov      qword ptr [r14 + 0xf0], rax
21faf7 call     0x1401f1f50
21fafc mov      r8, qword ptr [rsp + 0x70]
21fb01 lea      edx, [r13 - 1]
21fb05 mov      eax, eax
21fb07 imul     rcx, rbx, 0x3e
21fb0b add      rcx, rax
21fb0e mov      rax, qword ptr [r14 + 0x4b8]
21fb15 movsxd   r9, dword ptr [rax + rcx*4]
21fb19 mov      rcx, r14
21fb1c movsxd   rax, dword ptr [r14 + 0x4c8]
21fb23 xor      r9, rax
21fb26 add      r9, qword ptr [r14 + 0x4c0]
21fb2d call     r9
21fb30 jmp      0x14021fbfc
21fb35 inc      dword ptr [r14 + 0x11a8]
21fb3c mov      rax, r9
21fb3f shr      rax, 0x1b
21fb43 movzx    ecx, al
21fb46 lea      rax, [r11*4]
21fb4e mov      byte ptr [r14 + 0x163], cl
21fb55 imul     rcx, rdi
21fb59 imul     r9, r10
21fb5d xor      rcx, rax
21fb60 xor      rcx, rsi
21fb63 mov      qword ptr [r14 + 0x108], rcx
21fb6a mov      r8, qword ptr [r14 + 0x1b8]
21fb71 add      r9, rbx
21fb74 mov      rax, r9
21fb77 shr      rax, 0x1b
21fb7b movzx    edx, al
21fb7e mov      byte ptr [r14 + 0x16a], dl
21fb85 imul     rax, r11, 0xb
21fb89 imul     rdx, rdi
21fb8d xor      rdx, rax
21fb90 xor      rdx, rsi
21fb93 mov      rcx, rdx
21fb96 xor      rcx, 1
21fb9a test     r15b, r15b
21fb9d lea      rax, [rdx + 1]
21fba1 cmove    rax, rcx
21fba5 mov      qword ptr [r14 + 0x140], rax
21fbac lea      rax, [r8 + 2]
21fbb0 mov      qword ptr [r14 + 0x1b8], rax
21fbb7 imul     r9, r10
21fbbb add      r9, rbx
21fbbe mov      qword ptr [r14 + 0x1b0], r9
21fbc5 shr      r9, 0x1b
21fbc9 movzx    eax, r9b
21fbcd mov      byte ptr [r14 + 0x160], al
21fbd4 imul     rax, rdi
21fbd8 xor      rax, rsi
21fbdb xor      rax, r11
21fbde mov      rcx, rax
21fbe1 add      rax, 0xfe1ab
21fbe7 xor      rcx, 0xfe1ab
21fbee test     r15b, r15b
21fbf1 cmove    rax, rcx
21fbf5 mov      qword ptr [r14 + 0xf0], rax
21fbfc mov      r12, qword ptr [rsp + 0x28]
21fc01 mov      rsi, qword ptr [rsp + 0x68]
21fc06 mov      r15, qword ptr [rsp + 0x20]
21fc0b add      rsp, 0x30
21fc0f pop      r14
21fc11 pop      r13
21fc13 pop      rdi
21fc14 pop      rbp
21fc15 pop      rbx
21fc16 ret      
21fc17 mov      edx, 0x54485254
21fc1c mov      rcx, r14
21fc1f call     0x1401ed830
21fc24 int3     
21fc25 mov      edx, 0x43414e59
21fc2a mov      rcx, r14
21fc2d call     0x1401ed830
21fc32 int3     
