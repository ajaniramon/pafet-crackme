1400074d0 mov qword ptr [rsp + 0x10], rbp
1400074d5 mov qword ptr [rsp + 0x18], rsi
1400074da push rdi
1400074db sub rsp, 0x20
1400074df mov esi, r8d
1400074e2 mov rdi, rcx
1400074e5 mov ebp, edx
1400074e7 cmp r8d, 0x3d
1400074eb jne 0x140007516
1400074ed call 0x1400071e0
1400074f2 imul rdx, rbp, 0x3e
1400074f6 lea r8d, [rax + 0x3e]
1400074fa add r8, rdx
1400074fd movzx eax, word ptr [rdi + r8*2 + 0xf64]
140007506 mov rbp, qword ptr [rsp + 0x38]
14000750b mov rsi, qword ptr [rsp + 0x40]
140007510 add rsp, 0x20
140007514 pop rdi
140007515 ret 
140007516 cmp esi, 0x3c
140007519 jne 0x140007542
14000751b call 0x1400071e0
140007520 imul rcx, rbp, 0x3e
140007524 lea edx, [rax + 0x3e]
140007527 add rdx, rcx
14000752a movzx eax, word ptr [rdi + rdx*2 + 0xf64]
140007532 mov rbp, qword ptr [rsp + 0x38]
140007537 mov rsi, qword ptr [rsp + 0x40]
14000753c add rsp, 0x20
140007540 pop rdi
140007541 ret 
140007542 mov r11, qword ptr [rcx + 0x1f8]
140007549 mov r9, qword ptr [rcx + 0x1e8]
140007550 mov r8, qword ptr [rdi + 0x210]
140007557 movzx r10d, byte ptr [rdi + 0x200]
14000755f mov qword ptr [rsp + 0x30], rbx
140007564 mov rbx, qword ptr [rcx + 0x1f0]
14000756b movzx ecx, byte ptr [rcx + 0x279]
140007572 add rbx, rbx
140007575 imul rcx, r11
140007579 xor rcx, r9
14000757c xor rcx, rbx
14000757f mov rax, rcx
140007582 xor rax, r8
140007585 sub r8, rcx
140007588 test r10b, r10b
14000758b movabs rcx, 0x9e3779b97f4a7c15
140007595 cmove r8, rax
140007599 mov rax, qword ptr [rdi + 0x28]
14000759d inc qword ptr [rdi + 0x30]
1400075a1 imul rax, rcx
1400075a5 movabs rcx, 0x2545f4914f6cdd1d
1400075af add rax, rcx
1400075b2 mov qword ptr [rdi + 0x28], rax
1400075b6 shr rax, 0x1b
1400075ba movzx edx, al
1400075bd mov byte ptr [rdi + 0x279], dl
1400075c3 imul rdx, r11
1400075c7 xor rdx, r9
1400075ca xor rdx, rbx
1400075cd mov rbx, qword ptr [rsp + 0x30]
1400075d2 mov rcx, rdx
1400075d5 xor rcx, r8
1400075d8 test r10b, r10b
1400075db lea rax, [rdx + r8]
1400075df cmove rax, rcx
1400075e3 imul rcx, rbp, 0x3e
1400075e7 mov rbp, qword ptr [rsp + 0x38]
1400075ec add rcx, rsi
1400075ef mov qword ptr [rdi + 0x210], rax
1400075f6 mov rsi, qword ptr [rsp + 0x40]
1400075fb movzx eax, word ptr [rdi + rcx*2 + 0xf64]
140007603 add rsp, 0x20
140007607 pop rdi
140007608 ret 
