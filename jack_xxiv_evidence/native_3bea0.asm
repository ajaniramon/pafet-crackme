14003bea0 mov qword ptr [rsp + 0x18], r8
14003bea5 push rbx
14003bea6 push rdi
14003bea7 push r15
14003bea9 sub rsp, 0x40
14003bead movsxd rax, dword ptr [rcx + 0x154]
14003beb4 mov rdi, rcx
14003beb7 mov r15d, edx
14003beba movabs rcx, 0x4328aeb5b475ce75
14003bec4 imul rax, rcx
14003bec8 movabs rcx, 0xe171247e35ab4a4a
14003bed2 mov rbx, r8
14003bed5 xor rax, qword ptr [rdi + 0xe0]
14003bedc mov qword ptr [rsp + 0x60], rax
14003bee1 mov rax, qword ptr [rsp + 0x60]
14003bee6 movsxd rax, dword ptr [rdi + 0x154]
14003beed imul rax, rcx
14003bef1 movabs rcx, 0x7b9ba20b6e0c65f
14003befb xor rax, qword ptr [rdi + 0xe0]
14003bf02 mov qword ptr [rsp + 0x60], rax
14003bf07 mov rax, qword ptr [rsp + 0x60]
14003bf0c movsxd rax, dword ptr [rdi + 0x154]
14003bf13 imul rax, rcx
14003bf17 movabs rcx, 0x697be4c6a079954e
14003bf21 xor rax, qword ptr [rdi + 0xe0]
14003bf28 mov qword ptr [rsp + 0x60], rax
14003bf2d mov rax, qword ptr [rsp + 0x60]
14003bf32 mov rax, qword ptr [rdi + 0x108]
14003bf39 mov rax, qword ptr [rdi + 0x108]
14003bf40 sub rax, rcx
14003bf43 mov rcx, rax
14003bf46 shr rcx, 0x21
14003bf4a xor rcx, rax
14003bf4d movabs rax, 0xff51afd7ed558ccd
14003bf57 imul rcx, rax
14003bf5b movabs rax, 0xc4ceb9fe1a85ec53
14003bf65 mov rdx, rcx
14003bf68 shr rdx, 0x21
14003bf6c xor rdx, rcx
14003bf6f mov rcx, rdi
14003bf72 imul rdx, rax
14003bf76 mov rax, rdx
14003bf79 shr rax, 0x21
14003bf7d xor rdx, rax
14003bf80 mov rax, qword ptr [rdi + 0x108]
14003bf87 shr rax, 3
14003bf8b xor rax, rdx
14003bf8e mov qword ptr [rdi + 0x108], rax
14003bf95 call 0x140003a50
14003bf9a mov rax, qword ptr [rdi + 0x108]
14003bfa1 test r15d, r15d
14003bfa4 jns 0x14003cc8d
14003bfaa cmp qword ptr [rdi + 0x1170], rbx
14003bfb1 jne 0x14003cc9b
14003bfb7 movsxd rax, dword ptr [rdi + 0x154]
14003bfbe movabs rcx, 0x7f32a5ce3828ca8
14003bfc8 imul rax, rcx
14003bfcc mov qword ptr [rsp + 0x68], rbp
14003bfd1 xor rax, qword ptr [rdi + 0xe0]
14003bfd8 mov qword ptr [rsp + 0x60], rax
14003bfdd mov rax, qword ptr [rsp + 0x60]
14003bfe2 mov r8, qword ptr [rdi + 0x258]
14003bfe9 movzx ecx, byte ptr [rdi + 0x282]
14003bff0 mov rax, r8
14003bff3 mov r11, qword ptr [rdi + 0x1f8]
14003bffa mov rbx, qword ptr [rdi + 0x1e8]
14003c001 mov r10, qword ptr [rdi + 0x28]
14003c005 mov rbp, qword ptr [rdi + 0x30]
14003c009 imul rcx, r11
14003c00d mov qword ptr [rsp + 0x38], rsi
14003c012 movzx esi, byte ptr [rdi + 0x200]
14003c019 xor rcx, rbx
14003c01c mov qword ptr [rsp + 0x30], r12
14003c021 movabs r12, 0x9e3779b97f4a7c15
14003c02b mov qword ptr [rsp + 0x28], r13
14003c030 movabs r13, 0x2545f4914f6cdd1d
14003c03a mov qword ptr [rsp + 0x20], r14
14003c03f mov r14, qword ptr [rdi + 0x1f0]
14003c046 imul r9, r14, 0xb
14003c04a xor rcx, r9
14003c04d xor rax, rcx
14003c050 sub r8, rcx
14003c053 test sil, sil
14003c056 cmove r8, rax
14003c05a inc rbp
14003c05d imul r10, r12
14003c061 mov qword ptr [rdi + 0x30], rbp
14003c065 mov rcx, r8
14003c068 add r10, r13
14003c06b mov qword ptr [rdi + 0x28], r10
14003c06f mov rax, r10
14003c072 shr rax, 0x1b
14003c076 movzx edx, al
14003c079 mov byte ptr [rdi + 0x282], dl
14003c07f imul rdx, r11
14003c083 xor rdx, rbx
14003c086 xor rdx, r9
14003c089 xor rcx, rdx
14003c08c test sil, sil
14003c08f lea rax, [r8 + rdx]
14003c093 cmove rax, rcx
14003c097 mov qword ptr [rdi + 0x258], rax
14003c09e test r8d, r8d
14003c0a1 jne 0x14003cc6b
14003c0a7 cmp dword ptr [rdi + 0x5b8], r8d
14003c0ae jne 0x14003cc6b
14003c0b4 mov r8, qword ptr [rdi + 0x208]
14003c0bb movzx ecx, byte ptr [rdi + 0x278]
14003c0c2 imul rcx, r11
14003c0c6 xor rcx, rbx
14003c0c9 xor rcx, r14
14003c0cc mov rax, rcx
14003c0cf xor rax, r8
14003c0d2 sub r8, rcx
14003c0d5 test sil, sil
14003c0d8 cmove r8, rax
14003c0dc lea rax, [rbp + 1]
14003c0e0 mov qword ptr [rdi + 0x30], rax
14003c0e4 imul r10, r12
14003c0e8 add r10, r13
14003c0eb mov qword ptr [rdi + 0x28], r10
14003c0ef mov rax, r10
14003c0f2 shr rax, 0x1b
14003c0f6 movzx edx, al
14003c0f9 mov byte ptr [rdi + 0x278], dl
14003c0ff imul rdx, r11
14003c103 xor rdx, rbx
14003c106 xor rdx, r14
14003c109 mov rcx, rdx
14003c10c xor rcx, r8
14003c10f test sil, sil
14003c112 lea rax, [rdx + r8]
14003c116 cmove rax, rcx
14003c11a mov qword ptr [rdi + 0x208], rax
14003c121 cmp r8d, 0x7ba52
14003c128 jne 0x14003cc6b
14003c12e mov eax, r15d
14003c131 btr eax, 0x1f
14003c135 cmp eax, 2
14003c138 jae 0x14003c17d
14003c13a imul r10, r12
14003c13e lea rax, [rbp + 2]
14003c142 mov qword ptr [rdi + 0x30], rax
14003c146 add r10, r13
14003c149 mov qword ptr [rdi + 0x28], r10
14003c14d shr r10, 0x1b
14003c151 movzx eax, r10b
14003c155 mov byte ptr [rdi + 0x278], al
14003c15b imul rax, r11
14003c15f xor rax, rbx
14003c162 xor rax, r14
14003c165 mov rcx, rax
14003c168 add rax, 0x16acf2
14003c16e xor rcx, 0x16acf2
14003c175 test sil, sil
14003c178 jmp 0x14003cc60
14003c17d mov r9, qword ptr [rdi + 0x210]
14003c184 lea r8, [r14 + r14]
14003c188 movzx ecx, byte ptr [rdi + 0x279]
14003c18f mov rax, r9
14003c192 imul rcx, r11
14003c196 xor rcx, rbx
14003c199 xor rcx, r8
14003c19c xor rax, rcx
14003c19f sub r9, rcx
14003c1a2 test sil, sil
14003c1a5 cmove r9, rax
14003c1a9 imul r10, r12
14003c1ad add r10, r13
14003c1b0 mov rax, r10
14003c1b3 shr rax, 0x1b
14003c1b7 movzx edx, al
14003c1ba mov byte ptr [rdi + 0x279], dl
14003c1c0 imul rdx, r11
14003c1c4 xor rdx, rbx
14003c1c7 xor rdx, r8
14003c1ca movabs r8, 0xff51afd7ed558ccd
14003c1d4 mov rcx, rdx
14003c1d7 xor rcx, r9
14003c1da test sil, sil
14003c1dd lea rax, [rdx + r9]
14003c1e1 cmove rax, rcx
14003c1e5 mov qword ptr [rdi + 0x210], rax
14003c1ec movzx ecx, byte ptr [rdi + 0xf09]
14003c1f3 mov eax, r9d
14003c1f6 movabs r9, 0xc4ceb9fe1a85ec53
14003c200 xor rcx, rax
14003c203 xor rcx, qword ptr [rdi + 0x158]
14003c20a mov rax, rcx
14003c20d shr rax, 0x21
14003c211 xor rax, rcx
14003c214 imul rax, r8
14003c218 mov rcx, rax
14003c21b shr rcx, 0x21
14003c21f xor rcx, rax
14003c222 imul rcx, r9
14003c226 mov rdx, rcx
14003c229 shr rdx, 0x21
14003c22d xor rdx, rcx
14003c230 mov qword ptr [rdi + 0x158], rdx
14003c237 xor rdx, qword ptr [rdi + 0xd8]
14003c23e xor rdx, qword ptr [rdi + 0xe0]
14003c245 mov rax, rdx
14003c248 shr rax, 0x21
14003c24c xor rax, rdx
14003c24f imul rax, r8
14003c253 lea r8, [r14 + r14*4]
14003c257 mov rcx, rax
14003c25a add r8, r8
14003c25d shr rcx, 0x21
14003c261 xor rcx, rax
14003c264 imul rcx, r9
14003c268 mov rax, rcx
14003c26b shr rax, 0x21
14003c26f xor rax, rcx
14003c272 mov qword ptr [rdi + 0xd8], rax
14003c279 mov rdx, qword ptr [rdi + 0x250]
14003c280 movzx ecx, byte ptr [rdi + 0x281]
14003c287 imul rcx, r11
14003c28b xor rcx, rbx
14003c28e xor rcx, r8
14003c291 mov rax, rcx
14003c294 xor rax, rdx
14003c297 sub rdx, rcx
14003c29a test sil, sil
14003c29d cmove rdx, rax
14003c2a1 lea rax, [rbp + 3]
14003c2a5 mov qword ptr [rdi + 0x30], rax
14003c2a9 imul r10, r12
14003c2ad add r10, r13
14003c2b0 mov qword ptr [rdi + 0x28], r10
14003c2b4 shr r10, 0x1b
14003c2b8 movzx eax, r10b
14003c2bc mov byte ptr [rdi + 0x281], al
14003c2c2 imul rax, r11
14003c2c6 xor rax, rbx
14003c2c9 xor rax, r8
14003c2cc mov rcx, rax
14003c2cf add rax, rdx
14003c2d2 xor rcx, rdx
14003c2d5 test sil, sil
14003c2d8 cmove rax, rcx
14003c2dc mov rcx, rdi
14003c2df mov qword ptr [rdi + 0x250], rax
14003c2e6 call 0x140005b50
14003c2eb mov rdx, qword ptr [rdi + 0x248]
14003c2f2 movzx ecx, byte ptr [rdi + 0x280]
14003c2f9 mov r10, qword ptr [rdi + 0x1f8]
14003c300 mov rax, qword ptr [rdi + 0x1f0]
14003c307 mov rbx, qword ptr [rdi + 0x1e8]
14003c30e movzx r9d, byte ptr [rdi + 0x200]
14003c316 imul rcx, r10
14003c31a lea r11, [rax + rax*8]
14003c31e mov rax, rdx
14003c321 xor rcx, r11
14003c324 xor rcx, rbx
14003c327 xor rax, rcx
14003c32a sub rdx, rcx
14003c32d test r9b, r9b
14003c330 cmove rdx, rax
14003c334 mov rax, qword ptr [rdi + 0x28]
14003c338 inc qword ptr [rdi + 0x30]
14003c33c mov rcx, rdx
14003c33f imul rax, r12
14003c343 add rax, r13
14003c346 mov qword ptr [rdi + 0x28], rax
14003c34a shr rax, 0x1b
14003c34e movzx r8d, al
14003c352 mov byte ptr [rdi + 0x280], r8b
14003c359 imul r8, r10
14003c35d xor r8, r11
14003c360 xor r8, rbx
14003c363 xor rcx, r8
14003c366 test r9b, r9b
14003c369 lea rax, [rdx + r8]
14003c36d cmove rax, rcx
14003c371 mov rcx, rdi
14003c374 mov qword ptr [rdi + 0x248], rax
14003c37b call 0x140005b50
14003c380 mov r9, qword ptr [rdi + 0x210]
14003c387 movzx ecx, byte ptr [rdi + 0x279]
14003c38e mov rbx, qword ptr [rdi + 0x1f8]
14003c395 mov rsi, qword ptr [rdi + 0x1e8]
14003c39c movzx ebp, byte ptr [rdi + 0x200]
14003c3a3 mov r10, qword ptr [rdi + 0x28]
14003c3a7 mov r11, qword ptr [rdi + 0x1f0]
14003c3ae imul rcx, rbx
14003c3b2 lea r8, [r11 + r11]
14003c3b6 xor rcx, r8
14003c3b9 xor rcx, rsi
14003c3bc mov rax, rcx
14003c3bf xor rax, r9
14003c3c2 sub r9, rcx
14003c3c5 test bpl, bpl
14003c3c8 cmove r9, rax
14003c3cc inc qword ptr [rdi + 0x30]
14003c3d0 mov r14, qword ptr [rdi + 0x30]
14003c3d4 mov rcx, r9
14003c3d7 imul r10, r12
14003c3db add r10, r13
14003c3de mov qword ptr [rdi + 0x28], r10
14003c3e2 mov rax, r10
14003c3e5 shr rax, 0x1b
14003c3e9 movzx edx, al
14003c3ec mov byte ptr [rdi + 0x279], dl
14003c3f2 imul rdx, rbx
14003c3f6 xor rdx, r8
14003c3f9 xor rdx, rsi
14003c3fc xor rcx, rdx
14003c3ff test bpl, bpl
14003c402 lea rax, [r9 + rdx]
14003c406 cmove rax, rcx
14003c40a mov qword ptr [rdi + 0x210], rax
14003c411 cmp r9d, dword ptr [rdi + 0x1b8]
14003c418 jae 0x14003c449
14003c41a mov edx, r9d
14003c41d mov rcx, rdi
14003c420 call 0x140005b50
14003c425 mov r11, qword ptr [rdi + 0x1f0]
14003c42c mov r10, qword ptr [rdi + 0x28]
14003c430 mov rbx, qword ptr [rdi + 0x1f8]
14003c437 mov rsi, qword ptr [rdi + 0x1e8]
14003c43e movzx ebp, byte ptr [rdi + 0x200]
14003c445 mov r14, qword ptr [rdi + 0x30]
14003c449 mov r9, qword ptr [rdi + 0x248]
14003c450 lea r8, [r11 + r11*8]
14003c454 movzx ecx, byte ptr [rdi + 0x280]
14003c45b mov rax, r9
14003c45e imul rcx, rbx
14003c462 xor rcx, rsi
14003c465 xor rcx, r8
14003c468 xor rax, rcx
14003c46b sub r9, rcx
14003c46e test bpl, bpl
14003c471 cmove r9, rax
14003c475 imul r10, r12
14003c479 add r10, r13
14003c47c mov rax, r10
14003c47f shr rax, 0x1b
14003c483 movzx edx, al
14003c486 mov byte ptr [rdi + 0x280], dl
14003c48c imul rdx, rbx
14003c490 xor rdx, rsi
14003c493 xor rdx, r8
14003c496 mov r8d, 0x6de8
14003c49c mov rcx, rdx
14003c49f xor rcx, r9
14003c4a2 test bpl, bpl
14003c4a5 lea rax, [rdx + r9]
14003c4a9 cmove rax, rcx
14003c4ad mov qword ptr [rdi + 0x248], rax
14003c4b4 lea rax, [r14 + 2]
14003c4b8 mov qword ptr [rdi + 0x30], rax
14003c4bc lea rax, [r11 + r11*4]
14003c4c0 add rax, rax
14003c4c3 imul r10, r12
14003c4c7 add r10, r13
14003c4ca mov qword ptr [rdi + 0x28], r10
14003c4ce shr r10, 0x1b
14003c4d2 movzx edx, r10b
14003c4d6 mov byte ptr [rdi + 0x281], dl
14003c4dc imul rdx, rbx
14003c4e0 xor rdx, rax
14003c4e3 xor rdx, rsi
14003c4e6 mov rcx, rdx
14003c4e9 xor rcx, r9
14003c4ec test bpl, bpl
14003c4ef lea rax, [rdx + r9]
14003c4f3 cmove rax, rcx
14003c4f7 mov rcx, rdi
14003c4fa mov qword ptr [rdi + 0x250], rax
14003c501 movzx edx, byte ptr [rdi + 0xf09]
14003c508 xor rdx, qword ptr [rdi + 0xce0]
14003c50f call 0x140006770
14003c514 mov r8, qword ptr [rdi + 0xce0]
14003c51b movabs rbx, 0xff51afd7ed558ccd
14003c525 mov rax, r8
14003c528 xor rax, qword ptr [rdi + 0xd8]
14003c52f mov rcx, rax
14003c532 shr rcx, 0x21
14003c536 xor rcx, rax
14003c539 imul rcx, rbx
14003c53d movabs rbx, 0xc4ceb9fe1a85ec53
14003c547 mov rax, rcx
14003c54a shr rax, 0x21
14003c54e xor rax, rcx
14003c551 imul rax, rbx
14003c555 mov rdx, rax
14003c558 shr rdx, 0x21
14003c55c xor edx, eax
14003c55e lea eax, [rdx + 1]
14003c561 mov ecx, eax
14003c563 xor eax, edx
14003c565 imul ecx, edx
14003c568 not ecx
14003c56a and ecx, eax
14003c56c test cl, 1
14003c56f je 0x14003c5cd
14003c571 and r8b, 3
14003c575 cmp r8b, 1
14003c579 jne 0x14003c5cd
14003c57b mov rax, qword ptr [rdi + 0x28]
14003c57f inc qword ptr [rdi + 0x30]
14003c583 imul rax, r12
14003c587 add rax, r13
14003c58a mov qword ptr [rdi + 0x28], rax
14003c58e shr rax, 0x1b
14003c592 movzx eax, al
14003c595 mov byte ptr [rdi + 0x278], al
14003c59b imul rax, qword ptr [rdi + 0x1f8]
14003c5a3 xor rax, qword ptr [rdi + 0x1e8]
14003c5aa xor rax, qword ptr [rdi + 0x1f0]
14003c5b1 mov rcx, rax
14003c5b4 add rax, 0x2a2769
14003c5ba xor rcx, 0x2a2769
14003c5c1 cmp byte ptr [rdi + 0x200], 0
14003c5c8 jmp 0x14003cc60
14003c5cd mov rbx, qword ptr [rdi + 0x210]
14003c5d4 movzx ecx, byte ptr [rdi + 0x279]
14003c5db mov r10, qword ptr [rdi + 0x1f8]
14003c5e2 mov r11, qword ptr [rdi + 0x1e8]
14003c5e9 movzx esi, byte ptr [rdi + 0x200]
14003c5f0 mov r9, qword ptr [rdi + 0x28]
14003c5f4 mov r14, qword ptr [rdi + 0x1f0]
14003c5fb mov rbp, qword ptr [rdi + 0x30]
14003c5ff imul rcx, r10
14003c603 lea r8, [r14 + r14]
14003c607 xor rcx, r8
14003c60a xor rcx, r11
14003c60d mov rax, rcx
14003c610 xor rax, rbx
14003c613 sub rbx, rcx
14003c616 test sil, sil
14003c619 cmove rbx, rax
14003c61d inc rbp
14003c620 imul r9, r12
14003c624 mov qword ptr [rdi + 0x30], rbp
14003c628 mov rcx, rbx
14003c62b add r9, r13
14003c62e mov qword ptr [rdi + 0x28], r9
14003c632 mov rax, r9
14003c635 shr rax, 0x1b
14003c639 movzx edx, al
14003c63c mov byte ptr [rdi + 0x279], dl
14003c642 imul rdx, r10
14003c646 xor rdx, r8
14003c649 xor rdx, r11
14003c64c xor rcx, rdx
14003c64f test sil, sil
14003c652 lea rax, [rbx + rdx]
14003c656 cmove rax, rcx
14003c65a mov qword ptr [rdi + 0x210], rax
14003c661 cmp ebx, dword ptr [rdi + 0x1b8]
14003c667 jb 0x14003c6ac
14003c669 imul r9, r12
14003c66d lea rax, [rbp + 1]
14003c671 mov qword ptr [rdi + 0x30], rax
14003c675 add r9, r13
14003c678 mov qword ptr [rdi + 0x28], r9
14003c67c shr r9, 0x1b
14003c680 movzx eax, r9b
14003c684 mov byte ptr [rdi + 0x278], al
14003c68a imul rax, r10
14003c68e xor rax, r11
14003c691 xor rax, r14
14003c694 mov rcx, rax
14003c697 add rax, 0x2a669
14003c69d xor rcx, 0x2a669
14003c6a4 test sil, sil
14003c6a7 jmp 0x14003cc60
14003c6ac mov edx, ebx
14003c6ae mov rcx, rdi
14003c6b1 call 0x140007bf0
14003c6b6 movsxd rcx, dword ptr [rdi + 0x154]
14003c6bd movabs r8, 0xd6e8feb86659fd93
14003c6c7 mov rdx, qword ptr [rdi + 0xd8]
14003c6ce movabs r11, 0xff51afd7ed558ccd
14003c6d8 imul rcx, r12
14003c6dc rol rdx, 0x11
14003c6e0 movabs rsi, 0xc4ceb9fe1a85ec53
14003c6ea xor rcx, qword ptr [rdi + 0x688]
14003c6f1 mov eax, ebx
14003c6f3 imul rax, r8
14003c6f7 mov ebp, ebx
14003c6f9 xor rax, rcx
14003c6fc xor rax, rdx
14003c6ff mov rcx, rax
14003c702 shr rcx, 0x21
14003c706 xor rcx, rax
14003c709 imul rcx, r11
14003c70d mov rdx, rcx
14003c710 shr rdx, 0x21
14003c714 xor rdx, rcx
14003c717 imul rdx, rsi
14003c71b mov rax, rdx
14003c71e shr rax, 0x21
14003c722 xor rax, rdx
14003c725 mov r10, rax
14003c728 shr r10, 0x1d
14003c72c xor r10, rax
14003c72f or r10, 1
14003c733 mov rax, r10
14003c736 mov qword ptr [rdi + 0x688], r10
14003c73d and eax, 0x3ff
14003c742 cmp rax, 0x2c5
14003c748 jne 0x14003c763
14003c74a mov rcx, rdi
14003c74d call 0x14003ebe0
14003c752 mov r10, qword ptr [rdi + 0x688]
14003c759 movabs r11, 0xff51afd7ed558ccd
14003c763 movzx eax, r10b
14003c767 and al, 0x1f
14003c769 cmp al, 0x15
14003c76b jne 0x14003c85c
14003c771 movsxd rcx, dword ptr [rdi + 0x154]
14003c778 mov rax, qword ptr [rdi + 0xd8]
14003c77f xor rcx, 0x5a5a
14003c786 rol rax, 0x11
14003c78a imul rcx, r12
14003c78e xor rcx, r10
14003c791 xor rcx, rax
14003c794 movabs rax, 0x8f70feda99a6026d
14003c79e xor rcx, rax
14003c7a1 mov rax, rcx
14003c7a4 shr rax, 0x21
14003c7a8 xor rax, rcx
14003c7ab imul rax, r11
14003c7af mov rcx, rax
14003c7b2 shr rcx, 0x21
14003c7b6 xor rcx, rax
14003c7b9 imul rcx, rsi
14003c7bd mov rax, rcx
14003c7c0 shr rax, 0x21
14003c7c4 xor rax, rcx
14003c7c7 mov r9, rax
14003c7ca shr r9, 0x1d
14003c7ce xor r9, rax
14003c7d1 or r9, 1
14003c7d5 mov rax, r9
14003c7d8 mov rcx, r9
14003c7db shr rax, 8
14003c7df and eax, 3
14003c7e2 shr rcx, 0x28
14003c7e6 imul r8, rax, 0x3e
14003c7ea mov eax, 0x8421085
14003c7ef mul ecx
14003c7f1 mov eax, ecx
14003c7f3 sub eax, edx
14003c7f5 shr eax, 1
14003c7f7 add eax, edx
14003c7f9 shr eax, 5
14003c7fc imul eax, eax, 0x3e
14003c7ff sub ecx, eax
14003c801 mov eax, ecx
14003c803 add r8, rax
14003c806 mov rax, qword ptr [rdi + 0xf40]
14003c80d movsxd rcx, dword ptr [rax + r8*4]
14003c811 movsxd rax, dword ptr [rdi + 0xf50]
14003c818 xor rcx, rax
14003c81b add rcx, qword ptr [rdi + 0xf48]
14003c822 xor rcx, r9
14003c825 mov rax, rcx
14003c828 shr rax, 0x21
14003c82c xor rax, rcx
14003c82f imul rax, r11
14003c833 mov rcx, rax
14003c836 shr rcx, 0x21
14003c83a xor rcx, rax
14003c83d imul rcx, rsi
14003c841 mov rax, rcx
14003c844 shr rax, 0x21
14003c848 xor rax, r10
14003c84b xor rax, rcx
14003c84e inc qword ptr [rdi + 0x690]
14003c855 mov qword ptr [rdi + 0x688], rax
14003c85c inc dword ptr [rdi + 0x1194]
14003c862 mov eax, dword ptr [rdi + 0x1194]
14003c868 cmp eax, dword ptr [rdi + 0x1190]
14003c86e jb 0x14003c882
14003c870 mov rcx, rdi
14003c873 mov dword ptr [rdi + 0x1194], 0
14003c87d call 0x140004930
14003c882 mov r8d, ebx
14003c885 mov edx, ebx
14003c887 mov rcx, rdi
14003c88a call 0x1400058a0
14003c88f inc qword ptr [rdi + 0x30]
14003c893 mov r9, qword ptr [rdi + 0x28]
14003c897 imul r9, r12
14003c89b lea r12d, [rbx + 1]
14003c89f movabs rbx, 0xff51afd7ed558ccd
14003c8a9 add r9, r13
14003c8ac mov r13, qword ptr [rdi + 0x30]
14003c8b0 mov qword ptr [rdi + 0x28], r9
14003c8b4 mov rax, r9
14003c8b7 shr rax, 0x1b
14003c8bb movzx edx, al
14003c8be mov byte ptr [rdi + 0x280], dl
14003c8c4 mov r11, qword ptr [rdi + 0x1f8]
14003c8cb mov r10, qword ptr [rdi + 0x1f0]
14003c8d2 mov rsi, qword ptr [rdi + 0x1e8]
14003c8d9 movzx r14d, byte ptr [rdi + 0x200]
14003c8e1 imul rdx, r11
14003c8e5 lea rax, [r10 + r10*8]
14003c8e9 xor rdx, rax
14003c8ec xor rdx, rsi
14003c8ef mov rcx, rdx
14003c8f2 xor rcx, rbp
14003c8f5 test r14b, r14b
14003c8f8 lea rax, [rdx + rbp]
14003c8fc cmove rax, rcx
14003c900 inc r13
14003c903 mov qword ptr [rdi + 0x248], rax
14003c90a mov rcx, qword ptr [rdi + 0x1b0]
14003c911 mov rax, qword ptr [rdi + 0xa8]
14003c918 movzx r8d, byte ptr [rcx + rbp]
14003c91d mov ecx, r12d
14003c920 xor r8b, byte ptr [rax + rbp]
14003c924 movabs rax, 0x9e3779b97f4a7c15
14003c92e imul r9, rax
14003c932 movabs rax, 0x2545f4914f6cdd1d
14003c93c mov qword ptr [rdi + 0x30], r13
14003c940 add r9, rax
14003c943 mov rax, r9
14003c946 shr rax, 0x1b
14003c94a movzx edx, al
14003c94d lea rax, [r10 + r10]
14003c951 mov byte ptr [rdi + 0x279], dl
14003c957 imul rdx, r11
14003c95b xor rdx, rax
14003c95e xor rdx, rsi
14003c961 xor rcx, rdx
14003c964 test r14b, r14b
14003c967 lea rax, [r12 + rdx]
14003c96b cmove rax, rcx
14003c96f mov qword ptr [rdi + 0x210], rax
14003c976 movsxd rdx, dword ptr [rdi + 0x154]
14003c97d mov rcx, rdx
14003c980 xor rcx, qword ptr [rdi + 0xce8]
14003c987 xor rcx, r12
14003c98a xor rcx, qword ptr [rdi + 0xce0]
14003c991 xor rcx, qword ptr [rdi + 0xd8]
14003c998 mov rax, rcx
14003c99b shr rax, 0x21
14003c99f xor rax, rcx
14003c9a2 imul rax, rbx
14003c9a6 movabs rbx, 0xc4ceb9fe1a85ec53
14003c9b0 mov rcx, rax
14003c9b3 shr rcx, 0x21
14003c9b7 xor rcx, rax
14003c9ba movzx eax, r8b
14003c9be imul rcx, rbx
14003c9c2 xor rax, 0x33
14003c9c6 mov rbx, rcx
14003c9c9 shr rbx, 0x21
14003c9cd xor rbx, rcx
14003c9d0 lea rcx, [rip - 0x3c9d7]
14003c9d7 movzx ebp, byte ptr [rax + rcx + 0x3dfcb0]
14003c9df xor bpl, 0xeb
14003c9e3 mov qword ptr [rdi + 0xe0], rbx
14003c9ea inc edx
14003c9ec mov dword ptr [rdi + 0x154], edx
14003c9f2 test dl, 0x1f
14003c9f5 jne 0x14003ca49
14003c9f7 movsxd rax, edx
14003c9fa xor rax, qword ptr [rdi + 0xce0]
14003ca01 xor rax, qword ptr [rdi + 0xd8]
14003ca08 mov rcx, rax
14003ca0b shr rcx, 0x21
14003ca0f xor rcx, rax
14003ca12 movabs rax, 0xff51afd7ed558ccd
14003ca1c imul rcx, rax
14003ca20 movabs rax, 0xc4ceb9fe1a85ec53
14003ca2a mov rdx, rcx
14003ca2d shr rdx, 0x21
14003ca31 xor rdx, rcx
14003ca34 imul rdx, rax
14003ca38 mov rax, rdx
14003ca3b shr rax, 0x21
14003ca3f xor rax, rdx
14003ca42 mov qword ptr [rdi + 0xce0], rax
14003ca49 movzx r8d, bpl
14003ca4d mov eax, r8d
14003ca50 mov byte ptr [rdi + 0xf09], bpl
14003ca57 xor rax, r12
14003ca5a movabs r12, 0x9e3779b97f4a7c15
14003ca64 xor rax, qword ptr [rdi + 0xd8]
14003ca6b mov rcx, rax
14003ca6e shr rcx, 0x21
14003ca72 xor rcx, rax
14003ca75 movabs rax, 0xff51afd7ed558ccd
14003ca7f imul rcx, rax
14003ca83 imul r8, r12
14003ca87 imul r9, r12
14003ca8b mov rdx, rcx
14003ca8e movabs rax, 0xc4ceb9fe1a85ec53
14003ca98 shr rdx, 0x21
14003ca9c xor rdx, rcx
14003ca9f mov ecx, dword ptr [rdi + 0xc]
14003caa2 imul rdx, rax
14003caa6 mov rax, rdx
14003caa9 shr rax, 0x21
14003caad xor rax, rdx
14003cab0 mov qword ptr [rdi + 0xd8], rax
14003cab7 movabs rax, 0xd6e8feb86659fd93
14003cac1 imul rcx, rax
14003cac5 xor rcx, r8
14003cac8 xor rcx, rbx
14003cacb movabs rbx, 0xff51afd7ed558ccd
14003cad5 mov rax, rcx
14003cad8 shr rax, 0x21
14003cadc xor rax, rcx
14003cadf imul rax, rbx
14003cae3 movabs rbx, 0x2545f4914f6cdd1d
14003caed mov rdx, rax
14003caf0 add r9, rbx
14003caf3 shr rdx, 0x21
14003caf7 xor rdx, rax
14003cafa movabs rax, 0xc4ceb9fe1a85ec53
14003cb04 imul rdx, rax
14003cb08 lea rax, [r13 + 1]
14003cb0c shr rdx, 0x21
14003cb10 and edx, 3
14003cb13 mov qword ptr [rdi + 0x30], rax
14003cb17 cmp bpl, 0x3e
14003cb1b jae 0x14003cbb1
14003cb21 inc qword ptr [rdi + 0x80]
14003cb28 lea rax, [rip - 0x3cb2f]
14003cb2f mov r8d, dword ptr [rax + rdx*4 + 0x3df8f0]
14003cb37 mov qword ptr [rdi + 0x28], r9
14003cb3b shr r9, 0x1b
14003cb3f movzx eax, r9b
14003cb43 mov byte ptr [rdi + 0x278], al
14003cb49 imul rax, r11
14003cb4d mov ebx, edx
14003cb4f xor rax, r10
14003cb52 xor rax, rsi
14003cb55 mov rcx, rax
14003cb58 add rax, r8
14003cb5b xor rcx, r8
14003cb5e movzx r8d, bpl
14003cb62 test r14b, r14b
14003cb65 cmove rax, rcx
14003cb69 mov rcx, rdi
14003cb6c mov qword ptr [rdi + 0x208], rax
14003cb73 call 0x1400074d0
14003cb78 mov r8, qword ptr [rsp + 0x70]
14003cb7d lea edx, [r15 - 1]
14003cb81 mov eax, eax
14003cb83 imul rcx, rbx, 0x3e
14003cb87 add rcx, rax
14003cb8a mov rax, qword ptr [rdi + 0xf40]
14003cb91 movsxd r9, dword ptr [rax + rcx*4]
14003cb95 mov rcx, rdi
14003cb98 movsxd rax, dword ptr [rdi + 0xf50]
14003cb9f xor r9, rax
14003cba2 add r9, qword ptr [rdi + 0xf48]
14003cba9 call r9
14003cbac jmp 0x14003cc6b
14003cbb1 inc dword ptr [rdi + 0x88]
14003cbb7 mov rax, r9
14003cbba shr rax, 0x1b
14003cbbe movzx ecx, al
14003cbc1 lea rax, [r10*4]
14003cbc9 mov byte ptr [rdi + 0x27b], cl
14003cbcf imul rcx, r11
14003cbd3 imul r9, r12
14003cbd7 xor rcx, rax
14003cbda xor rcx, rsi
14003cbdd mov qword ptr [rdi + 0x220], rcx
14003cbe4 mov r8, qword ptr [rdi + 0x30]
14003cbe8 add r9, rbx
14003cbeb mov rax, r9
14003cbee shr rax, 0x1b
14003cbf2 movzx edx, al
14003cbf5 mov byte ptr [rdi + 0x282], dl
14003cbfb imul rax, r10, 0xb
14003cbff imul rdx, r11
14003cc03 xor rdx, rax
14003cc06 xor rdx, rsi
14003cc09 mov rcx, rdx
14003cc0c xor rcx, 1
14003cc10 test r14b, r14b
14003cc13 lea rax, [rdx + 1]
14003cc17 cmove rax, rcx
14003cc1b mov qword ptr [rdi + 0x258], rax
14003cc22 lea rax, [r8 + 2]
14003cc26 mov qword ptr [rdi + 0x30], rax
14003cc2a imul r9, r12
14003cc2e add r9, rbx
14003cc31 mov qword ptr [rdi + 0x28], r9
14003cc35 shr r9, 0x1b
14003cc39 movzx eax, r9b
14003cc3d mov byte ptr [rdi + 0x278], al
14003cc43 imul rax, r11
14003cc47 xor rax, rsi
14003cc4a xor rax, r10
14003cc4d mov rcx, rax
14003cc50 add rax, 0x2a669
14003cc56 xor rcx, 0x2a669
14003cc5d test r14b, r14b
14003cc60 cmove rax, rcx
14003cc64 mov qword ptr [rdi + 0x208], rax
14003cc6b mov r13, qword ptr [rsp + 0x28]
14003cc70 mov r12, qword ptr [rsp + 0x30]
14003cc75 mov rsi, qword ptr [rsp + 0x38]
14003cc7a mov rbp, qword ptr [rsp + 0x68]
14003cc7f mov r14, qword ptr [rsp + 0x20]
14003cc84 add rsp, 0x40
14003cc88 pop r15
14003cc8a pop rdi
14003cc8b pop rbx
14003cc8c ret 
14003cc8d mov edx, 0x54485254
14003cc92 mov rcx, rdi
14003cc95 call 0x1400029a0
14003cc9a int3 
14003cc9b mov edx, 0x43414e59
14003cca0 mov rcx, rdi
14003cca3 call 0x1400029a0
14003cca8 int3 
