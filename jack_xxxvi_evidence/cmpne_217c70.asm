217c70 push     rbx
217c72 push     r12
217c74 push     r13
217c76 push     r14
217c78 sub      rsp, 0x38
217c7c movsxd   rax, dword ptr [rcx + 0x11e0]
217c83 mov      r14, rcx
217c86 mov      r13d, edx
217c89 movabs   rcx, 0xe6329a61b4f1b6b7
217c93 imul     rax, rcx
217c97 movabs   rcx, 0x446b10aa352f3288
217ca1 mov      r12, r8
217ca4 xor      rax, qword ptr [r14 + 0x28]
217ca8 mov      qword ptr [rsp + 0x60], rax
217cad mov      rax, qword ptr [rsp + 0x60]
217cb2 movsxd   rax, dword ptr [r14 + 0x11e0]
217cb9 imul     rax, rcx
217cbd movabs   rcx, 0xa2a38ef4b664be9d
217cc7 xor      rax, qword ptr [r14 + 0x28]
217ccb mov      qword ptr [rsp + 0x60], rax
217cd0 mov      rax, qword ptr [rsp + 0x60]
217cd5 movsxd   rax, dword ptr [r14 + 0x11e0]
217cdc imul     rax, rcx
217ce0 movabs   rcx, 0xd619122dbee9a6b3
217cea xor      rax, qword ptr [r14 + 0x28]
217cee mov      qword ptr [rsp + 0x60], rax
217cf3 mov      rax, qword ptr [rsp + 0x60]
217cf8 mov      rax, qword ptr [r14 + 0x2e8]
217cff xor      rax, rcx
217d02 mov      rcx, rax
217d05 shr      rcx, 0x21
217d09 xor      rcx, rax
217d0c movabs   rax, 0xff51afd7ed558ccd
217d16 imul     rcx, rax
217d1a movabs   rax, 0xc4ceb9fe1a85ec53
217d24 mov      rdx, rcx
217d27 shr      rdx, 0x21
217d2b xor      rdx, rcx
217d2e mov      rcx, r14
217d31 imul     rdx, rax
217d35 mov      rax, rdx
217d38 shr      rax, 0x21
217d3c xor      rdx, rax
217d3f mov      rax, qword ptr [r14 + 0x2e8]
217d46 shr      rax, 7
217d4a add      rax, rdx
217d4d mov      qword ptr [r14 + 0x2e8], rax
217d54 call     0x1401ee940
217d59 mov      rcx, r14
217d5c mov      rbx, rax
217d5f call     0x1401ee940
217d64 xor      edx, edx
217d66 mov      rcx, r14
217d69 cmp      rax, rbx
217d6c setne    dl
217d6f call     0x1401ee820
217d74 mov      rax, qword ptr [r14 + 0x2e8]
217d7b test     r13d, r13d
217d7e jns      0x140218916
217d84 cmp      qword ptr [r14 + 0x11b8], r12
217d8b jne      0x140218924
217d91 movsxd   rax, dword ptr [r14 + 0x11e0]
217d98 movabs   rcx, 0xe06233b06e7bd90c
217da2 imul     rax, rcx
217da6 mov      rcx, r14
217da9 xor      rax, qword ptr [r14 + 0x28]
217dad mov      qword ptr [rsp + 0x60], rax
217db2 mov      rax, qword ptr [rsp + 0x60]
217db7 call     0x1401ee450
217dbc test     eax, eax
217dbe jne      0x14021890a
217dc4 cmp      dword ptr [r14 + 0xad0], eax
217dcb jne      0x14021890a
217dd1 mov      r8, qword ptr [r14 + 0xf0]
217dd8 movzx    ecx, byte ptr [r14 + 0x160]
217de0 mov      rax, r8
217de3 mov      r10, qword ptr [r14 + 0xe0]
217dea mov      rbx, qword ptr [r14 + 0xd0]
217df1 mov      r11, qword ptr [r14 + 0xd8]
217df8 mov      r9, qword ptr [r14 + 0x1b0]
217dff imul     rcx, r10
217e03 mov      qword ptr [rsp + 0x68], rbp
217e08 movabs   rbp, 0x2545f4914f6cdd1d
217e12 xor      rcx, rbx
217e15 mov      qword ptr [rsp + 0x30], rsi
217e1a mov      rsi, qword ptr [r14 + 0x1b8]
217e21 xor      rcx, r11
217e24 xor      rax, rcx
217e27 mov      qword ptr [rsp + 0x28], rdi
217e2c movzx    edi, byte ptr [r14 + 0xe8]
217e34 sub      r8, rcx
217e37 test     dil, dil
217e3a mov      qword ptr [rsp + 0x20], r15
217e3f movabs   r15, 0x9e3779b97f4a7c15
217e49 cmove    r8, rax
217e4d inc      rsi
217e50 imul     r9, r15
217e54 mov      qword ptr [r14 + 0x1b8], rsi
217e5b mov      rcx, r8
217e5e add      r9, rbp
217e61 mov      qword ptr [r14 + 0x1b0], r9
217e68 mov      rax, r9
217e6b shr      rax, 0x1b
217e6f movzx    edx, al
217e72 mov      byte ptr [r14 + 0x160], dl
217e79 imul     rdx, r10
217e7d xor      rdx, rbx
217e80 xor      rdx, r11
217e83 xor      rcx, rdx
217e86 test     dil, dil
217e89 lea      rax, [r8 + rdx]
217e8d cmove    rax, rcx
217e91 mov      qword ptr [r14 + 0xf0], rax
217e98 cmp      r8d, 0x48cad
217e9f jne      0x1402188f6
217ea5 mov      eax, r13d
217ea8 btr      eax, 0x1f
217eac cmp      eax, 2
217eaf jae      0x140217efb
217eb1 imul     r9, r15
217eb5 lea      rax, [rsi + 1]
217eb9 mov      qword ptr [r14 + 0x1b8], rax
217ec0 add      r9, rbp
217ec3 mov      qword ptr [r14 + 0x1b0], r9
217eca shr      r9, 0x1b
217ece movzx    eax, r9b
217ed2 mov      byte ptr [r14 + 0x160], al
217ed9 imul     rax, r10
217edd xor      rax, rbx
217ee0 xor      rax, r11
217ee3 mov      rcx, rax
217ee6 add      rax, 0xf6105
217eec xor      rcx, 0xf6105
217ef3 test     dil, dil
217ef6 jmp      0x1402188eb
217efb mov      rcx, r14
217efe call     0x1401ee070
217f03 movzx    ecx, byte ptr [r14 + 0x4ad]
217f0b movabs   rbx, 0xff51afd7ed558ccd
217f15 xor      rcx, qword ptr [r14 + 0x11e8]
217f1c movabs   r8, 0xc4ceb9fe1a85ec53
217f26 mov      r11, qword ptr [r14 + 0xe0]
217f2d mov      r10, qword ptr [r14 + 0xd0]
217f34 movzx    r9d, byte ptr [r14 + 0xe8]
217f3c mov      eax, eax
217f3e xor      rcx, rax
217f41 mov      rax, rcx
217f44 shr      rax, 0x21
217f48 xor      rax, rcx
217f4b imul     rax, rbx
217f4f mov      rcx, rax
217f52 shr      rcx, 0x21
217f56 xor      rcx, rax
217f59 imul     rcx, r8
217f5d mov      rdx, rcx
217f60 shr      rdx, 0x21
217f64 xor      rdx, rcx
217f67 mov      qword ptr [r14 + 0x11e8], rdx
217f6e xor      rdx, qword ptr [r14 + 0x28]
217f72 xor      rdx, qword ptr [r14 + 0x20]
217f76 mov      rax, rdx
217f79 shr      rax, 0x21
217f7d xor      rax, rdx
217f80 imul     rax, rbx
217f84 mov      rcx, rax
217f87 shr      rcx, 0x21
217f8b xor      rcx, rax
217f8e imul     rcx, r8
217f92 mov      rax, rcx
217f95 shr      rax, 0x21
217f99 xor      rax, rcx
217f9c mov      qword ptr [r14 + 0x20], rax
217fa0 mov      rdx, qword ptr [r14 + 0x138]
217fa7 movzx    ecx, byte ptr [r14 + 0x169]
217faf mov      rax, qword ptr [r14 + 0xd8]
217fb6 imul     rcx, r11
217fba lea      rbx, [rax + rax*4]
217fbe mov      rax, rdx
217fc1 add      rbx, rbx
217fc4 xor      rcx, rbx
217fc7 xor      rcx, r10
217fca xor      rax, rcx
217fcd sub      rdx, rcx
217fd0 test     r9b, r9b
217fd3 cmove    rdx, rax
217fd7 mov      rax, qword ptr [r14 + 0x1b0]
217fde inc      qword ptr [r14 + 0x1b8]
217fe5 imul     rax, r15
217fe9 add      rax, rbp
217fec mov      qword ptr [r14 + 0x1b0], rax
217ff3 shr      rax, 0x1b
217ff7 movzx    r8d, al
217ffb mov      byte ptr [r14 + 0x169], r8b
218002 imul     r8, r11
218006 xor      r8, rbx
218009 xor      r8, r10
21800c mov      rcx, r8
21800f xor      rcx, rdx
218012 test     r9b, r9b
218015 lea      rax, [r8 + rdx]
218019 cmove    rax, rcx
21801d mov      rcx, r14
218020 mov      qword ptr [r14 + 0x138], rax
218027 call     0x1401f0910
21802c mov      rax, qword ptr [r14 + 0xd8]
218033 mov      r10, qword ptr [r14 + 0xe0]
21803a movzx    ecx, byte ptr [r14 + 0x168]
218042 mov      rbx, qword ptr [r14 + 0xd0]
218049 mov      rdx, qword ptr [r14 + 0x130]
218050 lea      r11, [rax + rax*8]
218054 movzx    r9d, byte ptr [r14 + 0xe8]
21805c mov      rax, rdx
21805f imul     rcx, r10
218063 xor      rcx, r11
218066 xor      rcx, rbx
218069 xor      rax, rcx
21806c sub      rdx, rcx
21806f test     r9b, r9b
218072 cmove    rdx, rax
218076 mov      rax, qword ptr [r14 + 0x1b0]
21807d inc      qword ptr [r14 + 0x1b8]
218084 mov      rcx, rdx
218087 imul     rax, r15
21808b add      rax, rbp
21808e mov      qword ptr [r14 + 0x1b0], rax
218095 shr      rax, 0x1b
218099 movzx    r8d, al
21809d mov      byte ptr [r14 + 0x168], r8b
2180a4 imul     r8, r10
2180a8 xor      r8, r11
2180ab xor      r8, rbx
2180ae xor      rcx, r8
2180b1 test     r9b, r9b
2180b4 lea      rax, [rdx + r8]
2180b8 cmove    rax, rcx
2180bc mov      rcx, r14
2180bf mov      qword ptr [r14 + 0x130], rax
2180c6 call     0x1401f0910
2180cb mov      rcx, r14
2180ce call     0x1401ee070
2180d3 cmp      eax, dword ptr [r14 + 0x1d8]
2180da jae      0x1402180e6
2180dc mov      edx, eax
2180de mov      rcx, r14
2180e1 call     0x1401f0910
2180e6 mov      rsi, qword ptr [r14 + 0xe0]
2180ed mov      rbp, qword ptr [r14 + 0xd0]
2180f4 mov      r11, qword ptr [r14 + 0x130]
2180fb movzx    edi, byte ptr [r14 + 0xe8]
218103 mov      rax, r11
218106 movzx    ecx, byte ptr [r14 + 0x168]
21810e mov      rbx, qword ptr [r14 + 0xd8]
218115 mov      r8, qword ptr [r14 + 0x1b8]
21811c mov      r10, qword ptr [r14 + 0x1b0]
218123 imul     rcx, rsi
218127 lea      r9, [rbx + rbx*8]
21812b xor      rcx, r9
21812e xor      rcx, rbp
218131 xor      rax, rcx
218134 sub      r11, rcx
218137 test     dil, dil
21813a movabs   rcx, 0x2545f4914f6cdd1d
218144 cmove    r11, rax
218148 imul     r10, r15
21814c add      r10, rcx
21814f mov      rcx, r11
218152 mov      rax, r10
218155 shr      rax, 0x1b
218159 movzx    edx, al
21815c mov      byte ptr [r14 + 0x168], dl
218163 imul     rdx, rsi
218167 xor      rdx, r9
21816a xor      rdx, rbp
21816d xor      rcx, rdx
218170 test     dil, dil
218173 lea      rax, [r11 + rdx]
218177 cmove    rax, rcx
21817b mov      rcx, r11
21817e mov      qword ptr [r14 + 0x130], rax
218185 movabs   rax, 0x2545f4914f6cdd1d
21818f imul     r10, r15
218193 add      r10, rax
218196 lea      rax, [r8 + 2]
21819a mov      qword ptr [r14 + 0x1b8], rax
2181a1 mov      r8d, 0xc677
2181a7 mov      qword ptr [r14 + 0x1b0], r10
2181ae lea      rax, [rbx + rbx*4]
2181b2 add      rax, rax
2181b5 shr      r10, 0x1b
2181b9 movzx    edx, r10b
2181bd mov      byte ptr [r14 + 0x169], dl
2181c4 imul     rdx, rsi
2181c8 xor      rdx, rax
2181cb xor      rdx, rbp
2181ce xor      rcx, rdx
2181d1 test     dil, dil
2181d4 lea      rax, [r11 + rdx]
2181d8 cmove    rax, rcx
2181dc mov      rcx, r14
2181df mov      qword ptr [r14 + 0x138], rax
2181e6 movzx    edx, byte ptr [r14 + 0x4ad]
2181ee xor      rdx, qword ptr [r14 + 0x348]
2181f5 call     0x1401f1520
2181fa mov      r8, qword ptr [r14 + 0x348]
218201 movabs   rdi, 0xff51afd7ed558ccd
21820b mov      rax, r8
21820e movabs   rsi, 0xc4ceb9fe1a85ec53
218218 xor      rax, qword ptr [r14 + 0x20]
21821c mov      rcx, rax
21821f shr      rcx, 0x21
218223 xor      rcx, rax
218226 imul     rcx, rdi
21822a mov      rax, rcx
21822d shr      rax, 0x21
218231 xor      rax, rcx
218234 imul     rax, rsi
218238 mov      rdx, rax
21823b shr      rdx, 0x21
21823f xor      edx, eax
218241 lea      eax, [rdx + 1]
218244 mov      ecx, eax
218246 xor      eax, edx
218248 imul     ecx, edx
21824b not      ecx
21824d and      ecx, eax
21824f test     cl, 1
218252 je       0x1402182c5
218254 and      r8b, 3
218258 cmp      r8b, 1
21825c jne      0x1402182c5
21825e mov      rax, qword ptr [r14 + 0x1b0]
218265 movabs   rcx, 0x2545f4914f6cdd1d
21826f inc      qword ptr [r14 + 0x1b8]
218276 imul     rax, r15
21827a add      rax, rcx
21827d mov      qword ptr [r14 + 0x1b0], rax
218284 shr      rax, 0x1b
218288 movzx    eax, al
21828b mov      byte ptr [r14 + 0x160], al
218292 imul     rax, qword ptr [r14 + 0xe0]
21829a xor      rax, qword ptr [r14 + 0xd8]
2182a1 xor      rax, qword ptr [r14 + 0xd0]
2182a8 mov      rcx, rax
2182ab add      rax, 0x116fdf
2182b1 xor      rcx, 0x116fdf
2182b8 cmp      byte ptr [r14 + 0xe8], 0
2182c0 jmp      0x1402188eb
2182c5 mov      rcx, r14
2182c8 call     0x1401ee070
2182cd mov      ebx, eax
2182cf cmp      eax, dword ptr [r14 + 0x1d8]
2182d6 jb       0x14021833f
2182d8 mov      rax, qword ptr [r14 + 0x1b0]
2182df movabs   rcx, 0x2545f4914f6cdd1d
2182e9 inc      qword ptr [r14 + 0x1b8]
2182f0 imul     rax, r15
2182f4 add      rax, rcx
2182f7 mov      qword ptr [r14 + 0x1b0], rax
2182fe shr      rax, 0x1b
218302 movzx    eax, al
218305 mov      byte ptr [r14 + 0x160], al
21830c imul     rax, qword ptr [r14 + 0xe0]
218314 xor      rax, qword ptr [r14 + 0xd8]
21831b xor      rax, qword ptr [r14 + 0xd0]
218322 mov      rcx, rax
218325 add      rax, 0xfe1ab
21832b xor      rcx, 0xfe1ab
218332 cmp      byte ptr [r14 + 0xe8], 0
21833a jmp      0x1402188eb
21833f mov      edx, ebx
218341 mov      rcx, r14
218344 call     0x1401f25b0
218349 movsxd   rcx, dword ptr [r14 + 0x11e0]
218350 movabs   r8, 0xd6e8feb86659fd93
21835a mov      rdx, qword ptr [r14 + 0x20]
21835e mov      rax, rbx
218361 imul     rax, r8
218365 imul     rcx, r15
218369 rol      rdx, 0x11
21836d xor      rax, rdx
218370 xor      rcx, qword ptr [r14 + 0x260]
218377 xor      rax, rcx
21837a mov      rcx, rax
21837d shr      rcx, 0x21
218381 xor      rcx, rax
218384 imul     rcx, rdi
218388 mov      rdx, rcx
21838b shr      rdx, 0x21
21838f xor      rdx, rcx
218392 imul     rdx, rsi
218396 mov      rax, rdx
218399 shr      rax, 0x21
21839d xor      rax, rdx
2183a0 mov      r10, rax
2183a3 shr      r10, 0x1d
2183a7 xor      r10, rax
2183aa or       r10, 1
2183ae mov      rax, r10
2183b1 mov      qword ptr [r14 + 0x260], r10
2183b8 and      eax, 0x3ff
2183bd cmp      rax, 0x2c5
2183c3 jne      0x1402183d4
2183c5 mov      rcx, r14
2183c8 call     0x1402297e0
2183cd mov      r10, qword ptr [r14 + 0x260]
2183d4 movzx    eax, r10b
2183d8 and      al, 0x1f
2183da cmp      al, 0x15
2183dc jne      0x1402184c9
2183e2 movsxd   rax, dword ptr [r14 + 0x11e0]
2183e9 xor      rax, 0x5a5a
2183ef mov      rcx, qword ptr [r14 + 0x20]
2183f3 imul     rax, r15
2183f7 rol      rcx, 0x11
2183fb xor      rax, r10
2183fe xor      rcx, rax
218401 movabs   rax, 0x8f70feda99a6026d
21840b xor      rcx, rax
21840e mov      rax, rcx
218411 shr      rax, 0x21
218415 xor      rax, rcx
218418 imul     rax, rdi
21841c mov      rcx, rax
21841f shr      rcx, 0x21
218423 xor      rcx, rax
218426 imul     rcx, rsi
21842a mov      rax, rcx
21842d shr      rax, 0x21
218431 xor      rax, rcx
218434 mov      r9, rax
218437 shr      r9, 0x1d
21843b xor      r9, rax
21843e or       r9, 1
218442 mov      rax, r9
218445 mov      rcx, r9
218448 shr      rax, 8
21844c and      eax, 3
21844f shr      rcx, 0x28
218453 imul     r8, rax, 0x3e
218457 mov      eax, 0x8421085
21845c mul      ecx
21845e mov      eax, ecx
218460 sub      eax, edx
218462 shr      eax, 1
218464 add      eax, edx
218466 shr      eax, 5
218469 imul     eax, eax, 0x3e
21846c sub      ecx, eax
21846e mov      eax, ecx
218470 add      r8, rax
218473 mov      rax, qword ptr [r14 + 0x4b8]
21847a movsxd   rcx, dword ptr [rax + r8*4]
21847e movsxd   rax, dword ptr [r14 + 0x4c8]
218485 xor      rcx, rax
218488 add      rcx, qword ptr [r14 + 0x4c0]
21848f xor      rcx, r9
218492 mov      rax, rcx
218495 shr      rax, 0x21
218499 xor      rax, rcx
21849c imul     rax, rdi
2184a0 mov      rcx, rax
2184a3 shr      rcx, 0x21
2184a7 xor      rcx, rax
2184aa imul     rcx, rsi
2184ae mov      rax, rcx
2184b1 shr      rax, 0x21
2184b5 xor      rax, rcx
2184b8 xor      rax, r10
2184bb inc      qword ptr [r14 + 0x268]
2184c2 mov      qword ptr [r14 + 0x260], rax
2184c9 inc      dword ptr [r14 + 0x200]
2184d0 mov      eax, dword ptr [r14 + 0x200]
2184d7 cmp      eax, dword ptr [r14 + 0x1fc]
2184de jb       0x1402184f3
2184e0 mov      rcx, r14
2184e3 mov      dword ptr [r14 + 0x200], 0
2184ee call     0x1401ef7c0
2184f3 mov      r8d, ebx
2184f6 mov      edx, ebx
2184f8 mov      rcx, r14
2184fb call     0x1401f0660
218500 inc      qword ptr [r14 + 0x1b8]
218507 movabs   rax, 0x2545f4914f6cdd1d
218511 mov      r9, qword ptr [r14 + 0x1b0]
218518 mov      r10, qword ptr [r14 + 0x1b8]
21851f imul     r9, r15
218523 add      r9, rax
218526 mov      qword ptr [r14 + 0x1b0], r9
21852d mov      rax, r9
218530 shr      rax, 0x1b
218534 movzx    edx, al
218537 mov      byte ptr [r14 + 0x168], dl
21853e mov      rdi, qword ptr [r14 + 0xe0]
218545 mov      r11, qword ptr [r14 + 0xd8]
21854c mov      rsi, qword ptr [r14 + 0xd0]
218553 movzx    r15d, byte ptr [r14 + 0xe8]
21855b imul     rdx, rdi
21855f lea      rax, [r11 + r11*8]
218563 xor      rdx, rax
218566 xor      rdx, rsi
218569 mov      rcx, rdx
21856c xor      rcx, rbx
21856f test     r15b, r15b
218572 lea      rax, [rdx + rbx]
218576 cmove    rax, rcx
21857a inc      r10
21857d mov      qword ptr [r14 + 0x130], rax
218584 mov      rcx, qword ptr [r14 + 0x1d0]
21858b mov      rax, qword ptr [r14 + 0x48]
21858f mov      qword ptr [rsp + 0x78], r10
218594 movzx    r8d, byte ptr [rcx + rbx]
218599 xor      r8b, byte ptr [rax + rbx]
21859d inc      ebx
21859f mov      qword ptr [r14 + 0x1b8], r10
2185a6 movabs   rax, 0x9e3779b97f4a7c15
2185b0 imul     r9, rax
2185b4 mov      qword ptr [rsp + 0x60], rbx
2185b9 movabs   rax, 0x2545f4914f6cdd1d
2185c3 add      r9, rax
2185c6 mov      rax, r9
2185c9 shr      rax, 0x1b
2185cd movzx    edx, al
2185d0 lea      rax, [r11 + r11]
2185d4 mov      byte ptr [r14 + 0x161], dl
2185db imul     rdx, rdi
2185df xor      rdx, rax
2185e2 xor      rdx, rsi
2185e5 mov      rcx, rdx
2185e8 xor      rcx, rbx
2185eb test     r15b, r15b
2185ee lea      rax, [rdx + rbx]
2185f2 cmove    rax, rcx
2185f6 mov      qword ptr [r14 + 0xf8], rax
2185fd movsxd   rdx, dword ptr [r14 + 0x11e0]
218604 mov      r10, qword ptr [r14 + 0x20]
218608 mov      rcx, rdx
21860b xor      rcx, qword ptr [r14 + 0x350]
218612 xor      rcx, r10
218615 xor      rcx, rbx
218618 movabs   rbx, 0xff51afd7ed558ccd
218622 xor      rcx, qword ptr [r14 + 0x348]
218629 mov      rax, rcx
21862c shr      rax, 0x21
218630 xor      rax, rcx
218633 imul     rax, rbx
218637 mov      rcx, rax
21863a shr      rcx, 0x21
21863e xor      rcx, rax
218641 movabs   rax, 0xc4ceb9fe1a85ec53
21864b imul     rcx, rax
21864f movzx    eax, r8b
218653 mov      rbx, rcx
218656 shr      rbx, 0x21
21865a xor      rbx, rcx
21865d lea      rcx, [rip - 0x218664]
218664 xor      rax, 0xdd
21866a mov      qword ptr [r14 + 0x28], rbx
21866e movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
218676 xor      bpl, 0x63
21867a movabs   r8, 0xff51afd7ed558ccd
218684 inc      edx
218686 mov      dword ptr [r14 + 0x11e0], edx
21868d test     dl, 0x1f
218690 jne      0x1402186d6
218692 movsxd   rax, edx
218695 xor      rax, r10
218698 xor      rax, qword ptr [r14 + 0x348]
21869f mov      rcx, rax
2186a2 shr      rcx, 0x21
2186a6 xor      rcx, rax
2186a9 movabs   rax, 0xc4ceb9fe1a85ec53
2186b3 imul     rcx, r8
2186b7 mov      rdx, rcx
2186ba shr      rdx, 0x21
2186be xor      rdx, rcx
2186c1 imul     rdx, rax
2186c5 mov      rax, rdx
2186c8 shr      rax, 0x21
2186cc xor      rax, rdx
2186cf mov      qword ptr [r14 + 0x348], rax
2186d6 movzx    edx, bpl
2186da xor      r10, rdx
2186dd mov      byte ptr [r14 + 0x4ad], bpl
2186e4 xor      r10, qword ptr [rsp + 0x60]
2186e9 mov      rax, r10
2186ec shr      rax, 0x21
2186f0 xor      rax, r10
2186f3 movabs   r10, 0x9e3779b97f4a7c15
2186fd imul     rax, r8
218701 imul     rdx, r10
218705 imul     r9, r10
218709 mov      rcx, rax
21870c shr      rcx, 0x21
218710 xor      rcx, rax
218713 movabs   rax, 0xc4ceb9fe1a85ec53
21871d imul     rcx, rax
218721 mov      rax, rcx
218724 shr      rax, 0x21
218728 xor      rax, rcx
21872b mov      ecx, dword ptr [r14 + 0x1178]
218732 mov      qword ptr [r14 + 0x20], rax
218736 movabs   rax, 0xd6e8feb86659fd93
218740 imul     rcx, rax
218744 xor      rcx, rdx
218747 xor      rcx, rbx
21874a movabs   rbx, 0x2545f4914f6cdd1d
218754 mov      rax, rcx
218757 add      r9, rbx
21875a shr      rax, 0x21
21875e xor      rax, rcx
218761 imul     rax, r8
218765 mov      rdx, rax
218768 shr      rdx, 0x21
21876c xor      rdx, rax
21876f movabs   rax, 0xc4ceb9fe1a85ec53
218779 imul     rdx, rax
21877d mov      rax, qword ptr [rsp + 0x78]
218782 shr      rdx, 0x21
218786 and      edx, 3
218789 inc      rax
21878c mov      qword ptr [r14 + 0x1b8], rax
218793 cmp      bpl, 0x3e
218797 jae      0x14021882f
21879d inc      qword ptr [r14 + 0x11a0]
2187a4 lea      rax, [rip - 0x2187ab]
2187ab mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
2187b3 mov      qword ptr [r14 + 0x1b0], r9
2187ba shr      r9, 0x1b
2187be movzx    eax, r9b
2187c2 mov      byte ptr [r14 + 0x160], al
2187c9 imul     rax, rdi
2187cd mov      ebx, edx
2187cf xor      rax, rsi
2187d2 xor      rax, r11
2187d5 mov      rcx, rax
2187d8 add      rax, r8
2187db xor      rcx, r8
2187de movzx    r8d, bpl
2187e2 test     r15b, r15b
2187e5 cmove    rax, rcx
2187e9 mov      rcx, r14
2187ec mov      qword ptr [r14 + 0xf0], rax
2187f3 call     0x1401f1f50
2187f8 mov      eax, eax
2187fa lea      edx, [r13 - 1]
2187fe imul     rcx, rbx, 0x3e
218802 mov      r8, r12
218805 add      rcx, rax
218808 mov      rax, qword ptr [r14 + 0x4b8]
21880f movsxd   r9, dword ptr [rax + rcx*4]
218813 mov      rcx, r14
218816 movsxd   rax, dword ptr [r14 + 0x4c8]
21881d xor      r9, rax
218820 add      r9, qword ptr [r14 + 0x4c0]
218827 call     r9
21882a jmp      0x1402188f6
21882f inc      dword ptr [r14 + 0x11a8]
218836 mov      rax, r9
218839 shr      rax, 0x1b
21883d movzx    ecx, al
218840 lea      rax, [r11*4]
218848 mov      byte ptr [r14 + 0x163], cl
21884f imul     rcx, rdi
218853 imul     r9, r10
218857 xor      rcx, rax
21885a xor      rcx, rsi
21885d mov      qword ptr [r14 + 0x108], rcx
218864 mov      r8, qword ptr [r14 + 0x1b8]
21886b add      r9, rbx
21886e mov      rax, r9
218871 shr      rax, 0x1b
218875 movzx    edx, al
218878 mov      byte ptr [r14 + 0x16a], dl
21887f imul     rax, r11, 0xb
218883 imul     rdx, rdi
218887 xor      rdx, rax
21888a xor      rdx, rsi
21888d mov      rcx, rdx
218890 xor      rcx, 1
218894 test     r15b, r15b
218897 lea      rax, [rdx + 1]
21889b cmove    rax, rcx
21889f mov      qword ptr [r14 + 0x140], rax
2188a6 lea      rax, [r8 + 2]
2188aa mov      qword ptr [r14 + 0x1b8], rax
2188b1 imul     r9, r10
2188b5 add      r9, rbx
2188b8 mov      qword ptr [r14 + 0x1b0], r9
2188bf shr      r9, 0x1b
2188c3 movzx    eax, r9b
2188c7 mov      byte ptr [r14 + 0x160], al
2188ce imul     rax, rdi
2188d2 xor      rax, rsi
2188d5 xor      rax, r11
2188d8 mov      rcx, rax
2188db add      rax, 0xfe1ab
2188e1 xor      rcx, 0xfe1ab
2188e8 test     r15b, r15b
2188eb cmove    rax, rcx
2188ef mov      qword ptr [r14 + 0xf0], rax
2188f6 mov      rdi, qword ptr [rsp + 0x28]
2188fb mov      rsi, qword ptr [rsp + 0x30]
218900 mov      rbp, qword ptr [rsp + 0x68]
218905 mov      r15, qword ptr [rsp + 0x20]
21890a add      rsp, 0x38
21890e pop      r14
218910 pop      r13
218912 pop      r12
218914 pop      rbx
218915 ret      
218916 mov      edx, 0x54485254
21891b mov      rcx, r14
21891e call     0x1401ed830
218923 int3     
218924 mov      edx, 0x43414e59
218929 mov      rcx, r14
21892c call     0x1401ed830
218931 int3     
