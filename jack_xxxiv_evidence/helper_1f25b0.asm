1f25b0 push     rbp
1f25b2 sub      rsp, 0x20
1f25b6 mov      eax, dword ptr [rcx + 0x1d8]
1f25bc mov      rbp, rcx
1f25bf test     eax, eax
1f25c1 je       0x1401f2653
1f25c7 cmp      edx, eax
1f25c9 jae      0x1401f2653
1f25cf mov      qword ptr [rsp + 0x30], rbx
1f25d4 mov      eax, 0x4ec4ec4f
1f25d9 mul      edx
1f25db mov      qword ptr [rsp + 0x38], rsi
1f25e0 xor      esi, esi
1f25e2 mov      qword ptr [rsp + 0x40], rdi
1f25e7 mov      edi, edx
1f25e9 shr      edi, 3
1f25ec cmp      edi, 0x67
1f25ef jb       0x1401f25f6
1f25f1 lea      edi, [rsi + 0x67]
1f25f4 jmp      0x1401f261c
1f25f6 test     edi, edi
1f25f8 je       0x1401f261a
1f25fa lea      eax, [rdi - 1]
1f25fd mov      ebx, esi
1f25ff nop      
1f2600 mov      ecx, eax
1f2602 call     0x1401ed120
1f2607 cmp      eax, 0x66
1f260a jb       0x1401f2615
1f260c inc      ebx
1f260e cmp      ebx, 0x40
1f2611 jl       0x1401f2600
1f2613 jmp      0x1401f261c
1f2615 lea      edi, [rax + 1]
1f2618 jmp      0x1401f261c
1f261a mov      edi, esi
1f261c mov      rax, qword ptr [rbp + 0xb10]
1f2623 cmp      edi, 0x67
1f2626 mov      rbx, qword ptr [rsp + 0x30]
1f262b cmovb    esi, edi
1f262e mov      rdi, qword ptr [rsp + 0x40]
1f2633 mov      dword ptr [rbp + 0xb18], esi
1f2639 cmp      byte ptr [rax + rsi], 0
1f263d jne      0x1401f264e
1f263f mov      r8d, esi
1f2642 mov      byte ptr [rax + rsi], 1
1f2646 mov      rcx, rbp
1f2649 call     0x1401f1fe0
1f264e mov      rsi, qword ptr [rsp + 0x38]
1f2653 add      rsp, 0x20
1f2657 pop      rbp
1f2658 ret      
