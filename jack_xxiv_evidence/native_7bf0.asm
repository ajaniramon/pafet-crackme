140007bf0 push rbp
140007bf2 sub rsp, 0x20
140007bf6 mov eax, dword ptr [rcx + 0x1b8]
140007bfc mov rbp, rcx
140007bff test eax, eax
140007c01 je 0x140007c93
140007c07 cmp edx, eax
140007c09 jae 0x140007c93
140007c0f mov qword ptr [rsp + 0x30], rbx
140007c14 mov eax, 0xaaaaaaab
140007c19 mul edx
140007c1b mov qword ptr [rsp + 0x38], rsi
140007c20 xor esi, esi
140007c22 mov qword ptr [rsp + 0x40], rdi
140007c27 mov edi, edx
140007c29 shr edi, 4
140007c2c cmp edi, 0x49
140007c2f jb 0x140007c36
140007c31 lea edi, [rsi + 0x49]
140007c34 jmp 0x140007c5c
140007c36 test edi, edi
140007c38 je 0x140007c5a
140007c3a lea eax, [rdi - 1]
140007c3d mov ebx, esi
140007c3f nop 
140007c40 mov ecx, eax
140007c42 call 0x1400021e0
140007c47 cmp eax, 0x48
140007c4a jb 0x140007c55
140007c4c inc ebx
140007c4e cmp ebx, 0x40
140007c51 jl 0x140007c40
140007c53 jmp 0x140007c5c
140007c55 lea edi, [rax + 1]
140007c58 jmp 0x140007c5c
140007c5a mov edi, esi
140007c5c mov rax, qword ptr [rbp + 0xca8]
140007c63 cmp edi, 0x49
140007c66 mov rbx, qword ptr [rsp + 0x30]
140007c6b cmovb esi, edi
140007c6e mov rdi, qword ptr [rsp + 0x40]
140007c73 mov dword ptr [rbp + 0xcb0], esi
140007c79 cmp byte ptr [rax + rsi], 0
140007c7d jne 0x140007c8e
140007c7f mov r8d, esi
140007c82 mov byte ptr [rax + rsi], 1
140007c86 mov rcx, rbp
140007c89 call 0x140007610
140007c8e mov rsi, qword ptr [rsp + 0x38]
140007c93 add rsp, 0x20
140007c97 pop rbp
140007c98 ret 
