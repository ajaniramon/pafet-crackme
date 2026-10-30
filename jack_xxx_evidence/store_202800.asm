202800 mov      qword ptr [rsp + 0x10], rbx
202805 mov      qword ptr [rsp + 0x18], r8
20280a push     rbp
20280b push     rsi
20280c push     rdi
20280d push     r12
20280f push     r13
202811 push     r14
202813 push     r15
202815 sub      rsp, 0x20
202819 movsxd   rax, dword ptr [rcx + 0x11e0]
202820 mov      r14, rcx
202823 mov      r13d, edx
202826 movabs   rcx, 0x974281eb19518d67
202830 imul     rax, rcx
202834 movabs   rcx, 0x351b0b20988f0958
20283e movabs   rbp, 0xff51afd7ed558ccd
202848 xor      rax, qword ptr [r14 + 0x28]
20284c movabs   rsi, 0xc4ceb9fe1a85ec53
202856 mov      qword ptr [rsp + 0x60], rax
20285b mov      rdi, r8
20285e mov      rax, qword ptr [rsp + 0x60]
202863 movsxd   rax, dword ptr [r14 + 0x11e0]
20286a imul     rax, rcx
20286e movabs   rcx, 0xd3d3957e1bc4854d
202878 xor      rax, qword ptr [r14 + 0x28]
20287c mov      qword ptr [rsp + 0x60], rax
202881 mov      rax, qword ptr [rsp + 0x60]
202886 movsxd   rax, dword ptr [r14 + 0x11e0]
20288d imul     rax, rcx
202891 movabs   rcx, 0x41a197f990021176
20289b xor      rax, qword ptr [r14 + 0x28]
20289f mov      qword ptr [rsp + 0x60], rax
2028a4 mov      rax, qword ptr [rsp + 0x60]
2028a9 mov      rax, qword ptr [r14 + 0x2e0]
2028b0 add      rax, rcx
2028b3 mov      rcx, rax
2028b6 shr      rcx, 0x21
2028ba xor      rcx, rax
2028bd imul     rcx, rbp
2028c1 mov      rdx, rcx
2028c4 shr      rdx, 0x21
2028c8 xor      rdx, rcx
2028cb mov      rcx, r14
2028ce imul     rdx, rsi
2028d2 mov      rax, rdx
2028d5 shr      rax, 0x21
2028d9 xor      rdx, rax
2028dc mov      rax, qword ptr [r14 + 0x2e0]
2028e3 or       rdx, 1
2028e7 xor      rdx, rax
2028ea mov      qword ptr [r14 + 0x2e0], rdx
2028f1 call     0x1401f1d80
2028f6 mov      rcx, r14
2028f9 mov      ebx, eax
2028fb call     0x1401ee940
202900 mov      rcx, qword ptr [r14 + 0x1b0]
202907 mov      r9, rax
20290a inc      qword ptr [r14 + 0x1b8]
202911 movabs   r15, 0x9e3779b97f4a7c15
20291b mov      r8d, dword ptr [r14 + 0x1f4]
202922 movabs   r12, 0x2545f4914f6cdd1d
20292c movzx    r10d, bl
202930 add      r8d, r10d
202933 mov      eax, r10d
202936 imul     rcx, r15
20293a and      r8d, 1
20293e add      rcx, r12
202941 mov      qword ptr [r14 + 0x1b0], rcx
202948 shr      rcx, 0x1b
20294c movzx    edx, cl
20294f mov      byte ptr [r10 + r14 + 0xb65], dl
202957 imul     rax, qword ptr [r14 + 0x238]
20295f imul     rdx, qword ptr [r14 + 0x1a0]
202967 xor      rdx, rax
20296a xor      rdx, qword ptr [r14 + 0x230]
202971 mov      rax, rdx
202974 add      rdx, r9
202977 xor      rax, r9
20297a cmp      byte ptr [r14 + 0x1f8], 0
202982 cmove    rdx, rax
202986 mov      rax, qword ptr [r14 + 0x180]
20298d shl      r8d, 8
202991 add      r8d, r10d
202994 mov      qword ptr [rax + r8*8], rdx
202998 xor      r10, qword ptr [r14 + 0x11c0]
20299f xor      r10, r9
2029a2 mov      rax, r10
2029a5 shr      rax, 0x21
2029a9 xor      rax, r10
2029ac imul     rax, rbp
2029b0 mov      rcx, rax
2029b3 shr      rcx, 0x21
2029b7 xor      rcx, rax
2029ba imul     rcx, rsi
2029be mov      rax, rcx
2029c1 shr      rax, 0x21
2029c5 xor      rax, rcx
2029c8 mov      qword ptr [r14 + 0x11c0], rax
2029cf mov      rax, qword ptr [r14 + 0x2e0]
2029d6 test     r13d, r13d
2029d9 jns      0x140203510
2029df cmp      qword ptr [r14 + 0x11b8], rdi
2029e6 jne      0x14020351e
2029ec movsxd   rax, dword ptr [r14 + 0x11e0]
2029f3 movabs   rcx, 0xc17c181a721a903f
2029fd imul     rax, rcx
202a01 mov      rcx, r14
202a04 xor      rax, qword ptr [r14 + 0x28]
202a08 mov      qword ptr [rsp + 0x60], rax
202a0d mov      rax, qword ptr [rsp + 0x60]
202a12 call     0x1401ee450
202a17 test     eax, eax
202a19 jne      0x1402034fb
202a1f cmp      dword ptr [r14 + 0xad0], eax
202a26 jne      0x1402034fb
202a2c mov      r8, qword ptr [r14 + 0xf0]
202a33 movzx    ecx, byte ptr [r14 + 0x160]
202a3b mov      rax, r8
202a3e mov      r10, qword ptr [r14 + 0xe0]
202a45 mov      rbx, qword ptr [r14 + 0xd0]
202a4c mov      r11, qword ptr [r14 + 0xd8]
202a53 movzx    edi, byte ptr [r14 + 0xe8]
202a5b mov      r9, qword ptr [r14 + 0x1b0]
202a62 mov      rsi, qword ptr [r14 + 0x1b8]
202a69 imul     rcx, r10
202a6d xor      rcx, rbx
202a70 xor      rcx, r11
202a73 xor      rax, rcx
202a76 sub      r8, rcx
202a79 test     dil, dil
202a7c cmove    r8, rax
202a80 inc      rsi
202a83 imul     r9, r15
202a87 mov      qword ptr [r14 + 0x1b8], rsi
202a8e mov      rcx, r8
202a91 add      r9, r12
202a94 mov      qword ptr [r14 + 0x1b0], r9
202a9b mov      rax, r9
202a9e shr      rax, 0x1b
202aa2 movzx    edx, al
202aa5 mov      byte ptr [r14 + 0x160], dl
202aac imul     rdx, r10
202ab0 xor      rdx, rbx
202ab3 xor      rdx, r11
202ab6 xor      rcx, rdx
202ab9 test     dil, dil
202abc lea      rax, [r8 + rdx]
202ac0 cmove    rax, rcx
202ac4 mov      qword ptr [r14 + 0xf0], rax
202acb cmp      r8d, 0x338040
202ad2 jne      0x1402034fb
202ad8 mov      eax, r13d
202adb btr      eax, 0x1f
202adf cmp      eax, 2
202ae2 jae      0x140202b2e
202ae4 imul     r9, r15
202ae8 lea      rax, [rsi + 1]
202aec mov      qword ptr [r14 + 0x1b8], rax
202af3 add      r9, r12
202af6 mov      qword ptr [r14 + 0x1b0], r9
202afd shr      r9, 0x1b
202b01 movzx    eax, r9b
202b05 mov      byte ptr [r14 + 0x160], al
202b0c imul     rax, r10
202b10 xor      rax, rbx
202b13 xor      rax, r11
202b16 mov      rcx, rax
202b19 add      rax, 0x1ad951
202b1f xor      rcx, 0x1ad951
202b26 test     dil, dil
202b29 jmp      0x1402034f0
202b2e mov      rcx, r14
202b31 call     0x1401ee070
202b36 movzx    ecx, byte ptr [r14 + 0x4ad]
202b3e movabs   r8, 0xc4ceb9fe1a85ec53
202b48 mov      r11, qword ptr [r14 + 0xe0]
202b4f mov      r10, qword ptr [r14 + 0xd0]
202b56 movzx    r9d, byte ptr [r14 + 0xe8]
202b5e mov      eax, eax
202b60 xor      rcx, rax
202b63 xor      rcx, qword ptr [r14 + 0x11e8]
202b6a mov      rax, rcx
202b6d shr      rax, 0x21
202b71 xor      rax, rcx
202b74 imul     rax, rbp
202b78 mov      rcx, rax
202b7b shr      rcx, 0x21
202b7f xor      rcx, rax
202b82 mov      rax, qword ptr [r14 + 0x20]
202b86 xor      rax, qword ptr [r14 + 0x28]
202b8a imul     rcx, r8
202b8e mov      rdx, rcx
202b91 shr      rdx, 0x21
202b95 xor      rdx, rcx
202b98 xor      rax, rdx
202b9b mov      qword ptr [r14 + 0x11e8], rdx
202ba2 mov      rcx, rax
202ba5 shr      rcx, 0x21
202ba9 xor      rcx, rax
202bac imul     rcx, rbp
202bb0 mov      rdx, rcx
202bb3 shr      rdx, 0x21
202bb7 xor      rdx, rcx
202bba imul     rdx, r8
202bbe mov      rax, rdx
202bc1 shr      rax, 0x21
202bc5 xor      rax, rdx
202bc8 mov      qword ptr [r14 + 0x20], rax
202bcc mov      rdx, qword ptr [r14 + 0x138]
202bd3 movzx    ecx, byte ptr [r14 + 0x169]
202bdb mov      rax, qword ptr [r14 + 0xd8]
202be2 imul     rcx, r11
202be6 lea      rbx, [rax + rax*4]
202bea mov      rax, rdx
202bed add      rbx, rbx
202bf0 xor      rcx, rbx
202bf3 xor      rcx, r10
202bf6 xor      rax, rcx
202bf9 sub      rdx, rcx
202bfc test     r9b, r9b
202bff cmove    rdx, rax
202c03 mov      rax, qword ptr [r14 + 0x1b0]
202c0a inc      qword ptr [r14 + 0x1b8]
202c11 mov      rcx, rdx
202c14 imul     rax, r15
202c18 add      rax, r12
202c1b mov      qword ptr [r14 + 0x1b0], rax
202c22 shr      rax, 0x1b
202c26 movzx    r8d, al
202c2a mov      byte ptr [r14 + 0x169], r8b
202c31 imul     r8, r11
202c35 xor      r8, rbx
202c38 xor      r8, r10
202c3b xor      rcx, r8
202c3e test     r9b, r9b
202c41 lea      rax, [rdx + r8]
202c45 cmove    rax, rcx
202c49 mov      rcx, r14
202c4c mov      qword ptr [r14 + 0x138], rax
202c53 call     0x1401f0910
202c58 mov      rax, qword ptr [r14 + 0xd8]
202c5f mov      r10, qword ptr [r14 + 0xe0]
202c66 movzx    ecx, byte ptr [r14 + 0x168]
202c6e mov      rbx, qword ptr [r14 + 0xd0]
202c75 mov      rdx, qword ptr [r14 + 0x130]
202c7c lea      r11, [rax + rax*8]
202c80 movzx    r9d, byte ptr [r14 + 0xe8]
202c88 mov      rax, rdx
202c8b imul     rcx, r10
202c8f xor      rcx, r11
202c92 xor      rcx, rbx
202c95 xor      rax, rcx
202c98 sub      rdx, rcx
202c9b test     r9b, r9b
202c9e cmove    rdx, rax
202ca2 mov      rax, qword ptr [r14 + 0x1b0]
202ca9 inc      qword ptr [r14 + 0x1b8]
202cb0 imul     rax, r15
202cb4 add      rax, r12
202cb7 mov      qword ptr [r14 + 0x1b0], rax
202cbe shr      rax, 0x1b
202cc2 movzx    r8d, al
202cc6 mov      byte ptr [r14 + 0x168], r8b
202ccd imul     r8, r10
202cd1 xor      r8, r11
202cd4 xor      r8, rbx
202cd7 mov      rcx, r8
202cda xor      rcx, rdx
202cdd test     r9b, r9b
202ce0 lea      rax, [r8 + rdx]
202ce4 cmove    rax, rcx
202ce8 mov      rcx, r14
202ceb mov      qword ptr [r14 + 0x130], rax
202cf2 call     0x1401f0910
202cf7 mov      rcx, r14
202cfa call     0x1401ee070
202cff cmp      eax, dword ptr [r14 + 0x1d8]
202d06 jae      0x140202d12
202d08 mov      edx, eax
202d0a mov      rcx, r14
202d0d call     0x1401f0910
202d12 mov      rsi, qword ptr [r14 + 0xe0]
202d19 mov      rbp, qword ptr [r14 + 0xd0]
202d20 mov      r11, qword ptr [r14 + 0x130]
202d27 movzx    edi, byte ptr [r14 + 0xe8]
202d2f mov      rax, r11
202d32 movzx    ecx, byte ptr [r14 + 0x168]
202d3a mov      rbx, qword ptr [r14 + 0xd8]
202d41 mov      r8, qword ptr [r14 + 0x1b8]
202d48 mov      r9, qword ptr [r14 + 0x1b0]
202d4f imul     rcx, rsi
202d53 lea      r10, [rbx + rbx*8]
202d57 xor      rcx, r10
202d5a xor      rcx, rbp
202d5d xor      rax, rcx
202d60 sub      r11, rcx
202d63 test     dil, dil
202d66 cmove    r11, rax
202d6a imul     r9, r15
202d6e mov      rcx, r11
202d71 add      r9, r12
202d74 mov      rax, r9
202d77 shr      rax, 0x1b
202d7b movzx    edx, al
202d7e mov      byte ptr [r14 + 0x168], dl
202d85 imul     rdx, rsi
202d89 xor      rdx, rbp
202d8c xor      rdx, r10
202d8f xor      rcx, rdx
202d92 test     dil, dil
202d95 lea      rax, [r11 + rdx]
202d99 cmove    rax, rcx
202d9d mov      rcx, r11
202da0 mov      qword ptr [r14 + 0x130], rax
202da7 lea      rax, [r8 + 2]
202dab mov      qword ptr [r14 + 0x1b8], rax
202db2 mov      r8d, 0xbbc0
202db8 imul     r9, r15
202dbc lea      rax, [rbx + rbx*4]
202dc0 add      rax, rax
202dc3 add      r9, r12
202dc6 mov      qword ptr [r14 + 0x1b0], r9
202dcd shr      r9, 0x1b
202dd1 movzx    edx, r9b
202dd5 mov      byte ptr [r14 + 0x169], dl
202ddc imul     rdx, rsi
202de0 xor      rdx, rax
202de3 xor      rdx, rbp
202de6 xor      rcx, rdx
202de9 test     dil, dil
202dec lea      rax, [r11 + rdx]
202df0 cmove    rax, rcx
202df4 mov      rcx, r14
202df7 mov      qword ptr [r14 + 0x138], rax
202dfe movzx    edx, byte ptr [r14 + 0x4ad]
202e06 xor      rdx, qword ptr [r14 + 0x348]
202e0d call     0x1401f1520
202e12 mov      r8, qword ptr [r14 + 0x348]
202e19 movabs   rdi, 0xff51afd7ed558ccd
202e23 mov      rax, r8
202e26 movabs   rbp, 0xc4ceb9fe1a85ec53
202e30 xor      rax, qword ptr [r14 + 0x20]
202e34 mov      rcx, rax
202e37 shr      rcx, 0x21
202e3b xor      rcx, rax
202e3e imul     rcx, rdi
202e42 mov      rax, rcx
202e45 shr      rax, 0x21
202e49 xor      rax, rcx
202e4c imul     rax, rbp
202e50 mov      rdx, rax
202e53 shr      rdx, 0x21
202e57 xor      edx, eax
202e59 mov      ecx, edx
202e5b lea      eax, [rdx + 1]
202e5e imul     ecx, eax
202e61 xor      edx, eax
202e63 not      ecx
202e65 and      ecx, edx
202e67 test     cl, 1
202e6a je       0x140202ed3
202e6c and      r8b, 3
202e70 cmp      r8b, 1
202e74 jne      0x140202ed3
202e76 mov      rax, qword ptr [r14 + 0x1b0]
202e7d inc      qword ptr [r14 + 0x1b8]
202e84 imul     rax, r15
202e88 add      rax, r12
202e8b mov      qword ptr [r14 + 0x1b0], rax
202e92 shr      rax, 0x1b
202e96 movzx    eax, al
202e99 mov      byte ptr [r14 + 0x160], al
202ea0 imul     rax, qword ptr [r14 + 0xe0]
202ea8 xor      rax, qword ptr [r14 + 0xd8]
202eaf xor      rax, qword ptr [r14 + 0xd0]
202eb6 mov      rcx, rax
202eb9 add      rax, 0x190631
202ebf xor      rcx, 0x190631
202ec6 cmp      byte ptr [r14 + 0xe8], 0
202ece jmp      0x1402034f0
202ed3 mov      rcx, r14
202ed6 call     0x1401ee070
202edb mov      ebx, eax
202edd cmp      eax, dword ptr [r14 + 0x1d8]
202ee4 jb       0x140202f43
202ee6 mov      rax, qword ptr [r14 + 0x1b0]
202eed inc      qword ptr [r14 + 0x1b8]
202ef4 imul     rax, r15
202ef8 add      rax, r12
202efb mov      qword ptr [r14 + 0x1b0], rax
202f02 shr      rax, 0x1b
202f06 movzx    eax, al
202f09 mov      byte ptr [r14 + 0x160], al
202f10 imul     rax, qword ptr [r14 + 0xe0]
202f18 xor      rax, qword ptr [r14 + 0xd8]
202f1f xor      rax, qword ptr [r14 + 0xd0]
202f26 mov      rcx, rax
202f29 add      rax, 0xfe1ab
202f2f xor      rcx, 0xfe1ab
202f36 cmp      byte ptr [r14 + 0xe8], 0
202f3e jmp      0x1402034f0
202f43 mov      edx, ebx
202f45 mov      rcx, r14
202f48 call     0x1401f25b0
202f4d movsxd   rcx, dword ptr [r14 + 0x11e0]
202f54 movabs   r8, 0xd6e8feb86659fd93
202f5e mov      rdx, qword ptr [r14 + 0x20]
202f62 mov      rax, rbx
202f65 imul     rax, r8
202f69 imul     rcx, r15
202f6d rol      rdx, 0x11
202f71 xor      rcx, qword ptr [r14 + 0x260]
202f78 xor      rax, rcx
202f7b xor      rax, rdx
202f7e mov      rcx, rax
202f81 shr      rcx, 0x21
202f85 xor      rcx, rax
202f88 imul     rcx, rdi
202f8c mov      rdx, rcx
202f8f shr      rdx, 0x21
202f93 xor      rdx, rcx
202f96 imul     rdx, rbp
202f9a mov      rax, rdx
202f9d shr      rax, 0x21
202fa1 xor      rax, rdx
202fa4 mov      r10, rax
202fa7 shr      r10, 0x1d
202fab xor      r10, rax
202fae or       r10, 1
202fb2 mov      rax, r10
202fb5 mov      qword ptr [r14 + 0x260], r10
202fbc and      eax, 0x3ff
202fc1 cmp      rax, 0x2c5
202fc7 jne      0x140202fd8
202fc9 mov      rcx, r14
202fcc call     0x1402297e0
202fd1 mov      r10, qword ptr [r14 + 0x260]
202fd8 movzx    eax, r10b
202fdc and      al, 0x1f
202fde cmp      al, 0x15
202fe0 jne      0x1402030ce
202fe6 movsxd   rcx, dword ptr [r14 + 0x11e0]
202fed mov      rax, qword ptr [r14 + 0x20]
202ff1 xor      rcx, 0x5a5a
202ff8 rol      rax, 0x11
202ffc imul     rcx, r15
203000 xor      rcx, r10
203003 xor      rcx, rax
203006 movabs   rax, 0x8f70feda99a6026d
203010 xor      rcx, rax
203013 mov      rax, rcx
203016 shr      rax, 0x21
20301a xor      rax, rcx
20301d imul     rax, rdi
203021 mov      rcx, rax
203024 shr      rcx, 0x21
203028 xor      rcx, rax
20302b imul     rcx, rbp
20302f mov      rax, rcx
203032 shr      rax, 0x21
203036 xor      rax, rcx
203039 mov      r9, rax
20303c shr      r9, 0x1d
203040 xor      r9, rax
203043 or       r9, 1
203047 mov      rax, r9
20304a mov      rcx, r9
20304d shr      rax, 8
203051 and      eax, 3
203054 shr      rcx, 0x28
203058 imul     r8, rax, 0x3e
20305c mov      eax, 0x8421085
203061 mul      ecx
203063 mov      eax, ecx
203065 sub      eax, edx
203067 shr      eax, 1
203069 add      eax, edx
20306b shr      eax, 5
20306e imul     eax, eax, 0x3e
203071 sub      ecx, eax
203073 mov      eax, ecx
203075 add      r8, rax
203078 mov      rax, qword ptr [r14 + 0x4b8]
20307f movsxd   rcx, dword ptr [rax + r8*4]
203083 movsxd   rax, dword ptr [r14 + 0x4c8]
20308a xor      rcx, rax
20308d add      rcx, qword ptr [r14 + 0x4c0]
203094 xor      rcx, r9
203097 mov      rax, rcx
20309a shr      rax, 0x21
20309e xor      rax, rcx
2030a1 imul     rax, rdi
2030a5 mov      rcx, rax
2030a8 shr      rcx, 0x21
2030ac xor      rcx, rax
2030af imul     rcx, rbp
2030b3 mov      rax, rcx
2030b6 shr      rax, 0x21
2030ba xor      rax, r10
2030bd xor      rax, rcx
2030c0 inc      qword ptr [r14 + 0x268]
2030c7 mov      qword ptr [r14 + 0x260], rax
2030ce inc      dword ptr [r14 + 0x200]
2030d5 mov      eax, dword ptr [r14 + 0x200]
2030dc cmp      eax, dword ptr [r14 + 0x1fc]
2030e3 jb       0x1402030f8
2030e5 mov      rcx, r14
2030e8 mov      dword ptr [r14 + 0x200], 0
2030f3 call     0x1401ef7c0
2030f8 mov      r8d, ebx
2030fb mov      edx, ebx
2030fd mov      rcx, r14
203100 call     0x1401f0660
203105 inc      qword ptr [r14 + 0x1b8]
20310c mov      rcx, rbx
20310f mov      r9, qword ptr [r14 + 0x1b0]
203116 imul     r9, r15
20311a mov      r15, qword ptr [r14 + 0x1b8]
203121 add      r9, r12
203124 lea      r12d, [rbx + 1]
203128 mov      qword ptr [r14 + 0x1b0], r9
20312f mov      rax, r9
203132 shr      rax, 0x1b
203136 movzx    edx, al
203139 mov      byte ptr [r14 + 0x168], dl
203140 mov      r11, qword ptr [r14 + 0xe0]
203147 mov      r10, qword ptr [r14 + 0xd8]
20314e mov      rdi, qword ptr [r14 + 0xd0]
203155 movzx    ebp, byte ptr [r14 + 0xe8]
20315d imul     rdx, r11
203161 lea      rax, [r10 + r10*8]
203165 xor      rdx, rax
203168 xor      rdx, rdi
20316b xor      rcx, rdx
20316e test     bpl, bpl
203171 lea      rax, [rbx + rdx]
203175 cmove    rax, rcx
203179 inc      r15
20317c mov      qword ptr [r14 + 0x130], rax
203183 mov      rcx, qword ptr [r14 + 0x1d0]
20318a mov      rax, qword ptr [r14 + 0x48]
20318e mov      qword ptr [rsp + 0x60], r15
203193 movzx    r8d, byte ptr [rcx + rbx]
203198 xor      r8b, byte ptr [rax + rbx]
20319c movabs   rax, 0x9e3779b97f4a7c15
2031a6 imul     r9, rax
2031aa mov      qword ptr [r14 + 0x1b8], r15
2031b1 movabs   rax, 0x2545f4914f6cdd1d
2031bb add      r9, rax
2031be mov      rax, r9
2031c1 shr      rax, 0x1b
2031c5 movzx    edx, al
2031c8 lea      rax, [r10 + r10]
2031cc mov      byte ptr [r14 + 0x161], dl
2031d3 imul     rdx, r11
2031d7 xor      rdx, rax
2031da xor      rdx, rdi
2031dd mov      rcx, rdx
2031e0 xor      rcx, r12
2031e3 test     bpl, bpl
2031e6 lea      rax, [rdx + r12]
2031ea cmove    rax, rcx
2031ee mov      qword ptr [r14 + 0xf8], rax
2031f5 movsxd   rdx, dword ptr [r14 + 0x11e0]
2031fc mov      rbx, qword ptr [r14 + 0x20]
203200 mov      rcx, rdx
203203 xor      rcx, qword ptr [r14 + 0x350]
20320a xor      rcx, r12
20320d xor      rcx, qword ptr [r14 + 0x348]
203214 xor      rcx, rbx
203217 mov      rax, rcx
20321a shr      rax, 0x21
20321e xor      rax, rcx
203221 movabs   rcx, 0xff51afd7ed558ccd
20322b imul     rax, rcx
20322f mov      rcx, rax
203232 shr      rcx, 0x21
203236 xor      rcx, rax
203239 movabs   rax, 0xc4ceb9fe1a85ec53
203243 imul     rcx, rax
203247 movzx    eax, r8b
20324b mov      r15, rcx
20324e xor      rax, 0xdd
203254 shr      r15, 0x21
203258 xor      r15, rcx
20325b lea      rcx, [rip - 0x203262]
203262 mov      qword ptr [r14 + 0x28], r15
203266 movzx    esi, byte ptr [rax + rcx + 0x3ecf00]
20326e xor      sil, 0x63
203272 inc      edx
203274 mov      dword ptr [r14 + 0x11e0], edx
20327b test     dl, 0x1f
20327e jne      0x1402032ce
203280 movsxd   rax, edx
203283 xor      rax, qword ptr [r14 + 0x348]
20328a xor      rax, rbx
20328d mov      rcx, rax
203290 shr      rcx, 0x21
203294 xor      rcx, rax
203297 movabs   rax, 0xff51afd7ed558ccd
2032a1 imul     rcx, rax
2032a5 movabs   rax, 0xc4ceb9fe1a85ec53
2032af mov      rdx, rcx
2032b2 shr      rdx, 0x21
2032b6 xor      rdx, rcx
2032b9 imul     rdx, rax
2032bd mov      rax, rdx
2032c0 shr      rax, 0x21
2032c4 xor      rax, rdx
2032c7 mov      qword ptr [r14 + 0x348], rax
2032ce movzx    r8d, sil
2032d2 mov      eax, r8d
2032d5 mov      byte ptr [r14 + 0x4ad], sil
2032dc xor      rax, r12
2032df movabs   r12, 0xff51afd7ed558ccd
2032e9 xor      rax, rbx
2032ec movabs   rbx, 0x9e3779b97f4a7c15
2032f6 mov      rcx, rax
2032f9 shr      rcx, 0x21
2032fd xor      rcx, rax
203300 movabs   rax, 0xc4ceb9fe1a85ec53
20330a imul     rcx, r12
20330e imul     r8, rbx
203312 imul     r9, rbx
203316 mov      rdx, rcx
203319 shr      rdx, 0x21
20331d xor      rdx, rcx
203320 mov      ecx, dword ptr [r14 + 0x1178]
203327 imul     rdx, rax
20332b mov      rax, rdx
20332e shr      rax, 0x21
203332 xor      rax, rdx
203335 mov      qword ptr [r14 + 0x20], rax
203339 movabs   rax, 0xd6e8feb86659fd93
203343 imul     rcx, rax
203347 xor      rcx, r8
20334a xor      rcx, r15
20334d movabs   r15, 0x2545f4914f6cdd1d
203357 mov      rax, rcx
20335a add      r9, r15
20335d shr      rax, 0x21
203361 xor      rax, rcx
203364 imul     rax, r12
203368 mov      rdx, rax
20336b shr      rdx, 0x21
20336f xor      rdx, rax
203372 movabs   rax, 0xc4ceb9fe1a85ec53
20337c imul     rdx, rax
203380 mov      rax, qword ptr [rsp + 0x60]
203385 shr      rdx, 0x21
203389 and      edx, 3
20338c inc      rax
20338f mov      qword ptr [r14 + 0x1b8], rax
203396 cmp      sil, 0x3e
20339a jae      0x140203434
2033a0 inc      qword ptr [r14 + 0x11a0]
2033a7 lea      rax, [rip - 0x2033ae]
2033ae mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
2033b6 mov      qword ptr [r14 + 0x1b0], r9
2033bd shr      r9, 0x1b
2033c1 movzx    eax, r9b
2033c5 mov      byte ptr [r14 + 0x160], al
2033cc imul     rax, r11
2033d0 mov      ebx, edx
2033d2 xor      rax, r10
2033d5 xor      rax, rdi
2033d8 mov      rcx, rax
2033db add      rax, r8
2033de xor      rcx, r8
2033e1 movzx    r8d, sil
2033e5 test     bpl, bpl
2033e8 cmove    rax, rcx
2033ec mov      rcx, r14
2033ef mov      qword ptr [r14 + 0xf0], rax
2033f6 call     0x1401f1f50
2033fb mov      r8, qword ptr [rsp + 0x70]
203400 lea      edx, [r13 - 1]
203404 mov      eax, eax
203406 imul     rcx, rbx, 0x3e
20340a add      rcx, rax
20340d mov      rax, qword ptr [r14 + 0x4b8]
203414 movsxd   r9, dword ptr [rax + rcx*4]
203418 mov      rcx, r14
20341b movsxd   rax, dword ptr [r14 + 0x4c8]
203422 xor      r9, rax
203425 add      r9, qword ptr [r14 + 0x4c0]
20342c call     r9
20342f jmp      0x1402034fb
203434 inc      dword ptr [r14 + 0x11a8]
20343b mov      rax, r9
20343e shr      rax, 0x1b
203442 movzx    ecx, al
203445 lea      rax, [r10*4]
20344d mov      byte ptr [r14 + 0x163], cl
203454 imul     rcx, r11
203458 imul     r9, rbx
20345c xor      rcx, rax
20345f xor      rcx, rdi
203462 mov      qword ptr [r14 + 0x108], rcx
203469 mov      r8, qword ptr [r14 + 0x1b8]
203470 add      r9, r15
203473 mov      rax, r9
203476 shr      rax, 0x1b
20347a movzx    edx, al
20347d mov      byte ptr [r14 + 0x16a], dl
203484 imul     rax, r10, 0xb
203488 imul     rdx, r11
20348c xor      rdx, rax
20348f xor      rdx, rdi
203492 mov      rcx, rdx
203495 xor      rcx, 1
203499 test     bpl, bpl
20349c lea      rax, [rdx + 1]
2034a0 cmove    rax, rcx
2034a4 mov      qword ptr [r14 + 0x140], rax
2034ab lea      rax, [r8 + 2]
2034af mov      qword ptr [r14 + 0x1b8], rax
2034b6 imul     r9, rbx
2034ba add      r9, r15
2034bd mov      qword ptr [r14 + 0x1b0], r9
2034c4 shr      r9, 0x1b
2034c8 movzx    eax, r9b
2034cc mov      byte ptr [r14 + 0x160], al
2034d3 imul     rax, r11
2034d7 xor      rax, rdi
2034da xor      rax, r10
2034dd mov      rcx, rax
2034e0 add      rax, 0xfe1ab
2034e6 xor      rcx, 0xfe1ab
2034ed test     bpl, bpl
2034f0 cmove    rax, rcx
2034f4 mov      qword ptr [r14 + 0xf0], rax
2034fb mov      rbx, qword ptr [rsp + 0x68]
203500 add      rsp, 0x20
203504 pop      r15
203506 pop      r14
203508 pop      r13
20350a pop      r12
20350c pop      rdi
20350d pop      rsi
20350e pop      rbp
20350f ret      
203510 mov      edx, 0x54485254
203515 mov      rcx, r14
203518 call     0x1401ed830
20351d int3     
20351e mov      edx, 0x43414e59
203523 mov      rcx, r14
203526 call     0x1401ed830
20352b int3     
