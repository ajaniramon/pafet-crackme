1edea0 mov      r10, rcx
1edea3 mov      r9, r8
1edea6 movsxd   r8, edx
1edea9 movabs   rcx, 0x9e3779b97f4a7c15
1edeb3 mov      rax, qword ptr [r10 + 0x1b0]
1edeba inc      qword ptr [r10 + 0x1b8]
1edec1 imul     rax, rcx
1edec5 movabs   rcx, 0x2545f4914f6cdd1d
1edecf add      rax, rcx
1eded2 mov      qword ptr [r10 + 0x1b0], rax
1eded9 shr      rax, 0x1b
1ededd movzx    ecx, al
1edee0 lea      eax, [rdx + 1]
1edee3 mov      byte ptr [r8 + r10 + 0x160], cl
1edeeb imul     rcx, qword ptr [r10 + 0xe0]
1edef3 movsxd   rdx, eax
1edef6 imul     rdx, qword ptr [r10 + 0xd8]
1edefe xor      rdx, rcx
1edf01 xor      rdx, qword ptr [r10 + 0xd0]
1edf08 mov      rcx, rdx
1edf0b xor      rcx, r9
1edf0e cmp      byte ptr [r10 + 0xe8], 0
1edf16 lea      rax, [rdx + r9]
1edf1a cmove    rax, rcx
1edf1e mov      qword ptr [r10 + r8*8 + 0xf0], rax
1edf26 ret      
