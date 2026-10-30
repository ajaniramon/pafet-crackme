21fc40 mov      qword ptr [rsp + 0x20], rbx
21fc45 push     rbp
21fc46 push     rsi
21fc47 push     rdi
21fc48 push     r12
21fc4a push     r13
21fc4c push     r14
21fc4e push     r15
21fc50 sub      rsp, 0x160
21fc57 mov      rax, qword ptr [rip + 0x1ed3c2]
21fc5e xor      rax, rsp
21fc61 mov      qword ptr [rsp + 0x150], rax
21fc69 mov      r13, r8
21fc6c mov      qword ptr [rsp + 0x40], r8
21fc71 mov      r15d, edx
21fc74 mov      rbx, rcx
21fc77 movsxd   rax, dword ptr [rcx + 0x11e0]
21fc7e movabs   rcx, 0x2a3fac7c4ed3d3e6
21fc88 imul     rax, rcx
21fc8c xor      rax, qword ptr [rbx + 0x28]
21fc90 mov      qword ptr [rsp + 0x20], rax
21fc95 mov      rax, qword ptr [rsp + 0x20]
21fc9a movsxd   rax, dword ptr [rbx + 0x11e0]
21fca1 movabs   rcx, 0x886626b7cf0d57d9
21fcab imul     rax, rcx
21fcaf xor      rax, qword ptr [rbx + 0x28]
21fcb3 mov      qword ptr [rsp + 0x20], rax
21fcb8 mov      rax, qword ptr [rsp + 0x20]
21fcbd movsxd   rax, dword ptr [rbx + 0x11e0]
21fcc4 movabs   rcx, 0x6eaeb8e94c46dbcc
21fcce imul     rax, rcx
21fcd2 xor      rax, qword ptr [rbx + 0x28]
21fcd6 mov      qword ptr [rsp + 0x20], rax
21fcdb mov      rax, qword ptr [rsp + 0x20]
21fce0 mov      rax, qword ptr [rbx + 0x2f8]
21fce7 mov      rax, qword ptr [rbx + 0x2f8]
21fcee movabs   rcx, 0x479050063bc2b877
21fcf8 sub      rax, rcx
21fcfb mov      rcx, rax
21fcfe shr      rcx, 0x21
21fd02 xor      rcx, rax
21fd05 movabs   rax, 0xff51afd7ed558ccd
21fd0f imul     rcx, rax
21fd13 mov      rdx, rcx
21fd16 shr      rdx, 0x21
21fd1a xor      rdx, rcx
21fd1d movabs   rax, 0xc4ceb9fe1a85ec53
21fd27 imul     rdx, rax
21fd2b mov      rax, rdx
21fd2e shr      rax, 0x21
21fd32 xor      rdx, rax
21fd35 mov      rax, qword ptr [rbx + 0x2f8]
21fd3c shr      rax, 3
21fd40 xor      rax, rdx
21fd43 mov      qword ptr [rbx + 0x2f8], rax
21fd4a mov      rcx, rbx
21fd4d call     0x1401f1d80
21fd52 mov      ebp, eax
21fd54 mov      rcx, rbx
21fd57 call     0x1401f1e80
21fd5c mov      esi, eax
21fd5e cmp      eax, 0x20
21fd61 jbe      0x14021fd6a
21fd63 mov      esi, 0x20
21fd68 jmp      0x14021fd6e
21fd6a test     eax, eax
21fd6c je       0x14021fd89
21fd6e xor      edi, edi
21fd70 mov      rcx, rbx
21fd73 call     0x1401ee940
21fd78 mov      ecx, esi
21fd7a sub      ecx, edi
21fd7c dec      ecx
21fd7e mov      qword ptr [rsp + rcx*8 + 0x50], rax
21fd83 inc      edi
21fd85 cmp      edi, esi
21fd87 jb       0x14021fd70
21fd89 mov      r14d, 0x610
21fd8f mov      rax, qword ptr gs:[0x58]
21fd98 add      r14, qword ptr [rax]
21fd9b mov      eax, dword ptr [r14 + 0x524]
21fda2 mov      dword ptr [rsp + 0x20], eax
21fda6 mov      rcx, rbx
21fda9 call     0x1401ee1c0
21fdae mov      edi, eax
21fdb0 mov      rcx, rbx
21fdb3 call     0x1401ee070
21fdb8 mov      r9d, edi
21fdbb mov      r8d, ebp
21fdbe mov      edx, eax
21fdc0 mov      rcx, rbx
21fdc3 call     0x1401ef230
21fdc8 mov      r12d, eax
21fdcb mov      rcx, rbx
21fdce call     0x1401ee590
21fdd3 lea      r8, [rax + 1]
21fdd7 movabs   rax, 0x9e3779b97f4a7c15
21fde1 mov      rcx, qword ptr [rbx + 0x1b0]
21fde8 imul     rcx, rax
21fdec movabs   rax, 0x2545f4914f6cdd1d
21fdf6 add      rcx, rax
21fdf9 mov      qword ptr [rbx + 0x1b0], rcx
21fe00 inc      qword ptr [rbx + 0x1b8]
21fe07 shr      rcx, 0x1b
21fe0b movzx    edx, cl
21fe0e mov      byte ptr [rbx + 0x16d], dl
21fe14 imul     rdx, qword ptr [rbx + 0xe0]
21fe1c imul     rax, qword ptr [rbx + 0xd8], 0xe
21fe24 xor      rdx, rax
21fe27 xor      rdx, qword ptr [rbx + 0xd0]
21fe2e mov      rcx, rdx
21fe31 xor      rcx, r8
21fe34 lea      rax, [rdx + r8]
21fe38 cmp      byte ptr [rbx + 0xe8], 0
21fe3f cmove    rax, rcx
21fe43 mov      qword ptr [rbx + 0x158], rax
21fe4a mov      dword ptr [rsp + 0x30], esi
21fe4e lea      rax, [rsp + 0x50]
21fe53 mov      qword ptr [rsp + 0x28], rax
21fe58 mov      dword ptr [rsp + 0x38], ebp
21fe5c mov      rcx, qword ptr [rbx + 0xb0]
21fe63 test     rcx, rcx
21fe66 je       0x140220b55
21fe6c mov      rax, qword ptr [rcx]
21fe6f lea      r9, [rsp + 0x30]
21fe74 lea      r8, [rsp + 0x28]
21fe79 lea      rdx, [rsp + 0x38]
21fe7e call     qword ptr [rax + 0x10]
21fe81 mov      rdi, rax
21fe84 mov      rcx, rbx
21fe87 call     0x1401ee590
21fe8c lea      r8, [rax - 1]
21fe90 mov      rcx, qword ptr [rbx + 0x1b0]
21fe97 movabs   rax, 0x9e3779b97f4a7c15
21fea1 imul     rcx, rax
21fea5 movabs   rsi, 0x2545f4914f6cdd1d
21feaf add      rcx, rsi
21feb2 mov      qword ptr [rbx + 0x1b0], rcx
21feb9 inc      qword ptr [rbx + 0x1b8]
21fec0 shr      rcx, 0x1b
21fec4 movzx    edx, cl
21fec7 mov      byte ptr [rbx + 0x16d], dl
21fecd imul     rdx, qword ptr [rbx + 0xe0]
21fed5 imul     rax, qword ptr [rbx + 0xd8], 0xe
21fedd xor      rdx, rax
21fee0 xor      rdx, qword ptr [rbx + 0xd0]
21fee7 mov      rcx, rdx
21feea xor      rcx, r8
21feed lea      rax, [rdx + r8]
21fef1 cmp      byte ptr [rbx + 0xe8], 0
21fef8 cmove    rax, rcx
21fefc mov      qword ptr [rbx + 0x158], rax
21ff03 test     r12d, r12d
21ff06 je       0x14021ff80
21ff08 mov      rcx, rbx
21ff0b call     0x1401ef380
21ff10 mov      r8d, eax
21ff13 mov      rax, qword ptr [rbx + 0x1b0]
21ff1a movabs   r12, 0x9e3779b97f4a7c15
21ff24 imul     rax, r12
21ff28 add      rax, rsi
21ff2b mov      qword ptr [rbx + 0x1b0], rax
21ff32 inc      qword ptr [rbx + 0x1b8]
21ff39 shr      rax, 0x1b
21ff3d movzx    edx, al
21ff40 mov      byte ptr [rbx + 0x161], dl
21ff46 imul     rdx, qword ptr [rbx + 0xe0]
21ff4e mov      rax, qword ptr [rbx + 0xd8]
21ff55 add      rax, rax
21ff58 xor      rdx, rax
21ff5b xor      rdx, qword ptr [rbx + 0xd0]
21ff62 mov      ecx, r8d
21ff65 xor      rcx, rdx
21ff68 lea      rax, [r8 + rdx]
21ff6c cmp      byte ptr [rbx + 0xe8], 0
21ff73 cmove    rax, rcx
21ff77 mov      qword ptr [rbx + 0xf8], rax
21ff7e jmp      0x14021ff8a
21ff80 movabs   r12, 0x9e3779b97f4a7c15
21ff8a mov      rcx, rbx
21ff8d call     0x1401ee590
21ff92 xor      rax, rbp
21ff95 xor      rax, qword ptr [rbx + 0x20]
21ff99 mov      rcx, rax
21ff9c shr      rcx, 0x21
21ffa0 xor      rcx, rax
21ffa3 movabs   rbp, 0xff51afd7ed558ccd
21ffad imul     rcx, rbp
21ffb1 mov      rdx, rcx
21ffb4 shr      rdx, 0x21
21ffb8 xor      rdx, rcx
21ffbb movabs   rax, 0xc4ceb9fe1a85ec53
21ffc5 imul     rdx, rax
21ffc9 mov      rax, rdx
21ffcc shr      rax, 0x21
21ffd0 xor      rax, rdx
21ffd3 mov      qword ptr [rbx + 0x20], rax
21ffd7 mov      rdx, rdi
21ffda mov      rcx, rbx
21ffdd call     0x1401ee820
21ffe2 mov      rax, qword ptr [rbx + 0x2f8]
21ffe9 mov      eax, dword ptr [rsp + 0x20]
21ffed cmp      dword ptr [r14 + 0x524], eax
21fff4 jbe      0x14021fffd
21fff6 mov      dword ptr [r14 + 0x524], eax
21fffd test     r15d, r15d
220000 jns      0x140220b5b
220006 cmp      qword ptr [rbx + 0x11b8], r13
22000d jne      0x140220b47
220013 movsxd   rax, dword ptr [rbx + 0x11e0]
22001a movabs   rcx, 0x3979b327b599717b
220024 imul     rax, rcx
220028 xor      rax, qword ptr [rbx + 0x28]
22002c mov      qword ptr [rsp + 0x28], rax
220031 mov      rax, qword ptr [rsp + 0x28]
220036 mov      rcx, rbx
220039 call     0x1401ee450
22003e test     eax, eax
220040 jne      0x140220b1c
220046 cmp      dword ptr [rbx + 0xad0], eax
22004c jne      0x140220b1c
220052 mov      r10, qword ptr [rbx + 0xe0]
220059 mov      r11, qword ptr [rbx + 0xd8]
220060 mov      rdi, qword ptr [rbx + 0xd0]
220067 movzx    ecx, byte ptr [rbx + 0x160]
22006e imul     rcx, r10
220072 xor      rcx, rdi
220075 xor      rcx, r11
220078 movzx    esi, byte ptr [rbx + 0xe8]
22007f mov      r8, qword ptr [rbx + 0xf0]
220086 mov      rax, r8
220089 xor      rax, rcx
22008c sub      r8, rcx
22008f test     sil, sil
220092 cmove    r8, rax
220096 mov      r9, qword ptr [rbx + 0x1b0]
22009d imul     r9, r12
2200a1 movabs   r13, 0x2545f4914f6cdd1d
2200ab add      r9, r13
2200ae mov      qword ptr [rbx + 0x1b0], r9
2200b5 mov      rbp, qword ptr [rbx + 0x1b8]
2200bc inc      rbp
2200bf mov      qword ptr [rbx + 0x1b8], rbp
2200c6 mov      rax, r9
2200c9 shr      rax, 0x1b
2200cd movzx    edx, al
2200d0 mov      byte ptr [rbx + 0x160], dl
2200d6 imul     rdx, r10
2200da xor      rdx, rdi
2200dd xor      rdx, r11
2200e0 mov      rcx, r8
2200e3 xor      rcx, rdx
2200e6 lea      rax, [r8 + rdx]
2200ea test     sil, sil
2200ed cmove    rax, rcx
2200f1 mov      qword ptr [rbx + 0xf0], rax
2200f8 cmp      r8d, 0x2a0025
2200ff jne      0x140220b1c
220105 mov      eax, r15d
220108 btr      eax, 0x1f
22010c cmp      eax, 2
22010f jae      0x14022015a
220111 imul     r9, r12
220115 add      r9, r13
220118 mov      qword ptr [rbx + 0x1b0], r9
22011f lea      rax, [rbp + 1]
220123 mov      qword ptr [rbx + 0x1b8], rax
22012a shr      r9, 0x1b
22012e movzx    eax, r9b
220132 mov      byte ptr [rbx + 0x160], al
220138 imul     rax, r10
22013c xor      rax, rdi
22013f xor      rax, r11
220142 mov      rcx, rax
220145 xor      rcx, 0x85b36
22014c add      rax, 0x85b36
220152 test     sil, sil
220155 jmp      0x140220b11
22015a mov      rcx, rbx
22015d call     0x1401ee070
220162 mov      eax, eax
220164 movzx    ecx, byte ptr [rbx + 0x4ad]
22016b xor      rcx, rax
22016e xor      rcx, qword ptr [rbx + 0x11e8]
220175 mov      rax, rcx
220178 shr      rax, 0x21
22017c xor      rax, rcx
22017f movabs   r8, 0xff51afd7ed558ccd
220189 imul     rax, r8
22018d mov      rcx, rax
220190 shr      rcx, 0x21
220194 xor      rcx, rax
220197 movabs   r9, 0xc4ceb9fe1a85ec53
2201a1 imul     rcx, r9
2201a5 mov      rdx, rcx
2201a8 shr      rdx, 0x21
2201ac xor      rdx, rcx
2201af mov      qword ptr [rbx + 0x11e8], rdx
2201b6 xor      rdx, qword ptr [rbx + 0x20]
2201ba xor      rdx, qword ptr [rbx + 0x28]
2201be mov      rax, rdx
2201c1 shr      rax, 0x21
2201c5 xor      rax, rdx
2201c8 imul     rax, r8
2201cc mov      rcx, rax
2201cf shr      rcx, 0x21
2201d3 xor      rcx, rax
2201d6 imul     rcx, r9
2201da mov      rax, rcx
2201dd shr      rax, 0x21
2201e1 xor      rax, rcx
2201e4 mov      qword ptr [rbx + 0x20], rax
2201e8 mov      r11, qword ptr [rbx + 0xe0]
2201ef mov      rax, qword ptr [rbx + 0xd8]
2201f6 lea      rdi, [rax + rax*4]
2201fa add      rdi, rdi
2201fd mov      r10, qword ptr [rbx + 0xd0]
220204 movzx    ecx, byte ptr [rbx + 0x169]
22020b imul     rcx, r11
22020f xor      rcx, rdi
220212 xor      rcx, r10
220215 movzx    r9d, byte ptr [rbx + 0xe8]
22021d mov      rdx, qword ptr [rbx + 0x138]
220224 mov      rax, rdx
220227 xor      rax, rcx
22022a sub      rdx, rcx
22022d test     r9b, r9b
220230 cmove    rdx, rax
220234 mov      rax, qword ptr [rbx + 0x1b0]
22023b imul     rax, r12
22023f add      rax, r13
220242 mov      qword ptr [rbx + 0x1b0], rax
220249 inc      qword ptr [rbx + 0x1b8]
220250 shr      rax, 0x1b
220254 movzx    r8d, al
220258 mov      byte ptr [rbx + 0x169], r8b
22025f imul     r8, r11
220263 xor      r8, rdi
220266 xor      r8, r10
220269 mov      rcx, rdx
22026c xor      rcx, r8
22026f lea      rax, [rdx + r8]
220273 test     r9b, r9b
220276 cmove    rax, rcx
22027a mov      qword ptr [rbx + 0x138], rax
220281 mov      rcx, rbx
220284 call     0x1401f0910
220289 mov      r9, qword ptr [rbx + 0xe0]
220290 mov      rax, qword ptr [rbx + 0xd8]
220297 lea      r10, [rax + rax*8]
22029b mov      rdi, qword ptr [rbx + 0xd0]
2202a2 movzx    ecx, byte ptr [rbx + 0x168]
2202a9 imul     rcx, r9
2202ad xor      rcx, r10
2202b0 xor      rcx, rdi
2202b3 movzx    r11d, byte ptr [rbx + 0xe8]
2202bb mov      rdx, qword ptr [rbx + 0x130]
2202c2 mov      rax, rdx
2202c5 xor      rax, rcx
2202c8 sub      rdx, rcx
2202cb test     r11b, r11b
2202ce cmove    rdx, rax
2202d2 mov      rax, qword ptr [rbx + 0x1b0]
2202d9 imul     rax, r12
2202dd add      rax, r13
2202e0 mov      qword ptr [rbx + 0x1b0], rax
2202e7 inc      qword ptr [rbx + 0x1b8]
2202ee shr      rax, 0x1b
2202f2 movzx    r8d, al
2202f6 mov      byte ptr [rbx + 0x168], r8b
2202fd imul     r8, r9
220301 xor      r8, r10
220304 xor      r8, rdi
220307 mov      rcx, r8
22030a xor      rcx, rdx
22030d lea      rax, [r8 + rdx]
220311 test     r11b, r11b
220314 cmove    rax, rcx
220318 mov      qword ptr [rbx + 0x130], rax
22031f mov      rcx, rbx
220322 call     0x1401f0910
220327 mov      rcx, rbx
22032a call     0x1401ee070
22032f cmp      eax, dword ptr [rbx + 0x1d8]
220335 jae      0x140220341
220337 mov      edx, eax
220339 mov      rcx, rbx
22033c call     0x1401f0910
220341 mov      rbp, qword ptr [rbx + 0xe0]
220348 mov      rdi, qword ptr [rbx + 0xd8]
22034f lea      r10, [rdi + rdi*8]
220353 mov      r14, qword ptr [rbx + 0xd0]
22035a movzx    ecx, byte ptr [rbx + 0x168]
220361 imul     rcx, rbp
220365 xor      rcx, r10
220368 xor      rcx, r14
22036b movzx    esi, byte ptr [rbx + 0xe8]
220372 mov      r11, qword ptr [rbx + 0x130]
220379 mov      rax, r11
22037c xor      rax, rcx
22037f sub      r11, rcx
220382 test     sil, sil
220385 cmove    r11, rax
220389 mov      r9, qword ptr [rbx + 0x1b0]
220390 imul     r9, r12
220394 add      r9, r13
220397 mov      r8, qword ptr [rbx + 0x1b8]
22039e mov      rax, r9
2203a1 shr      rax, 0x1b
2203a5 movzx    edx, al
2203a8 mov      byte ptr [rbx + 0x168], dl
2203ae imul     rdx, rbp
2203b2 xor      rdx, r14
2203b5 xor      rdx, r10
2203b8 mov      rcx, r11
2203bb xor      rcx, rdx
2203be lea      rax, [r11 + rdx]
2203c2 test     sil, sil
2203c5 cmove    rax, rcx
2203c9 mov      qword ptr [rbx + 0x130], rax
2203d0 imul     r9, r12
2203d4 add      r9, r13
2203d7 mov      qword ptr [rbx + 0x1b0], r9
2203de lea      rax, [r8 + 2]
2203e2 mov      qword ptr [rbx + 0x1b8], rax
2203e9 shr      r9, 0x1b
2203ed movzx    edx, r9b
2203f1 mov      byte ptr [rbx + 0x169], dl
2203f7 imul     rdx, rbp
2203fb lea      rax, [rdi + rdi*4]
2203ff add      rax, rax
220402 xor      rdx, rax
220405 xor      rdx, r14
220408 mov      rcx, rdx
22040b xor      rcx, r11
22040e lea      rax, [rdx + r11]
220412 test     sil, sil
220415 cmove    rax, rcx
220419 mov      qword ptr [rbx + 0x138], rax
220420 movzx    edx, byte ptr [rbx + 0x4ad]
220427 xor      rdx, qword ptr [rbx + 0x348]
22042e mov      r8d, 0xf493
220434 mov      rcx, rbx
220437 call     0x1401f1520
22043c mov      r8, qword ptr [rbx + 0x348]
220443 mov      rax, r8
220446 xor      rax, qword ptr [rbx + 0x20]
22044a mov      rcx, rax
22044d shr      rcx, 0x21
220451 xor      rcx, rax
220454 movabs   rsi, 0xff51afd7ed558ccd
22045e imul     rcx, rsi
220462 mov      rax, rcx
220465 shr      rax, 0x21
220469 xor      rax, rcx
22046c movabs   r14, 0xc4ceb9fe1a85ec53
220476 imul     rax, r14
22047a mov      rdx, rax
22047d shr      rdx, 0x21
220481 xor      edx, eax
220483 lea      eax, [rdx + 1]
220486 mov      ecx, eax
220488 imul     ecx, edx
22048b not      ecx
22048d xor      eax, edx
22048f and      ecx, eax
220491 test     cl, 1
220494 je       0x1402204fb
220496 and      r8b, 3
22049a cmp      r8b, 1
22049e jne      0x1402204fb
2204a0 mov      rax, qword ptr [rbx + 0x1b0]
2204a7 imul     rax, r12
2204ab add      rax, r13
2204ae mov      qword ptr [rbx + 0x1b0], rax
2204b5 inc      qword ptr [rbx + 0x1b8]
2204bc shr      rax, 0x1b
2204c0 movzx    eax, al
2204c3 mov      byte ptr [rbx + 0x160], al
2204c9 imul     rax, qword ptr [rbx + 0xe0]
2204d1 xor      rax, qword ptr [rbx + 0xd0]
2204d8 xor      rax, qword ptr [rbx + 0xd8]
2204df mov      rcx, rax
2204e2 xor      rcx, 0x3dd18f
2204e9 add      rax, 0x3dd18f
2204ef cmp      byte ptr [rbx + 0xe8], 0
2204f6 jmp      0x140220b11
2204fb mov      rcx, rbx
2204fe call     0x1401ee070
220503 mov      edi, eax
220505 cmp      eax, dword ptr [rbx + 0x1d8]
22050b jb       0x140220568
22050d mov      rax, qword ptr [rbx + 0x1b0]
220514 imul     rax, r12
220518 add      rax, r13
22051b mov      qword ptr [rbx + 0x1b0], rax
220522 inc      qword ptr [rbx + 0x1b8]
220529 shr      rax, 0x1b
22052d movzx    eax, al
220530 mov      byte ptr [rbx + 0x160], al
220536 imul     rax, qword ptr [rbx + 0xe0]
22053e xor      rax, qword ptr [rbx + 0xd0]
220545 xor      rax, qword ptr [rbx + 0xd8]
22054c mov      rcx, rax
22054f xor      rcx, 0xfe1ab
220556 add      rax, 0xfe1ab
22055c cmp      byte ptr [rbx + 0xe8], 0
220563 jmp      0x140220b11
220568 mov      edx, edi
22056a mov      rcx, rbx
22056d call     0x1401f25b0
220572 mov      r8, qword ptr [rbx + 0x20]
220576 movsxd   r9, dword ptr [rbx + 0x11e0]
22057d mov      rdx, r9
220580 imul     rdx, r12
220584 xor      rdx, qword ptr [rbx + 0x260]
22058b mov      rcx, r8
22058e rol      rcx, 0x11
220592 movabs   r10, 0xd6e8feb86659fd93
22059c mov      rax, rdi
22059f imul     rax, r10
2205a3 xor      rax, rdx
2205a6 xor      rax, rcx
2205a9 mov      rcx, rax
2205ac shr      rcx, 0x21
2205b0 xor      rcx, rax
2205b3 imul     rcx, rsi
2205b7 mov      rdx, rcx
2205ba shr      rdx, 0x21
2205be xor      rdx, rcx
2205c1 imul     rdx, r14
2205c5 mov      rax, rdx
2205c8 shr      rax, 0x21
2205cc xor      rax, rdx
2205cf mov      r10, rax
2205d2 shr      r10, 0x1d
2205d6 xor      r10, rax
2205d9 or       r10, 1
2205dd mov      qword ptr [rbx + 0x260], r10
2205e4 mov      rax, r10
2205e7 and      eax, 0x3ff
2205ec cmp      rax, 0x2c5
2205f2 jne      0x14022060e
2205f4 mov      rcx, rbx
2205f7 call     0x1402297e0
2205fc mov      r8, qword ptr [rbx + 0x20]
220600 mov      r9d, dword ptr [rbx + 0x11e0]
220607 mov      r10, qword ptr [rbx + 0x260]
22060e movzx    eax, r10b
220612 and      al, 0x1f
220614 cmp      al, 0x15
220616 jne      0x1402206fc
22061c movsxd   rcx, r9d
22061f xor      rcx, 0x5a5a
220626 imul     rcx, r12
22062a xor      rcx, r10
22062d rol      r8, 0x11
220631 xor      rcx, r8
220634 movabs   rax, 0x8f70feda99a6026d
22063e xor      rcx, rax
220641 mov      rax, rcx
220644 shr      rax, 0x21
220648 xor      rax, rcx
22064b imul     rax, rsi
22064f mov      rcx, rax
220652 shr      rcx, 0x21
220656 xor      rcx, rax
220659 imul     rcx, r14
22065d mov      rax, rcx
220660 shr      rax, 0x21
220664 xor      rax, rcx
220667 mov      r9, rax
22066a shr      r9, 0x1d
22066e xor      r9, rax
220671 or       r9, 1
220675 mov      rax, r9
220678 shr      rax, 8
22067c and      eax, 3
22067f imul     r8, rax, 0x3e
220683 mov      rcx, r9
220686 shr      rcx, 0x28
22068a mov      eax, 0x8421085
22068f mul      ecx
220691 mov      eax, ecx
220693 sub      eax, edx
220695 shr      eax, 1
220697 add      eax, edx
220699 shr      eax, 5
22069c imul     eax, eax, 0x3e
22069f sub      ecx, eax
2206a1 mov      eax, ecx
2206a3 add      r8, rax
2206a6 mov      rax, qword ptr [rbx + 0x4b8]
2206ad movsxd   rcx, dword ptr [rax + r8*4]
2206b1 movsxd   rax, dword ptr [rbx + 0x4c8]
2206b8 xor      rcx, rax
2206bb add      rcx, qword ptr [rbx + 0x4c0]
2206c2 xor      rcx, r9
2206c5 mov      rax, rcx
2206c8 shr      rax, 0x21
2206cc xor      rax, rcx
2206cf imul     rax, rsi
2206d3 mov      rcx, rax
2206d6 shr      rcx, 0x21
2206da xor      rcx, rax
2206dd imul     rcx, r14
2206e1 mov      rax, rcx
2206e4 shr      rax, 0x21
2206e8 xor      rax, rcx
2206eb xor      rax, r10
2206ee mov      qword ptr [rbx + 0x260], rax
2206f5 inc      qword ptr [rbx + 0x268]
2206fc inc      dword ptr [rbx + 0x200]
220702 mov      eax, dword ptr [rbx + 0x200]
220708 cmp      eax, dword ptr [rbx + 0x1fc]
22070e jb       0x140220722
220710 mov      dword ptr [rbx + 0x200], 0
22071a mov      rcx, rbx
22071d call     0x1401ef7c0
220722 mov      r8d, edi
220725 mov      edx, edi
220727 mov      rcx, rbx
22072a call     0x1401f0660
22072f mov      r9, qword ptr [rbx + 0x1b0]
220736 imul     r9, r12
22073a add      r9, r13
22073d mov      qword ptr [rbx + 0x1b0], r9
220744 inc      qword ptr [rbx + 0x1b8]
22074b mov      r12, qword ptr [rbx + 0x1b8]
220752 mov      rax, r9
220755 shr      rax, 0x1b
220759 movzx    edx, al
22075c mov      byte ptr [rbx + 0x168], dl
220762 mov      r11, qword ptr [rbx + 0xe0]
220769 mov      r10, qword ptr [rbx + 0xd8]
220770 mov      rsi, qword ptr [rbx + 0xd0]
220777 imul     rdx, r11
22077b lea      rax, [r10 + r10*8]
22077f xor      rdx, rax
220782 xor      rdx, rsi
220785 movzx    r14d, byte ptr [rbx + 0xe8]
22078d mov      rcx, rdx
220790 xor      rcx, rdi
220793 lea      rax, [rdx + rdi]
220797 test     r14b, r14b
22079a cmove    rax, rcx
22079e mov      qword ptr [rbx + 0x130], rax
2207a5 mov      rcx, qword ptr [rbx + 0x1d0]
2207ac mov      rax, qword ptr [rbx + 0x48]
2207b0 movzx    r8d, byte ptr [rcx + rdi]
2207b5 xor      r8b, byte ptr [rax + rdi]
2207b9 lea      r13d, [rdi + 1]
2207bd movabs   rax, 0x9e3779b97f4a7c15
2207c7 imul     r9, rax
2207cb movabs   rax, 0x2545f4914f6cdd1d
2207d5 add      r9, rax
2207d8 inc      r12
2207db mov      qword ptr [rsp + 0x28], r12
2207e0 mov      qword ptr [rbx + 0x1b8], r12
2207e7 mov      rax, r9
2207ea shr      rax, 0x1b
2207ee movzx    edx, al
2207f1 mov      byte ptr [rbx + 0x161], dl
2207f7 imul     rdx, r11
2207fb lea      rax, [r10 + r10]
2207ff xor      rdx, rax
220802 xor      rdx, rsi
220805 mov      rcx, rdx
220808 xor      rcx, r13
22080b lea      rax, [rdx + r13]
22080f test     r14b, r14b
220812 cmove    rax, rcx
220816 mov      qword ptr [rbx + 0xf8], rax
22081d movsxd   rdx, dword ptr [rbx + 0x11e0]
220824 mov      r12, qword ptr [rbx + 0x20]
220828 mov      rcx, rdx
22082b xor      rcx, qword ptr [rbx + 0x350]
220832 xor      rcx, r13
220835 xor      rcx, qword ptr [rbx + 0x348]
22083c xor      rcx, r12
22083f mov      rax, rcx
220842 shr      rax, 0x21
220846 xor      rax, rcx
220849 movabs   rbp, 0xff51afd7ed558ccd
220853 imul     rax, rbp
220857 mov      rcx, rax
22085a shr      rcx, 0x21
22085e xor      rcx, rax
220861 movabs   rax, 0xc4ceb9fe1a85ec53
22086b imul     rcx, rax
22086f mov      rdi, rcx
220872 shr      rdi, 0x21
220876 xor      rdi, rcx
220879 mov      qword ptr [rbx + 0x28], rdi
22087d movzx    eax, r8b
220881 xor      rax, 0xdd
220887 lea      rcx, [rip - 0x22088e]
22088e movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
220896 xor      bpl, 0x63
22089a inc      edx
22089c mov      dword ptr [rbx + 0x11e0], edx
2208a2 test     dl, 0x1f
2208a5 jne      0x1402208f5
2208a7 movsxd   rax, edx
2208aa xor      rax, qword ptr [rbx + 0x348]
2208b1 xor      rax, r12
2208b4 mov      rcx, rax
2208b7 shr      rcx, 0x21
2208bb xor      rcx, rax
2208be movabs   rax, 0xff51afd7ed558ccd
2208c8 imul     rcx, rax
2208cc mov      rdx, rcx
2208cf shr      rdx, 0x21
2208d3 xor      rdx, rcx
2208d6 movabs   rax, 0xc4ceb9fe1a85ec53
2208e0 imul     rdx, rax
2208e4 mov      rax, rdx
2208e7 shr      rax, 0x21
2208eb xor      rax, rdx
2208ee mov      qword ptr [rbx + 0x348], rax
2208f5 movzx    r8d, bpl
2208f9 mov      eax, r8d
2208fc xor      rax, r13
2208ff xor      rax, r12
220902 mov      rcx, rax
220905 shr      rcx, 0x21
220909 xor      rcx, rax
22090c movabs   r13, 0xff51afd7ed558ccd
220916 imul     rcx, r13
22091a mov      rdx, rcx
22091d shr      rdx, 0x21
220921 xor      rdx, rcx
220924 movabs   rax, 0xc4ceb9fe1a85ec53
22092e imul     rdx, rax
220932 mov      rax, rdx
220935 shr      rax, 0x21
220939 xor      rax, rdx
22093c mov      qword ptr [rbx + 0x20], rax
220940 mov      byte ptr [rbx + 0x4ad], bpl
220947 mov      ecx, dword ptr [rbx + 0x1178]
22094d movabs   rax, 0xd6e8feb86659fd93
220957 imul     rcx, rax
22095b movabs   r12, 0x9e3779b97f4a7c15
220965 imul     r8, r12
220969 xor      rcx, r8
22096c xor      rcx, rdi
22096f mov      rax, rcx
220972 shr      rax, 0x21
220976 xor      rax, rcx
220979 imul     rax, r13
22097d mov      rdx, rax
220980 shr      rdx, 0x21
220984 xor      rdx, rax
220987 movabs   rax, 0xc4ceb9fe1a85ec53
220991 imul     rdx, rax
220995 shr      rdx, 0x21
220999 and      edx, 3
22099c imul     r9, r12
2209a0 movabs   rdi, 0x2545f4914f6cdd1d
2209aa add      r9, rdi
2209ad mov      rax, qword ptr [rsp + 0x28]
2209b2 inc      rax
2209b5 mov      qword ptr [rbx + 0x1b8], rax
2209bc cmp      bpl, 0x3e
2209c0 jae      0x140220a59
2209c6 inc      qword ptr [rbx + 0x11a0]
2209cd mov      edi, edx
2209cf lea      rax, [rip - 0x2209d6]
2209d6 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
2209de mov      qword ptr [rbx + 0x1b0], r9
2209e5 shr      r9, 0x1b
2209e9 movzx    eax, r9b
2209ed mov      byte ptr [rbx + 0x160], al
2209f3 imul     rax, r11
2209f7 xor      rax, rsi
2209fa xor      rax, r10
2209fd mov      rcx, rax
220a00 xor      rcx, r8
220a03 add      rax, r8
220a06 test     r14b, r14b
220a09 cmove    rax, rcx
220a0d mov      qword ptr [rbx + 0xf0], rax
220a14 movzx    r8d, bpl
220a18 mov      rcx, rbx
220a1b call     0x1401f1f50
220a20 lea      edx, [r15 - 1]
220a24 imul     rcx, rdi, 0x3e
220a28 mov      eax, eax
220a2a add      rcx, rax
220a2d mov      rax, qword ptr [rbx + 0x4b8]
220a34 movsxd   r9, dword ptr [rax + rcx*4]
220a38 movsxd   rax, dword ptr [rbx + 0x4c8]
220a3f xor      r9, rax
220a42 add      r9, qword ptr [rbx + 0x4c0]
220a49 mov      r8, qword ptr [rsp + 0x40]
220a4e mov      rcx, rbx
220a51 call     r9
220a54 jmp      0x140220b1c
220a59 inc      dword ptr [rbx + 0x11a8]
220a5f mov      rax, r9
220a62 shr      rax, 0x1b
220a66 movzx    ecx, al
220a69 mov      byte ptr [rbx + 0x163], cl
220a6f imul     rcx, r11
220a73 lea      rax, [r10*4]
220a7b xor      rcx, rax
220a7e xor      rcx, rsi
220a81 mov      qword ptr [rbx + 0x108], rcx
220a88 imul     r9, r12
220a8c add      r9, rdi
220a8f mov      r8, qword ptr [rbx + 0x1b8]
220a96 mov      rax, r9
220a99 shr      rax, 0x1b
220a9d movzx    edx, al
220aa0 mov      byte ptr [rbx + 0x16a], dl
220aa6 imul     rdx, r11
220aaa imul     rax, r10, 0xb
220aae xor      rdx, rax
220ab1 xor      rdx, rsi
220ab4 mov      rcx, rdx
220ab7 xor      rcx, 1
220abb lea      rax, [rdx + 1]
220abf test     r14b, r14b
220ac2 cmove    rax, rcx
220ac6 mov      qword ptr [rbx + 0x140], rax
220acd imul     r9, r12
220ad1 add      r9, rdi
220ad4 mov      qword ptr [rbx + 0x1b0], r9
220adb lea      rax, [r8 + 2]
220adf mov      qword ptr [rbx + 0x1b8], rax
220ae6 shr      r9, 0x1b
220aea movzx    eax, r9b
220aee mov      byte ptr [rbx + 0x160], al
220af4 imul     rax, r11
220af8 xor      rax, rsi
220afb xor      rax, r10
220afe mov      rcx, rax
220b01 xor      rcx, 0xfe1ab
220b08 add      rax, 0xfe1ab
220b0e test     r14b, r14b
220b11 cmove    rax, rcx
220b15 mov      qword ptr [rbx + 0xf0], rax
220b1c mov      rcx, qword ptr [rsp + 0x150]
220b24 xor      rcx, rsp
220b27 call     0x1403a3dc0
220b2c mov      rbx, qword ptr [rsp + 0x1b8]
220b34 add      rsp, 0x160
220b3b pop      r15
220b3d pop      r14
220b3f pop      r13
220b41 pop      r12
220b43 pop      rdi
220b44 pop      rsi
220b45 pop      rbp
220b46 ret      
220b47 mov      edx, 0x43414e59
220b4c mov      rcx, rbx
220b4f call     0x1401ed830
220b54 nop      
220b55 call     0x1403a17cc
220b5a nop      
220b5b mov      edx, 0x54485254
220b60 mov      rcx, rbx
220b63 call     0x1401ed830
220b68 int3     
