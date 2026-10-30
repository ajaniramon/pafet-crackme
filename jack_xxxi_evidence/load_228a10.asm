228a10 push     r12
228a12 push     r13
228a14 push     r14
228a16 sub      rsp, 0x40
228a1a movsxd   rax, dword ptr [rcx + 0x11e0]
228a21 mov      r14, rcx
228a24 mov      r13d, edx
228a27 movabs   rcx, 0xacbb8020808b8fca
228a31 imul     rax, rcx
228a35 movabs   rcx, 0xee20aeb01550bf5
228a3f mov      r12, r8
228a42 xor      rax, qword ptr [r14 + 0x28]
228a46 mov      qword ptr [rsp + 0x60], rax
228a4b mov      rax, qword ptr [rsp + 0x60]
228a50 movsxd   rax, dword ptr [r14 + 0x11e0]
228a57 imul     rax, rcx
228a5b movabs   rcx, 0xe82a94b5821e87e0
228a65 xor      rax, qword ptr [r14 + 0x28]
228a69 mov      qword ptr [rsp + 0x60], rax
228a6e mov      rax, qword ptr [rsp + 0x60]
228a73 movsxd   rax, dword ptr [r14 + 0x11e0]
228a7a imul     rax, rcx
228a7e movabs   rcx, 0x3eeb83a50a651ba5
228a88 xor      rax, qword ptr [r14 + 0x28]
228a8c mov      qword ptr [rsp + 0x60], rax
228a91 mov      rax, qword ptr [rsp + 0x60]
228a96 mov      rax, qword ptr [r14 + 0x2f8]
228a9d mov      rax, qword ptr [r14 + 0x2f8]
228aa4 add      rax, rcx
228aa7 mov      rcx, rax
228aaa shr      rcx, 0x21
228aae xor      rcx, rax
228ab1 movabs   rax, 0xff51afd7ed558ccd
228abb imul     rcx, rax
228abf movabs   rax, 0xc4ceb9fe1a85ec53
228ac9 mov      rdx, rcx
228acc shr      rdx, 0x21
228ad0 xor      rdx, rcx
228ad3 mov      rcx, r14
228ad6 imul     rdx, rax
228ada mov      rax, rdx
228add shr      rax, 0x21
228ae1 xor      rdx, rax
228ae4 mov      rax, qword ptr [r14 + 0x2f8]
228aeb shr      rax, 3
228aef xor      rax, rdx
228af2 mov      qword ptr [r14 + 0x2f8], rax
228af9 call     0x1401f1d80
228afe mov      edx, eax
228b00 mov      rcx, r14
228b03 call     0x1401ee650
228b08 mov      rdx, rax
228b0b mov      rcx, r14
228b0e call     0x1401ee820
228b13 mov      rax, qword ptr [r14 + 0x2f8]
228b1a test     r13d, r13d
228b1d jns      0x1402296be
228b23 cmp      qword ptr [r14 + 0x11b8], r12
228b2a jne      0x1402296cc
228b30 movsxd   rax, dword ptr [r14 + 0x11e0]
228b37 movabs   rcx, 0x461d232120b751e7
228b41 imul     rax, rcx
228b45 mov      rcx, r14
228b48 xor      rax, qword ptr [r14 + 0x28]
228b4c mov      qword ptr [rsp + 0x60], rax
228b51 mov      rax, qword ptr [rsp + 0x60]
228b56 call     0x1401ee450
228b5b test     eax, eax
228b5d jne      0x1402296b3
228b63 cmp      dword ptr [r14 + 0xad0], eax
228b6a jne      0x1402296b3
228b70 mov      r8, qword ptr [r14 + 0xf0]
228b77 movzx    ecx, byte ptr [r14 + 0x160]
228b7f mov      rax, r8
228b82 mov      r10, qword ptr [r14 + 0xe0]
228b89 mov      r11, qword ptr [r14 + 0xd8]
228b90 mov      r9, qword ptr [r14 + 0x1b0]
228b97 imul     rcx, r10
228b9b mov      qword ptr [rsp + 0x68], rbx
228ba0 mov      rbx, qword ptr [r14 + 0xd0]
228ba7 xor      rcx, rbx
228baa mov      qword ptr [rsp + 0x38], rbp
228baf xor      rcx, r11
228bb2 mov      qword ptr [rsp + 0x30], rsi
228bb7 mov      rsi, qword ptr [r14 + 0x1b8]
228bbe xor      rax, rcx
228bc1 sub      r8, rcx
228bc4 mov      qword ptr [rsp + 0x28], rdi
228bc9 movzx    edi, byte ptr [r14 + 0xe8]
228bd1 movabs   rbp, 0x2545f4914f6cdd1d
228bdb test     dil, dil
228bde mov      qword ptr [rsp + 0x20], r15
228be3 movabs   r15, 0x9e3779b97f4a7c15
228bed cmove    r8, rax
228bf1 inc      rsi
228bf4 imul     r9, r15
228bf8 mov      qword ptr [r14 + 0x1b8], rsi
228bff mov      rcx, r8
228c02 add      r9, rbp
228c05 mov      qword ptr [r14 + 0x1b0], r9
228c0c mov      rax, r9
228c0f shr      rax, 0x1b
228c13 movzx    edx, al
228c16 mov      byte ptr [r14 + 0x160], dl
228c1d imul     rdx, r10
228c21 xor      rdx, rbx
228c24 xor      rdx, r11
228c27 xor      rcx, rdx
228c2a test     dil, dil
228c2d lea      rax, [r8 + rdx]
228c31 cmove    rax, rcx
228c35 mov      qword ptr [r14 + 0xf0], rax
228c3c cmp      r8d, 0x2a0025
228c43 jne      0x14022969a
228c49 mov      eax, r13d
228c4c btr      eax, 0x1f
228c50 cmp      eax, 2
228c53 jae      0x140228c9f
228c55 imul     r9, r15
228c59 lea      rax, [rsi + 1]
228c5d mov      qword ptr [r14 + 0x1b8], rax
228c64 add      r9, rbp
228c67 mov      qword ptr [r14 + 0x1b0], r9
228c6e shr      r9, 0x1b
228c72 movzx    eax, r9b
228c76 mov      byte ptr [r14 + 0x160], al
228c7d imul     rax, r10
228c81 xor      rax, rbx
228c84 xor      rax, r11
228c87 mov      rcx, rax
228c8a add      rax, 0x85b36
228c90 xor      rcx, 0x85b36
228c97 test     dil, dil
228c9a jmp      0x14022968f
228c9f mov      rcx, r14
228ca2 call     0x1401ee070
228ca7 movzx    ecx, byte ptr [r14 + 0x4ad]
228caf movabs   rbx, 0xff51afd7ed558ccd
228cb9 mov      r11, qword ptr [r14 + 0xe0]
228cc0 movabs   r8, 0xc4ceb9fe1a85ec53
228cca mov      r10, qword ptr [r14 + 0xd0]
228cd1 movzx    r9d, byte ptr [r14 + 0xe8]
228cd9 mov      eax, eax
228cdb xor      rcx, rax
228cde xor      rcx, qword ptr [r14 + 0x11e8]
228ce5 mov      rax, rcx
228ce8 shr      rax, 0x21
228cec xor      rax, rcx
228cef imul     rax, rbx
228cf3 mov      rcx, rax
228cf6 shr      rcx, 0x21
228cfa xor      rcx, rax
228cfd imul     rcx, r8
228d01 mov      rdx, rcx
228d04 shr      rdx, 0x21
228d08 xor      rdx, rcx
228d0b mov      qword ptr [r14 + 0x11e8], rdx
228d12 xor      rdx, qword ptr [r14 + 0x28]
228d16 xor      rdx, qword ptr [r14 + 0x20]
228d1a mov      rax, rdx
228d1d shr      rax, 0x21
228d21 xor      rax, rdx
228d24 imul     rax, rbx
228d28 mov      rcx, rax
228d2b shr      rcx, 0x21
228d2f xor      rcx, rax
228d32 imul     rcx, r8
228d36 mov      rax, rcx
228d39 shr      rax, 0x21
228d3d xor      rax, rcx
228d40 mov      qword ptr [r14 + 0x20], rax
228d44 mov      rdx, qword ptr [r14 + 0x138]
228d4b movzx    ecx, byte ptr [r14 + 0x169]
228d53 mov      rax, qword ptr [r14 + 0xd8]
228d5a imul     rcx, r11
228d5e lea      rbx, [rax + rax*4]
228d62 mov      rax, rdx
228d65 add      rbx, rbx
228d68 xor      rcx, rbx
228d6b xor      rcx, r10
228d6e xor      rax, rcx
228d71 sub      rdx, rcx
228d74 test     r9b, r9b
228d77 cmove    rdx, rax
228d7b mov      rax, qword ptr [r14 + 0x1b0]
228d82 inc      qword ptr [r14 + 0x1b8]
228d89 imul     rax, r15
228d8d add      rax, rbp
228d90 mov      qword ptr [r14 + 0x1b0], rax
228d97 shr      rax, 0x1b
228d9b movzx    r8d, al
228d9f mov      byte ptr [r14 + 0x169], r8b
228da6 imul     r8, r11
228daa xor      r8, rbx
228dad xor      r8, r10
228db0 mov      rcx, r8
228db3 xor      rcx, rdx
228db6 test     r9b, r9b
228db9 lea      rax, [r8 + rdx]
228dbd cmove    rax, rcx
228dc1 mov      rcx, r14
228dc4 mov      qword ptr [r14 + 0x138], rax
228dcb call     0x1401f0910
228dd0 mov      rax, qword ptr [r14 + 0xd8]
228dd7 mov      r10, qword ptr [r14 + 0xe0]
228dde movzx    ecx, byte ptr [r14 + 0x168]
228de6 mov      rbx, qword ptr [r14 + 0xd0]
228ded mov      rdx, qword ptr [r14 + 0x130]
228df4 lea      r11, [rax + rax*8]
228df8 movzx    r9d, byte ptr [r14 + 0xe8]
228e00 mov      rax, rdx
228e03 imul     rcx, r10
228e07 xor      rcx, r11
228e0a xor      rcx, rbx
228e0d xor      rax, rcx
228e10 sub      rdx, rcx
228e13 test     r9b, r9b
228e16 cmove    rdx, rax
228e1a mov      rax, qword ptr [r14 + 0x1b0]
228e21 inc      qword ptr [r14 + 0x1b8]
228e28 mov      rcx, rdx
228e2b imul     rax, r15
228e2f add      rax, rbp
228e32 mov      qword ptr [r14 + 0x1b0], rax
228e39 shr      rax, 0x1b
228e3d movzx    r8d, al
228e41 mov      byte ptr [r14 + 0x168], r8b
228e48 imul     r8, r10
228e4c xor      r8, r11
228e4f xor      r8, rbx
228e52 xor      rcx, r8
228e55 test     r9b, r9b
228e58 lea      rax, [rdx + r8]
228e5c cmove    rax, rcx
228e60 mov      rcx, r14
228e63 mov      qword ptr [r14 + 0x130], rax
228e6a call     0x1401f0910
228e6f mov      rcx, r14
228e72 call     0x1401ee070
228e77 cmp      eax, dword ptr [r14 + 0x1d8]
228e7e jae      0x140228e8a
228e80 mov      edx, eax
228e82 mov      rcx, r14
228e85 call     0x1401f0910
228e8a mov      rsi, qword ptr [r14 + 0xe0]
228e91 mov      rbp, qword ptr [r14 + 0xd0]
228e98 mov      r11, qword ptr [r14 + 0x130]
228e9f movzx    edi, byte ptr [r14 + 0xe8]
228ea7 mov      rax, r11
228eaa movzx    ecx, byte ptr [r14 + 0x168]
228eb2 mov      rbx, qword ptr [r14 + 0xd8]
228eb9 mov      r8, qword ptr [r14 + 0x1b8]
228ec0 mov      r10, qword ptr [r14 + 0x1b0]
228ec7 imul     rcx, rsi
228ecb lea      r9, [rbx + rbx*8]
228ecf xor      rcx, r9
228ed2 xor      rcx, rbp
228ed5 xor      rax, rcx
228ed8 sub      r11, rcx
228edb test     dil, dil
228ede movabs   rcx, 0x2545f4914f6cdd1d
228ee8 cmove    r11, rax
228eec imul     r10, r15
228ef0 add      r10, rcx
228ef3 mov      rcx, r11
228ef6 mov      rax, r10
228ef9 shr      rax, 0x1b
228efd movzx    edx, al
228f00 mov      byte ptr [r14 + 0x168], dl
228f07 imul     rdx, rsi
228f0b xor      rdx, r9
228f0e xor      rdx, rbp
228f11 xor      rcx, rdx
228f14 test     dil, dil
228f17 lea      rax, [r11 + rdx]
228f1b cmove    rax, rcx
228f1f mov      rcx, r11
228f22 mov      qword ptr [r14 + 0x130], rax
228f29 movabs   rax, 0x2545f4914f6cdd1d
228f33 imul     r10, r15
228f37 add      r10, rax
228f3a lea      rax, [r8 + 2]
228f3e mov      qword ptr [r14 + 0x1b8], rax
228f45 mov      r8d, 0x6495
228f4b mov      qword ptr [r14 + 0x1b0], r10
228f52 lea      rax, [rbx + rbx*4]
228f56 add      rax, rax
228f59 shr      r10, 0x1b
228f5d movzx    edx, r10b
228f61 mov      byte ptr [r14 + 0x169], dl
228f68 imul     rdx, rsi
228f6c xor      rdx, rax
228f6f xor      rdx, rbp
228f72 xor      rcx, rdx
228f75 test     dil, dil
228f78 lea      rax, [r11 + rdx]
228f7c cmove    rax, rcx
228f80 mov      rcx, r14
228f83 mov      qword ptr [r14 + 0x138], rax
228f8a movzx    edx, byte ptr [r14 + 0x4ad]
228f92 xor      rdx, qword ptr [r14 + 0x348]
228f99 call     0x1401f1520
228f9e mov      r8, qword ptr [r14 + 0x348]
228fa5 movabs   rdi, 0xff51afd7ed558ccd
228faf mov      rax, r8
228fb2 movabs   rsi, 0xc4ceb9fe1a85ec53
228fbc xor      rax, qword ptr [r14 + 0x20]
228fc0 mov      rcx, rax
228fc3 shr      rcx, 0x21
228fc7 xor      rcx, rax
228fca imul     rcx, rdi
228fce mov      rax, rcx
228fd1 shr      rax, 0x21
228fd5 xor      rax, rcx
228fd8 imul     rax, rsi
228fdc mov      rdx, rax
228fdf shr      rdx, 0x21
228fe3 xor      edx, eax
228fe5 lea      eax, [rdx + 1]
228fe8 mov      ecx, eax
228fea xor      eax, edx
228fec imul     ecx, edx
228fef not      ecx
228ff1 and      ecx, eax
228ff3 test     cl, 1
228ff6 je       0x140229069
228ff8 and      r8b, 3
228ffc cmp      r8b, 1
229000 jne      0x140229069
229002 mov      rax, qword ptr [r14 + 0x1b0]
229009 movabs   rcx, 0x2545f4914f6cdd1d
229013 inc      qword ptr [r14 + 0x1b8]
22901a imul     rax, r15
22901e add      rax, rcx
229021 mov      qword ptr [r14 + 0x1b0], rax
229028 shr      rax, 0x1b
22902c movzx    eax, al
22902f mov      byte ptr [r14 + 0x160], al
229036 imul     rax, qword ptr [r14 + 0xe0]
22903e xor      rax, qword ptr [r14 + 0xd8]
229045 xor      rax, qword ptr [r14 + 0xd0]
22904c mov      rcx, rax
22904f add      rax, 0x3dd18f
229055 xor      rcx, 0x3dd18f
22905c cmp      byte ptr [r14 + 0xe8], 0
229064 jmp      0x14022968f
229069 mov      rcx, r14
22906c call     0x1401ee070
229071 mov      ebx, eax
229073 cmp      eax, dword ptr [r14 + 0x1d8]
22907a jb       0x1402290e3
22907c mov      rax, qword ptr [r14 + 0x1b0]
229083 movabs   rcx, 0x2545f4914f6cdd1d
22908d inc      qword ptr [r14 + 0x1b8]
229094 imul     rax, r15
229098 add      rax, rcx
22909b mov      qword ptr [r14 + 0x1b0], rax
2290a2 shr      rax, 0x1b
2290a6 movzx    eax, al
2290a9 mov      byte ptr [r14 + 0x160], al
2290b0 imul     rax, qword ptr [r14 + 0xe0]
2290b8 xor      rax, qword ptr [r14 + 0xd8]
2290bf xor      rax, qword ptr [r14 + 0xd0]
2290c6 mov      rcx, rax
2290c9 add      rax, 0xfe1ab
2290cf xor      rcx, 0xfe1ab
2290d6 cmp      byte ptr [r14 + 0xe8], 0
2290de jmp      0x14022968f
2290e3 mov      edx, ebx
2290e5 mov      rcx, r14
2290e8 call     0x1401f25b0
2290ed movsxd   rcx, dword ptr [r14 + 0x11e0]
2290f4 movabs   r8, 0xd6e8feb86659fd93
2290fe mov      rdx, qword ptr [r14 + 0x20]
229102 mov      rax, rbx
229105 imul     rax, r8
229109 imul     rcx, r15
22910d rol      rdx, 0x11
229111 xor      rax, rdx
229114 xor      rcx, qword ptr [r14 + 0x260]
22911b xor      rax, rcx
22911e mov      rcx, rax
229121 shr      rcx, 0x21
229125 xor      rcx, rax
229128 imul     rcx, rdi
22912c mov      rdx, rcx
22912f shr      rdx, 0x21
229133 xor      rdx, rcx
229136 imul     rdx, rsi
22913a mov      rax, rdx
22913d shr      rax, 0x21
229141 xor      rax, rdx
229144 mov      r10, rax
229147 shr      r10, 0x1d
22914b xor      r10, rax
22914e or       r10, 1
229152 mov      rax, r10
229155 mov      qword ptr [r14 + 0x260], r10
22915c and      eax, 0x3ff
229161 cmp      rax, 0x2c5
229167 jne      0x140229178
229169 mov      rcx, r14
22916c call     0x1402297e0
229171 mov      r10, qword ptr [r14 + 0x260]
229178 movzx    eax, r10b
22917c and      al, 0x1f
22917e cmp      al, 0x15
229180 jne      0x14022926d
229186 movsxd   rax, dword ptr [r14 + 0x11e0]
22918d xor      rax, 0x5a5a
229193 mov      rcx, qword ptr [r14 + 0x20]
229197 imul     rax, r15
22919b rol      rcx, 0x11
22919f xor      rax, r10
2291a2 xor      rcx, rax
2291a5 movabs   rax, 0x8f70feda99a6026d
2291af xor      rcx, rax
2291b2 mov      rax, rcx
2291b5 shr      rax, 0x21
2291b9 xor      rax, rcx
2291bc imul     rax, rdi
2291c0 mov      rcx, rax
2291c3 shr      rcx, 0x21
2291c7 xor      rcx, rax
2291ca imul     rcx, rsi
2291ce mov      rax, rcx
2291d1 shr      rax, 0x21
2291d5 xor      rax, rcx
2291d8 mov      r9, rax
2291db shr      r9, 0x1d
2291df xor      r9, rax
2291e2 or       r9, 1
2291e6 mov      rax, r9
2291e9 mov      rcx, r9
2291ec shr      rax, 8
2291f0 and      eax, 3
2291f3 shr      rcx, 0x28
2291f7 imul     r8, rax, 0x3e
2291fb mov      eax, 0x8421085
229200 mul      ecx
229202 mov      eax, ecx
229204 sub      eax, edx
229206 shr      eax, 1
229208 add      eax, edx
22920a shr      eax, 5
22920d imul     eax, eax, 0x3e
229210 sub      ecx, eax
229212 mov      eax, ecx
229214 add      r8, rax
229217 mov      rax, qword ptr [r14 + 0x4b8]
22921e movsxd   rcx, dword ptr [rax + r8*4]
229222 movsxd   rax, dword ptr [r14 + 0x4c8]
229229 xor      rcx, rax
22922c add      rcx, qword ptr [r14 + 0x4c0]
229233 xor      rcx, r9
229236 mov      rax, rcx
229239 shr      rax, 0x21
22923d xor      rax, rcx
229240 imul     rax, rdi
229244 mov      rcx, rax
229247 shr      rcx, 0x21
22924b xor      rcx, rax
22924e imul     rcx, rsi
229252 mov      rax, rcx
229255 shr      rax, 0x21
229259 xor      rax, rcx
22925c xor      rax, r10
22925f inc      qword ptr [r14 + 0x268]
229266 mov      qword ptr [r14 + 0x260], rax
22926d inc      dword ptr [r14 + 0x200]
229274 mov      eax, dword ptr [r14 + 0x200]
22927b cmp      eax, dword ptr [r14 + 0x1fc]
229282 jb       0x140229297
229284 mov      rcx, r14
229287 mov      dword ptr [r14 + 0x200], 0
229292 call     0x1401ef7c0
229297 mov      r8d, ebx
22929a mov      edx, ebx
22929c mov      rcx, r14
22929f call     0x1401f0660
2292a4 inc      qword ptr [r14 + 0x1b8]
2292ab movabs   rax, 0x2545f4914f6cdd1d
2292b5 mov      r9, qword ptr [r14 + 0x1b0]
2292bc mov      r10, qword ptr [r14 + 0x1b8]
2292c3 imul     r9, r15
2292c7 add      r9, rax
2292ca mov      qword ptr [r14 + 0x1b0], r9
2292d1 mov      rax, r9
2292d4 shr      rax, 0x1b
2292d8 movzx    edx, al
2292db mov      byte ptr [r14 + 0x168], dl
2292e2 mov      rdi, qword ptr [r14 + 0xe0]
2292e9 mov      r11, qword ptr [r14 + 0xd8]
2292f0 mov      rsi, qword ptr [r14 + 0xd0]
2292f7 movzx    r15d, byte ptr [r14 + 0xe8]
2292ff imul     rdx, rdi
229303 lea      rax, [r11 + r11*8]
229307 xor      rdx, rax
22930a xor      rdx, rsi
22930d mov      rcx, rdx
229310 xor      rcx, rbx
229313 test     r15b, r15b
229316 lea      rax, [rdx + rbx]
22931a cmove    rax, rcx
22931e inc      r10
229321 mov      qword ptr [r14 + 0x130], rax
229328 mov      rcx, qword ptr [r14 + 0x1d0]
22932f mov      rax, qword ptr [r14 + 0x48]
229333 mov      qword ptr [rsp + 0x78], r10
229338 movzx    r8d, byte ptr [rcx + rbx]
22933d xor      r8b, byte ptr [rax + rbx]
229341 inc      ebx
229343 mov      qword ptr [r14 + 0x1b8], r10
22934a movabs   rax, 0x9e3779b97f4a7c15
229354 imul     r9, rax
229358 mov      qword ptr [rsp + 0x60], rbx
22935d movabs   rax, 0x2545f4914f6cdd1d
229367 add      r9, rax
22936a mov      rax, r9
22936d shr      rax, 0x1b
229371 movzx    edx, al
229374 lea      rax, [r11 + r11]
229378 mov      byte ptr [r14 + 0x161], dl
22937f imul     rdx, rdi
229383 xor      rdx, rax
229386 xor      rdx, rsi
229389 mov      rcx, rdx
22938c xor      rcx, rbx
22938f test     r15b, r15b
229392 lea      rax, [rdx + rbx]
229396 cmove    rax, rcx
22939a mov      qword ptr [r14 + 0xf8], rax
2293a1 movsxd   rdx, dword ptr [r14 + 0x11e0]
2293a8 mov      r10, qword ptr [r14 + 0x20]
2293ac mov      rcx, rdx
2293af xor      rcx, qword ptr [r14 + 0x350]
2293b6 xor      rcx, r10
2293b9 xor      rcx, rbx
2293bc movabs   rbx, 0xff51afd7ed558ccd
2293c6 xor      rcx, qword ptr [r14 + 0x348]
2293cd mov      rax, rcx
2293d0 shr      rax, 0x21
2293d4 xor      rax, rcx
2293d7 imul     rax, rbx
2293db mov      rcx, rax
2293de shr      rcx, 0x21
2293e2 xor      rcx, rax
2293e5 movabs   rax, 0xc4ceb9fe1a85ec53
2293ef imul     rcx, rax
2293f3 movzx    eax, r8b
2293f7 mov      rbx, rcx
2293fa shr      rbx, 0x21
2293fe xor      rbx, rcx
229401 lea      rcx, [rip - 0x229408]
229408 xor      rax, 0xdd
22940e mov      qword ptr [r14 + 0x28], rbx
229412 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
22941a xor      bpl, 0x63
22941e movabs   r8, 0xff51afd7ed558ccd
229428 inc      edx
22942a mov      dword ptr [r14 + 0x11e0], edx
229431 test     dl, 0x1f
229434 jne      0x14022947a
229436 movsxd   rax, edx
229439 xor      rax, r10
22943c xor      rax, qword ptr [r14 + 0x348]
229443 mov      rcx, rax
229446 shr      rcx, 0x21
22944a xor      rcx, rax
22944d movabs   rax, 0xc4ceb9fe1a85ec53
229457 imul     rcx, r8
22945b mov      rdx, rcx
22945e shr      rdx, 0x21
229462 xor      rdx, rcx
229465 imul     rdx, rax
229469 mov      rax, rdx
22946c shr      rax, 0x21
229470 xor      rax, rdx
229473 mov      qword ptr [r14 + 0x348], rax
22947a movzx    edx, bpl
22947e xor      r10, rdx
229481 mov      byte ptr [r14 + 0x4ad], bpl
229488 xor      r10, qword ptr [rsp + 0x60]
22948d mov      rax, r10
229490 shr      rax, 0x21
229494 xor      rax, r10
229497 movabs   r10, 0x9e3779b97f4a7c15
2294a1 imul     rax, r8
2294a5 imul     rdx, r10
2294a9 imul     r9, r10
2294ad mov      rcx, rax
2294b0 shr      rcx, 0x21
2294b4 xor      rcx, rax
2294b7 movabs   rax, 0xc4ceb9fe1a85ec53
2294c1 imul     rcx, rax
2294c5 mov      rax, rcx
2294c8 shr      rax, 0x21
2294cc xor      rax, rcx
2294cf mov      ecx, dword ptr [r14 + 0x1178]
2294d6 mov      qword ptr [r14 + 0x20], rax
2294da movabs   rax, 0xd6e8feb86659fd93
2294e4 imul     rcx, rax
2294e8 xor      rcx, rdx
2294eb xor      rcx, rbx
2294ee movabs   rbx, 0x2545f4914f6cdd1d
2294f8 mov      rax, rcx
2294fb add      r9, rbx
2294fe shr      rax, 0x21
229502 xor      rax, rcx
229505 imul     rax, r8
229509 mov      rdx, rax
22950c shr      rdx, 0x21
229510 xor      rdx, rax
229513 movabs   rax, 0xc4ceb9fe1a85ec53
22951d imul     rdx, rax
229521 mov      rax, qword ptr [rsp + 0x78]
229526 shr      rdx, 0x21
22952a and      edx, 3
22952d inc      rax
229530 mov      qword ptr [r14 + 0x1b8], rax
229537 cmp      bpl, 0x3e
22953b jae      0x1402295d3
229541 inc      qword ptr [r14 + 0x11a0]
229548 lea      rax, [rip - 0x22954f]
22954f mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
229557 mov      qword ptr [r14 + 0x1b0], r9
22955e shr      r9, 0x1b
229562 movzx    eax, r9b
229566 mov      byte ptr [r14 + 0x160], al
22956d imul     rax, rdi
229571 mov      ebx, edx
229573 xor      rax, rsi
229576 xor      rax, r11
229579 mov      rcx, rax
22957c add      rax, r8
22957f xor      rcx, r8
229582 movzx    r8d, bpl
229586 test     r15b, r15b
229589 cmove    rax, rcx
22958d mov      rcx, r14
229590 mov      qword ptr [r14 + 0xf0], rax
229597 call     0x1401f1f50
22959c mov      eax, eax
22959e lea      edx, [r13 - 1]
2295a2 imul     rcx, rbx, 0x3e
2295a6 mov      r8, r12
2295a9 add      rcx, rax
2295ac mov      rax, qword ptr [r14 + 0x4b8]
2295b3 movsxd   r9, dword ptr [rax + rcx*4]
2295b7 mov      rcx, r14
2295ba movsxd   rax, dword ptr [r14 + 0x4c8]
2295c1 xor      r9, rax
2295c4 add      r9, qword ptr [r14 + 0x4c0]
2295cb call     r9
2295ce jmp      0x14022969a
2295d3 inc      dword ptr [r14 + 0x11a8]
2295da mov      rax, r9
2295dd shr      rax, 0x1b
2295e1 movzx    ecx, al
2295e4 lea      rax, [r11*4]
2295ec mov      byte ptr [r14 + 0x163], cl
2295f3 imul     rcx, rdi
2295f7 imul     r9, r10
2295fb xor      rcx, rax
2295fe xor      rcx, rsi
229601 mov      qword ptr [r14 + 0x108], rcx
229608 mov      r8, qword ptr [r14 + 0x1b8]
22960f add      r9, rbx
229612 mov      rax, r9
229615 shr      rax, 0x1b
229619 movzx    edx, al
22961c mov      byte ptr [r14 + 0x16a], dl
229623 imul     rax, r11, 0xb
229627 imul     rdx, rdi
22962b xor      rdx, rax
22962e xor      rdx, rsi
229631 mov      rcx, rdx
229634 xor      rcx, 1
229638 test     r15b, r15b
22963b lea      rax, [rdx + 1]
22963f cmove    rax, rcx
229643 mov      qword ptr [r14 + 0x140], rax
22964a lea      rax, [r8 + 2]
22964e mov      qword ptr [r14 + 0x1b8], rax
229655 imul     r9, r10
229659 add      r9, rbx
22965c mov      qword ptr [r14 + 0x1b0], r9
229663 shr      r9, 0x1b
229667 movzx    eax, r9b
22966b mov      byte ptr [r14 + 0x160], al
229672 imul     rax, rdi
229676 xor      rax, rsi
229679 xor      rax, r11
22967c mov      rcx, rax
22967f add      rax, 0xfe1ab
229685 xor      rcx, 0xfe1ab
22968c test     r15b, r15b
22968f cmove    rax, rcx
229693 mov      qword ptr [r14 + 0xf0], rax
22969a mov      rdi, qword ptr [rsp + 0x28]
22969f mov      rsi, qword ptr [rsp + 0x30]
2296a4 mov      rbp, qword ptr [rsp + 0x38]
2296a9 mov      rbx, qword ptr [rsp + 0x68]
2296ae mov      r15, qword ptr [rsp + 0x20]
2296b3 add      rsp, 0x40
2296b7 pop      r14
2296b9 pop      r13
2296bb pop      r12
2296bd ret      
2296be mov      edx, 0x54485254
2296c3 mov      rcx, r14
2296c6 call     0x1401ed830
2296cb int3     
2296cc mov      edx, 0x43414e59
2296d1 mov      rcx, r14
2296d4 call     0x1401ed830
2296d9 int3     
