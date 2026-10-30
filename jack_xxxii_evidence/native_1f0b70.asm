1f0b70 mov      rax, qword ptr [rcx + 0x20]
1f0b74 mov      r8, rcx
1f0b77 xor      rax, qword ptr [rcx + 0xac8]
1f0b7e mov      rdx, rax
1f0b81 shr      rdx, 0x21
1f0b85 xor      rdx, rax
1f0b88 movabs   rax, 0xff51afd7ed558ccd
1f0b92 imul     rdx, rax
1f0b96 movabs   rax, 0xc4ceb9fe1a85ec53
1f0ba0 mov      rcx, rdx
1f0ba3 shr      rcx, 0x21
1f0ba7 xor      rcx, rdx
1f0baa imul     rcx, rax
1f0bae mov      rax, rcx
1f0bb1 shr      rax, 0x21
1f0bb5 xor      rax, rcx
1f0bb8 mov      qword ptr [r8 + 0xac8], rax
1f0bbf ret      
