2162d0 mov      qword ptr [rsp + 0x18], r8
2162d5 push     rbx
2162d6 push     rbp
2162d7 push     rdi
2162d8 push     r13
2162da push     r14
2162dc sub      rsp, 0x30
2162e0 movsxd   rax, dword ptr [rcx + 0x11e0]
2162e7 mov      r14, rcx
2162ea mov      r13d, edx
2162ed movabs   rcx, 0xdc0eb3f9b589e60b
2162f7 imul     rax, rcx
2162fb movabs   rcx, 0x7e57393234576234
216305 movabs   rbp, 0xff51afd7ed558ccd
21630f xor      rax, qword ptr [r14 + 0x28]
216313 mov      rdi, r8
216316 mov      qword ptr [rsp + 0x60], rax
21631b mov      rax, qword ptr [rsp + 0x60]
216320 movsxd   rax, dword ptr [r14 + 0x11e0]
216327 imul     rax, rcx
21632b movabs   rcx, 0x989fa76cb71cee21
216335 xor      rax, qword ptr [r14 + 0x28]
216339 mov      qword ptr [rsp + 0x60], rax
21633e mov      rax, qword ptr [rsp + 0x60]
216343 movsxd   rax, dword ptr [r14 + 0x11e0]
21634a imul     rax, rcx
21634e movabs   rcx, 0xec253bb5bf91f60f
216358 xor      rax, qword ptr [r14 + 0x28]
21635c mov      qword ptr [rsp + 0x60], rax
216361 mov      rax, qword ptr [rsp + 0x60]
216366 mov      rax, qword ptr [r14 + 0x2e8]
21636d xor      rax, rcx
216370 mov      rcx, rax
216373 shr      rcx, 0x21
216377 xor      rcx, rax
21637a movabs   rax, 0xc4ceb9fe1a85ec53
216384 imul     rcx, rbp
216388 mov      rdx, rcx
21638b shr      rdx, 0x21
21638f xor      rdx, rcx
216392 mov      rcx, r14
216395 imul     rdx, rax
216399 mov      rax, rdx
21639c shr      rax, 0x21
2163a0 xor      rdx, rax
2163a3 mov      rax, qword ptr [r14 + 0x2e8]
2163aa shr      rax, 7
2163ae add      rax, rdx
2163b1 mov      qword ptr [r14 + 0x2e8], rax
2163b8 call     0x1401ee940
2163bd mov      rcx, r14
2163c0 mov      rbx, rax
2163c3 call     0x1401ee940
2163c8 mov      rdx, rax
2163cb mov      rcx, r14
2163ce or       rdx, rbx
2163d1 and      rax, rbx
2163d4 sub      rdx, rax
2163d7 call     0x1401ee820
2163dc mov      rax, qword ptr [r14 + 0x2e8]
2163e3 test     r13d, r13d
2163e6 jns      0x140216f24
2163ec cmp      qword ptr [r14 + 0x11b8], rdi
2163f3 jne      0x140216f32
2163f9 movsxd   rax, dword ptr [r14 + 0x11e0]
216400 movabs   rcx, 0x3a5198f164096f78
21640a imul     rax, rcx
21640e mov      rcx, r14
216411 xor      rax, qword ptr [r14 + 0x28]
216415 mov      qword ptr [rsp + 0x60], rax
21641a mov      rax, qword ptr [rsp + 0x60]
21641f call     0x1401ee450
216424 test     eax, eax
216426 jne      0x140216f18
21642c cmp      dword ptr [r14 + 0xad0], eax
216433 jne      0x140216f18
216439 mov      r8, qword ptr [r14 + 0xf0]
216440 movzx    ecx, byte ptr [r14 + 0x160]
216448 mov      rax, r8
21644b mov      r10, qword ptr [r14 + 0xe0]
216452 mov      rbx, qword ptr [r14 + 0xd0]
216459 mov      r11, qword ptr [r14 + 0xd8]
216460 movzx    edi, byte ptr [r14 + 0xe8]
216468 mov      r9, qword ptr [r14 + 0x1b0]
21646f imul     rcx, r10
216473 mov      qword ptr [rsp + 0x68], rsi
216478 mov      rsi, qword ptr [r14 + 0x1b8]
21647f xor      rcx, rbx
216482 xor      rcx, r11
216485 mov      qword ptr [rsp + 0x28], r12
21648a xor      rax, rcx
21648d mov      qword ptr [rsp + 0x20], r15
216492 sub      r8, rcx
216495 movabs   r15, 0x9e3779b97f4a7c15
21649f test     dil, dil
2164a2 movabs   r12, 0x2545f4914f6cdd1d
2164ac cmove    r8, rax
2164b0 inc      rsi
2164b3 imul     r9, r15
2164b7 mov      qword ptr [r14 + 0x1b8], rsi
2164be mov      rcx, r8
2164c1 add      r9, r12
2164c4 mov      qword ptr [r14 + 0x1b0], r9
2164cb mov      rax, r9
2164ce shr      rax, 0x1b
2164d2 movzx    edx, al
2164d5 mov      byte ptr [r14 + 0x160], dl
2164dc imul     rdx, r10
2164e0 xor      rdx, rbx
2164e3 xor      rdx, r11
2164e6 xor      rcx, rdx
2164e9 test     dil, dil
2164ec lea      rax, [r8 + rdx]
2164f0 cmove    rax, rcx
2164f4 mov      qword ptr [r14 + 0xf0], rax
2164fb cmp      r8d, 0x48cad
216502 jne      0x140216f09
216508 mov      eax, r13d
21650b btr      eax, 0x1f
21650f cmp      eax, 2
216512 jae      0x14021655e
216514 imul     r9, r15
216518 lea      rax, [rsi + 1]
21651c mov      qword ptr [r14 + 0x1b8], rax
216523 add      r9, r12
216526 mov      qword ptr [r14 + 0x1b0], r9
21652d shr      r9, 0x1b
216531 movzx    eax, r9b
216535 mov      byte ptr [r14 + 0x160], al
21653c imul     rax, r10
216540 xor      rax, rbx
216543 xor      rax, r11
216546 mov      rcx, rax
216549 add      rax, 0xf6105
21654f xor      rcx, 0xf6105
216556 test     dil, dil
216559 jmp      0x140216efe
21655e mov      rcx, r14
216561 call     0x1401ee070
216566 movzx    ecx, byte ptr [r14 + 0x4ad]
21656e movabs   r8, 0xc4ceb9fe1a85ec53
216578 mov      r11, qword ptr [r14 + 0xe0]
21657f mov      r10, qword ptr [r14 + 0xd0]
216586 movzx    r9d, byte ptr [r14 + 0xe8]
21658e mov      eax, eax
216590 xor      rcx, rax
216593 xor      rcx, qword ptr [r14 + 0x11e8]
21659a mov      rax, rcx
21659d shr      rax, 0x21
2165a1 xor      rax, rcx
2165a4 imul     rax, rbp
2165a8 mov      rcx, rax
2165ab shr      rcx, 0x21
2165af xor      rcx, rax
2165b2 imul     rcx, r8
2165b6 mov      rdx, rcx
2165b9 shr      rdx, 0x21
2165bd xor      rdx, rcx
2165c0 mov      qword ptr [r14 + 0x11e8], rdx
2165c7 xor      rdx, qword ptr [r14 + 0x20]
2165cb xor      rdx, qword ptr [r14 + 0x28]
2165cf mov      rax, rdx
2165d2 shr      rax, 0x21
2165d6 xor      rax, rdx
2165d9 imul     rax, rbp
2165dd mov      rcx, rax
2165e0 shr      rcx, 0x21
2165e4 xor      rcx, rax
2165e7 imul     rcx, r8
2165eb mov      rax, rcx
2165ee shr      rax, 0x21
2165f2 xor      rax, rcx
2165f5 mov      qword ptr [r14 + 0x20], rax
2165f9 mov      rdx, qword ptr [r14 + 0x138]
216600 movzx    ecx, byte ptr [r14 + 0x169]
216608 mov      rax, qword ptr [r14 + 0xd8]
21660f imul     rcx, r11
216613 lea      rbx, [rax + rax*4]
216617 mov      rax, rdx
21661a add      rbx, rbx
21661d xor      rcx, rbx
216620 xor      rcx, r10
216623 xor      rax, rcx
216626 sub      rdx, rcx
216629 test     r9b, r9b
21662c cmove    rdx, rax
216630 mov      rax, qword ptr [r14 + 0x1b0]
216637 inc      qword ptr [r14 + 0x1b8]
21663e imul     rax, r15
216642 add      rax, r12
216645 mov      qword ptr [r14 + 0x1b0], rax
21664c shr      rax, 0x1b
216650 movzx    r8d, al
216654 mov      byte ptr [r14 + 0x169], r8b
21665b imul     r8, r11
21665f xor      r8, rbx
216662 xor      r8, r10
216665 mov      rcx, r8
216668 xor      rcx, rdx
21666b test     r9b, r9b
21666e lea      rax, [r8 + rdx]
216672 cmove    rax, rcx
216676 mov      rcx, r14
216679 mov      qword ptr [r14 + 0x138], rax
216680 call     0x1401f0910
216685 mov      rax, qword ptr [r14 + 0xd8]
21668c mov      rdx, qword ptr [r14 + 0x130]
216693 mov      r10, qword ptr [r14 + 0xe0]
21669a movzx    ecx, byte ptr [r14 + 0x168]
2166a2 mov      rbx, qword ptr [r14 + 0xd0]
2166a9 lea      r11, [rax + rax*8]
2166ad movzx    r9d, byte ptr [r14 + 0xe8]
2166b5 mov      rax, rdx
2166b8 imul     rcx, r10
2166bc xor      rcx, r11
2166bf xor      rcx, rbx
2166c2 xor      rax, rcx
2166c5 sub      rdx, rcx
2166c8 test     r9b, r9b
2166cb cmove    rdx, rax
2166cf mov      rax, qword ptr [r14 + 0x1b0]
2166d6 inc      qword ptr [r14 + 0x1b8]
2166dd mov      rcx, rdx
2166e0 imul     rax, r15
2166e4 add      rax, r12
2166e7 mov      qword ptr [r14 + 0x1b0], rax
2166ee shr      rax, 0x1b
2166f2 movzx    r8d, al
2166f6 mov      byte ptr [r14 + 0x168], r8b
2166fd imul     r8, r10
216701 xor      r8, r11
216704 xor      r8, rbx
216707 xor      rcx, r8
21670a test     r9b, r9b
21670d lea      rax, [rdx + r8]
216711 cmove    rax, rcx
216715 mov      rcx, r14
216718 mov      qword ptr [r14 + 0x130], rax
21671f call     0x1401f0910
216724 mov      rcx, r14
216727 call     0x1401ee070
21672c cmp      eax, dword ptr [r14 + 0x1d8]
216733 jae      0x14021673f
216735 mov      edx, eax
216737 mov      rcx, r14
21673a call     0x1401f0910
21673f mov      rsi, qword ptr [r14 + 0xe0]
216746 mov      rbp, qword ptr [r14 + 0xd0]
21674d mov      r11, qword ptr [r14 + 0x130]
216754 movzx    edi, byte ptr [r14 + 0xe8]
21675c mov      rax, r11
21675f movzx    ecx, byte ptr [r14 + 0x168]
216767 mov      rbx, qword ptr [r14 + 0xd8]
21676e mov      r8, qword ptr [r14 + 0x1b8]
216775 mov      r10, qword ptr [r14 + 0x1b0]
21677c imul     rcx, rsi
216780 lea      r9, [rbx + rbx*8]
216784 xor      rcx, r9
216787 xor      rcx, rbp
21678a xor      rax, rcx
21678d sub      r11, rcx
216790 test     dil, dil
216793 cmove    r11, rax
216797 imul     r10, r15
21679b mov      rcx, r11
21679e add      r10, r12
2167a1 mov      rax, r10
2167a4 shr      rax, 0x1b
2167a8 movzx    edx, al
2167ab mov      byte ptr [r14 + 0x168], dl
2167b2 imul     rdx, rsi
2167b6 xor      rdx, r9
2167b9 xor      rdx, rbp
2167bc xor      rcx, rdx
2167bf test     dil, dil
2167c2 lea      rax, [r11 + rdx]
2167c6 cmove    rax, rcx
2167ca mov      rcx, r11
2167cd mov      qword ptr [r14 + 0x130], rax
2167d4 lea      rax, [r8 + 2]
2167d8 mov      qword ptr [r14 + 0x1b8], rax
2167df mov      r8d, 0x6d36
2167e5 imul     r10, r15
2167e9 lea      rax, [rbx + rbx*4]
2167ed add      rax, rax
2167f0 add      r10, r12
2167f3 mov      qword ptr [r14 + 0x1b0], r10
2167fa shr      r10, 0x1b
2167fe movzx    edx, r10b
216802 mov      byte ptr [r14 + 0x169], dl
216809 imul     rdx, rsi
21680d xor      rdx, rax
216810 xor      rdx, rbp
216813 xor      rcx, rdx
216816 test     dil, dil
216819 lea      rax, [r11 + rdx]
21681d cmove    rax, rcx
216821 mov      rcx, r14
216824 mov      qword ptr [r14 + 0x138], rax
21682b movzx    edx, byte ptr [r14 + 0x4ad]
216833 xor      rdx, qword ptr [r14 + 0x348]
21683a call     0x1401f1520
21683f mov      r8, qword ptr [r14 + 0x348]
216846 movabs   rdi, 0xff51afd7ed558ccd
216850 mov      rax, r8
216853 movabs   rsi, 0xc4ceb9fe1a85ec53
21685d xor      rax, qword ptr [r14 + 0x20]
216861 mov      rcx, rax
216864 shr      rcx, 0x21
216868 xor      rcx, rax
21686b imul     rcx, rdi
21686f mov      rax, rcx
216872 shr      rax, 0x21
216876 xor      rax, rcx
216879 imul     rax, rsi
21687d mov      rdx, rax
216880 shr      rdx, 0x21
216884 xor      edx, eax
216886 lea      eax, [rdx + 1]
216889 mov      ecx, eax
21688b xor      eax, edx
21688d imul     ecx, edx
216890 not      ecx
216892 and      ecx, eax
216894 test     cl, 1
216897 je       0x140216900
216899 and      r8b, 3
21689d cmp      r8b, 1
2168a1 jne      0x140216900
2168a3 mov      rax, qword ptr [r14 + 0x1b0]
2168aa inc      qword ptr [r14 + 0x1b8]
2168b1 imul     rax, r15
2168b5 add      rax, r12
2168b8 mov      qword ptr [r14 + 0x1b0], rax
2168bf shr      rax, 0x1b
2168c3 movzx    eax, al
2168c6 mov      byte ptr [r14 + 0x160], al
2168cd imul     rax, qword ptr [r14 + 0xe0]
2168d5 xor      rax, qword ptr [r14 + 0xd8]
2168dc xor      rax, qword ptr [r14 + 0xd0]
2168e3 mov      rcx, rax
2168e6 add      rax, 0x116fdf
2168ec xor      rcx, 0x116fdf
2168f3 cmp      byte ptr [r14 + 0xe8], 0
2168fb jmp      0x140216efe
216900 mov      rcx, r14
216903 call     0x1401ee070
216908 mov      ebx, eax
21690a cmp      eax, dword ptr [r14 + 0x1d8]
216911 jb       0x140216970
216913 mov      rax, qword ptr [r14 + 0x1b0]
21691a inc      qword ptr [r14 + 0x1b8]
216921 imul     rax, r15
216925 add      rax, r12
216928 mov      qword ptr [r14 + 0x1b0], rax
21692f shr      rax, 0x1b
216933 movzx    eax, al
216936 mov      byte ptr [r14 + 0x160], al
21693d imul     rax, qword ptr [r14 + 0xe0]
216945 xor      rax, qword ptr [r14 + 0xd8]
21694c xor      rax, qword ptr [r14 + 0xd0]
216953 mov      rcx, rax
216956 add      rax, 0xfe1ab
21695c xor      rcx, 0xfe1ab
216963 cmp      byte ptr [r14 + 0xe8], 0
21696b jmp      0x140216efe
216970 mov      edx, ebx
216972 mov      rcx, r14
216975 call     0x1401f25b0
21697a movsxd   rcx, dword ptr [r14 + 0x11e0]
216981 movabs   r8, 0xd6e8feb86659fd93
21698b mov      rdx, qword ptr [r14 + 0x20]
21698f mov      rax, rbx
216992 imul     rax, r8
216996 imul     rcx, r15
21699a rol      rdx, 0x11
21699e xor      rax, rdx
2169a1 xor      rcx, qword ptr [r14 + 0x260]
2169a8 xor      rax, rcx
2169ab mov      rcx, rax
2169ae shr      rcx, 0x21
2169b2 xor      rcx, rax
2169b5 imul     rcx, rdi
2169b9 mov      rdx, rcx
2169bc shr      rdx, 0x21
2169c0 xor      rdx, rcx
2169c3 imul     rdx, rsi
2169c7 mov      rax, rdx
2169ca shr      rax, 0x21
2169ce xor      rax, rdx
2169d1 mov      r10, rax
2169d4 shr      r10, 0x1d
2169d8 xor      r10, rax
2169db or       r10, 1
2169df mov      rax, r10
2169e2 mov      qword ptr [r14 + 0x260], r10
2169e9 and      eax, 0x3ff
2169ee cmp      rax, 0x2c5
2169f4 jne      0x140216a05
2169f6 mov      rcx, r14
2169f9 call     0x1402297e0
2169fe mov      r10, qword ptr [r14 + 0x260]
216a05 movzx    eax, r10b
216a09 and      al, 0x1f
216a0b cmp      al, 0x15
216a0d jne      0x140216afa
216a13 movsxd   rax, dword ptr [r14 + 0x11e0]
216a1a xor      rax, 0x5a5a
216a20 mov      rcx, qword ptr [r14 + 0x20]
216a24 imul     rax, r15
216a28 rol      rcx, 0x11
216a2c xor      rax, r10
216a2f xor      rcx, rax
216a32 movabs   rax, 0x8f70feda99a6026d
216a3c xor      rcx, rax
216a3f mov      rax, rcx
216a42 shr      rax, 0x21
216a46 xor      rax, rcx
216a49 imul     rax, rdi
216a4d mov      rcx, rax
216a50 shr      rcx, 0x21
216a54 xor      rcx, rax
216a57 imul     rcx, rsi
216a5b mov      rax, rcx
216a5e shr      rax, 0x21
216a62 xor      rax, rcx
216a65 mov      r9, rax
216a68 shr      r9, 0x1d
216a6c xor      r9, rax
216a6f or       r9, 1
216a73 mov      rax, r9
216a76 mov      rcx, r9
216a79 shr      rax, 8
216a7d and      eax, 3
216a80 shr      rcx, 0x28
216a84 imul     r8, rax, 0x3e
216a88 mov      eax, 0x8421085
216a8d mul      ecx
216a8f mov      eax, ecx
216a91 sub      eax, edx
216a93 shr      eax, 1
216a95 add      eax, edx
216a97 shr      eax, 5
216a9a imul     eax, eax, 0x3e
216a9d sub      ecx, eax
216a9f mov      eax, ecx
216aa1 add      r8, rax
216aa4 mov      rax, qword ptr [r14 + 0x4b8]
216aab movsxd   rcx, dword ptr [rax + r8*4]
216aaf movsxd   rax, dword ptr [r14 + 0x4c8]
216ab6 xor      rcx, rax
216ab9 add      rcx, qword ptr [r14 + 0x4c0]
216ac0 xor      rcx, r9
216ac3 mov      rax, rcx
216ac6 shr      rax, 0x21
216aca xor      rax, rcx
216acd imul     rax, rdi
216ad1 mov      rcx, rax
216ad4 shr      rcx, 0x21
216ad8 xor      rcx, rax
216adb imul     rcx, rsi
216adf mov      rax, rcx
216ae2 shr      rax, 0x21
216ae6 xor      rax, rcx
216ae9 xor      rax, r10
216aec inc      qword ptr [r14 + 0x268]
216af3 mov      qword ptr [r14 + 0x260], rax
216afa inc      dword ptr [r14 + 0x200]
216b01 mov      eax, dword ptr [r14 + 0x200]
216b08 cmp      eax, dword ptr [r14 + 0x1fc]
216b0f jb       0x140216b24
216b11 mov      rcx, r14
216b14 mov      dword ptr [r14 + 0x200], 0
216b1f call     0x1401ef7c0
216b24 mov      r8d, ebx
216b27 mov      edx, ebx
216b29 mov      rcx, r14
216b2c call     0x1401f0660
216b31 inc      qword ptr [r14 + 0x1b8]
216b38 mov      rcx, rbx
216b3b mov      r9, qword ptr [r14 + 0x1b0]
216b42 mov      rbp, r12
216b45 mov      r10, qword ptr [r14 + 0x1b8]
216b4c imul     r9, r15
216b50 add      r9, r12
216b53 lea      r12d, [rbx + 1]
216b57 mov      qword ptr [r14 + 0x1b0], r9
216b5e mov      rax, r9
216b61 shr      rax, 0x1b
216b65 movzx    edx, al
216b68 mov      byte ptr [r14 + 0x168], dl
216b6f mov      rdi, qword ptr [r14 + 0xe0]
216b76 mov      r11, qword ptr [r14 + 0xd8]
216b7d mov      rsi, qword ptr [r14 + 0xd0]
216b84 movzx    r15d, byte ptr [r14 + 0xe8]
216b8c imul     rdx, rdi
216b90 lea      rax, [r11 + r11*8]
216b94 xor      rdx, rax
216b97 xor      rdx, rsi
216b9a xor      rcx, rdx
216b9d test     r15b, r15b
216ba0 lea      rax, [rbx + rdx]
216ba4 cmove    rax, rcx
216ba8 inc      r10
216bab mov      qword ptr [r14 + 0x130], rax
216bb2 mov      rcx, qword ptr [r14 + 0x1d0]
216bb9 mov      rax, qword ptr [r14 + 0x48]
216bbd mov      qword ptr [rsp + 0x60], r10
216bc2 movzx    r8d, byte ptr [rcx + rbx]
216bc7 xor      r8b, byte ptr [rax + rbx]
216bcb movabs   rax, 0x9e3779b97f4a7c15
216bd5 imul     r9, rax
216bd9 mov      qword ptr [r14 + 0x1b8], r10
216be0 add      r9, rbp
216be3 mov      rax, r9
216be6 shr      rax, 0x1b
216bea movzx    edx, al
216bed lea      rax, [r11 + r11]
216bf1 mov      byte ptr [r14 + 0x161], dl
216bf8 imul     rdx, rdi
216bfc xor      rdx, rax
216bff xor      rdx, rsi
216c02 mov      rcx, rdx
216c05 xor      rcx, r12
216c08 test     r15b, r15b
216c0b lea      rax, [rdx + r12]
216c0f cmove    rax, rcx
216c13 mov      qword ptr [r14 + 0xf8], rax
216c1a movsxd   rdx, dword ptr [r14 + 0x11e0]
216c21 mov      r10, qword ptr [r14 + 0x20]
216c25 mov      rcx, rdx
216c28 xor      rcx, qword ptr [r14 + 0x350]
216c2f xor      rcx, r10
216c32 xor      rcx, r12
216c35 xor      rcx, qword ptr [r14 + 0x348]
216c3c mov      rax, rcx
216c3f shr      rax, 0x21
216c43 xor      rax, rcx
216c46 movabs   rcx, 0xff51afd7ed558ccd
216c50 imul     rax, rcx
216c54 mov      rcx, rax
216c57 shr      rcx, 0x21
216c5b xor      rcx, rax
216c5e movabs   rax, 0xc4ceb9fe1a85ec53
216c68 imul     rcx, rax
216c6c movzx    eax, r8b
216c70 mov      rbx, rcx
216c73 xor      rax, 0xdd
216c79 shr      rbx, 0x21
216c7d xor      rbx, rcx
216c80 lea      rcx, [rip - 0x216c87]
216c87 mov      qword ptr [r14 + 0x28], rbx
216c8b movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
216c93 xor      bpl, 0x63
216c97 inc      edx
216c99 mov      dword ptr [r14 + 0x11e0], edx
216ca0 movabs   r8, 0xff51afd7ed558ccd
216caa test     dl, 0x1f
216cad jne      0x140216cf3
216caf movsxd   rax, edx
216cb2 xor      rax, r10
216cb5 xor      rax, qword ptr [r14 + 0x348]
216cbc mov      rcx, rax
216cbf shr      rcx, 0x21
216cc3 xor      rcx, rax
216cc6 movabs   rax, 0xc4ceb9fe1a85ec53
216cd0 imul     rcx, r8
216cd4 mov      rdx, rcx
216cd7 shr      rdx, 0x21
216cdb xor      rdx, rcx
216cde imul     rdx, rax
216ce2 mov      rax, rdx
216ce5 shr      rax, 0x21
216ce9 xor      rax, rdx
216cec mov      qword ptr [r14 + 0x348], rax
216cf3 movzx    edx, bpl
216cf7 xor      r10, rdx
216cfa mov      byte ptr [r14 + 0x4ad], bpl
216d01 xor      r10, r12
216d04 movabs   r12, 0xc4ceb9fe1a85ec53
216d0e mov      rax, r10
216d11 shr      rax, 0x21
216d15 xor      rax, r10
216d18 movabs   r10, 0x9e3779b97f4a7c15
216d22 imul     rax, r8
216d26 imul     rdx, r10
216d2a imul     r9, r10
216d2e mov      rcx, rax
216d31 shr      rcx, 0x21
216d35 xor      rcx, rax
216d38 imul     rcx, r12
216d3c mov      rax, rcx
216d3f shr      rax, 0x21
216d43 xor      rax, rcx
216d46 mov      ecx, dword ptr [r14 + 0x1178]
216d4d mov      qword ptr [r14 + 0x20], rax
216d51 movabs   rax, 0xd6e8feb86659fd93
216d5b imul     rcx, rax
216d5f xor      rcx, rdx
216d62 xor      rcx, rbx
216d65 movabs   rbx, 0x2545f4914f6cdd1d
216d6f mov      rax, rcx
216d72 add      r9, rbx
216d75 shr      rax, 0x21
216d79 xor      rax, rcx
216d7c imul     rax, r8
216d80 mov      rdx, rax
216d83 shr      rdx, 0x21
216d87 xor      rdx, rax
216d8a mov      rax, qword ptr [rsp + 0x60]
216d8f imul     rdx, r12
216d93 shr      rdx, 0x21
216d97 and      edx, 3
216d9a inc      rax
216d9d mov      qword ptr [r14 + 0x1b8], rax
216da4 cmp      bpl, 0x3e
216da8 jae      0x140216e42
216dae inc      qword ptr [r14 + 0x11a0]
216db5 lea      rax, [rip - 0x216dbc]
216dbc mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
216dc4 mov      qword ptr [r14 + 0x1b0], r9
216dcb shr      r9, 0x1b
216dcf movzx    eax, r9b
216dd3 mov      byte ptr [r14 + 0x160], al
216dda imul     rax, rdi
216dde mov      ebx, edx
216de0 xor      rax, rsi
216de3 xor      rax, r11
216de6 mov      rcx, rax
216de9 add      rax, r8
216dec xor      rcx, r8
216def movzx    r8d, bpl
216df3 test     r15b, r15b
216df6 cmove    rax, rcx
216dfa mov      rcx, r14
216dfd mov      qword ptr [r14 + 0xf0], rax
216e04 call     0x1401f1f50
216e09 mov      r8, qword ptr [rsp + 0x70]
216e0e lea      edx, [r13 - 1]
216e12 mov      eax, eax
216e14 imul     rcx, rbx, 0x3e
216e18 add      rcx, rax
216e1b mov      rax, qword ptr [r14 + 0x4b8]
216e22 movsxd   r9, dword ptr [rax + rcx*4]
216e26 mov      rcx, r14
216e29 movsxd   rax, dword ptr [r14 + 0x4c8]
216e30 xor      r9, rax
216e33 add      r9, qword ptr [r14 + 0x4c0]
216e3a call     r9
216e3d jmp      0x140216f09
216e42 inc      dword ptr [r14 + 0x11a8]
216e49 mov      rax, r9
216e4c shr      rax, 0x1b
216e50 movzx    ecx, al
216e53 lea      rax, [r11*4]
216e5b mov      byte ptr [r14 + 0x163], cl
216e62 imul     rcx, rdi
216e66 imul     r9, r10
216e6a xor      rcx, rax
216e6d xor      rcx, rsi
216e70 mov      qword ptr [r14 + 0x108], rcx
216e77 mov      r8, qword ptr [r14 + 0x1b8]
216e7e add      r9, rbx
216e81 mov      rax, r9
216e84 shr      rax, 0x1b
216e88 movzx    edx, al
216e8b mov      byte ptr [r14 + 0x16a], dl
216e92 imul     rax, r11, 0xb
216e96 imul     rdx, rdi
216e9a xor      rdx, rax
216e9d xor      rdx, rsi
216ea0 mov      rcx, rdx
216ea3 xor      rcx, 1
216ea7 test     r15b, r15b
216eaa lea      rax, [rdx + 1]
216eae cmove    rax, rcx
216eb2 mov      qword ptr [r14 + 0x140], rax
216eb9 lea      rax, [r8 + 2]
216ebd mov      qword ptr [r14 + 0x1b8], rax
216ec4 imul     r9, r10
216ec8 add      r9, rbx
216ecb mov      qword ptr [r14 + 0x1b0], r9
216ed2 shr      r9, 0x1b
216ed6 movzx    eax, r9b
216eda mov      byte ptr [r14 + 0x160], al
216ee1 imul     rax, rdi
216ee5 xor      rax, rsi
216ee8 xor      rax, r11
216eeb mov      rcx, rax
216eee add      rax, 0xfe1ab
216ef4 xor      rcx, 0xfe1ab
216efb test     r15b, r15b
216efe cmove    rax, rcx
216f02 mov      qword ptr [r14 + 0xf0], rax
216f09 mov      r12, qword ptr [rsp + 0x28]
216f0e mov      rsi, qword ptr [rsp + 0x68]
216f13 mov      r15, qword ptr [rsp + 0x20]
216f18 add      rsp, 0x30
216f1c pop      r14
216f1e pop      r13
216f20 pop      rdi
216f21 pop      rbp
216f22 pop      rbx
216f23 ret      
216f24 mov      edx, 0x54485254
216f29 mov      rcx, r14
216f2c call     0x1401ed830
216f31 int3     
216f32 mov      edx, 0x43414e59
216f37 mov      rcx, r14
216f3a call     0x1401ed830
216f3f int3     
