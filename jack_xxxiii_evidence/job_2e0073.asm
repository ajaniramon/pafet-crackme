230ef1 mov      rcx, qword ptr [rsp + 0x4d8]
230ef9 xor      rcx, qword ptr [rsp + 0x1378]
230f01 mov      qword ptr [rsp + 0x4d8], rcx
230f09 xor      rcx, qword ptr [rsp + 0x1b0]
230f11 call     0x140002040
230f16 mov      qword ptr [rsp + 0x1b0], rax
230f1e mov      rdx, qword ptr [rsp + 0x4d8]
230f26 mov      rcx, rax
230f29 call     0x1400023e0
230f2e mov      edx, 0x2e0108
230f33 test     eax, eax
230f35 cmovne   rdx, r15
