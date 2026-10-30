1ed270 push     rsi
1ed272 sub      rsp, 0x20
1ed276 mov      esi, ecx
1ed278 cmp      ecx, 0x67
1ed27b jae      0x1401ed2f1
1ed27d mov      qword ptr [rsp + 0x30], rbx
1ed282 xor      ebx, ebx
1ed284 mov      qword ptr [rsp + 0x38], rdi
1ed289 mov      edi, ebx
1ed28b test     ecx, ecx
1ed28d je       0x1401ed2df
1ed28f lea      eax, [rcx - 1]
1ed292 mov      ecx, eax
1ed294 call     0x1401ecfc0
1ed299 cmp      eax, 0x66
1ed29c jb       0x1401ed2a9
1ed29e inc      edi
1ed2a0 cmp      edi, 0x40
1ed2a3 jl       0x1401ed292
1ed2a5 mov      eax, esi
1ed2a7 jmp      0x1401ed2ab
1ed2a9 inc      eax
1ed2ab imul     edi, eax, 0x1a
1ed2ae cmp      edi, 0xa76
1ed2b4 jae      0x1401ed2fc
1ed2b6 lea      eax, [rsi - 1]
1ed2b9 nop      dword ptr [rax]
1ed2c0 mov      ecx, eax
1ed2c2 call     0x1401ecfc0
1ed2c7 cmp      eax, 0x66
1ed2ca jb       0x1401ed2d5
1ed2cc inc      ebx
1ed2ce cmp      ebx, 0x40
1ed2d1 jl       0x1401ed2c0
1ed2d3 jmp      0x1401ed2d8
1ed2d5 lea      esi, [rax + 1]
1ed2d8 imul     eax, esi, 0x1a
1ed2db cmp      edi, eax
1ed2dd jne      0x1401ed2fc
1ed2df mov      rbx, qword ptr [rsp + 0x30]
1ed2e4 mov      eax, edi
1ed2e6 mov      rdi, qword ptr [rsp + 0x38]
1ed2eb add      rsp, 0x20
1ed2ef pop      rsi
1ed2f0 ret      
1ed2f1 mov      ecx, 0x424c4b49
1ed2f6 call     0x1401edd90
1ed2fb int3     
1ed2fc mov      ecx, 0x424c4b50
1ed301 call     0x1401edd90
1ed306 int3     
