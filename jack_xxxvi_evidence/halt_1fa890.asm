1fa890 mov      qword ptr [rsp + 0x18], r8
1fa895 mov      dword ptr [rsp + 0x10], edx
1fa899 push     rbx
1fa89a push     rbp
1fa89b push     rdi
1fa89c push     r12
1fa89e push     r13
1fa8a0 push     r14
1fa8a2 push     r15
1fa8a4 sub      rsp, 0x20
1fa8a8 movsxd   rax, dword ptr [rcx + 0x11e0]
1fa8af mov      r14, rcx
1fa8b2 mov      ebp, edx
1fa8b4 movabs   rcx, 0x9801a1ed1bafc8d8
1fa8be imul     rax, rcx
1fa8c2 movabs   rcx, 0x3a582b269a714ce7
1fa8cc movabs   r15, 0x9e3779b97f4a7c15
1fa8d6 xor      rax, qword ptr [r14 + 0x28]
1fa8da movabs   r12, 0x2545f4914f6cdd1d
1fa8e4 mov      qword ptr [rsp + 0x60], rax
1fa8e9 movabs   r13, 0xff51afd7ed558ccd
1fa8f3 mov      rax, qword ptr [rsp + 0x60]
1fa8f8 mov      rdi, r8
1fa8fb movsxd   rax, dword ptr [r14 + 0x11e0]
1fa902 imul     rax, rcx
1fa906 movabs   rcx, 0xdc90b578193ac0f2
1fa910 xor      rax, qword ptr [r14 + 0x28]
1fa914 mov      qword ptr [rsp + 0x60], rax
1fa919 mov      rax, qword ptr [rsp + 0x60]
1fa91e movsxd   rax, dword ptr [r14 + 0x11e0]
1fa925 imul     rax, rcx
1fa929 xor      rax, qword ptr [r14 + 0x28]
1fa92d mov      qword ptr [rsp + 0x60], rax
1fa932 mov      rax, qword ptr [rsp + 0x60]
1fa937 mov      rax, qword ptr [r14 + 0x2e0]
1fa93e shr      rax, 0xd
1fa942 mov      rcx, rax
1fa945 shr      rcx, 0x21
1fa949 xor      rcx, rax
1fa94c movabs   rax, 0xc4ceb9fe1a85ec53
1fa956 imul     rcx, r13
1fa95a mov      rdx, rcx
1fa95d shr      rdx, 0x21
1fa961 xor      rdx, rcx
1fa964 imul     rdx, rax
1fa968 movabs   rax, 0xecbb3d341322d0f6
1fa972 mov      rcx, rdx
1fa975 shr      rcx, 0x21
1fa979 xor      rcx, rdx
1fa97c xor      rcx, rax
1fa97f mov      rax, qword ptr [r14 + 0x2e0]
1fa986 add      rcx, rax
1fa989 mov      qword ptr [r14 + 0x2e0], rcx
1fa990 mov      rbx, qword ptr [r14 + 0x1b0]
1fa997 mov      rdx, qword ptr [r14 + 0x1b8]
1fa99e imul     rbx, r15
1fa9a2 add      rbx, r12
1fa9a5 mov      rax, rbx
1fa9a8 shr      rax, 0x1b
1fa9ac movzx    ecx, al
1fa9af mov      byte ptr [r14 + 0x163], cl
1fa9b6 mov      r10, qword ptr [r14 + 0xe0]
1fa9bd mov      r8, qword ptr [r14 + 0xd8]
1fa9c4 mov      r9, qword ptr [r14 + 0xd0]
1fa9cb movzx    r11d, byte ptr [r14 + 0xe8]
1fa9d3 imul     rcx, r10
1fa9d7 imul     rbx, r15
1fa9db lea      rax, [r8*4]
1fa9e3 xor      rcx, rax
1fa9e6 xor      rcx, r9
1fa9e9 mov      qword ptr [r14 + 0x108], rcx
1fa9f0 add      rbx, r12
1fa9f3 mov      rax, rbx
1fa9f6 shr      rax, 0x1b
1fa9fa movzx    eax, al
1fa9fd mov      byte ptr [r14 + 0x160], al
1faa04 imul     rax, r10
1faa08 xor      rax, r9
1faa0b xor      rax, r8
1faa0e mov      rcx, rax
1faa11 add      rax, 0xfe1ab
1faa17 xor      rcx, 0xfe1ab
1faa1e test     r11b, r11b
1faa21 cmove    rax, rcx
1faa25 mov      qword ptr [r14 + 0xf0], rax
1faa2c lea      rax, [rdx + 3]
1faa30 imul     rbx, r15
1faa34 mov      qword ptr [r14 + 0x1b8], rax
1faa3b add      rbx, r12
1faa3e mov      qword ptr [r14 + 0x1b0], rbx
1faa45 shr      rbx, 0x1b
1faa49 imul     rax, r8, 0xb
1faa4d movzx    edx, bl
1faa50 mov      byte ptr [r14 + 0x16a], dl
1faa57 imul     rdx, r10
1faa5b xor      rdx, rax
1faa5e xor      rdx, r9
1faa61 mov      rcx, rdx
1faa64 xor      rcx, 1
1faa68 test     r11b, r11b
1faa6b lea      rax, [rdx + 1]
1faa6f cmove    rax, rcx
1faa73 mov      qword ptr [r14 + 0x140], rax
1faa7a mov      rax, qword ptr [r14 + 0x2e0]
1faa81 test     ebp, ebp
1faa83 jns      0x1401fb5a0
1faa89 cmp      qword ptr [r14 + 0x11b8], rdi
1faa90 jne      0x1401fb5ae
1faa96 movsxd   rax, dword ptr [r14 + 0x11e0]
1faa9d movabs   rcx, 0x94e23445b5ffb3c4
1faaa7 imul     rax, rcx
1faaab mov      rcx, r14
1faaae xor      rax, qword ptr [r14 + 0x28]
1faab2 mov      qword ptr [rsp + 0x60], rax
1faab7 mov      rax, qword ptr [rsp + 0x60]
1faabc call     0x1401ee450
1faac1 test     eax, eax
1faac3 jne      0x1401fb590
1faac9 cmp      dword ptr [r14 + 0xad0], eax
1faad0 jne      0x1401fb590
1faad6 mov      r8, qword ptr [r14 + 0xf0]
1faadd movzx    ecx, byte ptr [r14 + 0x160]
1faae5 mov      rax, r8
1faae8 mov      r10, qword ptr [r14 + 0xe0]
1faaef mov      rbx, qword ptr [r14 + 0xd0]
1faaf6 mov      r11, qword ptr [r14 + 0xd8]
1faafd movzx    edi, byte ptr [r14 + 0xe8]
1fab05 mov      r9, qword ptr [r14 + 0x1b0]
1fab0c imul     rcx, r10
1fab10 mov      qword ptr [rsp + 0x78], rsi
1fab15 mov      rsi, qword ptr [r14 + 0x1b8]
1fab1c xor      rcx, rbx
1fab1f xor      rcx, r11
1fab22 xor      rax, rcx
1fab25 sub      r8, rcx
1fab28 test     dil, dil
1fab2b cmove    r8, rax
1fab2f inc      rsi
1fab32 imul     r9, r15
1fab36 mov      qword ptr [r14 + 0x1b8], rsi
1fab3d add      r9, r12
1fab40 mov      qword ptr [r14 + 0x1b0], r9
1fab47 mov      rax, r9
1fab4a shr      rax, 0x1b
1fab4e movzx    edx, al
1fab51 mov      byte ptr [r14 + 0x160], dl
1fab58 imul     rdx, r10
1fab5c xor      rdx, rbx
1fab5f xor      rdx, r11
1fab62 mov      rcx, rdx
1fab65 xor      rcx, r8
1fab68 test     dil, dil
1fab6b lea      rax, [rdx + r8]
1fab6f cmove    rax, rcx
1fab73 mov      qword ptr [r14 + 0xf0], rax
1fab7a cmp      r8d, 0x26dc07
1fab81 jne      0x1401fb58b
1fab87 mov      eax, ebp
1fab89 btr      eax, 0x1f
1fab8d cmp      eax, 2
1fab90 jae      0x1401fabdc
1fab92 imul     r9, r15
1fab96 lea      rax, [rsi + 1]
1fab9a mov      qword ptr [r14 + 0x1b8], rax
1faba1 add      r9, r12
1faba4 mov      qword ptr [r14 + 0x1b0], r9
1fabab shr      r9, 0x1b
1fabaf movzx    eax, r9b
1fabb3 mov      byte ptr [r14 + 0x160], al
1fabba imul     rax, r10
1fabbe xor      rax, rbx
1fabc1 xor      rax, r11
1fabc4 mov      rcx, rax
1fabc7 add      rax, 0x3abaef
1fabcd xor      rcx, 0x3abaef
1fabd4 test     dil, dil
1fabd7 jmp      0x1401fb580
1fabdc mov      rcx, r14
1fabdf call     0x1401ee070
1fabe4 movzx    ecx, byte ptr [r14 + 0x4ad]
1fabec movabs   r8, 0xc4ceb9fe1a85ec53
1fabf6 mov      r11, qword ptr [r14 + 0xe0]
1fabfd mov      r9, qword ptr [r14 + 0xd0]
1fac04 movzx    r10d, byte ptr [r14 + 0xe8]
1fac0c mov      eax, eax
1fac0e xor      rcx, rax
1fac11 xor      rcx, qword ptr [r14 + 0x11e8]
1fac18 mov      rax, rcx
1fac1b shr      rax, 0x21
1fac1f xor      rax, rcx
1fac22 imul     rax, r13
1fac26 mov      rcx, rax
1fac29 shr      rcx, 0x21
1fac2d xor      rcx, rax
1fac30 imul     rcx, r8
1fac34 mov      rdx, rcx
1fac37 shr      rdx, 0x21
1fac3b xor      rdx, rcx
1fac3e mov      qword ptr [r14 + 0x11e8], rdx
1fac45 xor      rdx, qword ptr [r14 + 0x28]
1fac49 xor      rdx, qword ptr [r14 + 0x20]
1fac4d mov      rax, rdx
1fac50 shr      rax, 0x21
1fac54 xor      rax, rdx
1fac57 imul     rax, r13
1fac5b mov      rcx, rax
1fac5e shr      rcx, 0x21
1fac62 xor      rcx, rax
1fac65 imul     rcx, r8
1fac69 mov      rax, rcx
1fac6c shr      rax, 0x21
1fac70 xor      rax, rcx
1fac73 mov      qword ptr [r14 + 0x20], rax
1fac77 mov      rdx, qword ptr [r14 + 0x138]
1fac7e movzx    ecx, byte ptr [r14 + 0x169]
1fac86 mov      rax, qword ptr [r14 + 0xd8]
1fac8d imul     rcx, r11
1fac91 lea      rbx, [rax + rax*4]
1fac95 mov      rax, rdx
1fac98 xor      rcx, r9
1fac9b add      rbx, rbx
1fac9e xor      rcx, rbx
1faca1 xor      rax, rcx
1faca4 sub      rdx, rcx
1faca7 test     r10b, r10b
1facaa cmove    rdx, rax
1facae mov      rax, qword ptr [r14 + 0x1b0]
1facb5 inc      qword ptr [r14 + 0x1b8]
1facbc imul     rax, r15
1facc0 add      rax, r12
1facc3 mov      qword ptr [r14 + 0x1b0], rax
1facca shr      rax, 0x1b
1facce movzx    r8d, al
1facd2 mov      byte ptr [r14 + 0x169], r8b
1facd9 imul     r8, r11
1facdd xor      r8, r9
1face0 xor      r8, rbx
1face3 mov      rcx, r8
1face6 xor      rcx, rdx
1face9 test     r10b, r10b
1facec lea      rax, [r8 + rdx]
1facf0 cmove    rax, rcx
1facf4 mov      rcx, r14
1facf7 mov      qword ptr [r14 + 0x138], rax
1facfe call     0x1401f0910
1fad03 mov      rax, qword ptr [r14 + 0xd8]
1fad0a mov      rdx, qword ptr [r14 + 0x130]
1fad11 mov      r11, qword ptr [r14 + 0xe0]
1fad18 movzx    ecx, byte ptr [r14 + 0x168]
1fad20 mov      r9, qword ptr [r14 + 0xd0]
1fad27 lea      rbx, [rax + rax*8]
1fad2b movzx    r10d, byte ptr [r14 + 0xe8]
1fad33 mov      rax, rdx
1fad36 imul     rcx, r11
1fad3a xor      rcx, r9
1fad3d xor      rcx, rbx
1fad40 xor      rax, rcx
1fad43 sub      rdx, rcx
1fad46 test     r10b, r10b
1fad49 cmove    rdx, rax
1fad4d mov      rax, qword ptr [r14 + 0x1b0]
1fad54 inc      qword ptr [r14 + 0x1b8]
1fad5b mov      rcx, rdx
1fad5e imul     rax, r15
1fad62 add      rax, r12
1fad65 mov      qword ptr [r14 + 0x1b0], rax
1fad6c shr      rax, 0x1b
1fad70 movzx    r8d, al
1fad74 mov      byte ptr [r14 + 0x168], r8b
1fad7b imul     r8, r11
1fad7f xor      r8, r9
1fad82 xor      r8, rbx
1fad85 xor      rcx, r8
1fad88 test     r10b, r10b
1fad8b lea      rax, [rdx + r8]
1fad8f cmove    rax, rcx
1fad93 mov      rcx, r14
1fad96 mov      qword ptr [r14 + 0x130], rax
1fad9d call     0x1401f0910
1fada2 mov      rcx, r14
1fada5 call     0x1401ee070
1fadaa cmp      eax, dword ptr [r14 + 0x1d8]
1fadb1 jae      0x1401fadbd
1fadb3 mov      edx, eax
1fadb5 mov      rcx, r14
1fadb8 call     0x1401f0910
1fadbd mov      rsi, qword ptr [r14 + 0xe0]
1fadc4 mov      rbp, qword ptr [r14 + 0xd0]
1fadcb mov      r11, qword ptr [r14 + 0x130]
1fadd2 movzx    edi, byte ptr [r14 + 0xe8]
1fadda mov      rax, r11
1faddd movzx    ecx, byte ptr [r14 + 0x168]
1fade5 mov      rbx, qword ptr [r14 + 0xd8]
1fadec mov      r8, qword ptr [r14 + 0x1b8]
1fadf3 mov      r9, qword ptr [r14 + 0x1b0]
1fadfa imul     rcx, rsi
1fadfe lea      r10, [rbx + rbx*8]
1fae02 xor      rcx, rbp
1fae05 xor      rcx, r10
1fae08 xor      rax, rcx
1fae0b sub      r11, rcx
1fae0e test     dil, dil
1fae11 cmove    r11, rax
1fae15 imul     r9, r15
1fae19 mov      rcx, r11
1fae1c add      r9, r12
1fae1f mov      rax, r9
1fae22 shr      rax, 0x1b
1fae26 movzx    edx, al
1fae29 mov      byte ptr [r14 + 0x168], dl
1fae30 imul     rdx, rsi
1fae34 xor      rdx, rbp
1fae37 xor      rdx, r10
1fae3a xor      rcx, rdx
1fae3d test     dil, dil
1fae40 lea      rax, [r11 + rdx]
1fae44 cmove    rax, rcx
1fae48 mov      rcx, r11
1fae4b mov      qword ptr [r14 + 0x130], rax
1fae52 lea      rax, [r8 + 2]
1fae56 mov      qword ptr [r14 + 0x1b8], rax
1fae5d mov      r8d, 0x65a8
1fae63 imul     r9, r15
1fae67 lea      rax, [rbx + rbx*4]
1fae6b add      rax, rax
1fae6e add      r9, r12
1fae71 mov      qword ptr [r14 + 0x1b0], r9
1fae78 shr      r9, 0x1b
1fae7c movzx    edx, r9b
1fae80 mov      byte ptr [r14 + 0x169], dl
1fae87 imul     rdx, rsi
1fae8b xor      rdx, rax
1fae8e xor      rdx, rbp
1fae91 xor      rcx, rdx
1fae94 test     dil, dil
1fae97 lea      rax, [r11 + rdx]
1fae9b cmove    rax, rcx
1fae9f mov      rcx, r14
1faea2 mov      qword ptr [r14 + 0x138], rax
1faea9 movzx    edx, byte ptr [r14 + 0x4ad]
1faeb1 xor      rdx, qword ptr [r14 + 0x348]
1faeb8 call     0x1401f1520
1faebd mov      r8, qword ptr [r14 + 0x348]
1faec4 movabs   rdi, 0xc4ceb9fe1a85ec53
1faece mov      rax, r8
1faed1 xor      rax, qword ptr [r14 + 0x20]
1faed5 mov      rcx, rax
1faed8 shr      rcx, 0x21
1faedc xor      rcx, rax
1faedf imul     rcx, r13
1faee3 mov      rax, rcx
1faee6 shr      rax, 0x21
1faeea xor      rax, rcx
1faeed imul     rax, rdi
1faef1 mov      rdx, rax
1faef4 shr      rdx, 0x21
1faef8 xor      edx, eax
1faefa mov      ecx, edx
1faefc lea      eax, [rdx + 1]
1faeff imul     ecx, eax
1faf02 xor      edx, eax
1faf04 not      ecx
1faf06 and      ecx, edx
1faf08 test     cl, 1
1faf0b je       0x1401faf74
1faf0d and      r8b, 3
1faf11 cmp      r8b, 1
1faf15 jne      0x1401faf74
1faf17 mov      rax, qword ptr [r14 + 0x1b0]
1faf1e inc      qword ptr [r14 + 0x1b8]
1faf25 imul     rax, r15
1faf29 add      rax, r12
1faf2c mov      qword ptr [r14 + 0x1b0], rax
1faf33 shr      rax, 0x1b
1faf37 movzx    eax, al
1faf3a mov      byte ptr [r14 + 0x160], al
1faf41 imul     rax, qword ptr [r14 + 0xe0]
1faf49 xor      rax, qword ptr [r14 + 0xd0]
1faf50 xor      rax, qword ptr [r14 + 0xd8]
1faf57 mov      rcx, rax
1faf5a add      rax, 0x17ed28
1faf60 xor      rcx, 0x17ed28
1faf67 cmp      byte ptr [r14 + 0xe8], 0
1faf6f jmp      0x1401fb580
1faf74 mov      rcx, r14
1faf77 call     0x1401ee070
1faf7c mov      ebx, eax
1faf7e cmp      eax, dword ptr [r14 + 0x1d8]
1faf85 jb       0x1401fafe4
1faf87 mov      rax, qword ptr [r14 + 0x1b0]
1faf8e inc      qword ptr [r14 + 0x1b8]
1faf95 imul     rax, r15
1faf99 add      rax, r12
1faf9c mov      qword ptr [r14 + 0x1b0], rax
1fafa3 shr      rax, 0x1b
1fafa7 movzx    eax, al
1fafaa mov      byte ptr [r14 + 0x160], al
1fafb1 imul     rax, qword ptr [r14 + 0xe0]
1fafb9 xor      rax, qword ptr [r14 + 0xd0]
1fafc0 xor      rax, qword ptr [r14 + 0xd8]
1fafc7 mov      rcx, rax
1fafca add      rax, 0xfe1ab
1fafd0 xor      rcx, 0xfe1ab
1fafd7 cmp      byte ptr [r14 + 0xe8], 0
1fafdf jmp      0x1401fb580
1fafe4 mov      edx, ebx
1fafe6 mov      rcx, r14
1fafe9 call     0x1401f25b0
1fafee movsxd   rcx, dword ptr [r14 + 0x11e0]
1faff5 movabs   r8, 0xd6e8feb86659fd93
1fafff mov      rdx, qword ptr [r14 + 0x20]
1fb003 mov      rax, rbx
1fb006 imul     rax, r8
1fb00a imul     rcx, r15
1fb00e rol      rdx, 0x11
1fb012 xor      rcx, qword ptr [r14 + 0x260]
1fb019 xor      rax, rcx
1fb01c xor      rax, rdx
1fb01f mov      rcx, rax
1fb022 shr      rcx, 0x21
1fb026 xor      rcx, rax
1fb029 imul     rcx, r13
1fb02d mov      rdx, rcx
1fb030 shr      rdx, 0x21
1fb034 xor      rdx, rcx
1fb037 imul     rdx, rdi
1fb03b mov      rax, rdx
1fb03e shr      rax, 0x21
1fb042 xor      rax, rdx
1fb045 mov      r10, rax
1fb048 shr      r10, 0x1d
1fb04c xor      r10, rax
1fb04f or       r10, 1
1fb053 mov      rax, r10
1fb056 mov      qword ptr [r14 + 0x260], r10
1fb05d and      eax, 0x3ff
1fb062 cmp      rax, 0x2c5
1fb068 jne      0x1401fb079
1fb06a mov      rcx, r14
1fb06d call     0x1402297e0
1fb072 mov      r10, qword ptr [r14 + 0x260]
1fb079 movzx    eax, r10b
1fb07d and      al, 0x1f
1fb07f cmp      al, 0x15
1fb081 jne      0x1401fb16f
1fb087 movsxd   rcx, dword ptr [r14 + 0x11e0]
1fb08e mov      rax, qword ptr [r14 + 0x20]
1fb092 xor      rcx, 0x5a5a
1fb099 rol      rax, 0x11
1fb09d imul     rcx, r15
1fb0a1 xor      rcx, r10
1fb0a4 xor      rcx, rax
1fb0a7 movabs   rax, 0x8f70feda99a6026d
1fb0b1 xor      rcx, rax
1fb0b4 mov      rax, rcx
1fb0b7 shr      rax, 0x21
1fb0bb xor      rax, rcx
1fb0be imul     rax, r13
1fb0c2 mov      rcx, rax
1fb0c5 shr      rcx, 0x21
1fb0c9 xor      rcx, rax
1fb0cc imul     rcx, rdi
1fb0d0 mov      rax, rcx
1fb0d3 shr      rax, 0x21
1fb0d7 xor      rax, rcx
1fb0da mov      r9, rax
1fb0dd shr      r9, 0x1d
1fb0e1 xor      r9, rax
1fb0e4 or       r9, 1
1fb0e8 mov      rax, r9
1fb0eb mov      rcx, r9
1fb0ee shr      rax, 8
1fb0f2 and      eax, 3
1fb0f5 shr      rcx, 0x28
1fb0f9 imul     r8, rax, 0x3e
1fb0fd mov      eax, 0x8421085
1fb102 mul      ecx
1fb104 mov      eax, ecx
1fb106 sub      eax, edx
1fb108 shr      eax, 1
1fb10a add      eax, edx
1fb10c shr      eax, 5
1fb10f imul     eax, eax, 0x3e
1fb112 sub      ecx, eax
1fb114 mov      eax, ecx
1fb116 add      r8, rax
1fb119 mov      rax, qword ptr [r14 + 0x4b8]
1fb120 movsxd   rcx, dword ptr [rax + r8*4]
1fb124 movsxd   rax, dword ptr [r14 + 0x4c8]
1fb12b xor      rcx, rax
1fb12e add      rcx, qword ptr [r14 + 0x4c0]
1fb135 xor      rcx, r9
1fb138 mov      rax, rcx
1fb13b shr      rax, 0x21
1fb13f xor      rax, rcx
1fb142 imul     rax, r13
1fb146 mov      rcx, rax
1fb149 shr      rcx, 0x21
1fb14d xor      rcx, rax
1fb150 imul     rcx, rdi
1fb154 mov      rax, rcx
1fb157 shr      rax, 0x21
1fb15b xor      rax, r10
1fb15e xor      rax, rcx
1fb161 inc      qword ptr [r14 + 0x268]
1fb168 mov      qword ptr [r14 + 0x260], rax
1fb16f inc      dword ptr [r14 + 0x200]
1fb176 mov      eax, dword ptr [r14 + 0x200]
1fb17d cmp      eax, dword ptr [r14 + 0x1fc]
1fb184 jb       0x1401fb199
1fb186 mov      rcx, r14
1fb189 mov      dword ptr [r14 + 0x200], 0
1fb194 call     0x1401ef7c0
1fb199 mov      r8d, ebx
1fb19c mov      edx, ebx
1fb19e mov      rcx, r14
1fb1a1 call     0x1401f0660
1fb1a6 inc      qword ptr [r14 + 0x1b8]
1fb1ad mov      r9, qword ptr [r14 + 0x1b0]
1fb1b4 mov      r13, qword ptr [r14 + 0x1b8]
1fb1bb imul     r9, r15
1fb1bf add      r9, r12
1fb1c2 lea      r12d, [rbx + 1]
1fb1c6 mov      qword ptr [r14 + 0x1b0], r9
1fb1cd mov      rax, r9
1fb1d0 shr      rax, 0x1b
1fb1d4 movzx    edx, al
1fb1d7 mov      byte ptr [r14 + 0x168], dl
1fb1de mov      r11, qword ptr [r14 + 0xe0]
1fb1e5 mov      r10, qword ptr [r14 + 0xd8]
1fb1ec mov      rdi, qword ptr [r14 + 0xd0]
1fb1f3 movzx    ebp, byte ptr [r14 + 0xe8]
1fb1fb imul     rdx, r11
1fb1ff lea      rax, [r10 + r10*8]
1fb203 xor      rdx, rax
1fb206 xor      rdx, rdi
1fb209 mov      rcx, rdx
1fb20c xor      rcx, rbx
1fb20f test     bpl, bpl
1fb212 lea      rax, [rdx + rbx]
1fb216 cmove    rax, rcx
1fb21a inc      r13
1fb21d mov      qword ptr [r14 + 0x130], rax
1fb224 mov      rcx, qword ptr [r14 + 0x1d0]
1fb22b mov      rax, qword ptr [r14 + 0x48]
1fb22f imul     r9, r15
1fb233 movzx    r8d, byte ptr [rcx + rbx]
1fb238 xor      r8b, byte ptr [rax + rbx]
1fb23c movabs   rax, 0x2545f4914f6cdd1d
1fb246 add      r9, rax
1fb249 mov      qword ptr [r14 + 0x1b8], r13
1fb250 mov      rax, r9
1fb253 shr      rax, 0x1b
1fb257 movzx    edx, al
1fb25a lea      rax, [r10 + r10]
1fb25e mov      byte ptr [r14 + 0x161], dl
1fb265 imul     rdx, r11
1fb269 xor      rdx, rax
1fb26c xor      rdx, rdi
1fb26f mov      rcx, rdx
1fb272 xor      rcx, r12
1fb275 test     bpl, bpl
1fb278 lea      rax, [rdx + r12]
1fb27c cmove    rax, rcx
1fb280 mov      qword ptr [r14 + 0xf8], rax
1fb287 movsxd   rdx, dword ptr [r14 + 0x11e0]
1fb28e mov      rbx, qword ptr [r14 + 0x20]
1fb292 mov      rcx, rdx
1fb295 xor      rcx, qword ptr [r14 + 0x350]
1fb29c xor      rcx, r12
1fb29f xor      rcx, qword ptr [r14 + 0x348]
1fb2a6 xor      rcx, rbx
1fb2a9 mov      rax, rcx
1fb2ac shr      rax, 0x21
1fb2b0 xor      rax, rcx
1fb2b3 movabs   rcx, 0xff51afd7ed558ccd
1fb2bd imul     rax, rcx
1fb2c1 mov      rcx, rax
1fb2c4 shr      rcx, 0x21
1fb2c8 xor      rcx, rax
1fb2cb movabs   rax, 0xc4ceb9fe1a85ec53
1fb2d5 imul     rcx, rax
1fb2d9 movzx    eax, r8b
1fb2dd xor      rax, 0xdd
1fb2e3 mov      r15, rcx
1fb2e6 shr      r15, 0x21
1fb2ea xor      r15, rcx
1fb2ed lea      rcx, [rip - 0x1fb2f4]
1fb2f4 mov      qword ptr [r14 + 0x28], r15
1fb2f8 movzx    esi, byte ptr [rax + rcx + 0x3ecf00]
1fb300 xor      sil, 0x63
1fb304 inc      edx
1fb306 mov      dword ptr [r14 + 0x11e0], edx
1fb30d test     dl, 0x1f
1fb310 jne      0x1401fb360
1fb312 movsxd   rax, edx
1fb315 xor      rax, qword ptr [r14 + 0x348]
1fb31c xor      rax, rbx
1fb31f mov      rcx, rax
1fb322 shr      rcx, 0x21
1fb326 xor      rcx, rax
1fb329 movabs   rax, 0xff51afd7ed558ccd
1fb333 imul     rcx, rax
1fb337 movabs   rax, 0xc4ceb9fe1a85ec53
1fb341 mov      rdx, rcx
1fb344 shr      rdx, 0x21
1fb348 xor      rdx, rcx
1fb34b imul     rdx, rax
1fb34f mov      rax, rdx
1fb352 shr      rax, 0x21
1fb356 xor      rax, rdx
1fb359 mov      qword ptr [r14 + 0x348], rax
1fb360 movzx    r8d, sil
1fb364 mov      eax, r8d
1fb367 mov      byte ptr [r14 + 0x4ad], sil
1fb36e xor      rax, r12
1fb371 movabs   r12, 0xff51afd7ed558ccd
1fb37b xor      rax, rbx
1fb37e movabs   rbx, 0x9e3779b97f4a7c15
1fb388 mov      rcx, rax
1fb38b shr      rcx, 0x21
1fb38f xor      rcx, rax
1fb392 movabs   rax, 0xc4ceb9fe1a85ec53
1fb39c imul     rcx, r12
1fb3a0 imul     r8, rbx
1fb3a4 imul     r9, rbx
1fb3a8 mov      rdx, rcx
1fb3ab shr      rdx, 0x21
1fb3af xor      rdx, rcx
1fb3b2 mov      ecx, dword ptr [r14 + 0x1178]
1fb3b9 imul     rdx, rax
1fb3bd mov      rax, rdx
1fb3c0 shr      rax, 0x21
1fb3c4 xor      rax, rdx
1fb3c7 mov      qword ptr [r14 + 0x20], rax
1fb3cb movabs   rax, 0xd6e8feb86659fd93
1fb3d5 imul     rcx, rax
1fb3d9 xor      rcx, r8
1fb3dc xor      rcx, r15
1fb3df movabs   r15, 0x2545f4914f6cdd1d
1fb3e9 mov      rax, rcx
1fb3ec add      r9, r15
1fb3ef shr      rax, 0x21
1fb3f3 xor      rax, rcx
1fb3f6 imul     rax, r12
1fb3fa mov      rdx, rax
1fb3fd shr      rdx, 0x21
1fb401 xor      rdx, rax
1fb404 movabs   rax, 0xc4ceb9fe1a85ec53
1fb40e imul     rdx, rax
1fb412 lea      rax, [r13 + 1]
1fb416 shr      rdx, 0x21
1fb41a and      edx, 3
1fb41d mov      qword ptr [r14 + 0x1b8], rax
1fb424 cmp      sil, 0x3e
1fb428 jae      0x1401fb4c4
1fb42e inc      qword ptr [r14 + 0x11a0]
1fb435 lea      rax, [rip - 0x1fb43c]
1fb43c mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
1fb444 mov      qword ptr [r14 + 0x1b0], r9
1fb44b shr      r9, 0x1b
1fb44f movzx    eax, r9b
1fb453 mov      byte ptr [r14 + 0x160], al
1fb45a imul     rax, r11
1fb45e mov      ebx, edx
1fb460 xor      rax, rdi
1fb463 xor      rax, r10
1fb466 mov      rcx, rax
1fb469 add      rax, r8
1fb46c xor      rcx, r8
1fb46f movzx    r8d, sil
1fb473 test     bpl, bpl
1fb476 cmove    rax, rcx
1fb47a mov      rcx, r14
1fb47d mov      qword ptr [r14 + 0xf0], rax
1fb484 call     0x1401f1f50
1fb489 mov      edx, dword ptr [rsp + 0x68]
1fb48d mov      r8, qword ptr [rsp + 0x70]
1fb492 dec      edx
1fb494 mov      eax, eax
1fb496 imul     rcx, rbx, 0x3e
1fb49a add      rcx, rax
1fb49d mov      rax, qword ptr [r14 + 0x4b8]
1fb4a4 movsxd   r9, dword ptr [rax + rcx*4]
1fb4a8 mov      rcx, r14
1fb4ab movsxd   rax, dword ptr [r14 + 0x4c8]
1fb4b2 xor      r9, rax
1fb4b5 add      r9, qword ptr [r14 + 0x4c0]
1fb4bc call     r9
1fb4bf jmp      0x1401fb58b
1fb4c4 inc      dword ptr [r14 + 0x11a8]
1fb4cb mov      rax, r9
1fb4ce shr      rax, 0x1b
1fb4d2 movzx    ecx, al
1fb4d5 lea      rax, [r10*4]
1fb4dd mov      byte ptr [r14 + 0x163], cl
1fb4e4 imul     rcx, r11
1fb4e8 imul     r9, rbx
1fb4ec xor      rcx, rax
1fb4ef xor      rcx, rdi
1fb4f2 mov      qword ptr [r14 + 0x108], rcx
1fb4f9 mov      r8, qword ptr [r14 + 0x1b8]
1fb500 add      r9, r15
1fb503 mov      rax, r9
1fb506 shr      rax, 0x1b
1fb50a movzx    edx, al
1fb50d mov      byte ptr [r14 + 0x16a], dl
1fb514 imul     rax, r10, 0xb
1fb518 imul     rdx, r11
1fb51c xor      rdx, rax
1fb51f xor      rdx, rdi
1fb522 mov      rcx, rdx
1fb525 xor      rcx, 1
1fb529 test     bpl, bpl
1fb52c lea      rax, [rdx + 1]
1fb530 cmove    rax, rcx
1fb534 mov      qword ptr [r14 + 0x140], rax
1fb53b lea      rax, [r8 + 2]
1fb53f mov      qword ptr [r14 + 0x1b8], rax
1fb546 imul     r9, rbx
1fb54a add      r9, r15
1fb54d mov      qword ptr [r14 + 0x1b0], r9
1fb554 shr      r9, 0x1b
1fb558 movzx    eax, r9b
1fb55c mov      byte ptr [r14 + 0x160], al
1fb563 imul     rax, r11
1fb567 xor      rax, rdi
1fb56a xor      rax, r10
1fb56d mov      rcx, rax
1fb570 add      rax, 0xfe1ab
1fb576 xor      rcx, 0xfe1ab
1fb57d test     bpl, bpl
1fb580 cmove    rax, rcx
1fb584 mov      qword ptr [r14 + 0xf0], rax
1fb58b mov      rsi, qword ptr [rsp + 0x78]
1fb590 add      rsp, 0x20
1fb594 pop      r15
1fb596 pop      r14
1fb598 pop      r13
1fb59a pop      r12
1fb59c pop      rdi
1fb59d pop      rbp
1fb59e pop      rbx
1fb59f ret      
1fb5a0 mov      edx, 0x54485254
1fb5a5 mov      rcx, r14
1fb5a8 call     0x1401ed830
1fb5ad int3     
1fb5ae mov      edx, 0x43414e59
1fb5b3 mov      rcx, r14
1fb5b6 call     0x1401ed830
1fb5bb int3     
