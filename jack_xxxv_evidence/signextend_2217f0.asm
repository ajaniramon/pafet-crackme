2217f0 mov      qword ptr [rsp + 0x18], r8
2217f5 push     rbx
2217f6 push     rbp
2217f7 push     rdi
2217f8 push     r13
2217fa push     r14
2217fc sub      rsp, 0x30
221800 movsxd   rax, dword ptr [rcx + 0x11e0]
221807 mov      r14, rcx
22180a mov      r13d, edx
22180d movabs   rcx, 0x1985cdc6e9f70cf4
221817 imul     rax, rcx
22181b movabs   rcx, 0xbbdc470d682988cb
221825 movabs   rbp, 0xff51afd7ed558ccd
22182f xor      rax, qword ptr [r14 + 0x28]
221833 mov      rdi, r8
221836 mov      qword ptr [rsp + 0x60], rax
22183b mov      rax, qword ptr [rsp + 0x60]
221840 movsxd   rax, dword ptr [r14 + 0x11e0]
221847 imul     rax, rcx
22184b movabs   rcx, 0x5d14d953eb6204de
221855 xor      rax, qword ptr [r14 + 0x28]
221859 mov      qword ptr [rsp + 0x60], rax
22185e mov      rax, qword ptr [rsp + 0x60]
221863 movsxd   rax, dword ptr [r14 + 0x11e0]
22186a imul     rax, rcx
22186e movabs   rcx, 0x742a31bc9ce66765
221878 xor      rax, qword ptr [r14 + 0x28]
22187c mov      qword ptr [rsp + 0x60], rax
221881 mov      rax, qword ptr [rsp + 0x60]
221886 mov      rax, qword ptr [r14 + 0x2e8]
22188d mov      rax, qword ptr [r14 + 0x2e8]
221894 sub      rax, rcx
221897 mov      rcx, rax
22189a shr      rcx, 0x21
22189e xor      rcx, rax
2218a1 movabs   rax, 0xc4ceb9fe1a85ec53
2218ab imul     rcx, rbp
2218af mov      rdx, rcx
2218b2 shr      rdx, 0x21
2218b6 xor      rdx, rcx
2218b9 mov      rcx, r14
2218bc imul     rdx, rax
2218c0 mov      rax, rdx
2218c3 shr      rax, 0x21
2218c7 xor      rdx, rax
2218ca mov      rax, qword ptr [r14 + 0x2e8]
2218d1 shr      rax, 3
2218d5 xor      rax, rdx
2218d8 mov      qword ptr [r14 + 0x2e8], rax
2218df call     0x1401f1e80
2218e4 mov      ebx, eax
2218e6 mov      rcx, r14
2218e9 and      ebx, 0x3f
2218ec call     0x1401ee940
2218f1 mov      ecx, 0x40
2218f6 sub      ecx, ebx
2218f8 shl      rax, cl
2218fb sar      rax, cl
2218fe mov      rcx, r14
221901 mov      rdx, rax
221904 call     0x1401ee820
221909 mov      rax, qword ptr [r14 + 0x2e8]
221910 test     r13d, r13d
221913 jns      0x140222451
221919 cmp      qword ptr [r14 + 0x11b8], rdi
221920 jne      0x14022245f
221926 movsxd   rax, dword ptr [r14 + 0x11e0]
22192d movabs   rcx, 0x52399f193a700b5e
221937 imul     rax, rcx
22193b mov      rcx, r14
22193e xor      rax, qword ptr [r14 + 0x28]
221942 mov      qword ptr [rsp + 0x60], rax
221947 mov      rax, qword ptr [rsp + 0x60]
22194c call     0x1401ee450
221951 test     eax, eax
221953 jne      0x140222445
221959 cmp      dword ptr [r14 + 0xad0], eax
221960 jne      0x140222445
221966 mov      r8, qword ptr [r14 + 0xf0]
22196d movzx    ecx, byte ptr [r14 + 0x160]
221975 mov      rax, r8
221978 mov      r10, qword ptr [r14 + 0xe0]
22197f mov      rbx, qword ptr [r14 + 0xd0]
221986 mov      r11, qword ptr [r14 + 0xd8]
22198d movzx    edi, byte ptr [r14 + 0xe8]
221995 mov      r9, qword ptr [r14 + 0x1b0]
22199c imul     rcx, r10
2219a0 mov      qword ptr [rsp + 0x68], rsi
2219a5 mov      rsi, qword ptr [r14 + 0x1b8]
2219ac xor      rcx, rbx
2219af xor      rcx, r11
2219b2 mov      qword ptr [rsp + 0x28], r12
2219b7 xor      rax, rcx
2219ba mov      qword ptr [rsp + 0x20], r15
2219bf sub      r8, rcx
2219c2 movabs   r15, 0x9e3779b97f4a7c15
2219cc test     dil, dil
2219cf movabs   r12, 0x2545f4914f6cdd1d
2219d9 cmove    r8, rax
2219dd inc      rsi
2219e0 imul     r9, r15
2219e4 mov      qword ptr [r14 + 0x1b8], rsi
2219eb mov      rcx, r8
2219ee add      r9, r12
2219f1 mov      qword ptr [r14 + 0x1b0], r9
2219f8 mov      rax, r9
2219fb shr      rax, 0x1b
2219ff movzx    edx, al
221a02 mov      byte ptr [r14 + 0x160], dl
221a09 imul     rdx, r10
221a0d xor      rdx, rbx
221a10 xor      rdx, r11
221a13 xor      rcx, rdx
221a16 test     dil, dil
221a19 lea      rax, [r8 + rdx]
221a1d cmove    rax, rcx
221a21 mov      qword ptr [r14 + 0xf0], rax
221a28 cmp      r8d, 0x2a0025
221a2f jne      0x140222436
221a35 mov      eax, r13d
221a38 btr      eax, 0x1f
221a3c cmp      eax, 2
221a3f jae      0x140221a8b
221a41 imul     r9, r15
221a45 lea      rax, [rsi + 1]
221a49 mov      qword ptr [r14 + 0x1b8], rax
221a50 add      r9, r12
221a53 mov      qword ptr [r14 + 0x1b0], r9
221a5a shr      r9, 0x1b
221a5e movzx    eax, r9b
221a62 mov      byte ptr [r14 + 0x160], al
221a69 imul     rax, r10
221a6d xor      rax, rbx
221a70 xor      rax, r11
221a73 mov      rcx, rax
221a76 add      rax, 0x85b36
221a7c xor      rcx, 0x85b36
221a83 test     dil, dil
221a86 jmp      0x14022242b
221a8b mov      rcx, r14
221a8e call     0x1401ee070
221a93 movzx    ecx, byte ptr [r14 + 0x4ad]
221a9b movabs   r8, 0xc4ceb9fe1a85ec53
221aa5 mov      r11, qword ptr [r14 + 0xe0]
221aac mov      r10, qword ptr [r14 + 0xd0]
221ab3 movzx    r9d, byte ptr [r14 + 0xe8]
221abb mov      eax, eax
221abd xor      rcx, rax
221ac0 xor      rcx, qword ptr [r14 + 0x11e8]
221ac7 mov      rax, rcx
221aca shr      rax, 0x21
221ace xor      rax, rcx
221ad1 imul     rax, rbp
221ad5 mov      rcx, rax
221ad8 shr      rcx, 0x21
221adc xor      rcx, rax
221adf imul     rcx, r8
221ae3 mov      rdx, rcx
221ae6 shr      rdx, 0x21
221aea xor      rdx, rcx
221aed mov      qword ptr [r14 + 0x11e8], rdx
221af4 xor      rdx, qword ptr [r14 + 0x28]
221af8 xor      rdx, qword ptr [r14 + 0x20]
221afc mov      rax, rdx
221aff shr      rax, 0x21
221b03 xor      rax, rdx
221b06 imul     rax, rbp
221b0a mov      rcx, rax
221b0d shr      rcx, 0x21
221b11 xor      rcx, rax
221b14 imul     rcx, r8
221b18 mov      rax, rcx
221b1b shr      rax, 0x21
221b1f xor      rax, rcx
221b22 mov      qword ptr [r14 + 0x20], rax
221b26 mov      rdx, qword ptr [r14 + 0x138]
221b2d movzx    ecx, byte ptr [r14 + 0x169]
221b35 mov      rax, qword ptr [r14 + 0xd8]
221b3c imul     rcx, r11
221b40 lea      rbx, [rax + rax*4]
221b44 mov      rax, rdx
221b47 add      rbx, rbx
221b4a xor      rcx, rbx
221b4d xor      rcx, r10
221b50 xor      rax, rcx
221b53 sub      rdx, rcx
221b56 test     r9b, r9b
221b59 cmove    rdx, rax
221b5d mov      rax, qword ptr [r14 + 0x1b0]
221b64 inc      qword ptr [r14 + 0x1b8]
221b6b imul     rax, r15
221b6f add      rax, r12
221b72 mov      qword ptr [r14 + 0x1b0], rax
221b79 shr      rax, 0x1b
221b7d movzx    r8d, al
221b81 mov      byte ptr [r14 + 0x169], r8b
221b88 imul     r8, r11
221b8c xor      r8, rbx
221b8f xor      r8, r10
221b92 mov      rcx, r8
221b95 xor      rcx, rdx
221b98 test     r9b, r9b
221b9b lea      rax, [r8 + rdx]
221b9f cmove    rax, rcx
221ba3 mov      rcx, r14
221ba6 mov      qword ptr [r14 + 0x138], rax
221bad call     0x1401f0910
221bb2 mov      rax, qword ptr [r14 + 0xd8]
221bb9 mov      rdx, qword ptr [r14 + 0x130]
221bc0 mov      r10, qword ptr [r14 + 0xe0]
221bc7 movzx    ecx, byte ptr [r14 + 0x168]
221bcf mov      rbx, qword ptr [r14 + 0xd0]
221bd6 lea      r11, [rax + rax*8]
221bda movzx    r9d, byte ptr [r14 + 0xe8]
221be2 mov      rax, rdx
221be5 imul     rcx, r10
221be9 xor      rcx, r11
221bec xor      rcx, rbx
221bef xor      rax, rcx
221bf2 sub      rdx, rcx
221bf5 test     r9b, r9b
221bf8 cmove    rdx, rax
221bfc mov      rax, qword ptr [r14 + 0x1b0]
221c03 inc      qword ptr [r14 + 0x1b8]
221c0a mov      rcx, rdx
221c0d imul     rax, r15
221c11 add      rax, r12
221c14 mov      qword ptr [r14 + 0x1b0], rax
221c1b shr      rax, 0x1b
221c1f movzx    r8d, al
221c23 mov      byte ptr [r14 + 0x168], r8b
221c2a imul     r8, r10
221c2e xor      r8, r11
221c31 xor      r8, rbx
221c34 xor      rcx, r8
221c37 test     r9b, r9b
221c3a lea      rax, [rdx + r8]
221c3e cmove    rax, rcx
221c42 mov      rcx, r14
221c45 mov      qword ptr [r14 + 0x130], rax
221c4c call     0x1401f0910
221c51 mov      rcx, r14
221c54 call     0x1401ee070
221c59 cmp      eax, dword ptr [r14 + 0x1d8]
221c60 jae      0x140221c6c
221c62 mov      edx, eax
221c64 mov      rcx, r14
221c67 call     0x1401f0910
221c6c mov      rsi, qword ptr [r14 + 0xe0]
221c73 mov      rbp, qword ptr [r14 + 0xd0]
221c7a mov      r11, qword ptr [r14 + 0x130]
221c81 movzx    edi, byte ptr [r14 + 0xe8]
221c89 mov      rax, r11
221c8c movzx    ecx, byte ptr [r14 + 0x168]
221c94 mov      rbx, qword ptr [r14 + 0xd8]
221c9b mov      r8, qword ptr [r14 + 0x1b8]
221ca2 mov      r10, qword ptr [r14 + 0x1b0]
221ca9 imul     rcx, rsi
221cad lea      r9, [rbx + rbx*8]
221cb1 xor      rcx, r9
221cb4 xor      rcx, rbp
221cb7 xor      rax, rcx
221cba sub      r11, rcx
221cbd test     dil, dil
221cc0 cmove    r11, rax
221cc4 imul     r10, r15
221cc8 mov      rcx, r11
221ccb add      r10, r12
221cce mov      rax, r10
221cd1 shr      rax, 0x1b
221cd5 movzx    edx, al
221cd8 mov      byte ptr [r14 + 0x168], dl
221cdf imul     rdx, rsi
221ce3 xor      rdx, r9
221ce6 xor      rdx, rbp
221ce9 xor      rcx, rdx
221cec test     dil, dil
221cef lea      rax, [r11 + rdx]
221cf3 cmove    rax, rcx
221cf7 mov      rcx, r11
221cfa mov      qword ptr [r14 + 0x130], rax
221d01 lea      rax, [r8 + 2]
221d05 mov      qword ptr [r14 + 0x1b8], rax
221d0c mov      r8d, 0xd8ad
221d12 imul     r10, r15
221d16 lea      rax, [rbx + rbx*4]
221d1a add      rax, rax
221d1d add      r10, r12
221d20 mov      qword ptr [r14 + 0x1b0], r10
221d27 shr      r10, 0x1b
221d2b movzx    edx, r10b
221d2f mov      byte ptr [r14 + 0x169], dl
221d36 imul     rdx, rsi
221d3a xor      rdx, rax
221d3d xor      rdx, rbp
221d40 xor      rcx, rdx
221d43 test     dil, dil
221d46 lea      rax, [r11 + rdx]
221d4a cmove    rax, rcx
221d4e mov      rcx, r14
221d51 mov      qword ptr [r14 + 0x138], rax
221d58 movzx    edx, byte ptr [r14 + 0x4ad]
221d60 xor      rdx, qword ptr [r14 + 0x348]
221d67 call     0x1401f1520
221d6c mov      r8, qword ptr [r14 + 0x348]
221d73 movabs   rdi, 0xff51afd7ed558ccd
221d7d mov      rax, r8
221d80 movabs   rsi, 0xc4ceb9fe1a85ec53
221d8a xor      rax, qword ptr [r14 + 0x20]
221d8e mov      rcx, rax
221d91 shr      rcx, 0x21
221d95 xor      rcx, rax
221d98 imul     rcx, rdi
221d9c mov      rax, rcx
221d9f shr      rax, 0x21
221da3 xor      rax, rcx
221da6 imul     rax, rsi
221daa mov      rdx, rax
221dad shr      rdx, 0x21
221db1 xor      edx, eax
221db3 lea      eax, [rdx + 1]
221db6 mov      ecx, eax
221db8 xor      eax, edx
221dba imul     ecx, edx
221dbd not      ecx
221dbf and      ecx, eax
221dc1 test     cl, 1
221dc4 je       0x140221e2d
221dc6 and      r8b, 3
221dca cmp      r8b, 1
221dce jne      0x140221e2d
221dd0 mov      rax, qword ptr [r14 + 0x1b0]
221dd7 inc      qword ptr [r14 + 0x1b8]
221dde imul     rax, r15
221de2 add      rax, r12
221de5 mov      qword ptr [r14 + 0x1b0], rax
221dec shr      rax, 0x1b
221df0 movzx    eax, al
221df3 mov      byte ptr [r14 + 0x160], al
221dfa imul     rax, qword ptr [r14 + 0xe0]
221e02 xor      rax, qword ptr [r14 + 0xd8]
221e09 xor      rax, qword ptr [r14 + 0xd0]
221e10 mov      rcx, rax
221e13 add      rax, 0x3dd18f
221e19 xor      rcx, 0x3dd18f
221e20 cmp      byte ptr [r14 + 0xe8], 0
221e28 jmp      0x14022242b
221e2d mov      rcx, r14
221e30 call     0x1401ee070
221e35 mov      ebx, eax
221e37 cmp      eax, dword ptr [r14 + 0x1d8]
221e3e jb       0x140221e9d
221e40 mov      rax, qword ptr [r14 + 0x1b0]
221e47 inc      qword ptr [r14 + 0x1b8]
221e4e imul     rax, r15
221e52 add      rax, r12
221e55 mov      qword ptr [r14 + 0x1b0], rax
221e5c shr      rax, 0x1b
221e60 movzx    eax, al
221e63 mov      byte ptr [r14 + 0x160], al
221e6a imul     rax, qword ptr [r14 + 0xe0]
221e72 xor      rax, qword ptr [r14 + 0xd8]
221e79 xor      rax, qword ptr [r14 + 0xd0]
221e80 mov      rcx, rax
221e83 add      rax, 0xfe1ab
221e89 xor      rcx, 0xfe1ab
221e90 cmp      byte ptr [r14 + 0xe8], 0
221e98 jmp      0x14022242b
221e9d mov      edx, ebx
221e9f mov      rcx, r14
221ea2 call     0x1401f25b0
221ea7 movsxd   rcx, dword ptr [r14 + 0x11e0]
221eae movabs   r8, 0xd6e8feb86659fd93
221eb8 mov      rdx, qword ptr [r14 + 0x20]
221ebc mov      rax, rbx
221ebf imul     rax, r8
221ec3 imul     rcx, r15
221ec7 rol      rdx, 0x11
221ecb xor      rax, rdx
221ece xor      rcx, qword ptr [r14 + 0x260]
221ed5 xor      rax, rcx
221ed8 mov      rcx, rax
221edb shr      rcx, 0x21
221edf xor      rcx, rax
221ee2 imul     rcx, rdi
221ee6 mov      rdx, rcx
221ee9 shr      rdx, 0x21
221eed xor      rdx, rcx
221ef0 imul     rdx, rsi
221ef4 mov      rax, rdx
221ef7 shr      rax, 0x21
221efb xor      rax, rdx
221efe mov      r10, rax
221f01 shr      r10, 0x1d
221f05 xor      r10, rax
221f08 or       r10, 1
221f0c mov      rax, r10
221f0f mov      qword ptr [r14 + 0x260], r10
221f16 and      eax, 0x3ff
221f1b cmp      rax, 0x2c5
221f21 jne      0x140221f32
221f23 mov      rcx, r14
221f26 call     0x1402297e0
221f2b mov      r10, qword ptr [r14 + 0x260]
221f32 movzx    eax, r10b
221f36 and      al, 0x1f
221f38 cmp      al, 0x15
221f3a jne      0x140222027
221f40 movsxd   rax, dword ptr [r14 + 0x11e0]
221f47 xor      rax, 0x5a5a
221f4d mov      rcx, qword ptr [r14 + 0x20]
221f51 imul     rax, r15
221f55 rol      rcx, 0x11
221f59 xor      rax, r10
221f5c xor      rcx, rax
221f5f movabs   rax, 0x8f70feda99a6026d
221f69 xor      rcx, rax
221f6c mov      rax, rcx
221f6f shr      rax, 0x21
221f73 xor      rax, rcx
221f76 imul     rax, rdi
221f7a mov      rcx, rax
221f7d shr      rcx, 0x21
221f81 xor      rcx, rax
221f84 imul     rcx, rsi
221f88 mov      rax, rcx
221f8b shr      rax, 0x21
221f8f xor      rax, rcx
221f92 mov      r9, rax
221f95 shr      r9, 0x1d
221f99 xor      r9, rax
221f9c or       r9, 1
221fa0 mov      rax, r9
221fa3 mov      rcx, r9
221fa6 shr      rax, 8
221faa and      eax, 3
221fad shr      rcx, 0x28
221fb1 imul     r8, rax, 0x3e
221fb5 mov      eax, 0x8421085
221fba mul      ecx
221fbc mov      eax, ecx
221fbe sub      eax, edx
221fc0 shr      eax, 1
221fc2 add      eax, edx
221fc4 shr      eax, 5
221fc7 imul     eax, eax, 0x3e
221fca sub      ecx, eax
221fcc mov      eax, ecx
221fce add      r8, rax
221fd1 mov      rax, qword ptr [r14 + 0x4b8]
221fd8 movsxd   rcx, dword ptr [rax + r8*4]
221fdc movsxd   rax, dword ptr [r14 + 0x4c8]
221fe3 xor      rcx, rax
221fe6 add      rcx, qword ptr [r14 + 0x4c0]
221fed xor      rcx, r9
221ff0 mov      rax, rcx
221ff3 shr      rax, 0x21
221ff7 xor      rax, rcx
221ffa imul     rax, rdi
221ffe mov      rcx, rax
222001 shr      rcx, 0x21
222005 xor      rcx, rax
222008 imul     rcx, rsi
22200c mov      rax, rcx
22200f shr      rax, 0x21
222013 xor      rax, rcx
222016 xor      rax, r10
222019 inc      qword ptr [r14 + 0x268]
222020 mov      qword ptr [r14 + 0x260], rax
222027 inc      dword ptr [r14 + 0x200]
22202e mov      eax, dword ptr [r14 + 0x200]
222035 cmp      eax, dword ptr [r14 + 0x1fc]
22203c jb       0x140222051
22203e mov      rcx, r14
222041 mov      dword ptr [r14 + 0x200], 0
22204c call     0x1401ef7c0
222051 mov      r8d, ebx
222054 mov      edx, ebx
222056 mov      rcx, r14
222059 call     0x1401f0660
22205e inc      qword ptr [r14 + 0x1b8]
222065 mov      rcx, rbx
222068 mov      r9, qword ptr [r14 + 0x1b0]
22206f mov      rbp, r12
222072 mov      r10, qword ptr [r14 + 0x1b8]
222079 imul     r9, r15
22207d add      r9, r12
222080 lea      r12d, [rbx + 1]
222084 mov      qword ptr [r14 + 0x1b0], r9
22208b mov      rax, r9
22208e shr      rax, 0x1b
222092 movzx    edx, al
222095 mov      byte ptr [r14 + 0x168], dl
22209c mov      rdi, qword ptr [r14 + 0xe0]
2220a3 mov      r11, qword ptr [r14 + 0xd8]
2220aa mov      rsi, qword ptr [r14 + 0xd0]
2220b1 movzx    r15d, byte ptr [r14 + 0xe8]
2220b9 imul     rdx, rdi
2220bd lea      rax, [r11 + r11*8]
2220c1 xor      rdx, rax
2220c4 xor      rdx, rsi
2220c7 xor      rcx, rdx
2220ca test     r15b, r15b
2220cd lea      rax, [rbx + rdx]
2220d1 cmove    rax, rcx
2220d5 inc      r10
2220d8 mov      qword ptr [r14 + 0x130], rax
2220df mov      rcx, qword ptr [r14 + 0x1d0]
2220e6 mov      rax, qword ptr [r14 + 0x48]
2220ea mov      qword ptr [rsp + 0x60], r10
2220ef movzx    r8d, byte ptr [rcx + rbx]
2220f4 xor      r8b, byte ptr [rax + rbx]
2220f8 movabs   rax, 0x9e3779b97f4a7c15
222102 imul     r9, rax
222106 mov      qword ptr [r14 + 0x1b8], r10
22210d add      r9, rbp
222110 mov      rax, r9
222113 shr      rax, 0x1b
222117 movzx    edx, al
22211a lea      rax, [r11 + r11]
22211e mov      byte ptr [r14 + 0x161], dl
222125 imul     rdx, rdi
222129 xor      rdx, rax
22212c xor      rdx, rsi
22212f mov      rcx, rdx
222132 xor      rcx, r12
222135 test     r15b, r15b
222138 lea      rax, [rdx + r12]
22213c cmove    rax, rcx
222140 mov      qword ptr [r14 + 0xf8], rax
222147 movsxd   rdx, dword ptr [r14 + 0x11e0]
22214e mov      r10, qword ptr [r14 + 0x20]
222152 mov      rcx, rdx
222155 xor      rcx, qword ptr [r14 + 0x350]
22215c xor      rcx, r10
22215f xor      rcx, r12
222162 xor      rcx, qword ptr [r14 + 0x348]
222169 mov      rax, rcx
22216c shr      rax, 0x21
222170 xor      rax, rcx
222173 movabs   rcx, 0xff51afd7ed558ccd
22217d imul     rax, rcx
222181 mov      rcx, rax
222184 shr      rcx, 0x21
222188 xor      rcx, rax
22218b movabs   rax, 0xc4ceb9fe1a85ec53
222195 imul     rcx, rax
222199 movzx    eax, r8b
22219d mov      rbx, rcx
2221a0 xor      rax, 0xdd
2221a6 shr      rbx, 0x21
2221aa xor      rbx, rcx
2221ad lea      rcx, [rip - 0x2221b4]
2221b4 mov      qword ptr [r14 + 0x28], rbx
2221b8 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
2221c0 xor      bpl, 0x63
2221c4 inc      edx
2221c6 mov      dword ptr [r14 + 0x11e0], edx
2221cd movabs   r8, 0xff51afd7ed558ccd
2221d7 test     dl, 0x1f
2221da jne      0x140222220
2221dc movsxd   rax, edx
2221df xor      rax, r10
2221e2 xor      rax, qword ptr [r14 + 0x348]
2221e9 mov      rcx, rax
2221ec shr      rcx, 0x21
2221f0 xor      rcx, rax
2221f3 movabs   rax, 0xc4ceb9fe1a85ec53
2221fd imul     rcx, r8
222201 mov      rdx, rcx
222204 shr      rdx, 0x21
222208 xor      rdx, rcx
22220b imul     rdx, rax
22220f mov      rax, rdx
222212 shr      rax, 0x21
222216 xor      rax, rdx
222219 mov      qword ptr [r14 + 0x348], rax
222220 movzx    edx, bpl
222224 xor      r10, rdx
222227 mov      byte ptr [r14 + 0x4ad], bpl
22222e xor      r10, r12
222231 movabs   r12, 0xc4ceb9fe1a85ec53
22223b mov      rax, r10
22223e shr      rax, 0x21
222242 xor      rax, r10
222245 movabs   r10, 0x9e3779b97f4a7c15
22224f imul     rax, r8
222253 imul     rdx, r10
222257 imul     r9, r10
22225b mov      rcx, rax
22225e shr      rcx, 0x21
222262 xor      rcx, rax
222265 imul     rcx, r12
222269 mov      rax, rcx
22226c shr      rax, 0x21
222270 xor      rax, rcx
222273 mov      ecx, dword ptr [r14 + 0x1178]
22227a mov      qword ptr [r14 + 0x20], rax
22227e movabs   rax, 0xd6e8feb86659fd93
222288 imul     rcx, rax
22228c xor      rcx, rdx
22228f xor      rcx, rbx
222292 movabs   rbx, 0x2545f4914f6cdd1d
22229c mov      rax, rcx
22229f add      r9, rbx
2222a2 shr      rax, 0x21
2222a6 xor      rax, rcx
2222a9 imul     rax, r8
2222ad mov      rdx, rax
2222b0 shr      rdx, 0x21
2222b4 xor      rdx, rax
2222b7 mov      rax, qword ptr [rsp + 0x60]
2222bc imul     rdx, r12
2222c0 shr      rdx, 0x21
2222c4 and      edx, 3
2222c7 inc      rax
2222ca mov      qword ptr [r14 + 0x1b8], rax
2222d1 cmp      bpl, 0x3e
2222d5 jae      0x14022236f
2222db inc      qword ptr [r14 + 0x11a0]
2222e2 lea      rax, [rip - 0x2222e9]
2222e9 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
2222f1 mov      qword ptr [r14 + 0x1b0], r9
2222f8 shr      r9, 0x1b
2222fc movzx    eax, r9b
222300 mov      byte ptr [r14 + 0x160], al
222307 imul     rax, rdi
22230b mov      ebx, edx
22230d xor      rax, rsi
222310 xor      rax, r11
222313 mov      rcx, rax
222316 add      rax, r8
222319 xor      rcx, r8
22231c movzx    r8d, bpl
222320 test     r15b, r15b
222323 cmove    rax, rcx
222327 mov      rcx, r14
22232a mov      qword ptr [r14 + 0xf0], rax
222331 call     0x1401f1f50
222336 mov      r8, qword ptr [rsp + 0x70]
22233b lea      edx, [r13 - 1]
22233f mov      eax, eax
222341 imul     rcx, rbx, 0x3e
222345 add      rcx, rax
222348 mov      rax, qword ptr [r14 + 0x4b8]
22234f movsxd   r9, dword ptr [rax + rcx*4]
222353 mov      rcx, r14
222356 movsxd   rax, dword ptr [r14 + 0x4c8]
22235d xor      r9, rax
222360 add      r9, qword ptr [r14 + 0x4c0]
222367 call     r9
22236a jmp      0x140222436
22236f inc      dword ptr [r14 + 0x11a8]
222376 mov      rax, r9
222379 shr      rax, 0x1b
22237d movzx    ecx, al
222380 lea      rax, [r11*4]
222388 mov      byte ptr [r14 + 0x163], cl
22238f imul     rcx, rdi
222393 imul     r9, r10
222397 xor      rcx, rax
22239a xor      rcx, rsi
22239d mov      qword ptr [r14 + 0x108], rcx
2223a4 mov      r8, qword ptr [r14 + 0x1b8]
2223ab add      r9, rbx
2223ae mov      rax, r9
2223b1 shr      rax, 0x1b
2223b5 movzx    edx, al
2223b8 mov      byte ptr [r14 + 0x16a], dl
2223bf imul     rax, r11, 0xb
2223c3 imul     rdx, rdi
2223c7 xor      rdx, rax
2223ca xor      rdx, rsi
2223cd mov      rcx, rdx
2223d0 xor      rcx, 1
2223d4 test     r15b, r15b
2223d7 lea      rax, [rdx + 1]
2223db cmove    rax, rcx
2223df mov      qword ptr [r14 + 0x140], rax
2223e6 lea      rax, [r8 + 2]
2223ea mov      qword ptr [r14 + 0x1b8], rax
2223f1 imul     r9, r10
2223f5 add      r9, rbx
2223f8 mov      qword ptr [r14 + 0x1b0], r9
2223ff shr      r9, 0x1b
222403 movzx    eax, r9b
222407 mov      byte ptr [r14 + 0x160], al
22240e imul     rax, rdi
222412 xor      rax, rsi
222415 xor      rax, r11
222418 mov      rcx, rax
22241b add      rax, 0xfe1ab
222421 xor      rcx, 0xfe1ab
222428 test     r15b, r15b
22242b cmove    rax, rcx
22242f mov      qword ptr [r14 + 0xf0], rax
222436 mov      r12, qword ptr [rsp + 0x28]
22243b mov      rsi, qword ptr [rsp + 0x68]
222440 mov      r15, qword ptr [rsp + 0x20]
222445 add      rsp, 0x30
222449 pop      r14
22244b pop      r13
22244d pop      rdi
22244e pop      rbp
22244f pop      rbx
222450 ret      
222451 mov      edx, 0x54485254
222456 mov      rcx, r14
222459 call     0x1401ed830
22245e int3     
22245f mov      edx, 0x43414e59
222464 mov      rcx, r14
222467 call     0x1401ed830
22246c int3     
