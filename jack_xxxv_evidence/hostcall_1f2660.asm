1f2660 mov      qword ptr [rsp + 0x20], rbx
1f2665 push     rbp
1f2666 push     rsi
1f2667 push     rdi
1f2668 push     r12
1f266a push     r13
1f266c push     r14
1f266e push     r15
1f2670 sub      rsp, 0x160
1f2677 mov      rax, qword ptr [rip + 0x21a9a2]
1f267e xor      rax, rsp
1f2681 mov      qword ptr [rsp + 0x150], rax
1f2689 mov      r12, r8
1f268c mov      qword ptr [rsp + 0x40], r8
1f2691 mov      r13d, edx
1f2694 mov      rbx, rcx
1f2697 movsxd   rax, dword ptr [rcx + 0x11e0]
1f269e movabs   rcx, 0x2a3fac7c4ed3d3e6
1f26a8 imul     rax, rcx
1f26ac xor      rax, qword ptr [rbx + 0x28]
1f26b0 mov      qword ptr [rsp + 0x28], rax
1f26b5 mov      rax, qword ptr [rsp + 0x28]
1f26ba movsxd   rax, dword ptr [rbx + 0x11e0]
1f26c1 movabs   rcx, 0x886626b7cf0d57d9
1f26cb imul     rax, rcx
1f26cf xor      rax, qword ptr [rbx + 0x28]
1f26d3 mov      qword ptr [rsp + 0x28], rax
1f26d8 mov      rax, qword ptr [rsp + 0x28]
1f26dd movsxd   rax, dword ptr [rbx + 0x11e0]
1f26e4 movabs   rcx, 0x6eaeb8e94c46dbcc
1f26ee imul     rax, rcx
1f26f2 xor      rax, qword ptr [rbx + 0x28]
1f26f6 mov      qword ptr [rsp + 0x28], rax
1f26fb mov      rax, qword ptr [rsp + 0x28]
1f2700 mov      rax, qword ptr [rbx + 0x2f0]
1f2707 shr      rax, 0xd
1f270b mov      rcx, rax
1f270e shr      rcx, 0x21
1f2712 xor      rcx, rax
1f2715 movabs   rax, 0xff51afd7ed558ccd
1f271f imul     rcx, rax
1f2723 mov      rdx, rcx
1f2726 shr      rdx, 0x21
1f272a xor      rdx, rcx
1f272d movabs   rax, 0xc4ceb9fe1a85ec53
1f2737 imul     rdx, rax
1f273b mov      rcx, rdx
1f273e shr      rcx, 0x21
1f2742 xor      rcx, rdx
1f2745 movabs   rax, 0x5e8530a5465ecbc8
1f274f xor      rcx, rax
1f2752 mov      rax, qword ptr [rbx + 0x2f0]
1f2759 add      rcx, rax
1f275c mov      qword ptr [rbx + 0x2f0], rcx
1f2763 mov      rcx, rbx
1f2766 call     0x1401f1d80
1f276b mov      ebp, eax
1f276d mov      rcx, rbx
1f2770 call     0x1401f1e80
1f2775 mov      esi, eax
1f2777 cmp      eax, 0x20
1f277a jbe      0x1401f2783
1f277c mov      esi, 0x20
1f2781 jmp      0x1401f2787
1f2783 test     eax, eax
1f2785 je       0x1401f27a9
1f2787 xor      edi, edi
1f2789 nop      dword ptr [rax]
1f2790 mov      rcx, rbx
1f2793 call     0x1401ee940
1f2798 mov      ecx, esi
1f279a sub      ecx, edi
1f279c dec      ecx
1f279e mov      qword ptr [rsp + rcx*8 + 0x50], rax
1f27a3 inc      edi
1f27a5 cmp      edi, esi
1f27a7 jb       0x1401f2790
1f27a9 mov      edx, 0x610
1f27ae mov      rax, qword ptr gs:[0x58]
1f27b7 mov      r15, qword ptr [rax]
1f27ba add      rdx, 0x524
1f27c1 add      r15, rdx
1f27c4 mov      eax, dword ptr [r15]
1f27c7 mov      dword ptr [rsp + 0x20], eax
1f27cb mov      rcx, rbx
1f27ce call     0x1401ee1c0
1f27d3 mov      edi, eax
1f27d5 mov      rcx, rbx
1f27d8 call     0x1401ee070
1f27dd mov      r9d, edi
1f27e0 mov      r8d, ebp
1f27e3 mov      edx, eax
1f27e5 mov      rcx, rbx
1f27e8 call     0x1401ef230
1f27ed mov      r14d, eax
1f27f0 mov      rcx, rbx
1f27f3 call     0x1401ee590
1f27f8 lea      r8, [rax + 1]
1f27fc movabs   rax, 0x9e3779b97f4a7c15
1f2806 mov      rcx, qword ptr [rbx + 0x1b0]
1f280d imul     rcx, rax
1f2811 movabs   rax, 0x2545f4914f6cdd1d
1f281b add      rcx, rax
1f281e mov      qword ptr [rbx + 0x1b0], rcx
1f2825 inc      qword ptr [rbx + 0x1b8]
1f282c shr      rcx, 0x1b
1f2830 movzx    edx, cl
1f2833 mov      byte ptr [rbx + 0x16d], dl
1f2839 imul     rdx, qword ptr [rbx + 0xe0]
1f2841 imul     rax, qword ptr [rbx + 0xd8], 0xe
1f2849 xor      rdx, rax
1f284c xor      rdx, qword ptr [rbx + 0xd0]
1f2853 mov      rcx, rdx
1f2856 xor      rcx, r8
1f2859 lea      rax, [rdx + r8]
1f285d cmp      byte ptr [rbx + 0xe8], 0
1f2864 cmove    rax, rcx
1f2868 mov      qword ptr [rbx + 0x158], rax
1f286f mov      dword ptr [rsp + 0x38], esi
1f2873 lea      rax, [rsp + 0x50]
1f2878 mov      qword ptr [rsp + 0x30], rax
1f287d mov      dword ptr [rsp + 0x28], ebp
1f2881 mov      rcx, qword ptr [rbx + 0xb0]
1f2888 test     rcx, rcx
1f288b je       0x1401f35cc
1f2891 mov      rax, qword ptr [rcx]
1f2894 lea      r9, [rsp + 0x38]
1f2899 lea      r8, [rsp + 0x30]
1f289e lea      rdx, [rsp + 0x28]
1f28a3 call     qword ptr [rax + 0x10]
1f28a6 mov      rdi, rax
1f28a9 mov      rcx, rbx
1f28ac call     0x1401ee590
1f28b1 lea      r8, [rax - 1]
1f28b5 mov      rcx, qword ptr [rbx + 0x1b0]
1f28bc movabs   rsi, 0x9e3779b97f4a7c15
1f28c6 imul     rcx, rsi
1f28ca movabs   rdx, 0x2545f4914f6cdd1d
1f28d4 add      rcx, rdx
1f28d7 mov      qword ptr [rbx + 0x1b0], rcx
1f28de inc      qword ptr [rbx + 0x1b8]
1f28e5 shr      rcx, 0x1b
1f28e9 movzx    edx, cl
1f28ec mov      byte ptr [rbx + 0x16d], dl
1f28f2 imul     rdx, qword ptr [rbx + 0xe0]
1f28fa imul     rax, qword ptr [rbx + 0xd8], 0xe
1f2902 xor      rdx, rax
1f2905 xor      rdx, qword ptr [rbx + 0xd0]
1f290c mov      rcx, rdx
1f290f xor      rcx, r8
1f2912 lea      rax, [rdx + r8]
1f2916 cmp      byte ptr [rbx + 0xe8], 0
1f291d cmove    rax, rcx
1f2921 mov      qword ptr [rbx + 0x158], rax
1f2928 test     r14d, r14d
1f292b je       0x1401f29a5
1f292d mov      rcx, rbx
1f2930 call     0x1401ef380
1f2935 mov      r8d, eax
1f2938 mov      rax, qword ptr [rbx + 0x1b0]
1f293f imul     rax, rsi
1f2943 movabs   r14, 0x2545f4914f6cdd1d
1f294d add      rax, r14
1f2950 mov      qword ptr [rbx + 0x1b0], rax
1f2957 inc      qword ptr [rbx + 0x1b8]
1f295e shr      rax, 0x1b
1f2962 movzx    edx, al
1f2965 mov      byte ptr [rbx + 0x161], dl
1f296b imul     rdx, qword ptr [rbx + 0xe0]
1f2973 mov      rax, qword ptr [rbx + 0xd8]
1f297a add      rax, rax
1f297d xor      rdx, rax
1f2980 xor      rdx, qword ptr [rbx + 0xd0]
1f2987 mov      rcx, rdx
1f298a xor      rcx, r8
1f298d lea      rax, [rdx + r8]
1f2991 cmp      byte ptr [rbx + 0xe8], 0
1f2998 cmove    rax, rcx
1f299c mov      qword ptr [rbx + 0xf8], rax
1f29a3 jmp      0x1401f29af
1f29a5 movabs   r14, 0x2545f4914f6cdd1d
1f29af mov      rcx, rbx
1f29b2 call     0x1401ee590
1f29b7 xor      rax, rbp
1f29ba xor      rax, qword ptr [rbx + 0x20]
1f29be mov      rcx, rax
1f29c1 shr      rcx, 0x21
1f29c5 xor      rcx, rax
1f29c8 movabs   rax, 0xff51afd7ed558ccd
1f29d2 imul     rcx, rax
1f29d6 mov      rdx, rcx
1f29d9 shr      rdx, 0x21
1f29dd xor      rdx, rcx
1f29e0 movabs   rax, 0xc4ceb9fe1a85ec53
1f29ea imul     rdx, rax
1f29ee mov      rax, rdx
1f29f1 shr      rax, 0x21
1f29f5 xor      rax, rdx
1f29f8 mov      qword ptr [rbx + 0x20], rax
1f29fc mov      rdx, rdi
1f29ff mov      rcx, rbx
1f2a02 call     0x1401ee820
1f2a07 mov      rax, qword ptr [rbx + 0x2f0]
1f2a0e test     r13d, r13d
1f2a11 jns      0x1401f35d2
1f2a17 cmp      qword ptr [rbx + 0x11b8], r12
1f2a1e jne      0x1401f35be
1f2a24 movsxd   rax, dword ptr [rbx + 0x11e0]
1f2a2b movabs   rcx, 0xd76fd387b79c60e9
1f2a35 imul     rax, rcx
1f2a39 xor      rax, qword ptr [rbx + 0x28]
1f2a3d mov      qword ptr [rsp + 0x30], rax
1f2a42 mov      rax, qword ptr [rsp + 0x30]
1f2a47 mov      rcx, rbx
1f2a4a call     0x1401ee450
1f2a4f test     eax, eax
1f2a51 jne      0x1401f3587
1f2a57 cmp      dword ptr [rbx + 0xad0], eax
1f2a5d jne      0x1401f3587
1f2a63 mov      r10, qword ptr [rbx + 0xe0]
1f2a6a mov      r11, qword ptr [rbx + 0xd8]
1f2a71 mov      rdi, qword ptr [rbx + 0xd0]
1f2a78 movzx    ecx, byte ptr [rbx + 0x160]
1f2a7f imul     rcx, r10
1f2a83 xor      rcx, rdi
1f2a86 xor      rcx, r11
1f2a89 movzx    esi, byte ptr [rbx + 0xe8]
1f2a90 mov      r8, qword ptr [rbx + 0xf0]
1f2a97 mov      rax, r8
1f2a9a xor      rax, rcx
1f2a9d sub      r8, rcx
1f2aa0 test     sil, sil
1f2aa3 cmove    r8, rax
1f2aa7 mov      r9, qword ptr [rbx + 0x1b0]
1f2aae movabs   r12, 0x9e3779b97f4a7c15
1f2ab8 imul     r9, r12
1f2abc add      r9, r14
1f2abf mov      qword ptr [rbx + 0x1b0], r9
1f2ac6 mov      rbp, qword ptr [rbx + 0x1b8]
1f2acd inc      rbp
1f2ad0 mov      qword ptr [rbx + 0x1b8], rbp
1f2ad7 mov      rax, r9
1f2ada shr      rax, 0x1b
1f2ade movzx    edx, al
1f2ae1 mov      byte ptr [rbx + 0x160], dl
1f2ae7 imul     rdx, r10
1f2aeb xor      rdx, rdi
1f2aee xor      rdx, r11
1f2af1 mov      rcx, r8
1f2af4 xor      rcx, rdx
1f2af7 lea      rax, [r8 + rdx]
1f2afb test     sil, sil
1f2afe cmove    rax, rcx
1f2b02 mov      qword ptr [rbx + 0xf0], rax
1f2b09 cmp      r8d, 0x26dc07
1f2b10 jne      0x1401f3587
1f2b16 mov      eax, r13d
1f2b19 btr      eax, 0x1f
1f2b1d cmp      eax, 2
1f2b20 jae      0x1401f2b6b
1f2b22 imul     r9, r12
1f2b26 add      r9, r14
1f2b29 mov      qword ptr [rbx + 0x1b0], r9
1f2b30 lea      rax, [rbp + 1]
1f2b34 mov      qword ptr [rbx + 0x1b8], rax
1f2b3b shr      r9, 0x1b
1f2b3f movzx    eax, r9b
1f2b43 mov      byte ptr [rbx + 0x160], al
1f2b49 imul     rax, r10
1f2b4d xor      rax, rdi
1f2b50 xor      rax, r11
1f2b53 mov      rcx, rax
1f2b56 xor      rcx, 0x3abaef
1f2b5d add      rax, 0x3abaef
1f2b63 test     sil, sil
1f2b66 jmp      0x1401f357c
1f2b6b mov      rcx, rbx
1f2b6e call     0x1401ee070
1f2b73 mov      eax, eax
1f2b75 movzx    ecx, byte ptr [rbx + 0x4ad]
1f2b7c xor      rcx, qword ptr [rbx + 0x11e8]
1f2b83 xor      rcx, rax
1f2b86 mov      rax, rcx
1f2b89 shr      rax, 0x21
1f2b8d xor      rax, rcx
1f2b90 movabs   rdx, 0xff51afd7ed558ccd
1f2b9a imul     rax, rdx
1f2b9e mov      rcx, rax
1f2ba1 shr      rcx, 0x21
1f2ba5 xor      rcx, rax
1f2ba8 movabs   r8, 0xc4ceb9fe1a85ec53
1f2bb2 imul     rcx, r8
1f2bb6 mov      rax, rcx
1f2bb9 shr      rax, 0x21
1f2bbd xor      rcx, rax
1f2bc0 mov      qword ptr [rbx + 0x11e8], rcx
1f2bc7 xor      rcx, qword ptr [rbx + 0x20]
1f2bcb xor      rcx, qword ptr [rbx + 0x28]
1f2bcf mov      rax, rcx
1f2bd2 shr      rax, 0x21
1f2bd6 xor      rax, rcx
1f2bd9 imul     rax, rdx
1f2bdd mov      rcx, rax
1f2be0 shr      rcx, 0x21
1f2be4 xor      rcx, rax
1f2be7 imul     rcx, r8
1f2beb mov      rax, rcx
1f2bee shr      rax, 0x21
1f2bf2 xor      rax, rcx
1f2bf5 mov      qword ptr [rbx + 0x20], rax
1f2bf9 mov      r11, qword ptr [rbx + 0xe0]
1f2c00 mov      rax, qword ptr [rbx + 0xd8]
1f2c07 lea      rdi, [rax + rax*4]
1f2c0b add      rdi, rdi
1f2c0e mov      r10, qword ptr [rbx + 0xd0]
1f2c15 movzx    ecx, byte ptr [rbx + 0x169]
1f2c1c imul     rcx, r11
1f2c20 xor      rcx, rdi
1f2c23 xor      rcx, r10
1f2c26 movzx    r9d, byte ptr [rbx + 0xe8]
1f2c2e mov      rdx, qword ptr [rbx + 0x138]
1f2c35 mov      rax, rdx
1f2c38 xor      rax, rcx
1f2c3b sub      rdx, rcx
1f2c3e test     r9b, r9b
1f2c41 cmove    rdx, rax
1f2c45 mov      rax, qword ptr [rbx + 0x1b0]
1f2c4c imul     rax, r12
1f2c50 add      rax, r14
1f2c53 mov      qword ptr [rbx + 0x1b0], rax
1f2c5a inc      qword ptr [rbx + 0x1b8]
1f2c61 shr      rax, 0x1b
1f2c65 movzx    r8d, al
1f2c69 mov      byte ptr [rbx + 0x169], r8b
1f2c70 imul     r8, r11
1f2c74 xor      r8, rdi
1f2c77 xor      r8, r10
1f2c7a mov      rcx, rdx
1f2c7d xor      rcx, r8
1f2c80 lea      rax, [rdx + r8]
1f2c84 test     r9b, r9b
1f2c87 cmove    rax, rcx
1f2c8b mov      qword ptr [rbx + 0x138], rax
1f2c92 mov      rcx, rbx
1f2c95 call     0x1401f0910
1f2c9a mov      r9, qword ptr [rbx + 0xe0]
1f2ca1 mov      rax, qword ptr [rbx + 0xd8]
1f2ca8 lea      r10, [rax + rax*8]
1f2cac mov      rdi, qword ptr [rbx + 0xd0]
1f2cb3 movzx    ecx, byte ptr [rbx + 0x168]
1f2cba imul     rcx, r9
1f2cbe xor      rcx, r10
1f2cc1 xor      rcx, rdi
1f2cc4 movzx    r11d, byte ptr [rbx + 0xe8]
1f2ccc mov      rdx, qword ptr [rbx + 0x130]
1f2cd3 mov      rax, rdx
1f2cd6 xor      rax, rcx
1f2cd9 sub      rdx, rcx
1f2cdc test     r11b, r11b
1f2cdf cmove    rdx, rax
1f2ce3 mov      rax, qword ptr [rbx + 0x1b0]
1f2cea imul     rax, r12
1f2cee add      rax, r14
1f2cf1 mov      qword ptr [rbx + 0x1b0], rax
1f2cf8 inc      qword ptr [rbx + 0x1b8]
1f2cff shr      rax, 0x1b
1f2d03 movzx    r8d, al
1f2d07 mov      byte ptr [rbx + 0x168], r8b
1f2d0e imul     r8, r9
1f2d12 xor      r8, r10
1f2d15 xor      r8, rdi
1f2d18 mov      rcx, rdx
1f2d1b xor      rcx, r8
1f2d1e lea      rax, [rdx + r8]
1f2d22 test     r11b, r11b
1f2d25 cmove    rax, rcx
1f2d29 mov      qword ptr [rbx + 0x130], rax
1f2d30 mov      rcx, rbx
1f2d33 call     0x1401f0910
1f2d38 mov      rcx, rbx
1f2d3b call     0x1401ee070
1f2d40 cmp      eax, dword ptr [rbx + 0x1d8]
1f2d46 jae      0x1401f2d52
1f2d48 mov      edx, eax
1f2d4a mov      rcx, rbx
1f2d4d call     0x1401f0910
1f2d52 mov      rbp, qword ptr [rbx + 0xe0]
1f2d59 mov      rdi, qword ptr [rbx + 0xd8]
1f2d60 lea      r9, [rdi + rdi*8]
1f2d64 mov      r14, qword ptr [rbx + 0xd0]
1f2d6b movzx    ecx, byte ptr [rbx + 0x168]
1f2d72 imul     rcx, rbp
1f2d76 xor      rcx, r9
1f2d79 xor      rcx, r14
1f2d7c movzx    esi, byte ptr [rbx + 0xe8]
1f2d83 mov      r11, qword ptr [rbx + 0x130]
1f2d8a mov      rax, r11
1f2d8d xor      rax, rcx
1f2d90 sub      r11, rcx
1f2d93 test     sil, sil
1f2d96 cmove    r11, rax
1f2d9a mov      r10, qword ptr [rbx + 0x1b0]
1f2da1 imul     r10, r12
1f2da5 movabs   rdx, 0x2545f4914f6cdd1d
1f2daf add      r10, rdx
1f2db2 mov      r8, qword ptr [rbx + 0x1b8]
1f2db9 mov      rax, r10
1f2dbc shr      rax, 0x1b
1f2dc0 movzx    edx, al
1f2dc3 mov      byte ptr [rbx + 0x168], dl
1f2dc9 imul     rdx, rbp
1f2dcd xor      rdx, r9
1f2dd0 xor      rdx, r14
1f2dd3 mov      rcx, r11
1f2dd6 xor      rcx, rdx
1f2dd9 lea      rax, [r11 + rdx]
1f2ddd test     sil, sil
1f2de0 cmove    rax, rcx
1f2de4 mov      qword ptr [rbx + 0x130], rax
1f2deb imul     r10, r12
1f2def movabs   rax, 0x2545f4914f6cdd1d
1f2df9 add      r10, rax
1f2dfc mov      qword ptr [rbx + 0x1b0], r10
1f2e03 lea      rax, [r8 + 2]
1f2e07 mov      qword ptr [rbx + 0x1b8], rax
1f2e0e shr      r10, 0x1b
1f2e12 movzx    edx, r10b
1f2e16 mov      byte ptr [rbx + 0x169], dl
1f2e1c imul     rdx, rbp
1f2e20 lea      rax, [rdi + rdi*4]
1f2e24 add      rax, rax
1f2e27 xor      rdx, rax
1f2e2a xor      rdx, r14
1f2e2d mov      rcx, r11
1f2e30 xor      rcx, rdx
1f2e33 lea      rax, [r11 + rdx]
1f2e37 test     sil, sil
1f2e3a cmove    rax, rcx
1f2e3e mov      qword ptr [rbx + 0x138], rax
1f2e45 movzx    edx, byte ptr [rbx + 0x4ad]
1f2e4c xor      rdx, qword ptr [rbx + 0x348]
1f2e53 mov      r8d, 0x826a
1f2e59 mov      rcx, rbx
1f2e5c call     0x1401f1520
1f2e61 mov      r8, qword ptr [rbx + 0x348]
1f2e68 mov      rax, r8
1f2e6b xor      rax, qword ptr [rbx + 0x20]
1f2e6f mov      rcx, rax
1f2e72 shr      rcx, 0x21
1f2e76 xor      rcx, rax
1f2e79 movabs   rsi, 0xff51afd7ed558ccd
1f2e83 imul     rcx, rsi
1f2e87 mov      rdx, rcx
1f2e8a shr      rdx, 0x21
1f2e8e xor      rdx, rcx
1f2e91 movabs   r14, 0xc4ceb9fe1a85ec53
1f2e9b imul     rdx, r14
1f2e9f mov      rax, rdx
1f2ea2 shr      rax, 0x21
1f2ea6 xor      rax, rdx
1f2ea9 lea      rcx, [rax + 1]
1f2ead mov      rdx, rcx
1f2eb0 imul     rdx, rax
1f2eb4 xor      rcx, rax
1f2eb7 not      edx
1f2eb9 and      edx, ecx
1f2ebb test     dl, 1
1f2ebe je       0x1401f2f2f
1f2ec0 and      r8b, 3
1f2ec4 cmp      r8b, 1
1f2ec8 jne      0x1401f2f2f
1f2eca mov      rax, qword ptr [rbx + 0x1b0]
1f2ed1 imul     rax, r12
1f2ed5 movabs   rdx, 0x2545f4914f6cdd1d
1f2edf add      rax, rdx
1f2ee2 mov      qword ptr [rbx + 0x1b0], rax
1f2ee9 inc      qword ptr [rbx + 0x1b8]
1f2ef0 shr      rax, 0x1b
1f2ef4 movzx    eax, al
1f2ef7 mov      byte ptr [rbx + 0x160], al
1f2efd imul     rax, qword ptr [rbx + 0xe0]
1f2f05 xor      rax, qword ptr [rbx + 0xd0]
1f2f0c xor      rax, qword ptr [rbx + 0xd8]
1f2f13 mov      rcx, rax
1f2f16 xor      rcx, 0x17ed28
1f2f1d add      rax, 0x17ed28
1f2f23 cmp      byte ptr [rbx + 0xe8], 0
1f2f2a jmp      0x1401f357c
1f2f2f mov      rcx, rbx
1f2f32 call     0x1401ee070
1f2f37 mov      edi, eax
1f2f39 cmp      eax, dword ptr [rbx + 0x1d8]
1f2f3f jb       0x1401f2fa6
1f2f41 mov      rax, qword ptr [rbx + 0x1b0]
1f2f48 imul     rax, r12
1f2f4c movabs   rdx, 0x2545f4914f6cdd1d
1f2f56 add      rax, rdx
1f2f59 mov      qword ptr [rbx + 0x1b0], rax
1f2f60 inc      qword ptr [rbx + 0x1b8]
1f2f67 shr      rax, 0x1b
1f2f6b movzx    eax, al
1f2f6e mov      byte ptr [rbx + 0x160], al
1f2f74 imul     rax, qword ptr [rbx + 0xe0]
1f2f7c xor      rax, qword ptr [rbx + 0xd0]
1f2f83 xor      rax, qword ptr [rbx + 0xd8]
1f2f8a mov      rcx, rax
1f2f8d xor      rcx, 0xfe1ab
1f2f94 add      rax, 0xfe1ab
1f2f9a cmp      byte ptr [rbx + 0xe8], 0
1f2fa1 jmp      0x1401f357c
1f2fa6 mov      edx, edi
1f2fa8 mov      rcx, rbx
1f2fab call     0x1401f25b0
1f2fb0 mov      r8, qword ptr [rbx + 0x20]
1f2fb4 movsxd   r9, dword ptr [rbx + 0x11e0]
1f2fbb mov      rdx, r9
1f2fbe imul     rdx, r12
1f2fc2 xor      rdx, qword ptr [rbx + 0x260]
1f2fc9 mov      rcx, r8
1f2fcc rol      rcx, 0x11
1f2fd0 movabs   r10, 0xd6e8feb86659fd93
1f2fda mov      rax, rdi
1f2fdd imul     rax, r10
1f2fe1 xor      rax, rdx
1f2fe4 xor      rax, rcx
1f2fe7 mov      rcx, rax
1f2fea shr      rcx, 0x21
1f2fee xor      rcx, rax
1f2ff1 imul     rcx, rsi
1f2ff5 mov      rax, rcx
1f2ff8 shr      rax, 0x21
1f2ffc xor      rax, rcx
1f2fff imul     rax, r14
1f3003 mov      r10, rax
1f3006 shr      r10, 0x21
1f300a xor      r10, rax
1f300d mov      rax, r10
1f3010 shr      rax, 0x1d
1f3014 xor      r10, rax
1f3017 or       r10, 1
1f301b mov      qword ptr [rbx + 0x260], r10
1f3022 mov      rax, r10
1f3025 and      eax, 0x3ff
1f302a cmp      rax, 0x2c5
1f3030 jne      0x1401f304c
1f3032 mov      rcx, rbx
1f3035 call     0x1402297e0
1f303a mov      r8, qword ptr [rbx + 0x20]
1f303e mov      r9d, dword ptr [rbx + 0x11e0]
1f3045 mov      r10, qword ptr [rbx + 0x260]
1f304c movzx    eax, r10b
1f3050 and      al, 0x1f
1f3052 cmp      al, 0x15
1f3054 jne      0x1401f313a
1f305a movsxd   rcx, r9d
1f305d xor      rcx, 0x5a5a
1f3064 imul     rcx, r12
1f3068 xor      rcx, r10
1f306b rol      r8, 0x11
1f306f xor      rcx, r8
1f3072 movabs   rax, 0x8f70feda99a6026d
1f307c xor      rcx, rax
1f307f mov      rax, rcx
1f3082 shr      rax, 0x21
1f3086 xor      rax, rcx
1f3089 imul     rax, rsi
1f308d mov      rcx, rax
1f3090 shr      rcx, 0x21
1f3094 xor      rcx, rax
1f3097 imul     rcx, r14
1f309b mov      r9, rcx
1f309e shr      r9, 0x21
1f30a2 xor      r9, rcx
1f30a5 mov      rax, r9
1f30a8 shr      rax, 0x1d
1f30ac xor      r9, rax
1f30af or       r9, 1
1f30b3 mov      rax, r9
1f30b6 shr      rax, 8
1f30ba and      eax, 3
1f30bd imul     r8, rax, 0x3e
1f30c1 mov      rcx, r9
1f30c4 shr      rcx, 0x28
1f30c8 mov      eax, 0x8421085
1f30cd mul      ecx
1f30cf mov      eax, ecx
1f30d1 sub      eax, edx
1f30d3 shr      eax, 1
1f30d5 add      eax, edx
1f30d7 shr      eax, 5
1f30da imul     eax, eax, 0x3e
1f30dd sub      ecx, eax
1f30df mov      eax, ecx
1f30e1 add      r8, rax
1f30e4 mov      rax, qword ptr [rbx + 0x4b8]
1f30eb movsxd   rcx, dword ptr [rax + r8*4]
1f30ef movsxd   rax, dword ptr [rbx + 0x4c8]
1f30f6 xor      rcx, rax
1f30f9 add      rcx, qword ptr [rbx + 0x4c0]
1f3100 xor      rcx, r9
1f3103 mov      rax, rcx
1f3106 shr      rax, 0x21
1f310a xor      rax, rcx
1f310d imul     rax, rsi
1f3111 mov      rcx, rax
1f3114 shr      rcx, 0x21
1f3118 xor      rcx, rax
1f311b imul     rcx, r14
1f311f mov      rax, rcx
1f3122 shr      rax, 0x21
1f3126 xor      rax, rcx
1f3129 xor      r10, rax
1f312c mov      qword ptr [rbx + 0x260], r10
1f3133 inc      qword ptr [rbx + 0x268]
1f313a inc      dword ptr [rbx + 0x200]
1f3140 mov      eax, dword ptr [rbx + 0x200]
1f3146 cmp      eax, dword ptr [rbx + 0x1fc]
1f314c jb       0x1401f3160
1f314e mov      dword ptr [rbx + 0x200], 0
1f3158 mov      rcx, rbx
1f315b call     0x1401ef7c0
1f3160 mov      r8d, edi
1f3163 mov      edx, edi
1f3165 mov      rcx, rbx
1f3168 call     0x1401f0660
1f316d mov      r9, qword ptr [rbx + 0x1b0]
1f3174 imul     r9, r12
1f3178 movabs   rax, 0x2545f4914f6cdd1d
1f3182 add      r9, rax
1f3185 mov      qword ptr [rbx + 0x1b0], r9
1f318c inc      qword ptr [rbx + 0x1b8]
1f3193 mov      rax, qword ptr [rbx + 0x1b8]
1f319a mov      qword ptr [rsp + 0x28], rax
1f319f mov      rax, r9
1f31a2 shr      rax, 0x1b
1f31a6 movzx    edx, al
1f31a9 mov      byte ptr [rbx + 0x168], dl
1f31af mov      r11, qword ptr [rbx + 0xe0]
1f31b6 mov      r10, qword ptr [rbx + 0xd8]
1f31bd mov      rsi, qword ptr [rbx + 0xd0]
1f31c4 imul     rdx, r11
1f31c8 lea      rax, [r10 + r10*8]
1f31cc xor      rdx, rax
1f31cf xor      rdx, rsi
1f31d2 movzx    r14d, byte ptr [rbx + 0xe8]
1f31da mov      rcx, rdx
1f31dd xor      rcx, rdi
1f31e0 lea      rax, [rdx + rdi]
1f31e4 test     r14b, r14b
1f31e7 cmove    rax, rcx
1f31eb mov      qword ptr [rbx + 0x130], rax
1f31f2 mov      rcx, qword ptr [rbx + 0x1d0]
1f31f9 mov      rax, qword ptr [rbx + 0x48]
1f31fd movzx    r8d, byte ptr [rcx + rdi]
1f3202 xor      r8b, byte ptr [rax + rdi]
1f3206 inc      edi
1f3208 mov      r12d, edi
1f320b mov      qword ptr [rsp + 0x30], r12
1f3210 movabs   rax, 0x9e3779b97f4a7c15
1f321a imul     r9, rax
1f321e movabs   rax, 0x2545f4914f6cdd1d
1f3228 add      r9, rax
1f322b mov      rax, qword ptr [rsp + 0x28]
1f3230 inc      rax
1f3233 mov      qword ptr [rsp + 0x28], rax
1f3238 mov      qword ptr [rbx + 0x1b8], rax
1f323f mov      rax, r9
1f3242 shr      rax, 0x1b
1f3246 movzx    edx, al
1f3249 mov      byte ptr [rbx + 0x161], dl
1f324f imul     rdx, r11
1f3253 lea      rax, [r10 + r10]
1f3257 xor      rdx, rax
1f325a xor      rdx, rsi
1f325d mov      ecx, edi
1f325f xor      rcx, rdx
1f3262 lea      rax, [rdi + rdx]
1f3266 test     r14b, r14b
1f3269 cmove    rax, rcx
1f326d mov      qword ptr [rbx + 0xf8], rax
1f3274 movsxd   rdx, dword ptr [rbx + 0x11e0]
1f327b mov      rdi, qword ptr [rbx + 0x20]
1f327f mov      rcx, rdx
1f3282 xor      rcx, qword ptr [rbx + 0x350]
1f3289 xor      rcx, r12
1f328c xor      rcx, qword ptr [rbx + 0x348]
1f3293 xor      rcx, rdi
1f3296 mov      rax, rcx
1f3299 shr      rax, 0x21
1f329d xor      rax, rcx
1f32a0 movabs   rcx, 0xff51afd7ed558ccd
1f32aa imul     rax, rcx
1f32ae mov      rcx, rax
1f32b1 shr      rcx, 0x21
1f32b5 xor      rcx, rax
1f32b8 movabs   rax, 0xc4ceb9fe1a85ec53
1f32c2 imul     rcx, rax
1f32c6 mov      r12, rcx
1f32c9 shr      r12, 0x21
1f32cd xor      r12, rcx
1f32d0 mov      qword ptr [rbx + 0x28], r12
1f32d4 xor      r8b, 0xdd
1f32d8 movzx    eax, r8b
1f32dc lea      rcx, [rip - 0x1f32e3]
1f32e3 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
1f32eb xor      bpl, 0x63
1f32ef inc      edx
1f32f1 mov      dword ptr [rbx + 0x11e0], edx
1f32f7 test     dl, 0x1f
1f32fa jne      0x1401f334a
1f32fc movsxd   rax, edx
1f32ff xor      rax, qword ptr [rbx + 0x348]
1f3306 xor      rax, rdi
1f3309 mov      rcx, rax
1f330c shr      rcx, 0x21
1f3310 xor      rcx, rax
1f3313 movabs   rax, 0xff51afd7ed558ccd
1f331d imul     rcx, rax
1f3321 mov      rdx, rcx
1f3324 shr      rdx, 0x21
1f3328 xor      rdx, rcx
1f332b movabs   rax, 0xc4ceb9fe1a85ec53
1f3335 imul     rdx, rax
1f3339 mov      rax, rdx
1f333c shr      rax, 0x21
1f3340 xor      rax, rdx
1f3343 mov      qword ptr [rbx + 0x348], rax
1f334a movzx    r8d, bpl
1f334e mov      eax, r8d
1f3351 xor      rax, qword ptr [rsp + 0x30]
1f3356 xor      rax, rdi
1f3359 mov      rcx, rax
1f335c shr      rcx, 0x21
1f3360 xor      rcx, rax
1f3363 movabs   rax, 0xff51afd7ed558ccd
1f336d imul     rcx, rax
1f3371 mov      rdx, rcx
1f3374 shr      rdx, 0x21
1f3378 xor      rdx, rcx
1f337b movabs   rax, 0xc4ceb9fe1a85ec53
1f3385 imul     rdx, rax
1f3389 mov      rax, rdx
1f338c shr      rax, 0x21
1f3390 xor      rax, rdx
1f3393 mov      qword ptr [rbx + 0x20], rax
1f3397 mov      byte ptr [rbx + 0x4ad], bpl
1f339e mov      ecx, dword ptr [rbx + 0x1178]
1f33a4 movabs   rax, 0xd6e8feb86659fd93
1f33ae imul     rcx, rax
1f33b2 movabs   rdi, 0x9e3779b97f4a7c15
1f33bc imul     r8, rdi
1f33c0 xor      rcx, r8
1f33c3 xor      rcx, r12
1f33c6 mov      rax, rcx
1f33c9 shr      rax, 0x21
1f33cd xor      rax, rcx
1f33d0 movabs   rcx, 0xff51afd7ed558ccd
1f33da imul     rax, rcx
1f33de mov      rcx, rax
1f33e1 shr      rcx, 0x21
1f33e5 xor      rcx, rax
1f33e8 movabs   rax, 0xc4ceb9fe1a85ec53
1f33f2 imul     rcx, rax
1f33f6 mov      rdx, rcx
1f33f9 shr      rdx, 0x21
1f33fd xor      rdx, rcx
1f3400 shr      rdx, 0x21
1f3404 and      edx, 3
1f3407 imul     r9, rdi
1f340b movabs   r12, 0x2545f4914f6cdd1d
1f3415 add      r9, r12
1f3418 mov      rax, qword ptr [rsp + 0x28]
1f341d inc      rax
1f3420 mov      qword ptr [rbx + 0x1b8], rax
1f3427 cmp      bpl, 0x3e
1f342b jae      0x1401f34c4
1f3431 inc      qword ptr [rbx + 0x11a0]
1f3438 mov      edi, edx
1f343a lea      rax, [rip - 0x1f3441]
1f3441 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
1f3449 mov      qword ptr [rbx + 0x1b0], r9
1f3450 shr      r9, 0x1b
1f3454 movzx    eax, r9b
1f3458 mov      byte ptr [rbx + 0x160], al
1f345e imul     rax, r11
1f3462 xor      rax, rsi
1f3465 xor      rax, r10
1f3468 mov      rcx, rax
1f346b xor      rcx, r8
1f346e add      rax, r8
1f3471 test     r14b, r14b
1f3474 cmove    rax, rcx
1f3478 mov      qword ptr [rbx + 0xf0], rax
1f347f movzx    r8d, bpl
1f3483 mov      rcx, rbx
1f3486 call     0x1401f1f50
1f348b imul     rcx, rdi, 0x3e
1f348f mov      eax, eax
1f3491 add      rcx, rax
1f3494 mov      rax, qword ptr [rbx + 0x4b8]
1f349b movsxd   r9, dword ptr [rax + rcx*4]
1f349f movsxd   rax, dword ptr [rbx + 0x4c8]
1f34a6 xor      r9, rax
1f34a9 add      r9, qword ptr [rbx + 0x4c0]
1f34b0 lea      edx, [r13 - 1]
1f34b4 mov      r8, qword ptr [rsp + 0x40]
1f34b9 mov      rcx, rbx
1f34bc call     r9
1f34bf jmp      0x1401f3587
1f34c4 inc      dword ptr [rbx + 0x11a8]
1f34ca mov      rax, r9
1f34cd shr      rax, 0x1b
1f34d1 movzx    ecx, al
1f34d4 mov      byte ptr [rbx + 0x163], cl
1f34da imul     rcx, r11
1f34de lea      rax, [r10*4]
1f34e6 xor      rcx, rax
1f34e9 xor      rcx, rsi
1f34ec mov      qword ptr [rbx + 0x108], rcx
1f34f3 imul     r9, rdi
1f34f7 add      r9, r12
1f34fa mov      r8, qword ptr [rbx + 0x1b8]
1f3501 mov      rax, r9
1f3504 shr      rax, 0x1b
1f3508 movzx    edx, al
1f350b mov      byte ptr [rbx + 0x16a], dl
1f3511 imul     rdx, r11
1f3515 imul     rax, r10, 0xb
1f3519 xor      rdx, rax
1f351c xor      rdx, rsi
1f351f mov      rcx, rdx
1f3522 xor      rcx, 1
1f3526 lea      rax, [rdx + 1]
1f352a test     r14b, r14b
1f352d cmove    rax, rcx
1f3531 mov      qword ptr [rbx + 0x140], rax
1f3538 imul     r9, rdi
1f353c add      r9, r12
1f353f mov      qword ptr [rbx + 0x1b0], r9
1f3546 lea      rax, [r8 + 2]
1f354a mov      qword ptr [rbx + 0x1b8], rax
1f3551 shr      r9, 0x1b
1f3555 movzx    eax, r9b
1f3559 mov      byte ptr [rbx + 0x160], al
1f355f imul     rax, r11
1f3563 xor      rax, rsi
1f3566 xor      rax, r10
1f3569 mov      rcx, rax
1f356c xor      rcx, 0xfe1ab
1f3573 add      rax, 0xfe1ab
1f3579 test     r14b, r14b
1f357c cmove    rax, rcx
1f3580 mov      qword ptr [rbx + 0xf0], rax
1f3587 mov      eax, dword ptr [rsp + 0x20]
1f358b cmp      dword ptr [r15], eax
1f358e jbe      0x1401f3593
1f3590 mov      dword ptr [r15], eax
1f3593 mov      rcx, qword ptr [rsp + 0x150]
1f359b xor      rcx, rsp
1f359e call     0x1403a3dc0
1f35a3 mov      rbx, qword ptr [rsp + 0x1b8]
1f35ab add      rsp, 0x160
1f35b2 pop      r15
1f35b4 pop      r14
1f35b6 pop      r13
1f35b8 pop      r12
1f35ba pop      rdi
1f35bb pop      rsi
1f35bc pop      rbp
1f35bd ret      
1f35be mov      edx, 0x43414e59
1f35c3 mov      rcx, rbx
1f35c6 call     0x1401ed830
1f35cb int3     
1f35cc call     0x1403a17cc
1f35d1 int3     
1f35d2 mov      edx, 0x54485254
1f35d7 mov      rcx, rbx
1f35da call     0x1401ed830
1f35df int3     
