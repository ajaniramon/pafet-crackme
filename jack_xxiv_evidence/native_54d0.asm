1400054d0 sub rsp, 8
1400054d4 mov r10, rcx
1400054d7 mov ecx, dword ptr [rcx + 0x130]
1400054dd test ecx, ecx
1400054df je 0x14000564b
1400054e5 mov r9d, dword ptr [r10 + 0x1b8]
1400054ec mov eax, ecx
1400054ee imul eax, edx
1400054f1 cmp eax, r9d
1400054f4 jae 0x14000564b
1400054fa lea r8d, [rcx + rax]
1400054fe mov qword ptr [rsp + 0x10], rbx
140005503 mov ecx, edx
140005505 cmp r8d, r9d
140005508 movabs rdx, 0x9e3779b97f4a7c15
140005512 cmovbe r9d, r8d
140005516 imul rcx, rdx
14000551a movabs rdx, 0xdc5ea5a84fbda6c2
140005524 mov ebx, r9d
140005527 xor rcx, rdx
14000552a sub ebx, eax
14000552c mov rdx, rcx
14000552f shr rdx, 0x21
140005533 xor rdx, rcx
140005536 movabs rcx, 0xff51afd7ed558ccd
140005540 imul rdx, rcx
140005544 mov rcx, rdx
140005547 shr rcx, 0x21
14000554b xor rcx, rdx
14000554e movabs rdx, 0xc4ceb9fe1a85ec53
140005558 imul rcx, rdx
14000555c mov rdx, rcx
14000555f shr rdx, 0x21
140005563 xor rdx, rcx
140005566 mov r11, rdx
140005569 mov rcx, rdx
14000556c shr r11, 0x10
140005570 shr rcx, 8
140005574 xor r11b, cl
140005577 xor r11b, dl
14000557a movsx ecx, r11b
14000557e movd xmm1, ecx
140005582 punpcklbw xmm1, xmm1
140005586 punpcklwd xmm1, xmm1
14000558a pshufd xmm1, xmm1, 0
14000558f cmp eax, r9d
140005592 jae 0x140005646
140005598 mov qword ptr [rsp], rdi
14000559c cmp ebx, 0x40
14000559f jb 0x140005630
1400055a5 lea rdi, [r10 + 0x1b0]
1400055ac mov ecx, eax
1400055ae mov r8, qword ptr [rdi]
1400055b1 lea edx, [r9 - 1]
1400055b5 add rdx, r8
1400055b8 add rcx, r8
1400055bb cmp rcx, rdi
1400055be ja 0x1400055c5
1400055c0 cmp rdx, rdi
1400055c3 jae 0x140005630
1400055c5 and ebx, 0x3f
1400055c8 mov edi, r9d
1400055cb sub edi, ebx
1400055cd lea ebx, [rax + 0x20]
1400055d0 movdqu xmm0, xmmword ptr [rax + r8]
1400055d6 lea ecx, [rbx - 0x10]
1400055d9 pxor xmm0, xmm1
1400055dd movdqu xmmword ptr [rax + r8], xmm0
1400055e3 add eax, 0x40
1400055e6 movdqu xmm0, xmmword ptr [rcx + r8]
1400055ec pxor xmm0, xmm1
1400055f0 movdqu xmmword ptr [rcx + r8], xmm0
1400055f6 lea ecx, [rbx + 0x10]
1400055f9 movdqu xmm0, xmmword ptr [rbx + r8]
1400055ff pxor xmm0, xmm1
140005603 movdqu xmmword ptr [rbx + r8], xmm0
140005609 lea ebx, [rbx + 0x40]
14000560c movdqu xmm0, xmmword ptr [rcx + r8]
140005612 pxor xmm0, xmm1
140005616 movdqu xmmword ptr [rcx + r8], xmm0
14000561c cmp eax, edi
14000561e jb 0x1400055d0
140005620 cmp eax, r9d
140005623 jae 0x140005642
140005625 nop word ptr [rax + rax]
140005630 mov rcx, qword ptr [r10 + 0x1b0]
140005637 xor byte ptr [rax + rcx], r11b
14000563b inc eax
14000563d cmp eax, r9d
140005640 jb 0x140005630
140005642 mov rdi, qword ptr [rsp]
140005646 mov rbx, qword ptr [rsp + 0x10]
14000564b add rsp, 8
14000564f ret 
