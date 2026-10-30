1eddd0 mov      r11, rcx
1eddd3 movsxd   r8, edx
1eddd6 lea      eax, [rdx + 1]
1eddd9 movsxd   r10, eax
1edddc mov      rax, r10
1edddf imul     rax, qword ptr [rcx + 0xd8]
1edde7 mov      r9, qword ptr [rcx + r8*8 + 0xf0]
1eddef movzx    edx, byte ptr [r8 + rcx + 0x160]
1eddf8 imul     rdx, qword ptr [rcx + 0xe0]
1ede00 xor      rdx, rax
1ede03 xor      rdx, qword ptr [rcx + 0xd0]
1ede0a mov      rax, rdx
1ede0d xor      rax, r9
1ede10 sub      r9, rdx
1ede13 cmp      byte ptr [rcx + 0xe8], 0
1ede1a movabs   rcx, 0x9e3779b97f4a7c15
1ede24 cmove    r9, rax
1ede28 mov      rax, qword ptr [r11 + 0x1b0]
1ede2f inc      qword ptr [r11 + 0x1b8]
1ede36 imul     rax, rcx
1ede3a movabs   rcx, 0x2545f4914f6cdd1d
1ede44 add      rax, rcx
1ede47 mov      qword ptr [r11 + 0x1b0], rax
1ede4e shr      rax, 0x1b
1ede52 movzx    ecx, al
1ede55 mov      rax, r9
1ede58 mov      byte ptr [r8 + r11 + 0x160], cl
1ede60 imul     rcx, qword ptr [r11 + 0xe0]
1ede68 imul     r10, qword ptr [r11 + 0xd8]
1ede70 xor      rcx, r10
1ede73 xor      rcx, qword ptr [r11 + 0xd0]
1ede7a mov      rdx, rcx
1ede7d add      rcx, r9
1ede80 xor      rdx, r9
1ede83 cmp      byte ptr [r11 + 0xe8], 0
1ede8b cmove    rcx, rdx
1ede8f mov      qword ptr [r11 + r8*8 + 0xf0], rcx
1ede97 ret      
