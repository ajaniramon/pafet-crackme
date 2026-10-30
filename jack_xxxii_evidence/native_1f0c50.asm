1f0c50 push     rbx
1f0c52 push     rsi
1f0c53 sub      rsp, 0x28
1f0c57 mov      rsi, rcx
1f0c5a xor      ebx, ebx
1f0c5c mov      ecx, dword ptr [rcx + 0xad0]
1f0c62 test     ecx, ecx
1f0c64 je       0x1401f0da3
1f0c6a mov      qword ptr [rsp + 0x40], rbp
1f0c6f movabs   rbp, 0x9e3779b97f4a7c15
1f0c79 mov      qword ptr [rsp + 0x50], r12
1f0c7e movabs   r12, 0x2545f4914f6cdd1d
1f0c88 mov      qword ptr [rsp + 0x58], r14
1f0c8d movabs   r14, 0xff51afd7ed558ccd
1f0c97 mov      qword ptr [rsp + 0x20], r15
1f0c9c movabs   r15, 0xc4ceb9fe1a85ec53
1f0ca6 mov      qword ptr [rsp + 0x48], rdi
1f0cab nop      dword ptr [rax + rax]
1f0cb0 mov      eax, ebx
1f0cb2 inc      ebx
1f0cb4 cmp      eax, 8
1f0cb7 jae      0x1401f0d8a
1f0cbd mov      r8, qword ptr [rsi + 0xac8]
1f0cc4 lea      eax, [rcx - 1]
1f0cc7 mov      dword ptr [rsi + 0xad0], eax
1f0ccd mov      rdi, r8
1f0cd0 mov      rdx, qword ptr [rsi + rax*8 + 0x8c8]
1f0cd8 xor      rdi, rdx
1f0cdb imul     r8, rbp
1f0cdf mov      rax, rdi
1f0ce2 shr      rax, 0x21
1f0ce6 add      r8, rdx
1f0ce9 xor      rax, rdi
1f0cec shr      r8, 0x3d
1f0cf0 imul     rax, r14
1f0cf4 mov      rcx, rax
1f0cf7 shr      rcx, 0x21
1f0cfb xor      rcx, rax
1f0cfe imul     rcx, r15
1f0d02 mov      rax, rcx
1f0d05 shr      rax, 0x21
1f0d09 xor      rax, rcx
1f0d0c mov      rcx, rsi
1f0d0f mov      qword ptr [rsi + 0xac8], rax
1f0d16 call     qword ptr [rsi + r8*8 + 0x288]
1f0d1e inc      qword ptr [rsi + 0x1b8]
1f0d25 mov      rax, qword ptr [rsi + 0x1b0]
1f0d2c imul     rax, rbp
1f0d30 mov      r8d, edi
1f0d33 add      rax, r12
1f0d36 mov      qword ptr [rsi + 0x1b0], rax
1f0d3d shr      rax, 0x1b
1f0d41 movzx    edx, al
1f0d44 mov      byte ptr [rsi + 0x160], dl
1f0d4a imul     rdx, qword ptr [rsi + 0xe0]
1f0d52 xor      rdx, qword ptr [rsi + 0xd8]
1f0d59 xor      rdx, qword ptr [rsi + 0xd0]
1f0d60 mov      rcx, rdx
1f0d63 xor      rcx, r8
1f0d66 cmp      byte ptr [rsi + 0xe8], 0
1f0d6d lea      rax, [rdx + r8]
1f0d71 cmove    rax, rcx
1f0d75 mov      qword ptr [rsi + 0xf0], rax
1f0d7c mov      ecx, dword ptr [rsi + 0xad0]
1f0d82 test     ecx, ecx
1f0d84 jne      0x1401f0cb0
1f0d8a mov      rdi, qword ptr [rsp + 0x48]
1f0d8f mov      r12, qword ptr [rsp + 0x50]
1f0d94 mov      r14, qword ptr [rsp + 0x58]
1f0d99 mov      rbp, qword ptr [rsp + 0x40]
1f0d9e mov      r15, qword ptr [rsp + 0x20]
1f0da3 add      rsp, 0x28
1f0da7 pop      rsi
1f0da8 pop      rbx
1f0da9 ret      
