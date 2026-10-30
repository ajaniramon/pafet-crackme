1f0b10 mov      rax, qword ptr [rcx + 0xac8]
1f0b17 xor      rax, qword ptr [rcx + 0x348]
1f0b1e mov      rdx, rax
1f0b21 shr      rdx, 0x21
1f0b25 xor      rdx, rax
1f0b28 movabs   rax, 0xff51afd7ed558ccd
1f0b32 imul     rdx, rax
1f0b36 movabs   rax, 0xc4ceb9fe1a85ec53
1f0b40 mov      r8, rdx
1f0b43 shr      r8, 0x21
1f0b47 xor      r8, rdx
1f0b4a imul     r8, rax
1f0b4e mov      rax, r8
1f0b51 shr      rax, 0x21
1f0b55 xor      rax, qword ptr [rcx + 0x20]
1f0b59 xor      rax, r8
1f0b5c mov      qword ptr [rcx + 0x20], rax
1f0b60 ret      
