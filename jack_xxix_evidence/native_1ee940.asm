1ee940 push     rbx
1ee942 sub      rsp, 0x20
1ee946 mov      rbx, rcx
1ee949 call     0x1401ee1c0
1ee94e movsxd   r10, eax
1ee951 test     eax, eax
1ee953 jle      0x1401eeab5
1ee959 mov      r9, qword ptr [rbx + 0x1b0]
1ee960 dec      eax
1ee962 movsxd   r8, eax
1ee965 mov      qword ptr [rsp + 0x30], rbp
1ee96a movabs   rbp, 0x2545f4914f6cdd1d
1ee974 mov      qword ptr [rsp + 0x38], rsi
1ee979 movabs   rsi, 0x9e3779b97f4a7c15
1ee983 imul     r9, rsi
1ee987 mov      qword ptr [rsp + 0x40], rdi
1ee98c lea      r11, [r8*8]
1ee994 mov      rdi, qword ptr [rbx + 0x1b8]
1ee99b add      r9, rbp
1ee99e mov      qword ptr [rbx + 0x1b0], r9
1ee9a5 inc      rdi
1ee9a8 mov      qword ptr [rbx + 0x1b8], rdi
1ee9af mov      rax, r9
1ee9b2 shr      rax, 0x1b
1ee9b6 movzx    edx, al
1ee9b9 mov      byte ptr [rbx + 0x162], dl
1ee9bf imul     rdx, qword ptr [rbx + 0xe0]
1ee9c7 mov      rax, qword ptr [rbx + 0xd8]
1ee9ce lea      rcx, [rax + rax*2]
1ee9d2 xor      rdx, rcx
1ee9d5 xor      rdx, qword ptr [rbx + 0xd0]
1ee9dc mov      rcx, rdx
1ee9df xor      rcx, r8
1ee9e2 cmp      byte ptr [rbx + 0xe8], 0
1ee9e9 lea      rax, [rdx + r8]
1ee9ed cmove    rax, rcx
1ee9f1 mov      qword ptr [rbx + 0x100], rax
1ee9f8 mov      rax, r10
1ee9fb imul     rax, qword ptr [rbx + 0x248]
1eea03 movzx    ecx, byte ptr [r8 + rbx + 0xd65]
1eea0c imul     rcx, qword ptr [rbx + 0x1a8]
1eea14 xor      rcx, rax
1eea17 mov      rax, qword ptr [rbx + 0x188]
1eea1e xor      rcx, qword ptr [rbx + 0x240]
1eea25 mov      rdx, rcx
1eea28 shr      rcx, 0x3a
1eea2c xor      rdx, qword ptr [r11 + rax]
1eea30 test     ecx, ecx
1eea32 je       0x1401eea37
1eea34 ror      rdx, cl
1eea37 imul     r9, rsi
1eea3b mov      rsi, qword ptr [rsp + 0x38]
1eea40 lea      rax, [rdi + 1]
1eea44 mov      rdi, qword ptr [rsp + 0x40]
1eea49 add      r9, rbp
1eea4c mov      rbp, qword ptr [rsp + 0x30]
1eea51 mov      qword ptr [rbx + 0x1b8], rax
1eea58 mov      qword ptr [rbx + 0x1b0], r9
1eea5f shr      r9, 0x1b
1eea63 movzx    eax, r9b
1eea67 mov      byte ptr [r8 + rbx + 0xd65], al
1eea6f imul     rax, qword ptr [rbx + 0x1a8]
1eea77 imul     r10, qword ptr [rbx + 0x248]
1eea7f xor      r8, qword ptr [rbx + 0x1b0]
1eea86 xor      rax, r10
1eea89 xor      rax, qword ptr [rbx + 0x240]
1eea90 mov      rcx, rax
1eea93 shr      rcx, 0x3a
1eea97 test     ecx, ecx
1eea99 je       0x1401eea9e
1eea9b rol      r8, cl
1eea9e mov      rcx, qword ptr [rbx + 0x188]
1eeaa5 xor      r8, rax
1eeaa8 mov      rax, rdx
1eeaab mov      qword ptr [r11 + rcx], r8
1eeaaf add      rsp, 0x20
1eeab3 pop      rbx
1eeab4 ret      
1eeab5 mov      edx, 0x53504f50
1eeaba mov      rcx, rbx
1eeabd call     0x1401ed830
1eeac2 int3     
