229c70 push     rbp
229c72 push     r12
229c74 push     r14
229c76 push     r15
229c78 sub      rsp, 0x28
229c7c mov      rbp, rcx
229c7f call     0x1401ee070
229c84 mov      r14d, eax
229c87 cmp      eax, dword ptr [rbp + 0x1d8]
229c8d jb       0x140229d14
229c93 mov      rax, qword ptr [rbp + 0x1b0]
229c9a movabs   r15, 0x9e3779b97f4a7c15
229ca4 inc      qword ptr [rbp + 0x1b8]
229cab movabs   r12, 0x2545f4914f6cdd1d
229cb5 imul     rax, r15
229cb9 add      rax, r12
229cbc mov      qword ptr [rbp + 0x1b0], rax
229cc3 shr      rax, 0x1b
229cc7 movzx    eax, al
229cca mov      byte ptr [rbp + 0x160], al
229cd0 imul     rax, qword ptr [rbp + 0xe0]
229cd8 xor      rax, qword ptr [rbp + 0xd8]
229cdf xor      rax, qword ptr [rbp + 0xd0]
229ce6 mov      rcx, rax
229ce9 add      rax, 0xfe1ab
229cef xor      rcx, 0xfe1ab
229cf6 cmp      byte ptr [rbp + 0xe8], 0
229cfd cmove    rax, rcx
229d01 mov      qword ptr [rbp + 0xf0], rax
229d08 add      rsp, 0x28
229d0c pop      r15
229d0e pop      r14
229d10 pop      r12
229d12 pop      rbp
229d13 ret      
