20b9d0 mov      qword ptr [rsp + 0x18], r8
20b9d5 push     rbx
20b9d6 push     rbp
20b9d7 push     rdi
20b9d8 push     r13
20b9da push     r14
20b9dc sub      rsp, 0x30
20b9e0 movsxd   rax, dword ptr [rcx + 0x11e0]
20b9e7 mov      r14, rcx
20b9ea mov      r13d, edx
20b9ed movabs   rcx, 0x1985cdc6e9f70cf4
20b9f7 imul     rax, rcx
20b9fb movabs   rcx, 0xbbdc470d682988cb
20ba05 movabs   rbp, 0xff51afd7ed558ccd
20ba0f xor      rax, qword ptr [r14 + 0x28]
20ba13 mov      rdi, r8
20ba16 mov      qword ptr [rsp + 0x60], rax
20ba1b mov      rax, qword ptr [rsp + 0x60]
20ba20 movsxd   rax, dword ptr [r14 + 0x11e0]
20ba27 imul     rax, rcx
20ba2b movabs   rcx, 0x5d14d953eb6204de
20ba35 xor      rax, qword ptr [r14 + 0x28]
20ba39 mov      qword ptr [rsp + 0x60], rax
20ba3e mov      rax, qword ptr [rsp + 0x60]
20ba43 movsxd   rax, dword ptr [r14 + 0x11e0]
20ba4a imul     rax, rcx
20ba4e movabs   rcx, 0x3099242b9f5b6f1b
20ba58 xor      rax, qword ptr [r14 + 0x28]
20ba5c mov      qword ptr [rsp + 0x60], rax
20ba61 mov      rax, qword ptr [rsp + 0x60]
20ba66 mov      rax, qword ptr [r14 + 0x2f8]
20ba6d sub      rax, rcx
20ba70 mov      rcx, rax
20ba73 shr      rcx, 0x21
20ba77 xor      rcx, rax
20ba7a movabs   rax, 0xc4ceb9fe1a85ec53
20ba84 imul     rcx, rbp
20ba88 mov      rdx, rcx
20ba8b shr      rdx, 0x21
20ba8f xor      rdx, rcx
20ba92 mov      rcx, r14
20ba95 imul     rdx, rax
20ba99 mov      rax, rdx
20ba9c shr      rax, 0x21
20baa0 xor      rdx, rax
20baa3 mov      rax, qword ptr [r14 + 0x2f8]
20baaa or       rdx, 1
20baae xor      rdx, rax
20bab1 mov      qword ptr [r14 + 0x2f8], rdx
20bab8 call     0x1401f1e80
20babd mov      ebx, eax
20babf mov      rcx, r14
20bac2 and      ebx, 0x3f
20bac5 call     0x1401ee940
20baca mov      ecx, 0x40
20bacf sub      ecx, ebx
20bad1 shl      rax, cl
20bad4 sar      rax, cl
20bad7 mov      rcx, r14
20bada mov      rdx, rax
20badd call     0x1401ee820
20bae2 mov      rax, qword ptr [r14 + 0x2f8]
20bae9 test     r13d, r13d
20baec jns      0x14020c62a
20baf2 cmp      qword ptr [r14 + 0x11b8], rdi
20baf9 jne      0x14020c638
20baff movsxd   rax, dword ptr [r14 + 0x11e0]
20bb06 movabs   rcx, 0xbce4f4a6f42371f
20bb10 imul     rax, rcx
20bb14 mov      rcx, r14
20bb17 xor      rax, qword ptr [r14 + 0x28]
20bb1b mov      qword ptr [rsp + 0x60], rax
20bb20 mov      rax, qword ptr [rsp + 0x60]
20bb25 call     0x1401ee450
20bb2a test     eax, eax
20bb2c jne      0x14020c61e
20bb32 cmp      dword ptr [r14 + 0xad0], eax
20bb39 jne      0x14020c61e
20bb3f mov      r8, qword ptr [r14 + 0xf0]
20bb46 movzx    ecx, byte ptr [r14 + 0x160]
20bb4e mov      rax, r8
20bb51 mov      r10, qword ptr [r14 + 0xe0]
20bb58 mov      rbx, qword ptr [r14 + 0xd0]
20bb5f mov      r11, qword ptr [r14 + 0xd8]
20bb66 movzx    edi, byte ptr [r14 + 0xe8]
20bb6e mov      r9, qword ptr [r14 + 0x1b0]
20bb75 imul     rcx, r10
20bb79 mov      qword ptr [rsp + 0x68], rsi
20bb7e mov      rsi, qword ptr [r14 + 0x1b8]
20bb85 xor      rcx, rbx
20bb88 xor      rcx, r11
20bb8b mov      qword ptr [rsp + 0x28], r12
20bb90 xor      rax, rcx
20bb93 mov      qword ptr [rsp + 0x20], r15
20bb98 sub      r8, rcx
20bb9b movabs   r15, 0x9e3779b97f4a7c15
20bba5 test     dil, dil
20bba8 movabs   r12, 0x2545f4914f6cdd1d
20bbb2 cmove    r8, rax
20bbb6 inc      rsi
20bbb9 imul     r9, r15
20bbbd mov      qword ptr [r14 + 0x1b8], rsi
20bbc4 add      r9, r12
20bbc7 mov      qword ptr [r14 + 0x1b0], r9
20bbce mov      rax, r9
20bbd1 shr      rax, 0x1b
20bbd5 movzx    edx, al
20bbd8 mov      byte ptr [r14 + 0x160], dl
20bbdf imul     rdx, r10
20bbe3 xor      rdx, rbx
20bbe6 xor      rdx, r11
20bbe9 mov      rcx, rdx
20bbec xor      rcx, r8
20bbef test     dil, dil
20bbf2 lea      rax, [rdx + r8]
20bbf6 cmove    rax, rcx
20bbfa mov      qword ptr [r14 + 0xf0], rax
20bc01 cmp      r8d, 0x338040
20bc08 jne      0x14020c60f
20bc0e mov      eax, r13d
20bc11 btr      eax, 0x1f
20bc15 cmp      eax, 2
20bc18 jae      0x14020bc64
20bc1a imul     r9, r15
20bc1e lea      rax, [rsi + 1]
20bc22 mov      qword ptr [r14 + 0x1b8], rax
20bc29 add      r9, r12
20bc2c mov      qword ptr [r14 + 0x1b0], r9
20bc33 shr      r9, 0x1b
20bc37 movzx    eax, r9b
20bc3b mov      byte ptr [r14 + 0x160], al
20bc42 imul     rax, r10
20bc46 xor      rax, rbx
20bc49 xor      rax, r11
20bc4c mov      rcx, rax
20bc4f add      rax, 0x1ad951
20bc55 xor      rcx, 0x1ad951
20bc5c test     dil, dil
20bc5f jmp      0x14020c604
20bc64 mov      rcx, r14
20bc67 call     0x1401ee070
20bc6c movzx    ecx, byte ptr [r14 + 0x4ad]
20bc74 movabs   r8, 0xc4ceb9fe1a85ec53
20bc7e mov      r11, qword ptr [r14 + 0xe0]
20bc85 mov      r10, qword ptr [r14 + 0xd0]
20bc8c movzx    r9d, byte ptr [r14 + 0xe8]
20bc94 mov      eax, eax
20bc96 xor      rcx, rax
20bc99 xor      rcx, qword ptr [r14 + 0x11e8]
20bca0 mov      rax, rcx
20bca3 shr      rax, 0x21
20bca7 xor      rax, rcx
20bcaa imul     rax, rbp
20bcae mov      rcx, rax
20bcb1 shr      rcx, 0x21
20bcb5 xor      rcx, rax
20bcb8 imul     rcx, r8
20bcbc mov      rdx, rcx
20bcbf shr      rdx, 0x21
20bcc3 xor      rdx, rcx
20bcc6 mov      qword ptr [r14 + 0x11e8], rdx
20bccd xor      rdx, qword ptr [r14 + 0x20]
20bcd1 xor      rdx, qword ptr [r14 + 0x28]
20bcd5 mov      rax, rdx
20bcd8 shr      rax, 0x21
20bcdc xor      rax, rdx
20bcdf imul     rax, rbp
20bce3 mov      rcx, rax
20bce6 shr      rcx, 0x21
20bcea xor      rcx, rax
20bced imul     rcx, r8
20bcf1 mov      rax, rcx
20bcf4 shr      rax, 0x21
20bcf8 xor      rax, rcx
20bcfb mov      qword ptr [r14 + 0x20], rax
20bcff mov      rdx, qword ptr [r14 + 0x138]
20bd06 movzx    ecx, byte ptr [r14 + 0x169]
20bd0e mov      rax, qword ptr [r14 + 0xd8]
20bd15 imul     rcx, r11
20bd19 lea      rbx, [rax + rax*4]
20bd1d mov      rax, rdx
20bd20 add      rbx, rbx
20bd23 xor      rcx, rbx
20bd26 xor      rcx, r10
20bd29 xor      rax, rcx
20bd2c sub      rdx, rcx
20bd2f test     r9b, r9b
20bd32 cmove    rdx, rax
20bd36 mov      rax, qword ptr [r14 + 0x1b0]
20bd3d inc      qword ptr [r14 + 0x1b8]
20bd44 imul     rax, r15
20bd48 add      rax, r12
20bd4b mov      qword ptr [r14 + 0x1b0], rax
20bd52 shr      rax, 0x1b
20bd56 movzx    r8d, al
20bd5a mov      byte ptr [r14 + 0x169], r8b
20bd61 imul     r8, r11
20bd65 xor      r8, rbx
20bd68 xor      r8, r10
20bd6b mov      rcx, r8
20bd6e xor      rcx, rdx
20bd71 test     r9b, r9b
20bd74 lea      rax, [r8 + rdx]
20bd78 cmove    rax, rcx
20bd7c mov      rcx, r14
20bd7f mov      qword ptr [r14 + 0x138], rax
20bd86 call     0x1401f0910
20bd8b mov      rax, qword ptr [r14 + 0xd8]
20bd92 mov      rdx, qword ptr [r14 + 0x130]
20bd99 mov      r10, qword ptr [r14 + 0xe0]
20bda0 movzx    ecx, byte ptr [r14 + 0x168]
20bda8 mov      rbx, qword ptr [r14 + 0xd0]
20bdaf lea      r11, [rax + rax*8]
20bdb3 movzx    r9d, byte ptr [r14 + 0xe8]
20bdbb mov      rax, rdx
20bdbe imul     rcx, r10
20bdc2 xor      rcx, r11
20bdc5 xor      rcx, rbx
20bdc8 xor      rax, rcx
20bdcb sub      rdx, rcx
20bdce test     r9b, r9b
20bdd1 cmove    rdx, rax
20bdd5 mov      rax, qword ptr [r14 + 0x1b0]
20bddc inc      qword ptr [r14 + 0x1b8]
20bde3 imul     rax, r15
20bde7 add      rax, r12
20bdea mov      qword ptr [r14 + 0x1b0], rax
20bdf1 shr      rax, 0x1b
20bdf5 movzx    r8d, al
20bdf9 mov      byte ptr [r14 + 0x168], r8b
20be00 imul     r8, r10
20be04 xor      r8, r11
20be07 xor      r8, rbx
20be0a mov      rcx, r8
20be0d xor      rcx, rdx
20be10 test     r9b, r9b
20be13 lea      rax, [r8 + rdx]
20be17 cmove    rax, rcx
20be1b mov      rcx, r14
20be1e mov      qword ptr [r14 + 0x130], rax
20be25 call     0x1401f0910
20be2a mov      rcx, r14
20be2d call     0x1401ee070
20be32 cmp      eax, dword ptr [r14 + 0x1d8]
20be39 jae      0x14020be45
20be3b mov      edx, eax
20be3d mov      rcx, r14
20be40 call     0x1401f0910
20be45 mov      rsi, qword ptr [r14 + 0xe0]
20be4c mov      rbp, qword ptr [r14 + 0xd0]
20be53 mov      r11, qword ptr [r14 + 0x130]
20be5a movzx    edi, byte ptr [r14 + 0xe8]
20be62 mov      rax, r11
20be65 movzx    ecx, byte ptr [r14 + 0x168]
20be6d mov      rbx, qword ptr [r14 + 0xd8]
20be74 mov      r8, qword ptr [r14 + 0x1b8]
20be7b mov      r10, qword ptr [r14 + 0x1b0]
20be82 imul     rcx, rsi
20be86 lea      r9, [rbx + rbx*8]
20be8a xor      rcx, r9
20be8d xor      rcx, rbp
20be90 xor      rax, rcx
20be93 sub      r11, rcx
20be96 test     dil, dil
20be99 cmove    r11, rax
20be9d imul     r10, r15
20bea1 mov      rcx, r11
20bea4 add      r10, r12
20bea7 mov      rax, r10
20beaa shr      rax, 0x1b
20beae movzx    edx, al
20beb1 mov      byte ptr [r14 + 0x168], dl
20beb8 imul     rdx, rsi
20bebc xor      rdx, r9
20bebf xor      rdx, rbp
20bec2 xor      rcx, rdx
20bec5 test     dil, dil
20bec8 lea      rax, [r11 + rdx]
20becc cmove    rax, rcx
20bed0 mov      rcx, r11
20bed3 mov      qword ptr [r14 + 0x130], rax
20beda lea      rax, [r8 + 2]
20bede mov      qword ptr [r14 + 0x1b8], rax
20bee5 mov      r8d, 0xec90
20beeb imul     r10, r15
20beef lea      rax, [rbx + rbx*4]
20bef3 add      rax, rax
20bef6 add      r10, r12
20bef9 mov      qword ptr [r14 + 0x1b0], r10
20bf00 shr      r10, 0x1b
20bf04 movzx    edx, r10b
20bf08 mov      byte ptr [r14 + 0x169], dl
20bf0f imul     rdx, rsi
20bf13 xor      rdx, rax
20bf16 xor      rdx, rbp
20bf19 xor      rcx, rdx
20bf1c test     dil, dil
20bf1f lea      rax, [r11 + rdx]
20bf23 cmove    rax, rcx
20bf27 mov      rcx, r14
20bf2a mov      qword ptr [r14 + 0x138], rax
20bf31 movzx    edx, byte ptr [r14 + 0x4ad]
20bf39 xor      rdx, qword ptr [r14 + 0x348]
20bf40 call     0x1401f1520
20bf45 mov      r8, qword ptr [r14 + 0x348]
20bf4c movabs   rdi, 0xff51afd7ed558ccd
20bf56 mov      rax, r8
20bf59 movabs   rsi, 0xc4ceb9fe1a85ec53
20bf63 xor      rax, qword ptr [r14 + 0x20]
20bf67 mov      rcx, rax
20bf6a shr      rcx, 0x21
20bf6e xor      rcx, rax
20bf71 imul     rcx, rdi
20bf75 mov      rax, rcx
20bf78 shr      rax, 0x21
20bf7c xor      rax, rcx
20bf7f imul     rax, rsi
20bf83 mov      rdx, rax
20bf86 shr      rdx, 0x21
20bf8a xor      edx, eax
20bf8c lea      eax, [rdx + 1]
20bf8f mov      ecx, eax
20bf91 xor      eax, edx
20bf93 imul     ecx, edx
20bf96 not      ecx
20bf98 and      ecx, eax
20bf9a test     cl, 1
20bf9d je       0x14020c006
20bf9f and      r8b, 3
20bfa3 cmp      r8b, 1
20bfa7 jne      0x14020c006
20bfa9 mov      rax, qword ptr [r14 + 0x1b0]
20bfb0 inc      qword ptr [r14 + 0x1b8]
20bfb7 imul     rax, r15
20bfbb add      rax, r12
20bfbe mov      qword ptr [r14 + 0x1b0], rax
20bfc5 shr      rax, 0x1b
20bfc9 movzx    eax, al
20bfcc mov      byte ptr [r14 + 0x160], al
20bfd3 imul     rax, qword ptr [r14 + 0xe0]
20bfdb xor      rax, qword ptr [r14 + 0xd8]
20bfe2 xor      rax, qword ptr [r14 + 0xd0]
20bfe9 mov      rcx, rax
20bfec add      rax, 0x190631
20bff2 xor      rcx, 0x190631
20bff9 cmp      byte ptr [r14 + 0xe8], 0
20c001 jmp      0x14020c604
20c006 mov      rcx, r14
20c009 call     0x1401ee070
20c00e mov      ebx, eax
20c010 cmp      eax, dword ptr [r14 + 0x1d8]
20c017 jb       0x14020c076
20c019 mov      rax, qword ptr [r14 + 0x1b0]
20c020 inc      qword ptr [r14 + 0x1b8]
20c027 imul     rax, r15
20c02b add      rax, r12
20c02e mov      qword ptr [r14 + 0x1b0], rax
20c035 shr      rax, 0x1b
20c039 movzx    eax, al
20c03c mov      byte ptr [r14 + 0x160], al
20c043 imul     rax, qword ptr [r14 + 0xe0]
20c04b xor      rax, qword ptr [r14 + 0xd8]
20c052 xor      rax, qword ptr [r14 + 0xd0]
20c059 mov      rcx, rax
20c05c add      rax, 0xfe1ab
20c062 xor      rcx, 0xfe1ab
20c069 cmp      byte ptr [r14 + 0xe8], 0
20c071 jmp      0x14020c604
20c076 mov      edx, ebx
20c078 mov      rcx, r14
20c07b call     0x1401f25b0
20c080 movsxd   rcx, dword ptr [r14 + 0x11e0]
20c087 movabs   r8, 0xd6e8feb86659fd93
20c091 mov      rdx, qword ptr [r14 + 0x20]
20c095 mov      rax, rbx
20c098 imul     rax, r8
20c09c imul     rcx, r15
20c0a0 rol      rdx, 0x11
20c0a4 xor      rax, rdx
20c0a7 xor      rcx, qword ptr [r14 + 0x260]
20c0ae xor      rax, rcx
20c0b1 mov      rcx, rax
20c0b4 shr      rcx, 0x21
20c0b8 xor      rcx, rax
20c0bb imul     rcx, rdi
20c0bf mov      rdx, rcx
20c0c2 shr      rdx, 0x21
20c0c6 xor      rdx, rcx
20c0c9 imul     rdx, rsi
20c0cd mov      rax, rdx
20c0d0 shr      rax, 0x21
20c0d4 xor      rax, rdx
20c0d7 mov      r10, rax
20c0da shr      r10, 0x1d
20c0de xor      r10, rax
20c0e1 or       r10, 1
20c0e5 mov      rax, r10
20c0e8 mov      qword ptr [r14 + 0x260], r10
20c0ef and      eax, 0x3ff
20c0f4 cmp      rax, 0x2c5
20c0fa jne      0x14020c10b
20c0fc mov      rcx, r14
20c0ff call     0x1402297e0
20c104 mov      r10, qword ptr [r14 + 0x260]
20c10b movzx    eax, r10b
20c10f and      al, 0x1f
20c111 cmp      al, 0x15
20c113 jne      0x14020c200
20c119 movsxd   rax, dword ptr [r14 + 0x11e0]
20c120 xor      rax, 0x5a5a
20c126 mov      rcx, qword ptr [r14 + 0x20]
20c12a imul     rax, r15
20c12e rol      rcx, 0x11
20c132 xor      rax, r10
20c135 xor      rcx, rax
20c138 movabs   rax, 0x8f70feda99a6026d
20c142 xor      rcx, rax
20c145 mov      rax, rcx
20c148 shr      rax, 0x21
20c14c xor      rax, rcx
20c14f imul     rax, rdi
20c153 mov      rcx, rax
20c156 shr      rcx, 0x21
20c15a xor      rcx, rax
20c15d imul     rcx, rsi
20c161 mov      rax, rcx
20c164 shr      rax, 0x21
20c168 xor      rax, rcx
20c16b mov      r9, rax
20c16e shr      r9, 0x1d
20c172 xor      r9, rax
20c175 or       r9, 1
20c179 mov      rax, r9
20c17c mov      rcx, r9
20c17f shr      rax, 8
20c183 and      eax, 3
20c186 shr      rcx, 0x28
20c18a imul     r8, rax, 0x3e
20c18e mov      eax, 0x8421085
20c193 mul      ecx
20c195 mov      eax, ecx
20c197 sub      eax, edx
20c199 shr      eax, 1
20c19b add      eax, edx
20c19d shr      eax, 5
20c1a0 imul     eax, eax, 0x3e
20c1a3 sub      ecx, eax
20c1a5 mov      eax, ecx
20c1a7 add      r8, rax
20c1aa mov      rax, qword ptr [r14 + 0x4b8]
20c1b1 movsxd   rcx, dword ptr [rax + r8*4]
20c1b5 movsxd   rax, dword ptr [r14 + 0x4c8]
20c1bc xor      rcx, rax
20c1bf add      rcx, qword ptr [r14 + 0x4c0]
20c1c6 xor      rcx, r9
20c1c9 mov      rax, rcx
20c1cc shr      rax, 0x21
20c1d0 xor      rax, rcx
20c1d3 imul     rax, rdi
20c1d7 mov      rcx, rax
20c1da shr      rcx, 0x21
20c1de xor      rcx, rax
20c1e1 imul     rcx, rsi
20c1e5 mov      rax, rcx
20c1e8 shr      rax, 0x21
20c1ec xor      rax, rcx
20c1ef xor      rax, r10
20c1f2 inc      qword ptr [r14 + 0x268]
20c1f9 mov      qword ptr [r14 + 0x260], rax
20c200 inc      dword ptr [r14 + 0x200]
20c207 mov      eax, dword ptr [r14 + 0x200]
20c20e cmp      eax, dword ptr [r14 + 0x1fc]
20c215 jb       0x14020c22a
20c217 mov      rcx, r14
20c21a mov      dword ptr [r14 + 0x200], 0
20c225 call     0x1401ef7c0
20c22a mov      r8d, ebx
20c22d mov      edx, ebx
20c22f mov      rcx, r14
20c232 call     0x1401f0660
20c237 inc      qword ptr [r14 + 0x1b8]
20c23e mov      rcx, rbx
20c241 mov      r9, qword ptr [r14 + 0x1b0]
20c248 mov      rbp, r12
20c24b mov      r10, qword ptr [r14 + 0x1b8]
20c252 imul     r9, r15
20c256 add      r9, r12
20c259 lea      r12d, [rbx + 1]
20c25d mov      qword ptr [r14 + 0x1b0], r9
20c264 mov      rax, r9
20c267 shr      rax, 0x1b
20c26b movzx    edx, al
20c26e mov      byte ptr [r14 + 0x168], dl
20c275 mov      rdi, qword ptr [r14 + 0xe0]
20c27c mov      r11, qword ptr [r14 + 0xd8]
20c283 mov      rsi, qword ptr [r14 + 0xd0]
20c28a movzx    r15d, byte ptr [r14 + 0xe8]
20c292 imul     rdx, rdi
20c296 lea      rax, [r11 + r11*8]
20c29a xor      rdx, rax
20c29d xor      rdx, rsi
20c2a0 xor      rcx, rdx
20c2a3 test     r15b, r15b
20c2a6 lea      rax, [rbx + rdx]
20c2aa cmove    rax, rcx
20c2ae inc      r10
20c2b1 mov      qword ptr [r14 + 0x130], rax
20c2b8 mov      rcx, qword ptr [r14 + 0x1d0]
20c2bf mov      rax, qword ptr [r14 + 0x48]
20c2c3 mov      qword ptr [rsp + 0x60], r10
20c2c8 movzx    r8d, byte ptr [rcx + rbx]
20c2cd xor      r8b, byte ptr [rax + rbx]
20c2d1 movabs   rax, 0x9e3779b97f4a7c15
20c2db imul     r9, rax
20c2df mov      qword ptr [r14 + 0x1b8], r10
20c2e6 add      r9, rbp
20c2e9 mov      rax, r9
20c2ec shr      rax, 0x1b
20c2f0 movzx    edx, al
20c2f3 lea      rax, [r11 + r11]
20c2f7 mov      byte ptr [r14 + 0x161], dl
20c2fe imul     rdx, rdi
20c302 xor      rdx, rax
20c305 xor      rdx, rsi
20c308 mov      rcx, rdx
20c30b xor      rcx, r12
20c30e test     r15b, r15b
20c311 lea      rax, [rdx + r12]
20c315 cmove    rax, rcx
20c319 mov      qword ptr [r14 + 0xf8], rax
20c320 movsxd   rdx, dword ptr [r14 + 0x11e0]
20c327 mov      r10, qword ptr [r14 + 0x20]
20c32b mov      rcx, rdx
20c32e xor      rcx, qword ptr [r14 + 0x350]
20c335 xor      rcx, r10
20c338 xor      rcx, r12
20c33b xor      rcx, qword ptr [r14 + 0x348]
20c342 mov      rax, rcx
20c345 shr      rax, 0x21
20c349 xor      rax, rcx
20c34c movabs   rcx, 0xff51afd7ed558ccd
20c356 imul     rax, rcx
20c35a mov      rcx, rax
20c35d shr      rcx, 0x21
20c361 xor      rcx, rax
20c364 movabs   rax, 0xc4ceb9fe1a85ec53
20c36e imul     rcx, rax
20c372 movzx    eax, r8b
20c376 mov      rbx, rcx
20c379 xor      rax, 0xdd
20c37f shr      rbx, 0x21
20c383 xor      rbx, rcx
20c386 lea      rcx, [rip - 0x20c38d]
20c38d mov      qword ptr [r14 + 0x28], rbx
20c391 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
20c399 xor      bpl, 0x63
20c39d inc      edx
20c39f mov      dword ptr [r14 + 0x11e0], edx
20c3a6 movabs   r8, 0xff51afd7ed558ccd
20c3b0 test     dl, 0x1f
20c3b3 jne      0x14020c3f9
20c3b5 movsxd   rax, edx
20c3b8 xor      rax, r10
20c3bb xor      rax, qword ptr [r14 + 0x348]
20c3c2 mov      rcx, rax
20c3c5 shr      rcx, 0x21
20c3c9 xor      rcx, rax
20c3cc movabs   rax, 0xc4ceb9fe1a85ec53
20c3d6 imul     rcx, r8
20c3da mov      rdx, rcx
20c3dd shr      rdx, 0x21
20c3e1 xor      rdx, rcx
20c3e4 imul     rdx, rax
20c3e8 mov      rax, rdx
20c3eb shr      rax, 0x21
20c3ef xor      rax, rdx
20c3f2 mov      qword ptr [r14 + 0x348], rax
20c3f9 movzx    edx, bpl
20c3fd xor      r10, rdx
20c400 mov      byte ptr [r14 + 0x4ad], bpl
20c407 xor      r10, r12
20c40a movabs   r12, 0xc4ceb9fe1a85ec53
20c414 mov      rax, r10
20c417 shr      rax, 0x21
20c41b xor      rax, r10
20c41e movabs   r10, 0x9e3779b97f4a7c15
20c428 imul     rax, r8
20c42c imul     rdx, r10
20c430 imul     r9, r10
20c434 mov      rcx, rax
20c437 shr      rcx, 0x21
20c43b xor      rcx, rax
20c43e imul     rcx, r12
20c442 mov      rax, rcx
20c445 shr      rax, 0x21
20c449 xor      rax, rcx
20c44c mov      ecx, dword ptr [r14 + 0x1178]
20c453 mov      qword ptr [r14 + 0x20], rax
20c457 movabs   rax, 0xd6e8feb86659fd93
20c461 imul     rcx, rax
20c465 xor      rcx, rdx
20c468 xor      rcx, rbx
20c46b movabs   rbx, 0x2545f4914f6cdd1d
20c475 mov      rax, rcx
20c478 add      r9, rbx
20c47b shr      rax, 0x21
20c47f xor      rax, rcx
20c482 imul     rax, r8
20c486 mov      rdx, rax
20c489 shr      rdx, 0x21
20c48d xor      rdx, rax
20c490 mov      rax, qword ptr [rsp + 0x60]
20c495 imul     rdx, r12
20c499 shr      rdx, 0x21
20c49d and      edx, 3
20c4a0 inc      rax
20c4a3 mov      qword ptr [r14 + 0x1b8], rax
20c4aa cmp      bpl, 0x3e
20c4ae jae      0x14020c548
20c4b4 inc      qword ptr [r14 + 0x11a0]
20c4bb lea      rax, [rip - 0x20c4c2]
20c4c2 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
20c4ca mov      qword ptr [r14 + 0x1b0], r9
20c4d1 shr      r9, 0x1b
20c4d5 movzx    eax, r9b
20c4d9 mov      byte ptr [r14 + 0x160], al
20c4e0 imul     rax, rdi
20c4e4 mov      ebx, edx
20c4e6 xor      rax, r11
20c4e9 xor      rax, rsi
20c4ec mov      rcx, rax
20c4ef add      rax, r8
20c4f2 xor      rcx, r8
20c4f5 movzx    r8d, bpl
20c4f9 test     r15b, r15b
20c4fc cmove    rax, rcx
20c500 mov      rcx, r14
20c503 mov      qword ptr [r14 + 0xf0], rax
20c50a call     0x1401f1f50
20c50f mov      r8, qword ptr [rsp + 0x70]
20c514 lea      edx, [r13 - 1]
20c518 mov      eax, eax
20c51a imul     rcx, rbx, 0x3e
20c51e add      rcx, rax
20c521 mov      rax, qword ptr [r14 + 0x4b8]
20c528 movsxd   r9, dword ptr [rax + rcx*4]
20c52c mov      rcx, r14
20c52f movsxd   rax, dword ptr [r14 + 0x4c8]
20c536 xor      r9, rax
20c539 add      r9, qword ptr [r14 + 0x4c0]
20c540 call     r9
20c543 jmp      0x14020c60f
20c548 inc      dword ptr [r14 + 0x11a8]
20c54f mov      rax, r9
20c552 shr      rax, 0x1b
20c556 movzx    ecx, al
20c559 lea      rax, [r11*4]
20c561 mov      byte ptr [r14 + 0x163], cl
20c568 imul     rcx, rdi
20c56c imul     r9, r10
20c570 xor      rcx, rax
20c573 xor      rcx, rsi
20c576 mov      qword ptr [r14 + 0x108], rcx
20c57d mov      r8, qword ptr [r14 + 0x1b8]
20c584 add      r9, rbx
20c587 mov      rax, r9
20c58a shr      rax, 0x1b
20c58e movzx    edx, al
20c591 mov      byte ptr [r14 + 0x16a], dl
20c598 imul     rax, r11, 0xb
20c59c imul     rdx, rdi
20c5a0 xor      rdx, rax
20c5a3 xor      rdx, rsi
20c5a6 mov      rcx, rdx
20c5a9 xor      rcx, 1
20c5ad test     r15b, r15b
20c5b0 lea      rax, [rdx + 1]
20c5b4 cmove    rax, rcx
20c5b8 mov      qword ptr [r14 + 0x140], rax
20c5bf lea      rax, [r8 + 2]
20c5c3 mov      qword ptr [r14 + 0x1b8], rax
20c5ca imul     r9, r10
20c5ce add      r9, rbx
20c5d1 mov      qword ptr [r14 + 0x1b0], r9
20c5d8 shr      r9, 0x1b
20c5dc movzx    eax, r9b
20c5e0 mov      byte ptr [r14 + 0x160], al
20c5e7 imul     rax, rdi
20c5eb xor      rax, rsi
20c5ee xor      rax, r11
20c5f1 mov      rcx, rax
20c5f4 add      rax, 0xfe1ab
20c5fa xor      rcx, 0xfe1ab
20c601 test     r15b, r15b
20c604 cmove    rax, rcx
20c608 mov      qword ptr [r14 + 0xf0], rax
20c60f mov      r12, qword ptr [rsp + 0x28]
20c614 mov      rsi, qword ptr [rsp + 0x68]
20c619 mov      r15, qword ptr [rsp + 0x20]
20c61e add      rsp, 0x30
20c622 pop      r14
20c624 pop      r13
20c626 pop      rdi
20c627 pop      rbp
20c628 pop      rbx
20c629 ret      
20c62a mov      edx, 0x54485254
20c62f mov      rcx, r14
20c632 call     0x1401ed830
20c637 int3     
20c638 mov      edx, 0x43414e59
20c63d mov      rcx, r14
20c640 call     0x1401ed830
20c645 int3     
