1fe8a0 push     r12
1fe8a2 push     r13
1fe8a4 push     r14
1fe8a6 sub      rsp, 0x40
1fe8aa movsxd   rax, dword ptr [rcx + 0x11e0]
1fe8b1 mov      r14, rcx
1fe8b4 mov      r13d, edx
1fe8b7 movabs   rcx, 0x4328aeb5b475ce75
1fe8c1 imul     rax, rcx
1fe8c5 movabs   rcx, 0xe171247e35ab4a4a
1fe8cf mov      r12, r8
1fe8d2 xor      rax, qword ptr [r14 + 0x28]
1fe8d6 mov      qword ptr [rsp + 0x60], rax
1fe8db mov      rax, qword ptr [rsp + 0x60]
1fe8e0 movsxd   rax, dword ptr [r14 + 0x11e0]
1fe8e7 imul     rax, rcx
1fe8eb movabs   rcx, 0x7b9ba20b6e0c65f
1fe8f5 xor      rax, qword ptr [r14 + 0x28]
1fe8f9 mov      qword ptr [rsp + 0x60], rax
1fe8fe mov      rax, qword ptr [rsp + 0x60]
1fe903 movsxd   rax, dword ptr [r14 + 0x11e0]
1fe90a imul     rax, rcx
1fe90e xor      rax, qword ptr [r14 + 0x28]
1fe912 mov      qword ptr [rsp + 0x60], rax
1fe917 mov      rax, qword ptr [rsp + 0x60]
1fe91c mov      rax, qword ptr [r14 + 0x2e8]
1fe923 shr      rax, 0xd
1fe927 mov      rcx, rax
1fe92a shr      rcx, 0x21
1fe92e xor      rcx, rax
1fe931 movabs   rax, 0xff51afd7ed558ccd
1fe93b imul     rcx, rax
1fe93f movabs   rax, 0xc4ceb9fe1a85ec53
1fe949 mov      rdx, rcx
1fe94c shr      rdx, 0x21
1fe950 xor      rdx, rcx
1fe953 imul     rdx, rax
1fe957 movabs   rax, 0x3792326cbcf8d65b
1fe961 mov      rcx, rdx
1fe964 shr      rcx, 0x21
1fe968 xor      rcx, rdx
1fe96b xor      rcx, rax
1fe96e mov      rax, qword ptr [r14 + 0x2e8]
1fe975 add      rcx, rax
1fe978 mov      qword ptr [r14 + 0x2e8], rcx
1fe97f mov      rcx, r14
1fe982 call     0x1401ee940
1fe987 mov      rax, qword ptr [r14 + 0x2e8]
1fe98e test     r13d, r13d
1fe991 jns      0x1401ff532
1fe997 cmp      qword ptr [r14 + 0x11b8], r12
1fe99e jne      0x1401ff540
1fe9a4 movsxd   rax, dword ptr [r14 + 0x11e0]
1fe9ab movabs   rcx, 0x9cfdfcd0a2aaa17f
1fe9b5 imul     rax, rcx
1fe9b9 mov      rcx, r14
1fe9bc xor      rax, qword ptr [r14 + 0x28]
1fe9c0 mov      qword ptr [rsp + 0x60], rax
1fe9c5 mov      rax, qword ptr [rsp + 0x60]
1fe9ca call     0x1401ee450
1fe9cf test     eax, eax
1fe9d1 jne      0x1401ff527
1fe9d7 cmp      dword ptr [r14 + 0xad0], eax
1fe9de jne      0x1401ff527
1fe9e4 mov      r8, qword ptr [r14 + 0xf0]
1fe9eb movzx    ecx, byte ptr [r14 + 0x160]
1fe9f3 mov      rax, r8
1fe9f6 mov      r10, qword ptr [r14 + 0xe0]
1fe9fd mov      r11, qword ptr [r14 + 0xd8]
1fea04 mov      r9, qword ptr [r14 + 0x1b0]
1fea0b imul     rcx, r10
1fea0f mov      qword ptr [rsp + 0x68], rbx
1fea14 mov      rbx, qword ptr [r14 + 0xd0]
1fea1b xor      rcx, rbx
1fea1e mov      qword ptr [rsp + 0x38], rbp
1fea23 xor      rcx, r11
1fea26 mov      qword ptr [rsp + 0x30], rsi
1fea2b mov      rsi, qword ptr [r14 + 0x1b8]
1fea32 xor      rax, rcx
1fea35 sub      r8, rcx
1fea38 mov      qword ptr [rsp + 0x28], rdi
1fea3d movzx    edi, byte ptr [r14 + 0xe8]
1fea45 movabs   rbp, 0x2545f4914f6cdd1d
1fea4f test     dil, dil
1fea52 mov      qword ptr [rsp + 0x20], r15
1fea57 movabs   r15, 0x9e3779b97f4a7c15
1fea61 cmove    r8, rax
1fea65 inc      rsi
1fea68 imul     r9, r15
1fea6c mov      qword ptr [r14 + 0x1b8], rsi
1fea73 mov      rcx, r8
1fea76 add      r9, rbp
1fea79 mov      qword ptr [r14 + 0x1b0], r9
1fea80 mov      rax, r9
1fea83 shr      rax, 0x1b
1fea87 movzx    edx, al
1fea8a mov      byte ptr [r14 + 0x160], dl
1fea91 imul     rdx, r10
1fea95 xor      rdx, rbx
1fea98 xor      rdx, r11
1fea9b xor      rcx, rdx
1fea9e test     dil, dil
1feaa1 lea      rax, [r8 + rdx]
1feaa5 cmove    rax, rcx
1feaa9 mov      qword ptr [r14 + 0xf0], rax
1feab0 cmp      r8d, 0x26dc07
1feab7 jne      0x1401ff50e
1feabd mov      eax, r13d
1feac0 btr      eax, 0x1f
1feac4 cmp      eax, 2
1feac7 jae      0x1401feb13
1feac9 imul     r9, r15
1feacd lea      rax, [rsi + 1]
1fead1 mov      qword ptr [r14 + 0x1b8], rax
1fead8 add      r9, rbp
1feadb mov      qword ptr [r14 + 0x1b0], r9
1feae2 shr      r9, 0x1b
1feae6 movzx    eax, r9b
1feaea mov      byte ptr [r14 + 0x160], al
1feaf1 imul     rax, r10
1feaf5 xor      rax, rbx
1feaf8 xor      rax, r11
1feafb mov      rcx, rax
1feafe add      rax, 0x3abaef
1feb04 xor      rcx, 0x3abaef
1feb0b test     dil, dil
1feb0e jmp      0x1401ff503
1feb13 mov      rcx, r14
1feb16 call     0x1401ee070
1feb1b movzx    ecx, byte ptr [r14 + 0x4ad]
1feb23 movabs   rbx, 0xff51afd7ed558ccd
1feb2d xor      rcx, qword ptr [r14 + 0x11e8]
1feb34 movabs   r8, 0xc4ceb9fe1a85ec53
1feb3e mov      r11, qword ptr [r14 + 0xe0]
1feb45 mov      r10, qword ptr [r14 + 0xd0]
1feb4c movzx    r9d, byte ptr [r14 + 0xe8]
1feb54 mov      eax, eax
1feb56 xor      rcx, rax
1feb59 mov      rax, rcx
1feb5c shr      rax, 0x21
1feb60 xor      rax, rcx
1feb63 imul     rax, rbx
1feb67 mov      rcx, rax
1feb6a shr      rcx, 0x21
1feb6e xor      rcx, rax
1feb71 imul     rcx, r8
1feb75 mov      rdx, rcx
1feb78 shr      rdx, 0x21
1feb7c xor      rdx, rcx
1feb7f mov      qword ptr [r14 + 0x11e8], rdx
1feb86 xor      rdx, qword ptr [r14 + 0x28]
1feb8a xor      rdx, qword ptr [r14 + 0x20]
1feb8e mov      rax, rdx
1feb91 shr      rax, 0x21
1feb95 xor      rax, rdx
1feb98 imul     rax, rbx
1feb9c mov      rcx, rax
1feb9f shr      rcx, 0x21
1feba3 xor      rcx, rax
1feba6 imul     rcx, r8
1febaa mov      rax, rcx
1febad shr      rax, 0x21
1febb1 xor      rax, rcx
1febb4 mov      qword ptr [r14 + 0x20], rax
1febb8 mov      rdx, qword ptr [r14 + 0x138]
1febbf movzx    ecx, byte ptr [r14 + 0x169]
1febc7 mov      rax, qword ptr [r14 + 0xd8]
1febce imul     rcx, r11
1febd2 lea      rbx, [rax + rax*4]
1febd6 mov      rax, rdx
1febd9 add      rbx, rbx
1febdc xor      rcx, rbx
1febdf xor      rcx, r10
1febe2 xor      rax, rcx
1febe5 sub      rdx, rcx
1febe8 test     r9b, r9b
1febeb cmove    rdx, rax
1febef mov      rax, qword ptr [r14 + 0x1b0]
1febf6 inc      qword ptr [r14 + 0x1b8]
1febfd imul     rax, r15
1fec01 add      rax, rbp
1fec04 mov      qword ptr [r14 + 0x1b0], rax
1fec0b shr      rax, 0x1b
1fec0f movzx    r8d, al
1fec13 mov      byte ptr [r14 + 0x169], r8b
1fec1a imul     r8, r11
1fec1e xor      r8, rbx
1fec21 xor      r8, r10
1fec24 mov      rcx, r8
1fec27 xor      rcx, rdx
1fec2a test     r9b, r9b
1fec2d lea      rax, [r8 + rdx]
1fec31 cmove    rax, rcx
1fec35 mov      rcx, r14
1fec38 mov      qword ptr [r14 + 0x138], rax
1fec3f call     0x1401f0910
1fec44 mov      rax, qword ptr [r14 + 0xd8]
1fec4b mov      r10, qword ptr [r14 + 0xe0]
1fec52 movzx    ecx, byte ptr [r14 + 0x168]
1fec5a mov      rbx, qword ptr [r14 + 0xd0]
1fec61 mov      rdx, qword ptr [r14 + 0x130]
1fec68 lea      r11, [rax + rax*8]
1fec6c movzx    r9d, byte ptr [r14 + 0xe8]
1fec74 mov      rax, rdx
1fec77 imul     rcx, r10
1fec7b xor      rcx, r11
1fec7e xor      rcx, rbx
1fec81 xor      rax, rcx
1fec84 sub      rdx, rcx
1fec87 test     r9b, r9b
1fec8a cmove    rdx, rax
1fec8e mov      rax, qword ptr [r14 + 0x1b0]
1fec95 inc      qword ptr [r14 + 0x1b8]
1fec9c mov      rcx, rdx
1fec9f imul     rax, r15
1feca3 add      rax, rbp
1feca6 mov      qword ptr [r14 + 0x1b0], rax
1fecad shr      rax, 0x1b
1fecb1 movzx    r8d, al
1fecb5 mov      byte ptr [r14 + 0x168], r8b
1fecbc imul     r8, r10
1fecc0 xor      r8, r11
1fecc3 xor      r8, rbx
1fecc6 xor      rcx, r8
1fecc9 test     r9b, r9b
1feccc lea      rax, [rdx + r8]
1fecd0 cmove    rax, rcx
1fecd4 mov      rcx, r14
1fecd7 mov      qword ptr [r14 + 0x130], rax
1fecde call     0x1401f0910
1fece3 mov      rcx, r14
1fece6 call     0x1401ee070
1feceb cmp      eax, dword ptr [r14 + 0x1d8]
1fecf2 jae      0x1401fecfe
1fecf4 mov      edx, eax
1fecf6 mov      rcx, r14
1fecf9 call     0x1401f0910
1fecfe mov      rsi, qword ptr [r14 + 0xe0]
1fed05 mov      rbp, qword ptr [r14 + 0xd0]
1fed0c mov      r11, qword ptr [r14 + 0x130]
1fed13 movzx    edi, byte ptr [r14 + 0xe8]
1fed1b mov      rax, r11
1fed1e movzx    ecx, byte ptr [r14 + 0x168]
1fed26 mov      rbx, qword ptr [r14 + 0xd8]
1fed2d mov      r8, qword ptr [r14 + 0x1b8]
1fed34 mov      r10, qword ptr [r14 + 0x1b0]
1fed3b imul     rcx, rsi
1fed3f lea      r9, [rbx + rbx*8]
1fed43 xor      rcx, r9
1fed46 xor      rcx, rbp
1fed49 xor      rax, rcx
1fed4c sub      r11, rcx
1fed4f test     dil, dil
1fed52 movabs   rcx, 0x2545f4914f6cdd1d
1fed5c cmove    r11, rax
1fed60 imul     r10, r15
1fed64 add      r10, rcx
1fed67 mov      rcx, r11
1fed6a mov      rax, r10
1fed6d shr      rax, 0x1b
1fed71 movzx    edx, al
1fed74 mov      byte ptr [r14 + 0x168], dl
1fed7b imul     rdx, rsi
1fed7f xor      rdx, r9
1fed82 xor      rdx, rbp
1fed85 xor      rcx, rdx
1fed88 test     dil, dil
1fed8b lea      rax, [r11 + rdx]
1fed8f cmove    rax, rcx
1fed93 mov      rcx, r11
1fed96 mov      qword ptr [r14 + 0x130], rax
1fed9d movabs   rax, 0x2545f4914f6cdd1d
1feda7 imul     r10, r15
1fedab add      r10, rax
1fedae lea      rax, [r8 + 2]
1fedb2 mov      qword ptr [r14 + 0x1b8], rax
1fedb9 mov      r8d, 0xad3d
1fedbf mov      qword ptr [r14 + 0x1b0], r10
1fedc6 lea      rax, [rbx + rbx*4]
1fedca add      rax, rax
1fedcd shr      r10, 0x1b
1fedd1 movzx    edx, r10b
1fedd5 mov      byte ptr [r14 + 0x169], dl
1feddc imul     rdx, rsi
1fede0 xor      rdx, rax
1fede3 xor      rdx, rbp
1fede6 xor      rcx, rdx
1fede9 test     dil, dil
1fedec lea      rax, [r11 + rdx]
1fedf0 cmove    rax, rcx
1fedf4 mov      rcx, r14
1fedf7 mov      qword ptr [r14 + 0x138], rax
1fedfe movzx    edx, byte ptr [r14 + 0x4ad]
1fee06 xor      rdx, qword ptr [r14 + 0x348]
1fee0d call     0x1401f1520
1fee12 mov      r8, qword ptr [r14 + 0x348]
1fee19 movabs   rdi, 0xff51afd7ed558ccd
1fee23 mov      rax, r8
1fee26 movabs   rsi, 0xc4ceb9fe1a85ec53
1fee30 xor      rax, qword ptr [r14 + 0x20]
1fee34 mov      rcx, rax
1fee37 shr      rcx, 0x21
1fee3b xor      rcx, rax
1fee3e imul     rcx, rdi
1fee42 mov      rax, rcx
1fee45 shr      rax, 0x21
1fee49 xor      rax, rcx
1fee4c imul     rax, rsi
1fee50 mov      rdx, rax
1fee53 shr      rdx, 0x21
1fee57 xor      edx, eax
1fee59 lea      eax, [rdx + 1]
1fee5c mov      ecx, eax
1fee5e xor      eax, edx
1fee60 imul     ecx, edx
1fee63 not      ecx
1fee65 and      ecx, eax
1fee67 test     cl, 1
1fee6a je       0x1401feedd
1fee6c and      r8b, 3
1fee70 cmp      r8b, 1
1fee74 jne      0x1401feedd
1fee76 mov      rax, qword ptr [r14 + 0x1b0]
1fee7d movabs   rcx, 0x2545f4914f6cdd1d
1fee87 inc      qword ptr [r14 + 0x1b8]
1fee8e imul     rax, r15
1fee92 add      rax, rcx
1fee95 mov      qword ptr [r14 + 0x1b0], rax
1fee9c shr      rax, 0x1b
1feea0 movzx    eax, al
1feea3 mov      byte ptr [r14 + 0x160], al
1feeaa imul     rax, qword ptr [r14 + 0xe0]
1feeb2 xor      rax, qword ptr [r14 + 0xd8]
1feeb9 xor      rax, qword ptr [r14 + 0xd0]
1feec0 mov      rcx, rax
1feec3 add      rax, 0x17ed28
1feec9 xor      rcx, 0x17ed28
1feed0 cmp      byte ptr [r14 + 0xe8], 0
1feed8 jmp      0x1401ff503
1feedd mov      rcx, r14
1feee0 call     0x1401ee070
1feee5 mov      ebx, eax
1feee7 cmp      eax, dword ptr [r14 + 0x1d8]
1feeee jb       0x1401fef57
1feef0 mov      rax, qword ptr [r14 + 0x1b0]
1feef7 movabs   rcx, 0x2545f4914f6cdd1d
1fef01 inc      qword ptr [r14 + 0x1b8]
1fef08 imul     rax, r15
1fef0c add      rax, rcx
1fef0f mov      qword ptr [r14 + 0x1b0], rax
1fef16 shr      rax, 0x1b
1fef1a movzx    eax, al
1fef1d mov      byte ptr [r14 + 0x160], al
1fef24 imul     rax, qword ptr [r14 + 0xe0]
1fef2c xor      rax, qword ptr [r14 + 0xd8]
1fef33 xor      rax, qword ptr [r14 + 0xd0]
1fef3a mov      rcx, rax
1fef3d add      rax, 0xfe1ab
1fef43 xor      rcx, 0xfe1ab
1fef4a cmp      byte ptr [r14 + 0xe8], 0
1fef52 jmp      0x1401ff503
1fef57 mov      edx, ebx
1fef59 mov      rcx, r14
1fef5c call     0x1401f25b0
1fef61 movsxd   rcx, dword ptr [r14 + 0x11e0]
1fef68 movabs   r8, 0xd6e8feb86659fd93
1fef72 mov      rdx, qword ptr [r14 + 0x20]
1fef76 mov      rax, rbx
1fef79 imul     rax, r8
1fef7d imul     rcx, r15
1fef81 rol      rdx, 0x11
1fef85 xor      rax, rdx
1fef88 xor      rcx, qword ptr [r14 + 0x260]
1fef8f xor      rax, rcx
1fef92 mov      rcx, rax
1fef95 shr      rcx, 0x21
1fef99 xor      rcx, rax
1fef9c imul     rcx, rdi
1fefa0 mov      rdx, rcx
1fefa3 shr      rdx, 0x21
1fefa7 xor      rdx, rcx
1fefaa imul     rdx, rsi
1fefae mov      rax, rdx
1fefb1 shr      rax, 0x21
1fefb5 xor      rax, rdx
1fefb8 mov      r10, rax
1fefbb shr      r10, 0x1d
1fefbf xor      r10, rax
1fefc2 or       r10, 1
1fefc6 mov      rax, r10
1fefc9 mov      qword ptr [r14 + 0x260], r10
1fefd0 and      eax, 0x3ff
1fefd5 cmp      rax, 0x2c5
1fefdb jne      0x1401fefec
1fefdd mov      rcx, r14
1fefe0 call     0x1402297e0
1fefe5 mov      r10, qword ptr [r14 + 0x260]
1fefec movzx    eax, r10b
1feff0 and      al, 0x1f
1feff2 cmp      al, 0x15
1feff4 jne      0x1401ff0e1
1feffa movsxd   rax, dword ptr [r14 + 0x11e0]
1ff001 xor      rax, 0x5a5a
1ff007 mov      rcx, qword ptr [r14 + 0x20]
1ff00b imul     rax, r15
1ff00f rol      rcx, 0x11
1ff013 xor      rax, r10
1ff016 xor      rcx, rax
1ff019 movabs   rax, 0x8f70feda99a6026d
1ff023 xor      rcx, rax
1ff026 mov      rax, rcx
1ff029 shr      rax, 0x21
1ff02d xor      rax, rcx
1ff030 imul     rax, rdi
1ff034 mov      rcx, rax
1ff037 shr      rcx, 0x21
1ff03b xor      rcx, rax
1ff03e imul     rcx, rsi
1ff042 mov      rax, rcx
1ff045 shr      rax, 0x21
1ff049 xor      rax, rcx
1ff04c mov      r9, rax
1ff04f shr      r9, 0x1d
1ff053 xor      r9, rax
1ff056 or       r9, 1
1ff05a mov      rax, r9
1ff05d mov      rcx, r9
1ff060 shr      rax, 8
1ff064 and      eax, 3
1ff067 shr      rcx, 0x28
1ff06b imul     r8, rax, 0x3e
1ff06f mov      eax, 0x8421085
1ff074 mul      ecx
1ff076 mov      eax, ecx
1ff078 sub      eax, edx
1ff07a shr      eax, 1
1ff07c add      eax, edx
1ff07e shr      eax, 5
1ff081 imul     eax, eax, 0x3e
1ff084 sub      ecx, eax
1ff086 mov      eax, ecx
1ff088 add      r8, rax
1ff08b mov      rax, qword ptr [r14 + 0x4b8]
1ff092 movsxd   rcx, dword ptr [rax + r8*4]
1ff096 movsxd   rax, dword ptr [r14 + 0x4c8]
1ff09d xor      rcx, rax
1ff0a0 add      rcx, qword ptr [r14 + 0x4c0]
1ff0a7 xor      rcx, r9
1ff0aa mov      rax, rcx
1ff0ad shr      rax, 0x21
1ff0b1 xor      rax, rcx
1ff0b4 imul     rax, rdi
1ff0b8 mov      rcx, rax
1ff0bb shr      rcx, 0x21
1ff0bf xor      rcx, rax
1ff0c2 imul     rcx, rsi
1ff0c6 mov      rax, rcx
1ff0c9 shr      rax, 0x21
1ff0cd xor      rax, rcx
1ff0d0 xor      rax, r10
1ff0d3 inc      qword ptr [r14 + 0x268]
1ff0da mov      qword ptr [r14 + 0x260], rax
1ff0e1 inc      dword ptr [r14 + 0x200]
1ff0e8 mov      eax, dword ptr [r14 + 0x200]
1ff0ef cmp      eax, dword ptr [r14 + 0x1fc]
1ff0f6 jb       0x1401ff10b
1ff0f8 mov      rcx, r14
1ff0fb mov      dword ptr [r14 + 0x200], 0
1ff106 call     0x1401ef7c0
1ff10b mov      r8d, ebx
1ff10e mov      edx, ebx
1ff110 mov      rcx, r14
1ff113 call     0x1401f0660
1ff118 inc      qword ptr [r14 + 0x1b8]
1ff11f movabs   rax, 0x2545f4914f6cdd1d
1ff129 mov      r9, qword ptr [r14 + 0x1b0]
1ff130 mov      r10, qword ptr [r14 + 0x1b8]
1ff137 imul     r9, r15
1ff13b add      r9, rax
1ff13e mov      qword ptr [r14 + 0x1b0], r9
1ff145 mov      rax, r9
1ff148 shr      rax, 0x1b
1ff14c movzx    edx, al
1ff14f mov      byte ptr [r14 + 0x168], dl
1ff156 mov      rdi, qword ptr [r14 + 0xe0]
1ff15d mov      r11, qword ptr [r14 + 0xd8]
1ff164 mov      rsi, qword ptr [r14 + 0xd0]
1ff16b movzx    r15d, byte ptr [r14 + 0xe8]
1ff173 imul     rdx, rdi
1ff177 lea      rax, [r11 + r11*8]
1ff17b xor      rdx, rax
1ff17e xor      rdx, rsi
1ff181 mov      rcx, rdx
1ff184 xor      rcx, rbx
1ff187 test     r15b, r15b
1ff18a lea      rax, [rdx + rbx]
1ff18e cmove    rax, rcx
1ff192 inc      r10
1ff195 mov      qword ptr [r14 + 0x130], rax
1ff19c mov      rcx, qword ptr [r14 + 0x1d0]
1ff1a3 mov      rax, qword ptr [r14 + 0x48]
1ff1a7 mov      qword ptr [rsp + 0x78], r10
1ff1ac movzx    r8d, byte ptr [rcx + rbx]
1ff1b1 xor      r8b, byte ptr [rax + rbx]
1ff1b5 inc      ebx
1ff1b7 mov      qword ptr [r14 + 0x1b8], r10
1ff1be movabs   rax, 0x9e3779b97f4a7c15
1ff1c8 imul     r9, rax
1ff1cc mov      qword ptr [rsp + 0x60], rbx
1ff1d1 movabs   rax, 0x2545f4914f6cdd1d
1ff1db add      r9, rax
1ff1de mov      rax, r9
1ff1e1 shr      rax, 0x1b
1ff1e5 movzx    edx, al
1ff1e8 lea      rax, [r11 + r11]
1ff1ec mov      byte ptr [r14 + 0x161], dl
1ff1f3 imul     rdx, rdi
1ff1f7 xor      rdx, rax
1ff1fa xor      rdx, rsi
1ff1fd mov      rcx, rdx
1ff200 xor      rcx, rbx
1ff203 test     r15b, r15b
1ff206 lea      rax, [rdx + rbx]
1ff20a cmove    rax, rcx
1ff20e mov      qword ptr [r14 + 0xf8], rax
1ff215 movsxd   rdx, dword ptr [r14 + 0x11e0]
1ff21c mov      r10, qword ptr [r14 + 0x20]
1ff220 mov      rcx, rdx
1ff223 xor      rcx, qword ptr [r14 + 0x350]
1ff22a xor      rcx, r10
1ff22d xor      rcx, rbx
1ff230 movabs   rbx, 0xff51afd7ed558ccd
1ff23a xor      rcx, qword ptr [r14 + 0x348]
1ff241 mov      rax, rcx
1ff244 shr      rax, 0x21
1ff248 xor      rax, rcx
1ff24b imul     rax, rbx
1ff24f mov      rcx, rax
1ff252 shr      rcx, 0x21
1ff256 xor      rcx, rax
1ff259 movabs   rax, 0xc4ceb9fe1a85ec53
1ff263 imul     rcx, rax
1ff267 movzx    eax, r8b
1ff26b mov      rbx, rcx
1ff26e shr      rbx, 0x21
1ff272 xor      rbx, rcx
1ff275 lea      rcx, [rip - 0x1ff27c]
1ff27c xor      rax, 0xdd
1ff282 mov      qword ptr [r14 + 0x28], rbx
1ff286 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
1ff28e xor      bpl, 0x63
1ff292 movabs   r8, 0xff51afd7ed558ccd
1ff29c inc      edx
1ff29e mov      dword ptr [r14 + 0x11e0], edx
1ff2a5 test     dl, 0x1f
1ff2a8 jne      0x1401ff2ee
1ff2aa movsxd   rax, edx
1ff2ad xor      rax, r10
1ff2b0 xor      rax, qword ptr [r14 + 0x348]
1ff2b7 mov      rcx, rax
1ff2ba shr      rcx, 0x21
1ff2be xor      rcx, rax
1ff2c1 movabs   rax, 0xc4ceb9fe1a85ec53
1ff2cb imul     rcx, r8
1ff2cf mov      rdx, rcx
1ff2d2 shr      rdx, 0x21
1ff2d6 xor      rdx, rcx
1ff2d9 imul     rdx, rax
1ff2dd mov      rax, rdx
1ff2e0 shr      rax, 0x21
1ff2e4 xor      rax, rdx
1ff2e7 mov      qword ptr [r14 + 0x348], rax
1ff2ee movzx    edx, bpl
1ff2f2 xor      r10, rdx
1ff2f5 mov      byte ptr [r14 + 0x4ad], bpl
1ff2fc xor      r10, qword ptr [rsp + 0x60]
1ff301 mov      rax, r10
1ff304 shr      rax, 0x21
1ff308 xor      rax, r10
1ff30b movabs   r10, 0x9e3779b97f4a7c15
1ff315 imul     rax, r8
1ff319 imul     rdx, r10
1ff31d imul     r9, r10
1ff321 mov      rcx, rax
1ff324 shr      rcx, 0x21
1ff328 xor      rcx, rax
1ff32b movabs   rax, 0xc4ceb9fe1a85ec53
1ff335 imul     rcx, rax
1ff339 mov      rax, rcx
1ff33c shr      rax, 0x21
1ff340 xor      rax, rcx
1ff343 mov      ecx, dword ptr [r14 + 0x1178]
1ff34a mov      qword ptr [r14 + 0x20], rax
1ff34e movabs   rax, 0xd6e8feb86659fd93
1ff358 imul     rcx, rax
1ff35c xor      rcx, rdx
1ff35f xor      rcx, rbx
1ff362 movabs   rbx, 0x2545f4914f6cdd1d
1ff36c mov      rax, rcx
1ff36f add      r9, rbx
1ff372 shr      rax, 0x21
1ff376 xor      rax, rcx
1ff379 imul     rax, r8
1ff37d mov      rdx, rax
1ff380 shr      rdx, 0x21
1ff384 xor      rdx, rax
1ff387 movabs   rax, 0xc4ceb9fe1a85ec53
1ff391 imul     rdx, rax
1ff395 mov      rax, qword ptr [rsp + 0x78]
1ff39a shr      rdx, 0x21
1ff39e and      edx, 3
1ff3a1 inc      rax
1ff3a4 mov      qword ptr [r14 + 0x1b8], rax
1ff3ab cmp      bpl, 0x3e
1ff3af jae      0x1401ff447
1ff3b5 inc      qword ptr [r14 + 0x11a0]
1ff3bc lea      rax, [rip - 0x1ff3c3]
1ff3c3 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
1ff3cb mov      qword ptr [r14 + 0x1b0], r9
1ff3d2 shr      r9, 0x1b
1ff3d6 movzx    eax, r9b
1ff3da mov      byte ptr [r14 + 0x160], al
1ff3e1 imul     rax, rdi
1ff3e5 mov      ebx, edx
1ff3e7 xor      rax, rsi
1ff3ea xor      rax, r11
1ff3ed mov      rcx, rax
1ff3f0 add      rax, r8
1ff3f3 xor      rcx, r8
1ff3f6 movzx    r8d, bpl
1ff3fa test     r15b, r15b
1ff3fd cmove    rax, rcx
1ff401 mov      rcx, r14
1ff404 mov      qword ptr [r14 + 0xf0], rax
1ff40b call     0x1401f1f50
1ff410 mov      eax, eax
1ff412 lea      edx, [r13 - 1]
1ff416 imul     rcx, rbx, 0x3e
1ff41a mov      r8, r12
1ff41d add      rcx, rax
1ff420 mov      rax, qword ptr [r14 + 0x4b8]
1ff427 movsxd   r9, dword ptr [rax + rcx*4]
1ff42b mov      rcx, r14
1ff42e movsxd   rax, dword ptr [r14 + 0x4c8]
1ff435 xor      r9, rax
1ff438 add      r9, qword ptr [r14 + 0x4c0]
1ff43f call     r9
1ff442 jmp      0x1401ff50e
1ff447 inc      dword ptr [r14 + 0x11a8]
1ff44e mov      rax, r9
1ff451 shr      rax, 0x1b
1ff455 movzx    ecx, al
1ff458 lea      rax, [r11*4]
1ff460 mov      byte ptr [r14 + 0x163], cl
1ff467 imul     rcx, rdi
1ff46b imul     r9, r10
1ff46f xor      rcx, rax
1ff472 xor      rcx, rsi
1ff475 mov      qword ptr [r14 + 0x108], rcx
1ff47c mov      r8, qword ptr [r14 + 0x1b8]
1ff483 add      r9, rbx
1ff486 mov      rax, r9
1ff489 shr      rax, 0x1b
1ff48d movzx    edx, al
1ff490 mov      byte ptr [r14 + 0x16a], dl
1ff497 imul     rax, r11, 0xb
1ff49b imul     rdx, rdi
1ff49f xor      rdx, rax
1ff4a2 xor      rdx, rsi
1ff4a5 mov      rcx, rdx
1ff4a8 xor      rcx, 1
1ff4ac test     r15b, r15b
1ff4af lea      rax, [rdx + 1]
1ff4b3 cmove    rax, rcx
1ff4b7 mov      qword ptr [r14 + 0x140], rax
1ff4be lea      rax, [r8 + 2]
1ff4c2 mov      qword ptr [r14 + 0x1b8], rax
1ff4c9 imul     r9, r10
1ff4cd add      r9, rbx
1ff4d0 mov      qword ptr [r14 + 0x1b0], r9
1ff4d7 shr      r9, 0x1b
1ff4db movzx    eax, r9b
1ff4df mov      byte ptr [r14 + 0x160], al
1ff4e6 imul     rax, rdi
1ff4ea xor      rax, rsi
1ff4ed xor      rax, r11
1ff4f0 mov      rcx, rax
1ff4f3 add      rax, 0xfe1ab
1ff4f9 xor      rcx, 0xfe1ab
1ff500 test     r15b, r15b
1ff503 cmove    rax, rcx
1ff507 mov      qword ptr [r14 + 0xf0], rax
1ff50e mov      rdi, qword ptr [rsp + 0x28]
1ff513 mov      rsi, qword ptr [rsp + 0x30]
1ff518 mov      rbp, qword ptr [rsp + 0x38]
1ff51d mov      rbx, qword ptr [rsp + 0x68]
1ff522 mov      r15, qword ptr [rsp + 0x20]
1ff527 add      rsp, 0x40
1ff52b pop      r14
1ff52d pop      r13
1ff52f pop      r12
1ff531 ret      
1ff532 mov      edx, 0x54485254
1ff537 mov      rcx, r14
1ff53a call     0x1401ed830
1ff53f int3     
1ff540 mov      edx, 0x43414e59
1ff545 mov      rcx, r14
1ff548 call     0x1401ed830
1ff54d int3     
