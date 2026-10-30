1f0aa0 mov      rax, qword ptr [rcx + 0x348]
1f0aa7 inc      rax
1f0aaa mov      rdx, rax
1f0aad shr      rdx, 0x21
1f0ab1 xor      rdx, rax
1f0ab4 movabs   rax, 0xff51afd7ed558ccd
1f0abe imul     rdx, rax
1f0ac2 movabs   rax, 0xc4ceb9fe1a85ec53
1f0acc mov      r8, rdx
1f0acf shr      r8, 0x21
1f0ad3 xor      r8, rdx
1f0ad6 imul     r8, rax
1f0ada mov      rax, r8
1f0add shr      rax, 0x21
1f0ae1 xor      rax, r8
1f0ae4 xor      qword ptr [rcx + 0xac8], rax
1f0aeb ret      
