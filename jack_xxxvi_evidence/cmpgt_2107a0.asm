2107a0 mov      qword ptr [rsp + 0x18], r8
2107a5 push     rbx
2107a6 push     rbp
2107a7 push     rdi
2107a8 push     r13
2107aa push     r14
2107ac sub      rsp, 0x30
2107b0 movsxd   rax, dword ptr [rcx + 0x11e0]
2107b7 mov      r14, rcx
2107ba mov      r13d, edx
2107bd movabs   rcx, 0x62f799b88183bf4e
2107c7 imul     rax, rcx
2107cb movabs   rcx, 0xc0ae1373005d3b71
2107d5 movabs   rbp, 0xff51afd7ed558ccd
2107df xor      rax, qword ptr [r14 + 0x28]
2107e3 mov      rdi, r8
2107e6 mov      qword ptr [rsp + 0x60], rax
2107eb mov      rax, qword ptr [rsp + 0x60]
2107f0 movsxd   rax, dword ptr [r14 + 0x11e0]
2107f7 imul     rax, rcx
2107fb movabs   rcx, 0x26668d2d8316b764
210805 xor      rax, qword ptr [r14 + 0x28]
210809 mov      qword ptr [rsp + 0x60], rax
21080e mov      rax, qword ptr [rsp + 0x60]
210813 movsxd   rax, dword ptr [r14 + 0x11e0]
21081a imul     rax, rcx
21081e movabs   rcx, 0x52dc11f48b9baf4a
210828 xor      rax, qword ptr [r14 + 0x28]
21082c mov      qword ptr [rsp + 0x60], rax
210831 mov      rax, qword ptr [rsp + 0x60]
210836 mov      rax, qword ptr [r14 + 0x2e0]
21083d xor      rax, rcx
210840 mov      rcx, rax
210843 shr      rcx, 0x21
210847 xor      rcx, rax
21084a movabs   rax, 0xc4ceb9fe1a85ec53
210854 imul     rcx, rbp
210858 mov      rdx, rcx
21085b shr      rdx, 0x21
21085f xor      rdx, rcx
210862 mov      rcx, r14
210865 imul     rdx, rax
210869 mov      rax, rdx
21086c shr      rax, 0x21
210870 xor      rdx, rax
210873 mov      rax, qword ptr [r14 + 0x2e0]
21087a shr      rax, 7
21087e add      rax, rdx
210881 mov      qword ptr [r14 + 0x2e0], rax
210888 call     0x1401ee940
21088d mov      rcx, r14
210890 mov      rbx, rax
210893 call     0x1401ee940
210898 movabs   rcx, 0x8000000000000000
2108a2 xor      edx, edx
2108a4 xor      rax, rcx
2108a7 xor      rbx, rcx
2108aa cmp      rbx, rax
2108ad mov      rcx, r14
2108b0 setb     dl
2108b3 call     0x1401ee820
2108b8 mov      rax, qword ptr [r14 + 0x2e0]
2108bf test     r13d, r13d
2108c2 jns      0x140211400
2108c8 cmp      qword ptr [r14 + 0x11b8], rdi
2108cf jne      0x14021140e
2108d5 movsxd   rax, dword ptr [r14 + 0x11e0]
2108dc movabs   rcx, 0xd2762abed8836cc
2108e6 imul     rax, rcx
2108ea mov      rcx, r14
2108ed xor      rax, qword ptr [r14 + 0x28]
2108f1 mov      qword ptr [rsp + 0x60], rax
2108f6 mov      rax, qword ptr [rsp + 0x60]
2108fb call     0x1401ee450
210900 test     eax, eax
210902 jne      0x1402113f4
210908 cmp      dword ptr [r14 + 0xad0], eax
21090f jne      0x1402113f4
210915 mov      r8, qword ptr [r14 + 0xf0]
21091c movzx    ecx, byte ptr [r14 + 0x160]
210924 mov      rax, r8
210927 mov      r10, qword ptr [r14 + 0xe0]
21092e mov      rbx, qword ptr [r14 + 0xd0]
210935 mov      r11, qword ptr [r14 + 0xd8]
21093c movzx    edi, byte ptr [r14 + 0xe8]
210944 mov      r9, qword ptr [r14 + 0x1b0]
21094b imul     rcx, r10
21094f mov      qword ptr [rsp + 0x68], rsi
210954 mov      rsi, qword ptr [r14 + 0x1b8]
21095b xor      rcx, rbx
21095e xor      rcx, r11
210961 mov      qword ptr [rsp + 0x28], r12
210966 xor      rax, rcx
210969 mov      qword ptr [rsp + 0x20], r15
21096e sub      r8, rcx
210971 movabs   r15, 0x9e3779b97f4a7c15
21097b test     dil, dil
21097e movabs   r12, 0x2545f4914f6cdd1d
210988 cmove    r8, rax
21098c inc      rsi
21098f imul     r9, r15
210993 mov      qword ptr [r14 + 0x1b8], rsi
21099a mov      rcx, r8
21099d add      r9, r12
2109a0 mov      qword ptr [r14 + 0x1b0], r9
2109a7 mov      rax, r9
2109aa shr      rax, 0x1b
2109ae movzx    edx, al
2109b1 mov      byte ptr [r14 + 0x160], dl
2109b8 imul     rdx, r10
2109bc xor      rdx, rbx
2109bf xor      rdx, r11
2109c2 xor      rcx, rdx
2109c5 test     dil, dil
2109c8 lea      rax, [r8 + rdx]
2109cc cmove    rax, rcx
2109d0 mov      qword ptr [r14 + 0xf0], rax
2109d7 cmp      r8d, 0x48cad
2109de jne      0x1402113e5
2109e4 mov      eax, r13d
2109e7 btr      eax, 0x1f
2109eb cmp      eax, 2
2109ee jae      0x140210a3a
2109f0 imul     r9, r15
2109f4 lea      rax, [rsi + 1]
2109f8 mov      qword ptr [r14 + 0x1b8], rax
2109ff add      r9, r12
210a02 mov      qword ptr [r14 + 0x1b0], r9
210a09 shr      r9, 0x1b
210a0d movzx    eax, r9b
210a11 mov      byte ptr [r14 + 0x160], al
210a18 imul     rax, r10
210a1c xor      rax, rbx
210a1f xor      rax, r11
210a22 mov      rcx, rax
210a25 add      rax, 0xf6105
210a2b xor      rcx, 0xf6105
210a32 test     dil, dil
210a35 jmp      0x1402113da
210a3a mov      rcx, r14
210a3d call     0x1401ee070
210a42 movzx    ecx, byte ptr [r14 + 0x4ad]
210a4a movabs   r8, 0xc4ceb9fe1a85ec53
210a54 mov      r11, qword ptr [r14 + 0xe0]
210a5b mov      r10, qword ptr [r14 + 0xd0]
210a62 movzx    r9d, byte ptr [r14 + 0xe8]
210a6a mov      eax, eax
210a6c xor      rcx, rax
210a6f xor      rcx, qword ptr [r14 + 0x11e8]
210a76 mov      rax, rcx
210a79 shr      rax, 0x21
210a7d xor      rax, rcx
210a80 imul     rax, rbp
210a84 mov      rcx, rax
210a87 shr      rcx, 0x21
210a8b xor      rcx, rax
210a8e imul     rcx, r8
210a92 mov      rdx, rcx
210a95 shr      rdx, 0x21
210a99 xor      rdx, rcx
210a9c mov      qword ptr [r14 + 0x11e8], rdx
210aa3 xor      rdx, qword ptr [r14 + 0x20]
210aa7 xor      rdx, qword ptr [r14 + 0x28]
210aab mov      rax, rdx
210aae shr      rax, 0x21
210ab2 xor      rax, rdx
210ab5 imul     rax, rbp
210ab9 mov      rcx, rax
210abc shr      rcx, 0x21
210ac0 xor      rcx, rax
210ac3 imul     rcx, r8
210ac7 mov      rax, rcx
210aca shr      rax, 0x21
210ace xor      rax, rcx
210ad1 mov      qword ptr [r14 + 0x20], rax
210ad5 mov      rdx, qword ptr [r14 + 0x138]
210adc movzx    ecx, byte ptr [r14 + 0x169]
210ae4 mov      rax, qword ptr [r14 + 0xd8]
210aeb imul     rcx, r11
210aef lea      rbx, [rax + rax*4]
210af3 mov      rax, rdx
210af6 add      rbx, rbx
210af9 xor      rcx, rbx
210afc xor      rcx, r10
210aff xor      rax, rcx
210b02 sub      rdx, rcx
210b05 test     r9b, r9b
210b08 cmove    rdx, rax
210b0c mov      rax, qword ptr [r14 + 0x1b0]
210b13 inc      qword ptr [r14 + 0x1b8]
210b1a imul     rax, r15
210b1e add      rax, r12
210b21 mov      qword ptr [r14 + 0x1b0], rax
210b28 shr      rax, 0x1b
210b2c movzx    r8d, al
210b30 mov      byte ptr [r14 + 0x169], r8b
210b37 imul     r8, r11
210b3b xor      r8, rbx
210b3e xor      r8, r10
210b41 mov      rcx, r8
210b44 xor      rcx, rdx
210b47 test     r9b, r9b
210b4a lea      rax, [r8 + rdx]
210b4e cmove    rax, rcx
210b52 mov      rcx, r14
210b55 mov      qword ptr [r14 + 0x138], rax
210b5c call     0x1401f0910
210b61 mov      rax, qword ptr [r14 + 0xd8]
210b68 mov      rdx, qword ptr [r14 + 0x130]
210b6f mov      r10, qword ptr [r14 + 0xe0]
210b76 movzx    ecx, byte ptr [r14 + 0x168]
210b7e mov      rbx, qword ptr [r14 + 0xd0]
210b85 lea      r11, [rax + rax*8]
210b89 movzx    r9d, byte ptr [r14 + 0xe8]
210b91 mov      rax, rdx
210b94 imul     rcx, r10
210b98 xor      rcx, r11
210b9b xor      rcx, rbx
210b9e xor      rax, rcx
210ba1 sub      rdx, rcx
210ba4 test     r9b, r9b
210ba7 cmove    rdx, rax
210bab mov      rax, qword ptr [r14 + 0x1b0]
210bb2 inc      qword ptr [r14 + 0x1b8]
210bb9 mov      rcx, rdx
210bbc imul     rax, r15
210bc0 add      rax, r12
210bc3 mov      qword ptr [r14 + 0x1b0], rax
210bca shr      rax, 0x1b
210bce movzx    r8d, al
210bd2 mov      byte ptr [r14 + 0x168], r8b
210bd9 imul     r8, r10
210bdd xor      r8, r11
210be0 xor      r8, rbx
210be3 xor      rcx, r8
210be6 test     r9b, r9b
210be9 lea      rax, [rdx + r8]
210bed cmove    rax, rcx
210bf1 mov      rcx, r14
210bf4 mov      qword ptr [r14 + 0x130], rax
210bfb call     0x1401f0910
210c00 mov      rcx, r14
210c03 call     0x1401ee070
210c08 cmp      eax, dword ptr [r14 + 0x1d8]
210c0f jae      0x140210c1b
210c11 mov      edx, eax
210c13 mov      rcx, r14
210c16 call     0x1401f0910
210c1b mov      rsi, qword ptr [r14 + 0xe0]
210c22 mov      rbp, qword ptr [r14 + 0xd0]
210c29 mov      r11, qword ptr [r14 + 0x130]
210c30 movzx    edi, byte ptr [r14 + 0xe8]
210c38 mov      rax, r11
210c3b movzx    ecx, byte ptr [r14 + 0x168]
210c43 mov      rbx, qword ptr [r14 + 0xd8]
210c4a mov      r8, qword ptr [r14 + 0x1b8]
210c51 mov      r10, qword ptr [r14 + 0x1b0]
210c58 imul     rcx, rsi
210c5c lea      r9, [rbx + rbx*8]
210c60 xor      rcx, r9
210c63 xor      rcx, rbp
210c66 xor      rax, rcx
210c69 sub      r11, rcx
210c6c test     dil, dil
210c6f cmove    r11, rax
210c73 imul     r10, r15
210c77 mov      rcx, r11
210c7a add      r10, r12
210c7d mov      rax, r10
210c80 shr      rax, 0x1b
210c84 movzx    edx, al
210c87 mov      byte ptr [r14 + 0x168], dl
210c8e imul     rdx, rsi
210c92 xor      rdx, r9
210c95 xor      rdx, rbp
210c98 xor      rcx, rdx
210c9b test     dil, dil
210c9e lea      rax, [r11 + rdx]
210ca2 cmove    rax, rcx
210ca6 mov      rcx, r11
210ca9 mov      qword ptr [r14 + 0x130], rax
210cb0 lea      rax, [r8 + 2]
210cb4 mov      qword ptr [r14 + 0x1b8], rax
210cbb mov      r8d, 0x976c
210cc1 imul     r10, r15
210cc5 lea      rax, [rbx + rbx*4]
210cc9 add      rax, rax
210ccc add      r10, r12
210ccf mov      qword ptr [r14 + 0x1b0], r10
210cd6 shr      r10, 0x1b
210cda movzx    edx, r10b
210cde mov      byte ptr [r14 + 0x169], dl
210ce5 imul     rdx, rsi
210ce9 xor      rdx, rax
210cec xor      rdx, rbp
210cef xor      rcx, rdx
210cf2 test     dil, dil
210cf5 lea      rax, [r11 + rdx]
210cf9 cmove    rax, rcx
210cfd mov      rcx, r14
210d00 mov      qword ptr [r14 + 0x138], rax
210d07 movzx    edx, byte ptr [r14 + 0x4ad]
210d0f xor      rdx, qword ptr [r14 + 0x348]
210d16 call     0x1401f1520
210d1b mov      r8, qword ptr [r14 + 0x348]
210d22 movabs   rdi, 0xff51afd7ed558ccd
210d2c mov      rax, r8
210d2f movabs   rsi, 0xc4ceb9fe1a85ec53
210d39 xor      rax, qword ptr [r14 + 0x20]
210d3d mov      rcx, rax
210d40 shr      rcx, 0x21
210d44 xor      rcx, rax
210d47 imul     rcx, rdi
210d4b mov      rax, rcx
210d4e shr      rax, 0x21
210d52 xor      rax, rcx
210d55 imul     rax, rsi
210d59 mov      rdx, rax
210d5c shr      rdx, 0x21
210d60 xor      edx, eax
210d62 lea      eax, [rdx + 1]
210d65 mov      ecx, eax
210d67 xor      eax, edx
210d69 imul     ecx, edx
210d6c not      ecx
210d6e and      ecx, eax
210d70 test     cl, 1
210d73 je       0x140210ddc
210d75 and      r8b, 3
210d79 cmp      r8b, 1
210d7d jne      0x140210ddc
210d7f mov      rax, qword ptr [r14 + 0x1b0]
210d86 inc      qword ptr [r14 + 0x1b8]
210d8d imul     rax, r15
210d91 add      rax, r12
210d94 mov      qword ptr [r14 + 0x1b0], rax
210d9b shr      rax, 0x1b
210d9f movzx    eax, al
210da2 mov      byte ptr [r14 + 0x160], al
210da9 imul     rax, qword ptr [r14 + 0xe0]
210db1 xor      rax, qword ptr [r14 + 0xd8]
210db8 xor      rax, qword ptr [r14 + 0xd0]
210dbf mov      rcx, rax
210dc2 add      rax, 0x116fdf
210dc8 xor      rcx, 0x116fdf
210dcf cmp      byte ptr [r14 + 0xe8], 0
210dd7 jmp      0x1402113da
210ddc mov      rcx, r14
210ddf call     0x1401ee070
210de4 mov      ebx, eax
210de6 cmp      eax, dword ptr [r14 + 0x1d8]
210ded jb       0x140210e4c
210def mov      rax, qword ptr [r14 + 0x1b0]
210df6 inc      qword ptr [r14 + 0x1b8]
210dfd imul     rax, r15
210e01 add      rax, r12
210e04 mov      qword ptr [r14 + 0x1b0], rax
210e0b shr      rax, 0x1b
210e0f movzx    eax, al
210e12 mov      byte ptr [r14 + 0x160], al
210e19 imul     rax, qword ptr [r14 + 0xe0]
210e21 xor      rax, qword ptr [r14 + 0xd8]
210e28 xor      rax, qword ptr [r14 + 0xd0]
210e2f mov      rcx, rax
210e32 add      rax, 0xfe1ab
210e38 xor      rcx, 0xfe1ab
210e3f cmp      byte ptr [r14 + 0xe8], 0
210e47 jmp      0x1402113da
210e4c mov      edx, ebx
210e4e mov      rcx, r14
210e51 call     0x1401f25b0
210e56 movsxd   rcx, dword ptr [r14 + 0x11e0]
210e5d movabs   r8, 0xd6e8feb86659fd93
210e67 mov      rdx, qword ptr [r14 + 0x20]
210e6b mov      rax, rbx
210e6e imul     rax, r8
210e72 imul     rcx, r15
210e76 rol      rdx, 0x11
210e7a xor      rax, rdx
210e7d xor      rcx, qword ptr [r14 + 0x260]
210e84 xor      rax, rcx
210e87 mov      rcx, rax
210e8a shr      rcx, 0x21
210e8e xor      rcx, rax
210e91 imul     rcx, rdi
210e95 mov      rdx, rcx
210e98 shr      rdx, 0x21
210e9c xor      rdx, rcx
210e9f imul     rdx, rsi
210ea3 mov      rax, rdx
210ea6 shr      rax, 0x21
210eaa xor      rax, rdx
210ead mov      r10, rax
210eb0 shr      r10, 0x1d
210eb4 xor      r10, rax
210eb7 or       r10, 1
210ebb mov      rax, r10
210ebe mov      qword ptr [r14 + 0x260], r10
210ec5 and      eax, 0x3ff
210eca cmp      rax, 0x2c5
210ed0 jne      0x140210ee1
210ed2 mov      rcx, r14
210ed5 call     0x1402297e0
210eda mov      r10, qword ptr [r14 + 0x260]
210ee1 movzx    eax, r10b
210ee5 and      al, 0x1f
210ee7 cmp      al, 0x15
210ee9 jne      0x140210fd6
210eef movsxd   rax, dword ptr [r14 + 0x11e0]
210ef6 xor      rax, 0x5a5a
210efc mov      rcx, qword ptr [r14 + 0x20]
210f00 imul     rax, r15
210f04 rol      rcx, 0x11
210f08 xor      rax, r10
210f0b xor      rcx, rax
210f0e movabs   rax, 0x8f70feda99a6026d
210f18 xor      rcx, rax
210f1b mov      rax, rcx
210f1e shr      rax, 0x21
210f22 xor      rax, rcx
210f25 imul     rax, rdi
210f29 mov      rcx, rax
210f2c shr      rcx, 0x21
210f30 xor      rcx, rax
210f33 imul     rcx, rsi
210f37 mov      rax, rcx
210f3a shr      rax, 0x21
210f3e xor      rax, rcx
210f41 mov      r9, rax
210f44 shr      r9, 0x1d
210f48 xor      r9, rax
210f4b or       r9, 1
210f4f mov      rax, r9
210f52 mov      rcx, r9
210f55 shr      rax, 8
210f59 and      eax, 3
210f5c shr      rcx, 0x28
210f60 imul     r8, rax, 0x3e
210f64 mov      eax, 0x8421085
210f69 mul      ecx
210f6b mov      eax, ecx
210f6d sub      eax, edx
210f6f shr      eax, 1
210f71 add      eax, edx
210f73 shr      eax, 5
210f76 imul     eax, eax, 0x3e
210f79 sub      ecx, eax
210f7b mov      eax, ecx
210f7d add      r8, rax
210f80 mov      rax, qword ptr [r14 + 0x4b8]
210f87 movsxd   rcx, dword ptr [rax + r8*4]
210f8b movsxd   rax, dword ptr [r14 + 0x4c8]
210f92 xor      rcx, rax
210f95 add      rcx, qword ptr [r14 + 0x4c0]
210f9c xor      rcx, r9
210f9f mov      rax, rcx
210fa2 shr      rax, 0x21
210fa6 xor      rax, rcx
210fa9 imul     rax, rdi
210fad mov      rcx, rax
210fb0 shr      rcx, 0x21
210fb4 xor      rcx, rax
210fb7 imul     rcx, rsi
210fbb mov      rax, rcx
210fbe shr      rax, 0x21
210fc2 xor      rax, rcx
210fc5 xor      rax, r10
210fc8 inc      qword ptr [r14 + 0x268]
210fcf mov      qword ptr [r14 + 0x260], rax
210fd6 inc      dword ptr [r14 + 0x200]
210fdd mov      eax, dword ptr [r14 + 0x200]
210fe4 cmp      eax, dword ptr [r14 + 0x1fc]
210feb jb       0x140211000
210fed mov      rcx, r14
210ff0 mov      dword ptr [r14 + 0x200], 0
210ffb call     0x1401ef7c0
211000 mov      r8d, ebx
211003 mov      edx, ebx
211005 mov      rcx, r14
211008 call     0x1401f0660
21100d inc      qword ptr [r14 + 0x1b8]
211014 mov      rcx, rbx
211017 mov      r9, qword ptr [r14 + 0x1b0]
21101e mov      rbp, r12
211021 mov      r10, qword ptr [r14 + 0x1b8]
211028 imul     r9, r15
21102c add      r9, r12
21102f lea      r12d, [rbx + 1]
211033 mov      qword ptr [r14 + 0x1b0], r9
21103a mov      rax, r9
21103d shr      rax, 0x1b
211041 movzx    edx, al
211044 mov      byte ptr [r14 + 0x168], dl
21104b mov      rdi, qword ptr [r14 + 0xe0]
211052 mov      r11, qword ptr [r14 + 0xd8]
211059 mov      rsi, qword ptr [r14 + 0xd0]
211060 movzx    r15d, byte ptr [r14 + 0xe8]
211068 imul     rdx, rdi
21106c lea      rax, [r11 + r11*8]
211070 xor      rdx, rax
211073 xor      rdx, rsi
211076 xor      rcx, rdx
211079 test     r15b, r15b
21107c lea      rax, [rbx + rdx]
211080 cmove    rax, rcx
211084 inc      r10
211087 mov      qword ptr [r14 + 0x130], rax
21108e mov      rcx, qword ptr [r14 + 0x1d0]
211095 mov      rax, qword ptr [r14 + 0x48]
211099 mov      qword ptr [rsp + 0x60], r10
21109e movzx    r8d, byte ptr [rcx + rbx]
2110a3 xor      r8b, byte ptr [rax + rbx]
2110a7 movabs   rax, 0x9e3779b97f4a7c15
2110b1 imul     r9, rax
2110b5 mov      qword ptr [r14 + 0x1b8], r10
2110bc add      r9, rbp
2110bf mov      rax, r9
2110c2 shr      rax, 0x1b
2110c6 movzx    edx, al
2110c9 lea      rax, [r11 + r11]
2110cd mov      byte ptr [r14 + 0x161], dl
2110d4 imul     rdx, rdi
2110d8 xor      rdx, rax
2110db xor      rdx, rsi
2110de mov      rcx, rdx
2110e1 xor      rcx, r12
2110e4 test     r15b, r15b
2110e7 lea      rax, [rdx + r12]
2110eb cmove    rax, rcx
2110ef mov      qword ptr [r14 + 0xf8], rax
2110f6 movsxd   rdx, dword ptr [r14 + 0x11e0]
2110fd mov      r10, qword ptr [r14 + 0x20]
211101 mov      rcx, rdx
211104 xor      rcx, qword ptr [r14 + 0x350]
21110b xor      rcx, r10
21110e xor      rcx, r12
211111 xor      rcx, qword ptr [r14 + 0x348]
211118 mov      rax, rcx
21111b shr      rax, 0x21
21111f xor      rax, rcx
211122 movabs   rcx, 0xff51afd7ed558ccd
21112c imul     rax, rcx
211130 mov      rcx, rax
211133 shr      rcx, 0x21
211137 xor      rcx, rax
21113a movabs   rax, 0xc4ceb9fe1a85ec53
211144 imul     rcx, rax
211148 movzx    eax, r8b
21114c mov      rbx, rcx
21114f xor      rax, 0xdd
211155 shr      rbx, 0x21
211159 xor      rbx, rcx
21115c lea      rcx, [rip - 0x211163]
211163 mov      qword ptr [r14 + 0x28], rbx
211167 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
21116f xor      bpl, 0x63
211173 inc      edx
211175 mov      dword ptr [r14 + 0x11e0], edx
21117c movabs   r8, 0xff51afd7ed558ccd
211186 test     dl, 0x1f
211189 jne      0x1402111cf
21118b movsxd   rax, edx
21118e xor      rax, r10
211191 xor      rax, qword ptr [r14 + 0x348]
211198 mov      rcx, rax
21119b shr      rcx, 0x21
21119f xor      rcx, rax
2111a2 movabs   rax, 0xc4ceb9fe1a85ec53
2111ac imul     rcx, r8
2111b0 mov      rdx, rcx
2111b3 shr      rdx, 0x21
2111b7 xor      rdx, rcx
2111ba imul     rdx, rax
2111be mov      rax, rdx
2111c1 shr      rax, 0x21
2111c5 xor      rax, rdx
2111c8 mov      qword ptr [r14 + 0x348], rax
2111cf movzx    edx, bpl
2111d3 xor      r10, rdx
2111d6 mov      byte ptr [r14 + 0x4ad], bpl
2111dd xor      r10, r12
2111e0 movabs   r12, 0xc4ceb9fe1a85ec53
2111ea mov      rax, r10
2111ed shr      rax, 0x21
2111f1 xor      rax, r10
2111f4 movabs   r10, 0x9e3779b97f4a7c15
2111fe imul     rax, r8
211202 imul     rdx, r10
211206 imul     r9, r10
21120a mov      rcx, rax
21120d shr      rcx, 0x21
211211 xor      rcx, rax
211214 imul     rcx, r12
211218 mov      rax, rcx
21121b shr      rax, 0x21
21121f xor      rax, rcx
211222 mov      ecx, dword ptr [r14 + 0x1178]
211229 mov      qword ptr [r14 + 0x20], rax
21122d movabs   rax, 0xd6e8feb86659fd93
211237 imul     rcx, rax
21123b xor      rcx, rdx
21123e xor      rcx, rbx
211241 movabs   rbx, 0x2545f4914f6cdd1d
21124b mov      rax, rcx
21124e add      r9, rbx
211251 shr      rax, 0x21
211255 xor      rax, rcx
211258 imul     rax, r8
21125c mov      rdx, rax
21125f shr      rdx, 0x21
211263 xor      rdx, rax
211266 mov      rax, qword ptr [rsp + 0x60]
21126b imul     rdx, r12
21126f shr      rdx, 0x21
211273 and      edx, 3
211276 inc      rax
211279 mov      qword ptr [r14 + 0x1b8], rax
211280 cmp      bpl, 0x3e
211284 jae      0x14021131e
21128a inc      qword ptr [r14 + 0x11a0]
211291 lea      rax, [rip - 0x211298]
211298 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
2112a0 mov      qword ptr [r14 + 0x1b0], r9
2112a7 shr      r9, 0x1b
2112ab movzx    eax, r9b
2112af mov      byte ptr [r14 + 0x160], al
2112b6 imul     rax, rdi
2112ba mov      ebx, edx
2112bc xor      rax, rsi
2112bf xor      rax, r11
2112c2 mov      rcx, rax
2112c5 add      rax, r8
2112c8 xor      rcx, r8
2112cb movzx    r8d, bpl
2112cf test     r15b, r15b
2112d2 cmove    rax, rcx
2112d6 mov      rcx, r14
2112d9 mov      qword ptr [r14 + 0xf0], rax
2112e0 call     0x1401f1f50
2112e5 mov      r8, qword ptr [rsp + 0x70]
2112ea lea      edx, [r13 - 1]
2112ee mov      eax, eax
2112f0 imul     rcx, rbx, 0x3e
2112f4 add      rcx, rax
2112f7 mov      rax, qword ptr [r14 + 0x4b8]
2112fe movsxd   r9, dword ptr [rax + rcx*4]
211302 mov      rcx, r14
211305 movsxd   rax, dword ptr [r14 + 0x4c8]
21130c xor      r9, rax
21130f add      r9, qword ptr [r14 + 0x4c0]
211316 call     r9
211319 jmp      0x1402113e5
21131e inc      dword ptr [r14 + 0x11a8]
211325 mov      rax, r9
211328 shr      rax, 0x1b
21132c movzx    ecx, al
21132f lea      rax, [r11*4]
211337 mov      byte ptr [r14 + 0x163], cl
21133e imul     rcx, rdi
211342 imul     r9, r10
211346 xor      rcx, rax
211349 xor      rcx, rsi
21134c mov      qword ptr [r14 + 0x108], rcx
211353 mov      r8, qword ptr [r14 + 0x1b8]
21135a add      r9, rbx
21135d mov      rax, r9
211360 shr      rax, 0x1b
211364 movzx    edx, al
211367 mov      byte ptr [r14 + 0x16a], dl
21136e imul     rax, r11, 0xb
211372 imul     rdx, rdi
211376 xor      rdx, rax
211379 xor      rdx, rsi
21137c mov      rcx, rdx
21137f xor      rcx, 1
211383 test     r15b, r15b
211386 lea      rax, [rdx + 1]
21138a cmove    rax, rcx
21138e mov      qword ptr [r14 + 0x140], rax
211395 lea      rax, [r8 + 2]
211399 mov      qword ptr [r14 + 0x1b8], rax
2113a0 imul     r9, r10
2113a4 add      r9, rbx
2113a7 mov      qword ptr [r14 + 0x1b0], r9
2113ae shr      r9, 0x1b
2113b2 movzx    eax, r9b
2113b6 mov      byte ptr [r14 + 0x160], al
2113bd imul     rax, rdi
2113c1 xor      rax, rsi
2113c4 xor      rax, r11
2113c7 mov      rcx, rax
2113ca add      rax, 0xfe1ab
2113d0 xor      rcx, 0xfe1ab
2113d7 test     r15b, r15b
2113da cmove    rax, rcx
2113de mov      qword ptr [r14 + 0xf0], rax
2113e5 mov      r12, qword ptr [rsp + 0x28]
2113ea mov      rsi, qword ptr [rsp + 0x68]
2113ef mov      r15, qword ptr [rsp + 0x20]
2113f4 add      rsp, 0x30
2113f8 pop      r14
2113fa pop      r13
2113fc pop      rdi
2113fd pop      rbp
2113fe pop      rbx
2113ff ret      
211400 mov      edx, 0x54485254
211405 mov      rcx, r14
211408 call     0x1401ed830
21140d int3     
21140e mov      edx, 0x43414e59
211413 mov      rcx, r14
211416 call     0x1401ed830
21141b int3     
