21bb70 mov      qword ptr [rsp + 0x18], r8
21bb75 push     rbx
21bb76 push     rbp
21bb77 push     rdi
21bb78 push     r13
21bb7a push     r14
21bb7c sub      rsp, 0x30
21bb80 movsxd   rax, dword ptr [rcx + 0x11e0]
21bb87 mov      r14, rcx
21bb8a mov      r13d, edx
21bb8d movabs   rcx, 0xd0d99b284d5fb420
21bb97 imul     rax, rcx
21bb9b movabs   rcx, 0x728011e3cc81301f
21bba5 movabs   rbp, 0xff51afd7ed558ccd
21bbaf xor      rax, qword ptr [r14 + 0x28]
21bbb3 mov      rdi, r8
21bbb6 mov      qword ptr [rsp + 0x60], rax
21bbbb mov      rax, qword ptr [rsp + 0x60]
21bbc0 movsxd   rax, dword ptr [r14 + 0x11e0]
21bbc7 imul     rax, rcx
21bbcb movabs   rcx, 0x94488fbd4fcabc0a
21bbd5 xor      rax, qword ptr [r14 + 0x28]
21bbd9 mov      qword ptr [rsp + 0x60], rax
21bbde mov      rax, qword ptr [rsp + 0x60]
21bbe3 movsxd   rax, dword ptr [r14 + 0x11e0]
21bbea imul     rax, rcx
21bbee movabs   rcx, 0x428998adc7b1204f
21bbf8 xor      rax, qword ptr [r14 + 0x28]
21bbfc mov      qword ptr [rsp + 0x60], rax
21bc01 mov      rax, qword ptr [rsp + 0x60]
21bc06 mov      rax, qword ptr [r14 + 0x2e8]
21bc0d mov      rax, qword ptr [r14 + 0x2e8]
21bc14 add      rax, rcx
21bc17 mov      rcx, rax
21bc1a shr      rcx, 0x21
21bc1e xor      rcx, rax
21bc21 movabs   rax, 0xc4ceb9fe1a85ec53
21bc2b imul     rcx, rbp
21bc2f mov      rdx, rcx
21bc32 shr      rdx, 0x21
21bc36 xor      rdx, rcx
21bc39 mov      rcx, r14
21bc3c imul     rdx, rax
21bc40 mov      rax, rdx
21bc43 shr      rax, 0x21
21bc47 xor      rdx, rax
21bc4a mov      rax, qword ptr [r14 + 0x2e8]
21bc51 shr      rax, 3
21bc55 xor      rax, rdx
21bc58 mov      qword ptr [r14 + 0x2e8], rax
21bc5f call     0x1401ee940
21bc64 mov      rcx, r14
21bc67 mov      rbx, rax
21bc6a call     0x1401ee940
21bc6f xor      edx, edx
21bc71 mov      rcx, r14
21bc74 cmp      rax, rbx
21bc77 setl     dl
21bc7a call     0x1401ee820
21bc7f mov      rax, qword ptr [r14 + 0x2e8]
21bc86 test     r13d, r13d
21bc89 jns      0x14021c7c7
21bc8f cmp      qword ptr [r14 + 0x11b8], rdi
21bc96 jne      0x14021c7d5
21bc9c movsxd   rax, dword ptr [r14 + 0x11e0]
21bca3 movabs   rcx, 0x9de988701ba6de9d
21bcad imul     rax, rcx
21bcb1 mov      rcx, r14
21bcb4 xor      rax, qword ptr [r14 + 0x28]
21bcb8 mov      qword ptr [rsp + 0x60], rax
21bcbd mov      rax, qword ptr [rsp + 0x60]
21bcc2 call     0x1401ee450
21bcc7 test     eax, eax
21bcc9 jne      0x14021c7bb
21bccf cmp      dword ptr [r14 + 0xad0], eax
21bcd6 jne      0x14021c7bb
21bcdc mov      r8, qword ptr [r14 + 0xf0]
21bce3 movzx    ecx, byte ptr [r14 + 0x160]
21bceb mov      rax, r8
21bcee mov      r10, qword ptr [r14 + 0xe0]
21bcf5 mov      rbx, qword ptr [r14 + 0xd0]
21bcfc mov      r11, qword ptr [r14 + 0xd8]
21bd03 movzx    edi, byte ptr [r14 + 0xe8]
21bd0b mov      r9, qword ptr [r14 + 0x1b0]
21bd12 imul     rcx, r10
21bd16 mov      qword ptr [rsp + 0x68], rsi
21bd1b mov      rsi, qword ptr [r14 + 0x1b8]
21bd22 xor      rcx, rbx
21bd25 xor      rcx, r11
21bd28 mov      qword ptr [rsp + 0x28], r12
21bd2d xor      rax, rcx
21bd30 mov      qword ptr [rsp + 0x20], r15
21bd35 sub      r8, rcx
21bd38 movabs   r15, 0x9e3779b97f4a7c15
21bd42 test     dil, dil
21bd45 movabs   r12, 0x2545f4914f6cdd1d
21bd4f cmove    r8, rax
21bd53 inc      rsi
21bd56 imul     r9, r15
21bd5a mov      qword ptr [r14 + 0x1b8], rsi
21bd61 mov      rcx, r8
21bd64 add      r9, r12
21bd67 mov      qword ptr [r14 + 0x1b0], r9
21bd6e mov      rax, r9
21bd71 shr      rax, 0x1b
21bd75 movzx    edx, al
21bd78 mov      byte ptr [r14 + 0x160], dl
21bd7f imul     rdx, r10
21bd83 xor      rdx, rbx
21bd86 xor      rdx, r11
21bd89 xor      rcx, rdx
21bd8c test     dil, dil
21bd8f lea      rax, [r8 + rdx]
21bd93 cmove    rax, rcx
21bd97 mov      qword ptr [r14 + 0xf0], rax
21bd9e cmp      r8d, 0x2a0025
21bda5 jne      0x14021c7ac
21bdab mov      eax, r13d
21bdae btr      eax, 0x1f
21bdb2 cmp      eax, 2
21bdb5 jae      0x14021be01
21bdb7 imul     r9, r15
21bdbb lea      rax, [rsi + 1]
21bdbf mov      qword ptr [r14 + 0x1b8], rax
21bdc6 add      r9, r12
21bdc9 mov      qword ptr [r14 + 0x1b0], r9
21bdd0 shr      r9, 0x1b
21bdd4 movzx    eax, r9b
21bdd8 mov      byte ptr [r14 + 0x160], al
21bddf imul     rax, r10
21bde3 xor      rax, rbx
21bde6 xor      rax, r11
21bde9 mov      rcx, rax
21bdec add      rax, 0x85b36
21bdf2 xor      rcx, 0x85b36
21bdf9 test     dil, dil
21bdfc jmp      0x14021c7a1
21be01 mov      rcx, r14
21be04 call     0x1401ee070
21be09 movzx    ecx, byte ptr [r14 + 0x4ad]
21be11 movabs   r8, 0xc4ceb9fe1a85ec53
21be1b mov      r11, qword ptr [r14 + 0xe0]
21be22 mov      r10, qword ptr [r14 + 0xd0]
21be29 movzx    r9d, byte ptr [r14 + 0xe8]
21be31 mov      eax, eax
21be33 xor      rcx, rax
21be36 xor      rcx, qword ptr [r14 + 0x11e8]
21be3d mov      rax, rcx
21be40 shr      rax, 0x21
21be44 xor      rax, rcx
21be47 imul     rax, rbp
21be4b mov      rcx, rax
21be4e shr      rcx, 0x21
21be52 xor      rcx, rax
21be55 imul     rcx, r8
21be59 mov      rdx, rcx
21be5c shr      rdx, 0x21
21be60 xor      rdx, rcx
21be63 mov      qword ptr [r14 + 0x11e8], rdx
21be6a xor      rdx, qword ptr [r14 + 0x20]
21be6e xor      rdx, qword ptr [r14 + 0x28]
21be72 mov      rax, rdx
21be75 shr      rax, 0x21
21be79 xor      rax, rdx
21be7c imul     rax, rbp
21be80 mov      rcx, rax
21be83 shr      rcx, 0x21
21be87 xor      rcx, rax
21be8a imul     rcx, r8
21be8e mov      rax, rcx
21be91 shr      rax, 0x21
21be95 xor      rax, rcx
21be98 mov      qword ptr [r14 + 0x20], rax
21be9c mov      rdx, qword ptr [r14 + 0x138]
21bea3 movzx    ecx, byte ptr [r14 + 0x169]
21beab mov      rax, qword ptr [r14 + 0xd8]
21beb2 imul     rcx, r11
21beb6 lea      rbx, [rax + rax*4]
21beba mov      rax, rdx
21bebd add      rbx, rbx
21bec0 xor      rcx, rbx
21bec3 xor      rcx, r10
21bec6 xor      rax, rcx
21bec9 sub      rdx, rcx
21becc test     r9b, r9b
21becf cmove    rdx, rax
21bed3 mov      rax, qword ptr [r14 + 0x1b0]
21beda inc      qword ptr [r14 + 0x1b8]
21bee1 imul     rax, r15
21bee5 add      rax, r12
21bee8 mov      qword ptr [r14 + 0x1b0], rax
21beef shr      rax, 0x1b
21bef3 movzx    r8d, al
21bef7 mov      byte ptr [r14 + 0x169], r8b
21befe imul     r8, r11
21bf02 xor      r8, rbx
21bf05 xor      r8, r10
21bf08 mov      rcx, r8
21bf0b xor      rcx, rdx
21bf0e test     r9b, r9b
21bf11 lea      rax, [r8 + rdx]
21bf15 cmove    rax, rcx
21bf19 mov      rcx, r14
21bf1c mov      qword ptr [r14 + 0x138], rax
21bf23 call     0x1401f0910
21bf28 mov      rax, qword ptr [r14 + 0xd8]
21bf2f mov      rdx, qword ptr [r14 + 0x130]
21bf36 mov      r10, qword ptr [r14 + 0xe0]
21bf3d movzx    ecx, byte ptr [r14 + 0x168]
21bf45 mov      rbx, qword ptr [r14 + 0xd0]
21bf4c lea      r11, [rax + rax*8]
21bf50 movzx    r9d, byte ptr [r14 + 0xe8]
21bf58 mov      rax, rdx
21bf5b imul     rcx, r10
21bf5f xor      rcx, r11
21bf62 xor      rcx, rbx
21bf65 xor      rax, rcx
21bf68 sub      rdx, rcx
21bf6b test     r9b, r9b
21bf6e cmove    rdx, rax
21bf72 mov      rax, qword ptr [r14 + 0x1b0]
21bf79 inc      qword ptr [r14 + 0x1b8]
21bf80 mov      rcx, rdx
21bf83 imul     rax, r15
21bf87 add      rax, r12
21bf8a mov      qword ptr [r14 + 0x1b0], rax
21bf91 shr      rax, 0x1b
21bf95 movzx    r8d, al
21bf99 mov      byte ptr [r14 + 0x168], r8b
21bfa0 imul     r8, r10
21bfa4 xor      r8, r11
21bfa7 xor      r8, rbx
21bfaa xor      rcx, r8
21bfad test     r9b, r9b
21bfb0 lea      rax, [rdx + r8]
21bfb4 cmove    rax, rcx
21bfb8 mov      rcx, r14
21bfbb mov      qword ptr [r14 + 0x130], rax
21bfc2 call     0x1401f0910
21bfc7 mov      rcx, r14
21bfca call     0x1401ee070
21bfcf cmp      eax, dword ptr [r14 + 0x1d8]
21bfd6 jae      0x14021bfe2
21bfd8 mov      edx, eax
21bfda mov      rcx, r14
21bfdd call     0x1401f0910
21bfe2 mov      rsi, qword ptr [r14 + 0xe0]
21bfe9 mov      rbp, qword ptr [r14 + 0xd0]
21bff0 mov      r11, qword ptr [r14 + 0x130]
21bff7 movzx    edi, byte ptr [r14 + 0xe8]
21bfff mov      rax, r11
21c002 movzx    ecx, byte ptr [r14 + 0x168]
21c00a mov      rbx, qword ptr [r14 + 0xd8]
21c011 mov      r8, qword ptr [r14 + 0x1b8]
21c018 mov      r10, qword ptr [r14 + 0x1b0]
21c01f imul     rcx, rsi
21c023 lea      r9, [rbx + rbx*8]
21c027 xor      rcx, r9
21c02a xor      rcx, rbp
21c02d xor      rax, rcx
21c030 sub      r11, rcx
21c033 test     dil, dil
21c036 cmove    r11, rax
21c03a imul     r10, r15
21c03e mov      rcx, r11
21c041 add      r10, r12
21c044 mov      rax, r10
21c047 shr      rax, 0x1b
21c04b movzx    edx, al
21c04e mov      byte ptr [r14 + 0x168], dl
21c055 imul     rdx, rsi
21c059 xor      rdx, r9
21c05c xor      rdx, rbp
21c05f xor      rcx, rdx
21c062 test     dil, dil
21c065 lea      rax, [r11 + rdx]
21c069 cmove    rax, rcx
21c06d mov      rcx, r11
21c070 mov      qword ptr [r14 + 0x130], rax
21c077 lea      rax, [r8 + 2]
21c07b mov      qword ptr [r14 + 0x1b8], rax
21c082 mov      r8d, 0xcfc4
21c088 imul     r10, r15
21c08c lea      rax, [rbx + rbx*4]
21c090 add      rax, rax
21c093 add      r10, r12
21c096 mov      qword ptr [r14 + 0x1b0], r10
21c09d shr      r10, 0x1b
21c0a1 movzx    edx, r10b
21c0a5 mov      byte ptr [r14 + 0x169], dl
21c0ac imul     rdx, rsi
21c0b0 xor      rdx, rax
21c0b3 xor      rdx, rbp
21c0b6 xor      rcx, rdx
21c0b9 test     dil, dil
21c0bc lea      rax, [r11 + rdx]
21c0c0 cmove    rax, rcx
21c0c4 mov      rcx, r14
21c0c7 mov      qword ptr [r14 + 0x138], rax
21c0ce movzx    edx, byte ptr [r14 + 0x4ad]
21c0d6 xor      rdx, qword ptr [r14 + 0x348]
21c0dd call     0x1401f1520
21c0e2 mov      r8, qword ptr [r14 + 0x348]
21c0e9 movabs   rdi, 0xff51afd7ed558ccd
21c0f3 mov      rax, r8
21c0f6 movabs   rsi, 0xc4ceb9fe1a85ec53
21c100 xor      rax, qword ptr [r14 + 0x20]
21c104 mov      rcx, rax
21c107 shr      rcx, 0x21
21c10b xor      rcx, rax
21c10e imul     rcx, rdi
21c112 mov      rax, rcx
21c115 shr      rax, 0x21
21c119 xor      rax, rcx
21c11c imul     rax, rsi
21c120 mov      rdx, rax
21c123 shr      rdx, 0x21
21c127 xor      edx, eax
21c129 lea      eax, [rdx + 1]
21c12c mov      ecx, eax
21c12e xor      eax, edx
21c130 imul     ecx, edx
21c133 not      ecx
21c135 and      ecx, eax
21c137 test     cl, 1
21c13a je       0x14021c1a3
21c13c and      r8b, 3
21c140 cmp      r8b, 1
21c144 jne      0x14021c1a3
21c146 mov      rax, qword ptr [r14 + 0x1b0]
21c14d inc      qword ptr [r14 + 0x1b8]
21c154 imul     rax, r15
21c158 add      rax, r12
21c15b mov      qword ptr [r14 + 0x1b0], rax
21c162 shr      rax, 0x1b
21c166 movzx    eax, al
21c169 mov      byte ptr [r14 + 0x160], al
21c170 imul     rax, qword ptr [r14 + 0xe0]
21c178 xor      rax, qword ptr [r14 + 0xd8]
21c17f xor      rax, qword ptr [r14 + 0xd0]
21c186 mov      rcx, rax
21c189 add      rax, 0x3dd18f
21c18f xor      rcx, 0x3dd18f
21c196 cmp      byte ptr [r14 + 0xe8], 0
21c19e jmp      0x14021c7a1
21c1a3 mov      rcx, r14
21c1a6 call     0x1401ee070
21c1ab mov      ebx, eax
21c1ad cmp      eax, dword ptr [r14 + 0x1d8]
21c1b4 jb       0x14021c213
21c1b6 mov      rax, qword ptr [r14 + 0x1b0]
21c1bd inc      qword ptr [r14 + 0x1b8]
21c1c4 imul     rax, r15
21c1c8 add      rax, r12
21c1cb mov      qword ptr [r14 + 0x1b0], rax
21c1d2 shr      rax, 0x1b
21c1d6 movzx    eax, al
21c1d9 mov      byte ptr [r14 + 0x160], al
21c1e0 imul     rax, qword ptr [r14 + 0xe0]
21c1e8 xor      rax, qword ptr [r14 + 0xd8]
21c1ef xor      rax, qword ptr [r14 + 0xd0]
21c1f6 mov      rcx, rax
21c1f9 add      rax, 0xfe1ab
21c1ff xor      rcx, 0xfe1ab
21c206 cmp      byte ptr [r14 + 0xe8], 0
21c20e jmp      0x14021c7a1
21c213 mov      edx, ebx
21c215 mov      rcx, r14
21c218 call     0x1401f25b0
21c21d movsxd   rcx, dword ptr [r14 + 0x11e0]
21c224 movabs   r8, 0xd6e8feb86659fd93
21c22e mov      rdx, qword ptr [r14 + 0x20]
21c232 mov      rax, rbx
21c235 imul     rax, r8
21c239 imul     rcx, r15
21c23d rol      rdx, 0x11
21c241 xor      rax, rdx
21c244 xor      rcx, qword ptr [r14 + 0x260]
21c24b xor      rax, rcx
21c24e mov      rcx, rax
21c251 shr      rcx, 0x21
21c255 xor      rcx, rax
21c258 imul     rcx, rdi
21c25c mov      rdx, rcx
21c25f shr      rdx, 0x21
21c263 xor      rdx, rcx
21c266 imul     rdx, rsi
21c26a mov      rax, rdx
21c26d shr      rax, 0x21
21c271 xor      rax, rdx
21c274 mov      r10, rax
21c277 shr      r10, 0x1d
21c27b xor      r10, rax
21c27e or       r10, 1
21c282 mov      rax, r10
21c285 mov      qword ptr [r14 + 0x260], r10
21c28c and      eax, 0x3ff
21c291 cmp      rax, 0x2c5
21c297 jne      0x14021c2a8
21c299 mov      rcx, r14
21c29c call     0x1402297e0
21c2a1 mov      r10, qword ptr [r14 + 0x260]
21c2a8 movzx    eax, r10b
21c2ac and      al, 0x1f
21c2ae cmp      al, 0x15
21c2b0 jne      0x14021c39d
21c2b6 movsxd   rax, dword ptr [r14 + 0x11e0]
21c2bd xor      rax, 0x5a5a
21c2c3 mov      rcx, qword ptr [r14 + 0x20]
21c2c7 imul     rax, r15
21c2cb rol      rcx, 0x11
21c2cf xor      rax, r10
21c2d2 xor      rcx, rax
21c2d5 movabs   rax, 0x8f70feda99a6026d
21c2df xor      rcx, rax
21c2e2 mov      rax, rcx
21c2e5 shr      rax, 0x21
21c2e9 xor      rax, rcx
21c2ec imul     rax, rdi
21c2f0 mov      rcx, rax
21c2f3 shr      rcx, 0x21
21c2f7 xor      rcx, rax
21c2fa imul     rcx, rsi
21c2fe mov      rax, rcx
21c301 shr      rax, 0x21
21c305 xor      rax, rcx
21c308 mov      r9, rax
21c30b shr      r9, 0x1d
21c30f xor      r9, rax
21c312 or       r9, 1
21c316 mov      rax, r9
21c319 mov      rcx, r9
21c31c shr      rax, 8
21c320 and      eax, 3
21c323 shr      rcx, 0x28
21c327 imul     r8, rax, 0x3e
21c32b mov      eax, 0x8421085
21c330 mul      ecx
21c332 mov      eax, ecx
21c334 sub      eax, edx
21c336 shr      eax, 1
21c338 add      eax, edx
21c33a shr      eax, 5
21c33d imul     eax, eax, 0x3e
21c340 sub      ecx, eax
21c342 mov      eax, ecx
21c344 add      r8, rax
21c347 mov      rax, qword ptr [r14 + 0x4b8]
21c34e movsxd   rcx, dword ptr [rax + r8*4]
21c352 movsxd   rax, dword ptr [r14 + 0x4c8]
21c359 xor      rcx, rax
21c35c add      rcx, qword ptr [r14 + 0x4c0]
21c363 xor      rcx, r9
21c366 mov      rax, rcx
21c369 shr      rax, 0x21
21c36d xor      rax, rcx
21c370 imul     rax, rdi
21c374 mov      rcx, rax
21c377 shr      rcx, 0x21
21c37b xor      rcx, rax
21c37e imul     rcx, rsi
21c382 mov      rax, rcx
21c385 shr      rax, 0x21
21c389 xor      rax, rcx
21c38c xor      rax, r10
21c38f inc      qword ptr [r14 + 0x268]
21c396 mov      qword ptr [r14 + 0x260], rax
21c39d inc      dword ptr [r14 + 0x200]
21c3a4 mov      eax, dword ptr [r14 + 0x200]
21c3ab cmp      eax, dword ptr [r14 + 0x1fc]
21c3b2 jb       0x14021c3c7
21c3b4 mov      rcx, r14
21c3b7 mov      dword ptr [r14 + 0x200], 0
21c3c2 call     0x1401ef7c0
21c3c7 mov      r8d, ebx
21c3ca mov      edx, ebx
21c3cc mov      rcx, r14
21c3cf call     0x1401f0660
21c3d4 inc      qword ptr [r14 + 0x1b8]
21c3db mov      rcx, rbx
21c3de mov      r9, qword ptr [r14 + 0x1b0]
21c3e5 mov      rbp, r12
21c3e8 mov      r10, qword ptr [r14 + 0x1b8]
21c3ef imul     r9, r15
21c3f3 add      r9, r12
21c3f6 lea      r12d, [rbx + 1]
21c3fa mov      qword ptr [r14 + 0x1b0], r9
21c401 mov      rax, r9
21c404 shr      rax, 0x1b
21c408 movzx    edx, al
21c40b mov      byte ptr [r14 + 0x168], dl
21c412 mov      rdi, qword ptr [r14 + 0xe0]
21c419 mov      r11, qword ptr [r14 + 0xd8]
21c420 mov      rsi, qword ptr [r14 + 0xd0]
21c427 movzx    r15d, byte ptr [r14 + 0xe8]
21c42f imul     rdx, rdi
21c433 lea      rax, [r11 + r11*8]
21c437 xor      rdx, rax
21c43a xor      rdx, rsi
21c43d xor      rcx, rdx
21c440 test     r15b, r15b
21c443 lea      rax, [rbx + rdx]
21c447 cmove    rax, rcx
21c44b inc      r10
21c44e mov      qword ptr [r14 + 0x130], rax
21c455 mov      rcx, qword ptr [r14 + 0x1d0]
21c45c mov      rax, qword ptr [r14 + 0x48]
21c460 mov      qword ptr [rsp + 0x60], r10
21c465 movzx    r8d, byte ptr [rcx + rbx]
21c46a xor      r8b, byte ptr [rax + rbx]
21c46e movabs   rax, 0x9e3779b97f4a7c15
21c478 imul     r9, rax
21c47c mov      qword ptr [r14 + 0x1b8], r10
21c483 add      r9, rbp
21c486 mov      rax, r9
21c489 shr      rax, 0x1b
21c48d movzx    edx, al
21c490 lea      rax, [r11 + r11]
21c494 mov      byte ptr [r14 + 0x161], dl
21c49b imul     rdx, rdi
21c49f xor      rdx, rax
21c4a2 xor      rdx, rsi
21c4a5 mov      rcx, rdx
21c4a8 xor      rcx, r12
21c4ab test     r15b, r15b
21c4ae lea      rax, [rdx + r12]
21c4b2 cmove    rax, rcx
21c4b6 mov      qword ptr [r14 + 0xf8], rax
21c4bd movsxd   rdx, dword ptr [r14 + 0x11e0]
21c4c4 mov      r10, qword ptr [r14 + 0x20]
21c4c8 mov      rcx, rdx
21c4cb xor      rcx, qword ptr [r14 + 0x350]
21c4d2 xor      rcx, r10
21c4d5 xor      rcx, r12
21c4d8 xor      rcx, qword ptr [r14 + 0x348]
21c4df mov      rax, rcx
21c4e2 shr      rax, 0x21
21c4e6 xor      rax, rcx
21c4e9 movabs   rcx, 0xff51afd7ed558ccd
21c4f3 imul     rax, rcx
21c4f7 mov      rcx, rax
21c4fa shr      rcx, 0x21
21c4fe xor      rcx, rax
21c501 movabs   rax, 0xc4ceb9fe1a85ec53
21c50b imul     rcx, rax
21c50f movzx    eax, r8b
21c513 mov      rbx, rcx
21c516 xor      rax, 0xdd
21c51c shr      rbx, 0x21
21c520 xor      rbx, rcx
21c523 lea      rcx, [rip - 0x21c52a]
21c52a mov      qword ptr [r14 + 0x28], rbx
21c52e movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
21c536 xor      bpl, 0x63
21c53a inc      edx
21c53c mov      dword ptr [r14 + 0x11e0], edx
21c543 movabs   r8, 0xff51afd7ed558ccd
21c54d test     dl, 0x1f
21c550 jne      0x14021c596
21c552 movsxd   rax, edx
21c555 xor      rax, r10
21c558 xor      rax, qword ptr [r14 + 0x348]
21c55f mov      rcx, rax
21c562 shr      rcx, 0x21
21c566 xor      rcx, rax
21c569 movabs   rax, 0xc4ceb9fe1a85ec53
21c573 imul     rcx, r8
21c577 mov      rdx, rcx
21c57a shr      rdx, 0x21
21c57e xor      rdx, rcx
21c581 imul     rdx, rax
21c585 mov      rax, rdx
21c588 shr      rax, 0x21
21c58c xor      rax, rdx
21c58f mov      qword ptr [r14 + 0x348], rax
21c596 movzx    edx, bpl
21c59a xor      r10, rdx
21c59d mov      byte ptr [r14 + 0x4ad], bpl
21c5a4 xor      r10, r12
21c5a7 movabs   r12, 0xc4ceb9fe1a85ec53
21c5b1 mov      rax, r10
21c5b4 shr      rax, 0x21
21c5b8 xor      rax, r10
21c5bb movabs   r10, 0x9e3779b97f4a7c15
21c5c5 imul     rax, r8
21c5c9 imul     rdx, r10
21c5cd imul     r9, r10
21c5d1 mov      rcx, rax
21c5d4 shr      rcx, 0x21
21c5d8 xor      rcx, rax
21c5db imul     rcx, r12
21c5df mov      rax, rcx
21c5e2 shr      rax, 0x21
21c5e6 xor      rax, rcx
21c5e9 mov      ecx, dword ptr [r14 + 0x1178]
21c5f0 mov      qword ptr [r14 + 0x20], rax
21c5f4 movabs   rax, 0xd6e8feb86659fd93
21c5fe imul     rcx, rax
21c602 xor      rcx, rdx
21c605 xor      rcx, rbx
21c608 movabs   rbx, 0x2545f4914f6cdd1d
21c612 mov      rax, rcx
21c615 add      r9, rbx
21c618 shr      rax, 0x21
21c61c xor      rax, rcx
21c61f imul     rax, r8
21c623 mov      rdx, rax
21c626 shr      rdx, 0x21
21c62a xor      rdx, rax
21c62d mov      rax, qword ptr [rsp + 0x60]
21c632 imul     rdx, r12
21c636 shr      rdx, 0x21
21c63a and      edx, 3
21c63d inc      rax
21c640 mov      qword ptr [r14 + 0x1b8], rax
21c647 cmp      bpl, 0x3e
21c64b jae      0x14021c6e5
21c651 inc      qword ptr [r14 + 0x11a0]
21c658 lea      rax, [rip - 0x21c65f]
21c65f mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
21c667 mov      qword ptr [r14 + 0x1b0], r9
21c66e shr      r9, 0x1b
21c672 movzx    eax, r9b
21c676 mov      byte ptr [r14 + 0x160], al
21c67d imul     rax, rdi
21c681 mov      ebx, edx
21c683 xor      rax, rsi
21c686 xor      rax, r11
21c689 mov      rcx, rax
21c68c add      rax, r8
21c68f xor      rcx, r8
21c692 movzx    r8d, bpl
21c696 test     r15b, r15b
21c699 cmove    rax, rcx
21c69d mov      rcx, r14
21c6a0 mov      qword ptr [r14 + 0xf0], rax
21c6a7 call     0x1401f1f50
21c6ac mov      r8, qword ptr [rsp + 0x70]
21c6b1 lea      edx, [r13 - 1]
21c6b5 mov      eax, eax
21c6b7 imul     rcx, rbx, 0x3e
21c6bb add      rcx, rax
21c6be mov      rax, qword ptr [r14 + 0x4b8]
21c6c5 movsxd   r9, dword ptr [rax + rcx*4]
21c6c9 mov      rcx, r14
21c6cc movsxd   rax, dword ptr [r14 + 0x4c8]
21c6d3 xor      r9, rax
21c6d6 add      r9, qword ptr [r14 + 0x4c0]
21c6dd call     r9
21c6e0 jmp      0x14021c7ac
21c6e5 inc      dword ptr [r14 + 0x11a8]
21c6ec mov      rax, r9
21c6ef shr      rax, 0x1b
21c6f3 movzx    ecx, al
21c6f6 lea      rax, [r11*4]
21c6fe mov      byte ptr [r14 + 0x163], cl
21c705 imul     rcx, rdi
21c709 imul     r9, r10
21c70d xor      rcx, rax
21c710 xor      rcx, rsi
21c713 mov      qword ptr [r14 + 0x108], rcx
21c71a mov      r8, qword ptr [r14 + 0x1b8]
21c721 add      r9, rbx
21c724 mov      rax, r9
21c727 shr      rax, 0x1b
21c72b movzx    edx, al
21c72e mov      byte ptr [r14 + 0x16a], dl
21c735 imul     rax, r11, 0xb
21c739 imul     rdx, rdi
21c73d xor      rdx, rax
21c740 xor      rdx, rsi
21c743 mov      rcx, rdx
21c746 xor      rcx, 1
21c74a test     r15b, r15b
21c74d lea      rax, [rdx + 1]
21c751 cmove    rax, rcx
21c755 mov      qword ptr [r14 + 0x140], rax
21c75c lea      rax, [r8 + 2]
21c760 mov      qword ptr [r14 + 0x1b8], rax
21c767 imul     r9, r10
21c76b add      r9, rbx
21c76e mov      qword ptr [r14 + 0x1b0], r9
21c775 shr      r9, 0x1b
21c779 movzx    eax, r9b
21c77d mov      byte ptr [r14 + 0x160], al
21c784 imul     rax, rdi
21c788 xor      rax, rsi
21c78b xor      rax, r11
21c78e mov      rcx, rax
21c791 add      rax, 0xfe1ab
21c797 xor      rcx, 0xfe1ab
21c79e test     r15b, r15b
21c7a1 cmove    rax, rcx
21c7a5 mov      qword ptr [r14 + 0xf0], rax
21c7ac mov      r12, qword ptr [rsp + 0x28]
21c7b1 mov      rsi, qword ptr [rsp + 0x68]
21c7b6 mov      r15, qword ptr [rsp + 0x20]
21c7bb add      rsp, 0x30
21c7bf pop      r14
21c7c1 pop      r13
21c7c3 pop      rdi
21c7c4 pop      rbp
21c7c5 pop      rbx
21c7c6 ret      
21c7c7 mov      edx, 0x54485254
21c7cc mov      rcx, r14
21c7cf call     0x1401ed830
21c7d4 int3     
21c7d5 mov      edx, 0x43414e59
21c7da mov      rcx, r14
21c7dd call     0x1401ed830
21c7e2 int3     
