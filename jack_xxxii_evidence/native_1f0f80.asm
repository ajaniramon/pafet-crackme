1f0f80 movabs   rax, 0xd6e8feb86659fd93
1f0f8a mov      r9d, edx
1f0f8d imul     r9, rax
1f0f91 movabs   rax, 0xc2b2ae3d27d4eb4f
1f0f9b and      r8d, 1
1f0f9f imul     r8, rax
1f0fa3 mov      eax, dword ptr [rcx + 0x384]
1f0fa9 xor      r9, r8
1f0fac xor      r9, rax
1f0faf xor      r9, qword ptr [rcx + 0x350]
1f0fb6 xor      r9, qword ptr [rcx + 0x260]
1f0fbd movabs   rcx, 0xff51afd7ed558ccd
1f0fc7 xor      r9, 0x42524d4b
1f0fce mov      rax, r9
1f0fd1 shr      rax, 0x21
1f0fd5 xor      rax, r9
1f0fd8 imul     rax, rcx
1f0fdc mov      rcx, rax
1f0fdf shr      rcx, 0x21
1f0fe3 xor      rcx, rax
1f0fe6 movabs   rax, 0xc4ceb9fe1a85ec53
1f0ff0 imul     rcx, rax
1f0ff4 mov      rax, rcx
1f0ff7 shr      rax, 0x21
1f0ffb xor      rax, rcx
1f0ffe ret      
