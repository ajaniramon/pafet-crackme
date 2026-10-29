14003e9a0 mov qword ptr [rsp + 8], rbx
14003e9a5 mov qword ptr [rsp + 0x10], rdi
14003e9aa mov rdi, qword ptr [r9]
14003e9ad lea r10d, [r8 - 1]
14003e9b1 xor eax, eax
14003e9b3 mov ebx, r8d
14003e9b6 mov r11, rcx
14003e9b9 cmp r10d, 1
14003e9bd ja 0x14003ea01
14003e9bf mov word ptr [rcx], 0x8b4c
14003e9c4 sub r9, rcx
14003e9c7 add r9, -7
14003e9cb mov byte ptr [rcx + 2], 0x1d
14003e9cf mov rax, r9
14003e9d2 mov byte ptr [rcx + 3], r9b
14003e9d6 shr rax, 8
14003e9da mov byte ptr [rcx + 4], al
14003e9dd mov rax, r9
14003e9e0 shr rax, 0x10
14003e9e4 shr r9, 0x18
14003e9e8 mov byte ptr [rcx + 5], al
14003e9eb mov eax, 7
14003e9f0 mov byte ptr [rcx + 6], r9b
14003e9f4 cmp ebx, 1
14003e9f7 jne 0x14003ea01
14003e9f9 mov r9, rdi
14003e9fc xor r9, rdx
14003e9ff jmp 0x14003ea11
14003ea01 mov rcx, rdx
14003ea04 mov r9, rdx
14003ea07 sub rcx, rdi
14003ea0a cmp ebx, 2
14003ea0d cmove r9, rcx
14003ea11 mov ecx, eax
14003ea13 mov r8, r9
14003ea16 shr r8, 8
14003ea1a inc eax
14003ea1c mov byte ptr [rcx + r11], 0x48
14003ea21 mov byte ptr [rax + r11], 0xb8
14003ea26 inc eax
14003ea28 lea ecx, [rax + 1]
14003ea2b mov byte ptr [rax + r11], r9b
14003ea2f mov byte ptr [rcx + r11], r8b
14003ea33 lea ecx, [rax + 2]
14003ea36 mov r8, r9
14003ea39 shr r8, 0x10
14003ea3d mov byte ptr [rcx + r11], r8b
14003ea41 lea ecx, [rax + 3]
14003ea44 mov r8, r9
14003ea47 shr r8, 0x18
14003ea4b mov byte ptr [rcx + r11], r8b
14003ea4f lea ecx, [rax + 4]
14003ea52 mov r8, r9
14003ea55 shr r8, 0x20
14003ea59 mov byte ptr [rcx + r11], r8b
14003ea5d lea ecx, [rax + 5]
14003ea60 mov r8, r9
14003ea63 shr r8, 0x28
14003ea67 mov byte ptr [rcx + r11], r8b
14003ea6b lea ecx, [rax + 6]
14003ea6e mov r8, r9
14003ea71 shr r9, 0x38
14003ea75 shr r8, 0x30
14003ea79 mov byte ptr [rcx + r11], r8b
14003ea7d lea ecx, [rax + 7]
14003ea80 add eax, 8
14003ea83 mov byte ptr [rcx + r11], r9b
14003ea87 cmp ebx, 1
14003ea8a jne 0x14003eaa1
14003ea8c mov byte ptr [rax + r11], 0x4c
14003ea91 inc eax
14003ea93 mov byte ptr [rax + r11], 0x31
14003ea98 inc eax
14003ea9a mov byte ptr [rax + r11], 0xd8
14003ea9f jmp 0x14003eae8
14003eaa1 cmp ebx, 2
14003eaa4 jne 0x14003eabb
14003eaa6 mov byte ptr [rax + r11], 0x4c
14003eaab inc eax
14003eaad mov byte ptr [rax + r11], 1
14003eab2 inc eax
14003eab4 mov byte ptr [rax + r11], 0xd8
14003eab9 jmp 0x14003eae8
14003eabb cmp ebx, 3
14003eabe jne 0x14003eaea
14003eac0 mov byte ptr [rax + r11], 0x48
14003eac5 inc eax
14003eac7 mov byte ptr [rax + r11], 0xf7
14003eacc inc eax
14003eace mov byte ptr [rax + r11], 0xd0
14003ead3 inc eax
14003ead5 mov byte ptr [rax + r11], 0x48
14003eada inc eax
14003eadc mov byte ptr [rax + r11], 0xf7
14003eae1 inc eax
14003eae3 mov byte ptr [rax + r11], 0xd0
14003eae8 inc eax
14003eaea xor rdi, r11
14003eaed mov byte ptr [rax + r11], 0xff
14003eaf2 movabs rcx, 0x5354554253545542
14003eafc inc eax
14003eafe xor rdi, rcx
14003eb01 movabs rbx, 0xff51afd7ed558ccd
14003eb0b mov rcx, rdi
14003eb0e shr rcx, 0x21
14003eb12 xor rcx, rdi
14003eb15 mov byte ptr [rax + r11], 0xe0
14003eb1a imul rcx, rbx
14003eb1e movabs rdi, 0xc4ceb9fe1a85ec53
14003eb28 inc eax
14003eb2a mov rdx, rcx
14003eb2d shr rdx, 0x21
14003eb31 xor rdx, rcx
14003eb34 imul rdx, rdi
14003eb38 mov r8, rdx
14003eb3b shr r8, 0x21
14003eb3f xor r8, rdx
14003eb42 cmp eax, 0x20
14003eb45 jae 0x14003eba3
14003eb47 mov r10d, 0x20
14003eb4d mov edx, eax
14003eb4f sub r10d, eax
14003eb52 lea r9, [rax + r11]
14003eb56 nop word ptr [rax + rax]
14003eb60 lea rax, [rdx + r8]
14003eb64 mov rcx, rax
14003eb67 lea r9, [r9 + 1]
14003eb6b shr rcx, 0x21
14003eb6f lea rdx, [rdx + 1]
14003eb73 xor rcx, rax
14003eb76 imul rcx, rbx
14003eb7a mov rax, rcx
14003eb7d shr rax, 0x21
14003eb81 xor rax, rcx
14003eb84 imul rax, rdi
14003eb88 mov r8, rax
14003eb8b shr r8, 0x21
14003eb8f xor r8, rax
14003eb92 mov rax, r8
14003eb95 shr rax, 0x18
14003eb99 mov byte ptr [r9 - 1], al
14003eb9d sub r10, 1
14003eba1 jne 0x14003eb60
14003eba3 mov rbx, qword ptr [rsp + 8]
14003eba8 mov rdi, qword ptr [rsp + 0x10]
14003ebad ret 
