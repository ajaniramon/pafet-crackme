205fa0 push     r12
205fa2 push     r13
205fa4 push     r14
205fa6 sub      rsp, 0x40
205faa movsxd   rax, dword ptr [rcx + 0x11e0]
205fb1 mov      r14, rcx
205fb4 mov      r13d, edx
205fb7 movabs   rcx, 0xacbb8020808b8fca
205fc1 imul     rax, rcx
205fc5 movabs   rcx, 0xee20aeb01550bf5
205fcf mov      r12, r8
205fd2 xor      rax, qword ptr [r14 + 0x28]
205fd6 mov      qword ptr [rsp + 0x60], rax
205fdb mov      rax, qword ptr [rsp + 0x60]
205fe0 movsxd   rax, dword ptr [r14 + 0x11e0]
205fe7 imul     rax, rcx
205feb movabs   rcx, 0xe82a94b5821e87e0
205ff5 xor      rax, qword ptr [r14 + 0x28]
205ff9 mov      qword ptr [rsp + 0x60], rax
205ffe mov      rax, qword ptr [rsp + 0x60]
206003 movsxd   rax, dword ptr [r14 + 0x11e0]
20600a imul     rax, rcx
20600e movabs   rcx, 0x7a58963209d813db
206018 xor      rax, qword ptr [r14 + 0x28]
20601c mov      qword ptr [rsp + 0x60], rax
206021 mov      rax, qword ptr [rsp + 0x60]
206026 mov      rax, qword ptr [r14 + 0x2e8]
20602d add      rax, rcx
206030 mov      rcx, rax
206033 shr      rcx, 0x21
206037 xor      rcx, rax
20603a movabs   rax, 0xff51afd7ed558ccd
206044 imul     rcx, rax
206048 movabs   rax, 0xc4ceb9fe1a85ec53
206052 mov      rdx, rcx
206055 shr      rdx, 0x21
206059 xor      rdx, rcx
20605c mov      rcx, r14
20605f imul     rdx, rax
206063 mov      rax, rdx
206066 shr      rax, 0x21
20606a xor      rdx, rax
20606d mov      rax, qword ptr [r14 + 0x2e8]
206074 or       rdx, 1
206078 xor      rdx, rax
20607b mov      qword ptr [r14 + 0x2e8], rdx
206082 call     0x1401f1d80
206087 mov      edx, eax
206089 mov      rcx, r14
20608c call     0x1401ee650
206091 mov      rdx, rax
206094 mov      rcx, r14
206097 call     0x1401ee820
20609c mov      rax, qword ptr [r14 + 0x2e8]
2060a3 test     r13d, r13d
2060a6 jns      0x140206c47
2060ac cmp      qword ptr [r14 + 0x11b8], r12
2060b3 jne      0x140206c55
2060b9 movsxd   rax, dword ptr [r14 + 0x11e0]
2060c0 movabs   rcx, 0x38bd9a5b064943d1
2060ca imul     rax, rcx
2060ce mov      rcx, r14
2060d1 xor      rax, qword ptr [r14 + 0x28]
2060d5 mov      qword ptr [rsp + 0x60], rax
2060da mov      rax, qword ptr [rsp + 0x60]
2060df call     0x1401ee450
2060e4 test     eax, eax
2060e6 jne      0x140206c3c
2060ec cmp      dword ptr [r14 + 0xad0], eax
2060f3 jne      0x140206c3c
2060f9 mov      r8, qword ptr [r14 + 0xf0]
206100 movzx    ecx, byte ptr [r14 + 0x160]
206108 mov      rax, r8
20610b mov      r10, qword ptr [r14 + 0xe0]
206112 mov      r11, qword ptr [r14 + 0xd8]
206119 mov      r9, qword ptr [r14 + 0x1b0]
206120 imul     rcx, r10
206124 mov      qword ptr [rsp + 0x68], rbx
206129 mov      rbx, qword ptr [r14 + 0xd0]
206130 xor      rcx, rbx
206133 mov      qword ptr [rsp + 0x38], rbp
206138 xor      rcx, r11
20613b mov      qword ptr [rsp + 0x30], rsi
206140 mov      rsi, qword ptr [r14 + 0x1b8]
206147 xor      rax, rcx
20614a sub      r8, rcx
20614d mov      qword ptr [rsp + 0x28], rdi
206152 movzx    edi, byte ptr [r14 + 0xe8]
20615a movabs   rbp, 0x2545f4914f6cdd1d
206164 test     dil, dil
206167 mov      qword ptr [rsp + 0x20], r15
20616c movabs   r15, 0x9e3779b97f4a7c15
206176 cmove    r8, rax
20617a inc      rsi
20617d imul     r9, r15
206181 mov      qword ptr [r14 + 0x1b8], rsi
206188 add      r9, rbp
20618b mov      qword ptr [r14 + 0x1b0], r9
206192 mov      rax, r9
206195 shr      rax, 0x1b
206199 movzx    edx, al
20619c mov      byte ptr [r14 + 0x160], dl
2061a3 imul     rdx, r10
2061a7 xor      rdx, rbx
2061aa xor      rdx, r11
2061ad mov      rcx, rdx
2061b0 xor      rcx, r8
2061b3 test     dil, dil
2061b6 lea      rax, [rdx + r8]
2061ba cmove    rax, rcx
2061be mov      qword ptr [r14 + 0xf0], rax
2061c5 cmp      r8d, 0x338040
2061cc jne      0x140206c23
2061d2 mov      eax, r13d
2061d5 btr      eax, 0x1f
2061d9 cmp      eax, 2
2061dc jae      0x140206228
2061de imul     r9, r15
2061e2 lea      rax, [rsi + 1]
2061e6 mov      qword ptr [r14 + 0x1b8], rax
2061ed add      r9, rbp
2061f0 mov      qword ptr [r14 + 0x1b0], r9
2061f7 shr      r9, 0x1b
2061fb movzx    eax, r9b
2061ff mov      byte ptr [r14 + 0x160], al
206206 imul     rax, r10
20620a xor      rax, rbx
20620d xor      rax, r11
206210 mov      rcx, rax
206213 add      rax, 0x1ad951
206219 xor      rcx, 0x1ad951
206220 test     dil, dil
206223 jmp      0x140206c18
206228 mov      rcx, r14
20622b call     0x1401ee070
206230 movzx    ecx, byte ptr [r14 + 0x4ad]
206238 movabs   rbx, 0xff51afd7ed558ccd
206242 mov      r11, qword ptr [r14 + 0xe0]
206249 movabs   r8, 0xc4ceb9fe1a85ec53
206253 mov      r10, qword ptr [r14 + 0xd0]
20625a movzx    r9d, byte ptr [r14 + 0xe8]
206262 mov      eax, eax
206264 xor      rcx, rax
206267 xor      rcx, qword ptr [r14 + 0x11e8]
20626e mov      rax, rcx
206271 shr      rax, 0x21
206275 xor      rax, rcx
206278 imul     rax, rbx
20627c mov      rcx, rax
20627f shr      rcx, 0x21
206283 xor      rcx, rax
206286 imul     rcx, r8
20628a mov      rdx, rcx
20628d shr      rdx, 0x21
206291 xor      rdx, rcx
206294 mov      qword ptr [r14 + 0x11e8], rdx
20629b xor      rdx, qword ptr [r14 + 0x20]
20629f xor      rdx, qword ptr [r14 + 0x28]
2062a3 mov      rax, rdx
2062a6 shr      rax, 0x21
2062aa xor      rax, rdx
2062ad imul     rax, rbx
2062b1 mov      rcx, rax
2062b4 shr      rcx, 0x21
2062b8 xor      rcx, rax
2062bb imul     rcx, r8
2062bf mov      rax, rcx
2062c2 shr      rax, 0x21
2062c6 xor      rax, rcx
2062c9 mov      qword ptr [r14 + 0x20], rax
2062cd mov      rdx, qword ptr [r14 + 0x138]
2062d4 movzx    ecx, byte ptr [r14 + 0x169]
2062dc mov      rax, qword ptr [r14 + 0xd8]
2062e3 imul     rcx, r11
2062e7 lea      rbx, [rax + rax*4]
2062eb mov      rax, rdx
2062ee add      rbx, rbx
2062f1 xor      rcx, rbx
2062f4 xor      rcx, r10
2062f7 xor      rax, rcx
2062fa sub      rdx, rcx
2062fd test     r9b, r9b
206300 cmove    rdx, rax
206304 mov      rax, qword ptr [r14 + 0x1b0]
20630b inc      qword ptr [r14 + 0x1b8]
206312 imul     rax, r15
206316 add      rax, rbp
206319 mov      qword ptr [r14 + 0x1b0], rax
206320 shr      rax, 0x1b
206324 movzx    r8d, al
206328 mov      byte ptr [r14 + 0x169], r8b
20632f imul     r8, r11
206333 xor      r8, rbx
206336 xor      r8, r10
206339 mov      rcx, r8
20633c xor      rcx, rdx
20633f test     r9b, r9b
206342 lea      rax, [r8 + rdx]
206346 cmove    rax, rcx
20634a mov      rcx, r14
20634d mov      qword ptr [r14 + 0x138], rax
206354 call     0x1401f0910
206359 mov      rax, qword ptr [r14 + 0xd8]
206360 mov      r10, qword ptr [r14 + 0xe0]
206367 movzx    ecx, byte ptr [r14 + 0x168]
20636f mov      rbx, qword ptr [r14 + 0xd0]
206376 mov      rdx, qword ptr [r14 + 0x130]
20637d lea      r11, [rax + rax*8]
206381 movzx    r9d, byte ptr [r14 + 0xe8]
206389 mov      rax, rdx
20638c imul     rcx, r10
206390 xor      rcx, r11
206393 xor      rcx, rbx
206396 xor      rax, rcx
206399 sub      rdx, rcx
20639c test     r9b, r9b
20639f cmove    rdx, rax
2063a3 mov      rax, qword ptr [r14 + 0x1b0]
2063aa inc      qword ptr [r14 + 0x1b8]
2063b1 imul     rax, r15
2063b5 add      rax, rbp
2063b8 mov      qword ptr [r14 + 0x1b0], rax
2063bf shr      rax, 0x1b
2063c3 movzx    r8d, al
2063c7 mov      byte ptr [r14 + 0x168], r8b
2063ce imul     r8, r10
2063d2 xor      r8, r11
2063d5 xor      r8, rbx
2063d8 mov      rcx, r8
2063db xor      rcx, rdx
2063de test     r9b, r9b
2063e1 lea      rax, [r8 + rdx]
2063e5 cmove    rax, rcx
2063e9 mov      rcx, r14
2063ec mov      qword ptr [r14 + 0x130], rax
2063f3 call     0x1401f0910
2063f8 mov      rcx, r14
2063fb call     0x1401ee070
206400 cmp      eax, dword ptr [r14 + 0x1d8]
206407 jae      0x140206413
206409 mov      edx, eax
20640b mov      rcx, r14
20640e call     0x1401f0910
206413 mov      rsi, qword ptr [r14 + 0xe0]
20641a mov      rbp, qword ptr [r14 + 0xd0]
206421 mov      r11, qword ptr [r14 + 0x130]
206428 movzx    edi, byte ptr [r14 + 0xe8]
206430 mov      rax, r11
206433 movzx    ecx, byte ptr [r14 + 0x168]
20643b mov      rbx, qword ptr [r14 + 0xd8]
206442 mov      r8, qword ptr [r14 + 0x1b8]
206449 mov      r10, qword ptr [r14 + 0x1b0]
206450 imul     rcx, rsi
206454 lea      r9, [rbx + rbx*8]
206458 xor      rcx, r9
20645b xor      rcx, rbp
20645e xor      rax, rcx
206461 sub      r11, rcx
206464 test     dil, dil
206467 movabs   rcx, 0x2545f4914f6cdd1d
206471 cmove    r11, rax
206475 imul     r10, r15
206479 add      r10, rcx
20647c mov      rcx, r11
20647f mov      rax, r10
206482 shr      rax, 0x1b
206486 movzx    edx, al
206489 mov      byte ptr [r14 + 0x168], dl
206490 imul     rdx, rsi
206494 xor      rdx, r9
206497 xor      rdx, rbp
20649a xor      rcx, rdx
20649d test     dil, dil
2064a0 lea      rax, [r11 + rdx]
2064a4 cmove    rax, rcx
2064a8 mov      rcx, r11
2064ab mov      qword ptr [r14 + 0x130], rax
2064b2 movabs   rax, 0x2545f4914f6cdd1d
2064bc imul     r10, r15
2064c0 add      r10, rax
2064c3 lea      rax, [r8 + 2]
2064c7 mov      qword ptr [r14 + 0x1b8], rax
2064ce mov      r8d, 0x3981
2064d4 mov      qword ptr [r14 + 0x1b0], r10
2064db lea      rax, [rbx + rbx*4]
2064df add      rax, rax
2064e2 shr      r10, 0x1b
2064e6 movzx    edx, r10b
2064ea mov      byte ptr [r14 + 0x169], dl
2064f1 imul     rdx, rsi
2064f5 xor      rdx, rax
2064f8 xor      rdx, rbp
2064fb xor      rcx, rdx
2064fe test     dil, dil
206501 lea      rax, [r11 + rdx]
206505 cmove    rax, rcx
206509 mov      rcx, r14
20650c mov      qword ptr [r14 + 0x138], rax
206513 movzx    edx, byte ptr [r14 + 0x4ad]
20651b xor      rdx, qword ptr [r14 + 0x348]
206522 call     0x1401f1520
206527 mov      r8, qword ptr [r14 + 0x348]
20652e movabs   rdi, 0xff51afd7ed558ccd
206538 mov      rax, r8
20653b movabs   rsi, 0xc4ceb9fe1a85ec53
206545 xor      rax, qword ptr [r14 + 0x20]
206549 mov      rcx, rax
20654c shr      rcx, 0x21
206550 xor      rcx, rax
206553 imul     rcx, rdi
206557 mov      rax, rcx
20655a shr      rax, 0x21
20655e xor      rax, rcx
206561 imul     rax, rsi
206565 mov      rdx, rax
206568 shr      rdx, 0x21
20656c xor      edx, eax
20656e lea      eax, [rdx + 1]
206571 mov      ecx, eax
206573 xor      eax, edx
206575 imul     ecx, edx
206578 not      ecx
20657a and      ecx, eax
20657c test     cl, 1
20657f je       0x1402065f2
206581 and      r8b, 3
206585 cmp      r8b, 1
206589 jne      0x1402065f2
20658b mov      rax, qword ptr [r14 + 0x1b0]
206592 movabs   rcx, 0x2545f4914f6cdd1d
20659c inc      qword ptr [r14 + 0x1b8]
2065a3 imul     rax, r15
2065a7 add      rax, rcx
2065aa mov      qword ptr [r14 + 0x1b0], rax
2065b1 shr      rax, 0x1b
2065b5 movzx    eax, al
2065b8 mov      byte ptr [r14 + 0x160], al
2065bf imul     rax, qword ptr [r14 + 0xe0]
2065c7 xor      rax, qword ptr [r14 + 0xd8]
2065ce xor      rax, qword ptr [r14 + 0xd0]
2065d5 mov      rcx, rax
2065d8 add      rax, 0x190631
2065de xor      rcx, 0x190631
2065e5 cmp      byte ptr [r14 + 0xe8], 0
2065ed jmp      0x140206c18
2065f2 mov      rcx, r14
2065f5 call     0x1401ee070
2065fa mov      ebx, eax
2065fc cmp      eax, dword ptr [r14 + 0x1d8]
206603 jb       0x14020666c
206605 mov      rax, qword ptr [r14 + 0x1b0]
20660c movabs   rcx, 0x2545f4914f6cdd1d
206616 inc      qword ptr [r14 + 0x1b8]
20661d imul     rax, r15
206621 add      rax, rcx
206624 mov      qword ptr [r14 + 0x1b0], rax
20662b shr      rax, 0x1b
20662f movzx    eax, al
206632 mov      byte ptr [r14 + 0x160], al
206639 imul     rax, qword ptr [r14 + 0xe0]
206641 xor      rax, qword ptr [r14 + 0xd8]
206648 xor      rax, qword ptr [r14 + 0xd0]
20664f mov      rcx, rax
206652 add      rax, 0xfe1ab
206658 xor      rcx, 0xfe1ab
20665f cmp      byte ptr [r14 + 0xe8], 0
206667 jmp      0x140206c18
20666c mov      edx, ebx
20666e mov      rcx, r14
206671 call     0x1401f25b0
206676 movsxd   rcx, dword ptr [r14 + 0x11e0]
20667d movabs   r8, 0xd6e8feb86659fd93
206687 mov      rdx, qword ptr [r14 + 0x20]
20668b mov      rax, rbx
20668e imul     rax, r8
206692 imul     rcx, r15
206696 rol      rdx, 0x11
20669a xor      rax, rdx
20669d xor      rcx, qword ptr [r14 + 0x260]
2066a4 xor      rax, rcx
2066a7 mov      rcx, rax
2066aa shr      rcx, 0x21
2066ae xor      rcx, rax
2066b1 imul     rcx, rdi
2066b5 mov      rdx, rcx
2066b8 shr      rdx, 0x21
2066bc xor      rdx, rcx
2066bf imul     rdx, rsi
2066c3 mov      rax, rdx
2066c6 shr      rax, 0x21
2066ca xor      rax, rdx
2066cd mov      r10, rax
2066d0 shr      r10, 0x1d
2066d4 xor      r10, rax
2066d7 or       r10, 1
2066db mov      rax, r10
2066de mov      qword ptr [r14 + 0x260], r10
2066e5 and      eax, 0x3ff
2066ea cmp      rax, 0x2c5
2066f0 jne      0x140206701
2066f2 mov      rcx, r14
2066f5 call     0x1402297e0
2066fa mov      r10, qword ptr [r14 + 0x260]
206701 movzx    eax, r10b
206705 and      al, 0x1f
206707 cmp      al, 0x15
206709 jne      0x1402067f6
20670f movsxd   rax, dword ptr [r14 + 0x11e0]
206716 xor      rax, 0x5a5a
20671c mov      rcx, qword ptr [r14 + 0x20]
206720 imul     rax, r15
206724 rol      rcx, 0x11
206728 xor      rax, r10
20672b xor      rcx, rax
20672e movabs   rax, 0x8f70feda99a6026d
206738 xor      rcx, rax
20673b mov      rax, rcx
20673e shr      rax, 0x21
206742 xor      rax, rcx
206745 imul     rax, rdi
206749 mov      rcx, rax
20674c shr      rcx, 0x21
206750 xor      rcx, rax
206753 imul     rcx, rsi
206757 mov      rax, rcx
20675a shr      rax, 0x21
20675e xor      rax, rcx
206761 mov      r9, rax
206764 shr      r9, 0x1d
206768 xor      r9, rax
20676b or       r9, 1
20676f mov      rax, r9
206772 mov      rcx, r9
206775 shr      rax, 8
206779 and      eax, 3
20677c shr      rcx, 0x28
206780 imul     r8, rax, 0x3e
206784 mov      eax, 0x8421085
206789 mul      ecx
20678b mov      eax, ecx
20678d sub      eax, edx
20678f shr      eax, 1
206791 add      eax, edx
206793 shr      eax, 5
206796 imul     eax, eax, 0x3e
206799 sub      ecx, eax
20679b mov      eax, ecx
20679d add      r8, rax
2067a0 mov      rax, qword ptr [r14 + 0x4b8]
2067a7 movsxd   rcx, dword ptr [rax + r8*4]
2067ab movsxd   rax, dword ptr [r14 + 0x4c8]
2067b2 xor      rcx, rax
2067b5 add      rcx, qword ptr [r14 + 0x4c0]
2067bc xor      rcx, r9
2067bf mov      rax, rcx
2067c2 shr      rax, 0x21
2067c6 xor      rax, rcx
2067c9 imul     rax, rdi
2067cd mov      rcx, rax
2067d0 shr      rcx, 0x21
2067d4 xor      rcx, rax
2067d7 imul     rcx, rsi
2067db mov      rax, rcx
2067de shr      rax, 0x21
2067e2 xor      rax, rcx
2067e5 xor      rax, r10
2067e8 inc      qword ptr [r14 + 0x268]
2067ef mov      qword ptr [r14 + 0x260], rax
2067f6 inc      dword ptr [r14 + 0x200]
2067fd mov      eax, dword ptr [r14 + 0x200]
206804 cmp      eax, dword ptr [r14 + 0x1fc]
20680b jb       0x140206820
20680d mov      rcx, r14
206810 mov      dword ptr [r14 + 0x200], 0
20681b call     0x1401ef7c0
206820 mov      r8d, ebx
206823 mov      edx, ebx
206825 mov      rcx, r14
206828 call     0x1401f0660
20682d inc      qword ptr [r14 + 0x1b8]
206834 movabs   rax, 0x2545f4914f6cdd1d
20683e mov      r9, qword ptr [r14 + 0x1b0]
206845 mov      r10, qword ptr [r14 + 0x1b8]
20684c imul     r9, r15
206850 add      r9, rax
206853 mov      qword ptr [r14 + 0x1b0], r9
20685a mov      rax, r9
20685d shr      rax, 0x1b
206861 movzx    edx, al
206864 mov      byte ptr [r14 + 0x168], dl
20686b mov      rdi, qword ptr [r14 + 0xe0]
206872 mov      r11, qword ptr [r14 + 0xd8]
206879 mov      rsi, qword ptr [r14 + 0xd0]
206880 movzx    r15d, byte ptr [r14 + 0xe8]
206888 imul     rdx, rdi
20688c lea      rax, [r11 + r11*8]
206890 xor      rdx, rax
206893 xor      rdx, rsi
206896 mov      rcx, rdx
206899 xor      rcx, rbx
20689c test     r15b, r15b
20689f lea      rax, [rdx + rbx]
2068a3 cmove    rax, rcx
2068a7 inc      r10
2068aa mov      qword ptr [r14 + 0x130], rax
2068b1 mov      rcx, qword ptr [r14 + 0x1d0]
2068b8 mov      rax, qword ptr [r14 + 0x48]
2068bc mov      qword ptr [rsp + 0x78], r10
2068c1 movzx    r8d, byte ptr [rcx + rbx]
2068c6 xor      r8b, byte ptr [rax + rbx]
2068ca inc      ebx
2068cc mov      qword ptr [r14 + 0x1b8], r10
2068d3 movabs   rax, 0x9e3779b97f4a7c15
2068dd imul     r9, rax
2068e1 mov      qword ptr [rsp + 0x60], rbx
2068e6 movabs   rax, 0x2545f4914f6cdd1d
2068f0 add      r9, rax
2068f3 mov      rax, r9
2068f6 shr      rax, 0x1b
2068fa movzx    edx, al
2068fd lea      rax, [r11 + r11]
206901 mov      byte ptr [r14 + 0x161], dl
206908 imul     rdx, rdi
20690c xor      rdx, rax
20690f xor      rdx, rsi
206912 mov      rcx, rdx
206915 xor      rcx, rbx
206918 test     r15b, r15b
20691b lea      rax, [rdx + rbx]
20691f cmove    rax, rcx
206923 mov      qword ptr [r14 + 0xf8], rax
20692a movsxd   rdx, dword ptr [r14 + 0x11e0]
206931 mov      r10, qword ptr [r14 + 0x20]
206935 mov      rcx, rdx
206938 xor      rcx, qword ptr [r14 + 0x350]
20693f xor      rcx, r10
206942 xor      rcx, rbx
206945 movabs   rbx, 0xff51afd7ed558ccd
20694f xor      rcx, qword ptr [r14 + 0x348]
206956 mov      rax, rcx
206959 shr      rax, 0x21
20695d xor      rax, rcx
206960 imul     rax, rbx
206964 mov      rcx, rax
206967 shr      rcx, 0x21
20696b xor      rcx, rax
20696e movabs   rax, 0xc4ceb9fe1a85ec53
206978 imul     rcx, rax
20697c movzx    eax, r8b
206980 mov      rbx, rcx
206983 shr      rbx, 0x21
206987 xor      rbx, rcx
20698a lea      rcx, [rip - 0x206991]
206991 xor      rax, 0xdd
206997 mov      qword ptr [r14 + 0x28], rbx
20699b movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
2069a3 xor      bpl, 0x63
2069a7 movabs   r8, 0xff51afd7ed558ccd
2069b1 inc      edx
2069b3 mov      dword ptr [r14 + 0x11e0], edx
2069ba test     dl, 0x1f
2069bd jne      0x140206a03
2069bf movsxd   rax, edx
2069c2 xor      rax, r10
2069c5 xor      rax, qword ptr [r14 + 0x348]
2069cc mov      rcx, rax
2069cf shr      rcx, 0x21
2069d3 xor      rcx, rax
2069d6 movabs   rax, 0xc4ceb9fe1a85ec53
2069e0 imul     rcx, r8
2069e4 mov      rdx, rcx
2069e7 shr      rdx, 0x21
2069eb xor      rdx, rcx
2069ee imul     rdx, rax
2069f2 mov      rax, rdx
2069f5 shr      rax, 0x21
2069f9 xor      rax, rdx
2069fc mov      qword ptr [r14 + 0x348], rax
206a03 movzx    edx, bpl
206a07 xor      r10, rdx
206a0a mov      byte ptr [r14 + 0x4ad], bpl
206a11 xor      r10, qword ptr [rsp + 0x60]
206a16 mov      rax, r10
206a19 shr      rax, 0x21
206a1d xor      rax, r10
206a20 movabs   r10, 0x9e3779b97f4a7c15
206a2a imul     rax, r8
206a2e imul     rdx, r10
206a32 imul     r9, r10
206a36 mov      rcx, rax
206a39 shr      rcx, 0x21
206a3d xor      rcx, rax
206a40 movabs   rax, 0xc4ceb9fe1a85ec53
206a4a imul     rcx, rax
206a4e mov      rax, rcx
206a51 shr      rax, 0x21
206a55 xor      rax, rcx
206a58 mov      ecx, dword ptr [r14 + 0x1178]
206a5f mov      qword ptr [r14 + 0x20], rax
206a63 movabs   rax, 0xd6e8feb86659fd93
206a6d imul     rcx, rax
206a71 xor      rcx, rdx
206a74 xor      rcx, rbx
206a77 movabs   rbx, 0x2545f4914f6cdd1d
206a81 mov      rax, rcx
206a84 add      r9, rbx
206a87 shr      rax, 0x21
206a8b xor      rax, rcx
206a8e imul     rax, r8
206a92 mov      rdx, rax
206a95 shr      rdx, 0x21
206a99 xor      rdx, rax
206a9c movabs   rax, 0xc4ceb9fe1a85ec53
206aa6 imul     rdx, rax
206aaa mov      rax, qword ptr [rsp + 0x78]
206aaf shr      rdx, 0x21
206ab3 and      edx, 3
206ab6 inc      rax
206ab9 mov      qword ptr [r14 + 0x1b8], rax
206ac0 cmp      bpl, 0x3e
206ac4 jae      0x140206b5c
206aca inc      qword ptr [r14 + 0x11a0]
206ad1 lea      rax, [rip - 0x206ad8]
206ad8 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
206ae0 mov      qword ptr [r14 + 0x1b0], r9
206ae7 shr      r9, 0x1b
206aeb movzx    eax, r9b
206aef mov      byte ptr [r14 + 0x160], al
206af6 imul     rax, rdi
206afa mov      ebx, edx
206afc xor      rax, r11
206aff xor      rax, rsi
206b02 mov      rcx, rax
206b05 add      rax, r8
206b08 xor      rcx, r8
206b0b movzx    r8d, bpl
206b0f test     r15b, r15b
206b12 cmove    rax, rcx
206b16 mov      rcx, r14
206b19 mov      qword ptr [r14 + 0xf0], rax
206b20 call     0x1401f1f50
206b25 mov      eax, eax
206b27 lea      edx, [r13 - 1]
206b2b imul     rcx, rbx, 0x3e
206b2f mov      r8, r12
206b32 add      rcx, rax
206b35 mov      rax, qword ptr [r14 + 0x4b8]
206b3c movsxd   r9, dword ptr [rax + rcx*4]
206b40 mov      rcx, r14
206b43 movsxd   rax, dword ptr [r14 + 0x4c8]
206b4a xor      r9, rax
206b4d add      r9, qword ptr [r14 + 0x4c0]
206b54 call     r9
206b57 jmp      0x140206c23
206b5c inc      dword ptr [r14 + 0x11a8]
206b63 mov      rax, r9
206b66 shr      rax, 0x1b
206b6a movzx    ecx, al
206b6d lea      rax, [r11*4]
206b75 mov      byte ptr [r14 + 0x163], cl
206b7c imul     rcx, rdi
206b80 imul     r9, r10
206b84 xor      rcx, rax
206b87 xor      rcx, rsi
206b8a mov      qword ptr [r14 + 0x108], rcx
206b91 mov      r8, qword ptr [r14 + 0x1b8]
206b98 add      r9, rbx
206b9b mov      rax, r9
206b9e shr      rax, 0x1b
206ba2 movzx    edx, al
206ba5 mov      byte ptr [r14 + 0x16a], dl
206bac imul     rax, r11, 0xb
206bb0 imul     rdx, rdi
206bb4 xor      rdx, rax
206bb7 xor      rdx, rsi
206bba mov      rcx, rdx
206bbd xor      rcx, 1
206bc1 test     r15b, r15b
206bc4 lea      rax, [rdx + 1]
206bc8 cmove    rax, rcx
206bcc mov      qword ptr [r14 + 0x140], rax
206bd3 lea      rax, [r8 + 2]
206bd7 mov      qword ptr [r14 + 0x1b8], rax
206bde imul     r9, r10
206be2 add      r9, rbx
206be5 mov      qword ptr [r14 + 0x1b0], r9
206bec shr      r9, 0x1b
206bf0 movzx    eax, r9b
206bf4 mov      byte ptr [r14 + 0x160], al
206bfb imul     rax, rdi
206bff xor      rax, rsi
206c02 xor      rax, r11
206c05 mov      rcx, rax
206c08 add      rax, 0xfe1ab
206c0e xor      rcx, 0xfe1ab
206c15 test     r15b, r15b
206c18 cmove    rax, rcx
206c1c mov      qword ptr [r14 + 0xf0], rax
206c23 mov      rdi, qword ptr [rsp + 0x28]
206c28 mov      rsi, qword ptr [rsp + 0x30]
206c2d mov      rbp, qword ptr [rsp + 0x38]
206c32 mov      rbx, qword ptr [rsp + 0x68]
206c37 mov      r15, qword ptr [rsp + 0x20]
206c3c add      rsp, 0x40
206c40 pop      r14
206c42 pop      r13
206c44 pop      r12
206c46 ret      
206c47 mov      edx, 0x54485254
206c4c mov      rcx, r14
206c4f call     0x1401ed830
206c54 int3     
206c55 mov      edx, 0x43414e59
206c5a mov      rcx, r14
206c5d call     0x1401ed830
206c62 int3     
