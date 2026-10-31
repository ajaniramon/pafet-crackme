1f8f40 push     rbx
1f8f42 push     r12
1f8f44 push     r13
1f8f46 push     r14
1f8f48 sub      rsp, 0x38
1f8f4c movsxd   rax, dword ptr [rcx + 0x11e0]
1f8f53 mov      r14, rcx
1f8f56 mov      r13d, edx
1f8f59 movabs   rcx, 0x10078dc2e663963e
1f8f63 imul     rax, rcx
1f8f67 movabs   rcx, 0xb25e070967bd1201
1f8f71 mov      r12, r8
1f8f74 xor      rax, qword ptr [r14 + 0x28]
1f8f78 mov      qword ptr [rsp + 0x60], rax
1f8f7d mov      rax, qword ptr [rsp + 0x60]
1f8f82 movsxd   rax, dword ptr [r14 + 0x11e0]
1f8f89 imul     rax, rcx
1f8f8d movabs   rcx, 0x54969957e4f69e14
1f8f97 xor      rax, qword ptr [r14 + 0x28]
1f8f9b mov      qword ptr [rsp + 0x60], rax
1f8fa0 mov      rax, qword ptr [rsp + 0x60]
1f8fa5 movsxd   rax, dword ptr [r14 + 0x11e0]
1f8fac imul     rax, rcx
1f8fb0 xor      rax, qword ptr [r14 + 0x28]
1f8fb4 mov      qword ptr [rsp + 0x60], rax
1f8fb9 mov      rax, qword ptr [rsp + 0x60]
1f8fbe mov      rax, qword ptr [r14 + 0x2f0]
1f8fc5 shr      rax, 0xd
1f8fc9 mov      rcx, rax
1f8fcc shr      rcx, 0x21
1f8fd0 xor      rcx, rax
1f8fd3 movabs   rax, 0xff51afd7ed558ccd
1f8fdd imul     rcx, rax
1f8fe1 movabs   rax, 0xc4ceb9fe1a85ec53
1f8feb mov      rdx, rcx
1f8fee shr      rdx, 0x21
1f8ff2 xor      rdx, rcx
1f8ff5 imul     rdx, rax
1f8ff9 movabs   rax, 0x64bd111beeee8e10
1f9003 mov      rcx, rdx
1f9006 shr      rcx, 0x21
1f900a xor      rcx, rdx
1f900d xor      rcx, rax
1f9010 mov      rax, qword ptr [r14 + 0x2f0]
1f9017 add      rcx, rax
1f901a mov      qword ptr [r14 + 0x2f0], rcx
1f9021 mov      rcx, r14
1f9024 call     0x1401ee940
1f9029 mov      rcx, r14
1f902c mov      rbx, rax
1f902f call     0x1401ee940
1f9034 mov      r9, qword ptr [r14 + 0x28]
1f9038 mov      r8, rbx
1f903b mov      rdx, rax
1f903e xor      ecx, ecx
1f9040 call     0x1401ed730
1f9045 mov      rdx, rax
1f9048 mov      rcx, r14
1f904b call     0x1401ee820
1f9050 mov      rax, qword ptr [r14 + 0x2f0]
1f9057 test     r13d, r13d
1f905a jns      0x1401f9bf2
1f9060 cmp      qword ptr [r14 + 0x11b8], r12
1f9067 jne      0x1401f9c00
1f906d movsxd   rax, dword ptr [r14 + 0x11e0]
1f9074 movabs   rcx, 0xea26243d42417597
1f907e imul     rax, rcx
1f9082 mov      rcx, r14
1f9085 xor      rax, qword ptr [r14 + 0x28]
1f9089 mov      qword ptr [rsp + 0x60], rax
1f908e mov      rax, qword ptr [rsp + 0x60]
1f9093 call     0x1401ee450
1f9098 test     eax, eax
1f909a jne      0x1401f9be6
1f90a0 cmp      dword ptr [r14 + 0xad0], eax
1f90a7 jne      0x1401f9be6
1f90ad mov      r8, qword ptr [r14 + 0xf0]
1f90b4 movzx    ecx, byte ptr [r14 + 0x160]
1f90bc mov      rax, r8
1f90bf mov      r10, qword ptr [r14 + 0xe0]
1f90c6 mov      rbx, qword ptr [r14 + 0xd0]
1f90cd mov      r11, qword ptr [r14 + 0xd8]
1f90d4 mov      r9, qword ptr [r14 + 0x1b0]
1f90db imul     rcx, r10
1f90df mov      qword ptr [rsp + 0x68], rbp
1f90e4 movabs   rbp, 0x2545f4914f6cdd1d
1f90ee xor      rcx, rbx
1f90f1 mov      qword ptr [rsp + 0x30], rsi
1f90f6 mov      rsi, qword ptr [r14 + 0x1b8]
1f90fd xor      rcx, r11
1f9100 xor      rax, rcx
1f9103 mov      qword ptr [rsp + 0x28], rdi
1f9108 movzx    edi, byte ptr [r14 + 0xe8]
1f9110 sub      r8, rcx
1f9113 test     dil, dil
1f9116 mov      qword ptr [rsp + 0x20], r15
1f911b movabs   r15, 0x9e3779b97f4a7c15
1f9125 cmove    r8, rax
1f9129 inc      rsi
1f912c imul     r9, r15
1f9130 mov      qword ptr [r14 + 0x1b8], rsi
1f9137 mov      rcx, r8
1f913a add      r9, rbp
1f913d mov      qword ptr [r14 + 0x1b0], r9
1f9144 mov      rax, r9
1f9147 shr      rax, 0x1b
1f914b movzx    edx, al
1f914e mov      byte ptr [r14 + 0x160], dl
1f9155 imul     rdx, r10
1f9159 xor      rdx, rbx
1f915c xor      rdx, r11
1f915f xor      rcx, rdx
1f9162 test     dil, dil
1f9165 lea      rax, [r8 + rdx]
1f9169 cmove    rax, rcx
1f916d mov      qword ptr [r14 + 0xf0], rax
1f9174 cmp      r8d, 0x26dc07
1f917b jne      0x1401f9bd2
1f9181 mov      eax, r13d
1f9184 btr      eax, 0x1f
1f9188 cmp      eax, 2
1f918b jae      0x1401f91d7
1f918d imul     r9, r15
1f9191 lea      rax, [rsi + 1]
1f9195 mov      qword ptr [r14 + 0x1b8], rax
1f919c add      r9, rbp
1f919f mov      qword ptr [r14 + 0x1b0], r9
1f91a6 shr      r9, 0x1b
1f91aa movzx    eax, r9b
1f91ae mov      byte ptr [r14 + 0x160], al
1f91b5 imul     rax, r10
1f91b9 xor      rax, rbx
1f91bc xor      rax, r11
1f91bf mov      rcx, rax
1f91c2 add      rax, 0x3abaef
1f91c8 xor      rcx, 0x3abaef
1f91cf test     dil, dil
1f91d2 jmp      0x1401f9bc7
1f91d7 mov      rcx, r14
1f91da call     0x1401ee070
1f91df movzx    ecx, byte ptr [r14 + 0x4ad]
1f91e7 movabs   rbx, 0xff51afd7ed558ccd
1f91f1 xor      rcx, qword ptr [r14 + 0x11e8]
1f91f8 movabs   r8, 0xc4ceb9fe1a85ec53
1f9202 mov      r11, qword ptr [r14 + 0xe0]
1f9209 mov      r10, qword ptr [r14 + 0xd0]
1f9210 movzx    r9d, byte ptr [r14 + 0xe8]
1f9218 mov      eax, eax
1f921a xor      rcx, rax
1f921d mov      rax, rcx
1f9220 shr      rax, 0x21
1f9224 xor      rax, rcx
1f9227 imul     rax, rbx
1f922b mov      rcx, rax
1f922e shr      rcx, 0x21
1f9232 xor      rcx, rax
1f9235 imul     rcx, r8
1f9239 mov      rdx, rcx
1f923c shr      rdx, 0x21
1f9240 xor      rdx, rcx
1f9243 mov      qword ptr [r14 + 0x11e8], rdx
1f924a xor      rdx, qword ptr [r14 + 0x28]
1f924e xor      rdx, qword ptr [r14 + 0x20]
1f9252 mov      rax, rdx
1f9255 shr      rax, 0x21
1f9259 xor      rax, rdx
1f925c imul     rax, rbx
1f9260 mov      rcx, rax
1f9263 shr      rcx, 0x21
1f9267 xor      rcx, rax
1f926a imul     rcx, r8
1f926e mov      rax, rcx
1f9271 shr      rax, 0x21
1f9275 xor      rax, rcx
1f9278 mov      qword ptr [r14 + 0x20], rax
1f927c mov      rdx, qword ptr [r14 + 0x138]
1f9283 movzx    ecx, byte ptr [r14 + 0x169]
1f928b mov      rax, qword ptr [r14 + 0xd8]
1f9292 imul     rcx, r11
1f9296 lea      rbx, [rax + rax*4]
1f929a mov      rax, rdx
1f929d add      rbx, rbx
1f92a0 xor      rcx, rbx
1f92a3 xor      rcx, r10
1f92a6 xor      rax, rcx
1f92a9 sub      rdx, rcx
1f92ac test     r9b, r9b
1f92af cmove    rdx, rax
1f92b3 mov      rax, qword ptr [r14 + 0x1b0]
1f92ba inc      qword ptr [r14 + 0x1b8]
1f92c1 imul     rax, r15
1f92c5 add      rax, rbp
1f92c8 mov      qword ptr [r14 + 0x1b0], rax
1f92cf shr      rax, 0x1b
1f92d3 movzx    r8d, al
1f92d7 mov      byte ptr [r14 + 0x169], r8b
1f92de imul     r8, r11
1f92e2 xor      r8, rbx
1f92e5 xor      r8, r10
1f92e8 mov      rcx, r8
1f92eb xor      rcx, rdx
1f92ee test     r9b, r9b
1f92f1 lea      rax, [r8 + rdx]
1f92f5 cmove    rax, rcx
1f92f9 mov      rcx, r14
1f92fc mov      qword ptr [r14 + 0x138], rax
1f9303 call     0x1401f0910
1f9308 mov      rax, qword ptr [r14 + 0xd8]
1f930f mov      r10, qword ptr [r14 + 0xe0]
1f9316 movzx    ecx, byte ptr [r14 + 0x168]
1f931e mov      rbx, qword ptr [r14 + 0xd0]
1f9325 mov      rdx, qword ptr [r14 + 0x130]
1f932c lea      r11, [rax + rax*8]
1f9330 movzx    r9d, byte ptr [r14 + 0xe8]
1f9338 mov      rax, rdx
1f933b imul     rcx, r10
1f933f xor      rcx, r11
1f9342 xor      rcx, rbx
1f9345 xor      rax, rcx
1f9348 sub      rdx, rcx
1f934b test     r9b, r9b
1f934e cmove    rdx, rax
1f9352 mov      rax, qword ptr [r14 + 0x1b0]
1f9359 inc      qword ptr [r14 + 0x1b8]
1f9360 mov      rcx, rdx
1f9363 imul     rax, r15
1f9367 add      rax, rbp
1f936a mov      qword ptr [r14 + 0x1b0], rax
1f9371 shr      rax, 0x1b
1f9375 movzx    r8d, al
1f9379 mov      byte ptr [r14 + 0x168], r8b
1f9380 imul     r8, r10
1f9384 xor      r8, r11
1f9387 xor      r8, rbx
1f938a xor      rcx, r8
1f938d test     r9b, r9b
1f9390 lea      rax, [rdx + r8]
1f9394 cmove    rax, rcx
1f9398 mov      rcx, r14
1f939b mov      qword ptr [r14 + 0x130], rax
1f93a2 call     0x1401f0910
1f93a7 mov      rcx, r14
1f93aa call     0x1401ee070
1f93af cmp      eax, dword ptr [r14 + 0x1d8]
1f93b6 jae      0x1401f93c2
1f93b8 mov      edx, eax
1f93ba mov      rcx, r14
1f93bd call     0x1401f0910
1f93c2 mov      rsi, qword ptr [r14 + 0xe0]
1f93c9 mov      rbp, qword ptr [r14 + 0xd0]
1f93d0 mov      r11, qword ptr [r14 + 0x130]
1f93d7 movzx    edi, byte ptr [r14 + 0xe8]
1f93df mov      rax, r11
1f93e2 movzx    ecx, byte ptr [r14 + 0x168]
1f93ea mov      rbx, qword ptr [r14 + 0xd8]
1f93f1 mov      r8, qword ptr [r14 + 0x1b8]
1f93f8 mov      r10, qword ptr [r14 + 0x1b0]
1f93ff imul     rcx, rsi
1f9403 lea      r9, [rbx + rbx*8]
1f9407 xor      rcx, r9
1f940a xor      rcx, rbp
1f940d xor      rax, rcx
1f9410 sub      r11, rcx
1f9413 test     dil, dil
1f9416 movabs   rcx, 0x2545f4914f6cdd1d
1f9420 cmove    r11, rax
1f9424 imul     r10, r15
1f9428 add      r10, rcx
1f942b mov      rcx, r11
1f942e mov      rax, r10
1f9431 shr      rax, 0x1b
1f9435 movzx    edx, al
1f9438 mov      byte ptr [r14 + 0x168], dl
1f943f imul     rdx, rsi
1f9443 xor      rdx, r9
1f9446 xor      rdx, rbp
1f9449 xor      rcx, rdx
1f944c test     dil, dil
1f944f lea      rax, [r11 + rdx]
1f9453 cmove    rax, rcx
1f9457 mov      rcx, r11
1f945a mov      qword ptr [r14 + 0x130], rax
1f9461 movabs   rax, 0x2545f4914f6cdd1d
1f946b imul     r10, r15
1f946f add      r10, rax
1f9472 lea      rax, [r8 + 2]
1f9476 mov      qword ptr [r14 + 0x1b8], rax
1f947d mov      r8d, 0x75d0
1f9483 mov      qword ptr [r14 + 0x1b0], r10
1f948a lea      rax, [rbx + rbx*4]
1f948e add      rax, rax
1f9491 shr      r10, 0x1b
1f9495 movzx    edx, r10b
1f9499 mov      byte ptr [r14 + 0x169], dl
1f94a0 imul     rdx, rsi
1f94a4 xor      rdx, rax
1f94a7 xor      rdx, rbp
1f94aa xor      rcx, rdx
1f94ad test     dil, dil
1f94b0 lea      rax, [r11 + rdx]
1f94b4 cmove    rax, rcx
1f94b8 mov      rcx, r14
1f94bb mov      qword ptr [r14 + 0x138], rax
1f94c2 movzx    edx, byte ptr [r14 + 0x4ad]
1f94ca xor      rdx, qword ptr [r14 + 0x348]
1f94d1 call     0x1401f1520
1f94d6 mov      r8, qword ptr [r14 + 0x348]
1f94dd movabs   rdi, 0xff51afd7ed558ccd
1f94e7 mov      rax, r8
1f94ea movabs   rsi, 0xc4ceb9fe1a85ec53
1f94f4 xor      rax, qword ptr [r14 + 0x20]
1f94f8 mov      rcx, rax
1f94fb shr      rcx, 0x21
1f94ff xor      rcx, rax
1f9502 imul     rcx, rdi
1f9506 mov      rax, rcx
1f9509 shr      rax, 0x21
1f950d xor      rax, rcx
1f9510 imul     rax, rsi
1f9514 mov      rdx, rax
1f9517 shr      rdx, 0x21
1f951b xor      edx, eax
1f951d lea      eax, [rdx + 1]
1f9520 mov      ecx, eax
1f9522 xor      eax, edx
1f9524 imul     ecx, edx
1f9527 not      ecx
1f9529 and      ecx, eax
1f952b test     cl, 1
1f952e je       0x1401f95a1
1f9530 and      r8b, 3
1f9534 cmp      r8b, 1
1f9538 jne      0x1401f95a1
1f953a mov      rax, qword ptr [r14 + 0x1b0]
1f9541 movabs   rcx, 0x2545f4914f6cdd1d
1f954b inc      qword ptr [r14 + 0x1b8]
1f9552 imul     rax, r15
1f9556 add      rax, rcx
1f9559 mov      qword ptr [r14 + 0x1b0], rax
1f9560 shr      rax, 0x1b
1f9564 movzx    eax, al
1f9567 mov      byte ptr [r14 + 0x160], al
1f956e imul     rax, qword ptr [r14 + 0xe0]
1f9576 xor      rax, qword ptr [r14 + 0xd8]
1f957d xor      rax, qword ptr [r14 + 0xd0]
1f9584 mov      rcx, rax
1f9587 add      rax, 0x17ed28
1f958d xor      rcx, 0x17ed28
1f9594 cmp      byte ptr [r14 + 0xe8], 0
1f959c jmp      0x1401f9bc7
1f95a1 mov      rcx, r14
1f95a4 call     0x1401ee070
1f95a9 mov      ebx, eax
1f95ab cmp      eax, dword ptr [r14 + 0x1d8]
1f95b2 jb       0x1401f961b
1f95b4 mov      rax, qword ptr [r14 + 0x1b0]
1f95bb movabs   rcx, 0x2545f4914f6cdd1d
1f95c5 inc      qword ptr [r14 + 0x1b8]
1f95cc imul     rax, r15
1f95d0 add      rax, rcx
1f95d3 mov      qword ptr [r14 + 0x1b0], rax
1f95da shr      rax, 0x1b
1f95de movzx    eax, al
1f95e1 mov      byte ptr [r14 + 0x160], al
1f95e8 imul     rax, qword ptr [r14 + 0xe0]
1f95f0 xor      rax, qword ptr [r14 + 0xd8]
1f95f7 xor      rax, qword ptr [r14 + 0xd0]
1f95fe mov      rcx, rax
1f9601 add      rax, 0xfe1ab
1f9607 xor      rcx, 0xfe1ab
1f960e cmp      byte ptr [r14 + 0xe8], 0
1f9616 jmp      0x1401f9bc7
1f961b mov      edx, ebx
1f961d mov      rcx, r14
1f9620 call     0x1401f25b0
1f9625 movsxd   rcx, dword ptr [r14 + 0x11e0]
1f962c movabs   r8, 0xd6e8feb86659fd93
1f9636 mov      rdx, qword ptr [r14 + 0x20]
1f963a mov      rax, rbx
1f963d imul     rax, r8
1f9641 imul     rcx, r15
1f9645 rol      rdx, 0x11
1f9649 xor      rax, rdx
1f964c xor      rcx, qword ptr [r14 + 0x260]
1f9653 xor      rax, rcx
1f9656 mov      rcx, rax
1f9659 shr      rcx, 0x21
1f965d xor      rcx, rax
1f9660 imul     rcx, rdi
1f9664 mov      rdx, rcx
1f9667 shr      rdx, 0x21
1f966b xor      rdx, rcx
1f966e imul     rdx, rsi
1f9672 mov      rax, rdx
1f9675 shr      rax, 0x21
1f9679 xor      rax, rdx
1f967c mov      r10, rax
1f967f shr      r10, 0x1d
1f9683 xor      r10, rax
1f9686 or       r10, 1
1f968a mov      rax, r10
1f968d mov      qword ptr [r14 + 0x260], r10
1f9694 and      eax, 0x3ff
1f9699 cmp      rax, 0x2c5
1f969f jne      0x1401f96b0
1f96a1 mov      rcx, r14
1f96a4 call     0x1402297e0
1f96a9 mov      r10, qword ptr [r14 + 0x260]
1f96b0 movzx    eax, r10b
1f96b4 and      al, 0x1f
1f96b6 cmp      al, 0x15
1f96b8 jne      0x1401f97a5
1f96be movsxd   rax, dword ptr [r14 + 0x11e0]
1f96c5 xor      rax, 0x5a5a
1f96cb mov      rcx, qword ptr [r14 + 0x20]
1f96cf imul     rax, r15
1f96d3 rol      rcx, 0x11
1f96d7 xor      rax, r10
1f96da xor      rcx, rax
1f96dd movabs   rax, 0x8f70feda99a6026d
1f96e7 xor      rcx, rax
1f96ea mov      rax, rcx
1f96ed shr      rax, 0x21
1f96f1 xor      rax, rcx
1f96f4 imul     rax, rdi
1f96f8 mov      rcx, rax
1f96fb shr      rcx, 0x21
1f96ff xor      rcx, rax
1f9702 imul     rcx, rsi
1f9706 mov      rax, rcx
1f9709 shr      rax, 0x21
1f970d xor      rax, rcx
1f9710 mov      r9, rax
1f9713 shr      r9, 0x1d
1f9717 xor      r9, rax
1f971a or       r9, 1
1f971e mov      rax, r9
1f9721 mov      rcx, r9
1f9724 shr      rax, 8
1f9728 and      eax, 3
1f972b shr      rcx, 0x28
1f972f imul     r8, rax, 0x3e
1f9733 mov      eax, 0x8421085
1f9738 mul      ecx
1f973a mov      eax, ecx
1f973c sub      eax, edx
1f973e shr      eax, 1
1f9740 add      eax, edx
1f9742 shr      eax, 5
1f9745 imul     eax, eax, 0x3e
1f9748 sub      ecx, eax
1f974a mov      eax, ecx
1f974c add      r8, rax
1f974f mov      rax, qword ptr [r14 + 0x4b8]
1f9756 movsxd   rcx, dword ptr [rax + r8*4]
1f975a movsxd   rax, dword ptr [r14 + 0x4c8]
1f9761 xor      rcx, rax
1f9764 add      rcx, qword ptr [r14 + 0x4c0]
1f976b xor      rcx, r9
1f976e mov      rax, rcx
1f9771 shr      rax, 0x21
1f9775 xor      rax, rcx
1f9778 imul     rax, rdi
1f977c mov      rcx, rax
1f977f shr      rcx, 0x21
1f9783 xor      rcx, rax
1f9786 imul     rcx, rsi
1f978a mov      rax, rcx
1f978d shr      rax, 0x21
1f9791 xor      rax, rcx
1f9794 xor      rax, r10
1f9797 inc      qword ptr [r14 + 0x268]
1f979e mov      qword ptr [r14 + 0x260], rax
1f97a5 inc      dword ptr [r14 + 0x200]
1f97ac mov      eax, dword ptr [r14 + 0x200]
1f97b3 cmp      eax, dword ptr [r14 + 0x1fc]
1f97ba jb       0x1401f97cf
1f97bc mov      rcx, r14
1f97bf mov      dword ptr [r14 + 0x200], 0
1f97ca call     0x1401ef7c0
1f97cf mov      r8d, ebx
1f97d2 mov      edx, ebx
1f97d4 mov      rcx, r14
1f97d7 call     0x1401f0660
1f97dc inc      qword ptr [r14 + 0x1b8]
1f97e3 movabs   rax, 0x2545f4914f6cdd1d
1f97ed mov      r9, qword ptr [r14 + 0x1b0]
1f97f4 mov      r10, qword ptr [r14 + 0x1b8]
1f97fb imul     r9, r15
1f97ff add      r9, rax
1f9802 mov      qword ptr [r14 + 0x1b0], r9
1f9809 mov      rax, r9
1f980c shr      rax, 0x1b
1f9810 movzx    edx, al
1f9813 mov      byte ptr [r14 + 0x168], dl
1f981a mov      rdi, qword ptr [r14 + 0xe0]
1f9821 mov      r11, qword ptr [r14 + 0xd8]
1f9828 mov      rsi, qword ptr [r14 + 0xd0]
1f982f movzx    r15d, byte ptr [r14 + 0xe8]
1f9837 imul     rdx, rdi
1f983b lea      rax, [r11 + r11*8]
1f983f xor      rdx, rax
1f9842 xor      rdx, rsi
1f9845 mov      rcx, rdx
1f9848 xor      rcx, rbx
1f984b test     r15b, r15b
1f984e lea      rax, [rdx + rbx]
1f9852 cmove    rax, rcx
1f9856 inc      r10
1f9859 mov      qword ptr [r14 + 0x130], rax
1f9860 mov      rcx, qword ptr [r14 + 0x1d0]
1f9867 mov      rax, qword ptr [r14 + 0x48]
1f986b mov      qword ptr [rsp + 0x78], r10
1f9870 movzx    r8d, byte ptr [rcx + rbx]
1f9875 xor      r8b, byte ptr [rax + rbx]
1f9879 inc      ebx
1f987b mov      qword ptr [r14 + 0x1b8], r10
1f9882 movabs   rax, 0x9e3779b97f4a7c15
1f988c imul     r9, rax
1f9890 mov      qword ptr [rsp + 0x60], rbx
1f9895 movabs   rax, 0x2545f4914f6cdd1d
1f989f add      r9, rax
1f98a2 mov      rax, r9
1f98a5 shr      rax, 0x1b
1f98a9 movzx    edx, al
1f98ac lea      rax, [r11 + r11]
1f98b0 mov      byte ptr [r14 + 0x161], dl
1f98b7 imul     rdx, rdi
1f98bb xor      rdx, rax
1f98be xor      rdx, rsi
1f98c1 mov      rcx, rdx
1f98c4 xor      rcx, rbx
1f98c7 test     r15b, r15b
1f98ca lea      rax, [rdx + rbx]
1f98ce cmove    rax, rcx
1f98d2 mov      qword ptr [r14 + 0xf8], rax
1f98d9 movsxd   rdx, dword ptr [r14 + 0x11e0]
1f98e0 mov      r10, qword ptr [r14 + 0x20]
1f98e4 mov      rcx, rdx
1f98e7 xor      rcx, qword ptr [r14 + 0x350]
1f98ee xor      rcx, r10
1f98f1 xor      rcx, rbx
1f98f4 movabs   rbx, 0xff51afd7ed558ccd
1f98fe xor      rcx, qword ptr [r14 + 0x348]
1f9905 mov      rax, rcx
1f9908 shr      rax, 0x21
1f990c xor      rax, rcx
1f990f imul     rax, rbx
1f9913 mov      rcx, rax
1f9916 shr      rcx, 0x21
1f991a xor      rcx, rax
1f991d movabs   rax, 0xc4ceb9fe1a85ec53
1f9927 imul     rcx, rax
1f992b movzx    eax, r8b
1f992f mov      rbx, rcx
1f9932 shr      rbx, 0x21
1f9936 xor      rbx, rcx
1f9939 lea      rcx, [rip - 0x1f9940]
1f9940 xor      rax, 0xdd
1f9946 mov      qword ptr [r14 + 0x28], rbx
1f994a movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
1f9952 xor      bpl, 0x63
1f9956 movabs   r8, 0xff51afd7ed558ccd
1f9960 inc      edx
1f9962 mov      dword ptr [r14 + 0x11e0], edx
1f9969 test     dl, 0x1f
1f996c jne      0x1401f99b2
1f996e movsxd   rax, edx
1f9971 xor      rax, r10
1f9974 xor      rax, qword ptr [r14 + 0x348]
1f997b mov      rcx, rax
1f997e shr      rcx, 0x21
1f9982 xor      rcx, rax
1f9985 movabs   rax, 0xc4ceb9fe1a85ec53
1f998f imul     rcx, r8
1f9993 mov      rdx, rcx
1f9996 shr      rdx, 0x21
1f999a xor      rdx, rcx
1f999d imul     rdx, rax
1f99a1 mov      rax, rdx
1f99a4 shr      rax, 0x21
1f99a8 xor      rax, rdx
1f99ab mov      qword ptr [r14 + 0x348], rax
1f99b2 movzx    edx, bpl
1f99b6 xor      r10, rdx
1f99b9 mov      byte ptr [r14 + 0x4ad], bpl
1f99c0 xor      r10, qword ptr [rsp + 0x60]
1f99c5 mov      rax, r10
1f99c8 shr      rax, 0x21
1f99cc xor      rax, r10
1f99cf movabs   r10, 0x9e3779b97f4a7c15
1f99d9 imul     rax, r8
1f99dd imul     rdx, r10
1f99e1 imul     r9, r10
1f99e5 mov      rcx, rax
1f99e8 shr      rcx, 0x21
1f99ec xor      rcx, rax
1f99ef movabs   rax, 0xc4ceb9fe1a85ec53
1f99f9 imul     rcx, rax
1f99fd mov      rax, rcx
1f9a00 shr      rax, 0x21
1f9a04 xor      rax, rcx
1f9a07 mov      ecx, dword ptr [r14 + 0x1178]
1f9a0e mov      qword ptr [r14 + 0x20], rax
1f9a12 movabs   rax, 0xd6e8feb86659fd93
1f9a1c imul     rcx, rax
1f9a20 xor      rcx, rdx
1f9a23 xor      rcx, rbx
1f9a26 movabs   rbx, 0x2545f4914f6cdd1d
1f9a30 mov      rax, rcx
1f9a33 add      r9, rbx
1f9a36 shr      rax, 0x21
1f9a3a xor      rax, rcx
1f9a3d imul     rax, r8
1f9a41 mov      rdx, rax
1f9a44 shr      rdx, 0x21
1f9a48 xor      rdx, rax
1f9a4b movabs   rax, 0xc4ceb9fe1a85ec53
1f9a55 imul     rdx, rax
1f9a59 mov      rax, qword ptr [rsp + 0x78]
1f9a5e shr      rdx, 0x21
1f9a62 and      edx, 3
1f9a65 inc      rax
1f9a68 mov      qword ptr [r14 + 0x1b8], rax
1f9a6f cmp      bpl, 0x3e
1f9a73 jae      0x1401f9b0b
1f9a79 inc      qword ptr [r14 + 0x11a0]
1f9a80 lea      rax, [rip - 0x1f9a87]
1f9a87 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
1f9a8f mov      qword ptr [r14 + 0x1b0], r9
1f9a96 shr      r9, 0x1b
1f9a9a movzx    eax, r9b
1f9a9e mov      byte ptr [r14 + 0x160], al
1f9aa5 imul     rax, rdi
1f9aa9 mov      ebx, edx
1f9aab xor      rax, rsi
1f9aae xor      rax, r11
1f9ab1 mov      rcx, rax
1f9ab4 add      rax, r8
1f9ab7 xor      rcx, r8
1f9aba movzx    r8d, bpl
1f9abe test     r15b, r15b
1f9ac1 cmove    rax, rcx
1f9ac5 mov      rcx, r14
1f9ac8 mov      qword ptr [r14 + 0xf0], rax
1f9acf call     0x1401f1f50
1f9ad4 mov      eax, eax
1f9ad6 lea      edx, [r13 - 1]
1f9ada imul     rcx, rbx, 0x3e
1f9ade mov      r8, r12
1f9ae1 add      rcx, rax
1f9ae4 mov      rax, qword ptr [r14 + 0x4b8]
1f9aeb movsxd   r9, dword ptr [rax + rcx*4]
1f9aef mov      rcx, r14
1f9af2 movsxd   rax, dword ptr [r14 + 0x4c8]
1f9af9 xor      r9, rax
1f9afc add      r9, qword ptr [r14 + 0x4c0]
1f9b03 call     r9
1f9b06 jmp      0x1401f9bd2
1f9b0b inc      dword ptr [r14 + 0x11a8]
1f9b12 mov      rax, r9
1f9b15 shr      rax, 0x1b
1f9b19 movzx    ecx, al
1f9b1c lea      rax, [r11*4]
1f9b24 mov      byte ptr [r14 + 0x163], cl
1f9b2b imul     rcx, rdi
1f9b2f imul     r9, r10
1f9b33 xor      rcx, rax
1f9b36 xor      rcx, rsi
1f9b39 mov      qword ptr [r14 + 0x108], rcx
1f9b40 mov      r8, qword ptr [r14 + 0x1b8]
1f9b47 add      r9, rbx
1f9b4a mov      rax, r9
1f9b4d shr      rax, 0x1b
1f9b51 movzx    edx, al
1f9b54 mov      byte ptr [r14 + 0x16a], dl
1f9b5b imul     rax, r11, 0xb
1f9b5f imul     rdx, rdi
1f9b63 xor      rdx, rax
1f9b66 xor      rdx, rsi
1f9b69 mov      rcx, rdx
1f9b6c xor      rcx, 1
1f9b70 test     r15b, r15b
1f9b73 lea      rax, [rdx + 1]
1f9b77 cmove    rax, rcx
1f9b7b mov      qword ptr [r14 + 0x140], rax
1f9b82 lea      rax, [r8 + 2]
1f9b86 mov      qword ptr [r14 + 0x1b8], rax
1f9b8d imul     r9, r10
1f9b91 add      r9, rbx
1f9b94 mov      qword ptr [r14 + 0x1b0], r9
1f9b9b shr      r9, 0x1b
1f9b9f movzx    eax, r9b
1f9ba3 mov      byte ptr [r14 + 0x160], al
1f9baa imul     rax, rdi
1f9bae xor      rax, rsi
1f9bb1 xor      rax, r11
1f9bb4 mov      rcx, rax
1f9bb7 add      rax, 0xfe1ab
1f9bbd xor      rcx, 0xfe1ab
1f9bc4 test     r15b, r15b
1f9bc7 cmove    rax, rcx
1f9bcb mov      qword ptr [r14 + 0xf0], rax
1f9bd2 mov      rdi, qword ptr [rsp + 0x28]
1f9bd7 mov      rsi, qword ptr [rsp + 0x30]
1f9bdc mov      rbp, qword ptr [rsp + 0x68]
1f9be1 mov      r15, qword ptr [rsp + 0x20]
1f9be6 add      rsp, 0x38
1f9bea pop      r14
1f9bec pop      r13
1f9bee pop      r12
1f9bf0 pop      rbx
1f9bf1 ret      
1f9bf2 mov      edx, 0x54485254
1f9bf7 mov      rcx, r14
1f9bfa call     0x1401ed830
1f9bff int3     
1f9c00 mov      edx, 0x43414e59
1f9c05 mov      rcx, r14
1f9c08 call     0x1401ed830
1f9c0d int3     
