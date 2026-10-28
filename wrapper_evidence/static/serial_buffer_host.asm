140232e20 4c8bd1 mov r10, rcx
140232e23 83fa16 cmp edx, 0x16
140232e26 771d ja 0x140232e45
140232e28 8bc2 mov eax, edx
140232e2a 488d0dcfd1dcff lea rcx, [rip - 0x232e31]
140232e31 8b9481f02f2300 mov edx, dword ptr [rcx + rax*4 + 0x232ff0]
140232e38 4803d1 add rdx, rcx
140232e3b ffe2 jmp rdx
140232e3d 498b0a mov rcx, qword ptr [r10]
140232e40 418b00 mov eax, dword ptr [r8]
140232e43 8901 mov dword ptr [rcx], eax
140232e45 33c0 xor eax, eax
140232e47 c3 ret 
140232e48 498b02 mov rax, qword ptr [r10]
140232e4b 486300 movsxd rax, dword ptr [rax]
140232e4e c3 ret 
140232e4f 498b02 mov rax, qword ptr [r10]
140232e52 486310 movsxd rdx, dword ptr [rax]
140232e55 498b4208 mov rax, qword ptr [r10 + 8]
140232e59 881402 mov byte ptr [rdx + rax], dl
140232e5c 498b02 mov rax, qword ptr [r10]
140232e5f 486308 movsxd rcx, dword ptr [rax]
140232e62 498b4208 mov rax, qword ptr [r10 + 8]
140232e66 0fb60401 movzx eax, byte ptr [rcx + rax]
140232e6a c3 ret 
140232e6b 410fb600 movzx eax, byte ptr [r8]
140232e6f 498b4a10 mov rcx, qword ptr [r10 + 0x10]
140232e73 8801 mov byte ptr [rcx], al
140232e75 33c0 xor eax, eax
140232e77 c3 ret 
140232e78 498b4218 mov rax, qword ptr [r10 + 0x18]
140232e7c 488b4010 mov rax, qword ptr [rax + 0x10]
140232e80 c3 ret 
140232e81 498b00 mov rax, qword ptr [r8]
140232e84 498b4a20 mov rcx, qword ptr [r10 + 0x20]
140232e88 488901 mov qword ptr [rcx], rax
140232e8b 33c0 xor eax, eax
140232e8d c3 ret 
140232e8e 418b00 mov eax, dword ptr [r8]
140232e91 498b4a28 mov rcx, qword ptr [r10 + 0x28]
140232e95 8901 mov dword ptr [rcx], eax
140232e97 33c0 xor eax, eax
140232e99 c3 ret 
140232e9a 498b4228 mov rax, qword ptr [r10 + 0x28]
140232e9e 486300 movsxd rax, dword ptr [rax]
140232ea1 c3 ret 
140232ea2 498b4220 mov rax, qword ptr [r10 + 0x20]
140232ea6 488b00 mov rax, qword ptr [rax]
140232ea9 c3 ret 
140232eaa 4d8b5a18 mov r11, qword ptr [r10 + 0x18]
140232eae 49837b1810 cmp qword ptr [r11 + 0x18], 0x10
140232eb3 7203 jb 0x140232eb8
140232eb5 4d8b1b mov r11, qword ptr [r11]
140232eb8 498b4228 mov rax, qword ptr [r10 + 0x28]
140232ebc 33d2 xor edx, edx
140232ebe 498b4a20 mov rcx, qword ptr [r10 + 0x20]
140232ec2 4d8b4a10 mov r9, qword ptr [r10 + 0x10]
140232ec6 4c6300 movsxd r8, dword ptr [rax]
140232ec9 498bc0 mov rax, r8
140232ecc 48f731 div qword ptr [rcx]
140232ecf 498b4208 mov rax, qword ptr [r10 + 8]
140232ed3 420fb60c1a movzx ecx, byte ptr [rdx + r11]
140232ed8 42020c00 add cl, byte ptr [rax + r8]
140232edc 410009 add byte ptr [r9], cl
140232edf 410fb601 movzx eax, byte ptr [r9]
140232ee3 c3 ret 
140232ee4 498b4228 mov rax, qword ptr [r10 + 0x28]
140232ee8 498b5210 mov rdx, qword ptr [r10 + 0x10]
140232eec 486308 movsxd rcx, dword ptr [rax]
140232eef 498b4208 mov rax, qword ptr [r10 + 8]
140232ef3 0fb60c01 movzx ecx, byte ptr [rcx + rax]
140232ef7 000a add byte ptr [rdx], cl
140232ef9 0fb602 movzx eax, byte ptr [rdx]
140232efc c3 ret 
140232efd 498b4210 mov rax, qword ptr [r10 + 0x10]
140232f01 440fb600 movzx r8d, byte ptr [rax]
140232f05 498b4228 mov rax, qword ptr [r10 + 0x28]
140232f09 4d034208 add r8, qword ptr [r10 + 8]
140232f0d 486310 movsxd rdx, dword ptr [rax]
140232f10 49035208 add rdx, qword ptr [r10 + 8]
140232f14 410fb600 movzx eax, byte ptr [r8]
140232f18 0fb60a movzx ecx, byte ptr [rdx]
140232f1b 8802 mov byte ptr [rdx], al
140232f1d 33c0 xor eax, eax
140232f1f 418808 mov byte ptr [r8], cl
140232f22 c3 ret 
140232f23 410fb600 movzx eax, byte ptr [r8]
140232f27 498b4a30 mov rcx, qword ptr [r10 + 0x30]
140232f2b 8801 mov byte ptr [rcx], al
140232f2d 33c0 xor eax, eax
140232f2f c3 ret 
140232f30 410fb600 movzx eax, byte ptr [r8]
140232f34 498b4a38 mov rcx, qword ptr [r10 + 0x38]
140232f38 8801 mov byte ptr [rcx], al
140232f3a 33c0 xor eax, eax
140232f3c c3 ret 
140232f3d 498b00 mov rax, qword ptr [r8]
140232f40 498b4a40 mov rcx, qword ptr [r10 + 0x40]
140232f44 488901 mov qword ptr [rcx], rax
140232f47 33c0 xor eax, eax
140232f49 c3 ret 
140232f4a 498b4240 mov rax, qword ptr [r10 + 0x40]
140232f4e 488b00 mov rax, qword ptr [rax]
140232f51 c3 ret 
140232f52 498b4248 mov rax, qword ptr [r10 + 0x48]
140232f56 488b00 mov rax, qword ptr [rax]
140232f59 c3 ret 
140232f5a 498b4230 mov rax, qword ptr [r10 + 0x30]
140232f5e 0fb600 movzx eax, byte ptr [rax]
140232f61 c3 ret 
140232f62 498b4230 mov rax, qword ptr [r10 + 0x30]
140232f66 498b5238 mov rdx, qword ptr [r10 + 0x38]
140232f6a 0fb608 movzx ecx, byte ptr [rax]
140232f6d 498b4208 mov rax, qword ptr [r10 + 8]
140232f71 0fb60c01 movzx ecx, byte ptr [rcx + rax]
140232f75 000a add byte ptr [rdx], cl
140232f77 0fb602 movzx eax, byte ptr [rdx]
140232f7a c3 ret 
140232f7b 498b4238 mov rax, qword ptr [r10 + 0x38]
140232f7f 440fb600 movzx r8d, byte ptr [rax]
140232f83 498b4230 mov rax, qword ptr [r10 + 0x30]
140232f87 4d034208 add r8, qword ptr [r10 + 8]
140232f8b 0fb610 movzx edx, byte ptr [rax]
140232f8e 49035208 add rdx, qword ptr [r10 + 8]
140232f92 410fb600 movzx eax, byte ptr [r8]
140232f96 0fb60a movzx ecx, byte ptr [rdx]
140232f99 8802 mov byte ptr [rdx], al
140232f9b 33c0 xor eax, eax
140232f9d 418808 mov byte ptr [r8], cl
140232fa0 c3 ret 
140232fa1 4d8b4208 mov r8, qword ptr [r10 + 8]
140232fa5 498b4238 mov rax, qword ptr [r10 + 0x38]
140232fa9 0fb610 movzx edx, byte ptr [rax]
140232fac 498b4230 mov rax, qword ptr [r10 + 0x30]
140232fb0 0fb608 movzx ecx, byte ptr [rax]
140232fb3 420fb60402 movzx eax, byte ptr [rdx + r8]
140232fb8 42020401 add al, byte ptr [rcx + r8]
140232fbc 0fb6c0 movzx eax, al
140232fbf 420fb60400 movzx eax, byte ptr [rax + r8]
140232fc4 c3 ret 
140232fc5 410fb600 movzx eax, byte ptr [r8]
140232fc9 498b4a50 mov rcx, qword ptr [r10 + 0x50]
140232fcd 8801 mov byte ptr [rcx], al
140232fcf 33c0 xor eax, eax
140232fd1 c3 ret 
140232fd2 498b4258 mov rax, qword ptr [r10 + 0x58]
140232fd6 498b4a40 mov rcx, qword ptr [r10 + 0x40]
140232fda 4c8b00 mov r8, qword ptr [rax]
140232fdd 498b4250 mov rax, qword ptr [r10 + 0x50]
140232fe1 4c0301 add r8, qword ptr [rcx]
140232fe4 0fb608 movzx ecx, byte ptr [rax]
140232fe7 413008 xor byte ptr [r8], cl
140232fea 410fb600 movzx eax, byte ptr [r8]
140232fee c3 ret 
