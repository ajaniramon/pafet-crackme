14022a2c5 48b82a02f96585c47b3f movabs rax, 0x3f7bc48565f9022a
14022a2cf 33db xor ebx, ebx
14022a2d1 488d3d38f91b00 lea rdi, [rip + 0x1bf938]
14022a2d8 be760a0000 mov esi, 0xa76
14022a2dd 0f1f00 nop dword ptr [rax]
14022a2e0 0fb60f movzx ecx, byte ptr [rdi]
14022a2e3 4833cb xor rcx, rbx
14022a2e6 4833c8 xor rcx, rax
14022a2e9 e8527dddff call 0x140002040
14022a2ee 48ffc3 inc rbx
14022a2f1 488d7f01 lea rdi, [rdi + 1]
14022a2f5 4883ee01 sub rsi, 1
14022a2f9 75e5 jne 0x14022a2e0
