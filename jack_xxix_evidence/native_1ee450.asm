1ee450 mov      qword ptr [rsp + 8], rbx
1ee455 mov      qword ptr [rsp + 0x10], rdi
1ee45a mov      r11, qword ptr [rcx + 0x140]
1ee461 mov      rdi, rcx
1ee464 imul     rbx, qword ptr [rcx + 0xd8], 0xb
1ee46c movzx    edx, byte ptr [rcx + 0x16a]
1ee473 movzx    r10d, byte ptr [rcx + 0xe8]
1ee47b mov      r8, qword ptr [rcx + 0xe0]
1ee482 mov      r9, qword ptr [rcx + 0xd0]
1ee489 movabs   rcx, 0x9e3779b97f4a7c15
1ee493 imul     rdx, r8
1ee497 xor      rdx, r9
1ee49a xor      rdx, rbx
1ee49d mov      rax, rdx
1ee4a0 xor      rax, r11
1ee4a3 sub      r11, rdx
1ee4a6 test     r10b, r10b
1ee4a9 cmove    r11, rax
1ee4ad mov      rax, qword ptr [rdi + 0x1b0]
1ee4b4 inc      qword ptr [rdi + 0x1b8]
1ee4bb mov      rdx, r11
1ee4be imul     rax, rcx
1ee4c2 movabs   rcx, 0x2545f4914f6cdd1d
1ee4cc add      rax, rcx
1ee4cf mov      qword ptr [rdi + 0x1b0], rax
1ee4d6 shr      rax, 0x1b
1ee4da movzx    ecx, al
1ee4dd mov      eax, r11d
1ee4e0 mov      byte ptr [rdi + 0x16a], cl
1ee4e6 imul     rcx, r8
1ee4ea xor      rcx, r9
1ee4ed xor      rcx, rbx
1ee4f0 mov      rbx, qword ptr [rsp + 8]
1ee4f5 xor      rdx, rcx
1ee4f8 add      rcx, r11
1ee4fb test     r10b, r10b
1ee4fe cmove    rcx, rdx
1ee502 mov      qword ptr [rdi + 0x140], rcx
1ee509 mov      rdi, qword ptr [rsp + 0x10]
1ee50e ret      
