232e20 mov      r10, rcx
232e23 cmp      edx, 0x16
232e26 ja       0x140232e45
232e28 mov      eax, edx
232e2a lea      rcx, [rip - 0x232e31]
232e31 mov      edx, dword ptr [rcx + rax*4 + 0x232ff0]
232e38 add      rdx, rcx
232e3b jmp      rdx
232e3d mov      rcx, qword ptr [r10]
232e40 mov      eax, dword ptr [r8]
232e43 mov      dword ptr [rcx], eax
232e45 xor      eax, eax
232e47 ret      
232e48 mov      rax, qword ptr [r10]
232e4b movsxd   rax, dword ptr [rax]
232e4e ret      
232e4f mov      rax, qword ptr [r10]
232e52 movsxd   rdx, dword ptr [rax]
232e55 mov      rax, qword ptr [r10 + 8]
232e59 mov      byte ptr [rdx + rax], dl
232e5c mov      rax, qword ptr [r10]
232e5f movsxd   rcx, dword ptr [rax]
232e62 mov      rax, qword ptr [r10 + 8]
232e66 movzx    eax, byte ptr [rcx + rax]
232e6a ret      
232e6b movzx    eax, byte ptr [r8]
232e6f mov      rcx, qword ptr [r10 + 0x10]
232e73 mov      byte ptr [rcx], al
232e75 xor      eax, eax
232e77 ret      
232e78 mov      rax, qword ptr [r10 + 0x18]
232e7c mov      rax, qword ptr [rax + 0x10]
232e80 ret      
232e81 mov      rax, qword ptr [r8]
232e84 mov      rcx, qword ptr [r10 + 0x20]
232e88 mov      qword ptr [rcx], rax
232e8b xor      eax, eax
232e8d ret      
232e8e mov      eax, dword ptr [r8]
232e91 mov      rcx, qword ptr [r10 + 0x28]
232e95 mov      dword ptr [rcx], eax
232e97 xor      eax, eax
232e99 ret      
232e9a mov      rax, qword ptr [r10 + 0x28]
232e9e movsxd   rax, dword ptr [rax]
232ea1 ret      
232ea2 mov      rax, qword ptr [r10 + 0x20]
232ea6 mov      rax, qword ptr [rax]
232ea9 ret      
232eaa mov      r11, qword ptr [r10 + 0x18]
232eae cmp      qword ptr [r11 + 0x18], 0x10
232eb3 jb       0x140232eb8
232eb5 mov      r11, qword ptr [r11]
232eb8 mov      rax, qword ptr [r10 + 0x28]
232ebc xor      edx, edx
232ebe mov      rcx, qword ptr [r10 + 0x20]
232ec2 mov      r9, qword ptr [r10 + 0x10]
232ec6 movsxd   r8, dword ptr [rax]
232ec9 mov      rax, r8
232ecc div      qword ptr [rcx]
232ecf mov      rax, qword ptr [r10 + 8]
232ed3 movzx    ecx, byte ptr [rdx + r11]
232ed8 add      cl, byte ptr [rax + r8]
232edc add      byte ptr [r9], cl
232edf movzx    eax, byte ptr [r9]
232ee3 ret      
232ee4 mov      rax, qword ptr [r10 + 0x28]
232ee8 mov      rdx, qword ptr [r10 + 0x10]
232eec movsxd   rcx, dword ptr [rax]
232eef mov      rax, qword ptr [r10 + 8]
232ef3 movzx    ecx, byte ptr [rcx + rax]
232ef7 add      byte ptr [rdx], cl
232ef9 movzx    eax, byte ptr [rdx]
232efc ret      
232efd mov      rax, qword ptr [r10 + 0x10]
232f01 movzx    r8d, byte ptr [rax]
232f05 mov      rax, qword ptr [r10 + 0x28]
232f09 add      r8, qword ptr [r10 + 8]
232f0d movsxd   rdx, dword ptr [rax]
232f10 add      rdx, qword ptr [r10 + 8]
232f14 movzx    eax, byte ptr [r8]
232f18 movzx    ecx, byte ptr [rdx]
232f1b mov      byte ptr [rdx], al
232f1d xor      eax, eax
232f1f mov      byte ptr [r8], cl
232f22 ret      
232f23 movzx    eax, byte ptr [r8]
232f27 mov      rcx, qword ptr [r10 + 0x30]
232f2b mov      byte ptr [rcx], al
232f2d xor      eax, eax
232f2f ret      
232f30 movzx    eax, byte ptr [r8]
232f34 mov      rcx, qword ptr [r10 + 0x38]
232f38 mov      byte ptr [rcx], al
232f3a xor      eax, eax
232f3c ret      
232f3d mov      rax, qword ptr [r8]
232f40 mov      rcx, qword ptr [r10 + 0x40]
232f44 mov      qword ptr [rcx], rax
232f47 xor      eax, eax
232f49 ret      
232f4a mov      rax, qword ptr [r10 + 0x40]
232f4e mov      rax, qword ptr [rax]
232f51 ret      
232f52 mov      rax, qword ptr [r10 + 0x48]
232f56 mov      rax, qword ptr [rax]
232f59 ret      
232f5a mov      rax, qword ptr [r10 + 0x30]
232f5e movzx    eax, byte ptr [rax]
232f61 ret      
232f62 mov      rax, qword ptr [r10 + 0x30]
232f66 mov      rdx, qword ptr [r10 + 0x38]
232f6a movzx    ecx, byte ptr [rax]
232f6d mov      rax, qword ptr [r10 + 8]
232f71 movzx    ecx, byte ptr [rcx + rax]
232f75 add      byte ptr [rdx], cl
232f77 movzx    eax, byte ptr [rdx]
232f7a ret      
232f7b mov      rax, qword ptr [r10 + 0x38]
232f7f movzx    r8d, byte ptr [rax]
232f83 mov      rax, qword ptr [r10 + 0x30]
232f87 add      r8, qword ptr [r10 + 8]
232f8b movzx    edx, byte ptr [rax]
232f8e add      rdx, qword ptr [r10 + 8]
232f92 movzx    eax, byte ptr [r8]
232f96 movzx    ecx, byte ptr [rdx]
232f99 mov      byte ptr [rdx], al
232f9b xor      eax, eax
232f9d mov      byte ptr [r8], cl
232fa0 ret      
232fa1 mov      r8, qword ptr [r10 + 8]
232fa5 mov      rax, qword ptr [r10 + 0x38]
232fa9 movzx    edx, byte ptr [rax]
232fac mov      rax, qword ptr [r10 + 0x30]
232fb0 movzx    ecx, byte ptr [rax]
232fb3 movzx    eax, byte ptr [rdx + r8]
232fb8 add      al, byte ptr [rcx + r8]
232fbc movzx    eax, al
232fbf movzx    eax, byte ptr [rax + r8]
232fc4 ret      
232fc5 movzx    eax, byte ptr [r8]
232fc9 mov      rcx, qword ptr [r10 + 0x50]
232fcd mov      byte ptr [rcx], al
232fcf xor      eax, eax
232fd1 ret      
232fd2 mov      rax, qword ptr [r10 + 0x58]
232fd6 mov      rcx, qword ptr [r10 + 0x40]
232fda mov      r8, qword ptr [rax]
232fdd mov      rax, qword ptr [r10 + 0x50]
232fe1 add      r8, qword ptr [rcx]
232fe4 movzx    ecx, byte ptr [rax]
232fe7 xor      byte ptr [r8], cl
232fea movzx    eax, byte ptr [r8]
232fee ret      
39d940 mov      r8, qword ptr [r8]
39d943 add      rcx, 8
39d947 mov      edx, dword ptr [rdx]
39d949 jmp      0x140232e20
