1f0a30 mov      r8, qword ptr [rcx + 0xac8]
1f0a37 mov      r9, rcx
1f0a3a mov      rax, r8
1f0a3d shr      rax, 7
1f0a41 xor      rax, qword ptr [rcx + 0x20]
1f0a45 mov      rdx, rax
1f0a48 shr      rdx, 0x21
1f0a4c xor      rdx, rax
1f0a4f movabs   rax, 0xff51afd7ed558ccd
1f0a59 imul     rdx, rax
1f0a5d movabs   rax, 0xc4ceb9fe1a85ec53
1f0a67 mov      rcx, rdx
1f0a6a shr      rcx, 0x21
1f0a6e xor      rcx, rdx
1f0a71 imul     rcx, rax
1f0a75 mov      rax, rcx
1f0a78 shr      rax, 0x21
1f0a7c xor      rax, rcx
1f0a7f mov      qword ptr [r9 + 0x20], rax
1f0a83 movabs   rax, 0x9e3779b97f4a7c15
1f0a8d add      rax, r8
1f0a90 mov      qword ptr [r9 + 0xac8], rax
1f0a97 ret      
