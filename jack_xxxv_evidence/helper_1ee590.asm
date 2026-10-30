1ee590 mov      qword ptr [rsp + 8], rbx
1ee595 mov      qword ptr [rsp + 0x10], rdi
1ee59a mov      r11, qword ptr [rcx + 0x158]
1ee5a1 mov      rdi, rcx
1ee5a4 imul     rbx, qword ptr [rcx + 0xd8], 0xe
1ee5ac movzx    edx, byte ptr [rcx + 0x16d]
1ee5b3 movzx    r10d, byte ptr [rcx + 0xe8]
1ee5bb mov      r8, qword ptr [rcx + 0xe0]
1ee5c2 mov      r9, qword ptr [rcx + 0xd0]
1ee5c9 movabs   rcx, 0x9e3779b97f4a7c15
1ee5d3 imul     rdx, r8
1ee5d7 xor      rdx, r9
1ee5da xor      rdx, rbx
1ee5dd mov      rax, rdx
1ee5e0 xor      rax, r11
1ee5e3 sub      r11, rdx
1ee5e6 test     r10b, r10b
1ee5e9 cmove    r11, rax
1ee5ed mov      rax, qword ptr [rdi + 0x1b0]
1ee5f4 inc      qword ptr [rdi + 0x1b8]
1ee5fb imul     rax, rcx
1ee5ff movabs   rcx, 0x2545f4914f6cdd1d
1ee609 add      rax, rcx
1ee60c mov      qword ptr [rdi + 0x1b0], rax
1ee613 shr      rax, 0x1b
1ee617 movzx    ecx, al
1ee61a mov      rax, r11
1ee61d mov      byte ptr [rdi + 0x16d], cl
1ee623 imul     rcx, r8
1ee627 xor      rcx, r9
1ee62a xor      rcx, rbx
1ee62d mov      rbx, qword ptr [rsp + 8]
1ee632 mov      rdx, rcx
1ee635 add      rcx, r11
1ee638 xor      rdx, r11
1ee63b test     r10b, r10b
1ee63e cmove    rcx, rdx
1ee642 mov      qword ptr [rdi + 0x158], rcx
1ee649 mov      rdi, qword ptr [rsp + 0x10]
1ee64e ret      
