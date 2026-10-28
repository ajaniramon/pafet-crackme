0000000140048960 48895c2408               mov qword ptr [rsp + 8], rbx
0000000140048965 57                       push rdi
0000000140048966 4883ec20                 sub rsp, 0x20
000000014004896a 83fa06                   cmp edx, 6
000000014004896d 0f8714010000             ja 0x140048a87
0000000140048973 8bc2                     mov eax, edx
0000000140048975 4c8d0d8476fbff           lea r9, [rip - 0x4897c]
000000014004897c 418b9481948a0400         mov edx, dword ptr [r9 + rax*4 + 0x48a94]
0000000140048984 4903d1                   add rdx, r9
0000000140048987 ffe2                     jmp rdx
0000000140048989 488b19                   mov rbx, qword ptr [rcx]
000000014004898c 488b7908                 mov rdi, qword ptr [rcx + 8]
0000000140048990 e9d1000000               jmp 0x140048a66
0000000140048995 488b09                   mov rcx, qword ptr [rcx]
0000000140048998 4883791810               cmp qword ptr [rcx + 0x18], 0x10
000000014004899d 488b5110                 mov rdx, qword ptr [rcx + 0x10]
00000001400489a1 7218                     jb 0x1400489bb
00000001400489a3 480311                   add rdx, qword ptr [rcx]
00000001400489a6 488b09                   mov rcx, qword ptr [rcx]
00000001400489a9 e842a63500               call 0x1403a2ff0
00000001400489ae 33c0                     xor eax, eax
00000001400489b0 488b5c2430               mov rbx, qword ptr [rsp + 0x30]
00000001400489b5 4883c420                 add rsp, 0x20
00000001400489b9 5f                       pop rdi
00000001400489ba c3                       ret
00000001400489bb 4803d1                   add rdx, rcx
00000001400489be e82da63500               call 0x1403a2ff0
00000001400489c3 33c0                     xor eax, eax
00000001400489c5 488b5c2430               mov rbx, qword ptr [rsp + 0x30]
00000001400489ca 4883c420                 add rsp, 0x20
00000001400489ce 5f                       pop rdi
00000001400489cf c3                       ret
00000001400489d0 498b00                   mov rax, qword ptr [r8]
00000001400489d3 488b4910                 mov rcx, qword ptr [rcx + 0x10]
00000001400489d7 488901                   mov qword ptr [rcx], rax
00000001400489da 33c0                     xor eax, eax
00000001400489dc 488b5c2430               mov rbx, qword ptr [rsp + 0x30]
00000001400489e1 4883c420                 add rsp, 0x20
00000001400489e5 5f                       pop rdi
00000001400489e6 c3                       ret
00000001400489e7 488b5110                 mov rdx, qword ptr [rcx + 0x10]
00000001400489eb 33c0                     xor eax, eax
00000001400489ed 488b09                   mov rcx, qword ptr [rcx]
00000001400489f0 488b4910                 mov rcx, qword ptr [rcx + 0x10]
00000001400489f4 48390a                   cmp qword ptr [rdx], rcx
00000001400489f7 0f92c0                   setb al
00000001400489fa 488b5c2430               mov rbx, qword ptr [rsp + 0x30]
00000001400489ff 4883c420                 add rsp, 0x20
0000000140048a03 5f                       pop rdi
0000000140048a04 c3                       ret
0000000140048a05 4c8b09                   mov r9, qword ptr [rcx]
0000000140048a08 488b4110                 mov rax, qword ptr [rcx + 0x10]
0000000140048a0c 4983791810               cmp qword ptr [r9 + 0x18], 0x10
0000000140048a11 4c8b00                   mov r8, qword ptr [rax]
0000000140048a14 720d                     jb 0x140048a23
0000000140048a16 498b01                   mov rax, qword ptr [r9]
0000000140048a19 4c8bc8                   mov r9, rax
0000000140048a1c 410fb61400               movzx edx, byte ptr [r8 + rax]
0000000140048a21 eb05                     jmp 0x140048a28
0000000140048a23 430fb61408               movzx edx, byte ptr [r8 + r9]
0000000140048a28 410fb6c0                 movzx eax, r8b
0000000140048a2c 80f25a                   xor dl, 0x5a
0000000140048a2f 02c0                     add al, al
0000000140048a31 80c207                   add dl, 7
0000000140048a34 428d0c00                 lea ecx, [rax + r8]
0000000140048a38 02d1                     add dl, cl
0000000140048a3a 43881401                 mov byte ptr [r9 + r8], dl
0000000140048a3e 480fbec2                 movsx rax, dl
0000000140048a42 488b5c2430               mov rbx, qword ptr [rsp + 0x30]
0000000140048a47 4883c420                 add rsp, 0x20
0000000140048a4b 5f                       pop rdi
0000000140048a4c c3                       ret
0000000140048a4d 488b4110                 mov rax, qword ptr [rcx + 0x10]
0000000140048a51 488b00                   mov rax, qword ptr [rax]
0000000140048a54 488b5c2430               mov rbx, qword ptr [rsp + 0x30]
0000000140048a59 4883c420                 add rsp, 0x20
0000000140048a5d 5f                       pop rdi
0000000140048a5e c3                       ret
0000000140048a5f 488b5918                 mov rbx, qword ptr [rcx + 0x18]
0000000140048a63 488b39                   mov rdi, qword ptr [rcx]
0000000140048a66 807b2000                 cmp byte ptr [rbx + 0x20], 0
0000000140048a6a 740c                     je 0x140048a78
0000000140048a6c 488bcb                   mov rcx, rbx
0000000140048a6f e84c0d3500               call 0x1403997c0
0000000140048a74 c6432000                 mov byte ptr [rbx + 0x20], 0
0000000140048a78 488bd7                   mov rdx, rdi
0000000140048a7b 488bcb                   mov rcx, rbx
0000000140048a7e e85dfa3400               call 0x1403984e0
0000000140048a83 c6432001                 mov byte ptr [rbx + 0x20], 1
0000000140048a87 488b5c2430               mov rbx, qword ptr [rsp + 0x30]
0000000140048a8c 33c0                     xor eax, eax
0000000140048a8e 4883c420                 add rsp, 0x20
0000000140048a92 5f                       pop rdi
0000000140048a93 c3                       ret
