1f35e0 mov      qword ptr [rsp + 0x18], r8
1f35e5 push     rbx
1f35e6 push     rbp
1f35e7 push     rdi
1f35e8 push     r13
1f35ea push     r14
1f35ec sub      rsp, 0x30
1f35f0 movsxd   rax, dword ptr [rcx + 0x11e0]
1f35f7 mov      r14, rcx
1f35fa mov      r13d, edx
1f35fd movabs   rcx, 0x1985cdc6e9f70cf4
1f3607 imul     rax, rcx
1f360b movabs   rcx, 0xbbdc470d682988cb
1f3615 movabs   rbp, 0xff51afd7ed558ccd
1f361f xor      rax, qword ptr [r14 + 0x28]
1f3623 mov      rdi, r8
1f3626 mov      qword ptr [rsp + 0x60], rax
1f362b mov      rax, qword ptr [rsp + 0x60]
1f3630 movsxd   rax, dword ptr [r14 + 0x11e0]
1f3637 imul     rax, rcx
1f363b movabs   rcx, 0x5d14d953eb6204de
1f3645 xor      rax, qword ptr [r14 + 0x28]
1f3649 mov      qword ptr [rsp + 0x60], rax
1f364e mov      rax, qword ptr [rsp + 0x60]
1f3653 movsxd   rax, dword ptr [r14 + 0x11e0]
1f365a imul     rax, rcx
1f365e xor      rax, qword ptr [r14 + 0x28]
1f3662 mov      qword ptr [rsp + 0x60], rax
1f3667 mov      rax, qword ptr [rsp + 0x60]
1f366c mov      rax, qword ptr [r14 + 0x2e0]
1f3673 shr      rax, 0xd
1f3677 mov      rcx, rax
1f367a shr      rcx, 0x21
1f367e xor      rcx, rax
1f3681 movabs   rax, 0xc4ceb9fe1a85ec53
1f368b imul     rcx, rbp
1f368f mov      rdx, rcx
1f3692 shr      rdx, 0x21
1f3696 xor      rdx, rcx
1f3699 imul     rdx, rax
1f369d movabs   rax, 0x6d3f511fe17a14da
1f36a7 mov      rcx, rdx
1f36aa shr      rcx, 0x21
1f36ae xor      rcx, rdx
1f36b1 xor      rcx, rax
1f36b4 mov      rax, qword ptr [r14 + 0x2e0]
1f36bb add      rcx, rax
1f36be mov      qword ptr [r14 + 0x2e0], rcx
1f36c5 mov      rcx, r14
1f36c8 call     0x1401f1e80
1f36cd mov      ebx, eax
1f36cf mov      rcx, r14
1f36d2 and      ebx, 0x3f
1f36d5 call     0x1401ee940
1f36da mov      ecx, 0x40
1f36df sub      ecx, ebx
1f36e1 shl      rax, cl
1f36e4 sar      rax, cl
1f36e7 mov      rcx, r14
1f36ea mov      rdx, rax
1f36ed call     0x1401ee820
1f36f2 mov      rax, qword ptr [r14 + 0x2e0]
1f36f9 test     r13d, r13d
1f36fc jns      0x1401f423a
1f3702 cmp      qword ptr [r14 + 0x11b8], rdi
1f3709 jne      0x1401f4248
1f370f movsxd   rax, dword ptr [r14 + 0x11e0]
1f3716 movabs   rcx, 0x338f5d486959eae6
1f3720 imul     rax, rcx
1f3724 mov      rcx, r14
1f3727 xor      rax, qword ptr [r14 + 0x28]
1f372b mov      qword ptr [rsp + 0x60], rax
1f3730 mov      rax, qword ptr [rsp + 0x60]
1f3735 call     0x1401ee450
1f373a test     eax, eax
1f373c jne      0x1401f422e
1f3742 cmp      dword ptr [r14 + 0xad0], eax
1f3749 jne      0x1401f422e
1f374f mov      r8, qword ptr [r14 + 0xf0]
1f3756 movzx    ecx, byte ptr [r14 + 0x160]
1f375e mov      rax, r8
1f3761 mov      r10, qword ptr [r14 + 0xe0]
1f3768 mov      rbx, qword ptr [r14 + 0xd0]
1f376f mov      r11, qword ptr [r14 + 0xd8]
1f3776 movzx    edi, byte ptr [r14 + 0xe8]
1f377e mov      r9, qword ptr [r14 + 0x1b0]
1f3785 imul     rcx, r10
1f3789 mov      qword ptr [rsp + 0x68], rsi
1f378e mov      rsi, qword ptr [r14 + 0x1b8]
1f3795 xor      rcx, rbx
1f3798 xor      rcx, r11
1f379b mov      qword ptr [rsp + 0x28], r12
1f37a0 xor      rax, rcx
1f37a3 mov      qword ptr [rsp + 0x20], r15
1f37a8 sub      r8, rcx
1f37ab movabs   r15, 0x9e3779b97f4a7c15
1f37b5 test     dil, dil
1f37b8 movabs   r12, 0x2545f4914f6cdd1d
1f37c2 cmove    r8, rax
1f37c6 inc      rsi
1f37c9 imul     r9, r15
1f37cd mov      qword ptr [r14 + 0x1b8], rsi
1f37d4 mov      rcx, r8
1f37d7 add      r9, r12
1f37da mov      qword ptr [r14 + 0x1b0], r9
1f37e1 mov      rax, r9
1f37e4 shr      rax, 0x1b
1f37e8 movzx    edx, al
1f37eb mov      byte ptr [r14 + 0x160], dl
1f37f2 imul     rdx, r10
1f37f6 xor      rdx, rbx
1f37f9 xor      rdx, r11
1f37fc xor      rcx, rdx
1f37ff test     dil, dil
1f3802 lea      rax, [r8 + rdx]
1f3806 cmove    rax, rcx
1f380a mov      qword ptr [r14 + 0xf0], rax
1f3811 cmp      r8d, 0x26dc07
1f3818 jne      0x1401f421f
1f381e mov      eax, r13d
1f3821 btr      eax, 0x1f
1f3825 cmp      eax, 2
1f3828 jae      0x1401f3874
1f382a imul     r9, r15
1f382e lea      rax, [rsi + 1]
1f3832 mov      qword ptr [r14 + 0x1b8], rax
1f3839 add      r9, r12
1f383c mov      qword ptr [r14 + 0x1b0], r9
1f3843 shr      r9, 0x1b
1f3847 movzx    eax, r9b
1f384b mov      byte ptr [r14 + 0x160], al
1f3852 imul     rax, r10
1f3856 xor      rax, rbx
1f3859 xor      rax, r11
1f385c mov      rcx, rax
1f385f add      rax, 0x3abaef
1f3865 xor      rcx, 0x3abaef
1f386c test     dil, dil
1f386f jmp      0x1401f4214
1f3874 mov      rcx, r14
1f3877 call     0x1401ee070
1f387c movzx    ecx, byte ptr [r14 + 0x4ad]
1f3884 movabs   r8, 0xc4ceb9fe1a85ec53
1f388e xor      rcx, qword ptr [r14 + 0x11e8]
1f3895 mov      r11, qword ptr [r14 + 0xe0]
1f389c mov      r10, qword ptr [r14 + 0xd0]
1f38a3 movzx    r9d, byte ptr [r14 + 0xe8]
1f38ab mov      eax, eax
1f38ad xor      rcx, rax
1f38b0 mov      rax, rcx
1f38b3 shr      rax, 0x21
1f38b7 xor      rax, rcx
1f38ba imul     rax, rbp
1f38be mov      rcx, rax
1f38c1 shr      rcx, 0x21
1f38c5 xor      rcx, rax
1f38c8 imul     rcx, r8
1f38cc mov      rdx, rcx
1f38cf shr      rdx, 0x21
1f38d3 xor      rdx, rcx
1f38d6 mov      qword ptr [r14 + 0x11e8], rdx
1f38dd xor      rdx, qword ptr [r14 + 0x28]
1f38e1 xor      rdx, qword ptr [r14 + 0x20]
1f38e5 mov      rax, rdx
1f38e8 shr      rax, 0x21
1f38ec xor      rax, rdx
1f38ef imul     rax, rbp
1f38f3 mov      rcx, rax
1f38f6 shr      rcx, 0x21
1f38fa xor      rcx, rax
1f38fd imul     rcx, r8
1f3901 mov      rax, rcx
1f3904 shr      rax, 0x21
1f3908 xor      rax, rcx
1f390b mov      qword ptr [r14 + 0x20], rax
1f390f mov      rdx, qword ptr [r14 + 0x138]
1f3916 movzx    ecx, byte ptr [r14 + 0x169]
1f391e mov      rax, qword ptr [r14 + 0xd8]
1f3925 imul     rcx, r11
1f3929 lea      rbx, [rax + rax*4]
1f392d mov      rax, rdx
1f3930 add      rbx, rbx
1f3933 xor      rcx, rbx
1f3936 xor      rcx, r10
1f3939 xor      rax, rcx
1f393c sub      rdx, rcx
1f393f test     r9b, r9b
1f3942 cmove    rdx, rax
1f3946 mov      rax, qword ptr [r14 + 0x1b0]
1f394d inc      qword ptr [r14 + 0x1b8]
1f3954 imul     rax, r15
1f3958 add      rax, r12
1f395b mov      qword ptr [r14 + 0x1b0], rax
1f3962 shr      rax, 0x1b
1f3966 movzx    r8d, al
1f396a mov      byte ptr [r14 + 0x169], r8b
1f3971 imul     r8, r11
1f3975 xor      r8, rbx
1f3978 xor      r8, r10
1f397b mov      rcx, r8
1f397e xor      rcx, rdx
1f3981 test     r9b, r9b
1f3984 lea      rax, [r8 + rdx]
1f3988 cmove    rax, rcx
1f398c mov      rcx, r14
1f398f mov      qword ptr [r14 + 0x138], rax
1f3996 call     0x1401f0910
1f399b mov      rax, qword ptr [r14 + 0xd8]
1f39a2 mov      rdx, qword ptr [r14 + 0x130]
1f39a9 mov      r10, qword ptr [r14 + 0xe0]
1f39b0 movzx    ecx, byte ptr [r14 + 0x168]
1f39b8 mov      rbx, qword ptr [r14 + 0xd0]
1f39bf lea      r11, [rax + rax*8]
1f39c3 movzx    r9d, byte ptr [r14 + 0xe8]
1f39cb mov      rax, rdx
1f39ce imul     rcx, r10
1f39d2 xor      rcx, r11
1f39d5 xor      rcx, rbx
1f39d8 xor      rax, rcx
1f39db sub      rdx, rcx
1f39de test     r9b, r9b
1f39e1 cmove    rdx, rax
1f39e5 mov      rax, qword ptr [r14 + 0x1b0]
1f39ec inc      qword ptr [r14 + 0x1b8]
1f39f3 mov      rcx, rdx
1f39f6 imul     rax, r15
1f39fa add      rax, r12
1f39fd mov      qword ptr [r14 + 0x1b0], rax
1f3a04 shr      rax, 0x1b
1f3a08 movzx    r8d, al
1f3a0c mov      byte ptr [r14 + 0x168], r8b
1f3a13 imul     r8, r10
1f3a17 xor      r8, r11
1f3a1a xor      r8, rbx
1f3a1d xor      rcx, r8
1f3a20 test     r9b, r9b
1f3a23 lea      rax, [rdx + r8]
1f3a27 cmove    rax, rcx
1f3a2b mov      rcx, r14
1f3a2e mov      qword ptr [r14 + 0x130], rax
1f3a35 call     0x1401f0910
1f3a3a mov      rcx, r14
1f3a3d call     0x1401ee070
1f3a42 cmp      eax, dword ptr [r14 + 0x1d8]
1f3a49 jae      0x1401f3a55
1f3a4b mov      edx, eax
1f3a4d mov      rcx, r14
1f3a50 call     0x1401f0910
1f3a55 mov      rsi, qword ptr [r14 + 0xe0]
1f3a5c mov      rbp, qword ptr [r14 + 0xd0]
1f3a63 mov      r11, qword ptr [r14 + 0x130]
1f3a6a movzx    edi, byte ptr [r14 + 0xe8]
1f3a72 mov      rax, r11
1f3a75 movzx    ecx, byte ptr [r14 + 0x168]
1f3a7d mov      rbx, qword ptr [r14 + 0xd8]
1f3a84 mov      r8, qword ptr [r14 + 0x1b8]
1f3a8b mov      r10, qword ptr [r14 + 0x1b0]
1f3a92 imul     rcx, rsi
1f3a96 lea      r9, [rbx + rbx*8]
1f3a9a xor      rcx, r9
1f3a9d xor      rcx, rbp
1f3aa0 xor      rax, rcx
1f3aa3 sub      r11, rcx
1f3aa6 test     dil, dil
1f3aa9 cmove    r11, rax
1f3aad imul     r10, r15
1f3ab1 mov      rcx, r11
1f3ab4 add      r10, r12
1f3ab7 mov      rax, r10
1f3aba shr      rax, 0x1b
1f3abe movzx    edx, al
1f3ac1 mov      byte ptr [r14 + 0x168], dl
1f3ac8 imul     rdx, rsi
1f3acc xor      rdx, r9
1f3acf xor      rdx, rbp
1f3ad2 xor      rcx, rdx
1f3ad5 test     dil, dil
1f3ad8 lea      rax, [r11 + rdx]
1f3adc cmove    rax, rcx
1f3ae0 mov      rcx, r11
1f3ae3 mov      qword ptr [r14 + 0x130], rax
1f3aea lea      rax, [r8 + 2]
1f3aee mov      qword ptr [r14 + 0x1b8], rax
1f3af5 mov      r8d, 0xca5
1f3afb imul     r10, r15
1f3aff lea      rax, [rbx + rbx*4]
1f3b03 add      rax, rax
1f3b06 add      r10, r12
1f3b09 mov      qword ptr [r14 + 0x1b0], r10
1f3b10 shr      r10, 0x1b
1f3b14 movzx    edx, r10b
1f3b18 mov      byte ptr [r14 + 0x169], dl
1f3b1f imul     rdx, rsi
1f3b23 xor      rdx, rax
1f3b26 xor      rdx, rbp
1f3b29 xor      rcx, rdx
1f3b2c test     dil, dil
1f3b2f lea      rax, [r11 + rdx]
1f3b33 cmove    rax, rcx
1f3b37 mov      rcx, r14
1f3b3a mov      qword ptr [r14 + 0x138], rax
1f3b41 movzx    edx, byte ptr [r14 + 0x4ad]
1f3b49 xor      rdx, qword ptr [r14 + 0x348]
1f3b50 call     0x1401f1520
1f3b55 mov      r8, qword ptr [r14 + 0x348]
1f3b5c movabs   rdi, 0xff51afd7ed558ccd
1f3b66 mov      rax, r8
1f3b69 movabs   rsi, 0xc4ceb9fe1a85ec53
1f3b73 xor      rax, qword ptr [r14 + 0x20]
1f3b77 mov      rcx, rax
1f3b7a shr      rcx, 0x21
1f3b7e xor      rcx, rax
1f3b81 imul     rcx, rdi
1f3b85 mov      rax, rcx
1f3b88 shr      rax, 0x21
1f3b8c xor      rax, rcx
1f3b8f imul     rax, rsi
1f3b93 mov      rdx, rax
1f3b96 shr      rdx, 0x21
1f3b9a xor      edx, eax
1f3b9c lea      eax, [rdx + 1]
1f3b9f mov      ecx, eax
1f3ba1 xor      eax, edx
1f3ba3 imul     ecx, edx
1f3ba6 not      ecx
1f3ba8 and      ecx, eax
1f3baa test     cl, 1
1f3bad je       0x1401f3c16
1f3baf and      r8b, 3
1f3bb3 cmp      r8b, 1
1f3bb7 jne      0x1401f3c16
1f3bb9 mov      rax, qword ptr [r14 + 0x1b0]
1f3bc0 inc      qword ptr [r14 + 0x1b8]
1f3bc7 imul     rax, r15
1f3bcb add      rax, r12
1f3bce mov      qword ptr [r14 + 0x1b0], rax
1f3bd5 shr      rax, 0x1b
1f3bd9 movzx    eax, al
1f3bdc mov      byte ptr [r14 + 0x160], al
1f3be3 imul     rax, qword ptr [r14 + 0xe0]
1f3beb xor      rax, qword ptr [r14 + 0xd8]
1f3bf2 xor      rax, qword ptr [r14 + 0xd0]
1f3bf9 mov      rcx, rax
1f3bfc add      rax, 0x17ed28
1f3c02 xor      rcx, 0x17ed28
1f3c09 cmp      byte ptr [r14 + 0xe8], 0
1f3c11 jmp      0x1401f4214
1f3c16 mov      rcx, r14
1f3c19 call     0x1401ee070
1f3c1e mov      ebx, eax
1f3c20 cmp      eax, dword ptr [r14 + 0x1d8]
1f3c27 jb       0x1401f3c86
1f3c29 mov      rax, qword ptr [r14 + 0x1b0]
1f3c30 inc      qword ptr [r14 + 0x1b8]
1f3c37 imul     rax, r15
1f3c3b add      rax, r12
1f3c3e mov      qword ptr [r14 + 0x1b0], rax
1f3c45 shr      rax, 0x1b
1f3c49 movzx    eax, al
1f3c4c mov      byte ptr [r14 + 0x160], al
1f3c53 imul     rax, qword ptr [r14 + 0xe0]
1f3c5b xor      rax, qword ptr [r14 + 0xd8]
1f3c62 xor      rax, qword ptr [r14 + 0xd0]
1f3c69 mov      rcx, rax
1f3c6c add      rax, 0xfe1ab
1f3c72 xor      rcx, 0xfe1ab
1f3c79 cmp      byte ptr [r14 + 0xe8], 0
1f3c81 jmp      0x1401f4214
1f3c86 mov      edx, ebx
1f3c88 mov      rcx, r14
1f3c8b call     0x1401f25b0
1f3c90 movsxd   rcx, dword ptr [r14 + 0x11e0]
1f3c97 movabs   r8, 0xd6e8feb86659fd93
1f3ca1 mov      rdx, qword ptr [r14 + 0x20]
1f3ca5 mov      rax, rbx
1f3ca8 imul     rax, r8
1f3cac imul     rcx, r15
1f3cb0 rol      rdx, 0x11
1f3cb4 xor      rax, rdx
1f3cb7 xor      rcx, qword ptr [r14 + 0x260]
1f3cbe xor      rax, rcx
1f3cc1 mov      rcx, rax
1f3cc4 shr      rcx, 0x21
1f3cc8 xor      rcx, rax
1f3ccb imul     rcx, rdi
1f3ccf mov      rdx, rcx
1f3cd2 shr      rdx, 0x21
1f3cd6 xor      rdx, rcx
1f3cd9 imul     rdx, rsi
1f3cdd mov      rax, rdx
1f3ce0 shr      rax, 0x21
1f3ce4 xor      rax, rdx
1f3ce7 mov      r10, rax
1f3cea shr      r10, 0x1d
1f3cee xor      r10, rax
1f3cf1 or       r10, 1
1f3cf5 mov      rax, r10
1f3cf8 mov      qword ptr [r14 + 0x260], r10
1f3cff and      eax, 0x3ff
1f3d04 cmp      rax, 0x2c5
1f3d0a jne      0x1401f3d1b
1f3d0c mov      rcx, r14
1f3d0f call     0x1402297e0
1f3d14 mov      r10, qword ptr [r14 + 0x260]
1f3d1b movzx    eax, r10b
1f3d1f and      al, 0x1f
1f3d21 cmp      al, 0x15
1f3d23 jne      0x1401f3e10
1f3d29 movsxd   rax, dword ptr [r14 + 0x11e0]
1f3d30 xor      rax, 0x5a5a
1f3d36 mov      rcx, qword ptr [r14 + 0x20]
1f3d3a imul     rax, r15
1f3d3e rol      rcx, 0x11
1f3d42 xor      rax, r10
1f3d45 xor      rcx, rax
1f3d48 movabs   rax, 0x8f70feda99a6026d
1f3d52 xor      rcx, rax
1f3d55 mov      rax, rcx
1f3d58 shr      rax, 0x21
1f3d5c xor      rax, rcx
1f3d5f imul     rax, rdi
1f3d63 mov      rcx, rax
1f3d66 shr      rcx, 0x21
1f3d6a xor      rcx, rax
1f3d6d imul     rcx, rsi
1f3d71 mov      rax, rcx
1f3d74 shr      rax, 0x21
1f3d78 xor      rax, rcx
1f3d7b mov      r9, rax
1f3d7e shr      r9, 0x1d
1f3d82 xor      r9, rax
1f3d85 or       r9, 1
1f3d89 mov      rax, r9
1f3d8c mov      rcx, r9
1f3d8f shr      rax, 8
1f3d93 and      eax, 3
1f3d96 shr      rcx, 0x28
1f3d9a imul     r8, rax, 0x3e
1f3d9e mov      eax, 0x8421085
1f3da3 mul      ecx
1f3da5 mov      eax, ecx
1f3da7 sub      eax, edx
1f3da9 shr      eax, 1
1f3dab add      eax, edx
1f3dad shr      eax, 5
1f3db0 imul     eax, eax, 0x3e
1f3db3 sub      ecx, eax
1f3db5 mov      eax, ecx
1f3db7 add      r8, rax
1f3dba mov      rax, qword ptr [r14 + 0x4b8]
1f3dc1 movsxd   rcx, dword ptr [rax + r8*4]
1f3dc5 movsxd   rax, dword ptr [r14 + 0x4c8]
1f3dcc xor      rcx, rax
1f3dcf add      rcx, qword ptr [r14 + 0x4c0]
1f3dd6 xor      rcx, r9
1f3dd9 mov      rax, rcx
1f3ddc shr      rax, 0x21
1f3de0 xor      rax, rcx
1f3de3 imul     rax, rdi
1f3de7 mov      rcx, rax
1f3dea shr      rcx, 0x21
1f3dee xor      rcx, rax
1f3df1 imul     rcx, rsi
1f3df5 mov      rax, rcx
1f3df8 shr      rax, 0x21
1f3dfc xor      rax, rcx
1f3dff xor      rax, r10
1f3e02 inc      qword ptr [r14 + 0x268]
1f3e09 mov      qword ptr [r14 + 0x260], rax
1f3e10 inc      dword ptr [r14 + 0x200]
1f3e17 mov      eax, dword ptr [r14 + 0x200]
1f3e1e cmp      eax, dword ptr [r14 + 0x1fc]
1f3e25 jb       0x1401f3e3a
1f3e27 mov      rcx, r14
1f3e2a mov      dword ptr [r14 + 0x200], 0
1f3e35 call     0x1401ef7c0
1f3e3a mov      r8d, ebx
1f3e3d mov      edx, ebx
1f3e3f mov      rcx, r14
1f3e42 call     0x1401f0660
1f3e47 inc      qword ptr [r14 + 0x1b8]
1f3e4e mov      rcx, rbx
1f3e51 mov      r9, qword ptr [r14 + 0x1b0]
1f3e58 mov      rbp, r12
1f3e5b mov      r10, qword ptr [r14 + 0x1b8]
1f3e62 imul     r9, r15
1f3e66 add      r9, r12
1f3e69 lea      r12d, [rbx + 1]
1f3e6d mov      qword ptr [r14 + 0x1b0], r9
1f3e74 mov      rax, r9
1f3e77 shr      rax, 0x1b
1f3e7b movzx    edx, al
1f3e7e mov      byte ptr [r14 + 0x168], dl
1f3e85 mov      rdi, qword ptr [r14 + 0xe0]
1f3e8c mov      r11, qword ptr [r14 + 0xd8]
1f3e93 mov      rsi, qword ptr [r14 + 0xd0]
1f3e9a movzx    r15d, byte ptr [r14 + 0xe8]
1f3ea2 imul     rdx, rdi
1f3ea6 lea      rax, [r11 + r11*8]
1f3eaa xor      rdx, rax
1f3ead xor      rdx, rsi
1f3eb0 xor      rcx, rdx
1f3eb3 test     r15b, r15b
1f3eb6 lea      rax, [rbx + rdx]
1f3eba cmove    rax, rcx
1f3ebe inc      r10
1f3ec1 mov      qword ptr [r14 + 0x130], rax
1f3ec8 mov      rcx, qword ptr [r14 + 0x1d0]
1f3ecf mov      rax, qword ptr [r14 + 0x48]
1f3ed3 mov      qword ptr [rsp + 0x60], r10
1f3ed8 movzx    r8d, byte ptr [rcx + rbx]
1f3edd xor      r8b, byte ptr [rax + rbx]
1f3ee1 movabs   rax, 0x9e3779b97f4a7c15
1f3eeb imul     r9, rax
1f3eef mov      qword ptr [r14 + 0x1b8], r10
1f3ef6 add      r9, rbp
1f3ef9 mov      rax, r9
1f3efc shr      rax, 0x1b
1f3f00 movzx    edx, al
1f3f03 lea      rax, [r11 + r11]
1f3f07 mov      byte ptr [r14 + 0x161], dl
1f3f0e imul     rdx, rdi
1f3f12 xor      rdx, rax
1f3f15 xor      rdx, rsi
1f3f18 mov      rcx, rdx
1f3f1b xor      rcx, r12
1f3f1e test     r15b, r15b
1f3f21 lea      rax, [rdx + r12]
1f3f25 cmove    rax, rcx
1f3f29 mov      qword ptr [r14 + 0xf8], rax
1f3f30 movsxd   rdx, dword ptr [r14 + 0x11e0]
1f3f37 mov      r10, qword ptr [r14 + 0x20]
1f3f3b mov      rcx, rdx
1f3f3e xor      rcx, qword ptr [r14 + 0x350]
1f3f45 xor      rcx, r10
1f3f48 xor      rcx, r12
1f3f4b xor      rcx, qword ptr [r14 + 0x348]
1f3f52 mov      rax, rcx
1f3f55 shr      rax, 0x21
1f3f59 xor      rax, rcx
1f3f5c movabs   rcx, 0xff51afd7ed558ccd
1f3f66 imul     rax, rcx
1f3f6a mov      rcx, rax
1f3f6d shr      rcx, 0x21
1f3f71 xor      rcx, rax
1f3f74 movabs   rax, 0xc4ceb9fe1a85ec53
1f3f7e imul     rcx, rax
1f3f82 movzx    eax, r8b
1f3f86 mov      rbx, rcx
1f3f89 xor      rax, 0xdd
1f3f8f shr      rbx, 0x21
1f3f93 xor      rbx, rcx
1f3f96 lea      rcx, [rip - 0x1f3f9d]
1f3f9d mov      qword ptr [r14 + 0x28], rbx
1f3fa1 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
1f3fa9 xor      bpl, 0x63
1f3fad inc      edx
1f3faf mov      dword ptr [r14 + 0x11e0], edx
1f3fb6 movabs   r8, 0xff51afd7ed558ccd
1f3fc0 test     dl, 0x1f
1f3fc3 jne      0x1401f4009
1f3fc5 movsxd   rax, edx
1f3fc8 xor      rax, r10
1f3fcb xor      rax, qword ptr [r14 + 0x348]
1f3fd2 mov      rcx, rax
1f3fd5 shr      rcx, 0x21
1f3fd9 xor      rcx, rax
1f3fdc movabs   rax, 0xc4ceb9fe1a85ec53
1f3fe6 imul     rcx, r8
1f3fea mov      rdx, rcx
1f3fed shr      rdx, 0x21
1f3ff1 xor      rdx, rcx
1f3ff4 imul     rdx, rax
1f3ff8 mov      rax, rdx
1f3ffb shr      rax, 0x21
1f3fff xor      rax, rdx
1f4002 mov      qword ptr [r14 + 0x348], rax
1f4009 movzx    edx, bpl
1f400d xor      r10, rdx
1f4010 mov      byte ptr [r14 + 0x4ad], bpl
1f4017 xor      r10, r12
1f401a movabs   r12, 0xc4ceb9fe1a85ec53
1f4024 mov      rax, r10
1f4027 shr      rax, 0x21
1f402b xor      rax, r10
1f402e movabs   r10, 0x9e3779b97f4a7c15
1f4038 imul     rax, r8
1f403c imul     rdx, r10
1f4040 imul     r9, r10
1f4044 mov      rcx, rax
1f4047 shr      rcx, 0x21
1f404b xor      rcx, rax
1f404e imul     rcx, r12
1f4052 mov      rax, rcx
1f4055 shr      rax, 0x21
1f4059 xor      rax, rcx
1f405c mov      ecx, dword ptr [r14 + 0x1178]
1f4063 mov      qword ptr [r14 + 0x20], rax
1f4067 movabs   rax, 0xd6e8feb86659fd93
1f4071 imul     rcx, rax
1f4075 xor      rcx, rdx
1f4078 xor      rcx, rbx
1f407b movabs   rbx, 0x2545f4914f6cdd1d
1f4085 mov      rax, rcx
1f4088 add      r9, rbx
1f408b shr      rax, 0x21
1f408f xor      rax, rcx
1f4092 imul     rax, r8
1f4096 mov      rdx, rax
1f4099 shr      rdx, 0x21
1f409d xor      rdx, rax
1f40a0 mov      rax, qword ptr [rsp + 0x60]
1f40a5 imul     rdx, r12
1f40a9 shr      rdx, 0x21
1f40ad and      edx, 3
1f40b0 inc      rax
1f40b3 mov      qword ptr [r14 + 0x1b8], rax
1f40ba cmp      bpl, 0x3e
1f40be jae      0x1401f4158
1f40c4 inc      qword ptr [r14 + 0x11a0]
1f40cb lea      rax, [rip - 0x1f40d2]
1f40d2 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
1f40da mov      qword ptr [r14 + 0x1b0], r9
1f40e1 shr      r9, 0x1b
1f40e5 movzx    eax, r9b
1f40e9 mov      byte ptr [r14 + 0x160], al
1f40f0 imul     rax, rdi
1f40f4 mov      ebx, edx
1f40f6 xor      rax, rsi
1f40f9 xor      rax, r11
1f40fc mov      rcx, rax
1f40ff add      rax, r8
1f4102 xor      rcx, r8
1f4105 movzx    r8d, bpl
1f4109 test     r15b, r15b
1f410c cmove    rax, rcx
1f4110 mov      rcx, r14
1f4113 mov      qword ptr [r14 + 0xf0], rax
1f411a call     0x1401f1f50
1f411f mov      r8, qword ptr [rsp + 0x70]
1f4124 lea      edx, [r13 - 1]
1f4128 mov      eax, eax
1f412a imul     rcx, rbx, 0x3e
1f412e add      rcx, rax
1f4131 mov      rax, qword ptr [r14 + 0x4b8]
1f4138 movsxd   r9, dword ptr [rax + rcx*4]
1f413c mov      rcx, r14
1f413f movsxd   rax, dword ptr [r14 + 0x4c8]
1f4146 xor      r9, rax
1f4149 add      r9, qword ptr [r14 + 0x4c0]
1f4150 call     r9
1f4153 jmp      0x1401f421f
1f4158 inc      dword ptr [r14 + 0x11a8]
1f415f mov      rax, r9
1f4162 shr      rax, 0x1b
1f4166 movzx    ecx, al
1f4169 lea      rax, [r11*4]
1f4171 mov      byte ptr [r14 + 0x163], cl
1f4178 imul     rcx, rdi
1f417c imul     r9, r10
1f4180 xor      rcx, rax
1f4183 xor      rcx, rsi
1f4186 mov      qword ptr [r14 + 0x108], rcx
1f418d mov      r8, qword ptr [r14 + 0x1b8]
1f4194 add      r9, rbx
1f4197 mov      rax, r9
1f419a shr      rax, 0x1b
1f419e movzx    edx, al
1f41a1 mov      byte ptr [r14 + 0x16a], dl
1f41a8 imul     rax, r11, 0xb
1f41ac imul     rdx, rdi
1f41b0 xor      rdx, rax
1f41b3 xor      rdx, rsi
1f41b6 mov      rcx, rdx
1f41b9 xor      rcx, 1
1f41bd test     r15b, r15b
1f41c0 lea      rax, [rdx + 1]
1f41c4 cmove    rax, rcx
1f41c8 mov      qword ptr [r14 + 0x140], rax
1f41cf lea      rax, [r8 + 2]
1f41d3 mov      qword ptr [r14 + 0x1b8], rax
1f41da imul     r9, r10
1f41de add      r9, rbx
1f41e1 mov      qword ptr [r14 + 0x1b0], r9
1f41e8 shr      r9, 0x1b
1f41ec movzx    eax, r9b
1f41f0 mov      byte ptr [r14 + 0x160], al
1f41f7 imul     rax, rdi
1f41fb xor      rax, rsi
1f41fe xor      rax, r11
1f4201 mov      rcx, rax
1f4204 add      rax, 0xfe1ab
1f420a xor      rcx, 0xfe1ab
1f4211 test     r15b, r15b
1f4214 cmove    rax, rcx
1f4218 mov      qword ptr [r14 + 0xf0], rax
1f421f mov      r12, qword ptr [rsp + 0x28]
1f4224 mov      rsi, qword ptr [rsp + 0x68]
1f4229 mov      r15, qword ptr [rsp + 0x20]
1f422e add      rsp, 0x30
1f4232 pop      r14
1f4234 pop      r13
1f4236 pop      rdi
1f4237 pop      rbp
1f4238 pop      rbx
1f4239 ret      
1f423a mov      edx, 0x54485254
1f423f mov      rcx, r14
1f4242 call     0x1401ed830
1f4247 int3     
1f4248 mov      edx, 0x43414e59
1f424d mov      rcx, r14
1f4250 call     0x1401ed830
1f4255 int3     
