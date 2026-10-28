14039d740 48895c2410 mov qword ptr [rsp + 0x10], rbx
14039d745 48897c2418 mov qword ptr [rsp + 0x18], rdi
14039d74a 55 push rbp
14039d74b 488dac2430feffff lea rbp, [rsp - 0x1d0]
14039d753 4881ecd0020000 sub rsp, 0x2d0
14039d75a 488b05bff80600 mov rax, qword ptr [rip + 0x6f8bf]
14039d761 4833c4 xor rax, rsp
14039d764 488985c0010000 mov qword ptr [rbp + 0x1c0], rax
14039d76b 448b02 mov r8d, dword ptr [rdx]
14039d76e 4585c0 test r8d, r8d
14039d771 0f842d010000 je 0x14039d8a4
14039d777 4183e801 sub r8d, 1
14039d77b 7417 je 0x14039d794
14039d77d 4183f801 cmp r8d, 1
14039d781 0f8546010000 jne 0x14039d8cd
14039d787 488b5920 mov rbx, qword ptr [rcx + 0x20]
14039d78b 488b7908 mov rdi, qword ptr [rcx + 8]
14039d78f e918010000 jmp 0x14039d8ac
14039d794 488b4108 mov rax, qword ptr [rcx + 8]
14039d798 488b5010 mov rdx, qword ptr [rax + 0x10]
14039d79c 4883781810 cmp qword ptr [rax + 0x18], 0x10
14039d7a1 7203 jb 0x14039d7a6
14039d7a3 488b00 mov rax, qword ptr [rax]
14039d7a6 488b5918 mov rbx, qword ptr [rcx + 0x18]
14039d7aa 4889542430 mov qword ptr [rsp + 0x30], rdx
14039d7af 4889442438 mov qword ptr [rsp + 0x38], rax
14039d7b4 33d2 xor edx, edx
14039d7b6 41b8c0000000 mov r8d, 0xc0
14039d7bc 488d4d00 lea rcx, [rbp]
14039d7c0 e85b8f0000 call 0x1403a6720
14039d7c5 488d45b8 lea rax, [rbp - 0x48]
14039d7c9 488945a0 mov qword ptr [rbp - 0x60], rax
14039d7cd 488d442424 lea rax, [rsp + 0x24]
14039d7d2 4889442440 mov qword ptr [rsp + 0x40], rax
14039d7d7 488d85c0000000 lea rax, [rbp + 0xc0]
14039d7de 4889442448 mov qword ptr [rsp + 0x48], rax
14039d7e3 488d442420 lea rax, [rsp + 0x20]
14039d7e8 4889442450 mov qword ptr [rsp + 0x50], rax
14039d7ed 48895c2458 mov qword ptr [rsp + 0x58], rbx
14039d7f2 488d45a8 lea rax, [rbp - 0x58]
14039d7f6 4889442460 mov qword ptr [rsp + 0x60], rax
14039d7fb 488d442428 lea rax, [rsp + 0x28]
14039d800 4889442468 mov qword ptr [rsp + 0x68], rax
14039d805 488d442421 lea rax, [rsp + 0x21]
14039d80a 4889442470 mov qword ptr [rsp + 0x70], rax
14039d80f 488d442422 lea rax, [rsp + 0x22]
14039d814 4889442478 mov qword ptr [rsp + 0x78], rax
14039d819 488d45b0 lea rax, [rbp - 0x50]
14039d81d 48894580 mov qword ptr [rbp - 0x80], rax
14039d821 488d442430 lea rax, [rsp + 0x30]
14039d826 48894588 mov qword ptr [rbp - 0x78], rax
14039d82a 488d442423 lea rax, [rsp + 0x23]
14039d82f 48894590 mov qword ptr [rbp - 0x70], rax
14039d833 488d442438 lea rax, [rsp + 0x38]
14039d838 48894598 mov qword ptr [rbp - 0x68], rax
14039d83c 48c745f000000000 mov qword ptr [rbp - 0x10], 0
14039d844 b968000000 mov ecx, 0x68
14039d849 e832680000 call 0x1403a4080
14039d84e 488d0dcb3f0500 lea rcx, [rip + 0x53fcb]
14039d855 488908 mov qword ptr [rax], rcx
14039d858 0f28442440 movaps xmm0, xmmword ptr [rsp + 0x40]
14039d85d 0f114008 movups xmmword ptr [rax + 8], xmm0
14039d861 0f284c2450 movaps xmm1, xmmword ptr [rsp + 0x50]
14039d866 0f114818 movups xmmword ptr [rax + 0x18], xmm1
14039d86a 0f28442460 movaps xmm0, xmmword ptr [rsp + 0x60]
14039d86f 0f114028 movups xmmword ptr [rax + 0x28], xmm0
14039d873 0f284c2470 movaps xmm1, xmmword ptr [rsp + 0x70]
14039d878 0f114838 movups xmmword ptr [rax + 0x38], xmm1
14039d87c 0f284580 movaps xmm0, xmmword ptr [rbp - 0x80]
14039d880 0f114048 movups xmmword ptr [rax + 0x48], xmm0
14039d884 0f284d90 movaps xmm1, xmmword ptr [rbp - 0x70]
14039d888 0f114858 movups xmmword ptr [rax + 0x58], xmm1
14039d88c 488945f0 mov qword ptr [rbp - 0x10], rax
14039d890 4c8d45b8 lea r8, [rbp - 0x48]
14039d894 ba18000000 mov edx, 0x18
14039d899 488d4d00 lea rcx, [rbp]
14039d89d e87ec8e8ff call 0x14022a120
14039d8a2 eb29 jmp 0x14039d8cd
14039d8a4 488b5908 mov rbx, qword ptr [rcx + 8]
14039d8a8 488b7910 mov rdi, qword ptr [rcx + 0x10]
14039d8ac 807b2000 cmp byte ptr [rbx + 0x20], 0
14039d8b0 740c je 0x14039d8be
14039d8b2 488bcb mov rcx, rbx
14039d8b5 e806bfffff call 0x1403997c0
14039d8ba c6432000 mov byte ptr [rbx + 0x20], 0
14039d8be 488bd7 mov rdx, rdi
14039d8c1 488bcb mov rcx, rbx
14039d8c4 e817acffff call 0x1403984e0
14039d8c9 c6432001 mov byte ptr [rbx + 0x20], 1
14039d8cd 33c0 xor eax, eax
14039d8cf 488b8dc0010000 mov rcx, qword ptr [rbp + 0x1c0]
14039d8d6 4833cc xor rcx, rsp
14039d8d9 e8e2640000 call 0x1403a3dc0
14039d8de 4c8d9c24d0020000 lea r11, [rsp + 0x2d0]
14039d8e6 498b5b18 mov rbx, qword ptr [r11 + 0x18]
14039d8ea 498b7b20 mov rdi, qword ptr [r11 + 0x20]
14039d8ee 498be3 mov rsp, r11
14039d8f1 5d pop rbp
14039d8f2 c3 ret 
