002430 xor      rcx, rdx
002433 mov      rax, rcx
002436 shr      rax, 0x21
00243a xor      rax, rcx
00243d movabs   rcx, 0xff51afd7ed558ccd
002447 imul     rax, rcx
00244b mov      rdx, rax
00244e shr      rdx, 0x21
002452 xor      rdx, rax
002455 movabs   rax, 0xc4ceb9fe1a85ec53
00245f imul     rdx, rax
002463 mov      rcx, rdx
002466 shr      rcx, 0x21
00246a xor      ecx, edx
00246c lea      eax, [rcx - 1]
00246f imul     eax, ecx
002472 and      eax, 1
002475 ret      
