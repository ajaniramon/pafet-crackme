216f40 mov      qword ptr [rsp + 0x18], r8
216f45 mov      dword ptr [rsp + 0x10], edx
216f49 push     rbx
216f4a push     rbp
216f4b push     rdi
216f4c push     r12
216f4e push     r13
216f50 push     r14
216f52 push     r15
216f54 sub      rsp, 0x20
216f58 movsxd   rax, dword ptr [rcx + 0x11e0]
216f5f mov      r14, rcx
216f62 mov      ebp, edx
216f64 movabs   rcx, 0x9801a1ed1bafc8d8
216f6e imul     rax, rcx
216f72 movabs   rcx, 0x3a582b269a714ce7
216f7c movabs   r15, 0x9e3779b97f4a7c15
216f86 xor      rax, qword ptr [r14 + 0x28]
216f8a movabs   r12, 0x2545f4914f6cdd1d
216f94 mov      qword ptr [rsp + 0x60], rax
216f99 movabs   r13, 0xff51afd7ed558ccd
216fa3 mov      rax, qword ptr [rsp + 0x60]
216fa8 mov      rdi, r8
216fab movsxd   rax, dword ptr [r14 + 0x11e0]
216fb2 imul     rax, rcx
216fb6 movabs   rcx, 0xdc90b578193ac0f2
216fc0 xor      rax, qword ptr [r14 + 0x28]
216fc4 mov      qword ptr [rsp + 0x60], rax
216fc9 mov      rax, qword ptr [rsp + 0x60]
216fce movsxd   rax, dword ptr [r14 + 0x11e0]
216fd5 imul     rax, rcx
216fd9 movabs   rcx, 0xa82a29a111b7d8dc
216fe3 xor      rax, qword ptr [r14 + 0x28]
216fe7 mov      qword ptr [rsp + 0x60], rax
216fec mov      rax, qword ptr [rsp + 0x60]
216ff1 mov      rax, qword ptr [r14 + 0x2f0]
216ff8 xor      rax, rcx
216ffb mov      rcx, rax
216ffe shr      rcx, 0x21
217002 xor      rcx, rax
217005 movabs   rax, 0xc4ceb9fe1a85ec53
21700f imul     rcx, r13
217013 mov      rdx, rcx
217016 shr      rdx, 0x21
21701a xor      rdx, rcx
21701d imul     rdx, rax
217021 mov      rax, rdx
217024 shr      rax, 0x21
217028 xor      rdx, rax
21702b mov      rax, qword ptr [r14 + 0x2f0]
217032 shr      rax, 7
217036 add      rax, rdx
217039 mov      qword ptr [r14 + 0x2f0], rax
217040 mov      rbx, qword ptr [r14 + 0x1b0]
217047 mov      rdx, qword ptr [r14 + 0x1b8]
21704e imul     rbx, r15
217052 add      rbx, r12
217055 mov      rax, rbx
217058 shr      rax, 0x1b
21705c movzx    ecx, al
21705f mov      byte ptr [r14 + 0x163], cl
217066 mov      r10, qword ptr [r14 + 0xe0]
21706d mov      r8, qword ptr [r14 + 0xd8]
217074 mov      r9, qword ptr [r14 + 0xd0]
21707b movzx    r11d, byte ptr [r14 + 0xe8]
217083 imul     rcx, r10
217087 imul     rbx, r15
21708b lea      rax, [r8*4]
217093 xor      rcx, rax
217096 xor      rcx, r9
217099 mov      qword ptr [r14 + 0x108], rcx
2170a0 add      rbx, r12
2170a3 mov      rax, rbx
2170a6 shr      rax, 0x1b
2170aa movzx    eax, al
2170ad mov      byte ptr [r14 + 0x160], al
2170b4 imul     rax, r10
2170b8 xor      rax, r9
2170bb xor      rax, r8
2170be mov      rcx, rax
2170c1 add      rax, 0xfe1ab
2170c7 xor      rcx, 0xfe1ab
2170ce test     r11b, r11b
2170d1 cmove    rax, rcx
2170d5 mov      qword ptr [r14 + 0xf0], rax
2170dc lea      rax, [rdx + 3]
2170e0 imul     rbx, r15
2170e4 mov      qword ptr [r14 + 0x1b8], rax
2170eb add      rbx, r12
2170ee mov      qword ptr [r14 + 0x1b0], rbx
2170f5 shr      rbx, 0x1b
2170f9 imul     rax, r8, 0xb
2170fd movzx    edx, bl
217100 mov      byte ptr [r14 + 0x16a], dl
217107 imul     rdx, r10
21710b xor      rdx, rax
21710e xor      rdx, r9
217111 mov      rcx, rdx
217114 xor      rcx, 1
217118 test     r11b, r11b
21711b lea      rax, [rdx + 1]
21711f cmove    rax, rcx
217123 mov      qword ptr [r14 + 0x140], rax
21712a mov      rax, qword ptr [r14 + 0x2f0]
217131 test     ebp, ebp
217133 jns      0x140217c53
217139 cmp      qword ptr [r14 + 0x11b8], rdi
217140 jne      0x140217c61
217146 movsxd   rax, dword ptr [r14 + 0x11e0]
21714d movabs   rcx, 0xfa79b6bd619820a5
217157 imul     rax, rcx
21715b mov      rcx, r14
21715e xor      rax, qword ptr [r14 + 0x28]
217162 mov      qword ptr [rsp + 0x60], rax
217167 mov      rax, qword ptr [rsp + 0x60]
21716c call     0x1401ee450
217171 test     eax, eax
217173 jne      0x140217c43
217179 cmp      dword ptr [r14 + 0xad0], eax
217180 jne      0x140217c43
217186 mov      r8, qword ptr [r14 + 0xf0]
21718d movzx    ecx, byte ptr [r14 + 0x160]
217195 mov      rax, r8
217198 mov      r10, qword ptr [r14 + 0xe0]
21719f mov      rbx, qword ptr [r14 + 0xd0]
2171a6 mov      r11, qword ptr [r14 + 0xd8]
2171ad movzx    edi, byte ptr [r14 + 0xe8]
2171b5 mov      r9, qword ptr [r14 + 0x1b0]
2171bc imul     rcx, r10
2171c0 mov      qword ptr [rsp + 0x78], rsi
2171c5 mov      rsi, qword ptr [r14 + 0x1b8]
2171cc xor      rcx, rbx
2171cf xor      rcx, r11
2171d2 xor      rax, rcx
2171d5 sub      r8, rcx
2171d8 test     dil, dil
2171db cmove    r8, rax
2171df inc      rsi
2171e2 imul     r9, r15
2171e6 mov      qword ptr [r14 + 0x1b8], rsi
2171ed add      r9, r12
2171f0 mov      qword ptr [r14 + 0x1b0], r9
2171f7 mov      rax, r9
2171fa shr      rax, 0x1b
2171fe movzx    edx, al
217201 mov      byte ptr [r14 + 0x160], dl
217208 imul     rdx, r10
21720c xor      rdx, rbx
21720f xor      rdx, r11
217212 mov      rcx, rdx
217215 xor      rcx, r8
217218 test     dil, dil
21721b lea      rax, [rdx + r8]
21721f cmove    rax, rcx
217223 mov      qword ptr [r14 + 0xf0], rax
21722a cmp      r8d, 0x48cad
217231 jne      0x140217c3e
217237 mov      eax, ebp
217239 btr      eax, 0x1f
21723d cmp      eax, 2
217240 jae      0x14021728c
217242 imul     r9, r15
217246 lea      rax, [rsi + 1]
21724a mov      qword ptr [r14 + 0x1b8], rax
217251 add      r9, r12
217254 mov      qword ptr [r14 + 0x1b0], r9
21725b shr      r9, 0x1b
21725f movzx    eax, r9b
217263 mov      byte ptr [r14 + 0x160], al
21726a imul     rax, r10
21726e xor      rax, rbx
217271 xor      rax, r11
217274 mov      rcx, rax
217277 add      rax, 0xf6105
21727d xor      rcx, 0xf6105
217284 test     dil, dil
217287 jmp      0x140217c33
21728c mov      rcx, r14
21728f call     0x1401ee070
217294 movzx    ecx, byte ptr [r14 + 0x4ad]
21729c movabs   r8, 0xc4ceb9fe1a85ec53
2172a6 mov      r11, qword ptr [r14 + 0xe0]
2172ad mov      r9, qword ptr [r14 + 0xd0]
2172b4 movzx    r10d, byte ptr [r14 + 0xe8]
2172bc mov      eax, eax
2172be xor      rcx, rax
2172c1 xor      rcx, qword ptr [r14 + 0x11e8]
2172c8 mov      rax, rcx
2172cb shr      rax, 0x21
2172cf xor      rax, rcx
2172d2 imul     rax, r13
2172d6 mov      rcx, rax
2172d9 shr      rcx, 0x21
2172dd xor      rcx, rax
2172e0 mov      rax, qword ptr [r14 + 0x20]
2172e4 xor      rax, qword ptr [r14 + 0x28]
2172e8 imul     rcx, r8
2172ec mov      rdx, rcx
2172ef shr      rdx, 0x21
2172f3 xor      rdx, rcx
2172f6 xor      rax, rdx
2172f9 mov      qword ptr [r14 + 0x11e8], rdx
217300 mov      rcx, rax
217303 shr      rcx, 0x21
217307 xor      rcx, rax
21730a imul     rcx, r13
21730e mov      rdx, rcx
217311 shr      rdx, 0x21
217315 xor      rdx, rcx
217318 imul     rdx, r8
21731c mov      rax, rdx
21731f shr      rax, 0x21
217323 xor      rax, rdx
217326 mov      qword ptr [r14 + 0x20], rax
21732a mov      rdx, qword ptr [r14 + 0x138]
217331 movzx    ecx, byte ptr [r14 + 0x169]
217339 mov      rax, qword ptr [r14 + 0xd8]
217340 imul     rcx, r11
217344 lea      rbx, [rax + rax*4]
217348 mov      rax, rdx
21734b xor      rcx, r9
21734e add      rbx, rbx
217351 xor      rcx, rbx
217354 xor      rax, rcx
217357 sub      rdx, rcx
21735a test     r10b, r10b
21735d cmove    rdx, rax
217361 mov      rax, qword ptr [r14 + 0x1b0]
217368 inc      qword ptr [r14 + 0x1b8]
21736f imul     rax, r15
217373 add      rax, r12
217376 mov      qword ptr [r14 + 0x1b0], rax
21737d shr      rax, 0x1b
217381 movzx    r8d, al
217385 mov      byte ptr [r14 + 0x169], r8b
21738c imul     r8, r11
217390 xor      r8, r9
217393 xor      r8, rbx
217396 mov      rcx, r8
217399 xor      rcx, rdx
21739c test     r10b, r10b
21739f lea      rax, [r8 + rdx]
2173a3 cmove    rax, rcx
2173a7 mov      rcx, r14
2173aa mov      qword ptr [r14 + 0x138], rax
2173b1 call     0x1401f0910
2173b6 mov      rax, qword ptr [r14 + 0xd8]
2173bd mov      r11, qword ptr [r14 + 0xe0]
2173c4 movzx    ecx, byte ptr [r14 + 0x168]
2173cc mov      r9, qword ptr [r14 + 0xd0]
2173d3 mov      rdx, qword ptr [r14 + 0x130]
2173da lea      rbx, [rax + rax*8]
2173de movzx    r10d, byte ptr [r14 + 0xe8]
2173e6 mov      rax, rdx
2173e9 imul     rcx, r11
2173ed xor      rcx, r9
2173f0 xor      rcx, rbx
2173f3 xor      rax, rcx
2173f6 sub      rdx, rcx
2173f9 test     r10b, r10b
2173fc cmove    rdx, rax
217400 mov      rax, qword ptr [r14 + 0x1b0]
217407 inc      qword ptr [r14 + 0x1b8]
21740e mov      rcx, rdx
217411 imul     rax, r15
217415 add      rax, r12
217418 mov      qword ptr [r14 + 0x1b0], rax
21741f shr      rax, 0x1b
217423 movzx    r8d, al
217427 mov      byte ptr [r14 + 0x168], r8b
21742e imul     r8, r11
217432 xor      r8, r9
217435 xor      r8, rbx
217438 xor      rcx, r8
21743b test     r10b, r10b
21743e lea      rax, [rdx + r8]
217442 cmove    rax, rcx
217446 mov      rcx, r14
217449 mov      qword ptr [r14 + 0x130], rax
217450 call     0x1401f0910
217455 mov      rcx, r14
217458 call     0x1401ee070
21745d cmp      eax, dword ptr [r14 + 0x1d8]
217464 jae      0x140217470
217466 mov      edx, eax
217468 mov      rcx, r14
21746b call     0x1401f0910
217470 mov      rsi, qword ptr [r14 + 0xe0]
217477 mov      rbp, qword ptr [r14 + 0xd0]
21747e mov      r11, qword ptr [r14 + 0x130]
217485 movzx    edi, byte ptr [r14 + 0xe8]
21748d mov      rax, r11
217490 movzx    ecx, byte ptr [r14 + 0x168]
217498 mov      rbx, qword ptr [r14 + 0xd8]
21749f mov      r8, qword ptr [r14 + 0x1b8]
2174a6 mov      r9, qword ptr [r14 + 0x1b0]
2174ad imul     rcx, rsi
2174b1 lea      r10, [rbx + rbx*8]
2174b5 xor      rcx, rbp
2174b8 xor      rcx, r10
2174bb xor      rax, rcx
2174be sub      r11, rcx
2174c1 test     dil, dil
2174c4 cmove    r11, rax
2174c8 imul     r9, r15
2174cc mov      rcx, r11
2174cf add      r9, r12
2174d2 mov      rax, r9
2174d5 shr      rax, 0x1b
2174d9 movzx    edx, al
2174dc mov      byte ptr [r14 + 0x168], dl
2174e3 imul     rdx, rsi
2174e7 xor      rdx, rbp
2174ea xor      rdx, r10
2174ed xor      rcx, rdx
2174f0 test     dil, dil
2174f3 lea      rax, [r11 + rdx]
2174f7 cmove    rax, rcx
2174fb mov      rcx, r11
2174fe mov      qword ptr [r14 + 0x130], rax
217505 lea      rax, [r8 + 2]
217509 mov      qword ptr [r14 + 0x1b8], rax
217510 mov      r8d, 0x437a
217516 imul     r9, r15
21751a lea      rax, [rbx + rbx*4]
21751e add      rax, rax
217521 add      r9, r12
217524 mov      qword ptr [r14 + 0x1b0], r9
21752b shr      r9, 0x1b
21752f movzx    edx, r9b
217533 mov      byte ptr [r14 + 0x169], dl
21753a imul     rdx, rsi
21753e xor      rdx, rax
217541 xor      rdx, rbp
217544 xor      rcx, rdx
217547 test     dil, dil
21754a lea      rax, [r11 + rdx]
21754e cmove    rax, rcx
217552 mov      rcx, r14
217555 mov      qword ptr [r14 + 0x138], rax
21755c movzx    edx, byte ptr [r14 + 0x4ad]
217564 xor      rdx, qword ptr [r14 + 0x348]
21756b call     0x1401f1520
217570 mov      r8, qword ptr [r14 + 0x348]
217577 movabs   rdi, 0xc4ceb9fe1a85ec53
217581 mov      rax, r8
217584 xor      rax, qword ptr [r14 + 0x20]
217588 mov      rcx, rax
21758b shr      rcx, 0x21
21758f xor      rcx, rax
217592 imul     rcx, r13
217596 mov      rax, rcx
217599 shr      rax, 0x21
21759d xor      rax, rcx
2175a0 imul     rax, rdi
2175a4 mov      rdx, rax
2175a7 shr      rdx, 0x21
2175ab xor      edx, eax
2175ad mov      ecx, edx
2175af lea      eax, [rdx + 1]
2175b2 imul     ecx, eax
2175b5 xor      edx, eax
2175b7 not      ecx
2175b9 and      ecx, edx
2175bb test     cl, 1
2175be je       0x140217627
2175c0 and      r8b, 3
2175c4 cmp      r8b, 1
2175c8 jne      0x140217627
2175ca mov      rax, qword ptr [r14 + 0x1b0]
2175d1 inc      qword ptr [r14 + 0x1b8]
2175d8 imul     rax, r15
2175dc add      rax, r12
2175df mov      qword ptr [r14 + 0x1b0], rax
2175e6 shr      rax, 0x1b
2175ea movzx    eax, al
2175ed mov      byte ptr [r14 + 0x160], al
2175f4 imul     rax, qword ptr [r14 + 0xe0]
2175fc xor      rax, qword ptr [r14 + 0xd0]
217603 xor      rax, qword ptr [r14 + 0xd8]
21760a mov      rcx, rax
21760d add      rax, 0x116fdf
217613 xor      rcx, 0x116fdf
21761a cmp      byte ptr [r14 + 0xe8], 0
217622 jmp      0x140217c33
217627 mov      rcx, r14
21762a call     0x1401ee070
21762f mov      ebx, eax
217631 cmp      eax, dword ptr [r14 + 0x1d8]
217638 jb       0x140217697
21763a mov      rax, qword ptr [r14 + 0x1b0]
217641 inc      qword ptr [r14 + 0x1b8]
217648 imul     rax, r15
21764c add      rax, r12
21764f mov      qword ptr [r14 + 0x1b0], rax
217656 shr      rax, 0x1b
21765a movzx    eax, al
21765d mov      byte ptr [r14 + 0x160], al
217664 imul     rax, qword ptr [r14 + 0xe0]
21766c xor      rax, qword ptr [r14 + 0xd0]
217673 xor      rax, qword ptr [r14 + 0xd8]
21767a mov      rcx, rax
21767d add      rax, 0xfe1ab
217683 xor      rcx, 0xfe1ab
21768a cmp      byte ptr [r14 + 0xe8], 0
217692 jmp      0x140217c33
217697 mov      edx, ebx
217699 mov      rcx, r14
21769c call     0x1401f25b0
2176a1 movsxd   rcx, dword ptr [r14 + 0x11e0]
2176a8 movabs   r8, 0xd6e8feb86659fd93
2176b2 mov      rdx, qword ptr [r14 + 0x20]
2176b6 mov      rax, rbx
2176b9 imul     rax, r8
2176bd imul     rcx, r15
2176c1 rol      rdx, 0x11
2176c5 xor      rcx, qword ptr [r14 + 0x260]
2176cc xor      rax, rcx
2176cf xor      rax, rdx
2176d2 mov      rcx, rax
2176d5 shr      rcx, 0x21
2176d9 xor      rcx, rax
2176dc imul     rcx, r13
2176e0 mov      rdx, rcx
2176e3 shr      rdx, 0x21
2176e7 xor      rdx, rcx
2176ea imul     rdx, rdi
2176ee mov      rax, rdx
2176f1 shr      rax, 0x21
2176f5 xor      rax, rdx
2176f8 mov      r10, rax
2176fb shr      r10, 0x1d
2176ff xor      r10, rax
217702 or       r10, 1
217706 mov      rax, r10
217709 mov      qword ptr [r14 + 0x260], r10
217710 and      eax, 0x3ff
217715 cmp      rax, 0x2c5
21771b jne      0x14021772c
21771d mov      rcx, r14
217720 call     0x1402297e0
217725 mov      r10, qword ptr [r14 + 0x260]
21772c movzx    eax, r10b
217730 and      al, 0x1f
217732 cmp      al, 0x15
217734 jne      0x140217822
21773a movsxd   rcx, dword ptr [r14 + 0x11e0]
217741 mov      rax, qword ptr [r14 + 0x20]
217745 xor      rcx, 0x5a5a
21774c rol      rax, 0x11
217750 imul     rcx, r15
217754 xor      rcx, r10
217757 xor      rcx, rax
21775a movabs   rax, 0x8f70feda99a6026d
217764 xor      rcx, rax
217767 mov      rax, rcx
21776a shr      rax, 0x21
21776e xor      rax, rcx
217771 imul     rax, r13
217775 mov      rcx, rax
217778 shr      rcx, 0x21
21777c xor      rcx, rax
21777f imul     rcx, rdi
217783 mov      rax, rcx
217786 shr      rax, 0x21
21778a xor      rax, rcx
21778d mov      r9, rax
217790 shr      r9, 0x1d
217794 xor      r9, rax
217797 or       r9, 1
21779b mov      rax, r9
21779e mov      rcx, r9
2177a1 shr      rax, 8
2177a5 and      eax, 3
2177a8 shr      rcx, 0x28
2177ac imul     r8, rax, 0x3e
2177b0 mov      eax, 0x8421085
2177b5 mul      ecx
2177b7 mov      eax, ecx
2177b9 sub      eax, edx
2177bb shr      eax, 1
2177bd add      eax, edx
2177bf shr      eax, 5
2177c2 imul     eax, eax, 0x3e
2177c5 sub      ecx, eax
2177c7 mov      eax, ecx
2177c9 add      r8, rax
2177cc mov      rax, qword ptr [r14 + 0x4b8]
2177d3 movsxd   rcx, dword ptr [rax + r8*4]
2177d7 movsxd   rax, dword ptr [r14 + 0x4c8]
2177de xor      rcx, rax
2177e1 add      rcx, qword ptr [r14 + 0x4c0]
2177e8 xor      rcx, r9
2177eb mov      rax, rcx
2177ee shr      rax, 0x21
2177f2 xor      rax, rcx
2177f5 imul     rax, r13
2177f9 mov      rcx, rax
2177fc shr      rcx, 0x21
217800 xor      rcx, rax
217803 imul     rcx, rdi
217807 mov      rax, rcx
21780a shr      rax, 0x21
21780e xor      rax, r10
217811 xor      rax, rcx
217814 inc      qword ptr [r14 + 0x268]
21781b mov      qword ptr [r14 + 0x260], rax
217822 inc      dword ptr [r14 + 0x200]
217829 mov      eax, dword ptr [r14 + 0x200]
217830 cmp      eax, dword ptr [r14 + 0x1fc]
217837 jb       0x14021784c
217839 mov      rcx, r14
21783c mov      dword ptr [r14 + 0x200], 0
217847 call     0x1401ef7c0
21784c mov      r8d, ebx
21784f mov      edx, ebx
217851 mov      rcx, r14
217854 call     0x1401f0660
217859 inc      qword ptr [r14 + 0x1b8]
217860 mov      r9, qword ptr [r14 + 0x1b0]
217867 mov      r13, qword ptr [r14 + 0x1b8]
21786e imul     r9, r15
217872 add      r9, r12
217875 lea      r12d, [rbx + 1]
217879 mov      qword ptr [r14 + 0x1b0], r9
217880 mov      rax, r9
217883 shr      rax, 0x1b
217887 movzx    edx, al
21788a mov      byte ptr [r14 + 0x168], dl
217891 mov      r11, qword ptr [r14 + 0xe0]
217898 mov      r10, qword ptr [r14 + 0xd8]
21789f mov      rdi, qword ptr [r14 + 0xd0]
2178a6 movzx    ebp, byte ptr [r14 + 0xe8]
2178ae imul     rdx, r11
2178b2 lea      rax, [r10 + r10*8]
2178b6 xor      rdx, rax
2178b9 xor      rdx, rdi
2178bc mov      rcx, rdx
2178bf xor      rcx, rbx
2178c2 test     bpl, bpl
2178c5 lea      rax, [rdx + rbx]
2178c9 cmove    rax, rcx
2178cd inc      r13
2178d0 mov      qword ptr [r14 + 0x130], rax
2178d7 mov      rcx, qword ptr [r14 + 0x1d0]
2178de mov      rax, qword ptr [r14 + 0x48]
2178e2 imul     r9, r15
2178e6 movzx    r8d, byte ptr [rcx + rbx]
2178eb xor      r8b, byte ptr [rax + rbx]
2178ef movabs   rax, 0x2545f4914f6cdd1d
2178f9 add      r9, rax
2178fc mov      qword ptr [r14 + 0x1b8], r13
217903 mov      rax, r9
217906 shr      rax, 0x1b
21790a movzx    edx, al
21790d lea      rax, [r10 + r10]
217911 mov      byte ptr [r14 + 0x161], dl
217918 imul     rdx, r11
21791c xor      rdx, rax
21791f xor      rdx, rdi
217922 mov      rcx, rdx
217925 xor      rcx, r12
217928 test     bpl, bpl
21792b lea      rax, [rdx + r12]
21792f cmove    rax, rcx
217933 mov      qword ptr [r14 + 0xf8], rax
21793a movsxd   rdx, dword ptr [r14 + 0x11e0]
217941 mov      rbx, qword ptr [r14 + 0x20]
217945 mov      rcx, rdx
217948 xor      rcx, qword ptr [r14 + 0x350]
21794f xor      rcx, r12
217952 xor      rcx, qword ptr [r14 + 0x348]
217959 xor      rcx, rbx
21795c mov      rax, rcx
21795f shr      rax, 0x21
217963 xor      rax, rcx
217966 movabs   rcx, 0xff51afd7ed558ccd
217970 imul     rax, rcx
217974 mov      rcx, rax
217977 shr      rcx, 0x21
21797b xor      rcx, rax
21797e movabs   rax, 0xc4ceb9fe1a85ec53
217988 imul     rcx, rax
21798c movzx    eax, r8b
217990 xor      rax, 0xdd
217996 mov      r15, rcx
217999 shr      r15, 0x21
21799d xor      r15, rcx
2179a0 lea      rcx, [rip - 0x2179a7]
2179a7 mov      qword ptr [r14 + 0x28], r15
2179ab movzx    esi, byte ptr [rax + rcx + 0x3ecf00]
2179b3 xor      sil, 0x63
2179b7 inc      edx
2179b9 mov      dword ptr [r14 + 0x11e0], edx
2179c0 test     dl, 0x1f
2179c3 jne      0x140217a13
2179c5 movsxd   rax, edx
2179c8 xor      rax, qword ptr [r14 + 0x348]
2179cf xor      rax, rbx
2179d2 mov      rcx, rax
2179d5 shr      rcx, 0x21
2179d9 xor      rcx, rax
2179dc movabs   rax, 0xff51afd7ed558ccd
2179e6 imul     rcx, rax
2179ea movabs   rax, 0xc4ceb9fe1a85ec53
2179f4 mov      rdx, rcx
2179f7 shr      rdx, 0x21
2179fb xor      rdx, rcx
2179fe imul     rdx, rax
217a02 mov      rax, rdx
217a05 shr      rax, 0x21
217a09 xor      rax, rdx
217a0c mov      qword ptr [r14 + 0x348], rax
217a13 movzx    r8d, sil
217a17 mov      eax, r8d
217a1a mov      byte ptr [r14 + 0x4ad], sil
217a21 xor      rax, r12
217a24 movabs   r12, 0xff51afd7ed558ccd
217a2e xor      rax, rbx
217a31 movabs   rbx, 0x9e3779b97f4a7c15
217a3b mov      rcx, rax
217a3e shr      rcx, 0x21
217a42 xor      rcx, rax
217a45 movabs   rax, 0xc4ceb9fe1a85ec53
217a4f imul     rcx, r12
217a53 imul     r8, rbx
217a57 imul     r9, rbx
217a5b mov      rdx, rcx
217a5e shr      rdx, 0x21
217a62 xor      rdx, rcx
217a65 mov      ecx, dword ptr [r14 + 0x1178]
217a6c imul     rdx, rax
217a70 mov      rax, rdx
217a73 shr      rax, 0x21
217a77 xor      rax, rdx
217a7a mov      qword ptr [r14 + 0x20], rax
217a7e movabs   rax, 0xd6e8feb86659fd93
217a88 imul     rcx, rax
217a8c xor      rcx, r8
217a8f xor      rcx, r15
217a92 movabs   r15, 0x2545f4914f6cdd1d
217a9c mov      rax, rcx
217a9f add      r9, r15
217aa2 shr      rax, 0x21
217aa6 xor      rax, rcx
217aa9 imul     rax, r12
217aad mov      rdx, rax
217ab0 shr      rdx, 0x21
217ab4 xor      rdx, rax
217ab7 movabs   rax, 0xc4ceb9fe1a85ec53
217ac1 imul     rdx, rax
217ac5 lea      rax, [r13 + 1]
217ac9 shr      rdx, 0x21
217acd and      edx, 3
217ad0 mov      qword ptr [r14 + 0x1b8], rax
217ad7 cmp      sil, 0x3e
217adb jae      0x140217b77
217ae1 inc      qword ptr [r14 + 0x11a0]
217ae8 lea      rax, [rip - 0x217aef]
217aef mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
217af7 mov      qword ptr [r14 + 0x1b0], r9
217afe shr      r9, 0x1b
217b02 movzx    eax, r9b
217b06 mov      byte ptr [r14 + 0x160], al
217b0d imul     rax, r11
217b11 mov      ebx, edx
217b13 xor      rax, rdi
217b16 xor      rax, r10
217b19 mov      rcx, rax
217b1c add      rax, r8
217b1f xor      rcx, r8
217b22 movzx    r8d, sil
217b26 test     bpl, bpl
217b29 cmove    rax, rcx
217b2d mov      rcx, r14
217b30 mov      qword ptr [r14 + 0xf0], rax
217b37 call     0x1401f1f50
217b3c mov      edx, dword ptr [rsp + 0x68]
217b40 mov      r8, qword ptr [rsp + 0x70]
217b45 dec      edx
217b47 mov      eax, eax
217b49 imul     rcx, rbx, 0x3e
217b4d add      rcx, rax
217b50 mov      rax, qword ptr [r14 + 0x4b8]
217b57 movsxd   r9, dword ptr [rax + rcx*4]
217b5b mov      rcx, r14
217b5e movsxd   rax, dword ptr [r14 + 0x4c8]
217b65 xor      r9, rax
217b68 add      r9, qword ptr [r14 + 0x4c0]
217b6f call     r9
217b72 jmp      0x140217c3e
217b77 inc      dword ptr [r14 + 0x11a8]
217b7e mov      rax, r9
217b81 shr      rax, 0x1b
217b85 movzx    ecx, al
217b88 lea      rax, [r10*4]
217b90 mov      byte ptr [r14 + 0x163], cl
217b97 imul     rcx, r11
217b9b imul     r9, rbx
217b9f xor      rcx, rax
217ba2 xor      rcx, rdi
217ba5 mov      qword ptr [r14 + 0x108], rcx
217bac mov      r8, qword ptr [r14 + 0x1b8]
217bb3 add      r9, r15
217bb6 mov      rax, r9
217bb9 shr      rax, 0x1b
217bbd movzx    edx, al
217bc0 mov      byte ptr [r14 + 0x16a], dl
217bc7 imul     rax, r10, 0xb
217bcb imul     rdx, r11
217bcf xor      rdx, rax
217bd2 xor      rdx, rdi
217bd5 mov      rcx, rdx
217bd8 xor      rcx, 1
217bdc test     bpl, bpl
217bdf lea      rax, [rdx + 1]
217be3 cmove    rax, rcx
217be7 mov      qword ptr [r14 + 0x140], rax
217bee lea      rax, [r8 + 2]
217bf2 mov      qword ptr [r14 + 0x1b8], rax
217bf9 imul     r9, rbx
217bfd add      r9, r15
217c00 mov      qword ptr [r14 + 0x1b0], r9
217c07 shr      r9, 0x1b
217c0b movzx    eax, r9b
217c0f mov      byte ptr [r14 + 0x160], al
217c16 imul     rax, r11
217c1a xor      rax, rdi
217c1d xor      rax, r10
217c20 mov      rcx, rax
217c23 add      rax, 0xfe1ab
217c29 xor      rcx, 0xfe1ab
217c30 test     bpl, bpl
217c33 cmove    rax, rcx
217c37 mov      qword ptr [r14 + 0xf0], rax
217c3e mov      rsi, qword ptr [rsp + 0x78]
217c43 add      rsp, 0x20
217c47 pop      r15
217c49 pop      r14
217c4b pop      r13
217c4d pop      r12
217c4f pop      rdi
217c50 pop      rbp
217c51 pop      rbx
217c52 ret      
217c53 mov      edx, 0x54485254
217c58 mov      rcx, r14
217c5b call     0x1401ed830
217c60 int3     
217c61 mov      edx, 0x43414e59
217c66 mov      rcx, r14
217c69 call     0x1401ed830
217c6e int3     
