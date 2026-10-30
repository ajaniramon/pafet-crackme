220b70 mov      qword ptr [rsp + 0x18], r8
220b75 push     rbx
220b76 push     rbp
220b77 push     rdi
220b78 push     r13
220b7a push     r14
220b7c sub      rsp, 0x30
220b80 movsxd   rax, dword ptr [rcx + 0x11e0]
220b87 mov      r14, rcx
220b8a mov      r13d, edx
220b8d movabs   rcx, 0xdc0eb3f9b589e60b
220b97 imul     rax, rcx
220b9b movabs   rcx, 0x7e57393234576234
220ba5 movabs   rbp, 0xff51afd7ed558ccd
220baf xor      rax, qword ptr [r14 + 0x28]
220bb3 mov      rdi, r8
220bb6 mov      qword ptr [rsp + 0x60], rax
220bbb mov      rax, qword ptr [rsp + 0x60]
220bc0 movsxd   rax, dword ptr [r14 + 0x11e0]
220bc7 imul     rax, rcx
220bcb movabs   rcx, 0x989fa76cb71cee21
220bd5 xor      rax, qword ptr [r14 + 0x28]
220bd9 mov      qword ptr [rsp + 0x60], rax
220bde mov      rax, qword ptr [rsp + 0x60]
220be3 movsxd   rax, dword ptr [r14 + 0x11e0]
220bea imul     rax, rcx
220bee movabs   rcx, 0x4e5eb07c3f677264
220bf8 xor      rax, qword ptr [r14 + 0x28]
220bfc mov      qword ptr [rsp + 0x60], rax
220c01 mov      rax, qword ptr [rsp + 0x60]
220c06 mov      rax, qword ptr [r14 + 0x2f0]
220c0d mov      rax, qword ptr [r14 + 0x2f0]
220c14 add      rax, rcx
220c17 mov      rcx, rax
220c1a shr      rcx, 0x21
220c1e xor      rcx, rax
220c21 movabs   rax, 0xc4ceb9fe1a85ec53
220c2b imul     rcx, rbp
220c2f mov      rdx, rcx
220c32 shr      rdx, 0x21
220c36 xor      rdx, rcx
220c39 mov      rcx, r14
220c3c imul     rdx, rax
220c40 mov      rax, rdx
220c43 shr      rax, 0x21
220c47 xor      rdx, rax
220c4a mov      rax, qword ptr [r14 + 0x2f0]
220c51 shr      rax, 3
220c55 xor      rax, rdx
220c58 mov      qword ptr [r14 + 0x2f0], rax
220c5f call     0x1401ee940
220c64 mov      rcx, r14
220c67 mov      rbx, rax
220c6a call     0x1401ee940
220c6f mov      rcx, rax
220c72 and      rcx, rbx
220c75 add      rcx, rcx
220c78 sub      rax, rcx
220c7b mov      rcx, r14
220c7e lea      rdx, [rbx + rax]
220c82 call     0x1401ee820
220c87 mov      rax, qword ptr [r14 + 0x2f0]
220c8e test     r13d, r13d
220c91 jns      0x1402217cf
220c97 cmp      qword ptr [r14 + 0x11b8], rdi
220c9e jne      0x1402217dd
220ca4 movsxd   rax, dword ptr [r14 + 0x11e0]
220cab movabs   rcx, 0x3e617fc39f800cc8
220cb5 imul     rax, rcx
220cb9 mov      rcx, r14
220cbc xor      rax, qword ptr [r14 + 0x28]
220cc0 mov      qword ptr [rsp + 0x60], rax
220cc5 mov      rax, qword ptr [rsp + 0x60]
220cca call     0x1401ee450
220ccf test     eax, eax
220cd1 jne      0x1402217c3
220cd7 cmp      dword ptr [r14 + 0xad0], eax
220cde jne      0x1402217c3
220ce4 mov      r8, qword ptr [r14 + 0xf0]
220ceb movzx    ecx, byte ptr [r14 + 0x160]
220cf3 mov      rax, r8
220cf6 mov      r10, qword ptr [r14 + 0xe0]
220cfd mov      rbx, qword ptr [r14 + 0xd0]
220d04 mov      r11, qword ptr [r14 + 0xd8]
220d0b movzx    edi, byte ptr [r14 + 0xe8]
220d13 mov      r9, qword ptr [r14 + 0x1b0]
220d1a imul     rcx, r10
220d1e mov      qword ptr [rsp + 0x68], rsi
220d23 mov      rsi, qword ptr [r14 + 0x1b8]
220d2a xor      rcx, rbx
220d2d xor      rcx, r11
220d30 mov      qword ptr [rsp + 0x28], r12
220d35 xor      rax, rcx
220d38 mov      qword ptr [rsp + 0x20], r15
220d3d sub      r8, rcx
220d40 movabs   r15, 0x9e3779b97f4a7c15
220d4a test     dil, dil
220d4d movabs   r12, 0x2545f4914f6cdd1d
220d57 cmove    r8, rax
220d5b inc      rsi
220d5e imul     r9, r15
220d62 mov      qword ptr [r14 + 0x1b8], rsi
220d69 mov      rcx, r8
220d6c add      r9, r12
220d6f mov      qword ptr [r14 + 0x1b0], r9
220d76 mov      rax, r9
220d79 shr      rax, 0x1b
220d7d movzx    edx, al
220d80 mov      byte ptr [r14 + 0x160], dl
220d87 imul     rdx, r10
220d8b xor      rdx, rbx
220d8e xor      rdx, r11
220d91 xor      rcx, rdx
220d94 test     dil, dil
220d97 lea      rax, [r8 + rdx]
220d9b cmove    rax, rcx
220d9f mov      qword ptr [r14 + 0xf0], rax
220da6 cmp      r8d, 0x2a0025
220dad jne      0x1402217b4
220db3 mov      eax, r13d
220db6 btr      eax, 0x1f
220dba cmp      eax, 2
220dbd jae      0x140220e09
220dbf imul     r9, r15
220dc3 lea      rax, [rsi + 1]
220dc7 mov      qword ptr [r14 + 0x1b8], rax
220dce add      r9, r12
220dd1 mov      qword ptr [r14 + 0x1b0], r9
220dd8 shr      r9, 0x1b
220ddc movzx    eax, r9b
220de0 mov      byte ptr [r14 + 0x160], al
220de7 imul     rax, r10
220deb xor      rax, rbx
220dee xor      rax, r11
220df1 mov      rcx, rax
220df4 add      rax, 0x85b36
220dfa xor      rcx, 0x85b36
220e01 test     dil, dil
220e04 jmp      0x1402217a9
220e09 mov      rcx, r14
220e0c call     0x1401ee070
220e11 movzx    ecx, byte ptr [r14 + 0x4ad]
220e19 movabs   r8, 0xc4ceb9fe1a85ec53
220e23 mov      r11, qword ptr [r14 + 0xe0]
220e2a mov      r10, qword ptr [r14 + 0xd0]
220e31 movzx    r9d, byte ptr [r14 + 0xe8]
220e39 mov      eax, eax
220e3b xor      rcx, rax
220e3e xor      rcx, qword ptr [r14 + 0x11e8]
220e45 mov      rax, rcx
220e48 shr      rax, 0x21
220e4c xor      rax, rcx
220e4f imul     rax, rbp
220e53 mov      rcx, rax
220e56 shr      rcx, 0x21
220e5a xor      rcx, rax
220e5d imul     rcx, r8
220e61 mov      rdx, rcx
220e64 shr      rdx, 0x21
220e68 xor      rdx, rcx
220e6b mov      qword ptr [r14 + 0x11e8], rdx
220e72 xor      rdx, qword ptr [r14 + 0x28]
220e76 xor      rdx, qword ptr [r14 + 0x20]
220e7a mov      rax, rdx
220e7d shr      rax, 0x21
220e81 xor      rax, rdx
220e84 imul     rax, rbp
220e88 mov      rcx, rax
220e8b shr      rcx, 0x21
220e8f xor      rcx, rax
220e92 imul     rcx, r8
220e96 mov      rax, rcx
220e99 shr      rax, 0x21
220e9d xor      rax, rcx
220ea0 mov      qword ptr [r14 + 0x20], rax
220ea4 mov      rdx, qword ptr [r14 + 0x138]
220eab movzx    ecx, byte ptr [r14 + 0x169]
220eb3 mov      rax, qword ptr [r14 + 0xd8]
220eba imul     rcx, r11
220ebe lea      rbx, [rax + rax*4]
220ec2 mov      rax, rdx
220ec5 add      rbx, rbx
220ec8 xor      rcx, rbx
220ecb xor      rcx, r10
220ece xor      rax, rcx
220ed1 sub      rdx, rcx
220ed4 test     r9b, r9b
220ed7 cmove    rdx, rax
220edb mov      rax, qword ptr [r14 + 0x1b0]
220ee2 inc      qword ptr [r14 + 0x1b8]
220ee9 imul     rax, r15
220eed add      rax, r12
220ef0 mov      qword ptr [r14 + 0x1b0], rax
220ef7 shr      rax, 0x1b
220efb movzx    r8d, al
220eff mov      byte ptr [r14 + 0x169], r8b
220f06 imul     r8, r11
220f0a xor      r8, rbx
220f0d xor      r8, r10
220f10 mov      rcx, r8
220f13 xor      rcx, rdx
220f16 test     r9b, r9b
220f19 lea      rax, [r8 + rdx]
220f1d cmove    rax, rcx
220f21 mov      rcx, r14
220f24 mov      qword ptr [r14 + 0x138], rax
220f2b call     0x1401f0910
220f30 mov      rax, qword ptr [r14 + 0xd8]
220f37 mov      rdx, qword ptr [r14 + 0x130]
220f3e mov      r10, qword ptr [r14 + 0xe0]
220f45 movzx    ecx, byte ptr [r14 + 0x168]
220f4d mov      rbx, qword ptr [r14 + 0xd0]
220f54 lea      r11, [rax + rax*8]
220f58 movzx    r9d, byte ptr [r14 + 0xe8]
220f60 mov      rax, rdx
220f63 imul     rcx, r10
220f67 xor      rcx, r11
220f6a xor      rcx, rbx
220f6d xor      rax, rcx
220f70 sub      rdx, rcx
220f73 test     r9b, r9b
220f76 cmove    rdx, rax
220f7a mov      rax, qword ptr [r14 + 0x1b0]
220f81 inc      qword ptr [r14 + 0x1b8]
220f88 mov      rcx, rdx
220f8b imul     rax, r15
220f8f add      rax, r12
220f92 mov      qword ptr [r14 + 0x1b0], rax
220f99 shr      rax, 0x1b
220f9d movzx    r8d, al
220fa1 mov      byte ptr [r14 + 0x168], r8b
220fa8 imul     r8, r10
220fac xor      r8, r11
220faf xor      r8, rbx
220fb2 xor      rcx, r8
220fb5 test     r9b, r9b
220fb8 lea      rax, [rdx + r8]
220fbc cmove    rax, rcx
220fc0 mov      rcx, r14
220fc3 mov      qword ptr [r14 + 0x130], rax
220fca call     0x1401f0910
220fcf mov      rcx, r14
220fd2 call     0x1401ee070
220fd7 cmp      eax, dword ptr [r14 + 0x1d8]
220fde jae      0x140220fea
220fe0 mov      edx, eax
220fe2 mov      rcx, r14
220fe5 call     0x1401f0910
220fea mov      rsi, qword ptr [r14 + 0xe0]
220ff1 mov      rbp, qword ptr [r14 + 0xd0]
220ff8 mov      r11, qword ptr [r14 + 0x130]
220fff movzx    edi, byte ptr [r14 + 0xe8]
221007 mov      rax, r11
22100a movzx    ecx, byte ptr [r14 + 0x168]
221012 mov      rbx, qword ptr [r14 + 0xd8]
221019 mov      r8, qword ptr [r14 + 0x1b8]
221020 mov      r10, qword ptr [r14 + 0x1b0]
221027 imul     rcx, rsi
22102b lea      r9, [rbx + rbx*8]
22102f xor      rcx, r9
221032 xor      rcx, rbp
221035 xor      rax, rcx
221038 sub      r11, rcx
22103b test     dil, dil
22103e cmove    r11, rax
221042 imul     r10, r15
221046 mov      rcx, r11
221049 add      r10, r12
22104c mov      rax, r10
22104f shr      rax, 0x1b
221053 movzx    edx, al
221056 mov      byte ptr [r14 + 0x168], dl
22105d imul     rdx, rsi
221061 xor      rdx, r9
221064 xor      rdx, rbp
221067 xor      rcx, rdx
22106a test     dil, dil
22106d lea      rax, [r11 + rdx]
221071 cmove    rax, rcx
221075 mov      rcx, r11
221078 mov      qword ptr [r14 + 0x130], rax
22107f lea      rax, [r8 + 2]
221083 mov      qword ptr [r14 + 0x1b8], rax
22108a mov      r8d, 0x3877
221090 imul     r10, r15
221094 lea      rax, [rbx + rbx*4]
221098 add      rax, rax
22109b add      r10, r12
22109e mov      qword ptr [r14 + 0x1b0], r10
2210a5 shr      r10, 0x1b
2210a9 movzx    edx, r10b
2210ad mov      byte ptr [r14 + 0x169], dl
2210b4 imul     rdx, rsi
2210b8 xor      rdx, rax
2210bb xor      rdx, rbp
2210be xor      rcx, rdx
2210c1 test     dil, dil
2210c4 lea      rax, [r11 + rdx]
2210c8 cmove    rax, rcx
2210cc mov      rcx, r14
2210cf mov      qword ptr [r14 + 0x138], rax
2210d6 movzx    edx, byte ptr [r14 + 0x4ad]
2210de xor      rdx, qword ptr [r14 + 0x348]
2210e5 call     0x1401f1520
2210ea mov      r8, qword ptr [r14 + 0x348]
2210f1 movabs   rdi, 0xff51afd7ed558ccd
2210fb mov      rax, r8
2210fe movabs   rsi, 0xc4ceb9fe1a85ec53
221108 xor      rax, qword ptr [r14 + 0x20]
22110c mov      rcx, rax
22110f shr      rcx, 0x21
221113 xor      rcx, rax
221116 imul     rcx, rdi
22111a mov      rax, rcx
22111d shr      rax, 0x21
221121 xor      rax, rcx
221124 imul     rax, rsi
221128 mov      rdx, rax
22112b shr      rdx, 0x21
22112f xor      edx, eax
221131 lea      eax, [rdx + 1]
221134 mov      ecx, eax
221136 xor      eax, edx
221138 imul     ecx, edx
22113b not      ecx
22113d and      ecx, eax
22113f test     cl, 1
221142 je       0x1402211ab
221144 and      r8b, 3
221148 cmp      r8b, 1
22114c jne      0x1402211ab
22114e mov      rax, qword ptr [r14 + 0x1b0]
221155 inc      qword ptr [r14 + 0x1b8]
22115c imul     rax, r15
221160 add      rax, r12
221163 mov      qword ptr [r14 + 0x1b0], rax
22116a shr      rax, 0x1b
22116e movzx    eax, al
221171 mov      byte ptr [r14 + 0x160], al
221178 imul     rax, qword ptr [r14 + 0xe0]
221180 xor      rax, qword ptr [r14 + 0xd8]
221187 xor      rax, qword ptr [r14 + 0xd0]
22118e mov      rcx, rax
221191 add      rax, 0x3dd18f
221197 xor      rcx, 0x3dd18f
22119e cmp      byte ptr [r14 + 0xe8], 0
2211a6 jmp      0x1402217a9
2211ab mov      rcx, r14
2211ae call     0x1401ee070
2211b3 mov      ebx, eax
2211b5 cmp      eax, dword ptr [r14 + 0x1d8]
2211bc jb       0x14022121b
2211be mov      rax, qword ptr [r14 + 0x1b0]
2211c5 inc      qword ptr [r14 + 0x1b8]
2211cc imul     rax, r15
2211d0 add      rax, r12
2211d3 mov      qword ptr [r14 + 0x1b0], rax
2211da shr      rax, 0x1b
2211de movzx    eax, al
2211e1 mov      byte ptr [r14 + 0x160], al
2211e8 imul     rax, qword ptr [r14 + 0xe0]
2211f0 xor      rax, qword ptr [r14 + 0xd8]
2211f7 xor      rax, qword ptr [r14 + 0xd0]
2211fe mov      rcx, rax
221201 add      rax, 0xfe1ab
221207 xor      rcx, 0xfe1ab
22120e cmp      byte ptr [r14 + 0xe8], 0
221216 jmp      0x1402217a9
22121b mov      edx, ebx
22121d mov      rcx, r14
221220 call     0x1401f25b0
221225 movsxd   rcx, dword ptr [r14 + 0x11e0]
22122c movabs   r8, 0xd6e8feb86659fd93
221236 mov      rdx, qword ptr [r14 + 0x20]
22123a mov      rax, rbx
22123d imul     rax, r8
221241 imul     rcx, r15
221245 rol      rdx, 0x11
221249 xor      rax, rdx
22124c xor      rcx, qword ptr [r14 + 0x260]
221253 xor      rax, rcx
221256 mov      rcx, rax
221259 shr      rcx, 0x21
22125d xor      rcx, rax
221260 imul     rcx, rdi
221264 mov      rdx, rcx
221267 shr      rdx, 0x21
22126b xor      rdx, rcx
22126e imul     rdx, rsi
221272 mov      rax, rdx
221275 shr      rax, 0x21
221279 xor      rax, rdx
22127c mov      r10, rax
22127f shr      r10, 0x1d
221283 xor      r10, rax
221286 or       r10, 1
22128a mov      rax, r10
22128d mov      qword ptr [r14 + 0x260], r10
221294 and      eax, 0x3ff
221299 cmp      rax, 0x2c5
22129f jne      0x1402212b0
2212a1 mov      rcx, r14
2212a4 call     0x1402297e0
2212a9 mov      r10, qword ptr [r14 + 0x260]
2212b0 movzx    eax, r10b
2212b4 and      al, 0x1f
2212b6 cmp      al, 0x15
2212b8 jne      0x1402213a5
2212be movsxd   rax, dword ptr [r14 + 0x11e0]
2212c5 xor      rax, 0x5a5a
2212cb mov      rcx, qword ptr [r14 + 0x20]
2212cf imul     rax, r15
2212d3 rol      rcx, 0x11
2212d7 xor      rax, r10
2212da xor      rcx, rax
2212dd movabs   rax, 0x8f70feda99a6026d
2212e7 xor      rcx, rax
2212ea mov      rax, rcx
2212ed shr      rax, 0x21
2212f1 xor      rax, rcx
2212f4 imul     rax, rdi
2212f8 mov      rcx, rax
2212fb shr      rcx, 0x21
2212ff xor      rcx, rax
221302 imul     rcx, rsi
221306 mov      rax, rcx
221309 shr      rax, 0x21
22130d xor      rax, rcx
221310 mov      r9, rax
221313 shr      r9, 0x1d
221317 xor      r9, rax
22131a or       r9, 1
22131e mov      rax, r9
221321 mov      rcx, r9
221324 shr      rax, 8
221328 and      eax, 3
22132b shr      rcx, 0x28
22132f imul     r8, rax, 0x3e
221333 mov      eax, 0x8421085
221338 mul      ecx
22133a mov      eax, ecx
22133c sub      eax, edx
22133e shr      eax, 1
221340 add      eax, edx
221342 shr      eax, 5
221345 imul     eax, eax, 0x3e
221348 sub      ecx, eax
22134a mov      eax, ecx
22134c add      r8, rax
22134f mov      rax, qword ptr [r14 + 0x4b8]
221356 movsxd   rcx, dword ptr [rax + r8*4]
22135a movsxd   rax, dword ptr [r14 + 0x4c8]
221361 xor      rcx, rax
221364 add      rcx, qword ptr [r14 + 0x4c0]
22136b xor      rcx, r9
22136e mov      rax, rcx
221371 shr      rax, 0x21
221375 xor      rax, rcx
221378 imul     rax, rdi
22137c mov      rcx, rax
22137f shr      rcx, 0x21
221383 xor      rcx, rax
221386 imul     rcx, rsi
22138a mov      rax, rcx
22138d shr      rax, 0x21
221391 xor      rax, rcx
221394 xor      rax, r10
221397 inc      qword ptr [r14 + 0x268]
22139e mov      qword ptr [r14 + 0x260], rax
2213a5 inc      dword ptr [r14 + 0x200]
2213ac mov      eax, dword ptr [r14 + 0x200]
2213b3 cmp      eax, dword ptr [r14 + 0x1fc]
2213ba jb       0x1402213cf
2213bc mov      rcx, r14
2213bf mov      dword ptr [r14 + 0x200], 0
2213ca call     0x1401ef7c0
2213cf mov      r8d, ebx
2213d2 mov      edx, ebx
2213d4 mov      rcx, r14
2213d7 call     0x1401f0660
2213dc inc      qword ptr [r14 + 0x1b8]
2213e3 mov      rcx, rbx
2213e6 mov      r9, qword ptr [r14 + 0x1b0]
2213ed mov      rbp, r12
2213f0 mov      r10, qword ptr [r14 + 0x1b8]
2213f7 imul     r9, r15
2213fb add      r9, r12
2213fe lea      r12d, [rbx + 1]
221402 mov      qword ptr [r14 + 0x1b0], r9
221409 mov      rax, r9
22140c shr      rax, 0x1b
221410 movzx    edx, al
221413 mov      byte ptr [r14 + 0x168], dl
22141a mov      rdi, qword ptr [r14 + 0xe0]
221421 mov      r11, qword ptr [r14 + 0xd8]
221428 mov      rsi, qword ptr [r14 + 0xd0]
22142f movzx    r15d, byte ptr [r14 + 0xe8]
221437 imul     rdx, rdi
22143b lea      rax, [r11 + r11*8]
22143f xor      rdx, rax
221442 xor      rdx, rsi
221445 xor      rcx, rdx
221448 test     r15b, r15b
22144b lea      rax, [rbx + rdx]
22144f cmove    rax, rcx
221453 inc      r10
221456 mov      qword ptr [r14 + 0x130], rax
22145d mov      rcx, qword ptr [r14 + 0x1d0]
221464 mov      rax, qword ptr [r14 + 0x48]
221468 mov      qword ptr [rsp + 0x60], r10
22146d movzx    r8d, byte ptr [rcx + rbx]
221472 xor      r8b, byte ptr [rax + rbx]
221476 movabs   rax, 0x9e3779b97f4a7c15
221480 imul     r9, rax
221484 mov      qword ptr [r14 + 0x1b8], r10
22148b add      r9, rbp
22148e mov      rax, r9
221491 shr      rax, 0x1b
221495 movzx    edx, al
221498 lea      rax, [r11 + r11]
22149c mov      byte ptr [r14 + 0x161], dl
2214a3 imul     rdx, rdi
2214a7 xor      rdx, rax
2214aa xor      rdx, rsi
2214ad mov      rcx, rdx
2214b0 xor      rcx, r12
2214b3 test     r15b, r15b
2214b6 lea      rax, [rdx + r12]
2214ba cmove    rax, rcx
2214be mov      qword ptr [r14 + 0xf8], rax
2214c5 movsxd   rdx, dword ptr [r14 + 0x11e0]
2214cc mov      r10, qword ptr [r14 + 0x20]
2214d0 mov      rcx, rdx
2214d3 xor      rcx, qword ptr [r14 + 0x350]
2214da xor      rcx, r10
2214dd xor      rcx, r12
2214e0 xor      rcx, qword ptr [r14 + 0x348]
2214e7 mov      rax, rcx
2214ea shr      rax, 0x21
2214ee xor      rax, rcx
2214f1 movabs   rcx, 0xff51afd7ed558ccd
2214fb imul     rax, rcx
2214ff mov      rcx, rax
221502 shr      rcx, 0x21
221506 xor      rcx, rax
221509 movabs   rax, 0xc4ceb9fe1a85ec53
221513 imul     rcx, rax
221517 movzx    eax, r8b
22151b mov      rbx, rcx
22151e xor      rax, 0xdd
221524 shr      rbx, 0x21
221528 xor      rbx, rcx
22152b lea      rcx, [rip - 0x221532]
221532 mov      qword ptr [r14 + 0x28], rbx
221536 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
22153e xor      bpl, 0x63
221542 inc      edx
221544 mov      dword ptr [r14 + 0x11e0], edx
22154b movabs   r8, 0xff51afd7ed558ccd
221555 test     dl, 0x1f
221558 jne      0x14022159e
22155a movsxd   rax, edx
22155d xor      rax, r10
221560 xor      rax, qword ptr [r14 + 0x348]
221567 mov      rcx, rax
22156a shr      rcx, 0x21
22156e xor      rcx, rax
221571 movabs   rax, 0xc4ceb9fe1a85ec53
22157b imul     rcx, r8
22157f mov      rdx, rcx
221582 shr      rdx, 0x21
221586 xor      rdx, rcx
221589 imul     rdx, rax
22158d mov      rax, rdx
221590 shr      rax, 0x21
221594 xor      rax, rdx
221597 mov      qword ptr [r14 + 0x348], rax
22159e movzx    edx, bpl
2215a2 xor      r10, rdx
2215a5 mov      byte ptr [r14 + 0x4ad], bpl
2215ac xor      r10, r12
2215af movabs   r12, 0xc4ceb9fe1a85ec53
2215b9 mov      rax, r10
2215bc shr      rax, 0x21
2215c0 xor      rax, r10
2215c3 movabs   r10, 0x9e3779b97f4a7c15
2215cd imul     rax, r8
2215d1 imul     rdx, r10
2215d5 imul     r9, r10
2215d9 mov      rcx, rax
2215dc shr      rcx, 0x21
2215e0 xor      rcx, rax
2215e3 imul     rcx, r12
2215e7 mov      rax, rcx
2215ea shr      rax, 0x21
2215ee xor      rax, rcx
2215f1 mov      ecx, dword ptr [r14 + 0x1178]
2215f8 mov      qword ptr [r14 + 0x20], rax
2215fc movabs   rax, 0xd6e8feb86659fd93
221606 imul     rcx, rax
22160a xor      rcx, rdx
22160d xor      rcx, rbx
221610 movabs   rbx, 0x2545f4914f6cdd1d
22161a mov      rax, rcx
22161d add      r9, rbx
221620 shr      rax, 0x21
221624 xor      rax, rcx
221627 imul     rax, r8
22162b mov      rdx, rax
22162e shr      rdx, 0x21
221632 xor      rdx, rax
221635 mov      rax, qword ptr [rsp + 0x60]
22163a imul     rdx, r12
22163e shr      rdx, 0x21
221642 and      edx, 3
221645 inc      rax
221648 mov      qword ptr [r14 + 0x1b8], rax
22164f cmp      bpl, 0x3e
221653 jae      0x1402216ed
221659 inc      qword ptr [r14 + 0x11a0]
221660 lea      rax, [rip - 0x221667]
221667 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
22166f mov      qword ptr [r14 + 0x1b0], r9
221676 shr      r9, 0x1b
22167a movzx    eax, r9b
22167e mov      byte ptr [r14 + 0x160], al
221685 imul     rax, rdi
221689 mov      ebx, edx
22168b xor      rax, rsi
22168e xor      rax, r11
221691 mov      rcx, rax
221694 add      rax, r8
221697 xor      rcx, r8
22169a movzx    r8d, bpl
22169e test     r15b, r15b
2216a1 cmove    rax, rcx
2216a5 mov      rcx, r14
2216a8 mov      qword ptr [r14 + 0xf0], rax
2216af call     0x1401f1f50
2216b4 mov      r8, qword ptr [rsp + 0x70]
2216b9 lea      edx, [r13 - 1]
2216bd mov      eax, eax
2216bf imul     rcx, rbx, 0x3e
2216c3 add      rcx, rax
2216c6 mov      rax, qword ptr [r14 + 0x4b8]
2216cd movsxd   r9, dword ptr [rax + rcx*4]
2216d1 mov      rcx, r14
2216d4 movsxd   rax, dword ptr [r14 + 0x4c8]
2216db xor      r9, rax
2216de add      r9, qword ptr [r14 + 0x4c0]
2216e5 call     r9
2216e8 jmp      0x1402217b4
2216ed inc      dword ptr [r14 + 0x11a8]
2216f4 mov      rax, r9
2216f7 shr      rax, 0x1b
2216fb movzx    ecx, al
2216fe lea      rax, [r11*4]
221706 mov      byte ptr [r14 + 0x163], cl
22170d imul     rcx, rdi
221711 imul     r9, r10
221715 xor      rcx, rax
221718 xor      rcx, rsi
22171b mov      qword ptr [r14 + 0x108], rcx
221722 mov      r8, qword ptr [r14 + 0x1b8]
221729 add      r9, rbx
22172c mov      rax, r9
22172f shr      rax, 0x1b
221733 movzx    edx, al
221736 mov      byte ptr [r14 + 0x16a], dl
22173d imul     rax, r11, 0xb
221741 imul     rdx, rdi
221745 xor      rdx, rax
221748 xor      rdx, rsi
22174b mov      rcx, rdx
22174e xor      rcx, 1
221752 test     r15b, r15b
221755 lea      rax, [rdx + 1]
221759 cmove    rax, rcx
22175d mov      qword ptr [r14 + 0x140], rax
221764 lea      rax, [r8 + 2]
221768 mov      qword ptr [r14 + 0x1b8], rax
22176f imul     r9, r10
221773 add      r9, rbx
221776 mov      qword ptr [r14 + 0x1b0], r9
22177d shr      r9, 0x1b
221781 movzx    eax, r9b
221785 mov      byte ptr [r14 + 0x160], al
22178c imul     rax, rdi
221790 xor      rax, rsi
221793 xor      rax, r11
221796 mov      rcx, rax
221799 add      rax, 0xfe1ab
22179f xor      rcx, 0xfe1ab
2217a6 test     r15b, r15b
2217a9 cmove    rax, rcx
2217ad mov      qword ptr [r14 + 0xf0], rax
2217b4 mov      r12, qword ptr [rsp + 0x28]
2217b9 mov      rsi, qword ptr [rsp + 0x68]
2217be mov      r15, qword ptr [rsp + 0x20]
2217c3 add      rsp, 0x30
2217c7 pop      r14
2217c9 pop      r13
2217cb pop      rdi
2217cc pop      rbp
2217cd pop      rbx
2217ce ret      
2217cf mov      edx, 0x54485254
2217d4 mov      rcx, r14
2217d7 call     0x1401ed830
2217dc int3     
2217dd mov      edx, 0x43414e59
2217e2 mov      rcx, r14
2217e5 call     0x1401ed830
2217ea int3     
