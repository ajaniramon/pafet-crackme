20fa70 mov      qword ptr [rsp + 0x10], rbx
20fa75 mov      qword ptr [rsp + 0x18], r8
20fa7a push     rbp
20fa7b push     rsi
20fa7c push     rdi
20fa7d push     r12
20fa7f push     r13
20fa81 push     r14
20fa83 push     r15
20fa85 sub      rsp, 0x20
20fa89 movsxd   rax, dword ptr [rcx + 0x11e0]
20fa90 mov      r14, rcx
20fa93 mov      r13d, edx
20fa96 movabs   rcx, 0x974281eb19518d67
20faa0 imul     rax, rcx
20faa4 movabs   rcx, 0x351b0b20988f0958
20faae movabs   rbp, 0xff51afd7ed558ccd
20fab8 xor      rax, qword ptr [r14 + 0x28]
20fabc movabs   rsi, 0xc4ceb9fe1a85ec53
20fac6 mov      qword ptr [rsp + 0x60], rax
20facb mov      rdi, r8
20face mov      rax, qword ptr [rsp + 0x60]
20fad3 movsxd   rax, dword ptr [r14 + 0x11e0]
20fada imul     rax, rcx
20fade movabs   rcx, 0xd3d3957e1bc4854d
20fae8 xor      rax, qword ptr [r14 + 0x28]
20faec mov      qword ptr [rsp + 0x60], rax
20faf1 mov      rax, qword ptr [rsp + 0x60]
20faf6 movsxd   rax, dword ptr [r14 + 0x11e0]
20fafd imul     rax, rcx
20fb01 movabs   rcx, 0xa76909a713499d63
20fb0b xor      rax, qword ptr [r14 + 0x28]
20fb0f mov      qword ptr [rsp + 0x60], rax
20fb14 mov      rax, qword ptr [rsp + 0x60]
20fb19 mov      rax, qword ptr [r14 + 0x2e8]
20fb20 xor      rax, rcx
20fb23 mov      rcx, rax
20fb26 shr      rcx, 0x21
20fb2a xor      rcx, rax
20fb2d imul     rcx, rbp
20fb31 mov      rdx, rcx
20fb34 shr      rdx, 0x21
20fb38 xor      rdx, rcx
20fb3b mov      rcx, r14
20fb3e imul     rdx, rsi
20fb42 mov      rax, rdx
20fb45 shr      rax, 0x21
20fb49 xor      rdx, rax
20fb4c mov      rax, qword ptr [r14 + 0x2e8]
20fb53 shr      rax, 7
20fb57 add      rax, rdx
20fb5a mov      qword ptr [r14 + 0x2e8], rax
20fb61 call     0x1401f1d80
20fb66 mov      rcx, r14
20fb69 mov      ebx, eax
20fb6b call     0x1401ee940
20fb70 mov      rcx, qword ptr [r14 + 0x1b0]
20fb77 mov      r9, rax
20fb7a inc      qword ptr [r14 + 0x1b8]
20fb81 movabs   r15, 0x9e3779b97f4a7c15
20fb8b mov      r8d, dword ptr [r14 + 0x1f4]
20fb92 movabs   r12, 0x2545f4914f6cdd1d
20fb9c movzx    r10d, bl
20fba0 add      r8d, r10d
20fba3 mov      eax, r10d
20fba6 imul     rcx, r15
20fbaa and      r8d, 1
20fbae add      rcx, r12
20fbb1 mov      qword ptr [r14 + 0x1b0], rcx
20fbb8 shr      rcx, 0x1b
20fbbc movzx    edx, cl
20fbbf mov      byte ptr [r10 + r14 + 0xb65], dl
20fbc7 imul     rax, qword ptr [r14 + 0x238]
20fbcf imul     rdx, qword ptr [r14 + 0x1a0]
20fbd7 xor      rdx, rax
20fbda xor      rdx, qword ptr [r14 + 0x230]
20fbe1 mov      rax, rdx
20fbe4 add      rdx, r9
20fbe7 xor      rax, r9
20fbea cmp      byte ptr [r14 + 0x1f8], 0
20fbf2 cmove    rdx, rax
20fbf6 mov      rax, qword ptr [r14 + 0x180]
20fbfd shl      r8d, 8
20fc01 add      r8d, r10d
20fc04 mov      qword ptr [rax + r8*8], rdx
20fc08 xor      r10, qword ptr [r14 + 0x11c0]
20fc0f xor      r10, r9
20fc12 mov      rax, r10
20fc15 shr      rax, 0x21
20fc19 xor      rax, r10
20fc1c imul     rax, rbp
20fc20 mov      rcx, rax
20fc23 shr      rcx, 0x21
20fc27 xor      rcx, rax
20fc2a imul     rcx, rsi
20fc2e mov      rax, rcx
20fc31 shr      rax, 0x21
20fc35 xor      rax, rcx
20fc38 mov      qword ptr [r14 + 0x11c0], rax
20fc3f mov      rax, qword ptr [r14 + 0x2e8]
20fc46 test     r13d, r13d
20fc49 jns      0x14021077d
20fc4f cmp      qword ptr [r14 + 0x11b8], rdi
20fc56 jne      0x14021078b
20fc5c movsxd   rax, dword ptr [r14 + 0x11e0]
20fc63 movabs   rcx, 0xe0475f03b7d5f5a6
20fc6d imul     rax, rcx
20fc71 mov      rcx, r14
20fc74 xor      rax, qword ptr [r14 + 0x28]
20fc78 mov      qword ptr [rsp + 0x60], rax
20fc7d mov      rax, qword ptr [rsp + 0x60]
20fc82 call     0x1401ee450
20fc87 test     eax, eax
20fc89 jne      0x140210768
20fc8f cmp      dword ptr [r14 + 0xad0], eax
20fc96 jne      0x140210768
20fc9c mov      r8, qword ptr [r14 + 0xf0]
20fca3 movzx    ecx, byte ptr [r14 + 0x160]
20fcab mov      rax, r8
20fcae mov      r10, qword ptr [r14 + 0xe0]
20fcb5 mov      rbx, qword ptr [r14 + 0xd0]
20fcbc mov      r11, qword ptr [r14 + 0xd8]
20fcc3 movzx    edi, byte ptr [r14 + 0xe8]
20fccb mov      r9, qword ptr [r14 + 0x1b0]
20fcd2 mov      rsi, qword ptr [r14 + 0x1b8]
20fcd9 imul     rcx, r10
20fcdd xor      rcx, rbx
20fce0 xor      rcx, r11
20fce3 xor      rax, rcx
20fce6 sub      r8, rcx
20fce9 test     dil, dil
20fcec cmove    r8, rax
20fcf0 inc      rsi
20fcf3 imul     r9, r15
20fcf7 mov      qword ptr [r14 + 0x1b8], rsi
20fcfe add      r9, r12
20fd01 mov      qword ptr [r14 + 0x1b0], r9
20fd08 mov      rax, r9
20fd0b shr      rax, 0x1b
20fd0f movzx    edx, al
20fd12 mov      byte ptr [r14 + 0x160], dl
20fd19 imul     rdx, r10
20fd1d xor      rdx, rbx
20fd20 xor      rdx, r11
20fd23 mov      rcx, rdx
20fd26 xor      rcx, r8
20fd29 test     dil, dil
20fd2c lea      rax, [rdx + r8]
20fd30 cmove    rax, rcx
20fd34 mov      qword ptr [r14 + 0xf0], rax
20fd3b cmp      r8d, 0x48cad
20fd42 jne      0x140210768
20fd48 mov      eax, r13d
20fd4b btr      eax, 0x1f
20fd4f cmp      eax, 2
20fd52 jae      0x14020fd9e
20fd54 imul     r9, r15
20fd58 lea      rax, [rsi + 1]
20fd5c mov      qword ptr [r14 + 0x1b8], rax
20fd63 add      r9, r12
20fd66 mov      qword ptr [r14 + 0x1b0], r9
20fd6d shr      r9, 0x1b
20fd71 movzx    eax, r9b
20fd75 mov      byte ptr [r14 + 0x160], al
20fd7c imul     rax, r10
20fd80 xor      rax, rbx
20fd83 xor      rax, r11
20fd86 mov      rcx, rax
20fd89 add      rax, 0xf6105
20fd8f xor      rcx, 0xf6105
20fd96 test     dil, dil
20fd99 jmp      0x14021075d
20fd9e mov      rcx, r14
20fda1 call     0x1401ee070
20fda6 movzx    ecx, byte ptr [r14 + 0x4ad]
20fdae movabs   r8, 0xc4ceb9fe1a85ec53
20fdb8 mov      r11, qword ptr [r14 + 0xe0]
20fdbf mov      r10, qword ptr [r14 + 0xd0]
20fdc6 movzx    r9d, byte ptr [r14 + 0xe8]
20fdce mov      eax, eax
20fdd0 xor      rcx, rax
20fdd3 xor      rcx, qword ptr [r14 + 0x11e8]
20fdda mov      rax, rcx
20fddd shr      rax, 0x21
20fde1 xor      rax, rcx
20fde4 imul     rax, rbp
20fde8 mov      rcx, rax
20fdeb shr      rcx, 0x21
20fdef xor      rcx, rax
20fdf2 imul     rcx, r8
20fdf6 mov      rdx, rcx
20fdf9 shr      rdx, 0x21
20fdfd xor      rdx, rcx
20fe00 mov      qword ptr [r14 + 0x11e8], rdx
20fe07 xor      rdx, qword ptr [r14 + 0x28]
20fe0b xor      rdx, qword ptr [r14 + 0x20]
20fe0f mov      rax, rdx
20fe12 shr      rax, 0x21
20fe16 xor      rax, rdx
20fe19 imul     rax, rbp
20fe1d mov      rcx, rax
20fe20 shr      rcx, 0x21
20fe24 xor      rcx, rax
20fe27 imul     rcx, r8
20fe2b mov      rax, rcx
20fe2e shr      rax, 0x21
20fe32 xor      rax, rcx
20fe35 mov      qword ptr [r14 + 0x20], rax
20fe39 mov      rdx, qword ptr [r14 + 0x138]
20fe40 movzx    ecx, byte ptr [r14 + 0x169]
20fe48 mov      rax, qword ptr [r14 + 0xd8]
20fe4f imul     rcx, r11
20fe53 lea      rbx, [rax + rax*4]
20fe57 mov      rax, rdx
20fe5a add      rbx, rbx
20fe5d xor      rcx, rbx
20fe60 xor      rcx, r10
20fe63 xor      rax, rcx
20fe66 sub      rdx, rcx
20fe69 test     r9b, r9b
20fe6c cmove    rdx, rax
20fe70 mov      rax, qword ptr [r14 + 0x1b0]
20fe77 inc      qword ptr [r14 + 0x1b8]
20fe7e imul     rax, r15
20fe82 add      rax, r12
20fe85 mov      qword ptr [r14 + 0x1b0], rax
20fe8c shr      rax, 0x1b
20fe90 movzx    r8d, al
20fe94 mov      byte ptr [r14 + 0x169], r8b
20fe9b imul     r8, r11
20fe9f xor      r8, rbx
20fea2 xor      r8, r10
20fea5 mov      rcx, r8
20fea8 xor      rcx, rdx
20feab test     r9b, r9b
20feae lea      rax, [r8 + rdx]
20feb2 cmove    rax, rcx
20feb6 mov      rcx, r14
20feb9 mov      qword ptr [r14 + 0x138], rax
20fec0 call     0x1401f0910
20fec5 mov      rax, qword ptr [r14 + 0xd8]
20fecc mov      rdx, qword ptr [r14 + 0x130]
20fed3 mov      r10, qword ptr [r14 + 0xe0]
20feda movzx    ecx, byte ptr [r14 + 0x168]
20fee2 mov      rbx, qword ptr [r14 + 0xd0]
20fee9 lea      r11, [rax + rax*8]
20feed movzx    r9d, byte ptr [r14 + 0xe8]
20fef5 mov      rax, rdx
20fef8 imul     rcx, r10
20fefc xor      rcx, r11
20feff xor      rcx, rbx
20ff02 xor      rax, rcx
20ff05 sub      rdx, rcx
20ff08 test     r9b, r9b
20ff0b cmove    rdx, rax
20ff0f mov      rax, qword ptr [r14 + 0x1b0]
20ff16 inc      qword ptr [r14 + 0x1b8]
20ff1d mov      rcx, rdx
20ff20 imul     rax, r15
20ff24 add      rax, r12
20ff27 mov      qword ptr [r14 + 0x1b0], rax
20ff2e shr      rax, 0x1b
20ff32 movzx    r8d, al
20ff36 mov      byte ptr [r14 + 0x168], r8b
20ff3d imul     r8, r10
20ff41 xor      r8, r11
20ff44 xor      r8, rbx
20ff47 xor      rcx, r8
20ff4a test     r9b, r9b
20ff4d lea      rax, [rdx + r8]
20ff51 cmove    rax, rcx
20ff55 mov      rcx, r14
20ff58 mov      qword ptr [r14 + 0x130], rax
20ff5f call     0x1401f0910
20ff64 mov      rcx, r14
20ff67 call     0x1401ee070
20ff6c cmp      eax, dword ptr [r14 + 0x1d8]
20ff73 jae      0x14020ff7f
20ff75 mov      edx, eax
20ff77 mov      rcx, r14
20ff7a call     0x1401f0910
20ff7f mov      rsi, qword ptr [r14 + 0xe0]
20ff86 mov      rbp, qword ptr [r14 + 0xd0]
20ff8d mov      r11, qword ptr [r14 + 0x130]
20ff94 movzx    edi, byte ptr [r14 + 0xe8]
20ff9c mov      rax, r11
20ff9f movzx    ecx, byte ptr [r14 + 0x168]
20ffa7 mov      rbx, qword ptr [r14 + 0xd8]
20ffae mov      r8, qword ptr [r14 + 0x1b8]
20ffb5 mov      r9, qword ptr [r14 + 0x1b0]
20ffbc imul     rcx, rsi
20ffc0 lea      r10, [rbx + rbx*8]
20ffc4 xor      rcx, r10
20ffc7 xor      rcx, rbp
20ffca xor      rax, rcx
20ffcd sub      r11, rcx
20ffd0 test     dil, dil
20ffd3 cmove    r11, rax
20ffd7 imul     r9, r15
20ffdb mov      rcx, r11
20ffde add      r9, r12
20ffe1 mov      rax, r9
20ffe4 shr      rax, 0x1b
20ffe8 movzx    edx, al
20ffeb mov      byte ptr [r14 + 0x168], dl
20fff2 imul     rdx, rsi
20fff6 xor      rdx, rbp
20fff9 xor      rdx, r10
20fffc xor      rcx, rdx
20ffff test     dil, dil
210002 lea      rax, [r11 + rdx]
210006 cmove    rax, rcx
21000a mov      rcx, r11
21000d mov      qword ptr [r14 + 0x130], rax
210014 lea      rax, [r8 + 2]
210018 mov      qword ptr [r14 + 0x1b8], rax
21001f mov      r8d, 0xaac4
210025 imul     r9, r15
210029 lea      rax, [rbx + rbx*4]
21002d add      rax, rax
210030 add      r9, r12
210033 mov      qword ptr [r14 + 0x1b0], r9
21003a shr      r9, 0x1b
21003e movzx    edx, r9b
210042 mov      byte ptr [r14 + 0x169], dl
210049 imul     rdx, rsi
21004d xor      rdx, rax
210050 xor      rdx, rbp
210053 xor      rcx, rdx
210056 test     dil, dil
210059 lea      rax, [r11 + rdx]
21005d cmove    rax, rcx
210061 mov      rcx, r14
210064 mov      qword ptr [r14 + 0x138], rax
21006b movzx    edx, byte ptr [r14 + 0x4ad]
210073 xor      rdx, qword ptr [r14 + 0x348]
21007a call     0x1401f1520
21007f mov      r8, qword ptr [r14 + 0x348]
210086 movabs   rdi, 0xff51afd7ed558ccd
210090 mov      rax, r8
210093 movabs   rbp, 0xc4ceb9fe1a85ec53
21009d xor      rax, qword ptr [r14 + 0x20]
2100a1 mov      rcx, rax
2100a4 shr      rcx, 0x21
2100a8 xor      rcx, rax
2100ab imul     rcx, rdi
2100af mov      rax, rcx
2100b2 shr      rax, 0x21
2100b6 xor      rax, rcx
2100b9 imul     rax, rbp
2100bd mov      rdx, rax
2100c0 shr      rdx, 0x21
2100c4 xor      edx, eax
2100c6 mov      ecx, edx
2100c8 lea      eax, [rdx + 1]
2100cb imul     ecx, eax
2100ce xor      edx, eax
2100d0 not      ecx
2100d2 and      ecx, edx
2100d4 test     cl, 1
2100d7 je       0x140210140
2100d9 and      r8b, 3
2100dd cmp      r8b, 1
2100e1 jne      0x140210140
2100e3 mov      rax, qword ptr [r14 + 0x1b0]
2100ea inc      qword ptr [r14 + 0x1b8]
2100f1 imul     rax, r15
2100f5 add      rax, r12
2100f8 mov      qword ptr [r14 + 0x1b0], rax
2100ff shr      rax, 0x1b
210103 movzx    eax, al
210106 mov      byte ptr [r14 + 0x160], al
21010d imul     rax, qword ptr [r14 + 0xe0]
210115 xor      rax, qword ptr [r14 + 0xd8]
21011c xor      rax, qword ptr [r14 + 0xd0]
210123 mov      rcx, rax
210126 add      rax, 0x116fdf
21012c xor      rcx, 0x116fdf
210133 cmp      byte ptr [r14 + 0xe8], 0
21013b jmp      0x14021075d
210140 mov      rcx, r14
210143 call     0x1401ee070
210148 mov      ebx, eax
21014a cmp      eax, dword ptr [r14 + 0x1d8]
210151 jb       0x1402101b0
210153 mov      rax, qword ptr [r14 + 0x1b0]
21015a inc      qword ptr [r14 + 0x1b8]
210161 imul     rax, r15
210165 add      rax, r12
210168 mov      qword ptr [r14 + 0x1b0], rax
21016f shr      rax, 0x1b
210173 movzx    eax, al
210176 mov      byte ptr [r14 + 0x160], al
21017d imul     rax, qword ptr [r14 + 0xe0]
210185 xor      rax, qword ptr [r14 + 0xd8]
21018c xor      rax, qword ptr [r14 + 0xd0]
210193 mov      rcx, rax
210196 add      rax, 0xfe1ab
21019c xor      rcx, 0xfe1ab
2101a3 cmp      byte ptr [r14 + 0xe8], 0
2101ab jmp      0x14021075d
2101b0 mov      edx, ebx
2101b2 mov      rcx, r14
2101b5 call     0x1401f25b0
2101ba movsxd   rcx, dword ptr [r14 + 0x11e0]
2101c1 movabs   r8, 0xd6e8feb86659fd93
2101cb mov      rdx, qword ptr [r14 + 0x20]
2101cf mov      rax, rbx
2101d2 imul     rax, r8
2101d6 imul     rcx, r15
2101da rol      rdx, 0x11
2101de xor      rax, rdx
2101e1 xor      rcx, qword ptr [r14 + 0x260]
2101e8 xor      rax, rcx
2101eb mov      rcx, rax
2101ee shr      rcx, 0x21
2101f2 xor      rcx, rax
2101f5 imul     rcx, rdi
2101f9 mov      rdx, rcx
2101fc shr      rdx, 0x21
210200 xor      rdx, rcx
210203 imul     rdx, rbp
210207 mov      rax, rdx
21020a shr      rax, 0x21
21020e xor      rax, rdx
210211 mov      r10, rax
210214 shr      r10, 0x1d
210218 xor      r10, rax
21021b or       r10, 1
21021f mov      rax, r10
210222 mov      qword ptr [r14 + 0x260], r10
210229 and      eax, 0x3ff
21022e cmp      rax, 0x2c5
210234 jne      0x140210245
210236 mov      rcx, r14
210239 call     0x1402297e0
21023e mov      r10, qword ptr [r14 + 0x260]
210245 movzx    eax, r10b
210249 and      al, 0x1f
21024b cmp      al, 0x15
21024d jne      0x14021033b
210253 movsxd   rcx, dword ptr [r14 + 0x11e0]
21025a mov      rax, qword ptr [r14 + 0x20]
21025e xor      rcx, 0x5a5a
210265 rol      rax, 0x11
210269 imul     rcx, r15
21026d xor      rcx, r10
210270 xor      rcx, rax
210273 movabs   rax, 0x8f70feda99a6026d
21027d xor      rcx, rax
210280 mov      rax, rcx
210283 shr      rax, 0x21
210287 xor      rax, rcx
21028a imul     rax, rdi
21028e mov      rcx, rax
210291 shr      rcx, 0x21
210295 xor      rcx, rax
210298 imul     rcx, rbp
21029c mov      rax, rcx
21029f shr      rax, 0x21
2102a3 xor      rax, rcx
2102a6 mov      r9, rax
2102a9 shr      r9, 0x1d
2102ad xor      r9, rax
2102b0 or       r9, 1
2102b4 mov      rax, r9
2102b7 mov      rcx, r9
2102ba shr      rax, 8
2102be and      eax, 3
2102c1 shr      rcx, 0x28
2102c5 imul     r8, rax, 0x3e
2102c9 mov      eax, 0x8421085
2102ce mul      ecx
2102d0 mov      eax, ecx
2102d2 sub      eax, edx
2102d4 shr      eax, 1
2102d6 add      eax, edx
2102d8 shr      eax, 5
2102db imul     eax, eax, 0x3e
2102de sub      ecx, eax
2102e0 mov      eax, ecx
2102e2 add      r8, rax
2102e5 mov      rax, qword ptr [r14 + 0x4b8]
2102ec movsxd   rcx, dword ptr [rax + r8*4]
2102f0 movsxd   rax, dword ptr [r14 + 0x4c8]
2102f7 xor      rcx, rax
2102fa add      rcx, qword ptr [r14 + 0x4c0]
210301 xor      rcx, r9
210304 mov      rax, rcx
210307 shr      rax, 0x21
21030b xor      rax, rcx
21030e imul     rax, rdi
210312 mov      rcx, rax
210315 shr      rcx, 0x21
210319 xor      rcx, rax
21031c imul     rcx, rbp
210320 mov      rax, rcx
210323 shr      rax, 0x21
210327 xor      rax, r10
21032a xor      rax, rcx
21032d inc      qword ptr [r14 + 0x268]
210334 mov      qword ptr [r14 + 0x260], rax
21033b inc      dword ptr [r14 + 0x200]
210342 mov      eax, dword ptr [r14 + 0x200]
210349 cmp      eax, dword ptr [r14 + 0x1fc]
210350 jb       0x140210365
210352 mov      rcx, r14
210355 mov      dword ptr [r14 + 0x200], 0
210360 call     0x1401ef7c0
210365 mov      r8d, ebx
210368 mov      edx, ebx
21036a mov      rcx, r14
21036d call     0x1401f0660
210372 inc      qword ptr [r14 + 0x1b8]
210379 mov      rcx, rbx
21037c mov      r9, qword ptr [r14 + 0x1b0]
210383 imul     r9, r15
210387 mov      r15, qword ptr [r14 + 0x1b8]
21038e add      r9, r12
210391 lea      r12d, [rbx + 1]
210395 mov      qword ptr [r14 + 0x1b0], r9
21039c mov      rax, r9
21039f shr      rax, 0x1b
2103a3 movzx    edx, al
2103a6 mov      byte ptr [r14 + 0x168], dl
2103ad mov      r11, qword ptr [r14 + 0xe0]
2103b4 mov      r10, qword ptr [r14 + 0xd8]
2103bb mov      rdi, qword ptr [r14 + 0xd0]
2103c2 movzx    ebp, byte ptr [r14 + 0xe8]
2103ca imul     rdx, r11
2103ce lea      rax, [r10 + r10*8]
2103d2 xor      rdx, rax
2103d5 xor      rdx, rdi
2103d8 xor      rcx, rdx
2103db test     bpl, bpl
2103de lea      rax, [rbx + rdx]
2103e2 cmove    rax, rcx
2103e6 inc      r15
2103e9 mov      qword ptr [r14 + 0x130], rax
2103f0 mov      rcx, qword ptr [r14 + 0x1d0]
2103f7 mov      rax, qword ptr [r14 + 0x48]
2103fb mov      qword ptr [rsp + 0x60], r15
210400 movzx    r8d, byte ptr [rcx + rbx]
210405 xor      r8b, byte ptr [rax + rbx]
210409 movabs   rax, 0x9e3779b97f4a7c15
210413 imul     r9, rax
210417 mov      qword ptr [r14 + 0x1b8], r15
21041e movabs   rax, 0x2545f4914f6cdd1d
210428 add      r9, rax
21042b mov      rax, r9
21042e shr      rax, 0x1b
210432 movzx    edx, al
210435 lea      rax, [r10 + r10]
210439 mov      byte ptr [r14 + 0x161], dl
210440 imul     rdx, r11
210444 xor      rdx, rax
210447 xor      rdx, rdi
21044a mov      rcx, rdx
21044d xor      rcx, r12
210450 test     bpl, bpl
210453 lea      rax, [rdx + r12]
210457 cmove    rax, rcx
21045b mov      qword ptr [r14 + 0xf8], rax
210462 movsxd   rdx, dword ptr [r14 + 0x11e0]
210469 mov      rbx, qword ptr [r14 + 0x20]
21046d mov      rcx, rdx
210470 xor      rcx, qword ptr [r14 + 0x350]
210477 xor      rcx, r12
21047a xor      rcx, qword ptr [r14 + 0x348]
210481 xor      rcx, rbx
210484 mov      rax, rcx
210487 shr      rax, 0x21
21048b xor      rax, rcx
21048e movabs   rcx, 0xff51afd7ed558ccd
210498 imul     rax, rcx
21049c mov      rcx, rax
21049f shr      rcx, 0x21
2104a3 xor      rcx, rax
2104a6 movabs   rax, 0xc4ceb9fe1a85ec53
2104b0 imul     rcx, rax
2104b4 movzx    eax, r8b
2104b8 mov      r15, rcx
2104bb xor      rax, 0xdd
2104c1 shr      r15, 0x21
2104c5 xor      r15, rcx
2104c8 lea      rcx, [rip - 0x2104cf]
2104cf mov      qword ptr [r14 + 0x28], r15
2104d3 movzx    esi, byte ptr [rax + rcx + 0x3ecf00]
2104db xor      sil, 0x63
2104df inc      edx
2104e1 mov      dword ptr [r14 + 0x11e0], edx
2104e8 test     dl, 0x1f
2104eb jne      0x14021053b
2104ed movsxd   rax, edx
2104f0 xor      rax, qword ptr [r14 + 0x348]
2104f7 xor      rax, rbx
2104fa mov      rcx, rax
2104fd shr      rcx, 0x21
210501 xor      rcx, rax
210504 movabs   rax, 0xff51afd7ed558ccd
21050e imul     rcx, rax
210512 movabs   rax, 0xc4ceb9fe1a85ec53
21051c mov      rdx, rcx
21051f shr      rdx, 0x21
210523 xor      rdx, rcx
210526 imul     rdx, rax
21052a mov      rax, rdx
21052d shr      rax, 0x21
210531 xor      rax, rdx
210534 mov      qword ptr [r14 + 0x348], rax
21053b movzx    r8d, sil
21053f mov      eax, r8d
210542 mov      byte ptr [r14 + 0x4ad], sil
210549 xor      rax, r12
21054c movabs   r12, 0xff51afd7ed558ccd
210556 xor      rax, rbx
210559 movabs   rbx, 0x9e3779b97f4a7c15
210563 mov      rcx, rax
210566 shr      rcx, 0x21
21056a xor      rcx, rax
21056d movabs   rax, 0xc4ceb9fe1a85ec53
210577 imul     rcx, r12
21057b imul     r8, rbx
21057f imul     r9, rbx
210583 mov      rdx, rcx
210586 shr      rdx, 0x21
21058a xor      rdx, rcx
21058d mov      ecx, dword ptr [r14 + 0x1178]
210594 imul     rdx, rax
210598 mov      rax, rdx
21059b shr      rax, 0x21
21059f xor      rax, rdx
2105a2 mov      qword ptr [r14 + 0x20], rax
2105a6 movabs   rax, 0xd6e8feb86659fd93
2105b0 imul     rcx, rax
2105b4 xor      rcx, r8
2105b7 xor      rcx, r15
2105ba movabs   r15, 0x2545f4914f6cdd1d
2105c4 mov      rax, rcx
2105c7 add      r9, r15
2105ca shr      rax, 0x21
2105ce xor      rax, rcx
2105d1 imul     rax, r12
2105d5 mov      rdx, rax
2105d8 shr      rdx, 0x21
2105dc xor      rdx, rax
2105df movabs   rax, 0xc4ceb9fe1a85ec53
2105e9 imul     rdx, rax
2105ed mov      rax, qword ptr [rsp + 0x60]
2105f2 shr      rdx, 0x21
2105f6 and      edx, 3
2105f9 inc      rax
2105fc mov      qword ptr [r14 + 0x1b8], rax
210603 cmp      sil, 0x3e
210607 jae      0x1402106a1
21060d inc      qword ptr [r14 + 0x11a0]
210614 lea      rax, [rip - 0x21061b]
21061b mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
210623 mov      qword ptr [r14 + 0x1b0], r9
21062a shr      r9, 0x1b
21062e movzx    eax, r9b
210632 mov      byte ptr [r14 + 0x160], al
210639 imul     rax, r11
21063d mov      ebx, edx
21063f xor      rax, rdi
210642 xor      rax, r10
210645 mov      rcx, rax
210648 add      rax, r8
21064b xor      rcx, r8
21064e movzx    r8d, sil
210652 test     bpl, bpl
210655 cmove    rax, rcx
210659 mov      rcx, r14
21065c mov      qword ptr [r14 + 0xf0], rax
210663 call     0x1401f1f50
210668 mov      r8, qword ptr [rsp + 0x70]
21066d lea      edx, [r13 - 1]
210671 mov      eax, eax
210673 imul     rcx, rbx, 0x3e
210677 add      rcx, rax
21067a mov      rax, qword ptr [r14 + 0x4b8]
210681 movsxd   r9, dword ptr [rax + rcx*4]
210685 mov      rcx, r14
210688 movsxd   rax, dword ptr [r14 + 0x4c8]
21068f xor      r9, rax
210692 add      r9, qword ptr [r14 + 0x4c0]
210699 call     r9
21069c jmp      0x140210768
2106a1 inc      dword ptr [r14 + 0x11a8]
2106a8 mov      rax, r9
2106ab shr      rax, 0x1b
2106af movzx    ecx, al
2106b2 lea      rax, [r10*4]
2106ba mov      byte ptr [r14 + 0x163], cl
2106c1 imul     rcx, r11
2106c5 imul     r9, rbx
2106c9 xor      rcx, rax
2106cc xor      rcx, rdi
2106cf mov      qword ptr [r14 + 0x108], rcx
2106d6 mov      r8, qword ptr [r14 + 0x1b8]
2106dd add      r9, r15
2106e0 mov      rax, r9
2106e3 shr      rax, 0x1b
2106e7 movzx    edx, al
2106ea mov      byte ptr [r14 + 0x16a], dl
2106f1 imul     rax, r10, 0xb
2106f5 imul     rdx, r11
2106f9 xor      rdx, rax
2106fc xor      rdx, rdi
2106ff mov      rcx, rdx
210702 xor      rcx, 1
210706 test     bpl, bpl
210709 lea      rax, [rdx + 1]
21070d cmove    rax, rcx
210711 mov      qword ptr [r14 + 0x140], rax
210718 lea      rax, [r8 + 2]
21071c mov      qword ptr [r14 + 0x1b8], rax
210723 imul     r9, rbx
210727 add      r9, r15
21072a mov      qword ptr [r14 + 0x1b0], r9
210731 shr      r9, 0x1b
210735 movzx    eax, r9b
210739 mov      byte ptr [r14 + 0x160], al
210740 imul     rax, r11
210744 xor      rax, rdi
210747 xor      rax, r10
21074a mov      rcx, rax
21074d add      rax, 0xfe1ab
210753 xor      rcx, 0xfe1ab
21075a test     bpl, bpl
21075d cmove    rax, rcx
210761 mov      qword ptr [r14 + 0xf0], rax
210768 mov      rbx, qword ptr [rsp + 0x68]
21076d add      rsp, 0x20
210771 pop      r15
210773 pop      r14
210775 pop      r13
210777 pop      r12
210779 pop      rdi
21077a pop      rsi
21077b pop      rbp
21077c ret      
21077d mov      edx, 0x54485254
210782 mov      rcx, r14
210785 call     0x1401ed830
21078a int3     
21078b mov      edx, 0x43414e59
210790 mov      rcx, r14
210793 call     0x1401ed830
210798 int3     
