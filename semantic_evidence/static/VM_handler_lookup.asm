0000000140335150 8bc2                     mov eax, edx
0000000140335152 486bd03e                 imul rdx, rax, 0x3e
0000000140335156 418bc0                   mov eax, r8d
0000000140335159 4803d0                   add rdx, rax
000000014033515c 488b4138                 mov rax, qword ptr [rcx + 0x38]
0000000140335160 48630490                 movsxd rax, dword ptr [rax + rdx*4]
0000000140335164 48635148                 movsxd rdx, dword ptr [rcx + 0x48]
0000000140335168 4833c2                   xor rax, rdx
000000014033516b 48034140                 add rax, qword ptr [rcx + 0x40]
000000014033516f c3                       ret
