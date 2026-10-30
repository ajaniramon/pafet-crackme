1f0db0 mov      qword ptr [rsp + 0x10], rbx
1f0db5 push     rdi
1f0db6 sub      rsp, 0x20
1f0dba inc      qword ptr [rcx + 0xad8]
1f0dc1 mov      rbx, rcx
1f0dc4 mov      edi, edx
1f0dc6 xor      rdi, qword ptr [rcx + 0xac8]
1f0dcd mov      rcx, qword ptr [rcx + 0xad8]
1f0dd4 mov      rax, rcx
1f0dd7 xor      rax, qword ptr [rbx + 0x260]
1f0dde test     rax, 0x1ff
1f0de4 jne      0x1401f0df5
1f0de6 mov      rcx, rbx
1f0de9 call     0x1402297e0
1f0dee mov      rcx, qword ptr [rbx + 0xad8]
1f0df5 cmp      rcx, 1
1f0df9 je       0x1401f0e37
1f0dfb imul     rax, rcx, -0x3eb
1f0e02 xor      eax, dword ptr [rbx + 0xac8]
1f0e08 and      eax, 0xfff
1f0e0d cmp      rax, 0x1f
1f0e11 je       0x1401f0e37
1f0e13 mov      eax, dword ptr [rbx + 0xad0]
1f0e19 cmp      eax, 0x40
1f0e1c jae      0x1401f0e4e
1f0e1e mov      qword ptr [rbx + rax*8 + 0x8c8], rdi
1f0e26 inc      dword ptr [rbx + 0xad0]
1f0e2c mov      rbx, qword ptr [rsp + 0x38]
1f0e31 add      rsp, 0x20
1f0e35 pop      rdi
1f0e36 ret      
1f0e37 lea      rdx, [rip + 0x21acf2]
1f0e3e mov      qword ptr [rsp + 0x30], rdi
1f0e43 lea      rcx, [rsp + 0x30]
1f0e48 call     0x1403a5fa0
1f0e4d int3     
1f0e4e mov      edx, 0x4a4f5046
1f0e53 mov      rcx, rbx
1f0e56 call     0x1401ed830
1f0e5b int3     
