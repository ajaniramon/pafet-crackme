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
229c70 push     rbp
229c72 push     r12
229c74 push     r14
229c76 push     r15
229c78 sub      rsp, 0x28
229c7c mov      rbp, rcx
229c7f call     0x1401ee070
229c84 mov      r14d, eax
229c87 cmp      eax, dword ptr [rbp + 0x1d8]
229c8d jb       0x140229d14
229c93 mov      rax, qword ptr [rbp + 0x1b0]
229c9a movabs   r15, 0x9e3779b97f4a7c15
229ca4 inc      qword ptr [rbp + 0x1b8]
229cab movabs   r12, 0x2545f4914f6cdd1d
229cb5 imul     rax, r15
229cb9 add      rax, r12
229cbc mov      qword ptr [rbp + 0x1b0], rax
229cc3 shr      rax, 0x1b
229cc7 movzx    eax, al
229cca mov      byte ptr [rbp + 0x160], al
229cd0 imul     rax, qword ptr [rbp + 0xe0]
229cd8 xor      rax, qword ptr [rbp + 0xd8]
229cdf xor      rax, qword ptr [rbp + 0xd0]
229ce6 mov      rcx, rax
229ce9 add      rax, 0xfe1ab
229cef xor      rcx, 0xfe1ab
229cf6 cmp      byte ptr [rbp + 0xe8], 0
229cfd cmove    rax, rcx
229d01 mov      qword ptr [rbp + 0xf0], rax
229d08 add      rsp, 0x28
229d0c pop      r15
229d0e pop      r14
229d10 pop      r12
229d12 pop      rbp
229d13 ret      
229d14 mov      qword ptr [rsp + 0x50], rbx
229d19 mov      edx, r14d
229d1c mov      qword ptr [rsp + 0x58], rsi
229d21 mov      rcx, rbp
229d24 mov      qword ptr [rsp + 0x60], rdi
229d29 mov      qword ptr [rsp + 0x20], r13
229d2e call     0x1401f25b0
229d33 movsxd   rcx, dword ptr [rbp + 0x11e0]
229d3a movabs   r8, 0xd6e8feb86659fd93
229d44 mov      rdx, qword ptr [rbp + 0x20]
229d48 mov      rax, r14
229d4b imul     rax, r8
229d4f rol      rdx, 0x11
229d53 movabs   r15, 0x9e3779b97f4a7c15
229d5d xor      rax, rdx
229d60 movabs   r11, 0xff51afd7ed558ccd
229d6a imul     rcx, r15
229d6e movabs   rbx, 0xc4ceb9fe1a85ec53
229d78 xor      rcx, qword ptr [rbp + 0x260]
229d7f xor      rax, rcx
229d82 mov      rcx, rax
229d85 shr      rcx, 0x21
229d89 xor      rcx, rax
229d8c imul     rcx, r11
229d90 mov      rdx, rcx
229d93 shr      rdx, 0x21
229d97 xor      rdx, rcx
229d9a imul     rdx, rbx
229d9e mov      rax, rdx
229da1 shr      rax, 0x21
229da5 xor      rax, rdx
229da8 mov      r10, rax
229dab shr      r10, 0x1d
229daf xor      r10, rax
229db2 or       r10, 1
229db6 mov      rax, r10
229db9 mov      qword ptr [rbp + 0x260], r10
229dc0 and      eax, 0x3ff
229dc5 cmp      rax, 0x2c5
229dcb jne      0x140229de6
229dcd mov      rcx, rbp
229dd0 call     0x1402297e0
229dd5 mov      r10, qword ptr [rbp + 0x260]
229ddc movabs   r11, 0xff51afd7ed558ccd
229de6 movzx    eax, r10b
229dea and      al, 0x1f
229dec cmp      al, 0x15
229dee jne      0x140229edb
229df4 movsxd   rax, dword ptr [rbp + 0x11e0]
229dfb xor      rax, 0x5a5a
229e01 mov      rcx, qword ptr [rbp + 0x20]
229e05 imul     rax, r15
229e09 rol      rcx, 0x11
229e0d xor      rax, r10
229e10 xor      rcx, rax
229e13 movabs   rax, 0x8f70feda99a6026d
229e1d xor      rcx, rax
229e20 mov      rax, rcx
229e23 shr      rax, 0x21
229e27 xor      rax, rcx
229e2a imul     rax, r11
229e2e mov      rcx, rax
229e31 shr      rcx, 0x21
229e35 xor      rcx, rax
229e38 imul     rcx, rbx
229e3c mov      rax, rcx
229e3f shr      rax, 0x21
229e43 xor      rax, rcx
229e46 mov      r9, rax
229e49 shr      r9, 0x1d
229e4d xor      r9, rax
229e50 or       r9, 1
229e54 mov      rax, r9
229e57 mov      rcx, r9
229e5a shr      rax, 8
229e5e and      eax, 3
229e61 shr      rcx, 0x28
229e65 imul     r8, rax, 0x3e
229e69 mov      eax, 0x8421085
229e6e mul      ecx
229e70 mov      eax, ecx
229e72 sub      eax, edx
229e74 shr      eax, 1
229e76 add      eax, edx
229e78 shr      eax, 5
229e7b imul     eax, eax, 0x3e
229e7e sub      ecx, eax
229e80 mov      eax, ecx
229e82 add      r8, rax
229e85 mov      rax, qword ptr [rbp + 0x4b8]
229e8c movsxd   rcx, dword ptr [rax + r8*4]
229e90 movsxd   rax, dword ptr [rbp + 0x4c8]
229e97 xor      rcx, rax
229e9a add      rcx, qword ptr [rbp + 0x4c0]
229ea1 xor      rcx, r9
229ea4 mov      rax, rcx
229ea7 shr      rax, 0x21
229eab xor      rax, rcx
229eae imul     rax, r11
229eb2 mov      rcx, rax
229eb5 shr      rcx, 0x21
229eb9 xor      rcx, rax
229ebc imul     rcx, rbx
229ec0 mov      rax, rcx
229ec3 shr      rax, 0x21
229ec7 xor      rax, r10
229eca xor      rax, rcx
229ecd inc      qword ptr [rbp + 0x268]
229ed4 mov      qword ptr [rbp + 0x260], rax
229edb inc      dword ptr [rbp + 0x200]
229ee1 mov      eax, dword ptr [rbp + 0x200]
229ee7 cmp      eax, dword ptr [rbp + 0x1fc]
229eed jb       0x140229f01
229eef mov      rcx, rbp
229ef2 mov      dword ptr [rbp + 0x200], 0
229efc call     0x1401ef7c0
229f01 mov      r8d, r14d
229f04 mov      edx, r14d
229f07 mov      rcx, rbp
229f0a call     0x1401f0660
229f0f inc      qword ptr [rbp + 0x1b8]
229f16 movabs   r12, 0x2545f4914f6cdd1d
229f20 mov      rdi, qword ptr [rbp + 0x1b0]
229f27 mov      rcx, r14
229f2a mov      r8, qword ptr [rbp + 0x1b8]
229f31 imul     rdi, r15
229f35 add      rdi, r12
229f38 mov      qword ptr [rbp + 0x1b0], rdi
229f3f mov      rax, rdi
229f42 shr      rax, 0x1b
229f46 movzx    edx, al
229f49 mov      byte ptr [rbp + 0x168], dl
229f4f mov      r9, qword ptr [rbp + 0xe0]
229f56 mov      r10, qword ptr [rbp + 0xd8]
229f5d mov      rbx, qword ptr [rbp + 0xd0]
229f64 movzx    r11d, byte ptr [rbp + 0xe8]
229f6c imul     rdx, r9
229f70 lea      rax, [r10 + r10*8]
229f74 xor      rdx, rax
229f77 xor      rdx, rbx
229f7a xor      rcx, rdx
229f7d test     r11b, r11b
229f80 lea      rax, [rdx + r14]
229f84 cmove    rax, rcx
229f88 mov      qword ptr [rbp + 0x130], rax
229f8f mov      rcx, qword ptr [rbp + 0x1d0]
229f96 mov      rax, qword ptr [rbp + 0x48]
229f9a imul     rdi, r15
229f9e movzx    esi, byte ptr [rcx + r14]
229fa3 xor      sil, byte ptr [rax + r14]
229fa7 add      rdi, r12
229faa inc      r14d
229fad mov      qword ptr [rbp + 0x1b0], rdi
229fb4 lea      rax, [r8 + 1]
229fb8 shr      rdi, 0x1b
229fbc mov      qword ptr [rbp + 0x1b8], rax
229fc3 mov      ecx, r14d
229fc6 lea      rax, [r10 + r10]
229fca movzx    edx, dil
229fce mov      byte ptr [rbp + 0x161], dl
229fd4 imul     rdx, r9
229fd8 xor      rdx, rax
229fdb xor      rdx, rbx
229fde movabs   rbx, 0xc4ceb9fe1a85ec53
229fe8 xor      rcx, rdx
229feb test     r11b, r11b
229fee movabs   r11, 0xff51afd7ed558ccd
229ff8 lea      rax, [r14 + rdx]
229ffc cmove    rax, rcx
22a000 mov      qword ptr [rbp + 0xf8], rax
22a007 movsxd   rdx, dword ptr [rbp + 0x11e0]
22a00e mov      r10, qword ptr [rbp + 0x348]
22a015 mov      rcx, rdx
22a018 xor      rcx, qword ptr [rbp + 0x350]
22a01f mov      r9, qword ptr [rbp + 0x20]
22a023 xor      rcx, r10
22a026 xor      rcx, r14
22a029 xor      rcx, r9
22a02c mov      rax, rcx
22a02f shr      rax, 0x21
22a033 xor      rax, rcx
22a036 imul     rax, r11
22a03a mov      rcx, rax
22a03d shr      rcx, 0x21
22a041 xor      rcx, rax
22a044 imul     rcx, rbx
22a048 mov      rax, rcx
22a04b shr      rax, 0x21
22a04f xor      rax, rcx
22a052 lea      rcx, [rip + 0x1c2ea7]
22a059 mov      qword ptr [rbp + 0x28], rax
22a05d movzx    eax, sil
22a061 xor      rax, 0xdd
22a067 movzx    r8d, byte ptr [rax + rcx]
22a06c xor      r8b, 0x63
22a070 inc      edx
22a072 mov      dword ptr [rbp + 0x11e0], edx
22a078 mov      r13, qword ptr [rsp + 0x20]
22a07d mov      rdi, qword ptr [rsp + 0x60]
22a082 mov      rsi, qword ptr [rsp + 0x58]
22a087 test     dl, 0x1f
22a08a jne      0x14022a0c2
22a08c movsxd   rax, edx
22a08f xor      rax, r10
22a092 xor      rax, r9
22a095 mov      rcx, rax
22a098 shr      rcx, 0x21
22a09c xor      rcx, rax
22a09f imul     rcx, r11
22a0a3 mov      rdx, rcx
22a0a6 shr      rdx, 0x21
22a0aa xor      rdx, rcx
22a0ad imul     rdx, rbx
22a0b1 mov      rax, rdx
22a0b4 shr      rax, 0x21
22a0b8 xor      rax, rdx
22a0bb mov      qword ptr [rbp + 0x348], rax
22a0c2 movzx    eax, r8b
22a0c6 xor      rax, r14
22a0c9 mov      byte ptr [rbp + 0x4ad], r8b
22a0d0 xor      rax, r9
22a0d3 mov      rcx, rax
22a0d6 shr      rcx, 0x21
22a0da xor      rcx, rax
22a0dd imul     rcx, r11
22a0e1 mov      rdx, rcx
22a0e4 shr      rdx, 0x21
22a0e8 xor      rdx, rcx
22a0eb mov      rcx, rbp
22a0ee imul     rdx, rbx
22a0f2 mov      rax, rdx
22a0f5 shr      rax, 0x21
22a0f9 xor      rax, rdx
22a0fc mov      edx, 0x825f
22a101 mov      qword ptr [rbp + 0x20], rax
22a105 mov      rbx, qword ptr [rsp + 0x50]
22a10a add      rsp, 0x28
22a10e pop      r15
22a110 pop      r14
22a112 pop      r12
22a114 pop      rbp
22a115 jmp      0x1401f0db0
