2078e0 mov      qword ptr [rsp + 0x18], r8
2078e5 mov      dword ptr [rsp + 0x10], edx
2078e9 push     rbx
2078ea push     rbp
2078eb push     rdi
2078ec push     r12
2078ee push     r13
2078f0 push     r14
2078f2 push     r15
2078f4 sub      rsp, 0x20
2078f8 movsxd   rax, dword ptr [rcx + 0x11e0]
2078ff mov      r14, rcx
207902 mov      ebp, edx
207904 movabs   rcx, 0x9801a1ed1bafc8d8
20790e imul     rax, rcx
207912 movabs   rcx, 0x3a582b269a714ce7
20791c movabs   r15, 0x9e3779b97f4a7c15
207926 xor      rax, qword ptr [r14 + 0x28]
20792a movabs   r12, 0x2545f4914f6cdd1d
207934 mov      qword ptr [rsp + 0x60], rax
207939 movabs   r13, 0xff51afd7ed558ccd
207943 mov      rax, qword ptr [rsp + 0x60]
207948 mov      rdi, r8
20794b movsxd   rax, dword ptr [r14 + 0x11e0]
207952 imul     rax, rcx
207956 movabs   rcx, 0xdc90b578193ac0f2
207960 xor      rax, qword ptr [r14 + 0x28]
207964 mov      qword ptr [rsp + 0x60], rax
207969 mov      rax, qword ptr [rsp + 0x60]
20796e movsxd   rax, dword ptr [r14 + 0x11e0]
207975 imul     rax, rcx
207979 movabs   rcx, 0x4ee2b7ff92fc54c9
207983 xor      rax, qword ptr [r14 + 0x28]
207987 mov      qword ptr [rsp + 0x60], rax
20798c mov      rax, qword ptr [rsp + 0x60]
207991 mov      rax, qword ptr [r14 + 0x2f8]
207998 add      rax, rcx
20799b mov      rcx, rax
20799e shr      rcx, 0x21
2079a2 xor      rcx, rax
2079a5 movabs   rax, 0xc4ceb9fe1a85ec53
2079af imul     rcx, r13
2079b3 mov      rdx, rcx
2079b6 shr      rdx, 0x21
2079ba xor      rdx, rcx
2079bd imul     rdx, rax
2079c1 mov      rax, rdx
2079c4 shr      rax, 0x21
2079c8 xor      rdx, rax
2079cb mov      rax, qword ptr [r14 + 0x2f8]
2079d2 or       rdx, 1
2079d6 xor      rdx, rax
2079d9 mov      qword ptr [r14 + 0x2f8], rdx
2079e0 mov      rbx, qword ptr [r14 + 0x1b0]
2079e7 mov      rdx, qword ptr [r14 + 0x1b8]
2079ee imul     rbx, r15
2079f2 add      rbx, r12
2079f5 mov      rax, rbx
2079f8 shr      rax, 0x1b
2079fc movzx    ecx, al
2079ff mov      byte ptr [r14 + 0x163], cl
207a06 mov      r10, qword ptr [r14 + 0xe0]
207a0d mov      r8, qword ptr [r14 + 0xd8]
207a14 mov      r9, qword ptr [r14 + 0xd0]
207a1b movzx    r11d, byte ptr [r14 + 0xe8]
207a23 imul     rcx, r10
207a27 imul     rbx, r15
207a2b lea      rax, [r8*4]
207a33 xor      rcx, rax
207a36 xor      rcx, r9
207a39 mov      qword ptr [r14 + 0x108], rcx
207a40 add      rbx, r12
207a43 mov      rax, rbx
207a46 shr      rax, 0x1b
207a4a movzx    eax, al
207a4d mov      byte ptr [r14 + 0x160], al
207a54 imul     rax, r10
207a58 xor      rax, r9
207a5b xor      rax, r8
207a5e mov      rcx, rax
207a61 add      rax, 0xfe1ab
207a67 xor      rcx, 0xfe1ab
207a6e test     r11b, r11b
207a71 cmove    rax, rcx
207a75 mov      qword ptr [r14 + 0xf0], rax
207a7c lea      rax, [rdx + 3]
207a80 imul     rbx, r15
207a84 mov      qword ptr [r14 + 0x1b8], rax
207a8b add      rbx, r12
207a8e mov      qword ptr [r14 + 0x1b0], rbx
207a95 shr      rbx, 0x1b
207a99 imul     rax, r8, 0xb
207a9d movzx    edx, bl
207aa0 mov      byte ptr [r14 + 0x16a], dl
207aa7 imul     rdx, r10
207aab xor      rdx, rax
207aae xor      rdx, r9
207ab1 mov      rcx, rdx
207ab4 xor      rcx, 1
207ab8 test     r11b, r11b
207abb lea      rax, [rdx + 1]
207abf cmove    rax, rcx
207ac3 mov      qword ptr [r14 + 0x140], rax
207aca mov      rax, qword ptr [r14 + 0x2f8]
207ad1 test     ebp, ebp
207ad3 jns      0x1402085f3
207ad9 cmp      qword ptr [r14 + 0x11b8], rdi
207ae0 jne      0x140208601
207ae6 movsxd   rax, dword ptr [r14 + 0x11e0]
207aed movabs   rcx, 0x81b38e6c4666cc09
207af7 imul     rax, rcx
207afb mov      rcx, r14
207afe xor      rax, qword ptr [r14 + 0x28]
207b02 mov      qword ptr [rsp + 0x60], rax
207b07 mov      rax, qword ptr [rsp + 0x60]
207b0c call     0x1401ee450
207b11 test     eax, eax
207b13 jne      0x1402085e3
207b19 cmp      dword ptr [r14 + 0xad0], eax
207b20 jne      0x1402085e3
207b26 mov      r8, qword ptr [r14 + 0xf0]
207b2d movzx    ecx, byte ptr [r14 + 0x160]
207b35 mov      rax, r8
207b38 mov      r10, qword ptr [r14 + 0xe0]
207b3f mov      rbx, qword ptr [r14 + 0xd0]
207b46 mov      r11, qword ptr [r14 + 0xd8]
207b4d movzx    edi, byte ptr [r14 + 0xe8]
207b55 mov      r9, qword ptr [r14 + 0x1b0]
207b5c imul     rcx, r10
207b60 mov      qword ptr [rsp + 0x78], rsi
207b65 mov      rsi, qword ptr [r14 + 0x1b8]
207b6c xor      rcx, rbx
207b6f xor      rcx, r11
207b72 xor      rax, rcx
207b75 sub      r8, rcx
207b78 test     dil, dil
207b7b cmove    r8, rax
207b7f inc      rsi
207b82 imul     r9, r15
207b86 mov      qword ptr [r14 + 0x1b8], rsi
207b8d mov      rcx, r8
207b90 add      r9, r12
207b93 mov      qword ptr [r14 + 0x1b0], r9
207b9a mov      rax, r9
207b9d shr      rax, 0x1b
207ba1 movzx    edx, al
207ba4 mov      byte ptr [r14 + 0x160], dl
207bab imul     rdx, r10
207baf xor      rdx, rbx
207bb2 xor      rdx, r11
207bb5 xor      rcx, rdx
207bb8 test     dil, dil
207bbb lea      rax, [r8 + rdx]
207bbf cmove    rax, rcx
207bc3 mov      qword ptr [r14 + 0xf0], rax
207bca cmp      r8d, 0x338040
207bd1 jne      0x1402085de
207bd7 mov      eax, ebp
207bd9 btr      eax, 0x1f
207bdd cmp      eax, 2
207be0 jae      0x140207c2c
207be2 imul     r9, r15
207be6 lea      rax, [rsi + 1]
207bea mov      qword ptr [r14 + 0x1b8], rax
207bf1 add      r9, r12
207bf4 mov      qword ptr [r14 + 0x1b0], r9
207bfb shr      r9, 0x1b
207bff movzx    eax, r9b
207c03 mov      byte ptr [r14 + 0x160], al
207c0a imul     rax, r10
207c0e xor      rax, rbx
207c11 xor      rax, r11
207c14 mov      rcx, rax
207c17 add      rax, 0x1ad951
207c1d xor      rcx, 0x1ad951
207c24 test     dil, dil
207c27 jmp      0x1402085d3
207c2c mov      rcx, r14
207c2f call     0x1401ee070
207c34 movzx    ecx, byte ptr [r14 + 0x4ad]
207c3c movabs   r8, 0xc4ceb9fe1a85ec53
207c46 mov      r11, qword ptr [r14 + 0xe0]
207c4d mov      r9, qword ptr [r14 + 0xd0]
207c54 movzx    r10d, byte ptr [r14 + 0xe8]
207c5c mov      eax, eax
207c5e xor      rcx, rax
207c61 xor      rcx, qword ptr [r14 + 0x11e8]
207c68 mov      rax, rcx
207c6b shr      rax, 0x21
207c6f xor      rax, rcx
207c72 imul     rax, r13
207c76 mov      rcx, rax
207c79 shr      rcx, 0x21
207c7d xor      rcx, rax
207c80 mov      rax, qword ptr [r14 + 0x20]
207c84 xor      rax, qword ptr [r14 + 0x28]
207c88 imul     rcx, r8
207c8c mov      rdx, rcx
207c8f shr      rdx, 0x21
207c93 xor      rdx, rcx
207c96 xor      rax, rdx
207c99 mov      qword ptr [r14 + 0x11e8], rdx
207ca0 mov      rcx, rax
207ca3 shr      rcx, 0x21
207ca7 xor      rcx, rax
207caa imul     rcx, r13
207cae mov      rdx, rcx
207cb1 shr      rdx, 0x21
207cb5 xor      rdx, rcx
207cb8 imul     rdx, r8
207cbc mov      rax, rdx
207cbf shr      rax, 0x21
207cc3 xor      rax, rdx
207cc6 mov      qword ptr [r14 + 0x20], rax
207cca mov      rdx, qword ptr [r14 + 0x138]
207cd1 movzx    ecx, byte ptr [r14 + 0x169]
207cd9 mov      rax, qword ptr [r14 + 0xd8]
207ce0 imul     rcx, r11
207ce4 lea      rbx, [rax + rax*4]
207ce8 mov      rax, rdx
207ceb xor      rcx, r9
207cee add      rbx, rbx
207cf1 xor      rcx, rbx
207cf4 xor      rax, rcx
207cf7 sub      rdx, rcx
207cfa test     r10b, r10b
207cfd cmove    rdx, rax
207d01 mov      rax, qword ptr [r14 + 0x1b0]
207d08 inc      qword ptr [r14 + 0x1b8]
207d0f mov      rcx, rdx
207d12 imul     rax, r15
207d16 add      rax, r12
207d19 mov      qword ptr [r14 + 0x1b0], rax
207d20 shr      rax, 0x1b
207d24 movzx    r8d, al
207d28 mov      byte ptr [r14 + 0x169], r8b
207d2f imul     r8, r11
207d33 xor      r8, r9
207d36 xor      r8, rbx
207d39 xor      rcx, r8
207d3c test     r10b, r10b
207d3f lea      rax, [rdx + r8]
207d43 cmove    rax, rcx
207d47 mov      rcx, r14
207d4a mov      qword ptr [r14 + 0x138], rax
207d51 call     0x1401f0910
207d56 mov      rax, qword ptr [r14 + 0xd8]
207d5d mov      r11, qword ptr [r14 + 0xe0]
207d64 movzx    ecx, byte ptr [r14 + 0x168]
207d6c mov      r9, qword ptr [r14 + 0xd0]
207d73 mov      rdx, qword ptr [r14 + 0x130]
207d7a lea      rbx, [rax + rax*8]
207d7e movzx    r10d, byte ptr [r14 + 0xe8]
207d86 mov      rax, rdx
207d89 imul     rcx, r11
207d8d xor      rcx, r9
207d90 xor      rcx, rbx
207d93 xor      rax, rcx
207d96 sub      rdx, rcx
207d99 test     r10b, r10b
207d9c cmove    rdx, rax
207da0 mov      rax, qword ptr [r14 + 0x1b0]
207da7 inc      qword ptr [r14 + 0x1b8]
207dae mov      rcx, rdx
207db1 imul     rax, r15
207db5 add      rax, r12
207db8 mov      qword ptr [r14 + 0x1b0], rax
207dbf shr      rax, 0x1b
207dc3 movzx    r8d, al
207dc7 mov      byte ptr [r14 + 0x168], r8b
207dce imul     r8, r11
207dd2 xor      r8, r9
207dd5 xor      r8, rbx
207dd8 xor      rcx, r8
207ddb test     r10b, r10b
207dde lea      rax, [rdx + r8]
207de2 cmove    rax, rcx
207de6 mov      rcx, r14
207de9 mov      qword ptr [r14 + 0x130], rax
207df0 call     0x1401f0910
207df5 mov      rcx, r14
207df8 call     0x1401ee070
207dfd cmp      eax, dword ptr [r14 + 0x1d8]
207e04 jae      0x140207e10
207e06 mov      edx, eax
207e08 mov      rcx, r14
207e0b call     0x1401f0910
207e10 mov      rsi, qword ptr [r14 + 0xe0]
207e17 mov      rbp, qword ptr [r14 + 0xd0]
207e1e mov      r11, qword ptr [r14 + 0x130]
207e25 movzx    edi, byte ptr [r14 + 0xe8]
207e2d mov      rax, r11
207e30 movzx    ecx, byte ptr [r14 + 0x168]
207e38 mov      rbx, qword ptr [r14 + 0xd8]
207e3f mov      r8, qword ptr [r14 + 0x1b8]
207e46 mov      r9, qword ptr [r14 + 0x1b0]
207e4d imul     rcx, rsi
207e51 lea      r10, [rbx + rbx*8]
207e55 xor      rcx, rbp
207e58 xor      rcx, r10
207e5b xor      rax, rcx
207e5e sub      r11, rcx
207e61 test     dil, dil
207e64 cmove    r11, rax
207e68 imul     r9, r15
207e6c mov      rcx, r11
207e6f add      r9, r12
207e72 mov      rax, r9
207e75 shr      rax, 0x1b
207e79 movzx    edx, al
207e7c mov      byte ptr [r14 + 0x168], dl
207e83 imul     rdx, rsi
207e87 xor      rdx, rbp
207e8a xor      rdx, r10
207e8d xor      rcx, rdx
207e90 test     dil, dil
207e93 lea      rax, [r11 + rdx]
207e97 cmove    rax, rcx
207e9b mov      rcx, r11
207e9e mov      qword ptr [r14 + 0x130], rax
207ea5 lea      rax, [r8 + 2]
207ea9 mov      qword ptr [r14 + 0x1b8], rax
207eb0 mov      r8d, 0x2db6
207eb6 imul     r9, r15
207eba lea      rax, [rbx + rbx*4]
207ebe add      rax, rax
207ec1 add      r9, r12
207ec4 mov      qword ptr [r14 + 0x1b0], r9
207ecb shr      r9, 0x1b
207ecf movzx    edx, r9b
207ed3 mov      byte ptr [r14 + 0x169], dl
207eda imul     rdx, rsi
207ede xor      rdx, rax
207ee1 xor      rdx, rbp
207ee4 xor      rcx, rdx
207ee7 test     dil, dil
207eea lea      rax, [r11 + rdx]
207eee cmove    rax, rcx
207ef2 mov      rcx, r14
207ef5 mov      qword ptr [r14 + 0x138], rax
207efc movzx    edx, byte ptr [r14 + 0x4ad]
207f04 xor      rdx, qword ptr [r14 + 0x348]
207f0b call     0x1401f1520
207f10 mov      r8, qword ptr [r14 + 0x348]
207f17 movabs   rdi, 0xc4ceb9fe1a85ec53
207f21 mov      rax, r8
207f24 xor      rax, qword ptr [r14 + 0x20]
207f28 mov      rcx, rax
207f2b shr      rcx, 0x21
207f2f xor      rcx, rax
207f32 imul     rcx, r13
207f36 mov      rax, rcx
207f39 shr      rax, 0x21
207f3d xor      rax, rcx
207f40 imul     rax, rdi
207f44 mov      rdx, rax
207f47 shr      rdx, 0x21
207f4b xor      edx, eax
207f4d mov      ecx, edx
207f4f lea      eax, [rdx + 1]
207f52 imul     ecx, eax
207f55 xor      edx, eax
207f57 not      ecx
207f59 and      ecx, edx
207f5b test     cl, 1
207f5e je       0x140207fc7
207f60 and      r8b, 3
207f64 cmp      r8b, 1
207f68 jne      0x140207fc7
207f6a mov      rax, qword ptr [r14 + 0x1b0]
207f71 inc      qword ptr [r14 + 0x1b8]
207f78 imul     rax, r15
207f7c add      rax, r12
207f7f mov      qword ptr [r14 + 0x1b0], rax
207f86 shr      rax, 0x1b
207f8a movzx    eax, al
207f8d mov      byte ptr [r14 + 0x160], al
207f94 imul     rax, qword ptr [r14 + 0xe0]
207f9c xor      rax, qword ptr [r14 + 0xd0]
207fa3 xor      rax, qword ptr [r14 + 0xd8]
207faa mov      rcx, rax
207fad add      rax, 0x190631
207fb3 xor      rcx, 0x190631
207fba cmp      byte ptr [r14 + 0xe8], 0
207fc2 jmp      0x1402085d3
207fc7 mov      rcx, r14
207fca call     0x1401ee070
207fcf mov      ebx, eax
207fd1 cmp      eax, dword ptr [r14 + 0x1d8]
207fd8 jb       0x140208037
207fda mov      rax, qword ptr [r14 + 0x1b0]
207fe1 inc      qword ptr [r14 + 0x1b8]
207fe8 imul     rax, r15
207fec add      rax, r12
207fef mov      qword ptr [r14 + 0x1b0], rax
207ff6 shr      rax, 0x1b
207ffa movzx    eax, al
207ffd mov      byte ptr [r14 + 0x160], al
208004 imul     rax, qword ptr [r14 + 0xe0]
20800c xor      rax, qword ptr [r14 + 0xd0]
208013 xor      rax, qword ptr [r14 + 0xd8]
20801a mov      rcx, rax
20801d add      rax, 0xfe1ab
208023 xor      rcx, 0xfe1ab
20802a cmp      byte ptr [r14 + 0xe8], 0
208032 jmp      0x1402085d3
208037 mov      edx, ebx
208039 mov      rcx, r14
20803c call     0x1401f25b0
208041 movsxd   rcx, dword ptr [r14 + 0x11e0]
208048 movabs   r8, 0xd6e8feb86659fd93
208052 mov      rdx, qword ptr [r14 + 0x20]
208056 mov      rax, rbx
208059 imul     rax, r8
20805d imul     rcx, r15
208061 rol      rdx, 0x11
208065 xor      rcx, qword ptr [r14 + 0x260]
20806c xor      rax, rcx
20806f xor      rax, rdx
208072 mov      rcx, rax
208075 shr      rcx, 0x21
208079 xor      rcx, rax
20807c imul     rcx, r13
208080 mov      rdx, rcx
208083 shr      rdx, 0x21
208087 xor      rdx, rcx
20808a imul     rdx, rdi
20808e mov      rax, rdx
208091 shr      rax, 0x21
208095 xor      rax, rdx
208098 mov      r10, rax
20809b shr      r10, 0x1d
20809f xor      r10, rax
2080a2 or       r10, 1
2080a6 mov      rax, r10
2080a9 mov      qword ptr [r14 + 0x260], r10
2080b0 and      eax, 0x3ff
2080b5 cmp      rax, 0x2c5
2080bb jne      0x1402080cc
2080bd mov      rcx, r14
2080c0 call     0x1402297e0
2080c5 mov      r10, qword ptr [r14 + 0x260]
2080cc movzx    eax, r10b
2080d0 and      al, 0x1f
2080d2 cmp      al, 0x15
2080d4 jne      0x1402081c2
2080da movsxd   rcx, dword ptr [r14 + 0x11e0]
2080e1 mov      rax, qword ptr [r14 + 0x20]
2080e5 xor      rcx, 0x5a5a
2080ec rol      rax, 0x11
2080f0 imul     rcx, r15
2080f4 xor      rcx, r10
2080f7 xor      rcx, rax
2080fa movabs   rax, 0x8f70feda99a6026d
208104 xor      rcx, rax
208107 mov      rax, rcx
20810a shr      rax, 0x21
20810e xor      rax, rcx
208111 imul     rax, r13
208115 mov      rcx, rax
208118 shr      rcx, 0x21
20811c xor      rcx, rax
20811f imul     rcx, rdi
208123 mov      rax, rcx
208126 shr      rax, 0x21
20812a xor      rax, rcx
20812d mov      r9, rax
208130 shr      r9, 0x1d
208134 xor      r9, rax
208137 or       r9, 1
20813b mov      rax, r9
20813e mov      rcx, r9
208141 shr      rax, 8
208145 and      eax, 3
208148 shr      rcx, 0x28
20814c imul     r8, rax, 0x3e
208150 mov      eax, 0x8421085
208155 mul      ecx
208157 mov      eax, ecx
208159 sub      eax, edx
20815b shr      eax, 1
20815d add      eax, edx
20815f shr      eax, 5
208162 imul     eax, eax, 0x3e
208165 sub      ecx, eax
208167 mov      eax, ecx
208169 add      r8, rax
20816c mov      rax, qword ptr [r14 + 0x4b8]
208173 movsxd   rcx, dword ptr [rax + r8*4]
208177 movsxd   rax, dword ptr [r14 + 0x4c8]
20817e xor      rcx, rax
208181 add      rcx, qword ptr [r14 + 0x4c0]
208188 xor      rcx, r9
20818b mov      rax, rcx
20818e shr      rax, 0x21
208192 xor      rax, rcx
208195 imul     rax, r13
208199 mov      rcx, rax
20819c shr      rcx, 0x21
2081a0 xor      rcx, rax
2081a3 imul     rcx, rdi
2081a7 mov      rax, rcx
2081aa shr      rax, 0x21
2081ae xor      rax, r10
2081b1 xor      rax, rcx
2081b4 inc      qword ptr [r14 + 0x268]
2081bb mov      qword ptr [r14 + 0x260], rax
2081c2 inc      dword ptr [r14 + 0x200]
2081c9 mov      eax, dword ptr [r14 + 0x200]
2081d0 cmp      eax, dword ptr [r14 + 0x1fc]
2081d7 jb       0x1402081ec
2081d9 mov      rcx, r14
2081dc mov      dword ptr [r14 + 0x200], 0
2081e7 call     0x1401ef7c0
2081ec mov      r8d, ebx
2081ef mov      edx, ebx
2081f1 mov      rcx, r14
2081f4 call     0x1401f0660
2081f9 inc      qword ptr [r14 + 0x1b8]
208200 mov      r9, qword ptr [r14 + 0x1b0]
208207 mov      r13, qword ptr [r14 + 0x1b8]
20820e imul     r9, r15
208212 add      r9, r12
208215 lea      r12d, [rbx + 1]
208219 mov      qword ptr [r14 + 0x1b0], r9
208220 mov      rax, r9
208223 shr      rax, 0x1b
208227 movzx    edx, al
20822a mov      byte ptr [r14 + 0x168], dl
208231 mov      r11, qword ptr [r14 + 0xe0]
208238 mov      r10, qword ptr [r14 + 0xd8]
20823f mov      rdi, qword ptr [r14 + 0xd0]
208246 movzx    ebp, byte ptr [r14 + 0xe8]
20824e imul     rdx, r11
208252 lea      rax, [r10 + r10*8]
208256 xor      rdx, rax
208259 xor      rdx, rdi
20825c mov      rcx, rdx
20825f xor      rcx, rbx
208262 test     bpl, bpl
208265 lea      rax, [rdx + rbx]
208269 cmove    rax, rcx
20826d inc      r13
208270 mov      qword ptr [r14 + 0x130], rax
208277 mov      rcx, qword ptr [r14 + 0x1d0]
20827e mov      rax, qword ptr [r14 + 0x48]
208282 imul     r9, r15
208286 movzx    r8d, byte ptr [rcx + rbx]
20828b xor      r8b, byte ptr [rax + rbx]
20828f movabs   rax, 0x2545f4914f6cdd1d
208299 add      r9, rax
20829c mov      qword ptr [r14 + 0x1b8], r13
2082a3 mov      rax, r9
2082a6 shr      rax, 0x1b
2082aa movzx    edx, al
2082ad lea      rax, [r10 + r10]
2082b1 mov      byte ptr [r14 + 0x161], dl
2082b8 imul     rdx, r11
2082bc xor      rdx, rax
2082bf xor      rdx, rdi
2082c2 mov      rcx, rdx
2082c5 xor      rcx, r12
2082c8 test     bpl, bpl
2082cb lea      rax, [rdx + r12]
2082cf cmove    rax, rcx
2082d3 mov      qword ptr [r14 + 0xf8], rax
2082da movsxd   rdx, dword ptr [r14 + 0x11e0]
2082e1 mov      rbx, qword ptr [r14 + 0x20]
2082e5 mov      rcx, rdx
2082e8 xor      rcx, qword ptr [r14 + 0x350]
2082ef xor      rcx, r12
2082f2 xor      rcx, qword ptr [r14 + 0x348]
2082f9 xor      rcx, rbx
2082fc mov      rax, rcx
2082ff shr      rax, 0x21
208303 xor      rax, rcx
208306 movabs   rcx, 0xff51afd7ed558ccd
208310 imul     rax, rcx
208314 mov      rcx, rax
208317 shr      rcx, 0x21
20831b xor      rcx, rax
20831e movabs   rax, 0xc4ceb9fe1a85ec53
208328 imul     rcx, rax
20832c movzx    eax, r8b
208330 xor      rax, 0xdd
208336 mov      r15, rcx
208339 shr      r15, 0x21
20833d xor      r15, rcx
208340 lea      rcx, [rip - 0x208347]
208347 mov      qword ptr [r14 + 0x28], r15
20834b movzx    esi, byte ptr [rax + rcx + 0x3ecf00]
208353 xor      sil, 0x63
208357 inc      edx
208359 mov      dword ptr [r14 + 0x11e0], edx
208360 test     dl, 0x1f
208363 jne      0x1402083b3
208365 movsxd   rax, edx
208368 xor      rax, qword ptr [r14 + 0x348]
20836f xor      rax, rbx
208372 mov      rcx, rax
208375 shr      rcx, 0x21
208379 xor      rcx, rax
20837c movabs   rax, 0xff51afd7ed558ccd
208386 imul     rcx, rax
20838a movabs   rax, 0xc4ceb9fe1a85ec53
208394 mov      rdx, rcx
208397 shr      rdx, 0x21
20839b xor      rdx, rcx
20839e imul     rdx, rax
2083a2 mov      rax, rdx
2083a5 shr      rax, 0x21
2083a9 xor      rax, rdx
2083ac mov      qword ptr [r14 + 0x348], rax
2083b3 movzx    r8d, sil
2083b7 mov      eax, r8d
2083ba mov      byte ptr [r14 + 0x4ad], sil
2083c1 xor      rax, r12
2083c4 movabs   r12, 0xff51afd7ed558ccd
2083ce xor      rax, rbx
2083d1 movabs   rbx, 0x9e3779b97f4a7c15
2083db mov      rcx, rax
2083de shr      rcx, 0x21
2083e2 xor      rcx, rax
2083e5 movabs   rax, 0xc4ceb9fe1a85ec53
2083ef imul     rcx, r12
2083f3 imul     r8, rbx
2083f7 imul     r9, rbx
2083fb mov      rdx, rcx
2083fe shr      rdx, 0x21
208402 xor      rdx, rcx
208405 mov      ecx, dword ptr [r14 + 0x1178]
20840c imul     rdx, rax
208410 mov      rax, rdx
208413 shr      rax, 0x21
208417 xor      rax, rdx
20841a mov      qword ptr [r14 + 0x20], rax
20841e movabs   rax, 0xd6e8feb86659fd93
208428 imul     rcx, rax
20842c xor      rcx, r8
20842f xor      rcx, r15
208432 movabs   r15, 0x2545f4914f6cdd1d
20843c mov      rax, rcx
20843f add      r9, r15
208442 shr      rax, 0x21
208446 xor      rax, rcx
208449 imul     rax, r12
20844d mov      rdx, rax
208450 shr      rdx, 0x21
208454 xor      rdx, rax
208457 movabs   rax, 0xc4ceb9fe1a85ec53
208461 imul     rdx, rax
208465 lea      rax, [r13 + 1]
208469 shr      rdx, 0x21
20846d and      edx, 3
208470 mov      qword ptr [r14 + 0x1b8], rax
208477 cmp      sil, 0x3e
20847b jae      0x140208517
208481 inc      qword ptr [r14 + 0x11a0]
208488 lea      rax, [rip - 0x20848f]
20848f mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
208497 mov      qword ptr [r14 + 0x1b0], r9
20849e shr      r9, 0x1b
2084a2 movzx    eax, r9b
2084a6 mov      byte ptr [r14 + 0x160], al
2084ad imul     rax, r11
2084b1 mov      ebx, edx
2084b3 xor      rax, rdi
2084b6 xor      rax, r10
2084b9 mov      rcx, rax
2084bc add      rax, r8
2084bf xor      rcx, r8
2084c2 movzx    r8d, sil
2084c6 test     bpl, bpl
2084c9 cmove    rax, rcx
2084cd mov      rcx, r14
2084d0 mov      qword ptr [r14 + 0xf0], rax
2084d7 call     0x1401f1f50
2084dc mov      edx, dword ptr [rsp + 0x68]
2084e0 mov      r8, qword ptr [rsp + 0x70]
2084e5 dec      edx
2084e7 mov      eax, eax
2084e9 imul     rcx, rbx, 0x3e
2084ed add      rcx, rax
2084f0 mov      rax, qword ptr [r14 + 0x4b8]
2084f7 movsxd   r9, dword ptr [rax + rcx*4]
2084fb mov      rcx, r14
2084fe movsxd   rax, dword ptr [r14 + 0x4c8]
208505 xor      r9, rax
208508 add      r9, qword ptr [r14 + 0x4c0]
20850f call     r9
208512 jmp      0x1402085de
208517 inc      dword ptr [r14 + 0x11a8]
20851e mov      rax, r9
208521 shr      rax, 0x1b
208525 movzx    ecx, al
208528 lea      rax, [r10*4]
208530 mov      byte ptr [r14 + 0x163], cl
208537 imul     rcx, r11
20853b imul     r9, rbx
20853f xor      rcx, rax
208542 xor      rcx, rdi
208545 mov      qword ptr [r14 + 0x108], rcx
20854c mov      r8, qword ptr [r14 + 0x1b8]
208553 add      r9, r15
208556 mov      rax, r9
208559 shr      rax, 0x1b
20855d movzx    edx, al
208560 mov      byte ptr [r14 + 0x16a], dl
208567 imul     rax, r10, 0xb
20856b imul     rdx, r11
20856f xor      rdx, rax
208572 xor      rdx, rdi
208575 mov      rcx, rdx
208578 xor      rcx, 1
20857c test     bpl, bpl
20857f lea      rax, [rdx + 1]
208583 cmove    rax, rcx
208587 mov      qword ptr [r14 + 0x140], rax
20858e lea      rax, [r8 + 2]
208592 mov      qword ptr [r14 + 0x1b8], rax
208599 imul     r9, rbx
20859d add      r9, r15
2085a0 mov      qword ptr [r14 + 0x1b0], r9
2085a7 shr      r9, 0x1b
2085ab movzx    eax, r9b
2085af mov      byte ptr [r14 + 0x160], al
2085b6 imul     rax, r11
2085ba xor      rax, rdi
2085bd xor      rax, r10
2085c0 mov      rcx, rax
2085c3 add      rax, 0xfe1ab
2085c9 xor      rcx, 0xfe1ab
2085d0 test     bpl, bpl
2085d3 cmove    rax, rcx
2085d7 mov      qword ptr [r14 + 0xf0], rax
2085de mov      rsi, qword ptr [rsp + 0x78]
2085e3 add      rsp, 0x20
2085e7 pop      r15
2085e9 pop      r14
2085eb pop      r13
2085ed pop      r12
2085ef pop      rdi
2085f0 pop      rbp
2085f1 pop      rbx
2085f2 ret      
2085f3 mov      edx, 0x54485254
2085f8 mov      rcx, r14
2085fb call     0x1401ed830
208600 int3     
208601 mov      edx, 0x43414e59
208606 mov      rcx, r14
208609 call     0x1401ed830
20860e int3     
