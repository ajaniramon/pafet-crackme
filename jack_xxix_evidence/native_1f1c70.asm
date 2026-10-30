1f1c70 mov      qword ptr [rsp + 8], rbx
1f1c75 push     rdi
1f1c76 sub      rsp, 0x20
1f1c7a mov      rbx, rcx
1f1c7d call     0x1401ee070
1f1c82 mov      edi, eax
1f1c84 mov      rcx, rbx
1f1c87 lea      r8d, [rdi + 3]
1f1c8b cmp      r8d, dword ptr [rbx + 0x1d8]
1f1c92 jae      0x1401f1d6d
1f1c98 mov      edx, edi
1f1c9a call     0x1401f0660
1f1c9f mov      ecx, edi
1f1ca1 lea      r8d, [rdi + 4]
1f1ca5 add      rcx, qword ptr [rbx + 0x1d0]
1f1cac movzx    eax, byte ptr [rcx + 3]
1f1cb0 movzx    r9d, byte ptr [rcx + 1]
1f1cb5 shl      r9d, 8
1f1cb9 or       r9d, eax
1f1cbc movzx    eax, byte ptr [rcx]
1f1cbf shl      r9d, 8
1f1cc3 or       r9d, eax
1f1cc6 movzx    eax, byte ptr [rcx + 2]
1f1cca inc      qword ptr [rbx + 0x1b8]
1f1cd1 movabs   rcx, 0x9e3779b97f4a7c15
1f1cdb shl      r9d, 8
1f1cdf or       r9d, eax
1f1ce2 mov      rax, qword ptr [rbx + 0x1b0]
1f1ce9 imul     rax, rcx
1f1ced movabs   rcx, 0x2545f4914f6cdd1d
1f1cf7 add      rax, rcx
1f1cfa mov      qword ptr [rbx + 0x1b0], rax
1f1d01 shr      rax, 0x1b
1f1d05 movzx    edx, al
1f1d08 mov      byte ptr [rbx + 0x161], dl
1f1d0e imul     rdx, qword ptr [rbx + 0xe0]
1f1d16 mov      rax, qword ptr [rbx + 0xd8]
1f1d1d add      rax, rax
1f1d20 xor      rdx, rax
1f1d23 xor      rdx, qword ptr [rbx + 0xd0]
1f1d2a mov      rcx, rdx
1f1d2d xor      rcx, r8
1f1d30 cmp      byte ptr [rbx + 0xe8], 0
1f1d37 lea      rax, [rdx + r8]
1f1d3b cmove    rax, rcx
1f1d3f mov      qword ptr [rbx + 0xf8], rax
1f1d46 mov      rbx, qword ptr [rsp + 0x30]
1f1d4b imul     eax, edi, 0x84e97925
1f1d51 mov      ecx, eax
1f1d53 shr      ecx, 0xd
1f1d56 xor      ecx, eax
1f1d58 xor      ecx, r9d
1f1d5b xor      ecx, 0xba1c4fa3
1f1d61 imul     eax, ecx, 0x77167b7b
1f1d67 add      rsp, 0x20
1f1d6b pop      rdi
1f1d6c ret      
1f1d6d mov      edx, 0x52445533
1f1d72 call     0x1401ed830
1f1d77 int3     
