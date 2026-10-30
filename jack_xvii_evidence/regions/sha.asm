14027ad87 48b82427fb5db678f0e0 movabs rax, 0xe0f078b65dfb2724
14027ad91 33db xor ebx, ebx
14027ad93 488d3d76911600 lea rdi, [rip + 0x169176]
14027ad9a beb60d0000 mov esi, 0xdb6
14027ad9f 90 nop
14027ada0 0fb60f movzx ecx, byte ptr [rdi]
14027ada3 4833cb xor rcx, rbx
14027ada6 4833c8 xor rcx, rax
14027ada9 e89272d8ff call 0x140002040
14027adae 48ffc3 inc rbx
14027adb1 488d7f01 lea rdi, [rdi + 1]
14027adb5 4883ee01 sub rsi, 1
14027adb9 75e5 jne 0x14027ada0
