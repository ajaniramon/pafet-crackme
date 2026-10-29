1400071e0 mov qword ptr [rsp + 8], rbx
1400071e5 mov qword ptr [rsp + 0x10], rbp
1400071ea mov qword ptr [rsp + 0x18], rsi
1400071ef push rdi
1400071f0 sub rsp, 0x20
1400071f4 mov rdi, qword ptr [rcx + 0x210]
1400071fb mov rbx, rcx
1400071fe movzx r8d, byte ptr [rcx + 0x200]
140007206 movabs rsi, 0x9e3779b97f4a7c15
140007210 mov r10, qword ptr [rcx + 0x1f8]
140007217 movabs rbp, 0x2545f4914f6cdd1d
140007221 movzx edx, byte ptr [rcx + 0x279]
140007228 mov r9, qword ptr [rcx + 0x1e8]
14000722f mov r11, qword ptr [rcx + 0x1f0]
140007236 imul rdx, r10
14000723a add r11, r11
14000723d xor rdx, r9
140007240 xor rdx, r11
140007243 mov rax, rdx
140007246 xor rax, rdi
140007249 sub rdi, rdx
14000724c test r8b, r8b
14000724f cmove rdi, rax
140007253 mov rax, qword ptr [rcx + 0x28]
140007257 inc qword ptr [rcx + 0x30]
14000725b imul rax, rsi
14000725f add rax, rbp
140007262 mov qword ptr [rcx + 0x28], rax
140007266 shr rax, 0x1b
14000726a movzx edx, al
14000726d mov byte ptr [rcx + 0x279], dl
140007273 imul rdx, r10
140007277 xor rdx, r9
14000727a xor rdx, r11
14000727d mov rcx, rdx
140007280 xor rcx, rdi
140007283 test r8b, r8b
140007286 lea r8d, [rdi + 1]
14000728a lea rax, [rdx + rdi]
14000728e cmove rax, rcx
140007292 mov rcx, rbx
140007295 mov qword ptr [rbx + 0x210], rax
14000729c cmp r8d, dword ptr [rbx + 0x1b8]
1400072a3 jae 0x14000735a
1400072a9 mov edx, edi
1400072ab call 0x1400058a0
1400072b0 mov eax, edi
1400072b2 lea r8d, [rdi + 2]
1400072b6 add rax, qword ptr [rbx + 0x1b0]
1400072bd movzx r9d, byte ptr [rax + 1]
1400072c2 movzx r10d, byte ptr [rax]
1400072c6 mov rax, qword ptr [rbx + 0x28]
1400072ca inc qword ptr [rbx + 0x30]
1400072ce imul rax, rsi
1400072d2 mov rsi, qword ptr [rsp + 0x40]
1400072d7 add rax, rbp
1400072da mov rbp, qword ptr [rsp + 0x38]
1400072df mov qword ptr [rbx + 0x28], rax
1400072e3 shr rax, 0x1b
1400072e7 movzx edx, al
1400072ea mov rax, qword ptr [rbx + 0x1f0]
1400072f1 mov byte ptr [rbx + 0x279], dl
1400072f7 add rax, rax
1400072fa imul rdx, qword ptr [rbx + 0x1f8]
140007302 xor rdx, rax
140007305 xor rdx, qword ptr [rbx + 0x1e8]
14000730c mov rcx, rdx
14000730f xor rcx, r8
140007312 cmp byte ptr [rbx + 0x200], 0
140007319 lea rax, [rdx + r8]
14000731d mov edx, r9d
140007320 cmove rax, rcx
140007324 shl edx, 8
140007327 mov qword ptr [rbx + 0x210], rax
14000732e or edx, r10d
140007331 mov rbx, qword ptr [rsp + 0x30]
140007336 imul ecx, edi, 0x7af13fd3
14000733c mov eax, ecx
14000733e shr eax, 0xd
140007341 xor edx, eax
140007343 xor edx, ecx
140007345 xor edx, 0xffff9a10
14000734b imul eax, edx, 0x1a8d
140007351 movzx eax, ax
140007354 add rsp, 0x20
140007358 pop rdi
140007359 ret 
14000735a mov edx, 0x52445532
14000735f call 0x1400029a0
140007364 int3 
