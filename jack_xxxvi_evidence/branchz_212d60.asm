212d60 mov      qword ptr [rsp + 0x18], r8
212d65 push     rbx
212d66 push     rbp
212d67 push     rsi
212d68 push     rdi
212d69 push     r13
212d6b push     r14
212d6d sub      rsp, 0x38
212d71 movsxd   rax, dword ptr [rcx + 0x11e0]
212d78 mov      r14, rcx
212d7b mov      r13d, edx
212d7e movabs   rcx, 0x1f4ca5924e9dc001
212d88 imul     rax, rcx
212d8c movabs   rcx, 0xbd152f59cf43443e
212d96 mov      rbp, r8
212d99 xor      rax, qword ptr [r14 + 0x28]
212d9d mov      qword ptr [rsp + 0x70], rax
212da2 mov      rax, qword ptr [rsp + 0x70]
212da7 movsxd   rax, dword ptr [r14 + 0x11e0]
212dae imul     rax, rcx
212db2 movabs   rcx, 0x5bddb1074c08c82b
212dbc xor      rax, qword ptr [r14 + 0x28]
212dc0 mov      qword ptr [rsp + 0x70], rax
212dc5 mov      rax, qword ptr [rsp + 0x70]
212dca movsxd   rax, dword ptr [r14 + 0x11e0]
212dd1 imul     rax, rcx
212dd5 movabs   rcx, 0x2f672dde4485d005
212ddf xor      rax, qword ptr [r14 + 0x28]
212de3 mov      qword ptr [rsp + 0x70], rax
212de8 mov      rax, qword ptr [rsp + 0x70]
212ded mov      rax, qword ptr [r14 + 0x2f8]
212df4 xor      rax, rcx
212df7 mov      rcx, rax
212dfa shr      rcx, 0x21
212dfe xor      rcx, rax
212e01 movabs   rax, 0xff51afd7ed558ccd
212e0b imul     rcx, rax
212e0f movabs   rax, 0xc4ceb9fe1a85ec53
212e19 mov      rdx, rcx
212e1c shr      rdx, 0x21
212e20 xor      rdx, rcx
212e23 mov      rcx, r14
212e26 imul     rdx, rax
212e2a mov      rax, rdx
212e2d shr      rax, 0x21
212e31 xor      rdx, rax
212e34 mov      rax, qword ptr [r14 + 0x2f8]
212e3b shr      rax, 7
212e3f add      rax, rdx
212e42 mov      qword ptr [r14 + 0x2f8], rax
212e49 call     0x1401f1c70
212e4e mov      rcx, r14
212e51 mov      edi, eax
212e53 call     0x1401ee940
212e58 mov      rcx, r14
212e5b mov      rbx, rax
212e5e call     0x1401ee070
212e63 movzx    r9d, byte ptr [r14 + 0x4ad]
212e6b mov      r8d, eax
212e6e mov      rdx, rbx
212e71 mov      rcx, r14
212e74 mov      esi, eax
212e76 call     0x1401f0e60
212e7b mov      ecx, edi
212e7d mov      rbx, rax
212e80 call     0x1401ed270
212e85 xor      r8d, r8d
212e88 mov      dword ptr [rsp + 0x28], esi
212e8c lea      rcx, [rbx - 1]
212e90 mov      dword ptr [rsp + 0x20], eax
212e94 cmp      rcx, rbx
212e97 mov      rdx, rbx
212e9a mov      rcx, r14
212e9d setae    r8b
212ea1 xor      r9d, r9d
212ea4 call     0x1401f10a0
212ea9 mov      rdx, rax
212eac mov      rcx, r14
212eaf call     0x1401f0db0
212eb4 mov      rax, qword ptr [r14 + 0x2f8]
212ebb test     r13d, r13d
212ebe jns      0x140213a01
212ec4 cmp      qword ptr [r14 + 0x11b8], rbp
212ecb jne      0x140213a0f
212ed1 movsxd   rax, dword ptr [r14 + 0x11e0]
212ed8 movabs   rcx, 0x2e8215b5b84ae174
212ee2 imul     rax, rcx
212ee6 mov      rcx, r14
212ee9 xor      rax, qword ptr [r14 + 0x28]
212eed mov      qword ptr [rsp + 0x70], rax
212ef2 mov      rax, qword ptr [rsp + 0x70]
212ef7 call     0x1401ee450
212efc test     eax, eax
212efe jne      0x1402139f4
212f04 cmp      dword ptr [r14 + 0xad0], eax
212f0b jne      0x1402139f4
212f11 mov      r8, qword ptr [r14 + 0xf0]
212f18 movzx    ecx, byte ptr [r14 + 0x160]
212f20 mov      rax, r8
212f23 mov      r10, qword ptr [r14 + 0xe0]
212f2a mov      rbx, qword ptr [r14 + 0xd0]
212f31 mov      r11, qword ptr [r14 + 0xd8]
212f38 movzx    edi, byte ptr [r14 + 0xe8]
212f40 mov      r9, qword ptr [r14 + 0x1b0]
212f47 mov      rsi, qword ptr [r14 + 0x1b8]
212f4e imul     rcx, r10
212f52 mov      qword ptr [rsp + 0x78], r12
212f57 movabs   r12, 0x2545f4914f6cdd1d
212f61 xor      rcx, rbx
212f64 mov      qword ptr [rsp + 0x30], r15
212f69 xor      rcx, r11
212f6c movabs   r15, 0x9e3779b97f4a7c15
212f76 xor      rax, rcx
212f79 sub      r8, rcx
212f7c test     dil, dil
212f7f cmove    r8, rax
212f83 inc      rsi
212f86 imul     r9, r15
212f8a mov      qword ptr [r14 + 0x1b8], rsi
212f91 add      r9, r12
212f94 mov      qword ptr [r14 + 0x1b0], r9
212f9b mov      rax, r9
212f9e shr      rax, 0x1b
212fa2 movzx    edx, al
212fa5 mov      byte ptr [r14 + 0x160], dl
212fac imul     rdx, r10
212fb0 xor      rdx, rbx
212fb3 xor      rdx, r11
212fb6 mov      rcx, rdx
212fb9 xor      rcx, r8
212fbc test     dil, dil
212fbf lea      rax, [rdx + r8]
212fc3 cmove    rax, rcx
212fc7 mov      qword ptr [r14 + 0xf0], rax
212fce cmp      r8d, 0x48cad
212fd5 jne      0x1402139ea
212fdb mov      eax, r13d
212fde btr      eax, 0x1f
212fe2 cmp      eax, 2
212fe5 jae      0x140213031
212fe7 imul     r9, r15
212feb lea      rax, [rsi + 1]
212fef mov      qword ptr [r14 + 0x1b8], rax
212ff6 add      r9, r12
212ff9 mov      qword ptr [r14 + 0x1b0], r9
213000 shr      r9, 0x1b
213004 movzx    eax, r9b
213008 mov      byte ptr [r14 + 0x160], al
21300f imul     rax, r10
213013 xor      rax, rbx
213016 xor      rax, r11
213019 mov      rcx, rax
21301c add      rax, 0xf6105
213022 xor      rcx, 0xf6105
213029 test     dil, dil
21302c jmp      0x1402139df
213031 mov      rcx, r14
213034 call     0x1401ee070
213039 movzx    ecx, byte ptr [r14 + 0x4ad]
213041 movabs   rbx, 0xff51afd7ed558ccd
21304b mov      r11, qword ptr [r14 + 0xe0]
213052 movabs   r8, 0xc4ceb9fe1a85ec53
21305c mov      r10, qword ptr [r14 + 0xd0]
213063 movzx    r9d, byte ptr [r14 + 0xe8]
21306b mov      eax, eax
21306d xor      rcx, rax
213070 xor      rcx, qword ptr [r14 + 0x11e8]
213077 mov      rax, rcx
21307a shr      rax, 0x21
21307e xor      rax, rcx
213081 imul     rax, rbx
213085 mov      rcx, rax
213088 shr      rcx, 0x21
21308c xor      rcx, rax
21308f imul     rcx, r8
213093 mov      rdx, rcx
213096 shr      rdx, 0x21
21309a xor      rdx, rcx
21309d mov      qword ptr [r14 + 0x11e8], rdx
2130a4 xor      rdx, qword ptr [r14 + 0x28]
2130a8 xor      rdx, qword ptr [r14 + 0x20]
2130ac mov      rax, rdx
2130af shr      rax, 0x21
2130b3 xor      rax, rdx
2130b6 imul     rax, rbx
2130ba mov      rcx, rax
2130bd shr      rcx, 0x21
2130c1 xor      rcx, rax
2130c4 imul     rcx, r8
2130c8 mov      rax, rcx
2130cb shr      rax, 0x21
2130cf xor      rax, rcx
2130d2 mov      qword ptr [r14 + 0x20], rax
2130d6 mov      rdx, qword ptr [r14 + 0x138]
2130dd movzx    ecx, byte ptr [r14 + 0x169]
2130e5 mov      rax, qword ptr [r14 + 0xd8]
2130ec imul     rcx, r11
2130f0 lea      rbx, [rax + rax*4]
2130f4 mov      rax, rdx
2130f7 add      rbx, rbx
2130fa xor      rcx, rbx
2130fd xor      rcx, r10
213100 xor      rax, rcx
213103 sub      rdx, rcx
213106 test     r9b, r9b
213109 cmove    rdx, rax
21310d mov      rax, qword ptr [r14 + 0x1b0]
213114 inc      qword ptr [r14 + 0x1b8]
21311b imul     rax, r15
21311f add      rax, r12
213122 mov      qword ptr [r14 + 0x1b0], rax
213129 shr      rax, 0x1b
21312d movzx    r8d, al
213131 mov      byte ptr [r14 + 0x169], r8b
213138 imul     r8, r11
21313c xor      r8, rbx
21313f xor      r8, r10
213142 mov      rcx, r8
213145 xor      rcx, rdx
213148 test     r9b, r9b
21314b lea      rax, [r8 + rdx]
21314f cmove    rax, rcx
213153 mov      rcx, r14
213156 mov      qword ptr [r14 + 0x138], rax
21315d call     0x1401f0910
213162 mov      rax, qword ptr [r14 + 0xd8]
213169 mov      r10, qword ptr [r14 + 0xe0]
213170 movzx    ecx, byte ptr [r14 + 0x168]
213178 mov      rbx, qword ptr [r14 + 0xd0]
21317f mov      rdx, qword ptr [r14 + 0x130]
213186 lea      r11, [rax + rax*8]
21318a movzx    r9d, byte ptr [r14 + 0xe8]
213192 mov      rax, rdx
213195 imul     rcx, r10
213199 xor      rcx, r11
21319c xor      rcx, rbx
21319f xor      rax, rcx
2131a2 sub      rdx, rcx
2131a5 test     r9b, r9b
2131a8 cmove    rdx, rax
2131ac mov      rax, qword ptr [r14 + 0x1b0]
2131b3 inc      qword ptr [r14 + 0x1b8]
2131ba mov      rcx, rdx
2131bd imul     rax, r15
2131c1 add      rax, r12
2131c4 mov      qword ptr [r14 + 0x1b0], rax
2131cb shr      rax, 0x1b
2131cf movzx    r8d, al
2131d3 mov      byte ptr [r14 + 0x168], r8b
2131da imul     r8, r10
2131de xor      r8, r11
2131e1 xor      r8, rbx
2131e4 xor      rcx, r8
2131e7 test     r9b, r9b
2131ea lea      rax, [rdx + r8]
2131ee cmove    rax, rcx
2131f2 mov      rcx, r14
2131f5 mov      qword ptr [r14 + 0x130], rax
2131fc call     0x1401f0910
213201 mov      rcx, r14
213204 call     0x1401ee070
213209 cmp      eax, dword ptr [r14 + 0x1d8]
213210 jae      0x14021321c
213212 mov      edx, eax
213214 mov      rcx, r14
213217 call     0x1401f0910
21321c mov      rsi, qword ptr [r14 + 0xe0]
213223 mov      rbp, qword ptr [r14 + 0xd0]
21322a mov      r11, qword ptr [r14 + 0x130]
213231 movzx    edi, byte ptr [r14 + 0xe8]
213239 mov      rax, r11
21323c movzx    ecx, byte ptr [r14 + 0x168]
213244 mov      rbx, qword ptr [r14 + 0xd8]
21324b mov      r8, qword ptr [r14 + 0x1b8]
213252 mov      r10, qword ptr [r14 + 0x1b0]
213259 imul     rcx, rsi
21325d lea      r9, [rbx + rbx*8]
213261 xor      rcx, r9
213264 xor      rcx, rbp
213267 xor      rax, rcx
21326a sub      r11, rcx
21326d test     dil, dil
213270 cmove    r11, rax
213274 imul     r10, r15
213278 mov      rcx, r11
21327b add      r10, r12
21327e mov      rax, r10
213281 shr      rax, 0x1b
213285 movzx    edx, al
213288 mov      byte ptr [r14 + 0x168], dl
21328f imul     rdx, rsi
213293 xor      rdx, r9
213296 xor      rdx, rbp
213299 xor      rcx, rdx
21329c test     dil, dil
21329f lea      rax, [r11 + rdx]
2132a3 cmove    rax, rcx
2132a7 mov      rcx, r11
2132aa mov      qword ptr [r14 + 0x130], rax
2132b1 lea      rax, [r8 + 2]
2132b5 mov      qword ptr [r14 + 0x1b8], rax
2132bc mov      r8d, 0xe072
2132c2 imul     r10, r15
2132c6 lea      rax, [rbx + rbx*4]
2132ca add      rax, rax
2132cd add      r10, r12
2132d0 mov      qword ptr [r14 + 0x1b0], r10
2132d7 shr      r10, 0x1b
2132db movzx    edx, r10b
2132df mov      byte ptr [r14 + 0x169], dl
2132e6 imul     rdx, rsi
2132ea xor      rdx, rax
2132ed xor      rdx, rbp
2132f0 xor      rcx, rdx
2132f3 test     dil, dil
2132f6 lea      rax, [r11 + rdx]
2132fa cmove    rax, rcx
2132fe mov      rcx, r14
213301 mov      qword ptr [r14 + 0x138], rax
213308 movzx    edx, byte ptr [r14 + 0x4ad]
213310 xor      rdx, qword ptr [r14 + 0x348]
213317 call     0x1401f1520
21331c mov      r8, qword ptr [r14 + 0x348]
213323 movabs   rdi, 0xff51afd7ed558ccd
21332d mov      rax, r8
213330 movabs   rsi, 0xc4ceb9fe1a85ec53
21333a xor      rax, qword ptr [r14 + 0x20]
21333e mov      rcx, rax
213341 shr      rcx, 0x21
213345 xor      rcx, rax
213348 imul     rcx, rdi
21334c mov      rax, rcx
21334f shr      rax, 0x21
213353 xor      rax, rcx
213356 imul     rax, rsi
21335a mov      rdx, rax
21335d shr      rdx, 0x21
213361 xor      edx, eax
213363 lea      eax, [rdx + 1]
213366 mov      ecx, eax
213368 xor      eax, edx
21336a imul     ecx, edx
21336d not      ecx
21336f and      ecx, eax
213371 test     cl, 1
213374 je       0x1402133dd
213376 and      r8b, 3
21337a cmp      r8b, 1
21337e jne      0x1402133dd
213380 mov      rax, qword ptr [r14 + 0x1b0]
213387 inc      qword ptr [r14 + 0x1b8]
21338e imul     rax, r15
213392 add      rax, r12
213395 mov      qword ptr [r14 + 0x1b0], rax
21339c shr      rax, 0x1b
2133a0 movzx    eax, al
2133a3 mov      byte ptr [r14 + 0x160], al
2133aa imul     rax, qword ptr [r14 + 0xe0]
2133b2 xor      rax, qword ptr [r14 + 0xd8]
2133b9 xor      rax, qword ptr [r14 + 0xd0]
2133c0 mov      rcx, rax
2133c3 add      rax, 0x116fdf
2133c9 xor      rcx, 0x116fdf
2133d0 cmp      byte ptr [r14 + 0xe8], 0
2133d8 jmp      0x1402139df
2133dd mov      rcx, r14
2133e0 call     0x1401ee070
2133e5 mov      ebx, eax
2133e7 cmp      eax, dword ptr [r14 + 0x1d8]
2133ee jb       0x14021344d
2133f0 mov      rax, qword ptr [r14 + 0x1b0]
2133f7 inc      qword ptr [r14 + 0x1b8]
2133fe imul     rax, r15
213402 add      rax, r12
213405 mov      qword ptr [r14 + 0x1b0], rax
21340c shr      rax, 0x1b
213410 movzx    eax, al
213413 mov      byte ptr [r14 + 0x160], al
21341a imul     rax, qword ptr [r14 + 0xe0]
213422 xor      rax, qword ptr [r14 + 0xd8]
213429 xor      rax, qword ptr [r14 + 0xd0]
213430 mov      rcx, rax
213433 add      rax, 0xfe1ab
213439 xor      rcx, 0xfe1ab
213440 cmp      byte ptr [r14 + 0xe8], 0
213448 jmp      0x1402139df
21344d mov      edx, ebx
21344f mov      rcx, r14
213452 call     0x1401f25b0
213457 movsxd   rcx, dword ptr [r14 + 0x11e0]
21345e movabs   r8, 0xd6e8feb86659fd93
213468 mov      rdx, qword ptr [r14 + 0x20]
21346c mov      rax, rbx
21346f imul     rax, r8
213473 imul     rcx, r15
213477 rol      rdx, 0x11
21347b xor      rax, rdx
21347e xor      rcx, qword ptr [r14 + 0x260]
213485 xor      rax, rcx
213488 mov      rcx, rax
21348b shr      rcx, 0x21
21348f xor      rcx, rax
213492 imul     rcx, rdi
213496 mov      rdx, rcx
213499 shr      rdx, 0x21
21349d xor      rdx, rcx
2134a0 imul     rdx, rsi
2134a4 mov      rax, rdx
2134a7 shr      rax, 0x21
2134ab xor      rax, rdx
2134ae mov      r10, rax
2134b1 shr      r10, 0x1d
2134b5 xor      r10, rax
2134b8 or       r10, 1
2134bc mov      rax, r10
2134bf mov      qword ptr [r14 + 0x260], r10
2134c6 and      eax, 0x3ff
2134cb cmp      rax, 0x2c5
2134d1 jne      0x1402134e2
2134d3 mov      rcx, r14
2134d6 call     0x1402297e0
2134db mov      r10, qword ptr [r14 + 0x260]
2134e2 movzx    eax, r10b
2134e6 and      al, 0x1f
2134e8 cmp      al, 0x15
2134ea jne      0x1402135d8
2134f0 movsxd   rcx, dword ptr [r14 + 0x11e0]
2134f7 mov      rax, qword ptr [r14 + 0x20]
2134fb xor      rcx, 0x5a5a
213502 rol      rax, 0x11
213506 imul     rcx, r15
21350a xor      rcx, r10
21350d xor      rcx, rax
213510 movabs   rax, 0x8f70feda99a6026d
21351a xor      rcx, rax
21351d mov      rax, rcx
213520 shr      rax, 0x21
213524 xor      rax, rcx
213527 imul     rax, rdi
21352b mov      rcx, rax
21352e shr      rcx, 0x21
213532 xor      rcx, rax
213535 imul     rcx, rsi
213539 mov      rax, rcx
21353c shr      rax, 0x21
213540 xor      rax, rcx
213543 mov      r9, rax
213546 shr      r9, 0x1d
21354a xor      r9, rax
21354d or       r9, 1
213551 mov      rax, r9
213554 mov      rcx, r9
213557 shr      rax, 8
21355b and      eax, 3
21355e shr      rcx, 0x28
213562 imul     r8, rax, 0x3e
213566 mov      eax, 0x8421085
21356b mul      ecx
21356d mov      eax, ecx
21356f sub      eax, edx
213571 shr      eax, 1
213573 add      eax, edx
213575 shr      eax, 5
213578 imul     eax, eax, 0x3e
21357b sub      ecx, eax
21357d mov      eax, ecx
21357f add      r8, rax
213582 mov      rax, qword ptr [r14 + 0x4b8]
213589 movsxd   rcx, dword ptr [rax + r8*4]
21358d movsxd   rax, dword ptr [r14 + 0x4c8]
213594 xor      rcx, rax
213597 add      rcx, qword ptr [r14 + 0x4c0]
21359e xor      rcx, r9
2135a1 mov      rax, rcx
2135a4 shr      rax, 0x21
2135a8 xor      rax, rcx
2135ab imul     rax, rdi
2135af mov      rcx, rax
2135b2 shr      rcx, 0x21
2135b6 xor      rcx, rax
2135b9 imul     rcx, rsi
2135bd mov      rax, rcx
2135c0 shr      rax, 0x21
2135c4 xor      rax, rcx
2135c7 xor      rax, r10
2135ca inc      qword ptr [r14 + 0x268]
2135d1 mov      qword ptr [r14 + 0x260], rax
2135d8 inc      dword ptr [r14 + 0x200]
2135df mov      eax, dword ptr [r14 + 0x200]
2135e6 cmp      eax, dword ptr [r14 + 0x1fc]
2135ed jb       0x140213602
2135ef mov      rcx, r14
2135f2 mov      dword ptr [r14 + 0x200], 0
2135fd call     0x1401ef7c0
213602 mov      r8d, ebx
213605 mov      edx, ebx
213607 mov      rcx, r14
21360a call     0x1401f0660
21360f inc      qword ptr [r14 + 0x1b8]
213616 mov      rcx, rbx
213619 mov      r9, qword ptr [r14 + 0x1b0]
213620 mov      rbp, r12
213623 mov      r10, qword ptr [r14 + 0x1b8]
21362a imul     r9, r15
21362e add      r9, r12
213631 lea      r12d, [rbx + 1]
213635 mov      qword ptr [r14 + 0x1b0], r9
21363c mov      rax, r9
21363f shr      rax, 0x1b
213643 movzx    edx, al
213646 mov      byte ptr [r14 + 0x168], dl
21364d mov      rdi, qword ptr [r14 + 0xe0]
213654 mov      r11, qword ptr [r14 + 0xd8]
21365b mov      rsi, qword ptr [r14 + 0xd0]
213662 movzx    r15d, byte ptr [r14 + 0xe8]
21366a imul     rdx, rdi
21366e lea      rax, [r11 + r11*8]
213672 xor      rdx, rax
213675 xor      rdx, rsi
213678 xor      rcx, rdx
21367b test     r15b, r15b
21367e lea      rax, [rbx + rdx]
213682 cmove    rax, rcx
213686 inc      r10
213689 mov      qword ptr [r14 + 0x130], rax
213690 mov      rcx, qword ptr [r14 + 0x1d0]
213697 mov      rax, qword ptr [r14 + 0x48]
21369b mov      qword ptr [rsp + 0x70], r10
2136a0 movzx    r8d, byte ptr [rcx + rbx]
2136a5 xor      r8b, byte ptr [rax + rbx]
2136a9 movabs   rax, 0x9e3779b97f4a7c15
2136b3 imul     r9, rax
2136b7 mov      qword ptr [r14 + 0x1b8], r10
2136be movabs   rbx, 0xff51afd7ed558ccd
2136c8 add      r9, rbp
2136cb mov      rax, r9
2136ce shr      rax, 0x1b
2136d2 movzx    edx, al
2136d5 lea      rax, [r11 + r11]
2136d9 mov      byte ptr [r14 + 0x161], dl
2136e0 imul     rdx, rdi
2136e4 xor      rdx, rax
2136e7 xor      rdx, rsi
2136ea mov      rcx, rdx
2136ed xor      rcx, r12
2136f0 test     r15b, r15b
2136f3 lea      rax, [rdx + r12]
2136f7 cmove    rax, rcx
2136fb mov      qword ptr [r14 + 0xf8], rax
213702 movsxd   rdx, dword ptr [r14 + 0x11e0]
213709 mov      r10, qword ptr [r14 + 0x20]
21370d mov      rcx, rdx
213710 xor      rcx, qword ptr [r14 + 0x350]
213717 xor      rcx, r10
21371a xor      rcx, r12
21371d xor      rcx, qword ptr [r14 + 0x348]
213724 mov      rax, rcx
213727 shr      rax, 0x21
21372b xor      rax, rcx
21372e imul     rax, rbx
213732 mov      rcx, rax
213735 shr      rcx, 0x21
213739 xor      rcx, rax
21373c movabs   rax, 0xc4ceb9fe1a85ec53
213746 imul     rcx, rax
21374a movzx    eax, r8b
21374e mov      rbx, rcx
213751 xor      rax, 0xdd
213757 shr      rbx, 0x21
21375b xor      rbx, rcx
21375e lea      rcx, [rip - 0x213765]
213765 mov      qword ptr [r14 + 0x28], rbx
213769 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
213771 xor      bpl, 0x63
213775 inc      edx
213777 mov      dword ptr [r14 + 0x11e0], edx
21377e movabs   r8, 0xff51afd7ed558ccd
213788 test     dl, 0x1f
21378b jne      0x1402137d1
21378d movsxd   rax, edx
213790 xor      rax, r10
213793 xor      rax, qword ptr [r14 + 0x348]
21379a mov      rcx, rax
21379d shr      rcx, 0x21
2137a1 xor      rcx, rax
2137a4 movabs   rax, 0xc4ceb9fe1a85ec53
2137ae imul     rcx, r8
2137b2 mov      rdx, rcx
2137b5 shr      rdx, 0x21
2137b9 xor      rdx, rcx
2137bc imul     rdx, rax
2137c0 mov      rax, rdx
2137c3 shr      rax, 0x21
2137c7 xor      rax, rdx
2137ca mov      qword ptr [r14 + 0x348], rax
2137d1 movzx    edx, bpl
2137d5 xor      r10, rdx
2137d8 mov      byte ptr [r14 + 0x4ad], bpl
2137df xor      r10, r12
2137e2 movabs   r12, 0xc4ceb9fe1a85ec53
2137ec mov      rax, r10
2137ef shr      rax, 0x21
2137f3 xor      rax, r10
2137f6 movabs   r10, 0x9e3779b97f4a7c15
213800 imul     rax, r8
213804 imul     rdx, r10
213808 imul     r9, r10
21380c mov      rcx, rax
21380f shr      rcx, 0x21
213813 xor      rcx, rax
213816 imul     rcx, r12
21381a mov      rax, rcx
21381d shr      rax, 0x21
213821 xor      rax, rcx
213824 mov      ecx, dword ptr [r14 + 0x1178]
21382b mov      qword ptr [r14 + 0x20], rax
21382f movabs   rax, 0xd6e8feb86659fd93
213839 imul     rcx, rax
21383d xor      rcx, rdx
213840 xor      rcx, rbx
213843 movabs   rbx, 0x2545f4914f6cdd1d
21384d mov      rax, rcx
213850 add      r9, rbx
213853 shr      rax, 0x21
213857 xor      rax, rcx
21385a imul     rax, r8
21385e mov      rdx, rax
213861 shr      rdx, 0x21
213865 xor      rdx, rax
213868 mov      rax, qword ptr [rsp + 0x70]
21386d imul     rdx, r12
213871 shr      rdx, 0x21
213875 and      edx, 3
213878 inc      rax
21387b mov      qword ptr [r14 + 0x1b8], rax
213882 cmp      bpl, 0x3e
213886 jae      0x140213923
21388c inc      qword ptr [r14 + 0x11a0]
213893 lea      rax, [rip - 0x21389a]
21389a mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
2138a2 mov      qword ptr [r14 + 0x1b0], r9
2138a9 shr      r9, 0x1b
2138ad movzx    eax, r9b
2138b1 mov      byte ptr [r14 + 0x160], al
2138b8 imul     rax, rdi
2138bc mov      ebx, edx
2138be xor      rax, rsi
2138c1 xor      rax, r11
2138c4 mov      rcx, rax
2138c7 add      rax, r8
2138ca xor      rcx, r8
2138cd movzx    r8d, bpl
2138d1 test     r15b, r15b
2138d4 cmove    rax, rcx
2138d8 mov      rcx, r14
2138db mov      qword ptr [r14 + 0xf0], rax
2138e2 call     0x1401f1f50
2138e7 mov      r8, qword ptr [rsp + 0x80]
2138ef lea      edx, [r13 - 1]
2138f3 mov      eax, eax
2138f5 imul     rcx, rbx, 0x3e
2138f9 add      rcx, rax
2138fc mov      rax, qword ptr [r14 + 0x4b8]
213903 movsxd   r9, dword ptr [rax + rcx*4]
213907 mov      rcx, r14
21390a movsxd   rax, dword ptr [r14 + 0x4c8]
213911 xor      r9, rax
213914 add      r9, qword ptr [r14 + 0x4c0]
21391b call     r9
21391e jmp      0x1402139ea
213923 inc      dword ptr [r14 + 0x11a8]
21392a mov      rax, r9
21392d shr      rax, 0x1b
213931 movzx    ecx, al
213934 lea      rax, [r11*4]
21393c mov      byte ptr [r14 + 0x163], cl
213943 imul     rcx, rdi
213947 imul     r9, r10
21394b xor      rcx, rax
21394e xor      rcx, rsi
213951 mov      qword ptr [r14 + 0x108], rcx
213958 mov      r8, qword ptr [r14 + 0x1b8]
21395f add      r9, rbx
213962 mov      rax, r9
213965 shr      rax, 0x1b
213969 movzx    edx, al
21396c mov      byte ptr [r14 + 0x16a], dl
213973 imul     rax, r11, 0xb
213977 imul     rdx, rdi
21397b xor      rdx, rax
21397e xor      rdx, rsi
213981 mov      rcx, rdx
213984 xor      rcx, 1
213988 test     r15b, r15b
21398b lea      rax, [rdx + 1]
21398f cmove    rax, rcx
213993 mov      qword ptr [r14 + 0x140], rax
21399a lea      rax, [r8 + 2]
21399e mov      qword ptr [r14 + 0x1b8], rax
2139a5 imul     r9, r10
2139a9 add      r9, rbx
2139ac mov      qword ptr [r14 + 0x1b0], r9
2139b3 shr      r9, 0x1b
2139b7 movzx    eax, r9b
2139bb mov      byte ptr [r14 + 0x160], al
2139c2 imul     rax, rdi
2139c6 xor      rax, rsi
2139c9 xor      rax, r11
2139cc mov      rcx, rax
2139cf add      rax, 0xfe1ab
2139d5 xor      rcx, 0xfe1ab
2139dc test     r15b, r15b
2139df cmove    rax, rcx
2139e3 mov      qword ptr [r14 + 0xf0], rax
2139ea mov      r12, qword ptr [rsp + 0x78]
2139ef mov      r15, qword ptr [rsp + 0x30]
2139f4 add      rsp, 0x38
2139f8 pop      r14
2139fa pop      r13
2139fc pop      rdi
2139fd pop      rsi
2139fe pop      rbp
2139ff pop      rbx
213a00 ret      
213a01 mov      edx, 0x54485254
213a06 mov      rcx, r14
213a09 call     0x1401ed830
213a0e int3     
213a0f mov      edx, 0x43414e59
213a14 mov      rcx, r14
213a17 call     0x1401ed830
213a1c int3     
