1f09d0 mov      rax, qword ptr [rcx + 0xac8]
1f09d7 mov      r8, rcx
1f09da xor      rax, qword ptr [rcx + 0x348]
1f09e1 mov      rdx, rax
1f09e4 shr      rdx, 0x21
1f09e8 xor      rdx, rax
1f09eb movabs   rax, 0xff51afd7ed558ccd
1f09f5 imul     rdx, rax
1f09f9 movabs   rax, 0xc4ceb9fe1a85ec53
1f0a03 mov      rcx, rdx
1f0a06 shr      rcx, 0x21
1f0a0a xor      rcx, rdx
1f0a0d imul     rcx, rax
1f0a11 mov      rax, rcx
1f0a14 shr      rax, 0x21
1f0a18 xor      rax, rcx
1f0a1b mov      qword ptr [r8 + 0x348], rax
1f0a22 ret      
