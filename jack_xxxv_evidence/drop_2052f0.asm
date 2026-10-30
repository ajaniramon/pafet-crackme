2052f0 push     r12
2052f2 push     r13
2052f4 push     r14
2052f6 sub      rsp, 0x40
2052fa movsxd   rax, dword ptr [rcx + 0x11e0]
205301 mov      r14, rcx
205304 mov      r13d, edx
205307 movabs   rcx, 0x4328aeb5b475ce75
205311 imul     rax, rcx
205315 movabs   rcx, 0xe171247e35ab4a4a
20531f mov      r12, r8
205322 xor      rax, qword ptr [r14 + 0x28]
205326 mov      qword ptr [rsp + 0x60], rax
20532b mov      rax, qword ptr [rsp + 0x60]
205330 movsxd   rax, dword ptr [r14 + 0x11e0]
205337 imul     rax, rcx
20533b movabs   rcx, 0x7b9ba20b6e0c65f
205345 xor      rax, qword ptr [r14 + 0x28]
205349 mov      qword ptr [rsp + 0x60], rax
20534e mov      rax, qword ptr [rsp + 0x60]
205353 movsxd   rax, dword ptr [r14 + 0x11e0]
20535a imul     rax, rcx
20535e movabs   rcx, 0x6a344758c2d9ad9c
205368 xor      rax, qword ptr [r14 + 0x28]
20536c mov      qword ptr [rsp + 0x60], rax
205371 mov      rax, qword ptr [rsp + 0x60]
205376 mov      rax, qword ptr [r14 + 0x2f0]
20537d sub      rax, rcx
205380 mov      rcx, rax
205383 shr      rcx, 0x21
205387 xor      rcx, rax
20538a movabs   rax, 0xff51afd7ed558ccd
205394 imul     rcx, rax
205398 movabs   rax, 0xc4ceb9fe1a85ec53
2053a2 mov      rdx, rcx
2053a5 shr      rdx, 0x21
2053a9 xor      rdx, rcx
2053ac mov      rcx, r14
2053af imul     rdx, rax
2053b3 mov      rax, rdx
2053b6 shr      rax, 0x21
2053ba xor      rdx, rax
2053bd mov      rax, qword ptr [r14 + 0x2f0]
2053c4 or       rdx, 1
2053c8 xor      rdx, rax
2053cb mov      qword ptr [r14 + 0x2f0], rdx
2053d2 call     0x1401ee940
2053d7 mov      rax, qword ptr [r14 + 0x2f0]
2053de test     r13d, r13d
2053e1 jns      0x140205f82
2053e7 cmp      qword ptr [r14 + 0x11b8], r12
2053ee jne      0x140205f90
2053f4 movsxd   rax, dword ptr [r14 + 0x11e0]
2053fb movabs   rcx, 0x14113a71cf9cd72d
205405 imul     rax, rcx
205409 mov      rcx, r14
20540c xor      rax, qword ptr [r14 + 0x28]
205410 mov      qword ptr [rsp + 0x60], rax
205415 mov      rax, qword ptr [rsp + 0x60]
20541a call     0x1401ee450
20541f test     eax, eax
205421 jne      0x140205f77
205427 cmp      dword ptr [r14 + 0xad0], eax
20542e jne      0x140205f77
205434 mov      r8, qword ptr [r14 + 0xf0]
20543b movzx    ecx, byte ptr [r14 + 0x160]
205443 mov      rax, r8
205446 mov      r10, qword ptr [r14 + 0xe0]
20544d mov      r11, qword ptr [r14 + 0xd8]
205454 mov      r9, qword ptr [r14 + 0x1b0]
20545b imul     rcx, r10
20545f mov      qword ptr [rsp + 0x68], rbx
205464 mov      rbx, qword ptr [r14 + 0xd0]
20546b xor      rcx, rbx
20546e mov      qword ptr [rsp + 0x38], rbp
205473 xor      rcx, r11
205476 mov      qword ptr [rsp + 0x30], rsi
20547b mov      rsi, qword ptr [r14 + 0x1b8]
205482 xor      rax, rcx
205485 sub      r8, rcx
205488 mov      qword ptr [rsp + 0x28], rdi
20548d movzx    edi, byte ptr [r14 + 0xe8]
205495 movabs   rbp, 0x2545f4914f6cdd1d
20549f test     dil, dil
2054a2 mov      qword ptr [rsp + 0x20], r15
2054a7 movabs   r15, 0x9e3779b97f4a7c15
2054b1 cmove    r8, rax
2054b5 inc      rsi
2054b8 imul     r9, r15
2054bc mov      qword ptr [r14 + 0x1b8], rsi
2054c3 add      r9, rbp
2054c6 mov      qword ptr [r14 + 0x1b0], r9
2054cd mov      rax, r9
2054d0 shr      rax, 0x1b
2054d4 movzx    edx, al
2054d7 mov      byte ptr [r14 + 0x160], dl
2054de imul     rdx, r10
2054e2 xor      rdx, rbx
2054e5 xor      rdx, r11
2054e8 mov      rcx, rdx
2054eb xor      rcx, r8
2054ee test     dil, dil
2054f1 lea      rax, [rdx + r8]
2054f5 cmove    rax, rcx
2054f9 mov      qword ptr [r14 + 0xf0], rax
205500 cmp      r8d, 0x338040
205507 jne      0x140205f5e
20550d mov      eax, r13d
205510 btr      eax, 0x1f
205514 cmp      eax, 2
205517 jae      0x140205563
205519 imul     r9, r15
20551d lea      rax, [rsi + 1]
205521 mov      qword ptr [r14 + 0x1b8], rax
205528 add      r9, rbp
20552b mov      qword ptr [r14 + 0x1b0], r9
205532 shr      r9, 0x1b
205536 movzx    eax, r9b
20553a mov      byte ptr [r14 + 0x160], al
205541 imul     rax, r10
205545 xor      rax, rbx
205548 xor      rax, r11
20554b mov      rcx, rax
20554e add      rax, 0x1ad951
205554 xor      rcx, 0x1ad951
20555b test     dil, dil
20555e jmp      0x140205f53
205563 mov      rcx, r14
205566 call     0x1401ee070
20556b movzx    ecx, byte ptr [r14 + 0x4ad]
205573 movabs   rbx, 0xff51afd7ed558ccd
20557d mov      r11, qword ptr [r14 + 0xe0]
205584 movabs   r8, 0xc4ceb9fe1a85ec53
20558e mov      r10, qword ptr [r14 + 0xd0]
205595 movzx    r9d, byte ptr [r14 + 0xe8]
20559d mov      eax, eax
20559f xor      rcx, rax
2055a2 xor      rcx, qword ptr [r14 + 0x11e8]
2055a9 mov      rax, rcx
2055ac shr      rax, 0x21
2055b0 xor      rax, rcx
2055b3 imul     rax, rbx
2055b7 mov      rcx, rax
2055ba shr      rcx, 0x21
2055be xor      rcx, rax
2055c1 imul     rcx, r8
2055c5 mov      rdx, rcx
2055c8 shr      rdx, 0x21
2055cc xor      rdx, rcx
2055cf mov      qword ptr [r14 + 0x11e8], rdx
2055d6 xor      rdx, qword ptr [r14 + 0x20]
2055da xor      rdx, qword ptr [r14 + 0x28]
2055de mov      rax, rdx
2055e1 shr      rax, 0x21
2055e5 xor      rax, rdx
2055e8 imul     rax, rbx
2055ec mov      rcx, rax
2055ef shr      rcx, 0x21
2055f3 xor      rcx, rax
2055f6 imul     rcx, r8
2055fa mov      rax, rcx
2055fd shr      rax, 0x21
205601 xor      rax, rcx
205604 mov      qword ptr [r14 + 0x20], rax
205608 mov      rdx, qword ptr [r14 + 0x138]
20560f movzx    ecx, byte ptr [r14 + 0x169]
205617 mov      rax, qword ptr [r14 + 0xd8]
20561e imul     rcx, r11
205622 lea      rbx, [rax + rax*4]
205626 mov      rax, rdx
205629 add      rbx, rbx
20562c xor      rcx, rbx
20562f xor      rcx, r10
205632 xor      rax, rcx
205635 sub      rdx, rcx
205638 test     r9b, r9b
20563b cmove    rdx, rax
20563f mov      rax, qword ptr [r14 + 0x1b0]
205646 inc      qword ptr [r14 + 0x1b8]
20564d imul     rax, r15
205651 add      rax, rbp
205654 mov      qword ptr [r14 + 0x1b0], rax
20565b shr      rax, 0x1b
20565f movzx    r8d, al
205663 mov      byte ptr [r14 + 0x169], r8b
20566a imul     r8, r11
20566e xor      r8, rbx
205671 xor      r8, r10
205674 mov      rcx, r8
205677 xor      rcx, rdx
20567a test     r9b, r9b
20567d lea      rax, [r8 + rdx]
205681 cmove    rax, rcx
205685 mov      rcx, r14
205688 mov      qword ptr [r14 + 0x138], rax
20568f call     0x1401f0910
205694 mov      rax, qword ptr [r14 + 0xd8]
20569b mov      r10, qword ptr [r14 + 0xe0]
2056a2 movzx    ecx, byte ptr [r14 + 0x168]
2056aa mov      rbx, qword ptr [r14 + 0xd0]
2056b1 mov      rdx, qword ptr [r14 + 0x130]
2056b8 lea      r11, [rax + rax*8]
2056bc movzx    r9d, byte ptr [r14 + 0xe8]
2056c4 mov      rax, rdx
2056c7 imul     rcx, r10
2056cb xor      rcx, r11
2056ce xor      rcx, rbx
2056d1 xor      rax, rcx
2056d4 sub      rdx, rcx
2056d7 test     r9b, r9b
2056da cmove    rdx, rax
2056de mov      rax, qword ptr [r14 + 0x1b0]
2056e5 inc      qword ptr [r14 + 0x1b8]
2056ec imul     rax, r15
2056f0 add      rax, rbp
2056f3 mov      qword ptr [r14 + 0x1b0], rax
2056fa shr      rax, 0x1b
2056fe movzx    r8d, al
205702 mov      byte ptr [r14 + 0x168], r8b
205709 imul     r8, r10
20570d xor      r8, r11
205710 xor      r8, rbx
205713 mov      rcx, r8
205716 xor      rcx, rdx
205719 test     r9b, r9b
20571c lea      rax, [r8 + rdx]
205720 cmove    rax, rcx
205724 mov      rcx, r14
205727 mov      qword ptr [r14 + 0x130], rax
20572e call     0x1401f0910
205733 mov      rcx, r14
205736 call     0x1401ee070
20573b cmp      eax, dword ptr [r14 + 0x1d8]
205742 jae      0x14020574e
205744 mov      edx, eax
205746 mov      rcx, r14
205749 call     0x1401f0910
20574e mov      rsi, qword ptr [r14 + 0xe0]
205755 mov      rbp, qword ptr [r14 + 0xd0]
20575c mov      r11, qword ptr [r14 + 0x130]
205763 movzx    edi, byte ptr [r14 + 0xe8]
20576b mov      rax, r11
20576e movzx    ecx, byte ptr [r14 + 0x168]
205776 mov      rbx, qword ptr [r14 + 0xd8]
20577d mov      r8, qword ptr [r14 + 0x1b8]
205784 mov      r10, qword ptr [r14 + 0x1b0]
20578b imul     rcx, rsi
20578f lea      r9, [rbx + rbx*8]
205793 xor      rcx, r9
205796 xor      rcx, rbp
205799 xor      rax, rcx
20579c sub      r11, rcx
20579f test     dil, dil
2057a2 movabs   rcx, 0x2545f4914f6cdd1d
2057ac cmove    r11, rax
2057b0 imul     r10, r15
2057b4 add      r10, rcx
2057b7 mov      rcx, r11
2057ba mov      rax, r10
2057bd shr      rax, 0x1b
2057c1 movzx    edx, al
2057c4 mov      byte ptr [r14 + 0x168], dl
2057cb imul     rdx, rsi
2057cf xor      rdx, r9
2057d2 xor      rdx, rbp
2057d5 xor      rcx, rdx
2057d8 test     dil, dil
2057db lea      rax, [r11 + rdx]
2057df cmove    rax, rcx
2057e3 mov      rcx, r11
2057e6 mov      qword ptr [r14 + 0x130], rax
2057ed movabs   rax, 0x2545f4914f6cdd1d
2057f7 imul     r10, r15
2057fb add      r10, rax
2057fe lea      rax, [r8 + 2]
205802 mov      qword ptr [r14 + 0x1b8], rax
205809 mov      r8d, 0x99ab
20580f mov      qword ptr [r14 + 0x1b0], r10
205816 lea      rax, [rbx + rbx*4]
20581a add      rax, rax
20581d shr      r10, 0x1b
205821 movzx    edx, r10b
205825 mov      byte ptr [r14 + 0x169], dl
20582c imul     rdx, rsi
205830 xor      rdx, rax
205833 xor      rdx, rbp
205836 xor      rcx, rdx
205839 test     dil, dil
20583c lea      rax, [r11 + rdx]
205840 cmove    rax, rcx
205844 mov      rcx, r14
205847 mov      qword ptr [r14 + 0x138], rax
20584e movzx    edx, byte ptr [r14 + 0x4ad]
205856 xor      rdx, qword ptr [r14 + 0x348]
20585d call     0x1401f1520
205862 mov      r8, qword ptr [r14 + 0x348]
205869 movabs   rdi, 0xff51afd7ed558ccd
205873 mov      rax, r8
205876 movabs   rsi, 0xc4ceb9fe1a85ec53
205880 xor      rax, qword ptr [r14 + 0x20]
205884 mov      rcx, rax
205887 shr      rcx, 0x21
20588b xor      rcx, rax
20588e imul     rcx, rdi
205892 mov      rax, rcx
205895 shr      rax, 0x21
205899 xor      rax, rcx
20589c imul     rax, rsi
2058a0 mov      rdx, rax
2058a3 shr      rdx, 0x21
2058a7 xor      edx, eax
2058a9 lea      eax, [rdx + 1]
2058ac mov      ecx, eax
2058ae xor      eax, edx
2058b0 imul     ecx, edx
2058b3 not      ecx
2058b5 and      ecx, eax
2058b7 test     cl, 1
2058ba je       0x14020592d
2058bc and      r8b, 3
2058c0 cmp      r8b, 1
2058c4 jne      0x14020592d
2058c6 mov      rax, qword ptr [r14 + 0x1b0]
2058cd movabs   rcx, 0x2545f4914f6cdd1d
2058d7 inc      qword ptr [r14 + 0x1b8]
2058de imul     rax, r15
2058e2 add      rax, rcx
2058e5 mov      qword ptr [r14 + 0x1b0], rax
2058ec shr      rax, 0x1b
2058f0 movzx    eax, al
2058f3 mov      byte ptr [r14 + 0x160], al
2058fa imul     rax, qword ptr [r14 + 0xe0]
205902 xor      rax, qword ptr [r14 + 0xd8]
205909 xor      rax, qword ptr [r14 + 0xd0]
205910 mov      rcx, rax
205913 add      rax, 0x190631
205919 xor      rcx, 0x190631
205920 cmp      byte ptr [r14 + 0xe8], 0
205928 jmp      0x140205f53
20592d mov      rcx, r14
205930 call     0x1401ee070
205935 mov      ebx, eax
205937 cmp      eax, dword ptr [r14 + 0x1d8]
20593e jb       0x1402059a7
205940 mov      rax, qword ptr [r14 + 0x1b0]
205947 movabs   rcx, 0x2545f4914f6cdd1d
205951 inc      qword ptr [r14 + 0x1b8]
205958 imul     rax, r15
20595c add      rax, rcx
20595f mov      qword ptr [r14 + 0x1b0], rax
205966 shr      rax, 0x1b
20596a movzx    eax, al
20596d mov      byte ptr [r14 + 0x160], al
205974 imul     rax, qword ptr [r14 + 0xe0]
20597c xor      rax, qword ptr [r14 + 0xd8]
205983 xor      rax, qword ptr [r14 + 0xd0]
20598a mov      rcx, rax
20598d add      rax, 0xfe1ab
205993 xor      rcx, 0xfe1ab
20599a cmp      byte ptr [r14 + 0xe8], 0
2059a2 jmp      0x140205f53
2059a7 mov      edx, ebx
2059a9 mov      rcx, r14
2059ac call     0x1401f25b0
2059b1 movsxd   rcx, dword ptr [r14 + 0x11e0]
2059b8 movabs   r8, 0xd6e8feb86659fd93
2059c2 mov      rdx, qword ptr [r14 + 0x20]
2059c6 mov      rax, rbx
2059c9 imul     rax, r8
2059cd imul     rcx, r15
2059d1 rol      rdx, 0x11
2059d5 xor      rax, rdx
2059d8 xor      rcx, qword ptr [r14 + 0x260]
2059df xor      rax, rcx
2059e2 mov      rcx, rax
2059e5 shr      rcx, 0x21
2059e9 xor      rcx, rax
2059ec imul     rcx, rdi
2059f0 mov      rdx, rcx
2059f3 shr      rdx, 0x21
2059f7 xor      rdx, rcx
2059fa imul     rdx, rsi
2059fe mov      rax, rdx
205a01 shr      rax, 0x21
205a05 xor      rax, rdx
205a08 mov      r10, rax
205a0b shr      r10, 0x1d
205a0f xor      r10, rax
205a12 or       r10, 1
205a16 mov      rax, r10
205a19 mov      qword ptr [r14 + 0x260], r10
205a20 and      eax, 0x3ff
205a25 cmp      rax, 0x2c5
205a2b jne      0x140205a3c
205a2d mov      rcx, r14
205a30 call     0x1402297e0
205a35 mov      r10, qword ptr [r14 + 0x260]
205a3c movzx    eax, r10b
205a40 and      al, 0x1f
205a42 cmp      al, 0x15
205a44 jne      0x140205b31
205a4a movsxd   rax, dword ptr [r14 + 0x11e0]
205a51 xor      rax, 0x5a5a
205a57 mov      rcx, qword ptr [r14 + 0x20]
205a5b imul     rax, r15
205a5f rol      rcx, 0x11
205a63 xor      rax, r10
205a66 xor      rcx, rax
205a69 movabs   rax, 0x8f70feda99a6026d
205a73 xor      rcx, rax
205a76 mov      rax, rcx
205a79 shr      rax, 0x21
205a7d xor      rax, rcx
205a80 imul     rax, rdi
205a84 mov      rcx, rax
205a87 shr      rcx, 0x21
205a8b xor      rcx, rax
205a8e imul     rcx, rsi
205a92 mov      rax, rcx
205a95 shr      rax, 0x21
205a99 xor      rax, rcx
205a9c mov      r9, rax
205a9f shr      r9, 0x1d
205aa3 xor      r9, rax
205aa6 or       r9, 1
205aaa mov      rax, r9
205aad mov      rcx, r9
205ab0 shr      rax, 8
205ab4 and      eax, 3
205ab7 shr      rcx, 0x28
205abb imul     r8, rax, 0x3e
205abf mov      eax, 0x8421085
205ac4 mul      ecx
205ac6 mov      eax, ecx
205ac8 sub      eax, edx
205aca shr      eax, 1
205acc add      eax, edx
205ace shr      eax, 5
205ad1 imul     eax, eax, 0x3e
205ad4 sub      ecx, eax
205ad6 mov      eax, ecx
205ad8 add      r8, rax
205adb mov      rax, qword ptr [r14 + 0x4b8]
205ae2 movsxd   rcx, dword ptr [rax + r8*4]
205ae6 movsxd   rax, dword ptr [r14 + 0x4c8]
205aed xor      rcx, rax
205af0 add      rcx, qword ptr [r14 + 0x4c0]
205af7 xor      rcx, r9
205afa mov      rax, rcx
205afd shr      rax, 0x21
205b01 xor      rax, rcx
205b04 imul     rax, rdi
205b08 mov      rcx, rax
205b0b shr      rcx, 0x21
205b0f xor      rcx, rax
205b12 imul     rcx, rsi
205b16 mov      rax, rcx
205b19 shr      rax, 0x21
205b1d xor      rax, rcx
205b20 xor      rax, r10
205b23 inc      qword ptr [r14 + 0x268]
205b2a mov      qword ptr [r14 + 0x260], rax
205b31 inc      dword ptr [r14 + 0x200]
205b38 mov      eax, dword ptr [r14 + 0x200]
205b3f cmp      eax, dword ptr [r14 + 0x1fc]
205b46 jb       0x140205b5b
205b48 mov      rcx, r14
205b4b mov      dword ptr [r14 + 0x200], 0
205b56 call     0x1401ef7c0
205b5b mov      r8d, ebx
205b5e mov      edx, ebx
205b60 mov      rcx, r14
205b63 call     0x1401f0660
205b68 inc      qword ptr [r14 + 0x1b8]
205b6f movabs   rax, 0x2545f4914f6cdd1d
205b79 mov      r9, qword ptr [r14 + 0x1b0]
205b80 mov      r10, qword ptr [r14 + 0x1b8]
205b87 imul     r9, r15
205b8b add      r9, rax
205b8e mov      qword ptr [r14 + 0x1b0], r9
205b95 mov      rax, r9
205b98 shr      rax, 0x1b
205b9c movzx    edx, al
205b9f mov      byte ptr [r14 + 0x168], dl
205ba6 mov      rdi, qword ptr [r14 + 0xe0]
205bad mov      r11, qword ptr [r14 + 0xd8]
205bb4 mov      rsi, qword ptr [r14 + 0xd0]
205bbb movzx    r15d, byte ptr [r14 + 0xe8]
205bc3 imul     rdx, rdi
205bc7 lea      rax, [r11 + r11*8]
205bcb xor      rdx, rax
205bce xor      rdx, rsi
205bd1 mov      rcx, rdx
205bd4 xor      rcx, rbx
205bd7 test     r15b, r15b
205bda lea      rax, [rdx + rbx]
205bde cmove    rax, rcx
205be2 inc      r10
205be5 mov      qword ptr [r14 + 0x130], rax
205bec mov      rcx, qword ptr [r14 + 0x1d0]
205bf3 mov      rax, qword ptr [r14 + 0x48]
205bf7 mov      qword ptr [rsp + 0x78], r10
205bfc movzx    r8d, byte ptr [rcx + rbx]
205c01 xor      r8b, byte ptr [rax + rbx]
205c05 inc      ebx
205c07 mov      qword ptr [r14 + 0x1b8], r10
205c0e movabs   rax, 0x9e3779b97f4a7c15
205c18 imul     r9, rax
205c1c mov      qword ptr [rsp + 0x60], rbx
205c21 movabs   rax, 0x2545f4914f6cdd1d
205c2b add      r9, rax
205c2e mov      rax, r9
205c31 shr      rax, 0x1b
205c35 movzx    edx, al
205c38 lea      rax, [r11 + r11]
205c3c mov      byte ptr [r14 + 0x161], dl
205c43 imul     rdx, rdi
205c47 xor      rdx, rax
205c4a xor      rdx, rsi
205c4d mov      rcx, rdx
205c50 xor      rcx, rbx
205c53 test     r15b, r15b
205c56 lea      rax, [rdx + rbx]
205c5a cmove    rax, rcx
205c5e mov      qword ptr [r14 + 0xf8], rax
205c65 movsxd   rdx, dword ptr [r14 + 0x11e0]
205c6c mov      r10, qword ptr [r14 + 0x20]
205c70 mov      rcx, rdx
205c73 xor      rcx, qword ptr [r14 + 0x350]
205c7a xor      rcx, qword ptr [r14 + 0x348]
205c81 xor      rcx, r10
205c84 xor      rcx, rbx
205c87 movabs   rbx, 0xff51afd7ed558ccd
205c91 mov      rax, rcx
205c94 shr      rax, 0x21
205c98 xor      rax, rcx
205c9b imul     rax, rbx
205c9f mov      rcx, rax
205ca2 shr      rcx, 0x21
205ca6 xor      rcx, rax
205ca9 movabs   rax, 0xc4ceb9fe1a85ec53
205cb3 imul     rcx, rax
205cb7 movzx    eax, r8b
205cbb mov      rbx, rcx
205cbe shr      rbx, 0x21
205cc2 xor      rbx, rcx
205cc5 lea      rcx, [rip - 0x205ccc]
205ccc xor      rax, 0xdd
205cd2 mov      qword ptr [r14 + 0x28], rbx
205cd6 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
205cde xor      bpl, 0x63
205ce2 movabs   r8, 0xff51afd7ed558ccd
205cec inc      edx
205cee mov      dword ptr [r14 + 0x11e0], edx
205cf5 test     dl, 0x1f
205cf8 jne      0x140205d3e
205cfa movsxd   rax, edx
205cfd xor      rax, qword ptr [r14 + 0x348]
205d04 xor      rax, r10
205d07 mov      rcx, rax
205d0a shr      rcx, 0x21
205d0e xor      rcx, rax
205d11 movabs   rax, 0xc4ceb9fe1a85ec53
205d1b imul     rcx, r8
205d1f mov      rdx, rcx
205d22 shr      rdx, 0x21
205d26 xor      rdx, rcx
205d29 imul     rdx, rax
205d2d mov      rax, rdx
205d30 shr      rax, 0x21
205d34 xor      rax, rdx
205d37 mov      qword ptr [r14 + 0x348], rax
205d3e movzx    edx, bpl
205d42 xor      r10, rdx
205d45 mov      byte ptr [r14 + 0x4ad], bpl
205d4c xor      r10, qword ptr [rsp + 0x60]
205d51 mov      rax, r10
205d54 shr      rax, 0x21
205d58 xor      rax, r10
205d5b movabs   r10, 0x9e3779b97f4a7c15
205d65 imul     rax, r8
205d69 imul     rdx, r10
205d6d imul     r9, r10
205d71 mov      rcx, rax
205d74 shr      rcx, 0x21
205d78 xor      rcx, rax
205d7b movabs   rax, 0xc4ceb9fe1a85ec53
205d85 imul     rcx, rax
205d89 mov      rax, rcx
205d8c shr      rax, 0x21
205d90 xor      rax, rcx
205d93 mov      ecx, dword ptr [r14 + 0x1178]
205d9a mov      qword ptr [r14 + 0x20], rax
205d9e movabs   rax, 0xd6e8feb86659fd93
205da8 imul     rcx, rax
205dac xor      rcx, rdx
205daf xor      rcx, rbx
205db2 movabs   rbx, 0x2545f4914f6cdd1d
205dbc mov      rax, rcx
205dbf add      r9, rbx
205dc2 shr      rax, 0x21
205dc6 xor      rax, rcx
205dc9 imul     rax, r8
205dcd mov      rdx, rax
205dd0 shr      rdx, 0x21
205dd4 xor      rdx, rax
205dd7 movabs   rax, 0xc4ceb9fe1a85ec53
205de1 imul     rdx, rax
205de5 mov      rax, qword ptr [rsp + 0x78]
205dea shr      rdx, 0x21
205dee and      edx, 3
205df1 inc      rax
205df4 mov      qword ptr [r14 + 0x1b8], rax
205dfb cmp      bpl, 0x3e
205dff jae      0x140205e97
205e05 inc      qword ptr [r14 + 0x11a0]
205e0c lea      rax, [rip - 0x205e13]
205e13 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
205e1b mov      qword ptr [r14 + 0x1b0], r9
205e22 shr      r9, 0x1b
205e26 movzx    eax, r9b
205e2a mov      byte ptr [r14 + 0x160], al
205e31 imul     rax, rdi
205e35 mov      ebx, edx
205e37 xor      rax, r11
205e3a xor      rax, rsi
205e3d mov      rcx, rax
205e40 add      rax, r8
205e43 xor      rcx, r8
205e46 movzx    r8d, bpl
205e4a test     r15b, r15b
205e4d cmove    rax, rcx
205e51 mov      rcx, r14
205e54 mov      qword ptr [r14 + 0xf0], rax
205e5b call     0x1401f1f50
205e60 mov      eax, eax
205e62 lea      edx, [r13 - 1]
205e66 imul     rcx, rbx, 0x3e
205e6a mov      r8, r12
205e6d add      rcx, rax
205e70 mov      rax, qword ptr [r14 + 0x4b8]
205e77 movsxd   r9, dword ptr [rax + rcx*4]
205e7b mov      rcx, r14
205e7e movsxd   rax, dword ptr [r14 + 0x4c8]
205e85 xor      r9, rax
205e88 add      r9, qword ptr [r14 + 0x4c0]
205e8f call     r9
205e92 jmp      0x140205f5e
205e97 inc      dword ptr [r14 + 0x11a8]
205e9e mov      rax, r9
205ea1 shr      rax, 0x1b
205ea5 movzx    ecx, al
205ea8 lea      rax, [r11*4]
205eb0 mov      byte ptr [r14 + 0x163], cl
205eb7 imul     rcx, rdi
205ebb imul     r9, r10
205ebf xor      rcx, rax
205ec2 xor      rcx, rsi
205ec5 mov      qword ptr [r14 + 0x108], rcx
205ecc mov      r8, qword ptr [r14 + 0x1b8]
205ed3 add      r9, rbx
205ed6 mov      rax, r9
205ed9 shr      rax, 0x1b
205edd movzx    edx, al
205ee0 mov      byte ptr [r14 + 0x16a], dl
205ee7 imul     rax, r11, 0xb
205eeb imul     rdx, rdi
205eef xor      rdx, rax
205ef2 xor      rdx, rsi
205ef5 mov      rcx, rdx
205ef8 xor      rcx, 1
205efc test     r15b, r15b
205eff lea      rax, [rdx + 1]
205f03 cmove    rax, rcx
205f07 mov      qword ptr [r14 + 0x140], rax
205f0e lea      rax, [r8 + 2]
205f12 mov      qword ptr [r14 + 0x1b8], rax
205f19 imul     r9, r10
205f1d add      r9, rbx
205f20 mov      qword ptr [r14 + 0x1b0], r9
205f27 shr      r9, 0x1b
205f2b movzx    eax, r9b
205f2f mov      byte ptr [r14 + 0x160], al
205f36 imul     rax, rdi
205f3a xor      rax, rsi
205f3d xor      rax, r11
205f40 mov      rcx, rax
205f43 add      rax, 0xfe1ab
205f49 xor      rcx, 0xfe1ab
205f50 test     r15b, r15b
205f53 cmove    rax, rcx
205f57 mov      qword ptr [r14 + 0xf0], rax
205f5e mov      rdi, qword ptr [rsp + 0x28]
205f63 mov      rsi, qword ptr [rsp + 0x30]
205f68 mov      rbp, qword ptr [rsp + 0x38]
205f6d mov      rbx, qword ptr [rsp + 0x68]
205f72 mov      r15, qword ptr [rsp + 0x20]
205f77 add      rsp, 0x40
205f7b pop      r14
205f7d pop      r13
205f7f pop      r12
205f81 ret      
205f82 mov      edx, 0x54485254
205f87 mov      rcx, r14
205f8a call     0x1401ed830
205f8f int3     
205f90 mov      edx, 0x43414e59
205f95 mov      rcx, r14
205f98 call     0x1401ed830
205f9d int3     
