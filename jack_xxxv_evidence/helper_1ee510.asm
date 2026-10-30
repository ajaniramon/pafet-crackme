1ee510 mov      r9, rcx
1ee513 mov      r8d, edx
1ee516 movabs   rcx, 0x9e3779b97f4a7c15
1ee520 mov      rax, qword ptr [r9 + 0x1b0]
1ee527 inc      qword ptr [r9 + 0x1b8]
1ee52e imul     rax, rcx
1ee532 movabs   rcx, 0x2545f4914f6cdd1d
1ee53c add      rax, rcx
1ee53f mov      qword ptr [r9 + 0x1b0], rax
1ee546 shr      rax, 0x1b
1ee54a movzx    edx, al
1ee54d mov      byte ptr [r9 + 0x16a], dl
1ee554 imul     rax, qword ptr [r9 + 0xd8], 0xb
1ee55c imul     rdx, qword ptr [r9 + 0xe0]
1ee564 xor      rdx, rax
1ee567 xor      rdx, qword ptr [r9 + 0xd0]
1ee56e mov      rcx, rdx
1ee571 xor      rcx, r8
1ee574 cmp      byte ptr [r9 + 0xe8], 0
1ee57c lea      rax, [rdx + r8]
1ee580 cmove    rax, rcx
1ee584 mov      qword ptr [r9 + 0x140], rax
1ee58b ret      
