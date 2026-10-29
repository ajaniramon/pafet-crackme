140003a50 mov qword ptr [rsp + 8], rbx
140003a55 mov qword ptr [rsp + 0x10], rbp
140003a5a mov qword ptr [rsp + 0x18], rsi
140003a5f mov qword ptr [rsp + 0x20], rdi
140003a64 push r12
140003a66 push r14
140003a68 push r15
140003a6a sub rsp, 0x20
140003a6e mov r11, qword ptr [rcx + 0x218]
140003a75 mov r9, rcx
140003a78 mov rbx, qword ptr [rcx + 0x1f8]
140003a7f movabs r15, 0x9e3779b97f4a7c15
140003a89 movzx edx, byte ptr [rcx + 0x27a]
140003a90 movabs r12, 0x2545f4914f6cdd1d
140003a9a mov rax, qword ptr [rcx + 0x1f0]
140003aa1 mov rbp, qword ptr [rcx + 0x1e8]
140003aa8 movzx r14d, byte ptr [rcx + 0x200]
140003ab0 mov r10, qword ptr [rcx + 0x28]
140003ab4 mov rdi, qword ptr [rcx + 0x30]
140003ab8 lea rsi, [rax + rax*2]
140003abc imul rdx, rbx
140003ac0 xor rdx, rbp
140003ac3 xor rdx, rsi
140003ac6 mov rax, rdx
140003ac9 xor rax, r11
140003acc sub r11, rdx
140003acf test r14b, r14b
140003ad2 cmove r11, rax
140003ad6 inc rdi
140003ad9 imul r10, r15
140003add mov qword ptr [rcx + 0x30], rdi
140003ae1 add r10, r12
140003ae4 mov qword ptr [rcx + 0x28], r10
140003ae8 mov rax, r10
140003aeb shr rax, 0x1b
140003aef movzx edx, al
140003af2 mov byte ptr [rcx + 0x27a], dl
140003af8 mov rcx, r11
140003afb imul rdx, rbx
140003aff xor rdx, rbp
140003b02 xor rdx, rsi
140003b05 xor rcx, rdx
140003b08 test r14b, r14b
140003b0b lea rax, [r11 + rdx]
140003b0f cmove rax, rcx
140003b13 mov qword ptr [r9 + 0x218], rax
140003b1a test r11d, r11d
140003b1d jle 0x140003c31
140003b23 imul r10, r15
140003b27 movsxd r8, r11d
140003b2a dec r8
140003b2d movsxd r11, r11d
140003b30 add r10, r12
140003b33 inc rdi
140003b36 mov qword ptr [r9 + 0x28], r10
140003b3a mov qword ptr [r9 + 0x30], rdi
140003b3e mov rax, r10
140003b41 shr rax, 0x1b
140003b45 movzx edx, al
140003b48 mov byte ptr [r9 + 0x27a], dl
140003b4f imul rdx, rbx
140003b53 lea rbx, [r8*8]
140003b5b xor rdx, rbp
140003b5e xor rdx, rsi
140003b61 mov rcx, rdx
140003b64 xor rcx, r8
140003b67 test r14b, r14b
140003b6a lea rax, [rdx + r8]
140003b6e cmove rax, rcx
140003b72 mov qword ptr [r9 + 0x218], rax
140003b79 mov rax, r11
140003b7c imul rax, qword ptr [r9 + 0x190]
140003b84 movzx ecx, byte ptr [r8 + r9 + 0x89f]
140003b8d imul rcx, qword ptr [r9 + 0x20]
140003b92 xor rcx, rax
140003b95 mov rax, qword ptr [r9 + 0x1160]
140003b9c xor rcx, qword ptr [r9 + 0x188]
140003ba3 mov rdx, rcx
140003ba6 shr rcx, 0x3a
140003baa xor rdx, qword ptr [rbx + rax]
140003bae test ecx, ecx
140003bb0 je 0x140003bb5
140003bb2 ror rdx, cl
140003bb5 imul r10, r15
140003bb9 lea rax, [rdi + 1]
140003bbd mov qword ptr [r9 + 0x30], rax
140003bc1 add r10, r12
140003bc4 mov qword ptr [r9 + 0x28], r10
140003bc8 shr r10, 0x1b
140003bcc movzx eax, r10b
140003bd0 mov byte ptr [r8 + r9 + 0x89f], al
140003bd8 imul rax, qword ptr [r9 + 0x20]
140003bdd imul r11, qword ptr [r9 + 0x190]
140003be5 xor r8, qword ptr [r9 + 0x28]
140003be9 xor rax, r11
140003bec xor rax, qword ptr [r9 + 0x188]
140003bf3 mov rcx, rax
140003bf6 shr rcx, 0x3a
140003bfa test ecx, ecx
140003bfc je 0x140003c01
140003bfe rol r8, cl
140003c01 mov rcx, qword ptr [r9 + 0x1160]
140003c08 xor r8, rax
140003c0b mov rbp, qword ptr [rsp + 0x48]
140003c10 mov rax, rdx
140003c13 mov rsi, qword ptr [rsp + 0x50]
140003c18 mov rdi, qword ptr [rsp + 0x58]
140003c1d mov qword ptr [rbx + rcx], r8
140003c21 mov rbx, qword ptr [rsp + 0x40]
140003c26 add rsp, 0x20
140003c2a pop r15
140003c2c pop r14
140003c2e pop r12
140003c30 ret 
140003c31 mov edx, 0x53504f50
140003c36 mov rcx, r9
140003c39 call 0x1400029a0
140003c3e int3 
