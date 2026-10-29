0000000140380840 48895c2410               mov qword ptr [rsp + 0x10], rbx
0000000140380845 48896c2418               mov qword ptr [rsp + 0x18], rbp
000000014038084a 4889742420               mov qword ptr [rsp + 0x20], rsi
000000014038084f 57                       push rdi
0000000140380850 4154                     push r12
0000000140380852 4155                     push r13
0000000140380854 4156                     push r14
0000000140380856 4157                     push r15
0000000140380858 4883ec70                 sub rsp, 0x70
000000014038085c 488b05bdc70800           mov rax, qword ptr [rip + 0x8c7bd]
0000000140380863 4833c4                   xor rax, rsp
0000000140380866 4889442460               mov qword ptr [rsp + 0x60], rax
000000014038086b 448bf9                   mov r15d, ecx
000000014038086e b910000000               mov ecx, 0x10
0000000140380873 65488b042558000000       mov rax, qword ptr gs:[0x58]
000000014038087c 488b10                   mov rdx, qword ptr [rax]
000000014038087f 488d1d8aa30b00           lea rbx, [rip + 0xba38a]
0000000140380886 8b0411                   mov eax, dword ptr [rcx + rdx]
0000000140380889 390565a30b00             cmp dword ptr [rip + 0xba365], eax
000000014038088f 7e52                     jle 0x1403808e3
0000000140380891 488d0d5ca30b00           lea rcx, [rip + 0xba35c]
0000000140380898 e8d3360200               call 0x1403a3f70
000000014038089d 833d50a30b00ff           cmp dword ptr [rip + 0xba350], -1
00000001403808a4 753d                     jne 0x1403808e3
00000001403808a6 488d05037c0100           lea rax, [rip + 0x17c03]
00000001403808ad 4889442420               mov qword ptr [rsp + 0x20], rax
00000001403808b2 4c8d0d077c0100           lea r9, [rip + 0x17c07]
00000001403808b9 ba20000000               mov edx, 0x20
00000001403808be 448d42ed                 lea r8d, [rdx - 0x13]
00000001403808c2 488bcb                   mov rcx, rbx
00000001403808c5 e83e3b0200               call 0x1403a4408
00000001403808ca 488d0d2fbf0400           lea rcx, [rip + 0x4bf2f]
00000001403808d1 e8ee3a0200               call 0x1403a43c4
00000001403808d6 90                       nop
00000001403808d7 488d0d16a30b00           lea rcx, [rip + 0xba316]
00000001403808de e82d360200               call 0x1403a3f10
00000001403808e3 498bf7                   mov rsi, r15
00000001403808e6 4c897c2430               mov qword ptr [rsp + 0x30], r15
00000001403808eb 4c8d2d0ef7c7ff           lea r13, [rip - 0x3808f2]
00000001403808f2 4d8db530124200           lea r14, [r13 + 0x421230]
00000001403808f9 4f8d34fe                 lea r14, [r14 + r15*8]
00000001403808fd 4c89742438               mov qword ptr [rsp + 0x38], r14
0000000140380902 49833e00                 cmp qword ptr [r14], 0
0000000140380906 0f8594010000             jne 0x140380aa0
000000014038090c 478ba4bd588a3e00         mov r12d, dword ptr [r13 + r15*4 + 0x3e8a58]
0000000140380914 438bacbdd8943e00         mov ebp, dword ptr [r13 + r15*4 + 0x3e94d8]
000000014038091c 33ff                     xor edi, edi
000000014038091e 48897c2440               mov qword ptr [rsp + 0x40], rdi
0000000140380923 48897c2450               mov qword ptr [rsp + 0x50], rdi
0000000140380928 48c74424580f000000       mov qword ptr [rsp + 0x58], 0xf
0000000140380931 40887c2440               mov byte ptr [rsp + 0x40], dil
0000000140380936 8bdd                     mov ebx, ebp
0000000140380938 85ed                     test ebp, ebp
000000014038093a 750c                     jne 0x140380948
000000014038093c 48895c2450               mov qword ptr [rsp + 0x50], rbx
0000000140380941 40886c2c40               mov byte ptr [rsp + rbp + 0x40], bpl
0000000140380946 eb31                     jmp 0x140380979
0000000140380948 488d4c2440               lea rcx, [rsp + 0x40]
000000014038094d 4883fb0f                 cmp rbx, 0xf
0000000140380951 7716                     ja 0x140380969
0000000140380953 48895c2450               mov qword ptr [rsp + 0x50], rbx
0000000140380958 4c8bc3                   mov r8, rbx
000000014038095b 33d2                     xor edx, edx
000000014038095d e8be5d0200               call 0x1403a6720
0000000140380962 c6442c4000               mov byte ptr [rsp + rbp + 0x40], 0
0000000140380967 eb10                     jmp 0x140380979
0000000140380969 c644242000               mov byte ptr [rsp + 0x20], 0
000000014038096e 4c8bcb                   mov r9, rbx
0000000140380971 488bd3                   mov rdx, rbx
0000000140380974 e8d7a80100               call 0x14039b250
0000000140380979 85ed                     test ebp, ebp
000000014038097b 0f84d2000000             je 0x140380a53
0000000140380981 4c8bd7                   mov r10, rdi
0000000140380984 458d4f01                 lea r9d, [r15 + 1]
0000000140380988 48b8157c4a7fb979379e     movabs rax, 0x9e3779b97f4a7c15
0000000140380992 4c0fafc8                 imul r9, rax
0000000140380996 4c8bdf                   mov r11, rdi
0000000140380999 48bb97dde17ad3876ce1     movabs rbx, 0xe16c87d37ae1dd97
00000001403809a3 48beb301000000010000     movabs rsi, 0x100000001b3
00000001403809ad 49bfcd8c55edd7af51ff     movabs r15, 0xff51afd7ed558ccd
00000001403809b7 49be53ec851afeb9cec4     movabs r14, 0xc4ceb9fe1a85ec53
00000001403809c1 0f1f4000                 nop dword ptr [rax]
00000001403809c5 6666660f1f840000000000   nop word ptr [rax + rax]
00000001403809d0 498bc3                   mov rax, r11
00000001403809d3 4933c1                   xor rax, r9
00000001403809d6 4833c3                   xor rax, rbx
00000001403809d9 488bc8                   mov rcx, rax
00000001403809dc 48c1e921                 shr rcx, 0x21
00000001403809e0 4833c8                   xor rcx, rax
00000001403809e3 490fafcf                 imul rcx, r15
00000001403809e7 488bc1                   mov rax, rcx
00000001403809ea 48c1e821                 shr rax, 0x21
00000001403809ee 4833c1                   xor rax, rcx
00000001403809f1 490fafc6                 imul rax, r14
00000001403809f5 4c8bc0                   mov r8, rax
00000001403809f8 49c1e821                 shr r8, 0x21
00000001403809fc 4c33c0                   xor r8, rax
00000001403809ff 428d0427                 lea eax, [rdi + r12]
0000000140380a03 498bd0                   mov rdx, r8
0000000140380a06 48c1ea18                 shr rdx, 0x18
0000000140380a0a 42329428b0a73e00         xor dl, byte ptr [rax + r13 + 0x3ea7b0]
0000000140380a12 498bc0                   mov rax, r8
0000000140380a15 48c1e810                 shr rax, 0x10
0000000140380a19 32d0                     xor dl, al
0000000140380a1b 498bc0                   mov rax, r8
0000000140380a1e 48c1e808                 shr rax, 8
0000000140380a22 32d0                     xor dl, al
0000000140380a24 4132d0                   xor dl, r8b
0000000140380a27 488d442440               lea rax, [rsp + 0x40]
0000000140380a2c 48837c245810             cmp qword ptr [rsp + 0x58], 0x10
0000000140380a32 480f43442440             cmovae rax, qword ptr [rsp + 0x40]
0000000140380a38 41881402                 mov byte ptr [r10 + rax], dl
0000000140380a3c ffc7                     inc edi
0000000140380a3e 4c03de                   add r11, rsi
0000000140380a41 4d8d5201                 lea r10, [r10 + 1]
0000000140380a45 3bfd                     cmp edi, ebp
0000000140380a47 7287                     jb 0x1403809d0
0000000140380a49 488b742430               mov rsi, qword ptr [rsp + 0x30]
0000000140380a4e 4c8b742438               mov r14, qword ptr [rsp + 0x38]
0000000140380a53 48c1e605                 shl rsi, 5
0000000140380a57 488d1db2a10b00           lea rbx, [rip + 0xba1b2]
0000000140380a5e 4803de                   add rbx, rsi
0000000140380a61 488d442440               lea rax, [rsp + 0x40]
0000000140380a66 483bd8                   cmp rbx, rax
0000000140380a69 741e                     je 0x140380a89
0000000140380a6b 488d542440               lea rdx, [rsp + 0x40]
0000000140380a70 48837c245810             cmp qword ptr [rsp + 0x58], 0x10
0000000140380a76 480f43542440             cmovae rdx, qword ptr [rsp + 0x40]
0000000140380a7c 4c8b442450               mov r8, qword ptr [rsp + 0x50]
0000000140380a81 488bcb                   mov rcx, rbx
0000000140380a84 e8078f0100               call 0x140399990
0000000140380a89 48837b1810               cmp qword ptr [rbx + 0x18], 0x10
0000000140380a8e 7203                     jb 0x140380a93
0000000140380a90 488b1b                   mov rbx, qword ptr [rbx]
0000000140380a93 49891e                   mov qword ptr [r14], rbx
0000000140380a96 488d4c2440               lea rcx, [rsp + 0x40]
0000000140380a9b e8208d0100               call 0x1403997c0
0000000140380aa0 498b06                   mov rax, qword ptr [r14]
0000000140380aa3 488b4c2460               mov rcx, qword ptr [rsp + 0x60]
0000000140380aa8 4833cc                   xor rcx, rsp
0000000140380aab e810330200               call 0x1403a3dc0
0000000140380ab0 4c8d5c2470               lea r11, [rsp + 0x70]
0000000140380ab5 498b5b38                 mov rbx, qword ptr [r11 + 0x38]
0000000140380ab9 498b6b40                 mov rbp, qword ptr [r11 + 0x40]
0000000140380abd 498b7348                 mov rsi, qword ptr [r11 + 0x48]
0000000140380ac1 498be3                   mov rsp, r11
0000000140380ac4 415f                     pop r15
0000000140380ac6 415e                     pop r14
0000000140380ac8 415d                     pop r13
0000000140380aca 415c                     pop r12
0000000140380acc 5f                       pop rdi
0000000140380acd c3                       ret
