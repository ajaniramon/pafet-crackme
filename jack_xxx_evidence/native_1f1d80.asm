1f1d80 mov      qword ptr [rsp + 8], rbx
1f1d85 push     rdi
1f1d86 sub      rsp, 0x20
1f1d8a mov      rbx, rcx
1f1d8d call     0x1401ee070
1f1d92 mov      edi, eax
1f1d94 mov      rcx, rbx
1f1d97 lea      r8d, [rdi + 1]
1f1d9b cmp      r8d, dword ptr [rbx + 0x1d8]
1f1da2 jae      0x1401f1e6b
1f1da8 mov      edx, edi
1f1daa call     0x1401f0660
1f1daf movabs   rcx, 0x9e3779b97f4a7c15
1f1db9 lea      r8d, [rdi + 2]
1f1dbd mov      eax, edi
1f1dbf add      rax, qword ptr [rbx + 0x1d0]
1f1dc6 movzx    r9d, byte ptr [rax + 1]
1f1dcb movzx    r10d, byte ptr [rax]
1f1dcf mov      rax, qword ptr [rbx + 0x1b0]
1f1dd6 inc      qword ptr [rbx + 0x1b8]
1f1ddd imul     rax, rcx
1f1de1 movabs   rcx, 0x2545f4914f6cdd1d
1f1deb add      rax, rcx
1f1dee mov      qword ptr [rbx + 0x1b0], rax
1f1df5 shr      rax, 0x1b
1f1df9 movzx    edx, al
1f1dfc mov      byte ptr [rbx + 0x161], dl
1f1e02 imul     rdx, qword ptr [rbx + 0xe0]
1f1e0a mov      rax, qword ptr [rbx + 0xd8]
1f1e11 add      rax, rax
1f1e14 xor      rdx, rax
1f1e17 xor      rdx, qword ptr [rbx + 0xd0]
1f1e1e mov      rcx, rdx
1f1e21 xor      rcx, r8
1f1e24 cmp      byte ptr [rbx + 0xe8], 0
1f1e2b lea      rax, [rdx + r8]
1f1e2f mov      edx, r9d
1f1e32 cmove    rax, rcx
1f1e36 shl      edx, 8
1f1e39 mov      qword ptr [rbx + 0xf8], rax
1f1e40 or       edx, r10d
1f1e43 mov      rbx, qword ptr [rsp + 0x30]
1f1e48 imul     ecx, edi, 0x84e97925
1f1e4e mov      eax, ecx
1f1e50 xor      eax, 0x9f46000
1f1e55 shr      eax, 0xd
1f1e58 xor      edx, eax
1f1e5a xor      edx, ecx
1f1e5c imul     eax, edx, 0xffff8c3d
1f1e62 movzx    eax, ax
1f1e65 add      rsp, 0x20
1f1e69 pop      rdi
1f1e6a ret      
1f1e6b mov      edx, 0x52445532
1f1e70 call     0x1401ed830
1f1e75 int3     
