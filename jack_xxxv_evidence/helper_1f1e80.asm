1f1e80 mov      qword ptr [rsp + 8], rbx
1f1e85 push     rdi
1f1e86 sub      rsp, 0x20
1f1e8a mov      rbx, rcx
1f1e8d call     0x1401ee070
1f1e92 mov      rcx, rbx
1f1e95 mov      edi, eax
1f1e97 cmp      eax, dword ptr [rbx + 0x1d8]
1f1e9d jae      0x1401f1f40
1f1ea3 mov      r8d, edi
1f1ea6 mov      edx, edi
1f1ea8 call     0x1401f0660
1f1ead inc      qword ptr [rbx + 0x1b8]
1f1eb4 lea      r8d, [rdi + 1]
1f1eb8 mov      rax, qword ptr [rbx + 0x1b0]
1f1ebf movabs   rcx, 0x9e3779b97f4a7c15
1f1ec9 imul     rax, rcx
1f1ecd movabs   rcx, 0x2545f4914f6cdd1d
1f1ed7 add      rax, rcx
1f1eda mov      qword ptr [rbx + 0x1b0], rax
1f1ee1 shr      rax, 0x1b
1f1ee5 movzx    edx, al
1f1ee8 mov      byte ptr [rbx + 0x161], dl
1f1eee imul     rdx, qword ptr [rbx + 0xe0]
1f1ef6 mov      rax, qword ptr [rbx + 0xd8]
1f1efd add      rax, rax
1f1f00 xor      rdx, rax
1f1f03 xor      rdx, qword ptr [rbx + 0xd0]
1f1f0a mov      rcx, rdx
1f1f0d xor      rcx, r8
1f1f10 cmp      byte ptr [rbx + 0xe8], 0
1f1f17 lea      rax, [rdx + r8]
1f1f1b cmove    rax, rcx
1f1f1f mov      qword ptr [rbx + 0xf8], rax
1f1f26 mov      rax, qword ptr [rbx + 0x1d0]
1f1f2d mov      rbx, qword ptr [rsp + 0x30]
1f1f32 movzx    eax, byte ptr [rax + rdi]
1f1f36 btc      eax, 7
1f1f3a add      rsp, 0x20
1f1f3e pop      rdi
1f1f3f ret      
1f1f40 mov      edx, 0x52445538
1f1f45 call     0x1401ed830
1f1f4a int3     
