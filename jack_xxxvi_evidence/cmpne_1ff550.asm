1ff550 mov      qword ptr [rsp + 0x18], r8
1ff555 push     rbx
1ff556 push     rbp
1ff557 push     rdi
1ff558 push     r13
1ff55a push     r14
1ff55c sub      rsp, 0x30
1ff560 movsxd   rax, dword ptr [rcx + 0x11e0]
1ff567 mov      r14, rcx
1ff56a mov      r13d, edx
1ff56d movabs   rcx, 0xe6329a61b4f1b6b7
1ff577 imul     rax, rcx
1ff57b movabs   rcx, 0x446b10aa352f3288
1ff585 movabs   rbp, 0xff51afd7ed558ccd
1ff58f xor      rax, qword ptr [r14 + 0x28]
1ff593 mov      rdi, r8
1ff596 mov      qword ptr [rsp + 0x60], rax
1ff59b mov      rax, qword ptr [rsp + 0x60]
1ff5a0 movsxd   rax, dword ptr [r14 + 0x11e0]
1ff5a7 imul     rax, rcx
1ff5ab movabs   rcx, 0xa2a38ef4b664be9d
1ff5b5 xor      rax, qword ptr [r14 + 0x28]
1ff5b9 mov      qword ptr [rsp + 0x60], rax
1ff5be mov      rax, qword ptr [rsp + 0x60]
1ff5c3 movsxd   rax, dword ptr [r14 + 0x11e0]
1ff5ca imul     rax, rcx
1ff5ce xor      rax, qword ptr [r14 + 0x28]
1ff5d2 mov      qword ptr [rsp + 0x60], rax
1ff5d7 mov      rax, qword ptr [rsp + 0x60]
1ff5dc mov      rax, qword ptr [r14 + 0x2f8]
1ff5e3 shr      rax, 0xd
1ff5e7 mov      rcx, rax
1ff5ea shr      rcx, 0x21
1ff5ee xor      rcx, rax
1ff5f1 movabs   rax, 0xc4ceb9fe1a85ec53
1ff5fb imul     rcx, rbp
1ff5ff mov      rdx, rcx
1ff602 shr      rdx, 0x21
1ff606 xor      rdx, rcx
1ff609 imul     rdx, rax
1ff60d movabs   rax, 0x928806b8bc7cae99
1ff617 mov      rcx, rdx
1ff61a shr      rcx, 0x21
1ff61e xor      rcx, rdx
1ff621 xor      rcx, rax
1ff624 mov      rax, qword ptr [r14 + 0x2f8]
1ff62b add      rcx, rax
1ff62e mov      qword ptr [r14 + 0x2f8], rcx
1ff635 mov      rcx, r14
1ff638 call     0x1401ee940
1ff63d mov      rcx, r14
1ff640 mov      rbx, rax
1ff643 call     0x1401ee940
1ff648 xor      edx, edx
1ff64a mov      rcx, r14
1ff64d cmp      rax, rbx
1ff650 setne    dl
1ff653 call     0x1401ee820
1ff658 mov      rax, qword ptr [r14 + 0x2f8]
1ff65f test     r13d, r13d
1ff662 jns      0x1402001a0
1ff668 cmp      qword ptr [r14 + 0x11b8], rdi
1ff66f jne      0x1402001ae
1ff675 movsxd   rax, dword ptr [r14 + 0x11e0]
1ff67c movabs   rcx, 0x55d59e703dbb9b6b
1ff686 imul     rax, rcx
1ff68a mov      rcx, r14
1ff68d xor      rax, qword ptr [r14 + 0x28]
1ff691 mov      qword ptr [rsp + 0x60], rax
1ff696 mov      rax, qword ptr [rsp + 0x60]
1ff69b call     0x1401ee450
1ff6a0 test     eax, eax
1ff6a2 jne      0x140200194
1ff6a8 cmp      dword ptr [r14 + 0xad0], eax
1ff6af jne      0x140200194
1ff6b5 mov      r8, qword ptr [r14 + 0xf0]
1ff6bc movzx    ecx, byte ptr [r14 + 0x160]
1ff6c4 mov      rax, r8
1ff6c7 mov      r10, qword ptr [r14 + 0xe0]
1ff6ce mov      rbx, qword ptr [r14 + 0xd0]
1ff6d5 mov      r11, qword ptr [r14 + 0xd8]
1ff6dc movzx    edi, byte ptr [r14 + 0xe8]
1ff6e4 mov      r9, qword ptr [r14 + 0x1b0]
1ff6eb imul     rcx, r10
1ff6ef mov      qword ptr [rsp + 0x68], rsi
1ff6f4 mov      rsi, qword ptr [r14 + 0x1b8]
1ff6fb xor      rcx, rbx
1ff6fe xor      rcx, r11
1ff701 mov      qword ptr [rsp + 0x28], r12
1ff706 xor      rax, rcx
1ff709 mov      qword ptr [rsp + 0x20], r15
1ff70e sub      r8, rcx
1ff711 movabs   r15, 0x9e3779b97f4a7c15
1ff71b test     dil, dil
1ff71e movabs   r12, 0x2545f4914f6cdd1d
1ff728 cmove    r8, rax
1ff72c inc      rsi
1ff72f imul     r9, r15
1ff733 mov      qword ptr [r14 + 0x1b8], rsi
1ff73a mov      rcx, r8
1ff73d add      r9, r12
1ff740 mov      qword ptr [r14 + 0x1b0], r9
1ff747 mov      rax, r9
1ff74a shr      rax, 0x1b
1ff74e movzx    edx, al
1ff751 mov      byte ptr [r14 + 0x160], dl
1ff758 imul     rdx, r10
1ff75c xor      rdx, rbx
1ff75f xor      rdx, r11
1ff762 xor      rcx, rdx
1ff765 test     dil, dil
1ff768 lea      rax, [r8 + rdx]
1ff76c cmove    rax, rcx
1ff770 mov      qword ptr [r14 + 0xf0], rax
1ff777 cmp      r8d, 0x26dc07
1ff77e jne      0x140200185
1ff784 mov      eax, r13d
1ff787 btr      eax, 0x1f
1ff78b cmp      eax, 2
1ff78e jae      0x1401ff7da
1ff790 imul     r9, r15
1ff794 lea      rax, [rsi + 1]
1ff798 mov      qword ptr [r14 + 0x1b8], rax
1ff79f add      r9, r12
1ff7a2 mov      qword ptr [r14 + 0x1b0], r9
1ff7a9 shr      r9, 0x1b
1ff7ad movzx    eax, r9b
1ff7b1 mov      byte ptr [r14 + 0x160], al
1ff7b8 imul     rax, r10
1ff7bc xor      rax, rbx
1ff7bf xor      rax, r11
1ff7c2 mov      rcx, rax
1ff7c5 add      rax, 0x3abaef
1ff7cb xor      rcx, 0x3abaef
1ff7d2 test     dil, dil
1ff7d5 jmp      0x14020017a
1ff7da mov      rcx, r14
1ff7dd call     0x1401ee070
1ff7e2 movzx    ecx, byte ptr [r14 + 0x4ad]
1ff7ea movabs   r8, 0xc4ceb9fe1a85ec53
1ff7f4 mov      r11, qword ptr [r14 + 0xe0]
1ff7fb mov      r10, qword ptr [r14 + 0xd0]
1ff802 movzx    r9d, byte ptr [r14 + 0xe8]
1ff80a mov      eax, eax
1ff80c xor      rcx, rax
1ff80f xor      rcx, qword ptr [r14 + 0x11e8]
1ff816 mov      rax, rcx
1ff819 shr      rax, 0x21
1ff81d xor      rax, rcx
1ff820 imul     rax, rbp
1ff824 mov      rcx, rax
1ff827 shr      rcx, 0x21
1ff82b xor      rcx, rax
1ff82e imul     rcx, r8
1ff832 mov      rdx, rcx
1ff835 shr      rdx, 0x21
1ff839 xor      rdx, rcx
1ff83c mov      qword ptr [r14 + 0x11e8], rdx
1ff843 xor      rdx, qword ptr [r14 + 0x20]
1ff847 xor      rdx, qword ptr [r14 + 0x28]
1ff84b mov      rax, rdx
1ff84e shr      rax, 0x21
1ff852 xor      rax, rdx
1ff855 imul     rax, rbp
1ff859 mov      rcx, rax
1ff85c shr      rcx, 0x21
1ff860 xor      rcx, rax
1ff863 imul     rcx, r8
1ff867 mov      rax, rcx
1ff86a shr      rax, 0x21
1ff86e xor      rax, rcx
1ff871 mov      qword ptr [r14 + 0x20], rax
1ff875 mov      rdx, qword ptr [r14 + 0x138]
1ff87c movzx    ecx, byte ptr [r14 + 0x169]
1ff884 mov      rax, qword ptr [r14 + 0xd8]
1ff88b imul     rcx, r11
1ff88f lea      rbx, [rax + rax*4]
1ff893 mov      rax, rdx
1ff896 add      rbx, rbx
1ff899 xor      rcx, rbx
1ff89c xor      rcx, r10
1ff89f xor      rax, rcx
1ff8a2 sub      rdx, rcx
1ff8a5 test     r9b, r9b
1ff8a8 cmove    rdx, rax
1ff8ac mov      rax, qword ptr [r14 + 0x1b0]
1ff8b3 inc      qword ptr [r14 + 0x1b8]
1ff8ba imul     rax, r15
1ff8be add      rax, r12
1ff8c1 mov      qword ptr [r14 + 0x1b0], rax
1ff8c8 shr      rax, 0x1b
1ff8cc movzx    r8d, al
1ff8d0 mov      byte ptr [r14 + 0x169], r8b
1ff8d7 imul     r8, r11
1ff8db xor      r8, rbx
1ff8de xor      r8, r10
1ff8e1 mov      rcx, r8
1ff8e4 xor      rcx, rdx
1ff8e7 test     r9b, r9b
1ff8ea lea      rax, [r8 + rdx]
1ff8ee cmove    rax, rcx
1ff8f2 mov      rcx, r14
1ff8f5 mov      qword ptr [r14 + 0x138], rax
1ff8fc call     0x1401f0910
1ff901 mov      rax, qword ptr [r14 + 0xd8]
1ff908 mov      rdx, qword ptr [r14 + 0x130]
1ff90f mov      r10, qword ptr [r14 + 0xe0]
1ff916 movzx    ecx, byte ptr [r14 + 0x168]
1ff91e mov      rbx, qword ptr [r14 + 0xd0]
1ff925 lea      r11, [rax + rax*8]
1ff929 movzx    r9d, byte ptr [r14 + 0xe8]
1ff931 mov      rax, rdx
1ff934 imul     rcx, r10
1ff938 xor      rcx, r11
1ff93b xor      rcx, rbx
1ff93e xor      rax, rcx
1ff941 sub      rdx, rcx
1ff944 test     r9b, r9b
1ff947 cmove    rdx, rax
1ff94b mov      rax, qword ptr [r14 + 0x1b0]
1ff952 inc      qword ptr [r14 + 0x1b8]
1ff959 mov      rcx, rdx
1ff95c imul     rax, r15
1ff960 add      rax, r12
1ff963 mov      qword ptr [r14 + 0x1b0], rax
1ff96a shr      rax, 0x1b
1ff96e movzx    r8d, al
1ff972 mov      byte ptr [r14 + 0x168], r8b
1ff979 imul     r8, r10
1ff97d xor      r8, r11
1ff980 xor      r8, rbx
1ff983 xor      rcx, r8
1ff986 test     r9b, r9b
1ff989 lea      rax, [rdx + r8]
1ff98d cmove    rax, rcx
1ff991 mov      rcx, r14
1ff994 mov      qword ptr [r14 + 0x130], rax
1ff99b call     0x1401f0910
1ff9a0 mov      rcx, r14
1ff9a3 call     0x1401ee070
1ff9a8 cmp      eax, dword ptr [r14 + 0x1d8]
1ff9af jae      0x1401ff9bb
1ff9b1 mov      edx, eax
1ff9b3 mov      rcx, r14
1ff9b6 call     0x1401f0910
1ff9bb mov      rsi, qword ptr [r14 + 0xe0]
1ff9c2 mov      rbp, qword ptr [r14 + 0xd0]
1ff9c9 mov      r11, qword ptr [r14 + 0x130]
1ff9d0 movzx    edi, byte ptr [r14 + 0xe8]
1ff9d8 mov      rax, r11
1ff9db movzx    ecx, byte ptr [r14 + 0x168]
1ff9e3 mov      rbx, qword ptr [r14 + 0xd8]
1ff9ea mov      r8, qword ptr [r14 + 0x1b8]
1ff9f1 mov      r10, qword ptr [r14 + 0x1b0]
1ff9f8 imul     rcx, rsi
1ff9fc lea      r9, [rbx + rbx*8]
1ffa00 xor      rcx, r9
1ffa03 xor      rcx, rbp
1ffa06 xor      rax, rcx
1ffa09 sub      r11, rcx
1ffa0c test     dil, dil
1ffa0f cmove    r11, rax
1ffa13 imul     r10, r15
1ffa17 mov      rcx, r11
1ffa1a add      r10, r12
1ffa1d mov      rax, r10
1ffa20 shr      rax, 0x1b
1ffa24 movzx    edx, al
1ffa27 mov      byte ptr [r14 + 0x168], dl
1ffa2e imul     rdx, rsi
1ffa32 xor      rdx, r9
1ffa35 xor      rdx, rbp
1ffa38 xor      rcx, rdx
1ffa3b test     dil, dil
1ffa3e lea      rax, [r11 + rdx]
1ffa42 cmove    rax, rcx
1ffa46 mov      rcx, r11
1ffa49 mov      qword ptr [r14 + 0x130], rax
1ffa50 lea      rax, [r8 + 2]
1ffa54 mov      qword ptr [r14 + 0x1b8], rax
1ffa5b mov      r8d, 0xcf9d
1ffa61 imul     r10, r15
1ffa65 lea      rax, [rbx + rbx*4]
1ffa69 add      rax, rax
1ffa6c add      r10, r12
1ffa6f mov      qword ptr [r14 + 0x1b0], r10
1ffa76 shr      r10, 0x1b
1ffa7a movzx    edx, r10b
1ffa7e mov      byte ptr [r14 + 0x169], dl
1ffa85 imul     rdx, rsi
1ffa89 xor      rdx, rax
1ffa8c xor      rdx, rbp
1ffa8f xor      rcx, rdx
1ffa92 test     dil, dil
1ffa95 lea      rax, [r11 + rdx]
1ffa99 cmove    rax, rcx
1ffa9d mov      rcx, r14
1ffaa0 mov      qword ptr [r14 + 0x138], rax
1ffaa7 movzx    edx, byte ptr [r14 + 0x4ad]
1ffaaf xor      rdx, qword ptr [r14 + 0x348]
1ffab6 call     0x1401f1520
1ffabb mov      r8, qword ptr [r14 + 0x348]
1ffac2 movabs   rdi, 0xff51afd7ed558ccd
1ffacc mov      rax, r8
1ffacf movabs   rsi, 0xc4ceb9fe1a85ec53
1ffad9 xor      rax, qword ptr [r14 + 0x20]
1ffadd mov      rcx, rax
1ffae0 shr      rcx, 0x21
1ffae4 xor      rcx, rax
1ffae7 imul     rcx, rdi
1ffaeb mov      rax, rcx
1ffaee shr      rax, 0x21
1ffaf2 xor      rax, rcx
1ffaf5 imul     rax, rsi
1ffaf9 mov      rdx, rax
1ffafc shr      rdx, 0x21
1ffb00 xor      edx, eax
1ffb02 lea      eax, [rdx + 1]
1ffb05 mov      ecx, eax
1ffb07 xor      eax, edx
1ffb09 imul     ecx, edx
1ffb0c not      ecx
1ffb0e and      ecx, eax
1ffb10 test     cl, 1
1ffb13 je       0x1401ffb7c
1ffb15 and      r8b, 3
1ffb19 cmp      r8b, 1
1ffb1d jne      0x1401ffb7c
1ffb1f mov      rax, qword ptr [r14 + 0x1b0]
1ffb26 inc      qword ptr [r14 + 0x1b8]
1ffb2d imul     rax, r15
1ffb31 add      rax, r12
1ffb34 mov      qword ptr [r14 + 0x1b0], rax
1ffb3b shr      rax, 0x1b
1ffb3f movzx    eax, al
1ffb42 mov      byte ptr [r14 + 0x160], al
1ffb49 imul     rax, qword ptr [r14 + 0xe0]
1ffb51 xor      rax, qword ptr [r14 + 0xd8]
1ffb58 xor      rax, qword ptr [r14 + 0xd0]
1ffb5f mov      rcx, rax
1ffb62 add      rax, 0x17ed28
1ffb68 xor      rcx, 0x17ed28
1ffb6f cmp      byte ptr [r14 + 0xe8], 0
1ffb77 jmp      0x14020017a
1ffb7c mov      rcx, r14
1ffb7f call     0x1401ee070
1ffb84 mov      ebx, eax
1ffb86 cmp      eax, dword ptr [r14 + 0x1d8]
1ffb8d jb       0x1401ffbec
1ffb8f mov      rax, qword ptr [r14 + 0x1b0]
1ffb96 inc      qword ptr [r14 + 0x1b8]
1ffb9d imul     rax, r15
1ffba1 add      rax, r12
1ffba4 mov      qword ptr [r14 + 0x1b0], rax
1ffbab shr      rax, 0x1b
1ffbaf movzx    eax, al
1ffbb2 mov      byte ptr [r14 + 0x160], al
1ffbb9 imul     rax, qword ptr [r14 + 0xe0]
1ffbc1 xor      rax, qword ptr [r14 + 0xd8]
1ffbc8 xor      rax, qword ptr [r14 + 0xd0]
1ffbcf mov      rcx, rax
1ffbd2 add      rax, 0xfe1ab
1ffbd8 xor      rcx, 0xfe1ab
1ffbdf cmp      byte ptr [r14 + 0xe8], 0
1ffbe7 jmp      0x14020017a
1ffbec mov      edx, ebx
1ffbee mov      rcx, r14
1ffbf1 call     0x1401f25b0
1ffbf6 movsxd   rcx, dword ptr [r14 + 0x11e0]
1ffbfd movabs   r8, 0xd6e8feb86659fd93
1ffc07 mov      rdx, qword ptr [r14 + 0x20]
1ffc0b mov      rax, rbx
1ffc0e imul     rax, r8
1ffc12 imul     rcx, r15
1ffc16 rol      rdx, 0x11
1ffc1a xor      rax, rdx
1ffc1d xor      rcx, qword ptr [r14 + 0x260]
1ffc24 xor      rax, rcx
1ffc27 mov      rcx, rax
1ffc2a shr      rcx, 0x21
1ffc2e xor      rcx, rax
1ffc31 imul     rcx, rdi
1ffc35 mov      rdx, rcx
1ffc38 shr      rdx, 0x21
1ffc3c xor      rdx, rcx
1ffc3f imul     rdx, rsi
1ffc43 mov      rax, rdx
1ffc46 shr      rax, 0x21
1ffc4a xor      rax, rdx
1ffc4d mov      r10, rax
1ffc50 shr      r10, 0x1d
1ffc54 xor      r10, rax
1ffc57 or       r10, 1
1ffc5b mov      rax, r10
1ffc5e mov      qword ptr [r14 + 0x260], r10
1ffc65 and      eax, 0x3ff
1ffc6a cmp      rax, 0x2c5
1ffc70 jne      0x1401ffc81
1ffc72 mov      rcx, r14
1ffc75 call     0x1402297e0
1ffc7a mov      r10, qword ptr [r14 + 0x260]
1ffc81 movzx    eax, r10b
1ffc85 and      al, 0x1f
1ffc87 cmp      al, 0x15
1ffc89 jne      0x1401ffd76
1ffc8f movsxd   rax, dword ptr [r14 + 0x11e0]
1ffc96 xor      rax, 0x5a5a
1ffc9c mov      rcx, qword ptr [r14 + 0x20]
1ffca0 imul     rax, r15
1ffca4 rol      rcx, 0x11
1ffca8 xor      rax, r10
1ffcab xor      rcx, rax
1ffcae movabs   rax, 0x8f70feda99a6026d
1ffcb8 xor      rcx, rax
1ffcbb mov      rax, rcx
1ffcbe shr      rax, 0x21
1ffcc2 xor      rax, rcx
1ffcc5 imul     rax, rdi
1ffcc9 mov      rcx, rax
1ffccc shr      rcx, 0x21
1ffcd0 xor      rcx, rax
1ffcd3 imul     rcx, rsi
1ffcd7 mov      rax, rcx
1ffcda shr      rax, 0x21
1ffcde xor      rax, rcx
1ffce1 mov      r9, rax
1ffce4 shr      r9, 0x1d
1ffce8 xor      r9, rax
1ffceb or       r9, 1
1ffcef mov      rax, r9
1ffcf2 mov      rcx, r9
1ffcf5 shr      rax, 8
1ffcf9 and      eax, 3
1ffcfc shr      rcx, 0x28
1ffd00 imul     r8, rax, 0x3e
1ffd04 mov      eax, 0x8421085
1ffd09 mul      ecx
1ffd0b mov      eax, ecx
1ffd0d sub      eax, edx
1ffd0f shr      eax, 1
1ffd11 add      eax, edx
1ffd13 shr      eax, 5
1ffd16 imul     eax, eax, 0x3e
1ffd19 sub      ecx, eax
1ffd1b mov      eax, ecx
1ffd1d add      r8, rax
1ffd20 mov      rax, qword ptr [r14 + 0x4b8]
1ffd27 movsxd   rcx, dword ptr [rax + r8*4]
1ffd2b movsxd   rax, dword ptr [r14 + 0x4c8]
1ffd32 xor      rcx, rax
1ffd35 add      rcx, qword ptr [r14 + 0x4c0]
1ffd3c xor      rcx, r9
1ffd3f mov      rax, rcx
1ffd42 shr      rax, 0x21
1ffd46 xor      rax, rcx
1ffd49 imul     rax, rdi
1ffd4d mov      rcx, rax
1ffd50 shr      rcx, 0x21
1ffd54 xor      rcx, rax
1ffd57 imul     rcx, rsi
1ffd5b mov      rax, rcx
1ffd5e shr      rax, 0x21
1ffd62 xor      rax, rcx
1ffd65 xor      rax, r10
1ffd68 inc      qword ptr [r14 + 0x268]
1ffd6f mov      qword ptr [r14 + 0x260], rax
1ffd76 inc      dword ptr [r14 + 0x200]
1ffd7d mov      eax, dword ptr [r14 + 0x200]
1ffd84 cmp      eax, dword ptr [r14 + 0x1fc]
1ffd8b jb       0x1401ffda0
1ffd8d mov      rcx, r14
1ffd90 mov      dword ptr [r14 + 0x200], 0
1ffd9b call     0x1401ef7c0
1ffda0 mov      r8d, ebx
1ffda3 mov      edx, ebx
1ffda5 mov      rcx, r14
1ffda8 call     0x1401f0660
1ffdad inc      qword ptr [r14 + 0x1b8]
1ffdb4 mov      rcx, rbx
1ffdb7 mov      r9, qword ptr [r14 + 0x1b0]
1ffdbe mov      rbp, r12
1ffdc1 mov      r10, qword ptr [r14 + 0x1b8]
1ffdc8 imul     r9, r15
1ffdcc add      r9, r12
1ffdcf lea      r12d, [rbx + 1]
1ffdd3 mov      qword ptr [r14 + 0x1b0], r9
1ffdda mov      rax, r9
1ffddd shr      rax, 0x1b
1ffde1 movzx    edx, al
1ffde4 mov      byte ptr [r14 + 0x168], dl
1ffdeb mov      rdi, qword ptr [r14 + 0xe0]
1ffdf2 mov      r11, qword ptr [r14 + 0xd8]
1ffdf9 mov      rsi, qword ptr [r14 + 0xd0]
1ffe00 movzx    r15d, byte ptr [r14 + 0xe8]
1ffe08 imul     rdx, rdi
1ffe0c lea      rax, [r11 + r11*8]
1ffe10 xor      rdx, rax
1ffe13 xor      rdx, rsi
1ffe16 xor      rcx, rdx
1ffe19 test     r15b, r15b
1ffe1c lea      rax, [rbx + rdx]
1ffe20 cmove    rax, rcx
1ffe24 inc      r10
1ffe27 mov      qword ptr [r14 + 0x130], rax
1ffe2e mov      rcx, qword ptr [r14 + 0x1d0]
1ffe35 mov      rax, qword ptr [r14 + 0x48]
1ffe39 mov      qword ptr [rsp + 0x60], r10
1ffe3e movzx    r8d, byte ptr [rcx + rbx]
1ffe43 xor      r8b, byte ptr [rax + rbx]
1ffe47 movabs   rax, 0x9e3779b97f4a7c15
1ffe51 imul     r9, rax
1ffe55 mov      qword ptr [r14 + 0x1b8], r10
1ffe5c add      r9, rbp
1ffe5f mov      rax, r9
1ffe62 shr      rax, 0x1b
1ffe66 movzx    edx, al
1ffe69 lea      rax, [r11 + r11]
1ffe6d mov      byte ptr [r14 + 0x161], dl
1ffe74 imul     rdx, rdi
1ffe78 xor      rdx, rax
1ffe7b xor      rdx, rsi
1ffe7e mov      rcx, rdx
1ffe81 xor      rcx, r12
1ffe84 test     r15b, r15b
1ffe87 lea      rax, [rdx + r12]
1ffe8b cmove    rax, rcx
1ffe8f mov      qword ptr [r14 + 0xf8], rax
1ffe96 movsxd   rdx, dword ptr [r14 + 0x11e0]
1ffe9d mov      r10, qword ptr [r14 + 0x20]
1ffea1 mov      rcx, rdx
1ffea4 xor      rcx, qword ptr [r14 + 0x350]
1ffeab xor      rcx, r10
1ffeae xor      rcx, r12
1ffeb1 xor      rcx, qword ptr [r14 + 0x348]
1ffeb8 mov      rax, rcx
1ffebb shr      rax, 0x21
1ffebf xor      rax, rcx
1ffec2 movabs   rcx, 0xff51afd7ed558ccd
1ffecc imul     rax, rcx
1ffed0 mov      rcx, rax
1ffed3 shr      rcx, 0x21
1ffed7 xor      rcx, rax
1ffeda movabs   rax, 0xc4ceb9fe1a85ec53
1ffee4 imul     rcx, rax
1ffee8 movzx    eax, r8b
1ffeec mov      rbx, rcx
1ffeef xor      rax, 0xdd
1ffef5 shr      rbx, 0x21
1ffef9 xor      rbx, rcx
1ffefc lea      rcx, [rip - 0x1fff03]
1fff03 mov      qword ptr [r14 + 0x28], rbx
1fff07 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
1fff0f xor      bpl, 0x63
1fff13 inc      edx
1fff15 mov      dword ptr [r14 + 0x11e0], edx
1fff1c movabs   r8, 0xff51afd7ed558ccd
1fff26 test     dl, 0x1f
1fff29 jne      0x1401fff6f
1fff2b movsxd   rax, edx
1fff2e xor      rax, r10
1fff31 xor      rax, qword ptr [r14 + 0x348]
1fff38 mov      rcx, rax
1fff3b shr      rcx, 0x21
1fff3f xor      rcx, rax
1fff42 movabs   rax, 0xc4ceb9fe1a85ec53
1fff4c imul     rcx, r8
1fff50 mov      rdx, rcx
1fff53 shr      rdx, 0x21
1fff57 xor      rdx, rcx
1fff5a imul     rdx, rax
1fff5e mov      rax, rdx
1fff61 shr      rax, 0x21
1fff65 xor      rax, rdx
1fff68 mov      qword ptr [r14 + 0x348], rax
1fff6f movzx    edx, bpl
1fff73 xor      r10, rdx
1fff76 mov      byte ptr [r14 + 0x4ad], bpl
1fff7d xor      r10, r12
1fff80 movabs   r12, 0xc4ceb9fe1a85ec53
1fff8a mov      rax, r10
1fff8d shr      rax, 0x21
1fff91 xor      rax, r10
1fff94 movabs   r10, 0x9e3779b97f4a7c15
1fff9e imul     rax, r8
1fffa2 imul     rdx, r10
1fffa6 imul     r9, r10
1fffaa mov      rcx, rax
1fffad shr      rcx, 0x21
1fffb1 xor      rcx, rax
1fffb4 imul     rcx, r12
1fffb8 mov      rax, rcx
1fffbb shr      rax, 0x21
1fffbf xor      rax, rcx
1fffc2 mov      ecx, dword ptr [r14 + 0x1178]
1fffc9 mov      qword ptr [r14 + 0x20], rax
1fffcd movabs   rax, 0xd6e8feb86659fd93
1fffd7 imul     rcx, rax
1fffdb xor      rcx, rdx
1fffde xor      rcx, rbx
1fffe1 movabs   rbx, 0x2545f4914f6cdd1d
1fffeb mov      rax, rcx
1fffee add      r9, rbx
1ffff1 shr      rax, 0x21
1ffff5 xor      rax, rcx
1ffff8 imul     rax, r8
1ffffc mov      rdx, rax
1fffff shr      rdx, 0x21
200003 xor      rdx, rax
200006 mov      rax, qword ptr [rsp + 0x60]
20000b imul     rdx, r12
20000f shr      rdx, 0x21
200013 and      edx, 3
200016 inc      rax
200019 mov      qword ptr [r14 + 0x1b8], rax
200020 cmp      bpl, 0x3e
200024 jae      0x1402000be
20002a inc      qword ptr [r14 + 0x11a0]
200031 lea      rax, [rip - 0x200038]
200038 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
200040 mov      qword ptr [r14 + 0x1b0], r9
200047 shr      r9, 0x1b
20004b movzx    eax, r9b
20004f mov      byte ptr [r14 + 0x160], al
200056 imul     rax, rdi
20005a mov      ebx, edx
20005c xor      rax, rsi
20005f xor      rax, r11
200062 mov      rcx, rax
200065 add      rax, r8
200068 xor      rcx, r8
20006b movzx    r8d, bpl
20006f test     r15b, r15b
200072 cmove    rax, rcx
200076 mov      rcx, r14
200079 mov      qword ptr [r14 + 0xf0], rax
200080 call     0x1401f1f50
200085 mov      r8, qword ptr [rsp + 0x70]
20008a lea      edx, [r13 - 1]
20008e mov      eax, eax
200090 imul     rcx, rbx, 0x3e
200094 add      rcx, rax
200097 mov      rax, qword ptr [r14 + 0x4b8]
20009e movsxd   r9, dword ptr [rax + rcx*4]
2000a2 mov      rcx, r14
2000a5 movsxd   rax, dword ptr [r14 + 0x4c8]
2000ac xor      r9, rax
2000af add      r9, qword ptr [r14 + 0x4c0]
2000b6 call     r9
2000b9 jmp      0x140200185
2000be inc      dword ptr [r14 + 0x11a8]
2000c5 mov      rax, r9
2000c8 shr      rax, 0x1b
2000cc movzx    ecx, al
2000cf lea      rax, [r11*4]
2000d7 mov      byte ptr [r14 + 0x163], cl
2000de imul     rcx, rdi
2000e2 imul     r9, r10
2000e6 xor      rcx, rax
2000e9 xor      rcx, rsi
2000ec mov      qword ptr [r14 + 0x108], rcx
2000f3 mov      r8, qword ptr [r14 + 0x1b8]
2000fa add      r9, rbx
2000fd mov      rax, r9
200100 shr      rax, 0x1b
200104 movzx    edx, al
200107 mov      byte ptr [r14 + 0x16a], dl
20010e imul     rax, r11, 0xb
200112 imul     rdx, rdi
200116 xor      rdx, rax
200119 xor      rdx, rsi
20011c mov      rcx, rdx
20011f xor      rcx, 1
200123 test     r15b, r15b
200126 lea      rax, [rdx + 1]
20012a cmove    rax, rcx
20012e mov      qword ptr [r14 + 0x140], rax
200135 lea      rax, [r8 + 2]
200139 mov      qword ptr [r14 + 0x1b8], rax
200140 imul     r9, r10
200144 add      r9, rbx
200147 mov      qword ptr [r14 + 0x1b0], r9
20014e shr      r9, 0x1b
200152 movzx    eax, r9b
200156 mov      byte ptr [r14 + 0x160], al
20015d imul     rax, rdi
200161 xor      rax, rsi
200164 xor      rax, r11
200167 mov      rcx, rax
20016a add      rax, 0xfe1ab
200170 xor      rcx, 0xfe1ab
200177 test     r15b, r15b
20017a cmove    rax, rcx
20017e mov      qword ptr [r14 + 0xf0], rax
200185 mov      r12, qword ptr [rsp + 0x28]
20018a mov      rsi, qword ptr [rsp + 0x68]
20018f mov      r15, qword ptr [rsp + 0x20]
200194 add      rsp, 0x30
200198 pop      r14
20019a pop      r13
20019c pop      rdi
20019d pop      rbp
20019e pop      rbx
20019f ret      
2001a0 mov      edx, 0x54485254
2001a5 mov      rcx, r14
2001a8 call     0x1401ed830
2001ad int3     
2001ae mov      edx, 0x43414e59
2001b3 mov      rcx, r14
2001b6 call     0x1401ed830
2001bb int3     
