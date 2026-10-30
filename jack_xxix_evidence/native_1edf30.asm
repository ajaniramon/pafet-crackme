1edf30 mov      qword ptr [rsp + 8], rdi
1edf35 mov      r11, qword ptr [rcx + 0xf0]
1edf3c mov      rdi, rcx
1edf3f movzx    edx, byte ptr [rcx + 0x160]
1edf46 movzx    r10d, byte ptr [rcx + 0xe8]
1edf4e mov      r8, qword ptr [rcx + 0xe0]
1edf55 mov      r9, qword ptr [rcx + 0xd0]
1edf5c imul     rdx, r8
1edf60 xor      rdx, r9
1edf63 xor      rdx, qword ptr [rcx + 0xd8]
1edf6a movabs   rcx, 0x9e3779b97f4a7c15
1edf74 mov      rax, rdx
1edf77 xor      rax, r11
1edf7a sub      r11, rdx
1edf7d test     r10b, r10b
1edf80 cmove    r11, rax
1edf84 mov      rax, qword ptr [rdi + 0x1b0]
1edf8b inc      qword ptr [rdi + 0x1b8]
1edf92 mov      rdx, r11
1edf95 imul     rax, rcx
1edf99 movabs   rcx, 0x2545f4914f6cdd1d
1edfa3 add      rax, rcx
1edfa6 mov      qword ptr [rdi + 0x1b0], rax
1edfad shr      rax, 0x1b
1edfb1 movzx    ecx, al
1edfb4 mov      eax, r11d
1edfb7 mov      byte ptr [rdi + 0x160], cl
1edfbd imul     rcx, r8
1edfc1 xor      rcx, r9
1edfc4 xor      rcx, qword ptr [rdi + 0xd8]
1edfcb xor      rdx, rcx
1edfce add      rcx, r11
1edfd1 test     r10b, r10b
1edfd4 cmove    rcx, rdx
1edfd8 mov      qword ptr [rdi + 0xf0], rcx
1edfdf mov      rdi, qword ptr [rsp + 8]
1edfe4 ret      
