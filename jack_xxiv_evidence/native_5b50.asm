140005b50 sub rsp, 0x28
140005b54 mov r10, rcx
140005b57 cmp edx, dword ptr [rcx + 0x1b8]
140005b5d jae 0x140005c10
140005b63 mov ecx, edx
140005b65 movabs rax, 0x9e3779b97f4a7c15
140005b6f imul rcx, rax
140005b73 mov r9d, edx
140005b76 xor rcx, qword ptr [r10 + 0xd8]
140005b7d xor rcx, qword ptr [r10 + 0xb8]
140005b84 xor rcx, qword ptr [r10 + 0xb0]
140005b8b mov rax, rcx
140005b8e shr rax, 0x21
140005b92 xor rax, rcx
140005b95 movabs rcx, 0xff51afd7ed558ccd
140005b9f imul rax, rcx
140005ba3 mov rcx, rax
140005ba6 shr rcx, 0x21
140005baa xor rcx, rax
140005bad movabs rax, 0xc4ceb9fe1a85ec53
140005bb7 imul rcx, rax
140005bbb mov r8, rcx
140005bbe shr r8, 0x21
140005bc2 xor r8, rcx
140005bc5 mov rcx, r8
140005bc8 mov rax, r8
140005bcb shr rax, 0x18
140005bcf shr rcx, 0x28
140005bd3 xor cl, al
140005bd5 mov eax, 0x5a
140005bda xor cl, r8b
140005bdd movzx edx, cl
140005be0 cmove edx, eax
140005be3 mov rax, qword ptr [r10 + 0x1b0]
140005bea or r8, 1
140005bee xor byte ptr [rax + r9], dl
140005bf2 mov rax, qword ptr [r10 + 0xa8]
140005bf9 xor byte ptr [rax + r9], dl
140005bfd inc qword ptr [r10 + 0xb8]
140005c04 mov qword ptr [r10 + 0xb0], r8
140005c0b add rsp, 0x28
140005c0f ret 
140005c10 mov edx, 0x534d4351
140005c15 call 0x1400029a0
140005c1a int3 
