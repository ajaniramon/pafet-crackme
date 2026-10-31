226400 mov      qword ptr [rsp + 0x18], r8
226405 push     rbx
226406 push     rbp
226407 push     rdi
226408 push     r13
22640a push     r14
22640c sub      rsp, 0x30
226410 movsxd   rax, dword ptr [rcx + 0x11e0]
226417 mov      r14, rcx
22641a mov      r13d, edx
22641d movabs   rcx, 0xe6329a61b4f1b6b7
226427 imul     rax, rcx
22642b movabs   rcx, 0x446b10aa352f3288
226435 movabs   rbp, 0xff51afd7ed558ccd
22643f xor      rax, qword ptr [r14 + 0x28]
226443 mov      rdi, r8
226446 mov      qword ptr [rsp + 0x60], rax
22644b mov      rax, qword ptr [rsp + 0x60]
226450 movsxd   rax, dword ptr [r14 + 0x11e0]
226457 imul     rax, rcx
22645b movabs   rcx, 0xa2a38ef4b664be9d
226465 xor      rax, qword ptr [r14 + 0x28]
226469 mov      qword ptr [rsp + 0x60], rax
22646e mov      rax, qword ptr [rsp + 0x60]
226473 movsxd   rax, dword ptr [r14 + 0x11e0]
22647a imul     rax, rcx
22647e movabs   rcx, 0x746299e43e1f22d8
226488 xor      rax, qword ptr [r14 + 0x28]
22648c mov      qword ptr [rsp + 0x60], rax
226491 mov      rax, qword ptr [rsp + 0x60]
226496 mov      rax, qword ptr [r14 + 0x2f0]
22649d mov      rax, qword ptr [r14 + 0x2f0]
2264a4 add      rax, rcx
2264a7 mov      rcx, rax
2264aa shr      rcx, 0x21
2264ae xor      rcx, rax
2264b1 movabs   rax, 0xc4ceb9fe1a85ec53
2264bb imul     rcx, rbp
2264bf mov      rdx, rcx
2264c2 shr      rdx, 0x21
2264c6 xor      rdx, rcx
2264c9 mov      rcx, r14
2264cc imul     rdx, rax
2264d0 mov      rax, rdx
2264d3 shr      rax, 0x21
2264d7 xor      rdx, rax
2264da mov      rax, qword ptr [r14 + 0x2f0]
2264e1 shr      rax, 3
2264e5 xor      rax, rdx
2264e8 mov      qword ptr [r14 + 0x2f0], rax
2264ef call     0x1401ee940
2264f4 mov      rcx, r14
2264f7 mov      rbx, rax
2264fa call     0x1401ee940
2264ff xor      edx, edx
226501 mov      rcx, r14
226504 cmp      rax, rbx
226507 setne    dl
22650a call     0x1401ee820
22650f mov      rax, qword ptr [r14 + 0x2f0]
226516 test     r13d, r13d
226519 jns      0x140227057
22651f cmp      qword ptr [r14 + 0x11b8], rdi
226526 jne      0x140227065
22652c movsxd   rax, dword ptr [r14 + 0x11e0]
226533 movabs   rcx, 0x4d0d331a090bf97b
22653d imul     rax, rcx
226541 mov      rcx, r14
226544 xor      rax, qword ptr [r14 + 0x28]
226548 mov      qword ptr [rsp + 0x60], rax
22654d mov      rax, qword ptr [rsp + 0x60]
226552 call     0x1401ee450
226557 test     eax, eax
226559 jne      0x14022704b
22655f cmp      dword ptr [r14 + 0xad0], eax
226566 jne      0x14022704b
22656c mov      r8, qword ptr [r14 + 0xf0]
226573 movzx    ecx, byte ptr [r14 + 0x160]
22657b mov      rax, r8
22657e mov      r10, qword ptr [r14 + 0xe0]
226585 mov      rbx, qword ptr [r14 + 0xd0]
22658c mov      r11, qword ptr [r14 + 0xd8]
226593 movzx    edi, byte ptr [r14 + 0xe8]
22659b mov      r9, qword ptr [r14 + 0x1b0]
2265a2 imul     rcx, r10
2265a6 mov      qword ptr [rsp + 0x68], rsi
2265ab mov      rsi, qword ptr [r14 + 0x1b8]
2265b2 xor      rcx, rbx
2265b5 xor      rcx, r11
2265b8 mov      qword ptr [rsp + 0x28], r12
2265bd xor      rax, rcx
2265c0 mov      qword ptr [rsp + 0x20], r15
2265c5 sub      r8, rcx
2265c8 movabs   r15, 0x9e3779b97f4a7c15
2265d2 test     dil, dil
2265d5 movabs   r12, 0x2545f4914f6cdd1d
2265df cmove    r8, rax
2265e3 inc      rsi
2265e6 imul     r9, r15
2265ea mov      qword ptr [r14 + 0x1b8], rsi
2265f1 mov      rcx, r8
2265f4 add      r9, r12
2265f7 mov      qword ptr [r14 + 0x1b0], r9
2265fe mov      rax, r9
226601 shr      rax, 0x1b
226605 movzx    edx, al
226608 mov      byte ptr [r14 + 0x160], dl
22660f imul     rdx, r10
226613 xor      rdx, rbx
226616 xor      rdx, r11
226619 xor      rcx, rdx
22661c test     dil, dil
22661f lea      rax, [r8 + rdx]
226623 cmove    rax, rcx
226627 mov      qword ptr [r14 + 0xf0], rax
22662e cmp      r8d, 0x2a0025
226635 jne      0x14022703c
22663b mov      eax, r13d
22663e btr      eax, 0x1f
226642 cmp      eax, 2
226645 jae      0x140226691
226647 imul     r9, r15
22664b lea      rax, [rsi + 1]
22664f mov      qword ptr [r14 + 0x1b8], rax
226656 add      r9, r12
226659 mov      qword ptr [r14 + 0x1b0], r9
226660 shr      r9, 0x1b
226664 movzx    eax, r9b
226668 mov      byte ptr [r14 + 0x160], al
22666f imul     rax, r10
226673 xor      rax, rbx
226676 xor      rax, r11
226679 mov      rcx, rax
22667c add      rax, 0x85b36
226682 xor      rcx, 0x85b36
226689 test     dil, dil
22668c jmp      0x140227031
226691 mov      rcx, r14
226694 call     0x1401ee070
226699 movzx    ecx, byte ptr [r14 + 0x4ad]
2266a1 movabs   r8, 0xc4ceb9fe1a85ec53
2266ab xor      rcx, qword ptr [r14 + 0x11e8]
2266b2 mov      r11, qword ptr [r14 + 0xe0]
2266b9 mov      r10, qword ptr [r14 + 0xd0]
2266c0 movzx    r9d, byte ptr [r14 + 0xe8]
2266c8 mov      eax, eax
2266ca xor      rcx, rax
2266cd mov      rax, rcx
2266d0 shr      rax, 0x21
2266d4 xor      rax, rcx
2266d7 imul     rax, rbp
2266db mov      rcx, rax
2266de shr      rcx, 0x21
2266e2 xor      rcx, rax
2266e5 imul     rcx, r8
2266e9 mov      rdx, rcx
2266ec shr      rdx, 0x21
2266f0 xor      rdx, rcx
2266f3 mov      qword ptr [r14 + 0x11e8], rdx
2266fa xor      rdx, qword ptr [r14 + 0x28]
2266fe xor      rdx, qword ptr [r14 + 0x20]
226702 mov      rax, rdx
226705 shr      rax, 0x21
226709 xor      rax, rdx
22670c imul     rax, rbp
226710 mov      rcx, rax
226713 shr      rcx, 0x21
226717 xor      rcx, rax
22671a imul     rcx, r8
22671e mov      rax, rcx
226721 shr      rax, 0x21
226725 xor      rax, rcx
226728 mov      qword ptr [r14 + 0x20], rax
22672c mov      rdx, qword ptr [r14 + 0x138]
226733 movzx    ecx, byte ptr [r14 + 0x169]
22673b mov      rax, qword ptr [r14 + 0xd8]
226742 imul     rcx, r11
226746 lea      rbx, [rax + rax*4]
22674a mov      rax, rdx
22674d add      rbx, rbx
226750 xor      rcx, rbx
226753 xor      rcx, r10
226756 xor      rax, rcx
226759 sub      rdx, rcx
22675c test     r9b, r9b
22675f cmove    rdx, rax
226763 mov      rax, qword ptr [r14 + 0x1b0]
22676a inc      qword ptr [r14 + 0x1b8]
226771 imul     rax, r15
226775 add      rax, r12
226778 mov      qword ptr [r14 + 0x1b0], rax
22677f shr      rax, 0x1b
226783 movzx    r8d, al
226787 mov      byte ptr [r14 + 0x169], r8b
22678e imul     r8, r11
226792 xor      r8, rbx
226795 xor      r8, r10
226798 mov      rcx, r8
22679b xor      rcx, rdx
22679e test     r9b, r9b
2267a1 lea      rax, [r8 + rdx]
2267a5 cmove    rax, rcx
2267a9 mov      rcx, r14
2267ac mov      qword ptr [r14 + 0x138], rax
2267b3 call     0x1401f0910
2267b8 mov      rax, qword ptr [r14 + 0xd8]
2267bf mov      rdx, qword ptr [r14 + 0x130]
2267c6 mov      r10, qword ptr [r14 + 0xe0]
2267cd movzx    ecx, byte ptr [r14 + 0x168]
2267d5 mov      rbx, qword ptr [r14 + 0xd0]
2267dc lea      r11, [rax + rax*8]
2267e0 movzx    r9d, byte ptr [r14 + 0xe8]
2267e8 mov      rax, rdx
2267eb imul     rcx, r10
2267ef xor      rcx, r11
2267f2 xor      rcx, rbx
2267f5 xor      rax, rcx
2267f8 sub      rdx, rcx
2267fb test     r9b, r9b
2267fe cmove    rdx, rax
226802 mov      rax, qword ptr [r14 + 0x1b0]
226809 inc      qword ptr [r14 + 0x1b8]
226810 mov      rcx, rdx
226813 imul     rax, r15
226817 add      rax, r12
22681a mov      qword ptr [r14 + 0x1b0], rax
226821 shr      rax, 0x1b
226825 movzx    r8d, al
226829 mov      byte ptr [r14 + 0x168], r8b
226830 imul     r8, r10
226834 xor      r8, r11
226837 xor      r8, rbx
22683a xor      rcx, r8
22683d test     r9b, r9b
226840 lea      rax, [rdx + r8]
226844 cmove    rax, rcx
226848 mov      rcx, r14
22684b mov      qword ptr [r14 + 0x130], rax
226852 call     0x1401f0910
226857 mov      rcx, r14
22685a call     0x1401ee070
22685f cmp      eax, dword ptr [r14 + 0x1d8]
226866 jae      0x140226872
226868 mov      edx, eax
22686a mov      rcx, r14
22686d call     0x1401f0910
226872 mov      rsi, qword ptr [r14 + 0xe0]
226879 mov      rbp, qword ptr [r14 + 0xd0]
226880 mov      r11, qword ptr [r14 + 0x130]
226887 movzx    edi, byte ptr [r14 + 0xe8]
22688f mov      rax, r11
226892 movzx    ecx, byte ptr [r14 + 0x168]
22689a mov      rbx, qword ptr [r14 + 0xd8]
2268a1 mov      r8, qword ptr [r14 + 0x1b8]
2268a8 mov      r10, qword ptr [r14 + 0x1b0]
2268af imul     rcx, rsi
2268b3 lea      r9, [rbx + rbx*8]
2268b7 xor      rcx, r9
2268ba xor      rcx, rbp
2268bd xor      rax, rcx
2268c0 sub      r11, rcx
2268c3 test     dil, dil
2268c6 cmove    r11, rax
2268ca imul     r10, r15
2268ce mov      rcx, r11
2268d1 add      r10, r12
2268d4 mov      rax, r10
2268d7 shr      rax, 0x1b
2268db movzx    edx, al
2268de mov      byte ptr [r14 + 0x168], dl
2268e5 imul     rdx, rsi
2268e9 xor      rdx, r9
2268ec xor      rdx, rbp
2268ef xor      rcx, rdx
2268f2 test     dil, dil
2268f5 lea      rax, [r11 + rdx]
2268f9 cmove    rax, rcx
2268fd mov      rcx, r11
226900 mov      qword ptr [r14 + 0x130], rax
226907 lea      rax, [r8 + 2]
22690b mov      qword ptr [r14 + 0x1b8], rax
226912 mov      r8d, 0x74ae
226918 imul     r10, r15
22691c lea      rax, [rbx + rbx*4]
226920 add      rax, rax
226923 add      r10, r12
226926 mov      qword ptr [r14 + 0x1b0], r10
22692d shr      r10, 0x1b
226931 movzx    edx, r10b
226935 mov      byte ptr [r14 + 0x169], dl
22693c imul     rdx, rsi
226940 xor      rdx, rax
226943 xor      rdx, rbp
226946 xor      rcx, rdx
226949 test     dil, dil
22694c lea      rax, [r11 + rdx]
226950 cmove    rax, rcx
226954 mov      rcx, r14
226957 mov      qword ptr [r14 + 0x138], rax
22695e movzx    edx, byte ptr [r14 + 0x4ad]
226966 xor      rdx, qword ptr [r14 + 0x348]
22696d call     0x1401f1520
226972 mov      r8, qword ptr [r14 + 0x348]
226979 movabs   rdi, 0xff51afd7ed558ccd
226983 mov      rax, r8
226986 movabs   rsi, 0xc4ceb9fe1a85ec53
226990 xor      rax, qword ptr [r14 + 0x20]
226994 mov      rcx, rax
226997 shr      rcx, 0x21
22699b xor      rcx, rax
22699e imul     rcx, rdi
2269a2 mov      rax, rcx
2269a5 shr      rax, 0x21
2269a9 xor      rax, rcx
2269ac imul     rax, rsi
2269b0 mov      rdx, rax
2269b3 shr      rdx, 0x21
2269b7 xor      edx, eax
2269b9 lea      eax, [rdx + 1]
2269bc mov      ecx, eax
2269be xor      eax, edx
2269c0 imul     ecx, edx
2269c3 not      ecx
2269c5 and      ecx, eax
2269c7 test     cl, 1
2269ca je       0x140226a33
2269cc and      r8b, 3
2269d0 cmp      r8b, 1
2269d4 jne      0x140226a33
2269d6 mov      rax, qword ptr [r14 + 0x1b0]
2269dd inc      qword ptr [r14 + 0x1b8]
2269e4 imul     rax, r15
2269e8 add      rax, r12
2269eb mov      qword ptr [r14 + 0x1b0], rax
2269f2 shr      rax, 0x1b
2269f6 movzx    eax, al
2269f9 mov      byte ptr [r14 + 0x160], al
226a00 imul     rax, qword ptr [r14 + 0xe0]
226a08 xor      rax, qword ptr [r14 + 0xd8]
226a0f xor      rax, qword ptr [r14 + 0xd0]
226a16 mov      rcx, rax
226a19 add      rax, 0x3dd18f
226a1f xor      rcx, 0x3dd18f
226a26 cmp      byte ptr [r14 + 0xe8], 0
226a2e jmp      0x140227031
226a33 mov      rcx, r14
226a36 call     0x1401ee070
226a3b mov      ebx, eax
226a3d cmp      eax, dword ptr [r14 + 0x1d8]
226a44 jb       0x140226aa3
226a46 mov      rax, qword ptr [r14 + 0x1b0]
226a4d inc      qword ptr [r14 + 0x1b8]
226a54 imul     rax, r15
226a58 add      rax, r12
226a5b mov      qword ptr [r14 + 0x1b0], rax
226a62 shr      rax, 0x1b
226a66 movzx    eax, al
226a69 mov      byte ptr [r14 + 0x160], al
226a70 imul     rax, qword ptr [r14 + 0xe0]
226a78 xor      rax, qword ptr [r14 + 0xd8]
226a7f xor      rax, qword ptr [r14 + 0xd0]
226a86 mov      rcx, rax
226a89 add      rax, 0xfe1ab
226a8f xor      rcx, 0xfe1ab
226a96 cmp      byte ptr [r14 + 0xe8], 0
226a9e jmp      0x140227031
226aa3 mov      edx, ebx
226aa5 mov      rcx, r14
226aa8 call     0x1401f25b0
226aad movsxd   rcx, dword ptr [r14 + 0x11e0]
226ab4 movabs   r8, 0xd6e8feb86659fd93
226abe mov      rdx, qword ptr [r14 + 0x20]
226ac2 mov      rax, rbx
226ac5 imul     rax, r8
226ac9 imul     rcx, r15
226acd rol      rdx, 0x11
226ad1 xor      rax, rdx
226ad4 xor      rcx, qword ptr [r14 + 0x260]
226adb xor      rax, rcx
226ade mov      rcx, rax
226ae1 shr      rcx, 0x21
226ae5 xor      rcx, rax
226ae8 imul     rcx, rdi
226aec mov      rdx, rcx
226aef shr      rdx, 0x21
226af3 xor      rdx, rcx
226af6 imul     rdx, rsi
226afa mov      rax, rdx
226afd shr      rax, 0x21
226b01 xor      rax, rdx
226b04 mov      r10, rax
226b07 shr      r10, 0x1d
226b0b xor      r10, rax
226b0e or       r10, 1
226b12 mov      rax, r10
226b15 mov      qword ptr [r14 + 0x260], r10
226b1c and      eax, 0x3ff
226b21 cmp      rax, 0x2c5
226b27 jne      0x140226b38
226b29 mov      rcx, r14
226b2c call     0x1402297e0
226b31 mov      r10, qword ptr [r14 + 0x260]
226b38 movzx    eax, r10b
226b3c and      al, 0x1f
226b3e cmp      al, 0x15
226b40 jne      0x140226c2d
226b46 movsxd   rax, dword ptr [r14 + 0x11e0]
226b4d xor      rax, 0x5a5a
226b53 mov      rcx, qword ptr [r14 + 0x20]
226b57 imul     rax, r15
226b5b rol      rcx, 0x11
226b5f xor      rax, r10
226b62 xor      rcx, rax
226b65 movabs   rax, 0x8f70feda99a6026d
226b6f xor      rcx, rax
226b72 mov      rax, rcx
226b75 shr      rax, 0x21
226b79 xor      rax, rcx
226b7c imul     rax, rdi
226b80 mov      rcx, rax
226b83 shr      rcx, 0x21
226b87 xor      rcx, rax
226b8a imul     rcx, rsi
226b8e mov      rax, rcx
226b91 shr      rax, 0x21
226b95 xor      rax, rcx
226b98 mov      r9, rax
226b9b shr      r9, 0x1d
226b9f xor      r9, rax
226ba2 or       r9, 1
226ba6 mov      rax, r9
226ba9 mov      rcx, r9
226bac shr      rax, 8
226bb0 and      eax, 3
226bb3 shr      rcx, 0x28
226bb7 imul     r8, rax, 0x3e
226bbb mov      eax, 0x8421085
226bc0 mul      ecx
226bc2 mov      eax, ecx
226bc4 sub      eax, edx
226bc6 shr      eax, 1
226bc8 add      eax, edx
226bca shr      eax, 5
226bcd imul     eax, eax, 0x3e
226bd0 sub      ecx, eax
226bd2 mov      eax, ecx
226bd4 add      r8, rax
226bd7 mov      rax, qword ptr [r14 + 0x4b8]
226bde movsxd   rcx, dword ptr [rax + r8*4]
226be2 movsxd   rax, dword ptr [r14 + 0x4c8]
226be9 xor      rcx, rax
226bec add      rcx, qword ptr [r14 + 0x4c0]
226bf3 xor      rcx, r9
226bf6 mov      rax, rcx
226bf9 shr      rax, 0x21
226bfd xor      rax, rcx
226c00 imul     rax, rdi
226c04 mov      rcx, rax
226c07 shr      rcx, 0x21
226c0b xor      rcx, rax
226c0e imul     rcx, rsi
226c12 mov      rax, rcx
226c15 shr      rax, 0x21
226c19 xor      rax, rcx
226c1c xor      rax, r10
226c1f inc      qword ptr [r14 + 0x268]
226c26 mov      qword ptr [r14 + 0x260], rax
226c2d inc      dword ptr [r14 + 0x200]
226c34 mov      eax, dword ptr [r14 + 0x200]
226c3b cmp      eax, dword ptr [r14 + 0x1fc]
226c42 jb       0x140226c57
226c44 mov      rcx, r14
226c47 mov      dword ptr [r14 + 0x200], 0
226c52 call     0x1401ef7c0
226c57 mov      r8d, ebx
226c5a mov      edx, ebx
226c5c mov      rcx, r14
226c5f call     0x1401f0660
226c64 inc      qword ptr [r14 + 0x1b8]
226c6b mov      rcx, rbx
226c6e mov      r9, qword ptr [r14 + 0x1b0]
226c75 mov      rbp, r12
226c78 mov      r10, qword ptr [r14 + 0x1b8]
226c7f imul     r9, r15
226c83 add      r9, r12
226c86 lea      r12d, [rbx + 1]
226c8a mov      qword ptr [r14 + 0x1b0], r9
226c91 mov      rax, r9
226c94 shr      rax, 0x1b
226c98 movzx    edx, al
226c9b mov      byte ptr [r14 + 0x168], dl
226ca2 mov      rdi, qword ptr [r14 + 0xe0]
226ca9 mov      r11, qword ptr [r14 + 0xd8]
226cb0 mov      rsi, qword ptr [r14 + 0xd0]
226cb7 movzx    r15d, byte ptr [r14 + 0xe8]
226cbf imul     rdx, rdi
226cc3 lea      rax, [r11 + r11*8]
226cc7 xor      rdx, rax
226cca xor      rdx, rsi
226ccd xor      rcx, rdx
226cd0 test     r15b, r15b
226cd3 lea      rax, [rbx + rdx]
226cd7 cmove    rax, rcx
226cdb inc      r10
226cde mov      qword ptr [r14 + 0x130], rax
226ce5 mov      rcx, qword ptr [r14 + 0x1d0]
226cec mov      rax, qword ptr [r14 + 0x48]
226cf0 mov      qword ptr [rsp + 0x60], r10
226cf5 movzx    r8d, byte ptr [rcx + rbx]
226cfa xor      r8b, byte ptr [rax + rbx]
226cfe movabs   rax, 0x9e3779b97f4a7c15
226d08 imul     r9, rax
226d0c mov      qword ptr [r14 + 0x1b8], r10
226d13 add      r9, rbp
226d16 mov      rax, r9
226d19 shr      rax, 0x1b
226d1d movzx    edx, al
226d20 lea      rax, [r11 + r11]
226d24 mov      byte ptr [r14 + 0x161], dl
226d2b imul     rdx, rdi
226d2f xor      rdx, rax
226d32 xor      rdx, rsi
226d35 mov      rcx, rdx
226d38 xor      rcx, r12
226d3b test     r15b, r15b
226d3e lea      rax, [rdx + r12]
226d42 cmove    rax, rcx
226d46 mov      qword ptr [r14 + 0xf8], rax
226d4d movsxd   rdx, dword ptr [r14 + 0x11e0]
226d54 mov      r10, qword ptr [r14 + 0x20]
226d58 mov      rcx, rdx
226d5b xor      rcx, qword ptr [r14 + 0x350]
226d62 xor      rcx, r10
226d65 xor      rcx, r12
226d68 xor      rcx, qword ptr [r14 + 0x348]
226d6f mov      rax, rcx
226d72 shr      rax, 0x21
226d76 xor      rax, rcx
226d79 movabs   rcx, 0xff51afd7ed558ccd
226d83 imul     rax, rcx
226d87 mov      rcx, rax
226d8a shr      rcx, 0x21
226d8e xor      rcx, rax
226d91 movabs   rax, 0xc4ceb9fe1a85ec53
226d9b imul     rcx, rax
226d9f movzx    eax, r8b
226da3 mov      rbx, rcx
226da6 xor      rax, 0xdd
226dac shr      rbx, 0x21
226db0 xor      rbx, rcx
226db3 lea      rcx, [rip - 0x226dba]
226dba mov      qword ptr [r14 + 0x28], rbx
226dbe movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
226dc6 xor      bpl, 0x63
226dca inc      edx
226dcc mov      dword ptr [r14 + 0x11e0], edx
226dd3 movabs   r8, 0xff51afd7ed558ccd
226ddd test     dl, 0x1f
226de0 jne      0x140226e26
226de2 movsxd   rax, edx
226de5 xor      rax, r10
226de8 xor      rax, qword ptr [r14 + 0x348]
226def mov      rcx, rax
226df2 shr      rcx, 0x21
226df6 xor      rcx, rax
226df9 movabs   rax, 0xc4ceb9fe1a85ec53
226e03 imul     rcx, r8
226e07 mov      rdx, rcx
226e0a shr      rdx, 0x21
226e0e xor      rdx, rcx
226e11 imul     rdx, rax
226e15 mov      rax, rdx
226e18 shr      rax, 0x21
226e1c xor      rax, rdx
226e1f mov      qword ptr [r14 + 0x348], rax
226e26 movzx    edx, bpl
226e2a xor      r10, rdx
226e2d mov      byte ptr [r14 + 0x4ad], bpl
226e34 xor      r10, r12
226e37 movabs   r12, 0xc4ceb9fe1a85ec53
226e41 mov      rax, r10
226e44 shr      rax, 0x21
226e48 xor      rax, r10
226e4b movabs   r10, 0x9e3779b97f4a7c15
226e55 imul     rax, r8
226e59 imul     rdx, r10
226e5d imul     r9, r10
226e61 mov      rcx, rax
226e64 shr      rcx, 0x21
226e68 xor      rcx, rax
226e6b imul     rcx, r12
226e6f mov      rax, rcx
226e72 shr      rax, 0x21
226e76 xor      rax, rcx
226e79 mov      ecx, dword ptr [r14 + 0x1178]
226e80 mov      qword ptr [r14 + 0x20], rax
226e84 movabs   rax, 0xd6e8feb86659fd93
226e8e imul     rcx, rax
226e92 xor      rcx, rdx
226e95 xor      rcx, rbx
226e98 movabs   rbx, 0x2545f4914f6cdd1d
226ea2 mov      rax, rcx
226ea5 add      r9, rbx
226ea8 shr      rax, 0x21
226eac xor      rax, rcx
226eaf imul     rax, r8
226eb3 mov      rdx, rax
226eb6 shr      rdx, 0x21
226eba xor      rdx, rax
226ebd mov      rax, qword ptr [rsp + 0x60]
226ec2 imul     rdx, r12
226ec6 shr      rdx, 0x21
226eca and      edx, 3
226ecd inc      rax
226ed0 mov      qword ptr [r14 + 0x1b8], rax
226ed7 cmp      bpl, 0x3e
226edb jae      0x140226f75
226ee1 inc      qword ptr [r14 + 0x11a0]
226ee8 lea      rax, [rip - 0x226eef]
226eef mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
226ef7 mov      qword ptr [r14 + 0x1b0], r9
226efe shr      r9, 0x1b
226f02 movzx    eax, r9b
226f06 mov      byte ptr [r14 + 0x160], al
226f0d imul     rax, rdi
226f11 mov      ebx, edx
226f13 xor      rax, rsi
226f16 xor      rax, r11
226f19 mov      rcx, rax
226f1c add      rax, r8
226f1f xor      rcx, r8
226f22 movzx    r8d, bpl
226f26 test     r15b, r15b
226f29 cmove    rax, rcx
226f2d mov      rcx, r14
226f30 mov      qword ptr [r14 + 0xf0], rax
226f37 call     0x1401f1f50
226f3c mov      r8, qword ptr [rsp + 0x70]
226f41 lea      edx, [r13 - 1]
226f45 mov      eax, eax
226f47 imul     rcx, rbx, 0x3e
226f4b add      rcx, rax
226f4e mov      rax, qword ptr [r14 + 0x4b8]
226f55 movsxd   r9, dword ptr [rax + rcx*4]
226f59 mov      rcx, r14
226f5c movsxd   rax, dword ptr [r14 + 0x4c8]
226f63 xor      r9, rax
226f66 add      r9, qword ptr [r14 + 0x4c0]
226f6d call     r9
226f70 jmp      0x14022703c
226f75 inc      dword ptr [r14 + 0x11a8]
226f7c mov      rax, r9
226f7f shr      rax, 0x1b
226f83 movzx    ecx, al
226f86 lea      rax, [r11*4]
226f8e mov      byte ptr [r14 + 0x163], cl
226f95 imul     rcx, rdi
226f99 imul     r9, r10
226f9d xor      rcx, rax
226fa0 xor      rcx, rsi
226fa3 mov      qword ptr [r14 + 0x108], rcx
226faa mov      r8, qword ptr [r14 + 0x1b8]
226fb1 add      r9, rbx
226fb4 mov      rax, r9
226fb7 shr      rax, 0x1b
226fbb movzx    edx, al
226fbe mov      byte ptr [r14 + 0x16a], dl
226fc5 imul     rax, r11, 0xb
226fc9 imul     rdx, rdi
226fcd xor      rdx, rax
226fd0 xor      rdx, rsi
226fd3 mov      rcx, rdx
226fd6 xor      rcx, 1
226fda test     r15b, r15b
226fdd lea      rax, [rdx + 1]
226fe1 cmove    rax, rcx
226fe5 mov      qword ptr [r14 + 0x140], rax
226fec lea      rax, [r8 + 2]
226ff0 mov      qword ptr [r14 + 0x1b8], rax
226ff7 imul     r9, r10
226ffb add      r9, rbx
226ffe mov      qword ptr [r14 + 0x1b0], r9
227005 shr      r9, 0x1b
227009 movzx    eax, r9b
22700d mov      byte ptr [r14 + 0x160], al
227014 imul     rax, rdi
227018 xor      rax, rsi
22701b xor      rax, r11
22701e mov      rcx, rax
227021 add      rax, 0xfe1ab
227027 xor      rcx, 0xfe1ab
22702e test     r15b, r15b
227031 cmove    rax, rcx
227035 mov      qword ptr [r14 + 0xf0], rax
22703c mov      r12, qword ptr [rsp + 0x28]
227041 mov      rsi, qword ptr [rsp + 0x68]
227046 mov      r15, qword ptr [rsp + 0x20]
22704b add      rsp, 0x30
22704f pop      r14
227051 pop      r13
227053 pop      rdi
227054 pop      rbp
227055 pop      rbx
227056 ret      
227057 mov      edx, 0x54485254
22705c mov      rcx, r14
22705f call     0x1401ed830
227064 int3     
227065 mov      edx, 0x43414e59
22706a mov      rcx, r14
22706d call     0x1401ed830
227072 int3     
