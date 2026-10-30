2120e0 mov      qword ptr [rsp + 0x18], r8
2120e5 push     rbx
2120e6 push     rbp
2120e7 push     rdi
2120e8 push     r13
2120ea push     r14
2120ec sub      rsp, 0x30
2120f0 movsxd   rax, dword ptr [rcx + 0x11e0]
2120f7 mov      r14, rcx
2120fa mov      r13d, edx
2120fd movabs   rcx, 0x1985cdc6e9f70cf4
212107 imul     rax, rcx
21210b movabs   rcx, 0xbbdc470d682988cb
212115 movabs   rbp, 0xff51afd7ed558ccd
21211f xor      rax, qword ptr [r14 + 0x28]
212123 mov      rdi, r8
212126 mov      qword ptr [rsp + 0x60], rax
21212b mov      rax, qword ptr [rsp + 0x60]
212130 movsxd   rax, dword ptr [r14 + 0x11e0]
212137 imul     rax, rcx
21213b movabs   rcx, 0x5d14d953eb6204de
212145 xor      rax, qword ptr [r14 + 0x28]
212149 mov      qword ptr [rsp + 0x60], rax
21214e mov      rax, qword ptr [rsp + 0x60]
212153 movsxd   rax, dword ptr [r14 + 0x11e0]
21215a imul     rax, rcx
21215e movabs   rcx, 0x29ae458ae3ef1cf0
212168 xor      rax, qword ptr [r14 + 0x28]
21216c mov      qword ptr [rsp + 0x60], rax
212171 mov      rax, qword ptr [rsp + 0x60]
212176 mov      rax, qword ptr [r14 + 0x2f0]
21217d xor      rax, rcx
212180 mov      rcx, rax
212183 shr      rcx, 0x21
212187 xor      rcx, rax
21218a movabs   rax, 0xc4ceb9fe1a85ec53
212194 imul     rcx, rbp
212198 mov      rdx, rcx
21219b shr      rdx, 0x21
21219f xor      rdx, rcx
2121a2 mov      rcx, r14
2121a5 imul     rdx, rax
2121a9 mov      rax, rdx
2121ac shr      rax, 0x21
2121b0 xor      rdx, rax
2121b3 mov      rax, qword ptr [r14 + 0x2f0]
2121ba shr      rax, 7
2121be add      rax, rdx
2121c1 mov      qword ptr [r14 + 0x2f0], rax
2121c8 call     0x1401f1e80
2121cd mov      ebx, eax
2121cf mov      rcx, r14
2121d2 and      ebx, 0x3f
2121d5 call     0x1401ee940
2121da mov      ecx, 0x40
2121df sub      ecx, ebx
2121e1 shl      rax, cl
2121e4 sar      rax, cl
2121e7 mov      rcx, r14
2121ea mov      rdx, rax
2121ed call     0x1401ee820
2121f2 mov      rax, qword ptr [r14 + 0x2f0]
2121f9 test     r13d, r13d
2121fc jns      0x140212d3a
212202 cmp      qword ptr [r14 + 0x11b8], rdi
212209 jne      0x140212d48
21220f movsxd   rax, dword ptr [r14 + 0x11e0]
212216 movabs   rcx, 0x389edfb4b4b914bd
212220 imul     rax, rcx
212224 mov      rcx, r14
212227 xor      rax, qword ptr [r14 + 0x28]
21222b mov      qword ptr [rsp + 0x60], rax
212230 mov      rax, qword ptr [rsp + 0x60]
212235 call     0x1401ee450
21223a test     eax, eax
21223c jne      0x140212d2e
212242 cmp      dword ptr [r14 + 0xad0], eax
212249 jne      0x140212d2e
21224f mov      r8, qword ptr [r14 + 0xf0]
212256 movzx    ecx, byte ptr [r14 + 0x160]
21225e mov      rax, r8
212261 mov      r10, qword ptr [r14 + 0xe0]
212268 mov      rbx, qword ptr [r14 + 0xd0]
21226f mov      r11, qword ptr [r14 + 0xd8]
212276 movzx    edi, byte ptr [r14 + 0xe8]
21227e mov      r9, qword ptr [r14 + 0x1b0]
212285 imul     rcx, r10
212289 mov      qword ptr [rsp + 0x68], rsi
21228e mov      rsi, qword ptr [r14 + 0x1b8]
212295 xor      rcx, rbx
212298 xor      rcx, r11
21229b mov      qword ptr [rsp + 0x28], r12
2122a0 xor      rax, rcx
2122a3 mov      qword ptr [rsp + 0x20], r15
2122a8 sub      r8, rcx
2122ab movabs   r15, 0x9e3779b97f4a7c15
2122b5 test     dil, dil
2122b8 movabs   r12, 0x2545f4914f6cdd1d
2122c2 cmove    r8, rax
2122c6 inc      rsi
2122c9 imul     r9, r15
2122cd mov      qword ptr [r14 + 0x1b8], rsi
2122d4 mov      rcx, r8
2122d7 add      r9, r12
2122da mov      qword ptr [r14 + 0x1b0], r9
2122e1 mov      rax, r9
2122e4 shr      rax, 0x1b
2122e8 movzx    edx, al
2122eb mov      byte ptr [r14 + 0x160], dl
2122f2 imul     rdx, r10
2122f6 xor      rdx, rbx
2122f9 xor      rdx, r11
2122fc xor      rcx, rdx
2122ff test     dil, dil
212302 lea      rax, [r8 + rdx]
212306 cmove    rax, rcx
21230a mov      qword ptr [r14 + 0xf0], rax
212311 cmp      r8d, 0x48cad
212318 jne      0x140212d1f
21231e mov      eax, r13d
212321 btr      eax, 0x1f
212325 cmp      eax, 2
212328 jae      0x140212374
21232a imul     r9, r15
21232e lea      rax, [rsi + 1]
212332 mov      qword ptr [r14 + 0x1b8], rax
212339 add      r9, r12
21233c mov      qword ptr [r14 + 0x1b0], r9
212343 shr      r9, 0x1b
212347 movzx    eax, r9b
21234b mov      byte ptr [r14 + 0x160], al
212352 imul     rax, r10
212356 xor      rax, rbx
212359 xor      rax, r11
21235c mov      rcx, rax
21235f add      rax, 0xf6105
212365 xor      rcx, 0xf6105
21236c test     dil, dil
21236f jmp      0x140212d14
212374 mov      rcx, r14
212377 call     0x1401ee070
21237c movzx    ecx, byte ptr [r14 + 0x4ad]
212384 movabs   r8, 0xc4ceb9fe1a85ec53
21238e mov      r11, qword ptr [r14 + 0xe0]
212395 mov      r10, qword ptr [r14 + 0xd0]
21239c movzx    r9d, byte ptr [r14 + 0xe8]
2123a4 mov      eax, eax
2123a6 xor      rcx, rax
2123a9 xor      rcx, qword ptr [r14 + 0x11e8]
2123b0 mov      rax, rcx
2123b3 shr      rax, 0x21
2123b7 xor      rax, rcx
2123ba imul     rax, rbp
2123be mov      rcx, rax
2123c1 shr      rcx, 0x21
2123c5 xor      rcx, rax
2123c8 imul     rcx, r8
2123cc mov      rdx, rcx
2123cf shr      rdx, 0x21
2123d3 xor      rdx, rcx
2123d6 mov      qword ptr [r14 + 0x11e8], rdx
2123dd xor      rdx, qword ptr [r14 + 0x20]
2123e1 xor      rdx, qword ptr [r14 + 0x28]
2123e5 mov      rax, rdx
2123e8 shr      rax, 0x21
2123ec xor      rax, rdx
2123ef imul     rax, rbp
2123f3 mov      rcx, rax
2123f6 shr      rcx, 0x21
2123fa xor      rcx, rax
2123fd imul     rcx, r8
212401 mov      rax, rcx
212404 shr      rax, 0x21
212408 xor      rax, rcx
21240b mov      qword ptr [r14 + 0x20], rax
21240f mov      rdx, qword ptr [r14 + 0x138]
212416 movzx    ecx, byte ptr [r14 + 0x169]
21241e mov      rax, qword ptr [r14 + 0xd8]
212425 imul     rcx, r11
212429 lea      rbx, [rax + rax*4]
21242d mov      rax, rdx
212430 add      rbx, rbx
212433 xor      rcx, rbx
212436 xor      rcx, r10
212439 xor      rax, rcx
21243c sub      rdx, rcx
21243f test     r9b, r9b
212442 cmove    rdx, rax
212446 mov      rax, qword ptr [r14 + 0x1b0]
21244d inc      qword ptr [r14 + 0x1b8]
212454 imul     rax, r15
212458 add      rax, r12
21245b mov      qword ptr [r14 + 0x1b0], rax
212462 shr      rax, 0x1b
212466 movzx    r8d, al
21246a mov      byte ptr [r14 + 0x169], r8b
212471 imul     r8, r11
212475 xor      r8, rbx
212478 xor      r8, r10
21247b mov      rcx, r8
21247e xor      rcx, rdx
212481 test     r9b, r9b
212484 lea      rax, [r8 + rdx]
212488 cmove    rax, rcx
21248c mov      rcx, r14
21248f mov      qword ptr [r14 + 0x138], rax
212496 call     0x1401f0910
21249b mov      rax, qword ptr [r14 + 0xd8]
2124a2 mov      rdx, qword ptr [r14 + 0x130]
2124a9 mov      r10, qword ptr [r14 + 0xe0]
2124b0 movzx    ecx, byte ptr [r14 + 0x168]
2124b8 mov      rbx, qword ptr [r14 + 0xd0]
2124bf lea      r11, [rax + rax*8]
2124c3 movzx    r9d, byte ptr [r14 + 0xe8]
2124cb mov      rax, rdx
2124ce imul     rcx, r10
2124d2 xor      rcx, r11
2124d5 xor      rcx, rbx
2124d8 xor      rax, rcx
2124db sub      rdx, rcx
2124de test     r9b, r9b
2124e1 cmove    rdx, rax
2124e5 mov      rax, qword ptr [r14 + 0x1b0]
2124ec inc      qword ptr [r14 + 0x1b8]
2124f3 mov      rcx, rdx
2124f6 imul     rax, r15
2124fa add      rax, r12
2124fd mov      qword ptr [r14 + 0x1b0], rax
212504 shr      rax, 0x1b
212508 movzx    r8d, al
21250c mov      byte ptr [r14 + 0x168], r8b
212513 imul     r8, r10
212517 xor      r8, r11
21251a xor      r8, rbx
21251d xor      rcx, r8
212520 test     r9b, r9b
212523 lea      rax, [rdx + r8]
212527 cmove    rax, rcx
21252b mov      rcx, r14
21252e mov      qword ptr [r14 + 0x130], rax
212535 call     0x1401f0910
21253a mov      rcx, r14
21253d call     0x1401ee070
212542 cmp      eax, dword ptr [r14 + 0x1d8]
212549 jae      0x140212555
21254b mov      edx, eax
21254d mov      rcx, r14
212550 call     0x1401f0910
212555 mov      rsi, qword ptr [r14 + 0xe0]
21255c mov      rbp, qword ptr [r14 + 0xd0]
212563 mov      r11, qword ptr [r14 + 0x130]
21256a movzx    edi, byte ptr [r14 + 0xe8]
212572 mov      rax, r11
212575 movzx    ecx, byte ptr [r14 + 0x168]
21257d mov      rbx, qword ptr [r14 + 0xd8]
212584 mov      r8, qword ptr [r14 + 0x1b8]
21258b mov      r10, qword ptr [r14 + 0x1b0]
212592 imul     rcx, rsi
212596 lea      r9, [rbx + rbx*8]
21259a xor      rcx, r9
21259d xor      rcx, rbp
2125a0 xor      rax, rcx
2125a3 sub      r11, rcx
2125a6 test     dil, dil
2125a9 cmove    r11, rax
2125ad imul     r10, r15
2125b1 mov      rcx, r11
2125b4 add      r10, r12
2125b7 mov      rax, r10
2125ba shr      rax, 0x1b
2125be movzx    edx, al
2125c1 mov      byte ptr [r14 + 0x168], dl
2125c8 imul     rdx, rsi
2125cc xor      rdx, r9
2125cf xor      rdx, rbp
2125d2 xor      rcx, rdx
2125d5 test     dil, dil
2125d8 lea      rax, [r11 + rdx]
2125dc cmove    rax, rcx
2125e0 mov      rcx, r11
2125e3 mov      qword ptr [r14 + 0x130], rax
2125ea lea      rax, [r8 + 2]
2125ee mov      qword ptr [r14 + 0x1b8], rax
2125f5 mov      r8d, 0x2a73
2125fb imul     r10, r15
2125ff lea      rax, [rbx + rbx*4]
212603 add      rax, rax
212606 add      r10, r12
212609 mov      qword ptr [r14 + 0x1b0], r10
212610 shr      r10, 0x1b
212614 movzx    edx, r10b
212618 mov      byte ptr [r14 + 0x169], dl
21261f imul     rdx, rsi
212623 xor      rdx, rax
212626 xor      rdx, rbp
212629 xor      rcx, rdx
21262c test     dil, dil
21262f lea      rax, [r11 + rdx]
212633 cmove    rax, rcx
212637 mov      rcx, r14
21263a mov      qword ptr [r14 + 0x138], rax
212641 movzx    edx, byte ptr [r14 + 0x4ad]
212649 xor      rdx, qword ptr [r14 + 0x348]
212650 call     0x1401f1520
212655 mov      r8, qword ptr [r14 + 0x348]
21265c movabs   rdi, 0xff51afd7ed558ccd
212666 mov      rax, r8
212669 movabs   rsi, 0xc4ceb9fe1a85ec53
212673 xor      rax, qword ptr [r14 + 0x20]
212677 mov      rcx, rax
21267a shr      rcx, 0x21
21267e xor      rcx, rax
212681 imul     rcx, rdi
212685 mov      rax, rcx
212688 shr      rax, 0x21
21268c xor      rax, rcx
21268f imul     rax, rsi
212693 mov      rdx, rax
212696 shr      rdx, 0x21
21269a xor      edx, eax
21269c lea      eax, [rdx + 1]
21269f mov      ecx, eax
2126a1 xor      eax, edx
2126a3 imul     ecx, edx
2126a6 not      ecx
2126a8 and      ecx, eax
2126aa test     cl, 1
2126ad je       0x140212716
2126af and      r8b, 3
2126b3 cmp      r8b, 1
2126b7 jne      0x140212716
2126b9 mov      rax, qword ptr [r14 + 0x1b0]
2126c0 inc      qword ptr [r14 + 0x1b8]
2126c7 imul     rax, r15
2126cb add      rax, r12
2126ce mov      qword ptr [r14 + 0x1b0], rax
2126d5 shr      rax, 0x1b
2126d9 movzx    eax, al
2126dc mov      byte ptr [r14 + 0x160], al
2126e3 imul     rax, qword ptr [r14 + 0xe0]
2126eb xor      rax, qword ptr [r14 + 0xd8]
2126f2 xor      rax, qword ptr [r14 + 0xd0]
2126f9 mov      rcx, rax
2126fc add      rax, 0x116fdf
212702 xor      rcx, 0x116fdf
212709 cmp      byte ptr [r14 + 0xe8], 0
212711 jmp      0x140212d14
212716 mov      rcx, r14
212719 call     0x1401ee070
21271e mov      ebx, eax
212720 cmp      eax, dword ptr [r14 + 0x1d8]
212727 jb       0x140212786
212729 mov      rax, qword ptr [r14 + 0x1b0]
212730 inc      qword ptr [r14 + 0x1b8]
212737 imul     rax, r15
21273b add      rax, r12
21273e mov      qword ptr [r14 + 0x1b0], rax
212745 shr      rax, 0x1b
212749 movzx    eax, al
21274c mov      byte ptr [r14 + 0x160], al
212753 imul     rax, qword ptr [r14 + 0xe0]
21275b xor      rax, qword ptr [r14 + 0xd8]
212762 xor      rax, qword ptr [r14 + 0xd0]
212769 mov      rcx, rax
21276c add      rax, 0xfe1ab
212772 xor      rcx, 0xfe1ab
212779 cmp      byte ptr [r14 + 0xe8], 0
212781 jmp      0x140212d14
212786 mov      edx, ebx
212788 mov      rcx, r14
21278b call     0x1401f25b0
212790 movsxd   rcx, dword ptr [r14 + 0x11e0]
212797 movabs   r8, 0xd6e8feb86659fd93
2127a1 mov      rdx, qword ptr [r14 + 0x20]
2127a5 mov      rax, rbx
2127a8 imul     rax, r8
2127ac imul     rcx, r15
2127b0 rol      rdx, 0x11
2127b4 xor      rax, rdx
2127b7 xor      rcx, qword ptr [r14 + 0x260]
2127be xor      rax, rcx
2127c1 mov      rcx, rax
2127c4 shr      rcx, 0x21
2127c8 xor      rcx, rax
2127cb imul     rcx, rdi
2127cf mov      rdx, rcx
2127d2 shr      rdx, 0x21
2127d6 xor      rdx, rcx
2127d9 imul     rdx, rsi
2127dd mov      rax, rdx
2127e0 shr      rax, 0x21
2127e4 xor      rax, rdx
2127e7 mov      r10, rax
2127ea shr      r10, 0x1d
2127ee xor      r10, rax
2127f1 or       r10, 1
2127f5 mov      rax, r10
2127f8 mov      qword ptr [r14 + 0x260], r10
2127ff and      eax, 0x3ff
212804 cmp      rax, 0x2c5
21280a jne      0x14021281b
21280c mov      rcx, r14
21280f call     0x1402297e0
212814 mov      r10, qword ptr [r14 + 0x260]
21281b movzx    eax, r10b
21281f and      al, 0x1f
212821 cmp      al, 0x15
212823 jne      0x140212910
212829 movsxd   rax, dword ptr [r14 + 0x11e0]
212830 xor      rax, 0x5a5a
212836 mov      rcx, qword ptr [r14 + 0x20]
21283a imul     rax, r15
21283e rol      rcx, 0x11
212842 xor      rax, r10
212845 xor      rcx, rax
212848 movabs   rax, 0x8f70feda99a6026d
212852 xor      rcx, rax
212855 mov      rax, rcx
212858 shr      rax, 0x21
21285c xor      rax, rcx
21285f imul     rax, rdi
212863 mov      rcx, rax
212866 shr      rcx, 0x21
21286a xor      rcx, rax
21286d imul     rcx, rsi
212871 mov      rax, rcx
212874 shr      rax, 0x21
212878 xor      rax, rcx
21287b mov      r9, rax
21287e shr      r9, 0x1d
212882 xor      r9, rax
212885 or       r9, 1
212889 mov      rax, r9
21288c mov      rcx, r9
21288f shr      rax, 8
212893 and      eax, 3
212896 shr      rcx, 0x28
21289a imul     r8, rax, 0x3e
21289e mov      eax, 0x8421085
2128a3 mul      ecx
2128a5 mov      eax, ecx
2128a7 sub      eax, edx
2128a9 shr      eax, 1
2128ab add      eax, edx
2128ad shr      eax, 5
2128b0 imul     eax, eax, 0x3e
2128b3 sub      ecx, eax
2128b5 mov      eax, ecx
2128b7 add      r8, rax
2128ba mov      rax, qword ptr [r14 + 0x4b8]
2128c1 movsxd   rcx, dword ptr [rax + r8*4]
2128c5 movsxd   rax, dword ptr [r14 + 0x4c8]
2128cc xor      rcx, rax
2128cf add      rcx, qword ptr [r14 + 0x4c0]
2128d6 xor      rcx, r9
2128d9 mov      rax, rcx
2128dc shr      rax, 0x21
2128e0 xor      rax, rcx
2128e3 imul     rax, rdi
2128e7 mov      rcx, rax
2128ea shr      rcx, 0x21
2128ee xor      rcx, rax
2128f1 imul     rcx, rsi
2128f5 mov      rax, rcx
2128f8 shr      rax, 0x21
2128fc xor      rax, rcx
2128ff xor      rax, r10
212902 inc      qword ptr [r14 + 0x268]
212909 mov      qword ptr [r14 + 0x260], rax
212910 inc      dword ptr [r14 + 0x200]
212917 mov      eax, dword ptr [r14 + 0x200]
21291e cmp      eax, dword ptr [r14 + 0x1fc]
212925 jb       0x14021293a
212927 mov      rcx, r14
21292a mov      dword ptr [r14 + 0x200], 0
212935 call     0x1401ef7c0
21293a mov      r8d, ebx
21293d mov      edx, ebx
21293f mov      rcx, r14
212942 call     0x1401f0660
212947 inc      qword ptr [r14 + 0x1b8]
21294e mov      rcx, rbx
212951 mov      r9, qword ptr [r14 + 0x1b0]
212958 mov      rbp, r12
21295b mov      r10, qword ptr [r14 + 0x1b8]
212962 imul     r9, r15
212966 add      r9, r12
212969 lea      r12d, [rbx + 1]
21296d mov      qword ptr [r14 + 0x1b0], r9
212974 mov      rax, r9
212977 shr      rax, 0x1b
21297b movzx    edx, al
21297e mov      byte ptr [r14 + 0x168], dl
212985 mov      rdi, qword ptr [r14 + 0xe0]
21298c mov      r11, qword ptr [r14 + 0xd8]
212993 mov      rsi, qword ptr [r14 + 0xd0]
21299a movzx    r15d, byte ptr [r14 + 0xe8]
2129a2 imul     rdx, rdi
2129a6 lea      rax, [r11 + r11*8]
2129aa xor      rdx, rax
2129ad xor      rdx, rsi
2129b0 xor      rcx, rdx
2129b3 test     r15b, r15b
2129b6 lea      rax, [rbx + rdx]
2129ba cmove    rax, rcx
2129be inc      r10
2129c1 mov      qword ptr [r14 + 0x130], rax
2129c8 mov      rcx, qword ptr [r14 + 0x1d0]
2129cf mov      rax, qword ptr [r14 + 0x48]
2129d3 mov      qword ptr [rsp + 0x60], r10
2129d8 movzx    r8d, byte ptr [rcx + rbx]
2129dd xor      r8b, byte ptr [rax + rbx]
2129e1 movabs   rax, 0x9e3779b97f4a7c15
2129eb imul     r9, rax
2129ef mov      qword ptr [r14 + 0x1b8], r10
2129f6 add      r9, rbp
2129f9 mov      rax, r9
2129fc shr      rax, 0x1b
212a00 movzx    edx, al
212a03 lea      rax, [r11 + r11]
212a07 mov      byte ptr [r14 + 0x161], dl
212a0e imul     rdx, rdi
212a12 xor      rdx, rax
212a15 xor      rdx, rsi
212a18 mov      rcx, rdx
212a1b xor      rcx, r12
212a1e test     r15b, r15b
212a21 lea      rax, [rdx + r12]
212a25 cmove    rax, rcx
212a29 mov      qword ptr [r14 + 0xf8], rax
212a30 movsxd   rdx, dword ptr [r14 + 0x11e0]
212a37 mov      r10, qword ptr [r14 + 0x20]
212a3b mov      rcx, rdx
212a3e xor      rcx, qword ptr [r14 + 0x350]
212a45 xor      rcx, r10
212a48 xor      rcx, r12
212a4b xor      rcx, qword ptr [r14 + 0x348]
212a52 mov      rax, rcx
212a55 shr      rax, 0x21
212a59 xor      rax, rcx
212a5c movabs   rcx, 0xff51afd7ed558ccd
212a66 imul     rax, rcx
212a6a mov      rcx, rax
212a6d shr      rcx, 0x21
212a71 xor      rcx, rax
212a74 movabs   rax, 0xc4ceb9fe1a85ec53
212a7e imul     rcx, rax
212a82 movzx    eax, r8b
212a86 mov      rbx, rcx
212a89 xor      rax, 0xdd
212a8f shr      rbx, 0x21
212a93 xor      rbx, rcx
212a96 lea      rcx, [rip - 0x212a9d]
212a9d mov      qword ptr [r14 + 0x28], rbx
212aa1 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
212aa9 xor      bpl, 0x63
212aad inc      edx
212aaf mov      dword ptr [r14 + 0x11e0], edx
212ab6 movabs   r8, 0xff51afd7ed558ccd
212ac0 test     dl, 0x1f
212ac3 jne      0x140212b09
212ac5 movsxd   rax, edx
212ac8 xor      rax, r10
212acb xor      rax, qword ptr [r14 + 0x348]
212ad2 mov      rcx, rax
212ad5 shr      rcx, 0x21
212ad9 xor      rcx, rax
212adc movabs   rax, 0xc4ceb9fe1a85ec53
212ae6 imul     rcx, r8
212aea mov      rdx, rcx
212aed shr      rdx, 0x21
212af1 xor      rdx, rcx
212af4 imul     rdx, rax
212af8 mov      rax, rdx
212afb shr      rax, 0x21
212aff xor      rax, rdx
212b02 mov      qword ptr [r14 + 0x348], rax
212b09 movzx    edx, bpl
212b0d xor      r10, rdx
212b10 mov      byte ptr [r14 + 0x4ad], bpl
212b17 xor      r10, r12
212b1a movabs   r12, 0xc4ceb9fe1a85ec53
212b24 mov      rax, r10
212b27 shr      rax, 0x21
212b2b xor      rax, r10
212b2e movabs   r10, 0x9e3779b97f4a7c15
212b38 imul     rax, r8
212b3c imul     rdx, r10
212b40 imul     r9, r10
212b44 mov      rcx, rax
212b47 shr      rcx, 0x21
212b4b xor      rcx, rax
212b4e imul     rcx, r12
212b52 mov      rax, rcx
212b55 shr      rax, 0x21
212b59 xor      rax, rcx
212b5c mov      ecx, dword ptr [r14 + 0x1178]
212b63 mov      qword ptr [r14 + 0x20], rax
212b67 movabs   rax, 0xd6e8feb86659fd93
212b71 imul     rcx, rax
212b75 xor      rcx, rdx
212b78 xor      rcx, rbx
212b7b movabs   rbx, 0x2545f4914f6cdd1d
212b85 mov      rax, rcx
212b88 add      r9, rbx
212b8b shr      rax, 0x21
212b8f xor      rax, rcx
212b92 imul     rax, r8
212b96 mov      rdx, rax
212b99 shr      rdx, 0x21
212b9d xor      rdx, rax
212ba0 mov      rax, qword ptr [rsp + 0x60]
212ba5 imul     rdx, r12
212ba9 shr      rdx, 0x21
212bad and      edx, 3
212bb0 inc      rax
212bb3 mov      qword ptr [r14 + 0x1b8], rax
212bba cmp      bpl, 0x3e
212bbe jae      0x140212c58
212bc4 inc      qword ptr [r14 + 0x11a0]
212bcb lea      rax, [rip - 0x212bd2]
212bd2 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
212bda mov      qword ptr [r14 + 0x1b0], r9
212be1 shr      r9, 0x1b
212be5 movzx    eax, r9b
212be9 mov      byte ptr [r14 + 0x160], al
212bf0 imul     rax, rdi
212bf4 mov      ebx, edx
212bf6 xor      rax, rsi
212bf9 xor      rax, r11
212bfc mov      rcx, rax
212bff add      rax, r8
212c02 xor      rcx, r8
212c05 movzx    r8d, bpl
212c09 test     r15b, r15b
212c0c cmove    rax, rcx
212c10 mov      rcx, r14
212c13 mov      qword ptr [r14 + 0xf0], rax
212c1a call     0x1401f1f50
212c1f mov      r8, qword ptr [rsp + 0x70]
212c24 lea      edx, [r13 - 1]
212c28 mov      eax, eax
212c2a imul     rcx, rbx, 0x3e
212c2e add      rcx, rax
212c31 mov      rax, qword ptr [r14 + 0x4b8]
212c38 movsxd   r9, dword ptr [rax + rcx*4]
212c3c mov      rcx, r14
212c3f movsxd   rax, dword ptr [r14 + 0x4c8]
212c46 xor      r9, rax
212c49 add      r9, qword ptr [r14 + 0x4c0]
212c50 call     r9
212c53 jmp      0x140212d1f
212c58 inc      dword ptr [r14 + 0x11a8]
212c5f mov      rax, r9
212c62 shr      rax, 0x1b
212c66 movzx    ecx, al
212c69 lea      rax, [r11*4]
212c71 mov      byte ptr [r14 + 0x163], cl
212c78 imul     rcx, rdi
212c7c imul     r9, r10
212c80 xor      rcx, rax
212c83 xor      rcx, rsi
212c86 mov      qword ptr [r14 + 0x108], rcx
212c8d mov      r8, qword ptr [r14 + 0x1b8]
212c94 add      r9, rbx
212c97 mov      rax, r9
212c9a shr      rax, 0x1b
212c9e movzx    edx, al
212ca1 mov      byte ptr [r14 + 0x16a], dl
212ca8 imul     rax, r11, 0xb
212cac imul     rdx, rdi
212cb0 xor      rdx, rax
212cb3 xor      rdx, rsi
212cb6 mov      rcx, rdx
212cb9 xor      rcx, 1
212cbd test     r15b, r15b
212cc0 lea      rax, [rdx + 1]
212cc4 cmove    rax, rcx
212cc8 mov      qword ptr [r14 + 0x140], rax
212ccf lea      rax, [r8 + 2]
212cd3 mov      qword ptr [r14 + 0x1b8], rax
212cda imul     r9, r10
212cde add      r9, rbx
212ce1 mov      qword ptr [r14 + 0x1b0], r9
212ce8 shr      r9, 0x1b
212cec movzx    eax, r9b
212cf0 mov      byte ptr [r14 + 0x160], al
212cf7 imul     rax, rdi
212cfb xor      rax, rsi
212cfe xor      rax, r11
212d01 mov      rcx, rax
212d04 add      rax, 0xfe1ab
212d0a xor      rcx, 0xfe1ab
212d11 test     r15b, r15b
212d14 cmove    rax, rcx
212d18 mov      qword ptr [r14 + 0xf0], rax
212d1f mov      r12, qword ptr [rsp + 0x28]
212d24 mov      rsi, qword ptr [rsp + 0x68]
212d29 mov      r15, qword ptr [rsp + 0x20]
212d2e add      rsp, 0x30
212d32 pop      r14
212d34 pop      r13
212d36 pop      rdi
212d37 pop      rbp
212d38 pop      rbx
212d39 ret      
212d3a mov      edx, 0x54485254
212d3f mov      rcx, r14
212d42 call     0x1401ed830
212d47 int3     
212d48 mov      edx, 0x43414e59
212d4d mov      rcx, r14
212d50 call     0x1401ed830
212d55 int3     
