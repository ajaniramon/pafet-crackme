1fcef0 mov      qword ptr [rsp + 0x10], rbx
1fcef5 mov      qword ptr [rsp + 0x18], r8
1fcefa push     rbp
1fcefb push     rsi
1fcefc push     rdi
1fcefd push     r12
1fceff push     r13
1fcf01 push     r14
1fcf03 push     r15
1fcf05 sub      rsp, 0x20
1fcf09 movsxd   rax, dword ptr [rcx + 0x11e0]
1fcf10 mov      r14, rcx
1fcf13 mov      r13d, edx
1fcf16 movabs   rcx, 0x974281eb19518d67
1fcf20 imul     rax, rcx
1fcf24 movabs   rcx, 0x351b0b20988f0958
1fcf2e movabs   rbp, 0xff51afd7ed558ccd
1fcf38 xor      rax, qword ptr [r14 + 0x28]
1fcf3c movabs   rsi, 0xc4ceb9fe1a85ec53
1fcf46 mov      qword ptr [rsp + 0x60], rax
1fcf4b mov      rdi, r8
1fcf4e mov      rax, qword ptr [rsp + 0x60]
1fcf53 movsxd   rax, dword ptr [r14 + 0x11e0]
1fcf5a imul     rax, rcx
1fcf5e movabs   rcx, 0xd3d3957e1bc4854d
1fcf68 xor      rax, qword ptr [r14 + 0x28]
1fcf6c mov      qword ptr [rsp + 0x60], rax
1fcf71 mov      rax, qword ptr [rsp + 0x60]
1fcf76 movsxd   rax, dword ptr [r14 + 0x11e0]
1fcf7d imul     rax, rcx
1fcf81 xor      rax, qword ptr [r14 + 0x28]
1fcf85 mov      qword ptr [rsp + 0x60], rax
1fcf8a mov      rax, qword ptr [rsp + 0x60]
1fcf8f mov      rax, qword ptr [r14 + 0x2f8]
1fcf96 shr      rax, 0xd
1fcf9a mov      rcx, rax
1fcf9d shr      rcx, 0x21
1fcfa1 xor      rcx, rax
1fcfa4 movabs   rax, 0xe3f81d3211dc9549
1fcfae imul     rcx, rbp
1fcfb2 mov      rdx, rcx
1fcfb5 shr      rdx, 0x21
1fcfb9 xor      rdx, rcx
1fcfbc imul     rdx, rsi
1fcfc0 mov      rcx, rdx
1fcfc3 shr      rcx, 0x21
1fcfc7 xor      rcx, rdx
1fcfca xor      rcx, rax
1fcfcd mov      rax, qword ptr [r14 + 0x2f8]
1fcfd4 add      rcx, rax
1fcfd7 mov      qword ptr [r14 + 0x2f8], rcx
1fcfde mov      rcx, r14
1fcfe1 call     0x1401f1d80
1fcfe6 mov      rcx, r14
1fcfe9 mov      ebx, eax
1fcfeb call     0x1401ee940
1fcff0 mov      rcx, qword ptr [r14 + 0x1b0]
1fcff7 mov      r9, rax
1fcffa inc      qword ptr [r14 + 0x1b8]
1fd001 movabs   r15, 0x9e3779b97f4a7c15
1fd00b mov      r8d, dword ptr [r14 + 0x1f4]
1fd012 movabs   r12, 0x2545f4914f6cdd1d
1fd01c movzx    r10d, bl
1fd020 add      r8d, r10d
1fd023 mov      eax, r10d
1fd026 imul     rcx, r15
1fd02a and      r8d, 1
1fd02e add      rcx, r12
1fd031 mov      qword ptr [r14 + 0x1b0], rcx
1fd038 shr      rcx, 0x1b
1fd03c movzx    edx, cl
1fd03f mov      byte ptr [r10 + r14 + 0xb65], dl
1fd047 imul     rax, qword ptr [r14 + 0x238]
1fd04f imul     rdx, qword ptr [r14 + 0x1a0]
1fd057 xor      rdx, rax
1fd05a xor      rdx, qword ptr [r14 + 0x230]
1fd061 mov      rax, rdx
1fd064 add      rdx, r9
1fd067 xor      rax, r9
1fd06a cmp      byte ptr [r14 + 0x1f8], 0
1fd072 cmove    rdx, rax
1fd076 mov      rax, qword ptr [r14 + 0x180]
1fd07d shl      r8d, 8
1fd081 add      r8d, r10d
1fd084 mov      qword ptr [rax + r8*8], rdx
1fd088 xor      r10, qword ptr [r14 + 0x11c0]
1fd08f xor      r10, r9
1fd092 mov      rax, r10
1fd095 shr      rax, 0x21
1fd099 xor      rax, r10
1fd09c imul     rax, rbp
1fd0a0 mov      rcx, rax
1fd0a3 shr      rcx, 0x21
1fd0a7 xor      rcx, rax
1fd0aa imul     rcx, rsi
1fd0ae mov      rax, rcx
1fd0b1 shr      rax, 0x21
1fd0b5 xor      rax, rcx
1fd0b8 mov      qword ptr [r14 + 0x11c0], rax
1fd0bf mov      rax, qword ptr [r14 + 0x2f8]
1fd0c6 test     r13d, r13d
1fd0c9 jns      0x1401fdc00
1fd0cf cmp      qword ptr [r14 + 0x11b8], rdi
1fd0d6 jne      0x1401fdc0e
1fd0dc movsxd   rax, dword ptr [r14 + 0x11e0]
1fd0e3 movabs   rcx, 0x1531d38e6344c4a4
1fd0ed imul     rax, rcx
1fd0f1 mov      rcx, r14
1fd0f4 xor      rax, qword ptr [r14 + 0x28]
1fd0f8 mov      qword ptr [rsp + 0x60], rax
1fd0fd mov      rax, qword ptr [rsp + 0x60]
1fd102 call     0x1401ee450
1fd107 test     eax, eax
1fd109 jne      0x1401fdbeb
1fd10f cmp      dword ptr [r14 + 0xad0], eax
1fd116 jne      0x1401fdbeb
1fd11c mov      r8, qword ptr [r14 + 0xf0]
1fd123 movzx    ecx, byte ptr [r14 + 0x160]
1fd12b mov      rax, r8
1fd12e mov      r10, qword ptr [r14 + 0xe0]
1fd135 mov      rbx, qword ptr [r14 + 0xd0]
1fd13c mov      r11, qword ptr [r14 + 0xd8]
1fd143 movzx    edi, byte ptr [r14 + 0xe8]
1fd14b mov      r9, qword ptr [r14 + 0x1b0]
1fd152 mov      rsi, qword ptr [r14 + 0x1b8]
1fd159 imul     rcx, r10
1fd15d xor      rcx, rbx
1fd160 xor      rcx, r11
1fd163 xor      rax, rcx
1fd166 sub      r8, rcx
1fd169 test     dil, dil
1fd16c cmove    r8, rax
1fd170 inc      rsi
1fd173 imul     r9, r15
1fd177 mov      qword ptr [r14 + 0x1b8], rsi
1fd17e add      r9, r12
1fd181 mov      qword ptr [r14 + 0x1b0], r9
1fd188 mov      rax, r9
1fd18b shr      rax, 0x1b
1fd18f movzx    edx, al
1fd192 mov      byte ptr [r14 + 0x160], dl
1fd199 imul     rdx, r10
1fd19d xor      rdx, rbx
1fd1a0 xor      rdx, r11
1fd1a3 mov      rcx, rdx
1fd1a6 xor      rcx, r8
1fd1a9 test     dil, dil
1fd1ac lea      rax, [rdx + r8]
1fd1b0 cmove    rax, rcx
1fd1b4 mov      qword ptr [r14 + 0xf0], rax
1fd1bb cmp      r8d, 0x26dc07
1fd1c2 jne      0x1401fdbeb
1fd1c8 mov      eax, r13d
1fd1cb btr      eax, 0x1f
1fd1cf cmp      eax, 2
1fd1d2 jae      0x1401fd21e
1fd1d4 imul     r9, r15
1fd1d8 lea      rax, [rsi + 1]
1fd1dc mov      qword ptr [r14 + 0x1b8], rax
1fd1e3 add      r9, r12
1fd1e6 mov      qword ptr [r14 + 0x1b0], r9
1fd1ed shr      r9, 0x1b
1fd1f1 movzx    eax, r9b
1fd1f5 mov      byte ptr [r14 + 0x160], al
1fd1fc imul     rax, r10
1fd200 xor      rax, rbx
1fd203 xor      rax, r11
1fd206 mov      rcx, rax
1fd209 add      rax, 0x3abaef
1fd20f xor      rcx, 0x3abaef
1fd216 test     dil, dil
1fd219 jmp      0x1401fdbe0
1fd21e mov      rcx, r14
1fd221 call     0x1401ee070
1fd226 movzx    ecx, byte ptr [r14 + 0x4ad]
1fd22e movabs   r8, 0xc4ceb9fe1a85ec53
1fd238 mov      r11, qword ptr [r14 + 0xe0]
1fd23f mov      r10, qword ptr [r14 + 0xd0]
1fd246 movzx    r9d, byte ptr [r14 + 0xe8]
1fd24e mov      eax, eax
1fd250 xor      rcx, rax
1fd253 xor      rcx, qword ptr [r14 + 0x11e8]
1fd25a mov      rax, rcx
1fd25d shr      rax, 0x21
1fd261 xor      rax, rcx
1fd264 imul     rax, rbp
1fd268 mov      rcx, rax
1fd26b shr      rcx, 0x21
1fd26f xor      rcx, rax
1fd272 mov      rax, qword ptr [r14 + 0x28]
1fd276 xor      rax, qword ptr [r14 + 0x20]
1fd27a imul     rcx, r8
1fd27e mov      rdx, rcx
1fd281 shr      rdx, 0x21
1fd285 xor      rdx, rcx
1fd288 xor      rax, rdx
1fd28b mov      qword ptr [r14 + 0x11e8], rdx
1fd292 mov      rcx, rax
1fd295 shr      rcx, 0x21
1fd299 xor      rcx, rax
1fd29c imul     rcx, rbp
1fd2a0 mov      rdx, rcx
1fd2a3 shr      rdx, 0x21
1fd2a7 xor      rdx, rcx
1fd2aa imul     rdx, r8
1fd2ae mov      rax, rdx
1fd2b1 shr      rax, 0x21
1fd2b5 xor      rax, rdx
1fd2b8 mov      qword ptr [r14 + 0x20], rax
1fd2bc mov      rdx, qword ptr [r14 + 0x138]
1fd2c3 movzx    ecx, byte ptr [r14 + 0x169]
1fd2cb mov      rax, qword ptr [r14 + 0xd8]
1fd2d2 imul     rcx, r11
1fd2d6 lea      rbx, [rax + rax*4]
1fd2da mov      rax, rdx
1fd2dd add      rbx, rbx
1fd2e0 xor      rcx, rbx
1fd2e3 xor      rcx, r10
1fd2e6 xor      rax, rcx
1fd2e9 sub      rdx, rcx
1fd2ec test     r9b, r9b
1fd2ef cmove    rdx, rax
1fd2f3 mov      rax, qword ptr [r14 + 0x1b0]
1fd2fa inc      qword ptr [r14 + 0x1b8]
1fd301 imul     rax, r15
1fd305 add      rax, r12
1fd308 mov      qword ptr [r14 + 0x1b0], rax
1fd30f shr      rax, 0x1b
1fd313 movzx    r8d, al
1fd317 mov      byte ptr [r14 + 0x169], r8b
1fd31e imul     r8, r11
1fd322 xor      r8, rbx
1fd325 xor      r8, r10
1fd328 mov      rcx, r8
1fd32b xor      rcx, rdx
1fd32e test     r9b, r9b
1fd331 lea      rax, [r8 + rdx]
1fd335 cmove    rax, rcx
1fd339 mov      rcx, r14
1fd33c mov      qword ptr [r14 + 0x138], rax
1fd343 call     0x1401f0910
1fd348 mov      rax, qword ptr [r14 + 0xd8]
1fd34f mov      r10, qword ptr [r14 + 0xe0]
1fd356 movzx    ecx, byte ptr [r14 + 0x168]
1fd35e mov      rbx, qword ptr [r14 + 0xd0]
1fd365 mov      rdx, qword ptr [r14 + 0x130]
1fd36c lea      r11, [rax + rax*8]
1fd370 movzx    r9d, byte ptr [r14 + 0xe8]
1fd378 mov      rax, rdx
1fd37b imul     rcx, r10
1fd37f xor      rcx, r11
1fd382 xor      rcx, rbx
1fd385 xor      rax, rcx
1fd388 sub      rdx, rcx
1fd38b test     r9b, r9b
1fd38e cmove    rdx, rax
1fd392 mov      rax, qword ptr [r14 + 0x1b0]
1fd399 inc      qword ptr [r14 + 0x1b8]
1fd3a0 mov      rcx, rdx
1fd3a3 imul     rax, r15
1fd3a7 add      rax, r12
1fd3aa mov      qword ptr [r14 + 0x1b0], rax
1fd3b1 shr      rax, 0x1b
1fd3b5 movzx    r8d, al
1fd3b9 mov      byte ptr [r14 + 0x168], r8b
1fd3c0 imul     r8, r10
1fd3c4 xor      r8, r11
1fd3c7 xor      r8, rbx
1fd3ca xor      rcx, r8
1fd3cd test     r9b, r9b
1fd3d0 lea      rax, [rdx + r8]
1fd3d4 cmove    rax, rcx
1fd3d8 mov      rcx, r14
1fd3db mov      qword ptr [r14 + 0x130], rax
1fd3e2 call     0x1401f0910
1fd3e7 mov      rcx, r14
1fd3ea call     0x1401ee070
1fd3ef cmp      eax, dword ptr [r14 + 0x1d8]
1fd3f6 jae      0x1401fd402
1fd3f8 mov      edx, eax
1fd3fa mov      rcx, r14
1fd3fd call     0x1401f0910
1fd402 mov      rsi, qword ptr [r14 + 0xe0]
1fd409 mov      rbp, qword ptr [r14 + 0xd0]
1fd410 mov      r11, qword ptr [r14 + 0x130]
1fd417 movzx    edi, byte ptr [r14 + 0xe8]
1fd41f mov      rax, r11
1fd422 movzx    ecx, byte ptr [r14 + 0x168]
1fd42a mov      rbx, qword ptr [r14 + 0xd8]
1fd431 mov      r8, qword ptr [r14 + 0x1b8]
1fd438 mov      r9, qword ptr [r14 + 0x1b0]
1fd43f imul     rcx, rsi
1fd443 lea      r10, [rbx + rbx*8]
1fd447 xor      rcx, r10
1fd44a xor      rcx, rbp
1fd44d xor      rax, rcx
1fd450 sub      r11, rcx
1fd453 test     dil, dil
1fd456 cmove    r11, rax
1fd45a imul     r9, r15
1fd45e mov      rcx, r11
1fd461 add      r9, r12
1fd464 mov      rax, r9
1fd467 shr      rax, 0x1b
1fd46b movzx    edx, al
1fd46e mov      byte ptr [r14 + 0x168], dl
1fd475 imul     rdx, rsi
1fd479 xor      rdx, rbp
1fd47c xor      rdx, r10
1fd47f xor      rcx, rdx
1fd482 test     dil, dil
1fd485 lea      rax, [r11 + rdx]
1fd489 cmove    rax, rcx
1fd48d mov      rcx, r11
1fd490 mov      qword ptr [r14 + 0x130], rax
1fd497 lea      rax, [r8 + 2]
1fd49b mov      qword ptr [r14 + 0x1b8], rax
1fd4a2 mov      r8d, 0x8263
1fd4a8 imul     r9, r15
1fd4ac lea      rax, [rbx + rbx*4]
1fd4b0 add      rax, rax
1fd4b3 add      r9, r12
1fd4b6 mov      qword ptr [r14 + 0x1b0], r9
1fd4bd shr      r9, 0x1b
1fd4c1 movzx    edx, r9b
1fd4c5 mov      byte ptr [r14 + 0x169], dl
1fd4cc imul     rdx, rsi
1fd4d0 xor      rdx, rax
1fd4d3 xor      rdx, rbp
1fd4d6 xor      rcx, rdx
1fd4d9 test     dil, dil
1fd4dc lea      rax, [r11 + rdx]
1fd4e0 cmove    rax, rcx
1fd4e4 mov      rcx, r14
1fd4e7 mov      qword ptr [r14 + 0x138], rax
1fd4ee movzx    edx, byte ptr [r14 + 0x4ad]
1fd4f6 xor      rdx, qword ptr [r14 + 0x348]
1fd4fd call     0x1401f1520
1fd502 mov      r8, qword ptr [r14 + 0x348]
1fd509 movabs   rdi, 0xff51afd7ed558ccd
1fd513 mov      rax, r8
1fd516 movabs   rbp, 0xc4ceb9fe1a85ec53
1fd520 xor      rax, qword ptr [r14 + 0x20]
1fd524 mov      rcx, rax
1fd527 shr      rcx, 0x21
1fd52b xor      rcx, rax
1fd52e imul     rcx, rdi
1fd532 mov      rax, rcx
1fd535 shr      rax, 0x21
1fd539 xor      rax, rcx
1fd53c imul     rax, rbp
1fd540 mov      rdx, rax
1fd543 shr      rdx, 0x21
1fd547 xor      edx, eax
1fd549 mov      ecx, edx
1fd54b lea      eax, [rdx + 1]
1fd54e imul     ecx, eax
1fd551 xor      edx, eax
1fd553 not      ecx
1fd555 and      ecx, edx
1fd557 test     cl, 1
1fd55a je       0x1401fd5c3
1fd55c and      r8b, 3
1fd560 cmp      r8b, 1
1fd564 jne      0x1401fd5c3
1fd566 mov      rax, qword ptr [r14 + 0x1b0]
1fd56d inc      qword ptr [r14 + 0x1b8]
1fd574 imul     rax, r15
1fd578 add      rax, r12
1fd57b mov      qword ptr [r14 + 0x1b0], rax
1fd582 shr      rax, 0x1b
1fd586 movzx    eax, al
1fd589 mov      byte ptr [r14 + 0x160], al
1fd590 imul     rax, qword ptr [r14 + 0xe0]
1fd598 xor      rax, qword ptr [r14 + 0xd8]
1fd59f xor      rax, qword ptr [r14 + 0xd0]
1fd5a6 mov      rcx, rax
1fd5a9 add      rax, 0x17ed28
1fd5af xor      rcx, 0x17ed28
1fd5b6 cmp      byte ptr [r14 + 0xe8], 0
1fd5be jmp      0x1401fdbe0
1fd5c3 mov      rcx, r14
1fd5c6 call     0x1401ee070
1fd5cb mov      ebx, eax
1fd5cd cmp      eax, dword ptr [r14 + 0x1d8]
1fd5d4 jb       0x1401fd633
1fd5d6 mov      rax, qword ptr [r14 + 0x1b0]
1fd5dd inc      qword ptr [r14 + 0x1b8]
1fd5e4 imul     rax, r15
1fd5e8 add      rax, r12
1fd5eb mov      qword ptr [r14 + 0x1b0], rax
1fd5f2 shr      rax, 0x1b
1fd5f6 movzx    eax, al
1fd5f9 mov      byte ptr [r14 + 0x160], al
1fd600 imul     rax, qword ptr [r14 + 0xe0]
1fd608 xor      rax, qword ptr [r14 + 0xd8]
1fd60f xor      rax, qword ptr [r14 + 0xd0]
1fd616 mov      rcx, rax
1fd619 add      rax, 0xfe1ab
1fd61f xor      rcx, 0xfe1ab
1fd626 cmp      byte ptr [r14 + 0xe8], 0
1fd62e jmp      0x1401fdbe0
1fd633 mov      edx, ebx
1fd635 mov      rcx, r14
1fd638 call     0x1401f25b0
1fd63d movsxd   rcx, dword ptr [r14 + 0x11e0]
1fd644 movabs   r8, 0xd6e8feb86659fd93
1fd64e mov      rdx, qword ptr [r14 + 0x20]
1fd652 mov      rax, rbx
1fd655 imul     rax, r8
1fd659 imul     rcx, r15
1fd65d rol      rdx, 0x11
1fd661 xor      rax, rdx
1fd664 xor      rcx, qword ptr [r14 + 0x260]
1fd66b xor      rax, rcx
1fd66e mov      rcx, rax
1fd671 shr      rcx, 0x21
1fd675 xor      rcx, rax
1fd678 imul     rcx, rdi
1fd67c mov      rdx, rcx
1fd67f shr      rdx, 0x21
1fd683 xor      rdx, rcx
1fd686 imul     rdx, rbp
1fd68a mov      rax, rdx
1fd68d shr      rax, 0x21
1fd691 xor      rax, rdx
1fd694 mov      r10, rax
1fd697 shr      r10, 0x1d
1fd69b xor      r10, rax
1fd69e or       r10, 1
1fd6a2 mov      rax, r10
1fd6a5 mov      qword ptr [r14 + 0x260], r10
1fd6ac and      eax, 0x3ff
1fd6b1 cmp      rax, 0x2c5
1fd6b7 jne      0x1401fd6c8
1fd6b9 mov      rcx, r14
1fd6bc call     0x1402297e0
1fd6c1 mov      r10, qword ptr [r14 + 0x260]
1fd6c8 movzx    eax, r10b
1fd6cc and      al, 0x1f
1fd6ce cmp      al, 0x15
1fd6d0 jne      0x1401fd7be
1fd6d6 movsxd   rcx, dword ptr [r14 + 0x11e0]
1fd6dd mov      rax, qword ptr [r14 + 0x20]
1fd6e1 xor      rcx, 0x5a5a
1fd6e8 rol      rax, 0x11
1fd6ec imul     rcx, r15
1fd6f0 xor      rcx, r10
1fd6f3 xor      rcx, rax
1fd6f6 movabs   rax, 0x8f70feda99a6026d
1fd700 xor      rcx, rax
1fd703 mov      rax, rcx
1fd706 shr      rax, 0x21
1fd70a xor      rax, rcx
1fd70d imul     rax, rdi
1fd711 mov      rcx, rax
1fd714 shr      rcx, 0x21
1fd718 xor      rcx, rax
1fd71b imul     rcx, rbp
1fd71f mov      rax, rcx
1fd722 shr      rax, 0x21
1fd726 xor      rax, rcx
1fd729 mov      r9, rax
1fd72c shr      r9, 0x1d
1fd730 xor      r9, rax
1fd733 or       r9, 1
1fd737 mov      rax, r9
1fd73a mov      rcx, r9
1fd73d shr      rax, 8
1fd741 and      eax, 3
1fd744 shr      rcx, 0x28
1fd748 imul     r8, rax, 0x3e
1fd74c mov      eax, 0x8421085
1fd751 mul      ecx
1fd753 mov      eax, ecx
1fd755 sub      eax, edx
1fd757 shr      eax, 1
1fd759 add      eax, edx
1fd75b shr      eax, 5
1fd75e imul     eax, eax, 0x3e
1fd761 sub      ecx, eax
1fd763 mov      eax, ecx
1fd765 add      r8, rax
1fd768 mov      rax, qword ptr [r14 + 0x4b8]
1fd76f movsxd   rcx, dword ptr [rax + r8*4]
1fd773 movsxd   rax, dword ptr [r14 + 0x4c8]
1fd77a xor      rcx, rax
1fd77d add      rcx, qword ptr [r14 + 0x4c0]
1fd784 xor      rcx, r9
1fd787 mov      rax, rcx
1fd78a shr      rax, 0x21
1fd78e xor      rax, rcx
1fd791 imul     rax, rdi
1fd795 mov      rcx, rax
1fd798 shr      rcx, 0x21
1fd79c xor      rcx, rax
1fd79f imul     rcx, rbp
1fd7a3 mov      rax, rcx
1fd7a6 shr      rax, 0x21
1fd7aa xor      rax, r10
1fd7ad xor      rax, rcx
1fd7b0 inc      qword ptr [r14 + 0x268]
1fd7b7 mov      qword ptr [r14 + 0x260], rax
1fd7be inc      dword ptr [r14 + 0x200]
1fd7c5 mov      eax, dword ptr [r14 + 0x200]
1fd7cc cmp      eax, dword ptr [r14 + 0x1fc]
1fd7d3 jb       0x1401fd7e8
1fd7d5 mov      rcx, r14
1fd7d8 mov      dword ptr [r14 + 0x200], 0
1fd7e3 call     0x1401ef7c0
1fd7e8 mov      r8d, ebx
1fd7eb mov      edx, ebx
1fd7ed mov      rcx, r14
1fd7f0 call     0x1401f0660
1fd7f5 inc      qword ptr [r14 + 0x1b8]
1fd7fc mov      rcx, rbx
1fd7ff mov      r9, qword ptr [r14 + 0x1b0]
1fd806 imul     r9, r15
1fd80a mov      r15, qword ptr [r14 + 0x1b8]
1fd811 add      r9, r12
1fd814 lea      r12d, [rbx + 1]
1fd818 mov      qword ptr [r14 + 0x1b0], r9
1fd81f mov      rax, r9
1fd822 shr      rax, 0x1b
1fd826 movzx    edx, al
1fd829 mov      byte ptr [r14 + 0x168], dl
1fd830 mov      r11, qword ptr [r14 + 0xe0]
1fd837 mov      r10, qword ptr [r14 + 0xd8]
1fd83e mov      rdi, qword ptr [r14 + 0xd0]
1fd845 movzx    ebp, byte ptr [r14 + 0xe8]
1fd84d imul     rdx, r11
1fd851 lea      rax, [r10 + r10*8]
1fd855 xor      rdx, rax
1fd858 xor      rdx, rdi
1fd85b xor      rcx, rdx
1fd85e test     bpl, bpl
1fd861 lea      rax, [rbx + rdx]
1fd865 cmove    rax, rcx
1fd869 inc      r15
1fd86c mov      qword ptr [r14 + 0x130], rax
1fd873 mov      rcx, qword ptr [r14 + 0x1d0]
1fd87a mov      rax, qword ptr [r14 + 0x48]
1fd87e mov      qword ptr [rsp + 0x60], r15
1fd883 movzx    r8d, byte ptr [rcx + rbx]
1fd888 xor      r8b, byte ptr [rax + rbx]
1fd88c movabs   rax, 0x9e3779b97f4a7c15
1fd896 imul     r9, rax
1fd89a mov      qword ptr [r14 + 0x1b8], r15
1fd8a1 movabs   rax, 0x2545f4914f6cdd1d
1fd8ab add      r9, rax
1fd8ae mov      rax, r9
1fd8b1 shr      rax, 0x1b
1fd8b5 movzx    edx, al
1fd8b8 lea      rax, [r10 + r10]
1fd8bc mov      byte ptr [r14 + 0x161], dl
1fd8c3 imul     rdx, r11
1fd8c7 xor      rdx, rax
1fd8ca xor      rdx, rdi
1fd8cd mov      rcx, rdx
1fd8d0 xor      rcx, r12
1fd8d3 test     bpl, bpl
1fd8d6 lea      rax, [rdx + r12]
1fd8da cmove    rax, rcx
1fd8de mov      qword ptr [r14 + 0xf8], rax
1fd8e5 movsxd   rdx, dword ptr [r14 + 0x11e0]
1fd8ec mov      rbx, qword ptr [r14 + 0x20]
1fd8f0 mov      rcx, rdx
1fd8f3 xor      rcx, qword ptr [r14 + 0x350]
1fd8fa xor      rcx, r12
1fd8fd xor      rcx, qword ptr [r14 + 0x348]
1fd904 xor      rcx, rbx
1fd907 mov      rax, rcx
1fd90a shr      rax, 0x21
1fd90e xor      rax, rcx
1fd911 movabs   rcx, 0xff51afd7ed558ccd
1fd91b imul     rax, rcx
1fd91f mov      rcx, rax
1fd922 shr      rcx, 0x21
1fd926 xor      rcx, rax
1fd929 movabs   rax, 0xc4ceb9fe1a85ec53
1fd933 imul     rcx, rax
1fd937 movzx    eax, r8b
1fd93b mov      r15, rcx
1fd93e xor      rax, 0xdd
1fd944 shr      r15, 0x21
1fd948 xor      r15, rcx
1fd94b lea      rcx, [rip - 0x1fd952]
1fd952 mov      qword ptr [r14 + 0x28], r15
1fd956 movzx    esi, byte ptr [rax + rcx + 0x3ecf00]
1fd95e xor      sil, 0x63
1fd962 inc      edx
1fd964 mov      dword ptr [r14 + 0x11e0], edx
1fd96b test     dl, 0x1f
1fd96e jne      0x1401fd9be
1fd970 movsxd   rax, edx
1fd973 xor      rax, qword ptr [r14 + 0x348]
1fd97a xor      rax, rbx
1fd97d mov      rcx, rax
1fd980 shr      rcx, 0x21
1fd984 xor      rcx, rax
1fd987 movabs   rax, 0xff51afd7ed558ccd
1fd991 imul     rcx, rax
1fd995 movabs   rax, 0xc4ceb9fe1a85ec53
1fd99f mov      rdx, rcx
1fd9a2 shr      rdx, 0x21
1fd9a6 xor      rdx, rcx
1fd9a9 imul     rdx, rax
1fd9ad mov      rax, rdx
1fd9b0 shr      rax, 0x21
1fd9b4 xor      rax, rdx
1fd9b7 mov      qword ptr [r14 + 0x348], rax
1fd9be movzx    r8d, sil
1fd9c2 mov      eax, r8d
1fd9c5 mov      byte ptr [r14 + 0x4ad], sil
1fd9cc xor      rax, r12
1fd9cf movabs   r12, 0xff51afd7ed558ccd
1fd9d9 xor      rax, rbx
1fd9dc movabs   rbx, 0x9e3779b97f4a7c15
1fd9e6 mov      rcx, rax
1fd9e9 shr      rcx, 0x21
1fd9ed xor      rcx, rax
1fd9f0 movabs   rax, 0xc4ceb9fe1a85ec53
1fd9fa imul     rcx, r12
1fd9fe imul     r8, rbx
1fda02 imul     r9, rbx
1fda06 mov      rdx, rcx
1fda09 shr      rdx, 0x21
1fda0d xor      rdx, rcx
1fda10 mov      ecx, dword ptr [r14 + 0x1178]
1fda17 imul     rdx, rax
1fda1b mov      rax, rdx
1fda1e shr      rax, 0x21
1fda22 xor      rax, rdx
1fda25 mov      qword ptr [r14 + 0x20], rax
1fda29 movabs   rax, 0xd6e8feb86659fd93
1fda33 imul     rcx, rax
1fda37 xor      rcx, r8
1fda3a xor      rcx, r15
1fda3d movabs   r15, 0x2545f4914f6cdd1d
1fda47 mov      rax, rcx
1fda4a add      r9, r15
1fda4d shr      rax, 0x21
1fda51 xor      rax, rcx
1fda54 imul     rax, r12
1fda58 mov      rdx, rax
1fda5b shr      rdx, 0x21
1fda5f xor      rdx, rax
1fda62 movabs   rax, 0xc4ceb9fe1a85ec53
1fda6c imul     rdx, rax
1fda70 mov      rax, qword ptr [rsp + 0x60]
1fda75 shr      rdx, 0x21
1fda79 and      edx, 3
1fda7c inc      rax
1fda7f mov      qword ptr [r14 + 0x1b8], rax
1fda86 cmp      sil, 0x3e
1fda8a jae      0x1401fdb24
1fda90 inc      qword ptr [r14 + 0x11a0]
1fda97 lea      rax, [rip - 0x1fda9e]
1fda9e mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
1fdaa6 mov      qword ptr [r14 + 0x1b0], r9
1fdaad shr      r9, 0x1b
1fdab1 movzx    eax, r9b
1fdab5 mov      byte ptr [r14 + 0x160], al
1fdabc imul     rax, r11
1fdac0 mov      ebx, edx
1fdac2 xor      rax, rdi
1fdac5 xor      rax, r10
1fdac8 mov      rcx, rax
1fdacb add      rax, r8
1fdace xor      rcx, r8
1fdad1 movzx    r8d, sil
1fdad5 test     bpl, bpl
1fdad8 cmove    rax, rcx
1fdadc mov      rcx, r14
1fdadf mov      qword ptr [r14 + 0xf0], rax
1fdae6 call     0x1401f1f50
1fdaeb mov      r8, qword ptr [rsp + 0x70]
1fdaf0 lea      edx, [r13 - 1]
1fdaf4 mov      eax, eax
1fdaf6 imul     rcx, rbx, 0x3e
1fdafa add      rcx, rax
1fdafd mov      rax, qword ptr [r14 + 0x4b8]
1fdb04 movsxd   r9, dword ptr [rax + rcx*4]
1fdb08 mov      rcx, r14
1fdb0b movsxd   rax, dword ptr [r14 + 0x4c8]
1fdb12 xor      r9, rax
1fdb15 add      r9, qword ptr [r14 + 0x4c0]
1fdb1c call     r9
1fdb1f jmp      0x1401fdbeb
1fdb24 inc      dword ptr [r14 + 0x11a8]
1fdb2b mov      rax, r9
1fdb2e shr      rax, 0x1b
1fdb32 movzx    ecx, al
1fdb35 lea      rax, [r10*4]
1fdb3d mov      byte ptr [r14 + 0x163], cl
1fdb44 imul     rcx, r11
1fdb48 imul     r9, rbx
1fdb4c xor      rcx, rax
1fdb4f xor      rcx, rdi
1fdb52 mov      qword ptr [r14 + 0x108], rcx
1fdb59 mov      r8, qword ptr [r14 + 0x1b8]
1fdb60 add      r9, r15
1fdb63 mov      rax, r9
1fdb66 shr      rax, 0x1b
1fdb6a movzx    edx, al
1fdb6d mov      byte ptr [r14 + 0x16a], dl
1fdb74 imul     rax, r10, 0xb
1fdb78 imul     rdx, r11
1fdb7c xor      rdx, rax
1fdb7f xor      rdx, rdi
1fdb82 mov      rcx, rdx
1fdb85 xor      rcx, 1
1fdb89 test     bpl, bpl
1fdb8c lea      rax, [rdx + 1]
1fdb90 cmove    rax, rcx
1fdb94 mov      qword ptr [r14 + 0x140], rax
1fdb9b lea      rax, [r8 + 2]
1fdb9f mov      qword ptr [r14 + 0x1b8], rax
1fdba6 imul     r9, rbx
1fdbaa add      r9, r15
1fdbad mov      qword ptr [r14 + 0x1b0], r9
1fdbb4 shr      r9, 0x1b
1fdbb8 movzx    eax, r9b
1fdbbc mov      byte ptr [r14 + 0x160], al
1fdbc3 imul     rax, r11
1fdbc7 xor      rax, rdi
1fdbca xor      rax, r10
1fdbcd mov      rcx, rax
1fdbd0 add      rax, 0xfe1ab
1fdbd6 xor      rcx, 0xfe1ab
1fdbdd test     bpl, bpl
1fdbe0 cmove    rax, rcx
1fdbe4 mov      qword ptr [r14 + 0xf0], rax
1fdbeb mov      rbx, qword ptr [rsp + 0x68]
1fdbf0 add      rsp, 0x20
1fdbf4 pop      r15
1fdbf6 pop      r14
1fdbf8 pop      r13
1fdbfa pop      r12
1fdbfc pop      rdi
1fdbfd pop      rsi
1fdbfe pop      rbp
1fdbff ret      
1fdc00 mov      edx, 0x54485254
1fdc05 mov      rcx, r14
1fdc08 call     0x1401ed830
1fdc0d int3     
1fdc0e mov      edx, 0x43414e59
1fdc13 mov      rcx, r14
1fdc16 call     0x1401ed830
1fdc1b int3     
