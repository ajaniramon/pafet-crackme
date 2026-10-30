14003f6e5 48b839d36e6b5d2e00f7 movabs rax, 0xf7002e5d6b6ed339
14003f6ef 33db xor ebx, ebx
14003f6f1 488d3d28593a00 lea rdi, [rip + 0x3a5928]
14003f6f8 bed8060000 mov esi, 0x6d8
14003f6fd 0f1f00 nop dword ptr [rax]
14003f700 0fb60f movzx ecx, byte ptr [rdi]
14003f703 4833cb xor rcx, rbx
14003f706 4833c8 xor rcx, rax
14003f709 e83229fcff call 0x140002040
14003f70e 48ffc3 inc rbx
14003f711 488d7f01 lea rdi, [rdi + 1]
14003f715 4883ee01 sub rsi, 1
14003f719 75e5 jne 0x14003f700
