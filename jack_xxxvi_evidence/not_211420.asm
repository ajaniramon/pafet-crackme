211420 push     r12
211422 push     r13
211424 push     r14
211426 sub      rsp, 0x40
21142a movsxd   rax, dword ptr [rcx + 0x11e0]
211431 mov      r14, rcx
211434 mov      r13d, edx
211437 movabs   rcx, 0x58c3bfd0829beec2
211441 imul     rax, rcx
211445 movabs   rcx, 0xfa9a351b03456afd
21144f mov      r12, r8
211452 xor      rax, qword ptr [r14 + 0x28]
211456 mov      qword ptr [rsp + 0x60], rax
21145b mov      rax, qword ptr [rsp + 0x60]
211460 movsxd   rax, dword ptr [r14 + 0x11e0]
211467 imul     rax, rcx
21146b movabs   rcx, 0x1c52ab45800ee6e8
211475 xor      rax, qword ptr [r14 + 0x28]
211479 mov      qword ptr [rsp + 0x60], rax
21147e mov      rax, qword ptr [rsp + 0x60]
211483 movsxd   rax, dword ptr [r14 + 0x11e0]
21148a imul     rax, rcx
21148e movabs   rcx, 0x68e8379c8883fec6
211498 xor      rax, qword ptr [r14 + 0x28]
21149c mov      qword ptr [rsp + 0x60], rax
2114a1 mov      rax, qword ptr [rsp + 0x60]
2114a6 mov      rax, qword ptr [r14 + 0x2e0]
2114ad xor      rax, rcx
2114b0 mov      rcx, rax
2114b3 shr      rcx, 0x21
2114b7 xor      rcx, rax
2114ba movabs   rax, 0xff51afd7ed558ccd
2114c4 imul     rcx, rax
2114c8 movabs   rax, 0xc4ceb9fe1a85ec53
2114d2 mov      rdx, rcx
2114d5 shr      rdx, 0x21
2114d9 xor      rdx, rcx
2114dc mov      rcx, r14
2114df imul     rdx, rax
2114e3 mov      rax, rdx
2114e6 shr      rax, 0x21
2114ea xor      rdx, rax
2114ed mov      rax, qword ptr [r14 + 0x2e0]
2114f4 shr      rax, 7
2114f8 add      rax, rdx
2114fb mov      qword ptr [r14 + 0x2e0], rax
211502 call     0x1401ee940
211507 not      rax
21150a mov      rcx, r14
21150d mov      rdx, rax
211510 call     0x1401ee820
211515 mov      rax, qword ptr [r14 + 0x2e0]
21151c test     r13d, r13d
21151f jns      0x1402120c0
211525 cmp      qword ptr [r14 + 0x11b8], r12
21152c jne      0x1402120ce
211532 movsxd   rax, dword ptr [r14 + 0x11e0]
211539 movabs   rcx, 0xc980ebee0a2b6d54
211543 imul     rax, rcx
211547 mov      rcx, r14
21154a xor      rax, qword ptr [r14 + 0x28]
21154e mov      qword ptr [rsp + 0x60], rax
211553 mov      rax, qword ptr [rsp + 0x60]
211558 call     0x1401ee450
21155d test     eax, eax
21155f jne      0x1402120b5
211565 cmp      dword ptr [r14 + 0xad0], eax
21156c jne      0x1402120b5
211572 mov      r8, qword ptr [r14 + 0xf0]
211579 movzx    ecx, byte ptr [r14 + 0x160]
211581 mov      rax, r8
211584 mov      r10, qword ptr [r14 + 0xe0]
21158b mov      r11, qword ptr [r14 + 0xd8]
211592 mov      r9, qword ptr [r14 + 0x1b0]
211599 imul     rcx, r10
21159d mov      qword ptr [rsp + 0x68], rbx
2115a2 mov      rbx, qword ptr [r14 + 0xd0]
2115a9 xor      rcx, rbx
2115ac mov      qword ptr [rsp + 0x38], rbp
2115b1 xor      rcx, r11
2115b4 mov      qword ptr [rsp + 0x30], rsi
2115b9 mov      rsi, qword ptr [r14 + 0x1b8]
2115c0 xor      rax, rcx
2115c3 sub      r8, rcx
2115c6 mov      qword ptr [rsp + 0x28], rdi
2115cb movzx    edi, byte ptr [r14 + 0xe8]
2115d3 movabs   rbp, 0x2545f4914f6cdd1d
2115dd test     dil, dil
2115e0 mov      qword ptr [rsp + 0x20], r15
2115e5 movabs   r15, 0x9e3779b97f4a7c15
2115ef cmove    r8, rax
2115f3 inc      rsi
2115f6 imul     r9, r15
2115fa mov      qword ptr [r14 + 0x1b8], rsi
211601 mov      rcx, r8
211604 add      r9, rbp
211607 mov      qword ptr [r14 + 0x1b0], r9
21160e mov      rax, r9
211611 shr      rax, 0x1b
211615 movzx    edx, al
211618 mov      byte ptr [r14 + 0x160], dl
21161f imul     rdx, r10
211623 xor      rdx, rbx
211626 xor      rdx, r11
211629 xor      rcx, rdx
21162c test     dil, dil
21162f lea      rax, [r8 + rdx]
211633 cmove    rax, rcx
211637 mov      qword ptr [r14 + 0xf0], rax
21163e cmp      r8d, 0x48cad
211645 jne      0x14021209c
21164b mov      eax, r13d
21164e btr      eax, 0x1f
211652 cmp      eax, 2
211655 jae      0x1402116a1
211657 imul     r9, r15
21165b lea      rax, [rsi + 1]
21165f mov      qword ptr [r14 + 0x1b8], rax
211666 add      r9, rbp
211669 mov      qword ptr [r14 + 0x1b0], r9
211670 shr      r9, 0x1b
211674 movzx    eax, r9b
211678 mov      byte ptr [r14 + 0x160], al
21167f imul     rax, r10
211683 xor      rax, rbx
211686 xor      rax, r11
211689 mov      rcx, rax
21168c add      rax, 0xf6105
211692 xor      rcx, 0xf6105
211699 test     dil, dil
21169c jmp      0x140212091
2116a1 mov      rcx, r14
2116a4 call     0x1401ee070
2116a9 movzx    ecx, byte ptr [r14 + 0x4ad]
2116b1 movabs   rbx, 0xff51afd7ed558ccd
2116bb xor      rcx, qword ptr [r14 + 0x11e8]
2116c2 movabs   r8, 0xc4ceb9fe1a85ec53
2116cc mov      r11, qword ptr [r14 + 0xe0]
2116d3 mov      r10, qword ptr [r14 + 0xd0]
2116da movzx    r9d, byte ptr [r14 + 0xe8]
2116e2 mov      eax, eax
2116e4 xor      rcx, rax
2116e7 mov      rax, rcx
2116ea shr      rax, 0x21
2116ee xor      rax, rcx
2116f1 imul     rax, rbx
2116f5 mov      rcx, rax
2116f8 shr      rcx, 0x21
2116fc xor      rcx, rax
2116ff imul     rcx, r8
211703 mov      rdx, rcx
211706 shr      rdx, 0x21
21170a xor      rdx, rcx
21170d mov      qword ptr [r14 + 0x11e8], rdx
211714 xor      rdx, qword ptr [r14 + 0x28]
211718 xor      rdx, qword ptr [r14 + 0x20]
21171c mov      rax, rdx
21171f shr      rax, 0x21
211723 xor      rax, rdx
211726 imul     rax, rbx
21172a mov      rcx, rax
21172d shr      rcx, 0x21
211731 xor      rcx, rax
211734 imul     rcx, r8
211738 mov      rax, rcx
21173b shr      rax, 0x21
21173f xor      rax, rcx
211742 mov      qword ptr [r14 + 0x20], rax
211746 mov      rdx, qword ptr [r14 + 0x138]
21174d movzx    ecx, byte ptr [r14 + 0x169]
211755 mov      rax, qword ptr [r14 + 0xd8]
21175c imul     rcx, r11
211760 lea      rbx, [rax + rax*4]
211764 mov      rax, rdx
211767 add      rbx, rbx
21176a xor      rcx, rbx
21176d xor      rcx, r10
211770 xor      rax, rcx
211773 sub      rdx, rcx
211776 test     r9b, r9b
211779 cmove    rdx, rax
21177d mov      rax, qword ptr [r14 + 0x1b0]
211784 inc      qword ptr [r14 + 0x1b8]
21178b imul     rax, r15
21178f add      rax, rbp
211792 mov      qword ptr [r14 + 0x1b0], rax
211799 shr      rax, 0x1b
21179d movzx    r8d, al
2117a1 mov      byte ptr [r14 + 0x169], r8b
2117a8 imul     r8, r11
2117ac xor      r8, rbx
2117af xor      r8, r10
2117b2 mov      rcx, r8
2117b5 xor      rcx, rdx
2117b8 test     r9b, r9b
2117bb lea      rax, [r8 + rdx]
2117bf cmove    rax, rcx
2117c3 mov      rcx, r14
2117c6 mov      qword ptr [r14 + 0x138], rax
2117cd call     0x1401f0910
2117d2 mov      rax, qword ptr [r14 + 0xd8]
2117d9 mov      r10, qword ptr [r14 + 0xe0]
2117e0 movzx    ecx, byte ptr [r14 + 0x168]
2117e8 mov      rbx, qword ptr [r14 + 0xd0]
2117ef mov      rdx, qword ptr [r14 + 0x130]
2117f6 lea      r11, [rax + rax*8]
2117fa movzx    r9d, byte ptr [r14 + 0xe8]
211802 mov      rax, rdx
211805 imul     rcx, r10
211809 xor      rcx, r11
21180c xor      rcx, rbx
21180f xor      rax, rcx
211812 sub      rdx, rcx
211815 test     r9b, r9b
211818 cmove    rdx, rax
21181c mov      rax, qword ptr [r14 + 0x1b0]
211823 inc      qword ptr [r14 + 0x1b8]
21182a mov      rcx, rdx
21182d imul     rax, r15
211831 add      rax, rbp
211834 mov      qword ptr [r14 + 0x1b0], rax
21183b shr      rax, 0x1b
21183f movzx    r8d, al
211843 mov      byte ptr [r14 + 0x168], r8b
21184a imul     r8, r10
21184e xor      r8, r11
211851 xor      r8, rbx
211854 xor      rcx, r8
211857 test     r9b, r9b
21185a lea      rax, [rdx + r8]
21185e cmove    rax, rcx
211862 mov      rcx, r14
211865 mov      qword ptr [r14 + 0x130], rax
21186c call     0x1401f0910
211871 mov      rcx, r14
211874 call     0x1401ee070
211879 cmp      eax, dword ptr [r14 + 0x1d8]
211880 jae      0x14021188c
211882 mov      edx, eax
211884 mov      rcx, r14
211887 call     0x1401f0910
21188c mov      rsi, qword ptr [r14 + 0xe0]
211893 mov      rbp, qword ptr [r14 + 0xd0]
21189a mov      r11, qword ptr [r14 + 0x130]
2118a1 movzx    edi, byte ptr [r14 + 0xe8]
2118a9 mov      rax, r11
2118ac movzx    ecx, byte ptr [r14 + 0x168]
2118b4 mov      rbx, qword ptr [r14 + 0xd8]
2118bb mov      r8, qword ptr [r14 + 0x1b8]
2118c2 mov      r10, qword ptr [r14 + 0x1b0]
2118c9 imul     rcx, rsi
2118cd lea      r9, [rbx + rbx*8]
2118d1 xor      rcx, r9
2118d4 xor      rcx, rbp
2118d7 xor      rax, rcx
2118da sub      r11, rcx
2118dd test     dil, dil
2118e0 movabs   rcx, 0x2545f4914f6cdd1d
2118ea cmove    r11, rax
2118ee imul     r10, r15
2118f2 add      r10, rcx
2118f5 mov      rcx, r11
2118f8 mov      rax, r10
2118fb shr      rax, 0x1b
2118ff movzx    edx, al
211902 mov      byte ptr [r14 + 0x168], dl
211909 imul     rdx, rsi
21190d xor      rdx, r9
211910 xor      rdx, rbp
211913 xor      rcx, rdx
211916 test     dil, dil
211919 lea      rax, [r11 + rdx]
21191d cmove    rax, rcx
211921 mov      rcx, r11
211924 mov      qword ptr [r14 + 0x130], rax
21192b movabs   rax, 0x2545f4914f6cdd1d
211935 imul     r10, r15
211939 add      r10, rax
21193c lea      rax, [r8 + 2]
211940 mov      qword ptr [r14 + 0x1b8], rax
211947 mov      r8d, 0x1e29
21194d mov      qword ptr [r14 + 0x1b0], r10
211954 lea      rax, [rbx + rbx*4]
211958 add      rax, rax
21195b shr      r10, 0x1b
21195f movzx    edx, r10b
211963 mov      byte ptr [r14 + 0x169], dl
21196a imul     rdx, rsi
21196e xor      rdx, rax
211971 xor      rdx, rbp
211974 xor      rcx, rdx
211977 test     dil, dil
21197a lea      rax, [r11 + rdx]
21197e cmove    rax, rcx
211982 mov      rcx, r14
211985 mov      qword ptr [r14 + 0x138], rax
21198c movzx    edx, byte ptr [r14 + 0x4ad]
211994 xor      rdx, qword ptr [r14 + 0x348]
21199b call     0x1401f1520
2119a0 mov      r8, qword ptr [r14 + 0x348]
2119a7 movabs   rdi, 0xff51afd7ed558ccd
2119b1 mov      rax, r8
2119b4 movabs   rsi, 0xc4ceb9fe1a85ec53
2119be xor      rax, qword ptr [r14 + 0x20]
2119c2 mov      rcx, rax
2119c5 shr      rcx, 0x21
2119c9 xor      rcx, rax
2119cc imul     rcx, rdi
2119d0 mov      rax, rcx
2119d3 shr      rax, 0x21
2119d7 xor      rax, rcx
2119da imul     rax, rsi
2119de mov      rdx, rax
2119e1 shr      rdx, 0x21
2119e5 xor      edx, eax
2119e7 lea      eax, [rdx + 1]
2119ea mov      ecx, eax
2119ec xor      eax, edx
2119ee imul     ecx, edx
2119f1 not      ecx
2119f3 and      ecx, eax
2119f5 test     cl, 1
2119f8 je       0x140211a6b
2119fa and      r8b, 3
2119fe cmp      r8b, 1
211a02 jne      0x140211a6b
211a04 mov      rax, qword ptr [r14 + 0x1b0]
211a0b movabs   rcx, 0x2545f4914f6cdd1d
211a15 inc      qword ptr [r14 + 0x1b8]
211a1c imul     rax, r15
211a20 add      rax, rcx
211a23 mov      qword ptr [r14 + 0x1b0], rax
211a2a shr      rax, 0x1b
211a2e movzx    eax, al
211a31 mov      byte ptr [r14 + 0x160], al
211a38 imul     rax, qword ptr [r14 + 0xe0]
211a40 xor      rax, qword ptr [r14 + 0xd8]
211a47 xor      rax, qword ptr [r14 + 0xd0]
211a4e mov      rcx, rax
211a51 add      rax, 0x116fdf
211a57 xor      rcx, 0x116fdf
211a5e cmp      byte ptr [r14 + 0xe8], 0
211a66 jmp      0x140212091
211a6b mov      rcx, r14
211a6e call     0x1401ee070
211a73 mov      ebx, eax
211a75 cmp      eax, dword ptr [r14 + 0x1d8]
211a7c jb       0x140211ae5
211a7e mov      rax, qword ptr [r14 + 0x1b0]
211a85 movabs   rcx, 0x2545f4914f6cdd1d
211a8f inc      qword ptr [r14 + 0x1b8]
211a96 imul     rax, r15
211a9a add      rax, rcx
211a9d mov      qword ptr [r14 + 0x1b0], rax
211aa4 shr      rax, 0x1b
211aa8 movzx    eax, al
211aab mov      byte ptr [r14 + 0x160], al
211ab2 imul     rax, qword ptr [r14 + 0xe0]
211aba xor      rax, qword ptr [r14 + 0xd8]
211ac1 xor      rax, qword ptr [r14 + 0xd0]
211ac8 mov      rcx, rax
211acb add      rax, 0xfe1ab
211ad1 xor      rcx, 0xfe1ab
211ad8 cmp      byte ptr [r14 + 0xe8], 0
211ae0 jmp      0x140212091
211ae5 mov      edx, ebx
211ae7 mov      rcx, r14
211aea call     0x1401f25b0
211aef movsxd   rcx, dword ptr [r14 + 0x11e0]
211af6 movabs   r8, 0xd6e8feb86659fd93
211b00 mov      rdx, qword ptr [r14 + 0x20]
211b04 mov      rax, rbx
211b07 imul     rax, r8
211b0b imul     rcx, r15
211b0f rol      rdx, 0x11
211b13 xor      rax, rdx
211b16 xor      rcx, qword ptr [r14 + 0x260]
211b1d xor      rax, rcx
211b20 mov      rcx, rax
211b23 shr      rcx, 0x21
211b27 xor      rcx, rax
211b2a imul     rcx, rdi
211b2e mov      rdx, rcx
211b31 shr      rdx, 0x21
211b35 xor      rdx, rcx
211b38 imul     rdx, rsi
211b3c mov      rax, rdx
211b3f shr      rax, 0x21
211b43 xor      rax, rdx
211b46 mov      r10, rax
211b49 shr      r10, 0x1d
211b4d xor      r10, rax
211b50 or       r10, 1
211b54 mov      rax, r10
211b57 mov      qword ptr [r14 + 0x260], r10
211b5e and      eax, 0x3ff
211b63 cmp      rax, 0x2c5
211b69 jne      0x140211b7a
211b6b mov      rcx, r14
211b6e call     0x1402297e0
211b73 mov      r10, qword ptr [r14 + 0x260]
211b7a movzx    eax, r10b
211b7e and      al, 0x1f
211b80 cmp      al, 0x15
211b82 jne      0x140211c6f
211b88 movsxd   rax, dword ptr [r14 + 0x11e0]
211b8f xor      rax, 0x5a5a
211b95 mov      rcx, qword ptr [r14 + 0x20]
211b99 imul     rax, r15
211b9d rol      rcx, 0x11
211ba1 xor      rax, r10
211ba4 xor      rcx, rax
211ba7 movabs   rax, 0x8f70feda99a6026d
211bb1 xor      rcx, rax
211bb4 mov      rax, rcx
211bb7 shr      rax, 0x21
211bbb xor      rax, rcx
211bbe imul     rax, rdi
211bc2 mov      rcx, rax
211bc5 shr      rcx, 0x21
211bc9 xor      rcx, rax
211bcc imul     rcx, rsi
211bd0 mov      rax, rcx
211bd3 shr      rax, 0x21
211bd7 xor      rax, rcx
211bda mov      r9, rax
211bdd shr      r9, 0x1d
211be1 xor      r9, rax
211be4 or       r9, 1
211be8 mov      rax, r9
211beb mov      rcx, r9
211bee shr      rax, 8
211bf2 and      eax, 3
211bf5 shr      rcx, 0x28
211bf9 imul     r8, rax, 0x3e
211bfd mov      eax, 0x8421085
211c02 mul      ecx
211c04 mov      eax, ecx
211c06 sub      eax, edx
211c08 shr      eax, 1
211c0a add      eax, edx
211c0c shr      eax, 5
211c0f imul     eax, eax, 0x3e
211c12 sub      ecx, eax
211c14 mov      eax, ecx
211c16 add      r8, rax
211c19 mov      rax, qword ptr [r14 + 0x4b8]
211c20 movsxd   rcx, dword ptr [rax + r8*4]
211c24 movsxd   rax, dword ptr [r14 + 0x4c8]
211c2b xor      rcx, rax
211c2e add      rcx, qword ptr [r14 + 0x4c0]
211c35 xor      rcx, r9
211c38 mov      rax, rcx
211c3b shr      rax, 0x21
211c3f xor      rax, rcx
211c42 imul     rax, rdi
211c46 mov      rcx, rax
211c49 shr      rcx, 0x21
211c4d xor      rcx, rax
211c50 imul     rcx, rsi
211c54 mov      rax, rcx
211c57 shr      rax, 0x21
211c5b xor      rax, rcx
211c5e xor      rax, r10
211c61 inc      qword ptr [r14 + 0x268]
211c68 mov      qword ptr [r14 + 0x260], rax
211c6f inc      dword ptr [r14 + 0x200]
211c76 mov      eax, dword ptr [r14 + 0x200]
211c7d cmp      eax, dword ptr [r14 + 0x1fc]
211c84 jb       0x140211c99
211c86 mov      rcx, r14
211c89 mov      dword ptr [r14 + 0x200], 0
211c94 call     0x1401ef7c0
211c99 mov      r8d, ebx
211c9c mov      edx, ebx
211c9e mov      rcx, r14
211ca1 call     0x1401f0660
211ca6 inc      qword ptr [r14 + 0x1b8]
211cad movabs   rax, 0x2545f4914f6cdd1d
211cb7 mov      r9, qword ptr [r14 + 0x1b0]
211cbe mov      r10, qword ptr [r14 + 0x1b8]
211cc5 imul     r9, r15
211cc9 add      r9, rax
211ccc mov      qword ptr [r14 + 0x1b0], r9
211cd3 mov      rax, r9
211cd6 shr      rax, 0x1b
211cda movzx    edx, al
211cdd mov      byte ptr [r14 + 0x168], dl
211ce4 mov      rdi, qword ptr [r14 + 0xe0]
211ceb mov      r11, qword ptr [r14 + 0xd8]
211cf2 mov      rsi, qword ptr [r14 + 0xd0]
211cf9 movzx    r15d, byte ptr [r14 + 0xe8]
211d01 imul     rdx, rdi
211d05 lea      rax, [r11 + r11*8]
211d09 xor      rdx, rax
211d0c xor      rdx, rsi
211d0f mov      rcx, rdx
211d12 xor      rcx, rbx
211d15 test     r15b, r15b
211d18 lea      rax, [rdx + rbx]
211d1c cmove    rax, rcx
211d20 inc      r10
211d23 mov      qword ptr [r14 + 0x130], rax
211d2a mov      rcx, qword ptr [r14 + 0x1d0]
211d31 mov      rax, qword ptr [r14 + 0x48]
211d35 mov      qword ptr [rsp + 0x78], r10
211d3a movzx    r8d, byte ptr [rcx + rbx]
211d3f xor      r8b, byte ptr [rax + rbx]
211d43 inc      ebx
211d45 mov      qword ptr [r14 + 0x1b8], r10
211d4c movabs   rax, 0x9e3779b97f4a7c15
211d56 imul     r9, rax
211d5a mov      qword ptr [rsp + 0x60], rbx
211d5f movabs   rax, 0x2545f4914f6cdd1d
211d69 add      r9, rax
211d6c mov      rax, r9
211d6f shr      rax, 0x1b
211d73 movzx    edx, al
211d76 lea      rax, [r11 + r11]
211d7a mov      byte ptr [r14 + 0x161], dl
211d81 imul     rdx, rdi
211d85 xor      rdx, rax
211d88 xor      rdx, rsi
211d8b mov      rcx, rdx
211d8e xor      rcx, rbx
211d91 test     r15b, r15b
211d94 lea      rax, [rdx + rbx]
211d98 cmove    rax, rcx
211d9c mov      qword ptr [r14 + 0xf8], rax
211da3 movsxd   rdx, dword ptr [r14 + 0x11e0]
211daa mov      r10, qword ptr [r14 + 0x20]
211dae mov      rcx, rdx
211db1 xor      rcx, qword ptr [r14 + 0x350]
211db8 xor      rcx, r10
211dbb xor      rcx, rbx
211dbe movabs   rbx, 0xff51afd7ed558ccd
211dc8 xor      rcx, qword ptr [r14 + 0x348]
211dcf mov      rax, rcx
211dd2 shr      rax, 0x21
211dd6 xor      rax, rcx
211dd9 imul     rax, rbx
211ddd mov      rcx, rax
211de0 shr      rcx, 0x21
211de4 xor      rcx, rax
211de7 movabs   rax, 0xc4ceb9fe1a85ec53
211df1 imul     rcx, rax
211df5 movzx    eax, r8b
211df9 mov      rbx, rcx
211dfc shr      rbx, 0x21
211e00 xor      rbx, rcx
211e03 lea      rcx, [rip - 0x211e0a]
211e0a xor      rax, 0xdd
211e10 mov      qword ptr [r14 + 0x28], rbx
211e14 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
211e1c xor      bpl, 0x63
211e20 movabs   r8, 0xff51afd7ed558ccd
211e2a inc      edx
211e2c mov      dword ptr [r14 + 0x11e0], edx
211e33 test     dl, 0x1f
211e36 jne      0x140211e7c
211e38 movsxd   rax, edx
211e3b xor      rax, r10
211e3e xor      rax, qword ptr [r14 + 0x348]
211e45 mov      rcx, rax
211e48 shr      rcx, 0x21
211e4c xor      rcx, rax
211e4f movabs   rax, 0xc4ceb9fe1a85ec53
211e59 imul     rcx, r8
211e5d mov      rdx, rcx
211e60 shr      rdx, 0x21
211e64 xor      rdx, rcx
211e67 imul     rdx, rax
211e6b mov      rax, rdx
211e6e shr      rax, 0x21
211e72 xor      rax, rdx
211e75 mov      qword ptr [r14 + 0x348], rax
211e7c movzx    edx, bpl
211e80 xor      r10, rdx
211e83 mov      byte ptr [r14 + 0x4ad], bpl
211e8a xor      r10, qword ptr [rsp + 0x60]
211e8f mov      rax, r10
211e92 shr      rax, 0x21
211e96 xor      rax, r10
211e99 movabs   r10, 0x9e3779b97f4a7c15
211ea3 imul     rax, r8
211ea7 imul     rdx, r10
211eab imul     r9, r10
211eaf mov      rcx, rax
211eb2 shr      rcx, 0x21
211eb6 xor      rcx, rax
211eb9 movabs   rax, 0xc4ceb9fe1a85ec53
211ec3 imul     rcx, rax
211ec7 mov      rax, rcx
211eca shr      rax, 0x21
211ece xor      rax, rcx
211ed1 mov      ecx, dword ptr [r14 + 0x1178]
211ed8 mov      qword ptr [r14 + 0x20], rax
211edc movabs   rax, 0xd6e8feb86659fd93
211ee6 imul     rcx, rax
211eea xor      rcx, rdx
211eed xor      rcx, rbx
211ef0 movabs   rbx, 0x2545f4914f6cdd1d
211efa mov      rax, rcx
211efd add      r9, rbx
211f00 shr      rax, 0x21
211f04 xor      rax, rcx
211f07 imul     rax, r8
211f0b mov      rdx, rax
211f0e shr      rdx, 0x21
211f12 xor      rdx, rax
211f15 movabs   rax, 0xc4ceb9fe1a85ec53
211f1f imul     rdx, rax
211f23 mov      rax, qword ptr [rsp + 0x78]
211f28 shr      rdx, 0x21
211f2c and      edx, 3
211f2f inc      rax
211f32 mov      qword ptr [r14 + 0x1b8], rax
211f39 cmp      bpl, 0x3e
211f3d jae      0x140211fd5
211f43 inc      qword ptr [r14 + 0x11a0]
211f4a lea      rax, [rip - 0x211f51]
211f51 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
211f59 mov      qword ptr [r14 + 0x1b0], r9
211f60 shr      r9, 0x1b
211f64 movzx    eax, r9b
211f68 mov      byte ptr [r14 + 0x160], al
211f6f imul     rax, rdi
211f73 mov      ebx, edx
211f75 xor      rax, rsi
211f78 xor      rax, r11
211f7b mov      rcx, rax
211f7e add      rax, r8
211f81 xor      rcx, r8
211f84 movzx    r8d, bpl
211f88 test     r15b, r15b
211f8b cmove    rax, rcx
211f8f mov      rcx, r14
211f92 mov      qword ptr [r14 + 0xf0], rax
211f99 call     0x1401f1f50
211f9e mov      eax, eax
211fa0 lea      edx, [r13 - 1]
211fa4 imul     rcx, rbx, 0x3e
211fa8 mov      r8, r12
211fab add      rcx, rax
211fae mov      rax, qword ptr [r14 + 0x4b8]
211fb5 movsxd   r9, dword ptr [rax + rcx*4]
211fb9 mov      rcx, r14
211fbc movsxd   rax, dword ptr [r14 + 0x4c8]
211fc3 xor      r9, rax
211fc6 add      r9, qword ptr [r14 + 0x4c0]
211fcd call     r9
211fd0 jmp      0x14021209c
211fd5 inc      dword ptr [r14 + 0x11a8]
211fdc mov      rax, r9
211fdf shr      rax, 0x1b
211fe3 movzx    ecx, al
211fe6 lea      rax, [r11*4]
211fee mov      byte ptr [r14 + 0x163], cl
211ff5 imul     rcx, rdi
211ff9 imul     r9, r10
211ffd xor      rcx, rax
212000 xor      rcx, rsi
212003 mov      qword ptr [r14 + 0x108], rcx
21200a mov      r8, qword ptr [r14 + 0x1b8]
212011 add      r9, rbx
212014 mov      rax, r9
212017 shr      rax, 0x1b
21201b movzx    edx, al
21201e mov      byte ptr [r14 + 0x16a], dl
212025 imul     rax, r11, 0xb
212029 imul     rdx, rdi
21202d xor      rdx, rax
212030 xor      rdx, rsi
212033 mov      rcx, rdx
212036 xor      rcx, 1
21203a test     r15b, r15b
21203d lea      rax, [rdx + 1]
212041 cmove    rax, rcx
212045 mov      qword ptr [r14 + 0x140], rax
21204c lea      rax, [r8 + 2]
212050 mov      qword ptr [r14 + 0x1b8], rax
212057 imul     r9, r10
21205b add      r9, rbx
21205e mov      qword ptr [r14 + 0x1b0], r9
212065 shr      r9, 0x1b
212069 movzx    eax, r9b
21206d mov      byte ptr [r14 + 0x160], al
212074 imul     rax, rdi
212078 xor      rax, rsi
21207b xor      rax, r11
21207e mov      rcx, rax
212081 add      rax, 0xfe1ab
212087 xor      rcx, 0xfe1ab
21208e test     r15b, r15b
212091 cmove    rax, rcx
212095 mov      qword ptr [r14 + 0xf0], rax
21209c mov      rdi, qword ptr [rsp + 0x28]
2120a1 mov      rsi, qword ptr [rsp + 0x30]
2120a6 mov      rbp, qword ptr [rsp + 0x38]
2120ab mov      rbx, qword ptr [rsp + 0x68]
2120b0 mov      r15, qword ptr [rsp + 0x20]
2120b5 add      rsp, 0x40
2120b9 pop      r14
2120bb pop      r13
2120bd pop      r12
2120bf ret      
2120c0 mov      edx, 0x54485254
2120c5 mov      rcx, r14
2120c8 call     0x1401ed830
2120cd int3     
2120ce mov      edx, 0x43414e59
2120d3 mov      rcx, r14
2120d6 call     0x1401ed830
2120db int3     
