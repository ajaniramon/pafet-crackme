1f5bf0 push     rbx
1f5bf2 push     rdi
1f5bf3 push     r12
1f5bf5 push     r13
1f5bf7 push     r14
1f5bf9 sub      rsp, 0x40
1f5bfd movsxd   rax, dword ptr [rcx + 0x11e0]
1f5c04 mov      r14, rcx
1f5c07 mov      r13d, edx
1f5c0a movabs   rcx, 0x34a5a4cbb437c294
1f5c14 imul     rax, rcx
1f5c18 movabs   rcx, 0x96fc2e0035e946ab
1f5c22 mov      r12, r8
1f5c25 xor      rax, qword ptr [r14 + 0x28]
1f5c29 mov      qword ptr [rsp + 0x70], rax
1f5c2e mov      rax, qword ptr [rsp + 0x70]
1f5c33 movsxd   rax, dword ptr [r14 + 0x11e0]
1f5c3a imul     rax, rcx
1f5c3e movabs   rcx, 0x7034b05eb6a2cabe
1f5c48 xor      rax, qword ptr [r14 + 0x28]
1f5c4c mov      qword ptr [rsp + 0x70], rax
1f5c51 mov      rax, qword ptr [rsp + 0x70]
1f5c56 movsxd   rax, dword ptr [r14 + 0x11e0]
1f5c5d imul     rax, rcx
1f5c61 xor      rax, qword ptr [r14 + 0x28]
1f5c65 mov      qword ptr [rsp + 0x70], rax
1f5c6a mov      rax, qword ptr [rsp + 0x70]
1f5c6f mov      rax, qword ptr [r14 + 0x2e0]
1f5c76 shr      rax, 0xd
1f5c7a mov      rcx, rax
1f5c7d shr      rcx, 0x21
1f5c81 xor      rcx, rax
1f5c84 movabs   rax, 0xff51afd7ed558ccd
1f5c8e imul     rcx, rax
1f5c92 movabs   rax, 0xc4ceb9fe1a85ec53
1f5c9c mov      rdx, rcx
1f5c9f shr      rdx, 0x21
1f5ca3 xor      rdx, rcx
1f5ca6 imul     rdx, rax
1f5caa movabs   rax, 0x401f3812bcbadaba
1f5cb4 mov      rcx, rdx
1f5cb7 shr      rcx, 0x21
1f5cbb xor      rcx, rdx
1f5cbe xor      rcx, rax
1f5cc1 mov      rax, qword ptr [r14 + 0x2e0]
1f5cc8 add      rcx, rax
1f5ccb mov      qword ptr [r14 + 0x2e0], rcx
1f5cd2 mov      rcx, r14
1f5cd5 call     0x1401f1c70
1f5cda mov      rcx, r14
1f5cdd mov      ebx, eax
1f5cdf call     0x1401ee070
1f5ce4 mov      ecx, ebx
1f5ce6 mov      edi, eax
1f5ce8 call     0x1401ed270
1f5ced xor      r9d, r9d
1f5cf0 mov      dword ptr [rsp + 0x28], edi
1f5cf4 xor      edx, edx
1f5cf6 mov      dword ptr [rsp + 0x20], eax
1f5cfa mov      rcx, r14
1f5cfd lea      r8d, [r9 + 1]
1f5d01 call     0x1401f10a0
1f5d06 mov      rdx, rax
1f5d09 mov      rcx, r14
1f5d0c call     0x1401f0db0
