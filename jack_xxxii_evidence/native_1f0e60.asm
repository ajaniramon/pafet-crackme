1f0e60 mov      r10d, r8d
1f0e63 movabs   rax, 0x9e3779b97f4a7c15
1f0e6d inc      r10
1f0e70 movabs   r8, 0xff51afd7ed558ccd
1f0e7a imul     r10, rax
1f0e7e mov      eax, dword ptr [rcx + 0x384]
1f0e84 mov      r11, rdx
1f0e87 xor      r10, rax
1f0e8a xor      r10, qword ptr [rcx + 0x350]
1f0e91 xor      r10, qword ptr [rcx + 0x260]
1f0e98 xor      r10, qword ptr [rcx + 0x20]
1f0e9c xor      r10, r9
1f0e9f mov      rax, r10
1f0ea2 shr      rax, 0x21
1f0ea6 xor      rax, r10
1f0ea9 movabs   r10, 0xc4ceb9fe1a85ec53
1f0eb3 imul     rax, r8
1f0eb7 mov      rcx, rax
1f0eba shr      rcx, 0x21
1f0ebe xor      rcx, rax
1f0ec1 imul     rcx, r10
1f0ec5 mov      r9, rcx
1f0ec8 shr      r9, 0x21
1f0ecc xor      r9, rcx
1f0ecf mov      ecx, r9d
1f0ed2 and      ecx, 0x3f
1f0ed5 je       0x1401f0eda
1f0ed7 rol      r11, cl
1f0eda mov      rax, r9
1f0edd xor      rax, 0x4e524d31
1f0ee3 mov      rcx, rax
1f0ee6 shr      rcx, 0x21
1f0eea xor      rcx, rax
1f0eed imul     rcx, r8
1f0ef1 mov      rdx, rcx
1f0ef4 shr      rdx, 0x21
1f0ef8 xor      rdx, rcx
1f0efb imul     rdx, r10
1f0eff mov      rax, rdx
1f0f02 shr      rax, 0x21
1f0f06 xor      rax, rdx
1f0f09 or       rax, 1
1f0f0d imul     r11, rax
1f0f11 mov      rax, r9
1f0f14 xor      rax, 0x4e524d32
1f0f1a mov      rcx, rax
1f0f1d shr      rcx, 0x21
1f0f21 xor      rcx, rax
1f0f24 imul     rcx, r8
1f0f28 mov      r8, r11
1f0f2b mov      rdx, rcx
1f0f2e shr      rdx, 0x21
1f0f32 xor      rdx, rcx
1f0f35 mov      rcx, r9
1f0f38 shr      rcx, 0x13
1f0f3c imul     rdx, r10
1f0f40 and      cl, 0x1f
1f0f43 shr      r9, 0x29
1f0f47 inc      cl
1f0f49 mov      rax, rdx
1f0f4c shr      rax, 0x21
1f0f50 and      r9b, 0x1f
1f0f54 xor      rax, rdx
1f0f57 shr      r8, cl
1f0f5a or       rax, 1
1f0f5e xor      r8, r11
1f0f61 imul     r8, rax
1f0f65 lea      ecx, [r9 + 1]
1f0f69 mov      rax, r8
1f0f6c shr      rax, cl
1f0f6f xor      rax, r8
1f0f72 ret      
