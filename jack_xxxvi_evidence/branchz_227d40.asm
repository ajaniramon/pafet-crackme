227d40 mov      qword ptr [rsp + 0x18], r8
227d45 push     rbx
227d46 push     rbp
227d47 push     rsi
227d48 push     rdi
227d49 push     r13
227d4b push     r14
227d4d sub      rsp, 0x38
227d51 movsxd   rax, dword ptr [rcx + 0x11e0]
227d58 mov      r14, rcx
227d5b mov      r13d, edx
227d5e movabs   rcx, 0x1f4ca5924e9dc001
227d68 imul     rax, rcx
227d6c movabs   rcx, 0xbd152f59cf43443e
227d76 mov      rbp, r8
227d79 xor      rax, qword ptr [r14 + 0x28]
227d7d mov      qword ptr [rsp + 0x70], rax
227d82 mov      rax, qword ptr [rsp + 0x70]
227d87 movsxd   rax, dword ptr [r14 + 0x11e0]
227d8e imul     rax, rcx
227d92 movabs   rcx, 0x5bddb1074c08c82b
227d9c xor      rax, qword ptr [r14 + 0x28]
227da0 mov      qword ptr [rsp + 0x70], rax
227da5 mov      rax, qword ptr [rsp + 0x70]
227daa movsxd   rax, dword ptr [r14 + 0x11e0]
227db1 imul     rax, rcx
227db5 movabs   rcx, 0x72e359e83b8cab92
227dbf xor      rax, qword ptr [r14 + 0x28]
227dc3 mov      qword ptr [rsp + 0x70], rax
227dc8 mov      rax, qword ptr [rsp + 0x70]
227dcd mov      rax, qword ptr [r14 + 0x2e0]
227dd4 mov      rax, qword ptr [r14 + 0x2e0]
227ddb sub      rax, rcx
227dde mov      rcx, rax
227de1 shr      rcx, 0x21
227de5 xor      rcx, rax
227de8 movabs   rax, 0xff51afd7ed558ccd
227df2 imul     rcx, rax
227df6 movabs   rax, 0xc4ceb9fe1a85ec53
227e00 mov      rdx, rcx
227e03 shr      rdx, 0x21
227e07 xor      rdx, rcx
227e0a mov      rcx, r14
227e0d imul     rdx, rax
227e11 mov      rax, rdx
227e14 shr      rax, 0x21
227e18 xor      rdx, rax
227e1b mov      rax, qword ptr [r14 + 0x2e0]
227e22 shr      rax, 3
227e26 xor      rax, rdx
227e29 mov      qword ptr [r14 + 0x2e0], rax
227e30 call     0x1401f1c70
227e35 mov      rcx, r14
227e38 mov      edi, eax
227e3a call     0x1401ee940
227e3f mov      rcx, r14
227e42 mov      rbx, rax
227e45 call     0x1401ee070
227e4a movzx    r9d, byte ptr [r14 + 0x4ad]
227e52 mov      r8d, eax
227e55 mov      rdx, rbx
227e58 mov      rcx, r14
227e5b mov      esi, eax
227e5d call     0x1401f0e60
227e62 mov      ecx, edi
227e64 mov      rbx, rax
227e67 call     0x1401ed270
227e6c xor      r8d, r8d
227e6f mov      dword ptr [rsp + 0x28], esi
227e73 lea      rcx, [rbx - 1]
227e77 mov      dword ptr [rsp + 0x20], eax
227e7b cmp      rcx, rbx
227e7e mov      rdx, rbx
227e81 mov      rcx, r14
227e84 setae    r8b
227e88 xor      r9d, r9d
227e8b call     0x1401f10a0
227e90 mov      rdx, rax
227e93 mov      rcx, r14
227e96 call     0x1401f0db0
227e9b mov      rax, qword ptr [r14 + 0x2e0]
227ea2 test     r13d, r13d
227ea5 jns      0x1402289e8
227eab cmp      qword ptr [r14 + 0x11b8], rbp
227eb2 jne      0x1402289f6
227eb8 movsxd   rax, dword ptr [r14 + 0x11e0]
227ebf movabs   rcx, 0x573984ec6d8d7e90
227ec9 imul     rax, rcx
227ecd mov      rcx, r14
227ed0 xor      rax, qword ptr [r14 + 0x28]
227ed4 mov      qword ptr [rsp + 0x70], rax
227ed9 mov      rax, qword ptr [rsp + 0x70]
227ede call     0x1401ee450
227ee3 test     eax, eax
227ee5 jne      0x1402289db
227eeb cmp      dword ptr [r14 + 0xad0], eax
227ef2 jne      0x1402289db
227ef8 mov      r8, qword ptr [r14 + 0xf0]
227eff movzx    ecx, byte ptr [r14 + 0x160]
227f07 mov      rax, r8
227f0a mov      r10, qword ptr [r14 + 0xe0]
227f11 mov      rbx, qword ptr [r14 + 0xd0]
227f18 mov      r11, qword ptr [r14 + 0xd8]
227f1f movzx    edi, byte ptr [r14 + 0xe8]
227f27 mov      r9, qword ptr [r14 + 0x1b0]
227f2e mov      rsi, qword ptr [r14 + 0x1b8]
227f35 imul     rcx, r10
227f39 mov      qword ptr [rsp + 0x78], r12
227f3e movabs   r12, 0x2545f4914f6cdd1d
227f48 xor      rcx, rbx
227f4b mov      qword ptr [rsp + 0x30], r15
227f50 xor      rcx, r11
227f53 movabs   r15, 0x9e3779b97f4a7c15
227f5d xor      rax, rcx
227f60 sub      r8, rcx
227f63 test     dil, dil
227f66 cmove    r8, rax
227f6a inc      rsi
227f6d imul     r9, r15
227f71 mov      qword ptr [r14 + 0x1b8], rsi
227f78 mov      rcx, r8
227f7b add      r9, r12
227f7e mov      qword ptr [r14 + 0x1b0], r9
227f85 mov      rax, r9
227f88 shr      rax, 0x1b
227f8c movzx    edx, al
227f8f mov      byte ptr [r14 + 0x160], dl
227f96 imul     rdx, r10
227f9a xor      rdx, rbx
227f9d xor      rdx, r11
227fa0 xor      rcx, rdx
227fa3 test     dil, dil
227fa6 lea      rax, [r8 + rdx]
227faa cmove    rax, rcx
227fae mov      qword ptr [r14 + 0xf0], rax
227fb5 cmp      r8d, 0x2a0025
227fbc jne      0x1402289d1
227fc2 mov      eax, r13d
227fc5 btr      eax, 0x1f
227fc9 cmp      eax, 2
227fcc jae      0x140228018
227fce imul     r9, r15
227fd2 lea      rax, [rsi + 1]
227fd6 mov      qword ptr [r14 + 0x1b8], rax
227fdd add      r9, r12
227fe0 mov      qword ptr [r14 + 0x1b0], r9
227fe7 shr      r9, 0x1b
227feb movzx    eax, r9b
227fef mov      byte ptr [r14 + 0x160], al
227ff6 imul     rax, r10
227ffa xor      rax, rbx
227ffd xor      rax, r11
228000 mov      rcx, rax
228003 add      rax, 0x85b36
228009 xor      rcx, 0x85b36
228010 test     dil, dil
228013 jmp      0x1402289c6
228018 mov      rcx, r14
22801b call     0x1401ee070
228020 movzx    ecx, byte ptr [r14 + 0x4ad]
228028 movabs   rbx, 0xff51afd7ed558ccd
228032 mov      r11, qword ptr [r14 + 0xe0]
228039 movabs   r8, 0xc4ceb9fe1a85ec53
228043 mov      r10, qword ptr [r14 + 0xd0]
22804a movzx    r9d, byte ptr [r14 + 0xe8]
228052 mov      eax, eax
228054 xor      rcx, rax
228057 xor      rcx, qword ptr [r14 + 0x11e8]
22805e mov      rax, rcx
228061 shr      rax, 0x21
228065 xor      rax, rcx
228068 imul     rax, rbx
22806c mov      rcx, rax
22806f shr      rcx, 0x21
228073 xor      rcx, rax
228076 imul     rcx, r8
22807a mov      rdx, rcx
22807d shr      rdx, 0x21
228081 xor      rdx, rcx
228084 mov      qword ptr [r14 + 0x11e8], rdx
22808b xor      rdx, qword ptr [r14 + 0x20]
22808f xor      rdx, qword ptr [r14 + 0x28]
228093 mov      rax, rdx
228096 shr      rax, 0x21
22809a xor      rax, rdx
22809d imul     rax, rbx
2280a1 mov      rcx, rax
2280a4 shr      rcx, 0x21
2280a8 xor      rcx, rax
2280ab imul     rcx, r8
2280af mov      rax, rcx
2280b2 shr      rax, 0x21
2280b6 xor      rax, rcx
2280b9 mov      qword ptr [r14 + 0x20], rax
2280bd mov      rdx, qword ptr [r14 + 0x138]
2280c4 movzx    ecx, byte ptr [r14 + 0x169]
2280cc mov      rax, qword ptr [r14 + 0xd8]
2280d3 imul     rcx, r11
2280d7 lea      rbx, [rax + rax*4]
2280db mov      rax, rdx
2280de add      rbx, rbx
2280e1 xor      rcx, rbx
2280e4 xor      rcx, r10
2280e7 xor      rax, rcx
2280ea sub      rdx, rcx
2280ed test     r9b, r9b
2280f0 cmove    rdx, rax
2280f4 mov      rax, qword ptr [r14 + 0x1b0]
2280fb inc      qword ptr [r14 + 0x1b8]
228102 mov      rcx, rdx
228105 imul     rax, r15
228109 add      rax, r12
22810c mov      qword ptr [r14 + 0x1b0], rax
228113 shr      rax, 0x1b
228117 movzx    r8d, al
22811b mov      byte ptr [r14 + 0x169], r8b
228122 imul     r8, r11
228126 xor      r8, rbx
228129 xor      r8, r10
22812c xor      rcx, r8
22812f test     r9b, r9b
228132 lea      rax, [rdx + r8]
228136 cmove    rax, rcx
22813a mov      rcx, r14
22813d mov      qword ptr [r14 + 0x138], rax
228144 call     0x1401f0910
228149 mov      rax, qword ptr [r14 + 0xd8]
228150 mov      r11, qword ptr [r14 + 0xe0]
228157 movzx    ecx, byte ptr [r14 + 0x168]
22815f mov      r9, qword ptr [r14 + 0xd0]
228166 mov      rdx, qword ptr [r14 + 0x130]
22816d lea      rbx, [rax + rax*8]
228171 movzx    r10d, byte ptr [r14 + 0xe8]
228179 mov      rax, rdx
22817c imul     rcx, r11
228180 xor      rcx, r9
228183 xor      rcx, rbx
228186 xor      rax, rcx
228189 sub      rdx, rcx
22818c test     r10b, r10b
22818f cmove    rdx, rax
228193 mov      rax, qword ptr [r14 + 0x1b0]
22819a inc      qword ptr [r14 + 0x1b8]
2281a1 mov      rcx, rdx
2281a4 imul     rax, r15
2281a8 add      rax, r12
2281ab mov      qword ptr [r14 + 0x1b0], rax
2281b2 shr      rax, 0x1b
2281b6 movzx    r8d, al
2281ba mov      byte ptr [r14 + 0x168], r8b
2281c1 imul     r8, r11
2281c5 xor      r8, r9
2281c8 xor      r8, rbx
2281cb xor      rcx, r8
2281ce test     r10b, r10b
2281d1 lea      rax, [rdx + r8]
2281d5 cmove    rax, rcx
2281d9 mov      rcx, r14
2281dc mov      qword ptr [r14 + 0x130], rax
2281e3 call     0x1401f0910
2281e8 mov      rcx, r14
2281eb call     0x1401ee070
2281f0 cmp      eax, dword ptr [r14 + 0x1d8]
2281f7 jae      0x140228203
2281f9 mov      edx, eax
2281fb mov      rcx, r14
2281fe call     0x1401f0910
228203 mov      rsi, qword ptr [r14 + 0xe0]
22820a mov      rbp, qword ptr [r14 + 0xd0]
228211 mov      r11, qword ptr [r14 + 0x130]
228218 movzx    edi, byte ptr [r14 + 0xe8]
228220 mov      rax, r11
228223 movzx    ecx, byte ptr [r14 + 0x168]
22822b mov      rbx, qword ptr [r14 + 0xd8]
228232 mov      r8, qword ptr [r14 + 0x1b8]
228239 mov      r9, qword ptr [r14 + 0x1b0]
228240 imul     rcx, rsi
228244 lea      r10, [rbx + rbx*8]
228248 xor      rcx, rbp
22824b xor      rcx, r10
22824e xor      rax, rcx
228251 sub      r11, rcx
228254 test     dil, dil
228257 cmove    r11, rax
22825b imul     r9, r15
22825f mov      rcx, r11
228262 add      r9, r12
228265 mov      rax, r9
228268 shr      rax, 0x1b
22826c movzx    edx, al
22826f mov      byte ptr [r14 + 0x168], dl
228276 imul     rdx, rsi
22827a xor      rdx, rbp
22827d xor      rdx, r10
228280 xor      rcx, rdx
228283 test     dil, dil
228286 lea      rax, [r11 + rdx]
22828a cmove    rax, rcx
22828e mov      rcx, r11
228291 mov      qword ptr [r14 + 0x130], rax
228298 lea      rax, [r8 + 2]
22829c mov      qword ptr [r14 + 0x1b8], rax
2282a3 mov      r8d, 0xc358
2282a9 imul     r9, r15
2282ad lea      rax, [rbx + rbx*4]
2282b1 add      rax, rax
2282b4 add      r9, r12
2282b7 mov      qword ptr [r14 + 0x1b0], r9
2282be shr      r9, 0x1b
2282c2 movzx    edx, r9b
2282c6 mov      byte ptr [r14 + 0x169], dl
2282cd imul     rdx, rsi
2282d1 xor      rdx, rax
2282d4 xor      rdx, rbp
2282d7 xor      rcx, rdx
2282da test     dil, dil
2282dd lea      rax, [r11 + rdx]
2282e1 cmove    rax, rcx
2282e5 mov      rcx, r14
2282e8 mov      qword ptr [r14 + 0x138], rax
2282ef movzx    edx, byte ptr [r14 + 0x4ad]
2282f7 xor      rdx, qword ptr [r14 + 0x348]
2282fe call     0x1401f1520
228303 mov      r8, qword ptr [r14 + 0x348]
22830a movabs   rdi, 0xff51afd7ed558ccd
228314 mov      rax, r8
228317 movabs   rsi, 0xc4ceb9fe1a85ec53
228321 xor      rax, qword ptr [r14 + 0x20]
228325 mov      rcx, rax
228328 shr      rcx, 0x21
22832c xor      rcx, rax
22832f imul     rcx, rdi
228333 mov      rax, rcx
228336 shr      rax, 0x21
22833a xor      rax, rcx
22833d imul     rax, rsi
228341 mov      rdx, rax
228344 shr      rdx, 0x21
228348 xor      edx, eax
22834a lea      eax, [rdx + 1]
22834d mov      ecx, eax
22834f xor      eax, edx
228351 imul     ecx, edx
228354 not      ecx
228356 and      ecx, eax
228358 test     cl, 1
22835b je       0x1402283c4
22835d and      r8b, 3
228361 cmp      r8b, 1
228365 jne      0x1402283c4
228367 mov      rax, qword ptr [r14 + 0x1b0]
22836e inc      qword ptr [r14 + 0x1b8]
228375 imul     rax, r15
228379 add      rax, r12
22837c mov      qword ptr [r14 + 0x1b0], rax
228383 shr      rax, 0x1b
228387 movzx    eax, al
22838a mov      byte ptr [r14 + 0x160], al
228391 imul     rax, qword ptr [r14 + 0xe0]
228399 xor      rax, qword ptr [r14 + 0xd8]
2283a0 xor      rax, qword ptr [r14 + 0xd0]
2283a7 mov      rcx, rax
2283aa add      rax, 0x3dd18f
2283b0 xor      rcx, 0x3dd18f
2283b7 cmp      byte ptr [r14 + 0xe8], 0
2283bf jmp      0x1402289c6
2283c4 mov      rcx, r14
2283c7 call     0x1401ee070
2283cc mov      ebx, eax
2283ce cmp      eax, dword ptr [r14 + 0x1d8]
2283d5 jb       0x140228434
2283d7 mov      rax, qword ptr [r14 + 0x1b0]
2283de inc      qword ptr [r14 + 0x1b8]
2283e5 imul     rax, r15
2283e9 add      rax, r12
2283ec mov      qword ptr [r14 + 0x1b0], rax
2283f3 shr      rax, 0x1b
2283f7 movzx    eax, al
2283fa mov      byte ptr [r14 + 0x160], al
228401 imul     rax, qword ptr [r14 + 0xe0]
228409 xor      rax, qword ptr [r14 + 0xd8]
228410 xor      rax, qword ptr [r14 + 0xd0]
228417 mov      rcx, rax
22841a add      rax, 0xfe1ab
228420 xor      rcx, 0xfe1ab
228427 cmp      byte ptr [r14 + 0xe8], 0
22842f jmp      0x1402289c6
228434 mov      edx, ebx
228436 mov      rcx, r14
228439 call     0x1401f25b0
22843e movsxd   rcx, dword ptr [r14 + 0x11e0]
228445 movabs   r8, 0xd6e8feb86659fd93
22844f mov      rdx, qword ptr [r14 + 0x20]
228453 mov      rax, rbx
228456 imul     rax, r8
22845a imul     rcx, r15
22845e rol      rdx, 0x11
228462 xor      rax, rdx
228465 xor      rcx, qword ptr [r14 + 0x260]
22846c xor      rax, rcx
22846f mov      rcx, rax
228472 shr      rcx, 0x21
228476 xor      rcx, rax
228479 imul     rcx, rdi
22847d mov      rdx, rcx
228480 shr      rdx, 0x21
228484 xor      rdx, rcx
228487 imul     rdx, rsi
22848b mov      rax, rdx
22848e shr      rax, 0x21
228492 xor      rax, rdx
228495 mov      r10, rax
228498 shr      r10, 0x1d
22849c xor      r10, rax
22849f or       r10, 1
2284a3 mov      rax, r10
2284a6 mov      qword ptr [r14 + 0x260], r10
2284ad and      eax, 0x3ff
2284b2 cmp      rax, 0x2c5
2284b8 jne      0x1402284c9
2284ba mov      rcx, r14
2284bd call     0x1402297e0
2284c2 mov      r10, qword ptr [r14 + 0x260]
2284c9 movzx    eax, r10b
2284cd and      al, 0x1f
2284cf cmp      al, 0x15
2284d1 jne      0x1402285bf
2284d7 movsxd   rcx, dword ptr [r14 + 0x11e0]
2284de mov      rax, qword ptr [r14 + 0x20]
2284e2 xor      rcx, 0x5a5a
2284e9 rol      rax, 0x11
2284ed imul     rcx, r15
2284f1 xor      rcx, r10
2284f4 xor      rcx, rax
2284f7 movabs   rax, 0x8f70feda99a6026d
228501 xor      rcx, rax
228504 mov      rax, rcx
228507 shr      rax, 0x21
22850b xor      rax, rcx
22850e imul     rax, rdi
228512 mov      rcx, rax
228515 shr      rcx, 0x21
228519 xor      rcx, rax
22851c imul     rcx, rsi
228520 mov      rax, rcx
228523 shr      rax, 0x21
228527 xor      rax, rcx
22852a mov      r9, rax
22852d shr      r9, 0x1d
228531 xor      r9, rax
228534 or       r9, 1
228538 mov      rax, r9
22853b mov      rcx, r9
22853e shr      rax, 8
228542 and      eax, 3
228545 shr      rcx, 0x28
228549 imul     r8, rax, 0x3e
22854d mov      eax, 0x8421085
228552 mul      ecx
228554 mov      eax, ecx
228556 sub      eax, edx
228558 shr      eax, 1
22855a add      eax, edx
22855c shr      eax, 5
22855f imul     eax, eax, 0x3e
228562 sub      ecx, eax
228564 mov      eax, ecx
228566 add      r8, rax
228569 mov      rax, qword ptr [r14 + 0x4b8]
228570 movsxd   rcx, dword ptr [rax + r8*4]
228574 movsxd   rax, dword ptr [r14 + 0x4c8]
22857b xor      rcx, rax
22857e add      rcx, qword ptr [r14 + 0x4c0]
228585 xor      rcx, r9
228588 mov      rax, rcx
22858b shr      rax, 0x21
22858f xor      rax, rcx
228592 imul     rax, rdi
228596 mov      rcx, rax
228599 shr      rcx, 0x21
22859d xor      rcx, rax
2285a0 imul     rcx, rsi
2285a4 mov      rax, rcx
2285a7 shr      rax, 0x21
2285ab xor      rax, rcx
2285ae xor      rax, r10
2285b1 inc      qword ptr [r14 + 0x268]
2285b8 mov      qword ptr [r14 + 0x260], rax
2285bf inc      dword ptr [r14 + 0x200]
2285c6 mov      eax, dword ptr [r14 + 0x200]
2285cd cmp      eax, dword ptr [r14 + 0x1fc]
2285d4 jb       0x1402285e9
2285d6 mov      rcx, r14
2285d9 mov      dword ptr [r14 + 0x200], 0
2285e4 call     0x1401ef7c0
2285e9 mov      r8d, ebx
2285ec mov      edx, ebx
2285ee mov      rcx, r14
2285f1 call     0x1401f0660
2285f6 inc      qword ptr [r14 + 0x1b8]
2285fd mov      rcx, rbx
228600 mov      r9, qword ptr [r14 + 0x1b0]
228607 mov      rbp, r12
22860a mov      r10, qword ptr [r14 + 0x1b8]
228611 imul     r9, r15
228615 add      r9, r12
228618 lea      r12d, [rbx + 1]
22861c mov      qword ptr [r14 + 0x1b0], r9
228623 mov      rax, r9
228626 shr      rax, 0x1b
22862a movzx    edx, al
22862d mov      byte ptr [r14 + 0x168], dl
228634 mov      rdi, qword ptr [r14 + 0xe0]
22863b mov      r11, qword ptr [r14 + 0xd8]
228642 mov      rsi, qword ptr [r14 + 0xd0]
228649 movzx    r15d, byte ptr [r14 + 0xe8]
228651 imul     rdx, rdi
228655 lea      rax, [r11 + r11*8]
228659 xor      rdx, rax
22865c xor      rdx, rsi
22865f xor      rcx, rdx
228662 test     r15b, r15b
228665 lea      rax, [rbx + rdx]
228669 cmove    rax, rcx
22866d inc      r10
228670 mov      qword ptr [r14 + 0x130], rax
228677 mov      rcx, qword ptr [r14 + 0x1d0]
22867e mov      rax, qword ptr [r14 + 0x48]
228682 mov      qword ptr [rsp + 0x70], r10
228687 movzx    r8d, byte ptr [rcx + rbx]
22868c xor      r8b, byte ptr [rax + rbx]
228690 movabs   rax, 0x9e3779b97f4a7c15
22869a imul     r9, rax
22869e mov      qword ptr [r14 + 0x1b8], r10
2286a5 movabs   rbx, 0xff51afd7ed558ccd
2286af add      r9, rbp
2286b2 mov      rax, r9
2286b5 shr      rax, 0x1b
2286b9 movzx    edx, al
2286bc lea      rax, [r11 + r11]
2286c0 mov      byte ptr [r14 + 0x161], dl
2286c7 imul     rdx, rdi
2286cb xor      rdx, rax
2286ce xor      rdx, rsi
2286d1 mov      rcx, rdx
2286d4 xor      rcx, r12
2286d7 test     r15b, r15b
2286da lea      rax, [rdx + r12]
2286de cmove    rax, rcx
2286e2 mov      qword ptr [r14 + 0xf8], rax
2286e9 movsxd   rdx, dword ptr [r14 + 0x11e0]
2286f0 mov      r10, qword ptr [r14 + 0x20]
2286f4 mov      rcx, rdx
2286f7 xor      rcx, qword ptr [r14 + 0x350]
2286fe xor      rcx, r10
228701 xor      rcx, r12
228704 xor      rcx, qword ptr [r14 + 0x348]
22870b mov      rax, rcx
22870e shr      rax, 0x21
228712 xor      rax, rcx
228715 imul     rax, rbx
228719 mov      rcx, rax
22871c shr      rcx, 0x21
228720 xor      rcx, rax
228723 movabs   rax, 0xc4ceb9fe1a85ec53
22872d imul     rcx, rax
228731 movzx    eax, r8b
228735 mov      rbx, rcx
228738 xor      rax, 0xdd
22873e shr      rbx, 0x21
228742 xor      rbx, rcx
228745 lea      rcx, [rip - 0x22874c]
22874c mov      qword ptr [r14 + 0x28], rbx
228750 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
228758 xor      bpl, 0x63
22875c inc      edx
22875e mov      dword ptr [r14 + 0x11e0], edx
228765 movabs   r8, 0xff51afd7ed558ccd
22876f test     dl, 0x1f
228772 jne      0x1402287b8
228774 movsxd   rax, edx
228777 xor      rax, r10
22877a xor      rax, qword ptr [r14 + 0x348]
228781 mov      rcx, rax
228784 shr      rcx, 0x21
228788 xor      rcx, rax
22878b movabs   rax, 0xc4ceb9fe1a85ec53
228795 imul     rcx, r8
228799 mov      rdx, rcx
22879c shr      rdx, 0x21
2287a0 xor      rdx, rcx
2287a3 imul     rdx, rax
2287a7 mov      rax, rdx
2287aa shr      rax, 0x21
2287ae xor      rax, rdx
2287b1 mov      qword ptr [r14 + 0x348], rax
2287b8 movzx    edx, bpl
2287bc xor      r10, rdx
2287bf mov      byte ptr [r14 + 0x4ad], bpl
2287c6 xor      r10, r12
2287c9 movabs   r12, 0xc4ceb9fe1a85ec53
2287d3 mov      rax, r10
2287d6 shr      rax, 0x21
2287da xor      rax, r10
2287dd movabs   r10, 0x9e3779b97f4a7c15
2287e7 imul     rax, r8
2287eb imul     rdx, r10
2287ef imul     r9, r10
2287f3 mov      rcx, rax
2287f6 shr      rcx, 0x21
2287fa xor      rcx, rax
2287fd imul     rcx, r12
228801 mov      rax, rcx
228804 shr      rax, 0x21
228808 xor      rax, rcx
22880b mov      ecx, dword ptr [r14 + 0x1178]
228812 mov      qword ptr [r14 + 0x20], rax
228816 movabs   rax, 0xd6e8feb86659fd93
228820 imul     rcx, rax
228824 xor      rcx, rdx
228827 xor      rcx, rbx
22882a movabs   rbx, 0x2545f4914f6cdd1d
228834 mov      rax, rcx
228837 add      r9, rbx
22883a shr      rax, 0x21
22883e xor      rax, rcx
228841 imul     rax, r8
228845 mov      rdx, rax
228848 shr      rdx, 0x21
22884c xor      rdx, rax
22884f mov      rax, qword ptr [rsp + 0x70]
228854 imul     rdx, r12
228858 shr      rdx, 0x21
22885c and      edx, 3
22885f inc      rax
228862 mov      qword ptr [r14 + 0x1b8], rax
228869 cmp      bpl, 0x3e
22886d jae      0x14022890a
228873 inc      qword ptr [r14 + 0x11a0]
22887a lea      rax, [rip - 0x228881]
228881 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
228889 mov      qword ptr [r14 + 0x1b0], r9
228890 shr      r9, 0x1b
228894 movzx    eax, r9b
228898 mov      byte ptr [r14 + 0x160], al
22889f imul     rax, rdi
2288a3 mov      ebx, edx
2288a5 xor      rax, rsi
2288a8 xor      rax, r11
2288ab mov      rcx, rax
2288ae add      rax, r8
2288b1 xor      rcx, r8
2288b4 movzx    r8d, bpl
2288b8 test     r15b, r15b
2288bb cmove    rax, rcx
2288bf mov      rcx, r14
2288c2 mov      qword ptr [r14 + 0xf0], rax
2288c9 call     0x1401f1f50
2288ce mov      r8, qword ptr [rsp + 0x80]
2288d6 lea      edx, [r13 - 1]
2288da mov      eax, eax
2288dc imul     rcx, rbx, 0x3e
2288e0 add      rcx, rax
2288e3 mov      rax, qword ptr [r14 + 0x4b8]
2288ea movsxd   r9, dword ptr [rax + rcx*4]
2288ee mov      rcx, r14
2288f1 movsxd   rax, dword ptr [r14 + 0x4c8]
2288f8 xor      r9, rax
2288fb add      r9, qword ptr [r14 + 0x4c0]
228902 call     r9
228905 jmp      0x1402289d1
22890a inc      dword ptr [r14 + 0x11a8]
228911 mov      rax, r9
228914 shr      rax, 0x1b
228918 movzx    ecx, al
22891b lea      rax, [r11*4]
228923 mov      byte ptr [r14 + 0x163], cl
22892a imul     rcx, rdi
22892e imul     r9, r10
228932 xor      rcx, rax
228935 xor      rcx, rsi
228938 mov      qword ptr [r14 + 0x108], rcx
22893f mov      r8, qword ptr [r14 + 0x1b8]
228946 add      r9, rbx
228949 mov      rax, r9
22894c shr      rax, 0x1b
228950 movzx    edx, al
228953 mov      byte ptr [r14 + 0x16a], dl
22895a imul     rax, r11, 0xb
22895e imul     rdx, rdi
228962 xor      rdx, rax
228965 xor      rdx, rsi
228968 mov      rcx, rdx
22896b xor      rcx, 1
22896f test     r15b, r15b
228972 lea      rax, [rdx + 1]
228976 cmove    rax, rcx
22897a mov      qword ptr [r14 + 0x140], rax
228981 lea      rax, [r8 + 2]
228985 mov      qword ptr [r14 + 0x1b8], rax
22898c imul     r9, r10
228990 add      r9, rbx
228993 mov      qword ptr [r14 + 0x1b0], r9
22899a shr      r9, 0x1b
22899e movzx    eax, r9b
2289a2 mov      byte ptr [r14 + 0x160], al
2289a9 imul     rax, rdi
2289ad xor      rax, rsi
2289b0 xor      rax, r11
2289b3 mov      rcx, rax
2289b6 add      rax, 0xfe1ab
2289bc xor      rcx, 0xfe1ab
2289c3 test     r15b, r15b
2289c6 cmove    rax, rcx
2289ca mov      qword ptr [r14 + 0xf0], rax
2289d1 mov      r12, qword ptr [rsp + 0x78]
2289d6 mov      r15, qword ptr [rsp + 0x30]
2289db add      rsp, 0x38
2289df pop      r14
2289e1 pop      r13
2289e3 pop      rdi
2289e4 pop      rsi
2289e5 pop      rbp
2289e6 pop      rbx
2289e7 ret      
2289e8 mov      edx, 0x54485254
2289ed mov      rcx, r14
2289f0 call     0x1401ed830
2289f5 int3     
2289f6 mov      edx, 0x43414e59
2289fb mov      rcx, r14
2289fe call     0x1401ed830
228a03 int3     
