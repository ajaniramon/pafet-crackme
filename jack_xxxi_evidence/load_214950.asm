214950 push     r12
214952 push     r13
214954 push     r14
214956 sub      rsp, 0x40
21495a movsxd   rax, dword ptr [rcx + 0x11e0]
214961 mov      r14, rcx
214964 mov      r13d, edx
214967 movabs   rcx, 0xacbb8020808b8fca
214971 imul     rax, rcx
214975 movabs   rcx, 0xee20aeb01550bf5
21497f mov      r12, r8
214982 xor      rax, qword ptr [r14 + 0x28]
214986 mov      qword ptr [rsp + 0x60], rax
21498b mov      rax, qword ptr [rsp + 0x60]
214990 movsxd   rax, dword ptr [r14 + 0x11e0]
214997 imul     rax, rcx
21499b movabs   rcx, 0xe82a94b5821e87e0
2149a5 xor      rax, qword ptr [r14 + 0x28]
2149a9 mov      qword ptr [rsp + 0x60], rax
2149ae mov      rax, qword ptr [rsp + 0x60]
2149b3 movsxd   rax, dword ptr [r14 + 0x11e0]
2149ba imul     rax, rcx
2149be movabs   rcx, 0x9c90086c8a939fce
2149c8 xor      rax, qword ptr [r14 + 0x28]
2149cc mov      qword ptr [rsp + 0x60], rax
2149d1 mov      rax, qword ptr [rsp + 0x60]
2149d6 mov      rax, qword ptr [r14 + 0x2e0]
2149dd xor      rax, rcx
2149e0 mov      rcx, rax
2149e3 shr      rcx, 0x21
2149e7 xor      rcx, rax
2149ea movabs   rax, 0xff51afd7ed558ccd
2149f4 imul     rcx, rax
2149f8 movabs   rax, 0xc4ceb9fe1a85ec53
214a02 mov      rdx, rcx
214a05 shr      rdx, 0x21
214a09 xor      rdx, rcx
214a0c mov      rcx, r14
214a0f imul     rdx, rax
214a13 mov      rax, rdx
214a16 shr      rax, 0x21
214a1a xor      rdx, rax
214a1d mov      rax, qword ptr [r14 + 0x2e0]
214a24 shr      rax, 7
214a28 add      rax, rdx
214a2b mov      qword ptr [r14 + 0x2e0], rax
214a32 call     0x1401f1d80
214a37 mov      edx, eax
214a39 mov      rcx, r14
214a3c call     0x1401ee650
214a41 mov      rdx, rax
214a44 mov      rcx, r14
214a47 call     0x1401ee820
214a4c mov      rax, qword ptr [r14 + 0x2e0]
214a53 test     r13d, r13d
214a56 jns      0x1402155f7
214a5c cmp      qword ptr [r14 + 0x11b8], r12
214a63 jne      0x140215605
214a69 movsxd   rax, dword ptr [r14 + 0x11e0]
214a70 movabs   rcx, 0x4fe04db5205cb7a7
214a7a imul     rax, rcx
214a7e mov      rcx, r14
214a81 xor      rax, qword ptr [r14 + 0x28]
214a85 mov      qword ptr [rsp + 0x60], rax
214a8a mov      rax, qword ptr [rsp + 0x60]
214a8f call     0x1401ee450
214a94 test     eax, eax
214a96 jne      0x1402155ec
214a9c cmp      dword ptr [r14 + 0xad0], eax
214aa3 jne      0x1402155ec
214aa9 mov      r8, qword ptr [r14 + 0xf0]
214ab0 movzx    ecx, byte ptr [r14 + 0x160]
214ab8 mov      rax, r8
214abb mov      r10, qword ptr [r14 + 0xe0]
214ac2 mov      r11, qword ptr [r14 + 0xd8]
214ac9 mov      r9, qword ptr [r14 + 0x1b0]
214ad0 imul     rcx, r10
214ad4 mov      qword ptr [rsp + 0x68], rbx
214ad9 mov      rbx, qword ptr [r14 + 0xd0]
214ae0 xor      rcx, rbx
214ae3 mov      qword ptr [rsp + 0x38], rbp
214ae8 xor      rcx, r11
214aeb mov      qword ptr [rsp + 0x30], rsi
214af0 mov      rsi, qword ptr [r14 + 0x1b8]
214af7 xor      rax, rcx
214afa sub      r8, rcx
214afd mov      qword ptr [rsp + 0x28], rdi
214b02 movzx    edi, byte ptr [r14 + 0xe8]
214b0a movabs   rbp, 0x2545f4914f6cdd1d
214b14 test     dil, dil
214b17 mov      qword ptr [rsp + 0x20], r15
214b1c movabs   r15, 0x9e3779b97f4a7c15
214b26 cmove    r8, rax
214b2a inc      rsi
214b2d imul     r9, r15
214b31 mov      qword ptr [r14 + 0x1b8], rsi
214b38 mov      rcx, r8
214b3b add      r9, rbp
214b3e mov      qword ptr [r14 + 0x1b0], r9
214b45 mov      rax, r9
214b48 shr      rax, 0x1b
214b4c movzx    edx, al
214b4f mov      byte ptr [r14 + 0x160], dl
214b56 imul     rdx, r10
214b5a xor      rdx, rbx
214b5d xor      rdx, r11
214b60 xor      rcx, rdx
214b63 test     dil, dil
214b66 lea      rax, [r8 + rdx]
214b6a cmove    rax, rcx
214b6e mov      qword ptr [r14 + 0xf0], rax
214b75 cmp      r8d, 0x48cad
214b7c jne      0x1402155d3
214b82 mov      eax, r13d
214b85 btr      eax, 0x1f
214b89 cmp      eax, 2
214b8c jae      0x140214bd8
214b8e imul     r9, r15
214b92 lea      rax, [rsi + 1]
214b96 mov      qword ptr [r14 + 0x1b8], rax
214b9d add      r9, rbp
214ba0 mov      qword ptr [r14 + 0x1b0], r9
214ba7 shr      r9, 0x1b
214bab movzx    eax, r9b
214baf mov      byte ptr [r14 + 0x160], al
214bb6 imul     rax, r10
214bba xor      rax, rbx
214bbd xor      rax, r11
214bc0 mov      rcx, rax
214bc3 add      rax, 0xf6105
214bc9 xor      rcx, 0xf6105
214bd0 test     dil, dil
214bd3 jmp      0x1402155c8
214bd8 mov      rcx, r14
214bdb call     0x1401ee070
214be0 movzx    ecx, byte ptr [r14 + 0x4ad]
214be8 movabs   rbx, 0xff51afd7ed558ccd
214bf2 mov      r11, qword ptr [r14 + 0xe0]
214bf9 movabs   r8, 0xc4ceb9fe1a85ec53
214c03 mov      r10, qword ptr [r14 + 0xd0]
214c0a movzx    r9d, byte ptr [r14 + 0xe8]
214c12 mov      eax, eax
214c14 xor      rcx, rax
214c17 xor      rcx, qword ptr [r14 + 0x11e8]
214c1e mov      rax, rcx
214c21 shr      rax, 0x21
214c25 xor      rax, rcx
214c28 imul     rax, rbx
214c2c mov      rcx, rax
214c2f shr      rcx, 0x21
214c33 xor      rcx, rax
214c36 imul     rcx, r8
214c3a mov      rdx, rcx
214c3d shr      rdx, 0x21
214c41 xor      rdx, rcx
214c44 mov      qword ptr [r14 + 0x11e8], rdx
214c4b xor      rdx, qword ptr [r14 + 0x20]
214c4f xor      rdx, qword ptr [r14 + 0x28]
214c53 mov      rax, rdx
214c56 shr      rax, 0x21
214c5a xor      rax, rdx
214c5d imul     rax, rbx
214c61 mov      rcx, rax
214c64 shr      rcx, 0x21
214c68 xor      rcx, rax
214c6b imul     rcx, r8
214c6f mov      rax, rcx
214c72 shr      rax, 0x21
214c76 xor      rax, rcx
214c79 mov      qword ptr [r14 + 0x20], rax
214c7d mov      rdx, qword ptr [r14 + 0x138]
214c84 movzx    ecx, byte ptr [r14 + 0x169]
214c8c mov      rax, qword ptr [r14 + 0xd8]
214c93 imul     rcx, r11
214c97 lea      rbx, [rax + rax*4]
214c9b mov      rax, rdx
214c9e add      rbx, rbx
214ca1 xor      rcx, rbx
214ca4 xor      rcx, r10
214ca7 xor      rax, rcx
214caa sub      rdx, rcx
214cad test     r9b, r9b
214cb0 cmove    rdx, rax
214cb4 mov      rax, qword ptr [r14 + 0x1b0]
214cbb inc      qword ptr [r14 + 0x1b8]
214cc2 imul     rax, r15
214cc6 add      rax, rbp
214cc9 mov      qword ptr [r14 + 0x1b0], rax
214cd0 shr      rax, 0x1b
214cd4 movzx    r8d, al
214cd8 mov      byte ptr [r14 + 0x169], r8b
214cdf imul     r8, r11
214ce3 xor      r8, rbx
214ce6 xor      r8, r10
214ce9 mov      rcx, r8
214cec xor      rcx, rdx
214cef test     r9b, r9b
214cf2 lea      rax, [r8 + rdx]
214cf6 cmove    rax, rcx
214cfa mov      rcx, r14
214cfd mov      qword ptr [r14 + 0x138], rax
214d04 call     0x1401f0910
214d09 mov      rax, qword ptr [r14 + 0xd8]
214d10 mov      r10, qword ptr [r14 + 0xe0]
214d17 movzx    ecx, byte ptr [r14 + 0x168]
214d1f mov      rbx, qword ptr [r14 + 0xd0]
214d26 mov      rdx, qword ptr [r14 + 0x130]
214d2d lea      r11, [rax + rax*8]
214d31 movzx    r9d, byte ptr [r14 + 0xe8]
214d39 mov      rax, rdx
214d3c imul     rcx, r10
214d40 xor      rcx, r11
214d43 xor      rcx, rbx
214d46 xor      rax, rcx
214d49 sub      rdx, rcx
214d4c test     r9b, r9b
214d4f cmove    rdx, rax
214d53 mov      rax, qword ptr [r14 + 0x1b0]
214d5a inc      qword ptr [r14 + 0x1b8]
214d61 mov      rcx, rdx
214d64 imul     rax, r15
214d68 add      rax, rbp
214d6b mov      qword ptr [r14 + 0x1b0], rax
214d72 shr      rax, 0x1b
214d76 movzx    r8d, al
214d7a mov      byte ptr [r14 + 0x168], r8b
214d81 imul     r8, r10
214d85 xor      r8, r11
214d88 xor      r8, rbx
214d8b xor      rcx, r8
214d8e test     r9b, r9b
214d91 lea      rax, [rdx + r8]
214d95 cmove    rax, rcx
214d99 mov      rcx, r14
214d9c mov      qword ptr [r14 + 0x130], rax
214da3 call     0x1401f0910
214da8 mov      rcx, r14
214dab call     0x1401ee070
214db0 cmp      eax, dword ptr [r14 + 0x1d8]
214db7 jae      0x140214dc3
214db9 mov      edx, eax
214dbb mov      rcx, r14
214dbe call     0x1401f0910
214dc3 mov      rsi, qword ptr [r14 + 0xe0]
214dca mov      rbp, qword ptr [r14 + 0xd0]
214dd1 mov      r11, qword ptr [r14 + 0x130]
214dd8 movzx    edi, byte ptr [r14 + 0xe8]
214de0 mov      rax, r11
214de3 movzx    ecx, byte ptr [r14 + 0x168]
214deb mov      rbx, qword ptr [r14 + 0xd8]
214df2 mov      r8, qword ptr [r14 + 0x1b8]
214df9 mov      r10, qword ptr [r14 + 0x1b0]
214e00 imul     rcx, rsi
214e04 lea      r9, [rbx + rbx*8]
214e08 xor      rcx, r9
214e0b xor      rcx, rbp
214e0e xor      rax, rcx
214e11 sub      r11, rcx
214e14 test     dil, dil
214e17 movabs   rcx, 0x2545f4914f6cdd1d
214e21 cmove    r11, rax
214e25 imul     r10, r15
214e29 add      r10, rcx
214e2c mov      rcx, r11
214e2f mov      rax, r10
214e32 shr      rax, 0x1b
214e36 movzx    edx, al
214e39 mov      byte ptr [r14 + 0x168], dl
214e40 imul     rdx, rsi
214e44 xor      rdx, r9
214e47 xor      rdx, rbp
214e4a xor      rcx, rdx
214e4d test     dil, dil
214e50 lea      rax, [r11 + rdx]
214e54 cmove    rax, rcx
214e58 mov      rcx, r11
214e5b mov      qword ptr [r14 + 0x130], rax
214e62 movabs   rax, 0x2545f4914f6cdd1d
214e6c imul     r10, r15
214e70 add      r10, rax
214e73 lea      rax, [r8 + 2]
214e77 mov      qword ptr [r14 + 0x1b8], rax
214e7e mov      r8d, 0xb872
214e84 mov      qword ptr [r14 + 0x1b0], r10
214e8b lea      rax, [rbx + rbx*4]
214e8f add      rax, rax
214e92 shr      r10, 0x1b
214e96 movzx    edx, r10b
214e9a mov      byte ptr [r14 + 0x169], dl
214ea1 imul     rdx, rsi
214ea5 xor      rdx, rax
214ea8 xor      rdx, rbp
214eab xor      rcx, rdx
214eae test     dil, dil
214eb1 lea      rax, [r11 + rdx]
214eb5 cmove    rax, rcx
214eb9 mov      rcx, r14
214ebc mov      qword ptr [r14 + 0x138], rax
214ec3 movzx    edx, byte ptr [r14 + 0x4ad]
214ecb xor      rdx, qword ptr [r14 + 0x348]
214ed2 call     0x1401f1520
214ed7 mov      r8, qword ptr [r14 + 0x348]
214ede movabs   rdi, 0xff51afd7ed558ccd
214ee8 mov      rax, r8
214eeb movabs   rsi, 0xc4ceb9fe1a85ec53
214ef5 xor      rax, qword ptr [r14 + 0x20]
214ef9 mov      rcx, rax
214efc shr      rcx, 0x21
214f00 xor      rcx, rax
214f03 imul     rcx, rdi
214f07 mov      rax, rcx
214f0a shr      rax, 0x21
214f0e xor      rax, rcx
214f11 imul     rax, rsi
214f15 mov      rdx, rax
214f18 shr      rdx, 0x21
214f1c xor      edx, eax
214f1e lea      eax, [rdx + 1]
214f21 mov      ecx, eax
214f23 xor      eax, edx
214f25 imul     ecx, edx
214f28 not      ecx
214f2a and      ecx, eax
214f2c test     cl, 1
214f2f je       0x140214fa2
214f31 and      r8b, 3
214f35 cmp      r8b, 1
214f39 jne      0x140214fa2
214f3b mov      rax, qword ptr [r14 + 0x1b0]
214f42 movabs   rcx, 0x2545f4914f6cdd1d
214f4c inc      qword ptr [r14 + 0x1b8]
214f53 imul     rax, r15
214f57 add      rax, rcx
214f5a mov      qword ptr [r14 + 0x1b0], rax
214f61 shr      rax, 0x1b
214f65 movzx    eax, al
214f68 mov      byte ptr [r14 + 0x160], al
214f6f imul     rax, qword ptr [r14 + 0xe0]
214f77 xor      rax, qword ptr [r14 + 0xd8]
214f7e xor      rax, qword ptr [r14 + 0xd0]
214f85 mov      rcx, rax
214f88 add      rax, 0x116fdf
214f8e xor      rcx, 0x116fdf
214f95 cmp      byte ptr [r14 + 0xe8], 0
214f9d jmp      0x1402155c8
214fa2 mov      rcx, r14
214fa5 call     0x1401ee070
214faa mov      ebx, eax
214fac cmp      eax, dword ptr [r14 + 0x1d8]
214fb3 jb       0x14021501c
214fb5 mov      rax, qword ptr [r14 + 0x1b0]
214fbc movabs   rcx, 0x2545f4914f6cdd1d
214fc6 inc      qword ptr [r14 + 0x1b8]
214fcd imul     rax, r15
214fd1 add      rax, rcx
214fd4 mov      qword ptr [r14 + 0x1b0], rax
214fdb shr      rax, 0x1b
214fdf movzx    eax, al
214fe2 mov      byte ptr [r14 + 0x160], al
214fe9 imul     rax, qword ptr [r14 + 0xe0]
214ff1 xor      rax, qword ptr [r14 + 0xd8]
214ff8 xor      rax, qword ptr [r14 + 0xd0]
214fff mov      rcx, rax
215002 add      rax, 0xfe1ab
215008 xor      rcx, 0xfe1ab
21500f cmp      byte ptr [r14 + 0xe8], 0
215017 jmp      0x1402155c8
21501c mov      edx, ebx
21501e mov      rcx, r14
215021 call     0x1401f25b0
215026 movsxd   rcx, dword ptr [r14 + 0x11e0]
21502d movabs   r8, 0xd6e8feb86659fd93
215037 mov      rdx, qword ptr [r14 + 0x20]
21503b mov      rax, rbx
21503e imul     rax, r8
215042 imul     rcx, r15
215046 rol      rdx, 0x11
21504a xor      rax, rdx
21504d xor      rcx, qword ptr [r14 + 0x260]
215054 xor      rax, rcx
215057 mov      rcx, rax
21505a shr      rcx, 0x21
21505e xor      rcx, rax
215061 imul     rcx, rdi
215065 mov      rdx, rcx
215068 shr      rdx, 0x21
21506c xor      rdx, rcx
21506f imul     rdx, rsi
215073 mov      rax, rdx
215076 shr      rax, 0x21
21507a xor      rax, rdx
21507d mov      r10, rax
215080 shr      r10, 0x1d
215084 xor      r10, rax
215087 or       r10, 1
21508b mov      rax, r10
21508e mov      qword ptr [r14 + 0x260], r10
215095 and      eax, 0x3ff
21509a cmp      rax, 0x2c5
2150a0 jne      0x1402150b1
2150a2 mov      rcx, r14
2150a5 call     0x1402297e0
2150aa mov      r10, qword ptr [r14 + 0x260]
2150b1 movzx    eax, r10b
2150b5 and      al, 0x1f
2150b7 cmp      al, 0x15
2150b9 jne      0x1402151a6
2150bf movsxd   rax, dword ptr [r14 + 0x11e0]
2150c6 xor      rax, 0x5a5a
2150cc mov      rcx, qword ptr [r14 + 0x20]
2150d0 imul     rax, r15
2150d4 rol      rcx, 0x11
2150d8 xor      rax, r10
2150db xor      rcx, rax
2150de movabs   rax, 0x8f70feda99a6026d
2150e8 xor      rcx, rax
2150eb mov      rax, rcx
2150ee shr      rax, 0x21
2150f2 xor      rax, rcx
2150f5 imul     rax, rdi
2150f9 mov      rcx, rax
2150fc shr      rcx, 0x21
215100 xor      rcx, rax
215103 imul     rcx, rsi
215107 mov      rax, rcx
21510a shr      rax, 0x21
21510e xor      rax, rcx
215111 mov      r9, rax
215114 shr      r9, 0x1d
215118 xor      r9, rax
21511b or       r9, 1
21511f mov      rax, r9
215122 mov      rcx, r9
215125 shr      rax, 8
215129 and      eax, 3
21512c shr      rcx, 0x28
215130 imul     r8, rax, 0x3e
215134 mov      eax, 0x8421085
215139 mul      ecx
21513b mov      eax, ecx
21513d sub      eax, edx
21513f shr      eax, 1
215141 add      eax, edx
215143 shr      eax, 5
215146 imul     eax, eax, 0x3e
215149 sub      ecx, eax
21514b mov      eax, ecx
21514d add      r8, rax
215150 mov      rax, qword ptr [r14 + 0x4b8]
215157 movsxd   rcx, dword ptr [rax + r8*4]
21515b movsxd   rax, dword ptr [r14 + 0x4c8]
215162 xor      rcx, rax
215165 add      rcx, qword ptr [r14 + 0x4c0]
21516c xor      rcx, r9
21516f mov      rax, rcx
215172 shr      rax, 0x21
215176 xor      rax, rcx
215179 imul     rax, rdi
21517d mov      rcx, rax
215180 shr      rcx, 0x21
215184 xor      rcx, rax
215187 imul     rcx, rsi
21518b mov      rax, rcx
21518e shr      rax, 0x21
215192 xor      rax, rcx
215195 xor      rax, r10
215198 inc      qword ptr [r14 + 0x268]
21519f mov      qword ptr [r14 + 0x260], rax
2151a6 inc      dword ptr [r14 + 0x200]
2151ad mov      eax, dword ptr [r14 + 0x200]
2151b4 cmp      eax, dword ptr [r14 + 0x1fc]
2151bb jb       0x1402151d0
2151bd mov      rcx, r14
2151c0 mov      dword ptr [r14 + 0x200], 0
2151cb call     0x1401ef7c0
2151d0 mov      r8d, ebx
2151d3 mov      edx, ebx
2151d5 mov      rcx, r14
2151d8 call     0x1401f0660
2151dd inc      qword ptr [r14 + 0x1b8]
2151e4 movabs   rax, 0x2545f4914f6cdd1d
2151ee mov      r9, qword ptr [r14 + 0x1b0]
2151f5 mov      r10, qword ptr [r14 + 0x1b8]
2151fc imul     r9, r15
215200 add      r9, rax
215203 mov      qword ptr [r14 + 0x1b0], r9
21520a mov      rax, r9
21520d shr      rax, 0x1b
215211 movzx    edx, al
215214 mov      byte ptr [r14 + 0x168], dl
21521b mov      rdi, qword ptr [r14 + 0xe0]
215222 mov      r11, qword ptr [r14 + 0xd8]
215229 mov      rsi, qword ptr [r14 + 0xd0]
215230 movzx    r15d, byte ptr [r14 + 0xe8]
215238 imul     rdx, rdi
21523c lea      rax, [r11 + r11*8]
215240 xor      rdx, rax
215243 xor      rdx, rsi
215246 mov      rcx, rdx
215249 xor      rcx, rbx
21524c test     r15b, r15b
21524f lea      rax, [rdx + rbx]
215253 cmove    rax, rcx
215257 inc      r10
21525a mov      qword ptr [r14 + 0x130], rax
215261 mov      rcx, qword ptr [r14 + 0x1d0]
215268 mov      rax, qword ptr [r14 + 0x48]
21526c mov      qword ptr [rsp + 0x78], r10
215271 movzx    r8d, byte ptr [rcx + rbx]
215276 xor      r8b, byte ptr [rax + rbx]
21527a inc      ebx
21527c mov      qword ptr [r14 + 0x1b8], r10
215283 movabs   rax, 0x9e3779b97f4a7c15
21528d imul     r9, rax
215291 mov      qword ptr [rsp + 0x60], rbx
215296 movabs   rax, 0x2545f4914f6cdd1d
2152a0 add      r9, rax
2152a3 mov      rax, r9
2152a6 shr      rax, 0x1b
2152aa movzx    edx, al
2152ad lea      rax, [r11 + r11]
2152b1 mov      byte ptr [r14 + 0x161], dl
2152b8 imul     rdx, rdi
2152bc xor      rdx, rax
2152bf xor      rdx, rsi
2152c2 mov      rcx, rdx
2152c5 xor      rcx, rbx
2152c8 test     r15b, r15b
2152cb lea      rax, [rdx + rbx]
2152cf cmove    rax, rcx
2152d3 mov      qword ptr [r14 + 0xf8], rax
2152da movsxd   rdx, dword ptr [r14 + 0x11e0]
2152e1 mov      r10, qword ptr [r14 + 0x20]
2152e5 mov      rcx, rdx
2152e8 xor      rcx, qword ptr [r14 + 0x350]
2152ef xor      rcx, r10
2152f2 xor      rcx, rbx
2152f5 movabs   rbx, 0xff51afd7ed558ccd
2152ff xor      rcx, qword ptr [r14 + 0x348]
215306 mov      rax, rcx
215309 shr      rax, 0x21
21530d xor      rax, rcx
215310 imul     rax, rbx
215314 mov      rcx, rax
215317 shr      rcx, 0x21
21531b xor      rcx, rax
21531e movabs   rax, 0xc4ceb9fe1a85ec53
215328 imul     rcx, rax
21532c movzx    eax, r8b
215330 mov      rbx, rcx
215333 shr      rbx, 0x21
215337 xor      rbx, rcx
21533a lea      rcx, [rip - 0x215341]
215341 xor      rax, 0xdd
215347 mov      qword ptr [r14 + 0x28], rbx
21534b movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
215353 xor      bpl, 0x63
215357 movabs   r8, 0xff51afd7ed558ccd
215361 inc      edx
215363 mov      dword ptr [r14 + 0x11e0], edx
21536a test     dl, 0x1f
21536d jne      0x1402153b3
21536f movsxd   rax, edx
215372 xor      rax, r10
215375 xor      rax, qword ptr [r14 + 0x348]
21537c mov      rcx, rax
21537f shr      rcx, 0x21
215383 xor      rcx, rax
215386 movabs   rax, 0xc4ceb9fe1a85ec53
215390 imul     rcx, r8
215394 mov      rdx, rcx
215397 shr      rdx, 0x21
21539b xor      rdx, rcx
21539e imul     rdx, rax
2153a2 mov      rax, rdx
2153a5 shr      rax, 0x21
2153a9 xor      rax, rdx
2153ac mov      qword ptr [r14 + 0x348], rax
2153b3 movzx    edx, bpl
2153b7 xor      r10, rdx
2153ba mov      byte ptr [r14 + 0x4ad], bpl
2153c1 xor      r10, qword ptr [rsp + 0x60]
2153c6 mov      rax, r10
2153c9 shr      rax, 0x21
2153cd xor      rax, r10
2153d0 movabs   r10, 0x9e3779b97f4a7c15
2153da imul     rax, r8
2153de imul     rdx, r10
2153e2 imul     r9, r10
2153e6 mov      rcx, rax
2153e9 shr      rcx, 0x21
2153ed xor      rcx, rax
2153f0 movabs   rax, 0xc4ceb9fe1a85ec53
2153fa imul     rcx, rax
2153fe mov      rax, rcx
215401 shr      rax, 0x21
215405 xor      rax, rcx
215408 mov      ecx, dword ptr [r14 + 0x1178]
21540f mov      qword ptr [r14 + 0x20], rax
215413 movabs   rax, 0xd6e8feb86659fd93
21541d imul     rcx, rax
215421 xor      rcx, rdx
215424 xor      rcx, rbx
215427 movabs   rbx, 0x2545f4914f6cdd1d
215431 mov      rax, rcx
215434 add      r9, rbx
215437 shr      rax, 0x21
21543b xor      rax, rcx
21543e imul     rax, r8
215442 mov      rdx, rax
215445 shr      rdx, 0x21
215449 xor      rdx, rax
21544c movabs   rax, 0xc4ceb9fe1a85ec53
215456 imul     rdx, rax
21545a mov      rax, qword ptr [rsp + 0x78]
21545f shr      rdx, 0x21
215463 and      edx, 3
215466 inc      rax
215469 mov      qword ptr [r14 + 0x1b8], rax
215470 cmp      bpl, 0x3e
215474 jae      0x14021550c
21547a inc      qword ptr [r14 + 0x11a0]
215481 lea      rax, [rip - 0x215488]
215488 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
215490 mov      qword ptr [r14 + 0x1b0], r9
215497 shr      r9, 0x1b
21549b movzx    eax, r9b
21549f mov      byte ptr [r14 + 0x160], al
2154a6 imul     rax, rdi
2154aa mov      ebx, edx
2154ac xor      rax, rsi
2154af xor      rax, r11
2154b2 mov      rcx, rax
2154b5 add      rax, r8
2154b8 xor      rcx, r8
2154bb movzx    r8d, bpl
2154bf test     r15b, r15b
2154c2 cmove    rax, rcx
2154c6 mov      rcx, r14
2154c9 mov      qword ptr [r14 + 0xf0], rax
2154d0 call     0x1401f1f50
2154d5 mov      eax, eax
2154d7 lea      edx, [r13 - 1]
2154db imul     rcx, rbx, 0x3e
2154df mov      r8, r12
2154e2 add      rcx, rax
2154e5 mov      rax, qword ptr [r14 + 0x4b8]
2154ec movsxd   r9, dword ptr [rax + rcx*4]
2154f0 mov      rcx, r14
2154f3 movsxd   rax, dword ptr [r14 + 0x4c8]
2154fa xor      r9, rax
2154fd add      r9, qword ptr [r14 + 0x4c0]
215504 call     r9
215507 jmp      0x1402155d3
21550c inc      dword ptr [r14 + 0x11a8]
215513 mov      rax, r9
215516 shr      rax, 0x1b
21551a movzx    ecx, al
21551d lea      rax, [r11*4]
215525 mov      byte ptr [r14 + 0x163], cl
21552c imul     rcx, rdi
215530 imul     r9, r10
215534 xor      rcx, rax
215537 xor      rcx, rsi
21553a mov      qword ptr [r14 + 0x108], rcx
215541 mov      r8, qword ptr [r14 + 0x1b8]
215548 add      r9, rbx
21554b mov      rax, r9
21554e shr      rax, 0x1b
215552 movzx    edx, al
215555 mov      byte ptr [r14 + 0x16a], dl
21555c imul     rax, r11, 0xb
215560 imul     rdx, rdi
215564 xor      rdx, rax
215567 xor      rdx, rsi
21556a mov      rcx, rdx
21556d xor      rcx, 1
215571 test     r15b, r15b
215574 lea      rax, [rdx + 1]
215578 cmove    rax, rcx
21557c mov      qword ptr [r14 + 0x140], rax
215583 lea      rax, [r8 + 2]
215587 mov      qword ptr [r14 + 0x1b8], rax
21558e imul     r9, r10
215592 add      r9, rbx
215595 mov      qword ptr [r14 + 0x1b0], r9
21559c shr      r9, 0x1b
2155a0 movzx    eax, r9b
2155a4 mov      byte ptr [r14 + 0x160], al
2155ab imul     rax, rdi
2155af xor      rax, rsi
2155b2 xor      rax, r11
2155b5 mov      rcx, rax
2155b8 add      rax, 0xfe1ab
2155be xor      rcx, 0xfe1ab
2155c5 test     r15b, r15b
2155c8 cmove    rax, rcx
2155cc mov      qword ptr [r14 + 0xf0], rax
2155d3 mov      rdi, qword ptr [rsp + 0x28]
2155d8 mov      rsi, qword ptr [rsp + 0x30]
2155dd mov      rbp, qword ptr [rsp + 0x38]
2155e2 mov      rbx, qword ptr [rsp + 0x68]
2155e7 mov      r15, qword ptr [rsp + 0x20]
2155ec add      rsp, 0x40
2155f0 pop      r14
2155f2 pop      r13
2155f4 pop      r12
2155f6 ret      
2155f7 mov      edx, 0x54485254
2155fc mov      rcx, r14
2155ff call     0x1401ed830
215604 int3     
215605 mov      edx, 0x43414e59
21560a mov      rcx, r14
21560d call     0x1401ed830
215612 int3     
