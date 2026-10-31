206c70 mov      qword ptr [rsp + 0x18], r8
206c75 push     rbx
206c76 push     rbp
206c77 push     rdi
206c78 push     r13
206c7a push     r14
206c7c sub      rsp, 0x30
206c80 movsxd   rax, dword ptr [rcx + 0x11e0]
206c87 mov      r14, rcx
206c8a mov      r13d, edx
206c8d movabs   rcx, 0x62f799b88183bf4e
206c97 imul     rax, rcx
206c9b movabs   rcx, 0xc0ae1373005d3b71
206ca5 movabs   rbp, 0xff51afd7ed558ccd
206caf xor      rax, qword ptr [r14 + 0x28]
206cb3 mov      rdi, r8
206cb6 mov      qword ptr [rsp + 0x60], rax
206cbb mov      rax, qword ptr [rsp + 0x60]
206cc0 movsxd   rax, dword ptr [r14 + 0x11e0]
206cc7 imul     rax, rcx
206ccb movabs   rcx, 0x26668d2d8316b764
206cd5 xor      rax, qword ptr [r14 + 0x28]
206cd9 mov      qword ptr [rsp + 0x60], rax
206cde mov      rax, qword ptr [rsp + 0x60]
206ce3 movsxd   rax, dword ptr [r14 + 0x11e0]
206cea imul     rax, rcx
206cee movabs   rcx, 0x4beb7055f72fdca1
206cf8 xor      rax, qword ptr [r14 + 0x28]
206cfc mov      qword ptr [rsp + 0x60], rax
206d01 mov      rax, qword ptr [rsp + 0x60]
206d06 mov      rax, qword ptr [r14 + 0x2e8]
206d0d sub      rax, rcx
206d10 mov      rcx, rax
206d13 shr      rcx, 0x21
206d17 xor      rcx, rax
206d1a movabs   rax, 0xc4ceb9fe1a85ec53
206d24 imul     rcx, rbp
206d28 mov      rdx, rcx
206d2b shr      rdx, 0x21
206d2f xor      rdx, rcx
206d32 mov      rcx, r14
206d35 imul     rdx, rax
206d39 mov      rax, rdx
206d3c shr      rax, 0x21
206d40 xor      rdx, rax
206d43 mov      rax, qword ptr [r14 + 0x2e8]
206d4a or       rdx, 1
206d4e xor      rdx, rax
206d51 mov      qword ptr [r14 + 0x2e8], rdx
206d58 call     0x1401ee940
206d5d mov      rcx, r14
206d60 mov      rbx, rax
206d63 call     0x1401ee940
206d68 xor      edx, edx
206d6a mov      rcx, r14
206d6d cmp      rax, rbx
206d70 setg     dl
206d73 call     0x1401ee820
206d78 mov      rax, qword ptr [r14 + 0x2e8]
206d7f test     r13d, r13d
206d82 jns      0x1402078c0
206d88 cmp      qword ptr [r14 + 0x11b8], rdi
206d8f jne      0x1402078ce
206d95 movsxd   rax, dword ptr [r14 + 0x11e0]
206d9c movabs   rcx, 0x6e5d3c3c237f9b74
206da6 imul     rax, rcx
206daa mov      rcx, r14
206dad xor      rax, qword ptr [r14 + 0x28]
206db1 mov      qword ptr [rsp + 0x60], rax
206db6 mov      rax, qword ptr [rsp + 0x60]
206dbb call     0x1401ee450
206dc0 test     eax, eax
206dc2 jne      0x1402078b4
206dc8 cmp      dword ptr [r14 + 0xad0], eax
206dcf jne      0x1402078b4
206dd5 mov      r8, qword ptr [r14 + 0xf0]
206ddc movzx    ecx, byte ptr [r14 + 0x160]
206de4 mov      rax, r8
206de7 mov      r10, qword ptr [r14 + 0xe0]
206dee mov      rbx, qword ptr [r14 + 0xd0]
206df5 mov      r11, qword ptr [r14 + 0xd8]
206dfc movzx    edi, byte ptr [r14 + 0xe8]
206e04 mov      r9, qword ptr [r14 + 0x1b0]
206e0b imul     rcx, r10
206e0f mov      qword ptr [rsp + 0x68], rsi
206e14 mov      rsi, qword ptr [r14 + 0x1b8]
206e1b xor      rcx, rbx
206e1e xor      rcx, r11
206e21 mov      qword ptr [rsp + 0x28], r12
206e26 xor      rax, rcx
206e29 mov      qword ptr [rsp + 0x20], r15
206e2e sub      r8, rcx
206e31 movabs   r15, 0x9e3779b97f4a7c15
206e3b test     dil, dil
206e3e movabs   r12, 0x2545f4914f6cdd1d
206e48 cmove    r8, rax
206e4c inc      rsi
206e4f imul     r9, r15
206e53 mov      qword ptr [r14 + 0x1b8], rsi
206e5a add      r9, r12
206e5d mov      qword ptr [r14 + 0x1b0], r9
206e64 mov      rax, r9
206e67 shr      rax, 0x1b
206e6b movzx    edx, al
206e6e mov      byte ptr [r14 + 0x160], dl
206e75 imul     rdx, r10
206e79 xor      rdx, rbx
206e7c xor      rdx, r11
206e7f mov      rcx, rdx
206e82 xor      rcx, r8
206e85 test     dil, dil
206e88 lea      rax, [rdx + r8]
206e8c cmove    rax, rcx
206e90 mov      qword ptr [r14 + 0xf0], rax
206e97 cmp      r8d, 0x338040
206e9e jne      0x1402078a5
206ea4 mov      eax, r13d
206ea7 btr      eax, 0x1f
206eab cmp      eax, 2
206eae jae      0x140206efa
206eb0 imul     r9, r15
206eb4 lea      rax, [rsi + 1]
206eb8 mov      qword ptr [r14 + 0x1b8], rax
206ebf add      r9, r12
206ec2 mov      qword ptr [r14 + 0x1b0], r9
206ec9 shr      r9, 0x1b
206ecd movzx    eax, r9b
206ed1 mov      byte ptr [r14 + 0x160], al
206ed8 imul     rax, r10
206edc xor      rax, rbx
206edf xor      rax, r11
206ee2 mov      rcx, rax
206ee5 add      rax, 0x1ad951
206eeb xor      rcx, 0x1ad951
206ef2 test     dil, dil
206ef5 jmp      0x14020789a
206efa mov      rcx, r14
206efd call     0x1401ee070
206f02 movzx    ecx, byte ptr [r14 + 0x4ad]
206f0a movabs   r8, 0xc4ceb9fe1a85ec53
206f14 xor      rcx, qword ptr [r14 + 0x11e8]
206f1b mov      r11, qword ptr [r14 + 0xe0]
206f22 mov      r10, qword ptr [r14 + 0xd0]
206f29 movzx    r9d, byte ptr [r14 + 0xe8]
206f31 mov      eax, eax
206f33 xor      rcx, rax
206f36 mov      rax, rcx
206f39 shr      rax, 0x21
206f3d xor      rax, rcx
206f40 imul     rax, rbp
206f44 mov      rcx, rax
206f47 shr      rcx, 0x21
206f4b xor      rcx, rax
206f4e imul     rcx, r8
206f52 mov      rdx, rcx
206f55 shr      rdx, 0x21
206f59 xor      rdx, rcx
206f5c mov      qword ptr [r14 + 0x11e8], rdx
206f63 xor      rdx, qword ptr [r14 + 0x28]
206f67 xor      rdx, qword ptr [r14 + 0x20]
206f6b mov      rax, rdx
206f6e shr      rax, 0x21
206f72 xor      rax, rdx
206f75 imul     rax, rbp
206f79 mov      rcx, rax
206f7c shr      rcx, 0x21
206f80 xor      rcx, rax
206f83 imul     rcx, r8
206f87 mov      rax, rcx
206f8a shr      rax, 0x21
206f8e xor      rax, rcx
206f91 mov      qword ptr [r14 + 0x20], rax
206f95 mov      rdx, qword ptr [r14 + 0x138]
206f9c movzx    ecx, byte ptr [r14 + 0x169]
206fa4 mov      rax, qword ptr [r14 + 0xd8]
206fab imul     rcx, r11
206faf lea      rbx, [rax + rax*4]
206fb3 mov      rax, rdx
206fb6 add      rbx, rbx
206fb9 xor      rcx, rbx
206fbc xor      rcx, r10
206fbf xor      rax, rcx
206fc2 sub      rdx, rcx
206fc5 test     r9b, r9b
206fc8 cmove    rdx, rax
206fcc mov      rax, qword ptr [r14 + 0x1b0]
206fd3 inc      qword ptr [r14 + 0x1b8]
206fda imul     rax, r15
206fde add      rax, r12
206fe1 mov      qword ptr [r14 + 0x1b0], rax
206fe8 shr      rax, 0x1b
206fec movzx    r8d, al
206ff0 mov      byte ptr [r14 + 0x169], r8b
206ff7 imul     r8, r11
206ffb xor      r8, rbx
206ffe xor      r8, r10
207001 mov      rcx, r8
207004 xor      rcx, rdx
207007 test     r9b, r9b
20700a lea      rax, [r8 + rdx]
20700e cmove    rax, rcx
207012 mov      rcx, r14
207015 mov      qword ptr [r14 + 0x138], rax
20701c call     0x1401f0910
207021 mov      rax, qword ptr [r14 + 0xd8]
207028 mov      rdx, qword ptr [r14 + 0x130]
20702f mov      r10, qword ptr [r14 + 0xe0]
207036 movzx    ecx, byte ptr [r14 + 0x168]
20703e mov      rbx, qword ptr [r14 + 0xd0]
207045 lea      r11, [rax + rax*8]
207049 movzx    r9d, byte ptr [r14 + 0xe8]
207051 mov      rax, rdx
207054 imul     rcx, r10
207058 xor      rcx, r11
20705b xor      rcx, rbx
20705e xor      rax, rcx
207061 sub      rdx, rcx
207064 test     r9b, r9b
207067 cmove    rdx, rax
20706b mov      rax, qword ptr [r14 + 0x1b0]
207072 inc      qword ptr [r14 + 0x1b8]
207079 imul     rax, r15
20707d add      rax, r12
207080 mov      qword ptr [r14 + 0x1b0], rax
207087 shr      rax, 0x1b
20708b movzx    r8d, al
20708f mov      byte ptr [r14 + 0x168], r8b
207096 imul     r8, r10
20709a xor      r8, r11
20709d xor      r8, rbx
2070a0 mov      rcx, r8
2070a3 xor      rcx, rdx
2070a6 test     r9b, r9b
2070a9 lea      rax, [r8 + rdx]
2070ad cmove    rax, rcx
2070b1 mov      rcx, r14
2070b4 mov      qword ptr [r14 + 0x130], rax
2070bb call     0x1401f0910
2070c0 mov      rcx, r14
2070c3 call     0x1401ee070
2070c8 cmp      eax, dword ptr [r14 + 0x1d8]
2070cf jae      0x1402070db
2070d1 mov      edx, eax
2070d3 mov      rcx, r14
2070d6 call     0x1401f0910
2070db mov      rsi, qword ptr [r14 + 0xe0]
2070e2 mov      rbp, qword ptr [r14 + 0xd0]
2070e9 mov      r11, qword ptr [r14 + 0x130]
2070f0 movzx    edi, byte ptr [r14 + 0xe8]
2070f8 mov      rax, r11
2070fb movzx    ecx, byte ptr [r14 + 0x168]
207103 mov      rbx, qword ptr [r14 + 0xd8]
20710a mov      r8, qword ptr [r14 + 0x1b8]
207111 mov      r10, qword ptr [r14 + 0x1b0]
207118 imul     rcx, rsi
20711c lea      r9, [rbx + rbx*8]
207120 xor      rcx, r9
207123 xor      rcx, rbp
207126 xor      rax, rcx
207129 sub      r11, rcx
20712c test     dil, dil
20712f cmove    r11, rax
207133 imul     r10, r15
207137 mov      rcx, r11
20713a add      r10, r12
20713d mov      rax, r10
207140 shr      rax, 0x1b
207144 movzx    edx, al
207147 mov      byte ptr [r14 + 0x168], dl
20714e imul     rdx, rsi
207152 xor      rdx, r9
207155 xor      rdx, rbp
207158 xor      rcx, rdx
20715b test     dil, dil
20715e lea      rax, [r11 + rdx]
207162 cmove    rax, rcx
207166 mov      rcx, r11
207169 mov      qword ptr [r14 + 0x130], rax
207170 lea      rax, [r8 + 2]
207174 mov      qword ptr [r14 + 0x1b8], rax
20717b mov      r8d, 0x9fe6
207181 imul     r10, r15
207185 lea      rax, [rbx + rbx*4]
207189 add      rax, rax
20718c add      r10, r12
20718f mov      qword ptr [r14 + 0x1b0], r10
207196 shr      r10, 0x1b
20719a movzx    edx, r10b
20719e mov      byte ptr [r14 + 0x169], dl
2071a5 imul     rdx, rsi
2071a9 xor      rdx, rax
2071ac xor      rdx, rbp
2071af xor      rcx, rdx
2071b2 test     dil, dil
2071b5 lea      rax, [r11 + rdx]
2071b9 cmove    rax, rcx
2071bd mov      rcx, r14
2071c0 mov      qword ptr [r14 + 0x138], rax
2071c7 movzx    edx, byte ptr [r14 + 0x4ad]
2071cf xor      rdx, qword ptr [r14 + 0x348]
2071d6 call     0x1401f1520
2071db mov      r8, qword ptr [r14 + 0x348]
2071e2 movabs   rdi, 0xff51afd7ed558ccd
2071ec mov      rax, r8
2071ef movabs   rsi, 0xc4ceb9fe1a85ec53
2071f9 xor      rax, qword ptr [r14 + 0x20]
2071fd mov      rcx, rax
207200 shr      rcx, 0x21
207204 xor      rcx, rax
207207 imul     rcx, rdi
20720b mov      rax, rcx
20720e shr      rax, 0x21
207212 xor      rax, rcx
207215 imul     rax, rsi
207219 mov      rdx, rax
20721c shr      rdx, 0x21
207220 xor      edx, eax
207222 lea      eax, [rdx + 1]
207225 mov      ecx, eax
207227 xor      eax, edx
207229 imul     ecx, edx
20722c not      ecx
20722e and      ecx, eax
207230 test     cl, 1
207233 je       0x14020729c
207235 and      r8b, 3
207239 cmp      r8b, 1
20723d jne      0x14020729c
20723f mov      rax, qword ptr [r14 + 0x1b0]
207246 inc      qword ptr [r14 + 0x1b8]
20724d imul     rax, r15
207251 add      rax, r12
207254 mov      qword ptr [r14 + 0x1b0], rax
20725b shr      rax, 0x1b
20725f movzx    eax, al
207262 mov      byte ptr [r14 + 0x160], al
207269 imul     rax, qword ptr [r14 + 0xe0]
207271 xor      rax, qword ptr [r14 + 0xd8]
207278 xor      rax, qword ptr [r14 + 0xd0]
20727f mov      rcx, rax
207282 add      rax, 0x190631
207288 xor      rcx, 0x190631
20728f cmp      byte ptr [r14 + 0xe8], 0
207297 jmp      0x14020789a
20729c mov      rcx, r14
20729f call     0x1401ee070
2072a4 mov      ebx, eax
2072a6 cmp      eax, dword ptr [r14 + 0x1d8]
2072ad jb       0x14020730c
2072af mov      rax, qword ptr [r14 + 0x1b0]
2072b6 inc      qword ptr [r14 + 0x1b8]
2072bd imul     rax, r15
2072c1 add      rax, r12
2072c4 mov      qword ptr [r14 + 0x1b0], rax
2072cb shr      rax, 0x1b
2072cf movzx    eax, al
2072d2 mov      byte ptr [r14 + 0x160], al
2072d9 imul     rax, qword ptr [r14 + 0xe0]
2072e1 xor      rax, qword ptr [r14 + 0xd8]
2072e8 xor      rax, qword ptr [r14 + 0xd0]
2072ef mov      rcx, rax
2072f2 add      rax, 0xfe1ab
2072f8 xor      rcx, 0xfe1ab
2072ff cmp      byte ptr [r14 + 0xe8], 0
207307 jmp      0x14020789a
20730c mov      edx, ebx
20730e mov      rcx, r14
207311 call     0x1401f25b0
207316 movsxd   rcx, dword ptr [r14 + 0x11e0]
20731d movabs   r8, 0xd6e8feb86659fd93
207327 mov      rdx, qword ptr [r14 + 0x20]
20732b mov      rax, rbx
20732e imul     rax, r8
207332 imul     rcx, r15
207336 rol      rdx, 0x11
20733a xor      rax, rdx
20733d xor      rcx, qword ptr [r14 + 0x260]
207344 xor      rax, rcx
207347 mov      rcx, rax
20734a shr      rcx, 0x21
20734e xor      rcx, rax
207351 imul     rcx, rdi
207355 mov      rdx, rcx
207358 shr      rdx, 0x21
20735c xor      rdx, rcx
20735f imul     rdx, rsi
207363 mov      rax, rdx
207366 shr      rax, 0x21
20736a xor      rax, rdx
20736d mov      r10, rax
207370 shr      r10, 0x1d
207374 xor      r10, rax
207377 or       r10, 1
20737b mov      rax, r10
20737e mov      qword ptr [r14 + 0x260], r10
207385 and      eax, 0x3ff
20738a cmp      rax, 0x2c5
207390 jne      0x1402073a1
207392 mov      rcx, r14
207395 call     0x1402297e0
20739a mov      r10, qword ptr [r14 + 0x260]
2073a1 movzx    eax, r10b
2073a5 and      al, 0x1f
2073a7 cmp      al, 0x15
2073a9 jne      0x140207496
2073af movsxd   rax, dword ptr [r14 + 0x11e0]
2073b6 xor      rax, 0x5a5a
2073bc mov      rcx, qword ptr [r14 + 0x20]
2073c0 imul     rax, r15
2073c4 rol      rcx, 0x11
2073c8 xor      rax, r10
2073cb xor      rcx, rax
2073ce movabs   rax, 0x8f70feda99a6026d
2073d8 xor      rcx, rax
2073db mov      rax, rcx
2073de shr      rax, 0x21
2073e2 xor      rax, rcx
2073e5 imul     rax, rdi
2073e9 mov      rcx, rax
2073ec shr      rcx, 0x21
2073f0 xor      rcx, rax
2073f3 imul     rcx, rsi
2073f7 mov      rax, rcx
2073fa shr      rax, 0x21
2073fe xor      rax, rcx
207401 mov      r9, rax
207404 shr      r9, 0x1d
207408 xor      r9, rax
20740b or       r9, 1
20740f mov      rax, r9
207412 mov      rcx, r9
207415 shr      rax, 8
207419 and      eax, 3
20741c shr      rcx, 0x28
207420 imul     r8, rax, 0x3e
207424 mov      eax, 0x8421085
207429 mul      ecx
20742b mov      eax, ecx
20742d sub      eax, edx
20742f shr      eax, 1
207431 add      eax, edx
207433 shr      eax, 5
207436 imul     eax, eax, 0x3e
207439 sub      ecx, eax
20743b mov      eax, ecx
20743d add      r8, rax
207440 mov      rax, qword ptr [r14 + 0x4b8]
207447 movsxd   rcx, dword ptr [rax + r8*4]
20744b movsxd   rax, dword ptr [r14 + 0x4c8]
207452 xor      rcx, rax
207455 add      rcx, qword ptr [r14 + 0x4c0]
20745c xor      rcx, r9
20745f mov      rax, rcx
207462 shr      rax, 0x21
207466 xor      rax, rcx
207469 imul     rax, rdi
20746d mov      rcx, rax
207470 shr      rcx, 0x21
207474 xor      rcx, rax
207477 imul     rcx, rsi
20747b mov      rax, rcx
20747e shr      rax, 0x21
207482 xor      rax, rcx
207485 xor      rax, r10
207488 inc      qword ptr [r14 + 0x268]
20748f mov      qword ptr [r14 + 0x260], rax
207496 inc      dword ptr [r14 + 0x200]
20749d mov      eax, dword ptr [r14 + 0x200]
2074a4 cmp      eax, dword ptr [r14 + 0x1fc]
2074ab jb       0x1402074c0
2074ad mov      rcx, r14
2074b0 mov      dword ptr [r14 + 0x200], 0
2074bb call     0x1401ef7c0
2074c0 mov      r8d, ebx
2074c3 mov      edx, ebx
2074c5 mov      rcx, r14
2074c8 call     0x1401f0660
2074cd inc      qword ptr [r14 + 0x1b8]
2074d4 mov      rcx, rbx
2074d7 mov      r9, qword ptr [r14 + 0x1b0]
2074de mov      rbp, r12
2074e1 mov      r10, qword ptr [r14 + 0x1b8]
2074e8 imul     r9, r15
2074ec add      r9, r12
2074ef lea      r12d, [rbx + 1]
2074f3 mov      qword ptr [r14 + 0x1b0], r9
2074fa mov      rax, r9
2074fd shr      rax, 0x1b
207501 movzx    edx, al
207504 mov      byte ptr [r14 + 0x168], dl
20750b mov      rdi, qword ptr [r14 + 0xe0]
207512 mov      r11, qword ptr [r14 + 0xd8]
207519 mov      rsi, qword ptr [r14 + 0xd0]
207520 movzx    r15d, byte ptr [r14 + 0xe8]
207528 imul     rdx, rdi
20752c lea      rax, [r11 + r11*8]
207530 xor      rdx, rax
207533 xor      rdx, rsi
207536 xor      rcx, rdx
207539 test     r15b, r15b
20753c lea      rax, [rbx + rdx]
207540 cmove    rax, rcx
207544 inc      r10
207547 mov      qword ptr [r14 + 0x130], rax
20754e mov      rcx, qword ptr [r14 + 0x1d0]
207555 mov      rax, qword ptr [r14 + 0x48]
207559 mov      qword ptr [rsp + 0x60], r10
20755e movzx    r8d, byte ptr [rcx + rbx]
207563 xor      r8b, byte ptr [rax + rbx]
207567 movabs   rax, 0x9e3779b97f4a7c15
207571 imul     r9, rax
207575 mov      qword ptr [r14 + 0x1b8], r10
20757c add      r9, rbp
20757f mov      rax, r9
207582 shr      rax, 0x1b
207586 movzx    edx, al
207589 lea      rax, [r11 + r11]
20758d mov      byte ptr [r14 + 0x161], dl
207594 imul     rdx, rdi
207598 xor      rdx, rax
20759b xor      rdx, rsi
20759e mov      rcx, rdx
2075a1 xor      rcx, r12
2075a4 test     r15b, r15b
2075a7 lea      rax, [rdx + r12]
2075ab cmove    rax, rcx
2075af mov      qword ptr [r14 + 0xf8], rax
2075b6 movsxd   rdx, dword ptr [r14 + 0x11e0]
2075bd mov      r10, qword ptr [r14 + 0x20]
2075c1 mov      rcx, rdx
2075c4 xor      rcx, qword ptr [r14 + 0x350]
2075cb xor      rcx, r10
2075ce xor      rcx, r12
2075d1 xor      rcx, qword ptr [r14 + 0x348]
2075d8 mov      rax, rcx
2075db shr      rax, 0x21
2075df xor      rax, rcx
2075e2 movabs   rcx, 0xff51afd7ed558ccd
2075ec imul     rax, rcx
2075f0 mov      rcx, rax
2075f3 shr      rcx, 0x21
2075f7 xor      rcx, rax
2075fa movabs   rax, 0xc4ceb9fe1a85ec53
207604 imul     rcx, rax
207608 movzx    eax, r8b
20760c mov      rbx, rcx
20760f xor      rax, 0xdd
207615 shr      rbx, 0x21
207619 xor      rbx, rcx
20761c lea      rcx, [rip - 0x207623]
207623 mov      qword ptr [r14 + 0x28], rbx
207627 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
20762f xor      bpl, 0x63
207633 inc      edx
207635 mov      dword ptr [r14 + 0x11e0], edx
20763c movabs   r8, 0xff51afd7ed558ccd
207646 test     dl, 0x1f
207649 jne      0x14020768f
20764b movsxd   rax, edx
20764e xor      rax, r10
207651 xor      rax, qword ptr [r14 + 0x348]
207658 mov      rcx, rax
20765b shr      rcx, 0x21
20765f xor      rcx, rax
207662 movabs   rax, 0xc4ceb9fe1a85ec53
20766c imul     rcx, r8
207670 mov      rdx, rcx
207673 shr      rdx, 0x21
207677 xor      rdx, rcx
20767a imul     rdx, rax
20767e mov      rax, rdx
207681 shr      rax, 0x21
207685 xor      rax, rdx
207688 mov      qword ptr [r14 + 0x348], rax
20768f movzx    edx, bpl
207693 xor      r10, rdx
207696 mov      byte ptr [r14 + 0x4ad], bpl
20769d xor      r10, r12
2076a0 movabs   r12, 0xc4ceb9fe1a85ec53
2076aa mov      rax, r10
2076ad shr      rax, 0x21
2076b1 xor      rax, r10
2076b4 movabs   r10, 0x9e3779b97f4a7c15
2076be imul     rax, r8
2076c2 imul     rdx, r10
2076c6 imul     r9, r10
2076ca mov      rcx, rax
2076cd shr      rcx, 0x21
2076d1 xor      rcx, rax
2076d4 imul     rcx, r12
2076d8 mov      rax, rcx
2076db shr      rax, 0x21
2076df xor      rax, rcx
2076e2 mov      ecx, dword ptr [r14 + 0x1178]
2076e9 mov      qword ptr [r14 + 0x20], rax
2076ed movabs   rax, 0xd6e8feb86659fd93
2076f7 imul     rcx, rax
2076fb xor      rcx, rdx
2076fe xor      rcx, rbx
207701 movabs   rbx, 0x2545f4914f6cdd1d
20770b mov      rax, rcx
20770e add      r9, rbx
207711 shr      rax, 0x21
207715 xor      rax, rcx
207718 imul     rax, r8
20771c mov      rdx, rax
20771f shr      rdx, 0x21
207723 xor      rdx, rax
207726 mov      rax, qword ptr [rsp + 0x60]
20772b imul     rdx, r12
20772f shr      rdx, 0x21
207733 and      edx, 3
207736 inc      rax
207739 mov      qword ptr [r14 + 0x1b8], rax
207740 cmp      bpl, 0x3e
207744 jae      0x1402077de
20774a inc      qword ptr [r14 + 0x11a0]
207751 lea      rax, [rip - 0x207758]
207758 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
207760 mov      qword ptr [r14 + 0x1b0], r9
207767 shr      r9, 0x1b
20776b movzx    eax, r9b
20776f mov      byte ptr [r14 + 0x160], al
207776 imul     rax, rdi
20777a mov      ebx, edx
20777c xor      rax, r11
20777f xor      rax, rsi
207782 mov      rcx, rax
207785 add      rax, r8
207788 xor      rcx, r8
20778b movzx    r8d, bpl
20778f test     r15b, r15b
207792 cmove    rax, rcx
207796 mov      rcx, r14
207799 mov      qword ptr [r14 + 0xf0], rax
2077a0 call     0x1401f1f50
2077a5 mov      r8, qword ptr [rsp + 0x70]
2077aa lea      edx, [r13 - 1]
2077ae mov      eax, eax
2077b0 imul     rcx, rbx, 0x3e
2077b4 add      rcx, rax
2077b7 mov      rax, qword ptr [r14 + 0x4b8]
2077be movsxd   r9, dword ptr [rax + rcx*4]
2077c2 mov      rcx, r14
2077c5 movsxd   rax, dword ptr [r14 + 0x4c8]
2077cc xor      r9, rax
2077cf add      r9, qword ptr [r14 + 0x4c0]
2077d6 call     r9
2077d9 jmp      0x1402078a5
2077de inc      dword ptr [r14 + 0x11a8]
2077e5 mov      rax, r9
2077e8 shr      rax, 0x1b
2077ec movzx    ecx, al
2077ef lea      rax, [r11*4]
2077f7 mov      byte ptr [r14 + 0x163], cl
2077fe imul     rcx, rdi
207802 imul     r9, r10
207806 xor      rcx, rax
207809 xor      rcx, rsi
20780c mov      qword ptr [r14 + 0x108], rcx
207813 mov      r8, qword ptr [r14 + 0x1b8]
20781a add      r9, rbx
20781d mov      rax, r9
207820 shr      rax, 0x1b
207824 movzx    edx, al
207827 mov      byte ptr [r14 + 0x16a], dl
20782e imul     rax, r11, 0xb
207832 imul     rdx, rdi
207836 xor      rdx, rax
207839 xor      rdx, rsi
20783c mov      rcx, rdx
20783f xor      rcx, 1
207843 test     r15b, r15b
207846 lea      rax, [rdx + 1]
20784a cmove    rax, rcx
20784e mov      qword ptr [r14 + 0x140], rax
207855 lea      rax, [r8 + 2]
207859 mov      qword ptr [r14 + 0x1b8], rax
207860 imul     r9, r10
207864 add      r9, rbx
207867 mov      qword ptr [r14 + 0x1b0], r9
20786e shr      r9, 0x1b
207872 movzx    eax, r9b
207876 mov      byte ptr [r14 + 0x160], al
20787d imul     rax, rdi
207881 xor      rax, rsi
207884 xor      rax, r11
207887 mov      rcx, rax
20788a add      rax, 0xfe1ab
207890 xor      rcx, 0xfe1ab
207897 test     r15b, r15b
20789a cmove    rax, rcx
20789e mov      qword ptr [r14 + 0xf0], rax
2078a5 mov      r12, qword ptr [rsp + 0x28]
2078aa mov      rsi, qword ptr [rsp + 0x68]
2078af mov      r15, qword ptr [rsp + 0x20]
2078b4 add      rsp, 0x30
2078b8 pop      r14
2078ba pop      r13
2078bc pop      rdi
2078bd pop      rbp
2078be pop      rbx
2078bf ret      
2078c0 mov      edx, 0x54485254
2078c5 mov      rcx, r14
2078c8 call     0x1401ed830
2078cd int3     
2078ce mov      edx, 0x43414e59
2078d3 mov      rcx, r14
2078d6 call     0x1401ed830
2078db int3     
