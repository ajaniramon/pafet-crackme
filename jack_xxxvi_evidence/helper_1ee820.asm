1ee820 mov      qword ptr [rsp + 8], rbx
1ee825 push     rdi
1ee826 sub      rsp, 0x20
1ee82a mov      rdi, rdx
1ee82d mov      rbx, rcx
1ee830 call     0x1401ee1c0
1ee835 cmp      eax, 0x3fe
1ee83a ja       0x1401ee930
1ee840 mov      r8, qword ptr [rbx + 0x1b0]
1ee847 movabs   r10, 0x9e3779b97f4a7c15
1ee851 inc      qword ptr [rbx + 0x1b8]
1ee858 movabs   r11, 0x2545f4914f6cdd1d
1ee862 movsxd   r9, eax
1ee865 imul     r8, r10
1ee869 add      r8, r11
1ee86c mov      qword ptr [rbx + 0x1b0], r8
1ee873 shr      r8, 0x1b
1ee877 inc      eax
1ee879 movzx    edx, r8b
1ee87d movsxd   r8, eax
1ee880 mov      byte ptr [r9 + rbx + 0xd65], dl
1ee888 mov      rax, r8
1ee88b imul     rax, qword ptr [rbx + 0x248]
1ee893 imul     rdx, qword ptr [rbx + 0x1a8]
1ee89b xor      rdx, rax
1ee89e xor      rdx, qword ptr [rbx + 0x240]
1ee8a5 mov      rax, rdx
1ee8a8 shr      rax, 0x3a
1ee8ac test     eax, eax
1ee8ae je       0x1401ee8b5
1ee8b0 mov      ecx, eax
1ee8b2 rol      rdi, cl
1ee8b5 mov      rax, qword ptr [rbx + 0x188]
1ee8bc xor      rdi, rdx
1ee8bf mov      qword ptr [rax + r9*8], rdi
1ee8c3 mov      rax, qword ptr [rbx + 0x1b0]
1ee8ca inc      qword ptr [rbx + 0x1b8]
1ee8d1 imul     rax, r10
1ee8d5 add      rax, r11
1ee8d8 mov      qword ptr [rbx + 0x1b0], rax
1ee8df shr      rax, 0x1b
1ee8e3 movzx    edx, al
1ee8e6 mov      byte ptr [rbx + 0x162], dl
1ee8ec imul     rdx, qword ptr [rbx + 0xe0]
1ee8f4 mov      rax, qword ptr [rbx + 0xd8]
1ee8fb lea      rcx, [rax + rax*2]
1ee8ff xor      rdx, rcx
1ee902 xor      rdx, qword ptr [rbx + 0xd0]
1ee909 mov      rcx, rdx
1ee90c xor      rcx, r8
1ee90f cmp      byte ptr [rbx + 0xe8], 0
1ee916 lea      rax, [rdx + r8]
1ee91a cmove    rax, rcx
1ee91e mov      qword ptr [rbx + 0x100], rax
1ee925 mov      rbx, qword ptr [rsp + 0x30]
1ee92a add      rsp, 0x20
1ee92e pop      rdi
1ee92f ret      
1ee930 mov      edx, 0x53505553
1ee935 mov      rcx, rbx
1ee938 call     0x1401ed830
1ee93d int3     
