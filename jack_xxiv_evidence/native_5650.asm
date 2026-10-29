140005650 sub rsp, 8
140005654 cmp qword ptr [rcx + 0x140], 0
14000565c mov r9, rcx
14000565f je 0x1400057fb
140005665 mov ecx, dword ptr [rcx + 0x148]
14000566b test ecx, ecx
14000566d je 0x1400057fb
140005673 cmp edx, 0x49
140005676 jae 0x1400057fb
14000567c mov r8d, dword ptr [r9 + 0x1b8]
140005683 mov eax, ecx
140005685 imul eax, edx
140005688 lea r10d, [rcx + rax]
14000568c cmp eax, r8d
14000568f jae 0x1400057fb
140005695 mov ecx, edx
140005697 cmp r10d, r8d
14000569a movabs rdx, 0x9e3779b97f4a7c15
1400056a4 mov qword ptr [rsp + 0x10], rbx
1400056a9 cmovbe r8d, r10d
1400056ad imul rcx, rdx
1400056b1 movabs rdx, 0xdc5ea5a85eb4aac3
1400056bb mov ebx, r8d
1400056be xor rcx, rdx
1400056c1 sub ebx, eax
1400056c3 mov rdx, rcx
1400056c6 shr rdx, 0x21
1400056ca xor rdx, rcx
1400056cd movabs rcx, 0xff51afd7ed558ccd
1400056d7 imul rdx, rcx
1400056db mov rcx, rdx
1400056de shr rcx, 0x21
1400056e2 xor rcx, rdx
1400056e5 movabs rdx, 0xc4ceb9fe1a85ec53
1400056ef imul rcx, rdx
1400056f3 mov rdx, rcx
1400056f6 shr rdx, 0x21
1400056fa xor rdx, rcx
1400056fd mov r11, rdx
140005700 mov rcx, rdx
140005703 shr r11, 0x15
140005707 shr rcx, 9
14000570b xor r11b, cl
14000570e xor r11b, dl
140005711 movsx ecx, r11b
140005715 movd xmm2, ecx
140005719 punpcklbw xmm2, xmm2
14000571d punpcklwd xmm2, xmm2
140005721 pshufd xmm2, xmm2, 0
140005726 cmp eax, r8d
140005729 jae 0x1400057f6
14000572f mov qword ptr [rsp], rdi
140005733 cmp ebx, 0x40
140005736 jb 0x1400057e0
14000573c lea rdi, [r9 + 0x1b0]
140005743 mov ecx, eax
140005745 mov r10, qword ptr [rdi]
140005748 lea edx, [r8 - 1]
14000574c add rdx, r10
14000574f add rcx, r10
140005752 cmp rcx, rdi
140005755 ja 0x140005760
140005757 cmp rdx, rdi
14000575a jae 0x1400057e0
140005760 and ebx, 0x3f
140005763 mov edi, r8d
140005766 sub edi, ebx
140005768 lea ebx, [rax + 0x20]
14000576b nop dword ptr [rax + rax]
140005770 movdqu xmm0, xmmword ptr [rax + r10]
140005776 lea ecx, [rbx - 0x10]
140005779 movdqa xmm1, xmm2
14000577d pxor xmm1, xmm0
140005781 movdqu xmmword ptr [rax + r10], xmm1
140005787 add eax, 0x40
14000578a movdqa xmm1, xmm2
14000578e movdqu xmm0, xmmword ptr [rcx + r10]
140005794 pxor xmm1, xmm0
140005798 movdqu xmmword ptr [rcx + r10], xmm1
14000579e lea ecx, [rbx + 0x10]
1400057a1 movdqa xmm1, xmm2
1400057a5 movdqu xmm0, xmmword ptr [rbx + r10]
1400057ab pxor xmm0, xmm2
1400057af movdqu xmmword ptr [rbx + r10], xmm0
1400057b5 lea ebx, [rbx + 0x40]
1400057b8 movdqu xmm0, xmmword ptr [rcx + r10]
1400057be pxor xmm1, xmm0
1400057c2 movdqu xmmword ptr [rcx + r10], xmm1
1400057c8 cmp eax, edi
1400057ca jb 0x140005770
1400057cc cmp eax, r8d
1400057cf jae 0x1400057f2
1400057d1 nop dword ptr [rax]
1400057d5 nop word ptr [rax + rax]
1400057e0 mov rcx, qword ptr [r9 + 0x1b0]
1400057e7 xor byte ptr [rax + rcx], r11b
1400057eb inc eax
1400057ed cmp eax, r8d
1400057f0 jb 0x1400057e0
1400057f2 mov rdi, qword ptr [rsp]
1400057f6 mov rbx, qword ptr [rsp + 0x10]
1400057fb add rsp, 8
1400057ff ret 
