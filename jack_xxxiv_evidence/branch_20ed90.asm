20ed90 push     rbx
20ed92 push     rdi
20ed93 push     r12
20ed95 push     r13
20ed97 push     r14
20ed99 sub      rsp, 0x40
20ed9d movsxd   rax, dword ptr [rcx + 0x11e0]
20eda4 mov      r14, rcx
20eda7 mov      r13d, edx
20edaa movabs   rcx, 0x34a5a4cbb437c294
20edb4 imul     rax, rcx
20edb8 movabs   rcx, 0x96fc2e0035e946ab
20edc2 mov      r12, r8
20edc5 xor      rax, qword ptr [r14 + 0x28]
20edc9 mov      qword ptr [rsp + 0x70], rax
20edce mov      rax, qword ptr [rsp + 0x70]
20edd3 movsxd   rax, dword ptr [r14 + 0x11e0]
20edda imul     rax, rcx
20edde movabs   rcx, 0x7034b05eb6a2cabe
20ede8 xor      rax, qword ptr [r14 + 0x28]
20edec mov      qword ptr [rsp + 0x70], rax
20edf1 mov      rax, qword ptr [rsp + 0x70]
20edf6 movsxd   rax, dword ptr [r14 + 0x11e0]
20edfd imul     rax, rcx
20ee01 movabs   rcx, 0x48e2c87be2fd290
20ee0b xor      rax, qword ptr [r14 + 0x28]
20ee0f mov      qword ptr [rsp + 0x70], rax
20ee14 mov      rax, qword ptr [rsp + 0x70]
20ee19 mov      rax, qword ptr [r14 + 0x2f0]
20ee20 xor      rax, rcx
20ee23 mov      rcx, rax
20ee26 shr      rcx, 0x21
20ee2a xor      rcx, rax
20ee2d movabs   rax, 0xff51afd7ed558ccd
20ee37 imul     rcx, rax
20ee3b movabs   rax, 0xc4ceb9fe1a85ec53
20ee45 mov      rdx, rcx
20ee48 shr      rdx, 0x21
20ee4c xor      rdx, rcx
20ee4f mov      rcx, r14
20ee52 imul     rdx, rax
20ee56 mov      rax, rdx
20ee59 shr      rax, 0x21
20ee5d xor      rdx, rax
20ee60 mov      rax, qword ptr [r14 + 0x2f0]
20ee67 shr      rax, 7
20ee6b add      rax, rdx
20ee6e mov      qword ptr [r14 + 0x2f0], rax
20ee75 call     0x1401f1c70
20ee7a mov      rcx, r14
20ee7d mov      ebx, eax
20ee7f call     0x1401ee070
20ee84 mov      ecx, ebx
20ee86 mov      edi, eax
20ee88 call     0x1401ed270
20ee8d xor      r9d, r9d
20ee90 mov      dword ptr [rsp + 0x28], edi
20ee94 xor      edx, edx
20ee96 mov      dword ptr [rsp + 0x20], eax
20ee9a mov      rcx, r14
20ee9d lea      r8d, [r9 + 1]
20eea1 call     0x1401f10a0
20eea6 mov      rdx, rax
20eea9 mov      rcx, r14
20eeac call     0x1401f0db0
20eeb1 mov      rax, qword ptr [r14 + 0x2f0]
20eeb8 test     r13d, r13d
20eebb jns      0x14020fa50
20eec1 cmp      qword ptr [r14 + 0x11b8], r12
20eec8 jne      0x14020fa5e
20eece movsxd   rax, dword ptr [r14 + 0x11e0]
20eed5 movabs   rcx, 0xe0cbb49df6bedb85
20eedf imul     rax, rcx
20eee3 mov      rcx, r14
20eee6 xor      rax, qword ptr [r14 + 0x28]
20eeea mov      qword ptr [rsp + 0x70], rax
20eeef mov      rax, qword ptr [rsp + 0x70]
20eef4 call     0x1401ee450
20eef9 test     eax, eax
20eefb jne      0x14020fa43
20ef01 cmp      dword ptr [r14 + 0xad0], eax
20ef08 jne      0x14020fa43
20ef0e mov      r8, qword ptr [r14 + 0xf0]
20ef15 movzx    ecx, byte ptr [r14 + 0x160]
20ef1d mov      rax, r8
20ef20 mov      r10, qword ptr [r14 + 0xe0]
20ef27 mov      rbx, qword ptr [r14 + 0xd0]
20ef2e mov      r11, qword ptr [r14 + 0xd8]
20ef35 movzx    edi, byte ptr [r14 + 0xe8]
20ef3d mov      r9, qword ptr [r14 + 0x1b0]
20ef44 imul     rcx, r10
20ef48 mov      qword ptr [rsp + 0x78], rbp
20ef4d movabs   rbp, 0x2545f4914f6cdd1d
20ef57 xor      rcx, rbx
20ef5a mov      qword ptr [rsp + 0x38], rsi
20ef5f mov      rsi, qword ptr [r14 + 0x1b8]
20ef66 xor      rcx, r11
20ef69 xor      rax, rcx
20ef6c mov      qword ptr [rsp + 0x30], r15
20ef71 sub      r8, rcx
20ef74 movabs   r15, 0x9e3779b97f4a7c15
20ef7e test     dil, dil
20ef81 cmove    r8, rax
20ef85 inc      rsi
20ef88 imul     r9, r15
20ef8c mov      qword ptr [r14 + 0x1b8], rsi
20ef93 mov      rcx, r8
20ef96 add      r9, rbp
20ef99 mov      qword ptr [r14 + 0x1b0], r9
20efa0 mov      rax, r9
20efa3 shr      rax, 0x1b
20efa7 movzx    edx, al
20efaa mov      byte ptr [r14 + 0x160], dl
20efb1 imul     rdx, r10
20efb5 xor      rdx, rbx
20efb8 xor      rdx, r11
20efbb xor      rcx, rdx
20efbe test     dil, dil
20efc1 lea      rax, [r8 + rdx]
20efc5 cmove    rax, rcx
20efc9 mov      qword ptr [r14 + 0xf0], rax
20efd0 cmp      r8d, 0x48cad
20efd7 jne      0x14020fa34
20efdd mov      eax, r13d
20efe0 btr      eax, 0x1f
20efe4 cmp      eax, 2
20efe7 jae      0x14020f033
20efe9 imul     r9, r15
20efed lea      rax, [rsi + 1]
20eff1 mov      qword ptr [r14 + 0x1b8], rax
20eff8 add      r9, rbp
20effb mov      qword ptr [r14 + 0x1b0], r9
20f002 shr      r9, 0x1b
20f006 movzx    eax, r9b
20f00a mov      byte ptr [r14 + 0x160], al
20f011 imul     rax, r10
20f015 xor      rax, rbx
20f018 xor      rax, r11
20f01b mov      rcx, rax
20f01e add      rax, 0xf6105
20f024 xor      rcx, 0xf6105
20f02b test     dil, dil
20f02e jmp      0x14020fa29
20f033 mov      rcx, r14
20f036 call     0x1401ee070
20f03b movzx    ecx, byte ptr [r14 + 0x4ad]
20f043 movabs   rbx, 0xff51afd7ed558ccd
20f04d mov      r11, qword ptr [r14 + 0xe0]
20f054 movabs   r8, 0xc4ceb9fe1a85ec53
20f05e mov      r10, qword ptr [r14 + 0xd0]
20f065 movzx    r9d, byte ptr [r14 + 0xe8]
20f06d mov      eax, eax
20f06f xor      rcx, rax
20f072 xor      rcx, qword ptr [r14 + 0x11e8]
20f079 mov      rax, rcx
20f07c shr      rax, 0x21
20f080 xor      rax, rcx
20f083 imul     rax, rbx
20f087 mov      rcx, rax
20f08a shr      rcx, 0x21
20f08e xor      rcx, rax
20f091 imul     rcx, r8
20f095 mov      rdx, rcx
20f098 shr      rdx, 0x21
20f09c xor      rdx, rcx
20f09f mov      qword ptr [r14 + 0x11e8], rdx
20f0a6 xor      rdx, qword ptr [r14 + 0x20]
20f0aa xor      rdx, qword ptr [r14 + 0x28]
20f0ae mov      rax, rdx
20f0b1 shr      rax, 0x21
20f0b5 xor      rax, rdx
20f0b8 imul     rax, rbx
20f0bc mov      rcx, rax
20f0bf shr      rcx, 0x21
20f0c3 xor      rcx, rax
20f0c6 imul     rcx, r8
20f0ca mov      rax, rcx
20f0cd shr      rax, 0x21
20f0d1 xor      rax, rcx
20f0d4 mov      qword ptr [r14 + 0x20], rax
20f0d8 mov      rdx, qword ptr [r14 + 0x138]
20f0df movzx    ecx, byte ptr [r14 + 0x169]
20f0e7 mov      rax, qword ptr [r14 + 0xd8]
20f0ee imul     rcx, r11
20f0f2 lea      rbx, [rax + rax*4]
20f0f6 mov      rax, rdx
20f0f9 add      rbx, rbx
20f0fc xor      rcx, rbx
20f0ff xor      rcx, r10
20f102 xor      rax, rcx
20f105 sub      rdx, rcx
20f108 test     r9b, r9b
20f10b cmove    rdx, rax
20f10f mov      rax, qword ptr [r14 + 0x1b0]
20f116 inc      qword ptr [r14 + 0x1b8]
20f11d imul     rax, r15
20f121 add      rax, rbp
20f124 mov      qword ptr [r14 + 0x1b0], rax
20f12b shr      rax, 0x1b
20f12f movzx    r8d, al
20f133 mov      byte ptr [r14 + 0x169], r8b
20f13a imul     r8, r11
20f13e xor      r8, rbx
20f141 xor      r8, r10
20f144 mov      rcx, r8
20f147 xor      rcx, rdx
20f14a test     r9b, r9b
20f14d lea      rax, [r8 + rdx]
20f151 cmove    rax, rcx
20f155 mov      rcx, r14
20f158 mov      qword ptr [r14 + 0x138], rax
20f15f call     0x1401f0910
20f164 mov      rax, qword ptr [r14 + 0xd8]
20f16b mov      r10, qword ptr [r14 + 0xe0]
20f172 movzx    ecx, byte ptr [r14 + 0x168]
20f17a mov      rbx, qword ptr [r14 + 0xd0]
20f181 mov      rdx, qword ptr [r14 + 0x130]
20f188 lea      r11, [rax + rax*8]
20f18c movzx    r9d, byte ptr [r14 + 0xe8]
20f194 mov      rax, rdx
20f197 imul     rcx, r10
20f19b xor      rcx, r11
20f19e xor      rcx, rbx
20f1a1 xor      rax, rcx
20f1a4 sub      rdx, rcx
20f1a7 test     r9b, r9b
20f1aa cmove    rdx, rax
20f1ae mov      rax, qword ptr [r14 + 0x1b0]
20f1b5 inc      qword ptr [r14 + 0x1b8]
20f1bc mov      rcx, rdx
20f1bf imul     rax, r15
20f1c3 add      rax, rbp
20f1c6 mov      qword ptr [r14 + 0x1b0], rax
20f1cd shr      rax, 0x1b
20f1d1 movzx    r8d, al
20f1d5 mov      byte ptr [r14 + 0x168], r8b
20f1dc imul     r8, r10
20f1e0 xor      r8, r11
20f1e3 xor      r8, rbx
20f1e6 xor      rcx, r8
20f1e9 test     r9b, r9b
20f1ec lea      rax, [rdx + r8]
20f1f0 cmove    rax, rcx
20f1f4 mov      rcx, r14
20f1f7 mov      qword ptr [r14 + 0x130], rax
20f1fe call     0x1401f0910
20f203 mov      rcx, r14
20f206 call     0x1401ee070
20f20b cmp      eax, dword ptr [r14 + 0x1d8]
20f212 jae      0x14020f21e
20f214 mov      edx, eax
20f216 mov      rcx, r14
20f219 call     0x1401f0910
20f21e mov      rsi, qword ptr [r14 + 0xe0]
20f225 mov      rbp, qword ptr [r14 + 0xd0]
20f22c mov      r11, qword ptr [r14 + 0x130]
20f233 movzx    edi, byte ptr [r14 + 0xe8]
20f23b mov      rax, r11
20f23e movzx    ecx, byte ptr [r14 + 0x168]
20f246 mov      rbx, qword ptr [r14 + 0xd8]
20f24d mov      r8, qword ptr [r14 + 0x1b8]
20f254 mov      r10, qword ptr [r14 + 0x1b0]
20f25b imul     rcx, rsi
20f25f lea      r9, [rbx + rbx*8]
20f263 xor      rcx, r9
20f266 xor      rcx, rbp
20f269 xor      rax, rcx
20f26c sub      r11, rcx
20f26f test     dil, dil
20f272 movabs   rcx, 0x2545f4914f6cdd1d
20f27c cmove    r11, rax
20f280 imul     r10, r15
20f284 add      r10, rcx
20f287 mov      rcx, r11
20f28a mov      rax, r10
20f28d shr      rax, 0x1b
20f291 movzx    edx, al
20f294 mov      byte ptr [r14 + 0x168], dl
20f29b imul     rdx, rsi
20f29f xor      rdx, r9
20f2a2 xor      rdx, rbp
20f2a5 xor      rcx, rdx
20f2a8 test     dil, dil
20f2ab lea      rax, [r11 + rdx]
20f2af cmove    rax, rcx
20f2b3 mov      rcx, r11
20f2b6 mov      qword ptr [r14 + 0x130], rax
20f2bd movabs   rax, 0x2545f4914f6cdd1d
20f2c7 imul     r10, r15
20f2cb add      r10, rax
20f2ce lea      rax, [r8 + 2]
20f2d2 mov      qword ptr [r14 + 0x1b8], rax
20f2d9 mov      r8d, 0x415a
20f2df mov      qword ptr [r14 + 0x1b0], r10
20f2e6 lea      rax, [rbx + rbx*4]
20f2ea add      rax, rax
20f2ed shr      r10, 0x1b
20f2f1 movzx    edx, r10b
20f2f5 mov      byte ptr [r14 + 0x169], dl
20f2fc imul     rdx, rsi
20f300 xor      rdx, rax
20f303 xor      rdx, rbp
20f306 xor      rcx, rdx
20f309 test     dil, dil
20f30c lea      rax, [r11 + rdx]
20f310 cmove    rax, rcx
20f314 mov      rcx, r14
20f317 mov      qword ptr [r14 + 0x138], rax
20f31e movzx    edx, byte ptr [r14 + 0x4ad]
20f326 xor      rdx, qword ptr [r14 + 0x348]
20f32d call     0x1401f1520
20f332 mov      r8, qword ptr [r14 + 0x348]
20f339 movabs   rdi, 0xff51afd7ed558ccd
20f343 mov      rax, r8
20f346 movabs   rsi, 0xc4ceb9fe1a85ec53
20f350 xor      rax, qword ptr [r14 + 0x20]
20f354 mov      rcx, rax
20f357 shr      rcx, 0x21
20f35b xor      rcx, rax
20f35e imul     rcx, rdi
20f362 mov      rax, rcx
20f365 shr      rax, 0x21
20f369 xor      rax, rcx
20f36c imul     rax, rsi
20f370 mov      rdx, rax
20f373 shr      rdx, 0x21
20f377 xor      edx, eax
20f379 lea      eax, [rdx + 1]
20f37c mov      ecx, eax
20f37e xor      eax, edx
20f380 imul     ecx, edx
20f383 not      ecx
20f385 and      ecx, eax
20f387 test     cl, 1
20f38a je       0x14020f3fd
20f38c and      r8b, 3
20f390 cmp      r8b, 1
20f394 jne      0x14020f3fd
20f396 mov      rax, qword ptr [r14 + 0x1b0]
20f39d movabs   rcx, 0x2545f4914f6cdd1d
20f3a7 inc      qword ptr [r14 + 0x1b8]
20f3ae imul     rax, r15
20f3b2 add      rax, rcx
20f3b5 mov      qword ptr [r14 + 0x1b0], rax
20f3bc shr      rax, 0x1b
20f3c0 movzx    eax, al
20f3c3 mov      byte ptr [r14 + 0x160], al
20f3ca imul     rax, qword ptr [r14 + 0xe0]
20f3d2 xor      rax, qword ptr [r14 + 0xd8]
20f3d9 xor      rax, qword ptr [r14 + 0xd0]
20f3e0 mov      rcx, rax
20f3e3 add      rax, 0x116fdf
20f3e9 xor      rcx, 0x116fdf
20f3f0 cmp      byte ptr [r14 + 0xe8], 0
20f3f8 jmp      0x14020fa29
20f3fd mov      rcx, r14
20f400 call     0x1401ee070
20f405 mov      ebx, eax
20f407 cmp      eax, dword ptr [r14 + 0x1d8]
20f40e jb       0x14020f477
20f410 mov      rax, qword ptr [r14 + 0x1b0]
20f417 movabs   rcx, 0x2545f4914f6cdd1d
20f421 inc      qword ptr [r14 + 0x1b8]
20f428 imul     rax, r15
20f42c add      rax, rcx
20f42f mov      qword ptr [r14 + 0x1b0], rax
20f436 shr      rax, 0x1b
20f43a movzx    eax, al
20f43d mov      byte ptr [r14 + 0x160], al
20f444 imul     rax, qword ptr [r14 + 0xe0]
20f44c xor      rax, qword ptr [r14 + 0xd8]
20f453 xor      rax, qword ptr [r14 + 0xd0]
20f45a mov      rcx, rax
20f45d add      rax, 0xfe1ab
20f463 xor      rcx, 0xfe1ab
20f46a cmp      byte ptr [r14 + 0xe8], 0
20f472 jmp      0x14020fa29
20f477 mov      edx, ebx
20f479 mov      rcx, r14
20f47c call     0x1401f25b0
20f481 movsxd   rcx, dword ptr [r14 + 0x11e0]
20f488 movabs   r8, 0xd6e8feb86659fd93
20f492 mov      rdx, qword ptr [r14 + 0x20]
20f496 mov      rax, rbx
20f499 imul     rax, r8
20f49d imul     rcx, r15
20f4a1 rol      rdx, 0x11
20f4a5 xor      rax, rdx
20f4a8 xor      rcx, qword ptr [r14 + 0x260]
20f4af xor      rax, rcx
20f4b2 mov      rcx, rax
20f4b5 shr      rcx, 0x21
20f4b9 xor      rcx, rax
20f4bc imul     rcx, rdi
20f4c0 mov      rdx, rcx
20f4c3 shr      rdx, 0x21
20f4c7 xor      rdx, rcx
20f4ca imul     rdx, rsi
20f4ce mov      rax, rdx
20f4d1 shr      rax, 0x21
20f4d5 xor      rax, rdx
20f4d8 mov      r10, rax
20f4db shr      r10, 0x1d
20f4df xor      r10, rax
20f4e2 or       r10, 1
20f4e6 mov      rax, r10
20f4e9 mov      qword ptr [r14 + 0x260], r10
20f4f0 and      eax, 0x3ff
20f4f5 cmp      rax, 0x2c5
20f4fb jne      0x14020f50c
20f4fd mov      rcx, r14
20f500 call     0x1402297e0
20f505 mov      r10, qword ptr [r14 + 0x260]
20f50c movzx    eax, r10b
20f510 and      al, 0x1f
20f512 cmp      al, 0x15
20f514 jne      0x14020f601
20f51a movsxd   rax, dword ptr [r14 + 0x11e0]
20f521 xor      rax, 0x5a5a
20f527 mov      rcx, qword ptr [r14 + 0x20]
20f52b imul     rax, r15
20f52f rol      rcx, 0x11
20f533 xor      rax, r10
20f536 xor      rcx, rax
20f539 movabs   rax, 0x8f70feda99a6026d
20f543 xor      rcx, rax
20f546 mov      rax, rcx
20f549 shr      rax, 0x21
20f54d xor      rax, rcx
20f550 imul     rax, rdi
20f554 mov      rcx, rax
20f557 shr      rcx, 0x21
20f55b xor      rcx, rax
20f55e imul     rcx, rsi
20f562 mov      rax, rcx
20f565 shr      rax, 0x21
20f569 xor      rax, rcx
20f56c mov      r9, rax
20f56f shr      r9, 0x1d
20f573 xor      r9, rax
20f576 or       r9, 1
20f57a mov      rax, r9
20f57d mov      rcx, r9
20f580 shr      rax, 8
20f584 and      eax, 3
20f587 shr      rcx, 0x28
20f58b imul     r8, rax, 0x3e
20f58f mov      eax, 0x8421085
20f594 mul      ecx
20f596 mov      eax, ecx
20f598 sub      eax, edx
20f59a shr      eax, 1
20f59c add      eax, edx
20f59e shr      eax, 5
20f5a1 imul     eax, eax, 0x3e
20f5a4 sub      ecx, eax
20f5a6 mov      eax, ecx
20f5a8 add      r8, rax
20f5ab mov      rax, qword ptr [r14 + 0x4b8]
20f5b2 movsxd   rcx, dword ptr [rax + r8*4]
20f5b6 movsxd   rax, dword ptr [r14 + 0x4c8]
20f5bd xor      rcx, rax
20f5c0 add      rcx, qword ptr [r14 + 0x4c0]
20f5c7 xor      rcx, r9
20f5ca mov      rax, rcx
20f5cd shr      rax, 0x21
20f5d1 xor      rax, rcx
20f5d4 imul     rax, rdi
20f5d8 mov      rcx, rax
20f5db shr      rcx, 0x21
20f5df xor      rcx, rax
20f5e2 imul     rcx, rsi
20f5e6 mov      rax, rcx
20f5e9 shr      rax, 0x21
20f5ed xor      rax, rcx
20f5f0 xor      rax, r10
20f5f3 inc      qword ptr [r14 + 0x268]
20f5fa mov      qword ptr [r14 + 0x260], rax
20f601 inc      dword ptr [r14 + 0x200]
20f608 mov      eax, dword ptr [r14 + 0x200]
20f60f cmp      eax, dword ptr [r14 + 0x1fc]
20f616 jb       0x14020f62b
20f618 mov      rcx, r14
20f61b mov      dword ptr [r14 + 0x200], 0
20f626 call     0x1401ef7c0
20f62b mov      r8d, ebx
20f62e mov      edx, ebx
20f630 mov      rcx, r14
20f633 call     0x1401f0660
20f638 inc      qword ptr [r14 + 0x1b8]
20f63f movabs   rax, 0x2545f4914f6cdd1d
20f649 mov      r9, qword ptr [r14 + 0x1b0]
20f650 mov      r10, qword ptr [r14 + 0x1b8]
20f657 imul     r9, r15
20f65b add      r9, rax
20f65e mov      qword ptr [r14 + 0x1b0], r9
20f665 mov      rax, r9
20f668 shr      rax, 0x1b
20f66c movzx    edx, al
20f66f mov      byte ptr [r14 + 0x168], dl
20f676 mov      rdi, qword ptr [r14 + 0xe0]
20f67d mov      r11, qword ptr [r14 + 0xd8]
20f684 mov      rsi, qword ptr [r14 + 0xd0]
20f68b movzx    r15d, byte ptr [r14 + 0xe8]
20f693 imul     rdx, rdi
20f697 lea      rax, [r11 + r11*8]
20f69b xor      rdx, rax
20f69e xor      rdx, rsi
20f6a1 mov      rcx, rdx
20f6a4 xor      rcx, rbx
20f6a7 test     r15b, r15b
20f6aa lea      rax, [rdx + rbx]
20f6ae cmove    rax, rcx
20f6b2 inc      r10
20f6b5 mov      qword ptr [r14 + 0x130], rax
20f6bc mov      rcx, qword ptr [r14 + 0x1d0]
20f6c3 mov      rax, qword ptr [r14 + 0x48]
20f6c7 mov      qword ptr [rsp + 0x88], r10
20f6cf movzx    r8d, byte ptr [rcx + rbx]
20f6d4 xor      r8b, byte ptr [rax + rbx]
20f6d8 inc      ebx
20f6da mov      qword ptr [r14 + 0x1b8], r10
20f6e1 movabs   rax, 0x9e3779b97f4a7c15
20f6eb imul     r9, rax
20f6ef mov      qword ptr [rsp + 0x70], rbx
20f6f4 movabs   rax, 0x2545f4914f6cdd1d
20f6fe add      r9, rax
20f701 mov      rax, r9
20f704 shr      rax, 0x1b
20f708 movzx    edx, al
20f70b lea      rax, [r11 + r11]
20f70f mov      byte ptr [r14 + 0x161], dl
20f716 imul     rdx, rdi
20f71a xor      rdx, rax
20f71d xor      rdx, rsi
20f720 mov      rcx, rdx
20f723 xor      rcx, rbx
20f726 test     r15b, r15b
20f729 lea      rax, [rdx + rbx]
20f72d cmove    rax, rcx
20f731 mov      qword ptr [r14 + 0xf8], rax
20f738 movsxd   rdx, dword ptr [r14 + 0x11e0]
20f73f mov      r10, qword ptr [r14 + 0x20]
20f743 mov      rcx, rdx
20f746 xor      rcx, qword ptr [r14 + 0x350]
20f74d xor      rcx, r10
20f750 xor      rcx, rbx
20f753 movabs   rbx, 0xff51afd7ed558ccd
20f75d xor      rcx, qword ptr [r14 + 0x348]
20f764 mov      rax, rcx
20f767 shr      rax, 0x21
20f76b xor      rax, rcx
20f76e imul     rax, rbx
20f772 mov      rcx, rax
20f775 shr      rcx, 0x21
20f779 xor      rcx, rax
20f77c movabs   rax, 0xc4ceb9fe1a85ec53
20f786 imul     rcx, rax
20f78a movzx    eax, r8b
20f78e mov      rbx, rcx
20f791 shr      rbx, 0x21
20f795 xor      rbx, rcx
20f798 lea      rcx, [rip - 0x20f79f]
20f79f xor      rax, 0xdd
20f7a5 mov      qword ptr [r14 + 0x28], rbx
20f7a9 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
20f7b1 xor      bpl, 0x63
20f7b5 movabs   r8, 0xff51afd7ed558ccd
20f7bf inc      edx
20f7c1 mov      dword ptr [r14 + 0x11e0], edx
20f7c8 test     dl, 0x1f
20f7cb jne      0x14020f811
20f7cd movsxd   rax, edx
20f7d0 xor      rax, r10
20f7d3 xor      rax, qword ptr [r14 + 0x348]
20f7da mov      rcx, rax
20f7dd shr      rcx, 0x21
20f7e1 xor      rcx, rax
20f7e4 movabs   rax, 0xc4ceb9fe1a85ec53
20f7ee imul     rcx, r8
20f7f2 mov      rdx, rcx
20f7f5 shr      rdx, 0x21
20f7f9 xor      rdx, rcx
20f7fc imul     rdx, rax
20f800 mov      rax, rdx
20f803 shr      rax, 0x21
20f807 xor      rax, rdx
20f80a mov      qword ptr [r14 + 0x348], rax
20f811 movzx    edx, bpl
20f815 xor      r10, rdx
20f818 mov      byte ptr [r14 + 0x4ad], bpl
20f81f xor      r10, qword ptr [rsp + 0x70]
20f824 mov      rax, r10
20f827 shr      rax, 0x21
20f82b xor      rax, r10
20f82e movabs   r10, 0x9e3779b97f4a7c15
20f838 imul     rax, r8
20f83c imul     rdx, r10
20f840 imul     r9, r10
20f844 mov      rcx, rax
20f847 shr      rcx, 0x21
20f84b xor      rcx, rax
20f84e movabs   rax, 0xc4ceb9fe1a85ec53
20f858 imul     rcx, rax
20f85c mov      rax, rcx
20f85f shr      rax, 0x21
20f863 xor      rax, rcx
20f866 mov      ecx, dword ptr [r14 + 0x1178]
20f86d mov      qword ptr [r14 + 0x20], rax
20f871 movabs   rax, 0xd6e8feb86659fd93
20f87b imul     rcx, rax
20f87f xor      rcx, rdx
20f882 xor      rcx, rbx
20f885 movabs   rbx, 0x2545f4914f6cdd1d
20f88f mov      rax, rcx
20f892 add      r9, rbx
20f895 shr      rax, 0x21
20f899 xor      rax, rcx
20f89c imul     rax, r8
20f8a0 mov      rdx, rax
20f8a3 shr      rdx, 0x21
20f8a7 xor      rdx, rax
20f8aa movabs   rax, 0xc4ceb9fe1a85ec53
20f8b4 imul     rdx, rax
20f8b8 mov      rax, qword ptr [rsp + 0x88]
20f8c0 shr      rdx, 0x21
20f8c4 and      edx, 3
20f8c7 inc      rax
20f8ca mov      qword ptr [r14 + 0x1b8], rax
20f8d1 cmp      bpl, 0x3e
20f8d5 jae      0x14020f96d
20f8db inc      qword ptr [r14 + 0x11a0]
20f8e2 lea      rax, [rip - 0x20f8e9]
20f8e9 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
20f8f1 mov      qword ptr [r14 + 0x1b0], r9
20f8f8 shr      r9, 0x1b
20f8fc movzx    eax, r9b
20f900 mov      byte ptr [r14 + 0x160], al
20f907 imul     rax, rdi
20f90b mov      ebx, edx
20f90d xor      rax, rsi
20f910 xor      rax, r11
20f913 mov      rcx, rax
20f916 add      rax, r8
20f919 xor      rcx, r8
20f91c movzx    r8d, bpl
20f920 test     r15b, r15b
20f923 cmove    rax, rcx
20f927 mov      rcx, r14
20f92a mov      qword ptr [r14 + 0xf0], rax
20f931 call     0x1401f1f50
20f936 mov      eax, eax
20f938 lea      edx, [r13 - 1]
20f93c imul     rcx, rbx, 0x3e
20f940 mov      r8, r12
20f943 add      rcx, rax
20f946 mov      rax, qword ptr [r14 + 0x4b8]
20f94d movsxd   r9, dword ptr [rax + rcx*4]
20f951 mov      rcx, r14
20f954 movsxd   rax, dword ptr [r14 + 0x4c8]
20f95b xor      r9, rax
20f95e add      r9, qword ptr [r14 + 0x4c0]
20f965 call     r9
20f968 jmp      0x14020fa34
20f96d inc      dword ptr [r14 + 0x11a8]
20f974 mov      rax, r9
20f977 shr      rax, 0x1b
20f97b movzx    ecx, al
20f97e lea      rax, [r11*4]
20f986 mov      byte ptr [r14 + 0x163], cl
20f98d imul     rcx, rdi
20f991 imul     r9, r10
20f995 xor      rcx, rax
20f998 xor      rcx, rsi
20f99b mov      qword ptr [r14 + 0x108], rcx
20f9a2 mov      r8, qword ptr [r14 + 0x1b8]
20f9a9 add      r9, rbx
20f9ac mov      rax, r9
20f9af shr      rax, 0x1b
20f9b3 movzx    edx, al
20f9b6 mov      byte ptr [r14 + 0x16a], dl
20f9bd imul     rax, r11, 0xb
20f9c1 imul     rdx, rdi
20f9c5 xor      rdx, rax
20f9c8 xor      rdx, rsi
20f9cb mov      rcx, rdx
20f9ce xor      rcx, 1
20f9d2 test     r15b, r15b
20f9d5 lea      rax, [rdx + 1]
20f9d9 cmove    rax, rcx
20f9dd mov      qword ptr [r14 + 0x140], rax
20f9e4 lea      rax, [r8 + 2]
20f9e8 mov      qword ptr [r14 + 0x1b8], rax
20f9ef imul     r9, r10
20f9f3 add      r9, rbx
20f9f6 mov      qword ptr [r14 + 0x1b0], r9
20f9fd shr      r9, 0x1b
20fa01 movzx    eax, r9b
20fa05 mov      byte ptr [r14 + 0x160], al
20fa0c imul     rax, rdi
20fa10 xor      rax, rsi
20fa13 xor      rax, r11
20fa16 mov      rcx, rax
20fa19 add      rax, 0xfe1ab
20fa1f xor      rcx, 0xfe1ab
20fa26 test     r15b, r15b
20fa29 cmove    rax, rcx
20fa2d mov      qword ptr [r14 + 0xf0], rax
20fa34 mov      rsi, qword ptr [rsp + 0x38]
20fa39 mov      rbp, qword ptr [rsp + 0x78]
20fa3e mov      r15, qword ptr [rsp + 0x30]
20fa43 add      rsp, 0x40
20fa47 pop      r14
20fa49 pop      r13
20fa4b pop      r12
20fa4d pop      rdi
20fa4e pop      rbx
20fa4f ret      
20fa50 mov      edx, 0x54485254
20fa55 mov      rcx, r14
20fa58 call     0x1401ed830
20fa5d int3     
20fa5e mov      edx, 0x43414e59
20fa63 mov      rcx, r14
20fa66 call     0x1401ed830
20fa6b int3     
