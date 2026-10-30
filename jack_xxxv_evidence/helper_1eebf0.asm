1eebf0 mov      qword ptr [rsp + 8], rbx
1eebf5 mov      qword ptr [rsp + 0x10], rdi
1eebfa mov      rax, qword ptr gs:[0x58]
1eec03 mov      rbx, qword ptr [rsp + 8]
1eec08 movsxd   r9, ecx
1eec0b movabs   rcx, 0x9e3779b97f4a7c15
1eec15 movsxd   r10, edx
1eec18 mov      edi, 0x610
1eec1d add      rdi, qword ptr [rax]
1eec20 mov      rax, qword ptr [rdi + 0x518]
1eec27 imul     rax, rcx
1eec2b movabs   rcx, 0x2545f4914f6cdd1d
1eec35 add      rax, rcx
1eec38 mov      qword ptr [rdi + 0x518], rax
1eec3f shr      rax, 0x1d
1eec43 movzx    edx, al
1eec46 lea      rax, [r9 + r9*4]
1eec4a lea      rcx, [r10 + rax*8]
1eec4e mov      byte ptr [rcx + rdi + 0x20], dl
1eec52 lea      eax, [r9*4 + 1]
1eec5a imul     rdx, qword ptr [rdi + 0x510]
1eec62 add      eax, r10d
1eec65 movsxd   rcx, eax
1eec68 imul     rcx, qword ptr [rdi + 0x508]
1eec70 xor      rcx, rdx
1eec73 xor      rcx, qword ptr [rdi + 0x500]
1eec7a mov      rax, rcx
1eec7d xor      rax, r8
1eec80 cmp      byte ptr [rdi + 0x520], 0
1eec87 lea      rdx, [rcx + r8]
1eec8b cmove    rdx, rax
1eec8f lea      rcx, [r10 + r9*4]
1eec93 add      rcx, r9
1eec96 mov      qword ptr [rdi + rcx*8], rdx
1eec9a mov      rdi, qword ptr [rsp + 0x10]
1eec9f ret      
