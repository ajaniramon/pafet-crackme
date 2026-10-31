223100 push     r12
223102 push     r13
223104 push     r14
223106 sub      rsp, 0x40
22310a movsxd   rax, dword ptr [rcx + 0x11e0]
223111 mov      r14, rcx
223114 mov      r13d, edx
223117 movabs   rcx, 0x58c3bfd0829beec2
223121 imul     rax, rcx
223125 movabs   rcx, 0xfa9a351b03456afd
22312f mov      r12, r8
223132 xor      rax, qword ptr [r14 + 0x28]
223136 mov      qword ptr [rsp + 0x60], rax
22313b mov      rax, qword ptr [rsp + 0x60]
223140 movsxd   rax, dword ptr [r14 + 0x11e0]
223147 imul     rax, rcx
22314b movabs   rcx, 0x1c52ab45800ee6e8
223155 xor      rax, qword ptr [r14 + 0x28]
223159 mov      qword ptr [rsp + 0x60], rax
22315e mov      rax, qword ptr [rsp + 0x60]
223163 movsxd   rax, dword ptr [r14 + 0x11e0]
22316a imul     rax, rcx
22316e movabs   rcx, 0x356c43aaf78a8553
223178 xor      rax, qword ptr [r14 + 0x28]
22317c mov      qword ptr [rsp + 0x60], rax
223181 mov      rax, qword ptr [rsp + 0x60]
223186 mov      rax, qword ptr [r14 + 0x2f8]
22318d mov      rax, qword ptr [r14 + 0x2f8]
223194 sub      rax, rcx
223197 mov      rcx, rax
22319a shr      rcx, 0x21
22319e xor      rcx, rax
2231a1 movabs   rax, 0xff51afd7ed558ccd
2231ab imul     rcx, rax
2231af movabs   rax, 0xc4ceb9fe1a85ec53
2231b9 mov      rdx, rcx
2231bc shr      rdx, 0x21
2231c0 xor      rdx, rcx
2231c3 mov      rcx, r14
2231c6 imul     rdx, rax
2231ca mov      rax, rdx
2231cd shr      rax, 0x21
2231d1 xor      rdx, rax
2231d4 mov      rax, qword ptr [r14 + 0x2f8]
2231db shr      rax, 3
2231df xor      rax, rdx
2231e2 mov      qword ptr [r14 + 0x2f8], rax
2231e9 call     0x1401ee940
2231ee not      rax
2231f1 mov      rcx, r14
2231f4 mov      rdx, rax
2231f7 call     0x1401ee820
2231fc mov      rax, qword ptr [r14 + 0x2f8]
223203 test     r13d, r13d
223206 jns      0x140223da7
22320c cmp      qword ptr [r14 + 0x11b8], r12
223213 jne      0x140223db5
223219 movsxd   rax, dword ptr [r14 + 0x11e0]
223220 movabs   rcx, 0xd1e4e56898073e94
22322a imul     rax, rcx
22322e mov      rcx, r14
223231 xor      rax, qword ptr [r14 + 0x28]
223235 mov      qword ptr [rsp + 0x60], rax
22323a mov      rax, qword ptr [rsp + 0x60]
22323f call     0x1401ee450
223244 test     eax, eax
223246 jne      0x140223d9c
22324c cmp      dword ptr [r14 + 0xad0], eax
223253 jne      0x140223d9c
223259 mov      r8, qword ptr [r14 + 0xf0]
223260 movzx    ecx, byte ptr [r14 + 0x160]
223268 mov      rax, r8
22326b mov      r10, qword ptr [r14 + 0xe0]
223272 mov      r11, qword ptr [r14 + 0xd8]
223279 mov      r9, qword ptr [r14 + 0x1b0]
223280 imul     rcx, r10
223284 mov      qword ptr [rsp + 0x68], rbx
223289 mov      rbx, qword ptr [r14 + 0xd0]
223290 xor      rcx, rbx
223293 mov      qword ptr [rsp + 0x38], rbp
223298 xor      rcx, r11
22329b mov      qword ptr [rsp + 0x30], rsi
2232a0 mov      rsi, qword ptr [r14 + 0x1b8]
2232a7 xor      rax, rcx
2232aa sub      r8, rcx
2232ad mov      qword ptr [rsp + 0x28], rdi
2232b2 movzx    edi, byte ptr [r14 + 0xe8]
2232ba movabs   rbp, 0x2545f4914f6cdd1d
2232c4 test     dil, dil
2232c7 mov      qword ptr [rsp + 0x20], r15
2232cc movabs   r15, 0x9e3779b97f4a7c15
2232d6 cmove    r8, rax
2232da inc      rsi
2232dd imul     r9, r15
2232e1 mov      qword ptr [r14 + 0x1b8], rsi
2232e8 mov      rcx, r8
2232eb add      r9, rbp
2232ee mov      qword ptr [r14 + 0x1b0], r9
2232f5 mov      rax, r9
2232f8 shr      rax, 0x1b
2232fc movzx    edx, al
2232ff mov      byte ptr [r14 + 0x160], dl
223306 imul     rdx, r10
22330a xor      rdx, rbx
22330d xor      rdx, r11
223310 xor      rcx, rdx
223313 test     dil, dil
223316 lea      rax, [r8 + rdx]
22331a cmove    rax, rcx
22331e mov      qword ptr [r14 + 0xf0], rax
223325 cmp      r8d, 0x2a0025
22332c jne      0x140223d83
223332 mov      eax, r13d
223335 btr      eax, 0x1f
223339 cmp      eax, 2
22333c jae      0x140223388
22333e imul     r9, r15
223342 lea      rax, [rsi + 1]
223346 mov      qword ptr [r14 + 0x1b8], rax
22334d add      r9, rbp
223350 mov      qword ptr [r14 + 0x1b0], r9
223357 shr      r9, 0x1b
22335b movzx    eax, r9b
22335f mov      byte ptr [r14 + 0x160], al
223366 imul     rax, r10
22336a xor      rax, rbx
22336d xor      rax, r11
223370 mov      rcx, rax
223373 add      rax, 0x85b36
223379 xor      rcx, 0x85b36
223380 test     dil, dil
223383 jmp      0x140223d78
223388 mov      rcx, r14
22338b call     0x1401ee070
223390 movzx    ecx, byte ptr [r14 + 0x4ad]
223398 movabs   rbx, 0xff51afd7ed558ccd
2233a2 mov      r11, qword ptr [r14 + 0xe0]
2233a9 movabs   r8, 0xc4ceb9fe1a85ec53
2233b3 mov      r10, qword ptr [r14 + 0xd0]
2233ba movzx    r9d, byte ptr [r14 + 0xe8]
2233c2 mov      eax, eax
2233c4 xor      rcx, rax
2233c7 xor      rcx, qword ptr [r14 + 0x11e8]
2233ce mov      rax, rcx
2233d1 shr      rax, 0x21
2233d5 xor      rax, rcx
2233d8 imul     rax, rbx
2233dc mov      rcx, rax
2233df shr      rcx, 0x21
2233e3 xor      rcx, rax
2233e6 imul     rcx, r8
2233ea mov      rdx, rcx
2233ed shr      rdx, 0x21
2233f1 xor      rdx, rcx
2233f4 mov      qword ptr [r14 + 0x11e8], rdx
2233fb xor      rdx, qword ptr [r14 + 0x20]
2233ff xor      rdx, qword ptr [r14 + 0x28]
223403 mov      rax, rdx
223406 shr      rax, 0x21
22340a xor      rax, rdx
22340d imul     rax, rbx
223411 mov      rcx, rax
223414 shr      rcx, 0x21
223418 xor      rcx, rax
22341b imul     rcx, r8
22341f mov      rax, rcx
223422 shr      rax, 0x21
223426 xor      rax, rcx
223429 mov      qword ptr [r14 + 0x20], rax
22342d mov      rdx, qword ptr [r14 + 0x138]
223434 movzx    ecx, byte ptr [r14 + 0x169]
22343c mov      rax, qword ptr [r14 + 0xd8]
223443 imul     rcx, r11
223447 lea      rbx, [rax + rax*4]
22344b mov      rax, rdx
22344e add      rbx, rbx
223451 xor      rcx, rbx
223454 xor      rcx, r10
223457 xor      rax, rcx
22345a sub      rdx, rcx
22345d test     r9b, r9b
223460 cmove    rdx, rax
223464 mov      rax, qword ptr [r14 + 0x1b0]
22346b inc      qword ptr [r14 + 0x1b8]
223472 imul     rax, r15
223476 add      rax, rbp
223479 mov      qword ptr [r14 + 0x1b0], rax
223480 shr      rax, 0x1b
223484 movzx    r8d, al
223488 mov      byte ptr [r14 + 0x169], r8b
22348f imul     r8, r11
223493 xor      r8, rbx
223496 xor      r8, r10
223499 mov      rcx, r8
22349c xor      rcx, rdx
22349f test     r9b, r9b
2234a2 lea      rax, [r8 + rdx]
2234a6 cmove    rax, rcx
2234aa mov      rcx, r14
2234ad mov      qword ptr [r14 + 0x138], rax
2234b4 call     0x1401f0910
2234b9 mov      rax, qword ptr [r14 + 0xd8]
2234c0 mov      r10, qword ptr [r14 + 0xe0]
2234c7 movzx    ecx, byte ptr [r14 + 0x168]
2234cf mov      rbx, qword ptr [r14 + 0xd0]
2234d6 mov      rdx, qword ptr [r14 + 0x130]
2234dd lea      r11, [rax + rax*8]
2234e1 movzx    r9d, byte ptr [r14 + 0xe8]
2234e9 mov      rax, rdx
2234ec imul     rcx, r10
2234f0 xor      rcx, r11
2234f3 xor      rcx, rbx
2234f6 xor      rax, rcx
2234f9 sub      rdx, rcx
2234fc test     r9b, r9b
2234ff cmove    rdx, rax
223503 mov      rax, qword ptr [r14 + 0x1b0]
22350a inc      qword ptr [r14 + 0x1b8]
223511 mov      rcx, rdx
223514 imul     rax, r15
223518 add      rax, rbp
22351b mov      qword ptr [r14 + 0x1b0], rax
223522 shr      rax, 0x1b
223526 movzx    r8d, al
22352a mov      byte ptr [r14 + 0x168], r8b
223531 imul     r8, r10
223535 xor      r8, r11
223538 xor      r8, rbx
22353b xor      rcx, r8
22353e test     r9b, r9b
223541 lea      rax, [rdx + r8]
223545 cmove    rax, rcx
223549 mov      rcx, r14
22354c mov      qword ptr [r14 + 0x130], rax
223553 call     0x1401f0910
223558 mov      rcx, r14
22355b call     0x1401ee070
223560 cmp      eax, dword ptr [r14 + 0x1d8]
223567 jae      0x140223573
223569 mov      edx, eax
22356b mov      rcx, r14
22356e call     0x1401f0910
223573 mov      rsi, qword ptr [r14 + 0xe0]
22357a mov      rbp, qword ptr [r14 + 0xd0]
223581 mov      r11, qword ptr [r14 + 0x130]
223588 movzx    edi, byte ptr [r14 + 0xe8]
223590 mov      rax, r11
223593 movzx    ecx, byte ptr [r14 + 0x168]
22359b mov      rbx, qword ptr [r14 + 0xd8]
2235a2 mov      r8, qword ptr [r14 + 0x1b8]
2235a9 mov      r10, qword ptr [r14 + 0x1b0]
2235b0 imul     rcx, rsi
2235b4 lea      r9, [rbx + rbx*8]
2235b8 xor      rcx, r9
2235bb xor      rcx, rbp
2235be xor      rax, rcx
2235c1 sub      r11, rcx
2235c4 test     dil, dil
2235c7 movabs   rcx, 0x2545f4914f6cdd1d
2235d1 cmove    r11, rax
2235d5 imul     r10, r15
2235d9 add      r10, rcx
2235dc mov      rcx, r11
2235df mov      rax, r10
2235e2 shr      rax, 0x1b
2235e6 movzx    edx, al
2235e9 mov      byte ptr [r14 + 0x168], dl
2235f0 imul     rdx, rsi
2235f4 xor      rdx, r9
2235f7 xor      rdx, rbp
2235fa xor      rcx, rdx
2235fd test     dil, dil
223600 lea      rax, [r11 + rdx]
223604 cmove    rax, rcx
223608 mov      rcx, r11
22360b mov      qword ptr [r14 + 0x130], rax
223612 movabs   rax, 0x2545f4914f6cdd1d
22361c imul     r10, r15
223620 add      r10, rax
223623 lea      rax, [r8 + 2]
223627 mov      qword ptr [r14 + 0x1b8], rax
22362e mov      r8d, 0xa2dc
223634 mov      qword ptr [r14 + 0x1b0], r10
22363b lea      rax, [rbx + rbx*4]
22363f add      rax, rax
223642 shr      r10, 0x1b
223646 movzx    edx, r10b
22364a mov      byte ptr [r14 + 0x169], dl
223651 imul     rdx, rsi
223655 xor      rdx, rax
223658 xor      rdx, rbp
22365b xor      rcx, rdx
22365e test     dil, dil
223661 lea      rax, [r11 + rdx]
223665 cmove    rax, rcx
223669 mov      rcx, r14
22366c mov      qword ptr [r14 + 0x138], rax
223673 movzx    edx, byte ptr [r14 + 0x4ad]
22367b xor      rdx, qword ptr [r14 + 0x348]
223682 call     0x1401f1520
223687 mov      r8, qword ptr [r14 + 0x348]
22368e movabs   rdi, 0xff51afd7ed558ccd
223698 mov      rax, r8
22369b movabs   rsi, 0xc4ceb9fe1a85ec53
2236a5 xor      rax, qword ptr [r14 + 0x20]
2236a9 mov      rcx, rax
2236ac shr      rcx, 0x21
2236b0 xor      rcx, rax
2236b3 imul     rcx, rdi
2236b7 mov      rax, rcx
2236ba shr      rax, 0x21
2236be xor      rax, rcx
2236c1 imul     rax, rsi
2236c5 mov      rdx, rax
2236c8 shr      rdx, 0x21
2236cc xor      edx, eax
2236ce lea      eax, [rdx + 1]
2236d1 mov      ecx, eax
2236d3 xor      eax, edx
2236d5 imul     ecx, edx
2236d8 not      ecx
2236da and      ecx, eax
2236dc test     cl, 1
2236df je       0x140223752
2236e1 and      r8b, 3
2236e5 cmp      r8b, 1
2236e9 jne      0x140223752
2236eb mov      rax, qword ptr [r14 + 0x1b0]
2236f2 movabs   rcx, 0x2545f4914f6cdd1d
2236fc inc      qword ptr [r14 + 0x1b8]
223703 imul     rax, r15
223707 add      rax, rcx
22370a mov      qword ptr [r14 + 0x1b0], rax
223711 shr      rax, 0x1b
223715 movzx    eax, al
223718 mov      byte ptr [r14 + 0x160], al
22371f imul     rax, qword ptr [r14 + 0xe0]
223727 xor      rax, qword ptr [r14 + 0xd8]
22372e xor      rax, qword ptr [r14 + 0xd0]
223735 mov      rcx, rax
223738 add      rax, 0x3dd18f
22373e xor      rcx, 0x3dd18f
223745 cmp      byte ptr [r14 + 0xe8], 0
22374d jmp      0x140223d78
223752 mov      rcx, r14
223755 call     0x1401ee070
22375a mov      ebx, eax
22375c cmp      eax, dword ptr [r14 + 0x1d8]
223763 jb       0x1402237cc
223765 mov      rax, qword ptr [r14 + 0x1b0]
22376c movabs   rcx, 0x2545f4914f6cdd1d
223776 inc      qword ptr [r14 + 0x1b8]
22377d imul     rax, r15
223781 add      rax, rcx
223784 mov      qword ptr [r14 + 0x1b0], rax
22378b shr      rax, 0x1b
22378f movzx    eax, al
223792 mov      byte ptr [r14 + 0x160], al
223799 imul     rax, qword ptr [r14 + 0xe0]
2237a1 xor      rax, qword ptr [r14 + 0xd8]
2237a8 xor      rax, qword ptr [r14 + 0xd0]
2237af mov      rcx, rax
2237b2 add      rax, 0xfe1ab
2237b8 xor      rcx, 0xfe1ab
2237bf cmp      byte ptr [r14 + 0xe8], 0
2237c7 jmp      0x140223d78
2237cc mov      edx, ebx
2237ce mov      rcx, r14
2237d1 call     0x1401f25b0
2237d6 movsxd   rcx, dword ptr [r14 + 0x11e0]
2237dd movabs   r8, 0xd6e8feb86659fd93
2237e7 mov      rdx, qword ptr [r14 + 0x20]
2237eb mov      rax, rbx
2237ee imul     rax, r8
2237f2 imul     rcx, r15
2237f6 rol      rdx, 0x11
2237fa xor      rax, rdx
2237fd xor      rcx, qword ptr [r14 + 0x260]
223804 xor      rax, rcx
223807 mov      rcx, rax
22380a shr      rcx, 0x21
22380e xor      rcx, rax
223811 imul     rcx, rdi
223815 mov      rdx, rcx
223818 shr      rdx, 0x21
22381c xor      rdx, rcx
22381f imul     rdx, rsi
223823 mov      rax, rdx
223826 shr      rax, 0x21
22382a xor      rax, rdx
22382d mov      r10, rax
223830 shr      r10, 0x1d
223834 xor      r10, rax
223837 or       r10, 1
22383b mov      rax, r10
22383e mov      qword ptr [r14 + 0x260], r10
223845 and      eax, 0x3ff
22384a cmp      rax, 0x2c5
223850 jne      0x140223861
223852 mov      rcx, r14
223855 call     0x1402297e0
22385a mov      r10, qword ptr [r14 + 0x260]
223861 movzx    eax, r10b
223865 and      al, 0x1f
223867 cmp      al, 0x15
223869 jne      0x140223956
22386f movsxd   rax, dword ptr [r14 + 0x11e0]
223876 xor      rax, 0x5a5a
22387c mov      rcx, qword ptr [r14 + 0x20]
223880 imul     rax, r15
223884 rol      rcx, 0x11
223888 xor      rax, r10
22388b xor      rcx, rax
22388e movabs   rax, 0x8f70feda99a6026d
223898 xor      rcx, rax
22389b mov      rax, rcx
22389e shr      rax, 0x21
2238a2 xor      rax, rcx
2238a5 imul     rax, rdi
2238a9 mov      rcx, rax
2238ac shr      rcx, 0x21
2238b0 xor      rcx, rax
2238b3 imul     rcx, rsi
2238b7 mov      rax, rcx
2238ba shr      rax, 0x21
2238be xor      rax, rcx
2238c1 mov      r9, rax
2238c4 shr      r9, 0x1d
2238c8 xor      r9, rax
2238cb or       r9, 1
2238cf mov      rax, r9
2238d2 mov      rcx, r9
2238d5 shr      rax, 8
2238d9 and      eax, 3
2238dc shr      rcx, 0x28
2238e0 imul     r8, rax, 0x3e
2238e4 mov      eax, 0x8421085
2238e9 mul      ecx
2238eb mov      eax, ecx
2238ed sub      eax, edx
2238ef shr      eax, 1
2238f1 add      eax, edx
2238f3 shr      eax, 5
2238f6 imul     eax, eax, 0x3e
2238f9 sub      ecx, eax
2238fb mov      eax, ecx
2238fd add      r8, rax
223900 mov      rax, qword ptr [r14 + 0x4b8]
223907 movsxd   rcx, dword ptr [rax + r8*4]
22390b movsxd   rax, dword ptr [r14 + 0x4c8]
223912 xor      rcx, rax
223915 add      rcx, qword ptr [r14 + 0x4c0]
22391c xor      rcx, r9
22391f mov      rax, rcx
223922 shr      rax, 0x21
223926 xor      rax, rcx
223929 imul     rax, rdi
22392d mov      rcx, rax
223930 shr      rcx, 0x21
223934 xor      rcx, rax
223937 imul     rcx, rsi
22393b mov      rax, rcx
22393e shr      rax, 0x21
223942 xor      rax, rcx
223945 xor      rax, r10
223948 inc      qword ptr [r14 + 0x268]
22394f mov      qword ptr [r14 + 0x260], rax
223956 inc      dword ptr [r14 + 0x200]
22395d mov      eax, dword ptr [r14 + 0x200]
223964 cmp      eax, dword ptr [r14 + 0x1fc]
22396b jb       0x140223980
22396d mov      rcx, r14
223970 mov      dword ptr [r14 + 0x200], 0
22397b call     0x1401ef7c0
223980 mov      r8d, ebx
223983 mov      edx, ebx
223985 mov      rcx, r14
223988 call     0x1401f0660
22398d inc      qword ptr [r14 + 0x1b8]
223994 movabs   rax, 0x2545f4914f6cdd1d
22399e mov      r9, qword ptr [r14 + 0x1b0]
2239a5 mov      r10, qword ptr [r14 + 0x1b8]
2239ac imul     r9, r15
2239b0 add      r9, rax
2239b3 mov      qword ptr [r14 + 0x1b0], r9
2239ba mov      rax, r9
2239bd shr      rax, 0x1b
2239c1 movzx    edx, al
2239c4 mov      byte ptr [r14 + 0x168], dl
2239cb mov      rdi, qword ptr [r14 + 0xe0]
2239d2 mov      r11, qword ptr [r14 + 0xd8]
2239d9 mov      rsi, qword ptr [r14 + 0xd0]
2239e0 movzx    r15d, byte ptr [r14 + 0xe8]
2239e8 imul     rdx, rdi
2239ec lea      rax, [r11 + r11*8]
2239f0 xor      rdx, rax
2239f3 xor      rdx, rsi
2239f6 mov      rcx, rdx
2239f9 xor      rcx, rbx
2239fc test     r15b, r15b
2239ff lea      rax, [rdx + rbx]
223a03 cmove    rax, rcx
223a07 inc      r10
223a0a mov      qword ptr [r14 + 0x130], rax
223a11 mov      rcx, qword ptr [r14 + 0x1d0]
223a18 mov      rax, qword ptr [r14 + 0x48]
223a1c mov      qword ptr [rsp + 0x78], r10
223a21 movzx    r8d, byte ptr [rcx + rbx]
223a26 xor      r8b, byte ptr [rax + rbx]
223a2a inc      ebx
223a2c mov      qword ptr [r14 + 0x1b8], r10
223a33 movabs   rax, 0x9e3779b97f4a7c15
223a3d imul     r9, rax
223a41 mov      qword ptr [rsp + 0x60], rbx
223a46 movabs   rax, 0x2545f4914f6cdd1d
223a50 add      r9, rax
223a53 mov      rax, r9
223a56 shr      rax, 0x1b
223a5a movzx    edx, al
223a5d lea      rax, [r11 + r11]
223a61 mov      byte ptr [r14 + 0x161], dl
223a68 imul     rdx, rdi
223a6c xor      rdx, rax
223a6f xor      rdx, rsi
223a72 mov      rcx, rdx
223a75 xor      rcx, rbx
223a78 test     r15b, r15b
223a7b lea      rax, [rdx + rbx]
223a7f cmove    rax, rcx
223a83 mov      qword ptr [r14 + 0xf8], rax
223a8a movsxd   rdx, dword ptr [r14 + 0x11e0]
223a91 mov      r10, qword ptr [r14 + 0x20]
223a95 mov      rcx, rdx
223a98 xor      rcx, qword ptr [r14 + 0x350]
223a9f xor      rcx, r10
223aa2 xor      rcx, rbx
223aa5 movabs   rbx, 0xff51afd7ed558ccd
223aaf xor      rcx, qword ptr [r14 + 0x348]
223ab6 mov      rax, rcx
223ab9 shr      rax, 0x21
223abd xor      rax, rcx
223ac0 imul     rax, rbx
223ac4 mov      rcx, rax
223ac7 shr      rcx, 0x21
223acb xor      rcx, rax
223ace movabs   rax, 0xc4ceb9fe1a85ec53
223ad8 imul     rcx, rax
223adc movzx    eax, r8b
223ae0 mov      rbx, rcx
223ae3 shr      rbx, 0x21
223ae7 xor      rbx, rcx
223aea lea      rcx, [rip - 0x223af1]
223af1 xor      rax, 0xdd
223af7 mov      qword ptr [r14 + 0x28], rbx
223afb movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
223b03 xor      bpl, 0x63
223b07 movabs   r8, 0xff51afd7ed558ccd
223b11 inc      edx
223b13 mov      dword ptr [r14 + 0x11e0], edx
223b1a test     dl, 0x1f
223b1d jne      0x140223b63
223b1f movsxd   rax, edx
223b22 xor      rax, r10
223b25 xor      rax, qword ptr [r14 + 0x348]
223b2c mov      rcx, rax
223b2f shr      rcx, 0x21
223b33 xor      rcx, rax
223b36 movabs   rax, 0xc4ceb9fe1a85ec53
223b40 imul     rcx, r8
223b44 mov      rdx, rcx
223b47 shr      rdx, 0x21
223b4b xor      rdx, rcx
223b4e imul     rdx, rax
223b52 mov      rax, rdx
223b55 shr      rax, 0x21
223b59 xor      rax, rdx
223b5c mov      qword ptr [r14 + 0x348], rax
223b63 movzx    edx, bpl
223b67 xor      r10, rdx
223b6a mov      byte ptr [r14 + 0x4ad], bpl
223b71 xor      r10, qword ptr [rsp + 0x60]
223b76 mov      rax, r10
223b79 shr      rax, 0x21
223b7d xor      rax, r10
223b80 movabs   r10, 0x9e3779b97f4a7c15
223b8a imul     rax, r8
223b8e imul     rdx, r10
223b92 imul     r9, r10
223b96 mov      rcx, rax
223b99 shr      rcx, 0x21
223b9d xor      rcx, rax
223ba0 movabs   rax, 0xc4ceb9fe1a85ec53
223baa imul     rcx, rax
223bae mov      rax, rcx
223bb1 shr      rax, 0x21
223bb5 xor      rax, rcx
223bb8 mov      ecx, dword ptr [r14 + 0x1178]
223bbf mov      qword ptr [r14 + 0x20], rax
223bc3 movabs   rax, 0xd6e8feb86659fd93
223bcd imul     rcx, rax
223bd1 xor      rcx, rdx
223bd4 xor      rcx, rbx
223bd7 movabs   rbx, 0x2545f4914f6cdd1d
223be1 mov      rax, rcx
223be4 add      r9, rbx
223be7 shr      rax, 0x21
223beb xor      rax, rcx
223bee imul     rax, r8
223bf2 mov      rdx, rax
223bf5 shr      rdx, 0x21
223bf9 xor      rdx, rax
223bfc movabs   rax, 0xc4ceb9fe1a85ec53
223c06 imul     rdx, rax
223c0a mov      rax, qword ptr [rsp + 0x78]
223c0f shr      rdx, 0x21
223c13 and      edx, 3
223c16 inc      rax
223c19 mov      qword ptr [r14 + 0x1b8], rax
223c20 cmp      bpl, 0x3e
223c24 jae      0x140223cbc
223c2a inc      qword ptr [r14 + 0x11a0]
223c31 lea      rax, [rip - 0x223c38]
223c38 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
223c40 mov      qword ptr [r14 + 0x1b0], r9
223c47 shr      r9, 0x1b
223c4b movzx    eax, r9b
223c4f mov      byte ptr [r14 + 0x160], al
223c56 imul     rax, rdi
223c5a mov      ebx, edx
223c5c xor      rax, rsi
223c5f xor      rax, r11
223c62 mov      rcx, rax
223c65 add      rax, r8
223c68 xor      rcx, r8
223c6b movzx    r8d, bpl
223c6f test     r15b, r15b
223c72 cmove    rax, rcx
223c76 mov      rcx, r14
223c79 mov      qword ptr [r14 + 0xf0], rax
223c80 call     0x1401f1f50
223c85 mov      eax, eax
223c87 lea      edx, [r13 - 1]
223c8b imul     rcx, rbx, 0x3e
223c8f mov      r8, r12
223c92 add      rcx, rax
223c95 mov      rax, qword ptr [r14 + 0x4b8]
223c9c movsxd   r9, dword ptr [rax + rcx*4]
223ca0 mov      rcx, r14
223ca3 movsxd   rax, dword ptr [r14 + 0x4c8]
223caa xor      r9, rax
223cad add      r9, qword ptr [r14 + 0x4c0]
223cb4 call     r9
223cb7 jmp      0x140223d83
223cbc inc      dword ptr [r14 + 0x11a8]
223cc3 mov      rax, r9
223cc6 shr      rax, 0x1b
223cca movzx    ecx, al
223ccd lea      rax, [r11*4]
223cd5 mov      byte ptr [r14 + 0x163], cl
223cdc imul     rcx, rdi
223ce0 imul     r9, r10
223ce4 xor      rcx, rax
223ce7 xor      rcx, rsi
223cea mov      qword ptr [r14 + 0x108], rcx
223cf1 mov      r8, qword ptr [r14 + 0x1b8]
223cf8 add      r9, rbx
223cfb mov      rax, r9
223cfe shr      rax, 0x1b
223d02 movzx    edx, al
223d05 mov      byte ptr [r14 + 0x16a], dl
223d0c imul     rax, r11, 0xb
223d10 imul     rdx, rdi
223d14 xor      rdx, rax
223d17 xor      rdx, rsi
223d1a mov      rcx, rdx
223d1d xor      rcx, 1
223d21 test     r15b, r15b
223d24 lea      rax, [rdx + 1]
223d28 cmove    rax, rcx
223d2c mov      qword ptr [r14 + 0x140], rax
223d33 lea      rax, [r8 + 2]
223d37 mov      qword ptr [r14 + 0x1b8], rax
223d3e imul     r9, r10
223d42 add      r9, rbx
223d45 mov      qword ptr [r14 + 0x1b0], r9
223d4c shr      r9, 0x1b
223d50 movzx    eax, r9b
223d54 mov      byte ptr [r14 + 0x160], al
223d5b imul     rax, rdi
223d5f xor      rax, rsi
223d62 xor      rax, r11
223d65 mov      rcx, rax
223d68 add      rax, 0xfe1ab
223d6e xor      rcx, 0xfe1ab
223d75 test     r15b, r15b
223d78 cmove    rax, rcx
223d7c mov      qword ptr [r14 + 0xf0], rax
223d83 mov      rdi, qword ptr [rsp + 0x28]
223d88 mov      rsi, qword ptr [rsp + 0x30]
223d8d mov      rbp, qword ptr [rsp + 0x38]
223d92 mov      rbx, qword ptr [rsp + 0x68]
223d97 mov      r15, qword ptr [rsp + 0x20]
223d9c add      rsp, 0x40
223da0 pop      r14
223da2 pop      r13
223da4 pop      r12
223da6 ret      
223da7 mov      edx, 0x54485254
223dac mov      rcx, r14
223daf call     0x1401ed830
223db4 int3     
223db5 mov      edx, 0x43414e59
223dba mov      rcx, r14
223dbd call     0x1401ed830
223dc2 int3     
