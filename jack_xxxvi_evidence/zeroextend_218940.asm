218940 mov      qword ptr [rsp + 0x18], r8
218945 push     rbx
218946 push     rbp
218947 push     rdi
218948 push     r13
21894a push     r14
21894c sub      rsp, 0x30
218950 movsxd   rax, dword ptr [rcx + 0x11e0]
218957 mov      r14, rcx
21895a mov      r13d, edx
21895d movabs   rcx, 0xc0acca8e825d1261
218967 imul     rax, rcx
21896b movabs   rcx, 0x62f540450383965e
218975 movabs   rbp, 0xff51afd7ed558ccd
21897f xor      rax, qword ptr [r14 + 0x28]
218983 mov      rdi, r8
218986 mov      qword ptr [rsp + 0x60], rax
21898b mov      rax, qword ptr [rsp + 0x60]
218990 movsxd   rax, dword ptr [r14 + 0x11e0]
218997 imul     rax, rcx
21899b movabs   rcx, 0x843dde1b80c81a4b
2189a5 xor      rax, qword ptr [r14 + 0x28]
2189a9 mov      qword ptr [rsp + 0x60], rax
2189ae mov      rax, qword ptr [rsp + 0x60]
2189b3 movsxd   rax, dword ptr [r14 + 0x11e0]
2189ba imul     rax, rcx
2189be movabs   rcx, 0xf08742c288450265
2189c8 xor      rax, qword ptr [r14 + 0x28]
2189cc mov      qword ptr [rsp + 0x60], rax
2189d1 mov      rax, qword ptr [rsp + 0x60]
2189d6 mov      rax, qword ptr [r14 + 0x2f8]
2189dd xor      rax, rcx
2189e0 mov      rcx, rax
2189e3 shr      rcx, 0x21
2189e7 xor      rcx, rax
2189ea movabs   rax, 0xc4ceb9fe1a85ec53
2189f4 imul     rcx, rbp
2189f8 mov      rdx, rcx
2189fb shr      rdx, 0x21
2189ff xor      rdx, rcx
218a02 mov      rcx, r14
218a05 imul     rdx, rax
218a09 mov      rax, rdx
218a0c shr      rax, 0x21
218a10 xor      rdx, rax
218a13 mov      rax, qword ptr [r14 + 0x2f8]
218a1a shr      rax, 7
218a1e add      rax, rdx
218a21 mov      qword ptr [r14 + 0x2f8], rax
218a28 call     0x1401f1e80
218a2d mov      rcx, r14
218a30 mov      ebx, eax
218a32 call     0x1401ee940
218a37 and      ebx, 0x3f
218a3a je       0x140218a4e
218a3c mov      ecx, ebx
218a3e mov      edx, 1
218a43 shl      rdx, cl
218a46 dec      rdx
218a49 and      rdx, rax
218a4c jmp      0x140218a50
218a4e xor      edx, edx
218a50 mov      rcx, r14
218a53 call     0x1401ee820
218a58 mov      rax, qword ptr [r14 + 0x2f8]
218a5f test     r13d, r13d
218a62 jns      0x1402195a0
218a68 cmp      qword ptr [r14 + 0x11b8], rdi
218a6f jne      0x1402195ae
218a75 movsxd   rax, dword ptr [r14 + 0x11e0]
218a7c movabs   rcx, 0x2998b94d7976caba
218a86 imul     rax, rcx
218a8a mov      rcx, r14
218a8d xor      rax, qword ptr [r14 + 0x28]
218a91 mov      qword ptr [rsp + 0x60], rax
218a96 mov      rax, qword ptr [rsp + 0x60]
218a9b call     0x1401ee450
218aa0 test     eax, eax
218aa2 jne      0x140219594
218aa8 cmp      dword ptr [r14 + 0xad0], eax
218aaf jne      0x140219594
218ab5 mov      r8, qword ptr [r14 + 0xf0]
218abc movzx    ecx, byte ptr [r14 + 0x160]
218ac4 mov      rax, r8
218ac7 mov      r10, qword ptr [r14 + 0xe0]
218ace mov      rbx, qword ptr [r14 + 0xd0]
218ad5 mov      r11, qword ptr [r14 + 0xd8]
218adc movzx    edi, byte ptr [r14 + 0xe8]
218ae4 mov      r9, qword ptr [r14 + 0x1b0]
218aeb imul     rcx, r10
218aef mov      qword ptr [rsp + 0x68], rsi
218af4 mov      rsi, qword ptr [r14 + 0x1b8]
218afb xor      rcx, rbx
218afe xor      rcx, r11
218b01 mov      qword ptr [rsp + 0x28], r12
218b06 xor      rax, rcx
218b09 mov      qword ptr [rsp + 0x20], r15
218b0e sub      r8, rcx
218b11 movabs   r15, 0x9e3779b97f4a7c15
218b1b test     dil, dil
218b1e movabs   r12, 0x2545f4914f6cdd1d
218b28 cmove    r8, rax
218b2c inc      rsi
218b2f imul     r9, r15
218b33 mov      qword ptr [r14 + 0x1b8], rsi
218b3a mov      rcx, r8
218b3d add      r9, r12
218b40 mov      qword ptr [r14 + 0x1b0], r9
218b47 mov      rax, r9
218b4a shr      rax, 0x1b
218b4e movzx    edx, al
218b51 mov      byte ptr [r14 + 0x160], dl
218b58 imul     rdx, r10
218b5c xor      rdx, rbx
218b5f xor      rdx, r11
218b62 xor      rcx, rdx
218b65 test     dil, dil
218b68 lea      rax, [r8 + rdx]
218b6c cmove    rax, rcx
218b70 mov      qword ptr [r14 + 0xf0], rax
218b77 cmp      r8d, 0x48cad
218b7e jne      0x140219585
218b84 mov      eax, r13d
218b87 btr      eax, 0x1f
218b8b cmp      eax, 2
218b8e jae      0x140218bda
218b90 imul     r9, r15
218b94 lea      rax, [rsi + 1]
218b98 mov      qword ptr [r14 + 0x1b8], rax
218b9f add      r9, r12
218ba2 mov      qword ptr [r14 + 0x1b0], r9
218ba9 shr      r9, 0x1b
218bad movzx    eax, r9b
218bb1 mov      byte ptr [r14 + 0x160], al
218bb8 imul     rax, r10
218bbc xor      rax, rbx
218bbf xor      rax, r11
218bc2 mov      rcx, rax
218bc5 add      rax, 0xf6105
218bcb xor      rcx, 0xf6105
218bd2 test     dil, dil
218bd5 jmp      0x14021957a
218bda mov      rcx, r14
218bdd call     0x1401ee070
218be2 movzx    ecx, byte ptr [r14 + 0x4ad]
218bea movabs   r8, 0xc4ceb9fe1a85ec53
218bf4 xor      rcx, qword ptr [r14 + 0x11e8]
218bfb mov      r11, qword ptr [r14 + 0xe0]
218c02 mov      r10, qword ptr [r14 + 0xd0]
218c09 movzx    r9d, byte ptr [r14 + 0xe8]
218c11 mov      eax, eax
218c13 xor      rcx, rax
218c16 mov      rax, rcx
218c19 shr      rax, 0x21
218c1d xor      rax, rcx
218c20 imul     rax, rbp
218c24 mov      rcx, rax
218c27 shr      rcx, 0x21
218c2b xor      rcx, rax
218c2e imul     rcx, r8
218c32 mov      rdx, rcx
218c35 shr      rdx, 0x21
218c39 xor      rdx, rcx
218c3c mov      qword ptr [r14 + 0x11e8], rdx
218c43 xor      rdx, qword ptr [r14 + 0x28]
218c47 xor      rdx, qword ptr [r14 + 0x20]
218c4b mov      rax, rdx
218c4e shr      rax, 0x21
218c52 xor      rax, rdx
218c55 imul     rax, rbp
218c59 mov      rcx, rax
218c5c shr      rcx, 0x21
218c60 xor      rcx, rax
218c63 imul     rcx, r8
218c67 mov      rax, rcx
218c6a shr      rax, 0x21
218c6e xor      rax, rcx
218c71 mov      qword ptr [r14 + 0x20], rax
218c75 mov      rdx, qword ptr [r14 + 0x138]
218c7c movzx    ecx, byte ptr [r14 + 0x169]
218c84 mov      rax, qword ptr [r14 + 0xd8]
218c8b imul     rcx, r11
218c8f lea      rbx, [rax + rax*4]
218c93 mov      rax, rdx
218c96 add      rbx, rbx
218c99 xor      rcx, rbx
218c9c xor      rcx, r10
218c9f xor      rax, rcx
218ca2 sub      rdx, rcx
218ca5 test     r9b, r9b
218ca8 cmove    rdx, rax
218cac mov      rax, qword ptr [r14 + 0x1b0]
218cb3 inc      qword ptr [r14 + 0x1b8]
218cba imul     rax, r15
218cbe add      rax, r12
218cc1 mov      qword ptr [r14 + 0x1b0], rax
218cc8 shr      rax, 0x1b
218ccc movzx    r8d, al
218cd0 mov      byte ptr [r14 + 0x169], r8b
218cd7 imul     r8, r11
218cdb xor      r8, rbx
218cde xor      r8, r10
218ce1 mov      rcx, r8
218ce4 xor      rcx, rdx
218ce7 test     r9b, r9b
218cea lea      rax, [r8 + rdx]
218cee cmove    rax, rcx
218cf2 mov      rcx, r14
218cf5 mov      qword ptr [r14 + 0x138], rax
218cfc call     0x1401f0910
218d01 mov      rax, qword ptr [r14 + 0xd8]
218d08 mov      rdx, qword ptr [r14 + 0x130]
218d0f mov      r10, qword ptr [r14 + 0xe0]
218d16 movzx    ecx, byte ptr [r14 + 0x168]
218d1e mov      rbx, qword ptr [r14 + 0xd0]
218d25 lea      r11, [rax + rax*8]
218d29 movzx    r9d, byte ptr [r14 + 0xe8]
218d31 mov      rax, rdx
218d34 imul     rcx, r10
218d38 xor      rcx, r11
218d3b xor      rcx, rbx
218d3e xor      rax, rcx
218d41 sub      rdx, rcx
218d44 test     r9b, r9b
218d47 cmove    rdx, rax
218d4b mov      rax, qword ptr [r14 + 0x1b0]
218d52 inc      qword ptr [r14 + 0x1b8]
218d59 mov      rcx, rdx
218d5c imul     rax, r15
218d60 add      rax, r12
218d63 mov      qword ptr [r14 + 0x1b0], rax
218d6a shr      rax, 0x1b
218d6e movzx    r8d, al
218d72 mov      byte ptr [r14 + 0x168], r8b
218d79 imul     r8, r10
218d7d xor      r8, r11
218d80 xor      r8, rbx
218d83 xor      rcx, r8
218d86 test     r9b, r9b
218d89 lea      rax, [rdx + r8]
218d8d cmove    rax, rcx
218d91 mov      rcx, r14
218d94 mov      qword ptr [r14 + 0x130], rax
218d9b call     0x1401f0910
218da0 mov      rcx, r14
218da3 call     0x1401ee070
218da8 cmp      eax, dword ptr [r14 + 0x1d8]
218daf jae      0x140218dbb
218db1 mov      edx, eax
218db3 mov      rcx, r14
218db6 call     0x1401f0910
218dbb mov      rsi, qword ptr [r14 + 0xe0]
218dc2 mov      rbp, qword ptr [r14 + 0xd0]
218dc9 mov      r11, qword ptr [r14 + 0x130]
218dd0 movzx    edi, byte ptr [r14 + 0xe8]
218dd8 mov      rax, r11
218ddb movzx    ecx, byte ptr [r14 + 0x168]
218de3 mov      rbx, qword ptr [r14 + 0xd8]
218dea mov      r8, qword ptr [r14 + 0x1b8]
218df1 mov      r10, qword ptr [r14 + 0x1b0]
218df8 imul     rcx, rsi
218dfc lea      r9, [rbx + rbx*8]
218e00 xor      rcx, r9
218e03 xor      rcx, rbp
218e06 xor      rax, rcx
218e09 sub      r11, rcx
218e0c test     dil, dil
218e0f cmove    r11, rax
218e13 imul     r10, r15
218e17 mov      rcx, r11
218e1a add      r10, r12
218e1d mov      rax, r10
218e20 shr      rax, 0x1b
218e24 movzx    edx, al
218e27 mov      byte ptr [r14 + 0x168], dl
218e2e imul     rdx, rsi
218e32 xor      rdx, r9
218e35 xor      rdx, rbp
218e38 xor      rcx, rdx
218e3b test     dil, dil
218e3e lea      rax, [r11 + rdx]
218e42 cmove    rax, rcx
218e46 mov      rcx, r11
218e49 mov      qword ptr [r14 + 0x130], rax
218e50 lea      rax, [r8 + 2]
218e54 mov      qword ptr [r14 + 0x1b8], rax
218e5b mov      r8d, 0x4c8a
218e61 imul     r10, r15
218e65 lea      rax, [rbx + rbx*4]
218e69 add      rax, rax
218e6c add      r10, r12
218e6f mov      qword ptr [r14 + 0x1b0], r10
218e76 shr      r10, 0x1b
218e7a movzx    edx, r10b
218e7e mov      byte ptr [r14 + 0x169], dl
218e85 imul     rdx, rsi
218e89 xor      rdx, rax
218e8c xor      rdx, rbp
218e8f xor      rcx, rdx
218e92 test     dil, dil
218e95 lea      rax, [r11 + rdx]
218e99 cmove    rax, rcx
218e9d mov      rcx, r14
218ea0 mov      qword ptr [r14 + 0x138], rax
218ea7 movzx    edx, byte ptr [r14 + 0x4ad]
218eaf xor      rdx, qword ptr [r14 + 0x348]
218eb6 call     0x1401f1520
218ebb mov      r8, qword ptr [r14 + 0x348]
218ec2 movabs   rdi, 0xff51afd7ed558ccd
218ecc mov      rax, r8
218ecf movabs   rsi, 0xc4ceb9fe1a85ec53
218ed9 xor      rax, qword ptr [r14 + 0x20]
218edd mov      rcx, rax
218ee0 shr      rcx, 0x21
218ee4 xor      rcx, rax
218ee7 imul     rcx, rdi
218eeb mov      rax, rcx
218eee shr      rax, 0x21
218ef2 xor      rax, rcx
218ef5 imul     rax, rsi
218ef9 mov      rdx, rax
218efc shr      rdx, 0x21
218f00 xor      edx, eax
218f02 lea      eax, [rdx + 1]
218f05 mov      ecx, eax
218f07 xor      eax, edx
218f09 imul     ecx, edx
218f0c not      ecx
218f0e and      ecx, eax
218f10 test     cl, 1
218f13 je       0x140218f7c
218f15 and      r8b, 3
218f19 cmp      r8b, 1
218f1d jne      0x140218f7c
218f1f mov      rax, qword ptr [r14 + 0x1b0]
218f26 inc      qword ptr [r14 + 0x1b8]
218f2d imul     rax, r15
218f31 add      rax, r12
218f34 mov      qword ptr [r14 + 0x1b0], rax
218f3b shr      rax, 0x1b
218f3f movzx    eax, al
218f42 mov      byte ptr [r14 + 0x160], al
218f49 imul     rax, qword ptr [r14 + 0xe0]
218f51 xor      rax, qword ptr [r14 + 0xd8]
218f58 xor      rax, qword ptr [r14 + 0xd0]
218f5f mov      rcx, rax
218f62 add      rax, 0x116fdf
218f68 xor      rcx, 0x116fdf
218f6f cmp      byte ptr [r14 + 0xe8], 0
218f77 jmp      0x14021957a
218f7c mov      rcx, r14
218f7f call     0x1401ee070
218f84 mov      ebx, eax
218f86 cmp      eax, dword ptr [r14 + 0x1d8]
218f8d jb       0x140218fec
218f8f mov      rax, qword ptr [r14 + 0x1b0]
218f96 inc      qword ptr [r14 + 0x1b8]
218f9d imul     rax, r15
218fa1 add      rax, r12
218fa4 mov      qword ptr [r14 + 0x1b0], rax
218fab shr      rax, 0x1b
218faf movzx    eax, al
218fb2 mov      byte ptr [r14 + 0x160], al
218fb9 imul     rax, qword ptr [r14 + 0xe0]
218fc1 xor      rax, qword ptr [r14 + 0xd8]
218fc8 xor      rax, qword ptr [r14 + 0xd0]
218fcf mov      rcx, rax
218fd2 add      rax, 0xfe1ab
218fd8 xor      rcx, 0xfe1ab
218fdf cmp      byte ptr [r14 + 0xe8], 0
218fe7 jmp      0x14021957a
218fec mov      edx, ebx
218fee mov      rcx, r14
218ff1 call     0x1401f25b0
218ff6 movsxd   rcx, dword ptr [r14 + 0x11e0]
218ffd movabs   r8, 0xd6e8feb86659fd93
219007 mov      rdx, qword ptr [r14 + 0x20]
21900b mov      rax, rbx
21900e imul     rax, r8
219012 imul     rcx, r15
219016 rol      rdx, 0x11
21901a xor      rax, rdx
21901d xor      rcx, qword ptr [r14 + 0x260]
219024 xor      rax, rcx
219027 mov      rcx, rax
21902a shr      rcx, 0x21
21902e xor      rcx, rax
219031 imul     rcx, rdi
219035 mov      rdx, rcx
219038 shr      rdx, 0x21
21903c xor      rdx, rcx
21903f imul     rdx, rsi
219043 mov      rax, rdx
219046 shr      rax, 0x21
21904a xor      rax, rdx
21904d mov      r10, rax
219050 shr      r10, 0x1d
219054 xor      r10, rax
219057 or       r10, 1
21905b mov      rax, r10
21905e mov      qword ptr [r14 + 0x260], r10
219065 and      eax, 0x3ff
21906a cmp      rax, 0x2c5
219070 jne      0x140219081
219072 mov      rcx, r14
219075 call     0x1402297e0
21907a mov      r10, qword ptr [r14 + 0x260]
219081 movzx    eax, r10b
219085 and      al, 0x1f
219087 cmp      al, 0x15
219089 jne      0x140219176
21908f movsxd   rax, dword ptr [r14 + 0x11e0]
219096 xor      rax, 0x5a5a
21909c mov      rcx, qword ptr [r14 + 0x20]
2190a0 imul     rax, r15
2190a4 rol      rcx, 0x11
2190a8 xor      rax, r10
2190ab xor      rcx, rax
2190ae movabs   rax, 0x8f70feda99a6026d
2190b8 xor      rcx, rax
2190bb mov      rax, rcx
2190be shr      rax, 0x21
2190c2 xor      rax, rcx
2190c5 imul     rax, rdi
2190c9 mov      rcx, rax
2190cc shr      rcx, 0x21
2190d0 xor      rcx, rax
2190d3 imul     rcx, rsi
2190d7 mov      rax, rcx
2190da shr      rax, 0x21
2190de xor      rax, rcx
2190e1 mov      r9, rax
2190e4 shr      r9, 0x1d
2190e8 xor      r9, rax
2190eb or       r9, 1
2190ef mov      rax, r9
2190f2 mov      rcx, r9
2190f5 shr      rax, 8
2190f9 and      eax, 3
2190fc shr      rcx, 0x28
219100 imul     r8, rax, 0x3e
219104 mov      eax, 0x8421085
219109 mul      ecx
21910b mov      eax, ecx
21910d sub      eax, edx
21910f shr      eax, 1
219111 add      eax, edx
219113 shr      eax, 5
219116 imul     eax, eax, 0x3e
219119 sub      ecx, eax
21911b mov      eax, ecx
21911d add      r8, rax
219120 mov      rax, qword ptr [r14 + 0x4b8]
219127 movsxd   rcx, dword ptr [rax + r8*4]
21912b movsxd   rax, dword ptr [r14 + 0x4c8]
219132 xor      rcx, rax
219135 add      rcx, qword ptr [r14 + 0x4c0]
21913c xor      rcx, r9
21913f mov      rax, rcx
219142 shr      rax, 0x21
219146 xor      rax, rcx
219149 imul     rax, rdi
21914d mov      rcx, rax
219150 shr      rcx, 0x21
219154 xor      rcx, rax
219157 imul     rcx, rsi
21915b mov      rax, rcx
21915e shr      rax, 0x21
219162 xor      rax, rcx
219165 xor      rax, r10
219168 inc      qword ptr [r14 + 0x268]
21916f mov      qword ptr [r14 + 0x260], rax
219176 inc      dword ptr [r14 + 0x200]
21917d mov      eax, dword ptr [r14 + 0x200]
219184 cmp      eax, dword ptr [r14 + 0x1fc]
21918b jb       0x1402191a0
21918d mov      rcx, r14
219190 mov      dword ptr [r14 + 0x200], 0
21919b call     0x1401ef7c0
2191a0 mov      r8d, ebx
2191a3 mov      edx, ebx
2191a5 mov      rcx, r14
2191a8 call     0x1401f0660
2191ad inc      qword ptr [r14 + 0x1b8]
2191b4 mov      rcx, rbx
2191b7 mov      r9, qword ptr [r14 + 0x1b0]
2191be mov      rbp, r12
2191c1 mov      r10, qword ptr [r14 + 0x1b8]
2191c8 imul     r9, r15
2191cc add      r9, r12
2191cf lea      r12d, [rbx + 1]
2191d3 mov      qword ptr [r14 + 0x1b0], r9
2191da mov      rax, r9
2191dd shr      rax, 0x1b
2191e1 movzx    edx, al
2191e4 mov      byte ptr [r14 + 0x168], dl
2191eb mov      rdi, qword ptr [r14 + 0xe0]
2191f2 mov      r11, qword ptr [r14 + 0xd8]
2191f9 mov      rsi, qword ptr [r14 + 0xd0]
219200 movzx    r15d, byte ptr [r14 + 0xe8]
219208 imul     rdx, rdi
21920c lea      rax, [r11 + r11*8]
219210 xor      rdx, rax
219213 xor      rdx, rsi
219216 xor      rcx, rdx
219219 test     r15b, r15b
21921c lea      rax, [rbx + rdx]
219220 cmove    rax, rcx
219224 inc      r10
219227 mov      qword ptr [r14 + 0x130], rax
21922e mov      rcx, qword ptr [r14 + 0x1d0]
219235 mov      rax, qword ptr [r14 + 0x48]
219239 mov      qword ptr [rsp + 0x60], r10
21923e movzx    r8d, byte ptr [rcx + rbx]
219243 xor      r8b, byte ptr [rax + rbx]
219247 movabs   rax, 0x9e3779b97f4a7c15
219251 imul     r9, rax
219255 mov      qword ptr [r14 + 0x1b8], r10
21925c add      r9, rbp
21925f mov      rax, r9
219262 shr      rax, 0x1b
219266 movzx    edx, al
219269 lea      rax, [r11 + r11]
21926d mov      byte ptr [r14 + 0x161], dl
219274 imul     rdx, rdi
219278 xor      rdx, rax
21927b xor      rdx, rsi
21927e mov      rcx, rdx
219281 xor      rcx, r12
219284 test     r15b, r15b
219287 lea      rax, [rdx + r12]
21928b cmove    rax, rcx
21928f mov      qword ptr [r14 + 0xf8], rax
219296 movsxd   rdx, dword ptr [r14 + 0x11e0]
21929d mov      r10, qword ptr [r14 + 0x20]
2192a1 mov      rcx, rdx
2192a4 xor      rcx, qword ptr [r14 + 0x350]
2192ab xor      rcx, r10
2192ae xor      rcx, r12
2192b1 xor      rcx, qword ptr [r14 + 0x348]
2192b8 mov      rax, rcx
2192bb shr      rax, 0x21
2192bf xor      rax, rcx
2192c2 movabs   rcx, 0xff51afd7ed558ccd
2192cc imul     rax, rcx
2192d0 mov      rcx, rax
2192d3 shr      rcx, 0x21
2192d7 xor      rcx, rax
2192da movabs   rax, 0xc4ceb9fe1a85ec53
2192e4 imul     rcx, rax
2192e8 movzx    eax, r8b
2192ec mov      rbx, rcx
2192ef xor      rax, 0xdd
2192f5 shr      rbx, 0x21
2192f9 xor      rbx, rcx
2192fc lea      rcx, [rip - 0x219303]
219303 mov      qword ptr [r14 + 0x28], rbx
219307 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
21930f xor      bpl, 0x63
219313 inc      edx
219315 mov      dword ptr [r14 + 0x11e0], edx
21931c movabs   r8, 0xff51afd7ed558ccd
219326 test     dl, 0x1f
219329 jne      0x14021936f
21932b movsxd   rax, edx
21932e xor      rax, r10
219331 xor      rax, qword ptr [r14 + 0x348]
219338 mov      rcx, rax
21933b shr      rcx, 0x21
21933f xor      rcx, rax
219342 movabs   rax, 0xc4ceb9fe1a85ec53
21934c imul     rcx, r8
219350 mov      rdx, rcx
219353 shr      rdx, 0x21
219357 xor      rdx, rcx
21935a imul     rdx, rax
21935e mov      rax, rdx
219361 shr      rax, 0x21
219365 xor      rax, rdx
219368 mov      qword ptr [r14 + 0x348], rax
21936f movzx    edx, bpl
219373 xor      r10, rdx
219376 mov      byte ptr [r14 + 0x4ad], bpl
21937d xor      r10, r12
219380 movabs   r12, 0xc4ceb9fe1a85ec53
21938a mov      rax, r10
21938d shr      rax, 0x21
219391 xor      rax, r10
219394 movabs   r10, 0x9e3779b97f4a7c15
21939e imul     rax, r8
2193a2 imul     rdx, r10
2193a6 imul     r9, r10
2193aa mov      rcx, rax
2193ad shr      rcx, 0x21
2193b1 xor      rcx, rax
2193b4 imul     rcx, r12
2193b8 mov      rax, rcx
2193bb shr      rax, 0x21
2193bf xor      rax, rcx
2193c2 mov      ecx, dword ptr [r14 + 0x1178]
2193c9 mov      qword ptr [r14 + 0x20], rax
2193cd movabs   rax, 0xd6e8feb86659fd93
2193d7 imul     rcx, rax
2193db xor      rcx, rdx
2193de xor      rcx, rbx
2193e1 movabs   rbx, 0x2545f4914f6cdd1d
2193eb mov      rax, rcx
2193ee add      r9, rbx
2193f1 shr      rax, 0x21
2193f5 xor      rax, rcx
2193f8 imul     rax, r8
2193fc mov      rdx, rax
2193ff shr      rdx, 0x21
219403 xor      rdx, rax
219406 mov      rax, qword ptr [rsp + 0x60]
21940b imul     rdx, r12
21940f shr      rdx, 0x21
219413 and      edx, 3
219416 inc      rax
219419 mov      qword ptr [r14 + 0x1b8], rax
219420 cmp      bpl, 0x3e
219424 jae      0x1402194be
21942a inc      qword ptr [r14 + 0x11a0]
219431 lea      rax, [rip - 0x219438]
219438 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
219440 mov      qword ptr [r14 + 0x1b0], r9
219447 shr      r9, 0x1b
21944b movzx    eax, r9b
21944f mov      byte ptr [r14 + 0x160], al
219456 imul     rax, rdi
21945a mov      ebx, edx
21945c xor      rax, rsi
21945f xor      rax, r11
219462 mov      rcx, rax
219465 add      rax, r8
219468 xor      rcx, r8
21946b movzx    r8d, bpl
21946f test     r15b, r15b
219472 cmove    rax, rcx
219476 mov      rcx, r14
219479 mov      qword ptr [r14 + 0xf0], rax
219480 call     0x1401f1f50
219485 mov      r8, qword ptr [rsp + 0x70]
21948a lea      edx, [r13 - 1]
21948e mov      eax, eax
219490 imul     rcx, rbx, 0x3e
219494 add      rcx, rax
219497 mov      rax, qword ptr [r14 + 0x4b8]
21949e movsxd   r9, dword ptr [rax + rcx*4]
2194a2 mov      rcx, r14
2194a5 movsxd   rax, dword ptr [r14 + 0x4c8]
2194ac xor      r9, rax
2194af add      r9, qword ptr [r14 + 0x4c0]
2194b6 call     r9
2194b9 jmp      0x140219585
2194be inc      dword ptr [r14 + 0x11a8]
2194c5 mov      rax, r9
2194c8 shr      rax, 0x1b
2194cc movzx    ecx, al
2194cf lea      rax, [r11*4]
2194d7 mov      byte ptr [r14 + 0x163], cl
2194de imul     rcx, rdi
2194e2 imul     r9, r10
2194e6 xor      rcx, rax
2194e9 xor      rcx, rsi
2194ec mov      qword ptr [r14 + 0x108], rcx
2194f3 mov      r8, qword ptr [r14 + 0x1b8]
2194fa add      r9, rbx
2194fd mov      rax, r9
219500 shr      rax, 0x1b
219504 movzx    edx, al
219507 mov      byte ptr [r14 + 0x16a], dl
21950e imul     rax, r11, 0xb
219512 imul     rdx, rdi
219516 xor      rdx, rax
219519 xor      rdx, rsi
21951c mov      rcx, rdx
21951f xor      rcx, 1
219523 test     r15b, r15b
219526 lea      rax, [rdx + 1]
21952a cmove    rax, rcx
21952e mov      qword ptr [r14 + 0x140], rax
219535 lea      rax, [r8 + 2]
219539 mov      qword ptr [r14 + 0x1b8], rax
219540 imul     r9, r10
219544 add      r9, rbx
219547 mov      qword ptr [r14 + 0x1b0], r9
21954e shr      r9, 0x1b
219552 movzx    eax, r9b
219556 mov      byte ptr [r14 + 0x160], al
21955d imul     rax, rdi
219561 xor      rax, rsi
219564 xor      rax, r11
219567 mov      rcx, rax
21956a add      rax, 0xfe1ab
219570 xor      rcx, 0xfe1ab
219577 test     r15b, r15b
21957a cmove    rax, rcx
21957e mov      qword ptr [r14 + 0xf0], rax
219585 mov      r12, qword ptr [rsp + 0x28]
21958a mov      rsi, qword ptr [rsp + 0x68]
21958f mov      r15, qword ptr [rsp + 0x20]
219594 add      rsp, 0x30
219598 pop      r14
21959a pop      r13
21959c pop      rdi
21959d pop      rbp
21959e pop      rbx
21959f ret      
2195a0 mov      edx, 0x54485254
2195a5 mov      rcx, r14
2195a8 call     0x1401ed830
2195ad int3     
2195ae mov      edx, 0x43414e59
2195b3 mov      rcx, r14
2195b6 call     0x1401ed830
2195bb int3     
