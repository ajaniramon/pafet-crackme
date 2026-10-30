2297b0 mov      eax, edx
2297b2 imul     rdx, rax, 0x3e
2297b6 mov      eax, r8d
2297b9 add      rdx, rax
2297bc mov      rax, qword ptr [rcx + 0x4b8]
2297c3 movsxd   rax, dword ptr [rax + rdx*4]
2297c7 movsxd   rdx, dword ptr [rcx + 0x4c8]
2297ce xor      rax, rdx
2297d1 add      rax, qword ptr [rcx + 0x4c0]
2297d8 ret      
