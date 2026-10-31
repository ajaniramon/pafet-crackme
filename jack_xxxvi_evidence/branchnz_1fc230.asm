1fc230 mov      qword ptr [rsp + 0x18], r8
1fc235 push     rbx
1fc236 push     rbp
1fc237 push     rsi
1fc238 push     rdi
1fc239 push     r13
1fc23b push     r14
1fc23d sub      rsp, 0x38
1fc241 movsxd   rax, dword ptr [rcx + 0x11e0]
1fc248 mov      r14, rcx
1fc24b mov      r13d, edx
1fc24e movabs   rcx, 0xc653a35ae77bc5b2
1fc258 imul     rax, rcx
1fc25c movabs   rcx, 0x640a299166a5418d
1fc266 mov      rbp, r8
1fc269 xor      rax, qword ptr [r14 + 0x28]
1fc26d mov      qword ptr [rsp + 0x70], rax
1fc272 mov      rax, qword ptr [rsp + 0x70]
1fc277 movsxd   rax, dword ptr [r14 + 0x11e0]
1fc27e imul     rax, rcx
1fc282 movabs   rcx, 0x82c2b7cfe5eecd98
1fc28c xor      rax, qword ptr [r14 + 0x28]
1fc290 mov      qword ptr [rsp + 0x70], rax
1fc295 mov      rax, qword ptr [rsp + 0x70]
1fc29a movsxd   rax, dword ptr [r14 + 0x11e0]
1fc2a1 imul     rax, rcx
1fc2a5 xor      rax, qword ptr [r14 + 0x28]
1fc2a9 mov      qword ptr [rsp + 0x70], rax
1fc2ae mov      rax, qword ptr [rsp + 0x70]
1fc2b3 mov      rax, qword ptr [r14 + 0x2f0]
1fc2ba shr      rax, 0xd
1fc2be mov      rcx, rax
1fc2c1 shr      rcx, 0x21
1fc2c5 xor      rcx, rax
1fc2c8 movabs   rax, 0xff51afd7ed558ccd
1fc2d2 imul     rcx, rax
1fc2d6 movabs   rax, 0xc4ceb9fe1a85ec53
1fc2e0 mov      rdx, rcx
1fc2e3 shr      rdx, 0x21
1fc2e7 xor      rdx, rcx
1fc2ea imul     rdx, rax
1fc2ee movabs   rax, 0xb2e93f83eff6dd9c
1fc2f8 mov      rcx, rdx
1fc2fb shr      rcx, 0x21
1fc2ff xor      rcx, rdx
1fc302 xor      rcx, rax
1fc305 mov      rax, qword ptr [r14 + 0x2f0]
1fc30c add      rcx, rax
1fc30f mov      qword ptr [r14 + 0x2f0], rcx
1fc316 mov      rcx, r14
1fc319 call     0x1401f1c70
1fc31e mov      rcx, r14
1fc321 mov      edi, eax
1fc323 call     0x1401ee940
1fc328 mov      rcx, r14
1fc32b mov      rbx, rax
1fc32e call     0x1401ee070
1fc333 movzx    r9d, byte ptr [r14 + 0x4ad]
1fc33b mov      r8d, eax
1fc33e mov      rdx, rbx
1fc341 mov      rcx, r14
1fc344 mov      esi, eax
1fc346 call     0x1401f0e60
1fc34b mov      ecx, edi
1fc34d mov      rbx, rax
1fc350 call     0x1401ed270
1fc355 xor      r8d, r8d
1fc358 mov      dword ptr [rsp + 0x28], esi
1fc35c lea      rcx, [rbx - 1]
1fc360 mov      dword ptr [rsp + 0x20], eax
1fc364 cmp      rcx, rbx
1fc367 mov      r9d, 1
1fc36d mov      rdx, rbx
1fc370 mov      rcx, r14
1fc373 setae    r8b
1fc377 call     0x1401f10a0
1fc37c mov      rdx, rax
1fc37f mov      rcx, r14
1fc382 call     0x1401f0db0
1fc387 mov      rax, qword ptr [r14 + 0x2f0]
1fc38e test     r13d, r13d
1fc391 jns      0x1401fced4
1fc397 cmp      qword ptr [r14 + 0x11b8], rbp
1fc39e jne      0x1401fcee2
1fc3a4 movsxd   rax, dword ptr [r14 + 0x11e0]
1fc3ab movabs   rcx, 0x904e2919f97bb934
1fc3b5 imul     rax, rcx
1fc3b9 mov      rcx, r14
1fc3bc xor      rax, qword ptr [r14 + 0x28]
1fc3c0 mov      qword ptr [rsp + 0x70], rax
1fc3c5 mov      rax, qword ptr [rsp + 0x70]
1fc3ca call     0x1401ee450
1fc3cf test     eax, eax
1fc3d1 jne      0x1401fcec7
1fc3d7 cmp      dword ptr [r14 + 0xad0], eax
1fc3de jne      0x1401fcec7
1fc3e4 mov      r8, qword ptr [r14 + 0xf0]
1fc3eb movzx    ecx, byte ptr [r14 + 0x160]
1fc3f3 mov      rax, r8
1fc3f6 mov      r10, qword ptr [r14 + 0xe0]
1fc3fd mov      rbx, qword ptr [r14 + 0xd0]
1fc404 mov      r11, qword ptr [r14 + 0xd8]
1fc40b movzx    edi, byte ptr [r14 + 0xe8]
1fc413 mov      r9, qword ptr [r14 + 0x1b0]
1fc41a mov      rsi, qword ptr [r14 + 0x1b8]
1fc421 imul     rcx, r10
1fc425 mov      qword ptr [rsp + 0x78], r12
1fc42a movabs   r12, 0x2545f4914f6cdd1d
1fc434 xor      rcx, rbx
1fc437 mov      qword ptr [rsp + 0x30], r15
1fc43c xor      rcx, r11
1fc43f movabs   r15, 0x9e3779b97f4a7c15
1fc449 xor      rax, rcx
1fc44c sub      r8, rcx
1fc44f test     dil, dil
1fc452 cmove    r8, rax
1fc456 inc      rsi
1fc459 imul     r9, r15
1fc45d mov      qword ptr [r14 + 0x1b8], rsi
1fc464 add      r9, r12
1fc467 mov      qword ptr [r14 + 0x1b0], r9
1fc46e mov      rax, r9
1fc471 shr      rax, 0x1b
1fc475 movzx    edx, al
1fc478 mov      byte ptr [r14 + 0x160], dl
1fc47f imul     rdx, r10
1fc483 xor      rdx, rbx
1fc486 xor      rdx, r11
1fc489 mov      rcx, rdx
1fc48c xor      rcx, r8
1fc48f test     dil, dil
1fc492 lea      rax, [rdx + r8]
1fc496 cmove    rax, rcx
1fc49a mov      qword ptr [r14 + 0xf0], rax
1fc4a1 cmp      r8d, 0x26dc07
1fc4a8 jne      0x1401fcebd
1fc4ae mov      eax, r13d
1fc4b1 btr      eax, 0x1f
1fc4b5 cmp      eax, 2
1fc4b8 jae      0x1401fc504
1fc4ba imul     r9, r15
1fc4be lea      rax, [rsi + 1]
1fc4c2 mov      qword ptr [r14 + 0x1b8], rax
1fc4c9 add      r9, r12
1fc4cc mov      qword ptr [r14 + 0x1b0], r9
1fc4d3 shr      r9, 0x1b
1fc4d7 movzx    eax, r9b
1fc4db mov      byte ptr [r14 + 0x160], al
1fc4e2 imul     rax, r10
1fc4e6 xor      rax, rbx
1fc4e9 xor      rax, r11
1fc4ec mov      rcx, rax
1fc4ef add      rax, 0x3abaef
1fc4f5 xor      rcx, 0x3abaef
1fc4fc test     dil, dil
1fc4ff jmp      0x1401fceb2
1fc504 mov      rcx, r14
1fc507 call     0x1401ee070
1fc50c movzx    ecx, byte ptr [r14 + 0x4ad]
1fc514 movabs   rbx, 0xff51afd7ed558ccd
1fc51e mov      r11, qword ptr [r14 + 0xe0]
1fc525 movabs   r8, 0xc4ceb9fe1a85ec53
1fc52f mov      r10, qword ptr [r14 + 0xd0]
1fc536 movzx    r9d, byte ptr [r14 + 0xe8]
1fc53e mov      eax, eax
1fc540 xor      rcx, rax
1fc543 xor      rcx, qword ptr [r14 + 0x11e8]
1fc54a mov      rax, rcx
1fc54d shr      rax, 0x21
1fc551 xor      rax, rcx
1fc554 imul     rax, rbx
1fc558 mov      rcx, rax
1fc55b shr      rcx, 0x21
1fc55f xor      rcx, rax
1fc562 imul     rcx, r8
1fc566 mov      rdx, rcx
1fc569 shr      rdx, 0x21
1fc56d xor      rdx, rcx
1fc570 mov      qword ptr [r14 + 0x11e8], rdx
1fc577 xor      rdx, qword ptr [r14 + 0x20]
1fc57b xor      rdx, qword ptr [r14 + 0x28]
1fc57f mov      rax, rdx
1fc582 shr      rax, 0x21
1fc586 xor      rax, rdx
1fc589 imul     rax, rbx
1fc58d mov      rcx, rax
1fc590 shr      rcx, 0x21
1fc594 xor      rcx, rax
1fc597 imul     rcx, r8
1fc59b mov      rax, rcx
1fc59e shr      rax, 0x21
1fc5a2 xor      rax, rcx
1fc5a5 mov      qword ptr [r14 + 0x20], rax
1fc5a9 mov      rdx, qword ptr [r14 + 0x138]
1fc5b0 movzx    ecx, byte ptr [r14 + 0x169]
1fc5b8 mov      rax, qword ptr [r14 + 0xd8]
1fc5bf imul     rcx, r11
1fc5c3 lea      rbx, [rax + rax*4]
1fc5c7 mov      rax, rdx
1fc5ca add      rbx, rbx
1fc5cd xor      rcx, rbx
1fc5d0 xor      rcx, r10
1fc5d3 xor      rax, rcx
1fc5d6 sub      rdx, rcx
1fc5d9 test     r9b, r9b
1fc5dc cmove    rdx, rax
1fc5e0 mov      rax, qword ptr [r14 + 0x1b0]
1fc5e7 inc      qword ptr [r14 + 0x1b8]
1fc5ee mov      rcx, rdx
1fc5f1 imul     rax, r15
1fc5f5 add      rax, r12
1fc5f8 mov      qword ptr [r14 + 0x1b0], rax
1fc5ff shr      rax, 0x1b
1fc603 movzx    r8d, al
1fc607 mov      byte ptr [r14 + 0x169], r8b
1fc60e imul     r8, r11
1fc612 xor      r8, rbx
1fc615 xor      r8, r10
1fc618 xor      rcx, r8
1fc61b test     r9b, r9b
1fc61e lea      rax, [rdx + r8]
1fc622 cmove    rax, rcx
1fc626 mov      rcx, r14
1fc629 mov      qword ptr [r14 + 0x138], rax
1fc630 call     0x1401f0910
1fc635 mov      rax, qword ptr [r14 + 0xd8]
1fc63c mov      r10, qword ptr [r14 + 0xe0]
1fc643 movzx    ecx, byte ptr [r14 + 0x168]
1fc64b mov      rbx, qword ptr [r14 + 0xd0]
1fc652 mov      rdx, qword ptr [r14 + 0x130]
1fc659 lea      r11, [rax + rax*8]
1fc65d movzx    r9d, byte ptr [r14 + 0xe8]
1fc665 mov      rax, rdx
1fc668 imul     rcx, r10
1fc66c xor      rcx, r11
1fc66f xor      rcx, rbx
1fc672 xor      rax, rcx
1fc675 sub      rdx, rcx
1fc678 test     r9b, r9b
1fc67b cmove    rdx, rax
1fc67f mov      rax, qword ptr [r14 + 0x1b0]
1fc686 inc      qword ptr [r14 + 0x1b8]
1fc68d mov      rcx, rdx
1fc690 imul     rax, r15
1fc694 add      rax, r12
1fc697 mov      qword ptr [r14 + 0x1b0], rax
1fc69e shr      rax, 0x1b
1fc6a2 movzx    r8d, al
1fc6a6 mov      byte ptr [r14 + 0x168], r8b
1fc6ad imul     r8, r10
1fc6b1 xor      r8, r11
1fc6b4 xor      r8, rbx
1fc6b7 xor      rcx, r8
1fc6ba test     r9b, r9b
1fc6bd lea      rax, [rdx + r8]
1fc6c1 cmove    rax, rcx
1fc6c5 mov      rcx, r14
1fc6c8 mov      qword ptr [r14 + 0x130], rax
1fc6cf call     0x1401f0910
1fc6d4 mov      rcx, r14
1fc6d7 call     0x1401ee070
1fc6dc cmp      eax, dword ptr [r14 + 0x1d8]
1fc6e3 jae      0x1401fc6ef
1fc6e5 mov      edx, eax
1fc6e7 mov      rcx, r14
1fc6ea call     0x1401f0910
1fc6ef mov      rsi, qword ptr [r14 + 0xe0]
1fc6f6 mov      rbp, qword ptr [r14 + 0xd0]
1fc6fd mov      r11, qword ptr [r14 + 0x130]
1fc704 movzx    edi, byte ptr [r14 + 0xe8]
1fc70c mov      rax, r11
1fc70f movzx    ecx, byte ptr [r14 + 0x168]
1fc717 mov      rbx, qword ptr [r14 + 0xd8]
1fc71e mov      r8, qword ptr [r14 + 0x1b8]
1fc725 mov      r10, qword ptr [r14 + 0x1b0]
1fc72c imul     rcx, rsi
1fc730 lea      r9, [rbx + rbx*8]
1fc734 xor      rcx, r9
1fc737 xor      rcx, rbp
1fc73a xor      rax, rcx
1fc73d sub      r11, rcx
1fc740 test     dil, dil
1fc743 cmove    r11, rax
1fc747 imul     r10, r15
1fc74b mov      rcx, r11
1fc74e add      r10, r12
1fc751 mov      rax, r10
1fc754 shr      rax, 0x1b
1fc758 movzx    edx, al
1fc75b mov      byte ptr [r14 + 0x168], dl
1fc762 imul     rdx, rsi
1fc766 xor      rdx, r9
1fc769 xor      rdx, rbp
1fc76c xor      rcx, rdx
1fc76f test     dil, dil
1fc772 lea      rax, [r11 + rdx]
1fc776 cmove    rax, rcx
1fc77a mov      rcx, r11
1fc77d mov      qword ptr [r14 + 0x130], rax
1fc784 lea      rax, [r8 + 2]
1fc788 mov      qword ptr [r14 + 0x1b8], rax
1fc78f mov      r8d, 0x78f4
1fc795 imul     r10, r15
1fc799 lea      rax, [rbx + rbx*4]
1fc79d add      rax, rax
1fc7a0 add      r10, r12
1fc7a3 mov      qword ptr [r14 + 0x1b0], r10
1fc7aa shr      r10, 0x1b
1fc7ae movzx    edx, r10b
1fc7b2 mov      byte ptr [r14 + 0x169], dl
1fc7b9 imul     rdx, rsi
1fc7bd xor      rdx, rax
1fc7c0 xor      rdx, rbp
1fc7c3 xor      rcx, rdx
1fc7c6 test     dil, dil
1fc7c9 lea      rax, [r11 + rdx]
1fc7cd cmove    rax, rcx
1fc7d1 mov      rcx, r14
1fc7d4 mov      qword ptr [r14 + 0x138], rax
1fc7db movzx    edx, byte ptr [r14 + 0x4ad]
1fc7e3 xor      rdx, qword ptr [r14 + 0x348]
1fc7ea call     0x1401f1520
1fc7ef mov      r8, qword ptr [r14 + 0x348]
1fc7f6 movabs   rdi, 0xff51afd7ed558ccd
1fc800 mov      rax, r8
1fc803 movabs   rsi, 0xc4ceb9fe1a85ec53
1fc80d xor      rax, qword ptr [r14 + 0x20]
1fc811 mov      rcx, rax
1fc814 shr      rcx, 0x21
1fc818 xor      rcx, rax
1fc81b imul     rcx, rdi
1fc81f mov      rax, rcx
1fc822 shr      rax, 0x21
1fc826 xor      rax, rcx
1fc829 imul     rax, rsi
1fc82d mov      rdx, rax
1fc830 shr      rdx, 0x21
1fc834 xor      edx, eax
1fc836 lea      eax, [rdx + 1]
1fc839 mov      ecx, eax
1fc83b xor      eax, edx
1fc83d imul     ecx, edx
1fc840 not      ecx
1fc842 and      ecx, eax
1fc844 test     cl, 1
1fc847 je       0x1401fc8b0
1fc849 and      r8b, 3
1fc84d cmp      r8b, 1
1fc851 jne      0x1401fc8b0
1fc853 mov      rax, qword ptr [r14 + 0x1b0]
1fc85a inc      qword ptr [r14 + 0x1b8]
1fc861 imul     rax, r15
1fc865 add      rax, r12
1fc868 mov      qword ptr [r14 + 0x1b0], rax
1fc86f shr      rax, 0x1b
1fc873 movzx    eax, al
1fc876 mov      byte ptr [r14 + 0x160], al
1fc87d imul     rax, qword ptr [r14 + 0xe0]
1fc885 xor      rax, qword ptr [r14 + 0xd8]
1fc88c xor      rax, qword ptr [r14 + 0xd0]
1fc893 mov      rcx, rax
1fc896 add      rax, 0x17ed28
1fc89c xor      rcx, 0x17ed28
1fc8a3 cmp      byte ptr [r14 + 0xe8], 0
1fc8ab jmp      0x1401fceb2
1fc8b0 mov      rcx, r14
1fc8b3 call     0x1401ee070
1fc8b8 mov      ebx, eax
1fc8ba cmp      eax, dword ptr [r14 + 0x1d8]
1fc8c1 jb       0x1401fc920
1fc8c3 mov      rax, qword ptr [r14 + 0x1b0]
1fc8ca inc      qword ptr [r14 + 0x1b8]
1fc8d1 imul     rax, r15
1fc8d5 add      rax, r12
1fc8d8 mov      qword ptr [r14 + 0x1b0], rax
1fc8df shr      rax, 0x1b
1fc8e3 movzx    eax, al
1fc8e6 mov      byte ptr [r14 + 0x160], al
1fc8ed imul     rax, qword ptr [r14 + 0xe0]
1fc8f5 xor      rax, qword ptr [r14 + 0xd8]
1fc8fc xor      rax, qword ptr [r14 + 0xd0]
1fc903 mov      rcx, rax
1fc906 add      rax, 0xfe1ab
1fc90c xor      rcx, 0xfe1ab
1fc913 cmp      byte ptr [r14 + 0xe8], 0
1fc91b jmp      0x1401fceb2
1fc920 mov      edx, ebx
1fc922 mov      rcx, r14
1fc925 call     0x1401f25b0
1fc92a movsxd   rcx, dword ptr [r14 + 0x11e0]
1fc931 movabs   r8, 0xd6e8feb86659fd93
1fc93b mov      rdx, qword ptr [r14 + 0x20]
1fc93f mov      rax, rbx
1fc942 imul     rax, r8
1fc946 imul     rcx, r15
1fc94a rol      rdx, 0x11
1fc94e xor      rax, rdx
1fc951 xor      rcx, qword ptr [r14 + 0x260]
1fc958 xor      rax, rcx
1fc95b mov      rcx, rax
1fc95e shr      rcx, 0x21
1fc962 xor      rcx, rax
1fc965 imul     rcx, rdi
1fc969 mov      rdx, rcx
1fc96c shr      rdx, 0x21
1fc970 xor      rdx, rcx
1fc973 imul     rdx, rsi
1fc977 mov      rax, rdx
1fc97a shr      rax, 0x21
1fc97e xor      rax, rdx
1fc981 mov      r10, rax
1fc984 shr      r10, 0x1d
1fc988 xor      r10, rax
1fc98b or       r10, 1
1fc98f mov      rax, r10
1fc992 mov      qword ptr [r14 + 0x260], r10
1fc999 and      eax, 0x3ff
1fc99e cmp      rax, 0x2c5
1fc9a4 jne      0x1401fc9b5
1fc9a6 mov      rcx, r14
1fc9a9 call     0x1402297e0
1fc9ae mov      r10, qword ptr [r14 + 0x260]
1fc9b5 movzx    eax, r10b
1fc9b9 and      al, 0x1f
1fc9bb cmp      al, 0x15
1fc9bd jne      0x1401fcaab
1fc9c3 movsxd   rcx, dword ptr [r14 + 0x11e0]
1fc9ca mov      rax, qword ptr [r14 + 0x20]
1fc9ce xor      rcx, 0x5a5a
1fc9d5 rol      rax, 0x11
1fc9d9 imul     rcx, r15
1fc9dd xor      rcx, r10
1fc9e0 xor      rcx, rax
1fc9e3 movabs   rax, 0x8f70feda99a6026d
1fc9ed xor      rcx, rax
1fc9f0 mov      rax, rcx
1fc9f3 shr      rax, 0x21
1fc9f7 xor      rax, rcx
1fc9fa imul     rax, rdi
1fc9fe mov      rcx, rax
1fca01 shr      rcx, 0x21
1fca05 xor      rcx, rax
1fca08 imul     rcx, rsi
1fca0c mov      rax, rcx
1fca0f shr      rax, 0x21
1fca13 xor      rax, rcx
1fca16 mov      r9, rax
1fca19 shr      r9, 0x1d
1fca1d xor      r9, rax
1fca20 or       r9, 1
1fca24 mov      rax, r9
1fca27 mov      rcx, r9
1fca2a shr      rax, 8
1fca2e and      eax, 3
1fca31 shr      rcx, 0x28
1fca35 imul     r8, rax, 0x3e
1fca39 mov      eax, 0x8421085
1fca3e mul      ecx
1fca40 mov      eax, ecx
1fca42 sub      eax, edx
1fca44 shr      eax, 1
1fca46 add      eax, edx
1fca48 shr      eax, 5
1fca4b imul     eax, eax, 0x3e
1fca4e sub      ecx, eax
1fca50 mov      eax, ecx
1fca52 add      r8, rax
1fca55 mov      rax, qword ptr [r14 + 0x4b8]
1fca5c movsxd   rcx, dword ptr [rax + r8*4]
1fca60 movsxd   rax, dword ptr [r14 + 0x4c8]
1fca67 xor      rcx, rax
1fca6a add      rcx, qword ptr [r14 + 0x4c0]
1fca71 xor      rcx, r9
1fca74 mov      rax, rcx
1fca77 shr      rax, 0x21
1fca7b xor      rax, rcx
1fca7e imul     rax, rdi
1fca82 mov      rcx, rax
1fca85 shr      rcx, 0x21
1fca89 xor      rcx, rax
1fca8c imul     rcx, rsi
1fca90 mov      rax, rcx
1fca93 shr      rax, 0x21
1fca97 xor      rax, rcx
1fca9a xor      rax, r10
1fca9d inc      qword ptr [r14 + 0x268]
1fcaa4 mov      qword ptr [r14 + 0x260], rax
1fcaab inc      dword ptr [r14 + 0x200]
1fcab2 mov      eax, dword ptr [r14 + 0x200]
1fcab9 cmp      eax, dword ptr [r14 + 0x1fc]
1fcac0 jb       0x1401fcad5
1fcac2 mov      rcx, r14
1fcac5 mov      dword ptr [r14 + 0x200], 0
1fcad0 call     0x1401ef7c0
1fcad5 mov      r8d, ebx
1fcad8 mov      edx, ebx
1fcada mov      rcx, r14
1fcadd call     0x1401f0660
1fcae2 inc      qword ptr [r14 + 0x1b8]
1fcae9 mov      rcx, rbx
1fcaec mov      r9, qword ptr [r14 + 0x1b0]
1fcaf3 mov      rbp, r12
1fcaf6 mov      r10, qword ptr [r14 + 0x1b8]
1fcafd imul     r9, r15
1fcb01 add      r9, r12
1fcb04 lea      r12d, [rbx + 1]
1fcb08 mov      qword ptr [r14 + 0x1b0], r9
1fcb0f mov      rax, r9
1fcb12 shr      rax, 0x1b
1fcb16 movzx    edx, al
1fcb19 mov      byte ptr [r14 + 0x168], dl
1fcb20 mov      rdi, qword ptr [r14 + 0xe0]
1fcb27 mov      r11, qword ptr [r14 + 0xd8]
1fcb2e mov      rsi, qword ptr [r14 + 0xd0]
1fcb35 movzx    r15d, byte ptr [r14 + 0xe8]
1fcb3d imul     rdx, rdi
1fcb41 lea      rax, [r11 + r11*8]
1fcb45 xor      rdx, rax
1fcb48 xor      rdx, rsi
1fcb4b xor      rcx, rdx
1fcb4e test     r15b, r15b
1fcb51 lea      rax, [rbx + rdx]
1fcb55 cmove    rax, rcx
1fcb59 inc      r10
1fcb5c mov      qword ptr [r14 + 0x130], rax
1fcb63 mov      rcx, qword ptr [r14 + 0x1d0]
1fcb6a mov      rax, qword ptr [r14 + 0x48]
1fcb6e mov      qword ptr [rsp + 0x70], r10
1fcb73 movzx    r8d, byte ptr [rcx + rbx]
1fcb78 xor      r8b, byte ptr [rax + rbx]
1fcb7c movabs   rax, 0x9e3779b97f4a7c15
1fcb86 imul     r9, rax
1fcb8a mov      qword ptr [r14 + 0x1b8], r10
1fcb91 movabs   rbx, 0xff51afd7ed558ccd
1fcb9b add      r9, rbp
1fcb9e mov      rax, r9
1fcba1 shr      rax, 0x1b
1fcba5 movzx    edx, al
1fcba8 lea      rax, [r11 + r11]
1fcbac mov      byte ptr [r14 + 0x161], dl
1fcbb3 imul     rdx, rdi
1fcbb7 xor      rdx, rax
1fcbba xor      rdx, rsi
1fcbbd mov      rcx, rdx
1fcbc0 xor      rcx, r12
1fcbc3 test     r15b, r15b
1fcbc6 lea      rax, [rdx + r12]
1fcbca cmove    rax, rcx
1fcbce mov      qword ptr [r14 + 0xf8], rax
1fcbd5 movsxd   rdx, dword ptr [r14 + 0x11e0]
1fcbdc mov      r10, qword ptr [r14 + 0x20]
1fcbe0 mov      rcx, rdx
1fcbe3 xor      rcx, qword ptr [r14 + 0x350]
1fcbea xor      rcx, r10
1fcbed xor      rcx, r12
1fcbf0 xor      rcx, qword ptr [r14 + 0x348]
1fcbf7 mov      rax, rcx
1fcbfa shr      rax, 0x21
1fcbfe xor      rax, rcx
1fcc01 imul     rax, rbx
1fcc05 mov      rcx, rax
1fcc08 shr      rcx, 0x21
1fcc0c xor      rcx, rax
1fcc0f movabs   rax, 0xc4ceb9fe1a85ec53
1fcc19 imul     rcx, rax
1fcc1d movzx    eax, r8b
1fcc21 mov      rbx, rcx
1fcc24 xor      rax, 0xdd
1fcc2a shr      rbx, 0x21
1fcc2e xor      rbx, rcx
1fcc31 lea      rcx, [rip - 0x1fcc38]
1fcc38 mov      qword ptr [r14 + 0x28], rbx
1fcc3c movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
1fcc44 xor      bpl, 0x63
1fcc48 inc      edx
1fcc4a mov      dword ptr [r14 + 0x11e0], edx
1fcc51 movabs   r8, 0xff51afd7ed558ccd
1fcc5b test     dl, 0x1f
1fcc5e jne      0x1401fcca4
1fcc60 movsxd   rax, edx
1fcc63 xor      rax, r10
1fcc66 xor      rax, qword ptr [r14 + 0x348]
1fcc6d mov      rcx, rax
1fcc70 shr      rcx, 0x21
1fcc74 xor      rcx, rax
1fcc77 movabs   rax, 0xc4ceb9fe1a85ec53
1fcc81 imul     rcx, r8
1fcc85 mov      rdx, rcx
1fcc88 shr      rdx, 0x21
1fcc8c xor      rdx, rcx
1fcc8f imul     rdx, rax
1fcc93 mov      rax, rdx
1fcc96 shr      rax, 0x21
1fcc9a xor      rax, rdx
1fcc9d mov      qword ptr [r14 + 0x348], rax
1fcca4 movzx    edx, bpl
1fcca8 xor      r10, rdx
1fccab mov      byte ptr [r14 + 0x4ad], bpl
1fccb2 xor      r10, r12
1fccb5 movabs   r12, 0xc4ceb9fe1a85ec53
1fccbf mov      rax, r10
1fccc2 shr      rax, 0x21
1fccc6 xor      rax, r10
1fccc9 movabs   r10, 0x9e3779b97f4a7c15
1fccd3 imul     rax, r8
1fccd7 imul     rdx, r10
1fccdb imul     r9, r10
1fccdf mov      rcx, rax
1fcce2 shr      rcx, 0x21
1fcce6 xor      rcx, rax
1fcce9 imul     rcx, r12
1fcced mov      rax, rcx
1fccf0 shr      rax, 0x21
1fccf4 xor      rax, rcx
1fccf7 mov      ecx, dword ptr [r14 + 0x1178]
1fccfe mov      qword ptr [r14 + 0x20], rax
1fcd02 movabs   rax, 0xd6e8feb86659fd93
1fcd0c imul     rcx, rax
1fcd10 xor      rcx, rdx
1fcd13 xor      rcx, rbx
1fcd16 movabs   rbx, 0x2545f4914f6cdd1d
1fcd20 mov      rax, rcx
1fcd23 add      r9, rbx
1fcd26 shr      rax, 0x21
1fcd2a xor      rax, rcx
1fcd2d imul     rax, r8
1fcd31 mov      rdx, rax
1fcd34 shr      rdx, 0x21
1fcd38 xor      rdx, rax
1fcd3b mov      rax, qword ptr [rsp + 0x70]
1fcd40 imul     rdx, r12
1fcd44 shr      rdx, 0x21
1fcd48 and      edx, 3
1fcd4b inc      rax
1fcd4e mov      qword ptr [r14 + 0x1b8], rax
1fcd55 cmp      bpl, 0x3e
1fcd59 jae      0x1401fcdf6
1fcd5f inc      qword ptr [r14 + 0x11a0]
1fcd66 lea      rax, [rip - 0x1fcd6d]
1fcd6d mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
1fcd75 mov      qword ptr [r14 + 0x1b0], r9
1fcd7c shr      r9, 0x1b
1fcd80 movzx    eax, r9b
1fcd84 mov      byte ptr [r14 + 0x160], al
1fcd8b imul     rax, rdi
1fcd8f mov      ebx, edx
1fcd91 xor      rax, rsi
1fcd94 xor      rax, r11
1fcd97 mov      rcx, rax
1fcd9a add      rax, r8
1fcd9d xor      rcx, r8
1fcda0 movzx    r8d, bpl
1fcda4 test     r15b, r15b
1fcda7 cmove    rax, rcx
1fcdab mov      rcx, r14
1fcdae mov      qword ptr [r14 + 0xf0], rax
1fcdb5 call     0x1401f1f50
1fcdba mov      r8, qword ptr [rsp + 0x80]
1fcdc2 lea      edx, [r13 - 1]
1fcdc6 mov      eax, eax
1fcdc8 imul     rcx, rbx, 0x3e
1fcdcc add      rcx, rax
1fcdcf mov      rax, qword ptr [r14 + 0x4b8]
1fcdd6 movsxd   r9, dword ptr [rax + rcx*4]
1fcdda mov      rcx, r14
1fcddd movsxd   rax, dword ptr [r14 + 0x4c8]
1fcde4 xor      r9, rax
1fcde7 add      r9, qword ptr [r14 + 0x4c0]
1fcdee call     r9
1fcdf1 jmp      0x1401fcebd
1fcdf6 inc      dword ptr [r14 + 0x11a8]
1fcdfd mov      rax, r9
1fce00 shr      rax, 0x1b
1fce04 movzx    ecx, al
1fce07 lea      rax, [r11*4]
1fce0f mov      byte ptr [r14 + 0x163], cl
1fce16 imul     rcx, rdi
1fce1a imul     r9, r10
1fce1e xor      rcx, rax
1fce21 xor      rcx, rsi
1fce24 mov      qword ptr [r14 + 0x108], rcx
1fce2b mov      r8, qword ptr [r14 + 0x1b8]
1fce32 add      r9, rbx
1fce35 mov      rax, r9
1fce38 shr      rax, 0x1b
1fce3c movzx    edx, al
1fce3f mov      byte ptr [r14 + 0x16a], dl
1fce46 imul     rax, r11, 0xb
1fce4a imul     rdx, rdi
1fce4e xor      rdx, rax
1fce51 xor      rdx, rsi
1fce54 mov      rcx, rdx
1fce57 xor      rcx, 1
1fce5b test     r15b, r15b
1fce5e lea      rax, [rdx + 1]
1fce62 cmove    rax, rcx
1fce66 mov      qword ptr [r14 + 0x140], rax
1fce6d lea      rax, [r8 + 2]
1fce71 mov      qword ptr [r14 + 0x1b8], rax
1fce78 imul     r9, r10
1fce7c add      r9, rbx
1fce7f mov      qword ptr [r14 + 0x1b0], r9
1fce86 shr      r9, 0x1b
1fce8a movzx    eax, r9b
1fce8e mov      byte ptr [r14 + 0x160], al
1fce95 imul     rax, rdi
1fce99 xor      rax, rsi
1fce9c xor      rax, r11
1fce9f mov      rcx, rax
1fcea2 add      rax, 0xfe1ab
1fcea8 xor      rcx, 0xfe1ab
1fceaf test     r15b, r15b
1fceb2 cmove    rax, rcx
1fceb6 mov      qword ptr [r14 + 0xf0], rax
1fcebd mov      r12, qword ptr [rsp + 0x78]
1fcec2 mov      r15, qword ptr [rsp + 0x30]
1fcec7 add      rsp, 0x38
1fcecb pop      r14
1fcecd pop      r13
1fcecf pop      rdi
1fced0 pop      rsi
1fced1 pop      rbp
1fced2 pop      rbx
1fced3 ret      
1fced4 mov      edx, 0x54485254
1fced9 mov      rcx, r14
1fcedc call     0x1401ed830
1fcee1 int3     
1fcee2 mov      edx, 0x43414e59
1fcee7 mov      rcx, r14
1fceea call     0x1401ed830
1fceef int3     
