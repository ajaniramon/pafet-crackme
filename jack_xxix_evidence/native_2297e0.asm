2297e0 push     rbx
2297e2 push     rbp
2297e3 push     rsi
2297e4 push     rdi
2297e5 push     r12
2297e7 push     r13
2297e9 push     r14
2297eb push     r15
2297ed sub      rsp, 0x48
2297f1 movsxd   r8, dword ptr [rcx + 0x11e0]
2297f8 mov      rbp, rcx
2297fb mov      r9, qword ptr [rcx + 0x260]
229802 movabs   rax, 0x9e3779b97f4a7c15
22980c mov      rdx, r8
22980f movabs   r15, 0xff51afd7ed558ccd
229819 imul     rdx, rax
22981d movabs   r12, 0xc4ceb9fe1a85ec53
229827 lea      rbx, [rbp + 0x4c0]
22982e xor      rdx, qword ptr [rcx + 0xac8]
229835 xor      r13d, r13d
229838 xor      rdx, qword ptr [rcx + 0x348]
22983f xor      rdx, qword ptr [rcx + 0x20]
229843 xor      rdx, r9
229846 mov      qword ptr [rsp + 0xa8], rbx
22984e xor      rdx, qword ptr [rcx + 0x320]
229855 mov      rax, rdx
229858 mov      dword ptr [rip + 0x211379], r13d
22985f shr      rax, 0x21
229863 xor      rax, rdx
229866 imul     rax, r15
22986a mov      rcx, rax
22986d shr      rcx, 0x21
229871 xor      rcx, rax
229874 imul     rcx, r12
229878 mov      rdx, rcx
22987b shr      rdx, 0x21
22987f xor      rdx, rcx
229882 mov      rcx, r9
229885 or       rdx, 1
229889 shr      rcx, 0x11
22988d mov      rax, rdx
229890 mov      qword ptr [rbp + 0x320], rdx
229897 shr      rax, 0x20
22989b xor      ecx, eax
22989d imul     eax, r8d, 0x9e3779b9
2298a4 xor      ecx, eax
2298a6 xor      ecx, edx
2298a8 mov      dword ptr [rbp + 0x4c8], ecx
2298ae cmp      dword ptr [rbp + 0x1198], r13d
2298b5 je       0x140229907
2298b7 mov      rax, qword ptr [rbp + 0x1190]
2298be xor      r9, rdx
2298c1 mov      qword ptr [rbx], rax
2298c4 movabs   rax, 0x48444c4b4559
2298ce xor      r9, rax
2298d1 mov      rax, r9
2298d4 shr      rax, 0x21
2298d8 xor      rax, r9
2298db imul     rax, r15
2298df mov      rdx, rax
2298e2 shr      rdx, 0x21
2298e6 xor      rdx, rax
2298e9 mov      rax, qword ptr [rbp + 0x1190]
2298f0 imul     rdx, r12
2298f4 mov      rcx, rdx
2298f7 shr      rcx, 0x21
2298fb xor      rcx, rdx
2298fe or       rcx, 1
229902 mov      qword ptr [rax], rcx
229905 jmp      0x140229919
229907 mov      rax, qword ptr [rip + 0x1b8a32]
22990e mov      qword ptr [rbx], rax
229911 mov      qword ptr [rsp + 0xa8], rbx
229919 mov      eax, r13d
22991c mov      qword ptr [rsp + 0xa0], r13
229924 mov      rdx, r13
229927 mov      dword ptr [rsp + 0x90], eax
22992e mov      qword ptr [rsp + 0x98], rdx
229936 lea      rsi, [rbp + 0x6c8]
22993d mov      r14, r13
229940 mov      qword ptr [rsp + 0x20], r13
229945 mov      rdi, r13
229948 jmp      0x140229964
229950 movabs   r15, 0xff51afd7ed558ccd
22995a movabs   r12, 0xc4ceb9fe1a85ec53
229964 mov      ecx, dword ptr [rbp + 0x320]
22996a lea      r10, [rsi + 2]
22996e xor      ecx, 0xa5a5a5a5
229974 imul     eax, eax, 0x61c88647
22997a sub      ecx, eax
22997c mov      eax, ecx
22997e xor      rax, 0x4a495421
229984 imul     rax, r15
229988 mov      rcx, rax
22998b shr      rcx, 0x21
22998f xor      rcx, rax
229992 imul     rcx, r12
229996 mov      r11, rcx
229999 shr      r11, 0x21
22999d xor      r11d, ecx
2299a0 mov      rcx, qword ptr [rbp + 0x320]
2299a7 inc      rcx
2299aa add      rcx, rdx
2299ad mov      rax, rcx
2299b0 shr      rax, 0x21
2299b4 xor      rax, rcx
2299b7 imul     rax, r15
2299bb mov      rcx, rax
2299be shr      rcx, 0x21
2299c2 xor      rcx, rax
2299c5 imul     rcx, r12
2299c9 mov      rax, rcx
2299cc shr      rax, 0x21
2299d0 xor      rax, rcx
2299d3 mov      rcx, r10
2299d6 or       rax, 1
2299da mov      qword ptr [rbp + 0x320], rax
2299e1 mov      eax, 1
2299e6 mov      word ptr [rsi], r13w
2299ea nop      word ptr [rax + rax]
2299f0 mov      word ptr [rcx], ax
2299f3 lea      rcx, [rcx + 2]
2299f7 inc      eax
2299f9 cmp      eax, 0x3e
2299fc jb       0x1402299f0
2299fe mov      r9d, 0x3e
229a04 add      r10, 0x78
229a08 nop      dword ptr [rax + rax]
229a10 movzx    r8d, word ptr [r10]
229a14 lea      r10, [r10 - 2]
229a18 imul     edx, r9d, 0x9e3779b9
229a1f mov      eax, r11d
229a22 xor      rdx, rax
229a25 xor      rdx, 0x4a495421
229a2c imul     rdx, r15
229a30 mov      rcx, rdx
229a33 shr      rcx, 0x21
229a37 xor      rcx, rdx
229a3a xor      edx, edx
229a3c imul     rcx, r12
229a40 mov      rax, rcx
229a43 shr      rax, 0x21
229a47 xor      eax, ecx
229a49 mov      r11d, eax
229a4c div      r9d
229a4f dec      r9d
229a52 movzx    eax, word ptr [rsi + rdx*2]
229a56 mov      word ptr [r10 + 2], ax
229a5b mov      word ptr [rsi + rdx*2], r8w
229a60 cmp      r9d, 1
229a64 ja       0x140229a10
229a66 mov      ecx, r13d
229a69 mov      rdx, rsi
229a6c nop      dword ptr [rax]
229a70 movzx    eax, word ptr [rdx]
229a73 lea      rdx, [rdx + 2]
229a77 mov      word ptr [rsi + rax*2 - 0x1fa], cx
229a7f inc      ecx
229a81 cmp      ecx, 0x3e
229a84 jb       0x140229a70
229a86 lea      rax, [rip - 0x229a8d]
229a8d mov      r15, r13
229a90 mov      rcx, qword ptr [rdi + rax + 0x3e95a0]
229a98 movabs   r12, 0x9e3779b97f4a7c15
229aa2 mov      rdx, qword ptr [rdi + rax + 0x3e2340]
229aaa mov      r13d, 0x3e
229ab0 mov      qword ptr [rsp + 0x30], rcx
229ab5 mov      qword ptr [rsp + 0x28], rdx
229aba nop      word ptr [rax + rax]
229ac0 cmp      dword ptr [rbp + 0x1198], 0
229ac7 movzx    eax, word ptr [rsi]
229aca movzx    eax, word ptr [rcx + rax*2]
229ace mov      rax, qword ptr [rdx + rax*8]
229ad2 je       0x140229b88
229ad8 mov      rcx, qword ptr [rsp + 0x98]
229ae0 mov      r9, qword ptr [rbp + 0x1190]
229ae7 xor      rcx, r12
229aea xor      rcx, qword ptr [rbp + 0x320]
229af1 mov      rdi, qword ptr [rsp + 0xa0]
229af9 mov      rdx, rcx
229afc shr      rdx, 0x21
229b00 inc      rdi
229b03 xor      rdx, rcx
229b06 add      rdi, r15
229b09 movabs   rcx, 0xff51afd7ed558ccd
229b13 shl      rdi, 5
229b17 imul     rdx, rcx
229b1b add      rdi, r9
229b1e mov      rcx, rdx
229b21 shr      rcx, 0x21
229b25 xor      rcx, rdx
229b28 movabs   rdx, 0xc4ceb9fe1a85ec53
229b32 imul     rcx, rdx
229b36 mov      rdx, rax
229b39 mov      rbx, rcx
229b3c shr      rcx, 9
229b40 shr      rbx, 0x2a
229b44 xor      ebx, ecx
229b46 mov      rcx, rdi
229b49 and      ebx, 3
229b4c mov      r8d, ebx
229b4f call     0x14003e9a0
229b54 mov      r8d, dword ptr [rip + 0x21107d]
229b5b mov      rax, qword ptr [rbp + 0x4b8]
229b62 bts      r8d, ebx
229b66 mov      rbx, qword ptr [rsp + 0xa8]
229b6e mov      rdx, qword ptr [rsp + 0x28]
229b73 mov      dword ptr [rip + 0x21105e], r8d
229b7a sub      edi, dword ptr [rbx]
229b7c xor      edi, dword ptr [rbp + 0x4c8]
229b82 mov      dword ptr [r14 + rax], edi
229b86 jmp      0x140229b9b
229b88 sub      eax, dword ptr [rbx]
229b8a mov      rcx, qword ptr [rbp + 0x4b8]
229b91 xor      eax, dword ptr [rbp + 0x4c8]
229b97 mov      dword ptr [r14 + rcx], eax
229b9b mov      rcx, qword ptr [rsp + 0x30]
229ba0 movabs   rax, 0x61c8864680b583eb
229baa sub      r12, rax
229bad inc      r15
229bb0 add      r14, 4
229bb4 add      rsi, 2
229bb8 sub      r13, 1
229bbc jne      0x140229ac0
229bc2 mov      eax, dword ptr [rsp + 0x90]
229bc9 mov      r13d, 0
229bcf mov      rdx, qword ptr [rsp + 0x98]
229bd7 inc      eax
229bd9 mov      rdi, qword ptr [rsp + 0x20]
229bde inc      rdx
229be1 add      qword ptr [rsp + 0xa0], 0x3e
229bea add      rdi, 8
229bee mov      dword ptr [rsp + 0x90], eax
229bf5 mov      qword ptr [rsp + 0x98], rdx
229bfd mov      qword ptr [rsp + 0x20], rdi
229c02 cmp      eax, 4
229c05 jb       0x140229950
229c0b mov      eax, dword ptr [rbp + 0x1178]
229c11 xor      rax, qword ptr [rbp + 0x320]
229c18 mov      rcx, rax
229c1b shr      rcx, 0x21
229c1f xor      rcx, rax
229c22 movabs   rax, 0xff51afd7ed558ccd
229c2c imul     rcx, rax
229c30 movabs   rax, 0xc4ceb9fe1a85ec53
229c3a mov      rdx, rcx
229c3d shr      rdx, 0x21
229c41 xor      rdx, rcx
229c44 imul     rdx, rax
229c48 mov      rax, rdx
229c4b shr      rax, 0x21
229c4f xor      eax, edx
229c51 inc      dword ptr [rbp + 0x328]
229c57 mov      dword ptr [rbp + 0x1178], eax
229c5d add      rsp, 0x48
229c61 pop      r15
229c63 pop      r14
229c65 pop      r13
229c67 pop      r12
229c69 pop      rdi
229c6a pop      rsi
229c6b pop      rbp
229c6c pop      rbx
229c6d ret      
