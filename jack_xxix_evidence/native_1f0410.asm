1f0410 sub      rsp, 8
1f0414 cmp      qword ptr [rcx + 0xb50], 0
1f041c mov      r9, rcx
1f041f je       0x1401f05bb
1f0425 mov      ecx, dword ptr [rcx + 0xb58]
1f042b test     ecx, ecx
1f042d je       0x1401f05bb
1f0433 cmp      edx, 0x67
1f0436 jae      0x1401f05bb
1f043c mov      r8d, dword ptr [r9 + 0x1d8]
1f0443 mov      eax, ecx
1f0445 imul     eax, edx
1f0448 lea      r10d, [rcx + rax]
1f044c cmp      eax, r8d
1f044f jae      0x1401f05bb
1f0455 mov      ecx, edx
1f0457 cmp      r10d, r8d
1f045a movabs   rdx, 0x9e3779b97f4a7c15
1f0464 mov      qword ptr [rsp + 0x10], rbx
1f0469 cmovbe   r8d, r10d
1f046d imul     rcx, rdx
1f0471 movabs   rdx, 0xb05b1cd7b48a0a5e
1f047b mov      ebx, r8d
1f047e xor      rcx, rdx
1f0481 sub      ebx, eax
1f0483 mov      rdx, rcx
1f0486 shr      rdx, 0x21
1f048a xor      rdx, rcx
1f048d movabs   rcx, 0xff51afd7ed558ccd
1f0497 imul     rdx, rcx
1f049b mov      rcx, rdx
1f049e shr      rcx, 0x21
1f04a2 xor      rcx, rdx
1f04a5 movabs   rdx, 0xc4ceb9fe1a85ec53
1f04af imul     rcx, rdx
1f04b3 mov      rdx, rcx
1f04b6 shr      rdx, 0x21
1f04ba xor      rdx, rcx
1f04bd mov      r11, rdx
1f04c0 mov      rcx, rdx
1f04c3 shr      r11, 0x15
1f04c7 shr      rcx, 9
1f04cb xor      r11b, cl
1f04ce xor      r11b, dl
1f04d1 movsx    ecx, r11b
1f04d5 movd     xmm2, ecx
1f04d9 punpcklbw xmm2, xmm2
1f04dd punpcklwd xmm2, xmm2
1f04e1 pshufd   xmm2, xmm2, 0
1f04e6 cmp      eax, r8d
1f04e9 jae      0x1401f05b6
1f04ef mov      qword ptr [rsp], rdi
1f04f3 cmp      ebx, 0x40
1f04f6 jb       0x1401f05a0
1f04fc lea      rdi, [r9 + 0x1d0]
1f0503 mov      ecx, eax
1f0505 mov      r10, qword ptr [rdi]
1f0508 lea      edx, [r8 - 1]
1f050c add      rdx, r10
1f050f add      rcx, r10
1f0512 cmp      rcx, rdi
1f0515 ja       0x1401f0520
1f0517 cmp      rdx, rdi
1f051a jae      0x1401f05a0
1f0520 and      ebx, 0x3f
1f0523 mov      edi, r8d
1f0526 sub      edi, ebx
1f0528 lea      ebx, [rax + 0x20]
1f052b nop      dword ptr [rax + rax]
1f0530 movdqu   xmm0, xmmword ptr [rax + r10]
1f0536 lea      ecx, [rbx - 0x10]
1f0539 movdqa   xmm1, xmm2
1f053d pxor     xmm1, xmm0
1f0541 movdqu   xmmword ptr [rax + r10], xmm1
1f0547 add      eax, 0x40
1f054a movdqa   xmm1, xmm2
1f054e movdqu   xmm0, xmmword ptr [rcx + r10]
1f0554 pxor     xmm1, xmm0
1f0558 movdqu   xmmword ptr [rcx + r10], xmm1
1f055e lea      ecx, [rbx + 0x10]
1f0561 movdqa   xmm1, xmm2
1f0565 movdqu   xmm0, xmmword ptr [rbx + r10]
1f056b pxor     xmm0, xmm2
1f056f movdqu   xmmword ptr [rbx + r10], xmm0
1f0575 lea      ebx, [rbx + 0x40]
1f0578 movdqu   xmm0, xmmword ptr [rcx + r10]
1f057e pxor     xmm1, xmm0
1f0582 movdqu   xmmword ptr [rcx + r10], xmm1
1f0588 cmp      eax, edi
1f058a jb       0x1401f0530
1f058c cmp      eax, r8d
1f058f jae      0x1401f05b2
1f0591 nop      dword ptr [rax]
1f0595 nop      word ptr [rax + rax]
1f05a0 mov      rcx, qword ptr [r9 + 0x1d0]
1f05a7 xor      byte ptr [rax + rcx], r11b
1f05ab inc      eax
1f05ad cmp      eax, r8d
1f05b0 jb       0x1401f05a0
1f05b2 mov      rdi, qword ptr [rsp]
1f05b6 mov      rbx, qword ptr [rsp + 0x10]
1f05bb add      rsp, 8
1f05bf ret      
