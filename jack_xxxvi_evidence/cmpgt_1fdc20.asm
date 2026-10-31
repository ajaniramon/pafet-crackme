1fdc20 mov      qword ptr [rsp + 0x18], r8
1fdc25 push     rbx
1fdc26 push     rbp
1fdc27 push     rdi
1fdc28 push     r13
1fdc2a push     r14
1fdc2c sub      rsp, 0x30
1fdc30 movsxd   rax, dword ptr [rcx + 0x11e0]
1fdc37 mov      r14, rcx
1fdc3a mov      r13d, edx
1fdc3d movabs   rcx, 0x62f799b88183bf4e
1fdc47 imul     rax, rcx
1fdc4b movabs   rcx, 0xc0ae1373005d3b71
1fdc55 movabs   rbp, 0xff51afd7ed558ccd
1fdc5f xor      rax, qword ptr [r14 + 0x28]
1fdc63 mov      rdi, r8
1fdc66 mov      qword ptr [rsp + 0x60], rax
1fdc6b mov      rax, qword ptr [rsp + 0x60]
1fdc70 movsxd   rax, dword ptr [r14 + 0x11e0]
1fdc77 imul     rax, rcx
1fdc7b movabs   rcx, 0x26668d2d8316b764
1fdc85 xor      rax, qword ptr [r14 + 0x28]
1fdc89 mov      qword ptr [rsp + 0x60], rax
1fdc8e mov      rax, qword ptr [rsp + 0x60]
1fdc93 movsxd   rax, dword ptr [r14 + 0x11e0]
1fdc9a imul     rax, rcx
1fdc9e xor      rax, qword ptr [r14 + 0x28]
1fdca2 mov      qword ptr [rsp + 0x60], rax
1fdca7 mov      rax, qword ptr [rsp + 0x60]
1fdcac mov      rax, qword ptr [r14 + 0x2f0]
1fdcb3 shr      rax, 0xd
1fdcb7 mov      rcx, rax
1fdcba shr      rcx, 0x21
1fdcbe xor      rcx, rax
1fdcc1 movabs   rax, 0xc4ceb9fe1a85ec53
1fdccb imul     rcx, rbp
1fdccf mov      rdx, rcx
1fdcd2 shr      rdx, 0x21
1fdcd6 xor      rdx, rcx
1fdcd9 imul     rdx, rax
1fdcdd movabs   rax, 0x164d0561890ea760
1fdce7 mov      rcx, rdx
1fdcea shr      rcx, 0x21
1fdcee xor      rcx, rdx
1fdcf1 xor      rcx, rax
1fdcf4 mov      rax, qword ptr [r14 + 0x2f0]
1fdcfb add      rcx, rax
1fdcfe mov      qword ptr [r14 + 0x2f0], rcx
1fdd05 mov      rcx, r14
1fdd08 call     0x1401ee940
1fdd0d mov      rcx, r14
1fdd10 mov      rbx, rax
1fdd13 call     0x1401ee940
1fdd18 movabs   rcx, 0x8000000000000000
1fdd22 xor      edx, edx
1fdd24 xor      rax, rcx
1fdd27 xor      rbx, rcx
1fdd2a cmp      rbx, rax
1fdd2d mov      rcx, r14
1fdd30 setb     dl
1fdd33 call     0x1401ee820
1fdd38 mov      rax, qword ptr [r14 + 0x2f0]
1fdd3f test     r13d, r13d
1fdd42 jns      0x1401fe880
1fdd48 cmp      qword ptr [r14 + 0x11b8], rdi
1fdd4f jne      0x1401fe88e
1fdd55 movsxd   rax, dword ptr [r14 + 0x11e0]
1fdd5c movabs   rcx, 0xa300e89b25003039
1fdd66 imul     rax, rcx
1fdd6a mov      rcx, r14
1fdd6d xor      rax, qword ptr [r14 + 0x28]
1fdd71 mov      qword ptr [rsp + 0x60], rax
1fdd76 mov      rax, qword ptr [rsp + 0x60]
1fdd7b call     0x1401ee450
1fdd80 test     eax, eax
1fdd82 jne      0x1401fe874
1fdd88 cmp      dword ptr [r14 + 0xad0], eax
1fdd8f jne      0x1401fe874
1fdd95 mov      r8, qword ptr [r14 + 0xf0]
1fdd9c movzx    ecx, byte ptr [r14 + 0x160]
1fdda4 mov      rax, r8
1fdda7 mov      r10, qword ptr [r14 + 0xe0]
1fddae mov      rbx, qword ptr [r14 + 0xd0]
1fddb5 mov      r11, qword ptr [r14 + 0xd8]
1fddbc movzx    edi, byte ptr [r14 + 0xe8]
1fddc4 mov      r9, qword ptr [r14 + 0x1b0]
1fddcb imul     rcx, r10
1fddcf mov      qword ptr [rsp + 0x68], rsi
1fddd4 mov      rsi, qword ptr [r14 + 0x1b8]
1fdddb xor      rcx, rbx
1fddde xor      rcx, r11
1fdde1 mov      qword ptr [rsp + 0x28], r12
1fdde6 xor      rax, rcx
1fdde9 mov      qword ptr [rsp + 0x20], r15
1fddee sub      r8, rcx
1fddf1 movabs   r15, 0x9e3779b97f4a7c15
1fddfb test     dil, dil
1fddfe movabs   r12, 0x2545f4914f6cdd1d
1fde08 cmove    r8, rax
1fde0c inc      rsi
1fde0f imul     r9, r15
1fde13 mov      qword ptr [r14 + 0x1b8], rsi
1fde1a mov      rcx, r8
1fde1d add      r9, r12
1fde20 mov      qword ptr [r14 + 0x1b0], r9
1fde27 mov      rax, r9
1fde2a shr      rax, 0x1b
1fde2e movzx    edx, al
1fde31 mov      byte ptr [r14 + 0x160], dl
1fde38 imul     rdx, r10
1fde3c xor      rdx, rbx
1fde3f xor      rdx, r11
1fde42 xor      rcx, rdx
1fde45 test     dil, dil
1fde48 lea      rax, [r8 + rdx]
1fde4c cmove    rax, rcx
1fde50 mov      qword ptr [r14 + 0xf0], rax
1fde57 cmp      r8d, 0x26dc07
1fde5e jne      0x1401fe865
1fde64 mov      eax, r13d
1fde67 btr      eax, 0x1f
1fde6b cmp      eax, 2
1fde6e jae      0x1401fdeba
1fde70 imul     r9, r15
1fde74 lea      rax, [rsi + 1]
1fde78 mov      qword ptr [r14 + 0x1b8], rax
1fde7f add      r9, r12
1fde82 mov      qword ptr [r14 + 0x1b0], r9
1fde89 shr      r9, 0x1b
1fde8d movzx    eax, r9b
1fde91 mov      byte ptr [r14 + 0x160], al
1fde98 imul     rax, r10
1fde9c xor      rax, rbx
1fde9f xor      rax, r11
1fdea2 mov      rcx, rax
1fdea5 add      rax, 0x3abaef
1fdeab xor      rcx, 0x3abaef
1fdeb2 test     dil, dil
1fdeb5 jmp      0x1401fe85a
1fdeba mov      rcx, r14
1fdebd call     0x1401ee070
1fdec2 movzx    ecx, byte ptr [r14 + 0x4ad]
1fdeca movabs   r8, 0xc4ceb9fe1a85ec53
1fded4 mov      r11, qword ptr [r14 + 0xe0]
1fdedb mov      r10, qword ptr [r14 + 0xd0]
1fdee2 movzx    r9d, byte ptr [r14 + 0xe8]
1fdeea mov      eax, eax
1fdeec xor      rcx, rax
1fdeef xor      rcx, qword ptr [r14 + 0x11e8]
1fdef6 mov      rax, rcx
1fdef9 shr      rax, 0x21
1fdefd xor      rax, rcx
1fdf00 imul     rax, rbp
1fdf04 mov      rcx, rax
1fdf07 shr      rcx, 0x21
1fdf0b xor      rcx, rax
1fdf0e imul     rcx, r8
1fdf12 mov      rdx, rcx
1fdf15 shr      rdx, 0x21
1fdf19 xor      rdx, rcx
1fdf1c mov      qword ptr [r14 + 0x11e8], rdx
1fdf23 xor      rdx, qword ptr [r14 + 0x20]
1fdf27 xor      rdx, qword ptr [r14 + 0x28]
1fdf2b mov      rax, rdx
1fdf2e shr      rax, 0x21
1fdf32 xor      rax, rdx
1fdf35 imul     rax, rbp
1fdf39 mov      rcx, rax
1fdf3c shr      rcx, 0x21
1fdf40 xor      rcx, rax
1fdf43 imul     rcx, r8
1fdf47 mov      rax, rcx
1fdf4a shr      rax, 0x21
1fdf4e xor      rax, rcx
1fdf51 mov      qword ptr [r14 + 0x20], rax
1fdf55 mov      rdx, qword ptr [r14 + 0x138]
1fdf5c movzx    ecx, byte ptr [r14 + 0x169]
1fdf64 mov      rax, qword ptr [r14 + 0xd8]
1fdf6b imul     rcx, r11
1fdf6f lea      rbx, [rax + rax*4]
1fdf73 mov      rax, rdx
1fdf76 add      rbx, rbx
1fdf79 xor      rcx, rbx
1fdf7c xor      rcx, r10
1fdf7f xor      rax, rcx
1fdf82 sub      rdx, rcx
1fdf85 test     r9b, r9b
1fdf88 cmove    rdx, rax
1fdf8c mov      rax, qword ptr [r14 + 0x1b0]
1fdf93 inc      qword ptr [r14 + 0x1b8]
1fdf9a imul     rax, r15
1fdf9e add      rax, r12
1fdfa1 mov      qword ptr [r14 + 0x1b0], rax
1fdfa8 shr      rax, 0x1b
1fdfac movzx    r8d, al
1fdfb0 mov      byte ptr [r14 + 0x169], r8b
1fdfb7 imul     r8, r11
1fdfbb xor      r8, rbx
1fdfbe xor      r8, r10
1fdfc1 mov      rcx, r8
1fdfc4 xor      rcx, rdx
1fdfc7 test     r9b, r9b
1fdfca lea      rax, [r8 + rdx]
1fdfce cmove    rax, rcx
1fdfd2 mov      rcx, r14
1fdfd5 mov      qword ptr [r14 + 0x138], rax
1fdfdc call     0x1401f0910
1fdfe1 mov      rax, qword ptr [r14 + 0xd8]
1fdfe8 mov      rdx, qword ptr [r14 + 0x130]
1fdfef mov      r10, qword ptr [r14 + 0xe0]
1fdff6 movzx    ecx, byte ptr [r14 + 0x168]
1fdffe mov      rbx, qword ptr [r14 + 0xd0]
1fe005 lea      r11, [rax + rax*8]
1fe009 movzx    r9d, byte ptr [r14 + 0xe8]
1fe011 mov      rax, rdx
1fe014 imul     rcx, r10
1fe018 xor      rcx, r11
1fe01b xor      rcx, rbx
1fe01e xor      rax, rcx
1fe021 sub      rdx, rcx
1fe024 test     r9b, r9b
1fe027 cmove    rdx, rax
1fe02b mov      rax, qword ptr [r14 + 0x1b0]
1fe032 inc      qword ptr [r14 + 0x1b8]
1fe039 mov      rcx, rdx
1fe03c imul     rax, r15
1fe040 add      rax, r12
1fe043 mov      qword ptr [r14 + 0x1b0], rax
1fe04a shr      rax, 0x1b
1fe04e movzx    r8d, al
1fe052 mov      byte ptr [r14 + 0x168], r8b
1fe059 imul     r8, r10
1fe05d xor      r8, r11
1fe060 xor      r8, rbx
1fe063 xor      rcx, r8
1fe066 test     r9b, r9b
1fe069 lea      rax, [rdx + r8]
1fe06d cmove    rax, rcx
1fe071 mov      rcx, r14
1fe074 mov      qword ptr [r14 + 0x130], rax
1fe07b call     0x1401f0910
1fe080 mov      rcx, r14
1fe083 call     0x1401ee070
1fe088 cmp      eax, dword ptr [r14 + 0x1d8]
1fe08f jae      0x1401fe09b
1fe091 mov      edx, eax
1fe093 mov      rcx, r14
1fe096 call     0x1401f0910
1fe09b mov      rsi, qword ptr [r14 + 0xe0]
1fe0a2 mov      rbp, qword ptr [r14 + 0xd0]
1fe0a9 mov      r11, qword ptr [r14 + 0x130]
1fe0b0 movzx    edi, byte ptr [r14 + 0xe8]
1fe0b8 mov      rax, r11
1fe0bb movzx    ecx, byte ptr [r14 + 0x168]
1fe0c3 mov      rbx, qword ptr [r14 + 0xd8]
1fe0ca mov      r8, qword ptr [r14 + 0x1b8]
1fe0d1 mov      r10, qword ptr [r14 + 0x1b0]
1fe0d8 imul     rcx, rsi
1fe0dc lea      r9, [rbx + rbx*8]
1fe0e0 xor      rcx, r9
1fe0e3 xor      rcx, rbp
1fe0e6 xor      rax, rcx
1fe0e9 sub      r11, rcx
1fe0ec test     dil, dil
1fe0ef cmove    r11, rax
1fe0f3 imul     r10, r15
1fe0f7 mov      rcx, r11
1fe0fa add      r10, r12
1fe0fd mov      rax, r10
1fe100 shr      rax, 0x1b
1fe104 movzx    edx, al
1fe107 mov      byte ptr [r14 + 0x168], dl
1fe10e imul     rdx, rsi
1fe112 xor      rdx, r9
1fe115 xor      rdx, rbp
1fe118 xor      rcx, rdx
1fe11b test     dil, dil
1fe11e lea      rax, [r11 + rdx]
1fe122 cmove    rax, rcx
1fe126 mov      rcx, r11
1fe129 mov      qword ptr [r14 + 0x130], rax
1fe130 lea      rax, [r8 + 2]
1fe134 mov      qword ptr [r14 + 0x1b8], rax
1fe13b mov      r8d, 0xb976
1fe141 imul     r10, r15
1fe145 lea      rax, [rbx + rbx*4]
1fe149 add      rax, rax
1fe14c add      r10, r12
1fe14f mov      qword ptr [r14 + 0x1b0], r10
1fe156 shr      r10, 0x1b
1fe15a movzx    edx, r10b
1fe15e mov      byte ptr [r14 + 0x169], dl
1fe165 imul     rdx, rsi
1fe169 xor      rdx, rax
1fe16c xor      rdx, rbp
1fe16f xor      rcx, rdx
1fe172 test     dil, dil
1fe175 lea      rax, [r11 + rdx]
1fe179 cmove    rax, rcx
1fe17d mov      rcx, r14
1fe180 mov      qword ptr [r14 + 0x138], rax
1fe187 movzx    edx, byte ptr [r14 + 0x4ad]
1fe18f xor      rdx, qword ptr [r14 + 0x348]
1fe196 call     0x1401f1520
1fe19b mov      r8, qword ptr [r14 + 0x348]
1fe1a2 movabs   rdi, 0xff51afd7ed558ccd
1fe1ac mov      rax, r8
1fe1af movabs   rsi, 0xc4ceb9fe1a85ec53
1fe1b9 xor      rax, qword ptr [r14 + 0x20]
1fe1bd mov      rcx, rax
1fe1c0 shr      rcx, 0x21
1fe1c4 xor      rcx, rax
1fe1c7 imul     rcx, rdi
1fe1cb mov      rax, rcx
1fe1ce shr      rax, 0x21
1fe1d2 xor      rax, rcx
1fe1d5 imul     rax, rsi
1fe1d9 mov      rdx, rax
1fe1dc shr      rdx, 0x21
1fe1e0 xor      edx, eax
1fe1e2 lea      eax, [rdx + 1]
1fe1e5 mov      ecx, eax
1fe1e7 xor      eax, edx
1fe1e9 imul     ecx, edx
1fe1ec not      ecx
1fe1ee and      ecx, eax
1fe1f0 test     cl, 1
1fe1f3 je       0x1401fe25c
1fe1f5 and      r8b, 3
1fe1f9 cmp      r8b, 1
1fe1fd jne      0x1401fe25c
1fe1ff mov      rax, qword ptr [r14 + 0x1b0]
1fe206 inc      qword ptr [r14 + 0x1b8]
1fe20d imul     rax, r15
1fe211 add      rax, r12
1fe214 mov      qword ptr [r14 + 0x1b0], rax
1fe21b shr      rax, 0x1b
1fe21f movzx    eax, al
1fe222 mov      byte ptr [r14 + 0x160], al
1fe229 imul     rax, qword ptr [r14 + 0xe0]
1fe231 xor      rax, qword ptr [r14 + 0xd8]
1fe238 xor      rax, qword ptr [r14 + 0xd0]
1fe23f mov      rcx, rax
1fe242 add      rax, 0x17ed28
1fe248 xor      rcx, 0x17ed28
1fe24f cmp      byte ptr [r14 + 0xe8], 0
1fe257 jmp      0x1401fe85a
1fe25c mov      rcx, r14
1fe25f call     0x1401ee070
1fe264 mov      ebx, eax
1fe266 cmp      eax, dword ptr [r14 + 0x1d8]
1fe26d jb       0x1401fe2cc
1fe26f mov      rax, qword ptr [r14 + 0x1b0]
1fe276 inc      qword ptr [r14 + 0x1b8]
1fe27d imul     rax, r15
1fe281 add      rax, r12
1fe284 mov      qword ptr [r14 + 0x1b0], rax
1fe28b shr      rax, 0x1b
1fe28f movzx    eax, al
1fe292 mov      byte ptr [r14 + 0x160], al
1fe299 imul     rax, qword ptr [r14 + 0xe0]
1fe2a1 xor      rax, qword ptr [r14 + 0xd8]
1fe2a8 xor      rax, qword ptr [r14 + 0xd0]
1fe2af mov      rcx, rax
1fe2b2 add      rax, 0xfe1ab
1fe2b8 xor      rcx, 0xfe1ab
1fe2bf cmp      byte ptr [r14 + 0xe8], 0
1fe2c7 jmp      0x1401fe85a
1fe2cc mov      edx, ebx
1fe2ce mov      rcx, r14
1fe2d1 call     0x1401f25b0
1fe2d6 movsxd   rcx, dword ptr [r14 + 0x11e0]
1fe2dd movabs   r8, 0xd6e8feb86659fd93
1fe2e7 mov      rdx, qword ptr [r14 + 0x20]
1fe2eb mov      rax, rbx
1fe2ee imul     rax, r8
1fe2f2 imul     rcx, r15
1fe2f6 rol      rdx, 0x11
1fe2fa xor      rax, rdx
1fe2fd xor      rcx, qword ptr [r14 + 0x260]
1fe304 xor      rax, rcx
1fe307 mov      rcx, rax
1fe30a shr      rcx, 0x21
1fe30e xor      rcx, rax
1fe311 imul     rcx, rdi
1fe315 mov      rdx, rcx
1fe318 shr      rdx, 0x21
1fe31c xor      rdx, rcx
1fe31f imul     rdx, rsi
1fe323 mov      rax, rdx
1fe326 shr      rax, 0x21
1fe32a xor      rax, rdx
1fe32d mov      r10, rax
1fe330 shr      r10, 0x1d
1fe334 xor      r10, rax
1fe337 or       r10, 1
1fe33b mov      rax, r10
1fe33e mov      qword ptr [r14 + 0x260], r10
1fe345 and      eax, 0x3ff
1fe34a cmp      rax, 0x2c5
1fe350 jne      0x1401fe361
1fe352 mov      rcx, r14
1fe355 call     0x1402297e0
1fe35a mov      r10, qword ptr [r14 + 0x260]
1fe361 movzx    eax, r10b
1fe365 and      al, 0x1f
1fe367 cmp      al, 0x15
1fe369 jne      0x1401fe456
1fe36f movsxd   rax, dword ptr [r14 + 0x11e0]
1fe376 xor      rax, 0x5a5a
1fe37c mov      rcx, qword ptr [r14 + 0x20]
1fe380 imul     rax, r15
1fe384 rol      rcx, 0x11
1fe388 xor      rax, r10
1fe38b xor      rcx, rax
1fe38e movabs   rax, 0x8f70feda99a6026d
1fe398 xor      rcx, rax
1fe39b mov      rax, rcx
1fe39e shr      rax, 0x21
1fe3a2 xor      rax, rcx
1fe3a5 imul     rax, rdi
1fe3a9 mov      rcx, rax
1fe3ac shr      rcx, 0x21
1fe3b0 xor      rcx, rax
1fe3b3 imul     rcx, rsi
1fe3b7 mov      rax, rcx
1fe3ba shr      rax, 0x21
1fe3be xor      rax, rcx
1fe3c1 mov      r9, rax
1fe3c4 shr      r9, 0x1d
1fe3c8 xor      r9, rax
1fe3cb or       r9, 1
1fe3cf mov      rax, r9
1fe3d2 mov      rcx, r9
1fe3d5 shr      rax, 8
1fe3d9 and      eax, 3
1fe3dc shr      rcx, 0x28
1fe3e0 imul     r8, rax, 0x3e
1fe3e4 mov      eax, 0x8421085
1fe3e9 mul      ecx
1fe3eb mov      eax, ecx
1fe3ed sub      eax, edx
1fe3ef shr      eax, 1
1fe3f1 add      eax, edx
1fe3f3 shr      eax, 5
1fe3f6 imul     eax, eax, 0x3e
1fe3f9 sub      ecx, eax
1fe3fb mov      eax, ecx
1fe3fd add      r8, rax
1fe400 mov      rax, qword ptr [r14 + 0x4b8]
1fe407 movsxd   rcx, dword ptr [rax + r8*4]
1fe40b movsxd   rax, dword ptr [r14 + 0x4c8]
1fe412 xor      rcx, rax
1fe415 add      rcx, qword ptr [r14 + 0x4c0]
1fe41c xor      rcx, r9
1fe41f mov      rax, rcx
1fe422 shr      rax, 0x21
1fe426 xor      rax, rcx
1fe429 imul     rax, rdi
1fe42d mov      rcx, rax
1fe430 shr      rcx, 0x21
1fe434 xor      rcx, rax
1fe437 imul     rcx, rsi
1fe43b mov      rax, rcx
1fe43e shr      rax, 0x21
1fe442 xor      rax, rcx
1fe445 xor      rax, r10
1fe448 inc      qword ptr [r14 + 0x268]
1fe44f mov      qword ptr [r14 + 0x260], rax
1fe456 inc      dword ptr [r14 + 0x200]
1fe45d mov      eax, dword ptr [r14 + 0x200]
1fe464 cmp      eax, dword ptr [r14 + 0x1fc]
1fe46b jb       0x1401fe480
1fe46d mov      rcx, r14
1fe470 mov      dword ptr [r14 + 0x200], 0
1fe47b call     0x1401ef7c0
1fe480 mov      r8d, ebx
1fe483 mov      edx, ebx
1fe485 mov      rcx, r14
1fe488 call     0x1401f0660
1fe48d inc      qword ptr [r14 + 0x1b8]
1fe494 mov      rcx, rbx
1fe497 mov      r9, qword ptr [r14 + 0x1b0]
1fe49e mov      rbp, r12
1fe4a1 mov      r10, qword ptr [r14 + 0x1b8]
1fe4a8 imul     r9, r15
1fe4ac add      r9, r12
1fe4af lea      r12d, [rbx + 1]
1fe4b3 mov      qword ptr [r14 + 0x1b0], r9
1fe4ba mov      rax, r9
1fe4bd shr      rax, 0x1b
1fe4c1 movzx    edx, al
1fe4c4 mov      byte ptr [r14 + 0x168], dl
1fe4cb mov      rdi, qword ptr [r14 + 0xe0]
1fe4d2 mov      r11, qword ptr [r14 + 0xd8]
1fe4d9 mov      rsi, qword ptr [r14 + 0xd0]
1fe4e0 movzx    r15d, byte ptr [r14 + 0xe8]
1fe4e8 imul     rdx, rdi
1fe4ec lea      rax, [r11 + r11*8]
1fe4f0 xor      rdx, rax
1fe4f3 xor      rdx, rsi
1fe4f6 xor      rcx, rdx
1fe4f9 test     r15b, r15b
1fe4fc lea      rax, [rbx + rdx]
1fe500 cmove    rax, rcx
1fe504 inc      r10
1fe507 mov      qword ptr [r14 + 0x130], rax
1fe50e mov      rcx, qword ptr [r14 + 0x1d0]
1fe515 mov      rax, qword ptr [r14 + 0x48]
1fe519 mov      qword ptr [rsp + 0x60], r10
1fe51e movzx    r8d, byte ptr [rcx + rbx]
1fe523 xor      r8b, byte ptr [rax + rbx]
1fe527 movabs   rax, 0x9e3779b97f4a7c15
1fe531 imul     r9, rax
1fe535 mov      qword ptr [r14 + 0x1b8], r10
1fe53c add      r9, rbp
1fe53f mov      rax, r9
1fe542 shr      rax, 0x1b
1fe546 movzx    edx, al
1fe549 lea      rax, [r11 + r11]
1fe54d mov      byte ptr [r14 + 0x161], dl
1fe554 imul     rdx, rdi
1fe558 xor      rdx, rax
1fe55b xor      rdx, rsi
1fe55e mov      rcx, rdx
1fe561 xor      rcx, r12
1fe564 test     r15b, r15b
1fe567 lea      rax, [rdx + r12]
1fe56b cmove    rax, rcx
1fe56f mov      qword ptr [r14 + 0xf8], rax
1fe576 movsxd   rdx, dword ptr [r14 + 0x11e0]
1fe57d mov      r10, qword ptr [r14 + 0x20]
1fe581 mov      rcx, rdx
1fe584 xor      rcx, qword ptr [r14 + 0x350]
1fe58b xor      rcx, r10
1fe58e xor      rcx, r12
1fe591 xor      rcx, qword ptr [r14 + 0x348]
1fe598 mov      rax, rcx
1fe59b shr      rax, 0x21
1fe59f xor      rax, rcx
1fe5a2 movabs   rcx, 0xff51afd7ed558ccd
1fe5ac imul     rax, rcx
1fe5b0 mov      rcx, rax
1fe5b3 shr      rcx, 0x21
1fe5b7 xor      rcx, rax
1fe5ba movabs   rax, 0xc4ceb9fe1a85ec53
1fe5c4 imul     rcx, rax
1fe5c8 movzx    eax, r8b
1fe5cc mov      rbx, rcx
1fe5cf xor      rax, 0xdd
1fe5d5 shr      rbx, 0x21
1fe5d9 xor      rbx, rcx
1fe5dc lea      rcx, [rip - 0x1fe5e3]
1fe5e3 mov      qword ptr [r14 + 0x28], rbx
1fe5e7 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
1fe5ef xor      bpl, 0x63
1fe5f3 inc      edx
1fe5f5 mov      dword ptr [r14 + 0x11e0], edx
1fe5fc movabs   r8, 0xff51afd7ed558ccd
1fe606 test     dl, 0x1f
1fe609 jne      0x1401fe64f
1fe60b movsxd   rax, edx
1fe60e xor      rax, r10
1fe611 xor      rax, qword ptr [r14 + 0x348]
1fe618 mov      rcx, rax
1fe61b shr      rcx, 0x21
1fe61f xor      rcx, rax
1fe622 movabs   rax, 0xc4ceb9fe1a85ec53
1fe62c imul     rcx, r8
1fe630 mov      rdx, rcx
1fe633 shr      rdx, 0x21
1fe637 xor      rdx, rcx
1fe63a imul     rdx, rax
1fe63e mov      rax, rdx
1fe641 shr      rax, 0x21
1fe645 xor      rax, rdx
1fe648 mov      qword ptr [r14 + 0x348], rax
1fe64f movzx    edx, bpl
1fe653 xor      r10, rdx
1fe656 mov      byte ptr [r14 + 0x4ad], bpl
1fe65d xor      r10, r12
1fe660 movabs   r12, 0xc4ceb9fe1a85ec53
1fe66a mov      rax, r10
1fe66d shr      rax, 0x21
1fe671 xor      rax, r10
1fe674 movabs   r10, 0x9e3779b97f4a7c15
1fe67e imul     rax, r8
1fe682 imul     rdx, r10
1fe686 imul     r9, r10
1fe68a mov      rcx, rax
1fe68d shr      rcx, 0x21
1fe691 xor      rcx, rax
1fe694 imul     rcx, r12
1fe698 mov      rax, rcx
1fe69b shr      rax, 0x21
1fe69f xor      rax, rcx
1fe6a2 mov      ecx, dword ptr [r14 + 0x1178]
1fe6a9 mov      qword ptr [r14 + 0x20], rax
1fe6ad movabs   rax, 0xd6e8feb86659fd93
1fe6b7 imul     rcx, rax
1fe6bb xor      rcx, rdx
1fe6be xor      rcx, rbx
1fe6c1 movabs   rbx, 0x2545f4914f6cdd1d
1fe6cb mov      rax, rcx
1fe6ce add      r9, rbx
1fe6d1 shr      rax, 0x21
1fe6d5 xor      rax, rcx
1fe6d8 imul     rax, r8
1fe6dc mov      rdx, rax
1fe6df shr      rdx, 0x21
1fe6e3 xor      rdx, rax
1fe6e6 mov      rax, qword ptr [rsp + 0x60]
1fe6eb imul     rdx, r12
1fe6ef shr      rdx, 0x21
1fe6f3 and      edx, 3
1fe6f6 inc      rax
1fe6f9 mov      qword ptr [r14 + 0x1b8], rax
1fe700 cmp      bpl, 0x3e
1fe704 jae      0x1401fe79e
1fe70a inc      qword ptr [r14 + 0x11a0]
1fe711 lea      rax, [rip - 0x1fe718]
1fe718 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
1fe720 mov      qword ptr [r14 + 0x1b0], r9
1fe727 shr      r9, 0x1b
1fe72b movzx    eax, r9b
1fe72f mov      byte ptr [r14 + 0x160], al
1fe736 imul     rax, rdi
1fe73a mov      ebx, edx
1fe73c xor      rax, rsi
1fe73f xor      rax, r11
1fe742 mov      rcx, rax
1fe745 add      rax, r8
1fe748 xor      rcx, r8
1fe74b movzx    r8d, bpl
1fe74f test     r15b, r15b
1fe752 cmove    rax, rcx
1fe756 mov      rcx, r14
1fe759 mov      qword ptr [r14 + 0xf0], rax
1fe760 call     0x1401f1f50
1fe765 mov      r8, qword ptr [rsp + 0x70]
1fe76a lea      edx, [r13 - 1]
1fe76e mov      eax, eax
1fe770 imul     rcx, rbx, 0x3e
1fe774 add      rcx, rax
1fe777 mov      rax, qword ptr [r14 + 0x4b8]
1fe77e movsxd   r9, dword ptr [rax + rcx*4]
1fe782 mov      rcx, r14
1fe785 movsxd   rax, dword ptr [r14 + 0x4c8]
1fe78c xor      r9, rax
1fe78f add      r9, qword ptr [r14 + 0x4c0]
1fe796 call     r9
1fe799 jmp      0x1401fe865
1fe79e inc      dword ptr [r14 + 0x11a8]
1fe7a5 mov      rax, r9
1fe7a8 shr      rax, 0x1b
1fe7ac movzx    ecx, al
1fe7af lea      rax, [r11*4]
1fe7b7 mov      byte ptr [r14 + 0x163], cl
1fe7be imul     rcx, rdi
1fe7c2 imul     r9, r10
1fe7c6 xor      rcx, rax
1fe7c9 xor      rcx, rsi
1fe7cc mov      qword ptr [r14 + 0x108], rcx
1fe7d3 mov      r8, qword ptr [r14 + 0x1b8]
1fe7da add      r9, rbx
1fe7dd mov      rax, r9
1fe7e0 shr      rax, 0x1b
1fe7e4 movzx    edx, al
1fe7e7 mov      byte ptr [r14 + 0x16a], dl
1fe7ee imul     rax, r11, 0xb
1fe7f2 imul     rdx, rdi
1fe7f6 xor      rdx, rax
1fe7f9 xor      rdx, rsi
1fe7fc mov      rcx, rdx
1fe7ff xor      rcx, 1
1fe803 test     r15b, r15b
1fe806 lea      rax, [rdx + 1]
1fe80a cmove    rax, rcx
1fe80e mov      qword ptr [r14 + 0x140], rax
1fe815 lea      rax, [r8 + 2]
1fe819 mov      qword ptr [r14 + 0x1b8], rax
1fe820 imul     r9, r10
1fe824 add      r9, rbx
1fe827 mov      qword ptr [r14 + 0x1b0], r9
1fe82e shr      r9, 0x1b
1fe832 movzx    eax, r9b
1fe836 mov      byte ptr [r14 + 0x160], al
1fe83d imul     rax, rdi
1fe841 xor      rax, rsi
1fe844 xor      rax, r11
1fe847 mov      rcx, rax
1fe84a add      rax, 0xfe1ab
1fe850 xor      rcx, 0xfe1ab
1fe857 test     r15b, r15b
1fe85a cmove    rax, rcx
1fe85e mov      qword ptr [r14 + 0xf0], rax
1fe865 mov      r12, qword ptr [rsp + 0x28]
1fe86a mov      rsi, qword ptr [rsp + 0x68]
1fe86f mov      r15, qword ptr [rsp + 0x20]
1fe874 add      rsp, 0x30
1fe878 pop      r14
1fe87a pop      r13
1fe87c pop      rdi
1fe87d pop      rbp
1fe87e pop      rbx
1fe87f ret      
1fe880 mov      edx, 0x54485254
1fe885 mov      rcx, r14
1fe888 call     0x1401ed830
1fe88d int3     
1fe88e mov      edx, 0x43414e59
1fe893 mov      rcx, r14
1fe896 call     0x1401ed830
1fe89b int3     
