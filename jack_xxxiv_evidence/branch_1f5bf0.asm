1f5bf0 push     rbx
1f5bf2 push     rdi
1f5bf3 push     r12
1f5bf5 push     r13
1f5bf7 push     r14
1f5bf9 sub      rsp, 0x40
1f5bfd movsxd   rax, dword ptr [rcx + 0x11e0]
1f5c04 mov      r14, rcx
1f5c07 mov      r13d, edx
1f5c0a movabs   rcx, 0x34a5a4cbb437c294
1f5c14 imul     rax, rcx
1f5c18 movabs   rcx, 0x96fc2e0035e946ab
1f5c22 mov      r12, r8
1f5c25 xor      rax, qword ptr [r14 + 0x28]
1f5c29 mov      qword ptr [rsp + 0x70], rax
1f5c2e mov      rax, qword ptr [rsp + 0x70]
1f5c33 movsxd   rax, dword ptr [r14 + 0x11e0]
1f5c3a imul     rax, rcx
1f5c3e movabs   rcx, 0x7034b05eb6a2cabe
1f5c48 xor      rax, qword ptr [r14 + 0x28]
1f5c4c mov      qword ptr [rsp + 0x70], rax
1f5c51 mov      rax, qword ptr [rsp + 0x70]
1f5c56 movsxd   rax, dword ptr [r14 + 0x11e0]
1f5c5d imul     rax, rcx
1f5c61 xor      rax, qword ptr [r14 + 0x28]
1f5c65 mov      qword ptr [rsp + 0x70], rax
1f5c6a mov      rax, qword ptr [rsp + 0x70]
1f5c6f mov      rax, qword ptr [r14 + 0x2e0]
1f5c76 shr      rax, 0xd
1f5c7a mov      rcx, rax
1f5c7d shr      rcx, 0x21
1f5c81 xor      rcx, rax
1f5c84 movabs   rax, 0xff51afd7ed558ccd
1f5c8e imul     rcx, rax
1f5c92 movabs   rax, 0xc4ceb9fe1a85ec53
1f5c9c mov      rdx, rcx
1f5c9f shr      rdx, 0x21
1f5ca3 xor      rdx, rcx
1f5ca6 imul     rdx, rax
1f5caa movabs   rax, 0x401f3812bcbadaba
1f5cb4 mov      rcx, rdx
1f5cb7 shr      rcx, 0x21
1f5cbb xor      rcx, rdx
1f5cbe xor      rcx, rax
1f5cc1 mov      rax, qword ptr [r14 + 0x2e0]
1f5cc8 add      rcx, rax
1f5ccb mov      qword ptr [r14 + 0x2e0], rcx
1f5cd2 mov      rcx, r14
1f5cd5 call     0x1401f1c70
1f5cda mov      rcx, r14
1f5cdd mov      ebx, eax
1f5cdf call     0x1401ee070
1f5ce4 mov      ecx, ebx
1f5ce6 mov      edi, eax
1f5ce8 call     0x1401ed270
1f5ced xor      r9d, r9d
1f5cf0 mov      dword ptr [rsp + 0x28], edi
1f5cf4 xor      edx, edx
1f5cf6 mov      dword ptr [rsp + 0x20], eax
1f5cfa mov      rcx, r14
1f5cfd lea      r8d, [r9 + 1]
1f5d01 call     0x1401f10a0
1f5d06 mov      rdx, rax
1f5d09 mov      rcx, r14
1f5d0c call     0x1401f0db0
1f5d11 mov      rax, qword ptr [r14 + 0x2e0]
1f5d18 test     r13d, r13d
1f5d1b jns      0x1401f68b0
1f5d21 cmp      qword ptr [r14 + 0x11b8], r12
1f5d28 jne      0x1401f68be
1f5d2e movsxd   rax, dword ptr [r14 + 0x11e0]
1f5d35 movabs   rcx, 0xd1caf8833d064f42
1f5d3f imul     rax, rcx
1f5d43 mov      rcx, r14
1f5d46 xor      rax, qword ptr [r14 + 0x28]
1f5d4a mov      qword ptr [rsp + 0x70], rax
1f5d4f mov      rax, qword ptr [rsp + 0x70]
1f5d54 call     0x1401ee450
1f5d59 test     eax, eax
1f5d5b jne      0x1401f68a3
1f5d61 cmp      dword ptr [r14 + 0xad0], eax
1f5d68 jne      0x1401f68a3
1f5d6e mov      r8, qword ptr [r14 + 0xf0]
1f5d75 movzx    ecx, byte ptr [r14 + 0x160]
1f5d7d mov      rax, r8
1f5d80 mov      r10, qword ptr [r14 + 0xe0]
1f5d87 mov      rbx, qword ptr [r14 + 0xd0]
1f5d8e mov      r11, qword ptr [r14 + 0xd8]
1f5d95 movzx    edi, byte ptr [r14 + 0xe8]
1f5d9d mov      r9, qword ptr [r14 + 0x1b0]
1f5da4 imul     rcx, r10
1f5da8 mov      qword ptr [rsp + 0x78], rbp
1f5dad movabs   rbp, 0x2545f4914f6cdd1d
1f5db7 xor      rcx, rbx
1f5dba mov      qword ptr [rsp + 0x38], rsi
1f5dbf mov      rsi, qword ptr [r14 + 0x1b8]
1f5dc6 xor      rcx, r11
1f5dc9 xor      rax, rcx
1f5dcc mov      qword ptr [rsp + 0x30], r15
1f5dd1 sub      r8, rcx
1f5dd4 movabs   r15, 0x9e3779b97f4a7c15
1f5dde test     dil, dil
1f5de1 cmove    r8, rax
1f5de5 inc      rsi
1f5de8 imul     r9, r15
1f5dec mov      qword ptr [r14 + 0x1b8], rsi
1f5df3 mov      rcx, r8
1f5df6 add      r9, rbp
1f5df9 mov      qword ptr [r14 + 0x1b0], r9
1f5e00 mov      rax, r9
1f5e03 shr      rax, 0x1b
1f5e07 movzx    edx, al
1f5e0a mov      byte ptr [r14 + 0x160], dl
1f5e11 imul     rdx, r10
1f5e15 xor      rdx, rbx
1f5e18 xor      rdx, r11
1f5e1b xor      rcx, rdx
1f5e1e test     dil, dil
1f5e21 lea      rax, [r8 + rdx]
1f5e25 cmove    rax, rcx
1f5e29 mov      qword ptr [r14 + 0xf0], rax
1f5e30 cmp      r8d, 0x26dc07
1f5e37 jne      0x1401f6894
1f5e3d mov      eax, r13d
1f5e40 btr      eax, 0x1f
1f5e44 cmp      eax, 2
1f5e47 jae      0x1401f5e93
1f5e49 imul     r9, r15
1f5e4d lea      rax, [rsi + 1]
1f5e51 mov      qword ptr [r14 + 0x1b8], rax
1f5e58 add      r9, rbp
1f5e5b mov      qword ptr [r14 + 0x1b0], r9
1f5e62 shr      r9, 0x1b
1f5e66 movzx    eax, r9b
1f5e6a mov      byte ptr [r14 + 0x160], al
1f5e71 imul     rax, r10
1f5e75 xor      rax, rbx
1f5e78 xor      rax, r11
1f5e7b mov      rcx, rax
1f5e7e add      rax, 0x3abaef
1f5e84 xor      rcx, 0x3abaef
1f5e8b test     dil, dil
1f5e8e jmp      0x1401f6889
1f5e93 mov      rcx, r14
1f5e96 call     0x1401ee070
1f5e9b movzx    ecx, byte ptr [r14 + 0x4ad]
1f5ea3 movabs   rbx, 0xff51afd7ed558ccd
1f5ead xor      rcx, qword ptr [r14 + 0x11e8]
1f5eb4 movabs   r8, 0xc4ceb9fe1a85ec53
1f5ebe mov      r11, qword ptr [r14 + 0xe0]
1f5ec5 mov      r10, qword ptr [r14 + 0xd0]
1f5ecc movzx    r9d, byte ptr [r14 + 0xe8]
1f5ed4 mov      eax, eax
1f5ed6 xor      rcx, rax
1f5ed9 mov      rax, rcx
1f5edc shr      rax, 0x21
1f5ee0 xor      rax, rcx
1f5ee3 imul     rax, rbx
1f5ee7 mov      rcx, rax
1f5eea shr      rcx, 0x21
1f5eee xor      rcx, rax
1f5ef1 imul     rcx, r8
1f5ef5 mov      rdx, rcx
1f5ef8 shr      rdx, 0x21
1f5efc xor      rdx, rcx
1f5eff mov      qword ptr [r14 + 0x11e8], rdx
1f5f06 xor      rdx, qword ptr [r14 + 0x28]
1f5f0a xor      rdx, qword ptr [r14 + 0x20]
1f5f0e mov      rax, rdx
1f5f11 shr      rax, 0x21
1f5f15 xor      rax, rdx
1f5f18 imul     rax, rbx
1f5f1c mov      rcx, rax
1f5f1f shr      rcx, 0x21
1f5f23 xor      rcx, rax
1f5f26 imul     rcx, r8
1f5f2a mov      rax, rcx
1f5f2d shr      rax, 0x21
1f5f31 xor      rax, rcx
1f5f34 mov      qword ptr [r14 + 0x20], rax
1f5f38 mov      rdx, qword ptr [r14 + 0x138]
1f5f3f movzx    ecx, byte ptr [r14 + 0x169]
1f5f47 mov      rax, qword ptr [r14 + 0xd8]
1f5f4e imul     rcx, r11
1f5f52 lea      rbx, [rax + rax*4]
1f5f56 mov      rax, rdx
1f5f59 add      rbx, rbx
1f5f5c xor      rcx, rbx
1f5f5f xor      rcx, r10
1f5f62 xor      rax, rcx
1f5f65 sub      rdx, rcx
1f5f68 test     r9b, r9b
1f5f6b cmove    rdx, rax
1f5f6f mov      rax, qword ptr [r14 + 0x1b0]
1f5f76 inc      qword ptr [r14 + 0x1b8]
1f5f7d mov      rcx, rdx
1f5f80 imul     rax, r15
1f5f84 add      rax, rbp
1f5f87 mov      qword ptr [r14 + 0x1b0], rax
1f5f8e shr      rax, 0x1b
1f5f92 movzx    r8d, al
1f5f96 mov      byte ptr [r14 + 0x169], r8b
1f5f9d imul     r8, r11
1f5fa1 xor      r8, rbx
1f5fa4 xor      r8, r10
1f5fa7 xor      rcx, r8
1f5faa test     r9b, r9b
1f5fad lea      rax, [rdx + r8]
1f5fb1 cmove    rax, rcx
1f5fb5 mov      rcx, r14
1f5fb8 mov      qword ptr [r14 + 0x138], rax
1f5fbf call     0x1401f0910
1f5fc4 mov      rax, qword ptr [r14 + 0xd8]
1f5fcb mov      r10, qword ptr [r14 + 0xe0]
1f5fd2 movzx    ecx, byte ptr [r14 + 0x168]
1f5fda mov      rbx, qword ptr [r14 + 0xd0]
1f5fe1 mov      rdx, qword ptr [r14 + 0x130]
1f5fe8 lea      r11, [rax + rax*8]
1f5fec movzx    r9d, byte ptr [r14 + 0xe8]
1f5ff4 mov      rax, rdx
1f5ff7 imul     rcx, r10
1f5ffb xor      rcx, r11
1f5ffe xor      rcx, rbx
1f6001 xor      rax, rcx
1f6004 sub      rdx, rcx
1f6007 test     r9b, r9b
1f600a cmove    rdx, rax
1f600e mov      rax, qword ptr [r14 + 0x1b0]
1f6015 inc      qword ptr [r14 + 0x1b8]
1f601c mov      rcx, rdx
1f601f imul     rax, r15
1f6023 add      rax, rbp
1f6026 mov      qword ptr [r14 + 0x1b0], rax
1f602d shr      rax, 0x1b
1f6031 movzx    r8d, al
1f6035 mov      byte ptr [r14 + 0x168], r8b
1f603c imul     r8, r10
1f6040 xor      r8, r11
1f6043 xor      r8, rbx
1f6046 xor      rcx, r8
1f6049 test     r9b, r9b
1f604c lea      rax, [rdx + r8]
1f6050 cmove    rax, rcx
1f6054 mov      rcx, r14
1f6057 mov      qword ptr [r14 + 0x130], rax
1f605e call     0x1401f0910
1f6063 mov      rcx, r14
1f6066 call     0x1401ee070
1f606b cmp      eax, dword ptr [r14 + 0x1d8]
1f6072 jae      0x1401f607e
1f6074 mov      edx, eax
1f6076 mov      rcx, r14
1f6079 call     0x1401f0910
1f607e mov      rsi, qword ptr [r14 + 0xe0]
1f6085 mov      rbp, qword ptr [r14 + 0xd0]
1f608c mov      r11, qword ptr [r14 + 0x130]
1f6093 movzx    edi, byte ptr [r14 + 0xe8]
1f609b mov      rax, r11
1f609e movzx    ecx, byte ptr [r14 + 0x168]
1f60a6 mov      rbx, qword ptr [r14 + 0xd8]
1f60ad mov      r8, qword ptr [r14 + 0x1b8]
1f60b4 mov      r10, qword ptr [r14 + 0x1b0]
1f60bb imul     rcx, rsi
1f60bf lea      r9, [rbx + rbx*8]
1f60c3 xor      rcx, r9
1f60c6 xor      rcx, rbp
1f60c9 xor      rax, rcx
1f60cc sub      r11, rcx
1f60cf test     dil, dil
1f60d2 movabs   rcx, 0x2545f4914f6cdd1d
1f60dc cmove    r11, rax
1f60e0 imul     r10, r15
1f60e4 add      r10, rcx
1f60e7 mov      rcx, r11
1f60ea mov      rax, r10
1f60ed shr      rax, 0x1b
1f60f1 movzx    edx, al
1f60f4 mov      byte ptr [r14 + 0x168], dl
1f60fb imul     rdx, rsi
1f60ff xor      rdx, r9
1f6102 xor      rdx, rbp
1f6105 xor      rcx, rdx
1f6108 test     dil, dil
1f610b lea      rax, [r11 + rdx]
1f610f cmove    rax, rcx
1f6113 mov      rcx, r11
1f6116 mov      qword ptr [r14 + 0x130], rax
1f611d movabs   rax, 0x2545f4914f6cdd1d
1f6127 imul     r10, r15
1f612b add      r10, rax
1f612e lea      rax, [r8 + 2]
1f6132 mov      qword ptr [r14 + 0x1b8], rax
1f6139 mov      r8d, 0xa96e
1f613f mov      qword ptr [r14 + 0x1b0], r10
1f6146 lea      rax, [rbx + rbx*4]
1f614a add      rax, rax
1f614d shr      r10, 0x1b
1f6151 movzx    edx, r10b
1f6155 mov      byte ptr [r14 + 0x169], dl
1f615c imul     rdx, rsi
1f6160 xor      rdx, rax
1f6163 xor      rdx, rbp
1f6166 xor      rcx, rdx
1f6169 test     dil, dil
1f616c lea      rax, [r11 + rdx]
1f6170 cmove    rax, rcx
1f6174 mov      rcx, r14
1f6177 mov      qword ptr [r14 + 0x138], rax
1f617e movzx    edx, byte ptr [r14 + 0x4ad]
1f6186 xor      rdx, qword ptr [r14 + 0x348]
1f618d call     0x1401f1520
1f6192 mov      r8, qword ptr [r14 + 0x348]
1f6199 movabs   rdi, 0xff51afd7ed558ccd
1f61a3 mov      rax, r8
1f61a6 movabs   rsi, 0xc4ceb9fe1a85ec53
1f61b0 xor      rax, qword ptr [r14 + 0x20]
1f61b4 mov      rcx, rax
1f61b7 shr      rcx, 0x21
1f61bb xor      rcx, rax
1f61be imul     rcx, rdi
1f61c2 mov      rax, rcx
1f61c5 shr      rax, 0x21
1f61c9 xor      rax, rcx
1f61cc imul     rax, rsi
1f61d0 mov      rdx, rax
1f61d3 shr      rdx, 0x21
1f61d7 xor      edx, eax
1f61d9 lea      eax, [rdx + 1]
1f61dc mov      ecx, eax
1f61de xor      eax, edx
1f61e0 imul     ecx, edx
1f61e3 not      ecx
1f61e5 and      ecx, eax
1f61e7 test     cl, 1
1f61ea je       0x1401f625d
1f61ec and      r8b, 3
1f61f0 cmp      r8b, 1
1f61f4 jne      0x1401f625d
1f61f6 mov      rax, qword ptr [r14 + 0x1b0]
1f61fd movabs   rcx, 0x2545f4914f6cdd1d
1f6207 inc      qword ptr [r14 + 0x1b8]
1f620e imul     rax, r15
1f6212 add      rax, rcx
1f6215 mov      qword ptr [r14 + 0x1b0], rax
1f621c shr      rax, 0x1b
1f6220 movzx    eax, al
1f6223 mov      byte ptr [r14 + 0x160], al
1f622a imul     rax, qword ptr [r14 + 0xe0]
1f6232 xor      rax, qword ptr [r14 + 0xd8]
1f6239 xor      rax, qword ptr [r14 + 0xd0]
1f6240 mov      rcx, rax
1f6243 add      rax, 0x17ed28
1f6249 xor      rcx, 0x17ed28
1f6250 cmp      byte ptr [r14 + 0xe8], 0
1f6258 jmp      0x1401f6889
1f625d mov      rcx, r14
1f6260 call     0x1401ee070
1f6265 mov      ebx, eax
1f6267 cmp      eax, dword ptr [r14 + 0x1d8]
1f626e jb       0x1401f62d7
1f6270 mov      rax, qword ptr [r14 + 0x1b0]
1f6277 movabs   rcx, 0x2545f4914f6cdd1d
1f6281 inc      qword ptr [r14 + 0x1b8]
1f6288 imul     rax, r15
1f628c add      rax, rcx
1f628f mov      qword ptr [r14 + 0x1b0], rax
1f6296 shr      rax, 0x1b
1f629a movzx    eax, al
1f629d mov      byte ptr [r14 + 0x160], al
1f62a4 imul     rax, qword ptr [r14 + 0xe0]
1f62ac xor      rax, qword ptr [r14 + 0xd8]
1f62b3 xor      rax, qword ptr [r14 + 0xd0]
1f62ba mov      rcx, rax
1f62bd add      rax, 0xfe1ab
1f62c3 xor      rcx, 0xfe1ab
1f62ca cmp      byte ptr [r14 + 0xe8], 0
1f62d2 jmp      0x1401f6889
1f62d7 mov      edx, ebx
1f62d9 mov      rcx, r14
1f62dc call     0x1401f25b0
1f62e1 movsxd   rcx, dword ptr [r14 + 0x11e0]
1f62e8 movabs   r8, 0xd6e8feb86659fd93
1f62f2 mov      rdx, qword ptr [r14 + 0x20]
1f62f6 mov      rax, rbx
1f62f9 imul     rax, r8
1f62fd imul     rcx, r15
1f6301 rol      rdx, 0x11
1f6305 xor      rax, rdx
1f6308 xor      rcx, qword ptr [r14 + 0x260]
1f630f xor      rax, rcx
1f6312 mov      rcx, rax
1f6315 shr      rcx, 0x21
1f6319 xor      rcx, rax
1f631c imul     rcx, rdi
1f6320 mov      rdx, rcx
1f6323 shr      rdx, 0x21
1f6327 xor      rdx, rcx
1f632a imul     rdx, rsi
1f632e mov      rax, rdx
1f6331 shr      rax, 0x21
1f6335 xor      rax, rdx
1f6338 mov      r10, rax
1f633b shr      r10, 0x1d
1f633f xor      r10, rax
1f6342 or       r10, 1
1f6346 mov      rax, r10
1f6349 mov      qword ptr [r14 + 0x260], r10
1f6350 and      eax, 0x3ff
1f6355 cmp      rax, 0x2c5
1f635b jne      0x1401f636c
1f635d mov      rcx, r14
1f6360 call     0x1402297e0
1f6365 mov      r10, qword ptr [r14 + 0x260]
1f636c movzx    eax, r10b
1f6370 and      al, 0x1f
1f6372 cmp      al, 0x15
1f6374 jne      0x1401f6461
1f637a movsxd   rax, dword ptr [r14 + 0x11e0]
1f6381 xor      rax, 0x5a5a
1f6387 mov      rcx, qword ptr [r14 + 0x20]
1f638b imul     rax, r15
1f638f rol      rcx, 0x11
1f6393 xor      rax, r10
1f6396 xor      rcx, rax
1f6399 movabs   rax, 0x8f70feda99a6026d
1f63a3 xor      rcx, rax
1f63a6 mov      rax, rcx
1f63a9 shr      rax, 0x21
1f63ad xor      rax, rcx
1f63b0 imul     rax, rdi
1f63b4 mov      rcx, rax
1f63b7 shr      rcx, 0x21
1f63bb xor      rcx, rax
1f63be imul     rcx, rsi
1f63c2 mov      rax, rcx
1f63c5 shr      rax, 0x21
1f63c9 xor      rax, rcx
1f63cc mov      r9, rax
1f63cf shr      r9, 0x1d
1f63d3 xor      r9, rax
1f63d6 or       r9, 1
1f63da mov      rax, r9
1f63dd mov      rcx, r9
1f63e0 shr      rax, 8
1f63e4 and      eax, 3
1f63e7 shr      rcx, 0x28
1f63eb imul     r8, rax, 0x3e
1f63ef mov      eax, 0x8421085
1f63f4 mul      ecx
1f63f6 mov      eax, ecx
1f63f8 sub      eax, edx
1f63fa shr      eax, 1
1f63fc add      eax, edx
1f63fe shr      eax, 5
1f6401 imul     eax, eax, 0x3e
1f6404 sub      ecx, eax
1f6406 mov      eax, ecx
1f6408 add      r8, rax
1f640b mov      rax, qword ptr [r14 + 0x4b8]
1f6412 movsxd   rcx, dword ptr [rax + r8*4]
1f6416 movsxd   rax, dword ptr [r14 + 0x4c8]
1f641d xor      rcx, rax
1f6420 add      rcx, qword ptr [r14 + 0x4c0]
1f6427 xor      rcx, r9
1f642a mov      rax, rcx
1f642d shr      rax, 0x21
1f6431 xor      rax, rcx
1f6434 imul     rax, rdi
1f6438 mov      rcx, rax
1f643b shr      rcx, 0x21
1f643f xor      rcx, rax
1f6442 imul     rcx, rsi
1f6446 mov      rax, rcx
1f6449 shr      rax, 0x21
1f644d xor      rax, rcx
1f6450 xor      rax, r10
1f6453 inc      qword ptr [r14 + 0x268]
1f645a mov      qword ptr [r14 + 0x260], rax
1f6461 inc      dword ptr [r14 + 0x200]
1f6468 mov      eax, dword ptr [r14 + 0x200]
1f646f cmp      eax, dword ptr [r14 + 0x1fc]
1f6476 jb       0x1401f648b
1f6478 mov      rcx, r14
1f647b mov      dword ptr [r14 + 0x200], 0
1f6486 call     0x1401ef7c0
1f648b mov      r8d, ebx
1f648e mov      edx, ebx
1f6490 mov      rcx, r14
1f6493 call     0x1401f0660
1f6498 inc      qword ptr [r14 + 0x1b8]
1f649f movabs   rax, 0x2545f4914f6cdd1d
1f64a9 mov      r9, qword ptr [r14 + 0x1b0]
1f64b0 mov      r10, qword ptr [r14 + 0x1b8]
1f64b7 imul     r9, r15
1f64bb add      r9, rax
1f64be mov      qword ptr [r14 + 0x1b0], r9
1f64c5 mov      rax, r9
1f64c8 shr      rax, 0x1b
1f64cc movzx    edx, al
1f64cf mov      byte ptr [r14 + 0x168], dl
1f64d6 mov      rdi, qword ptr [r14 + 0xe0]
1f64dd mov      r11, qword ptr [r14 + 0xd8]
1f64e4 mov      rsi, qword ptr [r14 + 0xd0]
1f64eb movzx    r15d, byte ptr [r14 + 0xe8]
1f64f3 imul     rdx, rdi
1f64f7 lea      rax, [r11 + r11*8]
1f64fb xor      rdx, rax
1f64fe xor      rdx, rsi
1f6501 mov      rcx, rdx
1f6504 xor      rcx, rbx
1f6507 test     r15b, r15b
1f650a lea      rax, [rdx + rbx]
1f650e cmove    rax, rcx
1f6512 inc      r10
1f6515 mov      qword ptr [r14 + 0x130], rax
1f651c mov      rcx, qword ptr [r14 + 0x1d0]
1f6523 mov      rax, qword ptr [r14 + 0x48]
1f6527 mov      qword ptr [rsp + 0x88], r10
1f652f movzx    r8d, byte ptr [rcx + rbx]
1f6534 xor      r8b, byte ptr [rax + rbx]
1f6538 inc      ebx
1f653a mov      qword ptr [r14 + 0x1b8], r10
1f6541 movabs   rax, 0x9e3779b97f4a7c15
1f654b imul     r9, rax
1f654f mov      qword ptr [rsp + 0x70], rbx
1f6554 movabs   rax, 0x2545f4914f6cdd1d
1f655e add      r9, rax
1f6561 mov      rax, r9
1f6564 shr      rax, 0x1b
1f6568 movzx    edx, al
1f656b lea      rax, [r11 + r11]
1f656f mov      byte ptr [r14 + 0x161], dl
1f6576 imul     rdx, rdi
1f657a xor      rdx, rax
1f657d xor      rdx, rsi
1f6580 mov      rcx, rdx
1f6583 xor      rcx, rbx
1f6586 test     r15b, r15b
1f6589 lea      rax, [rdx + rbx]
1f658d cmove    rax, rcx
1f6591 mov      qword ptr [r14 + 0xf8], rax
1f6598 movsxd   rdx, dword ptr [r14 + 0x11e0]
1f659f mov      r10, qword ptr [r14 + 0x20]
1f65a3 mov      rcx, rdx
1f65a6 xor      rcx, qword ptr [r14 + 0x350]
1f65ad xor      rcx, r10
1f65b0 xor      rcx, rbx
1f65b3 movabs   rbx, 0xff51afd7ed558ccd
1f65bd xor      rcx, qword ptr [r14 + 0x348]
1f65c4 mov      rax, rcx
1f65c7 shr      rax, 0x21
1f65cb xor      rax, rcx
1f65ce imul     rax, rbx
1f65d2 mov      rcx, rax
1f65d5 shr      rcx, 0x21
1f65d9 xor      rcx, rax
1f65dc movabs   rax, 0xc4ceb9fe1a85ec53
1f65e6 imul     rcx, rax
1f65ea movzx    eax, r8b
1f65ee mov      rbx, rcx
1f65f1 shr      rbx, 0x21
1f65f5 xor      rbx, rcx
1f65f8 lea      rcx, [rip - 0x1f65ff]
1f65ff xor      rax, 0xdd
1f6605 mov      qword ptr [r14 + 0x28], rbx
1f6609 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
1f6611 xor      bpl, 0x63
1f6615 movabs   r8, 0xff51afd7ed558ccd
1f661f inc      edx
1f6621 mov      dword ptr [r14 + 0x11e0], edx
1f6628 test     dl, 0x1f
1f662b jne      0x1401f6671
1f662d movsxd   rax, edx
1f6630 xor      rax, r10
1f6633 xor      rax, qword ptr [r14 + 0x348]
1f663a mov      rcx, rax
1f663d shr      rcx, 0x21
1f6641 xor      rcx, rax
1f6644 movabs   rax, 0xc4ceb9fe1a85ec53
1f664e imul     rcx, r8
1f6652 mov      rdx, rcx
1f6655 shr      rdx, 0x21
1f6659 xor      rdx, rcx
1f665c imul     rdx, rax
1f6660 mov      rax, rdx
1f6663 shr      rax, 0x21
1f6667 xor      rax, rdx
1f666a mov      qword ptr [r14 + 0x348], rax
1f6671 movzx    edx, bpl
1f6675 xor      r10, rdx
1f6678 mov      byte ptr [r14 + 0x4ad], bpl
1f667f xor      r10, qword ptr [rsp + 0x70]
1f6684 mov      rax, r10
1f6687 shr      rax, 0x21
1f668b xor      rax, r10
1f668e movabs   r10, 0x9e3779b97f4a7c15
1f6698 imul     rax, r8
1f669c imul     rdx, r10
1f66a0 imul     r9, r10
1f66a4 mov      rcx, rax
1f66a7 shr      rcx, 0x21
1f66ab xor      rcx, rax
1f66ae movabs   rax, 0xc4ceb9fe1a85ec53
1f66b8 imul     rcx, rax
1f66bc mov      rax, rcx
1f66bf shr      rax, 0x21
1f66c3 xor      rax, rcx
1f66c6 mov      ecx, dword ptr [r14 + 0x1178]
1f66cd mov      qword ptr [r14 + 0x20], rax
1f66d1 movabs   rax, 0xd6e8feb86659fd93
1f66db imul     rcx, rax
1f66df xor      rcx, rdx
1f66e2 xor      rcx, rbx
1f66e5 movabs   rbx, 0x2545f4914f6cdd1d
1f66ef mov      rax, rcx
1f66f2 add      r9, rbx
1f66f5 shr      rax, 0x21
1f66f9 xor      rax, rcx
1f66fc imul     rax, r8
1f6700 mov      rdx, rax
1f6703 shr      rdx, 0x21
1f6707 xor      rdx, rax
1f670a movabs   rax, 0xc4ceb9fe1a85ec53
1f6714 imul     rdx, rax
1f6718 mov      rax, qword ptr [rsp + 0x88]
1f6720 shr      rdx, 0x21
1f6724 and      edx, 3
1f6727 inc      rax
1f672a mov      qword ptr [r14 + 0x1b8], rax
1f6731 cmp      bpl, 0x3e
1f6735 jae      0x1401f67cd
1f673b inc      qword ptr [r14 + 0x11a0]
1f6742 lea      rax, [rip - 0x1f6749]
1f6749 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
1f6751 mov      qword ptr [r14 + 0x1b0], r9
1f6758 shr      r9, 0x1b
1f675c movzx    eax, r9b
1f6760 mov      byte ptr [r14 + 0x160], al
1f6767 imul     rax, rdi
1f676b mov      ebx, edx
1f676d xor      rax, rsi
1f6770 xor      rax, r11
1f6773 mov      rcx, rax
1f6776 add      rax, r8
1f6779 xor      rcx, r8
1f677c movzx    r8d, bpl
1f6780 test     r15b, r15b
1f6783 cmove    rax, rcx
1f6787 mov      rcx, r14
1f678a mov      qword ptr [r14 + 0xf0], rax
1f6791 call     0x1401f1f50
1f6796 mov      eax, eax
1f6798 lea      edx, [r13 - 1]
1f679c imul     rcx, rbx, 0x3e
1f67a0 mov      r8, r12
1f67a3 add      rcx, rax
1f67a6 mov      rax, qword ptr [r14 + 0x4b8]
1f67ad movsxd   r9, dword ptr [rax + rcx*4]
1f67b1 mov      rcx, r14
1f67b4 movsxd   rax, dword ptr [r14 + 0x4c8]
1f67bb xor      r9, rax
1f67be add      r9, qword ptr [r14 + 0x4c0]
1f67c5 call     r9
1f67c8 jmp      0x1401f6894
1f67cd inc      dword ptr [r14 + 0x11a8]
1f67d4 mov      rax, r9
1f67d7 shr      rax, 0x1b
1f67db movzx    ecx, al
1f67de lea      rax, [r11*4]
1f67e6 mov      byte ptr [r14 + 0x163], cl
1f67ed imul     rcx, rdi
1f67f1 imul     r9, r10
1f67f5 xor      rcx, rax
1f67f8 xor      rcx, rsi
1f67fb mov      qword ptr [r14 + 0x108], rcx
1f6802 mov      r8, qword ptr [r14 + 0x1b8]
1f6809 add      r9, rbx
1f680c mov      rax, r9
1f680f shr      rax, 0x1b
1f6813 movzx    edx, al
1f6816 mov      byte ptr [r14 + 0x16a], dl
1f681d imul     rax, r11, 0xb
1f6821 imul     rdx, rdi
1f6825 xor      rdx, rax
1f6828 xor      rdx, rsi
1f682b mov      rcx, rdx
1f682e xor      rcx, 1
1f6832 test     r15b, r15b
1f6835 lea      rax, [rdx + 1]
1f6839 cmove    rax, rcx
1f683d mov      qword ptr [r14 + 0x140], rax
1f6844 lea      rax, [r8 + 2]
1f6848 mov      qword ptr [r14 + 0x1b8], rax
1f684f imul     r9, r10
1f6853 add      r9, rbx
1f6856 mov      qword ptr [r14 + 0x1b0], r9
1f685d shr      r9, 0x1b
1f6861 movzx    eax, r9b
1f6865 mov      byte ptr [r14 + 0x160], al
1f686c imul     rax, rdi
1f6870 xor      rax, rsi
1f6873 xor      rax, r11
1f6876 mov      rcx, rax
1f6879 add      rax, 0xfe1ab
1f687f xor      rcx, 0xfe1ab
1f6886 test     r15b, r15b
1f6889 cmove    rax, rcx
1f688d mov      qword ptr [r14 + 0xf0], rax
1f6894 mov      rsi, qword ptr [rsp + 0x38]
1f6899 mov      rbp, qword ptr [rsp + 0x78]
1f689e mov      r15, qword ptr [rsp + 0x30]
1f68a3 add      rsp, 0x40
1f68a7 pop      r14
1f68a9 pop      r13
1f68ab pop      r12
1f68ad pop      rdi
1f68ae pop      rbx
1f68af ret      
1f68b0 mov      edx, 0x54485254
1f68b5 mov      rcx, r14
1f68b8 call     0x1401ed830
1f68bd int3     
1f68be mov      edx, 0x43414e59
1f68c3 mov      rcx, r14
1f68c6 call     0x1401ed830
1f68cb int3     
