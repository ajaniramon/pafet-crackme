224aa0 mov      qword ptr [rsp + 0x18], r8
224aa5 push     rbx
224aa6 push     rbp
224aa7 push     rdi
224aa8 push     r13
224aaa push     r14
224aac sub      rsp, 0x30
224ab0 movsxd   rax, dword ptr [rcx + 0x11e0]
224ab7 mov      r14, rcx
224aba mov      r13d, edx
224abd movabs   rcx, 0x10078dc2e663963e
224ac7 imul     rax, rcx
224acb movabs   rcx, 0xb25e070967bd1201
224ad5 movabs   rbp, 0xff51afd7ed558ccd
224adf xor      rax, qword ptr [r14 + 0x28]
224ae3 mov      rdi, r8
224ae6 mov      qword ptr [rsp + 0x60], rax
224aeb mov      rax, qword ptr [rsp + 0x60]
224af0 movsxd   rax, dword ptr [r14 + 0x11e0]
224af7 imul     rax, rcx
224afb movabs   rcx, 0x54969957e4f69e14
224b05 xor      rax, qword ptr [r14 + 0x28]
224b09 mov      qword ptr [rsp + 0x60], rax
224b0e mov      rax, qword ptr [rsp + 0x60]
224b13 movsxd   rax, dword ptr [r14 + 0x11e0]
224b1a imul     rax, rcx
224b1e movabs   rcx, 0x7da871b89372fdaf
224b28 xor      rax, qword ptr [r14 + 0x28]
224b2c mov      qword ptr [rsp + 0x60], rax
224b31 mov      rax, qword ptr [rsp + 0x60]
224b36 mov      rax, qword ptr [r14 + 0x2f8]
224b3d mov      rax, qword ptr [r14 + 0x2f8]
224b44 sub      rax, rcx
224b47 mov      rcx, rax
224b4a shr      rcx, 0x21
224b4e xor      rcx, rax
224b51 movabs   rax, 0xc4ceb9fe1a85ec53
224b5b imul     rcx, rbp
224b5f mov      rdx, rcx
224b62 shr      rdx, 0x21
224b66 xor      rdx, rcx
224b69 mov      rcx, r14
224b6c imul     rdx, rax
224b70 mov      rax, rdx
224b73 shr      rax, 0x21
224b77 xor      rdx, rax
224b7a mov      rax, qword ptr [r14 + 0x2f8]
224b81 shr      rax, 3
224b85 xor      rax, rdx
224b88 mov      qword ptr [r14 + 0x2f8], rax
224b8f call     0x1401ee940
224b94 mov      rcx, r14
224b97 mov      rbx, rax
224b9a call     0x1401ee940
224b9f mov      rcx, r14
224ba2 lea      rdx, [rax + rbx]
224ba6 call     0x1401ee820
224bab mov      rax, qword ptr [r14 + 0x2f8]
224bb2 test     r13d, r13d
224bb5 jns      0x1402256f3
224bbb cmp      qword ptr [r14 + 0x11b8], rdi
224bc2 jne      0x140225701
224bc8 movsxd   rax, dword ptr [r14 + 0x11e0]
224bcf movabs   rcx, 0xb2f51bac9cf8af58
224bd9 imul     rax, rcx
224bdd mov      rcx, r14
224be0 xor      rax, qword ptr [r14 + 0x28]
224be4 mov      qword ptr [rsp + 0x60], rax
224be9 mov      rax, qword ptr [rsp + 0x60]
224bee call     0x1401ee450
224bf3 test     eax, eax
224bf5 jne      0x1402256e7
224bfb cmp      dword ptr [r14 + 0xad0], eax
224c02 jne      0x1402256e7
224c08 mov      r8, qword ptr [r14 + 0xf0]
224c0f movzx    ecx, byte ptr [r14 + 0x160]
224c17 mov      rax, r8
224c1a mov      r10, qword ptr [r14 + 0xe0]
224c21 mov      rbx, qword ptr [r14 + 0xd0]
224c28 mov      r11, qword ptr [r14 + 0xd8]
224c2f movzx    edi, byte ptr [r14 + 0xe8]
224c37 mov      r9, qword ptr [r14 + 0x1b0]
224c3e imul     rcx, r10
224c42 mov      qword ptr [rsp + 0x68], rsi
224c47 mov      rsi, qword ptr [r14 + 0x1b8]
224c4e xor      rcx, rbx
224c51 xor      rcx, r11
224c54 mov      qword ptr [rsp + 0x28], r12
224c59 xor      rax, rcx
224c5c mov      qword ptr [rsp + 0x20], r15
224c61 sub      r8, rcx
224c64 movabs   r15, 0x9e3779b97f4a7c15
224c6e test     dil, dil
224c71 movabs   r12, 0x2545f4914f6cdd1d
224c7b cmove    r8, rax
224c7f inc      rsi
224c82 imul     r9, r15
224c86 mov      qword ptr [r14 + 0x1b8], rsi
224c8d mov      rcx, r8
224c90 add      r9, r12
224c93 mov      qword ptr [r14 + 0x1b0], r9
224c9a mov      rax, r9
224c9d shr      rax, 0x1b
224ca1 movzx    edx, al
224ca4 mov      byte ptr [r14 + 0x160], dl
224cab imul     rdx, r10
224caf xor      rdx, rbx
224cb2 xor      rdx, r11
224cb5 xor      rcx, rdx
224cb8 test     dil, dil
224cbb lea      rax, [r8 + rdx]
224cbf cmove    rax, rcx
224cc3 mov      qword ptr [r14 + 0xf0], rax
224cca cmp      r8d, 0x2a0025
224cd1 jne      0x1402256d8
224cd7 mov      eax, r13d
224cda btr      eax, 0x1f
224cde cmp      eax, 2
224ce1 jae      0x140224d2d
224ce3 imul     r9, r15
224ce7 lea      rax, [rsi + 1]
224ceb mov      qword ptr [r14 + 0x1b8], rax
224cf2 add      r9, r12
224cf5 mov      qword ptr [r14 + 0x1b0], r9
224cfc shr      r9, 0x1b
224d00 movzx    eax, r9b
224d04 mov      byte ptr [r14 + 0x160], al
224d0b imul     rax, r10
224d0f xor      rax, rbx
224d12 xor      rax, r11
224d15 mov      rcx, rax
224d18 add      rax, 0x85b36
224d1e xor      rcx, 0x85b36
224d25 test     dil, dil
224d28 jmp      0x1402256cd
224d2d mov      rcx, r14
224d30 call     0x1401ee070
224d35 movzx    ecx, byte ptr [r14 + 0x4ad]
224d3d movabs   r8, 0xc4ceb9fe1a85ec53
224d47 mov      r11, qword ptr [r14 + 0xe0]
224d4e mov      r10, qword ptr [r14 + 0xd0]
224d55 movzx    r9d, byte ptr [r14 + 0xe8]
224d5d mov      eax, eax
224d5f xor      rcx, rax
224d62 xor      rcx, qword ptr [r14 + 0x11e8]
224d69 mov      rax, rcx
224d6c shr      rax, 0x21
224d70 xor      rax, rcx
224d73 imul     rax, rbp
224d77 mov      rcx, rax
224d7a shr      rcx, 0x21
224d7e xor      rcx, rax
224d81 imul     rcx, r8
224d85 mov      rdx, rcx
224d88 shr      rdx, 0x21
224d8c xor      rdx, rcx
224d8f mov      qword ptr [r14 + 0x11e8], rdx
224d96 xor      rdx, qword ptr [r14 + 0x20]
224d9a xor      rdx, qword ptr [r14 + 0x28]
224d9e mov      rax, rdx
224da1 shr      rax, 0x21
224da5 xor      rax, rdx
224da8 imul     rax, rbp
224dac mov      rcx, rax
224daf shr      rcx, 0x21
224db3 xor      rcx, rax
224db6 imul     rcx, r8
224dba mov      rax, rcx
224dbd shr      rax, 0x21
224dc1 xor      rax, rcx
224dc4 mov      qword ptr [r14 + 0x20], rax
224dc8 mov      rdx, qword ptr [r14 + 0x138]
224dcf movzx    ecx, byte ptr [r14 + 0x169]
224dd7 mov      rax, qword ptr [r14 + 0xd8]
224dde imul     rcx, r11
224de2 lea      rbx, [rax + rax*4]
224de6 mov      rax, rdx
224de9 add      rbx, rbx
224dec xor      rcx, rbx
224def xor      rcx, r10
224df2 xor      rax, rcx
224df5 sub      rdx, rcx
224df8 test     r9b, r9b
224dfb cmove    rdx, rax
224dff mov      rax, qword ptr [r14 + 0x1b0]
224e06 inc      qword ptr [r14 + 0x1b8]
224e0d mov      rcx, rdx
224e10 imul     rax, r15
224e14 add      rax, r12
224e17 mov      qword ptr [r14 + 0x1b0], rax
224e1e shr      rax, 0x1b
224e22 movzx    r8d, al
224e26 mov      byte ptr [r14 + 0x169], r8b
224e2d imul     r8, r11
224e31 xor      r8, rbx
224e34 xor      r8, r10
224e37 xor      rcx, r8
224e3a test     r9b, r9b
224e3d lea      rax, [rdx + r8]
224e41 cmove    rax, rcx
224e45 mov      rcx, r14
224e48 mov      qword ptr [r14 + 0x138], rax
224e4f call     0x1401f0910
224e54 mov      rax, qword ptr [r14 + 0xd8]
224e5b mov      rdx, qword ptr [r14 + 0x130]
224e62 mov      r10, qword ptr [r14 + 0xe0]
224e69 movzx    ecx, byte ptr [r14 + 0x168]
224e71 mov      rbx, qword ptr [r14 + 0xd0]
224e78 lea      r11, [rax + rax*8]
224e7c movzx    r9d, byte ptr [r14 + 0xe8]
224e84 mov      rax, rdx
224e87 imul     rcx, r10
224e8b xor      rcx, r11
224e8e xor      rcx, rbx
224e91 xor      rax, rcx
224e94 sub      rdx, rcx
224e97 test     r9b, r9b
224e9a cmove    rdx, rax
224e9e mov      rax, qword ptr [r14 + 0x1b0]
224ea5 inc      qword ptr [r14 + 0x1b8]
224eac mov      rcx, rdx
224eaf imul     rax, r15
224eb3 add      rax, r12
224eb6 mov      qword ptr [r14 + 0x1b0], rax
224ebd shr      rax, 0x1b
224ec1 movzx    r8d, al
224ec5 mov      byte ptr [r14 + 0x168], r8b
224ecc imul     r8, r10
224ed0 xor      r8, r11
224ed3 xor      r8, rbx
224ed6 xor      rcx, r8
224ed9 test     r9b, r9b
224edc lea      rax, [rdx + r8]
224ee0 cmove    rax, rcx
224ee4 mov      rcx, r14
224ee7 mov      qword ptr [r14 + 0x130], rax
224eee call     0x1401f0910
224ef3 mov      rcx, r14
224ef6 call     0x1401ee070
224efb cmp      eax, dword ptr [r14 + 0x1d8]
224f02 jae      0x140224f0e
224f04 mov      edx, eax
224f06 mov      rcx, r14
224f09 call     0x1401f0910
224f0e mov      rsi, qword ptr [r14 + 0xe0]
224f15 mov      rbp, qword ptr [r14 + 0xd0]
224f1c mov      r11, qword ptr [r14 + 0x130]
224f23 movzx    edi, byte ptr [r14 + 0xe8]
224f2b mov      rax, r11
224f2e movzx    ecx, byte ptr [r14 + 0x168]
224f36 mov      rbx, qword ptr [r14 + 0xd8]
224f3d mov      r8, qword ptr [r14 + 0x1b8]
224f44 mov      r10, qword ptr [r14 + 0x1b0]
224f4b imul     rcx, rsi
224f4f lea      r9, [rbx + rbx*8]
224f53 xor      rcx, r9
224f56 xor      rcx, rbp
224f59 xor      rax, rcx
224f5c sub      r11, rcx
224f5f test     dil, dil
224f62 cmove    r11, rax
224f66 imul     r10, r15
224f6a mov      rcx, r11
224f6d add      r10, r12
224f70 mov      rax, r10
224f73 shr      rax, 0x1b
224f77 movzx    edx, al
224f7a mov      byte ptr [r14 + 0x168], dl
224f81 imul     rdx, rsi
224f85 xor      rdx, r9
224f88 xor      rdx, rbp
224f8b xor      rcx, rdx
224f8e test     dil, dil
224f91 lea      rax, [r11 + rdx]
224f95 cmove    rax, rcx
224f99 mov      rcx, r11
224f9c mov      qword ptr [r14 + 0x130], rax
224fa3 lea      rax, [r8 + 2]
224fa7 mov      qword ptr [r14 + 0x1b8], rax
224fae mov      r8d, 0x5c18
224fb4 imul     r10, r15
224fb8 lea      rax, [rbx + rbx*4]
224fbc add      rax, rax
224fbf add      r10, r12
224fc2 mov      qword ptr [r14 + 0x1b0], r10
224fc9 shr      r10, 0x1b
224fcd movzx    edx, r10b
224fd1 mov      byte ptr [r14 + 0x169], dl
224fd8 imul     rdx, rsi
224fdc xor      rdx, rax
224fdf xor      rdx, rbp
224fe2 xor      rcx, rdx
224fe5 test     dil, dil
224fe8 lea      rax, [r11 + rdx]
224fec cmove    rax, rcx
224ff0 mov      rcx, r14
224ff3 mov      qword ptr [r14 + 0x138], rax
224ffa movzx    edx, byte ptr [r14 + 0x4ad]
225002 xor      rdx, qword ptr [r14 + 0x348]
225009 call     0x1401f1520
22500e mov      r8, qword ptr [r14 + 0x348]
225015 movabs   rdi, 0xff51afd7ed558ccd
22501f mov      rax, r8
225022 movabs   rsi, 0xc4ceb9fe1a85ec53
22502c xor      rax, qword ptr [r14 + 0x20]
225030 mov      rcx, rax
225033 shr      rcx, 0x21
225037 xor      rcx, rax
22503a imul     rcx, rdi
22503e mov      rax, rcx
225041 shr      rax, 0x21
225045 xor      rax, rcx
225048 imul     rax, rsi
22504c mov      rdx, rax
22504f shr      rdx, 0x21
225053 xor      edx, eax
225055 lea      eax, [rdx + 1]
225058 mov      ecx, eax
22505a xor      eax, edx
22505c imul     ecx, edx
22505f not      ecx
225061 and      ecx, eax
225063 test     cl, 1
225066 je       0x1402250cf
225068 and      r8b, 3
22506c cmp      r8b, 1
225070 jne      0x1402250cf
225072 mov      rax, qword ptr [r14 + 0x1b0]
225079 inc      qword ptr [r14 + 0x1b8]
225080 imul     rax, r15
225084 add      rax, r12
225087 mov      qword ptr [r14 + 0x1b0], rax
22508e shr      rax, 0x1b
225092 movzx    eax, al
225095 mov      byte ptr [r14 + 0x160], al
22509c imul     rax, qword ptr [r14 + 0xe0]
2250a4 xor      rax, qword ptr [r14 + 0xd8]
2250ab xor      rax, qword ptr [r14 + 0xd0]
2250b2 mov      rcx, rax
2250b5 add      rax, 0x3dd18f
2250bb xor      rcx, 0x3dd18f
2250c2 cmp      byte ptr [r14 + 0xe8], 0
2250ca jmp      0x1402256cd
2250cf mov      rcx, r14
2250d2 call     0x1401ee070
2250d7 mov      ebx, eax
2250d9 cmp      eax, dword ptr [r14 + 0x1d8]
2250e0 jb       0x14022513f
2250e2 mov      rax, qword ptr [r14 + 0x1b0]
2250e9 inc      qword ptr [r14 + 0x1b8]
2250f0 imul     rax, r15
2250f4 add      rax, r12
2250f7 mov      qword ptr [r14 + 0x1b0], rax
2250fe shr      rax, 0x1b
225102 movzx    eax, al
225105 mov      byte ptr [r14 + 0x160], al
22510c imul     rax, qword ptr [r14 + 0xe0]
225114 xor      rax, qword ptr [r14 + 0xd8]
22511b xor      rax, qword ptr [r14 + 0xd0]
225122 mov      rcx, rax
225125 add      rax, 0xfe1ab
22512b xor      rcx, 0xfe1ab
225132 cmp      byte ptr [r14 + 0xe8], 0
22513a jmp      0x1402256cd
22513f mov      edx, ebx
225141 mov      rcx, r14
225144 call     0x1401f25b0
225149 movsxd   rcx, dword ptr [r14 + 0x11e0]
225150 movabs   r8, 0xd6e8feb86659fd93
22515a mov      rdx, qword ptr [r14 + 0x20]
22515e mov      rax, rbx
225161 imul     rax, r8
225165 imul     rcx, r15
225169 rol      rdx, 0x11
22516d xor      rax, rdx
225170 xor      rcx, qword ptr [r14 + 0x260]
225177 xor      rax, rcx
22517a mov      rcx, rax
22517d shr      rcx, 0x21
225181 xor      rcx, rax
225184 imul     rcx, rdi
225188 mov      rdx, rcx
22518b shr      rdx, 0x21
22518f xor      rdx, rcx
225192 imul     rdx, rsi
225196 mov      rax, rdx
225199 shr      rax, 0x21
22519d xor      rax, rdx
2251a0 mov      r10, rax
2251a3 shr      r10, 0x1d
2251a7 xor      r10, rax
2251aa or       r10, 1
2251ae mov      rax, r10
2251b1 mov      qword ptr [r14 + 0x260], r10
2251b8 and      eax, 0x3ff
2251bd cmp      rax, 0x2c5
2251c3 jne      0x1402251d4
2251c5 mov      rcx, r14
2251c8 call     0x1402297e0
2251cd mov      r10, qword ptr [r14 + 0x260]
2251d4 movzx    eax, r10b
2251d8 and      al, 0x1f
2251da cmp      al, 0x15
2251dc jne      0x1402252c9
2251e2 movsxd   rax, dword ptr [r14 + 0x11e0]
2251e9 xor      rax, 0x5a5a
2251ef mov      rcx, qword ptr [r14 + 0x20]
2251f3 imul     rax, r15
2251f7 rol      rcx, 0x11
2251fb xor      rax, r10
2251fe xor      rcx, rax
225201 movabs   rax, 0x8f70feda99a6026d
22520b xor      rcx, rax
22520e mov      rax, rcx
225211 shr      rax, 0x21
225215 xor      rax, rcx
225218 imul     rax, rdi
22521c mov      rcx, rax
22521f shr      rcx, 0x21
225223 xor      rcx, rax
225226 imul     rcx, rsi
22522a mov      rax, rcx
22522d shr      rax, 0x21
225231 xor      rax, rcx
225234 mov      r9, rax
225237 shr      r9, 0x1d
22523b xor      r9, rax
22523e or       r9, 1
225242 mov      rax, r9
225245 mov      rcx, r9
225248 shr      rax, 8
22524c and      eax, 3
22524f shr      rcx, 0x28
225253 imul     r8, rax, 0x3e
225257 mov      eax, 0x8421085
22525c mul      ecx
22525e mov      eax, ecx
225260 sub      eax, edx
225262 shr      eax, 1
225264 add      eax, edx
225266 shr      eax, 5
225269 imul     eax, eax, 0x3e
22526c sub      ecx, eax
22526e mov      eax, ecx
225270 add      r8, rax
225273 mov      rax, qword ptr [r14 + 0x4b8]
22527a movsxd   rcx, dword ptr [rax + r8*4]
22527e movsxd   rax, dword ptr [r14 + 0x4c8]
225285 xor      rcx, rax
225288 add      rcx, qword ptr [r14 + 0x4c0]
22528f xor      rcx, r9
225292 mov      rax, rcx
225295 shr      rax, 0x21
225299 xor      rax, rcx
22529c imul     rax, rdi
2252a0 mov      rcx, rax
2252a3 shr      rcx, 0x21
2252a7 xor      rcx, rax
2252aa imul     rcx, rsi
2252ae mov      rax, rcx
2252b1 shr      rax, 0x21
2252b5 xor      rax, rcx
2252b8 xor      rax, r10
2252bb inc      qword ptr [r14 + 0x268]
2252c2 mov      qword ptr [r14 + 0x260], rax
2252c9 inc      dword ptr [r14 + 0x200]
2252d0 mov      eax, dword ptr [r14 + 0x200]
2252d7 cmp      eax, dword ptr [r14 + 0x1fc]
2252de jb       0x1402252f3
2252e0 mov      rcx, r14
2252e3 mov      dword ptr [r14 + 0x200], 0
2252ee call     0x1401ef7c0
2252f3 mov      r8d, ebx
2252f6 mov      edx, ebx
2252f8 mov      rcx, r14
2252fb call     0x1401f0660
225300 inc      qword ptr [r14 + 0x1b8]
225307 mov      rcx, rbx
22530a mov      r9, qword ptr [r14 + 0x1b0]
225311 mov      rbp, r12
225314 mov      r10, qword ptr [r14 + 0x1b8]
22531b imul     r9, r15
22531f add      r9, r12
225322 lea      r12d, [rbx + 1]
225326 mov      qword ptr [r14 + 0x1b0], r9
22532d mov      rax, r9
225330 shr      rax, 0x1b
225334 movzx    edx, al
225337 mov      byte ptr [r14 + 0x168], dl
22533e mov      rdi, qword ptr [r14 + 0xe0]
225345 mov      r11, qword ptr [r14 + 0xd8]
22534c mov      rsi, qword ptr [r14 + 0xd0]
225353 movzx    r15d, byte ptr [r14 + 0xe8]
22535b imul     rdx, rdi
22535f lea      rax, [r11 + r11*8]
225363 xor      rdx, rax
225366 xor      rdx, rsi
225369 xor      rcx, rdx
22536c test     r15b, r15b
22536f lea      rax, [rbx + rdx]
225373 cmove    rax, rcx
225377 inc      r10
22537a mov      qword ptr [r14 + 0x130], rax
225381 mov      rcx, qword ptr [r14 + 0x1d0]
225388 mov      rax, qword ptr [r14 + 0x48]
22538c mov      qword ptr [rsp + 0x60], r10
225391 movzx    r8d, byte ptr [rcx + rbx]
225396 xor      r8b, byte ptr [rax + rbx]
22539a movabs   rax, 0x9e3779b97f4a7c15
2253a4 imul     r9, rax
2253a8 mov      qword ptr [r14 + 0x1b8], r10
2253af add      r9, rbp
2253b2 mov      rax, r9
2253b5 shr      rax, 0x1b
2253b9 movzx    edx, al
2253bc lea      rax, [r11 + r11]
2253c0 mov      byte ptr [r14 + 0x161], dl
2253c7 imul     rdx, rdi
2253cb xor      rdx, rax
2253ce xor      rdx, rsi
2253d1 mov      rcx, rdx
2253d4 xor      rcx, r12
2253d7 test     r15b, r15b
2253da lea      rax, [rdx + r12]
2253de cmove    rax, rcx
2253e2 mov      qword ptr [r14 + 0xf8], rax
2253e9 movsxd   rdx, dword ptr [r14 + 0x11e0]
2253f0 mov      r10, qword ptr [r14 + 0x20]
2253f4 mov      rcx, rdx
2253f7 xor      rcx, qword ptr [r14 + 0x350]
2253fe xor      rcx, r10
225401 xor      rcx, r12
225404 xor      rcx, qword ptr [r14 + 0x348]
22540b mov      rax, rcx
22540e shr      rax, 0x21
225412 xor      rax, rcx
225415 movabs   rcx, 0xff51afd7ed558ccd
22541f imul     rax, rcx
225423 mov      rcx, rax
225426 shr      rcx, 0x21
22542a xor      rcx, rax
22542d movabs   rax, 0xc4ceb9fe1a85ec53
225437 imul     rcx, rax
22543b movzx    eax, r8b
22543f mov      rbx, rcx
225442 xor      rax, 0xdd
225448 shr      rbx, 0x21
22544c xor      rbx, rcx
22544f lea      rcx, [rip - 0x225456]
225456 mov      qword ptr [r14 + 0x28], rbx
22545a movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
225462 xor      bpl, 0x63
225466 inc      edx
225468 mov      dword ptr [r14 + 0x11e0], edx
22546f movabs   r8, 0xff51afd7ed558ccd
225479 test     dl, 0x1f
22547c jne      0x1402254c2
22547e movsxd   rax, edx
225481 xor      rax, r10
225484 xor      rax, qword ptr [r14 + 0x348]
22548b mov      rcx, rax
22548e shr      rcx, 0x21
225492 xor      rcx, rax
225495 movabs   rax, 0xc4ceb9fe1a85ec53
22549f imul     rcx, r8
2254a3 mov      rdx, rcx
2254a6 shr      rdx, 0x21
2254aa xor      rdx, rcx
2254ad imul     rdx, rax
2254b1 mov      rax, rdx
2254b4 shr      rax, 0x21
2254b8 xor      rax, rdx
2254bb mov      qword ptr [r14 + 0x348], rax
2254c2 movzx    edx, bpl
2254c6 xor      r10, rdx
2254c9 mov      byte ptr [r14 + 0x4ad], bpl
2254d0 xor      r10, r12
2254d3 movabs   r12, 0xc4ceb9fe1a85ec53
2254dd mov      rax, r10
2254e0 shr      rax, 0x21
2254e4 xor      rax, r10
2254e7 movabs   r10, 0x9e3779b97f4a7c15
2254f1 imul     rax, r8
2254f5 imul     rdx, r10
2254f9 imul     r9, r10
2254fd mov      rcx, rax
225500 shr      rcx, 0x21
225504 xor      rcx, rax
225507 imul     rcx, r12
22550b mov      rax, rcx
22550e shr      rax, 0x21
225512 xor      rax, rcx
225515 mov      ecx, dword ptr [r14 + 0x1178]
22551c mov      qword ptr [r14 + 0x20], rax
225520 movabs   rax, 0xd6e8feb86659fd93
22552a imul     rcx, rax
22552e xor      rcx, rdx
225531 xor      rcx, rbx
225534 movabs   rbx, 0x2545f4914f6cdd1d
22553e mov      rax, rcx
225541 add      r9, rbx
225544 shr      rax, 0x21
225548 xor      rax, rcx
22554b imul     rax, r8
22554f mov      rdx, rax
225552 shr      rdx, 0x21
225556 xor      rdx, rax
225559 mov      rax, qword ptr [rsp + 0x60]
22555e imul     rdx, r12
225562 shr      rdx, 0x21
225566 and      edx, 3
225569 inc      rax
22556c mov      qword ptr [r14 + 0x1b8], rax
225573 cmp      bpl, 0x3e
225577 jae      0x140225611
22557d inc      qword ptr [r14 + 0x11a0]
225584 lea      rax, [rip - 0x22558b]
22558b mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
225593 mov      qword ptr [r14 + 0x1b0], r9
22559a shr      r9, 0x1b
22559e movzx    eax, r9b
2255a2 mov      byte ptr [r14 + 0x160], al
2255a9 imul     rax, rdi
2255ad mov      ebx, edx
2255af xor      rax, rsi
2255b2 xor      rax, r11
2255b5 mov      rcx, rax
2255b8 add      rax, r8
2255bb xor      rcx, r8
2255be movzx    r8d, bpl
2255c2 test     r15b, r15b
2255c5 cmove    rax, rcx
2255c9 mov      rcx, r14
2255cc mov      qword ptr [r14 + 0xf0], rax
2255d3 call     0x1401f1f50
2255d8 mov      r8, qword ptr [rsp + 0x70]
2255dd lea      edx, [r13 - 1]
2255e1 mov      eax, eax
2255e3 imul     rcx, rbx, 0x3e
2255e7 add      rcx, rax
2255ea mov      rax, qword ptr [r14 + 0x4b8]
2255f1 movsxd   r9, dword ptr [rax + rcx*4]
2255f5 mov      rcx, r14
2255f8 movsxd   rax, dword ptr [r14 + 0x4c8]
2255ff xor      r9, rax
225602 add      r9, qword ptr [r14 + 0x4c0]
225609 call     r9
22560c jmp      0x1402256d8
225611 inc      dword ptr [r14 + 0x11a8]
225618 mov      rax, r9
22561b shr      rax, 0x1b
22561f movzx    ecx, al
225622 lea      rax, [r11*4]
22562a mov      byte ptr [r14 + 0x163], cl
225631 imul     rcx, rdi
225635 imul     r9, r10
225639 xor      rcx, rax
22563c xor      rcx, rsi
22563f mov      qword ptr [r14 + 0x108], rcx
225646 mov      r8, qword ptr [r14 + 0x1b8]
22564d add      r9, rbx
225650 mov      rax, r9
225653 shr      rax, 0x1b
225657 movzx    edx, al
22565a mov      byte ptr [r14 + 0x16a], dl
225661 imul     rax, r11, 0xb
225665 imul     rdx, rdi
225669 xor      rdx, rax
22566c xor      rdx, rsi
22566f mov      rcx, rdx
225672 xor      rcx, 1
225676 test     r15b, r15b
225679 lea      rax, [rdx + 1]
22567d cmove    rax, rcx
225681 mov      qword ptr [r14 + 0x140], rax
225688 lea      rax, [r8 + 2]
22568c mov      qword ptr [r14 + 0x1b8], rax
225693 imul     r9, r10
225697 add      r9, rbx
22569a mov      qword ptr [r14 + 0x1b0], r9
2256a1 shr      r9, 0x1b
2256a5 movzx    eax, r9b
2256a9 mov      byte ptr [r14 + 0x160], al
2256b0 imul     rax, rdi
2256b4 xor      rax, rsi
2256b7 xor      rax, r11
2256ba mov      rcx, rax
2256bd add      rax, 0xfe1ab
2256c3 xor      rcx, 0xfe1ab
2256ca test     r15b, r15b
2256cd cmove    rax, rcx
2256d1 mov      qword ptr [r14 + 0xf0], rax
2256d8 mov      r12, qword ptr [rsp + 0x28]
2256dd mov      rsi, qword ptr [rsp + 0x68]
2256e2 mov      r15, qword ptr [rsp + 0x20]
2256e7 add      rsp, 0x30
2256eb pop      r14
2256ed pop      r13
2256ef pop      rdi
2256f0 pop      rbp
2256f1 pop      rbx
2256f2 ret      
2256f3 mov      edx, 0x54485254
2256f8 mov      rcx, r14
2256fb call     0x1401ed830
225700 int3     
225701 mov      edx, 0x43414e59
225706 mov      rcx, r14
225709 call     0x1401ed830
22570e int3     
