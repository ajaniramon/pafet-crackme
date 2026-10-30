1f0bd0 mov      rax, qword ptr [rcx + 0xac8]
1f0bd7 add      rax, qword ptr [rcx + 0x20]
1f0bdb mov      rdx, rax
1f0bde shr      rdx, 0x21
1f0be2 xor      rdx, rax
1f0be5 movabs   rax, 0xff51afd7ed558ccd
1f0bef imul     rdx, rax
1f0bf3 movabs   rax, 0xc4ceb9fe1a85ec53
1f0bfd mov      r8, rdx
1f0c00 shr      r8, 0x21
1f0c04 xor      r8, rdx
1f0c07 imul     r8, rax
1f0c0b mov      rax, r8
1f0c0e shr      rax, 0x21
1f0c12 xor      rax, r8
1f0c15 mov      qword ptr [rcx + 0x20], rax
1f0c19 ret      
