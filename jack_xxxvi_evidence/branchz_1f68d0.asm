1f68d0 mov      qword ptr [rsp + 0x18], r8
1f68d5 push     rbx
1f68d6 push     rbp
1f68d7 push     rsi
1f68d8 push     rdi
1f68d9 push     r13
1f68db push     r14
1f68dd sub      rsp, 0x38
1f68e1 movsxd   rax, dword ptr [rcx + 0x11e0]
1f68e8 mov      r14, rcx
1f68eb mov      r13d, edx
1f68ee movabs   rcx, 0x1f4ca5924e9dc001
1f68f8 imul     rax, rcx
1f68fc movabs   rcx, 0xbd152f59cf43443e
1f6906 mov      rbp, r8
1f6909 xor      rax, qword ptr [r14 + 0x28]
1f690d mov      qword ptr [rsp + 0x70], rax
1f6912 mov      rax, qword ptr [rsp + 0x70]
1f6917 movsxd   rax, dword ptr [r14 + 0x11e0]
1f691e imul     rax, rcx
1f6922 movabs   rcx, 0x5bddb1074c08c82b
1f692c xor      rax, qword ptr [r14 + 0x28]
1f6930 mov      qword ptr [rsp + 0x70], rax
1f6935 mov      rax, qword ptr [rsp + 0x70]
1f693a movsxd   rax, dword ptr [r14 + 0x11e0]
1f6941 imul     rax, rcx
1f6945 xor      rax, qword ptr [r14 + 0x28]
1f6949 mov      qword ptr [rsp + 0x70], rax
1f694e mov      rax, qword ptr [rsp + 0x70]
1f6953 mov      rax, qword ptr [r14 + 0x2e8]
1f695a shr      rax, 0xd
1f695e mov      rcx, rax
1f6961 shr      rcx, 0x21
1f6965 xor      rcx, rax
1f6968 movabs   rax, 0xff51afd7ed558ccd
1f6972 imul     rcx, rax
1f6976 movabs   rax, 0xc4ceb9fe1a85ec53
1f6980 mov      rdx, rcx
1f6983 shr      rdx, 0x21
1f6987 xor      rdx, rcx
1f698a imul     rdx, rax
1f698e movabs   rax, 0x6bf6394b4610d82f
1f6998 mov      rcx, rdx
1f699b shr      rcx, 0x21
1f699f xor      rcx, rdx
1f69a2 xor      rcx, rax
1f69a5 mov      rax, qword ptr [r14 + 0x2e8]
1f69ac add      rcx, rax
1f69af mov      qword ptr [r14 + 0x2e8], rcx
1f69b6 mov      rcx, r14
1f69b9 call     0x1401f1c70
1f69be mov      rcx, r14
1f69c1 mov      edi, eax
1f69c3 call     0x1401ee940
1f69c8 mov      rcx, r14
1f69cb mov      rbx, rax
1f69ce call     0x1401ee070
1f69d3 movzx    r9d, byte ptr [r14 + 0x4ad]
1f69db mov      r8d, eax
1f69de mov      rdx, rbx
1f69e1 mov      rcx, r14
1f69e4 mov      esi, eax
1f69e6 call     0x1401f0e60
1f69eb mov      ecx, edi
1f69ed mov      rbx, rax
1f69f0 call     0x1401ed270
1f69f5 xor      r8d, r8d
1f69f8 mov      dword ptr [rsp + 0x28], esi
1f69fc lea      rcx, [rbx - 1]
1f6a00 mov      dword ptr [rsp + 0x20], eax
1f6a04 cmp      rcx, rbx
1f6a07 mov      rdx, rbx
1f6a0a mov      rcx, r14
1f6a0d setae    r8b
1f6a11 xor      r9d, r9d
1f6a14 call     0x1401f10a0
1f6a19 mov      rdx, rax
1f6a1c mov      rcx, r14
1f6a1f call     0x1401f0db0
1f6a24 mov      rax, qword ptr [r14 + 0x2e8]
1f6a2b test     r13d, r13d
1f6a2e jns      0x1401f7571
1f6a34 cmp      qword ptr [r14 + 0x11b8], rbp
1f6a3b jne      0x1401f757f
1f6a41 movsxd   rax, dword ptr [r14 + 0x11e0]
1f6a48 movabs   rcx, 0x7fae544afc2af987
1f6a52 imul     rax, rcx
1f6a56 mov      rcx, r14
1f6a59 xor      rax, qword ptr [r14 + 0x28]
1f6a5d mov      qword ptr [rsp + 0x70], rax
1f6a62 mov      rax, qword ptr [rsp + 0x70]
1f6a67 call     0x1401ee450
1f6a6c test     eax, eax
1f6a6e jne      0x1401f7564
1f6a74 cmp      dword ptr [r14 + 0xad0], eax
1f6a7b jne      0x1401f7564
1f6a81 mov      r8, qword ptr [r14 + 0xf0]
1f6a88 movzx    ecx, byte ptr [r14 + 0x160]
1f6a90 mov      rax, r8
1f6a93 mov      r10, qword ptr [r14 + 0xe0]
1f6a9a mov      rbx, qword ptr [r14 + 0xd0]
1f6aa1 mov      r11, qword ptr [r14 + 0xd8]
1f6aa8 movzx    edi, byte ptr [r14 + 0xe8]
1f6ab0 mov      r9, qword ptr [r14 + 0x1b0]
1f6ab7 mov      rsi, qword ptr [r14 + 0x1b8]
1f6abe imul     rcx, r10
1f6ac2 mov      qword ptr [rsp + 0x78], r12
1f6ac7 movabs   r12, 0x2545f4914f6cdd1d
1f6ad1 xor      rcx, rbx
1f6ad4 mov      qword ptr [rsp + 0x30], r15
1f6ad9 xor      rcx, r11
1f6adc movabs   r15, 0x9e3779b97f4a7c15
1f6ae6 xor      rax, rcx
1f6ae9 sub      r8, rcx
1f6aec test     dil, dil
1f6aef cmove    r8, rax
1f6af3 inc      rsi
1f6af6 imul     r9, r15
1f6afa mov      qword ptr [r14 + 0x1b8], rsi
1f6b01 add      r9, r12
1f6b04 mov      qword ptr [r14 + 0x1b0], r9
1f6b0b mov      rax, r9
1f6b0e shr      rax, 0x1b
1f6b12 movzx    edx, al
1f6b15 mov      byte ptr [r14 + 0x160], dl
1f6b1c imul     rdx, r10
1f6b20 xor      rdx, rbx
1f6b23 xor      rdx, r11
1f6b26 mov      rcx, rdx
1f6b29 xor      rcx, r8
1f6b2c test     dil, dil
1f6b2f lea      rax, [rdx + r8]
1f6b33 cmove    rax, rcx
1f6b37 mov      qword ptr [r14 + 0xf0], rax
1f6b3e cmp      r8d, 0x26dc07
1f6b45 jne      0x1401f755a
1f6b4b mov      eax, r13d
1f6b4e btr      eax, 0x1f
1f6b52 cmp      eax, 2
1f6b55 jae      0x1401f6ba1
1f6b57 imul     r9, r15
1f6b5b lea      rax, [rsi + 1]
1f6b5f mov      qword ptr [r14 + 0x1b8], rax
1f6b66 add      r9, r12
1f6b69 mov      qword ptr [r14 + 0x1b0], r9
1f6b70 shr      r9, 0x1b
1f6b74 movzx    eax, r9b
1f6b78 mov      byte ptr [r14 + 0x160], al
1f6b7f imul     rax, r10
1f6b83 xor      rax, rbx
1f6b86 xor      rax, r11
1f6b89 mov      rcx, rax
1f6b8c add      rax, 0x3abaef
1f6b92 xor      rcx, 0x3abaef
1f6b99 test     dil, dil
1f6b9c jmp      0x1401f754f
1f6ba1 mov      rcx, r14
1f6ba4 call     0x1401ee070
1f6ba9 movzx    ecx, byte ptr [r14 + 0x4ad]
1f6bb1 movabs   rbx, 0xff51afd7ed558ccd
1f6bbb mov      r11, qword ptr [r14 + 0xe0]
1f6bc2 movabs   r8, 0xc4ceb9fe1a85ec53
1f6bcc mov      r10, qword ptr [r14 + 0xd0]
1f6bd3 movzx    r9d, byte ptr [r14 + 0xe8]
1f6bdb mov      eax, eax
1f6bdd xor      rcx, rax
1f6be0 xor      rcx, qword ptr [r14 + 0x11e8]
1f6be7 mov      rax, rcx
1f6bea shr      rax, 0x21
1f6bee xor      rax, rcx
1f6bf1 imul     rax, rbx
1f6bf5 mov      rcx, rax
1f6bf8 shr      rcx, 0x21
1f6bfc xor      rcx, rax
1f6bff imul     rcx, r8
1f6c03 mov      rdx, rcx
1f6c06 shr      rdx, 0x21
1f6c0a xor      rdx, rcx
1f6c0d mov      qword ptr [r14 + 0x11e8], rdx
1f6c14 xor      rdx, qword ptr [r14 + 0x20]
1f6c18 xor      rdx, qword ptr [r14 + 0x28]
1f6c1c mov      rax, rdx
1f6c1f shr      rax, 0x21
1f6c23 xor      rax, rdx
1f6c26 imul     rax, rbx
1f6c2a mov      rcx, rax
1f6c2d shr      rcx, 0x21
1f6c31 xor      rcx, rax
1f6c34 imul     rcx, r8
1f6c38 mov      rax, rcx
1f6c3b shr      rax, 0x21
1f6c3f xor      rax, rcx
1f6c42 mov      qword ptr [r14 + 0x20], rax
1f6c46 mov      rdx, qword ptr [r14 + 0x138]
1f6c4d movzx    ecx, byte ptr [r14 + 0x169]
1f6c55 mov      rax, qword ptr [r14 + 0xd8]
1f6c5c imul     rcx, r11
1f6c60 lea      rbx, [rax + rax*4]
1f6c64 mov      rax, rdx
1f6c67 add      rbx, rbx
1f6c6a xor      rcx, rbx
1f6c6d xor      rcx, r10
1f6c70 xor      rax, rcx
1f6c73 sub      rdx, rcx
1f6c76 test     r9b, r9b
1f6c79 cmove    rdx, rax
1f6c7d mov      rax, qword ptr [r14 + 0x1b0]
1f6c84 inc      qword ptr [r14 + 0x1b8]
1f6c8b mov      rcx, rdx
1f6c8e imul     rax, r15
1f6c92 add      rax, r12
1f6c95 mov      qword ptr [r14 + 0x1b0], rax
1f6c9c shr      rax, 0x1b
1f6ca0 movzx    r8d, al
1f6ca4 mov      byte ptr [r14 + 0x169], r8b
1f6cab imul     r8, r11
1f6caf xor      r8, rbx
1f6cb2 xor      r8, r10
1f6cb5 xor      rcx, r8
1f6cb8 test     r9b, r9b
1f6cbb lea      rax, [rdx + r8]
1f6cbf cmove    rax, rcx
1f6cc3 mov      rcx, r14
1f6cc6 mov      qword ptr [r14 + 0x138], rax
1f6ccd call     0x1401f0910
1f6cd2 mov      rax, qword ptr [r14 + 0xd8]
1f6cd9 mov      r10, qword ptr [r14 + 0xe0]
1f6ce0 movzx    ecx, byte ptr [r14 + 0x168]
1f6ce8 mov      rbx, qword ptr [r14 + 0xd0]
1f6cef mov      rdx, qword ptr [r14 + 0x130]
1f6cf6 lea      r11, [rax + rax*8]
1f6cfa movzx    r9d, byte ptr [r14 + 0xe8]
1f6d02 mov      rax, rdx
1f6d05 imul     rcx, r10
1f6d09 xor      rcx, r11
1f6d0c xor      rcx, rbx
1f6d0f xor      rax, rcx
1f6d12 sub      rdx, rcx
1f6d15 test     r9b, r9b
1f6d18 cmove    rdx, rax
1f6d1c mov      rax, qword ptr [r14 + 0x1b0]
1f6d23 inc      qword ptr [r14 + 0x1b8]
1f6d2a mov      rcx, rdx
1f6d2d imul     rax, r15
1f6d31 add      rax, r12
1f6d34 mov      qword ptr [r14 + 0x1b0], rax
1f6d3b shr      rax, 0x1b
1f6d3f movzx    r8d, al
1f6d43 mov      byte ptr [r14 + 0x168], r8b
1f6d4a imul     r8, r10
1f6d4e xor      r8, r11
1f6d51 xor      r8, rbx
1f6d54 xor      rcx, r8
1f6d57 test     r9b, r9b
1f6d5a lea      rax, [rdx + r8]
1f6d5e cmove    rax, rcx
1f6d62 mov      rcx, r14
1f6d65 mov      qword ptr [r14 + 0x130], rax
1f6d6c call     0x1401f0910
1f6d71 mov      rcx, r14
1f6d74 call     0x1401ee070
1f6d79 cmp      eax, dword ptr [r14 + 0x1d8]
1f6d80 jae      0x1401f6d8c
1f6d82 mov      edx, eax
1f6d84 mov      rcx, r14
1f6d87 call     0x1401f0910
1f6d8c mov      rsi, qword ptr [r14 + 0xe0]
1f6d93 mov      rbp, qword ptr [r14 + 0xd0]
1f6d9a mov      r11, qword ptr [r14 + 0x130]
1f6da1 movzx    edi, byte ptr [r14 + 0xe8]
1f6da9 mov      rax, r11
1f6dac movzx    ecx, byte ptr [r14 + 0x168]
1f6db4 mov      rbx, qword ptr [r14 + 0xd8]
1f6dbb mov      r8, qword ptr [r14 + 0x1b8]
1f6dc2 mov      r10, qword ptr [r14 + 0x1b0]
1f6dc9 imul     rcx, rsi
1f6dcd lea      r9, [rbx + rbx*8]
1f6dd1 xor      rcx, r9
1f6dd4 xor      rcx, rbp
1f6dd7 xor      rax, rcx
1f6dda sub      r11, rcx
1f6ddd test     dil, dil
1f6de0 cmove    r11, rax
1f6de4 imul     r10, r15
1f6de8 mov      rcx, r11
1f6deb add      r10, r12
1f6dee mov      rax, r10
1f6df1 shr      rax, 0x1b
1f6df5 movzx    edx, al
1f6df8 mov      byte ptr [r14 + 0x168], dl
1f6dff imul     rdx, rsi
1f6e03 xor      rdx, r9
1f6e06 xor      rdx, rbp
1f6e09 xor      rcx, rdx
1f6e0c test     dil, dil
1f6e0f lea      rax, [r11 + rdx]
1f6e13 cmove    rax, rcx
1f6e17 mov      rcx, r11
1f6e1a mov      qword ptr [r14 + 0x130], rax
1f6e21 lea      rax, [r8 + 2]
1f6e25 mov      qword ptr [r14 + 0x1b8], rax
1f6e2c mov      r8d, 0x5a7
1f6e32 imul     r10, r15
1f6e36 lea      rax, [rbx + rbx*4]
1f6e3a add      rax, rax
1f6e3d add      r10, r12
1f6e40 mov      qword ptr [r14 + 0x1b0], r10
1f6e47 shr      r10, 0x1b
1f6e4b movzx    edx, r10b
1f6e4f mov      byte ptr [r14 + 0x169], dl
1f6e56 imul     rdx, rsi
1f6e5a xor      rdx, rax
1f6e5d xor      rdx, rbp
1f6e60 xor      rcx, rdx
1f6e63 test     dil, dil
1f6e66 lea      rax, [r11 + rdx]
1f6e6a cmove    rax, rcx
1f6e6e mov      rcx, r14
1f6e71 mov      qword ptr [r14 + 0x138], rax
1f6e78 movzx    edx, byte ptr [r14 + 0x4ad]
1f6e80 xor      rdx, qword ptr [r14 + 0x348]
1f6e87 call     0x1401f1520
1f6e8c mov      r8, qword ptr [r14 + 0x348]
1f6e93 movabs   rdi, 0xff51afd7ed558ccd
1f6e9d mov      rax, r8
1f6ea0 movabs   rsi, 0xc4ceb9fe1a85ec53
1f6eaa xor      rax, qword ptr [r14 + 0x20]
1f6eae mov      rcx, rax
1f6eb1 shr      rcx, 0x21
1f6eb5 xor      rcx, rax
1f6eb8 imul     rcx, rdi
1f6ebc mov      rax, rcx
1f6ebf shr      rax, 0x21
1f6ec3 xor      rax, rcx
1f6ec6 imul     rax, rsi
1f6eca mov      rdx, rax
1f6ecd shr      rdx, 0x21
1f6ed1 xor      edx, eax
1f6ed3 lea      eax, [rdx + 1]
1f6ed6 mov      ecx, eax
1f6ed8 xor      eax, edx
1f6eda imul     ecx, edx
1f6edd not      ecx
1f6edf and      ecx, eax
1f6ee1 test     cl, 1
1f6ee4 je       0x1401f6f4d
1f6ee6 and      r8b, 3
1f6eea cmp      r8b, 1
1f6eee jne      0x1401f6f4d
1f6ef0 mov      rax, qword ptr [r14 + 0x1b0]
1f6ef7 inc      qword ptr [r14 + 0x1b8]
1f6efe imul     rax, r15
1f6f02 add      rax, r12
1f6f05 mov      qword ptr [r14 + 0x1b0], rax
1f6f0c shr      rax, 0x1b
1f6f10 movzx    eax, al
1f6f13 mov      byte ptr [r14 + 0x160], al
1f6f1a imul     rax, qword ptr [r14 + 0xe0]
1f6f22 xor      rax, qword ptr [r14 + 0xd8]
1f6f29 xor      rax, qword ptr [r14 + 0xd0]
1f6f30 mov      rcx, rax
1f6f33 add      rax, 0x17ed28
1f6f39 xor      rcx, 0x17ed28
1f6f40 cmp      byte ptr [r14 + 0xe8], 0
1f6f48 jmp      0x1401f754f
1f6f4d mov      rcx, r14
1f6f50 call     0x1401ee070
1f6f55 mov      ebx, eax
1f6f57 cmp      eax, dword ptr [r14 + 0x1d8]
1f6f5e jb       0x1401f6fbd
1f6f60 mov      rax, qword ptr [r14 + 0x1b0]
1f6f67 inc      qword ptr [r14 + 0x1b8]
1f6f6e imul     rax, r15
1f6f72 add      rax, r12
1f6f75 mov      qword ptr [r14 + 0x1b0], rax
1f6f7c shr      rax, 0x1b
1f6f80 movzx    eax, al
1f6f83 mov      byte ptr [r14 + 0x160], al
1f6f8a imul     rax, qword ptr [r14 + 0xe0]
1f6f92 xor      rax, qword ptr [r14 + 0xd8]
1f6f99 xor      rax, qword ptr [r14 + 0xd0]
1f6fa0 mov      rcx, rax
1f6fa3 add      rax, 0xfe1ab
1f6fa9 xor      rcx, 0xfe1ab
1f6fb0 cmp      byte ptr [r14 + 0xe8], 0
1f6fb8 jmp      0x1401f754f
1f6fbd mov      edx, ebx
1f6fbf mov      rcx, r14
1f6fc2 call     0x1401f25b0
1f6fc7 movsxd   rcx, dword ptr [r14 + 0x11e0]
1f6fce movabs   r8, 0xd6e8feb86659fd93
1f6fd8 mov      rdx, qword ptr [r14 + 0x20]
1f6fdc mov      rax, rbx
1f6fdf imul     rax, r8
1f6fe3 imul     rcx, r15
1f6fe7 rol      rdx, 0x11
1f6feb xor      rax, rdx
1f6fee xor      rcx, qword ptr [r14 + 0x260]
1f6ff5 xor      rax, rcx
1f6ff8 mov      rcx, rax
1f6ffb shr      rcx, 0x21
1f6fff xor      rcx, rax
1f7002 imul     rcx, rdi
1f7006 mov      rdx, rcx
1f7009 shr      rdx, 0x21
1f700d xor      rdx, rcx
1f7010 imul     rdx, rsi
1f7014 mov      rax, rdx
1f7017 shr      rax, 0x21
1f701b xor      rax, rdx
1f701e mov      r10, rax
1f7021 shr      r10, 0x1d
1f7025 xor      r10, rax
1f7028 or       r10, 1
1f702c mov      rax, r10
1f702f mov      qword ptr [r14 + 0x260], r10
1f7036 and      eax, 0x3ff
1f703b cmp      rax, 0x2c5
1f7041 jne      0x1401f7052
1f7043 mov      rcx, r14
1f7046 call     0x1402297e0
1f704b mov      r10, qword ptr [r14 + 0x260]
1f7052 movzx    eax, r10b
1f7056 and      al, 0x1f
1f7058 cmp      al, 0x15
1f705a jne      0x1401f7148
1f7060 movsxd   rcx, dword ptr [r14 + 0x11e0]
1f7067 mov      rax, qword ptr [r14 + 0x20]
1f706b xor      rcx, 0x5a5a
1f7072 rol      rax, 0x11
1f7076 imul     rcx, r15
1f707a xor      rcx, r10
1f707d xor      rcx, rax
1f7080 movabs   rax, 0x8f70feda99a6026d
1f708a xor      rcx, rax
1f708d mov      rax, rcx
1f7090 shr      rax, 0x21
1f7094 xor      rax, rcx
1f7097 imul     rax, rdi
1f709b mov      rcx, rax
1f709e shr      rcx, 0x21
1f70a2 xor      rcx, rax
1f70a5 imul     rcx, rsi
1f70a9 mov      rax, rcx
1f70ac shr      rax, 0x21
1f70b0 xor      rax, rcx
1f70b3 mov      r9, rax
1f70b6 shr      r9, 0x1d
1f70ba xor      r9, rax
1f70bd or       r9, 1
1f70c1 mov      rax, r9
1f70c4 mov      rcx, r9
1f70c7 shr      rax, 8
1f70cb and      eax, 3
1f70ce shr      rcx, 0x28
1f70d2 imul     r8, rax, 0x3e
1f70d6 mov      eax, 0x8421085
1f70db mul      ecx
1f70dd mov      eax, ecx
1f70df sub      eax, edx
1f70e1 shr      eax, 1
1f70e3 add      eax, edx
1f70e5 shr      eax, 5
1f70e8 imul     eax, eax, 0x3e
1f70eb sub      ecx, eax
1f70ed mov      eax, ecx
1f70ef add      r8, rax
1f70f2 mov      rax, qword ptr [r14 + 0x4b8]
1f70f9 movsxd   rcx, dword ptr [rax + r8*4]
1f70fd movsxd   rax, dword ptr [r14 + 0x4c8]
1f7104 xor      rcx, rax
1f7107 add      rcx, qword ptr [r14 + 0x4c0]
1f710e xor      rcx, r9
1f7111 mov      rax, rcx
1f7114 shr      rax, 0x21
1f7118 xor      rax, rcx
1f711b imul     rax, rdi
1f711f mov      rcx, rax
1f7122 shr      rcx, 0x21
1f7126 xor      rcx, rax
1f7129 imul     rcx, rsi
1f712d mov      rax, rcx
1f7130 shr      rax, 0x21
1f7134 xor      rax, rcx
1f7137 xor      rax, r10
1f713a inc      qword ptr [r14 + 0x268]
1f7141 mov      qword ptr [r14 + 0x260], rax
1f7148 inc      dword ptr [r14 + 0x200]
1f714f mov      eax, dword ptr [r14 + 0x200]
1f7156 cmp      eax, dword ptr [r14 + 0x1fc]
1f715d jb       0x1401f7172
1f715f mov      rcx, r14
1f7162 mov      dword ptr [r14 + 0x200], 0
1f716d call     0x1401ef7c0
1f7172 mov      r8d, ebx
1f7175 mov      edx, ebx
1f7177 mov      rcx, r14
1f717a call     0x1401f0660
1f717f inc      qword ptr [r14 + 0x1b8]
1f7186 mov      rcx, rbx
1f7189 mov      r9, qword ptr [r14 + 0x1b0]
1f7190 mov      rbp, r12
1f7193 mov      r10, qword ptr [r14 + 0x1b8]
1f719a imul     r9, r15
1f719e add      r9, r12
1f71a1 lea      r12d, [rbx + 1]
1f71a5 mov      qword ptr [r14 + 0x1b0], r9
1f71ac mov      rax, r9
1f71af shr      rax, 0x1b
1f71b3 movzx    edx, al
1f71b6 mov      byte ptr [r14 + 0x168], dl
1f71bd mov      rdi, qword ptr [r14 + 0xe0]
1f71c4 mov      r11, qword ptr [r14 + 0xd8]
1f71cb mov      rsi, qword ptr [r14 + 0xd0]
1f71d2 movzx    r15d, byte ptr [r14 + 0xe8]
1f71da imul     rdx, rdi
1f71de lea      rax, [r11 + r11*8]
1f71e2 xor      rdx, rax
1f71e5 xor      rdx, rsi
1f71e8 xor      rcx, rdx
1f71eb test     r15b, r15b
1f71ee lea      rax, [rbx + rdx]
1f71f2 cmove    rax, rcx
1f71f6 inc      r10
1f71f9 mov      qword ptr [r14 + 0x130], rax
1f7200 mov      rcx, qword ptr [r14 + 0x1d0]
1f7207 mov      rax, qword ptr [r14 + 0x48]
1f720b mov      qword ptr [rsp + 0x70], r10
1f7210 movzx    r8d, byte ptr [rcx + rbx]
1f7215 xor      r8b, byte ptr [rax + rbx]
1f7219 movabs   rax, 0x9e3779b97f4a7c15
1f7223 imul     r9, rax
1f7227 mov      qword ptr [r14 + 0x1b8], r10
1f722e movabs   rbx, 0xff51afd7ed558ccd
1f7238 add      r9, rbp
1f723b mov      rax, r9
1f723e shr      rax, 0x1b
1f7242 movzx    edx, al
1f7245 lea      rax, [r11 + r11]
1f7249 mov      byte ptr [r14 + 0x161], dl
1f7250 imul     rdx, rdi
1f7254 xor      rdx, rax
1f7257 xor      rdx, rsi
1f725a mov      rcx, rdx
1f725d xor      rcx, r12
1f7260 test     r15b, r15b
1f7263 lea      rax, [rdx + r12]
1f7267 cmove    rax, rcx
1f726b mov      qword ptr [r14 + 0xf8], rax
1f7272 movsxd   rdx, dword ptr [r14 + 0x11e0]
1f7279 mov      r10, qword ptr [r14 + 0x20]
1f727d mov      rcx, rdx
1f7280 xor      rcx, qword ptr [r14 + 0x350]
1f7287 xor      rcx, r10
1f728a xor      rcx, r12
1f728d xor      rcx, qword ptr [r14 + 0x348]
1f7294 mov      rax, rcx
1f7297 shr      rax, 0x21
1f729b xor      rax, rcx
1f729e imul     rax, rbx
1f72a2 mov      rcx, rax
1f72a5 shr      rcx, 0x21
1f72a9 xor      rcx, rax
1f72ac movabs   rax, 0xc4ceb9fe1a85ec53
1f72b6 imul     rcx, rax
1f72ba movzx    eax, r8b
1f72be mov      rbx, rcx
1f72c1 xor      rax, 0xdd
1f72c7 shr      rbx, 0x21
1f72cb xor      rbx, rcx
1f72ce lea      rcx, [rip - 0x1f72d5]
1f72d5 mov      qword ptr [r14 + 0x28], rbx
1f72d9 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
1f72e1 xor      bpl, 0x63
1f72e5 inc      edx
1f72e7 mov      dword ptr [r14 + 0x11e0], edx
1f72ee movabs   r8, 0xff51afd7ed558ccd
1f72f8 test     dl, 0x1f
1f72fb jne      0x1401f7341
1f72fd movsxd   rax, edx
1f7300 xor      rax, r10
1f7303 xor      rax, qword ptr [r14 + 0x348]
1f730a mov      rcx, rax
1f730d shr      rcx, 0x21
1f7311 xor      rcx, rax
1f7314 movabs   rax, 0xc4ceb9fe1a85ec53
1f731e imul     rcx, r8
1f7322 mov      rdx, rcx
1f7325 shr      rdx, 0x21
1f7329 xor      rdx, rcx
1f732c imul     rdx, rax
1f7330 mov      rax, rdx
1f7333 shr      rax, 0x21
1f7337 xor      rax, rdx
1f733a mov      qword ptr [r14 + 0x348], rax
1f7341 movzx    edx, bpl
1f7345 xor      r10, rdx
1f7348 mov      byte ptr [r14 + 0x4ad], bpl
1f734f xor      r10, r12
1f7352 movabs   r12, 0xc4ceb9fe1a85ec53
1f735c mov      rax, r10
1f735f shr      rax, 0x21
1f7363 xor      rax, r10
1f7366 movabs   r10, 0x9e3779b97f4a7c15
1f7370 imul     rax, r8
1f7374 imul     rdx, r10
1f7378 imul     r9, r10
1f737c mov      rcx, rax
1f737f shr      rcx, 0x21
1f7383 xor      rcx, rax
1f7386 imul     rcx, r12
1f738a mov      rax, rcx
1f738d shr      rax, 0x21
1f7391 xor      rax, rcx
1f7394 mov      ecx, dword ptr [r14 + 0x1178]
1f739b mov      qword ptr [r14 + 0x20], rax
1f739f movabs   rax, 0xd6e8feb86659fd93
1f73a9 imul     rcx, rax
1f73ad xor      rcx, rdx
1f73b0 xor      rcx, rbx
1f73b3 movabs   rbx, 0x2545f4914f6cdd1d
1f73bd mov      rax, rcx
1f73c0 add      r9, rbx
1f73c3 shr      rax, 0x21
1f73c7 xor      rax, rcx
1f73ca imul     rax, r8
1f73ce mov      rdx, rax
1f73d1 shr      rdx, 0x21
1f73d5 xor      rdx, rax
1f73d8 mov      rax, qword ptr [rsp + 0x70]
1f73dd imul     rdx, r12
1f73e1 shr      rdx, 0x21
1f73e5 and      edx, 3
1f73e8 inc      rax
1f73eb mov      qword ptr [r14 + 0x1b8], rax
1f73f2 cmp      bpl, 0x3e
1f73f6 jae      0x1401f7493
1f73fc inc      qword ptr [r14 + 0x11a0]
1f7403 lea      rax, [rip - 0x1f740a]
1f740a mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
1f7412 mov      qword ptr [r14 + 0x1b0], r9
1f7419 shr      r9, 0x1b
1f741d movzx    eax, r9b
1f7421 mov      byte ptr [r14 + 0x160], al
1f7428 imul     rax, rdi
1f742c mov      ebx, edx
1f742e xor      rax, rsi
1f7431 xor      rax, r11
1f7434 mov      rcx, rax
1f7437 add      rax, r8
1f743a xor      rcx, r8
1f743d movzx    r8d, bpl
1f7441 test     r15b, r15b
1f7444 cmove    rax, rcx
1f7448 mov      rcx, r14
1f744b mov      qword ptr [r14 + 0xf0], rax
1f7452 call     0x1401f1f50
1f7457 mov      r8, qword ptr [rsp + 0x80]
1f745f lea      edx, [r13 - 1]
1f7463 mov      eax, eax
1f7465 imul     rcx, rbx, 0x3e
1f7469 add      rcx, rax
1f746c mov      rax, qword ptr [r14 + 0x4b8]
1f7473 movsxd   r9, dword ptr [rax + rcx*4]
1f7477 mov      rcx, r14
1f747a movsxd   rax, dword ptr [r14 + 0x4c8]
1f7481 xor      r9, rax
1f7484 add      r9, qword ptr [r14 + 0x4c0]
1f748b call     r9
1f748e jmp      0x1401f755a
1f7493 inc      dword ptr [r14 + 0x11a8]
1f749a mov      rax, r9
1f749d shr      rax, 0x1b
1f74a1 movzx    ecx, al
1f74a4 lea      rax, [r11*4]
1f74ac mov      byte ptr [r14 + 0x163], cl
1f74b3 imul     rcx, rdi
1f74b7 imul     r9, r10
1f74bb xor      rcx, rax
1f74be xor      rcx, rsi
1f74c1 mov      qword ptr [r14 + 0x108], rcx
1f74c8 mov      r8, qword ptr [r14 + 0x1b8]
1f74cf add      r9, rbx
1f74d2 mov      rax, r9
1f74d5 shr      rax, 0x1b
1f74d9 movzx    edx, al
1f74dc mov      byte ptr [r14 + 0x16a], dl
1f74e3 imul     rax, r11, 0xb
1f74e7 imul     rdx, rdi
1f74eb xor      rdx, rax
1f74ee xor      rdx, rsi
1f74f1 mov      rcx, rdx
1f74f4 xor      rcx, 1
1f74f8 test     r15b, r15b
1f74fb lea      rax, [rdx + 1]
1f74ff cmove    rax, rcx
1f7503 mov      qword ptr [r14 + 0x140], rax
1f750a lea      rax, [r8 + 2]
1f750e mov      qword ptr [r14 + 0x1b8], rax
1f7515 imul     r9, r10
1f7519 add      r9, rbx
1f751c mov      qword ptr [r14 + 0x1b0], r9
1f7523 shr      r9, 0x1b
1f7527 movzx    eax, r9b
1f752b mov      byte ptr [r14 + 0x160], al
1f7532 imul     rax, rdi
1f7536 xor      rax, rsi
1f7539 xor      rax, r11
1f753c mov      rcx, rax
1f753f add      rax, 0xfe1ab
1f7545 xor      rcx, 0xfe1ab
1f754c test     r15b, r15b
1f754f cmove    rax, rcx
1f7553 mov      qword ptr [r14 + 0xf0], rax
1f755a mov      r12, qword ptr [rsp + 0x78]
1f755f mov      r15, qword ptr [rsp + 0x30]
1f7564 add      rsp, 0x38
1f7568 pop      r14
1f756a pop      r13
1f756c pop      rdi
1f756d pop      rsi
1f756e pop      rbp
1f756f pop      rbx
1f7570 ret      
1f7571 mov      edx, 0x54485254
1f7576 mov      rcx, r14
1f7579 call     0x1401ed830
1f757e int3     
1f757f mov      edx, 0x43414e59
1f7584 mov      rcx, r14
1f7587 call     0x1401ed830
1f758c int3     
