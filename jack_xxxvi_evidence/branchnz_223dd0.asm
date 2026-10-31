223dd0 mov      qword ptr [rsp + 0x18], r8
223dd5 push     rbx
223dd6 push     rbp
223dd7 push     rsi
223dd8 push     rdi
223dd9 push     r13
223ddb push     r14
223ddd sub      rsp, 0x38
223de1 movsxd   rax, dword ptr [rcx + 0x11e0]
223de8 mov      r14, rcx
223deb mov      r13d, edx
223dee movabs   rcx, 0xc653a35ae77bc5b2
223df8 imul     rax, rcx
223dfc movabs   rcx, 0x640a299166a5418d
223e06 mov      rbp, r8
223e09 xor      rax, qword ptr [r14 + 0x28]
223e0d mov      qword ptr [rsp + 0x70], rax
223e12 mov      rax, qword ptr [rsp + 0x70]
223e17 movsxd   rax, dword ptr [r14 + 0x11e0]
223e1e imul     rax, rcx
223e22 movabs   rcx, 0x82c2b7cfe5eecd98
223e2c xor      rax, qword ptr [r14 + 0x28]
223e30 mov      qword ptr [rsp + 0x70], rax
223e35 mov      rax, qword ptr [rsp + 0x70]
223e3a movsxd   rax, dword ptr [r14 + 0x11e0]
223e41 imul     rax, rcx
223e45 movabs   rcx, 0x5403a0df6d9551dd
223e4f xor      rax, qword ptr [r14 + 0x28]
223e53 mov      qword ptr [rsp + 0x70], rax
223e58 mov      rax, qword ptr [rsp + 0x70]
223e5d mov      rax, qword ptr [r14 + 0x2f8]
223e64 mov      rax, qword ptr [r14 + 0x2f8]
223e6b add      rax, rcx
223e6e mov      rcx, rax
223e71 shr      rcx, 0x21
223e75 xor      rcx, rax
223e78 movabs   rax, 0xff51afd7ed558ccd
223e82 imul     rcx, rax
223e86 movabs   rax, 0xc4ceb9fe1a85ec53
223e90 mov      rdx, rcx
223e93 shr      rdx, 0x21
223e97 xor      rdx, rcx
223e9a mov      rcx, r14
223e9d imul     rdx, rax
223ea1 mov      rax, rdx
223ea4 shr      rax, 0x21
223ea8 xor      rdx, rax
223eab mov      rax, qword ptr [r14 + 0x2f8]
223eb2 shr      rax, 3
223eb6 xor      rax, rdx
223eb9 mov      qword ptr [r14 + 0x2f8], rax
223ec0 call     0x1401f1c70
223ec5 mov      rcx, r14
223ec8 mov      edi, eax
223eca call     0x1401ee940
223ecf mov      rcx, r14
223ed2 mov      rbx, rax
223ed5 call     0x1401ee070
223eda movzx    r9d, byte ptr [r14 + 0x4ad]
223ee2 mov      r8d, eax
223ee5 mov      rdx, rbx
223ee8 mov      rcx, r14
223eeb mov      esi, eax
223eed call     0x1401f0e60
223ef2 mov      ecx, edi
223ef4 mov      rbx, rax
223ef7 call     0x1401ed270
223efc xor      r8d, r8d
223eff mov      dword ptr [rsp + 0x28], esi
223f03 lea      rcx, [rbx - 1]
223f07 mov      dword ptr [rsp + 0x20], eax
223f0b cmp      rcx, rbx
223f0e mov      r9d, 1
223f14 mov      rdx, rbx
223f17 mov      rcx, r14
223f1a setae    r8b
223f1e call     0x1401f10a0
223f23 mov      rdx, rax
223f26 mov      rcx, r14
223f29 call     0x1401f0db0
223f2e mov      rax, qword ptr [r14 + 0x2f8]
223f35 test     r13d, r13d
223f38 jns      0x140224a7b
223f3e cmp      qword ptr [r14 + 0x11b8], rbp
223f45 jne      0x140224a89
223f4b movsxd   rax, dword ptr [r14 + 0x11e0]
223f52 movabs   rcx, 0x144f13007f93a3ba
223f5c imul     rax, rcx
223f60 mov      rcx, r14
223f63 xor      rax, qword ptr [r14 + 0x28]
223f67 mov      qword ptr [rsp + 0x70], rax
223f6c mov      rax, qword ptr [rsp + 0x70]
223f71 call     0x1401ee450
223f76 test     eax, eax
223f78 jne      0x140224a6e
223f7e cmp      dword ptr [r14 + 0xad0], eax
223f85 jne      0x140224a6e
223f8b mov      r8, qword ptr [r14 + 0xf0]
223f92 movzx    ecx, byte ptr [r14 + 0x160]
223f9a mov      rax, r8
223f9d mov      r10, qword ptr [r14 + 0xe0]
223fa4 mov      rbx, qword ptr [r14 + 0xd0]
223fab mov      r11, qword ptr [r14 + 0xd8]
223fb2 movzx    edi, byte ptr [r14 + 0xe8]
223fba mov      r9, qword ptr [r14 + 0x1b0]
223fc1 mov      rsi, qword ptr [r14 + 0x1b8]
223fc8 imul     rcx, r10
223fcc mov      qword ptr [rsp + 0x78], r12
223fd1 movabs   r12, 0x2545f4914f6cdd1d
223fdb xor      rcx, rbx
223fde mov      qword ptr [rsp + 0x30], r15
223fe3 xor      rcx, r11
223fe6 movabs   r15, 0x9e3779b97f4a7c15
223ff0 xor      rax, rcx
223ff3 sub      r8, rcx
223ff6 test     dil, dil
223ff9 cmove    r8, rax
223ffd inc      rsi
224000 imul     r9, r15
224004 mov      qword ptr [r14 + 0x1b8], rsi
22400b mov      rcx, r8
22400e add      r9, r12
224011 mov      qword ptr [r14 + 0x1b0], r9
224018 mov      rax, r9
22401b shr      rax, 0x1b
22401f movzx    edx, al
224022 mov      byte ptr [r14 + 0x160], dl
224029 imul     rdx, r10
22402d xor      rdx, rbx
224030 xor      rdx, r11
224033 xor      rcx, rdx
224036 test     dil, dil
224039 lea      rax, [r8 + rdx]
22403d cmove    rax, rcx
224041 mov      qword ptr [r14 + 0xf0], rax
224048 cmp      r8d, 0x2a0025
22404f jne      0x140224a64
224055 mov      eax, r13d
224058 btr      eax, 0x1f
22405c cmp      eax, 2
22405f jae      0x1402240ab
224061 imul     r9, r15
224065 lea      rax, [rsi + 1]
224069 mov      qword ptr [r14 + 0x1b8], rax
224070 add      r9, r12
224073 mov      qword ptr [r14 + 0x1b0], r9
22407a shr      r9, 0x1b
22407e movzx    eax, r9b
224082 mov      byte ptr [r14 + 0x160], al
224089 imul     rax, r10
22408d xor      rax, rbx
224090 xor      rax, r11
224093 mov      rcx, rax
224096 add      rax, 0x85b36
22409c xor      rcx, 0x85b36
2240a3 test     dil, dil
2240a6 jmp      0x140224a59
2240ab mov      rcx, r14
2240ae call     0x1401ee070
2240b3 movzx    ecx, byte ptr [r14 + 0x4ad]
2240bb movabs   rbx, 0xff51afd7ed558ccd
2240c5 mov      r11, qword ptr [r14 + 0xe0]
2240cc movabs   r8, 0xc4ceb9fe1a85ec53
2240d6 mov      r10, qword ptr [r14 + 0xd0]
2240dd movzx    r9d, byte ptr [r14 + 0xe8]
2240e5 mov      eax, eax
2240e7 xor      rcx, rax
2240ea xor      rcx, qword ptr [r14 + 0x11e8]
2240f1 mov      rax, rcx
2240f4 shr      rax, 0x21
2240f8 xor      rax, rcx
2240fb imul     rax, rbx
2240ff mov      rcx, rax
224102 shr      rcx, 0x21
224106 xor      rcx, rax
224109 imul     rcx, r8
22410d mov      rdx, rcx
224110 shr      rdx, 0x21
224114 xor      rdx, rcx
224117 mov      qword ptr [r14 + 0x11e8], rdx
22411e xor      rdx, qword ptr [r14 + 0x20]
224122 xor      rdx, qword ptr [r14 + 0x28]
224126 mov      rax, rdx
224129 shr      rax, 0x21
22412d xor      rax, rdx
224130 imul     rax, rbx
224134 mov      rcx, rax
224137 shr      rcx, 0x21
22413b xor      rcx, rax
22413e imul     rcx, r8
224142 mov      rax, rcx
224145 shr      rax, 0x21
224149 xor      rax, rcx
22414c mov      qword ptr [r14 + 0x20], rax
224150 mov      rdx, qword ptr [r14 + 0x138]
224157 movzx    ecx, byte ptr [r14 + 0x169]
22415f mov      rax, qword ptr [r14 + 0xd8]
224166 imul     rcx, r11
22416a lea      rbx, [rax + rax*4]
22416e mov      rax, rdx
224171 add      rbx, rbx
224174 xor      rcx, rbx
224177 xor      rcx, r10
22417a xor      rax, rcx
22417d sub      rdx, rcx
224180 test     r9b, r9b
224183 cmove    rdx, rax
224187 mov      rax, qword ptr [r14 + 0x1b0]
22418e inc      qword ptr [r14 + 0x1b8]
224195 mov      rcx, rdx
224198 imul     rax, r15
22419c add      rax, r12
22419f mov      qword ptr [r14 + 0x1b0], rax
2241a6 shr      rax, 0x1b
2241aa movzx    r8d, al
2241ae mov      byte ptr [r14 + 0x169], r8b
2241b5 imul     r8, r11
2241b9 xor      r8, rbx
2241bc xor      r8, r10
2241bf xor      rcx, r8
2241c2 test     r9b, r9b
2241c5 lea      rax, [rdx + r8]
2241c9 cmove    rax, rcx
2241cd mov      rcx, r14
2241d0 mov      qword ptr [r14 + 0x138], rax
2241d7 call     0x1401f0910
2241dc mov      rax, qword ptr [r14 + 0xd8]
2241e3 mov      r11, qword ptr [r14 + 0xe0]
2241ea movzx    ecx, byte ptr [r14 + 0x168]
2241f2 mov      r9, qword ptr [r14 + 0xd0]
2241f9 mov      rdx, qword ptr [r14 + 0x130]
224200 lea      rbx, [rax + rax*8]
224204 movzx    r10d, byte ptr [r14 + 0xe8]
22420c mov      rax, rdx
22420f imul     rcx, r11
224213 xor      rcx, r9
224216 xor      rcx, rbx
224219 xor      rax, rcx
22421c sub      rdx, rcx
22421f test     r10b, r10b
224222 cmove    rdx, rax
224226 mov      rax, qword ptr [r14 + 0x1b0]
22422d inc      qword ptr [r14 + 0x1b8]
224234 mov      rcx, rdx
224237 imul     rax, r15
22423b add      rax, r12
22423e mov      qword ptr [r14 + 0x1b0], rax
224245 shr      rax, 0x1b
224249 movzx    r8d, al
22424d mov      byte ptr [r14 + 0x168], r8b
224254 imul     r8, r11
224258 xor      r8, r9
22425b xor      r8, rbx
22425e xor      rcx, r8
224261 test     r10b, r10b
224264 lea      rax, [rdx + r8]
224268 cmove    rax, rcx
22426c mov      rcx, r14
22426f mov      qword ptr [r14 + 0x130], rax
224276 call     0x1401f0910
22427b mov      rcx, r14
22427e call     0x1401ee070
224283 cmp      eax, dword ptr [r14 + 0x1d8]
22428a jae      0x140224296
22428c mov      edx, eax
22428e mov      rcx, r14
224291 call     0x1401f0910
224296 mov      rsi, qword ptr [r14 + 0xe0]
22429d mov      rbp, qword ptr [r14 + 0xd0]
2242a4 mov      r11, qword ptr [r14 + 0x130]
2242ab movzx    edi, byte ptr [r14 + 0xe8]
2242b3 mov      rax, r11
2242b6 movzx    ecx, byte ptr [r14 + 0x168]
2242be mov      rbx, qword ptr [r14 + 0xd8]
2242c5 mov      r8, qword ptr [r14 + 0x1b8]
2242cc mov      r9, qword ptr [r14 + 0x1b0]
2242d3 imul     rcx, rsi
2242d7 lea      r10, [rbx + rbx*8]
2242db xor      rcx, rbp
2242de xor      rcx, r10
2242e1 xor      rax, rcx
2242e4 sub      r11, rcx
2242e7 test     dil, dil
2242ea cmove    r11, rax
2242ee imul     r9, r15
2242f2 mov      rcx, r11
2242f5 add      r9, r12
2242f8 mov      rax, r9
2242fb shr      rax, 0x1b
2242ff movzx    edx, al
224302 mov      byte ptr [r14 + 0x168], dl
224309 imul     rdx, rsi
22430d xor      rdx, rbp
224310 xor      rdx, r10
224313 xor      rcx, rdx
224316 test     dil, dil
224319 lea      rax, [r11 + rdx]
22431d cmove    rax, rcx
224321 mov      rcx, r11
224324 mov      qword ptr [r14 + 0x130], rax
22432b lea      rax, [r8 + 2]
22432f mov      qword ptr [r14 + 0x1b8], rax
224336 mov      r8d, 0x54b4
22433c imul     r9, r15
224340 lea      rax, [rbx + rbx*4]
224344 add      rax, rax
224347 add      r9, r12
22434a mov      qword ptr [r14 + 0x1b0], r9
224351 shr      r9, 0x1b
224355 movzx    edx, r9b
224359 mov      byte ptr [r14 + 0x169], dl
224360 imul     rdx, rsi
224364 xor      rdx, rax
224367 xor      rdx, rbp
22436a xor      rcx, rdx
22436d test     dil, dil
224370 lea      rax, [r11 + rdx]
224374 cmove    rax, rcx
224378 mov      rcx, r14
22437b mov      qword ptr [r14 + 0x138], rax
224382 movzx    edx, byte ptr [r14 + 0x4ad]
22438a xor      rdx, qword ptr [r14 + 0x348]
224391 call     0x1401f1520
224396 mov      r8, qword ptr [r14 + 0x348]
22439d movabs   rdi, 0xff51afd7ed558ccd
2243a7 mov      rax, r8
2243aa movabs   rsi, 0xc4ceb9fe1a85ec53
2243b4 xor      rax, qword ptr [r14 + 0x20]
2243b8 mov      rcx, rax
2243bb shr      rcx, 0x21
2243bf xor      rcx, rax
2243c2 imul     rcx, rdi
2243c6 mov      rax, rcx
2243c9 shr      rax, 0x21
2243cd xor      rax, rcx
2243d0 imul     rax, rsi
2243d4 mov      rdx, rax
2243d7 shr      rdx, 0x21
2243db xor      edx, eax
2243dd lea      eax, [rdx + 1]
2243e0 mov      ecx, eax
2243e2 xor      eax, edx
2243e4 imul     ecx, edx
2243e7 not      ecx
2243e9 and      ecx, eax
2243eb test     cl, 1
2243ee je       0x140224457
2243f0 and      r8b, 3
2243f4 cmp      r8b, 1
2243f8 jne      0x140224457
2243fa mov      rax, qword ptr [r14 + 0x1b0]
224401 inc      qword ptr [r14 + 0x1b8]
224408 imul     rax, r15
22440c add      rax, r12
22440f mov      qword ptr [r14 + 0x1b0], rax
224416 shr      rax, 0x1b
22441a movzx    eax, al
22441d mov      byte ptr [r14 + 0x160], al
224424 imul     rax, qword ptr [r14 + 0xe0]
22442c xor      rax, qword ptr [r14 + 0xd8]
224433 xor      rax, qword ptr [r14 + 0xd0]
22443a mov      rcx, rax
22443d add      rax, 0x3dd18f
224443 xor      rcx, 0x3dd18f
22444a cmp      byte ptr [r14 + 0xe8], 0
224452 jmp      0x140224a59
224457 mov      rcx, r14
22445a call     0x1401ee070
22445f mov      ebx, eax
224461 cmp      eax, dword ptr [r14 + 0x1d8]
224468 jb       0x1402244c7
22446a mov      rax, qword ptr [r14 + 0x1b0]
224471 inc      qword ptr [r14 + 0x1b8]
224478 imul     rax, r15
22447c add      rax, r12
22447f mov      qword ptr [r14 + 0x1b0], rax
224486 shr      rax, 0x1b
22448a movzx    eax, al
22448d mov      byte ptr [r14 + 0x160], al
224494 imul     rax, qword ptr [r14 + 0xe0]
22449c xor      rax, qword ptr [r14 + 0xd8]
2244a3 xor      rax, qword ptr [r14 + 0xd0]
2244aa mov      rcx, rax
2244ad add      rax, 0xfe1ab
2244b3 xor      rcx, 0xfe1ab
2244ba cmp      byte ptr [r14 + 0xe8], 0
2244c2 jmp      0x140224a59
2244c7 mov      edx, ebx
2244c9 mov      rcx, r14
2244cc call     0x1401f25b0
2244d1 movsxd   rcx, dword ptr [r14 + 0x11e0]
2244d8 movabs   r8, 0xd6e8feb86659fd93
2244e2 mov      rdx, qword ptr [r14 + 0x20]
2244e6 mov      rax, rbx
2244e9 imul     rax, r8
2244ed imul     rcx, r15
2244f1 rol      rdx, 0x11
2244f5 xor      rax, rdx
2244f8 xor      rcx, qword ptr [r14 + 0x260]
2244ff xor      rax, rcx
224502 mov      rcx, rax
224505 shr      rcx, 0x21
224509 xor      rcx, rax
22450c imul     rcx, rdi
224510 mov      rdx, rcx
224513 shr      rdx, 0x21
224517 xor      rdx, rcx
22451a imul     rdx, rsi
22451e mov      rax, rdx
224521 shr      rax, 0x21
224525 xor      rax, rdx
224528 mov      r10, rax
22452b shr      r10, 0x1d
22452f xor      r10, rax
224532 or       r10, 1
224536 mov      rax, r10
224539 mov      qword ptr [r14 + 0x260], r10
224540 and      eax, 0x3ff
224545 cmp      rax, 0x2c5
22454b jne      0x14022455c
22454d mov      rcx, r14
224550 call     0x1402297e0
224555 mov      r10, qword ptr [r14 + 0x260]
22455c movzx    eax, r10b
224560 and      al, 0x1f
224562 cmp      al, 0x15
224564 jne      0x140224652
22456a movsxd   rcx, dword ptr [r14 + 0x11e0]
224571 mov      rax, qword ptr [r14 + 0x20]
224575 xor      rcx, 0x5a5a
22457c rol      rax, 0x11
224580 imul     rcx, r15
224584 xor      rcx, r10
224587 xor      rcx, rax
22458a movabs   rax, 0x8f70feda99a6026d
224594 xor      rcx, rax
224597 mov      rax, rcx
22459a shr      rax, 0x21
22459e xor      rax, rcx
2245a1 imul     rax, rdi
2245a5 mov      rcx, rax
2245a8 shr      rcx, 0x21
2245ac xor      rcx, rax
2245af imul     rcx, rsi
2245b3 mov      rax, rcx
2245b6 shr      rax, 0x21
2245ba xor      rax, rcx
2245bd mov      r9, rax
2245c0 shr      r9, 0x1d
2245c4 xor      r9, rax
2245c7 or       r9, 1
2245cb mov      rax, r9
2245ce mov      rcx, r9
2245d1 shr      rax, 8
2245d5 and      eax, 3
2245d8 shr      rcx, 0x28
2245dc imul     r8, rax, 0x3e
2245e0 mov      eax, 0x8421085
2245e5 mul      ecx
2245e7 mov      eax, ecx
2245e9 sub      eax, edx
2245eb shr      eax, 1
2245ed add      eax, edx
2245ef shr      eax, 5
2245f2 imul     eax, eax, 0x3e
2245f5 sub      ecx, eax
2245f7 mov      eax, ecx
2245f9 add      r8, rax
2245fc mov      rax, qword ptr [r14 + 0x4b8]
224603 movsxd   rcx, dword ptr [rax + r8*4]
224607 movsxd   rax, dword ptr [r14 + 0x4c8]
22460e xor      rcx, rax
224611 add      rcx, qword ptr [r14 + 0x4c0]
224618 xor      rcx, r9
22461b mov      rax, rcx
22461e shr      rax, 0x21
224622 xor      rax, rcx
224625 imul     rax, rdi
224629 mov      rcx, rax
22462c shr      rcx, 0x21
224630 xor      rcx, rax
224633 imul     rcx, rsi
224637 mov      rax, rcx
22463a shr      rax, 0x21
22463e xor      rax, rcx
224641 xor      rax, r10
224644 inc      qword ptr [r14 + 0x268]
22464b mov      qword ptr [r14 + 0x260], rax
224652 inc      dword ptr [r14 + 0x200]
224659 mov      eax, dword ptr [r14 + 0x200]
224660 cmp      eax, dword ptr [r14 + 0x1fc]
224667 jb       0x14022467c
224669 mov      rcx, r14
22466c mov      dword ptr [r14 + 0x200], 0
224677 call     0x1401ef7c0
22467c mov      r8d, ebx
22467f mov      edx, ebx
224681 mov      rcx, r14
224684 call     0x1401f0660
224689 inc      qword ptr [r14 + 0x1b8]
224690 mov      rcx, rbx
224693 mov      r9, qword ptr [r14 + 0x1b0]
22469a mov      rbp, r12
22469d mov      r10, qword ptr [r14 + 0x1b8]
2246a4 imul     r9, r15
2246a8 add      r9, r12
2246ab lea      r12d, [rbx + 1]
2246af mov      qword ptr [r14 + 0x1b0], r9
2246b6 mov      rax, r9
2246b9 shr      rax, 0x1b
2246bd movzx    edx, al
2246c0 mov      byte ptr [r14 + 0x168], dl
2246c7 mov      rdi, qword ptr [r14 + 0xe0]
2246ce mov      r11, qword ptr [r14 + 0xd8]
2246d5 mov      rsi, qword ptr [r14 + 0xd0]
2246dc movzx    r15d, byte ptr [r14 + 0xe8]
2246e4 imul     rdx, rdi
2246e8 lea      rax, [r11 + r11*8]
2246ec xor      rdx, rax
2246ef xor      rdx, rsi
2246f2 xor      rcx, rdx
2246f5 test     r15b, r15b
2246f8 lea      rax, [rbx + rdx]
2246fc cmove    rax, rcx
224700 inc      r10
224703 mov      qword ptr [r14 + 0x130], rax
22470a mov      rcx, qword ptr [r14 + 0x1d0]
224711 mov      rax, qword ptr [r14 + 0x48]
224715 mov      qword ptr [rsp + 0x70], r10
22471a movzx    r8d, byte ptr [rcx + rbx]
22471f xor      r8b, byte ptr [rax + rbx]
224723 movabs   rax, 0x9e3779b97f4a7c15
22472d imul     r9, rax
224731 mov      qword ptr [r14 + 0x1b8], r10
224738 movabs   rbx, 0xff51afd7ed558ccd
224742 add      r9, rbp
224745 mov      rax, r9
224748 shr      rax, 0x1b
22474c movzx    edx, al
22474f lea      rax, [r11 + r11]
224753 mov      byte ptr [r14 + 0x161], dl
22475a imul     rdx, rdi
22475e xor      rdx, rax
224761 xor      rdx, rsi
224764 mov      rcx, rdx
224767 xor      rcx, r12
22476a test     r15b, r15b
22476d lea      rax, [rdx + r12]
224771 cmove    rax, rcx
224775 mov      qword ptr [r14 + 0xf8], rax
22477c movsxd   rdx, dword ptr [r14 + 0x11e0]
224783 mov      r10, qword ptr [r14 + 0x20]
224787 mov      rcx, rdx
22478a xor      rcx, qword ptr [r14 + 0x350]
224791 xor      rcx, r10
224794 xor      rcx, r12
224797 xor      rcx, qword ptr [r14 + 0x348]
22479e mov      rax, rcx
2247a1 shr      rax, 0x21
2247a5 xor      rax, rcx
2247a8 imul     rax, rbx
2247ac mov      rcx, rax
2247af shr      rcx, 0x21
2247b3 xor      rcx, rax
2247b6 movabs   rax, 0xc4ceb9fe1a85ec53
2247c0 imul     rcx, rax
2247c4 movzx    eax, r8b
2247c8 mov      rbx, rcx
2247cb xor      rax, 0xdd
2247d1 shr      rbx, 0x21
2247d5 xor      rbx, rcx
2247d8 lea      rcx, [rip - 0x2247df]
2247df mov      qword ptr [r14 + 0x28], rbx
2247e3 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
2247eb xor      bpl, 0x63
2247ef inc      edx
2247f1 mov      dword ptr [r14 + 0x11e0], edx
2247f8 movabs   r8, 0xff51afd7ed558ccd
224802 test     dl, 0x1f
224805 jne      0x14022484b
224807 movsxd   rax, edx
22480a xor      rax, r10
22480d xor      rax, qword ptr [r14 + 0x348]
224814 mov      rcx, rax
224817 shr      rcx, 0x21
22481b xor      rcx, rax
22481e movabs   rax, 0xc4ceb9fe1a85ec53
224828 imul     rcx, r8
22482c mov      rdx, rcx
22482f shr      rdx, 0x21
224833 xor      rdx, rcx
224836 imul     rdx, rax
22483a mov      rax, rdx
22483d shr      rax, 0x21
224841 xor      rax, rdx
224844 mov      qword ptr [r14 + 0x348], rax
22484b movzx    edx, bpl
22484f xor      r10, rdx
224852 mov      byte ptr [r14 + 0x4ad], bpl
224859 xor      r10, r12
22485c movabs   r12, 0xc4ceb9fe1a85ec53
224866 mov      rax, r10
224869 shr      rax, 0x21
22486d xor      rax, r10
224870 movabs   r10, 0x9e3779b97f4a7c15
22487a imul     rax, r8
22487e imul     rdx, r10
224882 imul     r9, r10
224886 mov      rcx, rax
224889 shr      rcx, 0x21
22488d xor      rcx, rax
224890 imul     rcx, r12
224894 mov      rax, rcx
224897 shr      rax, 0x21
22489b xor      rax, rcx
22489e mov      ecx, dword ptr [r14 + 0x1178]
2248a5 mov      qword ptr [r14 + 0x20], rax
2248a9 movabs   rax, 0xd6e8feb86659fd93
2248b3 imul     rcx, rax
2248b7 xor      rcx, rdx
2248ba xor      rcx, rbx
2248bd movabs   rbx, 0x2545f4914f6cdd1d
2248c7 mov      rax, rcx
2248ca add      r9, rbx
2248cd shr      rax, 0x21
2248d1 xor      rax, rcx
2248d4 imul     rax, r8
2248d8 mov      rdx, rax
2248db shr      rdx, 0x21
2248df xor      rdx, rax
2248e2 mov      rax, qword ptr [rsp + 0x70]
2248e7 imul     rdx, r12
2248eb shr      rdx, 0x21
2248ef and      edx, 3
2248f2 inc      rax
2248f5 mov      qword ptr [r14 + 0x1b8], rax
2248fc cmp      bpl, 0x3e
224900 jae      0x14022499d
224906 inc      qword ptr [r14 + 0x11a0]
22490d lea      rax, [rip - 0x224914]
224914 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
22491c mov      qword ptr [r14 + 0x1b0], r9
224923 shr      r9, 0x1b
224927 movzx    eax, r9b
22492b mov      byte ptr [r14 + 0x160], al
224932 imul     rax, rdi
224936 mov      ebx, edx
224938 xor      rax, rsi
22493b xor      rax, r11
22493e mov      rcx, rax
224941 add      rax, r8
224944 xor      rcx, r8
224947 movzx    r8d, bpl
22494b test     r15b, r15b
22494e cmove    rax, rcx
224952 mov      rcx, r14
224955 mov      qword ptr [r14 + 0xf0], rax
22495c call     0x1401f1f50
224961 mov      r8, qword ptr [rsp + 0x80]
224969 lea      edx, [r13 - 1]
22496d mov      eax, eax
22496f imul     rcx, rbx, 0x3e
224973 add      rcx, rax
224976 mov      rax, qword ptr [r14 + 0x4b8]
22497d movsxd   r9, dword ptr [rax + rcx*4]
224981 mov      rcx, r14
224984 movsxd   rax, dword ptr [r14 + 0x4c8]
22498b xor      r9, rax
22498e add      r9, qword ptr [r14 + 0x4c0]
224995 call     r9
224998 jmp      0x140224a64
22499d inc      dword ptr [r14 + 0x11a8]
2249a4 mov      rax, r9
2249a7 shr      rax, 0x1b
2249ab movzx    ecx, al
2249ae lea      rax, [r11*4]
2249b6 mov      byte ptr [r14 + 0x163], cl
2249bd imul     rcx, rdi
2249c1 imul     r9, r10
2249c5 xor      rcx, rax
2249c8 xor      rcx, rsi
2249cb mov      qword ptr [r14 + 0x108], rcx
2249d2 mov      r8, qword ptr [r14 + 0x1b8]
2249d9 add      r9, rbx
2249dc mov      rax, r9
2249df shr      rax, 0x1b
2249e3 movzx    edx, al
2249e6 mov      byte ptr [r14 + 0x16a], dl
2249ed imul     rax, r11, 0xb
2249f1 imul     rdx, rdi
2249f5 xor      rdx, rax
2249f8 xor      rdx, rsi
2249fb mov      rcx, rdx
2249fe xor      rcx, 1
224a02 test     r15b, r15b
224a05 lea      rax, [rdx + 1]
224a09 cmove    rax, rcx
224a0d mov      qword ptr [r14 + 0x140], rax
224a14 lea      rax, [r8 + 2]
224a18 mov      qword ptr [r14 + 0x1b8], rax
224a1f imul     r9, r10
224a23 add      r9, rbx
224a26 mov      qword ptr [r14 + 0x1b0], r9
224a2d shr      r9, 0x1b
224a31 movzx    eax, r9b
224a35 mov      byte ptr [r14 + 0x160], al
224a3c imul     rax, rdi
224a40 xor      rax, rsi
224a43 xor      rax, r11
224a46 mov      rcx, rax
224a49 add      rax, 0xfe1ab
224a4f xor      rcx, 0xfe1ab
224a56 test     r15b, r15b
224a59 cmove    rax, rcx
224a5d mov      qword ptr [r14 + 0xf0], rax
224a64 mov      r12, qword ptr [rsp + 0x78]
224a69 mov      r15, qword ptr [rsp + 0x30]
224a6e add      rsp, 0x38
224a72 pop      r14
224a74 pop      r13
224a76 pop      rdi
224a77 pop      rsi
224a78 pop      rbp
224a79 pop      rbx
224a7a ret      
224a7b mov      edx, 0x54485254
224a80 mov      rcx, r14
224a83 call     0x1401ed830
224a88 int3     
224a89 mov      edx, 0x43414e59
224a8e mov      rcx, r14
224a91 call     0x1401ed830
224a96 int3     
