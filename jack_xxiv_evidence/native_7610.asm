140007610 mov rax, rsp
140007613 mov dword ptr [rax + 0x10], edx
140007616 push rdi
140007617 push r14
140007619 sub rsp, 0x58
14000761d mov edi, r8d
140007620 mov r14, rcx
140007623 cmp r8d, 0x49
140007627 jae 0x140007be3
14000762d mov qword ptr [rax + 8], rbx
140007631 mov qword ptr [rax - 0x18], rbp
140007635 mov qword ptr [rax - 0x20], rsi
140007639 xor esi, esi
14000763b mov qword ptr [rax - 0x28], r12
14000763f mov qword ptr [rax - 0x30], r13
140007643 mov qword ptr [rax - 0x38], r15
140007647 test r8d, r8d
14000764a je 0x14000766c
14000764c lea eax, [rdi - 1]
14000764f mov ebx, esi
140007651 mov ecx, eax
140007653 call 0x140002080
140007658 cmp eax, 0x48
14000765b jb 0x140007668
14000765d inc ebx
14000765f cmp ebx, 0x40
140007662 jl 0x140007651
140007664 mov eax, edi
140007666 jmp 0x14000766e
140007668 inc eax
14000766a jmp 0x14000766e
14000766c mov eax, esi
14000766e mov r15d, dword ptr [r14 + 0x1b8]
140007675 lea eax, [rax + rax*2]
140007678 shl eax, 3
14000767b mov ebp, r15d
14000767e cmp eax, r15d
140007681 cmovbe ebp, eax
140007684 lea ecx, [rax + 0x18]
140007687 mov dword ptr [rsp + 0x78], ebp
14000768b cmp ecx, r15d
14000768e mov r8d, ebp
140007691 cmovbe r15d, ecx
140007695 cmp ebp, r15d
140007698 jae 0x1400076cb
14000769a lea r9, [rip + 0x3dd97f]
1400076a1 add r9, r8
1400076a4 nop dword ptr [rax]
1400076a8 nop dword ptr [rax + rax]
1400076b0 movzx eax, byte ptr [r9]
1400076b4 lea r9, [r9 + 1]
1400076b8 mov rcx, qword ptr [r14 + 0x1b0]
1400076bf mov byte ptr [r8 + rcx], al
1400076c3 inc r8d
1400076c6 cmp r8d, r15d
1400076c9 jb 0x1400076b0
1400076cb mov rax, rsi
1400076ce mov ecx, 3
1400076d3 mov qword ptr [rsp + 0x88], rax
1400076db movabs rbx, 0x9e3779b97f4a7c15
1400076e5 mov qword ptr [rsp + 0x20], rcx
1400076ea movabs rdx, 0x2545f4914f6cdd1d
1400076f4 movabs r8, 0xd6e8feb86659fd93
1400076fe movabs r9, 0xff51afd7ed558ccd
140007708 movabs r10, 0xc4ceb9fe1a85ec53
140007712 mov r13d, ebp
140007715 cmp ebp, r15d
140007718 jae 0x140007860
14000771e mov rbp, qword ptr [rsp + 0x88]
140007726 mov r12, rdi
140007729 imul r12, r8
14000772d nop dword ptr [rax]
140007730 test edi, edi
140007732 je 0x140007797
140007734 lea eax, [rdi - 1]
140007737 mov ebx, esi
140007739 nop dword ptr [rax]
140007740 mov ecx, eax
140007742 call 0x140002080
140007747 cmp eax, 0x48
14000774a jb 0x140007775
14000774c inc ebx
14000774e cmp ebx, 0x40
140007751 jl 0x140007740
140007753 mov eax, edi
140007755 movabs rbx, 0x9e3779b97f4a7c15
14000775f movabs r9, 0xff51afd7ed558ccd
140007769 movabs r10, 0xc4ceb9fe1a85ec53
140007773 jmp 0x140007799
140007775 inc eax
140007777 movabs rbx, 0x9e3779b97f4a7c15
140007781 movabs r9, 0xff51afd7ed558ccd
14000778b movabs r10, 0xc4ceb9fe1a85ec53
140007795 jmp 0x140007799
140007797 mov eax, esi
140007799 lea ecx, [rax + rax*2]
14000779c mov edx, r13d
14000779f imul rdx, rbx
1400077a3 shl ecx, 3
1400077a6 movabs rax, 0xdc5ea5a85eb4aabd
1400077b0 imul rcx, rbx
1400077b4 mov r8d, r13d
1400077b7 inc r13d
1400077ba xor rcx, r12
1400077bd xor rcx, rax
1400077c0 mov rax, rcx
1400077c3 shr rax, 0x21
1400077c7 xor rax, rcx
1400077ca imul rax, r9
1400077ce mov rcx, rax
1400077d1 shr rcx, 0x21
1400077d5 xor rcx, rax
1400077d8 imul rcx, r10
1400077dc mov rax, rcx
1400077df shr rax, 0x21
1400077e3 xor rdx, rax
1400077e6 mov eax, ecx
1400077e8 mov rcx, qword ptr [r14 + 0x1b0]
1400077ef xor rdx, rax
1400077f2 xor rdx, rbp
1400077f5 movabs rax, 0xdc5ea5a84cb9a2c4
1400077ff xor rdx, r12
140007802 xor rdx, rax
140007805 mov rax, rdx
140007808 shr rax, 0x21
14000780c xor rax, rdx
14000780f imul rax, r9
140007813 mov rdx, rax
140007816 shr rdx, 0x21
14000781a xor rdx, rax
14000781d imul rdx, r10
140007821 mov rax, rdx
140007824 shr rdx, 0x18
140007828 shr rax, 0x39
14000782c xor al, dl
14000782e xor byte ptr [rcx + r8], al
140007832 cmp r13d, r15d
140007835 jb 0x140007730
14000783b mov ebp, dword ptr [rsp + 0x78]
14000783f movabs rdx, 0x2545f4914f6cdd1d
140007849 mov rax, qword ptr [rsp + 0x88]
140007851 movabs r8, 0xd6e8feb86659fd93
14000785b mov rcx, qword ptr [rsp + 0x20]
140007860 add rax, rdx
140007863 sub rcx, 1
140007867 mov qword ptr [rsp + 0x88], rax
14000786f mov qword ptr [rsp + 0x20], rcx
140007874 jne 0x140007712
14000787a movabs r12, 0xff51afd7ed558ccd
140007884 mov rax, rdi
140007887 imul rax, rbx
14000788b movabs r13, 0xc4ceb9fe1a85ec53
140007895 mov r9, rbx
140007898 mov rcx, rax
14000789b mov r10d, ebp
14000789e shr rcx, 0x21
1400078a2 xor rcx, rax
1400078a5 xor rcx, 0x424c4b31
1400078ac imul rcx, r12
1400078b0 mov rax, rcx
1400078b3 shr rax, 0x21
1400078b7 xor rax, rcx
1400078ba movabs rcx, 0xdc5ea5a85fb0a0c6
1400078c4 imul rax, r13
1400078c8 mov r11, rax
1400078cb shr r11, 0x21
1400078cf xor r11, rax
1400078d2 mov rax, r11
1400078d5 xor rax, rcx
1400078d8 mov rcx, rax
1400078db shr rcx, 0x21
1400078df xor rcx, rax
1400078e2 imul rcx, r12
1400078e6 mov rdx, rcx
1400078e9 shr rdx, 0x21
1400078ed xor rdx, rcx
1400078f0 imul rdx, r13
1400078f4 mov rax, rdx
1400078f7 shr rax, 0x21
1400078fb xor rax, rdx
1400078fe cmovne r9, rax
140007902 cmp ebp, r15d
140007905 jae 0x140007af2
14000790b movabs rax, 0xdc5ea5a81cf8e18f
140007915 movabs rbx, 0xac01e240057269a7
14000791f xor r11, rax
140007922 movabs r13, 0xffcb3f872961faff
14000792c movabs r12, 0x54be8275f1e8ba97
140007936 nop word ptr [rax + rax]
140007940 mov ecx, r10d
140007943 mov r8d, r10d
140007946 add r8, qword ptr [r14 + 0x1b0]
14000794d sub ecx, ebp
14000794f imul rcx, rbx
140007953 inc r10d
140007956 add rcx, r11
140007959 xor rcx, r13
14000795c imul rax, rcx, 0x2001
140007963 mov rcx, rax
140007966 shr rcx, 7
14000796a xor rcx, rax
14000796d lea rax, [rcx + rcx*8]
140007971 mov rdx, rax
140007974 shr rdx, 0x11
140007978 xor rdx, rax
14000797b add rdx, r12
14000797e mov rcx, rdx
140007981 mov rax, rdx
140007984 shr rax, 0x18
140007988 shr rcx, 0x28
14000798c xor cl, al
14000798e mov rax, r9
140007991 shr rax, 0x1d
140007995 xor cl, al
140007997 xor cl, dl
140007999 xor cl, byte ptr [r8]
14000799c xor cl, 0xaa
14000799f movzx eax, cl
1400079a2 xor rax, r9
1400079a5 mov byte ptr [r8], cl
1400079a8 imul rax, rbx
1400079ac add rax, r12
1400079af mov r9, rax
1400079b2 shr r9, 0x1f
1400079b6 xor r9, rax
1400079b9 cmp r10d, r15d
1400079bc jb 0x140007940
1400079be mov r11d, r15d
1400079c1 mov r8d, ebp
1400079c4 sub r11d, ebp
1400079c7 cmp r11d, 0x40
1400079cb jb 0x140007ab2
1400079d1 mov r10, qword ptr [r14 + 0x1b0]
1400079d8 lea eax, [r15 - 1]
1400079dc mov edx, ebp
1400079de lea r12, [r14 + 0xa8]
1400079e5 mov r9, qword ptr [r12]
1400079e9 lea rbx, [r10 + rax]
1400079ed add rax, r9
1400079f0 lea r13, [r10 + rdx]
1400079f4 add rdx, r9
1400079f7 cmp r13, rax
1400079fa ja 0x140007a05
1400079fc cmp rbx, rdx
1400079ff jae 0x140007ab2
140007a05 cmp r13, r12
140007a08 ja 0x140007a16
140007a0a mov r8d, ebp
140007a0d cmp rbx, r12
140007a10 jae 0x140007ab2
140007a16 lea rax, [r14 + 0x1b0]
140007a1d cmp r13, rax
140007a20 ja 0x140007a2e
140007a22 mov r8d, ebp
140007a25 cmp rbx, rax
140007a28 jae 0x140007ab2
140007a2e and r11d, 0x3f
140007a32 mov ebx, r15d
140007a35 sub ebx, r11d
140007a38 lea edx, [rbp + 0x20]
140007a3b mov r8d, ebp
140007a3e nop 
140007a40 mov eax, r8d
140007a43 add r8d, 0x40
140007a47 movdqu xmm0, xmmword ptr [r10 + rax]
140007a4d movdqu xmm1, xmmword ptr [r9 + rax]
140007a53 pxor xmm1, xmm0
140007a57 movdqu xmmword ptr [r10 + rax], xmm1
140007a5d lea eax, [rdx - 0x10]
140007a60 movdqu xmm0, xmmword ptr [rax + r10]
140007a66 movdqu xmm1, xmmword ptr [rax + r9]
140007a6c pxor xmm1, xmm0
140007a70 movdqu xmmword ptr [rax + r10], xmm1
140007a76 lea eax, [rdx + 0x10]
140007a79 movdqu xmm0, xmmword ptr [rdx + r10]
140007a7f movdqu xmm1, xmmword ptr [rdx + r9]
140007a85 pxor xmm1, xmm0
140007a89 movdqu xmmword ptr [rdx + r10], xmm1
140007a8f lea edx, [rdx + 0x40]
140007a92 movdqu xmm0, xmmword ptr [rax + r10]
140007a98 movdqu xmm1, xmmword ptr [rax + r9]
140007a9e pxor xmm1, xmm0
140007aa2 movdqu xmmword ptr [rax + r10], xmm1
140007aa8 cmp r8d, ebx
140007aab jb 0x140007a40
140007aad cmp r8d, r15d
140007ab0 jae 0x140007ad4
140007ab2 mov rdx, qword ptr [r14 + 0x1b0]
140007ab9 mov rax, qword ptr [r14 + 0xa8]
140007ac0 mov ecx, r8d
140007ac3 inc r8d
140007ac6 add rdx, rcx
140007ac9 movzx ecx, byte ptr [rax + rcx]
140007acd xor byte ptr [rdx], cl
140007acf cmp r8d, r15d
140007ad2 jb 0x140007ab2
140007ad4 movabs r13, 0xc4ceb9fe1a85ec53
140007ade movabs r12, 0xff51afd7ed558ccd
140007ae8 movabs rbx, 0x9e3779b97f4a7c15
140007af2 cmp dword ptr [r14 + 0x130], 0
140007afa je 0x140007b81
140007b00 cmp ebp, r15d
140007b03 jae 0x140007b81
140007b05 movabs r9, 0xdc5ea5a84fbda6c2
140007b0f nop 
140007b10 mov ecx, dword ptr [r14 + 0x12c]
140007b17 xor edx, edx
140007b19 mov eax, ebp
140007b1b div dword ptr [r14 + 0x130]
140007b22 cmp eax, ecx
140007b24 je 0x140007b7a
140007b26 inc ecx
140007b28 cmp eax, ecx
140007b2a je 0x140007b7a
140007b2c mov rdx, qword ptr [r14 + 0x1b0]
140007b33 imul rax, rbx
140007b37 xor rax, r9
140007b3a mov rcx, rax
140007b3d shr rcx, 0x21
140007b41 xor rcx, rax
140007b44 imul rcx, r12
140007b48 mov rax, rcx
140007b4b shr rax, 0x21
140007b4f xor rax, rcx
140007b52 mov ecx, ebp
140007b54 imul rax, r13
140007b58 add rdx, rcx
140007b5b mov r8, rax
140007b5e shr r8, 0x21
140007b62 xor r8, rax
140007b65 mov rcx, r8
140007b68 mov rax, r8
140007b6b shr rcx, 0x10
140007b6f shr rax, 8
140007b73 xor cl, al
140007b75 xor cl, r8b
140007b78 xor byte ptr [rdx], cl
140007b7a inc ebp
140007b7c cmp ebp, r15d
140007b7f jb 0x140007b10
140007b81 mov rbx, qword ptr [r14 + 0x140]
140007b88 mov r15, qword ptr [rsp + 0x30]
140007b8d mov r13, qword ptr [rsp + 0x38]
140007b92 mov r12, qword ptr [rsp + 0x40]
140007b97 mov rbp, qword ptr [rsp + 0x50]
140007b9c test rbx, rbx
140007b9f je 0x140007bca
140007ba1 test edi, edi
140007ba3 je 0x140007bc2
140007ba5 lea eax, [rdi - 1]
140007ba8 mov ecx, eax
140007baa call 0x140002080
140007baf cmp eax, 0x48
140007bb2 jb 0x140007bbd
140007bb4 inc esi
140007bb6 cmp esi, 0x40
140007bb9 jl 0x140007ba8
140007bbb jmp 0x140007bc4
140007bbd lea edi, [rax + 1]
140007bc0 jmp 0x140007bc4
140007bc2 mov edi, esi
140007bc4 mov eax, edi
140007bc6 mov byte ptr [rax + rbx], 1
140007bca inc qword ptr [r14 + 0xcb8]
140007bd1 mov rsi, qword ptr [rsp + 0x48]
140007bd6 mov rbx, qword ptr [rsp + 0x70]
140007bdb add rsp, 0x58
140007bdf pop r14
140007be1 pop rdi
140007be2 ret 
140007be3 mov edx, 0x504b4f50
140007be8 call 0x1400029a0
140007bed int3 
