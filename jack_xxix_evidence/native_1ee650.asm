1ee650 mov      r9d, dword ptr [rcx + 0x1f4]
1ee657 mov      r11, rcx
1ee65a movzx    r10d, dl
1ee65e add      r9d, r10d
1ee661 mov      eax, r10d
1ee664 imul     rax, qword ptr [rcx + 0x238]
1ee66c movzx    edx, byte ptr [r10 + rcx + 0xb65]
1ee675 and      r9d, 1
1ee679 imul     rdx, qword ptr [rcx + 0x1a0]
1ee681 shl      r9d, 8
1ee685 xor      rdx, rax
1ee688 add      r9d, r10d
1ee68b xor      rdx, qword ptr [rcx + 0x230]
1ee692 mov      rax, qword ptr [rcx + 0x180]
1ee699 mov      r8, qword ptr [rax + r9*8]
1ee69d mov      rax, r8
1ee6a0 sub      r8, rdx
1ee6a3 xor      rax, rdx
1ee6a6 cmp      byte ptr [rcx + 0x1f8], 0
1ee6ad movabs   rcx, 0x9e3779b97f4a7c15
1ee6b7 cmove    r8, rax
1ee6bb mov      rax, qword ptr [r11 + 0x1b0]
1ee6c2 inc      qword ptr [r11 + 0x1b8]
1ee6c9 imul     rax, rcx
1ee6cd movabs   rcx, 0x2545f4914f6cdd1d
1ee6d7 add      rax, rcx
1ee6da mov      qword ptr [r11 + 0x1b0], rax
1ee6e1 shr      rax, 0x1b
1ee6e5 movzx    edx, al
1ee6e8 mov      rax, r8
1ee6eb mov      byte ptr [r10 + r11 + 0xb65], dl
1ee6f3 imul     rdx, qword ptr [r11 + 0x1a0]
1ee6fb imul     r10, qword ptr [r11 + 0x238]
1ee703 xor      rdx, r10
1ee706 xor      rdx, qword ptr [r11 + 0x230]
1ee70d mov      rcx, rdx
1ee710 add      rdx, r8
1ee713 xor      rcx, r8
1ee716 cmp      byte ptr [r11 + 0x1f8], 0
1ee71e cmove    rdx, rcx
1ee722 mov      rcx, qword ptr [r11 + 0x180]
1ee729 mov      qword ptr [rcx + r9*8], rdx
1ee72d ret      
