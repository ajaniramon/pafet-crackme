140006770 mov qword ptr [rsp + 0x18], rbx
140006775 push rbp
140006776 push rsi
140006777 push rdi
140006778 push r12
14000677a push r13
14000677c push r14
14000677e push r15
140006780 mov r9d, dword ptr [rcx + 0xf10]
140006787 mov r15, rcx
14000678a mov r10, qword ptr [rcx + 0xce8]
140006791 movabs rax, 0x9e3779b97f4a7c15
14000679b mov rcx, qword ptr [rcx + 0xd8]
1400067a2 movabs r11, 0xff51afd7ed558ccd
1400067ac mov qword ptr [rsp + 0x58], rcx
1400067b1 movabs rbx, 0xc4ceb9fe1a85ec53
1400067bb mov r12d, r8d
1400067be imul r12, rax
1400067c2 mov r13d, r8d
1400067c5 movabs rax, 0x95e8f2fe312fca73
1400067cf add rax, r12
1400067d2 mov qword ptr [rsp + 0x48], r9
1400067d7 xor rax, rcx
1400067da mov qword ptr [rsp + 0x40], r10
1400067df xor rax, r10
1400067e2 xor rax, r9
1400067e5 mov rcx, rax
1400067e8 shr rcx, 0x21
1400067ec xor rcx, rax
1400067ef imul rcx, r11
1400067f3 mov rax, rcx
1400067f6 shr rax, 0x21
1400067fa xor rax, rcx
1400067fd imul rax, rbx
140006801 mov r8, rax
140006804 shr r8, 0x21
140006808 xor r8, rax
14000680b mov r14, r8
14000680e mov ecx, r8d
140006811 xor r14, rdx
140006814 and ecx, 0x3f
140006817 je 0x14000681c
140006819 rol r14, cl
14000681c mov rbp, qword ptr [r15 + 0x688]
140006823 xor r8, 0x44454331
14000682a mov rax, r8
14000682d movabs rdx, 0xd6e8feb86659fd93
140006837 shr rax, 0x21
14000683b xor rax, r8
14000683e mov r8, qword ptr [r15 + 0x1e8]
140006845 imul rax, r11
140006849 mov rcx, rax
14000684c shr rcx, 0x21
140006850 xor rcx, rax
140006853 imul rcx, rbx
140006857 mov rax, rcx
14000685a shr rax, 0x21
14000685e xor rax, rcx
140006861 mov ecx, 0x42524d4b
140006866 or rax, 1
14000686a imul r14, rax
14000686e movabs rax, 0xc2b2ae3d6586a604
140006878 lea rsi, [r14 - 1]
14000687c cmp rsi, r14
14000687f cmovae rcx, rax
140006883 mov rax, r13
140006886 imul rax, rdx
14000688a xor rcx, rax
14000688d xor rcx, rbp
140006890 xor rcx, r10
140006893 mov r10, qword ptr [r15 + 0x210]
14000689a xor rcx, r9
14000689d movzx r9d, byte ptr [r15 + 0x200]
1400068a5 mov rax, rcx
1400068a8 shr rax, 0x21
1400068ac xor rax, rcx
1400068af imul rax, r11
1400068b3 mov r11, qword ptr [r15 + 0x1f8]
1400068ba mov rcx, rax
1400068bd shr rcx, 0x21
1400068c1 xor rcx, rax
1400068c4 imul rcx, rbx
1400068c8 mov rbx, qword ptr [r15 + 0x1f0]
1400068cf mov rdi, rcx
1400068d2 add rbx, rbx
1400068d5 shr rdi, 0x21
1400068d9 xor rdi, rcx
1400068dc movzx ecx, byte ptr [r15 + 0x279]
1400068e4 imul rcx, r11
1400068e8 xor rcx, r8
1400068eb xor rcx, rbx
1400068ee mov rax, rcx
1400068f1 xor rax, r10
1400068f4 sub r10, rcx
1400068f7 test r9b, r9b
1400068fa movabs rcx, 0x9e3779b97f4a7c15
140006904 cmove r10, rax
140006908 inc qword ptr [r15 + 0x30]
14000690c mov rax, qword ptr [r15 + 0x28]
140006910 imul rax, rcx
140006914 movabs rcx, 0x2545f4914f6cdd1d
14000691e add rax, rcx
140006921 mov rcx, r10
140006924 mov qword ptr [r15 + 0x28], rax
140006928 shr rax, 0x1b
14000692c movzx edx, al
14000692f mov byte ptr [r15 + 0x279], dl
140006936 imul rdx, r11
14000693a xor rdx, r8
14000693d movabs r8, 0xc2b2ae3d27d4eb4f
140006947 xor rdx, rbx
14000694a xor rcx, rdx
14000694d test r9b, r9b
140006950 lea rax, [r10 + rdx]
140006954 mov edx, r10d
140006957 cmove rax, rcx
14000695b xor rdx, rdi
14000695e mov qword ptr [r15 + 0x210], rax
140006965 cmp rsi, r14
140006968 movabs rax, 0xd6e8feb8240ba9d2
140006972 mov ecx, 0x42525441
140006977 cmovae rcx, rax
14000697b mov eax, edx
14000697d imul rax, r8
140006981 xor r13, qword ptr [rsp + 0x58]
140006986 xor rcx, rax
140006989 mov rbx, qword ptr [rsp + 0x50]
14000698e xor rcx, rbp
140006991 xor rcx, qword ptr [rsp + 0x40]
140006996 movabs r8, 0xff51afd7ed558ccd
1400069a0 xor rcx, qword ptr [rsp + 0x48]
1400069a5 xor r13, r14
1400069a8 xor rcx, r12
1400069ab movabs r9, 0xc4ceb9fe1a85ec53
1400069b5 mov rax, rcx
1400069b8 shr rax, 0x21
1400069bc xor rax, rcx
1400069bf imul rax, r8
1400069c3 mov rcx, rax
1400069c6 shr rcx, 0x21
1400069ca xor rcx, rax
1400069cd imul rcx, r9
1400069d1 mov rax, rcx
1400069d4 shr rax, 0x21
1400069d8 xor rax, rcx
1400069db xor rax, rdx
1400069de xor qword ptr [r15 + 0xce0], rax
1400069e5 mov rax, r13
1400069e8 shr rax, 0x21
1400069ec xor rax, r13
1400069ef imul rax, r8
1400069f3 mov rcx, rax
1400069f6 shr rcx, 0x21
1400069fa xor rcx, rax
1400069fd imul rcx, r9
140006a01 mov rax, rcx
140006a04 shr rax, 0x21
140006a08 xor rax, rcx
140006a0b mov qword ptr [r15 + 0xd8], rax
140006a12 pop r15
140006a14 pop r14
140006a16 pop r13
140006a18 pop r12
140006a1a pop rdi
140006a1b pop rsi
140006a1c pop rbp
140006a1d ret 
