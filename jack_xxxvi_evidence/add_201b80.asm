201b80 mov      qword ptr [rsp + 0x18], r8
201b85 push     rbx
201b86 push     rbp
201b87 push     rdi
201b88 push     r13
201b8a push     r14
201b8c sub      rsp, 0x30
201b90 movsxd   rax, dword ptr [rcx + 0x11e0]
201b97 mov      r14, rcx
201b9a mov      r13d, edx
201b9d movabs   rcx, 0x10078dc2e663963e
201ba7 imul     rax, rcx
201bab movabs   rcx, 0xb25e070967bd1201
201bb5 movabs   rbp, 0xff51afd7ed558ccd
201bbf xor      rax, qword ptr [r14 + 0x28]
201bc3 mov      rdi, r8
201bc6 mov      qword ptr [rsp + 0x60], rax
201bcb mov      rax, qword ptr [rsp + 0x60]
201bd0 movsxd   rax, dword ptr [r14 + 0x11e0]
201bd7 imul     rax, rcx
201bdb movabs   rcx, 0x54969957e4f69e14
201be5 xor      rax, qword ptr [r14 + 0x28]
201be9 mov      qword ptr [rsp + 0x60], rax
201bee mov      rax, qword ptr [rsp + 0x60]
201bf3 movsxd   rax, dword ptr [r14 + 0x11e0]
201bfa imul     rax, rcx
201bfe movabs   rcx, 0x391b642f90cff5d1
201c08 xor      rax, qword ptr [r14 + 0x28]
201c0c mov      qword ptr [rsp + 0x60], rax
201c11 mov      rax, qword ptr [rsp + 0x60]
201c16 mov      rax, qword ptr [r14 + 0x2e8]
201c1d sub      rax, rcx
201c20 mov      rcx, rax
201c23 shr      rcx, 0x21
201c27 xor      rcx, rax
201c2a movabs   rax, 0xc4ceb9fe1a85ec53
201c34 imul     rcx, rbp
201c38 mov      rdx, rcx
201c3b shr      rdx, 0x21
201c3f xor      rdx, rcx
201c42 mov      rcx, r14
201c45 imul     rdx, rax
201c49 mov      rax, rdx
201c4c shr      rax, 0x21
201c50 xor      rdx, rax
201c53 mov      rax, qword ptr [r14 + 0x2e8]
201c5a or       rdx, 1
201c5e xor      rdx, rax
201c61 mov      qword ptr [r14 + 0x2e8], rdx
201c68 call     0x1401ee940
201c6d mov      rcx, r14
201c70 mov      rbx, rax
201c73 call     0x1401ee940
201c78 mov      rcx, rax
201c7b xor      rax, rbx
201c7e and      rcx, rbx
201c81 lea      rdx, [rax + rcx*2]
201c85 mov      rcx, r14
201c88 call     0x1401ee820
201c8d mov      rax, qword ptr [r14 + 0x2e8]
201c94 test     r13d, r13d
201c97 jns      0x1402027d5
201c9d cmp      qword ptr [r14 + 0x11b8], rdi
201ca4 jne      0x1402027e3
201caa movsxd   rax, dword ptr [r14 + 0x11e0]
201cb1 movabs   rcx, 0x51c98bab497fc356
201cbb imul     rax, rcx
201cbf mov      rcx, r14
201cc2 xor      rax, qword ptr [r14 + 0x28]
201cc6 mov      qword ptr [rsp + 0x60], rax
201ccb mov      rax, qword ptr [rsp + 0x60]
201cd0 call     0x1401ee450
201cd5 test     eax, eax
201cd7 jne      0x1402027c9
201cdd cmp      dword ptr [r14 + 0xad0], eax
201ce4 jne      0x1402027c9
201cea mov      r8, qword ptr [r14 + 0xf0]
201cf1 movzx    ecx, byte ptr [r14 + 0x160]
201cf9 mov      rax, r8
201cfc mov      r10, qword ptr [r14 + 0xe0]
201d03 mov      rbx, qword ptr [r14 + 0xd0]
201d0a mov      r11, qword ptr [r14 + 0xd8]
201d11 movzx    edi, byte ptr [r14 + 0xe8]
201d19 mov      r9, qword ptr [r14 + 0x1b0]
201d20 imul     rcx, r10
201d24 mov      qword ptr [rsp + 0x68], rsi
201d29 mov      rsi, qword ptr [r14 + 0x1b8]
201d30 xor      rcx, rbx
201d33 xor      rcx, r11
201d36 mov      qword ptr [rsp + 0x28], r12
201d3b xor      rax, rcx
201d3e mov      qword ptr [rsp + 0x20], r15
201d43 sub      r8, rcx
201d46 movabs   r15, 0x9e3779b97f4a7c15
201d50 test     dil, dil
201d53 movabs   r12, 0x2545f4914f6cdd1d
201d5d cmove    r8, rax
201d61 inc      rsi
201d64 imul     r9, r15
201d68 mov      qword ptr [r14 + 0x1b8], rsi
201d6f add      r9, r12
201d72 mov      qword ptr [r14 + 0x1b0], r9
201d79 mov      rax, r9
201d7c shr      rax, 0x1b
201d80 movzx    edx, al
201d83 mov      byte ptr [r14 + 0x160], dl
201d8a imul     rdx, r10
201d8e xor      rdx, rbx
201d91 xor      rdx, r11
201d94 mov      rcx, rdx
201d97 xor      rcx, r8
201d9a test     dil, dil
201d9d lea      rax, [rdx + r8]
201da1 cmove    rax, rcx
201da5 mov      qword ptr [r14 + 0xf0], rax
201dac cmp      r8d, 0x338040
201db3 jne      0x1402027ba
201db9 mov      eax, r13d
201dbc btr      eax, 0x1f
201dc0 cmp      eax, 2
201dc3 jae      0x140201e0f
201dc5 imul     r9, r15
201dc9 lea      rax, [rsi + 1]
201dcd mov      qword ptr [r14 + 0x1b8], rax
201dd4 add      r9, r12
201dd7 mov      qword ptr [r14 + 0x1b0], r9
201dde shr      r9, 0x1b
201de2 movzx    eax, r9b
201de6 mov      byte ptr [r14 + 0x160], al
201ded imul     rax, r10
201df1 xor      rax, rbx
201df4 xor      rax, r11
201df7 mov      rcx, rax
201dfa add      rax, 0x1ad951
201e00 xor      rcx, 0x1ad951
201e07 test     dil, dil
201e0a jmp      0x1402027af
201e0f mov      rcx, r14
201e12 call     0x1401ee070
201e17 movzx    ecx, byte ptr [r14 + 0x4ad]
201e1f movabs   r8, 0xc4ceb9fe1a85ec53
201e29 mov      r11, qword ptr [r14 + 0xe0]
201e30 mov      r10, qword ptr [r14 + 0xd0]
201e37 movzx    r9d, byte ptr [r14 + 0xe8]
201e3f mov      eax, eax
201e41 xor      rcx, rax
201e44 xor      rcx, qword ptr [r14 + 0x11e8]
201e4b mov      rax, rcx
201e4e shr      rax, 0x21
201e52 xor      rax, rcx
201e55 imul     rax, rbp
201e59 mov      rcx, rax
201e5c shr      rcx, 0x21
201e60 xor      rcx, rax
201e63 imul     rcx, r8
201e67 mov      rdx, rcx
201e6a shr      rdx, 0x21
201e6e xor      rdx, rcx
201e71 mov      qword ptr [r14 + 0x11e8], rdx
201e78 xor      rdx, qword ptr [r14 + 0x20]
201e7c xor      rdx, qword ptr [r14 + 0x28]
201e80 mov      rax, rdx
201e83 shr      rax, 0x21
201e87 xor      rax, rdx
201e8a imul     rax, rbp
201e8e mov      rcx, rax
201e91 shr      rcx, 0x21
201e95 xor      rcx, rax
201e98 imul     rcx, r8
201e9c mov      rax, rcx
201e9f shr      rax, 0x21
201ea3 xor      rax, rcx
201ea6 mov      qword ptr [r14 + 0x20], rax
201eaa mov      rdx, qword ptr [r14 + 0x138]
201eb1 movzx    ecx, byte ptr [r14 + 0x169]
201eb9 mov      rax, qword ptr [r14 + 0xd8]
201ec0 imul     rcx, r11
201ec4 lea      rbx, [rax + rax*4]
201ec8 mov      rax, rdx
201ecb add      rbx, rbx
201ece xor      rcx, rbx
201ed1 xor      rcx, r10
201ed4 xor      rax, rcx
201ed7 sub      rdx, rcx
201eda test     r9b, r9b
201edd cmove    rdx, rax
201ee1 mov      rax, qword ptr [r14 + 0x1b0]
201ee8 inc      qword ptr [r14 + 0x1b8]
201eef imul     rax, r15
201ef3 add      rax, r12
201ef6 mov      qword ptr [r14 + 0x1b0], rax
201efd shr      rax, 0x1b
201f01 movzx    r8d, al
201f05 mov      byte ptr [r14 + 0x169], r8b
201f0c imul     r8, r11
201f10 xor      r8, rbx
201f13 xor      r8, r10
201f16 mov      rcx, r8
201f19 xor      rcx, rdx
201f1c test     r9b, r9b
201f1f lea      rax, [r8 + rdx]
201f23 cmove    rax, rcx
201f27 mov      rcx, r14
201f2a mov      qword ptr [r14 + 0x138], rax
201f31 call     0x1401f0910
201f36 mov      rax, qword ptr [r14 + 0xd8]
201f3d mov      rdx, qword ptr [r14 + 0x130]
201f44 mov      r10, qword ptr [r14 + 0xe0]
201f4b movzx    ecx, byte ptr [r14 + 0x168]
201f53 mov      rbx, qword ptr [r14 + 0xd0]
201f5a lea      r11, [rax + rax*8]
201f5e movzx    r9d, byte ptr [r14 + 0xe8]
201f66 mov      rax, rdx
201f69 imul     rcx, r10
201f6d xor      rcx, r11
201f70 xor      rcx, rbx
201f73 xor      rax, rcx
201f76 sub      rdx, rcx
201f79 test     r9b, r9b
201f7c cmove    rdx, rax
201f80 mov      rax, qword ptr [r14 + 0x1b0]
201f87 inc      qword ptr [r14 + 0x1b8]
201f8e imul     rax, r15
201f92 add      rax, r12
201f95 mov      qword ptr [r14 + 0x1b0], rax
201f9c shr      rax, 0x1b
201fa0 movzx    r8d, al
201fa4 mov      byte ptr [r14 + 0x168], r8b
201fab imul     r8, r10
201faf xor      r8, r11
201fb2 xor      r8, rbx
201fb5 mov      rcx, r8
201fb8 xor      rcx, rdx
201fbb test     r9b, r9b
201fbe lea      rax, [r8 + rdx]
201fc2 cmove    rax, rcx
201fc6 mov      rcx, r14
201fc9 mov      qword ptr [r14 + 0x130], rax
201fd0 call     0x1401f0910
201fd5 mov      rcx, r14
201fd8 call     0x1401ee070
201fdd cmp      eax, dword ptr [r14 + 0x1d8]
201fe4 jae      0x140201ff0
201fe6 mov      edx, eax
201fe8 mov      rcx, r14
201feb call     0x1401f0910
201ff0 mov      rsi, qword ptr [r14 + 0xe0]
201ff7 mov      rbp, qword ptr [r14 + 0xd0]
201ffe mov      r11, qword ptr [r14 + 0x130]
202005 movzx    edi, byte ptr [r14 + 0xe8]
20200d mov      rax, r11
202010 movzx    ecx, byte ptr [r14 + 0x168]
202018 mov      rbx, qword ptr [r14 + 0xd8]
20201f mov      r8, qword ptr [r14 + 0x1b8]
202026 mov      r10, qword ptr [r14 + 0x1b0]
20202d imul     rcx, rsi
202031 lea      r9, [rbx + rbx*8]
202035 xor      rcx, r9
202038 xor      rcx, rbp
20203b xor      rax, rcx
20203e sub      r11, rcx
202041 test     dil, dil
202044 cmove    r11, rax
202048 imul     r10, r15
20204c mov      rcx, r11
20204f add      r10, r12
202052 mov      rax, r10
202055 shr      rax, 0x1b
202059 movzx    edx, al
20205c mov      byte ptr [r14 + 0x168], dl
202063 imul     rdx, rsi
202067 xor      rdx, r9
20206a xor      rdx, rbp
20206d xor      rcx, rdx
202070 test     dil, dil
202073 lea      rax, [r11 + rdx]
202077 cmove    rax, rcx
20207b mov      rcx, r11
20207e mov      qword ptr [r14 + 0x130], rax
202085 lea      rax, [r8 + 2]
202089 mov      qword ptr [r14 + 0x1b8], rax
202090 mov      r8d, 0x2871
202096 imul     r10, r15
20209a lea      rax, [rbx + rbx*4]
20209e add      rax, rax
2020a1 add      r10, r12
2020a4 mov      qword ptr [r14 + 0x1b0], r10
2020ab shr      r10, 0x1b
2020af movzx    edx, r10b
2020b3 mov      byte ptr [r14 + 0x169], dl
2020ba imul     rdx, rsi
2020be xor      rdx, rax
2020c1 xor      rdx, rbp
2020c4 xor      rcx, rdx
2020c7 test     dil, dil
2020ca lea      rax, [r11 + rdx]
2020ce cmove    rax, rcx
2020d2 mov      rcx, r14
2020d5 mov      qword ptr [r14 + 0x138], rax
2020dc movzx    edx, byte ptr [r14 + 0x4ad]
2020e4 xor      rdx, qword ptr [r14 + 0x348]
2020eb call     0x1401f1520
2020f0 mov      r8, qword ptr [r14 + 0x348]
2020f7 movabs   rdi, 0xff51afd7ed558ccd
202101 mov      rax, r8
202104 movabs   rsi, 0xc4ceb9fe1a85ec53
20210e xor      rax, qword ptr [r14 + 0x20]
202112 mov      rcx, rax
202115 shr      rcx, 0x21
202119 xor      rcx, rax
20211c imul     rcx, rdi
202120 mov      rax, rcx
202123 shr      rax, 0x21
202127 xor      rax, rcx
20212a imul     rax, rsi
20212e mov      rdx, rax
202131 shr      rdx, 0x21
202135 xor      edx, eax
202137 lea      eax, [rdx + 1]
20213a mov      ecx, eax
20213c xor      eax, edx
20213e imul     ecx, edx
202141 not      ecx
202143 and      ecx, eax
202145 test     cl, 1
202148 je       0x1402021b1
20214a and      r8b, 3
20214e cmp      r8b, 1
202152 jne      0x1402021b1
202154 mov      rax, qword ptr [r14 + 0x1b0]
20215b inc      qword ptr [r14 + 0x1b8]
202162 imul     rax, r15
202166 add      rax, r12
202169 mov      qword ptr [r14 + 0x1b0], rax
202170 shr      rax, 0x1b
202174 movzx    eax, al
202177 mov      byte ptr [r14 + 0x160], al
20217e imul     rax, qword ptr [r14 + 0xe0]
202186 xor      rax, qword ptr [r14 + 0xd8]
20218d xor      rax, qword ptr [r14 + 0xd0]
202194 mov      rcx, rax
202197 add      rax, 0x190631
20219d xor      rcx, 0x190631
2021a4 cmp      byte ptr [r14 + 0xe8], 0
2021ac jmp      0x1402027af
2021b1 mov      rcx, r14
2021b4 call     0x1401ee070
2021b9 mov      ebx, eax
2021bb cmp      eax, dword ptr [r14 + 0x1d8]
2021c2 jb       0x140202221
2021c4 mov      rax, qword ptr [r14 + 0x1b0]
2021cb inc      qword ptr [r14 + 0x1b8]
2021d2 imul     rax, r15
2021d6 add      rax, r12
2021d9 mov      qword ptr [r14 + 0x1b0], rax
2021e0 shr      rax, 0x1b
2021e4 movzx    eax, al
2021e7 mov      byte ptr [r14 + 0x160], al
2021ee imul     rax, qword ptr [r14 + 0xe0]
2021f6 xor      rax, qword ptr [r14 + 0xd8]
2021fd xor      rax, qword ptr [r14 + 0xd0]
202204 mov      rcx, rax
202207 add      rax, 0xfe1ab
20220d xor      rcx, 0xfe1ab
202214 cmp      byte ptr [r14 + 0xe8], 0
20221c jmp      0x1402027af
202221 mov      edx, ebx
202223 mov      rcx, r14
202226 call     0x1401f25b0
20222b movsxd   rcx, dword ptr [r14 + 0x11e0]
202232 movabs   r8, 0xd6e8feb86659fd93
20223c mov      rdx, qword ptr [r14 + 0x20]
202240 mov      rax, rbx
202243 imul     rax, r8
202247 imul     rcx, r15
20224b rol      rdx, 0x11
20224f xor      rax, rdx
202252 xor      rcx, qword ptr [r14 + 0x260]
202259 xor      rax, rcx
20225c mov      rcx, rax
20225f shr      rcx, 0x21
202263 xor      rcx, rax
202266 imul     rcx, rdi
20226a mov      rdx, rcx
20226d shr      rdx, 0x21
202271 xor      rdx, rcx
202274 imul     rdx, rsi
202278 mov      rax, rdx
20227b shr      rax, 0x21
20227f xor      rax, rdx
202282 mov      r10, rax
202285 shr      r10, 0x1d
202289 xor      r10, rax
20228c or       r10, 1
202290 mov      rax, r10
202293 mov      qword ptr [r14 + 0x260], r10
20229a and      eax, 0x3ff
20229f cmp      rax, 0x2c5
2022a5 jne      0x1402022b6
2022a7 mov      rcx, r14
2022aa call     0x1402297e0
2022af mov      r10, qword ptr [r14 + 0x260]
2022b6 movzx    eax, r10b
2022ba and      al, 0x1f
2022bc cmp      al, 0x15
2022be jne      0x1402023ab
2022c4 movsxd   rax, dword ptr [r14 + 0x11e0]
2022cb xor      rax, 0x5a5a
2022d1 mov      rcx, qword ptr [r14 + 0x20]
2022d5 imul     rax, r15
2022d9 rol      rcx, 0x11
2022dd xor      rax, r10
2022e0 xor      rcx, rax
2022e3 movabs   rax, 0x8f70feda99a6026d
2022ed xor      rcx, rax
2022f0 mov      rax, rcx
2022f3 shr      rax, 0x21
2022f7 xor      rax, rcx
2022fa imul     rax, rdi
2022fe mov      rcx, rax
202301 shr      rcx, 0x21
202305 xor      rcx, rax
202308 imul     rcx, rsi
20230c mov      rax, rcx
20230f shr      rax, 0x21
202313 xor      rax, rcx
202316 mov      r9, rax
202319 shr      r9, 0x1d
20231d xor      r9, rax
202320 or       r9, 1
202324 mov      rax, r9
202327 mov      rcx, r9
20232a shr      rax, 8
20232e and      eax, 3
202331 shr      rcx, 0x28
202335 imul     r8, rax, 0x3e
202339 mov      eax, 0x8421085
20233e mul      ecx
202340 mov      eax, ecx
202342 sub      eax, edx
202344 shr      eax, 1
202346 add      eax, edx
202348 shr      eax, 5
20234b imul     eax, eax, 0x3e
20234e sub      ecx, eax
202350 mov      eax, ecx
202352 add      r8, rax
202355 mov      rax, qword ptr [r14 + 0x4b8]
20235c movsxd   rcx, dword ptr [rax + r8*4]
202360 movsxd   rax, dword ptr [r14 + 0x4c8]
202367 xor      rcx, rax
20236a add      rcx, qword ptr [r14 + 0x4c0]
202371 xor      rcx, r9
202374 mov      rax, rcx
202377 shr      rax, 0x21
20237b xor      rax, rcx
20237e imul     rax, rdi
202382 mov      rcx, rax
202385 shr      rcx, 0x21
202389 xor      rcx, rax
20238c imul     rcx, rsi
202390 mov      rax, rcx
202393 shr      rax, 0x21
202397 xor      rax, rcx
20239a xor      rax, r10
20239d inc      qword ptr [r14 + 0x268]
2023a4 mov      qword ptr [r14 + 0x260], rax
2023ab inc      dword ptr [r14 + 0x200]
2023b2 mov      eax, dword ptr [r14 + 0x200]
2023b9 cmp      eax, dword ptr [r14 + 0x1fc]
2023c0 jb       0x1402023d5
2023c2 mov      rcx, r14
2023c5 mov      dword ptr [r14 + 0x200], 0
2023d0 call     0x1401ef7c0
2023d5 mov      r8d, ebx
2023d8 mov      edx, ebx
2023da mov      rcx, r14
2023dd call     0x1401f0660
2023e2 inc      qword ptr [r14 + 0x1b8]
2023e9 mov      rcx, rbx
2023ec mov      r9, qword ptr [r14 + 0x1b0]
2023f3 mov      rbp, r12
2023f6 mov      r10, qword ptr [r14 + 0x1b8]
2023fd imul     r9, r15
202401 add      r9, r12
202404 lea      r12d, [rbx + 1]
202408 mov      qword ptr [r14 + 0x1b0], r9
20240f mov      rax, r9
202412 shr      rax, 0x1b
202416 movzx    edx, al
202419 mov      byte ptr [r14 + 0x168], dl
202420 mov      rdi, qword ptr [r14 + 0xe0]
202427 mov      r11, qword ptr [r14 + 0xd8]
20242e mov      rsi, qword ptr [r14 + 0xd0]
202435 movzx    r15d, byte ptr [r14 + 0xe8]
20243d imul     rdx, rdi
202441 lea      rax, [r11 + r11*8]
202445 xor      rdx, rax
202448 xor      rdx, rsi
20244b xor      rcx, rdx
20244e test     r15b, r15b
202451 lea      rax, [rbx + rdx]
202455 cmove    rax, rcx
202459 inc      r10
20245c mov      qword ptr [r14 + 0x130], rax
202463 mov      rcx, qword ptr [r14 + 0x1d0]
20246a mov      rax, qword ptr [r14 + 0x48]
20246e mov      qword ptr [rsp + 0x60], r10
202473 movzx    r8d, byte ptr [rcx + rbx]
202478 xor      r8b, byte ptr [rax + rbx]
20247c movabs   rax, 0x9e3779b97f4a7c15
202486 imul     r9, rax
20248a mov      qword ptr [r14 + 0x1b8], r10
202491 add      r9, rbp
202494 mov      rax, r9
202497 shr      rax, 0x1b
20249b movzx    edx, al
20249e lea      rax, [r11 + r11]
2024a2 mov      byte ptr [r14 + 0x161], dl
2024a9 imul     rdx, rdi
2024ad xor      rdx, rax
2024b0 xor      rdx, rsi
2024b3 mov      rcx, rdx
2024b6 xor      rcx, r12
2024b9 test     r15b, r15b
2024bc lea      rax, [rdx + r12]
2024c0 cmove    rax, rcx
2024c4 mov      qword ptr [r14 + 0xf8], rax
2024cb movsxd   rdx, dword ptr [r14 + 0x11e0]
2024d2 mov      r10, qword ptr [r14 + 0x20]
2024d6 mov      rcx, rdx
2024d9 xor      rcx, qword ptr [r14 + 0x350]
2024e0 xor      rcx, r10
2024e3 xor      rcx, r12
2024e6 xor      rcx, qword ptr [r14 + 0x348]
2024ed mov      rax, rcx
2024f0 shr      rax, 0x21
2024f4 xor      rax, rcx
2024f7 movabs   rcx, 0xff51afd7ed558ccd
202501 imul     rax, rcx
202505 mov      rcx, rax
202508 shr      rcx, 0x21
20250c xor      rcx, rax
20250f movabs   rax, 0xc4ceb9fe1a85ec53
202519 imul     rcx, rax
20251d movzx    eax, r8b
202521 mov      rbx, rcx
202524 xor      rax, 0xdd
20252a shr      rbx, 0x21
20252e xor      rbx, rcx
202531 lea      rcx, [rip - 0x202538]
202538 mov      qword ptr [r14 + 0x28], rbx
20253c movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
202544 xor      bpl, 0x63
202548 inc      edx
20254a mov      dword ptr [r14 + 0x11e0], edx
202551 movabs   r8, 0xff51afd7ed558ccd
20255b test     dl, 0x1f
20255e jne      0x1402025a4
202560 movsxd   rax, edx
202563 xor      rax, r10
202566 xor      rax, qword ptr [r14 + 0x348]
20256d mov      rcx, rax
202570 shr      rcx, 0x21
202574 xor      rcx, rax
202577 movabs   rax, 0xc4ceb9fe1a85ec53
202581 imul     rcx, r8
202585 mov      rdx, rcx
202588 shr      rdx, 0x21
20258c xor      rdx, rcx
20258f imul     rdx, rax
202593 mov      rax, rdx
202596 shr      rax, 0x21
20259a xor      rax, rdx
20259d mov      qword ptr [r14 + 0x348], rax
2025a4 movzx    edx, bpl
2025a8 xor      r10, rdx
2025ab mov      byte ptr [r14 + 0x4ad], bpl
2025b2 xor      r10, r12
2025b5 movabs   r12, 0xc4ceb9fe1a85ec53
2025bf mov      rax, r10
2025c2 shr      rax, 0x21
2025c6 xor      rax, r10
2025c9 movabs   r10, 0x9e3779b97f4a7c15
2025d3 imul     rax, r8
2025d7 imul     rdx, r10
2025db imul     r9, r10
2025df mov      rcx, rax
2025e2 shr      rcx, 0x21
2025e6 xor      rcx, rax
2025e9 imul     rcx, r12
2025ed mov      rax, rcx
2025f0 shr      rax, 0x21
2025f4 xor      rax, rcx
2025f7 mov      ecx, dword ptr [r14 + 0x1178]
2025fe mov      qword ptr [r14 + 0x20], rax
202602 movabs   rax, 0xd6e8feb86659fd93
20260c imul     rcx, rax
202610 xor      rcx, rdx
202613 xor      rcx, rbx
202616 movabs   rbx, 0x2545f4914f6cdd1d
202620 mov      rax, rcx
202623 add      r9, rbx
202626 shr      rax, 0x21
20262a xor      rax, rcx
20262d imul     rax, r8
202631 mov      rdx, rax
202634 shr      rdx, 0x21
202638 xor      rdx, rax
20263b mov      rax, qword ptr [rsp + 0x60]
202640 imul     rdx, r12
202644 shr      rdx, 0x21
202648 and      edx, 3
20264b inc      rax
20264e mov      qword ptr [r14 + 0x1b8], rax
202655 cmp      bpl, 0x3e
202659 jae      0x1402026f3
20265f inc      qword ptr [r14 + 0x11a0]
202666 lea      rax, [rip - 0x20266d]
20266d mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
202675 mov      qword ptr [r14 + 0x1b0], r9
20267c shr      r9, 0x1b
202680 movzx    eax, r9b
202684 mov      byte ptr [r14 + 0x160], al
20268b imul     rax, rdi
20268f mov      ebx, edx
202691 xor      rax, r11
202694 xor      rax, rsi
202697 mov      rcx, rax
20269a add      rax, r8
20269d xor      rcx, r8
2026a0 movzx    r8d, bpl
2026a4 test     r15b, r15b
2026a7 cmove    rax, rcx
2026ab mov      rcx, r14
2026ae mov      qword ptr [r14 + 0xf0], rax
2026b5 call     0x1401f1f50
2026ba mov      r8, qword ptr [rsp + 0x70]
2026bf lea      edx, [r13 - 1]
2026c3 mov      eax, eax
2026c5 imul     rcx, rbx, 0x3e
2026c9 add      rcx, rax
2026cc mov      rax, qword ptr [r14 + 0x4b8]
2026d3 movsxd   r9, dword ptr [rax + rcx*4]
2026d7 mov      rcx, r14
2026da movsxd   rax, dword ptr [r14 + 0x4c8]
2026e1 xor      r9, rax
2026e4 add      r9, qword ptr [r14 + 0x4c0]
2026eb call     r9
2026ee jmp      0x1402027ba
2026f3 inc      dword ptr [r14 + 0x11a8]
2026fa mov      rax, r9
2026fd shr      rax, 0x1b
202701 movzx    ecx, al
202704 lea      rax, [r11*4]
20270c mov      byte ptr [r14 + 0x163], cl
202713 imul     rcx, rdi
202717 imul     r9, r10
20271b xor      rcx, rax
20271e xor      rcx, rsi
202721 mov      qword ptr [r14 + 0x108], rcx
202728 mov      r8, qword ptr [r14 + 0x1b8]
20272f add      r9, rbx
202732 mov      rax, r9
202735 shr      rax, 0x1b
202739 movzx    edx, al
20273c mov      byte ptr [r14 + 0x16a], dl
202743 imul     rax, r11, 0xb
202747 imul     rdx, rdi
20274b xor      rdx, rax
20274e xor      rdx, rsi
202751 mov      rcx, rdx
202754 xor      rcx, 1
202758 test     r15b, r15b
20275b lea      rax, [rdx + 1]
20275f cmove    rax, rcx
202763 mov      qword ptr [r14 + 0x140], rax
20276a lea      rax, [r8 + 2]
20276e mov      qword ptr [r14 + 0x1b8], rax
202775 imul     r9, r10
202779 add      r9, rbx
20277c mov      qword ptr [r14 + 0x1b0], r9
202783 shr      r9, 0x1b
202787 movzx    eax, r9b
20278b mov      byte ptr [r14 + 0x160], al
202792 imul     rax, rdi
202796 xor      rax, rsi
202799 xor      rax, r11
20279c mov      rcx, rax
20279f add      rax, 0xfe1ab
2027a5 xor      rcx, 0xfe1ab
2027ac test     r15b, r15b
2027af cmove    rax, rcx
2027b3 mov      qword ptr [r14 + 0xf0], rax
2027ba mov      r12, qword ptr [rsp + 0x28]
2027bf mov      rsi, qword ptr [rsp + 0x68]
2027c4 mov      r15, qword ptr [rsp + 0x20]
2027c9 add      rsp, 0x30
2027cd pop      r14
2027cf pop      r13
2027d1 pop      rdi
2027d2 pop      rbp
2027d3 pop      rbx
2027d4 ret      
2027d5 mov      edx, 0x54485254
2027da mov      rcx, r14
2027dd call     0x1401ed830
2027e2 int3     
2027e3 mov      edx, 0x43414e59
2027e8 mov      rcx, r14
2027eb call     0x1401ed830
2027f0 int3     
