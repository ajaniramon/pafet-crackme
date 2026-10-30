213a20 mov      qword ptr [rsp + 0x20], rbx
213a25 push     rbp
213a26 push     rsi
213a27 push     rdi
213a28 push     r12
213a2a push     r13
213a2c push     r14
213a2e push     r15
213a30 sub      rsp, 0x160
213a37 mov      rax, qword ptr [rip + 0x1f95e2]
213a3e xor      rax, rsp
213a41 mov      qword ptr [rsp + 0x150], rax
213a49 mov      r13, r8
213a4c mov      qword ptr [rsp + 0x40], r8
213a51 mov      r15d, edx
213a54 mov      rbx, rcx
213a57 movsxd   rax, dword ptr [rcx + 0x11e0]
213a5e movabs   rcx, 0x2a3fac7c4ed3d3e6
213a68 imul     rax, rcx
213a6c xor      rax, qword ptr [rbx + 0x28]
213a70 mov      qword ptr [rsp + 0x20], rax
213a75 mov      rax, qword ptr [rsp + 0x20]
213a7a movsxd   rax, dword ptr [rbx + 0x11e0]
213a81 movabs   rcx, 0x886626b7cf0d57d9
213a8b imul     rax, rcx
213a8f xor      rax, qword ptr [rbx + 0x28]
213a93 mov      qword ptr [rsp + 0x20], rax
213a98 mov      rax, qword ptr [rsp + 0x20]
213a9d movsxd   rax, dword ptr [rbx + 0x11e0]
213aa4 movabs   rcx, 0x6eaeb8e94c46dbcc
213aae imul     rax, rcx
213ab2 xor      rax, qword ptr [rbx + 0x28]
213ab6 mov      qword ptr [rsp + 0x20], rax
213abb mov      rax, qword ptr [rsp + 0x20]
213ac0 mov      rax, qword ptr [rbx + 0x2e0]
213ac7 movabs   rcx, 0x1a14243044cbc3e2
213ad1 xor      rax, rcx
213ad4 mov      rcx, rax
213ad7 shr      rcx, 0x21
213adb xor      rcx, rax
213ade movabs   rax, 0xff51afd7ed558ccd
213ae8 imul     rcx, rax
213aec mov      rdx, rcx
213aef shr      rdx, 0x21
213af3 xor      rdx, rcx
213af6 movabs   rax, 0xc4ceb9fe1a85ec53
213b00 imul     rdx, rax
213b04 mov      rax, rdx
213b07 shr      rax, 0x21
213b0b xor      rdx, rax
213b0e mov      rax, qword ptr [rbx + 0x2e0]
213b15 shr      rax, 7
213b19 add      rax, rdx
213b1c mov      qword ptr [rbx + 0x2e0], rax
213b23 mov      rcx, rbx
213b26 call     0x1401f1d80
213b2b mov      ebp, eax
213b2d mov      rcx, rbx
213b30 call     0x1401f1e80
213b35 mov      esi, eax
213b37 cmp      eax, 0x20
213b3a jbe      0x140213b43
213b3c mov      esi, 0x20
213b41 jmp      0x140213b47
213b43 test     eax, eax
213b45 je       0x140213b69
213b47 xor      edi, edi
213b49 nop      dword ptr [rax]
213b50 mov      rcx, rbx
213b53 call     0x1401ee940
213b58 mov      ecx, esi
213b5a sub      ecx, edi
213b5c dec      ecx
213b5e mov      qword ptr [rsp + rcx*8 + 0x50], rax
213b63 inc      edi
213b65 cmp      edi, esi
213b67 jb       0x140213b50
213b69 mov      r14d, 0x610
213b6f mov      rax, qword ptr gs:[0x58]
213b78 add      r14, qword ptr [rax]
213b7b mov      eax, dword ptr [r14 + 0x524]
213b82 mov      dword ptr [rsp + 0x20], eax
213b86 mov      rcx, rbx
213b89 call     0x1401ee1c0
213b8e mov      edi, eax
213b90 mov      rcx, rbx
213b93 call     0x1401ee070
213b98 mov      r9d, edi
213b9b mov      r8d, ebp
213b9e mov      edx, eax
213ba0 mov      rcx, rbx
213ba3 call     0x1401ef230
213ba8 mov      r12d, eax
213bab mov      rcx, rbx
213bae call     0x1401ee590
213bb3 lea      r8, [rax + 1]
213bb7 movabs   rax, 0x9e3779b97f4a7c15
213bc1 mov      rcx, qword ptr [rbx + 0x1b0]
213bc8 imul     rcx, rax
213bcc movabs   rax, 0x2545f4914f6cdd1d
213bd6 add      rcx, rax
213bd9 mov      qword ptr [rbx + 0x1b0], rcx
213be0 inc      qword ptr [rbx + 0x1b8]
213be7 shr      rcx, 0x1b
213beb movzx    edx, cl
213bee mov      byte ptr [rbx + 0x16d], dl
213bf4 imul     rdx, qword ptr [rbx + 0xe0]
213bfc imul     rax, qword ptr [rbx + 0xd8], 0xe
213c04 xor      rdx, rax
213c07 xor      rdx, qword ptr [rbx + 0xd0]
213c0e mov      rcx, rdx
213c11 xor      rcx, r8
213c14 lea      rax, [rdx + r8]
213c18 cmp      byte ptr [rbx + 0xe8], 0
213c1f cmove    rax, rcx
213c23 mov      qword ptr [rbx + 0x158], rax
213c2a mov      dword ptr [rsp + 0x30], esi
213c2e lea      rax, [rsp + 0x50]
213c33 mov      qword ptr [rsp + 0x28], rax
213c38 mov      dword ptr [rsp + 0x38], ebp
213c3c mov      rcx, qword ptr [rbx + 0xb0]
213c43 test     rcx, rcx
213c46 je       0x140214935
213c4c mov      rax, qword ptr [rcx]
213c4f lea      r9, [rsp + 0x30]
213c54 lea      r8, [rsp + 0x28]
213c59 lea      rdx, [rsp + 0x38]
213c5e call     qword ptr [rax + 0x10]
213c61 mov      rdi, rax
213c64 mov      rcx, rbx
213c67 call     0x1401ee590
213c6c lea      r8, [rax - 1]
213c70 mov      rcx, qword ptr [rbx + 0x1b0]
213c77 movabs   rax, 0x9e3779b97f4a7c15
213c81 imul     rcx, rax
213c85 movabs   rsi, 0x2545f4914f6cdd1d
213c8f add      rcx, rsi
213c92 mov      qword ptr [rbx + 0x1b0], rcx
213c99 inc      qword ptr [rbx + 0x1b8]
213ca0 shr      rcx, 0x1b
213ca4 movzx    edx, cl
213ca7 mov      byte ptr [rbx + 0x16d], dl
213cad imul     rdx, qword ptr [rbx + 0xe0]
213cb5 imul     rax, qword ptr [rbx + 0xd8], 0xe
213cbd xor      rdx, rax
213cc0 xor      rdx, qword ptr [rbx + 0xd0]
213cc7 mov      rcx, rdx
213cca xor      rcx, r8
213ccd lea      rax, [rdx + r8]
213cd1 cmp      byte ptr [rbx + 0xe8], 0
213cd8 cmove    rax, rcx
213cdc mov      qword ptr [rbx + 0x158], rax
213ce3 test     r12d, r12d
213ce6 je       0x140213d60
213ce8 mov      rcx, rbx
213ceb call     0x1401ef380
213cf0 mov      r8d, eax
213cf3 mov      rax, qword ptr [rbx + 0x1b0]
213cfa movabs   r12, 0x9e3779b97f4a7c15
213d04 imul     rax, r12
213d08 add      rax, rsi
213d0b mov      qword ptr [rbx + 0x1b0], rax
213d12 inc      qword ptr [rbx + 0x1b8]
213d19 shr      rax, 0x1b
213d1d movzx    edx, al
213d20 mov      byte ptr [rbx + 0x161], dl
213d26 imul     rdx, qword ptr [rbx + 0xe0]
213d2e mov      rax, qword ptr [rbx + 0xd8]
213d35 add      rax, rax
213d38 xor      rdx, rax
213d3b xor      rdx, qword ptr [rbx + 0xd0]
213d42 mov      ecx, r8d
213d45 xor      rcx, rdx
213d48 lea      rax, [r8 + rdx]
213d4c cmp      byte ptr [rbx + 0xe8], 0
213d53 cmove    rax, rcx
213d57 mov      qword ptr [rbx + 0xf8], rax
213d5e jmp      0x140213d6a
213d60 movabs   r12, 0x9e3779b97f4a7c15
213d6a mov      rcx, rbx
213d6d call     0x1401ee590
213d72 xor      rax, rbp
213d75 xor      rax, qword ptr [rbx + 0x20]
213d79 mov      rcx, rax
213d7c shr      rcx, 0x21
213d80 xor      rcx, rax
213d83 movabs   rbp, 0xff51afd7ed558ccd
213d8d imul     rcx, rbp
213d91 mov      rdx, rcx
213d94 shr      rdx, 0x21
213d98 xor      rdx, rcx
213d9b movabs   rax, 0xc4ceb9fe1a85ec53
213da5 imul     rdx, rax
213da9 mov      rax, rdx
213dac shr      rax, 0x21
213db0 xor      rax, rdx
213db3 mov      qword ptr [rbx + 0x20], rax
213db7 mov      rdx, rdi
213dba mov      rcx, rbx
213dbd call     0x1401ee820
213dc2 mov      rax, qword ptr [rbx + 0x2e0]
213dc9 mov      eax, dword ptr [rsp + 0x20]
213dcd cmp      dword ptr [r14 + 0x524], eax
213dd4 jbe      0x140213ddd
213dd6 mov      dword ptr [r14 + 0x524], eax
213ddd test     r15d, r15d
213de0 jns      0x14021493b
213de6 cmp      qword ptr [rbx + 0x11b8], r13
213ded jne      0x140214927
213df3 movsxd   rax, dword ptr [rbx + 0x11e0]
213dfa movabs   rcx, 0x4e488fdc1253fc2c
213e04 imul     rax, rcx
213e08 xor      rax, qword ptr [rbx + 0x28]
213e0c mov      qword ptr [rsp + 0x28], rax
213e11 mov      rax, qword ptr [rsp + 0x28]
213e16 mov      rcx, rbx
213e19 call     0x1401ee450
213e1e test     eax, eax
213e20 jne      0x1402148fc
213e26 cmp      dword ptr [rbx + 0xad0], eax
213e2c jne      0x1402148fc
213e32 mov      r10, qword ptr [rbx + 0xe0]
213e39 mov      r11, qword ptr [rbx + 0xd8]
213e40 mov      rdi, qword ptr [rbx + 0xd0]
213e47 movzx    ecx, byte ptr [rbx + 0x160]
213e4e imul     rcx, r10
213e52 xor      rcx, rdi
213e55 xor      rcx, r11
213e58 movzx    esi, byte ptr [rbx + 0xe8]
213e5f mov      r8, qword ptr [rbx + 0xf0]
213e66 mov      rax, r8
213e69 xor      rax, rcx
213e6c sub      r8, rcx
213e6f test     sil, sil
213e72 cmove    r8, rax
213e76 mov      r9, qword ptr [rbx + 0x1b0]
213e7d imul     r9, r12
213e81 movabs   r13, 0x2545f4914f6cdd1d
213e8b add      r9, r13
213e8e mov      qword ptr [rbx + 0x1b0], r9
213e95 mov      rbp, qword ptr [rbx + 0x1b8]
213e9c inc      rbp
213e9f mov      qword ptr [rbx + 0x1b8], rbp
213ea6 mov      rax, r9
213ea9 shr      rax, 0x1b
213ead movzx    edx, al
213eb0 mov      byte ptr [rbx + 0x160], dl
213eb6 imul     rdx, r10
213eba xor      rdx, rdi
213ebd xor      rdx, r11
213ec0 mov      rcx, r8
213ec3 xor      rcx, rdx
213ec6 lea      rax, [r8 + rdx]
213eca test     sil, sil
213ecd cmove    rax, rcx
213ed1 mov      qword ptr [rbx + 0xf0], rax
213ed8 cmp      r8d, 0x48cad
213edf jne      0x1402148fc
213ee5 mov      eax, r15d
213ee8 btr      eax, 0x1f
213eec cmp      eax, 2
213eef jae      0x140213f3a
213ef1 imul     r9, r12
213ef5 add      r9, r13
213ef8 mov      qword ptr [rbx + 0x1b0], r9
213eff lea      rax, [rbp + 1]
213f03 mov      qword ptr [rbx + 0x1b8], rax
213f0a shr      r9, 0x1b
213f0e movzx    eax, r9b
213f12 mov      byte ptr [rbx + 0x160], al
213f18 imul     rax, r10
213f1c xor      rax, rdi
213f1f xor      rax, r11
213f22 mov      rcx, rax
213f25 xor      rcx, 0xf6105
213f2c add      rax, 0xf6105
213f32 test     sil, sil
213f35 jmp      0x1402148f1
213f3a mov      rcx, rbx
213f3d call     0x1401ee070
213f42 mov      eax, eax
213f44 movzx    ecx, byte ptr [rbx + 0x4ad]
213f4b xor      rcx, rax
213f4e xor      rcx, qword ptr [rbx + 0x11e8]
213f55 mov      rax, rcx
213f58 shr      rax, 0x21
213f5c xor      rax, rcx
213f5f movabs   r8, 0xff51afd7ed558ccd
213f69 imul     rax, r8
213f6d mov      rcx, rax
213f70 shr      rcx, 0x21
213f74 xor      rcx, rax
213f77 movabs   r9, 0xc4ceb9fe1a85ec53
213f81 imul     rcx, r9
213f85 mov      rdx, rcx
213f88 shr      rdx, 0x21
213f8c xor      rdx, rcx
213f8f mov      qword ptr [rbx + 0x11e8], rdx
213f96 xor      rdx, qword ptr [rbx + 0x20]
213f9a xor      rdx, qword ptr [rbx + 0x28]
213f9e mov      rax, rdx
213fa1 shr      rax, 0x21
213fa5 xor      rax, rdx
213fa8 imul     rax, r8
213fac mov      rcx, rax
213faf shr      rcx, 0x21
213fb3 xor      rcx, rax
213fb6 imul     rcx, r9
213fba mov      rax, rcx
213fbd shr      rax, 0x21
213fc1 xor      rax, rcx
213fc4 mov      qword ptr [rbx + 0x20], rax
213fc8 mov      r11, qword ptr [rbx + 0xe0]
213fcf mov      rax, qword ptr [rbx + 0xd8]
213fd6 lea      rdi, [rax + rax*4]
213fda add      rdi, rdi
213fdd mov      r10, qword ptr [rbx + 0xd0]
213fe4 movzx    ecx, byte ptr [rbx + 0x169]
213feb imul     rcx, r11
213fef xor      rcx, rdi
213ff2 xor      rcx, r10
213ff5 movzx    r9d, byte ptr [rbx + 0xe8]
213ffd mov      rdx, qword ptr [rbx + 0x138]
214004 mov      rax, rdx
214007 xor      rax, rcx
21400a sub      rdx, rcx
21400d test     r9b, r9b
214010 cmove    rdx, rax
214014 mov      rax, qword ptr [rbx + 0x1b0]
21401b imul     rax, r12
21401f add      rax, r13
214022 mov      qword ptr [rbx + 0x1b0], rax
214029 inc      qword ptr [rbx + 0x1b8]
214030 shr      rax, 0x1b
214034 movzx    r8d, al
214038 mov      byte ptr [rbx + 0x169], r8b
21403f imul     r8, r11
214043 xor      r8, rdi
214046 xor      r8, r10
214049 mov      rcx, r8
21404c xor      rcx, rdx
21404f lea      rax, [r8 + rdx]
214053 test     r9b, r9b
214056 cmove    rax, rcx
21405a mov      qword ptr [rbx + 0x138], rax
214061 mov      rcx, rbx
214064 call     0x1401f0910
214069 mov      r9, qword ptr [rbx + 0xe0]
214070 mov      rax, qword ptr [rbx + 0xd8]
214077 lea      r10, [rax + rax*8]
21407b mov      rdi, qword ptr [rbx + 0xd0]
214082 movzx    ecx, byte ptr [rbx + 0x168]
214089 imul     rcx, r9
21408d xor      rcx, r10
214090 xor      rcx, rdi
214093 movzx    r11d, byte ptr [rbx + 0xe8]
21409b mov      rdx, qword ptr [rbx + 0x130]
2140a2 mov      rax, rdx
2140a5 xor      rax, rcx
2140a8 sub      rdx, rcx
2140ab test     r11b, r11b
2140ae cmove    rdx, rax
2140b2 mov      rax, qword ptr [rbx + 0x1b0]
2140b9 imul     rax, r12
2140bd add      rax, r13
2140c0 mov      qword ptr [rbx + 0x1b0], rax
2140c7 inc      qword ptr [rbx + 0x1b8]
2140ce shr      rax, 0x1b
2140d2 movzx    r8d, al
2140d6 mov      byte ptr [rbx + 0x168], r8b
2140dd imul     r8, r9
2140e1 xor      r8, r10
2140e4 xor      r8, rdi
2140e7 mov      rcx, r8
2140ea xor      rcx, rdx
2140ed lea      rax, [r8 + rdx]
2140f1 test     r11b, r11b
2140f4 cmove    rax, rcx
2140f8 mov      qword ptr [rbx + 0x130], rax
2140ff mov      rcx, rbx
214102 call     0x1401f0910
214107 mov      rcx, rbx
21410a call     0x1401ee070
21410f cmp      eax, dword ptr [rbx + 0x1d8]
214115 jae      0x140214121
214117 mov      edx, eax
214119 mov      rcx, rbx
21411c call     0x1401f0910
214121 mov      rbp, qword ptr [rbx + 0xe0]
214128 mov      rdi, qword ptr [rbx + 0xd8]
21412f lea      r10, [rdi + rdi*8]
214133 mov      r14, qword ptr [rbx + 0xd0]
21413a movzx    ecx, byte ptr [rbx + 0x168]
214141 imul     rcx, rbp
214145 xor      rcx, r10
214148 xor      rcx, r14
21414b movzx    esi, byte ptr [rbx + 0xe8]
214152 mov      r11, qword ptr [rbx + 0x130]
214159 mov      rax, r11
21415c xor      rax, rcx
21415f sub      r11, rcx
214162 test     sil, sil
214165 cmove    r11, rax
214169 mov      r9, qword ptr [rbx + 0x1b0]
214170 imul     r9, r12
214174 add      r9, r13
214177 mov      r8, qword ptr [rbx + 0x1b8]
21417e mov      rax, r9
214181 shr      rax, 0x1b
214185 movzx    edx, al
214188 mov      byte ptr [rbx + 0x168], dl
21418e imul     rdx, rbp
214192 xor      rdx, r14
214195 xor      rdx, r10
214198 mov      rcx, rdx
21419b xor      rcx, r11
21419e lea      rax, [rdx + r11]
2141a2 test     sil, sil
2141a5 cmove    rax, rcx
2141a9 mov      qword ptr [rbx + 0x130], rax
2141b0 imul     r9, r12
2141b4 add      r9, r13
2141b7 mov      qword ptr [rbx + 0x1b0], r9
2141be lea      rax, [r8 + 2]
2141c2 mov      qword ptr [rbx + 0x1b8], rax
2141c9 shr      r9, 0x1b
2141cd movzx    edx, r9b
2141d1 mov      byte ptr [rbx + 0x169], dl
2141d7 imul     rdx, rbp
2141db lea      rax, [rdi + rdi*4]
2141df add      rax, rax
2141e2 xor      rdx, rax
2141e5 xor      rdx, r14
2141e8 mov      rcx, rdx
2141eb xor      rcx, r11
2141ee lea      rax, [rdx + r11]
2141f2 test     sil, sil
2141f5 cmove    rax, rcx
2141f9 mov      qword ptr [rbx + 0x138], rax
214200 movzx    edx, byte ptr [rbx + 0x4ad]
214207 xor      rdx, qword ptr [rbx + 0x348]
21420e mov      r8d, 0x7a1b
214214 mov      rcx, rbx
214217 call     0x1401f1520
21421c mov      r8, qword ptr [rbx + 0x348]
214223 mov      rax, r8
214226 xor      rax, qword ptr [rbx + 0x20]
21422a mov      rcx, rax
21422d shr      rcx, 0x21
214231 xor      rcx, rax
214234 movabs   rsi, 0xff51afd7ed558ccd
21423e imul     rcx, rsi
214242 mov      rax, rcx
214245 shr      rax, 0x21
214249 xor      rax, rcx
21424c movabs   r14, 0xc4ceb9fe1a85ec53
214256 imul     rax, r14
21425a mov      rdx, rax
21425d shr      rdx, 0x21
214261 xor      edx, eax
214263 lea      eax, [rdx + 1]
214266 mov      ecx, edx
214268 imul     ecx, eax
21426b not      ecx
21426d xor      edx, eax
21426f and      ecx, edx
214271 test     cl, 1
214274 je       0x1402142db
214276 and      r8b, 3
21427a cmp      r8b, 1
21427e jne      0x1402142db
214280 mov      rax, qword ptr [rbx + 0x1b0]
214287 imul     rax, r12
21428b add      rax, r13
21428e mov      qword ptr [rbx + 0x1b0], rax
214295 inc      qword ptr [rbx + 0x1b8]
21429c shr      rax, 0x1b
2142a0 movzx    eax, al
2142a3 mov      byte ptr [rbx + 0x160], al
2142a9 imul     rax, qword ptr [rbx + 0xe0]
2142b1 xor      rax, qword ptr [rbx + 0xd0]
2142b8 xor      rax, qword ptr [rbx + 0xd8]
2142bf mov      rcx, rax
2142c2 xor      rcx, 0x116fdf
2142c9 add      rax, 0x116fdf
2142cf cmp      byte ptr [rbx + 0xe8], 0
2142d6 jmp      0x1402148f1
2142db mov      rcx, rbx
2142de call     0x1401ee070
2142e3 mov      edi, eax
2142e5 cmp      eax, dword ptr [rbx + 0x1d8]
2142eb jb       0x140214348
2142ed mov      rax, qword ptr [rbx + 0x1b0]
2142f4 imul     rax, r12
2142f8 add      rax, r13
2142fb mov      qword ptr [rbx + 0x1b0], rax
214302 inc      qword ptr [rbx + 0x1b8]
214309 shr      rax, 0x1b
21430d movzx    eax, al
214310 mov      byte ptr [rbx + 0x160], al
214316 imul     rax, qword ptr [rbx + 0xe0]
21431e xor      rax, qword ptr [rbx + 0xd0]
214325 xor      rax, qword ptr [rbx + 0xd8]
21432c mov      rcx, rax
21432f xor      rcx, 0xfe1ab
214336 add      rax, 0xfe1ab
21433c cmp      byte ptr [rbx + 0xe8], 0
214343 jmp      0x1402148f1
214348 mov      edx, edi
21434a mov      rcx, rbx
21434d call     0x1401f25b0
214352 mov      r8, qword ptr [rbx + 0x20]
214356 movsxd   r9, dword ptr [rbx + 0x11e0]
21435d mov      rdx, r9
214360 imul     rdx, r12
214364 xor      rdx, qword ptr [rbx + 0x260]
21436b mov      rcx, r8
21436e rol      rcx, 0x11
214372 movabs   r10, 0xd6e8feb86659fd93
21437c mov      rax, rdi
21437f imul     rax, r10
214383 xor      rax, rdx
214386 xor      rax, rcx
214389 mov      rcx, rax
21438c shr      rcx, 0x21
214390 xor      rcx, rax
214393 imul     rcx, rsi
214397 mov      rdx, rcx
21439a shr      rdx, 0x21
21439e xor      rdx, rcx
2143a1 imul     rdx, r14
2143a5 mov      rax, rdx
2143a8 shr      rax, 0x21
2143ac xor      rax, rdx
2143af mov      r10, rax
2143b2 shr      r10, 0x1d
2143b6 xor      r10, rax
2143b9 or       r10, 1
2143bd mov      qword ptr [rbx + 0x260], r10
2143c4 mov      rax, r10
2143c7 and      eax, 0x3ff
2143cc cmp      rax, 0x2c5
2143d2 jne      0x1402143ee
2143d4 mov      rcx, rbx
2143d7 call     0x1402297e0
2143dc mov      r8, qword ptr [rbx + 0x20]
2143e0 mov      r9d, dword ptr [rbx + 0x11e0]
2143e7 mov      r10, qword ptr [rbx + 0x260]
2143ee movzx    eax, r10b
2143f2 and      al, 0x1f
2143f4 cmp      al, 0x15
2143f6 jne      0x1402144dc
2143fc movsxd   rcx, r9d
2143ff xor      rcx, 0x5a5a
214406 imul     rcx, r12
21440a xor      rcx, r10
21440d rol      r8, 0x11
214411 xor      rcx, r8
214414 movabs   rax, 0x8f70feda99a6026d
21441e xor      rcx, rax
214421 mov      rax, rcx
214424 shr      rax, 0x21
214428 xor      rax, rcx
21442b imul     rax, rsi
21442f mov      rcx, rax
214432 shr      rcx, 0x21
214436 xor      rcx, rax
214439 imul     rcx, r14
21443d mov      rax, rcx
214440 shr      rax, 0x21
214444 xor      rax, rcx
214447 mov      r9, rax
21444a shr      r9, 0x1d
21444e xor      r9, rax
214451 or       r9, 1
214455 mov      rax, r9
214458 shr      rax, 8
21445c and      eax, 3
21445f imul     r8, rax, 0x3e
214463 mov      rcx, r9
214466 shr      rcx, 0x28
21446a mov      eax, 0x8421085
21446f mul      ecx
214471 mov      eax, ecx
214473 sub      eax, edx
214475 shr      eax, 1
214477 add      eax, edx
214479 shr      eax, 5
21447c imul     eax, eax, 0x3e
21447f sub      ecx, eax
214481 mov      eax, ecx
214483 add      r8, rax
214486 mov      rax, qword ptr [rbx + 0x4b8]
21448d movsxd   rcx, dword ptr [rax + r8*4]
214491 movsxd   rax, dword ptr [rbx + 0x4c8]
214498 xor      rcx, rax
21449b add      rcx, qword ptr [rbx + 0x4c0]
2144a2 xor      rcx, r9
2144a5 mov      rax, rcx
2144a8 shr      rax, 0x21
2144ac xor      rax, rcx
2144af imul     rax, rsi
2144b3 mov      rcx, rax
2144b6 shr      rcx, 0x21
2144ba xor      rcx, rax
2144bd imul     rcx, r14
2144c1 mov      rax, rcx
2144c4 shr      rax, 0x21
2144c8 xor      rax, rcx
2144cb xor      rax, r10
2144ce mov      qword ptr [rbx + 0x260], rax
2144d5 inc      qword ptr [rbx + 0x268]
2144dc inc      dword ptr [rbx + 0x200]
2144e2 mov      eax, dword ptr [rbx + 0x200]
2144e8 cmp      eax, dword ptr [rbx + 0x1fc]
2144ee jb       0x140214502
2144f0 mov      dword ptr [rbx + 0x200], 0
2144fa mov      rcx, rbx
2144fd call     0x1401ef7c0
214502 mov      r8d, edi
214505 mov      edx, edi
214507 mov      rcx, rbx
21450a call     0x1401f0660
21450f mov      r9, qword ptr [rbx + 0x1b0]
214516 imul     r9, r12
21451a add      r9, r13
21451d mov      qword ptr [rbx + 0x1b0], r9
214524 inc      qword ptr [rbx + 0x1b8]
21452b mov      r12, qword ptr [rbx + 0x1b8]
214532 mov      rax, r9
214535 shr      rax, 0x1b
214539 movzx    edx, al
21453c mov      byte ptr [rbx + 0x168], dl
214542 mov      r11, qword ptr [rbx + 0xe0]
214549 mov      r10, qword ptr [rbx + 0xd8]
214550 mov      rsi, qword ptr [rbx + 0xd0]
214557 imul     rdx, r11
21455b lea      rax, [r10 + r10*8]
21455f xor      rdx, rax
214562 xor      rdx, rsi
214565 movzx    r14d, byte ptr [rbx + 0xe8]
21456d mov      rcx, rdx
214570 xor      rcx, rdi
214573 lea      rax, [rdx + rdi]
214577 test     r14b, r14b
21457a cmove    rax, rcx
21457e mov      qword ptr [rbx + 0x130], rax
214585 mov      rcx, qword ptr [rbx + 0x1d0]
21458c mov      rax, qword ptr [rbx + 0x48]
214590 movzx    r8d, byte ptr [rcx + rdi]
214595 xor      r8b, byte ptr [rax + rdi]
214599 lea      r13d, [rdi + 1]
21459d movabs   rax, 0x9e3779b97f4a7c15
2145a7 imul     r9, rax
2145ab movabs   rax, 0x2545f4914f6cdd1d
2145b5 add      r9, rax
2145b8 inc      r12
2145bb mov      qword ptr [rsp + 0x28], r12
2145c0 mov      qword ptr [rbx + 0x1b8], r12
2145c7 mov      rax, r9
2145ca shr      rax, 0x1b
2145ce movzx    edx, al
2145d1 mov      byte ptr [rbx + 0x161], dl
2145d7 imul     rdx, r11
2145db lea      rax, [r10 + r10]
2145df xor      rdx, rax
2145e2 xor      rdx, rsi
2145e5 mov      rcx, rdx
2145e8 xor      rcx, r13
2145eb lea      rax, [rdx + r13]
2145ef test     r14b, r14b
2145f2 cmove    rax, rcx
2145f6 mov      qword ptr [rbx + 0xf8], rax
2145fd movsxd   rdx, dword ptr [rbx + 0x11e0]
214604 mov      r12, qword ptr [rbx + 0x20]
214608 mov      rcx, rdx
21460b xor      rcx, qword ptr [rbx + 0x350]
214612 xor      rcx, r13
214615 xor      rcx, qword ptr [rbx + 0x348]
21461c xor      rcx, r12
21461f mov      rax, rcx
214622 shr      rax, 0x21
214626 xor      rax, rcx
214629 movabs   rbp, 0xff51afd7ed558ccd
214633 imul     rax, rbp
214637 mov      rcx, rax
21463a shr      rcx, 0x21
21463e xor      rcx, rax
214641 movabs   rax, 0xc4ceb9fe1a85ec53
21464b imul     rcx, rax
21464f mov      rdi, rcx
214652 shr      rdi, 0x21
214656 xor      rdi, rcx
214659 mov      qword ptr [rbx + 0x28], rdi
21465d movzx    eax, r8b
214661 xor      rax, 0xdd
214667 lea      rcx, [rip - 0x21466e]
21466e movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
214676 xor      bpl, 0x63
21467a inc      edx
21467c mov      dword ptr [rbx + 0x11e0], edx
214682 test     dl, 0x1f
214685 jne      0x1402146d5
214687 movsxd   rax, edx
21468a xor      rax, qword ptr [rbx + 0x348]
214691 xor      rax, r12
214694 mov      rcx, rax
214697 shr      rcx, 0x21
21469b xor      rcx, rax
21469e movabs   rax, 0xff51afd7ed558ccd
2146a8 imul     rcx, rax
2146ac mov      rdx, rcx
2146af shr      rdx, 0x21
2146b3 xor      rdx, rcx
2146b6 movabs   rax, 0xc4ceb9fe1a85ec53
2146c0 imul     rdx, rax
2146c4 mov      rax, rdx
2146c7 shr      rax, 0x21
2146cb xor      rax, rdx
2146ce mov      qword ptr [rbx + 0x348], rax
2146d5 movzx    r8d, bpl
2146d9 mov      eax, r8d
2146dc xor      rax, r13
2146df xor      rax, r12
2146e2 mov      rcx, rax
2146e5 shr      rcx, 0x21
2146e9 xor      rcx, rax
2146ec movabs   r13, 0xff51afd7ed558ccd
2146f6 imul     rcx, r13
2146fa mov      rdx, rcx
2146fd shr      rdx, 0x21
214701 xor      rdx, rcx
214704 movabs   rax, 0xc4ceb9fe1a85ec53
21470e imul     rdx, rax
214712 mov      rax, rdx
214715 shr      rax, 0x21
214719 xor      rax, rdx
21471c mov      qword ptr [rbx + 0x20], rax
214720 mov      byte ptr [rbx + 0x4ad], bpl
214727 mov      ecx, dword ptr [rbx + 0x1178]
21472d movabs   rax, 0xd6e8feb86659fd93
214737 imul     rcx, rax
21473b movabs   r12, 0x9e3779b97f4a7c15
214745 imul     r8, r12
214749 xor      rcx, r8
21474c xor      rcx, rdi
21474f mov      rax, rcx
214752 shr      rax, 0x21
214756 xor      rax, rcx
214759 imul     rax, r13
21475d mov      rdx, rax
214760 shr      rdx, 0x21
214764 xor      rdx, rax
214767 movabs   rax, 0xc4ceb9fe1a85ec53
214771 imul     rdx, rax
214775 shr      rdx, 0x21
214779 and      edx, 3
21477c imul     r9, r12
214780 movabs   rdi, 0x2545f4914f6cdd1d
21478a add      r9, rdi
21478d mov      rax, qword ptr [rsp + 0x28]
214792 inc      rax
214795 mov      qword ptr [rbx + 0x1b8], rax
21479c cmp      bpl, 0x3e
2147a0 jae      0x140214839
2147a6 inc      qword ptr [rbx + 0x11a0]
2147ad mov      edi, edx
2147af lea      rax, [rip - 0x2147b6]
2147b6 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
2147be mov      qword ptr [rbx + 0x1b0], r9
2147c5 shr      r9, 0x1b
2147c9 movzx    eax, r9b
2147cd mov      byte ptr [rbx + 0x160], al
2147d3 imul     rax, r11
2147d7 xor      rax, rsi
2147da xor      rax, r10
2147dd mov      rcx, rax
2147e0 xor      rcx, r8
2147e3 add      rax, r8
2147e6 test     r14b, r14b
2147e9 cmove    rax, rcx
2147ed mov      qword ptr [rbx + 0xf0], rax
2147f4 movzx    r8d, bpl
2147f8 mov      rcx, rbx
2147fb call     0x1401f1f50
214800 lea      edx, [r15 - 1]
214804 imul     rcx, rdi, 0x3e
214808 mov      eax, eax
21480a add      rcx, rax
21480d mov      rax, qword ptr [rbx + 0x4b8]
214814 movsxd   r9, dword ptr [rax + rcx*4]
214818 movsxd   rax, dword ptr [rbx + 0x4c8]
21481f xor      r9, rax
214822 add      r9, qword ptr [rbx + 0x4c0]
214829 mov      r8, qword ptr [rsp + 0x40]
21482e mov      rcx, rbx
214831 call     r9
214834 jmp      0x1402148fc
214839 inc      dword ptr [rbx + 0x11a8]
21483f mov      rax, r9
214842 shr      rax, 0x1b
214846 movzx    ecx, al
214849 mov      byte ptr [rbx + 0x163], cl
21484f imul     rcx, r11
214853 lea      rax, [r10*4]
21485b xor      rcx, rax
21485e xor      rcx, rsi
214861 mov      qword ptr [rbx + 0x108], rcx
214868 imul     r9, r12
21486c add      r9, rdi
21486f mov      r8, qword ptr [rbx + 0x1b8]
214876 mov      rax, r9
214879 shr      rax, 0x1b
21487d movzx    edx, al
214880 mov      byte ptr [rbx + 0x16a], dl
214886 imul     rdx, r11
21488a imul     rax, r10, 0xb
21488e xor      rdx, rax
214891 xor      rdx, rsi
214894 mov      rcx, rdx
214897 xor      rcx, 1
21489b lea      rax, [rdx + 1]
21489f test     r14b, r14b
2148a2 cmove    rax, rcx
2148a6 mov      qword ptr [rbx + 0x140], rax
2148ad imul     r9, r12
2148b1 add      r9, rdi
2148b4 mov      qword ptr [rbx + 0x1b0], r9
2148bb lea      rax, [r8 + 2]
2148bf mov      qword ptr [rbx + 0x1b8], rax
2148c6 shr      r9, 0x1b
2148ca movzx    eax, r9b
2148ce mov      byte ptr [rbx + 0x160], al
2148d4 imul     rax, r11
2148d8 xor      rax, rsi
2148db xor      rax, r10
2148de mov      rcx, rax
2148e1 xor      rcx, 0xfe1ab
2148e8 add      rax, 0xfe1ab
2148ee test     r14b, r14b
2148f1 cmove    rax, rcx
2148f5 mov      qword ptr [rbx + 0xf0], rax
2148fc mov      rcx, qword ptr [rsp + 0x150]
214904 xor      rcx, rsp
214907 call     0x1403a3dc0
21490c mov      rbx, qword ptr [rsp + 0x1b8]
214914 add      rsp, 0x160
21491b pop      r15
21491d pop      r14
21491f pop      r13
214921 pop      r12
214923 pop      rdi
214924 pop      rsi
214925 pop      rbp
214926 ret      
214927 mov      edx, 0x43414e59
21492c mov      rcx, rbx
21492f call     0x1401ed830
214934 nop      
214935 call     0x1403a17cc
21493a nop      
21493b mov      edx, 0x54485254
214940 mov      rcx, rbx
214943 call     0x1401ed830
214948 int3     
