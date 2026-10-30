1f0290 sub      rsp, 8
1f0294 mov      r10, rcx
1f0297 mov      ecx, dword ptr [rcx + 0xaf4]
1f029d test     ecx, ecx
1f029f je       0x1401f040b
1f02a5 mov      r9d, dword ptr [r10 + 0x1d8]
1f02ac mov      eax, ecx
1f02ae imul     eax, edx
1f02b1 cmp      eax, r9d
1f02b4 jae      0x1401f040b
1f02ba lea      r8d, [rcx + rax]
1f02be mov      qword ptr [rsp + 0x10], rbx
1f02c3 mov      ecx, edx
1f02c5 cmp      r8d, r9d
1f02c8 movabs   rdx, 0x9e3779b97f4a7c15
1f02d2 cmovbe   r9d, r8d
1f02d6 imul     rcx, rdx
1f02da movabs   rdx, 0xb05b1cd7a583065f
1f02e4 mov      ebx, r9d
1f02e7 xor      rcx, rdx
1f02ea sub      ebx, eax
1f02ec mov      rdx, rcx
1f02ef shr      rdx, 0x21
1f02f3 xor      rdx, rcx
1f02f6 movabs   rcx, 0xff51afd7ed558ccd
1f0300 imul     rdx, rcx
1f0304 mov      rcx, rdx
1f0307 shr      rcx, 0x21
1f030b xor      rcx, rdx
1f030e movabs   rdx, 0xc4ceb9fe1a85ec53
1f0318 imul     rcx, rdx
1f031c mov      rdx, rcx
1f031f shr      rdx, 0x21
1f0323 xor      rdx, rcx
1f0326 mov      r11, rdx
1f0329 mov      rcx, rdx
1f032c shr      r11, 0x10
1f0330 shr      rcx, 8
1f0334 xor      r11b, cl
1f0337 xor      r11b, dl
1f033a movsx    ecx, r11b
1f033e movd     xmm1, ecx
1f0342 punpcklbw xmm1, xmm1
1f0346 punpcklwd xmm1, xmm1
1f034a pshufd   xmm1, xmm1, 0
1f034f cmp      eax, r9d
1f0352 jae      0x1401f0406
1f0358 mov      qword ptr [rsp], rdi
1f035c cmp      ebx, 0x40
1f035f jb       0x1401f03f0
1f0365 lea      rdi, [r10 + 0x1d0]
1f036c mov      ecx, eax
1f036e mov      r8, qword ptr [rdi]
1f0371 lea      edx, [r9 - 1]
1f0375 add      rdx, r8
1f0378 add      rcx, r8
1f037b cmp      rcx, rdi
1f037e ja       0x1401f0385
1f0380 cmp      rdx, rdi
1f0383 jae      0x1401f03f0
1f0385 and      ebx, 0x3f
1f0388 mov      edi, r9d
1f038b sub      edi, ebx
1f038d lea      ebx, [rax + 0x20]
1f0390 movdqu   xmm0, xmmword ptr [rax + r8]
1f0396 lea      ecx, [rbx - 0x10]
1f0399 pxor     xmm0, xmm1
1f039d movdqu   xmmword ptr [rax + r8], xmm0
1f03a3 add      eax, 0x40
1f03a6 movdqu   xmm0, xmmword ptr [rcx + r8]
1f03ac pxor     xmm0, xmm1
1f03b0 movdqu   xmmword ptr [rcx + r8], xmm0
1f03b6 lea      ecx, [rbx + 0x10]
1f03b9 movdqu   xmm0, xmmword ptr [rbx + r8]
1f03bf pxor     xmm0, xmm1
1f03c3 movdqu   xmmword ptr [rbx + r8], xmm0
1f03c9 lea      ebx, [rbx + 0x40]
1f03cc movdqu   xmm0, xmmword ptr [rcx + r8]
1f03d2 pxor     xmm0, xmm1
1f03d6 movdqu   xmmword ptr [rcx + r8], xmm0
1f03dc cmp      eax, edi
1f03de jb       0x1401f0390
1f03e0 cmp      eax, r9d
1f03e3 jae      0x1401f0402
1f03e5 nop      word ptr [rax + rax]
1f03f0 mov      rcx, qword ptr [r10 + 0x1d0]
1f03f7 xor      byte ptr [rax + rcx], r11b
1f03fb inc      eax
1f03fd cmp      eax, r9d
1f0400 jb       0x1401f03f0
1f0402 mov      rdi, qword ptr [rsp]
1f0406 mov      rbx, qword ptr [rsp + 0x10]
1f040b add      rsp, 8
1f040f ret      
