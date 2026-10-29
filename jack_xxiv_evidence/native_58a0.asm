1400058a0 push rbx
1400058a2 sub rsp, 0x40
1400058a6 mov rbx, rcx
1400058a9 mov r10d, edx
1400058ac mov ecx, dword ptr [rcx + 0x130]
1400058b2 test ecx, ecx
1400058b4 je 0x140005b49
1400058ba mov eax, dword ptr [rbx + 0x1b8]
1400058c0 test eax, eax
1400058c2 je 0x140005b49
1400058c8 mov qword ptr [rsp + 0x50], rbp
1400058cd mov qword ptr [rsp + 0x58], rsi
1400058d2 mov qword ptr [rsp + 0x60], rdi
1400058d7 mov qword ptr [rsp + 0x38], r12
1400058dc mov qword ptr [rsp + 0x30], r13
1400058e1 mov qword ptr [rsp + 0x20], r15
1400058e6 cmp r8d, eax
1400058e9 jb 0x1400058ef
1400058eb lea r8d, [rax - 1]
1400058ef mov r11d, dword ptr [rbx + 0x148]
1400058f6 cmp r10d, r8d
1400058f9 cmova r10d, r8d
1400058fd dec eax
1400058ff xor edx, edx
140005901 add eax, ecx
140005903 div ecx
140005905 xor edx, edx
140005907 mov esi, eax
140005909 mov eax, r10d
14000590c div ecx
14000590e lea r13d, [rsi - 1]
140005912 cmp eax, esi
140005914 mov r15d, r13d
140005917 mov edi, r13d
14000591a cmovb r15d, eax
14000591e xor edx, edx
140005920 mov eax, r8d
140005923 div ecx
140005925 cmp eax, esi
140005927 cmovb edi, eax
14000592a xor r9d, r9d
14000592d mov ebp, r9d
140005930 mov edx, r9d
140005933 test r11d, r11d
140005936 je 0x14000595b
140005938 mov eax, r10d
14000593b div r11d
14000593e xor edx, edx
140005940 mov ebp, eax
140005942 mov eax, r8d
140005945 div r11d
140005948 cmp ebp, 0x49
14000594b mov edx, eax
14000594d mov eax, 0x48
140005952 cmovae ebp, eax
140005955 cmp edx, 0x49
140005958 cmovae edx, eax
14000595b mov ecx, edi
14000595d sub ecx, r15d
140005960 cmp ecx, 1
140005963 ja 0x140005988
140005965 mov eax, dword ptr [rbx + 0x12c]
14000596b lea ecx, [rax + 1]
14000596e cmp r15d, eax
140005971 je 0x140005978
140005973 cmp r15d, ecx
140005976 jne 0x140005988
140005978 cmp edi, eax
14000597a je 0x140005980
14000597c cmp edi, ecx
14000597e jne 0x140005988
140005980 mov r12d, 1
140005986 jmp 0x14000598b
140005988 mov r12d, r9d
14000598b test r11d, r11d
14000598e je 0x1400059b7
140005990 mov eax, edx
140005992 sub eax, ebp
140005994 cmp eax, 1
140005997 ja 0x1400059bd
140005999 mov ecx, dword ptr [rbx + 0x14c]
14000599f cmp ecx, -1
1400059a2 je 0x1400059bd
1400059a4 lea eax, [rcx + 1]
1400059a7 cmp ebp, ecx
1400059a9 je 0x1400059af
1400059ab cmp ebp, eax
1400059ad jne 0x1400059bd
1400059af cmp edx, ecx
1400059b1 je 0x1400059b7
1400059b3 cmp edx, eax
1400059b5 jne 0x1400059bd
1400059b7 mov r9d, 1
1400059bd test r12d, r12d
1400059c0 je 0x1400059cb
1400059c2 test r9d, r9d
1400059c5 jne 0x140005b2b
1400059cb mov edx, dword ptr [rbx + 0x14c]
1400059d1 cmp edx, -1
1400059d4 je 0x140005a5f
1400059da mov rcx, qword ptr [rbx + 0x140]
1400059e1 mov r8d, edx
1400059e4 mov qword ptr [rsp + 0x28], r14
1400059e9 mov rax, rcx
1400059ec test rcx, rcx
1400059ef je 0x140005a26
1400059f1 test r11d, r11d
1400059f4 je 0x140005a26
1400059f6 cmp edx, 0x49
1400059f9 jae 0x140005a26
1400059fb cmp byte ptr [rdx + rcx], 0
1400059ff mov r14d, edx
140005a02 je 0x140005a26
140005a04 mov rcx, rbx
140005a07 call 0x140005650
140005a0c mov rax, qword ptr [rbx + 0x140]
140005a13 mov byte ptr [r14 + rax], 0
140005a18 mov r8d, dword ptr [rbx + 0x14c]
140005a1f mov rax, qword ptr [rbx + 0x140]
140005a26 lea edx, [r8 + 1]
140005a2a test rax, rax
140005a2d je 0x140005a5a
140005a2f cmp dword ptr [rbx + 0x148], 0
140005a36 je 0x140005a5a
140005a38 cmp edx, 0x49
140005a3b jae 0x140005a5a
140005a3d cmp byte ptr [rdx + rax], 0
140005a41 mov r14d, edx
140005a44 je 0x140005a5a
140005a46 mov rcx, rbx
140005a49 call 0x140005650
140005a4e mov rax, qword ptr [rbx + 0x140]
140005a55 mov byte ptr [r14 + rax], 0
140005a5a mov r14, qword ptr [rsp + 0x28]
140005a5f test r12d, r12d
140005a62 jne 0x140005b18
140005a68 mov edx, dword ptr [rbx + 0x12c]
140005a6e mov rcx, rbx
140005a71 call 0x1400054d0
140005a76 mov edx, dword ptr [rbx + 0x12c]
140005a7c inc edx
140005a7e cmp edx, esi
140005a80 jae 0x140005a8a
140005a82 mov rcx, rbx
140005a85 call 0x1400054d0
140005a8a mov edx, r13d
140005a8d cmp r15d, esi
140005a90 mov rcx, rbx
140005a93 cmovb edx, r15d
140005a97 mov dword ptr [rbx + 0x12c], edx
140005a9d call 0x1400054d0
140005aa2 mov edx, dword ptr [rbx + 0x12c]
140005aa8 lea eax, [rdx + 1]
140005aab cmp eax, esi
140005aad jae 0x140005abf
140005aaf mov edx, eax
140005ab1 mov rcx, rbx
140005ab4 call 0x1400054d0
140005ab9 mov edx, dword ptr [rbx + 0x12c]
140005abf cmp edi, edx
140005ac1 je 0x140005b18
140005ac3 lea eax, [rdx + 1]
140005ac6 cmp edi, eax
140005ac8 je 0x140005b18
140005aca mov rcx, rbx
140005acd call 0x1400054d0
140005ad2 mov edx, dword ptr [rbx + 0x12c]
140005ad8 inc edx
140005ada cmp edx, esi
140005adc jae 0x140005ae6
140005ade mov rcx, rbx
140005ae1 call 0x1400054d0
140005ae6 test edi, edi
140005ae8 je 0x140005aec
140005aea dec edi
140005aec cmp edi, esi
140005aee mov rcx, rbx
140005af1 cmovb r13d, edi
140005af5 mov edx, r13d
140005af8 mov dword ptr [rbx + 0x12c], r13d
140005aff call 0x1400054d0
140005b04 mov edx, dword ptr [rbx + 0x12c]
140005b0a inc edx
140005b0c cmp edx, esi
140005b0e jae 0x140005b18
140005b10 mov rcx, rbx
140005b13 call 0x1400054d0
140005b18 cmp dword ptr [rbx + 0x148], 0
140005b1f je 0x140005b2b
140005b21 mov edx, ebp
140005b23 mov rcx, rbx
140005b26 call 0x140005800
140005b2b mov r13, qword ptr [rsp + 0x30]
140005b30 mov r12, qword ptr [rsp + 0x38]
140005b35 mov rdi, qword ptr [rsp + 0x60]
140005b3a mov rsi, qword ptr [rsp + 0x58]
140005b3f mov rbp, qword ptr [rsp + 0x50]
140005b44 mov r15, qword ptr [rsp + 0x20]
140005b49 add rsp, 0x40
140005b4d pop rbx
140005b4e ret 
