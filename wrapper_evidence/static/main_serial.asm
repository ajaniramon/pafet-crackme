140396c36 488b7720 mov rsi, qword ptr [rdi + 0x20]
140396c3a 488b7f10 mov rdi, qword ptr [rdi + 0x10]
140396c3e b907000000 mov ecx, 7
140396c43 e8f89bfeff call 0x140380840
140396c48 33db xor ebx, ebx
140396c4a 48895df0 mov qword ptr [rbp - 0x10], rbx
140396c4e 660f6f059aaf0500 movdqa xmm0, xmmword ptr [rip + 0x5af9a]
140396c56 f30f7f4500 movdqu xmmword ptr [rbp], xmm0
140396c5b 885df0 mov byte ptr [rbp - 0x10], bl
140396c5e 48c7c3ffffffff mov rbx, 0xffffffffffffffff
140396c65 48ffc3 inc rbx
140396c68 803c1800 cmp byte ptr [rax + rbx], 0
140396c6c 75f7 jne 0x140396c65
140396c6e 4c8bc3 mov r8, rbx
140396c71 488bd0 mov rdx, rax
140396c74 488d4df0 lea rcx, [rbp - 0x10]
140396c78 e8132d0000 call 0x140399990
140396c7d 90 nop 
140396c7e 0f57c0 xorps xmm0, xmm0
140396c81 0f114520 movups xmmword ptr [rbp + 0x20], xmm0
140396c85 0f114530 movups xmmword ptr [rbp + 0x30], xmm0
140396c89 0f114540 movups xmmword ptr [rbp + 0x40], xmm0
140396c8d 0f114550 movups xmmword ptr [rbp + 0x50], xmm0
140396c91 0f114560 movups xmmword ptr [rbp + 0x60], xmm0
140396c95 0f114570 movups xmmword ptr [rbp + 0x70], xmm0
140396c99 0f118580000000 movups xmmword ptr [rbp + 0x80], xmm0
140396ca0 0f118590000000 movups xmmword ptr [rbp + 0x90], xmm0
140396ca7 c645e000 mov byte ptr [rbp - 0x20], 0
140396cab c644245000 mov byte ptr [rsp + 0x50], 0
140396cb0 488d442430 lea rax, [rsp + 0x30]
140396cb5 488945a0 mov qword ptr [rbp - 0x60], rax
140396cb9 48897da8 mov qword ptr [rbp - 0x58], rdi
140396cbd 488d45f0 lea rax, [rbp - 0x10]
140396cc1 488945b0 mov qword ptr [rbp - 0x50], rax
140396cc5 488d45c0 lea rax, [rbp - 0x40]
140396cc9 488945b8 mov qword ptr [rbp - 0x48], rax
140396ccd 488d051cad0500 lea rax, [rip + 0x5ad1c]
140396cd4 4889442458 mov qword ptr [rsp + 0x58], rax
140396cd9 0f2845a0 movaps xmm0, xmmword ptr [rbp - 0x60]
140396cdd 0f11442460 movups xmmword ptr [rsp + 0x60], xmm0
140396ce2 0f284db0 movaps xmm1, xmmword ptr [rbp - 0x50]
140396ce6 0f114c2470 movups xmmword ptr [rsp + 0x70], xmm1
140396ceb 488d442458 lea rax, [rsp + 0x58]
140396cf0 48894590 mov qword ptr [rbp - 0x70], rax
140396cf4 4c8d442458 lea r8, [rsp + 0x58]
140396cf9 ba10000000 mov edx, 0x10
140396cfe 488d4d20 lea rcx, [rbp + 0x20]
140396d02 e859ddecff call 0x140264a60
140396d07 0f1075c0 movups xmm6, xmmword ptr [rbp - 0x40]
140396d0b 0f1175a0 movups xmmword ptr [rbp - 0x60], xmm6
140396d0f 0f107dd0 movups xmm7, xmmword ptr [rbp - 0x30]
140396d13 660f6f05d5ae0500 movdqa xmm0, xmmword ptr [rip + 0x5aed5]
140396d1b f30f7f45d0 movdqu xmmword ptr [rbp - 0x30], xmm0
140396d20 c645c000 mov byte ptr [rbp - 0x40], 0
140396d24 807c245000 cmp byte ptr [rsp + 0x50], 0
140396d29 740b je 0x140396d36
140396d2b 488d4c2430 lea rcx, [rsp + 0x30]
140396d30 e88b2a0000 call 0x1403997c0
140396d35 90 nop 
140396d36 807de000 cmp byte ptr [rbp - 0x20], 0
140396d3a 7409 je 0x140396d45
140396d3c 488d4dc0 lea rcx, [rbp - 0x40]
140396d40 e87b2a0000 call 0x1403997c0
140396d45 807e2000 cmp byte ptr [rsi + 0x20], 0
140396d49 7408 je 0x140396d53
140396d4b 488bce mov rcx, rsi
140396d4e e86d2a0000 call 0x1403997c0
140396d53 0f1136 movups xmmword ptr [rsi], xmm6
140396d56 0f117e10 movups xmmword ptr [rsi + 0x10], xmm7
140396d5a 660f6f058eae0500 movdqa xmm0, xmmword ptr [rip + 0x5ae8e]
140396d62 f30f7f45b0 movdqu xmmword ptr [rbp - 0x50], xmm0
140396d67 c645a000 mov byte ptr [rbp - 0x60], 0
140396d6b c6462001 mov byte ptr [rsi + 0x20], 1
140396d6f 488d4da0 lea rcx, [rbp - 0x60]
140396d73 e8482a0000 call 0x1403997c0
140396d78 90 nop 
140396d79 488d4df0 lea rcx, [rbp - 0x10]
140396d7d e83e2a0000 call 0x1403997c0
140396d82 e9a8050000 jmp 0x14039732f
