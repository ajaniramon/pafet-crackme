20ad10 push     r12
20ad12 push     r13
20ad14 push     r14
20ad16 sub      rsp, 0x40
20ad1a movsxd   rax, dword ptr [rcx + 0x11e0]
20ad21 mov      r14, rcx
20ad24 mov      r13d, edx
20ad27 movabs   rcx, 0x58c3bfd0829beec2
20ad31 imul     rax, rcx
20ad35 movabs   rcx, 0xfa9a351b03456afd
20ad3f mov      r12, r8
20ad42 xor      rax, qword ptr [r14 + 0x28]
20ad46 mov      qword ptr [rsp + 0x60], rax
20ad4b mov      rax, qword ptr [rsp + 0x60]
20ad50 movsxd   rax, dword ptr [r14 + 0x11e0]
20ad57 imul     rax, rcx
20ad5b movabs   rcx, 0x1c52ab45800ee6e8
20ad65 xor      rax, qword ptr [r14 + 0x28]
20ad69 mov      qword ptr [rsp + 0x60], rax
20ad6e mov      rax, qword ptr [rsp + 0x60]
20ad73 movsxd   rax, dword ptr [r14 + 0x11e0]
20ad7a imul     rax, rcx
20ad7e movabs   rcx, 0x71df563df4378d2d
20ad88 xor      rax, qword ptr [r14 + 0x28]
20ad8c mov      qword ptr [rsp + 0x60], rax
20ad91 mov      rax, qword ptr [rsp + 0x60]
20ad96 mov      rax, qword ptr [r14 + 0x2e8]
20ad9d sub      rax, rcx
20ada0 mov      rcx, rax
20ada3 shr      rcx, 0x21
20ada7 xor      rcx, rax
20adaa movabs   rax, 0xff51afd7ed558ccd
20adb4 imul     rcx, rax
20adb8 movabs   rax, 0xc4ceb9fe1a85ec53
20adc2 mov      rdx, rcx
20adc5 shr      rdx, 0x21
20adc9 xor      rdx, rcx
20adcc mov      rcx, r14
20adcf imul     rdx, rax
20add3 mov      rax, rdx
20add6 shr      rax, 0x21
20adda xor      rdx, rax
20addd mov      rax, qword ptr [r14 + 0x2e8]
20ade4 or       rdx, 1
20ade8 xor      rdx, rax
20adeb mov      qword ptr [r14 + 0x2e8], rdx
20adf2 call     0x1401ee940
20adf7 not      rax
20adfa mov      rcx, r14
20adfd mov      rdx, rax
20ae00 call     0x1401ee820
20ae05 mov      rax, qword ptr [r14 + 0x2e8]
20ae0c test     r13d, r13d
20ae0f jns      0x14020b9b0
20ae15 cmp      qword ptr [r14 + 0x11b8], r12
20ae1c jne      0x14020b9be
20ae22 movsxd   rax, dword ptr [r14 + 0x11e0]
20ae29 movabs   rcx, 0xf94fa38c5c81232f
20ae33 imul     rax, rcx
20ae37 mov      rcx, r14
20ae3a xor      rax, qword ptr [r14 + 0x28]
20ae3e mov      qword ptr [rsp + 0x60], rax
20ae43 mov      rax, qword ptr [rsp + 0x60]
20ae48 call     0x1401ee450
20ae4d test     eax, eax
20ae4f jne      0x14020b9a5
20ae55 cmp      dword ptr [r14 + 0xad0], eax
20ae5c jne      0x14020b9a5
20ae62 mov      r8, qword ptr [r14 + 0xf0]
20ae69 movzx    ecx, byte ptr [r14 + 0x160]
20ae71 mov      rax, r8
20ae74 mov      r10, qword ptr [r14 + 0xe0]
20ae7b mov      r11, qword ptr [r14 + 0xd8]
20ae82 mov      r9, qword ptr [r14 + 0x1b0]
20ae89 imul     rcx, r10
20ae8d mov      qword ptr [rsp + 0x68], rbx
20ae92 mov      rbx, qword ptr [r14 + 0xd0]
20ae99 xor      rcx, rbx
20ae9c mov      qword ptr [rsp + 0x38], rbp
20aea1 xor      rcx, r11
20aea4 mov      qword ptr [rsp + 0x30], rsi
20aea9 mov      rsi, qword ptr [r14 + 0x1b8]
20aeb0 xor      rax, rcx
20aeb3 sub      r8, rcx
20aeb6 mov      qword ptr [rsp + 0x28], rdi
20aebb movzx    edi, byte ptr [r14 + 0xe8]
20aec3 movabs   rbp, 0x2545f4914f6cdd1d
20aecd test     dil, dil
20aed0 mov      qword ptr [rsp + 0x20], r15
20aed5 movabs   r15, 0x9e3779b97f4a7c15
20aedf cmove    r8, rax
20aee3 inc      rsi
20aee6 imul     r9, r15
20aeea mov      qword ptr [r14 + 0x1b8], rsi
20aef1 add      r9, rbp
20aef4 mov      qword ptr [r14 + 0x1b0], r9
20aefb mov      rax, r9
20aefe shr      rax, 0x1b
20af02 movzx    edx, al
20af05 mov      byte ptr [r14 + 0x160], dl
20af0c imul     rdx, r10
20af10 xor      rdx, rbx
20af13 xor      rdx, r11
20af16 mov      rcx, rdx
20af19 xor      rcx, r8
20af1c test     dil, dil
20af1f lea      rax, [rdx + r8]
20af23 cmove    rax, rcx
20af27 mov      qword ptr [r14 + 0xf0], rax
20af2e cmp      r8d, 0x338040
20af35 jne      0x14020b98c
20af3b mov      eax, r13d
20af3e btr      eax, 0x1f
20af42 cmp      eax, 2
20af45 jae      0x14020af91
20af47 imul     r9, r15
20af4b lea      rax, [rsi + 1]
20af4f mov      qword ptr [r14 + 0x1b8], rax
20af56 add      r9, rbp
20af59 mov      qword ptr [r14 + 0x1b0], r9
20af60 shr      r9, 0x1b
20af64 movzx    eax, r9b
20af68 mov      byte ptr [r14 + 0x160], al
20af6f imul     rax, r10
20af73 xor      rax, rbx
20af76 xor      rax, r11
20af79 mov      rcx, rax
20af7c add      rax, 0x1ad951
20af82 xor      rcx, 0x1ad951
20af89 test     dil, dil
20af8c jmp      0x14020b981
20af91 mov      rcx, r14
20af94 call     0x1401ee070
20af99 movzx    ecx, byte ptr [r14 + 0x4ad]
20afa1 movabs   rbx, 0xff51afd7ed558ccd
20afab xor      rcx, qword ptr [r14 + 0x11e8]
20afb2 movabs   r8, 0xc4ceb9fe1a85ec53
20afbc mov      r11, qword ptr [r14 + 0xe0]
20afc3 mov      r10, qword ptr [r14 + 0xd0]
20afca movzx    r9d, byte ptr [r14 + 0xe8]
20afd2 mov      eax, eax
20afd4 xor      rcx, rax
20afd7 mov      rax, rcx
20afda shr      rax, 0x21
20afde xor      rax, rcx
20afe1 imul     rax, rbx
20afe5 mov      rcx, rax
20afe8 shr      rcx, 0x21
20afec xor      rcx, rax
20afef imul     rcx, r8
20aff3 mov      rdx, rcx
20aff6 shr      rdx, 0x21
20affa xor      rdx, rcx
20affd mov      qword ptr [r14 + 0x11e8], rdx
20b004 xor      rdx, qword ptr [r14 + 0x28]
20b008 xor      rdx, qword ptr [r14 + 0x20]
20b00c mov      rax, rdx
20b00f shr      rax, 0x21
20b013 xor      rax, rdx
20b016 imul     rax, rbx
20b01a mov      rcx, rax
20b01d shr      rcx, 0x21
20b021 xor      rcx, rax
20b024 imul     rcx, r8
20b028 mov      rax, rcx
20b02b shr      rax, 0x21
20b02f xor      rax, rcx
20b032 mov      qword ptr [r14 + 0x20], rax
20b036 mov      rdx, qword ptr [r14 + 0x138]
20b03d movzx    ecx, byte ptr [r14 + 0x169]
20b045 mov      rax, qword ptr [r14 + 0xd8]
20b04c imul     rcx, r11
20b050 lea      rbx, [rax + rax*4]
20b054 mov      rax, rdx
20b057 add      rbx, rbx
20b05a xor      rcx, rbx
20b05d xor      rcx, r10
20b060 xor      rax, rcx
20b063 sub      rdx, rcx
20b066 test     r9b, r9b
20b069 cmove    rdx, rax
20b06d mov      rax, qword ptr [r14 + 0x1b0]
20b074 inc      qword ptr [r14 + 0x1b8]
20b07b imul     rax, r15
20b07f add      rax, rbp
20b082 mov      qword ptr [r14 + 0x1b0], rax
20b089 shr      rax, 0x1b
20b08d movzx    r8d, al
20b091 mov      byte ptr [r14 + 0x169], r8b
20b098 imul     r8, r11
20b09c xor      r8, rbx
20b09f xor      r8, r10
20b0a2 mov      rcx, r8
20b0a5 xor      rcx, rdx
20b0a8 test     r9b, r9b
20b0ab lea      rax, [r8 + rdx]
20b0af cmove    rax, rcx
20b0b3 mov      rcx, r14
20b0b6 mov      qword ptr [r14 + 0x138], rax
20b0bd call     0x1401f0910
20b0c2 mov      rax, qword ptr [r14 + 0xd8]
20b0c9 mov      r10, qword ptr [r14 + 0xe0]
20b0d0 movzx    ecx, byte ptr [r14 + 0x168]
20b0d8 mov      rbx, qword ptr [r14 + 0xd0]
20b0df mov      rdx, qword ptr [r14 + 0x130]
20b0e6 lea      r11, [rax + rax*8]
20b0ea movzx    r9d, byte ptr [r14 + 0xe8]
20b0f2 mov      rax, rdx
20b0f5 imul     rcx, r10
20b0f9 xor      rcx, r11
20b0fc xor      rcx, rbx
20b0ff xor      rax, rcx
20b102 sub      rdx, rcx
20b105 test     r9b, r9b
20b108 cmove    rdx, rax
20b10c mov      rax, qword ptr [r14 + 0x1b0]
20b113 inc      qword ptr [r14 + 0x1b8]
20b11a imul     rax, r15
20b11e add      rax, rbp
20b121 mov      qword ptr [r14 + 0x1b0], rax
20b128 shr      rax, 0x1b
20b12c movzx    r8d, al
20b130 mov      byte ptr [r14 + 0x168], r8b
20b137 imul     r8, r10
20b13b xor      r8, r11
20b13e xor      r8, rbx
20b141 mov      rcx, r8
20b144 xor      rcx, rdx
20b147 test     r9b, r9b
20b14a lea      rax, [r8 + rdx]
20b14e cmove    rax, rcx
20b152 mov      rcx, r14
20b155 mov      qword ptr [r14 + 0x130], rax
20b15c call     0x1401f0910
20b161 mov      rcx, r14
20b164 call     0x1401ee070
20b169 cmp      eax, dword ptr [r14 + 0x1d8]
20b170 jae      0x14020b17c
20b172 mov      edx, eax
20b174 mov      rcx, r14
20b177 call     0x1401f0910
20b17c mov      rsi, qword ptr [r14 + 0xe0]
20b183 mov      rbp, qword ptr [r14 + 0xd0]
20b18a mov      r11, qword ptr [r14 + 0x130]
20b191 movzx    edi, byte ptr [r14 + 0xe8]
20b199 mov      rax, r11
20b19c movzx    ecx, byte ptr [r14 + 0x168]
20b1a4 mov      rbx, qword ptr [r14 + 0xd8]
20b1ab mov      r8, qword ptr [r14 + 0x1b8]
20b1b2 mov      r10, qword ptr [r14 + 0x1b0]
20b1b9 imul     rcx, rsi
20b1bd lea      r9, [rbx + rbx*8]
20b1c1 xor      rcx, r9
20b1c4 xor      rcx, rbp
20b1c7 xor      rax, rcx
20b1ca sub      r11, rcx
20b1cd test     dil, dil
20b1d0 movabs   rcx, 0x2545f4914f6cdd1d
20b1da cmove    r11, rax
20b1de imul     r10, r15
20b1e2 add      r10, rcx
20b1e5 mov      rcx, r11
20b1e8 mov      rax, r10
20b1eb shr      rax, 0x1b
20b1ef movzx    edx, al
20b1f2 mov      byte ptr [r14 + 0x168], dl
20b1f9 imul     rdx, rsi
20b1fd xor      rdx, r9
20b200 xor      rdx, rbp
20b203 xor      rcx, rdx
20b206 test     dil, dil
20b209 lea      rax, [r11 + rdx]
20b20d cmove    rax, rcx
20b211 mov      rcx, r11
20b214 mov      qword ptr [r14 + 0x130], rax
20b21b movabs   rax, 0x2545f4914f6cdd1d
20b225 imul     r10, r15
20b229 add      r10, rax
20b22c lea      rax, [r8 + 2]
20b230 mov      qword ptr [r14 + 0x1b8], rax
20b237 mov      r8d, 0x56
20b23d mov      qword ptr [r14 + 0x1b0], r10
20b244 lea      rax, [rbx + rbx*4]
20b248 add      rax, rax
20b24b shr      r10, 0x1b
20b24f movzx    edx, r10b
20b253 mov      byte ptr [r14 + 0x169], dl
20b25a imul     rdx, rsi
20b25e xor      rdx, rax
20b261 xor      rdx, rbp
20b264 xor      rcx, rdx
20b267 test     dil, dil
20b26a lea      rax, [r11 + rdx]
20b26e cmove    rax, rcx
20b272 mov      rcx, r14
20b275 mov      qword ptr [r14 + 0x138], rax
20b27c movzx    edx, byte ptr [r14 + 0x4ad]
20b284 xor      rdx, qword ptr [r14 + 0x348]
20b28b call     0x1401f1520
20b290 mov      r8, qword ptr [r14 + 0x348]
20b297 movabs   rdi, 0xff51afd7ed558ccd
20b2a1 mov      rax, r8
20b2a4 movabs   rsi, 0xc4ceb9fe1a85ec53
20b2ae xor      rax, qword ptr [r14 + 0x20]
20b2b2 mov      rcx, rax
20b2b5 shr      rcx, 0x21
20b2b9 xor      rcx, rax
20b2bc imul     rcx, rdi
20b2c0 mov      rax, rcx
20b2c3 shr      rax, 0x21
20b2c7 xor      rax, rcx
20b2ca imul     rax, rsi
20b2ce mov      rdx, rax
20b2d1 shr      rdx, 0x21
20b2d5 xor      edx, eax
20b2d7 lea      eax, [rdx + 1]
20b2da mov      ecx, eax
20b2dc xor      eax, edx
20b2de imul     ecx, edx
20b2e1 not      ecx
20b2e3 and      ecx, eax
20b2e5 test     cl, 1
20b2e8 je       0x14020b35b
20b2ea and      r8b, 3
20b2ee cmp      r8b, 1
20b2f2 jne      0x14020b35b
20b2f4 mov      rax, qword ptr [r14 + 0x1b0]
20b2fb movabs   rcx, 0x2545f4914f6cdd1d
20b305 inc      qword ptr [r14 + 0x1b8]
20b30c imul     rax, r15
20b310 add      rax, rcx
20b313 mov      qword ptr [r14 + 0x1b0], rax
20b31a shr      rax, 0x1b
20b31e movzx    eax, al
20b321 mov      byte ptr [r14 + 0x160], al
20b328 imul     rax, qword ptr [r14 + 0xe0]
20b330 xor      rax, qword ptr [r14 + 0xd8]
20b337 xor      rax, qword ptr [r14 + 0xd0]
20b33e mov      rcx, rax
20b341 add      rax, 0x190631
20b347 xor      rcx, 0x190631
20b34e cmp      byte ptr [r14 + 0xe8], 0
20b356 jmp      0x14020b981
20b35b mov      rcx, r14
20b35e call     0x1401ee070
20b363 mov      ebx, eax
20b365 cmp      eax, dword ptr [r14 + 0x1d8]
20b36c jb       0x14020b3d5
20b36e mov      rax, qword ptr [r14 + 0x1b0]
20b375 movabs   rcx, 0x2545f4914f6cdd1d
20b37f inc      qword ptr [r14 + 0x1b8]
20b386 imul     rax, r15
20b38a add      rax, rcx
20b38d mov      qword ptr [r14 + 0x1b0], rax
20b394 shr      rax, 0x1b
20b398 movzx    eax, al
20b39b mov      byte ptr [r14 + 0x160], al
20b3a2 imul     rax, qword ptr [r14 + 0xe0]
20b3aa xor      rax, qword ptr [r14 + 0xd8]
20b3b1 xor      rax, qword ptr [r14 + 0xd0]
20b3b8 mov      rcx, rax
20b3bb add      rax, 0xfe1ab
20b3c1 xor      rcx, 0xfe1ab
20b3c8 cmp      byte ptr [r14 + 0xe8], 0
20b3d0 jmp      0x14020b981
20b3d5 mov      edx, ebx
20b3d7 mov      rcx, r14
20b3da call     0x1401f25b0
20b3df movsxd   rcx, dword ptr [r14 + 0x11e0]
20b3e6 movabs   r8, 0xd6e8feb86659fd93
20b3f0 mov      rdx, qword ptr [r14 + 0x20]
20b3f4 mov      rax, rbx
20b3f7 imul     rax, r8
20b3fb imul     rcx, r15
20b3ff rol      rdx, 0x11
20b403 xor      rax, rdx
20b406 xor      rcx, qword ptr [r14 + 0x260]
20b40d xor      rax, rcx
20b410 mov      rcx, rax
20b413 shr      rcx, 0x21
20b417 xor      rcx, rax
20b41a imul     rcx, rdi
20b41e mov      rdx, rcx
20b421 shr      rdx, 0x21
20b425 xor      rdx, rcx
20b428 imul     rdx, rsi
20b42c mov      rax, rdx
20b42f shr      rax, 0x21
20b433 xor      rax, rdx
20b436 mov      r10, rax
20b439 shr      r10, 0x1d
20b43d xor      r10, rax
20b440 or       r10, 1
20b444 mov      rax, r10
20b447 mov      qword ptr [r14 + 0x260], r10
20b44e and      eax, 0x3ff
20b453 cmp      rax, 0x2c5
20b459 jne      0x14020b46a
20b45b mov      rcx, r14
20b45e call     0x1402297e0
20b463 mov      r10, qword ptr [r14 + 0x260]
20b46a movzx    eax, r10b
20b46e and      al, 0x1f
20b470 cmp      al, 0x15
20b472 jne      0x14020b55f
20b478 movsxd   rax, dword ptr [r14 + 0x11e0]
20b47f xor      rax, 0x5a5a
20b485 mov      rcx, qword ptr [r14 + 0x20]
20b489 imul     rax, r15
20b48d rol      rcx, 0x11
20b491 xor      rax, r10
20b494 xor      rcx, rax
20b497 movabs   rax, 0x8f70feda99a6026d
20b4a1 xor      rcx, rax
20b4a4 mov      rax, rcx
20b4a7 shr      rax, 0x21
20b4ab xor      rax, rcx
20b4ae imul     rax, rdi
20b4b2 mov      rcx, rax
20b4b5 shr      rcx, 0x21
20b4b9 xor      rcx, rax
20b4bc imul     rcx, rsi
20b4c0 mov      rax, rcx
20b4c3 shr      rax, 0x21
20b4c7 xor      rax, rcx
20b4ca mov      r9, rax
20b4cd shr      r9, 0x1d
20b4d1 xor      r9, rax
20b4d4 or       r9, 1
20b4d8 mov      rax, r9
20b4db mov      rcx, r9
20b4de shr      rax, 8
20b4e2 and      eax, 3
20b4e5 shr      rcx, 0x28
20b4e9 imul     r8, rax, 0x3e
20b4ed mov      eax, 0x8421085
20b4f2 mul      ecx
20b4f4 mov      eax, ecx
20b4f6 sub      eax, edx
20b4f8 shr      eax, 1
20b4fa add      eax, edx
20b4fc shr      eax, 5
20b4ff imul     eax, eax, 0x3e
20b502 sub      ecx, eax
20b504 mov      eax, ecx
20b506 add      r8, rax
20b509 mov      rax, qword ptr [r14 + 0x4b8]
20b510 movsxd   rcx, dword ptr [rax + r8*4]
20b514 movsxd   rax, dword ptr [r14 + 0x4c8]
20b51b xor      rcx, rax
20b51e add      rcx, qword ptr [r14 + 0x4c0]
20b525 xor      rcx, r9
20b528 mov      rax, rcx
20b52b shr      rax, 0x21
20b52f xor      rax, rcx
20b532 imul     rax, rdi
20b536 mov      rcx, rax
20b539 shr      rcx, 0x21
20b53d xor      rcx, rax
20b540 imul     rcx, rsi
20b544 mov      rax, rcx
20b547 shr      rax, 0x21
20b54b xor      rax, rcx
20b54e xor      rax, r10
20b551 inc      qword ptr [r14 + 0x268]
20b558 mov      qword ptr [r14 + 0x260], rax
20b55f inc      dword ptr [r14 + 0x200]
20b566 mov      eax, dword ptr [r14 + 0x200]
20b56d cmp      eax, dword ptr [r14 + 0x1fc]
20b574 jb       0x14020b589
20b576 mov      rcx, r14
20b579 mov      dword ptr [r14 + 0x200], 0
20b584 call     0x1401ef7c0
20b589 mov      r8d, ebx
20b58c mov      edx, ebx
20b58e mov      rcx, r14
20b591 call     0x1401f0660
20b596 inc      qword ptr [r14 + 0x1b8]
20b59d movabs   rax, 0x2545f4914f6cdd1d
20b5a7 mov      r9, qword ptr [r14 + 0x1b0]
20b5ae mov      r10, qword ptr [r14 + 0x1b8]
20b5b5 imul     r9, r15
20b5b9 add      r9, rax
20b5bc mov      qword ptr [r14 + 0x1b0], r9
20b5c3 mov      rax, r9
20b5c6 shr      rax, 0x1b
20b5ca movzx    edx, al
20b5cd mov      byte ptr [r14 + 0x168], dl
20b5d4 mov      rdi, qword ptr [r14 + 0xe0]
20b5db mov      r11, qword ptr [r14 + 0xd8]
20b5e2 mov      rsi, qword ptr [r14 + 0xd0]
20b5e9 movzx    r15d, byte ptr [r14 + 0xe8]
20b5f1 imul     rdx, rdi
20b5f5 lea      rax, [r11 + r11*8]
20b5f9 xor      rdx, rax
20b5fc xor      rdx, rsi
20b5ff mov      rcx, rdx
20b602 xor      rcx, rbx
20b605 test     r15b, r15b
20b608 lea      rax, [rdx + rbx]
20b60c cmove    rax, rcx
20b610 inc      r10
20b613 mov      qword ptr [r14 + 0x130], rax
20b61a mov      rcx, qword ptr [r14 + 0x1d0]
20b621 mov      rax, qword ptr [r14 + 0x48]
20b625 mov      qword ptr [rsp + 0x78], r10
20b62a movzx    r8d, byte ptr [rcx + rbx]
20b62f xor      r8b, byte ptr [rax + rbx]
20b633 inc      ebx
20b635 mov      qword ptr [r14 + 0x1b8], r10
20b63c movabs   rax, 0x9e3779b97f4a7c15
20b646 imul     r9, rax
20b64a mov      qword ptr [rsp + 0x60], rbx
20b64f movabs   rax, 0x2545f4914f6cdd1d
20b659 add      r9, rax
20b65c mov      rax, r9
20b65f shr      rax, 0x1b
20b663 movzx    edx, al
20b666 lea      rax, [r11 + r11]
20b66a mov      byte ptr [r14 + 0x161], dl
20b671 imul     rdx, rdi
20b675 xor      rdx, rax
20b678 xor      rdx, rsi
20b67b mov      rcx, rdx
20b67e xor      rcx, rbx
20b681 test     r15b, r15b
20b684 lea      rax, [rdx + rbx]
20b688 cmove    rax, rcx
20b68c mov      qword ptr [r14 + 0xf8], rax
20b693 movsxd   rdx, dword ptr [r14 + 0x11e0]
20b69a mov      r10, qword ptr [r14 + 0x20]
20b69e mov      rcx, rdx
20b6a1 xor      rcx, qword ptr [r14 + 0x350]
20b6a8 xor      rcx, r10
20b6ab xor      rcx, rbx
20b6ae movabs   rbx, 0xff51afd7ed558ccd
20b6b8 xor      rcx, qword ptr [r14 + 0x348]
20b6bf mov      rax, rcx
20b6c2 shr      rax, 0x21
20b6c6 xor      rax, rcx
20b6c9 imul     rax, rbx
20b6cd mov      rcx, rax
20b6d0 shr      rcx, 0x21
20b6d4 xor      rcx, rax
20b6d7 movabs   rax, 0xc4ceb9fe1a85ec53
20b6e1 imul     rcx, rax
20b6e5 movzx    eax, r8b
20b6e9 mov      rbx, rcx
20b6ec shr      rbx, 0x21
20b6f0 xor      rbx, rcx
20b6f3 lea      rcx, [rip - 0x20b6fa]
20b6fa xor      rax, 0xdd
20b700 mov      qword ptr [r14 + 0x28], rbx
20b704 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
20b70c xor      bpl, 0x63
20b710 movabs   r8, 0xff51afd7ed558ccd
20b71a inc      edx
20b71c mov      dword ptr [r14 + 0x11e0], edx
20b723 test     dl, 0x1f
20b726 jne      0x14020b76c
20b728 movsxd   rax, edx
20b72b xor      rax, r10
20b72e xor      rax, qword ptr [r14 + 0x348]
20b735 mov      rcx, rax
20b738 shr      rcx, 0x21
20b73c xor      rcx, rax
20b73f movabs   rax, 0xc4ceb9fe1a85ec53
20b749 imul     rcx, r8
20b74d mov      rdx, rcx
20b750 shr      rdx, 0x21
20b754 xor      rdx, rcx
20b757 imul     rdx, rax
20b75b mov      rax, rdx
20b75e shr      rax, 0x21
20b762 xor      rax, rdx
20b765 mov      qword ptr [r14 + 0x348], rax
20b76c movzx    edx, bpl
20b770 xor      r10, rdx
20b773 mov      byte ptr [r14 + 0x4ad], bpl
20b77a xor      r10, qword ptr [rsp + 0x60]
20b77f mov      rax, r10
20b782 shr      rax, 0x21
20b786 xor      rax, r10
20b789 movabs   r10, 0x9e3779b97f4a7c15
20b793 imul     rax, r8
20b797 imul     rdx, r10
20b79b imul     r9, r10
20b79f mov      rcx, rax
20b7a2 shr      rcx, 0x21
20b7a6 xor      rcx, rax
20b7a9 movabs   rax, 0xc4ceb9fe1a85ec53
20b7b3 imul     rcx, rax
20b7b7 mov      rax, rcx
20b7ba shr      rax, 0x21
20b7be xor      rax, rcx
20b7c1 mov      ecx, dword ptr [r14 + 0x1178]
20b7c8 mov      qword ptr [r14 + 0x20], rax
20b7cc movabs   rax, 0xd6e8feb86659fd93
20b7d6 imul     rcx, rax
20b7da xor      rcx, rdx
20b7dd xor      rcx, rbx
20b7e0 movabs   rbx, 0x2545f4914f6cdd1d
20b7ea mov      rax, rcx
20b7ed add      r9, rbx
20b7f0 shr      rax, 0x21
20b7f4 xor      rax, rcx
20b7f7 imul     rax, r8
20b7fb mov      rdx, rax
20b7fe shr      rdx, 0x21
20b802 xor      rdx, rax
20b805 movabs   rax, 0xc4ceb9fe1a85ec53
20b80f imul     rdx, rax
20b813 mov      rax, qword ptr [rsp + 0x78]
20b818 shr      rdx, 0x21
20b81c and      edx, 3
20b81f inc      rax
20b822 mov      qword ptr [r14 + 0x1b8], rax
20b829 cmp      bpl, 0x3e
20b82d jae      0x14020b8c5
20b833 inc      qword ptr [r14 + 0x11a0]
20b83a lea      rax, [rip - 0x20b841]
20b841 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
20b849 mov      qword ptr [r14 + 0x1b0], r9
20b850 shr      r9, 0x1b
20b854 movzx    eax, r9b
20b858 mov      byte ptr [r14 + 0x160], al
20b85f imul     rax, rdi
20b863 mov      ebx, edx
20b865 xor      rax, r11
20b868 xor      rax, rsi
20b86b mov      rcx, rax
20b86e add      rax, r8
20b871 xor      rcx, r8
20b874 movzx    r8d, bpl
20b878 test     r15b, r15b
20b87b cmove    rax, rcx
20b87f mov      rcx, r14
20b882 mov      qword ptr [r14 + 0xf0], rax
20b889 call     0x1401f1f50
20b88e mov      eax, eax
20b890 lea      edx, [r13 - 1]
20b894 imul     rcx, rbx, 0x3e
20b898 mov      r8, r12
20b89b add      rcx, rax
20b89e mov      rax, qword ptr [r14 + 0x4b8]
20b8a5 movsxd   r9, dword ptr [rax + rcx*4]
20b8a9 mov      rcx, r14
20b8ac movsxd   rax, dword ptr [r14 + 0x4c8]
20b8b3 xor      r9, rax
20b8b6 add      r9, qword ptr [r14 + 0x4c0]
20b8bd call     r9
20b8c0 jmp      0x14020b98c
20b8c5 inc      dword ptr [r14 + 0x11a8]
20b8cc mov      rax, r9
20b8cf shr      rax, 0x1b
20b8d3 movzx    ecx, al
20b8d6 lea      rax, [r11*4]
20b8de mov      byte ptr [r14 + 0x163], cl
20b8e5 imul     rcx, rdi
20b8e9 imul     r9, r10
20b8ed xor      rcx, rax
20b8f0 xor      rcx, rsi
20b8f3 mov      qword ptr [r14 + 0x108], rcx
20b8fa mov      r8, qword ptr [r14 + 0x1b8]
20b901 add      r9, rbx
20b904 mov      rax, r9
20b907 shr      rax, 0x1b
20b90b movzx    edx, al
20b90e mov      byte ptr [r14 + 0x16a], dl
20b915 imul     rax, r11, 0xb
20b919 imul     rdx, rdi
20b91d xor      rdx, rax
20b920 xor      rdx, rsi
20b923 mov      rcx, rdx
20b926 xor      rcx, 1
20b92a test     r15b, r15b
20b92d lea      rax, [rdx + 1]
20b931 cmove    rax, rcx
20b935 mov      qword ptr [r14 + 0x140], rax
20b93c lea      rax, [r8 + 2]
20b940 mov      qword ptr [r14 + 0x1b8], rax
20b947 imul     r9, r10
20b94b add      r9, rbx
20b94e mov      qword ptr [r14 + 0x1b0], r9
20b955 shr      r9, 0x1b
20b959 movzx    eax, r9b
20b95d mov      byte ptr [r14 + 0x160], al
20b964 imul     rax, rdi
20b968 xor      rax, rsi
20b96b xor      rax, r11
20b96e mov      rcx, rax
20b971 add      rax, 0xfe1ab
20b977 xor      rcx, 0xfe1ab
20b97e test     r15b, r15b
20b981 cmove    rax, rcx
20b985 mov      qword ptr [r14 + 0xf0], rax
20b98c mov      rdi, qword ptr [rsp + 0x28]
20b991 mov      rsi, qword ptr [rsp + 0x30]
20b996 mov      rbp, qword ptr [rsp + 0x38]
20b99b mov      rbx, qword ptr [rsp + 0x68]
20b9a0 mov      r15, qword ptr [rsp + 0x20]
20b9a5 add      rsp, 0x40
20b9a9 pop      r14
20b9ab pop      r13
20b9ad pop      r12
20b9af ret      
20b9b0 mov      edx, 0x54485254
20b9b5 mov      rcx, r14
20b9b8 call     0x1401ed830
20b9bd int3     
20b9be mov      edx, 0x43414e59
20b9c3 mov      rcx, r14
20b9c6 call     0x1401ed830
20b9cb int3     
