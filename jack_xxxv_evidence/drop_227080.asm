227080 push     r12
227082 push     r13
227084 push     r14
227086 sub      rsp, 0x40
22708a movsxd   rax, dword ptr [rcx + 0x11e0]
227091 mov      r14, rcx
227094 mov      r13d, edx
227097 movabs   rcx, 0x4328aeb5b475ce75
2270a1 imul     rax, rcx
2270a5 movabs   rcx, 0xe171247e35ab4a4a
2270af mov      r12, r8
2270b2 xor      rax, qword ptr [r14 + 0x28]
2270b6 mov      qword ptr [rsp + 0x60], rax
2270bb mov      rax, qword ptr [rsp + 0x60]
2270c0 movsxd   rax, dword ptr [r14 + 0x11e0]
2270c7 imul     rax, rcx
2270cb movabs   rcx, 0x7b9ba20b6e0c65f
2270d5 xor      rax, qword ptr [r14 + 0x28]
2270d9 mov      qword ptr [rsp + 0x60], rax
2270de mov      rax, qword ptr [rsp + 0x60]
2270e3 movsxd   rax, dword ptr [r14 + 0x11e0]
2270ea imul     rax, rcx
2270ee movabs   rcx, 0x2e8752cfc164a5e6
2270f8 xor      rax, qword ptr [r14 + 0x28]
2270fc mov      qword ptr [rsp + 0x60], rax
227101 mov      rax, qword ptr [rsp + 0x60]
227106 mov      rax, qword ptr [r14 + 0x2e0]
22710d mov      rax, qword ptr [r14 + 0x2e0]
227114 sub      rax, rcx
227117 mov      rcx, rax
22711a shr      rcx, 0x21
22711e xor      rcx, rax
227121 movabs   rax, 0xff51afd7ed558ccd
22712b imul     rcx, rax
22712f movabs   rax, 0xc4ceb9fe1a85ec53
227139 mov      rdx, rcx
22713c shr      rdx, 0x21
227140 xor      rdx, rcx
227143 mov      rcx, r14
227146 imul     rdx, rax
22714a mov      rax, rdx
22714d shr      rax, 0x21
227151 xor      rdx, rax
227154 mov      rax, qword ptr [r14 + 0x2e0]
22715b shr      rax, 3
22715f xor      rax, rdx
227162 mov      qword ptr [r14 + 0x2e0], rax
227169 call     0x1401ee940
22716e mov      rax, qword ptr [r14 + 0x2e0]
227175 test     r13d, r13d
227178 jns      0x140227d19
22717e cmp      qword ptr [r14 + 0x11b8], r12
227185 jne      0x140227d27
22718b movsxd   rax, dword ptr [r14 + 0x11e0]
227192 movabs   rcx, 0xf56e9702fb63c36c
22719c imul     rax, rcx
2271a0 mov      rcx, r14
2271a3 xor      rax, qword ptr [r14 + 0x28]
2271a7 mov      qword ptr [rsp + 0x60], rax
2271ac mov      rax, qword ptr [rsp + 0x60]
2271b1 call     0x1401ee450
2271b6 test     eax, eax
2271b8 jne      0x140227d0e
2271be cmp      dword ptr [r14 + 0xad0], eax
2271c5 jne      0x140227d0e
2271cb mov      r8, qword ptr [r14 + 0xf0]
2271d2 movzx    ecx, byte ptr [r14 + 0x160]
2271da mov      rax, r8
2271dd mov      r10, qword ptr [r14 + 0xe0]
2271e4 mov      r11, qword ptr [r14 + 0xd8]
2271eb mov      r9, qword ptr [r14 + 0x1b0]
2271f2 imul     rcx, r10
2271f6 mov      qword ptr [rsp + 0x68], rbx
2271fb mov      rbx, qword ptr [r14 + 0xd0]
227202 xor      rcx, rbx
227205 mov      qword ptr [rsp + 0x38], rbp
22720a xor      rcx, r11
22720d mov      qword ptr [rsp + 0x30], rsi
227212 mov      rsi, qword ptr [r14 + 0x1b8]
227219 xor      rax, rcx
22721c sub      r8, rcx
22721f mov      qword ptr [rsp + 0x28], rdi
227224 movzx    edi, byte ptr [r14 + 0xe8]
22722c movabs   rbp, 0x2545f4914f6cdd1d
227236 test     dil, dil
227239 mov      qword ptr [rsp + 0x20], r15
22723e movabs   r15, 0x9e3779b97f4a7c15
227248 cmove    r8, rax
22724c inc      rsi
22724f imul     r9, r15
227253 mov      qword ptr [r14 + 0x1b8], rsi
22725a mov      rcx, r8
22725d add      r9, rbp
227260 mov      qword ptr [r14 + 0x1b0], r9
227267 mov      rax, r9
22726a shr      rax, 0x1b
22726e movzx    edx, al
227271 mov      byte ptr [r14 + 0x160], dl
227278 imul     rdx, r10
22727c xor      rdx, rbx
22727f xor      rdx, r11
227282 xor      rcx, rdx
227285 test     dil, dil
227288 lea      rax, [r8 + rdx]
22728c cmove    rax, rcx
227290 mov      qword ptr [r14 + 0xf0], rax
227297 cmp      r8d, 0x2a0025
22729e jne      0x140227cf5
2272a4 mov      eax, r13d
2272a7 btr      eax, 0x1f
2272ab cmp      eax, 2
2272ae jae      0x1402272fa
2272b0 imul     r9, r15
2272b4 lea      rax, [rsi + 1]
2272b8 mov      qword ptr [r14 + 0x1b8], rax
2272bf add      r9, rbp
2272c2 mov      qword ptr [r14 + 0x1b0], r9
2272c9 shr      r9, 0x1b
2272cd movzx    eax, r9b
2272d1 mov      byte ptr [r14 + 0x160], al
2272d8 imul     rax, r10
2272dc xor      rax, rbx
2272df xor      rax, r11
2272e2 mov      rcx, rax
2272e5 add      rax, 0x85b36
2272eb xor      rcx, 0x85b36
2272f2 test     dil, dil
2272f5 jmp      0x140227cea
2272fa mov      rcx, r14
2272fd call     0x1401ee070
227302 movzx    ecx, byte ptr [r14 + 0x4ad]
22730a movabs   rbx, 0xff51afd7ed558ccd
227314 mov      r11, qword ptr [r14 + 0xe0]
22731b movabs   r8, 0xc4ceb9fe1a85ec53
227325 mov      r10, qword ptr [r14 + 0xd0]
22732c movzx    r9d, byte ptr [r14 + 0xe8]
227334 mov      eax, eax
227336 xor      rcx, rax
227339 xor      rcx, qword ptr [r14 + 0x11e8]
227340 mov      rax, rcx
227343 shr      rax, 0x21
227347 xor      rax, rcx
22734a imul     rax, rbx
22734e mov      rcx, rax
227351 shr      rcx, 0x21
227355 xor      rcx, rax
227358 imul     rcx, r8
22735c mov      rdx, rcx
22735f shr      rdx, 0x21
227363 xor      rdx, rcx
227366 mov      qword ptr [r14 + 0x11e8], rdx
22736d xor      rdx, qword ptr [r14 + 0x28]
227371 xor      rdx, qword ptr [r14 + 0x20]
227375 mov      rax, rdx
227378 shr      rax, 0x21
22737c xor      rax, rdx
22737f imul     rax, rbx
227383 mov      rcx, rax
227386 shr      rcx, 0x21
22738a xor      rcx, rax
22738d imul     rcx, r8
227391 mov      rax, rcx
227394 shr      rax, 0x21
227398 xor      rax, rcx
22739b mov      qword ptr [r14 + 0x20], rax
22739f mov      rdx, qword ptr [r14 + 0x138]
2273a6 movzx    ecx, byte ptr [r14 + 0x169]
2273ae mov      rax, qword ptr [r14 + 0xd8]
2273b5 imul     rcx, r11
2273b9 lea      rbx, [rax + rax*4]
2273bd mov      rax, rdx
2273c0 add      rbx, rbx
2273c3 xor      rcx, rbx
2273c6 xor      rcx, r10
2273c9 xor      rax, rcx
2273cc sub      rdx, rcx
2273cf test     r9b, r9b
2273d2 cmove    rdx, rax
2273d6 mov      rax, qword ptr [r14 + 0x1b0]
2273dd inc      qword ptr [r14 + 0x1b8]
2273e4 imul     rax, r15
2273e8 add      rax, rbp
2273eb mov      qword ptr [r14 + 0x1b0], rax
2273f2 shr      rax, 0x1b
2273f6 movzx    r8d, al
2273fa mov      byte ptr [r14 + 0x169], r8b
227401 imul     r8, r11
227405 xor      r8, rbx
227408 xor      r8, r10
22740b mov      rcx, r8
22740e xor      rcx, rdx
227411 test     r9b, r9b
227414 lea      rax, [r8 + rdx]
227418 cmove    rax, rcx
22741c mov      rcx, r14
22741f mov      qword ptr [r14 + 0x138], rax
227426 call     0x1401f0910
22742b mov      rax, qword ptr [r14 + 0xd8]
227432 mov      r10, qword ptr [r14 + 0xe0]
227439 movzx    ecx, byte ptr [r14 + 0x168]
227441 mov      rbx, qword ptr [r14 + 0xd0]
227448 mov      rdx, qword ptr [r14 + 0x130]
22744f lea      r11, [rax + rax*8]
227453 movzx    r9d, byte ptr [r14 + 0xe8]
22745b mov      rax, rdx
22745e imul     rcx, r10
227462 xor      rcx, r11
227465 xor      rcx, rbx
227468 xor      rax, rcx
22746b sub      rdx, rcx
22746e test     r9b, r9b
227471 cmove    rdx, rax
227475 mov      rax, qword ptr [r14 + 0x1b0]
22747c inc      qword ptr [r14 + 0x1b8]
227483 mov      rcx, rdx
227486 imul     rax, r15
22748a add      rax, rbp
22748d mov      qword ptr [r14 + 0x1b0], rax
227494 shr      rax, 0x1b
227498 movzx    r8d, al
22749c mov      byte ptr [r14 + 0x168], r8b
2274a3 imul     r8, r10
2274a7 xor      r8, r11
2274aa xor      r8, rbx
2274ad xor      rcx, r8
2274b0 test     r9b, r9b
2274b3 lea      rax, [rdx + r8]
2274b7 cmove    rax, rcx
2274bb mov      rcx, r14
2274be mov      qword ptr [r14 + 0x130], rax
2274c5 call     0x1401f0910
2274ca mov      rcx, r14
2274cd call     0x1401ee070
2274d2 cmp      eax, dword ptr [r14 + 0x1d8]
2274d9 jae      0x1402274e5
2274db mov      edx, eax
2274dd mov      rcx, r14
2274e0 call     0x1401f0910
2274e5 mov      rsi, qword ptr [r14 + 0xe0]
2274ec mov      rbp, qword ptr [r14 + 0xd0]
2274f3 mov      r11, qword ptr [r14 + 0x130]
2274fa movzx    edi, byte ptr [r14 + 0xe8]
227502 mov      rax, r11
227505 movzx    ecx, byte ptr [r14 + 0x168]
22750d mov      rbx, qword ptr [r14 + 0xd8]
227514 mov      r8, qword ptr [r14 + 0x1b8]
22751b mov      r10, qword ptr [r14 + 0x1b0]
227522 imul     rcx, rsi
227526 lea      r9, [rbx + rbx*8]
22752a xor      rcx, r9
22752d xor      rcx, rbp
227530 xor      rax, rcx
227533 sub      r11, rcx
227536 test     dil, dil
227539 movabs   rcx, 0x2545f4914f6cdd1d
227543 cmove    r11, rax
227547 imul     r10, r15
22754b add      r10, rcx
22754e mov      rcx, r11
227551 mov      rax, r10
227554 shr      rax, 0x1b
227558 movzx    edx, al
22755b mov      byte ptr [r14 + 0x168], dl
227562 imul     rdx, rsi
227566 xor      rdx, r9
227569 xor      rdx, rbp
22756c xor      rcx, rdx
22756f test     dil, dil
227572 lea      rax, [r11 + rdx]
227576 cmove    rax, rcx
22757a mov      rcx, r11
22757d mov      qword ptr [r14 + 0x130], rax
227584 movabs   rax, 0x2545f4914f6cdd1d
22758e imul     r10, r15
227592 add      r10, rax
227595 lea      rax, [r8 + 2]
227599 mov      qword ptr [r14 + 0x1b8], rax
2275a0 mov      r8d, 0xd0b6
2275a6 mov      qword ptr [r14 + 0x1b0], r10
2275ad lea      rax, [rbx + rbx*4]
2275b1 add      rax, rax
2275b4 shr      r10, 0x1b
2275b8 movzx    edx, r10b
2275bc mov      byte ptr [r14 + 0x169], dl
2275c3 imul     rdx, rsi
2275c7 xor      rdx, rax
2275ca xor      rdx, rbp
2275cd xor      rcx, rdx
2275d0 test     dil, dil
2275d3 lea      rax, [r11 + rdx]
2275d7 cmove    rax, rcx
2275db mov      rcx, r14
2275de mov      qword ptr [r14 + 0x138], rax
2275e5 movzx    edx, byte ptr [r14 + 0x4ad]
2275ed xor      rdx, qword ptr [r14 + 0x348]
2275f4 call     0x1401f1520
2275f9 mov      r8, qword ptr [r14 + 0x348]
227600 movabs   rdi, 0xff51afd7ed558ccd
22760a mov      rax, r8
22760d movabs   rsi, 0xc4ceb9fe1a85ec53
227617 xor      rax, qword ptr [r14 + 0x20]
22761b mov      rcx, rax
22761e shr      rcx, 0x21
227622 xor      rcx, rax
227625 imul     rcx, rdi
227629 mov      rax, rcx
22762c shr      rax, 0x21
227630 xor      rax, rcx
227633 imul     rax, rsi
227637 mov      rdx, rax
22763a shr      rdx, 0x21
22763e xor      edx, eax
227640 lea      eax, [rdx + 1]
227643 mov      ecx, eax
227645 xor      eax, edx
227647 imul     ecx, edx
22764a not      ecx
22764c and      ecx, eax
22764e test     cl, 1
227651 je       0x1402276c4
227653 and      r8b, 3
227657 cmp      r8b, 1
22765b jne      0x1402276c4
22765d mov      rax, qword ptr [r14 + 0x1b0]
227664 movabs   rcx, 0x2545f4914f6cdd1d
22766e inc      qword ptr [r14 + 0x1b8]
227675 imul     rax, r15
227679 add      rax, rcx
22767c mov      qword ptr [r14 + 0x1b0], rax
227683 shr      rax, 0x1b
227687 movzx    eax, al
22768a mov      byte ptr [r14 + 0x160], al
227691 imul     rax, qword ptr [r14 + 0xe0]
227699 xor      rax, qword ptr [r14 + 0xd8]
2276a0 xor      rax, qword ptr [r14 + 0xd0]
2276a7 mov      rcx, rax
2276aa add      rax, 0x3dd18f
2276b0 xor      rcx, 0x3dd18f
2276b7 cmp      byte ptr [r14 + 0xe8], 0
2276bf jmp      0x140227cea
2276c4 mov      rcx, r14
2276c7 call     0x1401ee070
2276cc mov      ebx, eax
2276ce cmp      eax, dword ptr [r14 + 0x1d8]
2276d5 jb       0x14022773e
2276d7 mov      rax, qword ptr [r14 + 0x1b0]
2276de movabs   rcx, 0x2545f4914f6cdd1d
2276e8 inc      qword ptr [r14 + 0x1b8]
2276ef imul     rax, r15
2276f3 add      rax, rcx
2276f6 mov      qword ptr [r14 + 0x1b0], rax
2276fd shr      rax, 0x1b
227701 movzx    eax, al
227704 mov      byte ptr [r14 + 0x160], al
22770b imul     rax, qword ptr [r14 + 0xe0]
227713 xor      rax, qword ptr [r14 + 0xd8]
22771a xor      rax, qword ptr [r14 + 0xd0]
227721 mov      rcx, rax
227724 add      rax, 0xfe1ab
22772a xor      rcx, 0xfe1ab
227731 cmp      byte ptr [r14 + 0xe8], 0
227739 jmp      0x140227cea
22773e mov      edx, ebx
227740 mov      rcx, r14
227743 call     0x1401f25b0
227748 movsxd   rcx, dword ptr [r14 + 0x11e0]
22774f movabs   r8, 0xd6e8feb86659fd93
227759 mov      rdx, qword ptr [r14 + 0x20]
22775d mov      rax, rbx
227760 imul     rax, r8
227764 imul     rcx, r15
227768 rol      rdx, 0x11
22776c xor      rax, rdx
22776f xor      rcx, qword ptr [r14 + 0x260]
227776 xor      rax, rcx
227779 mov      rcx, rax
22777c shr      rcx, 0x21
227780 xor      rcx, rax
227783 imul     rcx, rdi
227787 mov      rdx, rcx
22778a shr      rdx, 0x21
22778e xor      rdx, rcx
227791 imul     rdx, rsi
227795 mov      rax, rdx
227798 shr      rax, 0x21
22779c xor      rax, rdx
22779f mov      r10, rax
2277a2 shr      r10, 0x1d
2277a6 xor      r10, rax
2277a9 or       r10, 1
2277ad mov      rax, r10
2277b0 mov      qword ptr [r14 + 0x260], r10
2277b7 and      eax, 0x3ff
2277bc cmp      rax, 0x2c5
2277c2 jne      0x1402277d3
2277c4 mov      rcx, r14
2277c7 call     0x1402297e0
2277cc mov      r10, qword ptr [r14 + 0x260]
2277d3 movzx    eax, r10b
2277d7 and      al, 0x1f
2277d9 cmp      al, 0x15
2277db jne      0x1402278c8
2277e1 movsxd   rax, dword ptr [r14 + 0x11e0]
2277e8 xor      rax, 0x5a5a
2277ee mov      rcx, qword ptr [r14 + 0x20]
2277f2 imul     rax, r15
2277f6 rol      rcx, 0x11
2277fa xor      rax, r10
2277fd xor      rcx, rax
227800 movabs   rax, 0x8f70feda99a6026d
22780a xor      rcx, rax
22780d mov      rax, rcx
227810 shr      rax, 0x21
227814 xor      rax, rcx
227817 imul     rax, rdi
22781b mov      rcx, rax
22781e shr      rcx, 0x21
227822 xor      rcx, rax
227825 imul     rcx, rsi
227829 mov      rax, rcx
22782c shr      rax, 0x21
227830 xor      rax, rcx
227833 mov      r9, rax
227836 shr      r9, 0x1d
22783a xor      r9, rax
22783d or       r9, 1
227841 mov      rax, r9
227844 mov      rcx, r9
227847 shr      rax, 8
22784b and      eax, 3
22784e shr      rcx, 0x28
227852 imul     r8, rax, 0x3e
227856 mov      eax, 0x8421085
22785b mul      ecx
22785d mov      eax, ecx
22785f sub      eax, edx
227861 shr      eax, 1
227863 add      eax, edx
227865 shr      eax, 5
227868 imul     eax, eax, 0x3e
22786b sub      ecx, eax
22786d mov      eax, ecx
22786f add      r8, rax
227872 mov      rax, qword ptr [r14 + 0x4b8]
227879 movsxd   rcx, dword ptr [rax + r8*4]
22787d movsxd   rax, dword ptr [r14 + 0x4c8]
227884 xor      rcx, rax
227887 add      rcx, qword ptr [r14 + 0x4c0]
22788e xor      rcx, r9
227891 mov      rax, rcx
227894 shr      rax, 0x21
227898 xor      rax, rcx
22789b imul     rax, rdi
22789f mov      rcx, rax
2278a2 shr      rcx, 0x21
2278a6 xor      rcx, rax
2278a9 imul     rcx, rsi
2278ad mov      rax, rcx
2278b0 shr      rax, 0x21
2278b4 xor      rax, rcx
2278b7 xor      rax, r10
2278ba inc      qword ptr [r14 + 0x268]
2278c1 mov      qword ptr [r14 + 0x260], rax
2278c8 inc      dword ptr [r14 + 0x200]
2278cf mov      eax, dword ptr [r14 + 0x200]
2278d6 cmp      eax, dword ptr [r14 + 0x1fc]
2278dd jb       0x1402278f2
2278df mov      rcx, r14
2278e2 mov      dword ptr [r14 + 0x200], 0
2278ed call     0x1401ef7c0
2278f2 mov      r8d, ebx
2278f5 mov      edx, ebx
2278f7 mov      rcx, r14
2278fa call     0x1401f0660
2278ff inc      qword ptr [r14 + 0x1b8]
227906 movabs   rax, 0x2545f4914f6cdd1d
227910 mov      r9, qword ptr [r14 + 0x1b0]
227917 mov      r10, qword ptr [r14 + 0x1b8]
22791e imul     r9, r15
227922 add      r9, rax
227925 mov      qword ptr [r14 + 0x1b0], r9
22792c mov      rax, r9
22792f shr      rax, 0x1b
227933 movzx    edx, al
227936 mov      byte ptr [r14 + 0x168], dl
22793d mov      rdi, qword ptr [r14 + 0xe0]
227944 mov      r11, qword ptr [r14 + 0xd8]
22794b mov      rsi, qword ptr [r14 + 0xd0]
227952 movzx    r15d, byte ptr [r14 + 0xe8]
22795a imul     rdx, rdi
22795e lea      rax, [r11 + r11*8]
227962 xor      rdx, rax
227965 xor      rdx, rsi
227968 mov      rcx, rdx
22796b xor      rcx, rbx
22796e test     r15b, r15b
227971 lea      rax, [rdx + rbx]
227975 cmove    rax, rcx
227979 inc      r10
22797c mov      qword ptr [r14 + 0x130], rax
227983 mov      rcx, qword ptr [r14 + 0x1d0]
22798a mov      rax, qword ptr [r14 + 0x48]
22798e mov      qword ptr [rsp + 0x78], r10
227993 movzx    r8d, byte ptr [rcx + rbx]
227998 xor      r8b, byte ptr [rax + rbx]
22799c inc      ebx
22799e mov      qword ptr [r14 + 0x1b8], r10
2279a5 movabs   rax, 0x9e3779b97f4a7c15
2279af imul     r9, rax
2279b3 mov      qword ptr [rsp + 0x60], rbx
2279b8 movabs   rax, 0x2545f4914f6cdd1d
2279c2 add      r9, rax
2279c5 mov      rax, r9
2279c8 shr      rax, 0x1b
2279cc movzx    edx, al
2279cf lea      rax, [r11 + r11]
2279d3 mov      byte ptr [r14 + 0x161], dl
2279da imul     rdx, rdi
2279de xor      rdx, rax
2279e1 xor      rdx, rsi
2279e4 mov      rcx, rdx
2279e7 xor      rcx, rbx
2279ea test     r15b, r15b
2279ed lea      rax, [rdx + rbx]
2279f1 cmove    rax, rcx
2279f5 mov      qword ptr [r14 + 0xf8], rax
2279fc movsxd   rdx, dword ptr [r14 + 0x11e0]
227a03 mov      r10, qword ptr [r14 + 0x20]
227a07 mov      rcx, rdx
227a0a xor      rcx, qword ptr [r14 + 0x350]
227a11 xor      rcx, r10
227a14 xor      rcx, rbx
227a17 movabs   rbx, 0xff51afd7ed558ccd
227a21 xor      rcx, qword ptr [r14 + 0x348]
227a28 mov      rax, rcx
227a2b shr      rax, 0x21
227a2f xor      rax, rcx
227a32 imul     rax, rbx
227a36 mov      rcx, rax
227a39 shr      rcx, 0x21
227a3d xor      rcx, rax
227a40 movabs   rax, 0xc4ceb9fe1a85ec53
227a4a imul     rcx, rax
227a4e movzx    eax, r8b
227a52 mov      rbx, rcx
227a55 shr      rbx, 0x21
227a59 xor      rbx, rcx
227a5c lea      rcx, [rip - 0x227a63]
227a63 xor      rax, 0xdd
227a69 mov      qword ptr [r14 + 0x28], rbx
227a6d movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
227a75 xor      bpl, 0x63
227a79 movabs   r8, 0xff51afd7ed558ccd
227a83 inc      edx
227a85 mov      dword ptr [r14 + 0x11e0], edx
227a8c test     dl, 0x1f
227a8f jne      0x140227ad5
227a91 movsxd   rax, edx
227a94 xor      rax, r10
227a97 xor      rax, qword ptr [r14 + 0x348]
227a9e mov      rcx, rax
227aa1 shr      rcx, 0x21
227aa5 xor      rcx, rax
227aa8 movabs   rax, 0xc4ceb9fe1a85ec53
227ab2 imul     rcx, r8
227ab6 mov      rdx, rcx
227ab9 shr      rdx, 0x21
227abd xor      rdx, rcx
227ac0 imul     rdx, rax
227ac4 mov      rax, rdx
227ac7 shr      rax, 0x21
227acb xor      rax, rdx
227ace mov      qword ptr [r14 + 0x348], rax
227ad5 movzx    edx, bpl
227ad9 xor      r10, rdx
227adc mov      byte ptr [r14 + 0x4ad], bpl
227ae3 xor      r10, qword ptr [rsp + 0x60]
227ae8 mov      rax, r10
227aeb shr      rax, 0x21
227aef xor      rax, r10
227af2 movabs   r10, 0x9e3779b97f4a7c15
227afc imul     rax, r8
227b00 imul     rdx, r10
227b04 imul     r9, r10
227b08 mov      rcx, rax
227b0b shr      rcx, 0x21
227b0f xor      rcx, rax
227b12 movabs   rax, 0xc4ceb9fe1a85ec53
227b1c imul     rcx, rax
227b20 mov      rax, rcx
227b23 shr      rax, 0x21
227b27 xor      rax, rcx
227b2a mov      ecx, dword ptr [r14 + 0x1178]
227b31 mov      qword ptr [r14 + 0x20], rax
227b35 movabs   rax, 0xd6e8feb86659fd93
227b3f imul     rcx, rax
227b43 xor      rcx, rdx
227b46 xor      rcx, rbx
227b49 movabs   rbx, 0x2545f4914f6cdd1d
227b53 mov      rax, rcx
227b56 add      r9, rbx
227b59 shr      rax, 0x21
227b5d xor      rax, rcx
227b60 imul     rax, r8
227b64 mov      rdx, rax
227b67 shr      rdx, 0x21
227b6b xor      rdx, rax
227b6e movabs   rax, 0xc4ceb9fe1a85ec53
227b78 imul     rdx, rax
227b7c mov      rax, qword ptr [rsp + 0x78]
227b81 shr      rdx, 0x21
227b85 and      edx, 3
227b88 inc      rax
227b8b mov      qword ptr [r14 + 0x1b8], rax
227b92 cmp      bpl, 0x3e
227b96 jae      0x140227c2e
227b9c inc      qword ptr [r14 + 0x11a0]
227ba3 lea      rax, [rip - 0x227baa]
227baa mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
227bb2 mov      qword ptr [r14 + 0x1b0], r9
227bb9 shr      r9, 0x1b
227bbd movzx    eax, r9b
227bc1 mov      byte ptr [r14 + 0x160], al
227bc8 imul     rax, rdi
227bcc mov      ebx, edx
227bce xor      rax, rsi
227bd1 xor      rax, r11
227bd4 mov      rcx, rax
227bd7 add      rax, r8
227bda xor      rcx, r8
227bdd movzx    r8d, bpl
227be1 test     r15b, r15b
227be4 cmove    rax, rcx
227be8 mov      rcx, r14
227beb mov      qword ptr [r14 + 0xf0], rax
227bf2 call     0x1401f1f50
227bf7 mov      eax, eax
227bf9 lea      edx, [r13 - 1]
227bfd imul     rcx, rbx, 0x3e
227c01 mov      r8, r12
227c04 add      rcx, rax
227c07 mov      rax, qword ptr [r14 + 0x4b8]
227c0e movsxd   r9, dword ptr [rax + rcx*4]
227c12 mov      rcx, r14
227c15 movsxd   rax, dword ptr [r14 + 0x4c8]
227c1c xor      r9, rax
227c1f add      r9, qword ptr [r14 + 0x4c0]
227c26 call     r9
227c29 jmp      0x140227cf5
227c2e inc      dword ptr [r14 + 0x11a8]
227c35 mov      rax, r9
227c38 shr      rax, 0x1b
227c3c movzx    ecx, al
227c3f lea      rax, [r11*4]
227c47 mov      byte ptr [r14 + 0x163], cl
227c4e imul     rcx, rdi
227c52 imul     r9, r10
227c56 xor      rcx, rax
227c59 xor      rcx, rsi
227c5c mov      qword ptr [r14 + 0x108], rcx
227c63 mov      r8, qword ptr [r14 + 0x1b8]
227c6a add      r9, rbx
227c6d mov      rax, r9
227c70 shr      rax, 0x1b
227c74 movzx    edx, al
227c77 mov      byte ptr [r14 + 0x16a], dl
227c7e imul     rax, r11, 0xb
227c82 imul     rdx, rdi
227c86 xor      rdx, rax
227c89 xor      rdx, rsi
227c8c mov      rcx, rdx
227c8f xor      rcx, 1
227c93 test     r15b, r15b
227c96 lea      rax, [rdx + 1]
227c9a cmove    rax, rcx
227c9e mov      qword ptr [r14 + 0x140], rax
227ca5 lea      rax, [r8 + 2]
227ca9 mov      qword ptr [r14 + 0x1b8], rax
227cb0 imul     r9, r10
227cb4 add      r9, rbx
227cb7 mov      qword ptr [r14 + 0x1b0], r9
227cbe shr      r9, 0x1b
227cc2 movzx    eax, r9b
227cc6 mov      byte ptr [r14 + 0x160], al
227ccd imul     rax, rdi
227cd1 xor      rax, rsi
227cd4 xor      rax, r11
227cd7 mov      rcx, rax
227cda add      rax, 0xfe1ab
227ce0 xor      rcx, 0xfe1ab
227ce7 test     r15b, r15b
227cea cmove    rax, rcx
227cee mov      qword ptr [r14 + 0xf0], rax
227cf5 mov      rdi, qword ptr [rsp + 0x28]
227cfa mov      rsi, qword ptr [rsp + 0x30]
227cff mov      rbp, qword ptr [rsp + 0x38]
227d04 mov      rbx, qword ptr [rsp + 0x68]
227d09 mov      r15, qword ptr [rsp + 0x20]
227d0e add      rsp, 0x40
227d12 pop      r14
227d14 pop      r13
227d16 pop      r12
227d18 ret      
227d19 mov      edx, 0x54485254
227d1e mov      rcx, r14
227d21 call     0x1401ed830
227d26 int3     
227d27 mov      edx, 0x43414e59
227d2c mov      rcx, r14
227d2f call     0x1401ed830
227d34 int3     
