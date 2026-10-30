1eeb00 mov      qword ptr [rsp + 8], rbx
1eeb05 mov      qword ptr [rsp + 0x10], rdi
1eeb0a mov      rax, qword ptr gs:[0x58]
1eeb13 movsxd   r10, ecx
1eeb16 movsxd   r9, edx
1eeb19 mov      edi, 0x610
1eeb1e add      rdi, qword ptr [rax]
1eeb21 lea      rax, [r10 + r10*4]
1eeb25 lea      r11, [r9 + rax*8]
1eeb29 lea      eax, [rcx*4 + 1]
1eeb30 add      eax, edx
1eeb32 lea      rcx, [r9 + r10*4]
1eeb36 movzx    edx, byte ptr [r11 + rdi + 0x20]
1eeb3c add      rcx, r10
1eeb3f imul     rdx, qword ptr [rdi + 0x510]
1eeb47 mov      r9, qword ptr [rdi + rcx*8]
1eeb4b lea      r8, [rdi + rcx*8]
1eeb4f movsxd   rbx, eax
1eeb52 movabs   rcx, 0x9e3779b97f4a7c15
1eeb5c mov      rax, rbx
1eeb5f imul     rax, qword ptr [rdi + 0x508]
1eeb67 xor      rdx, rax
1eeb6a xor      rdx, qword ptr [rdi + 0x500]
1eeb71 mov      rax, rdx
1eeb74 xor      rax, r9
1eeb77 sub      r9, rdx
1eeb7a cmp      byte ptr [rdi + 0x520], 0
1eeb81 cmove    r9, rax
1eeb85 mov      rax, qword ptr [rdi + 0x518]
1eeb8c imul     rax, rcx
1eeb90 movabs   rcx, 0x2545f4914f6cdd1d
1eeb9a add      rax, rcx
1eeb9d mov      qword ptr [rdi + 0x518], rax
1eeba4 shr      rax, 0x1d
1eeba8 movzx    ecx, al
1eebab mov      rax, r9
1eebae mov      byte ptr [r11 + rdi + 0x20], cl
1eebb3 imul     rcx, qword ptr [rdi + 0x510]
1eebbb imul     rbx, qword ptr [rdi + 0x508]
1eebc3 xor      rcx, rbx
1eebc6 mov      rbx, qword ptr [rsp + 8]
1eebcb xor      rcx, qword ptr [rdi + 0x500]
1eebd2 mov      rdx, rcx
1eebd5 add      rcx, r9
1eebd8 xor      rdx, r9
1eebdb cmp      byte ptr [rdi + 0x520], 0
1eebe2 mov      rdi, qword ptr [rsp + 0x10]
1eebe7 cmove    rcx, rdx
1eebeb mov      qword ptr [r8], rcx
1eebee ret      
