1fb5c0 mov      qword ptr [rsp + 0x18], r8
1fb5c5 push     rbx
1fb5c6 push     rbp
1fb5c7 push     rdi
1fb5c8 push     r13
1fb5ca push     r14
1fb5cc sub      rsp, 0x30
1fb5d0 movsxd   rax, dword ptr [rcx + 0x11e0]
1fb5d7 mov      r14, rcx
1fb5da mov      r13d, edx
1fb5dd movabs   rcx, 0xdc0eb3f9b589e60b
1fb5e7 imul     rax, rcx
1fb5eb movabs   rcx, 0x7e57393234576234
1fb5f5 movabs   rbp, 0xff51afd7ed558ccd
1fb5ff xor      rax, qword ptr [r14 + 0x28]
1fb603 mov      rdi, r8
1fb606 mov      qword ptr [rsp + 0x60], rax
1fb60b mov      rax, qword ptr [rsp + 0x60]
1fb610 movsxd   rax, dword ptr [r14 + 0x11e0]
1fb617 imul     rax, rcx
1fb61b movabs   rcx, 0x989fa76cb71cee21
1fb625 xor      rax, qword ptr [r14 + 0x28]
1fb629 mov      qword ptr [rsp + 0x60], rax
1fb62e mov      rax, qword ptr [rsp + 0x60]
1fb633 movsxd   rax, dword ptr [r14 + 0x11e0]
1fb63a imul     rax, rcx
1fb63e xor      rax, qword ptr [r14 + 0x28]
1fb642 mov      qword ptr [rsp + 0x60], rax
1fb647 mov      rax, qword ptr [rsp + 0x60]
1fb64c mov      rax, qword ptr [r14 + 0x2f8]
1fb653 shr      rax, 0xd
1fb657 mov      rcx, rax
1fb65a shr      rcx, 0x21
1fb65e xor      rcx, rax
1fb661 movabs   rax, 0xc4ceb9fe1a85ec53
1fb66b imul     rcx, rbp
1fb66f mov      rdx, rcx
1fb672 shr      rdx, 0x21
1fb676 xor      rdx, rcx
1fb679 imul     rdx, rax
1fb67d movabs   rax, 0xa8b42f20bd04fe25
1fb687 mov      rcx, rdx
1fb68a shr      rcx, 0x21
1fb68e xor      rcx, rdx
1fb691 xor      rcx, rax
1fb694 mov      rax, qword ptr [r14 + 0x2f8]
1fb69b add      rcx, rax
1fb69e mov      qword ptr [r14 + 0x2f8], rcx
1fb6a5 mov      rcx, r14
1fb6a8 call     0x1401ee940
1fb6ad mov      rcx, r14
1fb6b0 mov      rbx, rax
1fb6b3 call     0x1401ee940
1fb6b8 xor      rax, rbx
1fb6bb mov      rcx, r14
1fb6be mov      rdx, rax
1fb6c1 call     0x1401ee820
1fb6c6 mov      rax, qword ptr [r14 + 0x2f8]
1fb6cd test     r13d, r13d
1fb6d0 jns      0x1401fc20e
1fb6d6 cmp      qword ptr [r14 + 0x11b8], rdi
1fb6dd jne      0x1401fc21c
1fb6e3 movsxd   rax, dword ptr [r14 + 0x11e0]
1fb6ea movabs   rcx, 0xb5f0e16ad68dcac8
1fb6f4 imul     rax, rcx
1fb6f8 mov      rcx, r14
1fb6fb xor      rax, qword ptr [r14 + 0x28]
1fb6ff mov      qword ptr [rsp + 0x60], rax
1fb704 mov      rax, qword ptr [rsp + 0x60]
1fb709 call     0x1401ee450
1fb70e test     eax, eax
1fb710 jne      0x1401fc202
1fb716 cmp      dword ptr [r14 + 0xad0], eax
1fb71d jne      0x1401fc202
1fb723 mov      r8, qword ptr [r14 + 0xf0]
1fb72a movzx    ecx, byte ptr [r14 + 0x160]
1fb732 mov      rax, r8
1fb735 mov      r10, qword ptr [r14 + 0xe0]
1fb73c mov      rbx, qword ptr [r14 + 0xd0]
1fb743 mov      r11, qword ptr [r14 + 0xd8]
1fb74a movzx    edi, byte ptr [r14 + 0xe8]
1fb752 mov      r9, qword ptr [r14 + 0x1b0]
1fb759 imul     rcx, r10
1fb75d mov      qword ptr [rsp + 0x68], rsi
1fb762 mov      rsi, qword ptr [r14 + 0x1b8]
1fb769 xor      rcx, rbx
1fb76c xor      rcx, r11
1fb76f mov      qword ptr [rsp + 0x28], r12
1fb774 xor      rax, rcx
1fb777 mov      qword ptr [rsp + 0x20], r15
1fb77c sub      r8, rcx
1fb77f movabs   r15, 0x9e3779b97f4a7c15
1fb789 test     dil, dil
1fb78c movabs   r12, 0x2545f4914f6cdd1d
1fb796 cmove    r8, rax
1fb79a inc      rsi
1fb79d imul     r9, r15
1fb7a1 mov      qword ptr [r14 + 0x1b8], rsi
1fb7a8 mov      rcx, r8
1fb7ab add      r9, r12
1fb7ae mov      qword ptr [r14 + 0x1b0], r9
1fb7b5 mov      rax, r9
1fb7b8 shr      rax, 0x1b
1fb7bc movzx    edx, al
1fb7bf mov      byte ptr [r14 + 0x160], dl
1fb7c6 imul     rdx, r10
1fb7ca xor      rdx, rbx
1fb7cd xor      rdx, r11
1fb7d0 xor      rcx, rdx
1fb7d3 test     dil, dil
1fb7d6 lea      rax, [r8 + rdx]
1fb7da cmove    rax, rcx
1fb7de mov      qword ptr [r14 + 0xf0], rax
1fb7e5 cmp      r8d, 0x26dc07
1fb7ec jne      0x1401fc1f3
1fb7f2 mov      eax, r13d
1fb7f5 btr      eax, 0x1f
1fb7f9 cmp      eax, 2
1fb7fc jae      0x1401fb848
1fb7fe imul     r9, r15
1fb802 lea      rax, [rsi + 1]
1fb806 mov      qword ptr [r14 + 0x1b8], rax
1fb80d add      r9, r12
1fb810 mov      qword ptr [r14 + 0x1b0], r9
1fb817 shr      r9, 0x1b
1fb81b movzx    eax, r9b
1fb81f mov      byte ptr [r14 + 0x160], al
1fb826 imul     rax, r10
1fb82a xor      rax, rbx
1fb82d xor      rax, r11
1fb830 mov      rcx, rax
1fb833 add      rax, 0x3abaef
1fb839 xor      rcx, 0x3abaef
1fb840 test     dil, dil
1fb843 jmp      0x1401fc1e8
1fb848 mov      rcx, r14
1fb84b call     0x1401ee070
1fb850 movzx    ecx, byte ptr [r14 + 0x4ad]
1fb858 movabs   r8, 0xc4ceb9fe1a85ec53
1fb862 xor      rcx, qword ptr [r14 + 0x11e8]
1fb869 mov      r11, qword ptr [r14 + 0xe0]
1fb870 mov      r10, qword ptr [r14 + 0xd0]
1fb877 movzx    r9d, byte ptr [r14 + 0xe8]
1fb87f mov      eax, eax
1fb881 xor      rcx, rax
1fb884 mov      rax, rcx
1fb887 shr      rax, 0x21
1fb88b xor      rax, rcx
1fb88e imul     rax, rbp
1fb892 mov      rcx, rax
1fb895 shr      rcx, 0x21
1fb899 xor      rcx, rax
1fb89c imul     rcx, r8
1fb8a0 mov      rdx, rcx
1fb8a3 shr      rdx, 0x21
1fb8a7 xor      rdx, rcx
1fb8aa mov      qword ptr [r14 + 0x11e8], rdx
1fb8b1 xor      rdx, qword ptr [r14 + 0x28]
1fb8b5 xor      rdx, qword ptr [r14 + 0x20]
1fb8b9 mov      rax, rdx
1fb8bc shr      rax, 0x21
1fb8c0 xor      rax, rdx
1fb8c3 imul     rax, rbp
1fb8c7 mov      rcx, rax
1fb8ca shr      rcx, 0x21
1fb8ce xor      rcx, rax
1fb8d1 imul     rcx, r8
1fb8d5 mov      rax, rcx
1fb8d8 shr      rax, 0x21
1fb8dc xor      rax, rcx
1fb8df mov      qword ptr [r14 + 0x20], rax
1fb8e3 mov      rdx, qword ptr [r14 + 0x138]
1fb8ea movzx    ecx, byte ptr [r14 + 0x169]
1fb8f2 mov      rax, qword ptr [r14 + 0xd8]
1fb8f9 imul     rcx, r11
1fb8fd lea      rbx, [rax + rax*4]
1fb901 mov      rax, rdx
1fb904 add      rbx, rbx
1fb907 xor      rcx, rbx
1fb90a xor      rcx, r10
1fb90d xor      rax, rcx
1fb910 sub      rdx, rcx
1fb913 test     r9b, r9b
1fb916 cmove    rdx, rax
1fb91a mov      rax, qword ptr [r14 + 0x1b0]
1fb921 inc      qword ptr [r14 + 0x1b8]
1fb928 imul     rax, r15
1fb92c add      rax, r12
1fb92f mov      qword ptr [r14 + 0x1b0], rax
1fb936 shr      rax, 0x1b
1fb93a movzx    r8d, al
1fb93e mov      byte ptr [r14 + 0x169], r8b
1fb945 imul     r8, r11
1fb949 xor      r8, rbx
1fb94c xor      r8, r10
1fb94f mov      rcx, r8
1fb952 xor      rcx, rdx
1fb955 test     r9b, r9b
1fb958 lea      rax, [r8 + rdx]
1fb95c cmove    rax, rcx
1fb960 mov      rcx, r14
1fb963 mov      qword ptr [r14 + 0x138], rax
1fb96a call     0x1401f0910
1fb96f mov      rax, qword ptr [r14 + 0xd8]
1fb976 mov      rdx, qword ptr [r14 + 0x130]
1fb97d mov      r10, qword ptr [r14 + 0xe0]
1fb984 movzx    ecx, byte ptr [r14 + 0x168]
1fb98c mov      rbx, qword ptr [r14 + 0xd0]
1fb993 lea      r11, [rax + rax*8]
1fb997 movzx    r9d, byte ptr [r14 + 0xe8]
1fb99f mov      rax, rdx
1fb9a2 imul     rcx, r10
1fb9a6 xor      rcx, r11
1fb9a9 xor      rcx, rbx
1fb9ac xor      rax, rcx
1fb9af sub      rdx, rcx
1fb9b2 test     r9b, r9b
1fb9b5 cmove    rdx, rax
1fb9b9 mov      rax, qword ptr [r14 + 0x1b0]
1fb9c0 inc      qword ptr [r14 + 0x1b8]
1fb9c7 mov      rcx, rdx
1fb9ca imul     rax, r15
1fb9ce add      rax, r12
1fb9d1 mov      qword ptr [r14 + 0x1b0], rax
1fb9d8 shr      rax, 0x1b
1fb9dc movzx    r8d, al
1fb9e0 mov      byte ptr [r14 + 0x168], r8b
1fb9e7 imul     r8, r10
1fb9eb xor      r8, r11
1fb9ee xor      r8, rbx
1fb9f1 xor      rcx, r8
1fb9f4 test     r9b, r9b
1fb9f7 lea      rax, [rdx + r8]
1fb9fb cmove    rax, rcx
1fb9ff mov      rcx, r14
1fba02 mov      qword ptr [r14 + 0x130], rax
1fba09 call     0x1401f0910
1fba0e mov      rcx, r14
1fba11 call     0x1401ee070
1fba16 cmp      eax, dword ptr [r14 + 0x1d8]
1fba1d jae      0x1401fba29
1fba1f mov      edx, eax
1fba21 mov      rcx, r14
1fba24 call     0x1401f0910
1fba29 mov      rsi, qword ptr [r14 + 0xe0]
1fba30 mov      rbp, qword ptr [r14 + 0xd0]
1fba37 mov      r11, qword ptr [r14 + 0x130]
1fba3e movzx    edi, byte ptr [r14 + 0xe8]
1fba46 mov      rax, r11
1fba49 movzx    ecx, byte ptr [r14 + 0x168]
1fba51 mov      rbx, qword ptr [r14 + 0xd8]
1fba58 mov      r8, qword ptr [r14 + 0x1b8]
1fba5f mov      r10, qword ptr [r14 + 0x1b0]
1fba66 imul     rcx, rsi
1fba6a lea      r9, [rbx + rbx*8]
1fba6e xor      rcx, r9
1fba71 xor      rcx, rbp
1fba74 xor      rax, rcx
1fba77 sub      r11, rcx
1fba7a test     dil, dil
1fba7d cmove    r11, rax
1fba81 imul     r10, r15
1fba85 mov      rcx, r11
1fba88 add      r10, r12
1fba8b mov      rax, r10
1fba8e shr      rax, 0x1b
1fba92 movzx    edx, al
1fba95 mov      byte ptr [r14 + 0x168], dl
1fba9c imul     rdx, rsi
1fbaa0 xor      rdx, r9
1fbaa3 xor      rdx, rbp
1fbaa6 xor      rcx, rdx
1fbaa9 test     dil, dil
1fbaac lea      rax, [r11 + rdx]
1fbab0 cmove    rax, rcx
1fbab4 mov      rcx, r11
1fbab7 mov      qword ptr [r14 + 0x130], rax
1fbabe lea      rax, [r8 + 2]
1fbac2 mov      qword ptr [r14 + 0x1b8], rax
1fbac9 mov      r8d, 0xb087
1fbacf imul     r10, r15
1fbad3 lea      rax, [rbx + rbx*4]
1fbad7 add      rax, rax
1fbada add      r10, r12
1fbadd mov      qword ptr [r14 + 0x1b0], r10
1fbae4 shr      r10, 0x1b
1fbae8 movzx    edx, r10b
1fbaec mov      byte ptr [r14 + 0x169], dl
1fbaf3 imul     rdx, rsi
1fbaf7 xor      rdx, rax
1fbafa xor      rdx, rbp
1fbafd xor      rcx, rdx
1fbb00 test     dil, dil
1fbb03 lea      rax, [r11 + rdx]
1fbb07 cmove    rax, rcx
1fbb0b mov      rcx, r14
1fbb0e mov      qword ptr [r14 + 0x138], rax
1fbb15 movzx    edx, byte ptr [r14 + 0x4ad]
1fbb1d xor      rdx, qword ptr [r14 + 0x348]
1fbb24 call     0x1401f1520
1fbb29 mov      r8, qword ptr [r14 + 0x348]
1fbb30 movabs   rdi, 0xff51afd7ed558ccd
1fbb3a mov      rax, r8
1fbb3d movabs   rsi, 0xc4ceb9fe1a85ec53
1fbb47 xor      rax, qword ptr [r14 + 0x20]
1fbb4b mov      rcx, rax
1fbb4e shr      rcx, 0x21
1fbb52 xor      rcx, rax
1fbb55 imul     rcx, rdi
1fbb59 mov      rax, rcx
1fbb5c shr      rax, 0x21
1fbb60 xor      rax, rcx
1fbb63 imul     rax, rsi
1fbb67 mov      rdx, rax
1fbb6a shr      rdx, 0x21
1fbb6e xor      edx, eax
1fbb70 lea      eax, [rdx + 1]
1fbb73 mov      ecx, eax
1fbb75 xor      eax, edx
1fbb77 imul     ecx, edx
1fbb7a not      ecx
1fbb7c and      ecx, eax
1fbb7e test     cl, 1
1fbb81 je       0x1401fbbea
1fbb83 and      r8b, 3
1fbb87 cmp      r8b, 1
1fbb8b jne      0x1401fbbea
1fbb8d mov      rax, qword ptr [r14 + 0x1b0]
1fbb94 inc      qword ptr [r14 + 0x1b8]
1fbb9b imul     rax, r15
1fbb9f add      rax, r12
1fbba2 mov      qword ptr [r14 + 0x1b0], rax
1fbba9 shr      rax, 0x1b
1fbbad movzx    eax, al
1fbbb0 mov      byte ptr [r14 + 0x160], al
1fbbb7 imul     rax, qword ptr [r14 + 0xe0]
1fbbbf xor      rax, qword ptr [r14 + 0xd8]
1fbbc6 xor      rax, qword ptr [r14 + 0xd0]
1fbbcd mov      rcx, rax
1fbbd0 add      rax, 0x17ed28
1fbbd6 xor      rcx, 0x17ed28
1fbbdd cmp      byte ptr [r14 + 0xe8], 0
1fbbe5 jmp      0x1401fc1e8
1fbbea mov      rcx, r14
1fbbed call     0x1401ee070
1fbbf2 mov      ebx, eax
1fbbf4 cmp      eax, dword ptr [r14 + 0x1d8]
1fbbfb jb       0x1401fbc5a
1fbbfd mov      rax, qword ptr [r14 + 0x1b0]
1fbc04 inc      qword ptr [r14 + 0x1b8]
1fbc0b imul     rax, r15
1fbc0f add      rax, r12
1fbc12 mov      qword ptr [r14 + 0x1b0], rax
1fbc19 shr      rax, 0x1b
1fbc1d movzx    eax, al
1fbc20 mov      byte ptr [r14 + 0x160], al
1fbc27 imul     rax, qword ptr [r14 + 0xe0]
1fbc2f xor      rax, qword ptr [r14 + 0xd8]
1fbc36 xor      rax, qword ptr [r14 + 0xd0]
1fbc3d mov      rcx, rax
1fbc40 add      rax, 0xfe1ab
1fbc46 xor      rcx, 0xfe1ab
1fbc4d cmp      byte ptr [r14 + 0xe8], 0
1fbc55 jmp      0x1401fc1e8
1fbc5a mov      edx, ebx
1fbc5c mov      rcx, r14
1fbc5f call     0x1401f25b0
1fbc64 movsxd   rcx, dword ptr [r14 + 0x11e0]
1fbc6b movabs   r8, 0xd6e8feb86659fd93
1fbc75 mov      rdx, qword ptr [r14 + 0x20]
1fbc79 mov      rax, rbx
1fbc7c imul     rax, r8
1fbc80 imul     rcx, r15
1fbc84 rol      rdx, 0x11
1fbc88 xor      rax, rdx
1fbc8b xor      rcx, qword ptr [r14 + 0x260]
1fbc92 xor      rax, rcx
1fbc95 mov      rcx, rax
1fbc98 shr      rcx, 0x21
1fbc9c xor      rcx, rax
1fbc9f imul     rcx, rdi
1fbca3 mov      rdx, rcx
1fbca6 shr      rdx, 0x21
1fbcaa xor      rdx, rcx
1fbcad imul     rdx, rsi
1fbcb1 mov      rax, rdx
1fbcb4 shr      rax, 0x21
1fbcb8 xor      rax, rdx
1fbcbb mov      r10, rax
1fbcbe shr      r10, 0x1d
1fbcc2 xor      r10, rax
1fbcc5 or       r10, 1
1fbcc9 mov      rax, r10
1fbccc mov      qword ptr [r14 + 0x260], r10
1fbcd3 and      eax, 0x3ff
1fbcd8 cmp      rax, 0x2c5
1fbcde jne      0x1401fbcef
1fbce0 mov      rcx, r14
1fbce3 call     0x1402297e0
1fbce8 mov      r10, qword ptr [r14 + 0x260]
1fbcef movzx    eax, r10b
1fbcf3 and      al, 0x1f
1fbcf5 cmp      al, 0x15
1fbcf7 jne      0x1401fbde4
1fbcfd movsxd   rax, dword ptr [r14 + 0x11e0]
1fbd04 xor      rax, 0x5a5a
1fbd0a mov      rcx, qword ptr [r14 + 0x20]
1fbd0e imul     rax, r15
1fbd12 rol      rcx, 0x11
1fbd16 xor      rax, r10
1fbd19 xor      rcx, rax
1fbd1c movabs   rax, 0x8f70feda99a6026d
1fbd26 xor      rcx, rax
1fbd29 mov      rax, rcx
1fbd2c shr      rax, 0x21
1fbd30 xor      rax, rcx
1fbd33 imul     rax, rdi
1fbd37 mov      rcx, rax
1fbd3a shr      rcx, 0x21
1fbd3e xor      rcx, rax
1fbd41 imul     rcx, rsi
1fbd45 mov      rax, rcx
1fbd48 shr      rax, 0x21
1fbd4c xor      rax, rcx
1fbd4f mov      r9, rax
1fbd52 shr      r9, 0x1d
1fbd56 xor      r9, rax
1fbd59 or       r9, 1
1fbd5d mov      rax, r9
1fbd60 mov      rcx, r9
1fbd63 shr      rax, 8
1fbd67 and      eax, 3
1fbd6a shr      rcx, 0x28
1fbd6e imul     r8, rax, 0x3e
1fbd72 mov      eax, 0x8421085
1fbd77 mul      ecx
1fbd79 mov      eax, ecx
1fbd7b sub      eax, edx
1fbd7d shr      eax, 1
1fbd7f add      eax, edx
1fbd81 shr      eax, 5
1fbd84 imul     eax, eax, 0x3e
1fbd87 sub      ecx, eax
1fbd89 mov      eax, ecx
1fbd8b add      r8, rax
1fbd8e mov      rax, qword ptr [r14 + 0x4b8]
1fbd95 movsxd   rcx, dword ptr [rax + r8*4]
1fbd99 movsxd   rax, dword ptr [r14 + 0x4c8]
1fbda0 xor      rcx, rax
1fbda3 add      rcx, qword ptr [r14 + 0x4c0]
1fbdaa xor      rcx, r9
1fbdad mov      rax, rcx
1fbdb0 shr      rax, 0x21
1fbdb4 xor      rax, rcx
1fbdb7 imul     rax, rdi
1fbdbb mov      rcx, rax
1fbdbe shr      rcx, 0x21
1fbdc2 xor      rcx, rax
1fbdc5 imul     rcx, rsi
1fbdc9 mov      rax, rcx
1fbdcc shr      rax, 0x21
1fbdd0 xor      rax, rcx
1fbdd3 xor      rax, r10
1fbdd6 inc      qword ptr [r14 + 0x268]
1fbddd mov      qword ptr [r14 + 0x260], rax
1fbde4 inc      dword ptr [r14 + 0x200]
1fbdeb mov      eax, dword ptr [r14 + 0x200]
1fbdf2 cmp      eax, dword ptr [r14 + 0x1fc]
1fbdf9 jb       0x1401fbe0e
1fbdfb mov      rcx, r14
1fbdfe mov      dword ptr [r14 + 0x200], 0
1fbe09 call     0x1401ef7c0
1fbe0e mov      r8d, ebx
1fbe11 mov      edx, ebx
1fbe13 mov      rcx, r14
1fbe16 call     0x1401f0660
1fbe1b inc      qword ptr [r14 + 0x1b8]
1fbe22 mov      rcx, rbx
1fbe25 mov      r9, qword ptr [r14 + 0x1b0]
1fbe2c mov      rbp, r12
1fbe2f mov      r10, qword ptr [r14 + 0x1b8]
1fbe36 imul     r9, r15
1fbe3a add      r9, r12
1fbe3d lea      r12d, [rbx + 1]
1fbe41 mov      qword ptr [r14 + 0x1b0], r9
1fbe48 mov      rax, r9
1fbe4b shr      rax, 0x1b
1fbe4f movzx    edx, al
1fbe52 mov      byte ptr [r14 + 0x168], dl
1fbe59 mov      rdi, qword ptr [r14 + 0xe0]
1fbe60 mov      r11, qword ptr [r14 + 0xd8]
1fbe67 mov      rsi, qword ptr [r14 + 0xd0]
1fbe6e movzx    r15d, byte ptr [r14 + 0xe8]
1fbe76 imul     rdx, rdi
1fbe7a lea      rax, [r11 + r11*8]
1fbe7e xor      rdx, rax
1fbe81 xor      rdx, rsi
1fbe84 xor      rcx, rdx
1fbe87 test     r15b, r15b
1fbe8a lea      rax, [rbx + rdx]
1fbe8e cmove    rax, rcx
1fbe92 inc      r10
1fbe95 mov      qword ptr [r14 + 0x130], rax
1fbe9c mov      rcx, qword ptr [r14 + 0x1d0]
1fbea3 mov      rax, qword ptr [r14 + 0x48]
1fbea7 mov      qword ptr [rsp + 0x60], r10
1fbeac movzx    r8d, byte ptr [rcx + rbx]
1fbeb1 xor      r8b, byte ptr [rax + rbx]
1fbeb5 movabs   rax, 0x9e3779b97f4a7c15
1fbebf imul     r9, rax
1fbec3 mov      qword ptr [r14 + 0x1b8], r10
1fbeca add      r9, rbp
1fbecd mov      rax, r9
1fbed0 shr      rax, 0x1b
1fbed4 movzx    edx, al
1fbed7 lea      rax, [r11 + r11]
1fbedb mov      byte ptr [r14 + 0x161], dl
1fbee2 imul     rdx, rdi
1fbee6 xor      rdx, rax
1fbee9 xor      rdx, rsi
1fbeec mov      rcx, rdx
1fbeef xor      rcx, r12
1fbef2 test     r15b, r15b
1fbef5 lea      rax, [rdx + r12]
1fbef9 cmove    rax, rcx
1fbefd mov      qword ptr [r14 + 0xf8], rax
1fbf04 movsxd   rdx, dword ptr [r14 + 0x11e0]
1fbf0b mov      r10, qword ptr [r14 + 0x20]
1fbf0f mov      rcx, rdx
1fbf12 xor      rcx, qword ptr [r14 + 0x350]
1fbf19 xor      rcx, r10
1fbf1c xor      rcx, r12
1fbf1f xor      rcx, qword ptr [r14 + 0x348]
1fbf26 mov      rax, rcx
1fbf29 shr      rax, 0x21
1fbf2d xor      rax, rcx
1fbf30 movabs   rcx, 0xff51afd7ed558ccd
1fbf3a imul     rax, rcx
1fbf3e mov      rcx, rax
1fbf41 shr      rcx, 0x21
1fbf45 xor      rcx, rax
1fbf48 movabs   rax, 0xc4ceb9fe1a85ec53
1fbf52 imul     rcx, rax
1fbf56 movzx    eax, r8b
1fbf5a mov      rbx, rcx
1fbf5d xor      rax, 0xdd
1fbf63 shr      rbx, 0x21
1fbf67 xor      rbx, rcx
1fbf6a lea      rcx, [rip - 0x1fbf71]
1fbf71 mov      qword ptr [r14 + 0x28], rbx
1fbf75 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
1fbf7d xor      bpl, 0x63
1fbf81 inc      edx
1fbf83 mov      dword ptr [r14 + 0x11e0], edx
1fbf8a movabs   r8, 0xff51afd7ed558ccd
1fbf94 test     dl, 0x1f
1fbf97 jne      0x1401fbfdd
1fbf99 movsxd   rax, edx
1fbf9c xor      rax, r10
1fbf9f xor      rax, qword ptr [r14 + 0x348]
1fbfa6 mov      rcx, rax
1fbfa9 shr      rcx, 0x21
1fbfad xor      rcx, rax
1fbfb0 movabs   rax, 0xc4ceb9fe1a85ec53
1fbfba imul     rcx, r8
1fbfbe mov      rdx, rcx
1fbfc1 shr      rdx, 0x21
1fbfc5 xor      rdx, rcx
1fbfc8 imul     rdx, rax
1fbfcc mov      rax, rdx
1fbfcf shr      rax, 0x21
1fbfd3 xor      rax, rdx
1fbfd6 mov      qword ptr [r14 + 0x348], rax
1fbfdd movzx    edx, bpl
1fbfe1 xor      r10, rdx
1fbfe4 mov      byte ptr [r14 + 0x4ad], bpl
1fbfeb xor      r10, r12
1fbfee movabs   r12, 0xc4ceb9fe1a85ec53
1fbff8 mov      rax, r10
1fbffb shr      rax, 0x21
1fbfff xor      rax, r10
1fc002 movabs   r10, 0x9e3779b97f4a7c15
1fc00c imul     rax, r8
1fc010 imul     rdx, r10
1fc014 imul     r9, r10
1fc018 mov      rcx, rax
1fc01b shr      rcx, 0x21
1fc01f xor      rcx, rax
1fc022 imul     rcx, r12
1fc026 mov      rax, rcx
1fc029 shr      rax, 0x21
1fc02d xor      rax, rcx
1fc030 mov      ecx, dword ptr [r14 + 0x1178]
1fc037 mov      qword ptr [r14 + 0x20], rax
1fc03b movabs   rax, 0xd6e8feb86659fd93
1fc045 imul     rcx, rax
1fc049 xor      rcx, rdx
1fc04c xor      rcx, rbx
1fc04f movabs   rbx, 0x2545f4914f6cdd1d
1fc059 mov      rax, rcx
1fc05c add      r9, rbx
1fc05f shr      rax, 0x21
1fc063 xor      rax, rcx
1fc066 imul     rax, r8
1fc06a mov      rdx, rax
1fc06d shr      rdx, 0x21
1fc071 xor      rdx, rax
1fc074 mov      rax, qword ptr [rsp + 0x60]
1fc079 imul     rdx, r12
1fc07d shr      rdx, 0x21
1fc081 and      edx, 3
1fc084 inc      rax
1fc087 mov      qword ptr [r14 + 0x1b8], rax
1fc08e cmp      bpl, 0x3e
1fc092 jae      0x1401fc12c
1fc098 inc      qword ptr [r14 + 0x11a0]
1fc09f lea      rax, [rip - 0x1fc0a6]
1fc0a6 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
1fc0ae mov      qword ptr [r14 + 0x1b0], r9
1fc0b5 shr      r9, 0x1b
1fc0b9 movzx    eax, r9b
1fc0bd mov      byte ptr [r14 + 0x160], al
1fc0c4 imul     rax, rdi
1fc0c8 mov      ebx, edx
1fc0ca xor      rax, rsi
1fc0cd xor      rax, r11
1fc0d0 mov      rcx, rax
1fc0d3 add      rax, r8
1fc0d6 xor      rcx, r8
1fc0d9 movzx    r8d, bpl
1fc0dd test     r15b, r15b
1fc0e0 cmove    rax, rcx
1fc0e4 mov      rcx, r14
1fc0e7 mov      qword ptr [r14 + 0xf0], rax
1fc0ee call     0x1401f1f50
1fc0f3 mov      r8, qword ptr [rsp + 0x70]
1fc0f8 lea      edx, [r13 - 1]
1fc0fc mov      eax, eax
1fc0fe imul     rcx, rbx, 0x3e
1fc102 add      rcx, rax
1fc105 mov      rax, qword ptr [r14 + 0x4b8]
1fc10c movsxd   r9, dword ptr [rax + rcx*4]
1fc110 mov      rcx, r14
1fc113 movsxd   rax, dword ptr [r14 + 0x4c8]
1fc11a xor      r9, rax
1fc11d add      r9, qword ptr [r14 + 0x4c0]
1fc124 call     r9
1fc127 jmp      0x1401fc1f3
1fc12c inc      dword ptr [r14 + 0x11a8]
1fc133 mov      rax, r9
1fc136 shr      rax, 0x1b
1fc13a movzx    ecx, al
1fc13d lea      rax, [r11*4]
1fc145 mov      byte ptr [r14 + 0x163], cl
1fc14c imul     rcx, rdi
1fc150 imul     r9, r10
1fc154 xor      rcx, rax
1fc157 xor      rcx, rsi
1fc15a mov      qword ptr [r14 + 0x108], rcx
1fc161 mov      r8, qword ptr [r14 + 0x1b8]
1fc168 add      r9, rbx
1fc16b mov      rax, r9
1fc16e shr      rax, 0x1b
1fc172 movzx    edx, al
1fc175 mov      byte ptr [r14 + 0x16a], dl
1fc17c imul     rax, r11, 0xb
1fc180 imul     rdx, rdi
1fc184 xor      rdx, rax
1fc187 xor      rdx, rsi
1fc18a mov      rcx, rdx
1fc18d xor      rcx, 1
1fc191 test     r15b, r15b
1fc194 lea      rax, [rdx + 1]
1fc198 cmove    rax, rcx
1fc19c mov      qword ptr [r14 + 0x140], rax
1fc1a3 lea      rax, [r8 + 2]
1fc1a7 mov      qword ptr [r14 + 0x1b8], rax
1fc1ae imul     r9, r10
1fc1b2 add      r9, rbx
1fc1b5 mov      qword ptr [r14 + 0x1b0], r9
1fc1bc shr      r9, 0x1b
1fc1c0 movzx    eax, r9b
1fc1c4 mov      byte ptr [r14 + 0x160], al
1fc1cb imul     rax, rdi
1fc1cf xor      rax, rsi
1fc1d2 xor      rax, r11
1fc1d5 mov      rcx, rax
1fc1d8 add      rax, 0xfe1ab
1fc1de xor      rcx, 0xfe1ab
1fc1e5 test     r15b, r15b
1fc1e8 cmove    rax, rcx
1fc1ec mov      qword ptr [r14 + 0xf0], rax
1fc1f3 mov      r12, qword ptr [rsp + 0x28]
1fc1f8 mov      rsi, qword ptr [rsp + 0x68]
1fc1fd mov      r15, qword ptr [rsp + 0x20]
1fc202 add      rsp, 0x30
1fc206 pop      r14
1fc208 pop      r13
1fc20a pop      rdi
1fc20b pop      rbp
1fc20c pop      rbx
1fc20d ret      
1fc20e mov      edx, 0x54485254
1fc213 mov      rcx, r14
1fc216 call     0x1401ed830
1fc21b int3     
1fc21c mov      edx, 0x43414e59
1fc221 mov      rcx, r14
1fc224 call     0x1401ed830
1fc229 int3     
