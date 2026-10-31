1f9c10 mov      qword ptr [rsp + 0x18], r8
1f9c15 push     rbx
1f9c16 push     rbp
1f9c17 push     rdi
1f9c18 push     r13
1f9c1a push     r14
1f9c1c sub      rsp, 0x30
1f9c20 movsxd   rax, dword ptr [rcx + 0x11e0]
1f9c27 mov      r14, rcx
1f9c2a mov      r13d, edx
1f9c2d movabs   rcx, 0xd0d99b284d5fb420
1f9c37 imul     rax, rcx
1f9c3b movabs   rcx, 0x728011e3cc81301f
1f9c45 movabs   rbp, 0xff51afd7ed558ccd
1f9c4f xor      rax, qword ptr [r14 + 0x28]
1f9c53 mov      rdi, r8
1f9c56 mov      qword ptr [rsp + 0x60], rax
1f9c5b mov      rax, qword ptr [rsp + 0x60]
1f9c60 movsxd   rax, dword ptr [r14 + 0x11e0]
1f9c67 imul     rax, rcx
1f9c6b movabs   rcx, 0x94488fbd4fcabc0a
1f9c75 xor      rax, qword ptr [r14 + 0x28]
1f9c79 mov      qword ptr [rsp + 0x60], rax
1f9c7e mov      rax, qword ptr [rsp + 0x60]
1f9c83 movsxd   rax, dword ptr [r14 + 0x11e0]
1f9c8a imul     rax, rcx
1f9c8e xor      rax, qword ptr [r14 + 0x28]
1f9c92 mov      qword ptr [rsp + 0x60], rax
1f9c97 mov      rax, qword ptr [rsp + 0x60]
1f9c9c mov      rax, qword ptr [r14 + 0x2e0]
1f9ca3 shr      rax, 0xd
1f9ca7 mov      rcx, rax
1f9caa shr      rcx, 0x21
1f9cae xor      rcx, rax
1f9cb1 movabs   rax, 0xc4ceb9fe1a85ec53
1f9cbb imul     rcx, rbp
1f9cbf mov      rdx, rcx
1f9cc2 shr      rdx, 0x21
1f9cc6 xor      rdx, rcx
1f9cc9 imul     rdx, rax
1f9ccd movabs   rax, 0xa46307f145d2ac0e
1f9cd7 mov      rcx, rdx
1f9cda shr      rcx, 0x21
1f9cde xor      rcx, rdx
1f9ce1 xor      rcx, rax
1f9ce4 mov      rax, qword ptr [r14 + 0x2e0]
1f9ceb add      rcx, rax
1f9cee mov      qword ptr [r14 + 0x2e0], rcx
1f9cf5 mov      rcx, r14
1f9cf8 call     0x1401ee940
1f9cfd mov      rcx, r14
1f9d00 mov      rbx, rax
1f9d03 call     0x1401ee940
1f9d08 movabs   rcx, 0x8000000000000000
1f9d12 xor      edx, edx
1f9d14 xor      rax, rcx
1f9d17 xor      rbx, rcx
1f9d1a cmp      rax, rbx
1f9d1d mov      rcx, r14
1f9d20 setb     dl
1f9d23 call     0x1401ee820
1f9d28 mov      rax, qword ptr [r14 + 0x2e0]
1f9d2f test     r13d, r13d
1f9d32 jns      0x1401fa870
1f9d38 cmp      qword ptr [r14 + 0x11b8], rdi
1f9d3f jne      0x1401fa87e
1f9d45 movsxd   rax, dword ptr [r14 + 0x11e0]
1f9d4c movabs   rcx, 0x94d302dd5e922129
1f9d56 imul     rax, rcx
1f9d5a mov      rcx, r14
1f9d5d xor      rax, qword ptr [r14 + 0x28]
1f9d61 mov      qword ptr [rsp + 0x60], rax
1f9d66 mov      rax, qword ptr [rsp + 0x60]
1f9d6b call     0x1401ee450
1f9d70 test     eax, eax
1f9d72 jne      0x1401fa864
1f9d78 cmp      dword ptr [r14 + 0xad0], eax
1f9d7f jne      0x1401fa864
1f9d85 mov      r8, qword ptr [r14 + 0xf0]
1f9d8c movzx    ecx, byte ptr [r14 + 0x160]
1f9d94 mov      rax, r8
1f9d97 mov      r10, qword ptr [r14 + 0xe0]
1f9d9e mov      rbx, qword ptr [r14 + 0xd0]
1f9da5 mov      r11, qword ptr [r14 + 0xd8]
1f9dac movzx    edi, byte ptr [r14 + 0xe8]
1f9db4 mov      r9, qword ptr [r14 + 0x1b0]
1f9dbb imul     rcx, r10
1f9dbf mov      qword ptr [rsp + 0x68], rsi
1f9dc4 mov      rsi, qword ptr [r14 + 0x1b8]
1f9dcb xor      rcx, rbx
1f9dce xor      rcx, r11
1f9dd1 mov      qword ptr [rsp + 0x28], r12
1f9dd6 xor      rax, rcx
1f9dd9 mov      qword ptr [rsp + 0x20], r15
1f9dde sub      r8, rcx
1f9de1 movabs   r15, 0x9e3779b97f4a7c15
1f9deb test     dil, dil
1f9dee movabs   r12, 0x2545f4914f6cdd1d
1f9df8 cmove    r8, rax
1f9dfc inc      rsi
1f9dff imul     r9, r15
1f9e03 mov      qword ptr [r14 + 0x1b8], rsi
1f9e0a mov      rcx, r8
1f9e0d add      r9, r12
1f9e10 mov      qword ptr [r14 + 0x1b0], r9
1f9e17 mov      rax, r9
1f9e1a shr      rax, 0x1b
1f9e1e movzx    edx, al
1f9e21 mov      byte ptr [r14 + 0x160], dl
1f9e28 imul     rdx, r10
1f9e2c xor      rdx, rbx
1f9e2f xor      rdx, r11
1f9e32 xor      rcx, rdx
1f9e35 test     dil, dil
1f9e38 lea      rax, [r8 + rdx]
1f9e3c cmove    rax, rcx
1f9e40 mov      qword ptr [r14 + 0xf0], rax
1f9e47 cmp      r8d, 0x26dc07
1f9e4e jne      0x1401fa855
1f9e54 mov      eax, r13d
1f9e57 btr      eax, 0x1f
1f9e5b cmp      eax, 2
1f9e5e jae      0x1401f9eaa
1f9e60 imul     r9, r15
1f9e64 lea      rax, [rsi + 1]
1f9e68 mov      qword ptr [r14 + 0x1b8], rax
1f9e6f add      r9, r12
1f9e72 mov      qword ptr [r14 + 0x1b0], r9
1f9e79 shr      r9, 0x1b
1f9e7d movzx    eax, r9b
1f9e81 mov      byte ptr [r14 + 0x160], al
1f9e88 imul     rax, r10
1f9e8c xor      rax, rbx
1f9e8f xor      rax, r11
1f9e92 mov      rcx, rax
1f9e95 add      rax, 0x3abaef
1f9e9b xor      rcx, 0x3abaef
1f9ea2 test     dil, dil
1f9ea5 jmp      0x1401fa84a
1f9eaa mov      rcx, r14
1f9ead call     0x1401ee070
1f9eb2 movzx    ecx, byte ptr [r14 + 0x4ad]
1f9eba movabs   r8, 0xc4ceb9fe1a85ec53
1f9ec4 mov      r11, qword ptr [r14 + 0xe0]
1f9ecb mov      r10, qword ptr [r14 + 0xd0]
1f9ed2 movzx    r9d, byte ptr [r14 + 0xe8]
1f9eda mov      eax, eax
1f9edc xor      rcx, rax
1f9edf xor      rcx, qword ptr [r14 + 0x11e8]
1f9ee6 mov      rax, rcx
1f9ee9 shr      rax, 0x21
1f9eed xor      rax, rcx
1f9ef0 imul     rax, rbp
1f9ef4 mov      rcx, rax
1f9ef7 shr      rcx, 0x21
1f9efb xor      rcx, rax
1f9efe imul     rcx, r8
1f9f02 mov      rdx, rcx
1f9f05 shr      rdx, 0x21
1f9f09 xor      rdx, rcx
1f9f0c mov      qword ptr [r14 + 0x11e8], rdx
1f9f13 xor      rdx, qword ptr [r14 + 0x20]
1f9f17 xor      rdx, qword ptr [r14 + 0x28]
1f9f1b mov      rax, rdx
1f9f1e shr      rax, 0x21
1f9f22 xor      rax, rdx
1f9f25 imul     rax, rbp
1f9f29 mov      rcx, rax
1f9f2c shr      rcx, 0x21
1f9f30 xor      rcx, rax
1f9f33 imul     rcx, r8
1f9f37 mov      rax, rcx
1f9f3a shr      rax, 0x21
1f9f3e xor      rax, rcx
1f9f41 mov      qword ptr [r14 + 0x20], rax
1f9f45 mov      rdx, qword ptr [r14 + 0x138]
1f9f4c movzx    ecx, byte ptr [r14 + 0x169]
1f9f54 mov      rax, qword ptr [r14 + 0xd8]
1f9f5b imul     rcx, r11
1f9f5f lea      rbx, [rax + rax*4]
1f9f63 mov      rax, rdx
1f9f66 add      rbx, rbx
1f9f69 xor      rcx, rbx
1f9f6c xor      rcx, r10
1f9f6f xor      rax, rcx
1f9f72 sub      rdx, rcx
1f9f75 test     r9b, r9b
1f9f78 cmove    rdx, rax
1f9f7c mov      rax, qword ptr [r14 + 0x1b0]
1f9f83 inc      qword ptr [r14 + 0x1b8]
1f9f8a imul     rax, r15
1f9f8e add      rax, r12
1f9f91 mov      qword ptr [r14 + 0x1b0], rax
1f9f98 shr      rax, 0x1b
1f9f9c movzx    r8d, al
1f9fa0 mov      byte ptr [r14 + 0x169], r8b
1f9fa7 imul     r8, r11
1f9fab xor      r8, rbx
1f9fae xor      r8, r10
1f9fb1 mov      rcx, r8
1f9fb4 xor      rcx, rdx
1f9fb7 test     r9b, r9b
1f9fba lea      rax, [r8 + rdx]
1f9fbe cmove    rax, rcx
1f9fc2 mov      rcx, r14
1f9fc5 mov      qword ptr [r14 + 0x138], rax
1f9fcc call     0x1401f0910
1f9fd1 mov      rax, qword ptr [r14 + 0xd8]
1f9fd8 mov      rdx, qword ptr [r14 + 0x130]
1f9fdf mov      r10, qword ptr [r14 + 0xe0]
1f9fe6 movzx    ecx, byte ptr [r14 + 0x168]
1f9fee mov      rbx, qword ptr [r14 + 0xd0]
1f9ff5 lea      r11, [rax + rax*8]
1f9ff9 movzx    r9d, byte ptr [r14 + 0xe8]
1fa001 mov      rax, rdx
1fa004 imul     rcx, r10
1fa008 xor      rcx, r11
1fa00b xor      rcx, rbx
1fa00e xor      rax, rcx
1fa011 sub      rdx, rcx
1fa014 test     r9b, r9b
1fa017 cmove    rdx, rax
1fa01b mov      rax, qword ptr [r14 + 0x1b0]
1fa022 inc      qword ptr [r14 + 0x1b8]
1fa029 mov      rcx, rdx
1fa02c imul     rax, r15
1fa030 add      rax, r12
1fa033 mov      qword ptr [r14 + 0x1b0], rax
1fa03a shr      rax, 0x1b
1fa03e movzx    r8d, al
1fa042 mov      byte ptr [r14 + 0x168], r8b
1fa049 imul     r8, r10
1fa04d xor      r8, r11
1fa050 xor      r8, rbx
1fa053 xor      rcx, r8
1fa056 test     r9b, r9b
1fa059 lea      rax, [rdx + r8]
1fa05d cmove    rax, rcx
1fa061 mov      rcx, r14
1fa064 mov      qword ptr [r14 + 0x130], rax
1fa06b call     0x1401f0910
1fa070 mov      rcx, r14
1fa073 call     0x1401ee070
1fa078 cmp      eax, dword ptr [r14 + 0x1d8]
1fa07f jae      0x1401fa08b
1fa081 mov      edx, eax
1fa083 mov      rcx, r14
1fa086 call     0x1401f0910
1fa08b mov      rsi, qword ptr [r14 + 0xe0]
1fa092 mov      rbp, qword ptr [r14 + 0xd0]
1fa099 mov      r11, qword ptr [r14 + 0x130]
1fa0a0 movzx    edi, byte ptr [r14 + 0xe8]
1fa0a8 mov      rax, r11
1fa0ab movzx    ecx, byte ptr [r14 + 0x168]
1fa0b3 mov      rbx, qword ptr [r14 + 0xd8]
1fa0ba mov      r8, qword ptr [r14 + 0x1b8]
1fa0c1 mov      r10, qword ptr [r14 + 0x1b0]
1fa0c8 imul     rcx, rsi
1fa0cc lea      r9, [rbx + rbx*8]
1fa0d0 xor      rcx, r9
1fa0d3 xor      rcx, rbp
1fa0d6 xor      rax, rcx
1fa0d9 sub      r11, rcx
1fa0dc test     dil, dil
1fa0df cmove    r11, rax
1fa0e3 imul     r10, r15
1fa0e7 mov      rcx, r11
1fa0ea add      r10, r12
1fa0ed mov      rax, r10
1fa0f0 shr      rax, 0x1b
1fa0f4 movzx    edx, al
1fa0f7 mov      byte ptr [r14 + 0x168], dl
1fa0fe imul     rdx, rsi
1fa102 xor      rdx, r9
1fa105 xor      rdx, rbp
1fa108 xor      rcx, rdx
1fa10b test     dil, dil
1fa10e lea      rax, [r11 + rdx]
1fa112 cmove    rax, rcx
1fa116 mov      rcx, r11
1fa119 mov      qword ptr [r14 + 0x130], rax
1fa120 lea      rax, [r8 + 2]
1fa124 mov      qword ptr [r14 + 0x1b8], rax
1fa12b mov      r8d, 0x5330
1fa131 imul     r10, r15
1fa135 lea      rax, [rbx + rbx*4]
1fa139 add      rax, rax
1fa13c add      r10, r12
1fa13f mov      qword ptr [r14 + 0x1b0], r10
1fa146 shr      r10, 0x1b
1fa14a movzx    edx, r10b
1fa14e mov      byte ptr [r14 + 0x169], dl
1fa155 imul     rdx, rsi
1fa159 xor      rdx, rax
1fa15c xor      rdx, rbp
1fa15f xor      rcx, rdx
1fa162 test     dil, dil
1fa165 lea      rax, [r11 + rdx]
1fa169 cmove    rax, rcx
1fa16d mov      rcx, r14
1fa170 mov      qword ptr [r14 + 0x138], rax
1fa177 movzx    edx, byte ptr [r14 + 0x4ad]
1fa17f xor      rdx, qword ptr [r14 + 0x348]
1fa186 call     0x1401f1520
1fa18b mov      r8, qword ptr [r14 + 0x348]
1fa192 movabs   rdi, 0xff51afd7ed558ccd
1fa19c mov      rax, r8
1fa19f movabs   rsi, 0xc4ceb9fe1a85ec53
1fa1a9 xor      rax, qword ptr [r14 + 0x20]
1fa1ad mov      rcx, rax
1fa1b0 shr      rcx, 0x21
1fa1b4 xor      rcx, rax
1fa1b7 imul     rcx, rdi
1fa1bb mov      rax, rcx
1fa1be shr      rax, 0x21
1fa1c2 xor      rax, rcx
1fa1c5 imul     rax, rsi
1fa1c9 mov      rdx, rax
1fa1cc shr      rdx, 0x21
1fa1d0 xor      edx, eax
1fa1d2 lea      eax, [rdx + 1]
1fa1d5 mov      ecx, eax
1fa1d7 xor      eax, edx
1fa1d9 imul     ecx, edx
1fa1dc not      ecx
1fa1de and      ecx, eax
1fa1e0 test     cl, 1
1fa1e3 je       0x1401fa24c
1fa1e5 and      r8b, 3
1fa1e9 cmp      r8b, 1
1fa1ed jne      0x1401fa24c
1fa1ef mov      rax, qword ptr [r14 + 0x1b0]
1fa1f6 inc      qword ptr [r14 + 0x1b8]
1fa1fd imul     rax, r15
1fa201 add      rax, r12
1fa204 mov      qword ptr [r14 + 0x1b0], rax
1fa20b shr      rax, 0x1b
1fa20f movzx    eax, al
1fa212 mov      byte ptr [r14 + 0x160], al
1fa219 imul     rax, qword ptr [r14 + 0xe0]
1fa221 xor      rax, qword ptr [r14 + 0xd8]
1fa228 xor      rax, qword ptr [r14 + 0xd0]
1fa22f mov      rcx, rax
1fa232 add      rax, 0x17ed28
1fa238 xor      rcx, 0x17ed28
1fa23f cmp      byte ptr [r14 + 0xe8], 0
1fa247 jmp      0x1401fa84a
1fa24c mov      rcx, r14
1fa24f call     0x1401ee070
1fa254 mov      ebx, eax
1fa256 cmp      eax, dword ptr [r14 + 0x1d8]
1fa25d jb       0x1401fa2bc
1fa25f mov      rax, qword ptr [r14 + 0x1b0]
1fa266 inc      qword ptr [r14 + 0x1b8]
1fa26d imul     rax, r15
1fa271 add      rax, r12
1fa274 mov      qword ptr [r14 + 0x1b0], rax
1fa27b shr      rax, 0x1b
1fa27f movzx    eax, al
1fa282 mov      byte ptr [r14 + 0x160], al
1fa289 imul     rax, qword ptr [r14 + 0xe0]
1fa291 xor      rax, qword ptr [r14 + 0xd8]
1fa298 xor      rax, qword ptr [r14 + 0xd0]
1fa29f mov      rcx, rax
1fa2a2 add      rax, 0xfe1ab
1fa2a8 xor      rcx, 0xfe1ab
1fa2af cmp      byte ptr [r14 + 0xe8], 0
1fa2b7 jmp      0x1401fa84a
1fa2bc mov      edx, ebx
1fa2be mov      rcx, r14
1fa2c1 call     0x1401f25b0
1fa2c6 movsxd   rcx, dword ptr [r14 + 0x11e0]
1fa2cd movabs   r8, 0xd6e8feb86659fd93
1fa2d7 mov      rdx, qword ptr [r14 + 0x20]
1fa2db mov      rax, rbx
1fa2de imul     rax, r8
1fa2e2 imul     rcx, r15
1fa2e6 rol      rdx, 0x11
1fa2ea xor      rax, rdx
1fa2ed xor      rcx, qword ptr [r14 + 0x260]
1fa2f4 xor      rax, rcx
1fa2f7 mov      rcx, rax
1fa2fa shr      rcx, 0x21
1fa2fe xor      rcx, rax
1fa301 imul     rcx, rdi
1fa305 mov      rdx, rcx
1fa308 shr      rdx, 0x21
1fa30c xor      rdx, rcx
1fa30f imul     rdx, rsi
1fa313 mov      rax, rdx
1fa316 shr      rax, 0x21
1fa31a xor      rax, rdx
1fa31d mov      r10, rax
1fa320 shr      r10, 0x1d
1fa324 xor      r10, rax
1fa327 or       r10, 1
1fa32b mov      rax, r10
1fa32e mov      qword ptr [r14 + 0x260], r10
1fa335 and      eax, 0x3ff
1fa33a cmp      rax, 0x2c5
1fa340 jne      0x1401fa351
1fa342 mov      rcx, r14
1fa345 call     0x1402297e0
1fa34a mov      r10, qword ptr [r14 + 0x260]
1fa351 movzx    eax, r10b
1fa355 and      al, 0x1f
1fa357 cmp      al, 0x15
1fa359 jne      0x1401fa446
1fa35f movsxd   rax, dword ptr [r14 + 0x11e0]
1fa366 xor      rax, 0x5a5a
1fa36c mov      rcx, qword ptr [r14 + 0x20]
1fa370 imul     rax, r15
1fa374 rol      rcx, 0x11
1fa378 xor      rax, r10
1fa37b xor      rcx, rax
1fa37e movabs   rax, 0x8f70feda99a6026d
1fa388 xor      rcx, rax
1fa38b mov      rax, rcx
1fa38e shr      rax, 0x21
1fa392 xor      rax, rcx
1fa395 imul     rax, rdi
1fa399 mov      rcx, rax
1fa39c shr      rcx, 0x21
1fa3a0 xor      rcx, rax
1fa3a3 imul     rcx, rsi
1fa3a7 mov      rax, rcx
1fa3aa shr      rax, 0x21
1fa3ae xor      rax, rcx
1fa3b1 mov      r9, rax
1fa3b4 shr      r9, 0x1d
1fa3b8 xor      r9, rax
1fa3bb or       r9, 1
1fa3bf mov      rax, r9
1fa3c2 mov      rcx, r9
1fa3c5 shr      rax, 8
1fa3c9 and      eax, 3
1fa3cc shr      rcx, 0x28
1fa3d0 imul     r8, rax, 0x3e
1fa3d4 mov      eax, 0x8421085
1fa3d9 mul      ecx
1fa3db mov      eax, ecx
1fa3dd sub      eax, edx
1fa3df shr      eax, 1
1fa3e1 add      eax, edx
1fa3e3 shr      eax, 5
1fa3e6 imul     eax, eax, 0x3e
1fa3e9 sub      ecx, eax
1fa3eb mov      eax, ecx
1fa3ed add      r8, rax
1fa3f0 mov      rax, qword ptr [r14 + 0x4b8]
1fa3f7 movsxd   rcx, dword ptr [rax + r8*4]
1fa3fb movsxd   rax, dword ptr [r14 + 0x4c8]
1fa402 xor      rcx, rax
1fa405 add      rcx, qword ptr [r14 + 0x4c0]
1fa40c xor      rcx, r9
1fa40f mov      rax, rcx
1fa412 shr      rax, 0x21
1fa416 xor      rax, rcx
1fa419 imul     rax, rdi
1fa41d mov      rcx, rax
1fa420 shr      rcx, 0x21
1fa424 xor      rcx, rax
1fa427 imul     rcx, rsi
1fa42b mov      rax, rcx
1fa42e shr      rax, 0x21
1fa432 xor      rax, rcx
1fa435 xor      rax, r10
1fa438 inc      qword ptr [r14 + 0x268]
1fa43f mov      qword ptr [r14 + 0x260], rax
1fa446 inc      dword ptr [r14 + 0x200]
1fa44d mov      eax, dword ptr [r14 + 0x200]
1fa454 cmp      eax, dword ptr [r14 + 0x1fc]
1fa45b jb       0x1401fa470
1fa45d mov      rcx, r14
1fa460 mov      dword ptr [r14 + 0x200], 0
1fa46b call     0x1401ef7c0
1fa470 mov      r8d, ebx
1fa473 mov      edx, ebx
1fa475 mov      rcx, r14
1fa478 call     0x1401f0660
1fa47d inc      qword ptr [r14 + 0x1b8]
1fa484 mov      rcx, rbx
1fa487 mov      r9, qword ptr [r14 + 0x1b0]
1fa48e mov      rbp, r12
1fa491 mov      r10, qword ptr [r14 + 0x1b8]
1fa498 imul     r9, r15
1fa49c add      r9, r12
1fa49f lea      r12d, [rbx + 1]
1fa4a3 mov      qword ptr [r14 + 0x1b0], r9
1fa4aa mov      rax, r9
1fa4ad shr      rax, 0x1b
1fa4b1 movzx    edx, al
1fa4b4 mov      byte ptr [r14 + 0x168], dl
1fa4bb mov      rdi, qword ptr [r14 + 0xe0]
1fa4c2 mov      r11, qword ptr [r14 + 0xd8]
1fa4c9 mov      rsi, qword ptr [r14 + 0xd0]
1fa4d0 movzx    r15d, byte ptr [r14 + 0xe8]
1fa4d8 imul     rdx, rdi
1fa4dc lea      rax, [r11 + r11*8]
1fa4e0 xor      rdx, rax
1fa4e3 xor      rdx, rsi
1fa4e6 xor      rcx, rdx
1fa4e9 test     r15b, r15b
1fa4ec lea      rax, [rbx + rdx]
1fa4f0 cmove    rax, rcx
1fa4f4 inc      r10
1fa4f7 mov      qword ptr [r14 + 0x130], rax
1fa4fe mov      rcx, qword ptr [r14 + 0x1d0]
1fa505 mov      rax, qword ptr [r14 + 0x48]
1fa509 mov      qword ptr [rsp + 0x60], r10
1fa50e movzx    r8d, byte ptr [rcx + rbx]
1fa513 xor      r8b, byte ptr [rax + rbx]
1fa517 movabs   rax, 0x9e3779b97f4a7c15
1fa521 imul     r9, rax
1fa525 mov      qword ptr [r14 + 0x1b8], r10
1fa52c add      r9, rbp
1fa52f mov      rax, r9
1fa532 shr      rax, 0x1b
1fa536 movzx    edx, al
1fa539 lea      rax, [r11 + r11]
1fa53d mov      byte ptr [r14 + 0x161], dl
1fa544 imul     rdx, rdi
1fa548 xor      rdx, rax
1fa54b xor      rdx, rsi
1fa54e mov      rcx, rdx
1fa551 xor      rcx, r12
1fa554 test     r15b, r15b
1fa557 lea      rax, [rdx + r12]
1fa55b cmove    rax, rcx
1fa55f mov      qword ptr [r14 + 0xf8], rax
1fa566 movsxd   rdx, dword ptr [r14 + 0x11e0]
1fa56d mov      r10, qword ptr [r14 + 0x20]
1fa571 mov      rcx, rdx
1fa574 xor      rcx, qword ptr [r14 + 0x350]
1fa57b xor      rcx, r10
1fa57e xor      rcx, r12
1fa581 xor      rcx, qword ptr [r14 + 0x348]
1fa588 mov      rax, rcx
1fa58b shr      rax, 0x21
1fa58f xor      rax, rcx
1fa592 movabs   rcx, 0xff51afd7ed558ccd
1fa59c imul     rax, rcx
1fa5a0 mov      rcx, rax
1fa5a3 shr      rcx, 0x21
1fa5a7 xor      rcx, rax
1fa5aa movabs   rax, 0xc4ceb9fe1a85ec53
1fa5b4 imul     rcx, rax
1fa5b8 movzx    eax, r8b
1fa5bc mov      rbx, rcx
1fa5bf xor      rax, 0xdd
1fa5c5 shr      rbx, 0x21
1fa5c9 xor      rbx, rcx
1fa5cc lea      rcx, [rip - 0x1fa5d3]
1fa5d3 mov      qword ptr [r14 + 0x28], rbx
1fa5d7 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
1fa5df xor      bpl, 0x63
1fa5e3 inc      edx
1fa5e5 mov      dword ptr [r14 + 0x11e0], edx
1fa5ec movabs   r8, 0xff51afd7ed558ccd
1fa5f6 test     dl, 0x1f
1fa5f9 jne      0x1401fa63f
1fa5fb movsxd   rax, edx
1fa5fe xor      rax, r10
1fa601 xor      rax, qword ptr [r14 + 0x348]
1fa608 mov      rcx, rax
1fa60b shr      rcx, 0x21
1fa60f xor      rcx, rax
1fa612 movabs   rax, 0xc4ceb9fe1a85ec53
1fa61c imul     rcx, r8
1fa620 mov      rdx, rcx
1fa623 shr      rdx, 0x21
1fa627 xor      rdx, rcx
1fa62a imul     rdx, rax
1fa62e mov      rax, rdx
1fa631 shr      rax, 0x21
1fa635 xor      rax, rdx
1fa638 mov      qword ptr [r14 + 0x348], rax
1fa63f movzx    edx, bpl
1fa643 xor      r10, rdx
1fa646 mov      byte ptr [r14 + 0x4ad], bpl
1fa64d xor      r10, r12
1fa650 movabs   r12, 0xc4ceb9fe1a85ec53
1fa65a mov      rax, r10
1fa65d shr      rax, 0x21
1fa661 xor      rax, r10
1fa664 movabs   r10, 0x9e3779b97f4a7c15
1fa66e imul     rax, r8
1fa672 imul     rdx, r10
1fa676 imul     r9, r10
1fa67a mov      rcx, rax
1fa67d shr      rcx, 0x21
1fa681 xor      rcx, rax
1fa684 imul     rcx, r12
1fa688 mov      rax, rcx
1fa68b shr      rax, 0x21
1fa68f xor      rax, rcx
1fa692 mov      ecx, dword ptr [r14 + 0x1178]
1fa699 mov      qword ptr [r14 + 0x20], rax
1fa69d movabs   rax, 0xd6e8feb86659fd93
1fa6a7 imul     rcx, rax
1fa6ab xor      rcx, rdx
1fa6ae xor      rcx, rbx
1fa6b1 movabs   rbx, 0x2545f4914f6cdd1d
1fa6bb mov      rax, rcx
1fa6be add      r9, rbx
1fa6c1 shr      rax, 0x21
1fa6c5 xor      rax, rcx
1fa6c8 imul     rax, r8
1fa6cc mov      rdx, rax
1fa6cf shr      rdx, 0x21
1fa6d3 xor      rdx, rax
1fa6d6 mov      rax, qword ptr [rsp + 0x60]
1fa6db imul     rdx, r12
1fa6df shr      rdx, 0x21
1fa6e3 and      edx, 3
1fa6e6 inc      rax
1fa6e9 mov      qword ptr [r14 + 0x1b8], rax
1fa6f0 cmp      bpl, 0x3e
1fa6f4 jae      0x1401fa78e
1fa6fa inc      qword ptr [r14 + 0x11a0]
1fa701 lea      rax, [rip - 0x1fa708]
1fa708 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
1fa710 mov      qword ptr [r14 + 0x1b0], r9
1fa717 shr      r9, 0x1b
1fa71b movzx    eax, r9b
1fa71f mov      byte ptr [r14 + 0x160], al
1fa726 imul     rax, rdi
1fa72a mov      ebx, edx
1fa72c xor      rax, rsi
1fa72f xor      rax, r11
1fa732 mov      rcx, rax
1fa735 add      rax, r8
1fa738 xor      rcx, r8
1fa73b movzx    r8d, bpl
1fa73f test     r15b, r15b
1fa742 cmove    rax, rcx
1fa746 mov      rcx, r14
1fa749 mov      qword ptr [r14 + 0xf0], rax
1fa750 call     0x1401f1f50
1fa755 mov      r8, qword ptr [rsp + 0x70]
1fa75a lea      edx, [r13 - 1]
1fa75e mov      eax, eax
1fa760 imul     rcx, rbx, 0x3e
1fa764 add      rcx, rax
1fa767 mov      rax, qword ptr [r14 + 0x4b8]
1fa76e movsxd   r9, dword ptr [rax + rcx*4]
1fa772 mov      rcx, r14
1fa775 movsxd   rax, dword ptr [r14 + 0x4c8]
1fa77c xor      r9, rax
1fa77f add      r9, qword ptr [r14 + 0x4c0]
1fa786 call     r9
1fa789 jmp      0x1401fa855
1fa78e inc      dword ptr [r14 + 0x11a8]
1fa795 mov      rax, r9
1fa798 shr      rax, 0x1b
1fa79c movzx    ecx, al
1fa79f lea      rax, [r11*4]
1fa7a7 mov      byte ptr [r14 + 0x163], cl
1fa7ae imul     rcx, rdi
1fa7b2 imul     r9, r10
1fa7b6 xor      rcx, rax
1fa7b9 xor      rcx, rsi
1fa7bc mov      qword ptr [r14 + 0x108], rcx
1fa7c3 mov      r8, qword ptr [r14 + 0x1b8]
1fa7ca add      r9, rbx
1fa7cd mov      rax, r9
1fa7d0 shr      rax, 0x1b
1fa7d4 movzx    edx, al
1fa7d7 mov      byte ptr [r14 + 0x16a], dl
1fa7de imul     rax, r11, 0xb
1fa7e2 imul     rdx, rdi
1fa7e6 xor      rdx, rax
1fa7e9 xor      rdx, rsi
1fa7ec mov      rcx, rdx
1fa7ef xor      rcx, 1
1fa7f3 test     r15b, r15b
1fa7f6 lea      rax, [rdx + 1]
1fa7fa cmove    rax, rcx
1fa7fe mov      qword ptr [r14 + 0x140], rax
1fa805 lea      rax, [r8 + 2]
1fa809 mov      qword ptr [r14 + 0x1b8], rax
1fa810 imul     r9, r10
1fa814 add      r9, rbx
1fa817 mov      qword ptr [r14 + 0x1b0], r9
1fa81e shr      r9, 0x1b
1fa822 movzx    eax, r9b
1fa826 mov      byte ptr [r14 + 0x160], al
1fa82d imul     rax, rdi
1fa831 xor      rax, rsi
1fa834 xor      rax, r11
1fa837 mov      rcx, rax
1fa83a add      rax, 0xfe1ab
1fa840 xor      rcx, 0xfe1ab
1fa847 test     r15b, r15b
1fa84a cmove    rax, rcx
1fa84e mov      qword ptr [r14 + 0xf0], rax
1fa855 mov      r12, qword ptr [rsp + 0x28]
1fa85a mov      rsi, qword ptr [rsp + 0x68]
1fa85f mov      r15, qword ptr [rsp + 0x20]
1fa864 add      rsp, 0x30
1fa868 pop      r14
1fa86a pop      r13
1fa86c pop      rdi
1fa86d pop      rbp
1fa86e pop      rbx
1fa86f ret      
1fa870 mov      edx, 0x54485254
1fa875 mov      rcx, r14
1fa878 call     0x1401ed830
1fa87d int3     
1fa87e mov      edx, 0x43414e59
1fa883 mov      rcx, r14
1fa886 call     0x1401ed830
1fa88b int3     
