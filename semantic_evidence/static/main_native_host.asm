0000000140396990 488bc4                   mov rax, rsp
0000000140396993 48895810                 mov qword ptr [rax + 0x10], rbx
0000000140396997 48897018                 mov qword ptr [rax + 0x18], rsi
000000014039699b 48897820                 mov qword ptr [rax + 0x20], rdi
000000014039699f 55                       push rbp
00000001403969a0 4154                     push r12
00000001403969a2 4155                     push r13
00000001403969a4 4156                     push r14
00000001403969a6 4157                     push r15
00000001403969a8 488da808ffffff           lea rbp, [rax - 0xf8]
00000001403969af 4881ecd0010000           sub rsp, 0x1d0
00000001403969b6 0f2970c8                 movaps xmmword ptr [rax - 0x38], xmm6
00000001403969ba 0f2978b8                 movaps xmmword ptr [rax - 0x48], xmm7
00000001403969be 488b055b660700           mov rax, qword ptr [rip + 0x7665b]
00000001403969c5 4833c4                   xor rax, rsp
00000001403969c8 488985a0000000           mov qword ptr [rbp + 0xa0], rax
00000001403969cf 488bf9                   mov rdi, rcx
00000001403969d2 83fa17                   cmp edx, 0x17
00000001403969d5 0f8754090000             ja 0x14039732f
00000001403969db 8bc2                     mov eax, edx
00000001403969dd 488d151c96c6ff           lea rdx, [rip - 0x3969e4]
00000001403969e4 8b8c8280733900           mov ecx, dword ptr [rdx + rax*4 + 0x397380]
00000001403969eb 4803ca                   add rcx, rdx
00000001403969ee ffe1                     jmp rcx
00000001403969f0 488b37                   mov rsi, qword ptr [rdi]
00000001403969f3 33c9                     xor ecx, ecx
00000001403969f5 e8469efeff               call 0x140380840
00000001403969fa 4c8bf0                   mov r14, rax
00000001403969fd 807e2000                 cmp byte ptr [rsi + 0x20], 0
0000000140396a01 740c                     je 0x140396a0f
0000000140396a03 488bce                   mov rcx, rsi
0000000140396a06 e8b52d0000               call 0x1403997c0
0000000140396a0b c6462000                 mov byte ptr [rsi + 0x20], 0
0000000140396a0f 33db                     xor ebx, ebx
0000000140396a11 48891e                   mov qword ptr [rsi], rbx
0000000140396a14 48895e10                 mov qword ptr [rsi + 0x10], rbx
0000000140396a18 bf0f000000               mov edi, 0xf
0000000140396a1d 48897e18                 mov qword ptr [rsi + 0x18], rdi
0000000140396a21 48c7c3ffffffff           mov rbx, 0xffffffffffffffff
0000000140396a28 0f1f840000000000         nop dword ptr [rax + rax]
0000000140396a30 48ffc3                   inc rbx
0000000140396a33 41803c1e00               cmp byte ptr [r14 + rbx], 0
0000000140396a38 75f6                     jne 0x140396a30
0000000140396a3a 4c8bc3                   mov r8, rbx
0000000140396a3d 498bd6                   mov rdx, r14
0000000140396a40 488bce                   mov rcx, rsi
0000000140396a43 e8482f0000               call 0x140399990
0000000140396a48 c6462001                 mov byte ptr [rsi + 0x20], 1
0000000140396a4c e9de080000               jmp 0x14039732f
0000000140396a51 b901000000               mov ecx, 1
0000000140396a56 e9c0080000               jmp 0x14039731b
0000000140396a5b b902000000               mov ecx, 2
0000000140396a60 e9b6080000               jmp 0x14039731b
0000000140396a65 b903000000               mov ecx, 3
0000000140396a6a e9ac080000               jmp 0x14039731b
0000000140396a6f b904000000               mov ecx, 4
0000000140396a74 e9a2080000               jmp 0x14039731b
0000000140396a79 488b5f08                 mov rbx, qword ptr [rdi + 8]
0000000140396a7d 488b05ec900800           mov rax, qword ptr [rip + 0x890ec]
0000000140396a84 48634804                 movsxd rcx, dword ptr [rax + 4]
0000000140396a88 488d3de1900800           lea rdi, [rip + 0x890e1]
0000000140396a8f 4803cf                   add rcx, rdi
0000000140396a92 b20a                     mov dl, 0xa
0000000140396a94 e897410000               call 0x14039ac30
0000000140396a99 440fb6c0                 movzx r8d, al
0000000140396a9d 488bd3                   mov rdx, rbx
0000000140396aa0 488bcf                   mov rcx, rdi
0000000140396aa3 e878520000               call 0x14039bd20
0000000140396aa8 e982080000               jmp 0x14039732f
0000000140396aad b905000000               mov ecx, 5
0000000140396ab2 e964080000               jmp 0x14039731b
0000000140396ab7 488b5f10                 mov rbx, qword ptr [rdi + 0x10]
0000000140396abb ebc0                     jmp 0x140396a7d
0000000140396abd 488b1f                   mov rbx, qword ptr [rdi]
0000000140396ac0 488b5708                 mov rdx, qword ptr [rdi + 8]
0000000140396ac4 488d4dc0                 lea rcx, [rbp - 0x40]
0000000140396ac8 e8f3c6eeff               call 0x1402831c0
0000000140396acd 488b4b10                 mov rcx, qword ptr [rbx + 0x10]
0000000140396ad1 48837b1810               cmp qword ptr [rbx + 0x18], 0x10
0000000140396ad6 7203                     jb 0x140396adb
0000000140396ad8 488b1b                   mov rbx, qword ptr [rbx]
0000000140396adb 4c8b4010                 mov r8, qword ptr [rax + 0x10]
0000000140396adf 4883781810               cmp qword ptr [rax + 0x18], 0x10
0000000140396ae4 7203                     jb 0x140396ae9
0000000140396ae6 488b00                   mov rax, qword ptr [rax]
0000000140396ae9 4c3bc1                   cmp r8, rcx
0000000140396aec 7521                     jne 0x140396b0f
0000000140396aee 488bd3                   mov rdx, rbx
0000000140396af1 488bc8                   mov rcx, rax
0000000140396af4 e8e7fd0000               call 0x1403a68e0
0000000140396af9 85c0                     test eax, eax
0000000140396afb 7512                     jne 0x140396b0f
0000000140396afd 33db                     xor ebx, ebx
0000000140396aff 488d4dc0                 lea rcx, [rbp - 0x40]
0000000140396b03 e8b82c0000               call 0x1403997c0
0000000140396b08 8bc3                     mov eax, ebx
0000000140396b0a e922080000               jmp 0x140397331
0000000140396b0f bb01000000               mov ebx, 1
0000000140396b14 488d4dc0                 lea rcx, [rbp - 0x40]
0000000140396b18 e8a32c0000               call 0x1403997c0
0000000140396b1d 8bc3                     mov eax, ebx
0000000140396b1f e90d080000               jmp 0x140397331
0000000140396b24 b906000000               mov ecx, 6
0000000140396b29 e9ed070000               jmp 0x14039731b
0000000140396b2e 488b5f18                 mov rbx, qword ptr [rdi + 0x18]
0000000140396b32 488b4708                 mov rax, qword ptr [rdi + 8]
0000000140396b36 0f57c0                   xorps xmm0, xmm0
0000000140396b39 0f114520                 movups xmmword ptr [rbp + 0x20], xmm0
0000000140396b3d 0f114530                 movups xmmword ptr [rbp + 0x30], xmm0
0000000140396b41 0f114540                 movups xmmword ptr [rbp + 0x40], xmm0
0000000140396b45 0f114550                 movups xmmword ptr [rbp + 0x50], xmm0
0000000140396b49 0f114560                 movups xmmword ptr [rbp + 0x60], xmm0
0000000140396b4d 0f114570                 movups xmmword ptr [rbp + 0x70], xmm0
0000000140396b51 0f118580000000           movups xmmword ptr [rbp + 0x80], xmm0
0000000140396b58 0f118590000000           movups xmmword ptr [rbp + 0x90], xmm0
0000000140396b5f c645e000                 mov byte ptr [rbp - 0x20], 0
0000000140396b63 c644245000               mov byte ptr [rsp + 0x50], 0
0000000140396b68 488d4c2430               lea rcx, [rsp + 0x30]
0000000140396b6d 48894da0                 mov qword ptr [rbp - 0x60], rcx
0000000140396b71 488945a8                 mov qword ptr [rbp - 0x58], rax
0000000140396b75 488d442420               lea rax, [rsp + 0x20]
0000000140396b7a 488945b0                 mov qword ptr [rbp - 0x50], rax
0000000140396b7e 488d45c0                 lea rax, [rbp - 0x40]
0000000140396b82 488945b8                 mov qword ptr [rbp - 0x48], rax
0000000140396b86 488d05cbac0500           lea rax, [rip + 0x5accb]
0000000140396b8d 4889442458               mov qword ptr [rsp + 0x58], rax
0000000140396b92 0f2845a0                 movaps xmm0, xmmword ptr [rbp - 0x60]
0000000140396b96 0f11442460               movups xmmword ptr [rsp + 0x60], xmm0
0000000140396b9b 0f284db0                 movaps xmm1, xmmword ptr [rbp - 0x50]
0000000140396b9f 0f114c2470               movups xmmword ptr [rsp + 0x70], xmm1
0000000140396ba4 488d442458               lea rax, [rsp + 0x58]
0000000140396ba9 48894590                 mov qword ptr [rbp - 0x70], rax
0000000140396bad 4c8d442458               lea r8, [rsp + 0x58]
0000000140396bb2 ba10000000               mov edx, 0x10
0000000140396bb7 488d4d20                 lea rcx, [rbp + 0x20]
0000000140396bbb e88089caff               call 0x14003f540
0000000140396bc0 0f1075c0                 movups xmm6, xmmword ptr [rbp - 0x40]
0000000140396bc4 0f1175f0                 movups xmmword ptr [rbp - 0x10], xmm6
0000000140396bc8 0f107dd0                 movups xmm7, xmmword ptr [rbp - 0x30]
0000000140396bcc 660f6f051cb00500         movdqa xmm0, xmmword ptr [rip + 0x5b01c]
0000000140396bd4 f30f7f45d0               movdqu xmmword ptr [rbp - 0x30], xmm0
0000000140396bd9 c645c000                 mov byte ptr [rbp - 0x40], 0
0000000140396bdd 807c245000               cmp byte ptr [rsp + 0x50], 0
0000000140396be2 740b                     je 0x140396bef
0000000140396be4 488d4c2430               lea rcx, [rsp + 0x30]
0000000140396be9 e8d22b0000               call 0x1403997c0
0000000140396bee 90                       nop
0000000140396bef 807de000                 cmp byte ptr [rbp - 0x20], 0
0000000140396bf3 7409                     je 0x140396bfe
0000000140396bf5 488d4dc0                 lea rcx, [rbp - 0x40]
0000000140396bf9 e8c22b0000               call 0x1403997c0
0000000140396bfe 807b2000                 cmp byte ptr [rbx + 0x20], 0
0000000140396c02 7408                     je 0x140396c0c
0000000140396c04 488bcb                   mov rcx, rbx
0000000140396c07 e8b42b0000               call 0x1403997c0
0000000140396c0c 0f1133                   movups xmmword ptr [rbx], xmm6
0000000140396c0f 0f117b10                 movups xmmword ptr [rbx + 0x10], xmm7
0000000140396c13 660f6f05d5af0500         movdqa xmm0, xmmword ptr [rip + 0x5afd5]
0000000140396c1b f30f7f4500               movdqu xmmword ptr [rbp], xmm0
0000000140396c20 c645f000                 mov byte ptr [rbp - 0x10], 0
0000000140396c24 c6432001                 mov byte ptr [rbx + 0x20], 1
0000000140396c28 488d4df0                 lea rcx, [rbp - 0x10]
0000000140396c2c e88f2b0000               call 0x1403997c0
0000000140396c31 e9f9060000               jmp 0x14039732f
0000000140396c36 488b7720                 mov rsi, qword ptr [rdi + 0x20]
0000000140396c3a 488b7f10                 mov rdi, qword ptr [rdi + 0x10]
0000000140396c3e b907000000               mov ecx, 7
0000000140396c43 e8f89bfeff               call 0x140380840
0000000140396c48 33db                     xor ebx, ebx
0000000140396c4a 48895df0                 mov qword ptr [rbp - 0x10], rbx
0000000140396c4e 660f6f059aaf0500         movdqa xmm0, xmmword ptr [rip + 0x5af9a]
0000000140396c56 f30f7f4500               movdqu xmmword ptr [rbp], xmm0
0000000140396c5b 885df0                   mov byte ptr [rbp - 0x10], bl
0000000140396c5e 48c7c3ffffffff           mov rbx, 0xffffffffffffffff
0000000140396c65 48ffc3                   inc rbx
0000000140396c68 803c1800                 cmp byte ptr [rax + rbx], 0
0000000140396c6c 75f7                     jne 0x140396c65
0000000140396c6e 4c8bc3                   mov r8, rbx
0000000140396c71 488bd0                   mov rdx, rax
0000000140396c74 488d4df0                 lea rcx, [rbp - 0x10]
0000000140396c78 e8132d0000               call 0x140399990
0000000140396c7d 90                       nop
0000000140396c7e 0f57c0                   xorps xmm0, xmm0
0000000140396c81 0f114520                 movups xmmword ptr [rbp + 0x20], xmm0
0000000140396c85 0f114530                 movups xmmword ptr [rbp + 0x30], xmm0
0000000140396c89 0f114540                 movups xmmword ptr [rbp + 0x40], xmm0
0000000140396c8d 0f114550                 movups xmmword ptr [rbp + 0x50], xmm0
0000000140396c91 0f114560                 movups xmmword ptr [rbp + 0x60], xmm0
0000000140396c95 0f114570                 movups xmmword ptr [rbp + 0x70], xmm0
0000000140396c99 0f118580000000           movups xmmword ptr [rbp + 0x80], xmm0
0000000140396ca0 0f118590000000           movups xmmword ptr [rbp + 0x90], xmm0
0000000140396ca7 c645e000                 mov byte ptr [rbp - 0x20], 0
0000000140396cab c644245000               mov byte ptr [rsp + 0x50], 0
0000000140396cb0 488d442430               lea rax, [rsp + 0x30]
0000000140396cb5 488945a0                 mov qword ptr [rbp - 0x60], rax
0000000140396cb9 48897da8                 mov qword ptr [rbp - 0x58], rdi
0000000140396cbd 488d45f0                 lea rax, [rbp - 0x10]
0000000140396cc1 488945b0                 mov qword ptr [rbp - 0x50], rax
0000000140396cc5 488d45c0                 lea rax, [rbp - 0x40]
0000000140396cc9 488945b8                 mov qword ptr [rbp - 0x48], rax
0000000140396ccd 488d051cad0500           lea rax, [rip + 0x5ad1c]
0000000140396cd4 4889442458               mov qword ptr [rsp + 0x58], rax
0000000140396cd9 0f2845a0                 movaps xmm0, xmmword ptr [rbp - 0x60]
0000000140396cdd 0f11442460               movups xmmword ptr [rsp + 0x60], xmm0
0000000140396ce2 0f284db0                 movaps xmm1, xmmword ptr [rbp - 0x50]
0000000140396ce6 0f114c2470               movups xmmword ptr [rsp + 0x70], xmm1
0000000140396ceb 488d442458               lea rax, [rsp + 0x58]
0000000140396cf0 48894590                 mov qword ptr [rbp - 0x70], rax
0000000140396cf4 4c8d442458               lea r8, [rsp + 0x58]
0000000140396cf9 ba10000000               mov edx, 0x10
0000000140396cfe 488d4d20                 lea rcx, [rbp + 0x20]
0000000140396d02 e859ddecff               call 0x140264a60
0000000140396d07 0f1075c0                 movups xmm6, xmmword ptr [rbp - 0x40]
0000000140396d0b 0f1175a0                 movups xmmword ptr [rbp - 0x60], xmm6
0000000140396d0f 0f107dd0                 movups xmm7, xmmword ptr [rbp - 0x30]
0000000140396d13 660f6f05d5ae0500         movdqa xmm0, xmmword ptr [rip + 0x5aed5]
0000000140396d1b f30f7f45d0               movdqu xmmword ptr [rbp - 0x30], xmm0
0000000140396d20 c645c000                 mov byte ptr [rbp - 0x40], 0
0000000140396d24 807c245000               cmp byte ptr [rsp + 0x50], 0
0000000140396d29 740b                     je 0x140396d36
0000000140396d2b 488d4c2430               lea rcx, [rsp + 0x30]
0000000140396d30 e88b2a0000               call 0x1403997c0
0000000140396d35 90                       nop
0000000140396d36 807de000                 cmp byte ptr [rbp - 0x20], 0
0000000140396d3a 7409                     je 0x140396d45
0000000140396d3c 488d4dc0                 lea rcx, [rbp - 0x40]
0000000140396d40 e87b2a0000               call 0x1403997c0
0000000140396d45 807e2000                 cmp byte ptr [rsi + 0x20], 0
0000000140396d49 7408                     je 0x140396d53
0000000140396d4b 488bce                   mov rcx, rsi
0000000140396d4e e86d2a0000               call 0x1403997c0
0000000140396d53 0f1136                   movups xmmword ptr [rsi], xmm6
0000000140396d56 0f117e10                 movups xmmword ptr [rsi + 0x10], xmm7
0000000140396d5a 660f6f058eae0500         movdqa xmm0, xmmword ptr [rip + 0x5ae8e]
0000000140396d62 f30f7f45b0               movdqu xmmword ptr [rbp - 0x50], xmm0
0000000140396d67 c645a000                 mov byte ptr [rbp - 0x60], 0
0000000140396d6b c6462001                 mov byte ptr [rsi + 0x20], 1
0000000140396d6f 488d4da0                 lea rcx, [rbp - 0x60]
0000000140396d73 e8482a0000               call 0x1403997c0
0000000140396d78 90                       nop
0000000140396d79 488d4df0                 lea rcx, [rbp - 0x10]
0000000140396d7d e83e2a0000               call 0x1403997c0
0000000140396d82 e9a8050000               jmp 0x14039732f
0000000140396d87 4c8b7728                 mov r14, qword ptr [rdi + 0x28]
0000000140396d8b 4c8b6720                 mov r12, qword ptr [rdi + 0x20]
0000000140396d8f 4c8b7f18                 mov r15, qword ptr [rdi + 0x18]
0000000140396d93 4d8b6f10                 mov r13, qword ptr [r15 + 0x10]
0000000140396d97 498b4c2410               mov rcx, qword ptr [r12 + 0x10]
0000000140396d9c 48894c2420               mov qword ptr [rsp + 0x20], rcx
0000000140396da1 48baffffffffffffff7f     movabs rdx, 0x7fffffffffffffff
0000000140396dab 488bc2                   mov rax, rdx
0000000140396dae 492bc5                   sub rax, r13
0000000140396db1 483bc1                   cmp rax, rcx
0000000140396db4 0f82bd050000             jb 0x140397377
0000000140396dba 49837f1810               cmp qword ptr [r15 + 0x18], 0x10
0000000140396dbf 7203                     jb 0x140396dc4
0000000140396dc1 4d8b3f                   mov r15, qword ptr [r15]
0000000140396dc4 49837c241810             cmp qword ptr [r12 + 0x18], 0x10
0000000140396dca 7204                     jb 0x140396dd0
0000000140396dcc 4d8b2424                 mov r12, qword ptr [r12]
0000000140396dd0 33db                     xor ebx, ebx
0000000140396dd2 48895da0                 mov qword ptr [rbp - 0x60], rbx
0000000140396dd6 4a8d0429                 lea rax, [rcx + r13]
0000000140396dda 4889442428               mov qword ptr [rsp + 0x28], rax
0000000140396ddf bf0f000000               mov edi, 0xf
0000000140396de4 488d75a0                 lea rsi, [rbp - 0x60]
0000000140396de8 483bc7                   cmp rax, rdi
0000000140396deb 0f8680000000             jbe 0x140396e71
0000000140396df1 488bf8                   mov rdi, rax
0000000140396df4 4883cf0f                 or rdi, 0xf
0000000140396df8 483bfa                   cmp rdi, rdx
0000000140396dfb 7631                     jbe 0x140396e2e
0000000140396dfd 488bfa                   mov rdi, rdx
0000000140396e00 48b82700000000000080     movabs rax, 0x8000000000000027
0000000140396e0a 488bc8                   mov rcx, rax
0000000140396e0d e86ed20000               call 0x1403a4080
0000000140396e12 4885c0                   test rax, rax
0000000140396e15 0f8450050000             je 0x14039736b
0000000140396e1b 488d7027                 lea rsi, [rax + 0x27]
0000000140396e1f 4883e6e0                 and rsi, 0xffffffffffffffe0
0000000140396e23 488946f8                 mov qword ptr [rsi - 8], rax
0000000140396e27 488b442428               mov rax, qword ptr [rsp + 0x28]
0000000140396e2c eb3f                     jmp 0x140396e6d
0000000140396e2e b916000000               mov ecx, 0x16
0000000140396e33 483bf9                   cmp rdi, rcx
0000000140396e36 480f42f9                 cmovb rdi, rcx
0000000140396e3a 488d4f01                 lea rcx, [rdi + 1]
0000000140396e3e 4881f900100000           cmp rcx, 0x1000
0000000140396e45 720f                     jb 0x140396e56
0000000140396e47 488d4127                 lea rax, [rcx + 0x27]
0000000140396e4b 483bc1                   cmp rax, rcx
0000000140396e4e 0f861d050000             jbe 0x140397371
0000000140396e54 ebb4                     jmp 0x140396e0a
0000000140396e56 4885c9                   test rcx, rcx
0000000140396e59 740f                     je 0x140396e6a
0000000140396e5b e820d20000               call 0x1403a4080
0000000140396e60 488bf0                   mov rsi, rax
0000000140396e63 488b442428               mov rax, qword ptr [rsp + 0x28]
0000000140396e68 eb03                     jmp 0x140396e6d
0000000140396e6a 488bf3                   mov rsi, rbx
0000000140396e6d 488975a0                 mov qword ptr [rbp - 0x60], rsi
0000000140396e71 488945b0                 mov qword ptr [rbp - 0x50], rax
0000000140396e75 48897db8                 mov qword ptr [rbp - 0x48], rdi
0000000140396e79 4d8bc5                   mov r8, r13
0000000140396e7c 498bd7                   mov rdx, r15
0000000140396e7f 488bce                   mov rcx, rsi
0000000140396e82 e8e9f10000               call 0x1403a6070
0000000140396e87 4a8d0c2e                 lea rcx, [rsi + r13]
0000000140396e8b 4c8b442420               mov r8, qword ptr [rsp + 0x20]
0000000140396e90 498bd4                   mov rdx, r12
0000000140396e93 e8d8f10000               call 0x1403a6070
0000000140396e98 488b442428               mov rax, qword ptr [rsp + 0x28]
0000000140396e9d 881c06                   mov byte ptr [rsi + rax], bl
0000000140396ea0 41385e20                 cmp byte ptr [r14 + 0x20], bl
0000000140396ea4 7408                     je 0x140396eae
0000000140396ea6 498bce                   mov rcx, r14
0000000140396ea9 e812290000               call 0x1403997c0
0000000140396eae 0f1045a0                 movups xmm0, xmmword ptr [rbp - 0x60]
0000000140396eb2 410f1106                 movups xmmword ptr [r14], xmm0
0000000140396eb6 0f104db0                 movups xmm1, xmmword ptr [rbp - 0x50]
0000000140396eba 410f114e10               movups xmmword ptr [r14 + 0x10], xmm1
0000000140396ebf 660f6f0529ad0500         movdqa xmm0, xmmword ptr [rip + 0x5ad29]
0000000140396ec7 f30f7f45b0               movdqu xmmword ptr [rbp - 0x50], xmm0
0000000140396ecc 885da0                   mov byte ptr [rbp - 0x60], bl
0000000140396ecf 41c6462001               mov byte ptr [r14 + 0x20], 1
0000000140396ed4 488d4da0                 lea rcx, [rbp - 0x60]
0000000140396ed8 e8e3280000               call 0x1403997c0
0000000140396edd e94d040000               jmp 0x14039732f
0000000140396ee2 488b7730                 mov rsi, qword ptr [rdi + 0x30]
0000000140396ee6 488b4f28                 mov rcx, qword ptr [rdi + 0x28]
0000000140396eea 33db                     xor ebx, ebx
0000000140396eec 48895da0                 mov qword ptr [rbp - 0x60], rbx
0000000140396ef0 660f6f05f8ac0500         movdqa xmm0, xmmword ptr [rip + 0x5acf8]
0000000140396ef8 f30f7f45b0               movdqu xmmword ptr [rbp - 0x50], xmm0
0000000140396efd ba18000000               mov edx, 0x18
0000000140396f02 48395110                 cmp qword ptr [rcx + 0x10], rdx
0000000140396f06 480f425110               cmovb rdx, qword ptr [rcx + 0x10]
0000000140396f0b 4883791810               cmp qword ptr [rcx + 0x18], 0x10
0000000140396f10 7203                     jb 0x140396f15
0000000140396f12 488b09                   mov rcx, qword ptr [rcx]
0000000140396f15 4c8bc2                   mov r8, rdx
0000000140396f18 488bd1                   mov rdx, rcx
0000000140396f1b 488d4da0                 lea rcx, [rbp - 0x60]
0000000140396f1f e86c2a0000               call 0x140399990
0000000140396f24 385e20                   cmp byte ptr [rsi + 0x20], bl
0000000140396f27 7408                     je 0x140396f31
0000000140396f29 488bce                   mov rcx, rsi
0000000140396f2c e88f280000               call 0x1403997c0
0000000140396f31 0f1045a0                 movups xmm0, xmmword ptr [rbp - 0x60]
0000000140396f35 0f1106                   movups xmmword ptr [rsi], xmm0
0000000140396f38 0f104db0                 movups xmm1, xmmword ptr [rbp - 0x50]
0000000140396f3c 0f114e10                 movups xmmword ptr [rsi + 0x10], xmm1
0000000140396f40 660f6f05a8ac0500         movdqa xmm0, xmmword ptr [rip + 0x5aca8]
0000000140396f48 f30f7f45b0               movdqu xmmword ptr [rbp - 0x50], xmm0
0000000140396f4d 885da0                   mov byte ptr [rbp - 0x60], bl
0000000140396f50 c6462001                 mov byte ptr [rsi + 0x20], 1
0000000140396f54 488d4da0                 lea rcx, [rbp - 0x60]
0000000140396f58 e863280000               call 0x1403997c0
0000000140396f5d e9cd030000               jmp 0x14039732f
0000000140396f62 488b4730                 mov rax, qword ptr [rdi + 0x30]
0000000140396f66 33db                     xor ebx, ebx
0000000140396f68 4883781018               cmp qword ptr [rax + 0x10], 0x18
0000000140396f6d 0f92c3                   setb bl
0000000140396f70 488bc3                   mov rax, rbx
0000000140396f73 e9b9030000               jmp 0x140397331
0000000140396f78 488b4f30                 mov rcx, qword ptr [rdi + 0x30]
0000000140396f7c ba18000000               mov edx, 0x18
0000000140396f81 482b5110                 sub rdx, qword ptr [rcx + 0x10]
0000000140396f85 4533c0                   xor r8d, r8d
0000000140396f88 e893140000               call 0x140398420
0000000140396f8d e99d030000               jmp 0x14039732f
0000000140396f92 488b7f38                 mov rdi, qword ptr [rdi + 0x38]
0000000140396f96 33db                     xor ebx, ebx
0000000140396f98 48895df0                 mov qword ptr [rbp - 0x10], rbx
0000000140396f9c 660f6f054cac0500         movdqa xmm0, xmmword ptr [rip + 0x5ac4c]
0000000140396fa4 f30f7f4500               movdqu xmmword ptr [rbp], xmm0
0000000140396fa9 885df0                   mov byte ptr [rbp - 0x10], bl
0000000140396fac 41b890000000             mov r8d, 0x90
0000000140396fb2 488d15074c0400           lea rdx, [rip + 0x44c07]
0000000140396fb9 488d4df0                 lea rcx, [rbp - 0x10]
0000000140396fbd e8ce290000               call 0x140399990
0000000140396fc2 90                       nop
0000000140396fc3 0f57c0                   xorps xmm0, xmm0
0000000140396fc6 0f114520                 movups xmmword ptr [rbp + 0x20], xmm0
0000000140396fca 0f114530                 movups xmmword ptr [rbp + 0x30], xmm0
0000000140396fce 0f114540                 movups xmmword ptr [rbp + 0x40], xmm0
0000000140396fd2 0f114550                 movups xmmword ptr [rbp + 0x50], xmm0
0000000140396fd6 0f114560                 movups xmmword ptr [rbp + 0x60], xmm0
0000000140396fda 0f114570                 movups xmmword ptr [rbp + 0x70], xmm0
0000000140396fde 0f118580000000           movups xmmword ptr [rbp + 0x80], xmm0
0000000140396fe5 0f118590000000           movups xmmword ptr [rbp + 0x90], xmm0
0000000140396fec 885c2450                 mov byte ptr [rsp + 0x50], bl
0000000140396ff0 48895da0                 mov qword ptr [rbp - 0x60], rbx
0000000140396ff4 660f6f05f4ab0500         movdqa xmm0, xmmword ptr [rip + 0x5abf4]
0000000140396ffc f30f7f45b0               movdqu xmmword ptr [rbp - 0x50], xmm0
0000000140397001 885da0                   mov byte ptr [rbp - 0x60], bl
0000000140397004 488d442420               lea rax, [rsp + 0x20]
0000000140397009 488945c0                 mov qword ptr [rbp - 0x40], rax
000000014039700d 488d45f0                 lea rax, [rbp - 0x10]
0000000140397011 488945c8                 mov qword ptr [rbp - 0x38], rax
0000000140397015 488d442428               lea rax, [rsp + 0x28]
000000014039701a 488945d0                 mov qword ptr [rbp - 0x30], rax
000000014039701e 488d45a0                 lea rax, [rbp - 0x60]
0000000140397022 488945d8                 mov qword ptr [rbp - 0x28], rax
0000000140397026 488d442430               lea rax, [rsp + 0x30]
000000014039702b 488945e0                 mov qword ptr [rbp - 0x20], rax
000000014039702f 488d056aab0500           lea rax, [rip + 0x5ab6a]
0000000140397036 4889442458               mov qword ptr [rsp + 0x58], rax
000000014039703b 0f2845c0                 movaps xmm0, xmmword ptr [rbp - 0x40]
000000014039703f 0f11442460               movups xmmword ptr [rsp + 0x60], xmm0
0000000140397044 0f284dd0                 movaps xmm1, xmmword ptr [rbp - 0x30]
0000000140397048 0f114c2470               movups xmmword ptr [rsp + 0x70], xmm1
000000014039704d f20f1045e0               movsd xmm0, qword ptr [rbp - 0x20]
0000000140397052 f20f114580               movsd qword ptr [rbp - 0x80], xmm0
0000000140397057 488d442458               lea rax, [rsp + 0x58]
000000014039705c 48894590                 mov qword ptr [rbp - 0x70], rax
0000000140397060 4c8d442458               lea r8, [rsp + 0x58]
0000000140397065 8d5310                   lea edx, [rbx + 0x10]
0000000140397068 488d4d20                 lea rcx, [rbp + 0x20]
000000014039706c e84f94ceff               call 0x1400804c0
0000000140397071 0f10742430               movups xmm6, xmmword ptr [rsp + 0x30]
0000000140397076 0f1175c0                 movups xmmword ptr [rbp - 0x40], xmm6
000000014039707a 0f107c2440               movups xmm7, xmmword ptr [rsp + 0x40]
000000014039707f 660f6f0569ab0500         movdqa xmm0, xmmword ptr [rip + 0x5ab69]
0000000140397087 f30f7f442440             movdqu xmmword ptr [rsp + 0x40], xmm0
000000014039708d 885c2430                 mov byte ptr [rsp + 0x30], bl
0000000140397091 488d4da0                 lea rcx, [rbp - 0x60]
0000000140397095 e826270000               call 0x1403997c0
000000014039709a 90                       nop
000000014039709b 385c2450                 cmp byte ptr [rsp + 0x50], bl
000000014039709f 740a                     je 0x1403970ab
00000001403970a1 488d4c2430               lea rcx, [rsp + 0x30]
00000001403970a6 e815270000               call 0x1403997c0
00000001403970ab 807f2000                 cmp byte ptr [rdi + 0x20], 0
00000001403970af 7408                     je 0x1403970b9
00000001403970b1 488bcf                   mov rcx, rdi
00000001403970b4 e807270000               call 0x1403997c0
00000001403970b9 0f1137                   movups xmmword ptr [rdi], xmm6
00000001403970bc 0f117f10                 movups xmmword ptr [rdi + 0x10], xmm7
00000001403970c0 660f6f0528ab0500         movdqa xmm0, xmmword ptr [rip + 0x5ab28]
00000001403970c8 f30f7f45d0               movdqu xmmword ptr [rbp - 0x30], xmm0
00000001403970cd c645c000                 mov byte ptr [rbp - 0x40], 0
00000001403970d1 c6472001                 mov byte ptr [rdi + 0x20], 1
00000001403970d5 488d4dc0                 lea rcx, [rbp - 0x40]
00000001403970d9 e8e2260000               call 0x1403997c0
00000001403970de 90                       nop
00000001403970df 488d4df0                 lea rcx, [rbp - 0x10]
00000001403970e3 e8d8260000               call 0x1403997c0
00000001403970e8 e942020000               jmp 0x14039732f
00000001403970ed 488b4f40                 mov rcx, qword ptr [rdi + 0x40]
00000001403970f1 418b00                   mov eax, dword ptr [r8]
00000001403970f4 8901                     mov dword ptr [rcx], eax
00000001403970f6 e934020000               jmp 0x14039732f
00000001403970fb 488b4740                 mov rax, qword ptr [rdi + 0x40]
00000001403970ff 486300                   movsxd rax, dword ptr [rax]
0000000140397102 e92a020000               jmp 0x140397331
0000000140397107 488b4f30                 mov rcx, qword ptr [rdi + 0x30]
000000014039710b 488b4738                 mov rax, qword ptr [rdi + 0x38]
000000014039710f 0f57c0                   xorps xmm0, xmm0
0000000140397112 0f114520                 movups xmmword ptr [rbp + 0x20], xmm0
0000000140397116 0f114530                 movups xmmword ptr [rbp + 0x30], xmm0
000000014039711a 0f114540                 movups xmmword ptr [rbp + 0x40], xmm0
000000014039711e 0f114550                 movups xmmword ptr [rbp + 0x50], xmm0
0000000140397122 0f114560                 movups xmmword ptr [rbp + 0x60], xmm0
0000000140397126 0f114570                 movups xmmword ptr [rbp + 0x70], xmm0
000000014039712a 0f118580000000           movups xmmword ptr [rbp + 0x80], xmm0
0000000140397131 0f118590000000           movups xmmword ptr [rbp + 0x90], xmm0
0000000140397138 c644245000               mov byte ptr [rsp + 0x50], 0
000000014039713d c645e000                 mov byte ptr [rbp - 0x20], 0
0000000140397141 33d2                     xor edx, edx
0000000140397143 0f1145a0                 movups xmmword ptr [rbp - 0x60], xmm0
0000000140397147 488955b0                 mov qword ptr [rbp - 0x50], rdx
000000014039714b 488d55c0                 lea rdx, [rbp - 0x40]
000000014039714f 488955f0                 mov qword ptr [rbp - 0x10], rdx
0000000140397153 488945f8                 mov qword ptr [rbp - 8], rax
0000000140397157 488d45a0                 lea rax, [rbp - 0x60]
000000014039715b 48894500                 mov qword ptr [rbp], rax
000000014039715f 48894d08                 mov qword ptr [rbp + 8], rcx
0000000140397163 488d442420               lea rax, [rsp + 0x20]
0000000140397168 48894510                 mov qword ptr [rbp + 0x10], rax
000000014039716c 488d442430               lea rax, [rsp + 0x30]
0000000140397171 48894518                 mov qword ptr [rbp + 0x18], rax
0000000140397175 488d05eca80500           lea rax, [rip + 0x5a8ec]
000000014039717c 4889442458               mov qword ptr [rsp + 0x58], rax
0000000140397181 0f2845f0                 movaps xmm0, xmmword ptr [rbp - 0x10]
0000000140397185 0f11442460               movups xmmword ptr [rsp + 0x60], xmm0
000000014039718a 0f284d00                 movaps xmm1, xmmword ptr [rbp]
000000014039718e 0f114c2470               movups xmmword ptr [rsp + 0x70], xmm1
0000000140397193 0f284510                 movaps xmm0, xmmword ptr [rbp + 0x10]
0000000140397197 0f114580                 movups xmmword ptr [rbp - 0x80], xmm0
000000014039719b 488d442458               lea rax, [rsp + 0x58]
00000001403971a0 48894590                 mov qword ptr [rbp - 0x70], rax
00000001403971a4 4c8d442458               lea r8, [rsp + 0x58]
00000001403971a9 ba10000000               mov edx, 0x10
00000001403971ae 488d4d20                 lea rcx, [rbp + 0x20]
00000001403971b2 e85993d2ff               call 0x1400c0510
00000001403971b7 0f10742430               movups xmm6, xmmword ptr [rsp + 0x30]
00000001403971bc 0f1175f0                 movups xmmword ptr [rbp - 0x10], xmm6
00000001403971c0 0f107c2440               movups xmm7, xmmword ptr [rsp + 0x40]
00000001403971c5 f30f7f7d00               movdqu xmmword ptr [rbp], xmm7
00000001403971ca 660f6f051eaa0500         movdqa xmm0, xmmword ptr [rip + 0x5aa1e]
00000001403971d2 f30f7f442440             movdqu xmmword ptr [rsp + 0x40], xmm0
00000001403971d8 c644243000               mov byte ptr [rsp + 0x30], 0
00000001403971dd 807de000                 cmp byte ptr [rbp - 0x20], 0
00000001403971e1 740a                     je 0x1403971ed
00000001403971e3 488d4dc0                 lea rcx, [rbp - 0x40]
00000001403971e7 e8d4250000               call 0x1403997c0
00000001403971ec 90                       nop
00000001403971ed 807c245000               cmp byte ptr [rsp + 0x50], 0
00000001403971f2 740a                     je 0x1403971fe
00000001403971f4 488d4c2430               lea rcx, [rsp + 0x30]
00000001403971f9 e8c2250000               call 0x1403997c0
00000001403971fe 488b5f38                 mov rbx, qword ptr [rdi + 0x38]
0000000140397202 488d45f0                 lea rax, [rbp - 0x10]
0000000140397206 483bd8                   cmp rbx, rax
0000000140397209 7420                     je 0x14039722b
000000014039720b 488bcb                   mov rcx, rbx
000000014039720e e8ad250000               call 0x1403997c0
0000000140397213 0f1133                   movups xmmword ptr [rbx], xmm6
0000000140397216 0f117b10                 movups xmmword ptr [rbx + 0x10], xmm7
000000014039721a 660f6f05cea90500         movdqa xmm0, xmmword ptr [rip + 0x5a9ce]
0000000140397222 f30f7f4500               movdqu xmmword ptr [rbp], xmm0
0000000140397227 c645f000                 mov byte ptr [rbp - 0x10], 0
000000014039722b 488d4df0                 lea rcx, [rbp - 0x10]
000000014039722f e88c250000               call 0x1403997c0
0000000140397234 e9f6000000               jmp 0x14039732f
0000000140397239 4c8b7738                 mov r14, qword ptr [rdi + 0x38]
000000014039723d 49837e1004               cmp qword ptr [r14 + 0x10], 4
0000000140397242 0f867c000000             jbe 0x1403972c4
0000000140397248 b908000000               mov ecx, 8
000000014039724d e8ee95feff               call 0x140380840
0000000140397252 498b4e10                 mov rcx, qword ptr [r14 + 0x10]
0000000140397256 48c7c3ffffffff           mov rbx, 0xffffffffffffffff
000000014039725d 0f1f00                   nop dword ptr [rax]
0000000140397260 48ffc3                   inc rbx
0000000140397263 803c1800                 cmp byte ptr [rax + rbx], 0
0000000140397267 75f7                     jne 0x140397260
0000000140397269 be04000000               mov esi, 4
000000014039726e 483bce                   cmp rcx, rsi
0000000140397271 480f42f1                 cmovb rsi, rcx
0000000140397275 49837e1810               cmp qword ptr [r14 + 0x18], 0x10
000000014039727a 7203                     jb 0x14039727f
000000014039727c 4d8b36                   mov r14, qword ptr [r14]
000000014039727f 4c8bc6                   mov r8, rsi
0000000140397282 483bde                   cmp rbx, rsi
0000000140397285 4c0f42c3                 cmovb r8, rbx
0000000140397289 488bd0                   mov rdx, rax
000000014039728c 498bce                   mov rcx, r14
000000014039728f e84cf60000               call 0x1403a68e0
0000000140397294 85c0                     test eax, eax
0000000140397296 752c                     jne 0x1403972c4
0000000140397298 483bf3                   cmp rsi, rbx
000000014039729b 7227                     jb 0x1403972c4
000000014039729d 7725                     ja 0x1403972c4
000000014039729f 488b4738                 mov rax, qword ptr [rdi + 0x38]
00000001403972a3 488bc8                   mov rcx, rax
00000001403972a6 4883781810               cmp qword ptr [rax + 0x18], 0x10
00000001403972ab 7203                     jb 0x1403972b0
00000001403972ad 488b08                   mov rcx, qword ptr [rax]
00000001403972b0 488b4010                 mov rax, qword ptr [rax + 0x10]
00000001403972b4 807c08ff7d               cmp byte ptr [rax + rcx - 1], 0x7d
00000001403972b9 7509                     jne 0x1403972c4
00000001403972bb bb01000000               mov ebx, 1
00000001403972c0 8bc3                     mov eax, ebx
00000001403972c2 eb6d                     jmp 0x140397331
00000001403972c4 33db                     xor ebx, ebx
00000001403972c6 8bc3                     mov eax, ebx
00000001403972c8 eb67                     jmp 0x140397331
00000001403972ca b909000000               mov ecx, 9
00000001403972cf eb4a                     jmp 0x14039731b
00000001403972d1 b90a000000               mov ecx, 0xa
00000001403972d6 e86595feff               call 0x140380840
00000001403972db 488bd0                   mov rdx, rax
00000001403972de 488d0d4b860800           lea rcx, [rip + 0x8864b]
00000001403972e5 e8c63a0000               call 0x14039adb0
00000001403972ea 488b5738                 mov rdx, qword ptr [rdi + 0x38]
00000001403972ee 4c8b4210                 mov r8, qword ptr [rdx + 0x10]
00000001403972f2 48837a1810               cmp qword ptr [rdx + 0x18], 0x10
00000001403972f7 7203                     jb 0x1403972fc
00000001403972f9 488b12                   mov rdx, qword ptr [rdx]
00000001403972fc 488bc8                   mov rcx, rax
00000001403972ff e89c4c0000               call 0x14039bfa0
0000000140397304 488bd8                   mov rbx, rax
0000000140397307 b90b000000               mov ecx, 0xb
000000014039730c e82f95feff               call 0x140380840
0000000140397311 488bcb                   mov rcx, rbx
0000000140397314 eb11                     jmp 0x140397327
0000000140397316 b90c000000               mov ecx, 0xc
000000014039731b e82095feff               call 0x140380840
0000000140397320 488d0d09860800           lea rcx, [rip + 0x88609]
0000000140397327 488bd0                   mov rdx, rax
000000014039732a e8813a0000               call 0x14039adb0
000000014039732f 33c0                     xor eax, eax
0000000140397331 488b8da0000000           mov rcx, qword ptr [rbp + 0xa0]
0000000140397338 4833cc                   xor rcx, rsp
000000014039733b e880ca0000               call 0x1403a3dc0
0000000140397340 4c8d9c24d0010000         lea r11, [rsp + 0x1d0]
0000000140397348 498b5b38                 mov rbx, qword ptr [r11 + 0x38]
000000014039734c 498b7340                 mov rsi, qword ptr [r11 + 0x40]
0000000140397350 498b7b48                 mov rdi, qword ptr [r11 + 0x48]
0000000140397354 410f2873f0               movaps xmm6, xmmword ptr [r11 - 0x10]
0000000140397359 410f287be0               movaps xmm7, xmmword ptr [r11 - 0x20]
000000014039735e 498be3                   mov rsp, r11
0000000140397361 415f                     pop r15
0000000140397363 415e                     pop r14
0000000140397365 415d                     pop r13
0000000140397367 415c                     pop r12
0000000140397369 5d                       pop rbp
000000014039736a c3                       ret
000000014039736b e8a4940100               call 0x1403b0814
0000000140397370 cc                       int3
0000000140397371 e84aa1c6ff               call 0x1400014c0
0000000140397376 cc                       int3
0000000140397377 e8e4a1c6ff               call 0x140001560
000000014039737c cc                       int3
000000014039737d 0f1f00                   nop dword ptr [rax]
