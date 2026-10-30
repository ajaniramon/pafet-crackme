1ee070 mov      qword ptr [rsp + 8], rbx
1ee075 mov      qword ptr [rsp + 0x10], rdi
1ee07a mov      r11, qword ptr [rcx + 0xf8]
1ee081 mov      rdi, rcx
1ee084 movzx    edx, byte ptr [rcx + 0x161]
1ee08b movzx    r9d, byte ptr [rcx + 0xe8]
1ee093 mov      r10, qword ptr [rcx + 0xe0]
1ee09a mov      rbx, qword ptr [rcx + 0xd8]
1ee0a1 mov      r8, qword ptr [rcx + 0xd0]
1ee0a8 add      rbx, rbx
1ee0ab imul     rdx, r10
1ee0af movabs   rcx, 0x9e3779b97f4a7c15
1ee0b9 xor      rdx, r8
1ee0bc xor      rdx, rbx
1ee0bf mov      rax, rdx
1ee0c2 xor      rax, r11
1ee0c5 sub      r11, rdx
1ee0c8 test     r9b, r9b
1ee0cb cmove    r11, rax
1ee0cf mov      rax, qword ptr [rdi + 0x1b0]
1ee0d6 inc      qword ptr [rdi + 0x1b8]
1ee0dd mov      rdx, r11
1ee0e0 imul     rax, rcx
1ee0e4 movabs   rcx, 0x2545f4914f6cdd1d
1ee0ee add      rax, rcx
1ee0f1 mov      qword ptr [rdi + 0x1b0], rax
1ee0f8 shr      rax, 0x1b
1ee0fc movzx    ecx, al
1ee0ff mov      eax, r11d
1ee102 mov      byte ptr [rdi + 0x161], cl
1ee108 imul     rcx, r10
1ee10c xor      rcx, r8
1ee10f xor      rcx, rbx
1ee112 mov      rbx, qword ptr [rsp + 8]
1ee117 xor      rdx, rcx
1ee11a add      rcx, r11
1ee11d test     r9b, r9b
1ee120 cmove    rcx, rdx
1ee124 mov      qword ptr [rdi + 0xf8], rcx
1ee12b mov      rdi, qword ptr [rsp + 0x10]
1ee130 ret      
