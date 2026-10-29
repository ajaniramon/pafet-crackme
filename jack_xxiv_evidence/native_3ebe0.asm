14003ebe0 push rbx
14003ebe2 push rbp
14003ebe3 push rsi
14003ebe4 push rdi
14003ebe5 push r12
14003ebe7 push r13
14003ebe9 push r14
14003ebeb push r15
14003ebed sub rsp, 0x48
14003ebf1 movsxd r8, dword ptr [rcx + 0x154]
14003ebf8 mov rbp, rcx
14003ebfb mov r9, qword ptr [rcx + 0x688]
14003ec02 movabs rax, 0x9e3779b97f4a7c15
14003ec0c mov rdx, r8
14003ec0f movabs r15, 0xff51afd7ed558ccd
14003ec19 imul rdx, rax
14003ec1d movabs r12, 0xc4ceb9fe1a85ec53
14003ec27 lea rbx, [rbp + 0xf48]
14003ec2e xor rdx, qword ptr [rcx + 0xce0]
14003ec35 xor r13d, r13d
14003ec38 xor rdx, qword ptr [rcx + 0x5b0]
14003ec3f xor rdx, qword ptr [rcx + 0xd8]
14003ec46 xor rdx, r9
14003ec49 mov qword ptr [rsp + 0xa8], rbx
14003ec51 xor rdx, qword ptr [rcx + 0x50]
14003ec55 mov rax, rdx
14003ec58 mov dword ptr [rip + 0x3efbdd], r13d
14003ec5f shr rax, 0x21
14003ec63 xor rax, rdx
14003ec66 imul rax, r15
14003ec6a mov rcx, rax
14003ec6d shr rcx, 0x21
14003ec71 xor rcx, rax
14003ec74 imul rcx, r12
14003ec78 mov rdx, rcx
14003ec7b shr rdx, 0x21
14003ec7f xor rdx, rcx
14003ec82 mov rcx, r9
14003ec85 or rdx, 1
14003ec89 shr rcx, 0x11
14003ec8d mov rax, rdx
14003ec90 mov qword ptr [rbp + 0x50], rdx
14003ec94 shr rax, 0x20
14003ec98 xor ecx, eax
14003ec9a imul eax, r8d, 0x9e3779b9
14003eca1 xor ecx, eax
14003eca3 xor ecx, edx
14003eca5 mov dword ptr [rbp + 0xf50], ecx
14003ecab cmp dword ptr [rbp + 0x78], r13d
14003ecaf je 0x14003ecfb
14003ecb1 mov rax, qword ptr [rbp + 0x70]
14003ecb5 xor r9, rdx
14003ecb8 mov qword ptr [rbx], rax
14003ecbb movabs rax, 0x48444c4b4559
14003ecc5 xor r9, rax
14003ecc8 mov rax, r9
14003eccb shr rax, 0x21
14003eccf xor rax, r9
14003ecd2 imul rax, r15
14003ecd6 mov rdx, rax
14003ecd9 shr rdx, 0x21
14003ecdd xor rdx, rax
14003ece0 mov rax, qword ptr [rbp + 0x70]
14003ece4 imul rdx, r12
14003ece8 mov rcx, rdx
14003eceb shr rcx, 0x21
14003ecef xor rcx, rdx
14003ecf2 or rcx, 1
14003ecf6 mov qword ptr [rax], rcx
14003ecf9 jmp 0x14003ed0d
14003ecfb mov rax, qword ptr [rip + 0x3ae2fe]
14003ed02 mov qword ptr [rbx], rax
14003ed05 mov qword ptr [rsp + 0xa8], rbx
14003ed0d mov eax, r13d
14003ed10 mov qword ptr [rsp + 0xa0], r13
14003ed18 mov rdx, r13
14003ed1b mov dword ptr [rsp + 0x90], eax
14003ed22 mov qword ptr [rsp + 0x98], rdx
14003ed2a lea rsi, [rbp + 0xd18]
14003ed31 mov r14, r13
14003ed34 mov qword ptr [rsp + 0x20], r13
14003ed39 mov rdi, r13
14003ed3c jmp 0x14003ed54
14003ed40 movabs r15, 0xff51afd7ed558ccd
14003ed4a movabs r12, 0xc4ceb9fe1a85ec53
14003ed54 mov ecx, dword ptr [rbp + 0x50]
14003ed57 lea r10, [rsi + 2]
14003ed5b xor ecx, 0xa5a5a5a5
14003ed61 imul eax, eax, 0x61c88647
14003ed67 sub ecx, eax
14003ed69 mov eax, ecx
14003ed6b xor rax, 0x4a495421
14003ed71 imul rax, r15
14003ed75 mov rcx, rax
14003ed78 shr rcx, 0x21
14003ed7c xor rcx, rax
14003ed7f imul rcx, r12
14003ed83 mov r11, rcx
14003ed86 shr r11, 0x21
14003ed8a xor r11d, ecx
14003ed8d mov rcx, qword ptr [rbp + 0x50]
14003ed91 inc rcx
14003ed94 add rcx, rdx
14003ed97 mov rax, rcx
14003ed9a shr rax, 0x21
14003ed9e xor rax, rcx
14003eda1 imul rax, r15
14003eda5 mov rcx, rax
14003eda8 shr rcx, 0x21
14003edac xor rcx, rax
14003edaf imul rcx, r12
14003edb3 mov rax, rcx
14003edb6 shr rax, 0x21
14003edba xor rax, rcx
14003edbd mov rcx, r10
14003edc0 or rax, 1
14003edc4 mov qword ptr [rbp + 0x50], rax
14003edc8 mov eax, 1
14003edcd mov word ptr [rsi], r13w
14003edd1 mov word ptr [rcx], ax
14003edd4 lea rcx, [rcx + 2]
14003edd8 inc eax
14003edda cmp eax, 0x3e
14003eddd jb 0x14003edd1
14003eddf mov r9d, 0x3e
14003ede5 add r10, 0x78
14003ede9 nop dword ptr [rax]
14003edf0 movzx r8d, word ptr [r10]
14003edf4 lea r10, [r10 - 2]
14003edf8 imul edx, r9d, 0x9e3779b9
14003edff mov eax, r11d
14003ee02 xor rdx, rax
14003ee05 xor rdx, 0x4a495421
14003ee0c imul rdx, r15
14003ee10 mov rcx, rdx
14003ee13 shr rcx, 0x21
14003ee17 xor rcx, rdx
14003ee1a xor edx, edx
14003ee1c imul rcx, r12
14003ee20 mov rax, rcx
14003ee23 shr rax, 0x21
14003ee27 xor eax, ecx
14003ee29 mov r11d, eax
14003ee2c div r9d
14003ee2f dec r9d
14003ee32 movzx eax, word ptr [rsi + rdx*2]
14003ee36 mov word ptr [r10 + 2], ax
14003ee3b mov word ptr [rsi + rdx*2], r8w
14003ee40 cmp r9d, 1
14003ee44 ja 0x14003edf0
14003ee46 mov ecx, r13d
14003ee49 mov rdx, rsi
14003ee4c nop dword ptr [rax]
14003ee50 movzx eax, word ptr [rdx]
14003ee53 lea rdx, [rdx + 2]
14003ee57 mov word ptr [rsi + rax*2 + 0x24c], cx
14003ee5f inc ecx
14003ee61 cmp ecx, 0x3e
14003ee64 jb 0x14003ee50
14003ee66 lea rax, [rip - 0x3ee6d]
14003ee6d mov r15, r13
14003ee70 mov rcx, qword ptr [rdi + rax + 0x3ecdb0]
14003ee78 movabs r12, 0x9e3779b97f4a7c15
14003ee82 mov rdx, qword ptr [rdi + rax + 0x3ed000]
14003ee8a mov r13d, 0x3e
14003ee90 mov qword ptr [rsp + 0x30], rcx
14003ee95 mov qword ptr [rsp + 0x28], rdx
14003ee9a nop word ptr [rax + rax]
14003eea0 cmp dword ptr [rbp + 0x78], 0
14003eea4 movzx eax, word ptr [rsi]
14003eea7 movzx eax, word ptr [rcx + rax*2]
14003eeab mov rax, qword ptr [rdx + rax*8]
14003eeaf je 0x14003ef5f
14003eeb5 mov rcx, qword ptr [rsp + 0x98]
14003eebd mov r9, qword ptr [rbp + 0x70]
14003eec1 xor rcx, r12
14003eec4 xor rcx, qword ptr [rbp + 0x50]
14003eec8 mov rdi, qword ptr [rsp + 0xa0]
14003eed0 mov rdx, rcx
14003eed3 shr rdx, 0x21
14003eed7 inc rdi
14003eeda xor rdx, rcx
14003eedd add rdi, r15
14003eee0 movabs rcx, 0xff51afd7ed558ccd
14003eeea shl rdi, 5
14003eeee imul rdx, rcx
14003eef2 add rdi, r9
14003eef5 mov rcx, rdx
14003eef8 shr rcx, 0x21
14003eefc xor rcx, rdx
14003eeff movabs rdx, 0xc4ceb9fe1a85ec53
14003ef09 imul rcx, rdx
14003ef0d mov rdx, rax
14003ef10 mov rbx, rcx
14003ef13 shr rcx, 9
14003ef17 shr rbx, 0x2a
14003ef1b xor ebx, ecx
14003ef1d mov rcx, rdi
14003ef20 and ebx, 3
14003ef23 mov r8d, ebx
14003ef26 call 0x14003e9a0
14003ef2b mov r8d, dword ptr [rip + 0x3ef90a]
14003ef32 mov rax, qword ptr [rbp + 0xf40]
14003ef39 bts r8d, ebx
14003ef3d mov rbx, qword ptr [rsp + 0xa8]
14003ef45 mov rdx, qword ptr [rsp + 0x28]
14003ef4a mov dword ptr [rip + 0x3ef8eb], r8d
14003ef51 sub edi, dword ptr [rbx]
14003ef53 xor edi, dword ptr [rbp + 0xf50]
14003ef59 mov dword ptr [r14 + rax], edi
14003ef5d jmp 0x14003ef72
14003ef5f sub eax, dword ptr [rbx]
14003ef61 mov rcx, qword ptr [rbp + 0xf40]
14003ef68 xor eax, dword ptr [rbp + 0xf50]
14003ef6e mov dword ptr [r14 + rcx], eax
14003ef72 mov rcx, qword ptr [rsp + 0x30]
14003ef77 movabs rax, 0x61c8864680b583eb
14003ef81 sub r12, rax
14003ef84 inc r15
14003ef87 add r14, 4
14003ef8b add rsi, 2
14003ef8f sub r13, 1
14003ef93 jne 0x14003eea0
14003ef99 mov eax, dword ptr [rsp + 0x90]
14003efa0 mov r13d, 0
14003efa6 mov rdx, qword ptr [rsp + 0x98]
14003efae inc eax
14003efb0 mov rdi, qword ptr [rsp + 0x20]
14003efb5 inc rdx
14003efb8 add qword ptr [rsp + 0xa0], 0x3e
14003efc1 add rdi, 8
14003efc5 mov dword ptr [rsp + 0x90], eax
14003efcc mov qword ptr [rsp + 0x98], rdx
14003efd4 mov qword ptr [rsp + 0x20], rdi
14003efd9 cmp eax, 4
14003efdc jb 0x14003ed40
14003efe2 mov eax, dword ptr [rbp + 0xc]
14003efe5 xor rax, qword ptr [rbp + 0x50]
14003efe9 mov rcx, rax
14003efec shr rcx, 0x21
14003eff0 xor rcx, rax
14003eff3 movabs rax, 0xff51afd7ed558ccd
14003effd imul rcx, rax
14003f001 movabs rax, 0xc4ceb9fe1a85ec53
14003f00b mov rdx, rcx
14003f00e shr rdx, 0x21
14003f012 xor rdx, rcx
14003f015 imul rdx, rax
14003f019 mov rax, rdx
14003f01c shr rax, 0x21
14003f020 xor eax, edx
14003f022 inc dword ptr [rbp + 0x58]
14003f025 mov dword ptr [rbp + 0xc], eax
14003f028 add rsp, 0x48
14003f02c pop r15
14003f02e pop r14
14003f030 pop r13
14003f032 pop r12
14003f034 pop rdi
14003f035 pop rsi
14003f036 pop rbp
14003f037 pop rbx
14003f038 ret 
