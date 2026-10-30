22a120 mov      qword ptr [rsp + 0x10], rbx
22a125 mov      qword ptr [rsp + 0x20], rsi
22a12a push     rdi
22a12b push     r12
22a12d push     r13
22a12f push     r14
22a131 push     r15
22a133 mov      eax, 0x47c0
22a138 call     0x1403a49a0
22a13d sub      rsp, rax
22a140 mov      rax, qword ptr [rip + 0x1e2ed9]
22a147 xor      rax, rsp
22a14a mov      qword ptr [rsp + 0x47b0], rax
22a152 mov      qword ptr [rsp + 0xe0], r8
22a15a mov      qword ptr [rsp + 0xb8], rcx
22a162 mov      qword ptr [rsp + 0x110], rcx
22a16a mov      qword ptr [rsp + 0x1380], r8
22a172 call     0x140002040
22a177 mov      rbx, rax
22a17a movabs   rax, 0x955229df38972d47
22a184 xor      rbx, rax
22a187 mov      qword ptr [rsp + 0xb0], rbx
22a18f call     0x1401f0160
22a194 movsxd   rcx, eax
22a197 xor      rcx, rbx
22a19a movabs   rax, 0xb05b1cd7f6c64112
22a1a4 xor      rcx, rax
22a1a7 call     0x140002040
22a1ac mov      r15, rax
22a1af lea      rcx, [rsp + 0xa8]
22a1b7 call     0x140397ce0
22a1bc mov      byte ptr [rsp + 0xa0], 0
22a1c4 mov      r9, rax
22a1c7 lea      r8, [rsp + 0xa0]
22a1cf mov      edx, 0xa76
22a1d4 lea      rcx, [rsp + 0x178]
22a1dc call     0x140398170
22a1e1 nop      
22a1e2 lea      rcx, [rsp + 0x178]
22a1ea call     0x140398100
22a1ef mov      qword ptr [rsp + 0xe8], rax
22a1f7 lea      rcx, [rsp + 0xa9]
22a1ff call     0x140397ce0
22a204 mov      byte ptr [rsp + 0xa1], 0
22a20c mov      r9, rax
22a20f lea      r8, [rsp + 0xa1]
22a217 mov      edx, 0xa76
22a21c lea      rcx, [rsp + 0x160]
22a224 call     0x140398170
22a229 nop      
22a22a lea      rcx, [rsp + 0x160]
22a232 call     0x140398100
22a237 mov      qword ptr [rsp + 0xc8], rax
22a23f lea      rcx, [rsp + 0xaa]
22a247 call     0x140397ce0
22a24c mov      byte ptr [rsp + 0xa2], 0
22a254 mov      r9, rax
22a257 lea      r8, [rsp + 0xa2]
22a25f mov      edx, 0x68
22a264 lea      rcx, [rsp + 0x148]
22a26c call     0x140398170
22a271 nop      
22a272 lea      rcx, [rsp + 0x148]
22a27a call     0x140398100
22a27f mov      r14, rax
22a282 lea      rcx, [rsp + 0xab]
22a28a call     0x140397ce0
22a28f mov      byte ptr [rsp + 0xa3], 0
22a297 mov      r9, rax
22a29a lea      r8, [rsp + 0xa3]
22a2a2 mov      edx, 0x68
22a2a7 lea      rcx, [rsp + 0x130]
22a2af call     0x140398170
22a2b4 nop      
22a2b5 lea      rcx, [rsp + 0x130]
22a2bd call     0x140398100
22a2c2 mov      r12, rax
22a2c5 movabs   rax, 0x3f7bc48565f9022a
22a2cf xor      ebx, ebx
22a2d1 lea      rdi, [rip + 0x1bf938]
22a2d8 mov      esi, 0xa76
22a2dd nop      dword ptr [rax]
22a2e0 movzx    ecx, byte ptr [rdi]
22a2e3 xor      rcx, rbx
22a2e6 xor      rcx, rax
22a2e9 call     0x140002040
22a2ee inc      rbx
22a2f1 lea      rdi, [rdi + 1]
22a2f5 sub      rsi, 1
22a2f9 jne      0x14022a2e0
22a2fb mov      qword ptr [rsp + 0xd8], rax
22a303 mov      qword ptr [rsp + 0x100], rax
22a30b xor      edx, edx
22a30d mov      r8d, 0x1000
22a313 lea      rcx, [rsp + 0x17b0]
22a31b call     0x1403a6720
22a320 xor      edx, edx
22a322 mov      r8d, 0x2000
22a328 lea      rcx, [rsp + 0x27b0]
22a330 call     0x1403a6720
22a335 mov      rcx, qword ptr [rsp + 0xb0]
22a33d xor      rcx, 0x43414e59
22a344 call     0x140002040
22a349 mov      qword ptr [rsp + 0xf0], rax
22a351 mov      rbx, r15
22a354 xor      rbx, qword ptr [rsp + 0xb0]
22a35c mov      rcx, rbx
22a35f xor      rcx, 0x4d454d54
22a366 call     0x140002040
22a36b mov      qword ptr [rsp + 0xc0], rax
22a373 xorps    xmm0, xmm0
22a376 xor      eax, eax
22a378 movups   xmmword ptr [rsp + 0x190], xmm0
22a380 mov      qword ptr [rsp + 0x1a0], rax
22a388 mov      dword ptr [rsp + 0x1a8], eax
22a38f mov      byte ptr [rsp + 0x1ac], al
22a396 movups   xmmword ptr [rsp + 0x1b0], xmm0
22a39e xorps    xmm1, xmm1
22a3a1 movups   xmmword ptr [rsp + 0x1c0], xmm1
22a3a9 mov      dword ptr [rsp + 0x1d0], eax
22a3b0 movups   xmmword ptr [rsp + 0x1d8], xmm0
22a3b8 mov      qword ptr [rsp + 0x1e8], rax
22a3c0 movups   xmmword ptr [rsp + 0x1f0], xmm1
22a3c8 mov      dword ptr [rsp + 0x200], eax
22a3cf lea      rcx, [rsp + 0x208]
22a3d7 call     0x1403983e0
22a3dc xorps    xmm0, xmm0
22a3df xor      eax, eax
22a3e1 movups   xmmword ptr [rsp + 0x248], xmm0
22a3e9 mov      dword ptr [rsp + 0x258], eax
22a3f0 mov      byte ptr [rsp + 0x25c], al
22a3f7 movups   xmmword ptr [rsp + 0x260], xmm0
22a3ff movups   xmmword ptr [rsp + 0x270], xmm0
22a407 xorps    xmm1, xmm1
22a40a movups   xmmword ptr [rsp + 0x280], xmm1
22a412 movups   xmmword ptr [rsp + 0x290], xmm1
22a41a movups   xmmword ptr [rsp + 0x2a0], xmm1
22a422 movups   xmmword ptr [rsp + 0x2b0], xmm1
22a42a movups   xmmword ptr [rsp + 0x2c0], xmm1
22a432 movups   xmmword ptr [rsp + 0x2d0], xmm1
22a43a movups   xmmword ptr [rsp + 0x2e0], xmm1
22a442 mov      qword ptr [rsp + 0x2f0], rax
22a44a mov      dword ptr [rsp + 0x2f8], eax
22a451 mov      word ptr [rsp + 0x2fc], ax
22a459 mov      qword ptr [rsp + 0x300], rax
22a461 mov      dword ptr [rsp + 0x308], eax
22a468 mov      word ptr [rsp + 0x30c], ax
22a470 movups   xmmword ptr [rsp + 0x310], xmm0
22a478 mov      qword ptr [rsp + 0x320], rax
22a480 mov      byte ptr [rsp + 0x328], al
22a487 movups   xmmword ptr [rsp + 0x330], xmm0
22a48f movups   xmmword ptr [rsp + 0x340], xmm0
22a497 mov      qword ptr [rsp + 0x350], rax
22a49f mov      dword ptr [rsp + 0x358], eax
22a4a6 movups   xmmword ptr [rsp + 0x36c], xmm0
22a4ae mov      dword ptr [rsp + 0x37c], eax
22a4b5 mov      byte ptr [rsp + 0x380], al
22a4bc movups   xmmword ptr [rsp + 0x384], xmm0
22a4c4 mov      qword ptr [rsp + 0x394], rax
22a4cc mov      dword ptr [rsp + 0x39c], eax
22a4d3 movups   xmmword ptr [rsp + 0x3a0], xmm0
22a4db mov      dword ptr [rsp + 0x3b0], eax
22a4e2 mov      word ptr [rsp + 0x3b4], ax
22a4ea mov      byte ptr [rsp + 0x3b6], al
22a4f1 movups   xmmword ptr [rsp + 0x3b8], xmm0
22a4f9 movups   xmmword ptr [rsp + 0x3c8], xmm0
22a501 mov      qword ptr [rsp + 0x3d8], rax
22a509 mov      qword ptr [rsp + 0x3e0], rax
22a511 mov      dword ptr [rsp + 0x3e8], eax
22a518 mov      byte ptr [rsp + 0x3ec], al
22a51f movups   xmmword ptr [rsp + 0x3f0], xmm0
22a527 movups   xmmword ptr [rsp + 0x400], xmm1
22a52f mov      dword ptr [rsp + 0x410], eax
22a536 movups   xmmword ptr [rsp + 0x418], xmm0
22a53e movups   xmmword ptr [rsp + 0x428], xmm0
22a546 movups   xmmword ptr [rsp + 0x438], xmm0
22a54e movups   xmmword ptr [rsp + 0x448], xmm0
22a556 movups   xmmword ptr [rsp + 0x458], xmm0
22a55e mov      qword ptr [rsp + 0x468], rax
22a566 movups   xmmword ptr [rsp + 0x470], xmm0
22a56e movups   xmmword ptr [rsp + 0x480], xmm0
22a576 movups   xmmword ptr [rsp + 0x490], xmm1
22a57e mov      dword ptr [rsp + 0x4a0], eax
22a585 mov      qword ptr [rsp + 0x4a4], rax
22a58d mov      word ptr [rsp + 0x4ac], ax
22a595 mov      byte ptr [rsp + 0x4ae], al
22a59c movups   xmmword ptr [rsp + 0x4b0], xmm0
22a5a4 movups   xmmword ptr [rsp + 0x4c0], xmm1
22a5ac movups   xmmword ptr [rsp + 0x4d0], xmm0
22a5b4 mov      qword ptr [rsp + 0x4e0], rax
22a5bc movups   xmmword ptr [rsp + 0x4e8], xmm1
22a5c4 mov      word ptr [rsp + 0x4f8], ax
22a5cc mov      qword ptr [rsp + 0x500], rax
22a5d4 mov      qword ptr [rsp + 0x508], rax
22a5dc mov      dword ptr [rsp + 0x510], eax
22a5e3 mov      qword ptr [rsp + 0x514], rax
22a5eb mov      dword ptr [rsp + 0x51c], eax
22a5f2 mov      word ptr [rsp + 0x520], ax
22a5fa mov      dword ptr [rsp + 0x524], eax
22a601 xor      edx, edx
22a603 mov      r8d, 0x100
22a609 lea      rcx, [rsp + 0x528]
22a611 call     0x1403a6720
22a616 xorps    xmm0, xmm0
22a619 xor      eax, eax
22a61b movups   xmmword ptr [rsp + 0x628], xmm0
22a623 mov      dword ptr [rsp + 0x638], eax
22a62a mov      word ptr [rsp + 0x63c], ax
22a632 mov      dword ptr [rsp + 0x63e], eax
22a639 movups   xmmword ptr [rsp + 0x648], xmm0
22a641 mov      dword ptr [rsp + 0x658], eax
22a648 mov      byte ptr [rsp + 0x65c], al
22a64f xor      edx, edx
22a651 mov      r8d, 0x1f0
22a657 lea      rcx, [rsp + 0x65e]
22a65f call     0x1403a6720
22a664 xor      eax, eax
22a666 mov      qword ptr [rsp + 0x84e], rax
22a66e mov      word ptr [rsp + 0x856], ax
22a676 xor      edx, edx
22a678 mov      r8d, 0x1f0
22a67e lea      rcx, [rsp + 0x858]
22a686 call     0x1403a6720
22a68b xor      eax, eax
22a68d mov      qword ptr [rsp + 0xa48], rax
22a695 mov      dword ptr [rsp + 0xa50], eax
22a69c mov      byte ptr [rsp + 0xa54], al
22a6a3 xor      edx, edx
22a6a5 mov      r8d, 0x200
22a6ab lea      rcx, [rsp + 0xa58]
22a6b3 call     0x1403a6720
22a6b8 xorps    xmm0, xmm0
22a6bb movups   xmmword ptr [rsp + 0xc58], xmm0
22a6c3 movups   xmmword ptr [rsp + 0xc68], xmm0
22a6cb xor      eax, eax
22a6cd mov      dword ptr [rsp + 0xc78], eax
22a6d4 mov      byte ptr [rsp + 0xc7c], al
22a6db mov      qword ptr [rsp + 0xc80], rax
22a6e3 mov      qword ptr [rsp + 0xc88], rax
22a6eb mov      word ptr [rsp + 0xc90], ax
22a6f3 mov      qword ptr [rsp + 0xc92], rax
22a6fb mov      word ptr [rsp + 0xc9a], ax
22a703 movups   xmmword ptr [rsp + 0xca0], xmm0
22a70b xorps    xmm1, xmm1
22a70e movups   xmmword ptr [rsp + 0xcb8], xmm1
22a716 mov      dword ptr [rsp + 0xcc8], eax
22a71d mov      word ptr [rsp + 0xccc], ax
22a725 mov      byte ptr [rsp + 0xcce], al
22a72c mov      qword ptr [rsp + 0xccf], rax
22a734 mov      word ptr [rsp + 0xcd7], ax
22a73c mov      byte ptr [rsp + 0xcd9], al
22a743 movups   xmmword ptr [rsp + 0xce0], xmm0
22a74b mov      dword ptr [rsp + 0xcf0], eax
22a752 mov      byte ptr [rsp + 0xcf4], al
22a759 xor      edx, edx
22a75b mov      r8d, 0x200
22a761 lea      rcx, [rsp + 0xcf5]
22a769 call     0x1403a6720
22a76e xor      edx, edx
22a770 mov      r8d, 0x400
22a776 lea      rcx, [rsp + 0xef5]
22a77e call     0x1403a6720
22a783 xorps    xmm0, xmm0
22a786 xor      eax, eax
22a788 movups   xmmword ptr [rsp + 0x12f5], xmm0
22a790 mov      word ptr [rsp + 0x1305], ax
22a798 mov      dword ptr [rsp + 0x1308], eax
22a79f movups   xmmword ptr [rsp + 0x130c], xmm0
22a7a7 mov      word ptr [rsp + 0x131c], ax
22a7af xorps    xmm1, xmm1
22a7b2 movups   xmmword ptr [rsp + 0x1320], xmm1
22a7ba mov      qword ptr [rsp + 0x1330], rax
22a7c2 mov      dword ptr [rsp + 0x1338], eax
22a7c9 mov      qword ptr [rsp + 0x133c], rax
22a7d1 mov      word ptr [rsp + 0x1344], ax
22a7d9 movups   xmmword ptr [rsp + 0x1348], xmm0
22a7e1 movups   xmmword ptr [rsp + 0x1358], xmm1
22a7e9 mov      dword ptr [rsp + 0x1368], eax
22a7f0 mov      word ptr [rsp + 0x136c], ax
22a7f8 mov      byte ptr [rsp + 0x136e], al
22a7ff movups   xmmword ptr [rsp + 0x1370], xmm0
22a807 mov      rax, qword ptr [rsp + 0xe8]
22a80f mov      qword ptr [rsp + 0x360], rax
22a817 mov      dword ptr [rsp + 0x368], 0xa76
22a822 mov      byte ptr [rsp + 0x63d], sil
22a82a mov      qword ptr [rsp + 0xca0], r14
22a832 mov      dword ptr [rsp + 0xca8], 0xffffffff
22a83d xor      eax, eax
22a83f mov      qword ptr [rsp + 0xcb0], rax
22a847 mov      qword ptr [rsp + 0xce0], r12
22a84f mov      dword ptr [rsp + 0xce8], 0x1a
22a85a mov      dword ptr [rsp + 0xc80], eax
22a861 mov      dword ptr [rsp + 0xcec], 0xffffffff
22a86c lea      rax, [rsp + 0x17b0]
22a874 mov      qword ptr [rsp + 0x310], rax
22a87c lea      rax, [rsp + 0x27b0]
22a884 mov      qword ptr [rsp + 0x318], rax
22a88c mov      rcx, rbx
22a88f xor      rcx, 0x4354524c
22a896 call     0x140002040
22a89b mov      qword ptr [rsp + 0x260], rax
22a8a3 mov      rcx, rbx
22a8a6 xor      rcx, 0x43545253
22a8ad call     0x140002040
22a8b2 or       rax, 1
22a8b6 mov      qword ptr [rsp + 0x268], rax
22a8be mov      rcx, rbx
22a8c1 xor      rcx, 0x43545254
22a8c8 call     0x140002040
22a8cd or       rax, 1
22a8d1 mov      qword ptr [rsp + 0x270], rax
22a8d9 mov      rcx, rbx
22a8dc xor      rcx, 0x4354464d
22a8e3 call     0x140002040
22a8e8 and      al, 1
22a8ea mov      byte ptr [rsp + 0x278], al
22a8f1 lea      rdi, [rsp + 0x2f0]
22a8f9 mov      rsi, r15
22a8fc lea      r14, [rsp + 0x280]
22a904 mov      r12d, 0xe
22a90a xor      r13d, r13d
22a90d nop      dword ptr [rax]
22a910 mov      qword ptr [r14], r13
22a913 mov      rcx, rsi
22a916 call     0x140002040
22a91b mov      byte ptr [rdi], al
22a91d inc      rsi
22a920 lea      r14, [r14 + 8]
22a924 lea      rdi, [rdi + 1]
22a928 sub      r12, 1
22a92c jne      0x14022a910
22a92e mov      edx, 0x38a89
22a933 lea      rcx, [rsp + 0x190]
22a93b call     0x1401edff0
22a940 xor      edx, edx
22a942 lea      rcx, [rsp + 0x190]
22a94a call     0x1401ee140
22a94f xor      edx, edx
22a951 lea      rcx, [rsp + 0x190]
22a959 call     0x1401ee290
22a95e xor      edx, edx
22a960 lea      rcx, [rsp + 0x190]
22a968 call     0x1401ee3e0
22a96d xor      edx, edx
22a96f lea      rcx, [rsp + 0x190]
22a977 call     0x1401ee510
22a97c xor      r8d, r8d
22a97f lea      edx, [r12 + 4]
22a984 lea      rcx, [rsp + 0x190]
22a98c call     0x1401edea0
22a991 xor      r8d, r8d
22a994 lea      edx, [r12 + 5]
22a999 lea      rcx, [rsp + 0x190]
22a9a1 call     0x1401edea0
22a9a6 xor      r8d, r8d
22a9a9 lea      edx, [r12 + 6]
22a9ae lea      rcx, [rsp + 0x190]
22a9b6 call     0x1401edea0
22a9bb xor      r8d, r8d
22a9be lea      edx, [r12 + 7]
22a9c3 lea      rcx, [rsp + 0x190]
22a9cb call     0x1401edea0
22a9d0 xor      r8d, r8d
22a9d3 lea      edx, [r12 + 8]
22a9d8 lea      rcx, [rsp + 0x190]
22a9e0 call     0x1401edea0
22a9e5 xor      r8d, r8d
22a9e8 lea      edx, [r12 + 9]
22a9ed lea      rcx, [rsp + 0x190]
22a9f5 call     0x1401edea0
22a9fa xor      r8d, r8d
22a9fd lea      edx, [r12 + 0xb]
22aa02 lea      rcx, [rsp + 0x190]
22aa0a call     0x1401edea0
22aa0f xor      r8d, r8d
22aa12 lea      edx, [r12 + 0xc]
22aa17 lea      rcx, [rsp + 0x190]
22aa1f call     0x1401edea0
22aa24 xor      r8d, r8d
22aa27 lea      edx, [r12 + 0xd]
22aa2c lea      rcx, [rsp + 0x190]
22aa34 call     0x1401edea0
22aa39 mov      rcx, rbx
22aa3c xor      rcx, 0x54524559
22aa43 call     0x140002040
22aa48 or       rax, 1
22aa4c mov      qword ptr [rsp + 0x1a0], rax
22aa54 mov      qword ptr [rsp + 0x300], r12
22aa5c mov      rdi, qword ptr [rsp + 0xb0]
22aa64 mov      qword ptr [rsp + 0x4d0], rdi
22aa6c movabs   rax, 0x3f7bc48565f9022a
22aa76 mov      qword ptr [rsp + 0x4d8], rax
22aa7e mov      qword ptr [rsp + 0x4e0], r15
22aa86 mov      dword ptr [rsp + 0x1370], r12d
22aa8e mov      rsi, qword ptr [rsp + 0xd8]
22aa96 mov      qword ptr [rsp + 0x1378], rsi
22aa9e mov      rcx, rsi
22aaa1 xor      rcx, rdi
22aaa4 call     0x140002040
22aaa9 mov      qword ptr [rsp + 0x1b0], rax
22aab1 mov      qword ptr [rsp + 0x1b8], r15
22aab9 mov      edx, 0x28
22aabe mov      rax, qword ptr gs:[0x58]
22aac7 mov      rcx, qword ptr [rax]
22aaca lea      rax, [rsp + 0x190]
22aad2 mov      qword ptr [rdx + rcx], rax
22aad6 movabs   rax, 0xd46023193b81faaa
22aae0 cmp      rsi, rax
22aae3 mov      r13, qword ptr [rsp + 0xc8]
22aaeb je       0x14022aaff
22aaed mov      edx, 0x41545453
22aaf2 lea      rcx, [rsp + 0x190]
22aafa call     0x1401ed830
22aaff mov      rcx, qword ptr [rsp + 0xb8]
22ab07 xor      rcx, r15
22ab0a xor      rcx, rdi
22ab0d lea      rax, [rip - 0x2256c4]
22ab14 xor      rcx, rax
22ab17 xor      rcx, 0x41534531
22ab1e call     0x140002040
22ab23 or       rax, 1
22ab27 mov      qword ptr [rsp + 0x3f0], rax
22ab2f mov      qword ptr [rsp + 0x3f8], r12
22ab37 mov      dword ptr [rsp + 0xc84], 0x20
22ab42 mov      dword ptr [rsp + 0xc80], r12d
22ab4a mov      rax, qword ptr [rsp + 0xf0]
22ab52 mov      qword ptr [rsp + 0x1348], rax
22ab5a mov      rax, qword ptr [rsp + 0xc0]
22ab62 mov      qword ptr [rsp + 0x1350], rax
22ab6a mov      qword ptr [rsp + 0x1d8], r13
22ab72 mov      rcx, rbx
22ab75 xor      rcx, 0x534d4353
22ab7c call     0x140002040
22ab81 mov      qword ptr [rsp + 0x1e0], rax
22ab89 mov      qword ptr [rsp + 0x1e8], r12
22ab91 mov      rdx, qword ptr [rsp + 0xe0]
22ab99 lea      rcx, [rsp + 0x208]
22aba1 call     0x140398250
22aba6 mov      rcx, rbx
22aba9 xor      rcx, 0x4c495645
22abb0 call     0x140002040
22abb5 mov      qword ptr [rsp + 0x3b8], rax
22abbd mov      dword ptr [rsp + 0x384], r12d
22abc5 xor      rax, 0x464f524d
22abcb mov      rcx, rax
22abce call     0x140002040
22abd3 and      al, 1
22abd5 mov      byte ptr [rsp + 0x388], al
22abdc mov      rcx, qword ptr [rsp + 0x3b8]
22abe4 call     0x140002040
22abe9 mov      qword ptr [rsp + 0x3c0], rax
22abf1 mov      rcx, qword ptr [rsp + 0x3b8]
22abf9 xor      rcx, 0x4c495645
22ac00 call     0x140002040
22ac05 or       rax, 1
22ac09 mov      qword ptr [rsp + 0x3c8], rax
22ac11 mov      rcx, qword ptr [rsp + 0x3b8]
22ac19 xor      rcx, 0x544b5231
22ac20 call     0x140002040
22ac25 or       rax, 1
22ac29 mov      qword ptr [rsp + 0x330], rax
22ac31 mov      rcx, qword ptr [rsp + 0x3b8]
22ac39 xor      rcx, 0x53544b4b
22ac40 call     0x140002040
22ac45 mov      qword ptr [rsp + 0x3d0], rax
22ac4d mov      rcx, qword ptr [rsp + 0x3b8]
22ac55 xor      rcx, 0x53544b53
22ac5c call     0x140002040
22ac61 or       rax, 1
22ac65 mov      qword ptr [rsp + 0x3d8], rax
22ac6d mov      rcx, qword ptr [rsp + 0x3b8]
22ac75 xor      rcx, 0x544b5232
22ac7c call     0x140002040
22ac81 or       rax, 1
22ac85 mov      qword ptr [rsp + 0x338], rax
22ac8d mov      rcx, rbx
22ac90 xor      rcx, 0x52415443
22ac97 call     0x140002040
22ac9c mov      qword ptr [rsp + 0x340], rax
22aca4 mov      qword ptr [rsp + 0x348], r12
22acac mov      rcx, rbx
22acaf xor      rcx, 0x43465345
22acb6 call     0x140002040
22acbb mov      rcx, rax
22acbe call     0x1401ef0e0
22acc3 mov      rcx, rbx
22acc6 xor      rcx, 0x524f5021
22accd call     0x140002040
22acd2 or       rax, 1
22acd6 mov      qword ptr [rsp + 0xc58], rax
22acde mov      dword ptr [rsp + 0xc60], r12d
22ace6 mov      qword ptr [rsp + 0xc68], r12
22acee mov      qword ptr [rsp + 0xc70], r12
22acf6 mov      rcx, rbx
22acf9 xor      rcx, 0x42524b59
22ad00 call     0x140002040
22ad05 or       eax, 1
22ad08 mov      dword ptr [rsp + 0x514], eax
22ad0f mov      qword ptr [rsp + 0x518], r12
22ad17 mov      ecx, dword ptr [rsp + 0xc58]
22ad1e and      ecx, 7
22ad21 lea      rdx, [rip - 0x22ad28]
22ad28 mov      rax, qword ptr [rdx + rcx*8 + 0x3df690]
22ad30 mov      qword ptr [rsp + 0x418], rax
22ad38 lea      eax, [rcx + 1]
22ad3b and      eax, 7
22ad3e mov      rax, qword ptr [rdx + rax*8 + 0x3df690]
22ad46 mov      qword ptr [rsp + 0x420], rax
22ad4e lea      eax, [rcx + 2]
22ad51 and      eax, 7
22ad54 mov      rax, qword ptr [rdx + rax*8 + 0x3df690]
22ad5c mov      qword ptr [rsp + 0x428], rax
22ad64 lea      eax, [rcx + 3]
22ad67 and      eax, 7
22ad6a mov      rax, qword ptr [rdx + rax*8 + 0x3df690]
22ad72 mov      qword ptr [rsp + 0x430], rax
22ad7a lea      eax, [rcx - 4]
22ad7d and      eax, 7
22ad80 mov      rax, qword ptr [rdx + rax*8 + 0x3df690]
22ad88 mov      qword ptr [rsp + 0x438], rax
22ad90 lea      eax, [rcx - 3]
22ad93 and      eax, 7
22ad96 mov      rax, qword ptr [rdx + rax*8 + 0x3df690]
22ad9e mov      qword ptr [rsp + 0x440], rax
22ada6 lea      eax, [rcx - 2]
22ada9 and      eax, 7
22adac mov      rax, qword ptr [rdx + rax*8 + 0x3df690]
22adb4 mov      qword ptr [rsp + 0x448], rax
22adbc lea      eax, [rcx - 1]
22adbf and      eax, 7
22adc2 mov      rax, qword ptr [rdx + rax*8 + 0x3df690]
22adca mov      qword ptr [rsp + 0x450], rax
22add2 lea      rax, [rsp + 0x13d0]
22adda mov      qword ptr [rsp + 0x648], rax
22ade2 mov      dword ptr [rsp + 0x4bc], 0x3e
22aded mov      rcx, rbx
22adf0 xor      rcx, 0x4a495421
22adf7 call     0x140002040
22adfc or       rax, 1
22ae00 mov      qword ptr [rsp + 0x4b0], rax
22ae08 mov      dword ptr [rsp + 0x4b8], r12d
22ae10 mov      qword ptr [rsp + 0x1330], r12
22ae18 mov      dword ptr [rsp + 0x1338], r12d
22ae20 mov      dword ptr [rsp + 0x524], r12d
22ae28 mov      rcx, rbx
22ae2b xor      rcx, 0x4d44524f
22ae32 call     0x140002040
22ae37 mov      dword ptr [rsp + 0x1308], eax
22ae3e mov      edi, 0x4d44534c
22ae43 lea      rsi, [rsp + 0x470]
22ae4b mov      r14d, 4
22ae51 mov      r13, qword ptr [rsp + 0xb0]
22ae59 nop      dword ptr [rax]
22ae60 mov      rcx, rdi
22ae63 xor      rcx, r15
22ae66 xor      rcx, r13
22ae69 call     0x140002040
22ae6e mov      qword ptr [rsi], rax
22ae71 inc      rdi
22ae74 lea      rsi, [rsi + 8]
22ae78 sub      r14, 1
22ae7c jne      0x14022ae60
22ae7e lea      rcx, [rsp + 0x190]
22ae86 call     0x1402296e0
22ae8b lea      rcx, [rsp + 0x190]
22ae93 call     0x1402297e0
22ae98 mov      qword ptr [rsp + 0x38c], 3
22aea4 mov      qword ptr [rsp + 0x398], r12
22aeac mov      rax, qword ptr [rsp + 0x3b8]
22aeb4 mov      qword ptr [rsp + 0x350], rax
22aebc lea      rdx, [rsp + 0x190]
22aec4 lea      rcx, [rsp + 0xf8]
22aecc call     0x140048940
22aed1 lea      rdx, [rsp + 0x190]
22aed9 lea      rcx, [rsp + 0x120]
22aee1 call     0x140048940
22aee6 mov      edi, r12d
22aee9 mov      rsi, r12
22aeec mov      r14, qword ptr [rsp + 0xb8]
22aef4 cmp      edi, 0x100
22aefa jge      0x14022af1a
22aefc mov      r8, qword ptr [r14 + rsi*8]
22af00 mov      edx, edi
22af02 lea      rcx, [rsp + 0x120]
22af0a call     0x140232e10
22af0f inc      edi
22af11 inc      rsi
22af14 cmp      rsi, 0x18
22af18 jl       0x14022aef4
22af1a mov      rdx, r13
22af1d lea      rcx, [rsp + 0xd0]
22af25 call     0x140048940
22af2a mov      ecx, ebx
22af2c and      ecx, 7
22af2f mov      edi, 8
22af34 test     ecx, ecx
22af36 je       0x14022af7e
22af38 sub      ecx, 1
22af3b je       0x14022af5d
22af3d cmp      ecx, 1
22af40 je       0x14022af47
22af42 mov      ecx, r12d
22af45 jmp      0x14022af92
22af47 imul     rcx, rbx, 0xbf58
22af4e inc      rcx
22af51 call     0x140002040
22af56 mov      ecx, 3
22af5b jmp      0x14022af8f
22af5d xor      edx, edx
22af5f lea      rcx, [rsp + 0xd0]
22af67 call     0x140398100
22af6c xor      rax, rbx
22af6f mov      rcx, rax
22af72 call     0x140002040
22af77 mov      ecx, 2
22af7c jmp      0x14022af8f
22af7e lea      rcx, [rbx + 0x9e37]
22af85 call     0x140002040
22af8a mov      ecx, 1
22af8f mov      rbx, rax
22af92 sub      rdi, 1
22af96 jne      0x14022af34
22af98 xor      r8d, r8d
22af9b mov      rdx, rbx
22af9e lea      rcx, [rsp + 0xd0]
22afa6 call     0x140398240
22afab mov      ecx, dword ptr [rsp + 0xc84]
22afb2 test     ecx, ecx
22afb4 je       0x14022b013
22afb6 lea      eax, [rcx + 0xa75]
22afbc xor      edx, edx
22afbe div      ecx
22afc0 mov      edi, eax
22afc2 mov      ebx, r12d
22afc5 test     eax, eax
22afc7 je       0x14022afe5
22afc9 nop      dword ptr [rax]
22afd0 mov      edx, ebx
22afd2 lea      rcx, [rsp + 0x190]
22afda call     0x1401f0290
22afdf inc      ebx
22afe1 cmp      ebx, edi
22afe3 jb       0x14022afd0
22afe5 mov      dword ptr [rsp + 0xc80], r12d
22afed xor      edx, edx
22afef lea      rcx, [rsp + 0x190]
22aff7 call     0x1401f0290
22affc cmp      edi, 1
22afff jbe      0x14022b013
22b001 mov      edx, 1
22b006 lea      rcx, [rsp + 0x190]
22b00e call     0x1401f0290
22b013 mov      ebx, r12d
22b016 mov      rdi, r12
22b019 nop      dword ptr [rax]
22b020 mov      rax, qword ptr [rsp + 0xce0]
22b028 mov      byte ptr [rdi + rax], r12b
22b02c mov      edx, ebx
22b02e lea      rcx, [rsp + 0x190]
22b036 call     0x1401f0410
22b03b inc      ebx
22b03d lea      rdi, [rdi + 1]
22b041 cmp      ebx, 0x67
22b044 jb       0x14022b020
22b046 xor      edx, edx
22b048 lea      r8d, [rdx + 0x67]
22b04c lea      rcx, [rsp + 0x190]
22b054 call     0x1401f05c0
22b059 mov      rdx, r13
22b05c mov      rcx, qword ptr [rsp + 0x1b0]
22b064 call     0x1400023e0
22b069 mov      dword ptr [rsp + 0xc0], eax
22b070 mov      dword ptr [rsp + 0xa4], r12d
22b078 mov      r15d, 0x27f17
22b07e nop      
22b080 lea      rcx, [rsp + 0x190]
22b088 call     0x1401ee450
22b08d test     eax, eax
22b08f je       0x14022b1c3
22b095 mov      edx, 6
22b09a lea      rcx, [rsp + 0x190]
22b0a2 call     0x1401eddd0
22b0a7 test     al, 1
22b0a9 jne      0x14022b1c3
22b0af xor      edx, edx
22b0b1 lea      rcx, [rsp + 0xd0]
22b0b9 call     0x140398100
22b0be xor      qword ptr [rsp + 0x4d8], rax
22b0c6 lea      rcx, [rsp + 0x190]
22b0ce call     0x140229750
22b0d3 mov      rbx, r12
22b0d6 cmp      r12d, 0x100
22b0dd jge      0x14022b0ff
22b0df mov      edx, r12d
22b0e2 lea      rcx, [rsp + 0xf8]
22b0ea call     0x140232e00
22b0ef mov      qword ptr [r14 + rbx*8], rax
22b0f3 inc      r12d
22b0f6 inc      rbx
22b0f9 cmp      rbx, 0x18
22b0fd jl       0x14022b0d6
22b0ff xor      edx, edx
22b101 mov      r8d, 0xa76
22b107 mov      rcx, qword ptr [rsp + 0xe8]
22b10f call     0x1403a6720
22b114 mov      rax, qword ptr [rsp + 0x4d8]
22b11c and      eax, 0x28b
22b121 lea      rcx, [rip - 0x22b128]
22b128 movzx    eax, byte ptr [rax + rcx + 0x41dba0]
22b130 lea      rcx, [rsp + 0x190]
22b138 call     0x1401ee310
22b13d mov      rbx, rax
22b140 lea      rcx, [rsp + 0x190]
22b148 call     0x1401edd60
22b14d nop      
22b14e lea      rcx, [rsp + 0x130]
22b156 call     0x140398110
22b15b nop      
22b15c lea      rcx, [rsp + 0x148]
22b164 call     0x140398110
22b169 nop      
22b16a lea      rcx, [rsp + 0x160]
22b172 call     0x140398110
22b177 nop      
22b178 lea      rcx, [rsp + 0x178]
22b180 call     0x140398110
22b185 nop      
22b186 mov      rcx, qword ptr [rsp + 0xe0]
22b18e call     0x140002ed0
22b193 mov      rax, rbx
22b196 mov      rcx, qword ptr [rsp + 0x47b0]
22b19e xor      rcx, rsp
22b1a1 call     0x1403a3dc0
22b1a6 lea      r11, [rsp + 0x47c0]
22b1ae mov      rbx, qword ptr [r11 + 0x38]
22b1b2 mov      rsi, qword ptr [r11 + 0x48]
22b1b6 mov      rsp, r11
22b1b9 pop      r15
22b1bb pop      r14
22b1bd pop      r13
22b1bf pop      r12
22b1c1 pop      rdi
22b1c2 ret      
22b1c3 lea      rcx, [rsp + 0x190]
22b1cb call     0x1401f0c50
22b1d0 mov      edx, 6
22b1d5 lea      rcx, [rsp + 0x190]
22b1dd call     0x1401eddd0
22b1e2 mov      rsi, rax
22b1e5 not      rsi
22b1e8 mov      rdx, qword ptr [rsp + 0x4d8]
22b1f0 mov      rcx, qword ptr [rsp + 0x1b0]
22b1f8 call     0x140002430
22b1fd mov      rdi, r12
22b200 test     eax, eax
22b202 setne    dil
22b206 mov      rcx, qword ptr [rsp + 0x4d8]
22b20e call     0x1400023d0
22b213 mov      rbx, r12
22b216 test     eax, eax
22b218 setne    bl
22b21b lea      rcx, [rsp + 0x190]
22b223 call     0x1401edf30
22b228 or       ebx, edi
22b22a and      ebx, esi
22b22c neg      ebx
22b22e mov      edx, eax
22b230 mov      esi, 0x12f283
22b235 xor      edx, esi
22b237 and      edx, ebx
22b239 xor      edx, eax
22b23b lea      rcx, [rsp + 0x190]
22b243 call     0x1401edff0
22b248 mov      rdi, qword ptr [rsp + 0xf0]
22b250 cmp      qword ptr [rsp + 0x1348], rdi
22b258 je       0x14022b26c
22b25a mov      edx, 0x43414e59
22b25f lea      rcx, [rsp + 0x190]
22b267 call     0x1401ed830
22b26c lea      rcx, [rsp + 0x190]
22b274 call     0x1401edf30
22b279 cmp      eax, 0x1ee92d
22b27e jg       0x14022f22c
22b284 je       0x14022f083
22b28a cmp      eax, 0x104fa4
22b28f jg       0x14022ce4a
22b295 je       0x14022cc60
22b29b cmp      eax, 0x8e646
22b2a0 jg       0x14022be45
22b2a6 je       0x14022bcf2
22b2ac cmp      eax, 0x41a84
22b2b1 jg       0x14022b8a9
22b2b7 je       0x14022b71a
22b2bd cmp      eax, 0x825f
22b2c2 je       0x14022b6c5
22b2c8 cmp      eax, 0x15148
22b2cd je       0x14022b4da
22b2d3 cmp      eax, r15d
22b2d6 je       0x14022b4ac
22b2dc cmp      eax, 0x38a89
22b2e1 je       0x14022b481
22b2e7 cmp      eax, 0x3bcca
22b2ec jne      0x140232642
22b2f2 mov      qword ptr [rsp + 0x20], 0x3f5906f9
22b2fb mov      eax, 0xbec2799d
22b300 mov      qword ptr [rsp + 0x28], rax
22b305 mov      rcx, qword ptr [rsp + 0x28]
22b30a mov      rax, qword ptr [rsp + 0x20]
22b30f xor      rcx, rax
22b312 mov      qword ptr [rsp + 0x30], rcx
22b317 mov      rdx, qword ptr [rsp + 0x28]
22b31c mov      rax, qword ptr [rsp + 0x20]
22b321 and      rdx, rax
22b324 add      rdx, rdx
22b327 mov      rcx, qword ptr [rsp + 0x28]
22b32c mov      rax, qword ptr [rsp + 0x20]
22b331 xor      rcx, rax
22b334 add      rcx, rdx
22b337 mov      qword ptr [rsp + 0x30], rcx
22b33c mov      rax, qword ptr [rsp + 0x30]
22b341 mov      qword ptr [rsp + 0x48], 0x37ba0663
22b34a mov      rax, qword ptr [rsp + 0x48]
22b34f mov      qword ptr [rsp + 0x50], r12
22b354 mov      rax, qword ptr [rsp + 0x50]
22b359 mov      rcx, qword ptr [rsp + 0x4d8]
22b361 and      rax, rcx
22b364 add      rax, rax
22b367 sub      rcx, rax
22b36a mov      rax, qword ptr [rsp + 0x50]
22b36f add      rax, rcx
22b372 mov      qword ptr [rsp + 0x4d8], rax
22b37a mov      rcx, qword ptr [rsp + 0x50]
22b37f and      rcx, qword ptr [rsp + 0x4d8]
22b387 add      rcx, rcx
22b38a mov      rax, qword ptr [rsp + 0x50]
22b38f xor      rax, qword ptr [rsp + 0x4d8]
22b397 add      rax, rcx
22b39a mov      qword ptr [rsp + 0x58], rax
22b39f mov      rax, qword ptr [rsp + 0x50]
22b3a4 mov      rcx, qword ptr [rsp + 0x1b0]
22b3ac and      rax, rcx
22b3af add      rax, rax
22b3b2 sub      rcx, rax
22b3b5 mov      rax, qword ptr [rsp + 0x50]
22b3ba add      rax, rcx
22b3bd mov      qword ptr [rsp + 0x1b0], rax
22b3c5 mov      rax, qword ptr [rsp + 0x58]
22b3ca mov      rax, qword ptr [rsp + 0x4d8]
22b3d2 xor      rax, 0x2c
22b3d6 mov      qword ptr [rsp + 0x38], rax
22b3db mov      rcx, qword ptr [rsp + 0x38]
22b3e0 call     0x140002040
22b3e5 mov      qword ptr [rsp + 0x4d8], rax
22b3ed mov      rdx, qword ptr [rsp + 0x1b0]
22b3f5 xor      rdx, rax
22b3f8 mov      r8d, 0x1b3174
22b3fe lea      rcx, [rsp + 0x190]
22b406 call     0x1401f1520
22b40b mov      ebx, 0x8d3bbe69
22b410 mov      qword ptr [rsp + 0x20], rbx
22b415 mov      qword ptr [rsp + 0x28], 0x7055e3fb
22b41e mov      rcx, qword ptr [rsp + 0x28]
22b423 mov      rax, qword ptr [rsp + 0x20]
22b428 xor      rcx, rax
22b42b mov      qword ptr [rsp + 0x30], rcx
22b430 mov      rax, qword ptr [rsp + 0x30]
22b435 mov      qword ptr [rsp + 0x30], rax
22b43a mov      rax, qword ptr [rsp + 0x30]
22b43f mov      ebx, 0xdd3bd62f
22b444 mov      qword ptr [rsp + 0x60], rbx
22b449 mov      rax, qword ptr [rsp + 0x60]
22b44e mov      rcx, qword ptr [rsp + 0x60]
22b453 mov      rax, qword ptr [rsp + 0x60]
22b458 sub      rcx, rax
22b45b mov      qword ptr [rsp + 0x68], rcx
22b460 mov      rcx, qword ptr [rsp + 0x68]
22b465 and      ecx, 0xe0d52
22b46b add      rcx, rcx
22b46e mov      rax, qword ptr [rsp + 0x68]
22b473 xor      rax, 0xe0d52
22b479 add      rax, rcx
22b47c jmp      0x1402319ec
22b481 lea      rcx, [rsp + 0x190]
22b489 cmp      dword ptr [rsp + 0xc0], 0
22b491 je       0x14022b49d
22b493 mov      edx, 0x2c1549
22b498 jmp      0x140232ce8
22b49d mov      edx, 0x3b6230
22b4a2 call     0x1401f0db0
22b4a7 jmp      0x140232daa
22b4ac cmp      dword ptr [rsp + 0xa4], 0
22b4b4 jne      0x14022b4c8
22b4b6 mov      edx, 0x4154544c
22b4bb lea      rcx, [rsp + 0x190]
22b4c3 call     0x1401ed830
22b4c8 lea      rcx, [rsp + 0x190]
22b4d0 call     0x140229c70
22b4d5 jmp      0x140232daa
22b4da movzx    eax, byte ptr [rsp + 0x4d8]
22b4e2 lea      ecx, [rax + 0xff]
22b4e8 mov      edx, eax
22b4ea movzx    eax, cl
22b4ed imul     eax, edx
22b4f0 test     al, 1
22b4f2 je       0x14022b543
22b4f4 mov      eax, 0xc182d363
22b4f9 mov      qword ptr [rsp + 0x20], rax
22b4fe mov      qword ptr [rsp + 0x28], 0x7dc18dfd
22b507 mov      rcx, qword ptr [rsp + 0x28]
22b50c mov      rax, qword ptr [rsp + 0x20]
22b511 xor      rcx, rax
22b514 mov      qword ptr [rsp + 0x30], rcx
22b519 mov      rdx, qword ptr [rsp + 0x28]
22b51e mov      rax, qword ptr [rsp + 0x20]
22b523 and      rdx, rax
22b526 add      rdx, rdx
22b529 mov      rcx, qword ptr [rsp + 0x28]
22b52e mov      rax, qword ptr [rsp + 0x20]
22b533 xor      rcx, rax
22b536 add      rcx, rdx
22b539 mov      qword ptr [rsp + 0x30], rcx
22b53e mov      rax, qword ptr [rsp + 0x30]
22b543 mov      ebx, 0xc39817c3
22b548 mov      qword ptr [rsp + 0x48], rbx
22b54d mov      rax, qword ptr [rsp + 0x48]
22b552 mov      qword ptr [rsp + 0x50], r12
22b557 mov      rcx, qword ptr [rsp + 0x50]
22b55c or       rcx, qword ptr [rsp + 0x4d8]
22b564 mov      rax, qword ptr [rsp + 0x50]
22b569 and      rax, qword ptr [rsp + 0x4d8]
22b571 sub      rcx, rax
22b574 mov      qword ptr [rsp + 0x4d8], rcx
22b57c mov      rax, qword ptr [rsp + 0x50]
22b581 add      rax, qword ptr [rsp + 0x4d8]
22b589 mov      qword ptr [rsp + 0x58], rax
22b58e mov      rax, qword ptr [rsp + 0x50]
22b593 xor      qword ptr [rsp + 0x1b0], rax
22b59b mov      rcx, qword ptr [rsp + 0x50]
22b5a0 or       rcx, qword ptr [rsp + 0x1378]
22b5a8 mov      rax, qword ptr [rsp + 0x50]
22b5ad and      rax, qword ptr [rsp + 0x1378]
22b5b5 add      rax, rcx
22b5b8 mov      qword ptr [rsp + 0x1378], rax
22b5c0 mov      rax, qword ptr [rsp + 0x58]
22b5c5 mov      rax, qword ptr [rsp + 0x4d8]
22b5cd xor      rax, 0x2a
22b5d1 mov      qword ptr [rsp + 0x38], rax
22b5d6 mov      rcx, qword ptr [rsp + 0x38]
22b5db call     0x140002040
22b5e0 mov      qword ptr [rsp + 0x4d8], rax
22b5e8 mov      rdx, qword ptr [rsp + 0x1b0]
22b5f0 xor      rdx, rax
22b5f3 mov      r8d, 0x19f506
22b5f9 lea      rcx, [rsp + 0x190]
22b601 call     0x1401f1520
22b606 movzx    eax, byte ptr [rsp + 0x4d8]
22b60e lea      ecx, [rax + 0xff]
22b614 mov      edx, eax
22b616 movzx    eax, cl
22b619 imul     eax, edx
22b61c test     al, 1
22b61e je       0x14022b686
22b620 mov      eax, 0xec2986c9
22b625 mov      qword ptr [rsp + 0x20], rax
22b62a mov      eax, 0xa29593ed
22b62f mov      qword ptr [rsp + 0x28], rax
22b634 mov      rcx, qword ptr [rsp + 0x28]
22b639 mov      rax, qword ptr [rsp + 0x20]
22b63e xor      rcx, rax
22b641 mov      qword ptr [rsp + 0x30], rcx
22b646 mov      qword ptr [rsp + 0x78], r12
22b64b nop      dword ptr [rax + rax]
22b650 mov      rax, qword ptr [rsp + 0x78]
22b655 cmp      rax, 3
22b659 jae      0x14022b681
22b65b mov      rcx, qword ptr [rsp + 0x30]
22b660 mov      rax, qword ptr [rsp + 0x78]
22b665 add      rcx, rax
22b668 call     0x140002040
22b66d mov      qword ptr [rsp + 0x30], rax
22b672 mov      rax, qword ptr [rsp + 0x78]
22b677 inc      rax
22b67a mov      qword ptr [rsp + 0x78], rax
22b67f jmp      0x14022b650
22b681 mov      rax, qword ptr [rsp + 0x30]
22b686 mov      ebx, 0xf2347f45
22b68b mov      qword ptr [rsp + 0x60], rbx
22b690 mov      rax, qword ptr [rsp + 0x60]
22b695 mov      rcx, qword ptr [rsp + 0x60]
22b69a mov      rax, qword ptr [rsp + 0x60]
22b69f sub      rcx, rax
22b6a2 mov      qword ptr [rsp + 0x68], rcx
22b6a7 mov      rcx, qword ptr [rsp + 0x68]
22b6ac and      ecx, 0x18ea1c
22b6b2 add      rcx, rcx
22b6b5 mov      rax, qword ptr [rsp + 0x68]
22b6ba xor      rax, 0x18ea1c
22b6c0 jmp      0x14022e08c
22b6c5 mov      ecx, dword ptr [rsp + 0x1308]
22b6cc movabs   rbx, 0xd6e8feb86659fd93
22b6d6 imul     rcx, rbx
22b6da movzx    eax, byte ptr [rsp + 0x63d]
22b6e2 movabs   rbx, 0x9e3779b97f4a7c15
22b6ec imul     rax, rbx
22b6f0 xor      rcx, rax
22b6f3 xor      rcx, qword ptr [rsp + 0x1b8]
22b6fb call     0x140002040
22b700 shr      rax, 0x21
22b704 and      eax, 3
22b707 lea      rcx, [rip - 0x22b70e]
22b70e mov      edx, dword ptr [rcx + rax*4 + 0x3e2d90]
22b715 jmp      0x140232ce0
22b71a mov      ebx, 0xaedc3c77
22b71f mov      qword ptr [rsp + 0x20], rbx
22b724 mov      ebx, 0xdc1ce4a5
22b729 mov      qword ptr [rsp + 0x28], rbx
22b72e mov      rcx, qword ptr [rsp + 0x28]
22b733 mov      rax, qword ptr [rsp + 0x20]
22b738 xor      rcx, rax
22b73b mov      qword ptr [rsp + 0x30], rcx
22b740 mov      rcx, qword ptr [rsp + 0x30]
22b745 and      ecx, 1
22b748 mov      rax, qword ptr [rsp + 0x30]
22b74d and      eax, 1
22b750 add      rax, rcx
22b753 cmp      rax, 2
22b757 jbe      0x14022b769
22b759 mov      rax, qword ptr [rsp + 0x30]
22b75e xor      rax, 0xdead
22b764 mov      qword ptr [rsp + 0x30], rax
22b769 mov      rax, qword ptr [rsp + 0x30]
22b76e mov      ebx, 0xcc125a75
22b773 mov      qword ptr [rsp + 0x48], rbx
22b778 mov      rcx, qword ptr [rsp + 0x48]
22b77d mov      rax, qword ptr [rsp + 0x48]
22b782 sub      rcx, rax
22b785 mov      qword ptr [rsp + 0x50], rcx
22b78a mov      rax, qword ptr [rsp + 0x50]
22b78f xor      qword ptr [rsp + 0x4d8], rax
22b797 mov      rax, qword ptr [rsp + 0x50]
22b79c add      rax, qword ptr [rsp + 0x4d8]
22b7a4 mov      qword ptr [rsp + 0x58], rax
22b7a9 mov      rcx, qword ptr [rsp + 0x50]
22b7ae and      rcx, qword ptr [rsp + 0x1b0]
22b7b6 not      rcx
22b7b9 mov      rax, qword ptr [rsp + 0x50]
22b7be or       rax, qword ptr [rsp + 0x1b0]
22b7c6 and      rax, rcx
22b7c9 mov      qword ptr [rsp + 0x1b0], rax
22b7d1 mov      rax, qword ptr [rsp + 0x58]
22b7d6 mov      rax, qword ptr [rsp + 0x4d8]
22b7de xor      rax, 0xd
22b7e2 mov      qword ptr [rsp + 0x38], rax
22b7e7 mov      rcx, qword ptr [rsp + 0x38]
22b7ec call     0x140002040
22b7f1 mov      qword ptr [rsp + 0x4d8], rax
22b7f9 mov      rdx, qword ptr [rsp + 0x1b0]
22b801 xor      rdx, rax
22b804 mov      r8d, 0x808cb
22b80a lea      rcx, [rsp + 0x190]
22b812 call     0x1401f1520
22b817 mov      ebx, 0x80b8e51f
22b81c mov      qword ptr [rsp + 0x20], rbx
22b821 mov      qword ptr [rsp + 0x28], 0x2a64b5d5
22b82a mov      rcx, qword ptr [rsp + 0x28]
22b82f mov      rax, qword ptr [rsp + 0x20]
22b834 xor      rcx, rax
22b837 mov      qword ptr [rsp + 0x30], rcx
22b83c mov      rax, qword ptr [rsp + 0x30]
22b841 mov      rax, qword ptr [rsp + 0x30]
22b846 mov      ebx, 0xe86a6f4f
22b84b mov      qword ptr [rsp + 0x60], rbx
22b850 mov      rax, qword ptr [rsp + 0x60]
22b855 mov      rcx, qword ptr [rsp + 0x60]
22b85a mov      rax, qword ptr [rsp + 0x60]
22b85f sub      rcx, rax
22b862 mov      qword ptr [rsp + 0x68], rcx
22b867 mov      rcx, qword ptr [rsp + 0x68]
22b86c or       rcx, 0x359547
22b873 mov      rax, qword ptr [rsp + 0x68]
22b878 and      eax, 0x359547
22b87d add      rax, rcx
22b880 mov      qword ptr [rsp + 0x70], rax
22b885 mov      rdx, qword ptr [rsp + 0x70]
22b88a mov      rax, qword ptr [rsp + 0x68]
22b88f and      edx, eax
22b891 add      edx, edx
22b893 mov      rcx, qword ptr [rsp + 0x70]
22b898 sub      ecx, edx
22b89a mov      rax, qword ptr [rsp + 0x68]
22b89f add      eax, ecx
22b8a1 movsxd   rdx, eax
22b8a4 jmp      0x140232ce0
22b8a9 cmp      eax, 0x48cad
22b8ae je       0x14022bc25
22b8b4 cmp      eax, 0x57f52
22b8b9 je       0x14022bba5
22b8bf cmp      eax, 0x77d1d
22b8c4 je       0x14022badf
22b8ca cmp      eax, 0x85b36
22b8cf jne      0x140232642
22b8d5 lea      rcx, [rsp + 0x190]
22b8dd call     0x1401ee070
22b8e2 movzx    ecx, byte ptr [rsp + 0x63d]
22b8ea mov      eax, eax
22b8ec xor      rcx, rax
22b8ef xor      rcx, qword ptr [rsp + 0x1378]
22b8f7 call     0x140002040
22b8fc mov      qword ptr [rsp + 0x1378], rax
22b904 mov      rcx, qword ptr [rsp + 0x1b8]
22b90c xor      rcx, qword ptr [rsp + 0x1b0]
22b914 xor      rcx, rax
22b917 call     0x140002040
22b91c mov      qword ptr [rsp + 0x1b0], rax
22b924 mov      edx, 9
22b929 lea      rcx, [rsp + 0x190]
22b931 call     0x1401eddd0
22b936 mov      edx, eax
22b938 lea      rcx, [rsp + 0x190]
22b940 call     0x1401f0910
22b945 mov      edx, 8
22b94a lea      rcx, [rsp + 0x190]
22b952 call     0x1401eddd0
22b957 mov      edx, eax
22b959 lea      rcx, [rsp + 0x190]
22b961 call     0x1401f0910
22b966 lea      rcx, [rsp + 0x190]
22b96e call     0x1401ee070
22b973 cmp      eax, dword ptr [rsp + 0x368]
22b97a jae      0x14022b98b
22b97c mov      edx, eax
22b97e lea      rcx, [rsp + 0x190]
22b986 call     0x1401f0910
22b98b mov      edx, 8
22b990 lea      rcx, [rsp + 0x190]
22b998 call     0x1401eddd0
22b99d mov      r8, rax
22b9a0 mov      edx, 9
22b9a5 lea      rcx, [rsp + 0x190]
22b9ad call     0x1401edea0
22b9b2 movsxd   rax, dword ptr [rsp + 0x1370]
22b9ba xor      rax, qword ptr [rsp + 0x4d8]
22b9c2 mov      qword ptr [rsp + 0x38], rax
22b9c7 mov      rcx, qword ptr [rsp + 0x38]
22b9cc call     0x140002040
22b9d1 mov      qword ptr [rsp + 0x4d8], rax
22b9d9 mov      qword ptr [rsp + 0x38], rax
22b9de movsxd   rcx, dword ptr [rsp + 0x1370]
22b9e6 mov      rax, qword ptr [rsp + 0x38]
22b9eb xor      rcx, rax
22b9ee mov      qword ptr [rsp + 0x38], rcx
22b9f3 mov      rcx, qword ptr [rsp + 0x38]
22b9f8 call     0x140002040
22b9fd mov      qword ptr [rsp + 0x4d8], rax
22ba05 mov      qword ptr [rsp + 0x48], 0x5354749f
22ba0e mov      rcx, qword ptr [rsp + 0x48]
22ba13 mov      rax, qword ptr [rsp + 0x48]
22ba18 xor      rcx, rax
22ba1b mov      qword ptr [rsp + 0x50], rcx
22ba20 mov      rcx, qword ptr [rsp + 0x50]
22ba25 and      rcx, qword ptr [rsp + 0x4d8]
22ba2d not      rcx
22ba30 mov      rax, qword ptr [rsp + 0x50]
22ba35 or       rax, qword ptr [rsp + 0x4d8]
22ba3d and      rax, rcx
22ba40 mov      qword ptr [rsp + 0x4d8], rax
22ba48 mov      rcx, qword ptr [rsp + 0x50]
22ba4d or       rcx, qword ptr [rsp + 0x4d8]
22ba55 mov      rax, qword ptr [rsp + 0x50]
22ba5a and      rax, qword ptr [rsp + 0x4d8]
22ba62 add      rax, rcx
22ba65 mov      qword ptr [rsp + 0x58], rax
22ba6a mov      rcx, qword ptr [rsp + 0x50]
22ba6f and      rcx, qword ptr [rsp + 0x1b0]
22ba77 not      rcx
22ba7a mov      rax, qword ptr [rsp + 0x50]
22ba7f or       rax, qword ptr [rsp + 0x1b0]
22ba87 and      rax, rcx
22ba8a mov      qword ptr [rsp + 0x1b0], rax
22ba92 mov      rax, qword ptr [rsp + 0x50]
22ba97 add      qword ptr [rsp + 0x1378], rax
22ba9f mov      rax, qword ptr [rsp + 0x58]
22baa4 mov      rdx, qword ptr [rsp + 0x4d8]
22baac mov      rcx, qword ptr [rsp + 0x1b0]
22bab4 call     0x1400023e0
22bab9 test     eax, eax
22babb je       0x14022bad5
22babd movzx    eax, byte ptr [rsp + 0x4d8]
22bac5 and      al, 3
22bac7 cmp      al, 1
22bac9 jne      0x14022bad5
22bacb mov      edx, 0x3dd18f
22bad0 jmp      0x140232ce0
22bad5 mov      edx, 0x181c8c
22bada jmp      0x140232ce0
22badf mov      qword ptr [rsp + 0x20], 0x2ab14cab
22bae8 mov      eax, 0xf5e2958d
22baed mov      qword ptr [rsp + 0x28], rax
22baf2 mov      rcx, qword ptr [rsp + 0x28]
22baf7 mov      rax, qword ptr [rsp + 0x20]
22bafc xor      rcx, rax
22baff mov      qword ptr [rsp + 0x30], rcx
22bb04 mov      rdx, qword ptr [rsp + 0x28]
22bb09 mov      rax, qword ptr [rsp + 0x20]
22bb0e and      rdx, rax
22bb11 add      rdx, rdx
22bb14 mov      rcx, qword ptr [rsp + 0x28]
22bb19 mov      rax, qword ptr [rsp + 0x20]
22bb1e xor      rcx, rax
22bb21 add      rcx, rdx
22bb24 mov      qword ptr [rsp + 0x30], rcx
22bb29 mov      rax, qword ptr [rsp + 0x30]
22bb2e movzx    edx, byte ptr [rsp + 0x63d]
22bb36 xor      rdx, qword ptr [rsp + 0x4d8]
22bb3e mov      r8d, 0xa3da
22bb44 lea      rcx, [rsp + 0x190]
22bb4c call     0x1401f1520
22bb51 movdqa   xmm0, xmmword ptr [rip + 0x1c60a7]
22bb59 movdqu   xmmword ptr [rsp + 0x1388], xmm0
22bb62 movzx    eax, byte ptr [rsp + 0x63d]
22bb6a mov      rcx, qword ptr [rsp + 0x1b0]
22bb72 xor      rax, rcx
22bb75 mov      rdx, qword ptr [rsp + 0x4d8]
22bb7d xor      rax, rdx
22bb80 and      eax, 3
22bb83 mov      ebx, dword ptr [rsp + rax*4 + 0x1388]
22bb8a cmp      ebx, 0x1e7639
22bb90 cmove    ebx, r15d
22bb94 call     0x140002430
22bb99 test     eax, eax
22bb9b cmovne   ebx, esi
22bb9e mov      edx, ebx
22bba0 jmp      0x140232ce0
22bba5 call     0x1401f0160
22bbaa mov      dword ptr [rsp + 0xc8], eax
22bbb1 movsxd   rax, dword ptr [rsp + 0xc8]
22bbb9 xor      qword ptr [rsp + 0x4d8], rax
22bbc1 mov      ebx, 0xb0405eaf
22bbc6 mov      qword ptr [rsp + 0x20], rbx
22bbcb mov      qword ptr [rsp + 0x28], 0x42fd1b29
22bbd4 mov      rcx, qword ptr [rsp + 0x28]
22bbd9 mov      rax, qword ptr [rsp + 0x20]
22bbde xor      rcx, rax
22bbe1 mov      qword ptr [rsp + 0x30], rcx
22bbe6 mov      rdx, qword ptr [rsp + 0x28]
22bbeb mov      rax, qword ptr [rsp + 0x20]
22bbf0 and      rdx, rax
22bbf3 add      rdx, rdx
22bbf6 mov      rcx, qword ptr [rsp + 0x28]
22bbfb mov      rax, qword ptr [rsp + 0x20]
22bc00 xor      rcx, rax
22bc03 add      rcx, rdx
22bc06 mov      qword ptr [rsp + 0x30], rcx
22bc0b mov      rax, qword ptr [rsp + 0x30]
22bc10 mov      rdx, r15
22bc13 lea      rcx, [rsp + 0x190]
22bc1b call     0x1401f0db0
22bc20 jmp      0x140232daa
22bc25 movzx    r8d, byte ptr [rsp + 0x63d]
22bc2e lea      rcx, [rsp + 0x190]
22bc36 cmp      r8d, 0x3e
22bc3a jae      0x14022bc89
22bc3c inc      qword ptr [rsp + 0x1330]
22bc44 mov      ebx, 3
22bc49 cmp      dword ptr [rsp + 0xa4], 0
22bc51 mov      eax, 0x80000003
22bc56 cmovne   ebx, eax
22bc59 mov      edx, 2
22bc5e call     0x1401f1f50
22bc63 mov      r8d, eax
22bc66 mov      edx, 2
22bc6b lea      rcx, [rsp + 0x190]
22bc73 call     0x1402297b0
22bc78 mov      r8, rdi
22bc7b mov      edx, ebx
22bc7d lea      rcx, [rsp + 0x190]
22bc85 call     rax
22bc87 jmp      0x14022bcbb
22bc89 inc      dword ptr [rsp + 0x1338]
22bc90 xor      edx, edx
22bc92 call     0x1401ee3e0
22bc97 mov      edx, 1
22bc9c lea      rcx, [rsp + 0x190]
22bca4 call     0x1401ee510
22bca9 mov      edx, 0xfe1ab
22bcae lea      rcx, [rsp + 0x190]
22bcb6 call     0x1401edff0
22bcbb lea      rcx, [rsp + 0x190]
22bcc3 call     0x1401ee450
22bcc8 test     eax, eax
22bcca jne      0x140232daa
22bcd0 lea      rcx, [rsp + 0x190]
22bcd8 call     0x1401edf30
22bcdd cmp      eax, 0x48cad
22bce2 jne      0x140232daa
22bce8 mov      edx, 0xf6105
22bced jmp      0x140232ce0
22bcf2 mov      eax, 0x97d72601
22bcf7 mov      qword ptr [rsp + 0x48], rax
22bcfc mov      rax, qword ptr [rsp + 0x48]
22bd01 mov      qword ptr [rsp + 0x50], r12
22bd06 mov      rax, qword ptr [rsp + 0x50]
22bd0b xor      qword ptr [rsp + 0x4d8], rax
22bd13 mov      rax, qword ptr [rsp + 0x50]
22bd18 add      rax, qword ptr [rsp + 0x4d8]
22bd20 mov      qword ptr [rsp + 0x58], rax
22bd25 mov      rax, qword ptr [rsp + 0x50]
22bd2a mov      rcx, qword ptr [rsp + 0x1b0]
22bd32 and      rax, rcx
22bd35 add      rax, rax
22bd38 sub      rcx, rax
22bd3b mov      rax, qword ptr [rsp + 0x50]
22bd40 add      rax, rcx
22bd43 mov      qword ptr [rsp + 0x1b0], rax
22bd4b mov      rax, qword ptr [rsp + 0x58]
22bd50 mov      rcx, qword ptr [rsp + 0x4d8]
22bd58 xor      rcx, 0x1f
22bd5c call     0x140002040
22bd61 mov      qword ptr [rsp + 0x4d8], rax
22bd69 mov      rdx, qword ptr [rsp + 0x1b0]
22bd71 xor      rdx, rax
22bd74 mov      r8d, 0x1328a9
22bd7a lea      rcx, [rsp + 0x190]
22bd82 call     0x1401f1520
22bd87 mov      rcx, qword ptr [rsp + 0x4d8]
22bd8f mov      rax, rcx
22bd92 and      rax, 0xfffffffffffffffe
22bd96 sub      rcx, rax
22bd99 cmp      rcx, 1
22bd9d jbe      0x14022be06
22bd9f mov      eax, 0x89eb90f3
22bda4 mov      qword ptr [rsp + 0x20], rax
22bda9 mov      eax, 0xbfae3455
22bdae mov      qword ptr [rsp + 0x28], rax
22bdb3 mov      rcx, qword ptr [rsp + 0x28]
22bdb8 mov      rax, qword ptr [rsp + 0x20]
22bdbd xor      rcx, rax
22bdc0 mov      qword ptr [rsp + 0x30], rcx
22bdc5 mov      qword ptr [rsp + 0x78], r12
22bdca nop      word ptr [rax + rax]
22bdd0 mov      rax, qword ptr [rsp + 0x78]
22bdd5 cmp      rax, 2
22bdd9 jae      0x14022be01
22bddb mov      rcx, qword ptr [rsp + 0x30]
22bde0 mov      rax, qword ptr [rsp + 0x78]
22bde5 add      rcx, rax
22bde8 call     0x140002040
22bded mov      qword ptr [rsp + 0x30], rax
22bdf2 mov      rax, qword ptr [rsp + 0x78]
22bdf7 inc      rax
22bdfa mov      qword ptr [rsp + 0x78], rax
22bdff jmp      0x14022bdd0
22be01 mov      rax, qword ptr [rsp + 0x30]
22be06 mov      ebx, 0x865cf8e3
22be0b mov      qword ptr [rsp + 0x60], rbx
22be10 mov      rax, qword ptr [rsp + 0x60]
22be15 mov      rcx, qword ptr [rsp + 0x60]
22be1a mov      rax, qword ptr [rsp + 0x60]
22be1f sub      rcx, rax
22be22 mov      qword ptr [rsp + 0x68], rcx
22be27 mov      rcx, qword ptr [rsp + 0x68]
22be2c or       rcx, 0x1e0d67
22be33 mov      rax, qword ptr [rsp + 0x68]
22be38 and      eax, 0x1e0d67
22be3d add      rax, rcx
22be40 jmp      0x1402319ec
22be45 cmp      eax, 0xf5594
22be4a jg       0x14022c68f
22be50 je       0x14022c513
22be56 cmp      eax, 0x9aaf3
22be5b je       0x14022c3da
22be61 cmp      eax, 0xaf41e
22be66 je       0x14022c34b
22be6c cmp      eax, 0xaf70b
22be71 je       0x14022c1e9
22be77 cmp      eax, 0xc2abb
22be7c je       0x14022c034
22be82 cmp      eax, 0xe0d52
22be87 jne      0x140232642
22be8d mov      rcx, qword ptr [rsp + 0x1b0]
22be95 xor      rcx, qword ptr [rsp + 0x4d8]
22be9d call     0x140002040
22bea2 mov      qword ptr [rsp + 0x40], rax
22bea7 mov      rax, qword ptr [rsp + 0x40]
22beac mov      ebx, 0xb7dde529
22beb1 mov      qword ptr [rsp + 0x20], rbx
22beb6 mov      ebx, 0xee3a27f9
22bebb mov      qword ptr [rsp + 0x28], rbx
22bec0 mov      rcx, qword ptr [rsp + 0x28]
22bec5 mov      rax, qword ptr [rsp + 0x20]
22beca xor      rcx, rax
22becd mov      qword ptr [rsp + 0x30], rcx
22bed2 mov      rax, qword ptr [rsp + 0x30]
22bed7 dec      rax
22beda mov      rcx, qword ptr [rsp + 0x30]
22bedf xor      cl, al
22bee1 test     cl, 1
22bee4 jne      0x14022bef6
22bee6 mov      rax, qword ptr [rsp + 0x30]
22beeb xor      rax, 0xdead
22bef1 mov      qword ptr [rsp + 0x30], rax
22bef6 mov      rax, qword ptr [rsp + 0x30]
22befb mov      eax, 0xcb8f1e13
22bf00 mov      qword ptr [rsp + 0x48], rax
22bf05 mov      rcx, qword ptr [rsp + 0x48]
22bf0a mov      rax, qword ptr [rsp + 0x48]
22bf0f sub      rcx, rax
22bf12 mov      qword ptr [rsp + 0x50], rcx
22bf17 mov      rcx, qword ptr [rsp + 0x50]
22bf1c or       rcx, qword ptr [rsp + 0x4d8]
22bf24 mov      rax, qword ptr [rsp + 0x50]
22bf29 and      rax, qword ptr [rsp + 0x4d8]
22bf31 sub      rcx, rax
22bf34 mov      qword ptr [rsp + 0x4d8], rcx
22bf3c mov      rcx, qword ptr [rsp + 0x50]
22bf41 and      rcx, qword ptr [rsp + 0x4d8]
22bf49 add      rcx, rcx
22bf4c mov      rax, qword ptr [rsp + 0x50]
22bf51 xor      rax, qword ptr [rsp + 0x4d8]
22bf59 add      rax, rcx
22bf5c mov      qword ptr [rsp + 0x58], rax
22bf61 mov      rcx, qword ptr [rsp + 0x50]
22bf66 or       rcx, qword ptr [rsp + 0x1b0]
22bf6e mov      rax, qword ptr [rsp + 0x50]
22bf73 and      rax, qword ptr [rsp + 0x1b0]
22bf7b sub      rcx, rax
22bf7e mov      qword ptr [rsp + 0x1b0], rcx
22bf86 mov      rax, qword ptr [rsp + 0x58]
22bf8b mov      rcx, qword ptr [rsp + 0x4d8]
22bf93 xor      rcx, 0x2d
22bf97 call     0x140002040
22bf9c mov      qword ptr [rsp + 0x4d8], rax
22bfa4 mov      rdx, qword ptr [rsp + 0x1b0]
22bfac xor      rdx, rax
22bfaf mov      r8d, 0x1bcfab
22bfb5 lea      rcx, [rsp + 0x190]
22bfbd call     0x1401f1520
22bfc2 mov      qword ptr [rsp + 0x20], 0x6c1fa85
22bfcb mov      qword ptr [rsp + 0x28], 0x2b9e2283
22bfd4 mov      rcx, qword ptr [rsp + 0x28]
22bfd9 mov      rax, qword ptr [rsp + 0x20]
22bfde xor      rcx, rax
22bfe1 mov      qword ptr [rsp + 0x30], rcx
22bfe6 mov      rax, qword ptr [rsp + 0x30]
22bfeb mov      qword ptr [rsp + 0x30], rax
22bff0 mov      rax, qword ptr [rsp + 0x30]
22bff5 mov      ebx, 0xbf53b9a3
22bffa mov      qword ptr [rsp + 0x60], rbx
22bfff mov      rax, qword ptr [rsp + 0x60]
22c004 mov      rcx, qword ptr [rsp + 0x60]
22c009 mov      rax, qword ptr [rsp + 0x60]
22c00e sub      rcx, rax
22c011 mov      qword ptr [rsp + 0x68], rcx
22c016 mov      rcx, qword ptr [rsp + 0x68]
22c01b and      ecx, 0xc2abb
22c021 add      rcx, rcx
22c024 mov      rax, qword ptr [rsp + 0x68]
22c029 xor      rax, 0xc2abb
22c02f jmp      0x140232cbb
22c034 movsxd   rax, dword ptr [rsp + 0x1370]
22c03c xor      rax, qword ptr [rsp + 0x4d8]
22c044 mov      qword ptr [rsp + 0x38], rax
22c049 mov      rcx, qword ptr [rsp + 0x38]
22c04e call     0x140002040
22c053 mov      qword ptr [rsp + 0x4d8], rax
22c05b mov      eax, 0xa7f03ba7
22c060 mov      qword ptr [rsp + 0x48], rax
22c065 mov      rdx, qword ptr [rsp + 0x48]
22c06a mov      rax, qword ptr [rsp + 0x48]
22c06f xor      rdx, rax
22c072 mov      rcx, qword ptr [rsp + 0x48]
22c077 mov      rax, qword ptr [rsp + 0x48]
22c07c sub      rcx, rax
22c07f or       rcx, rdx
22c082 mov      qword ptr [rsp + 0x50], rcx
22c087 mov      rax, qword ptr [rsp + 0x50]
22c08c mov      rcx, qword ptr [rsp + 0x4d8]
22c094 and      rax, rcx
22c097 add      rax, rax
22c09a sub      rcx, rax
22c09d mov      rax, qword ptr [rsp + 0x50]
22c0a2 add      rax, rcx
22c0a5 mov      qword ptr [rsp + 0x4d8], rax
22c0ad mov      rcx, qword ptr [rsp + 0x50]
22c0b2 and      rcx, qword ptr [rsp + 0x4d8]
22c0ba add      rcx, rcx
22c0bd mov      rax, qword ptr [rsp + 0x50]
22c0c2 xor      rax, qword ptr [rsp + 0x4d8]
22c0ca add      rax, rcx
22c0cd mov      qword ptr [rsp + 0x58], rax
22c0d2 mov      rcx, qword ptr [rsp + 0x50]
22c0d7 and      rcx, qword ptr [rsp + 0x1b0]
22c0df not      rcx
22c0e2 mov      rax, qword ptr [rsp + 0x50]
22c0e7 or       rax, qword ptr [rsp + 0x1b0]
22c0ef and      rax, rcx
22c0f2 mov      qword ptr [rsp + 0x1b0], rax
22c0fa mov      rax, qword ptr [rsp + 0x50]
22c0ff add      qword ptr [rsp + 0x1378], rax
22c107 mov      rax, qword ptr [rsp + 0x58]
22c10c mov      rcx, qword ptr [rsp + 0x4d8]
22c114 xor      rcx, 0x2e
22c118 call     0x140002040
22c11d mov      qword ptr [rsp + 0x4d8], rax
22c125 mov      rdx, qword ptr [rsp + 0x1b0]
22c12d xor      rdx, rax
22c130 mov      r8d, 0x1c6de2
22c136 lea      rcx, [rsp + 0x190]
22c13e call     0x1401f1520
22c143 movzx    eax, byte ptr [rsp + 0x4d8]
22c14b lea      ecx, [rax + 0xff]
22c151 xor      cl, al
22c153 test     cl, 1
22c156 jne      0x14022c1b8
22c158 mov      qword ptr [rsp + 0x20], 0x680e2a03
22c161 mov      eax, 0xffd5c4eb
22c166 mov      qword ptr [rsp + 0x28], rax
22c16b mov      rcx, qword ptr [rsp + 0x28]
22c170 mov      rax, qword ptr [rsp + 0x20]
22c175 xor      rcx, rax
22c178 mov      qword ptr [rsp + 0x30], rcx
22c17d mov      qword ptr [rsp + 0x78], r12
22c182 mov      rax, qword ptr [rsp + 0x78]
22c187 cmp      rax, 2
22c18b jae      0x14022c1b3
22c18d mov      rcx, qword ptr [rsp + 0x30]
22c192 mov      rax, qword ptr [rsp + 0x78]
22c197 add      rcx, rax
22c19a call     0x140002040
22c19f mov      qword ptr [rsp + 0x30], rax
22c1a4 mov      rax, qword ptr [rsp + 0x78]
22c1a9 inc      rax
22c1ac mov      qword ptr [rsp + 0x78], rax
22c1b1 jmp      0x14022c182
22c1b3 mov      rax, qword ptr [rsp + 0x30]
22c1b8 mov      ebx, 0xcfd476e3
22c1bd mov      qword ptr [rsp + 0x60], rbx
22c1c2 mov      rax, qword ptr [rsp + 0x60]
22c1c7 mov      rcx, qword ptr [rsp + 0x60]
22c1cc mov      rax, qword ptr [rsp + 0x60]
22c1d1 sub      rcx, rax
22c1d4 mov      qword ptr [rsp + 0x68], rcx
22c1d9 mov      rax, qword ptr [rsp + 0x68]
22c1de add      rax, 0x2fd841
22c1e4 jmp      0x1402319ec
22c1e9 mov      ebx, 0xe90ad1e1
22c1ee mov      qword ptr [rsp + 0x20], rbx
22c1f3 mov      qword ptr [rsp + 0x28], 0x2eadd4a7
22c1fc mov      rcx, qword ptr [rsp + 0x28]
22c201 mov      rax, qword ptr [rsp + 0x20]
22c206 xor      rcx, rax
22c209 mov      qword ptr [rsp + 0x30], rcx
22c20e mov      rdx, qword ptr [rsp + 0x28]
22c213 mov      rax, qword ptr [rsp + 0x20]
22c218 and      rdx, rax
22c21b add      rdx, rdx
22c21e mov      rcx, qword ptr [rsp + 0x28]
22c223 mov      rax, qword ptr [rsp + 0x20]
22c228 xor      rcx, rax
22c22b add      rcx, rdx
22c22e mov      qword ptr [rsp + 0x30], rcx
22c233 mov      rax, qword ptr [rsp + 0x30]
22c238 mov      qword ptr [rsp + 0x48], 0x9409241
22c241 mov      rax, qword ptr [rsp + 0x48]
22c246 mov      qword ptr [rsp + 0x50], r12
22c24b mov      rcx, qword ptr [rsp + 0x50]
22c250 or       rcx, qword ptr [rsp + 0x4d8]
22c258 mov      rax, qword ptr [rsp + 0x50]
22c25d and      rax, qword ptr [rsp + 0x4d8]
22c265 sub      rcx, rax
22c268 mov      qword ptr [rsp + 0x4d8], rcx
22c270 mov      rcx, qword ptr [rsp + 0x50]
22c275 or       rcx, qword ptr [rsp + 0x4d8]
22c27d mov      rax, qword ptr [rsp + 0x50]
22c282 and      rax, qword ptr [rsp + 0x4d8]
22c28a add      rax, rcx
22c28d mov      qword ptr [rsp + 0x58], rax
22c292 mov      rcx, qword ptr [rsp + 0x50]
22c297 and      rcx, qword ptr [rsp + 0x1b0]
22c29f not      rcx
22c2a2 mov      rax, qword ptr [rsp + 0x50]
22c2a7 or       rax, qword ptr [rsp + 0x1b0]
22c2af and      rax, rcx
22c2b2 mov      qword ptr [rsp + 0x1b0], rax
22c2ba mov      rax, qword ptr [rsp + 0x58]
22c2bf mov      rax, qword ptr [rsp + 0x4d8]
22c2c7 xor      rax, 5
22c2cb mov      qword ptr [rsp + 0x38], rax
22c2d0 mov      rax, qword ptr [rsp + 0x38]
22c2d5 mov      rcx, qword ptr [rsp + 0x38]
22c2da mov      rax, qword ptr [rsp + 0x38]
22c2df and      rcx, rax
22c2e2 call     0x140002040
22c2e7 mov      qword ptr [rsp + 0x4d8], rax
22c2ef xor      rax, qword ptr [rsp + 0x1b0]
22c2f7 mov      r8d, 0x31713
22c2fd mov      rdx, rax
22c300 lea      rcx, [rsp + 0x190]
22c308 call     0x1401f1520
22c30d mov      qword ptr [rsp + 0x60], 0x15d1bee9
22c316 mov      rax, qword ptr [rsp + 0x60]
22c31b mov      rcx, qword ptr [rsp + 0x60]
22c320 mov      rax, qword ptr [rsp + 0x60]
22c325 sub      rcx, rax
22c328 mov      qword ptr [rsp + 0x68], rcx
22c32d mov      rcx, qword ptr [rsp + 0x68]
22c332 and      ecx, 0x1f777e
22c338 add      rcx, rcx
22c33b mov      rax, qword ptr [rsp + 0x68]
22c340 xor      rax, 0x1f777e
22c346 jmp      0x14022dee0
22c34b movsxd   rcx, dword ptr [rsp + 0x1370]
22c353 xor      rcx, qword ptr [rsp + 0x4d8]
22c35b call     0x140002040
22c360 mov      qword ptr [rsp + 0x4d8], rax
22c368 movzx    edx, byte ptr [rsp + 0x63d]
22c370 xor      rdx, rax
22c373 mov      r8d, 0xf5c7
22c379 lea      rcx, [rsp + 0x190]
22c381 call     0x1401f1520
22c386 movdqa   xmm0, xmmword ptr [rip + 0x1c5872]
22c38e movdqu   xmmword ptr [rsp + 0x1398], xmm0
22c397 movzx    eax, byte ptr [rsp + 0x63d]
22c39f mov      rcx, qword ptr [rsp + 0x1b0]
22c3a7 xor      rax, rcx
22c3aa mov      rdx, qword ptr [rsp + 0x4d8]
22c3b2 xor      rax, rdx
22c3b5 and      eax, 3
22c3b8 mov      ebx, dword ptr [rsp + rax*4 + 0x1398]
22c3bf cmp      ebx, 0x1e7639
22c3c5 cmove    ebx, r15d
22c3c9 call     0x140002430
22c3ce test     eax, eax
22c3d0 cmovne   ebx, esi
22c3d3 mov      edx, ebx
22c3d5 jmp      0x140232ce0
22c3da movsxd   rax, dword ptr [rsp + 0x1370]
22c3e2 xor      rax, qword ptr [rsp + 0x4d8]
22c3ea mov      qword ptr [rsp + 0x38], rax
22c3ef mov      rax, qword ptr [rsp + 0x38]
22c3f4 mov      rcx, qword ptr [rsp + 0x38]
22c3f9 mov      rax, qword ptr [rsp + 0x38]
22c3fe and      rcx, rax
22c401 call     0x140002040
22c406 mov      qword ptr [rsp + 0x4d8], rax
22c40e mov      ebx, 0x9940bebd
22c413 mov      qword ptr [rsp + 0x48], rbx
22c418 mov      rdx, qword ptr [rsp + 0x48]
22c41d mov      rax, qword ptr [rsp + 0x48]
22c422 xor      rdx, rax
22c425 mov      rcx, qword ptr [rsp + 0x48]
22c42a mov      rax, qword ptr [rsp + 0x48]
22c42f sub      rcx, rax
22c432 or       rcx, rdx
22c435 mov      qword ptr [rsp + 0x50], rcx
22c43a mov      rax, qword ptr [rsp + 0x50]
22c43f xor      qword ptr [rsp + 0x4d8], rax
22c447 mov      rax, qword ptr [rsp + 0x50]
22c44c add      rax, qword ptr [rsp + 0x4d8]
22c454 mov      qword ptr [rsp + 0x58], rax
22c459 mov      rax, qword ptr [rsp + 0x50]
22c45e xor      qword ptr [rsp + 0x1b0], rax
22c466 mov      rax, qword ptr [rsp + 0x50]
22c46b add      qword ptr [rsp + 0x1378], rax
22c473 mov      rax, qword ptr [rsp + 0x58]
22c478 mov      rcx, qword ptr [rsp + 0x4d8]
22c480 xor      rcx, 0x26
22c484 call     0x140002040
22c489 mov      qword ptr [rsp + 0x4d8], rax
22c491 mov      rdx, qword ptr [rsp + 0x1b0]
22c499 xor      rdx, rax
22c49c mov      r8d, 0x177c2a
22c4a2 lea      rcx, [rsp + 0x190]
22c4aa call     0x1401f1520
22c4af mov      qword ptr [rsp + 0x20], 0x5aa75425
22c4b8 mov      ebx, 0x8de18ac5
22c4bd mov      qword ptr [rsp + 0x28], rbx
22c4c2 mov      rcx, qword ptr [rsp + 0x28]
22c4c7 mov      rax, qword ptr [rsp + 0x20]
22c4cc xor      rcx, rax
22c4cf mov      qword ptr [rsp + 0x30], rcx
22c4d4 mov      rax, qword ptr [rsp + 0x30]
22c4d9 mov      qword ptr [rsp + 0x30], rax
22c4de mov      rax, qword ptr [rsp + 0x30]
22c4e3 mov      qword ptr [rsp + 0x60], 0x31ca1daf
22c4ec mov      rax, qword ptr [rsp + 0x60]
22c4f1 mov      rcx, qword ptr [rsp + 0x60]
22c4f6 mov      rax, qword ptr [rsp + 0x60]
22c4fb sub      rcx, rax
22c4fe mov      qword ptr [rsp + 0x68], rcx
22c503 mov      rax, qword ptr [rsp + 0x68]
22c508 add      rax, 0x104fa4
22c50e jmp      0x14022e08f
22c513 movsxd   rcx, dword ptr [rsp + 0x1370]
22c51b xor      rcx, qword ptr [rsp + 0x4d8]
22c523 call     0x140002040
22c528 mov      qword ptr [rsp + 0x4d8], rax
22c530 lea      ecx, [rax + 0xff]
22c536 movzx    eax, al
22c539 movzx    edx, cl
22c53c imul     edx, eax
22c53f test     dl, 1
22c542 je       0x14022c579
22c544 mov      eax, 0xb48e4a47
22c549 mov      qword ptr [rsp + 0x20], rax
22c54e mov      eax, 0xa8284f61
22c553 mov      qword ptr [rsp + 0x28], rax
22c558 mov      rcx, qword ptr [rsp + 0x28]
22c55d mov      rax, qword ptr [rsp + 0x20]
22c562 xor      rcx, rax
22c565 mov      qword ptr [rsp + 0x30], rcx
22c56a mov      rax, qword ptr [rsp + 0x30]
22c56f mov      qword ptr [rsp + 0x30], rax
22c574 mov      rax, qword ptr [rsp + 0x30]
22c579 mov      eax, 0xc10a6bf5
22c57e mov      qword ptr [rsp + 0x48], rax
22c583 mov      rax, qword ptr [rsp + 0x48]
22c588 mov      qword ptr [rsp + 0x50], r12
22c58d mov      rcx, qword ptr [rsp + 0x50]
22c592 and      rcx, qword ptr [rsp + 0x4d8]
22c59a not      rcx
22c59d mov      rax, qword ptr [rsp + 0x50]
22c5a2 or       rax, qword ptr [rsp + 0x4d8]
22c5aa and      rax, rcx
22c5ad mov      qword ptr [rsp + 0x4d8], rax
22c5b5 mov      rcx, qword ptr [rsp + 0x50]
22c5ba and      rcx, qword ptr [rsp + 0x4d8]
22c5c2 add      rcx, rcx
22c5c5 mov      rax, qword ptr [rsp + 0x50]
22c5ca xor      rax, qword ptr [rsp + 0x4d8]
22c5d2 add      rax, rcx
22c5d5 mov      qword ptr [rsp + 0x58], rax
22c5da mov      rax, qword ptr [rsp + 0x50]
22c5df mov      rcx, qword ptr [rsp + 0x1b0]
22c5e7 and      rax, rcx
22c5ea add      rax, rax
22c5ed sub      rcx, rax
22c5f0 mov      rax, qword ptr [rsp + 0x50]
22c5f5 add      rax, rcx
22c5f8 mov      qword ptr [rsp + 0x1b0], rax
22c600 mov      rax, qword ptr [rsp + 0x58]
22c605 mov      rax, qword ptr [rsp + 0x4d8]
22c60d mov      qword ptr [rsp + 0x38], rax
22c612 mov      rax, qword ptr [rsp + 0x38]
22c617 xor      rax, 0x39
22c61b mov      qword ptr [rsp + 0x38], rax
22c620 mov      rcx, qword ptr [rsp + 0x38]
22c625 call     0x140002040
22c62a mov      qword ptr [rsp + 0x4d8], rax
22c632 mov      rdx, qword ptr [rsp + 0x1b0]
22c63a xor      rdx, rax
22c63d mov      r8d, 0x233a3f
22c643 lea      rcx, [rsp + 0x190]
22c64b call     0x1401f1520
22c650 mov      ebx, 0xf81eaf69
22c655 mov      qword ptr [rsp + 0x60], rbx
22c65a mov      rax, qword ptr [rsp + 0x60]
22c65f mov      rcx, qword ptr [rsp + 0x60]
22c664 mov      rax, qword ptr [rsp + 0x60]
22c669 sub      rcx, rax
22c66c mov      qword ptr [rsp + 0x68], rcx
22c671 mov      rcx, qword ptr [rsp + 0x68]
22c676 and      ecx, 0x161550
22c67c add      rcx, rcx
22c67f mov      rax, qword ptr [rsp + 0x68]
22c684 xor      rax, 0x161550
22c68a jmp      0x14022b87d
22c68f cmp      eax, 0xf6105
22c694 je       0x14022ca20
22c69a cmp      eax, 0xf6b1c
22c69f je       0x14022c90d
22c6a5 cmp      eax, 0xfe1ab
22c6aa je       0x14022c8f6
22c6b0 cmp      eax, 0xffd5b
22c6b5 jne      0x140232642
22c6bb movzx    eax, byte ptr [rsp + 0x4d8]
22c6c3 lea      ecx, [rax + 0xff]
22c6c9 xor      cl, al
22c6cb test     cl, 1
22c6ce jne      0x14022c714
22c6d0 mov      eax, 0xb10f0f01
22c6d5 mov      qword ptr [rsp + 0x20], rax
22c6da mov      qword ptr [rsp + 0x28], 0x100fe269
22c6e3 mov      rcx, qword ptr [rsp + 0x28]
22c6e8 mov      rax, qword ptr [rsp + 0x20]
22c6ed xor      rcx, rax
22c6f0 mov      qword ptr [rsp + 0x30], rcx
22c6f5 mov      rcx, qword ptr [rsp + 0x30]
22c6fa mov      rax, qword ptr [rsp + 0x30]
22c6ff xor      rcx, rax
22c702 mov      rax, qword ptr [rsp + 0x30]
22c707 add      rax, rcx
22c70a mov      qword ptr [rsp + 0x30], rax
22c70f mov      rax, qword ptr [rsp + 0x30]
22c714 mov      qword ptr [rsp + 0x20], 0x264a27c5
22c71d mov      qword ptr [rsp + 0x28], 0x5ae033f
22c726 mov      rcx, qword ptr [rsp + 0x28]
22c72b mov      rax, qword ptr [rsp + 0x20]
22c730 xor      rcx, rax
22c733 mov      qword ptr [rsp + 0x30], rcx
22c738 mov      qword ptr [rsp + 0x78], r12
22c73d nop      dword ptr [rax]
22c740 mov      rax, qword ptr [rsp + 0x78]
22c745 cmp      rax, 2
22c749 jae      0x14022c771
22c74b mov      rcx, qword ptr [rsp + 0x30]
22c750 mov      rax, qword ptr [rsp + 0x78]
22c755 add      rcx, rax
22c758 call     0x140002040
22c75d mov      qword ptr [rsp + 0x30], rax
22c762 mov      rax, qword ptr [rsp + 0x78]
22c767 inc      rax
22c76a mov      qword ptr [rsp + 0x78], rax
22c76f jmp      0x14022c740
22c771 mov      rax, qword ptr [rsp + 0x30]
22c776 mov      qword ptr [rsp + 0x48], 0x4e63d1ed
22c77f mov      rcx, qword ptr [rsp + 0x48]
22c784 mov      rax, qword ptr [rsp + 0x48]
22c789 xor      rcx, rax
22c78c mov      qword ptr [rsp + 0x50], rcx
22c791 mov      rcx, qword ptr [rsp + 0x50]
22c796 or       rcx, qword ptr [rsp + 0x4d8]
22c79e mov      rax, qword ptr [rsp + 0x50]
22c7a3 and      rax, qword ptr [rsp + 0x4d8]
22c7ab sub      rcx, rax
22c7ae mov      qword ptr [rsp + 0x4d8], rcx
22c7b6 mov      rcx, qword ptr [rsp + 0x50]
22c7bb and      rcx, qword ptr [rsp + 0x4d8]
22c7c3 add      rcx, rcx
22c7c6 mov      rax, qword ptr [rsp + 0x50]
22c7cb xor      rax, qword ptr [rsp + 0x4d8]
22c7d3 add      rax, rcx
22c7d6 mov      qword ptr [rsp + 0x58], rax
22c7db mov      rcx, qword ptr [rsp + 0x50]
22c7e0 or       rcx, qword ptr [rsp + 0x1b0]
22c7e8 mov      rax, qword ptr [rsp + 0x50]
22c7ed and      rax, qword ptr [rsp + 0x1b0]
22c7f5 sub      rcx, rax
22c7f8 mov      qword ptr [rsp + 0x1b0], rcx
22c800 mov      rax, qword ptr [rsp + 0x58]
22c805 mov      rax, qword ptr [rsp + 0x4d8]
22c80d mov      qword ptr [rsp + 0x38], rax
22c812 mov      rax, qword ptr [rsp + 0x38]
22c817 xor      rax, 0x1e
22c81b mov      qword ptr [rsp + 0x38], rax
22c820 mov      rcx, qword ptr [rsp + 0x38]
22c825 call     0x140002040
22c82a mov      qword ptr [rsp + 0x4d8], rax
22c832 mov      rdx, qword ptr [rsp + 0x1b0]
22c83a xor      rdx, rax
22c83d mov      r8d, 0x128a72
22c843 lea      rcx, [rsp + 0x190]
22c84b call     0x1401f1520
22c850 movzx    eax, byte ptr [rsp + 0x4d8]
22c858 lea      ecx, [rax + 0xff]
22c85e xor      cl, al
22c860 test     cl, 1
22c863 jne      0x14022c8c6
22c865 mov      ebx, 0xa983bbaf
22c86a mov      qword ptr [rsp + 0x20], rbx
22c86f mov      qword ptr [rsp + 0x28], 0x3f2c1f2b
22c878 mov      rcx, qword ptr [rsp + 0x28]
22c87d mov      rax, qword ptr [rsp + 0x20]
22c882 xor      rcx, rax
22c885 mov      qword ptr [rsp + 0x30], rcx
22c88a mov      qword ptr [rsp + 0x78], r12
22c88f nop      
22c890 mov      rax, qword ptr [rsp + 0x78]
22c895 cmp      rax, 3
22c899 jae      0x14022c8c1
22c89b mov      rcx, qword ptr [rsp + 0x30]
22c8a0 mov      rax, qword ptr [rsp + 0x78]
22c8a5 add      rcx, rax
22c8a8 call     0x140002040
22c8ad mov      qword ptr [rsp + 0x30], rax
22c8b2 mov      rax, qword ptr [rsp + 0x78]
22c8b7 inc      rax
22c8ba mov      qword ptr [rsp + 0x78], rax
22c8bf jmp      0x14022c890
22c8c1 mov      rax, qword ptr [rsp + 0x30]
22c8c6 mov      qword ptr [rsp + 0x60], 0x305c313
22c8cf mov      rax, qword ptr [rsp + 0x60]
22c8d4 mov      rcx, qword ptr [rsp + 0x60]
22c8d9 mov      rax, qword ptr [rsp + 0x60]
22c8de sub      rcx, rax
22c8e1 mov      qword ptr [rsp + 0x68], rcx
22c8e6 mov      rax, qword ptr [rsp + 0x68]
22c8eb add      rax, 0x8e646
22c8f1 jmp      0x14022e08f
22c8f6 mov      edx, 1
22c8fb lea      rcx, [rsp + 0x190]
22c903 call     0x1401ee510
22c908 jmp      0x140232daa
22c90d mov      rcx, qword ptr [rsp + 0x1b0]
22c915 xor      rcx, qword ptr [rsp + 0x4d8]
22c91d call     0x140002040
22c922 mov      qword ptr [rsp + 0x40], rax
22c927 mov      rax, qword ptr [rsp + 0x40]
22c92c mov      eax, 0xb342d8d7
22c931 mov      qword ptr [rsp + 0x48], rax
22c936 mov      rax, qword ptr [rsp + 0x48]
22c93b mov      qword ptr [rsp + 0x50], r12
22c940 mov      rcx, qword ptr [rsp + 0x50]
22c945 and      rcx, qword ptr [rsp + 0x4d8]
22c94d not      rcx
22c950 mov      rax, qword ptr [rsp + 0x50]
22c955 or       rax, qword ptr [rsp + 0x4d8]
22c95d and      rax, rcx
22c960 mov      qword ptr [rsp + 0x4d8], rax
22c968 mov      rax, qword ptr [rsp + 0x50]
22c96d add      rax, qword ptr [rsp + 0x4d8]
22c975 mov      qword ptr [rsp + 0x58], rax
22c97a mov      rcx, qword ptr [rsp + 0x50]
22c97f and      rcx, qword ptr [rsp + 0x1b0]
22c987 not      rcx
22c98a mov      rax, qword ptr [rsp + 0x50]
22c98f or       rax, qword ptr [rsp + 0x1b0]
22c997 and      rax, rcx
22c99a mov      qword ptr [rsp + 0x1b0], rax
22c9a2 mov      rax, qword ptr [rsp + 0x58]
22c9a7 mov      rcx, qword ptr [rsp + 0x4d8]
22c9af xor      rcx, 0x12
22c9b3 call     0x140002040
22c9b8 mov      qword ptr [rsp + 0x4d8], rax
22c9c0 mov      rdx, qword ptr [rsp + 0x1b0]
22c9c8 xor      rdx, rax
22c9cb mov      r8d, 0xb1fde
22c9d1 lea      rcx, [rsp + 0x190]
22c9d9 call     0x1401f1520
22c9de mov      ebx, 0xd3bd3f2b
22c9e3 mov      qword ptr [rsp + 0x60], rbx
22c9e8 mov      rax, qword ptr [rsp + 0x60]
22c9ed mov      rcx, qword ptr [rsp + 0x60]
22c9f2 mov      rax, qword ptr [rsp + 0x60]
22c9f7 sub      rcx, rax
22c9fa mov      qword ptr [rsp + 0x68], rcx
22c9ff mov      rcx, qword ptr [rsp + 0x68]
22ca04 and      ecx, 0x3c2e7f
22ca0a add      rcx, rcx
22ca0d mov      rax, qword ptr [rsp + 0x68]
22ca12 xor      rax, 0x3c2e7f
22ca18 add      rax, rcx
22ca1b jmp      0x1402319ec
22ca20 lea      rcx, [rsp + 0x190]
22ca28 call     0x1401ee070
22ca2d movzx    ecx, byte ptr [rsp + 0x63d]
22ca35 mov      eax, eax
22ca37 xor      rcx, rax
22ca3a xor      rcx, qword ptr [rsp + 0x1378]
22ca42 call     0x140002040
22ca47 mov      qword ptr [rsp + 0x1378], rax
22ca4f mov      rcx, qword ptr [rsp + 0x1b8]
22ca57 xor      rcx, qword ptr [rsp + 0x1b0]
22ca5f xor      rcx, rax
22ca62 call     0x140002040
22ca67 mov      qword ptr [rsp + 0x1b0], rax
22ca6f mov      edx, 9
22ca74 lea      rcx, [rsp + 0x190]
22ca7c call     0x1401eddd0
22ca81 mov      edx, eax
22ca83 lea      rcx, [rsp + 0x190]
22ca8b call     0x1401f0910
22ca90 mov      edx, 8
22ca95 lea      rcx, [rsp + 0x190]
22ca9d call     0x1401eddd0
22caa2 mov      edx, eax
22caa4 lea      rcx, [rsp + 0x190]
22caac call     0x1401f0910
22cab1 lea      rcx, [rsp + 0x190]
22cab9 call     0x1401ee070
22cabe cmp      eax, dword ptr [rsp + 0x368]
22cac5 jae      0x14022cad6
22cac7 mov      edx, eax
22cac9 lea      rcx, [rsp + 0x190]
22cad1 call     0x1401f0910
22cad6 mov      edx, 8
22cadb lea      rcx, [rsp + 0x190]
22cae3 call     0x1401eddd0
22cae8 mov      r8, rax
22caeb mov      edx, 9
22caf0 lea      rcx, [rsp + 0x190]
22caf8 call     0x1401edea0
22cafd movzx    eax, byte ptr [rsp + 0x4d8]
22cb05 lea      ecx, [rax + 0xff]
22cb0b mov      edx, eax
22cb0d movzx    eax, cl
22cb10 imul     eax, edx
22cb13 test     al, 1
22cb15 je       0x14022cb4b
22cb17 mov      qword ptr [rsp + 0x20], 0x7cc2a077
22cb20 mov      eax, 0xda282ad5
22cb25 mov      qword ptr [rsp + 0x28], rax
22cb2a mov      rcx, qword ptr [rsp + 0x28]
22cb2f mov      rax, qword ptr [rsp + 0x20]
22cb34 xor      rcx, rax
22cb37 mov      qword ptr [rsp + 0x30], rcx
22cb3c mov      rax, qword ptr [rsp + 0x30]
22cb41 mov      qword ptr [rsp + 0x30], rax
22cb46 mov      rax, qword ptr [rsp + 0x30]
22cb4b mov      ebx, 0x829a76ef
22cb50 mov      qword ptr [rsp + 0x20], rbx
22cb55 mov      qword ptr [rsp + 0x28], 0x7abb7755
22cb5e mov      rcx, qword ptr [rsp + 0x28]
22cb63 mov      rax, qword ptr [rsp + 0x20]
22cb68 xor      rcx, rax
22cb6b mov      qword ptr [rsp + 0x30], rcx
22cb70 mov      rdx, qword ptr [rsp + 0x28]
22cb75 mov      rax, qword ptr [rsp + 0x20]
22cb7a and      rdx, rax
22cb7d add      rdx, rdx
22cb80 mov      rcx, qword ptr [rsp + 0x28]
22cb85 mov      rax, qword ptr [rsp + 0x20]
22cb8a xor      rcx, rax
22cb8d add      rcx, rdx
22cb90 mov      qword ptr [rsp + 0x30], rcx
22cb95 mov      rax, qword ptr [rsp + 0x30]
22cb9a mov      ebx, 0x8b0caf97
22cb9f mov      qword ptr [rsp + 0x48], rbx
22cba4 mov      rdx, qword ptr [rsp + 0x48]
22cba9 mov      rax, qword ptr [rsp + 0x48]
22cbae xor      rdx, rax
22cbb1 mov      rcx, qword ptr [rsp + 0x48]
22cbb6 mov      rax, qword ptr [rsp + 0x48]
22cbbb sub      rcx, rax
22cbbe or       rcx, rdx
22cbc1 mov      qword ptr [rsp + 0x50], rcx
22cbc6 mov      rax, qword ptr [rsp + 0x50]
22cbcb xor      qword ptr [rsp + 0x4d8], rax
22cbd3 mov      rcx, qword ptr [rsp + 0x50]
22cbd8 and      rcx, qword ptr [rsp + 0x4d8]
22cbe0 add      rcx, rcx
22cbe3 mov      rax, qword ptr [rsp + 0x50]
22cbe8 xor      rax, qword ptr [rsp + 0x4d8]
22cbf0 add      rax, rcx
22cbf3 mov      qword ptr [rsp + 0x58], rax
22cbf8 mov      rcx, qword ptr [rsp + 0x50]
22cbfd and      rcx, qword ptr [rsp + 0x1b0]
22cc05 not      rcx
22cc08 mov      rax, qword ptr [rsp + 0x50]
22cc0d or       rax, qword ptr [rsp + 0x1b0]
22cc15 and      rax, rcx
22cc18 mov      qword ptr [rsp + 0x1b0], rax
22cc20 mov      rax, qword ptr [rsp + 0x58]
22cc25 mov      rdx, qword ptr [rsp + 0x4d8]
22cc2d mov      rcx, qword ptr [rsp + 0x1b0]
22cc35 call     0x1400023e0
22cc3a test     eax, eax
22cc3c je       0x14022cc56
22cc3e movzx    eax, byte ptr [rsp + 0x4d8]
22cc46 and      al, 3
22cc48 cmp      al, 1
22cc4a jne      0x14022cc56
22cc4c mov      edx, 0x116fdf
22cc51 jmp      0x140232ce0
22cc56 mov      edx, 0xaf41e
22cc5b jmp      0x140232ce0
22cc60 mov      eax, 0xb3580079
22cc65 mov      qword ptr [rsp + 0x20], rax
22cc6a mov      qword ptr [rsp + 0x28], 0x352a0109
22cc73 mov      rcx, qword ptr [rsp + 0x28]
22cc78 mov      rax, qword ptr [rsp + 0x20]
22cc7d xor      rcx, rax
22cc80 mov      qword ptr [rsp + 0x30], rcx
22cc85 mov      rax, qword ptr [rsp + 0x30]
22cc8a mov      qword ptr [rsp + 0x30], rax
22cc8f mov      rax, qword ptr [rsp + 0x30]
22cc94 mov      rax, qword ptr [rsp + 0x4d8]
22cc9c mov      qword ptr [rsp + 0x38], rax
22cca1 movsxd   rcx, dword ptr [rsp + 0x1370]
22cca9 mov      rax, qword ptr [rsp + 0x38]
22ccae xor      rcx, rax
22ccb1 mov      qword ptr [rsp + 0x38], rcx
22ccb6 mov      rcx, qword ptr [rsp + 0x38]
22ccbb call     0x140002040
22ccc0 mov      qword ptr [rsp + 0x4d8], rax
22ccc8 mov      qword ptr [rsp + 0x48], 0x2e9a7b5f
22ccd1 mov      rcx, qword ptr [rsp + 0x48]
22ccd6 mov      rax, qword ptr [rsp + 0x48]
22ccdb xor      rcx, rax
22ccde mov      qword ptr [rsp + 0x50], rcx
22cce3 mov      rax, qword ptr [rsp + 0x50]
22cce8 mov      rcx, qword ptr [rsp + 0x4d8]
22ccf0 and      rax, rcx
22ccf3 add      rax, rax
22ccf6 sub      rcx, rax
22ccf9 mov      rax, qword ptr [rsp + 0x50]
22ccfe add      rax, rcx
22cd01 mov      qword ptr [rsp + 0x4d8], rax
22cd09 mov      rax, qword ptr [rsp + 0x50]
22cd0e add      rax, qword ptr [rsp + 0x4d8]
22cd16 mov      qword ptr [rsp + 0x58], rax
22cd1b mov      rax, qword ptr [rsp + 0x50]
22cd20 mov      rcx, qword ptr [rsp + 0x1b0]
22cd28 and      rax, rcx
22cd2b add      rax, rax
22cd2e sub      rcx, rax
22cd31 mov      rax, qword ptr [rsp + 0x50]
22cd36 add      rax, rcx
22cd39 mov      qword ptr [rsp + 0x1b0], rax
22cd41 mov      rax, qword ptr [rsp + 0x50]
22cd46 add      qword ptr [rsp + 0x1378], rax
22cd4e mov      rax, qword ptr [rsp + 0x58]
22cd53 mov      rax, qword ptr [rsp + 0x4d8]
22cd5b xor      rax, 0x27
22cd5f mov      qword ptr [rsp + 0x38], rax
22cd64 mov      rcx, qword ptr [rsp + 0x38]
22cd69 call     0x140002040
22cd6e mov      qword ptr [rsp + 0x4d8], rax
22cd76 mov      rdx, qword ptr [rsp + 0x1b0]
22cd7e xor      rdx, rax
22cd81 mov      r8d, 0x181a61
22cd87 lea      rcx, [rsp + 0x190]
22cd8f call     0x1401f1520
22cd94 movzx    ecx, byte ptr [rsp + 0x4d8]
22cd9c mov      edx, ecx
22cd9e imul     edx, ecx
22cda1 xor      dl, cl
22cda3 mov      ebx, 0xb0c60d57
22cda8 test     dl, 1
22cdab jne      0x14022cde4
22cdad mov      qword ptr [rsp + 0x60], rbx
22cdb2 mov      rax, qword ptr [rsp + 0x60]
22cdb7 mov      rcx, qword ptr [rsp + 0x60]
22cdbc mov      rax, qword ptr [rsp + 0x60]
22cdc1 sub      rcx, rax
22cdc4 mov      qword ptr [rsp + 0x68], rcx
22cdc9 mov      rcx, qword ptr [rsp + 0x68]
22cdce or       rcx, 0x2946fe
22cdd5 mov      rax, qword ptr [rsp + 0x68]
22cdda and      eax, 0x2946fe
22cddf jmp      0x14022b87d
22cde4 mov      eax, 0xca29f957
22cde9 mov      qword ptr [rsp + 0x20], rax
22cdee mov      qword ptr [rsp + 0x28], 0x6da7dd47
22cdf7 mov      rcx, qword ptr [rsp + 0x28]
22cdfc mov      rax, qword ptr [rsp + 0x20]
22ce01 xor      rcx, rax
22ce04 mov      qword ptr [rsp + 0x30], rcx
22ce09 mov      rax, qword ptr [rsp + 0x30]
22ce0e mov      rax, qword ptr [rsp + 0x30]
22ce13 mov      qword ptr [rsp + 0x60], rbx
22ce18 mov      rax, qword ptr [rsp + 0x60]
22ce1d mov      rcx, qword ptr [rsp + 0x60]
22ce22 mov      rax, qword ptr [rsp + 0x60]
22ce27 sub      rcx, rax
22ce2a mov      qword ptr [rsp + 0x68], rcx
22ce2f mov      rcx, qword ptr [rsp + 0x68]
22ce34 or       rcx, 0x2946fe
22ce3b mov      rax, qword ptr [rsp + 0x68]
22ce40 and      eax, 0x2946fe
22ce45 jmp      0x14022b87d
22ce4a cmp      eax, 0x196621
22ce4f jg       0x14022e0c0
22ce55 je       0x14022df14
22ce5b cmp      eax, 0x161550
22ce60 jg       0x14022d83f
22ce66 je       0x14022d6e2
22ce6c cmp      eax, 0x106353
22ce71 je       0x14022d4b4
22ce77 cmp      eax, 0x109dc8
22ce7c je       0x14022d298
22ce82 cmp      eax, 0x116fdf
22ce87 je       0x14022d0fb
22ce8d cmp      eax, esi
22ce8f je       0x14022d008
22ce95 cmp      eax, 0x13397f
22ce9a jne      0x140232642
22cea0 movsxd   rcx, dword ptr [rsp + 0x1370]
22cea8 xor      rcx, qword ptr [rsp + 0x4d8]
22ceb0 call     0x140002040
22ceb5 mov      qword ptr [rsp + 0x4d8], rax
22cebd mov      qword ptr [rsp + 0x48], 0x2e3e2027
22cec6 mov      rax, qword ptr [rsp + 0x48]
22cecb mov      qword ptr [rsp + 0x50], r12
22ced0 mov      rax, qword ptr [rsp + 0x50]
22ced5 mov      rcx, qword ptr [rsp + 0x4d8]
22cedd and      rax, rcx
22cee0 add      rax, rax
22cee3 sub      rcx, rax
22cee6 mov      rax, qword ptr [rsp + 0x50]
22ceeb add      rax, rcx
22ceee mov      qword ptr [rsp + 0x4d8], rax
22cef6 mov      rax, qword ptr [rsp + 0x50]
22cefb add      rax, qword ptr [rsp + 0x4d8]
22cf03 mov      qword ptr [rsp + 0x58], rax
22cf08 mov      rcx, qword ptr [rsp + 0x50]
22cf0d and      rcx, qword ptr [rsp + 0x1b0]
22cf15 not      rcx
22cf18 mov      rax, qword ptr [rsp + 0x50]
22cf1d or       rax, qword ptr [rsp + 0x1b0]
22cf25 and      rax, rcx
22cf28 mov      qword ptr [rsp + 0x1b0], rax
22cf30 mov      rax, qword ptr [rsp + 0x58]
22cf35 mov      rax, qword ptr [rsp + 0x4d8]
22cf3d mov      qword ptr [rsp + 0x38], rax
22cf42 mov      rax, qword ptr [rsp + 0x38]
22cf47 xor      rax, 0x1d
22cf4b mov      qword ptr [rsp + 0x38], rax
22cf50 mov      rcx, qword ptr [rsp + 0x38]
22cf55 call     0x140002040
22cf5a mov      qword ptr [rsp + 0x4d8], rax
22cf62 mov      rdx, qword ptr [rsp + 0x1b0]
22cf6a xor      rdx, rax
22cf6d mov      r8d, 0x11ec3b
22cf73 lea      rcx, [rsp + 0x190]
22cf7b call     0x1401f1520
22cf80 movzx    eax, byte ptr [rsp + 0x4d8]
22cf88 lea      ecx, [rax + 0xff]
22cf8e or       cl, al
22cf90 test     cl, 1
22cf93 jne      0x14022cfca
22cf95 mov      ebx, 0xd2985da9
22cf9a mov      qword ptr [rsp + 0x20], rbx
22cf9f mov      ebx, 0xe752900b
22cfa4 mov      qword ptr [rsp + 0x28], rbx
22cfa9 mov      rcx, qword ptr [rsp + 0x28]
22cfae mov      rax, qword ptr [rsp + 0x20]
22cfb3 xor      rcx, rax
22cfb6 mov      qword ptr [rsp + 0x30], rcx
22cfbb mov      rax, qword ptr [rsp + 0x30]
22cfc0 mov      qword ptr [rsp + 0x30], rax
22cfc5 mov      rax, qword ptr [rsp + 0x30]
22cfca mov      qword ptr [rsp + 0x60], 0x3c73cf4d
22cfd3 mov      rax, qword ptr [rsp + 0x60]
22cfd8 mov      rcx, qword ptr [rsp + 0x60]
22cfdd mov      rax, qword ptr [rsp + 0x60]
22cfe2 sub      rcx, rax
22cfe5 mov      qword ptr [rsp + 0x68], rcx
22cfea mov      rcx, qword ptr [rsp + 0x68]
22cfef and      ecx, 0xffd5b
22cff5 add      rcx, rcx
22cff8 mov      rax, qword ptr [rsp + 0x68]
22cffd xor      rax, 0xffd5b
22d003 jmp      0x14022e08c
22d008 mov      rax, qword ptr [rip + 0x1f0b89]
22d00f mov      rcx, qword ptr [rsp + 0x4d8]
22d017 xor      rax, rcx
22d01a mov      qword ptr [rip + 0x1f0b77], rax
22d021 mov      rdx, qword ptr [rsp + 0x1b0]
22d029 xor      rdx, rcx
22d02c mov      r8d, 0x126cb4
22d032 lea      rcx, [rsp + 0x190]
22d03a call     0x1401f1730
22d03f movsxd   rcx, dword ptr [rsp + 0x1370]
22d047 xor      rcx, qword ptr [rsp + 0x4d8]
22d04f call     0x140002040
22d054 mov      qword ptr [rsp + 0x4d8], rax
22d05c movsxd   rcx, dword ptr [rsp + 0x1370]
22d064 xor      rcx, rax
22d067 call     0x140002040
22d06c mov      qword ptr [rsp + 0x4d8], rax
22d074 lea      ecx, [rax + 0xff]
22d07a movzx    eax, al
22d07d movzx    edx, cl
22d080 imul     edx, eax
22d083 test     dl, 1
22d086 jne      0x14022d092
22d088 mov      edx, 0x38a89
22d08d jmp      0x140232ce0
22d092 mov      qword ptr [rsp + 0x20], 0x2f199a1f
22d09b mov      ebx, 0x83311f5f
22d0a0 mov      qword ptr [rsp + 0x28], rbx
22d0a5 mov      rcx, qword ptr [rsp + 0x28]
22d0aa mov      rax, qword ptr [rsp + 0x20]
22d0af xor      rcx, rax
22d0b2 mov      qword ptr [rsp + 0x30], rcx
22d0b7 mov      qword ptr [rsp + 0x78], r12
22d0bc nop      dword ptr [rax]
22d0c0 mov      rax, qword ptr [rsp + 0x78]
22d0c5 cmp      rax, 3
22d0c9 jae      0x14022d0f1
22d0cb mov      rcx, qword ptr [rsp + 0x30]
22d0d0 mov      rax, qword ptr [rsp + 0x78]
22d0d5 add      rcx, rax
22d0d8 call     0x140002040
22d0dd mov      qword ptr [rsp + 0x30], rax
22d0e2 mov      rax, qword ptr [rsp + 0x78]
22d0e7 inc      rax
22d0ea mov      qword ptr [rsp + 0x78], rax
22d0ef jmp      0x14022d0c0
22d0f1 mov      rax, qword ptr [rsp + 0x30]
22d0f6 jmp      0x14023265f
22d0fb movsxd   rcx, dword ptr [rsp + 0x1370]
22d103 xor      rcx, qword ptr [rsp + 0x4d8]
22d10b call     0x140002040
22d110 mov      qword ptr [rsp + 0x4d8], rax
22d118 mov      qword ptr [rsp + 0x38], rax
22d11d movsxd   rcx, dword ptr [rsp + 0x1370]
22d125 mov      rax, qword ptr [rsp + 0x38]
22d12a xor      rcx, rax
22d12d mov      qword ptr [rsp + 0x38], rcx
22d132 mov      rcx, qword ptr [rsp + 0x38]
22d137 call     0x140002040
22d13c mov      qword ptr [rsp + 0x4d8], rax
22d144 mov      qword ptr [rsp + 0x48], 0x123b73a9
22d14d mov      rax, qword ptr [rsp + 0x48]
22d152 mov      qword ptr [rsp + 0x50], r12
22d157 mov      rcx, qword ptr [rsp + 0x50]
22d15c or       rcx, qword ptr [rsp + 0x4d8]
22d164 mov      rax, qword ptr [rsp + 0x50]
22d169 and      rax, qword ptr [rsp + 0x4d8]
22d171 sub      rcx, rax
22d174 mov      qword ptr [rsp + 0x4d8], rcx
22d17c mov      rcx, qword ptr [rsp + 0x50]
22d181 or       rcx, qword ptr [rsp + 0x4d8]
22d189 mov      rax, qword ptr [rsp + 0x50]
22d18e and      rax, qword ptr [rsp + 0x4d8]
22d196 add      rax, rcx
22d199 mov      qword ptr [rsp + 0x58], rax
22d19e mov      rax, qword ptr [rsp + 0x50]
22d1a3 xor      qword ptr [rsp + 0x1b0], rax
22d1ab mov      rcx, qword ptr [rsp + 0x50]
22d1b0 and      rcx, qword ptr [rsp + 0x1378]
22d1b8 add      rcx, rcx
22d1bb mov      rax, qword ptr [rsp + 0x50]
22d1c0 xor      rax, qword ptr [rsp + 0x1378]
22d1c8 add      rax, rcx
22d1cb mov      qword ptr [rsp + 0x1378], rax
22d1d3 mov      rax, qword ptr [rsp + 0x58]
22d1d8 mov      rax, qword ptr [rsp + 0x4d8]
22d1e0 xor      rax, 3
22d1e4 mov      qword ptr [rsp + 0x38], rax
22d1e9 mov      rcx, qword ptr [rsp + 0x38]
22d1ee call     0x140002040
22d1f3 mov      qword ptr [rsp + 0x4d8], rax
22d1fb xor      rax, qword ptr [rsp + 0x1b0]
22d203 mov      r8d, 0x1daa5
22d209 mov      rdx, rax
22d20c lea      rcx, [rsp + 0x190]
22d214 call     0x1401f1520
22d219 mov      ebx, 0xe0dd9dff
22d21e mov      qword ptr [rsp + 0x20], rbx
22d223 mov      qword ptr [rsp + 0x28], 0x43b9abf9
22d22c mov      rcx, qword ptr [rsp + 0x28]
22d231 mov      rax, qword ptr [rsp + 0x20]
22d236 xor      rcx, rax
22d239 mov      qword ptr [rsp + 0x30], rcx
22d23e mov      rax, qword ptr [rsp + 0x30]
22d243 dec      rax
22d246 mov      rcx, qword ptr [rsp + 0x30]
22d24b xor      cl, al
22d24d test     cl, 1
22d250 jne      0x14022d262
22d252 mov      rax, qword ptr [rsp + 0x30]
22d257 xor      rax, 0xdead
22d25d mov      qword ptr [rsp + 0x30], rax
22d262 mov      rax, qword ptr [rsp + 0x30]
22d267 mov      ebx, 0x969d912d
22d26c mov      qword ptr [rsp + 0x60], rbx
22d271 mov      rax, qword ptr [rsp + 0x60]
22d276 mov      rcx, qword ptr [rsp + 0x60]
22d27b mov      rax, qword ptr [rsp + 0x60]
22d280 sub      rcx, rax
22d283 mov      qword ptr [rsp + 0x68], rcx
22d288 mov      rax, qword ptr [rsp + 0x68]
22d28d add      rax, 0x3dd18f
22d293 jmp      0x14022da28
22d298 mov      ebx, 0xd13b13f3
22d29d mov      qword ptr [rsp + 0x20], rbx
22d2a2 mov      qword ptr [rsp + 0x28], 0x5f0efda7
22d2ab mov      rcx, qword ptr [rsp + 0x28]
22d2b0 mov      rax, qword ptr [rsp + 0x20]
22d2b5 xor      rcx, rax
22d2b8 mov      qword ptr [rsp + 0x30], rcx
22d2bd mov      rcx, qword ptr [rsp + 0x30]
22d2c2 mov      rax, qword ptr [rsp + 0x30]
22d2c7 imul     rcx, rax
22d2cb and      ecx, 1
22d2ce mov      rax, qword ptr [rsp + 0x30]
22d2d3 and      eax, 1
22d2d6 cmp      rcx, rax
22d2d9 je       0x14022d2eb
22d2db mov      rax, qword ptr [rsp + 0x30]
22d2e0 xor      rax, 0xdead
22d2e6 mov      qword ptr [rsp + 0x30], rax
22d2eb mov      rax, qword ptr [rsp + 0x30]
22d2f0 mov      ebx, 0xd0dedbed
22d2f5 mov      qword ptr [rsp + 0x20], rbx
22d2fa mov      ebx, 0xd6df1435
22d2ff mov      qword ptr [rsp + 0x28], rbx
22d304 mov      rcx, qword ptr [rsp + 0x28]
22d309 mov      rax, qword ptr [rsp + 0x20]
22d30e xor      rcx, rax
22d311 mov      qword ptr [rsp + 0x30], rcx
22d316 mov      rcx, qword ptr [rsp + 0x30]
22d31b mov      rax, qword ptr [rsp + 0x30]
22d320 xor      rcx, rax
22d323 mov      rax, qword ptr [rsp + 0x30]
22d328 add      rax, rcx
22d32b mov      qword ptr [rsp + 0x30], rax
22d330 mov      rax, qword ptr [rsp + 0x30]
22d335 mov      ebx, 0xbea39ac5
22d33a mov      qword ptr [rsp + 0x48], rbx
22d33f mov      rcx, qword ptr [rsp + 0x48]
22d344 mov      rax, qword ptr [rsp + 0x48]
22d349 xor      rcx, rax
22d34c mov      qword ptr [rsp + 0x50], rcx
22d351 mov      rcx, qword ptr [rsp + 0x50]
22d356 or       rcx, qword ptr [rsp + 0x4d8]
22d35e mov      rax, qword ptr [rsp + 0x50]
22d363 and      rax, qword ptr [rsp + 0x4d8]
22d36b sub      rcx, rax
22d36e mov      qword ptr [rsp + 0x4d8], rcx
22d376 mov      rcx, qword ptr [rsp + 0x50]
22d37b and      rcx, qword ptr [rsp + 0x4d8]
22d383 add      rcx, rcx
22d386 mov      rax, qword ptr [rsp + 0x50]
22d38b xor      rax, qword ptr [rsp + 0x4d8]
22d393 add      rax, rcx
22d396 mov      qword ptr [rsp + 0x58], rax
22d39b mov      rcx, qword ptr [rsp + 0x50]
22d3a0 or       rcx, qword ptr [rsp + 0x1b0]
22d3a8 mov      rax, qword ptr [rsp + 0x50]
22d3ad and      rax, qword ptr [rsp + 0x1b0]
22d3b5 sub      rcx, rax
22d3b8 mov      qword ptr [rsp + 0x1b0], rcx
22d3c0 mov      rax, qword ptr [rsp + 0x58]
22d3c5 mov      rcx, qword ptr [rsp + 0x4d8]
22d3cd xor      rcx, 0x36
22d3d1 call     0x140002040
22d3d6 mov      qword ptr [rsp + 0x4d8], rax
22d3de mov      rdx, qword ptr [rsp + 0x1b0]
22d3e6 xor      rdx, rax
22d3e9 mov      r8d, 0x215f9a
22d3ef lea      rcx, [rsp + 0x190]
22d3f7 call     0x1401f1520
22d3fc mov      rcx, qword ptr [rsp + 0x4d8]
22d404 mov      rax, rcx
22d407 and      rax, 0xfffffffffffffffe
22d40b sub      rcx, rax
22d40e cmp      rcx, 2
22d412 jb       0x14022d476
22d414 mov      qword ptr [rsp + 0x20], 0x11470051
22d41d mov      qword ptr [rsp + 0x28], 0x32028697
22d426 mov      rcx, qword ptr [rsp + 0x28]
22d42b mov      rax, qword ptr [rsp + 0x20]
22d430 xor      rcx, rax
22d433 mov      qword ptr [rsp + 0x30], rcx
22d438 mov      qword ptr [rsp + 0x78], r12
22d43d nop      dword ptr [rax]
22d440 mov      rax, qword ptr [rsp + 0x78]
22d445 cmp      rax, 3
22d449 jae      0x14022d471
22d44b mov      rcx, qword ptr [rsp + 0x30]
22d450 mov      rax, qword ptr [rsp + 0x78]
22d455 add      rcx, rax
22d458 call     0x140002040
22d45d mov      qword ptr [rsp + 0x30], rax
22d462 mov      rax, qword ptr [rsp + 0x78]
22d467 inc      rax
22d46a mov      qword ptr [rsp + 0x78], rax
22d46f jmp      0x14022d440
22d471 mov      rax, qword ptr [rsp + 0x30]
22d476 mov      qword ptr [rsp + 0x60], 0x4eea8a9b
22d47f mov      rax, qword ptr [rsp + 0x60]
22d484 mov      rcx, qword ptr [rsp + 0x60]
22d489 mov      rax, qword ptr [rsp + 0x60]
22d48e sub      rcx, rax
22d491 mov      qword ptr [rsp + 0x68], rcx
22d496 mov      rcx, qword ptr [rsp + 0x68]
22d49b and      ecx, 0x2ecf28
22d4a1 add      rcx, rcx
22d4a4 mov      rax, qword ptr [rsp + 0x68]
22d4a9 xor      rax, 0x2ecf28
22d4af jmp      0x140232cbb
22d4b4 mov      rcx, qword ptr [rsp + 0x1b0]
22d4bc xor      rcx, qword ptr [rsp + 0x4d8]
22d4c4 call     0x140002040
22d4c9 mov      qword ptr [rsp + 0x40], rax
22d4ce mov      rax, qword ptr [rsp + 0x40]
22d4d3 mov      eax, 0xb8bdc471
22d4d8 mov      qword ptr [rsp + 0x48], rax
22d4dd mov      rdx, qword ptr [rsp + 0x48]
22d4e2 mov      rax, qword ptr [rsp + 0x48]
22d4e7 xor      rdx, rax
22d4ea mov      rcx, qword ptr [rsp + 0x48]
22d4ef mov      rax, qword ptr [rsp + 0x48]
22d4f4 sub      rcx, rax
22d4f7 or       rcx, rdx
22d4fa mov      qword ptr [rsp + 0x50], rcx
22d4ff mov      rcx, qword ptr [rsp + 0x50]
22d504 or       rcx, qword ptr [rsp + 0x4d8]
22d50c mov      rax, qword ptr [rsp + 0x50]
22d511 and      rax, qword ptr [rsp + 0x4d8]
22d519 sub      rcx, rax
22d51c mov      qword ptr [rsp + 0x4d8], rcx
22d524 mov      rcx, qword ptr [rsp + 0x50]
22d529 and      rcx, qword ptr [rsp + 0x4d8]
22d531 add      rcx, rcx
22d534 mov      rax, qword ptr [rsp + 0x50]
22d539 xor      rax, qword ptr [rsp + 0x4d8]
22d541 add      rax, rcx
22d544 mov      qword ptr [rsp + 0x58], rax
22d549 mov      rcx, qword ptr [rsp + 0x50]
22d54e or       rcx, qword ptr [rsp + 0x1b0]
22d556 mov      rax, qword ptr [rsp + 0x50]
22d55b and      rax, qword ptr [rsp + 0x1b0]
22d563 sub      rcx, rax
22d566 mov      qword ptr [rsp + 0x1b0], rcx
22d56e mov      rcx, qword ptr [rsp + 0x50]
22d573 or       rcx, qword ptr [rsp + 0x1378]
22d57b mov      rax, qword ptr [rsp + 0x50]
22d580 and      rax, qword ptr [rsp + 0x1378]
22d588 add      rax, rcx
22d58b mov      qword ptr [rsp + 0x1378], rax
22d593 mov      rax, qword ptr [rsp + 0x58]
22d598 mov      rax, qword ptr [rsp + 0x4d8]
22d5a0 xor      rax, 0xb
22d5a4 mov      qword ptr [rsp + 0x38], rax
22d5a9 mov      rcx, qword ptr [rsp + 0x38]
22d5ae call     0x140002040
22d5b3 mov      qword ptr [rsp + 0x4d8], rax
22d5bb mov      rdx, qword ptr [rsp + 0x1b0]
22d5c3 xor      rdx, rax
22d5c6 mov      r8d, 0x6cc5d
22d5cc lea      rcx, [rsp + 0x190]
22d5d4 call     0x1401f1520
22d5d9 movzx    eax, byte ptr [rsp + 0x4d8]
22d5e1 lea      ecx, [rax + 0xff]
22d5e7 or       cl, al
22d5e9 test     cl, 1
22d5ec je       0x14022d62a
22d5ee mov      ebx, 0xe108330d
22d5f3 mov      qword ptr [rsp + 0x60], rbx
22d5f8 mov      rax, qword ptr [rsp + 0x60]
22d5fd mov      rcx, qword ptr [rsp + 0x60]
22d602 mov      rax, qword ptr [rsp + 0x60]
22d607 sub      rcx, rax
22d60a mov      qword ptr [rsp + 0x68], rcx
22d60f mov      rcx, qword ptr [rsp + 0x68]
22d614 or       rcx, 0x35917d
22d61b mov      rax, qword ptr [rsp + 0x68]
22d620 and      eax, 0x35917d
22d625 jmp      0x140232cbb
22d62a mov      qword ptr [rsp + 0x20], 0x5adedc95
22d633 mov      qword ptr [rsp + 0x28], 0x3ec76ac7
22d63c mov      rcx, qword ptr [rsp + 0x28]
22d641 mov      rax, qword ptr [rsp + 0x20]
22d646 xor      rcx, rax
22d649 mov      qword ptr [rsp + 0x30], rcx
22d64e mov      rcx, qword ptr [rsp + 0x30]
22d653 mov      rax, qword ptr [rsp + 0x30]
22d658 imul     rcx, rax
22d65c and      ecx, 1
22d65f mov      rax, qword ptr [rsp + 0x30]
22d664 and      eax, 1
22d667 cmp      rcx, rax
22d66a je       0x14022d67c
22d66c mov      rax, qword ptr [rsp + 0x30]
22d671 xor      rax, 0xdead
22d677 mov      qword ptr [rsp + 0x30], rax
22d67c mov      rax, qword ptr [rsp + 0x30]
22d681 mov      ebx, 0xe108330d
22d686 mov      qword ptr [rsp + 0x60], rbx
22d68b mov      rax, qword ptr [rsp + 0x60]
22d690 mov      rcx, qword ptr [rsp + 0x60]
22d695 mov      rax, qword ptr [rsp + 0x60]
22d69a sub      rcx, rax
22d69d mov      qword ptr [rsp + 0x68], rcx
22d6a2 mov      rcx, qword ptr [rsp + 0x68]
22d6a7 or       rcx, 0x35917d
22d6ae mov      rax, qword ptr [rsp + 0x68]
22d6b3 and      eax, 0x35917d
22d6b8 add      rax, rcx
22d6bb mov      qword ptr [rsp + 0x70], rax
22d6c0 mov      rdx, qword ptr [rsp + 0x70]
22d6c5 mov      rax, qword ptr [rsp + 0x68]
22d6ca or       edx, eax
22d6cc mov      rcx, qword ptr [rsp + 0x70]
22d6d1 mov      rax, qword ptr [rsp + 0x68]
22d6d6 and      ecx, eax
22d6d8 sub      edx, ecx
22d6da movsxd   rdx, edx
22d6dd jmp      0x140232664
22d6e2 mov      rdx, qword ptr [rsp + 0x4d8]
22d6ea mov      rcx, rdx
22d6ed and      rcx, 0xfffffffffffffffe
22d6f1 mov      rax, rdx
22d6f4 sub      rax, rcx
22d6f7 cmp      rax, 1
22d6fb jbe      0x14022d76e
22d6fd mov      eax, 0xb8deb3e9
22d702 mov      qword ptr [rsp + 0x20], rax
22d707 mov      eax, 0xa799192f
22d70c mov      qword ptr [rsp + 0x28], rax
22d711 mov      rcx, qword ptr [rsp + 0x28]
22d716 mov      rax, qword ptr [rsp + 0x20]
22d71b xor      rcx, rax
22d71e mov      qword ptr [rsp + 0x30], rcx
22d723 mov      qword ptr [rsp + 0x78], r12
22d728 nop      dword ptr [rax + rax]
22d730 mov      rax, qword ptr [rsp + 0x78]
22d735 cmp      rax, 2
22d739 jae      0x14022d761
22d73b mov      rcx, qword ptr [rsp + 0x30]
22d740 mov      rax, qword ptr [rsp + 0x78]
22d745 add      rcx, rax
22d748 call     0x140002040
22d74d mov      qword ptr [rsp + 0x30], rax
22d752 mov      rax, qword ptr [rsp + 0x78]
22d757 inc      rax
22d75a mov      qword ptr [rsp + 0x78], rax
22d75f jmp      0x14022d730
22d761 mov      rax, qword ptr [rsp + 0x30]
22d766 mov      rdx, qword ptr [rsp + 0x4d8]
22d76e mov      rcx, qword ptr [rsp + 0x1b0]
22d776 xor      rcx, rdx
22d779 call     0x140002040
22d77e mov      qword ptr [rsp + 0x40], rax
22d783 mov      rax, qword ptr [rsp + 0x40]
22d788 mov      ebx, 0xf0bced47
22d78d mov      qword ptr [rsp + 0x48], rbx
22d792 mov      rax, qword ptr [rsp + 0x48]
22d797 mov      qword ptr [rsp + 0x50], r12
22d79c mov      rax, qword ptr [rsp + 0x50]
22d7a1 xor      qword ptr [rsp + 0x4d8], rax
22d7a9 mov      rax, qword ptr [rsp + 0x50]
22d7ae add      rax, qword ptr [rsp + 0x4d8]
22d7b6 mov      qword ptr [rsp + 0x58], rax
22d7bb mov      rax, qword ptr [rsp + 0x50]
22d7c0 xor      qword ptr [rsp + 0x1b0], rax
22d7c8 mov      rax, qword ptr [rsp + 0x58]
22d7cd mov      rax, qword ptr [rsp + 0x4d8]
22d7d5 xor      rax, 0x3a
22d7d9 mov      qword ptr [rsp + 0x38], rax
22d7de mov      rcx, qword ptr [rsp + 0x38]
22d7e3 call     0x140002040
22d7e8 mov      qword ptr [rsp + 0x4d8], rax
22d7f0 mov      rdx, qword ptr [rsp + 0x1b0]
22d7f8 xor      rdx, rax
22d7fb mov      r8d, 0x23d876
22d801 lea      rcx, [rsp + 0x190]
22d809 call     0x1401f1520
22d80e mov      ebx, 0xcd12fe37
22d813 mov      qword ptr [rsp + 0x60], rbx
22d818 mov      rax, qword ptr [rsp + 0x60]
22d81d mov      rcx, qword ptr [rsp + 0x60]
22d822 mov      rax, qword ptr [rsp + 0x60]
22d827 sub      rcx, rax
22d82a mov      qword ptr [rsp + 0x68], rcx
22d82f mov      rax, qword ptr [rsp + 0x68]
22d834 add      rax, 0x28aab7
22d83a jmp      0x14022e08f
22d83f cmp      eax, 0x17ed28
22d844 je       0x14022dd21
22d84a cmp      eax, 0x181c8c
22d84f je       0x14022dc2d
22d855 cmp      eax, 0x18ea1c
22d85a je       0x14022da51
22d860 cmp      eax, 0x190631
22d865 jne      0x140232642
22d86b movsxd   rax, dword ptr [rsp + 0x1370]
22d873 xor      rax, qword ptr [rsp + 0x4d8]
22d87b mov      qword ptr [rsp + 0x38], rax
22d880 mov      rdx, qword ptr [rsp + 0x38]
22d885 mov      rax, qword ptr [rsp + 0x38]
22d88a xor      rdx, rax
22d88d mov      rcx, qword ptr [rsp + 0x38]
22d892 add      rcx, rdx
22d895 call     0x140002040
22d89a mov      qword ptr [rsp + 0x4d8], rax
22d8a2 mov      qword ptr [rsp + 0x48], 0x4f6143cd
22d8ab mov      rax, qword ptr [rsp + 0x48]
22d8b0 mov      qword ptr [rsp + 0x50], r12
22d8b5 mov      rcx, qword ptr [rsp + 0x50]
22d8ba and      rcx, qword ptr [rsp + 0x4d8]
22d8c2 not      rcx
22d8c5 mov      rax, qword ptr [rsp + 0x50]
22d8ca or       rax, qword ptr [rsp + 0x4d8]
22d8d2 and      rax, rcx
22d8d5 mov      qword ptr [rsp + 0x4d8], rax
22d8dd mov      rcx, qword ptr [rsp + 0x50]
22d8e2 and      rcx, qword ptr [rsp + 0x4d8]
22d8ea add      rcx, rcx
22d8ed mov      rax, qword ptr [rsp + 0x50]
22d8f2 xor      rax, qword ptr [rsp + 0x4d8]
22d8fa add      rax, rcx
22d8fd mov      qword ptr [rsp + 0x58], rax
22d902 mov      rcx, qword ptr [rsp + 0x50]
22d907 or       rcx, qword ptr [rsp + 0x1b0]
22d90f mov      rax, qword ptr [rsp + 0x50]
22d914 and      rax, qword ptr [rsp + 0x1b0]
22d91c sub      rcx, rax
22d91f mov      qword ptr [rsp + 0x1b0], rcx
22d927 mov      rax, qword ptr [rsp + 0x50]
22d92c add      qword ptr [rsp + 0x1378], rax
22d934 mov      rax, qword ptr [rsp + 0x58]
22d939 mov      rax, qword ptr [rsp + 0x4d8]
22d941 mov      qword ptr [rsp + 0x38], rax
22d946 mov      rax, qword ptr [rsp + 0x38]
22d94b xor      rax, 2
22d94f mov      qword ptr [rsp + 0x38], rax
22d954 mov      rcx, qword ptr [rsp + 0x38]
22d959 call     0x140002040
22d95e mov      qword ptr [rsp + 0x4d8], rax
22d966 xor      rax, qword ptr [rsp + 0x1b0]
22d96e mov      r8d, 0x13c6e
22d974 mov      rdx, rax
22d977 lea      rcx, [rsp + 0x190]
22d97f call     0x1401f1520
22d984 movzx    eax, byte ptr [rsp + 0x4d8]
22d98c lea      ecx, [rax + 0xff]
22d992 or       cl, al
22d994 test     cl, 1
22d997 je       0x14022d9c9
22d999 mov      qword ptr [rsp + 0x60], 0x71769b49
22d9a2 mov      rax, qword ptr [rsp + 0x60]
22d9a7 mov      rcx, qword ptr [rsp + 0x60]
22d9ac mov      rax, qword ptr [rsp + 0x60]
22d9b1 sub      rcx, rax
22d9b4 mov      qword ptr [rsp + 0x68], rcx
22d9b9 mov      rax, qword ptr [rsp + 0x68]
22d9be add      rax, 0x116fdf
22d9c4 jmp      0x14022b880
22d9c9 mov      qword ptr [rsp + 0x20], 0x52287df7
22d9d2 mov      ebx, 0xe8ba72e7
22d9d7 mov      qword ptr [rsp + 0x28], rbx
22d9dc mov      rcx, qword ptr [rsp + 0x28]
22d9e1 mov      rax, qword ptr [rsp + 0x20]
22d9e6 xor      rcx, rax
22d9e9 mov      qword ptr [rsp + 0x30], rcx
22d9ee mov      rax, qword ptr [rsp + 0x30]
22d9f3 mov      qword ptr [rsp + 0x30], rax
22d9f8 mov      rax, qword ptr [rsp + 0x30]
22d9fd mov      qword ptr [rsp + 0x60], 0x71769b49
22da06 mov      rax, qword ptr [rsp + 0x60]
22da0b mov      rcx, qword ptr [rsp + 0x60]
22da10 mov      rax, qword ptr [rsp + 0x60]
22da15 sub      rcx, rax
22da18 mov      qword ptr [rsp + 0x68], rcx
22da1d mov      rax, qword ptr [rsp + 0x68]
22da22 add      rax, 0x116fdf
22da28 mov      qword ptr [rsp + 0x70], rax
22da2d mov      rdx, qword ptr [rsp + 0x70]
22da32 mov      rax, qword ptr [rsp + 0x68]
22da37 and      edx, eax
22da39 add      edx, edx
22da3b mov      rcx, qword ptr [rsp + 0x70]
22da40 sub      ecx, edx
22da42 mov      rax, qword ptr [rsp + 0x68]
22da47 add      eax, ecx
22da49 movsxd   rdx, eax
22da4c jmp      0x140232664
22da51 mov      rcx, qword ptr [rsp + 0x1b0]
22da59 xor      rcx, qword ptr [rsp + 0x4d8]
22da61 call     0x140002040
22da66 mov      qword ptr [rsp + 0x40], rax
22da6b mov      rax, qword ptr [rsp + 0x40]
22da70 movzx    eax, byte ptr [rsp + 0x4d8]
22da78 lea      ecx, [rax + 0xff]
22da7e mov      edx, eax
22da80 movzx    eax, cl
22da83 imul     eax, edx
22da86 test     al, 1
22da88 je       0x14022dad8
22da8a mov      qword ptr [rsp + 0x20], 0x5e66d27d
22da93 mov      qword ptr [rsp + 0x28], 0x2c2db4eb
22da9c mov      rcx, qword ptr [rsp + 0x28]
22daa1 mov      rax, qword ptr [rsp + 0x20]
22daa6 xor      rcx, rax
22daa9 mov      qword ptr [rsp + 0x30], rcx
22daae mov      rdx, qword ptr [rsp + 0x28]
22dab3 mov      rax, qword ptr [rsp + 0x20]
22dab8 and      rdx, rax
22dabb add      rdx, rdx
22dabe mov      rcx, qword ptr [rsp + 0x28]
22dac3 mov      rax, qword ptr [rsp + 0x20]
22dac8 xor      rcx, rax
22dacb add      rcx, rdx
22dace mov      qword ptr [rsp + 0x30], rcx
22dad3 mov      rax, qword ptr [rsp + 0x30]
22dad8 mov      qword ptr [rsp + 0x48], 0x10fb85eb
22dae1 mov      rcx, qword ptr [rsp + 0x48]
22dae6 mov      rax, qword ptr [rsp + 0x48]
22daeb xor      rcx, rax
22daee mov      qword ptr [rsp + 0x50], rcx
22daf3 mov      rcx, qword ptr [rsp + 0x50]
22daf8 and      rcx, qword ptr [rsp + 0x4d8]
22db00 not      rcx
22db03 mov      rax, qword ptr [rsp + 0x50]
22db08 or       rax, qword ptr [rsp + 0x4d8]
22db10 and      rax, rcx
22db13 mov      qword ptr [rsp + 0x4d8], rax
22db1b mov      rcx, qword ptr [rsp + 0x50]
22db20 and      rcx, qword ptr [rsp + 0x4d8]
22db28 add      rcx, rcx
22db2b mov      rax, qword ptr [rsp + 0x50]
22db30 xor      rax, qword ptr [rsp + 0x4d8]
22db38 add      rax, rcx
22db3b mov      qword ptr [rsp + 0x58], rax
22db40 mov      rax, qword ptr [rsp + 0x50]
22db45 mov      rcx, qword ptr [rsp + 0x1b0]
22db4d and      rax, rcx
22db50 add      rax, rax
22db53 sub      rcx, rax
22db56 mov      rax, qword ptr [rsp + 0x50]
22db5b add      rax, rcx
22db5e mov      qword ptr [rsp + 0x1b0], rax
22db66 mov      rax, qword ptr [rsp + 0x58]
22db6b mov      rcx, qword ptr [rsp + 0x4d8]
22db73 xor      rcx, 0x2b
22db77 call     0x140002040
22db7c mov      qword ptr [rsp + 0x4d8], rax
22db84 mov      rdx, qword ptr [rsp + 0x1b0]
22db8c xor      rdx, rax
22db8f mov      r8d, 0x1a933d
22db95 lea      rcx, [rsp + 0x190]
22db9d call     0x1401f1520
22dba2 mov      qword ptr [rsp + 0x20], 0x6866b3b
22dbab mov      ebx, 0x8dbd7b65
22dbb0 mov      qword ptr [rsp + 0x28], rbx
22dbb5 mov      rcx, qword ptr [rsp + 0x28]
22dbba mov      rax, qword ptr [rsp + 0x20]
22dbbf xor      rcx, rax
22dbc2 mov      qword ptr [rsp + 0x30], rcx
22dbc7 mov      rdx, qword ptr [rsp + 0x28]
22dbcc mov      rax, qword ptr [rsp + 0x20]
22dbd1 and      rdx, rax
22dbd4 add      rdx, rdx
22dbd7 mov      rcx, qword ptr [rsp + 0x28]
22dbdc mov      rax, qword ptr [rsp + 0x20]
22dbe1 xor      rcx, rax
22dbe4 add      rcx, rdx
22dbe7 mov      qword ptr [rsp + 0x30], rcx
22dbec mov      rax, qword ptr [rsp + 0x30]
22dbf1 mov      ebx, 0x87da3311
22dbf6 mov      qword ptr [rsp + 0x60], rbx
22dbfb mov      rax, qword ptr [rsp + 0x60]
22dc00 mov      rcx, qword ptr [rsp + 0x60]
22dc05 mov      rax, qword ptr [rsp + 0x60]
22dc0a sub      rcx, rax
22dc0d mov      qword ptr [rsp + 0x68], rcx
22dc12 mov      rcx, qword ptr [rsp + 0x68]
22dc17 or       rcx, 0x3bcca
22dc1e mov      rax, qword ptr [rsp + 0x68]
22dc23 and      eax, 0x3bcca
22dc28 jmp      0x140232cbb
22dc2d mov      qword ptr [rsp + 0x20], 0x46ebc843
22dc36 mov      eax, 0xfc67cfe9
22dc3b mov      qword ptr [rsp + 0x28], rax
22dc40 mov      rcx, qword ptr [rsp + 0x28]
22dc45 mov      rax, qword ptr [rsp + 0x20]
22dc4a xor      rcx, rax
22dc4d mov      qword ptr [rsp + 0x30], rcx
22dc52 mov      rax, qword ptr [rsp + 0x30]
22dc57 dec      rax
22dc5a mov      rcx, qword ptr [rsp + 0x30]
22dc5f xor      cl, al
22dc61 test     cl, 1
22dc64 jne      0x14022dc76
22dc66 mov      rax, qword ptr [rsp + 0x30]
22dc6b xor      rax, 0xdead
22dc71 mov      qword ptr [rsp + 0x30], rax
22dc76 mov      rax, qword ptr [rsp + 0x30]
22dc7b movsxd   rax, dword ptr [rsp + 0x1370]
22dc83 xor      rax, qword ptr [rsp + 0x4d8]
22dc8b mov      qword ptr [rsp + 0x38], rax
22dc90 mov      rax, qword ptr [rsp + 0x38]
22dc95 mov      rcx, qword ptr [rsp + 0x38]
22dc9a mov      rax, qword ptr [rsp + 0x38]
22dc9f and      rcx, rax
22dca2 call     0x140002040
22dca7 mov      qword ptr [rsp + 0x4d8], rax
22dcaf movzx    edx, byte ptr [rsp + 0x63d]
22dcb7 xor      rdx, rax
22dcba mov      r8d, 0x147b4
22dcc0 lea      rcx, [rsp + 0x190]
22dcc8 call     0x1401f1520
22dccd movdqa   xmm0, xmmword ptr [rip + 0x1c3f2b]
22dcd5 movdqu   xmmword ptr [rsp + 0x13a8], xmm0
22dcde movzx    eax, byte ptr [rsp + 0x63d]
22dce6 mov      rcx, qword ptr [rsp + 0x1b0]
22dcee xor      rax, rcx
22dcf1 mov      rdx, qword ptr [rsp + 0x4d8]
22dcf9 xor      rax, rdx
22dcfc and      eax, 3
22dcff mov      ebx, dword ptr [rsp + rax*4 + 0x13a8]
22dd06 cmp      ebx, 0x1e7639
22dd0c cmove    ebx, r15d
22dd10 call     0x140002430
22dd15 test     eax, eax
22dd17 cmovne   ebx, esi
22dd1a mov      edx, ebx
22dd1c jmp      0x140232ce0
22dd21 mov      rcx, qword ptr [rsp + 0x1b0]
22dd29 xor      rcx, qword ptr [rsp + 0x4d8]
22dd31 call     0x140002040
22dd36 mov      qword ptr [rsp + 0x40], rax
22dd3b mov      rax, qword ptr [rsp + 0x40]
22dd40 mov      eax, 0xb1eae419
22dd45 mov      qword ptr [rsp + 0x48], rax
22dd4a mov      rdx, qword ptr [rsp + 0x48]
22dd4f mov      rax, qword ptr [rsp + 0x48]
22dd54 xor      rdx, rax
22dd57 mov      rcx, qword ptr [rsp + 0x48]
22dd5c mov      rax, qword ptr [rsp + 0x48]
22dd61 sub      rcx, rax
22dd64 or       rcx, rdx
22dd67 mov      qword ptr [rsp + 0x50], rcx
22dd6c mov      rax, qword ptr [rsp + 0x50]
22dd71 mov      rcx, qword ptr [rsp + 0x4d8]
22dd79 and      rax, rcx
22dd7c add      rax, rax
22dd7f sub      rcx, rax
22dd82 mov      rax, qword ptr [rsp + 0x50]
22dd87 add      rax, rcx
22dd8a mov      qword ptr [rsp + 0x4d8], rax
22dd92 mov      rcx, qword ptr [rsp + 0x50]
22dd97 and      rcx, qword ptr [rsp + 0x4d8]
22dd9f add      rcx, rcx
22dda2 mov      rax, qword ptr [rsp + 0x50]
22dda7 xor      rax, qword ptr [rsp + 0x4d8]
22ddaf add      rax, rcx
22ddb2 mov      qword ptr [rsp + 0x58], rax
22ddb7 mov      rcx, qword ptr [rsp + 0x50]
22ddbc or       rcx, qword ptr [rsp + 0x1b0]
22ddc4 mov      rax, qword ptr [rsp + 0x50]
22ddc9 and      rax, qword ptr [rsp + 0x1b0]
22ddd1 sub      rcx, rax
22ddd4 mov      qword ptr [rsp + 0x1b0], rcx
22dddc mov      rax, qword ptr [rsp + 0x50]
22dde1 add      qword ptr [rsp + 0x1378], rax
22dde9 mov      rax, qword ptr [rsp + 0x58]
22ddee mov      rax, qword ptr [rsp + 0x4d8]
22ddf6 xor      rax, 1
22ddfa mov      qword ptr [rsp + 0x38], rax
22ddff mov      rdx, qword ptr [rsp + 0x38]
22de04 mov      rax, qword ptr [rsp + 0x38]
22de09 xor      rdx, rax
22de0c mov      rcx, qword ptr [rsp + 0x38]
22de11 add      rcx, rdx
22de14 call     0x140002040
22de19 mov      qword ptr [rsp + 0x4d8], rax
22de21 xor      rax, qword ptr [rsp + 0x1b0]
22de29 mov      r8d, 0x9e37
22de2f mov      rdx, rax
22de32 lea      rcx, [rsp + 0x190]
22de3a call     0x1401f1520
22de3f mov      qword ptr [rsp + 0x20], 0x1e5b3977
22de48 mov      qword ptr [rsp + 0x28], 0x5a540739
22de51 mov      rcx, qword ptr [rsp + 0x28]
22de56 mov      rax, qword ptr [rsp + 0x20]
22de5b xor      rcx, rax
22de5e mov      qword ptr [rsp + 0x30], rcx
22de63 mov      qword ptr [rsp + 0x78], r12
22de68 nop      dword ptr [rax + rax]
22de70 mov      rax, qword ptr [rsp + 0x78]
22de75 cmp      rax, 1
22de79 jae      0x14022dea1
22de7b mov      rcx, qword ptr [rsp + 0x30]
22de80 mov      rax, qword ptr [rsp + 0x78]
22de85 add      rcx, rax
22de88 call     0x140002040
22de8d mov      qword ptr [rsp + 0x30], rax
22de92 mov      rax, qword ptr [rsp + 0x78]
22de97 inc      rax
22de9a mov      qword ptr [rsp + 0x78], rax
22de9f jmp      0x14022de70
22dea1 mov      rax, qword ptr [rsp + 0x30]
22dea6 mov      ebx, 0xc36141b5
22deab mov      qword ptr [rsp + 0x60], rbx
22deb0 mov      rax, qword ptr [rsp + 0x60]
22deb5 mov      rcx, qword ptr [rsp + 0x60]
22deba mov      rax, qword ptr [rsp + 0x60]
22debf sub      rcx, rax
22dec2 mov      qword ptr [rsp + 0x68], rcx
22dec7 mov      rcx, qword ptr [rsp + 0x68]
22decc and      ecx, 0x190631
22ded2 add      rcx, rcx
22ded5 mov      rax, qword ptr [rsp + 0x68]
22deda xor      rax, 0x190631
22dee0 add      rax, rcx
22dee3 mov      qword ptr [rsp + 0x70], rax
22dee8 mov      rax, qword ptr [rsp + 0x70]
22deed movsxd   rcx, eax
22def0 mov      rax, qword ptr [rsp + 0x68]
22def5 movsxd   r8, eax
22def8 or       r8, rcx
22defb mov      rax, qword ptr [rsp + 0x70]
22df00 mov      rcx, qword ptr [rsp + 0x68]
22df05 and      ecx, eax
22df07 not      ecx
22df09 movsxd   rdx, ecx
22df0c and      rdx, r8
22df0f jmp      0x140232664
22df14 movzx    eax, byte ptr [rsp + 0x4d8]
22df1c lea      ecx, [rax + 0xff]
22df22 xor      cl, al
22df24 test     cl, 1
22df27 jne      0x14022df77
22df29 mov      qword ptr [rsp + 0x20], 0x6df678df
22df32 mov      qword ptr [rsp + 0x28], 0x7518e871
22df3b mov      rcx, qword ptr [rsp + 0x28]
22df40 mov      rax, qword ptr [rsp + 0x20]
22df45 xor      rcx, rax
22df48 mov      qword ptr [rsp + 0x30], rcx
22df4d mov      rdx, qword ptr [rsp + 0x28]
22df52 mov      rax, qword ptr [rsp + 0x20]
22df57 and      rdx, rax
22df5a add      rdx, rdx
22df5d mov      rcx, qword ptr [rsp + 0x28]
22df62 mov      rax, qword ptr [rsp + 0x20]
22df67 xor      rcx, rax
22df6a add      rcx, rdx
22df6d mov      qword ptr [rsp + 0x30], rcx
22df72 mov      rax, qword ptr [rsp + 0x30]
22df77 mov      rcx, qword ptr [rsp + 0x1b0]
22df7f xor      rcx, qword ptr [rsp + 0x4d8]
22df87 call     0x140002040
22df8c mov      qword ptr [rsp + 0x40], rax
22df91 mov      rax, qword ptr [rsp + 0x40]
22df96 mov      ebx, 0xe661213f
22df9b mov      qword ptr [rsp + 0x48], rbx
22dfa0 mov      rax, qword ptr [rsp + 0x48]
22dfa5 mov      qword ptr [rsp + 0x50], r12
22dfaa mov      rax, qword ptr [rsp + 0x50]
22dfaf xor      qword ptr [rsp + 0x4d8], rax
22dfb7 mov      rax, qword ptr [rsp + 0x50]
22dfbc add      rax, qword ptr [rsp + 0x4d8]
22dfc4 mov      qword ptr [rsp + 0x58], rax
22dfc9 mov      rcx, qword ptr [rsp + 0x50]
22dfce or       rcx, qword ptr [rsp + 0x1b0]
22dfd6 mov      rax, qword ptr [rsp + 0x50]
22dfdb and      rax, qword ptr [rsp + 0x1b0]
22dfe3 sub      rcx, rax
22dfe6 mov      qword ptr [rsp + 0x1b0], rcx
22dfee mov      rcx, qword ptr [rsp + 0x50]
22dff3 and      rcx, qword ptr [rsp + 0x1378]
22dffb add      rcx, rcx
22dffe mov      rax, qword ptr [rsp + 0x50]
22e003 xor      rax, qword ptr [rsp + 0x1378]
22e00b add      rax, rcx
22e00e mov      qword ptr [rsp + 0x1378], rax
22e016 mov      rax, qword ptr [rsp + 0x58]
22e01b mov      rcx, qword ptr [rsp + 0x4d8]
22e023 xor      rcx, 0x16
22e027 call     0x140002040
22e02c mov      qword ptr [rsp + 0x4d8], rax
22e034 mov      rdx, qword ptr [rsp + 0x1b0]
22e03c xor      rdx, rax
22e03f mov      r8d, 0xd98ba
22e045 lea      rcx, [rsp + 0x190]
22e04d call     0x1401f1520
22e052 mov      ebx, 0xa63d3961
22e057 mov      qword ptr [rsp + 0x60], rbx
22e05c mov      rax, qword ptr [rsp + 0x60]
22e061 mov      rcx, qword ptr [rsp + 0x60]
22e066 mov      rax, qword ptr [rsp + 0x60]
22e06b sub      rcx, rax
22e06e mov      qword ptr [rsp + 0x68], rcx
22e073 mov      rcx, qword ptr [rsp + 0x68]
22e078 and      ecx, 0x35a70b
22e07e add      rcx, rcx
22e081 mov      rax, qword ptr [rsp + 0x68]
22e086 xor      rax, 0x35a70b
22e08c add      rax, rcx
22e08f mov      qword ptr [rsp + 0x70], rax
22e094 mov      rax, qword ptr [rsp + 0x70]
22e099 movsxd   rcx, eax
22e09c mov      rax, qword ptr [rsp + 0x68]
22e0a1 movsxd   r8, eax
22e0a4 or       r8, rcx
22e0a7 mov      rax, qword ptr [rsp + 0x70]
22e0ac mov      rcx, qword ptr [rsp + 0x68]
22e0b1 and      ecx, eax
22e0b3 not      ecx
22e0b5 movsxd   rdx, ecx
22e0b8 and      rdx, r8
22e0bb jmp      0x140232ce0
22e0c0 cmp      eax, 0x1cbf2d
22e0c5 jg       0x14022eb37
22e0cb je       0x14022e969
22e0d1 cmp      eax, 0x1a5672
22e0d6 je       0x14022e744
22e0dc cmp      eax, 0x1ad951
22e0e1 je       0x14022e4b6
22e0e7 cmp      eax, 0x1aeb1c
22e0ec je       0x14022e253
22e0f2 cmp      eax, 0x1c1c41
22e0f7 jne      0x140232642
22e0fd mov      rcx, qword ptr [rsp + 0x1b0]
22e105 xor      rcx, qword ptr [rsp + 0x4d8]
22e10d call     0x140002040
22e112 mov      qword ptr [rsp + 0x40], rax
22e117 mov      rax, qword ptr [rsp + 0x40]
22e11c mov      qword ptr [rsp + 0x48], 0x73c7f031
22e125 mov      rax, qword ptr [rsp + 0x48]
22e12a mov      qword ptr [rsp + 0x50], r12
22e12f mov      rcx, qword ptr [rsp + 0x50]
22e134 and      rcx, qword ptr [rsp + 0x4d8]
22e13c not      rcx
22e13f mov      rax, qword ptr [rsp + 0x50]
22e144 or       rax, qword ptr [rsp + 0x4d8]
22e14c and      rax, rcx
22e14f mov      qword ptr [rsp + 0x4d8], rax
22e157 mov      rax, qword ptr [rsp + 0x50]
22e15c add      rax, qword ptr [rsp + 0x4d8]
22e164 mov      qword ptr [rsp + 0x58], rax
22e169 mov      rcx, qword ptr [rsp + 0x50]
22e16e or       rcx, qword ptr [rsp + 0x1b0]
22e176 mov      rax, qword ptr [rsp + 0x50]
22e17b and      rax, qword ptr [rsp + 0x1b0]
22e183 sub      rcx, rax
22e186 mov      qword ptr [rsp + 0x1b0], rcx
22e18e mov      rax, qword ptr [rsp + 0x58]
22e193 mov      rcx, qword ptr [rsp + 0x4d8]
22e19b xor      rcx, 0x31
22e19f call     0x140002040
22e1a4 mov      qword ptr [rsp + 0x4d8], rax
22e1ac mov      rdx, qword ptr [rsp + 0x1b0]
22e1b4 xor      rdx, rax
22e1b7 mov      r8d, 0x1e4887
22e1bd lea      rcx, [rsp + 0x190]
22e1c5 call     0x1401f1520
22e1ca mov      ebx, 0x9256342f
22e1cf mov      qword ptr [rsp + 0x20], rbx
22e1d4 mov      qword ptr [rsp + 0x28], 0x11ed4257
22e1dd mov      rcx, qword ptr [rsp + 0x28]
22e1e2 mov      rax, qword ptr [rsp + 0x20]
22e1e7 xor      rcx, rax
22e1ea mov      qword ptr [rsp + 0x30], rcx
22e1ef mov      rcx, qword ptr [rsp + 0x30]
22e1f4 mov      rax, qword ptr [rsp + 0x30]
22e1f9 imul     rcx, rax
22e1fd and      ecx, 1
22e200 mov      rax, qword ptr [rsp + 0x30]
22e205 and      eax, 1
22e208 cmp      rcx, rax
22e20b je       0x14022e21d
22e20d mov      rax, qword ptr [rsp + 0x30]
22e212 xor      rax, 0xdead
22e218 mov      qword ptr [rsp + 0x30], rax
22e21d mov      rax, qword ptr [rsp + 0x30]
22e222 mov      ebx, 0xf9b18ebd
22e227 mov      qword ptr [rsp + 0x60], rbx
22e22c mov      rax, qword ptr [rsp + 0x60]
22e231 mov      rcx, qword ptr [rsp + 0x60]
22e236 mov      rax, qword ptr [rsp + 0x60]
22e23b sub      rcx, rax
22e23e mov      qword ptr [rsp + 0x68], rcx
22e243 mov      rax, qword ptr [rsp + 0x68]
22e248 add      rax, 0x2af9ad
22e24e jmp      0x1402319ec
22e253 movzx    eax, byte ptr [rsp + 0x4d8]
22e25b lea      ecx, [rax + 0xff]
22e261 mov      edx, eax
22e263 movzx    eax, cl
22e266 imul     eax, edx
22e269 test     al, 1
22e26b je       0x14022e314
22e271 mov      eax, 0xcc3acf65
22e276 mov      qword ptr [rsp + 0x20], rax
22e27b mov      eax, 0xbb4749b3
22e280 mov      qword ptr [rsp + 0x28], rax
22e285 mov      rcx, qword ptr [rsp + 0x28]
22e28a mov      rax, qword ptr [rsp + 0x20]
22e28f xor      rcx, rax
22e292 mov      qword ptr [rsp + 0x30], rcx
22e297 mov      rax, qword ptr [rsp + 0x30]
22e29c dec      rax
22e29f mov      rcx, qword ptr [rsp + 0x30]
22e2a4 movzx    edx, al
22e2a7 movzx    eax, cl
22e2aa imul     eax, edx
22e2ad test     al, 1
22e2af je       0x14022e2c1
22e2b1 mov      rax, qword ptr [rsp + 0x30]
22e2b6 xor      rax, 0xdead
22e2bc mov      qword ptr [rsp + 0x30], rax
22e2c1 mov      rax, qword ptr [rsp + 0x30]
22e2c6 mov      qword ptr [rsp + 0x20], 0x5ce5993b
22e2cf mov      qword ptr [rsp + 0x28], 0x1798b20f
22e2d8 mov      rcx, qword ptr [rsp + 0x28]
22e2dd mov      rax, qword ptr [rsp + 0x20]
22e2e2 xor      rcx, rax
22e2e5 mov      qword ptr [rsp + 0x30], rcx
22e2ea mov      rdx, qword ptr [rsp + 0x28]
22e2ef mov      rax, qword ptr [rsp + 0x20]
22e2f4 and      rdx, rax
22e2f7 add      rdx, rdx
22e2fa mov      rcx, qword ptr [rsp + 0x28]
22e2ff mov      rax, qword ptr [rsp + 0x20]
22e304 xor      rcx, rax
22e307 add      rcx, rdx
22e30a mov      qword ptr [rsp + 0x30], rcx
22e30f mov      rax, qword ptr [rsp + 0x30]
22e314 mov      ebx, 0xe995d18d
22e319 mov      qword ptr [rsp + 0x48], rbx
22e31e mov      rdx, qword ptr [rsp + 0x48]
22e323 mov      rax, qword ptr [rsp + 0x48]
22e328 xor      rdx, rax
22e32b mov      rcx, qword ptr [rsp + 0x48]
22e330 mov      rax, qword ptr [rsp + 0x48]
22e335 sub      rcx, rax
22e338 or       rcx, rdx
22e33b mov      qword ptr [rsp + 0x50], rcx
22e340 mov      rcx, qword ptr [rsp + 0x50]
22e345 and      rcx, qword ptr [rsp + 0x4d8]
22e34d not      rcx
22e350 mov      rax, qword ptr [rsp + 0x50]
22e355 or       rax, qword ptr [rsp + 0x4d8]
22e35d and      rax, rcx
22e360 mov      qword ptr [rsp + 0x4d8], rax
22e368 mov      rax, qword ptr [rsp + 0x50]
22e36d add      rax, qword ptr [rsp + 0x4d8]
22e375 mov      qword ptr [rsp + 0x58], rax
22e37a mov      rcx, qword ptr [rsp + 0x50]
22e37f and      rcx, qword ptr [rsp + 0x1b0]
22e387 not      rcx
22e38a mov      rax, qword ptr [rsp + 0x50]
22e38f or       rax, qword ptr [rsp + 0x1b0]
22e397 and      rax, rcx
22e39a mov      qword ptr [rsp + 0x1b0], rax
22e3a2 mov      rcx, qword ptr [rsp + 0x50]
22e3a7 or       rcx, qword ptr [rsp + 0x1378]
22e3af mov      rax, qword ptr [rsp + 0x50]
22e3b4 and      rax, qword ptr [rsp + 0x1378]
22e3bc add      rax, rcx
22e3bf mov      qword ptr [rsp + 0x1378], rax
22e3c7 mov      rax, qword ptr [rsp + 0x58]
22e3cc mov      rcx, qword ptr [rsp + 0x4d8]
22e3d4 xor      rcx, 0x1a
22e3d8 call     0x140002040
22e3dd mov      qword ptr [rsp + 0x4d8], rax
22e3e5 mov      rdx, qword ptr [rsp + 0x1b0]
22e3ed xor      rdx, rax
22e3f0 mov      r8d, 0x101196
22e3f6 lea      rcx, [rsp + 0x190]
22e3fe call     0x1401f1520
22e403 mov      rcx, qword ptr [rsp + 0x4d8]
22e40b mov      rax, rcx
22e40e and      rax, 0xfffffffffffffffe
22e412 sub      rcx, rax
22e415 cmp      rcx, 1
22e419 jbe      0x14022e486
22e41b mov      eax, 0xcdc86921
22e420 mov      qword ptr [rsp + 0x20], rax
22e425 mov      eax, 0xc3333361
22e42a mov      qword ptr [rsp + 0x28], rax
22e42f mov      rcx, qword ptr [rsp + 0x28]
22e434 mov      rax, qword ptr [rsp + 0x20]
22e439 xor      rcx, rax
22e43c mov      qword ptr [rsp + 0x30], rcx
22e441 mov      qword ptr [rsp + 0x78], r12
22e446 nop      word ptr [rax + rax]
22e450 mov      rax, qword ptr [rsp + 0x78]
22e455 cmp      rax, 3
22e459 jae      0x14022e481
22e45b mov      rcx, qword ptr [rsp + 0x30]
22e460 mov      rax, qword ptr [rsp + 0x78]
22e465 add      rcx, rax
22e468 call     0x140002040
22e46d mov      qword ptr [rsp + 0x30], rax
22e472 mov      rax, qword ptr [rsp + 0x78]
22e477 inc      rax
22e47a mov      qword ptr [rsp + 0x78], rax
22e47f jmp      0x14022e450
22e481 mov      rax, qword ptr [rsp + 0x30]
22e486 mov      qword ptr [rsp + 0x60], 0x6616d619
22e48f mov      rax, qword ptr [rsp + 0x60]
22e494 mov      rcx, qword ptr [rsp + 0x60]
22e499 mov      rax, qword ptr [rsp + 0x60]
22e49e sub      rcx, rax
22e4a1 mov      qword ptr [rsp + 0x68], rcx
22e4a6 mov      rax, qword ptr [rsp + 0x68]
22e4ab add      rax, 0x268dad
22e4b1 jmp      0x14022e08f
22e4b6 lea      rcx, [rsp + 0x190]
22e4be call     0x1401ee070
22e4c3 movzx    ecx, byte ptr [rsp + 0x63d]
22e4cb mov      eax, eax
22e4cd xor      rcx, rax
22e4d0 xor      rcx, qword ptr [rsp + 0x1378]
22e4d8 call     0x140002040
22e4dd mov      qword ptr [rsp + 0x1378], rax
22e4e5 mov      rcx, qword ptr [rsp + 0x1b8]
22e4ed xor      rcx, qword ptr [rsp + 0x1b0]
22e4f5 xor      rcx, rax
22e4f8 call     0x140002040
22e4fd mov      qword ptr [rsp + 0x1b0], rax
22e505 mov      edx, 9
22e50a lea      rcx, [rsp + 0x190]
22e512 call     0x1401eddd0
22e517 mov      edx, eax
22e519 lea      rcx, [rsp + 0x190]
22e521 call     0x1401f0910
22e526 mov      edx, 8
22e52b lea      rcx, [rsp + 0x190]
22e533 call     0x1401eddd0
22e538 mov      edx, eax
22e53a lea      rcx, [rsp + 0x190]
22e542 call     0x1401f0910
22e547 lea      rcx, [rsp + 0x190]
22e54f call     0x1401ee070
22e554 cmp      eax, dword ptr [rsp + 0x368]
22e55b jae      0x14022e56c
22e55d mov      edx, eax
22e55f lea      rcx, [rsp + 0x190]
22e567 call     0x1401f0910
22e56c mov      edx, 8
22e571 lea      rcx, [rsp + 0x190]
22e579 call     0x1401eddd0
22e57e mov      r8, rax
22e581 mov      edx, 9
22e586 lea      rcx, [rsp + 0x190]
22e58e call     0x1401edea0
22e593 movzx    eax, byte ptr [rsp + 0x4d8]
22e59b lea      ecx, [rax + 0xff]
22e5a1 xor      cl, al
22e5a3 test     cl, 1
22e5a6 jne      0x14022e608
22e5a8 mov      eax, 0xfed2f6bd
22e5ad mov      qword ptr [rsp + 0x20], rax
22e5b2 mov      qword ptr [rsp + 0x28], 0x411e24a1
22e5bb mov      rcx, qword ptr [rsp + 0x28]
22e5c0 mov      rax, qword ptr [rsp + 0x20]
22e5c5 xor      rcx, rax
22e5c8 mov      qword ptr [rsp + 0x30], rcx
22e5cd mov      qword ptr [rsp + 0x78], r12
22e5d2 mov      rax, qword ptr [rsp + 0x78]
22e5d7 cmp      rax, 3
22e5db jae      0x14022e603
22e5dd mov      rcx, qword ptr [rsp + 0x30]
22e5e2 mov      rax, qword ptr [rsp + 0x78]
22e5e7 add      rcx, rax
22e5ea call     0x140002040
22e5ef mov      qword ptr [rsp + 0x30], rax
22e5f4 mov      rax, qword ptr [rsp + 0x78]
22e5f9 inc      rax
22e5fc mov      qword ptr [rsp + 0x78], rax
22e601 jmp      0x14022e5d2
22e603 mov      rax, qword ptr [rsp + 0x30]
22e608 mov      rcx, qword ptr [rsp + 0x4d8]
22e610 mov      rax, rcx
22e613 and      rax, 0xfffffffffffffffe
22e617 sub      rcx, rax
22e61a cmp      rcx, 1
22e61e jbe      0x14022e678
22e620 mov      qword ptr [rsp + 0x20], 0x7a5c9f61
22e629 mov      eax, 0xfaf91699
22e62e mov      qword ptr [rsp + 0x28], rax
22e633 mov      rcx, qword ptr [rsp + 0x28]
22e638 mov      rax, qword ptr [rsp + 0x20]
22e63d xor      rcx, rax
22e640 mov      qword ptr [rsp + 0x30], rcx
22e645 mov      rcx, qword ptr [rsp + 0x30]
22e64a mov      rax, qword ptr [rsp + 0x30]
22e64f imul     rcx, rax
22e653 and      ecx, 1
22e656 mov      rax, qword ptr [rsp + 0x30]
22e65b and      eax, 1
22e65e cmp      rcx, rax
22e661 je       0x14022e673
22e663 mov      rax, qword ptr [rsp + 0x30]
22e668 xor      rax, 0xdead
22e66e mov      qword ptr [rsp + 0x30], rax
22e673 mov      rax, qword ptr [rsp + 0x30]
22e678 mov      qword ptr [rsp + 0x48], 0x21a5371d
22e681 mov      rdx, qword ptr [rsp + 0x48]
22e686 mov      rax, qword ptr [rsp + 0x48]
22e68b xor      rdx, rax
22e68e mov      rcx, qword ptr [rsp + 0x48]
22e693 mov      rax, qword ptr [rsp + 0x48]
22e698 sub      rcx, rax
22e69b or       rcx, rdx
22e69e mov      qword ptr [rsp + 0x50], rcx
22e6a3 mov      rax, qword ptr [rsp + 0x50]
22e6a8 xor      qword ptr [rsp + 0x4d8], rax
22e6b0 mov      rcx, qword ptr [rsp + 0x50]
22e6b5 or       rcx, qword ptr [rsp + 0x4d8]
22e6bd mov      rax, qword ptr [rsp + 0x50]
22e6c2 and      rax, qword ptr [rsp + 0x4d8]
22e6ca add      rax, rcx
22e6cd mov      qword ptr [rsp + 0x58], rax
22e6d2 mov      rcx, qword ptr [rsp + 0x50]
22e6d7 or       rcx, qword ptr [rsp + 0x1b0]
22e6df mov      rax, qword ptr [rsp + 0x50]
22e6e4 and      rax, qword ptr [rsp + 0x1b0]
22e6ec sub      rcx, rax
22e6ef mov      qword ptr [rsp + 0x1b0], rcx
22e6f7 mov      rax, qword ptr [rsp + 0x50]
22e6fc add      qword ptr [rsp + 0x1378], rax
22e704 mov      rax, qword ptr [rsp + 0x58]
22e709 mov      rdx, qword ptr [rsp + 0x4d8]
22e711 mov      rcx, qword ptr [rsp + 0x1b0]
22e719 call     0x1400023e0
22e71e test     eax, eax
22e720 je       0x14022e73a
22e722 movzx    eax, byte ptr [rsp + 0x4d8]
22e72a and      al, 3
22e72c cmp      al, 1
22e72e jne      0x14022e73a
22e730 mov      edx, 0x190631
22e735 jmp      0x140232ce0
22e73a mov      edx, 0x77d1d
22e73f jmp      0x140232ce0
22e744 movzx    edx, byte ptr [rsp + 0x4d8]
22e74c lea      eax, [rdx + 0xff]
22e752 xor      al, dl
22e754 test     al, 1
22e756 jne      0x14022e78e
22e758 mov      qword ptr [rsp + 0x20], 0x64a244f1
22e761 mov      qword ptr [rsp + 0x28], 0xe178643
22e76a mov      rcx, qword ptr [rsp + 0x28]
22e76f mov      rax, qword ptr [rsp + 0x20]
22e774 xor      rcx, rax
22e777 mov      qword ptr [rsp + 0x30], rcx
22e77c mov      rax, qword ptr [rsp + 0x30]
22e781 mov      rax, qword ptr [rsp + 0x30]
22e786 movzx    edx, byte ptr [rsp + 0x4d8]
22e78e movzx    eax, dl
22e791 movzx    ecx, dl
22e794 imul     ecx, eax
22e797 xor      cl, dl
22e799 test     cl, 1
22e79c je       0x14022e806
22e79e mov      qword ptr [rsp + 0x20], 0xc7be0ff
22e7a7 mov      eax, 0xa797d757
22e7ac mov      qword ptr [rsp + 0x28], rax
22e7b1 mov      rcx, qword ptr [rsp + 0x28]
22e7b6 mov      rax, qword ptr [rsp + 0x20]
22e7bb xor      rcx, rax
22e7be mov      qword ptr [rsp + 0x30], rcx
22e7c3 mov      qword ptr [rsp + 0x78], r12
22e7c8 nop      dword ptr [rax + rax]
22e7d0 mov      rax, qword ptr [rsp + 0x78]
22e7d5 cmp      rax, 3
22e7d9 jae      0x14022e801
22e7db mov      rcx, qword ptr [rsp + 0x30]
22e7e0 mov      rax, qword ptr [rsp + 0x78]
22e7e5 add      rcx, rax
22e7e8 call     0x140002040
22e7ed mov      qword ptr [rsp + 0x30], rax
22e7f2 mov      rax, qword ptr [rsp + 0x78]
22e7f7 inc      rax
22e7fa mov      qword ptr [rsp + 0x78], rax
22e7ff jmp      0x14022e7d0
22e801 mov      rax, qword ptr [rsp + 0x30]
22e806 mov      ebx, 0xe5b8e601
22e80b mov      qword ptr [rsp + 0x48], rbx
22e810 mov      rcx, qword ptr [rsp + 0x48]
22e815 mov      rax, qword ptr [rsp + 0x48]
22e81a sub      rcx, rax
22e81d mov      qword ptr [rsp + 0x50], rcx
22e822 mov      rcx, qword ptr [rsp + 0x50]
22e827 and      rcx, qword ptr [rsp + 0x4d8]
22e82f not      rcx
22e832 mov      rax, qword ptr [rsp + 0x50]
22e837 or       rax, qword ptr [rsp + 0x4d8]
22e83f and      rax, rcx
22e842 mov      qword ptr [rsp + 0x4d8], rax
22e84a mov      rcx, qword ptr [rsp + 0x50]
22e84f or       rcx, qword ptr [rsp + 0x4d8]
22e857 mov      rax, qword ptr [rsp + 0x50]
22e85c and      rax, qword ptr [rsp + 0x4d8]
22e864 add      rax, rcx
22e867 mov      qword ptr [rsp + 0x58], rax
22e86c mov      rax, qword ptr [rsp + 0x50]
22e871 xor      qword ptr [rsp + 0x1b0], rax
22e879 mov      rax, qword ptr [rsp + 0x50]
22e87e add      qword ptr [rsp + 0x1378], rax
22e886 mov      rax, qword ptr [rsp + 0x58]
22e88b mov      rcx, qword ptr [rsp + 0x4d8]
22e893 xor      rcx, 0x38
22e897 call     0x140002040
22e89c mov      qword ptr [rsp + 0x4d8], rax
22e8a4 mov      rdx, qword ptr [rsp + 0x1b0]
22e8ac xor      rdx, rax
22e8af mov      r8d, 0x229c08
22e8b5 lea      rcx, [rsp + 0x190]
22e8bd call     0x1401f1520
22e8c2 movzx    eax, byte ptr [rsp + 0x4d8]
22e8ca lea      ecx, [rax + 0xff]
22e8d0 mov      edx, eax
22e8d2 movzx    eax, cl
22e8d5 imul     eax, edx
22e8d8 test     al, 1
22e8da je       0x14022e92b
22e8dc mov      eax, 0x91f97d01
22e8e1 mov      qword ptr [rsp + 0x20], rax
22e8e6 mov      eax, 0xef796b83
22e8eb mov      qword ptr [rsp + 0x28], rax
22e8f0 mov      rcx, qword ptr [rsp + 0x28]
22e8f5 mov      rax, qword ptr [rsp + 0x20]
22e8fa xor      rcx, rax
22e8fd mov      qword ptr [rsp + 0x30], rcx
22e902 mov      rax, qword ptr [rsp + 0x30]
22e907 dec      rax
22e90a mov      rcx, qword ptr [rsp + 0x30]
22e90f xor      cl, al
22e911 test     cl, 1
22e914 jne      0x14022e926
22e916 mov      rax, qword ptr [rsp + 0x30]
22e91b xor      rax, 0xdead
22e921 mov      qword ptr [rsp + 0x30], rax
22e926 mov      rax, qword ptr [rsp + 0x30]
22e92b mov      qword ptr [rsp + 0x60], 0x22eaab35
22e934 mov      rax, qword ptr [rsp + 0x60]
22e939 mov      rcx, qword ptr [rsp + 0x60]
22e93e mov      rax, qword ptr [rsp + 0x60]
22e943 sub      rcx, rax
22e946 mov      qword ptr [rsp + 0x68], rcx
22e94b mov      rcx, qword ptr [rsp + 0x68]
22e950 or       rcx, 0xf5594
22e957 mov      rax, qword ptr [rsp + 0x68]
22e95c and      eax, 0xf5594
22e961 add      rax, rcx
22e964 jmp      0x1402319ec
22e969 mov      rax, qword ptr [rsp + 0x4d8]
22e971 mov      qword ptr [rsp + 0x38], rax
22e976 movsxd   rcx, dword ptr [rsp + 0x1370]
22e97e mov      rax, qword ptr [rsp + 0x38]
22e983 xor      rcx, rax
22e986 mov      qword ptr [rsp + 0x38], rcx
22e98b mov      rcx, qword ptr [rsp + 0x38]
22e990 call     0x140002040
22e995 mov      qword ptr [rsp + 0x4d8], rax
22e99d mov      qword ptr [rsp + 0x20], 0x531fe013
22e9a6 mov      qword ptr [rsp + 0x28], 0x3a9ffa87
22e9af mov      rcx, qword ptr [rsp + 0x28]
22e9b4 mov      rax, qword ptr [rsp + 0x20]
22e9b9 xor      rcx, rax
22e9bc mov      qword ptr [rsp + 0x30], rcx
22e9c1 mov      qword ptr [rsp + 0x78], r12
22e9c6 nop      word ptr [rax + rax]
22e9d0 mov      rax, qword ptr [rsp + 0x78]
22e9d5 cmp      rax, 1
22e9d9 jae      0x14022ea01
22e9db mov      rcx, qword ptr [rsp + 0x30]
22e9e0 mov      rax, qword ptr [rsp + 0x78]
22e9e5 add      rcx, rax
22e9e8 call     0x140002040
22e9ed mov      qword ptr [rsp + 0x30], rax
22e9f2 mov      rax, qword ptr [rsp + 0x78]
22e9f7 inc      rax
22e9fa mov      qword ptr [rsp + 0x78], rax
22e9ff jmp      0x14022e9d0
22ea01 mov      rax, qword ptr [rsp + 0x30]
22ea06 mov      eax, 0xe5b85d83
22ea0b mov      qword ptr [rsp + 0x48], rax
22ea10 mov      rcx, qword ptr [rsp + 0x48]
22ea15 mov      rax, qword ptr [rsp + 0x48]
22ea1a sub      rcx, rax
22ea1d mov      qword ptr [rsp + 0x50], rcx
22ea22 mov      rax, qword ptr [rsp + 0x50]
22ea27 xor      qword ptr [rsp + 0x4d8], rax
22ea2f mov      rcx, qword ptr [rsp + 0x50]
22ea34 and      rcx, qword ptr [rsp + 0x4d8]
22ea3c add      rcx, rcx
22ea3f mov      rax, qword ptr [rsp + 0x50]
22ea44 xor      rax, qword ptr [rsp + 0x4d8]
22ea4c add      rax, rcx
22ea4f mov      qword ptr [rsp + 0x58], rax
22ea54 mov      rcx, qword ptr [rsp + 0x50]
22ea59 or       rcx, qword ptr [rsp + 0x1b0]
22ea61 mov      rax, qword ptr [rsp + 0x50]
22ea66 and      rax, qword ptr [rsp + 0x1b0]
22ea6e sub      rcx, rax
22ea71 mov      qword ptr [rsp + 0x1b0], rcx
22ea79 mov      rax, qword ptr [rsp + 0x58]
22ea7e mov      rcx, qword ptr [rsp + 0x4d8]
22ea86 xor      rcx, 0x21
22ea8a call     0x140002040
22ea8f mov      qword ptr [rsp + 0x4d8], rax
22ea97 mov      rdx, qword ptr [rsp + 0x1b0]
22ea9f xor      rdx, rax
22eaa2 mov      r8d, 0x146517
22eaa8 lea      rcx, [rsp + 0x190]
22eab0 call     0x1401f1520
22eab5 mov      ebx, 0xe395f623
22eaba mov      qword ptr [rsp + 0x20], rbx
22eabf mov      qword ptr [rsp + 0x28], 0x31c42633
22eac8 mov      rcx, qword ptr [rsp + 0x28]
22eacd mov      rax, qword ptr [rsp + 0x20]
22ead2 xor      rcx, rax
22ead5 mov      qword ptr [rsp + 0x30], rcx
22eada mov      rcx, qword ptr [rsp + 0x30]
22eadf and      rcx, 0xfffffffffffffffe
22eae3 mov      rax, qword ptr [rsp + 0x30]
22eae8 sub      rax, rcx
22eaeb cmp      rax, 1
22eaef jbe      0x14022eb01
22eaf1 mov      rax, qword ptr [rsp + 0x30]
22eaf6 xor      rax, 0xdead
22eafc mov      qword ptr [rsp + 0x30], rax
22eb01 mov      rax, qword ptr [rsp + 0x30]
22eb06 mov      ebx, 0x9df4508f
22eb0b mov      qword ptr [rsp + 0x60], rbx
22eb10 mov      rax, qword ptr [rsp + 0x60]
22eb15 mov      rcx, qword ptr [rsp + 0x60]
22eb1a mov      rax, qword ptr [rsp + 0x60]
22eb1f sub      rcx, rax
22eb22 mov      qword ptr [rsp + 0x68], rcx
22eb27 mov      rax, qword ptr [rsp + 0x68]
22eb2c add      rax, 0x281814
22eb32 jmp      0x1402319ec
22eb37 cmp      eax, 0x1e0d67
22eb3c je       0x14022eed5
22eb42 cmp      eax, 0x1e7134
22eb47 je       0x14022ed34
22eb4d cmp      eax, 0x1e7639
22eb52 je       0x14022eca6
22eb58 cmp      eax, 0x1eb316
22eb5d jne      0x140232642
22eb63 mov      rcx, qword ptr [rsp + 0x1b0]
22eb6b xor      rcx, qword ptr [rsp + 0x4d8]
22eb73 call     0x140002040
22eb78 mov      qword ptr [rsp + 0x40], rax
22eb7d mov      rax, qword ptr [rsp + 0x40]
22eb82 movsxd   rcx, dword ptr [rsp + 0x1370]
22eb8a xor      rcx, qword ptr [rsp + 0x4d8]
22eb92 call     0x140002040
22eb97 mov      qword ptr [rsp + 0x4d8], rax
22eb9f mov      qword ptr [rsp + 0x48], 0x4a6ceca7
22eba8 mov      rcx, qword ptr [rsp + 0x48]
22ebad mov      rax, qword ptr [rsp + 0x48]
22ebb2 xor      rcx, rax
22ebb5 mov      qword ptr [rsp + 0x50], rcx
22ebba mov      rcx, qword ptr [rsp + 0x50]
22ebbf and      rcx, qword ptr [rsp + 0x4d8]
22ebc7 not      rcx
22ebca mov      rax, qword ptr [rsp + 0x50]
22ebcf or       rax, qword ptr [rsp + 0x4d8]
22ebd7 and      rax, rcx
22ebda mov      qword ptr [rsp + 0x4d8], rax
22ebe2 mov      rcx, qword ptr [rsp + 0x50]
22ebe7 and      rcx, qword ptr [rsp + 0x4d8]
22ebef add      rcx, rcx
22ebf2 mov      rax, qword ptr [rsp + 0x50]
22ebf7 xor      rax, qword ptr [rsp + 0x4d8]
22ebff add      rax, rcx
22ec02 mov      qword ptr [rsp + 0x58], rax
22ec07 mov      rax, qword ptr [rsp + 0x50]
22ec0c xor      qword ptr [rsp + 0x1b0], rax
22ec14 mov      rax, qword ptr [rsp + 0x50]
22ec19 add      qword ptr [rsp + 0x1378], rax
22ec21 mov      rax, qword ptr [rsp + 0x58]
22ec26 mov      rax, qword ptr [rsp + 0x4d8]
22ec2e xor      rax, 0x1c
22ec32 mov      qword ptr [rsp + 0x38], rax
22ec37 mov      rcx, qword ptr [rsp + 0x38]
22ec3c call     0x140002040
22ec41 mov      qword ptr [rsp + 0x4d8], rax
22ec49 mov      rdx, qword ptr [rsp + 0x1b0]
22ec51 xor      rdx, rax
22ec54 mov      r8d, 0x114e04
22ec5a lea      rcx, [rsp + 0x190]
22ec62 call     0x1401f1520
22ec67 mov      ebx, 0xb66b5d73
22ec6c mov      qword ptr [rsp + 0x60], rbx
22ec71 mov      rax, qword ptr [rsp + 0x60]
22ec76 mov      rcx, qword ptr [rsp + 0x60]
22ec7b mov      rax, qword ptr [rsp + 0x60]
22ec80 sub      rcx, rax
22ec83 mov      qword ptr [rsp + 0x68], rcx
22ec88 mov      rcx, qword ptr [rsp + 0x68]
22ec8d and      ecx, 0x13397f
22ec93 add      rcx, rcx
22ec96 mov      rax, qword ptr [rsp + 0x68]
22ec9b xor      rax, 0x13397f
22eca1 jmp      0x140232cbb
22eca6 mov      rdx, qword ptr [rsp + 0x1b0]
22ecae xor      rdx, qword ptr [rsp + 0x4d8]
22ecb6 mov      r8d, 0x1ef3d2
22ecbc lea      rcx, [rsp + 0x190]
22ecc4 call     0x1401f1730
22ecc9 mov      ebx, 0x896549bb
22ecce mov      qword ptr [rsp + 0x20], rbx
22ecd3 mov      ebx, 0xb33a0f31
22ecd8 mov      qword ptr [rsp + 0x28], rbx
22ecdd mov      rcx, qword ptr [rsp + 0x28]
22ece2 mov      rax, qword ptr [rsp + 0x20]
22ece7 xor      rcx, rax
22ecea mov      qword ptr [rsp + 0x30], rcx
22ecef mov      qword ptr [rsp + 0x78], r12
22ecf4 mov      rax, qword ptr [rsp + 0x78]
22ecf9 cmp      rax, 1
22ecfd jae      0x14022ed25
22ecff mov      rcx, qword ptr [rsp + 0x30]
22ed04 mov      rax, qword ptr [rsp + 0x78]
22ed09 add      rcx, rax
22ed0c call     0x140002040
22ed11 mov      qword ptr [rsp + 0x30], rax
22ed16 mov      rax, qword ptr [rsp + 0x78]
22ed1b inc      rax
22ed1e mov      qword ptr [rsp + 0x78], rax
22ed23 jmp      0x14022ecf4
22ed25 mov      rax, qword ptr [rsp + 0x30]
22ed2a mov      edx, 0x2c5cea
22ed2f jmp      0x140232664
22ed34 movzx    eax, byte ptr [rsp + 0x4d8]
22ed3c lea      ecx, [rax + 0xff]
22ed42 xor      cl, al
22ed44 test     cl, 1
22ed47 jne      0x14022ed9b
22ed49 mov      qword ptr [rsp + 0x20], 0x2316c7c3
22ed52 mov      qword ptr [rsp + 0x28], 0x4c185943
22ed5b mov      rcx, qword ptr [rsp + 0x28]
22ed60 mov      rax, qword ptr [rsp + 0x20]
22ed65 xor      rcx, rax
22ed68 mov      qword ptr [rsp + 0x30], rcx
22ed6d mov      rcx, qword ptr [rsp + 0x30]
22ed72 and      ecx, 1
22ed75 mov      rax, qword ptr [rsp + 0x30]
22ed7a and      eax, 1
22ed7d add      rax, rcx
22ed80 cmp      rax, 2
22ed84 jbe      0x14022ed96
22ed86 mov      rax, qword ptr [rsp + 0x30]
22ed8b xor      rax, 0xdead
22ed91 mov      qword ptr [rsp + 0x30], rax
22ed96 mov      rax, qword ptr [rsp + 0x30]
22ed9b mov      eax, 0xa29d5bc3
22eda0 mov      qword ptr [rsp + 0x48], rax
22eda5 mov      rdx, qword ptr [rsp + 0x48]
22edaa mov      rax, qword ptr [rsp + 0x48]
22edaf xor      rdx, rax
22edb2 mov      rcx, qword ptr [rsp + 0x48]
22edb7 mov      rax, qword ptr [rsp + 0x48]
22edbc sub      rcx, rax
22edbf or       rcx, rdx
22edc2 mov      qword ptr [rsp + 0x50], rcx
22edc7 mov      rcx, qword ptr [rsp + 0x50]
22edcc or       rcx, qword ptr [rsp + 0x4d8]
22edd4 mov      rax, qword ptr [rsp + 0x50]
22edd9 and      rax, qword ptr [rsp + 0x4d8]
22ede1 sub      rcx, rax
22ede4 mov      qword ptr [rsp + 0x4d8], rcx
22edec mov      rcx, qword ptr [rsp + 0x50]
22edf1 and      rcx, qword ptr [rsp + 0x4d8]
22edf9 add      rcx, rcx
22edfc mov      rax, qword ptr [rsp + 0x50]
22ee01 xor      rax, qword ptr [rsp + 0x4d8]
22ee09 add      rax, rcx
22ee0c mov      qword ptr [rsp + 0x58], rax
22ee11 mov      rcx, qword ptr [rsp + 0x50]
22ee16 or       rcx, qword ptr [rsp + 0x1b0]
22ee1e mov      rax, qword ptr [rsp + 0x50]
22ee23 and      rax, qword ptr [rsp + 0x1b0]
22ee2b sub      rcx, rax
22ee2e mov      qword ptr [rsp + 0x1b0], rcx
22ee36 mov      rcx, qword ptr [rsp + 0x50]
22ee3b and      rcx, qword ptr [rsp + 0x1378]
22ee43 add      rcx, rcx
22ee46 mov      rax, qword ptr [rsp + 0x50]
22ee4b xor      rax, qword ptr [rsp + 0x1378]
22ee53 add      rax, rcx
22ee56 mov      qword ptr [rsp + 0x1378], rax
22ee5e mov      rax, qword ptr [rsp + 0x58]
22ee63 mov      rax, qword ptr [rsp + 0x4d8]
22ee6b xor      rax, 9
22ee6f mov      qword ptr [rsp + 0x38], rax
22ee74 mov      rcx, qword ptr [rsp + 0x38]
22ee79 call     0x140002040
22ee7e mov      qword ptr [rsp + 0x4d8], rax
22ee86 xor      rax, qword ptr [rsp + 0x1b0]
22ee8e mov      r8d, 0x58fef
22ee94 mov      rdx, rax
22ee97 lea      rcx, [rsp + 0x190]
22ee9f call     0x1401f1520
22eea4 mov      ebx, 0xdd45f809
22eea9 mov      qword ptr [rsp + 0x60], rbx
22eeae mov      rax, qword ptr [rsp + 0x60]
22eeb3 mov      rcx, qword ptr [rsp + 0x60]
22eeb8 mov      rax, qword ptr [rsp + 0x60]
22eebd sub      rcx, rax
22eec0 mov      qword ptr [rsp + 0x68], rcx
22eec5 mov      rax, qword ptr [rsp + 0x68]
22eeca add      rax, 0x1ee92d
22eed0 jmp      0x14022da28
22eed5 mov      rcx, qword ptr [rsp + 0x1b0]
22eedd xor      rcx, qword ptr [rsp + 0x4d8]
22eee5 call     0x140002040
22eeea mov      qword ptr [rsp + 0x40], rax
22eeef mov      rax, qword ptr [rsp + 0x40]
22eef4 mov      eax, 0x9afbb5c7
22eef9 mov      qword ptr [rsp + 0x48], rax
22eefe mov      rcx, qword ptr [rsp + 0x48]
22ef03 mov      rax, qword ptr [rsp + 0x48]
22ef08 xor      rcx, rax
22ef0b mov      qword ptr [rsp + 0x50], rcx
22ef10 mov      rax, qword ptr [rsp + 0x50]
22ef15 mov      rcx, qword ptr [rsp + 0x4d8]
22ef1d and      rax, rcx
22ef20 add      rax, rax
22ef23 sub      rcx, rax
22ef26 mov      rax, qword ptr [rsp + 0x50]
22ef2b add      rax, rcx
22ef2e mov      qword ptr [rsp + 0x4d8], rax
22ef36 mov      rcx, qword ptr [rsp + 0x50]
22ef3b or       rcx, qword ptr [rsp + 0x4d8]
22ef43 mov      rax, qword ptr [rsp + 0x50]
22ef48 and      rax, qword ptr [rsp + 0x4d8]
22ef50 add      rax, rcx
22ef53 mov      qword ptr [rsp + 0x58], rax
22ef58 mov      rax, qword ptr [rsp + 0x50]
22ef5d xor      qword ptr [rsp + 0x1b0], rax
22ef65 mov      rax, qword ptr [rsp + 0x50]
22ef6a add      qword ptr [rsp + 0x1378], rax
22ef72 mov      rax, qword ptr [rsp + 0x58]
22ef77 mov      rcx, qword ptr [rsp + 0x4d8]
22ef7f xor      rcx, 0x20
22ef83 call     0x140002040
22ef88 mov      qword ptr [rsp + 0x4d8], rax
22ef90 mov      rdx, qword ptr [rsp + 0x1b0]
22ef98 xor      rdx, rax
22ef9b mov      r8d, 0x13c6e0
22efa1 lea      rcx, [rsp + 0x190]
22efa9 call     0x1401f1520
22efae movzx    eax, byte ptr [rsp + 0x4d8]
22efb6 lea      ecx, [rax + 0xff]
22efbc mov      edx, eax
22efbe movzx    eax, cl
22efc1 imul     eax, edx
22efc4 mov      ebx, 0xf289ee77
22efc9 test     al, 1
22efcb jne      0x14022f007
22efcd mov      qword ptr [rsp + 0x60], rbx
22efd2 mov      rax, qword ptr [rsp + 0x60]
22efd7 mov      rcx, qword ptr [rsp + 0x60]
22efdc mov      rax, qword ptr [rsp + 0x60]
22efe1 sub      rcx, rax
22efe4 mov      qword ptr [rsp + 0x68], rcx
22efe9 mov      rcx, qword ptr [rsp + 0x68]
22efee and      ecx, 0x1cbf2d
22eff4 add      rcx, rcx
22eff7 mov      rax, qword ptr [rsp + 0x68]
22effc xor      rax, 0x1cbf2d
22f002 jmp      0x140232cbb
22f007 mov      eax, 0x876d1d0b
22f00c mov      qword ptr [rsp + 0x20], rax
22f011 mov      eax, 0x96c2f009
22f016 mov      qword ptr [rsp + 0x28], rax
22f01b mov      rcx, qword ptr [rsp + 0x28]
22f020 mov      rax, qword ptr [rsp + 0x20]
22f025 xor      rcx, rax
22f028 mov      qword ptr [rsp + 0x30], rcx
22f02d mov      rax, qword ptr [rsp + 0x30]
22f032 mov      rcx, qword ptr [rsp + 0x30]
22f037 mov      rax, qword ptr [rsp + 0x30]
22f03c and      rcx, rax
22f03f mov      qword ptr [rsp + 0x30], rcx
22f044 mov      rax, qword ptr [rsp + 0x30]
22f049 mov      qword ptr [rsp + 0x60], rbx
22f04e mov      rax, qword ptr [rsp + 0x60]
22f053 mov      rcx, qword ptr [rsp + 0x60]
22f058 mov      rax, qword ptr [rsp + 0x60]
22f05d sub      rcx, rax
22f060 mov      qword ptr [rsp + 0x68], rcx
22f065 mov      rcx, qword ptr [rsp + 0x68]
22f06a and      ecx, 0x1cbf2d
22f070 add      rcx, rcx
22f073 mov      rax, qword ptr [rsp + 0x68]
22f078 xor      rax, 0x1cbf2d
22f07e jmp      0x140232cbb
22f083 mov      qword ptr [rsp + 0x20], 0x729265bf
22f08c mov      qword ptr [rsp + 0x28], 0x53463d6b
22f095 mov      rcx, qword ptr [rsp + 0x28]
22f09a mov      rax, qword ptr [rsp + 0x20]
22f09f xor      rcx, rax
22f0a2 mov      qword ptr [rsp + 0x30], rcx
22f0a7 mov      rax, qword ptr [rsp + 0x30]
22f0ac dec      rax
22f0af mov      rcx, qword ptr [rsp + 0x30]
22f0b4 movzx    edx, al
22f0b7 movzx    eax, cl
22f0ba imul     eax, edx
22f0bd test     al, 1
22f0bf je       0x14022f0d1
22f0c1 mov      rax, qword ptr [rsp + 0x30]
22f0c6 xor      rax, 0xdead
22f0cc mov      qword ptr [rsp + 0x30], rax
22f0d1 mov      rax, qword ptr [rsp + 0x30]
22f0d6 mov      qword ptr [rsp + 0x20], 0x15ed6a0d
22f0df mov      qword ptr [rsp + 0x28], 0x543bc923
22f0e8 mov      rcx, qword ptr [rsp + 0x28]
22f0ed mov      rax, qword ptr [rsp + 0x20]
22f0f2 xor      rcx, rax
22f0f5 mov      qword ptr [rsp + 0x30], rcx
22f0fa mov      rcx, qword ptr [rsp + 0x30]
22f0ff and      ecx, 1
22f102 mov      rax, qword ptr [rsp + 0x30]
22f107 and      eax, 1
22f10a add      rax, rcx
22f10d cmp      rax, 2
22f111 jbe      0x14022f123
22f113 mov      rax, qword ptr [rsp + 0x30]
22f118 xor      rax, 0xdead
22f11e mov      qword ptr [rsp + 0x30], rax
22f123 mov      rax, qword ptr [rsp + 0x30]
22f128 mov      qword ptr [rsp + 0x48], 0x14be8bef
22f131 mov      rcx, qword ptr [rsp + 0x48]
22f136 mov      rax, qword ptr [rsp + 0x48]
22f13b sub      rcx, rax
22f13e mov      qword ptr [rsp + 0x50], rcx
22f143 mov      rcx, qword ptr [rsp + 0x50]
22f148 and      rcx, qword ptr [rsp + 0x4d8]
22f150 not      rcx
22f153 mov      rax, qword ptr [rsp + 0x50]
22f158 or       rax, qword ptr [rsp + 0x4d8]
22f160 and      rax, rcx
22f163 mov      qword ptr [rsp + 0x4d8], rax
22f16b mov      rcx, qword ptr [rsp + 0x50]
22f170 and      rcx, qword ptr [rsp + 0x4d8]
22f178 add      rcx, rcx
22f17b mov      rax, qword ptr [rsp + 0x50]
22f180 xor      rax, qword ptr [rsp + 0x4d8]
22f188 add      rax, rcx
22f18b mov      qword ptr [rsp + 0x58], rax
22f190 mov      rcx, qword ptr [rsp + 0x50]
22f195 or       rcx, qword ptr [rsp + 0x1b0]
22f19d mov      rax, qword ptr [rsp + 0x50]
22f1a2 and      rax, qword ptr [rsp + 0x1b0]
22f1aa sub      rcx, rax
22f1ad mov      qword ptr [rsp + 0x1b0], rcx
22f1b5 mov      rax, qword ptr [rsp + 0x58]
22f1ba mov      rcx, qword ptr [rsp + 0x4d8]
22f1c2 xor      rcx, 0xa
22f1c6 call     0x140002040
22f1cb mov      qword ptr [rsp + 0x4d8], rax
22f1d3 xor      rax, qword ptr [rsp + 0x1b0]
22f1db mov      r8d, 0x62e26
22f1e1 mov      rdx, rax
22f1e4 lea      rcx, [rsp + 0x190]
22f1ec call     0x1401f1520
22f1f1 mov      qword ptr [rsp + 0x60], 0x756c3bdb
22f1fa mov      rax, qword ptr [rsp + 0x60]
22f1ff mov      rcx, qword ptr [rsp + 0x60]
22f204 mov      rax, qword ptr [rsp + 0x60]
22f209 sub      rcx, rax
22f20c mov      qword ptr [rsp + 0x68], rcx
22f211 mov      rcx, qword ptr [rsp + 0x68]
22f216 or       rcx, 0x106353
22f21d mov      rax, qword ptr [rsp + 0x68]
22f222 and      eax, 0x106353
22f227 jmp      0x14022dee0
22f22c cmp      eax, 0x2e0073
22f231 jg       0x140230f3e
22f237 je       0x140230ef1
22f23d cmp      eax, 0x28aab7
22f242 jg       0x1402302bb
22f248 je       0x1402300de
22f24e cmp      eax, 0x25af0e
22f253 jg       0x14022fa98
22f259 je       0x14022f8fa
22f25f cmp      eax, 0x1f777e
22f264 je       0x14022f6e7
22f26a cmp      eax, 0x2022f6
22f26f je       0x14022f541
22f275 cmp      eax, 0x2367b2
22f27a je       0x14022f4f9
22f280 cmp      eax, 0x2478fb
22f285 je       0x14022f3c1
22f28b cmp      eax, 0x25a4a6
22f290 jne      0x140232642
22f296 mov      ebx, 0xe40fe9d7
22f29b mov      qword ptr [rsp + 0x48], rbx
22f2a0 mov      rax, qword ptr [rsp + 0x48]
22f2a5 mov      qword ptr [rsp + 0x50], r12
22f2aa mov      rax, qword ptr [rsp + 0x50]
22f2af mov      rcx, qword ptr [rsp + 0x4d8]
22f2b7 and      rax, rcx
22f2ba add      rax, rax
22f2bd sub      rcx, rax
22f2c0 mov      rax, qword ptr [rsp + 0x50]
22f2c5 add      rax, rcx
22f2c8 mov      qword ptr [rsp + 0x4d8], rax
22f2d0 mov      rax, qword ptr [rsp + 0x50]
22f2d5 add      rax, qword ptr [rsp + 0x4d8]
22f2dd mov      qword ptr [rsp + 0x58], rax
22f2e2 mov      rax, qword ptr [rsp + 0x50]
22f2e7 xor      qword ptr [rsp + 0x1b0], rax
22f2ef mov      rax, qword ptr [rsp + 0x50]
22f2f4 add      qword ptr [rsp + 0x1378], rax
22f2fc mov      rax, qword ptr [rsp + 0x58]
22f301 mov      rcx, qword ptr [rsp + 0x4d8]
22f309 xor      rcx, 0x35
22f30d call     0x140002040
22f312 mov      qword ptr [rsp + 0x4d8], rax
22f31a mov      rdx, qword ptr [rsp + 0x1b0]
22f322 xor      rdx, rax
22f325 mov      r8d, 0x20c163
22f32b lea      rcx, [rsp + 0x190]
22f333 call     0x1401f1520
22f338 movzx    eax, byte ptr [rsp + 0x4d8]
22f340 lea      ecx, [rax + 0xff]
22f346 xor      cl, al
22f348 test     cl, 1
22f34b jne      0x14022f382
22f34d mov      eax, 0xafbee2ed
22f352 mov      qword ptr [rsp + 0x20], rax
22f357 mov      eax, 0xd6e7f5a7
22f35c mov      qword ptr [rsp + 0x28], rax
22f361 mov      rcx, qword ptr [rsp + 0x28]
22f366 mov      rax, qword ptr [rsp + 0x20]
22f36b xor      rcx, rax
22f36e mov      qword ptr [rsp + 0x30], rcx
22f373 mov      rax, qword ptr [rsp + 0x30]
22f378 mov      qword ptr [rsp + 0x30], rax
22f37d mov      rax, qword ptr [rsp + 0x30]
22f382 mov      ebx, 0x82a419b7
22f387 mov      qword ptr [rsp + 0x60], rbx
22f38c mov      rax, qword ptr [rsp + 0x60]
22f391 mov      rcx, qword ptr [rsp + 0x60]
22f396 mov      rax, qword ptr [rsp + 0x60]
22f39b sub      rcx, rax
22f39e mov      qword ptr [rsp + 0x68], rcx
22f3a3 mov      rcx, qword ptr [rsp + 0x68]
22f3a8 and      ecx, 0x109dc8
22f3ae add      rcx, rcx
22f3b1 mov      rax, qword ptr [rsp + 0x68]
22f3b6 xor      rax, 0x109dc8
22f3bc jmp      0x140232cbb
22f3c1 mov      rcx, qword ptr [rsp + 0x1b0]
22f3c9 xor      rcx, qword ptr [rsp + 0x4d8]
22f3d1 call     0x140002040
22f3d6 mov      qword ptr [rsp + 0x40], rax
22f3db mov      rax, qword ptr [rsp + 0x40]
22f3e0 mov      ebx, 0xd6e3fda9
22f3e5 mov      qword ptr [rsp + 0x48], rbx
22f3ea mov      rcx, qword ptr [rsp + 0x48]
22f3ef mov      rax, qword ptr [rsp + 0x48]
22f3f4 xor      rcx, rax
22f3f7 mov      qword ptr [rsp + 0x50], rcx
22f3fc mov      rax, qword ptr [rsp + 0x50]
22f401 xor      qword ptr [rsp + 0x4d8], rax
22f409 mov      rcx, qword ptr [rsp + 0x50]
22f40e or       rcx, qword ptr [rsp + 0x4d8]
22f416 mov      rax, qword ptr [rsp + 0x50]
22f41b and      rax, qword ptr [rsp + 0x4d8]
22f423 add      rax, rcx
22f426 mov      qword ptr [rsp + 0x58], rax
22f42b mov      rax, qword ptr [rsp + 0x50]
22f430 xor      qword ptr [rsp + 0x1b0], rax
22f438 mov      rax, qword ptr [rsp + 0x50]
22f43d add      qword ptr [rsp + 0x1378], rax
22f445 mov      rax, qword ptr [rsp + 0x58]
22f44a mov      rax, qword ptr [rsp + 0x4d8]
22f452 mov      qword ptr [rsp + 0x38], rax
22f457 mov      rax, qword ptr [rsp + 0x38]
22f45c xor      rax, 0x25
22f460 mov      qword ptr [rsp + 0x38], rax
22f465 mov      rcx, qword ptr [rsp + 0x38]
22f46a call     0x140002040
22f46f mov      qword ptr [rsp + 0x4d8], rax
22f477 mov      rdx, qword ptr [rsp + 0x1b0]
22f47f xor      rdx, rax
22f482 mov      r8d, 0x16ddf3
22f488 lea      rcx, [rsp + 0x190]
22f490 call     0x1401f1520
22f495 mov      ebx, 0xfbca807b
22f49a mov      qword ptr [rsp + 0x20], rbx
22f49f mov      qword ptr [rsp + 0x28], 0x4ce94649
22f4a8 mov      rcx, qword ptr [rsp + 0x28]
22f4ad mov      rax, qword ptr [rsp + 0x20]
22f4b2 xor      rcx, rax
22f4b5 mov      qword ptr [rsp + 0x30], rcx
22f4ba mov      rax, qword ptr [rsp + 0x30]
22f4bf mov      qword ptr [rsp + 0x30], rax
22f4c4 mov      rax, qword ptr [rsp + 0x30]
22f4c9 mov      qword ptr [rsp + 0x60], 0x69d39b43
22f4d2 mov      rax, qword ptr [rsp + 0x60]
22f4d7 mov      rcx, qword ptr [rsp + 0x60]
22f4dc mov      rax, qword ptr [rsp + 0x60]
22f4e1 sub      rcx, rax
22f4e4 mov      qword ptr [rsp + 0x68], rcx
22f4e9 mov      rax, qword ptr [rsp + 0x68]
22f4ee add      rax, 0x9aaf3
22f4f4 jmp      0x14022b880
22f4f9 movabs   rax, 0xd46023193b81faaa
22f503 cmp      qword ptr [rsp + 0xd8], rax
22f50b je       0x14022f51f
22f50d mov      edx, 0x41545432
22f512 lea      rcx, [rsp + 0x190]
22f51a call     0x1401ed830
22f51f mov      dword ptr [rsp + 0xa4], 1
22f52a mov      edx, 0x57f52
22f52f lea      rcx, [rsp + 0x190]
22f537 call     0x1401f0db0
22f53c jmp      0x140232daa
22f541 mov      rcx, qword ptr [rsp + 0x1b0]
22f549 xor      rcx, qword ptr [rsp + 0x4d8]
22f551 call     0x140002040
22f556 mov      qword ptr [rsp + 0x40], rax
22f55b mov      rax, qword ptr [rsp + 0x40]
22f560 mov      eax, 0x9a2a6c45
22f565 mov      qword ptr [rsp + 0x48], rax
22f56a mov      rcx, qword ptr [rsp + 0x48]
22f56f mov      rax, qword ptr [rsp + 0x48]
22f574 sub      rcx, rax
22f577 mov      qword ptr [rsp + 0x50], rcx
22f57c mov      rax, qword ptr [rsp + 0x50]
22f581 xor      qword ptr [rsp + 0x4d8], rax
22f589 mov      rax, qword ptr [rsp + 0x50]
22f58e add      rax, qword ptr [rsp + 0x4d8]
22f596 mov      qword ptr [rsp + 0x58], rax
22f59b mov      rax, qword ptr [rsp + 0x50]
22f5a0 mov      rcx, qword ptr [rsp + 0x1b0]
22f5a8 and      rax, rcx
22f5ab add      rax, rax
22f5ae sub      rcx, rax
22f5b1 mov      rax, qword ptr [rsp + 0x50]
22f5b6 add      rax, rcx
22f5b9 mov      qword ptr [rsp + 0x1b0], rax
22f5c1 mov      rcx, qword ptr [rsp + 0x50]
22f5c6 or       rcx, qword ptr [rsp + 0x1378]
22f5ce mov      rax, qword ptr [rsp + 0x50]
22f5d3 and      rax, qword ptr [rsp + 0x1378]
22f5db add      rax, rcx
22f5de mov      qword ptr [rsp + 0x1378], rax
22f5e6 mov      rax, qword ptr [rsp + 0x58]
22f5eb mov      rax, qword ptr [rsp + 0x4d8]
22f5f3 xor      rax, 0x18
22f5f7 mov      qword ptr [rsp + 0x38], rax
22f5fc mov      rcx, qword ptr [rsp + 0x38]
22f601 call     0x140002040
22f606 mov      qword ptr [rsp + 0x4d8], rax
22f60e mov      rdx, qword ptr [rsp + 0x1b0]
22f616 xor      rdx, rax
22f619 mov      r8d, 0xed528
22f61f lea      rcx, [rsp + 0x190]
22f627 call     0x1401f1520
22f62c movzx    ecx, byte ptr [rsp + 0x4d8]
22f634 mov      edx, ecx
22f636 imul     edx, ecx
22f639 xor      dl, cl
22f63b mov      ebx, 0x81ae065b
22f640 test     dl, 1
22f643 jne      0x14022f67c
22f645 mov      qword ptr [rsp + 0x60], rbx
22f64a mov      rax, qword ptr [rsp + 0x60]
22f64f mov      rcx, qword ptr [rsp + 0x60]
22f654 mov      rax, qword ptr [rsp + 0x60]
22f659 sub      rcx, rax
22f65c mov      qword ptr [rsp + 0x68], rcx
22f661 mov      rcx, qword ptr [rsp + 0x68]
22f666 or       rcx, 0x37507f
22f66d mov      rax, qword ptr [rsp + 0x68]
22f672 and      eax, 0x37507f
22f677 jmp      0x14022e08c
22f67c mov      qword ptr [rsp + 0x20], 0x216b122d
22f685 mov      eax, 0xe3a74ad7
22f68a mov      qword ptr [rsp + 0x28], rax
22f68f mov      rcx, qword ptr [rsp + 0x28]
22f694 mov      rax, qword ptr [rsp + 0x20]
22f699 xor      rcx, rax
22f69c mov      qword ptr [rsp + 0x30], rcx
22f6a1 mov      rax, qword ptr [rsp + 0x30]
22f6a6 mov      qword ptr [rsp + 0x30], rax
22f6ab mov      rax, qword ptr [rsp + 0x30]
22f6b0 mov      qword ptr [rsp + 0x60], rbx
22f6b5 mov      rax, qword ptr [rsp + 0x60]
22f6ba mov      rcx, qword ptr [rsp + 0x60]
22f6bf mov      rax, qword ptr [rsp + 0x60]
22f6c4 sub      rcx, rax
22f6c7 mov      qword ptr [rsp + 0x68], rcx
22f6cc mov      rcx, qword ptr [rsp + 0x68]
22f6d1 or       rcx, 0x37507f
22f6d8 mov      rax, qword ptr [rsp + 0x68]
22f6dd and      eax, 0x37507f
22f6e2 jmp      0x14022e08c
22f6e7 mov      eax, 0xf7f5de6b
22f6ec mov      qword ptr [rsp + 0x20], rax
22f6f1 mov      qword ptr [rsp + 0x28], 0x75308217
22f6fa mov      rcx, qword ptr [rsp + 0x28]
22f6ff mov      rax, qword ptr [rsp + 0x20]
22f704 xor      rcx, rax
22f707 mov      qword ptr [rsp + 0x30], rcx
22f70c mov      rax, qword ptr [rsp + 0x30]
22f711 dec      rax
22f714 mov      rcx, qword ptr [rsp + 0x30]
22f719 xor      cl, al
22f71b test     cl, 1
22f71e jne      0x14022f730
22f720 mov      rax, qword ptr [rsp + 0x30]
22f725 xor      rax, 0xdead
22f72b mov      qword ptr [rsp + 0x30], rax
22f730 mov      rax, qword ptr [rsp + 0x30]
22f735 mov      ebx, 0x80e2cbb9
22f73a mov      qword ptr [rsp + 0x20], rbx
22f73f mov      qword ptr [rsp + 0x28], 0x7370cc1f
22f748 mov      rcx, qword ptr [rsp + 0x28]
22f74d mov      rax, qword ptr [rsp + 0x20]
22f752 xor      rcx, rax
22f755 mov      qword ptr [rsp + 0x30], rcx
22f75a mov      qword ptr [rsp + 0x78], r12
22f75f nop      
22f760 mov      rax, qword ptr [rsp + 0x78]
22f765 cmp      rax, 2
22f769 jae      0x14022f791
22f76b mov      rcx, qword ptr [rsp + 0x30]
22f770 mov      rax, qword ptr [rsp + 0x78]
22f775 add      rcx, rax
22f778 call     0x140002040
22f77d mov      qword ptr [rsp + 0x30], rax
22f782 mov      rax, qword ptr [rsp + 0x78]
22f787 inc      rax
22f78a mov      qword ptr [rsp + 0x78], rax
22f78f jmp      0x14022f760
22f791 mov      rax, qword ptr [rsp + 0x30]
22f796 mov      eax, 0xc97ef4c7
22f79b mov      qword ptr [rsp + 0x48], rax
22f7a0 mov      rdx, qword ptr [rsp + 0x48]
22f7a5 mov      rax, qword ptr [rsp + 0x48]
22f7aa xor      rdx, rax
22f7ad mov      rcx, qword ptr [rsp + 0x48]
22f7b2 mov      rax, qword ptr [rsp + 0x48]
22f7b7 sub      rcx, rax
22f7ba or       rcx, rdx
22f7bd mov      qword ptr [rsp + 0x50], rcx
22f7c2 mov      rcx, qword ptr [rsp + 0x50]
22f7c7 and      rcx, qword ptr [rsp + 0x4d8]
22f7cf not      rcx
22f7d2 mov      rax, qword ptr [rsp + 0x50]
22f7d7 or       rax, qword ptr [rsp + 0x4d8]
22f7df and      rax, rcx
22f7e2 mov      qword ptr [rsp + 0x4d8], rax
22f7ea mov      rcx, qword ptr [rsp + 0x50]
22f7ef and      rcx, qword ptr [rsp + 0x4d8]
22f7f7 add      rcx, rcx
22f7fa mov      rax, qword ptr [rsp + 0x50]
22f7ff xor      rax, qword ptr [rsp + 0x4d8]
22f807 add      rax, rcx
22f80a mov      qword ptr [rsp + 0x58], rax
22f80f mov      rax, qword ptr [rsp + 0x50]
22f814 xor      qword ptr [rsp + 0x1b0], rax
22f81c mov      rax, qword ptr [rsp + 0x58]
22f821 mov      rax, qword ptr [rsp + 0x4d8]
22f829 xor      rax, 6
22f82d mov      qword ptr [rsp + 0x38], rax
22f832 mov      rcx, qword ptr [rsp + 0x38]
22f837 call     0x140002040
22f83c mov      qword ptr [rsp + 0x4d8], rax
22f844 xor      rax, qword ptr [rsp + 0x1b0]
22f84c mov      r8d, 0x3b54a
22f852 mov      rdx, rax
22f855 lea      rcx, [rsp + 0x190]
22f85d call     0x1401f1520
22f862 mov      ebx, 0xf6fbc3af
22f867 mov      qword ptr [rsp + 0x20], rbx
22f86c mov      ebx, 0x9007f271
22f871 mov      qword ptr [rsp + 0x28], rbx
22f876 mov      rcx, qword ptr [rsp + 0x28]
22f87b mov      rax, qword ptr [rsp + 0x20]
22f880 xor      rcx, rax
22f883 mov      qword ptr [rsp + 0x30], rcx
22f888 mov      rax, qword ptr [rsp + 0x30]
22f88d mov      qword ptr [rsp + 0x30], rax
22f892 mov      rax, qword ptr [rsp + 0x30]
22f897 mov      qword ptr [rsp + 0x60], 0x43d3c297
22f8a0 mov      rax, qword ptr [rsp + 0x60]
22f8a5 mov      rcx, qword ptr [rsp + 0x60]
22f8aa mov      rax, qword ptr [rsp + 0x60]
22f8af sub      rcx, rax
22f8b2 mov      qword ptr [rsp + 0x68], rcx
22f8b7 mov      rcx, qword ptr [rsp + 0x68]
22f8bc and      ecx, 0x2d1a07
22f8c2 add      rcx, rcx
22f8c5 mov      rax, qword ptr [rsp + 0x68]
22f8ca xor      rax, 0x2d1a07
22f8d0 add      rax, rcx
22f8d3 mov      qword ptr [rsp + 0x70], rax
22f8d8 mov      rdx, qword ptr [rsp + 0x70]
22f8dd mov      rax, qword ptr [rsp + 0x68]
22f8e2 or       edx, eax
22f8e4 mov      rcx, qword ptr [rsp + 0x70]
22f8e9 mov      rax, qword ptr [rsp + 0x68]
22f8ee and      ecx, eax
22f8f0 sub      edx, ecx
22f8f2 movsxd   rdx, edx
22f8f5 jmp      0x140232664
22f8fa mov      rcx, qword ptr [rsp + 0x1b0]
22f902 xor      rcx, qword ptr [rsp + 0x4d8]
22f90a call     0x140002040
22f90f mov      qword ptr [rsp + 0x40], rax
22f914 mov      rax, qword ptr [rsp + 0x40]
22f919 mov      qword ptr [rsp + 0x20], 0x342dbc79
22f922 mov      qword ptr [rsp + 0x28], 0x68cb0b07
22f92b mov      rcx, qword ptr [rsp + 0x28]
22f930 mov      rax, qword ptr [rsp + 0x20]
22f935 xor      rcx, rax
22f938 mov      qword ptr [rsp + 0x30], rcx
22f93d mov      rdx, qword ptr [rsp + 0x28]
22f942 mov      rax, qword ptr [rsp + 0x20]
22f947 and      rdx, rax
22f94a add      rdx, rdx
22f94d mov      rcx, qword ptr [rsp + 0x28]
22f952 mov      rax, qword ptr [rsp + 0x20]
22f957 xor      rcx, rax
22f95a add      rcx, rdx
22f95d mov      qword ptr [rsp + 0x30], rcx
22f962 mov      rax, qword ptr [rsp + 0x30]
22f967 mov      qword ptr [rsp + 0x48], 0x279ea821
22f970 mov      rax, qword ptr [rsp + 0x48]
22f975 mov      qword ptr [rsp + 0x50], r12
22f97a mov      rcx, qword ptr [rsp + 0x50]
22f97f or       rcx, qword ptr [rsp + 0x4d8]
22f987 mov      rax, qword ptr [rsp + 0x50]
22f98c and      rax, qword ptr [rsp + 0x4d8]
22f994 sub      rcx, rax
22f997 mov      qword ptr [rsp + 0x4d8], rcx
22f99f mov      rcx, qword ptr [rsp + 0x50]
22f9a4 and      rcx, qword ptr [rsp + 0x4d8]
22f9ac add      rcx, rcx
22f9af mov      rax, qword ptr [rsp + 0x50]
22f9b4 xor      rax, qword ptr [rsp + 0x4d8]
22f9bc add      rax, rcx
22f9bf mov      qword ptr [rsp + 0x58], rax
22f9c4 mov      rcx, qword ptr [rsp + 0x50]
22f9c9 and      rcx, qword ptr [rsp + 0x1b0]
22f9d1 not      rcx
22f9d4 mov      rax, qword ptr [rsp + 0x50]
22f9d9 or       rax, qword ptr [rsp + 0x1b0]
22f9e1 and      rax, rcx
22f9e4 mov      qword ptr [rsp + 0x1b0], rax
22f9ec mov      rcx, qword ptr [rsp + 0x50]
22f9f1 and      rcx, qword ptr [rsp + 0x1378]
22f9f9 add      rcx, rcx
22f9fc mov      rax, qword ptr [rsp + 0x50]
22fa01 xor      rax, qword ptr [rsp + 0x1378]
22fa09 add      rax, rcx
22fa0c mov      qword ptr [rsp + 0x1378], rax
22fa14 mov      rax, qword ptr [rsp + 0x58]
22fa19 mov      rax, qword ptr [rsp + 0x4d8]
22fa21 xor      rax, 0xf
22fa25 mov      qword ptr [rsp + 0x38], rax
22fa2a mov      rcx, qword ptr [rsp + 0x38]
22fa2f call     0x140002040
22fa34 mov      qword ptr [rsp + 0x4d8], rax
22fa3c mov      rdx, qword ptr [rsp + 0x1b0]
22fa44 xor      rdx, rax
22fa47 mov      r8d, 0x94539
22fa4d lea      rcx, [rsp + 0x190]
22fa55 call     0x1401f1520
22fa5a mov      qword ptr [rsp + 0x60], 0x7566c727
22fa63 mov      rax, qword ptr [rsp + 0x60]
22fa68 mov      rcx, qword ptr [rsp + 0x60]
22fa6d mov      rax, qword ptr [rsp + 0x60]
22fa72 sub      rcx, rax
22fa75 mov      qword ptr [rsp + 0x68], rcx
22fa7a mov      rcx, qword ptr [rsp + 0x68]
22fa7f or       rcx, 0x29608c
22fa86 mov      rax, qword ptr [rsp + 0x68]
22fa8b and      eax, 0x29608c
22fa90 add      rax, rcx
22fa93 jmp      0x1402319ec
22fa98 cmp      eax, 0x260812
22fa9d je       0x14022feb8
22faa3 cmp      eax, 0x268dad
22faa8 je       0x14022fd3b
22faae cmp      eax, 0x26dc07
22fab3 je       0x14022fc74
22fab9 cmp      eax, 0x281814
22fabe jne      0x140232642
22fac4 movzx    eax, byte ptr [rsp + 0x4d8]
22facc lea      ecx, [rax + 0xff]
22fad2 mov      edx, eax
22fad4 movzx    eax, cl
22fad7 imul     eax, edx
22fada test     al, 1
22fadc je       0x14022fb12
22fade mov      qword ptr [rsp + 0x20], 0x1fd5aeff
22fae7 mov      eax, 0xc7a18a63
22faec mov      qword ptr [rsp + 0x28], rax
22faf1 mov      rcx, qword ptr [rsp + 0x28]
22faf6 mov      rax, qword ptr [rsp + 0x20]
22fafb xor      rcx, rax
22fafe mov      qword ptr [rsp + 0x30], rcx
22fb03 mov      rax, qword ptr [rsp + 0x30]
22fb08 mov      qword ptr [rsp + 0x30], rax
22fb0d mov      rax, qword ptr [rsp + 0x30]
22fb12 mov      ebx, 0xccd50c17
22fb17 mov      qword ptr [rsp + 0x48], rbx
22fb1c mov      rcx, qword ptr [rsp + 0x48]
22fb21 mov      rax, qword ptr [rsp + 0x48]
22fb26 xor      rcx, rax
22fb29 mov      qword ptr [rsp + 0x50], rcx
22fb2e mov      rax, qword ptr [rsp + 0x50]
22fb33 xor      qword ptr [rsp + 0x4d8], rax
22fb3b mov      rcx, qword ptr [rsp + 0x50]
22fb40 and      rcx, qword ptr [rsp + 0x4d8]
22fb48 add      rcx, rcx
22fb4b mov      rax, qword ptr [rsp + 0x50]
22fb50 xor      rax, qword ptr [rsp + 0x4d8]
22fb58 add      rax, rcx
22fb5b mov      qword ptr [rsp + 0x58], rax
22fb60 mov      rax, qword ptr [rsp + 0x50]
22fb65 xor      qword ptr [rsp + 0x1b0], rax
22fb6d mov      rcx, qword ptr [rsp + 0x50]
22fb72 and      rcx, qword ptr [rsp + 0x1378]
22fb7a add      rcx, rcx
22fb7d mov      rax, qword ptr [rsp + 0x50]
22fb82 xor      rax, qword ptr [rsp + 0x1378]
22fb8a add      rax, rcx
22fb8d mov      qword ptr [rsp + 0x1378], rax
22fb95 mov      rax, qword ptr [rsp + 0x58]
22fb9a mov      rcx, qword ptr [rsp + 0x4d8]
22fba2 xor      rcx, 0x22
22fba6 call     0x140002040
22fbab mov      qword ptr [rsp + 0x4d8], rax
22fbb3 mov      rdx, qword ptr [rsp + 0x1b0]
22fbbb xor      rdx, rax
22fbbe mov      r8d, 0x15034e
22fbc4 lea      rcx, [rsp + 0x190]
22fbcc call     0x1401f1520
22fbd1 mov      qword ptr [rsp + 0x20], 0x102e74d7
22fbda mov      qword ptr [rsp + 0x28], 0x751b2be5
22fbe3 mov      rcx, qword ptr [rsp + 0x28]
22fbe8 mov      rax, qword ptr [rsp + 0x20]
22fbed xor      rcx, rax
22fbf0 mov      qword ptr [rsp + 0x30], rcx
22fbf5 mov      qword ptr [rsp + 0x78], r12
22fbfa nop      word ptr [rax + rax]
22fc00 mov      rax, qword ptr [rsp + 0x78]
22fc05 cmp      rax, 2
22fc09 jae      0x14022fc31
22fc0b mov      rcx, qword ptr [rsp + 0x30]
22fc10 mov      rax, qword ptr [rsp + 0x78]
22fc15 add      rcx, rax
22fc18 call     0x140002040
22fc1d mov      qword ptr [rsp + 0x30], rax
22fc22 mov      rax, qword ptr [rsp + 0x78]
22fc27 inc      rax
22fc2a mov      qword ptr [rsp + 0x78], rax
22fc2f jmp      0x14022fc00
22fc31 mov      rax, qword ptr [rsp + 0x30]
22fc36 mov      qword ptr [rsp + 0x60], 0xfcb744d
22fc3f mov      rax, qword ptr [rsp + 0x60]
22fc44 mov      rcx, qword ptr [rsp + 0x60]
22fc49 mov      rax, qword ptr [rsp + 0x60]
22fc4e sub      rcx, rax
22fc51 mov      qword ptr [rsp + 0x68], rcx
22fc56 mov      rcx, qword ptr [rsp + 0x68]
22fc5b or       rcx, 0x3e529b
22fc62 mov      rax, qword ptr [rsp + 0x68]
22fc67 and      eax, 0x3e529b
22fc6c add      rax, rcx
22fc6f jmp      0x1402319ec
22fc74 movzx    r8d, byte ptr [rsp + 0x63d]
22fc7d lea      rcx, [rsp + 0x190]
22fc85 cmp      r8d, 0x3e
22fc89 jae      0x14022fcd2
22fc8b inc      qword ptr [rsp + 0x1330]
22fc93 mov      ebx, 3
22fc98 cmp      dword ptr [rsp + 0xa4], 0
22fca0 mov      eax, 0x80000003
22fca5 cmovne   ebx, eax
22fca8 xor      edx, edx
22fcaa call     0x1401f1f50
22fcaf mov      r8d, eax
22fcb2 xor      edx, edx
22fcb4 lea      rcx, [rsp + 0x190]
22fcbc call     0x1402297b0
22fcc1 mov      r8, rdi
22fcc4 mov      edx, ebx
22fcc6 lea      rcx, [rsp + 0x190]
22fcce call     rax
22fcd0 jmp      0x14022fd04
22fcd2 inc      dword ptr [rsp + 0x1338]
22fcd9 xor      edx, edx
22fcdb call     0x1401ee3e0
22fce0 mov      edx, 1
22fce5 lea      rcx, [rsp + 0x190]
22fced call     0x1401ee510
22fcf2 mov      edx, 0xfe1ab
22fcf7 lea      rcx, [rsp + 0x190]
22fcff call     0x1401edff0
22fd04 lea      rcx, [rsp + 0x190]
22fd0c call     0x1401ee450
22fd11 test     eax, eax
22fd13 jne      0x140232daa
22fd19 lea      rcx, [rsp + 0x190]
22fd21 call     0x1401edf30
22fd26 cmp      eax, 0x26dc07
22fd2b jne      0x140232daa
22fd31 mov      edx, 0x3abaef
22fd36 jmp      0x140232ce0
22fd3b mov      rcx, qword ptr [rsp + 0x1b0]
22fd43 xor      rcx, qword ptr [rsp + 0x4d8]
22fd4b call     0x140002040
22fd50 mov      qword ptr [rsp + 0x40], rax
22fd55 mov      rax, qword ptr [rsp + 0x40]
22fd5a mov      ebx, 0xd37a0139
22fd5f mov      qword ptr [rsp + 0x48], rbx
22fd64 mov      rax, qword ptr [rsp + 0x48]
22fd69 mov      qword ptr [rsp + 0x50], r12
22fd6e mov      rax, qword ptr [rsp + 0x50]
22fd73 mov      rcx, qword ptr [rsp + 0x4d8]
22fd7b and      rax, rcx
22fd7e add      rax, rax
22fd81 sub      rcx, rax
22fd84 mov      rax, qword ptr [rsp + 0x50]
22fd89 add      rax, rcx
22fd8c mov      qword ptr [rsp + 0x4d8], rax
22fd94 mov      rcx, qword ptr [rsp + 0x50]
22fd99 and      rcx, qword ptr [rsp + 0x4d8]
22fda1 add      rcx, rcx
22fda4 mov      rax, qword ptr [rsp + 0x50]
22fda9 xor      rax, qword ptr [rsp + 0x4d8]
22fdb1 add      rax, rcx
22fdb4 mov      qword ptr [rsp + 0x58], rax
22fdb9 mov      rcx, qword ptr [rsp + 0x50]
22fdbe and      rcx, qword ptr [rsp + 0x1b0]
22fdc6 not      rcx
22fdc9 mov      rax, qword ptr [rsp + 0x50]
22fdce or       rax, qword ptr [rsp + 0x1b0]
22fdd6 and      rax, rcx
22fdd9 mov      qword ptr [rsp + 0x1b0], rax
22fde1 mov      rax, qword ptr [rsp + 0x50]
22fde6 add      qword ptr [rsp + 0x1378], rax
22fdee mov      rax, qword ptr [rsp + 0x58]
22fdf3 mov      rcx, qword ptr [rsp + 0x4d8]
22fdfb xor      rcx, 0x1b
22fdff call     0x140002040
22fe04 mov      qword ptr [rsp + 0x4d8], rax
22fe0c mov      rdx, qword ptr [rsp + 0x1b0]
22fe14 xor      rdx, rax
22fe17 mov      r8d, 0x10afcd
22fe1d lea      rcx, [rsp + 0x190]
22fe25 call     0x1401f1520
22fe2a mov      ebx, 0xdf4c9799
22fe2f mov      qword ptr [rsp + 0x20], rbx
22fe34 mov      ebx, 0xffd8b79f
22fe39 mov      qword ptr [rsp + 0x28], rbx
22fe3e mov      rcx, qword ptr [rsp + 0x28]
22fe43 mov      rax, qword ptr [rsp + 0x20]
22fe48 xor      rcx, rax
22fe4b mov      qword ptr [rsp + 0x30], rcx
22fe50 mov      rdx, qword ptr [rsp + 0x28]
22fe55 mov      rax, qword ptr [rsp + 0x20]
22fe5a and      rdx, rax
22fe5d add      rdx, rdx
22fe60 mov      rcx, qword ptr [rsp + 0x28]
22fe65 mov      rax, qword ptr [rsp + 0x20]
22fe6a xor      rcx, rax
22fe6d add      rcx, rdx
22fe70 mov      qword ptr [rsp + 0x30], rcx
22fe75 mov      rax, qword ptr [rsp + 0x30]
22fe7a mov      qword ptr [rsp + 0x60], 0x56bfb437
22fe83 mov      rax, qword ptr [rsp + 0x60]
22fe88 mov      rcx, qword ptr [rsp + 0x60]
22fe8d mov      rax, qword ptr [rsp + 0x60]
22fe92 sub      rcx, rax
22fe95 mov      qword ptr [rsp + 0x68], rcx
22fe9a mov      rcx, qword ptr [rsp + 0x68]
22fe9f and      ecx, 0x1eb316
22fea5 add      rcx, rcx
22fea8 mov      rax, qword ptr [rsp + 0x68]
22fead xor      rax, 0x1eb316
22feb3 jmp      0x14022e08c
22feb8 mov      qword ptr [rsp + 0x20], 0x5059c325
22fec1 mov      qword ptr [rsp + 0x28], 0x2087ba97
22feca mov      rcx, qword ptr [rsp + 0x28]
22fecf mov      rax, qword ptr [rsp + 0x20]
22fed4 xor      rcx, rax
22fed7 mov      qword ptr [rsp + 0x30], rcx
22fedc mov      rcx, qword ptr [rsp + 0x30]
22fee1 and      rcx, 0xfffffffffffffffe
22fee5 mov      rax, qword ptr [rsp + 0x30]
22feea sub      rax, rcx
22feed cmp      rax, 1
22fef1 jbe      0x14022ff03
22fef3 mov      rax, qword ptr [rsp + 0x30]
22fef8 xor      rax, 0xdead
22fefe mov      qword ptr [rsp + 0x30], rax
22ff03 mov      rax, qword ptr [rsp + 0x30]
22ff08 movsxd   rcx, dword ptr [rsp + 0x1370]
22ff10 xor      rcx, qword ptr [rsp + 0x4d8]
22ff18 call     0x140002040
22ff1d mov      qword ptr [rsp + 0x4d8], rax
22ff25 mov      ebx, 0xd2466977
22ff2a mov      qword ptr [rsp + 0x48], rbx
22ff2f mov      rdx, qword ptr [rsp + 0x48]
22ff34 mov      rax, qword ptr [rsp + 0x48]
22ff39 xor      rdx, rax
22ff3c mov      rcx, qword ptr [rsp + 0x48]
22ff41 mov      rax, qword ptr [rsp + 0x48]
22ff46 sub      rcx, rax
22ff49 or       rcx, rdx
22ff4c mov      qword ptr [rsp + 0x50], rcx
22ff51 mov      rax, qword ptr [rsp + 0x50]
22ff56 xor      qword ptr [rsp + 0x4d8], rax
22ff5e mov      rax, qword ptr [rsp + 0x50]
22ff63 add      rax, qword ptr [rsp + 0x4d8]
22ff6b mov      qword ptr [rsp + 0x58], rax
22ff70 mov      rax, qword ptr [rsp + 0x50]
22ff75 xor      qword ptr [rsp + 0x1b0], rax
22ff7d mov      rax, qword ptr [rsp + 0x50]
22ff82 add      qword ptr [rsp + 0x1378], rax
22ff8a mov      rax, qword ptr [rsp + 0x58]
22ff8f mov      rcx, qword ptr [rsp + 0x4d8]
22ff97 xor      rcx, 0x11
22ff9b call     0x140002040
22ffa0 mov      qword ptr [rsp + 0x4d8], rax
22ffa8 mov      rdx, qword ptr [rsp + 0x1b0]
22ffb0 xor      rdx, rax
22ffb3 mov      r8d, 0xa81a7
22ffb9 lea      rcx, [rsp + 0x190]
22ffc1 call     0x1401f1520
22ffc6 movzx    eax, byte ptr [rsp + 0x4d8]
22ffce lea      ecx, [rax + 0xff]
22ffd4 or       cl, al
22ffd6 test     cl, 1
22ffd9 je       0x140230019
22ffdb mov      qword ptr [rsp + 0x60], 0x2e65a695
22ffe4 mov      rax, qword ptr [rsp + 0x60]
22ffe9 mov      rcx, qword ptr [rsp + 0x60]
22ffee mov      rax, qword ptr [rsp + 0x60]
22fff3 sub      rcx, rax
22fff6 mov      qword ptr [rsp + 0x68], rcx
22fffb mov      rcx, qword ptr [rsp + 0x68]
230000 and      ecx, 0xf6b1c
230006 add      rcx, rcx
230009 mov      rax, qword ptr [rsp + 0x68]
23000e xor      rax, 0xf6b1c
230014 jmp      0x14022b87d
230019 mov      ebx, 0x90d8c477
23001e mov      qword ptr [rsp + 0x20], rbx
230023 mov      qword ptr [rsp + 0x28], 0xb3f2ce3
23002c mov      rcx, qword ptr [rsp + 0x28]
230031 mov      rax, qword ptr [rsp + 0x20]
230036 xor      rcx, rax
230039 mov      qword ptr [rsp + 0x30], rcx
23003e mov      qword ptr [rsp + 0x78], r12
230043 mov      rax, qword ptr [rsp + 0x78]
230048 cmp      rax, 3
23004c jae      0x140230074
23004e mov      rcx, qword ptr [rsp + 0x30]
230053 mov      rax, qword ptr [rsp + 0x78]
230058 add      rcx, rax
23005b call     0x140002040
230060 mov      qword ptr [rsp + 0x30], rax
230065 mov      rax, qword ptr [rsp + 0x78]
23006a inc      rax
23006d mov      qword ptr [rsp + 0x78], rax
230072 jmp      0x140230043
230074 mov      rax, qword ptr [rsp + 0x30]
230079 mov      qword ptr [rsp + 0x60], 0x2e65a695
230082 mov      rax, qword ptr [rsp + 0x60]
230087 mov      rcx, qword ptr [rsp + 0x60]
23008c mov      rax, qword ptr [rsp + 0x60]
230091 sub      rcx, rax
230094 mov      qword ptr [rsp + 0x68], rcx
230099 mov      rcx, qword ptr [rsp + 0x68]
23009e and      ecx, 0xf6b1c
2300a4 add      rcx, rcx
2300a7 mov      rax, qword ptr [rsp + 0x68]
2300ac xor      rax, 0xf6b1c
2300b2 add      rax, rcx
2300b5 mov      qword ptr [rsp + 0x70], rax
2300ba mov      rdx, qword ptr [rsp + 0x70]
2300bf mov      rax, qword ptr [rsp + 0x68]
2300c4 and      edx, eax
2300c6 add      edx, edx
2300c8 mov      rcx, qword ptr [rsp + 0x70]
2300cd sub      ecx, edx
2300cf mov      rax, qword ptr [rsp + 0x68]
2300d4 add      eax, ecx
2300d6 movsxd   rdx, eax
2300d9 jmp      0x140232ce0
2300de mov      edx, 0xb
2300e3 lea      rcx, [rsp + 0x190]
2300eb call     0x1401eddd0
2300f0 mov      r14d, dword ptr [rsp + 0x514]
2300f8 xor      r14, rax
2300fb mov      edx, 5
230100 lea      rcx, [rsp + 0x190]
230108 call     0x1401eddd0
23010d mov      rdi, rax
230110 and      edi, 1
230113 mov      edx, 6
230118 lea      rcx, [rsp + 0x190]
230120 call     0x1401eddd0
230125 mov      r12, rax
230128 and      r12d, 1
23012c mov      edx, 4
230131 lea      rcx, [rsp + 0x190]
230139 call     0x1401eddd0
23013e mov      rbx, rax
230141 mov      edx, 0xc
230146 lea      rcx, [rsp + 0x190]
23014e call     0x1401eddd0
230153 mov      r15, rax
230156 mov      r8d, edi
230159 mov      edx, r14d
23015c lea      rcx, [rsp + 0x190]
230164 call     0x1401f0f80
230169 xor      rbx, rax
23016c mov      esi, ebx
23016e mov      r9d, ebx
230171 mov      r8d, edi
230174 mov      edx, r14d
230177 lea      rcx, [rsp + 0x190]
23017f call     0x1401f1000
230184 xor      r14d, r14d
230187 cmp      rax, r15
23018a sete     r14b
23018e mov      rbx, r14
230191 and      rbx, r12
230194 and      rbx, rdi
230197 neg      rbx
23019a lea      rcx, [rsp + 0x190]
2301a2 call     0x1401ee070
2301a7 mov      edx, eax
2301a9 xor      edx, esi
2301ab and      edx, ebx
2301ad xor      edx, eax
2301af lea      rcx, [rsp + 0x190]
2301b7 call     0x1401ee140
2301bc xor      r8d, r8d
2301bf lea      edx, [r8 + 6]
2301c3 lea      rcx, [rsp + 0x190]
2301cb call     0x1401edea0
2301d0 xor      r8d, r8d
2301d3 lea      edx, [r8 + 0xc]
2301d7 lea      rcx, [rsp + 0x190]
2301df call     0x1401edea0
2301e4 test     r12, r12
2301e7 je       0x140230200
2301e9 test     r14, r14
2301ec jne      0x140230200
2301ee mov      edx, 0x4252414e
2301f3 lea      rcx, [rsp + 0x190]
2301fb call     0x1401ed830
230200 lea      rcx, [rsp + 0x190]
230208 call     0x1401ee070
23020d mov      ecx, eax
23020f xor      rcx, qword ptr [rsp + 0x1b0]
230217 call     0x140002040
23021c mov      qword ptr [rsp + 0x1b0], rax
230224 mov      rax, qword ptr [rsp + 0x4d8]
23022c mov      qword ptr [rsp + 0x38], rax
230231 movsxd   rcx, dword ptr [rsp + 0x1370]
230239 mov      rax, qword ptr [rsp + 0x38]
23023e xor      rcx, rax
230241 mov      qword ptr [rsp + 0x38], rcx
230246 mov      rcx, qword ptr [rsp + 0x38]
23024b call     0x140002040
230250 mov      qword ptr [rsp + 0x4d8], rax
230258 mov      ebx, 0x917cd36f
23025d mov      qword ptr [rsp + 0x20], rbx
230262 mov      ebx, 0x85cfec29
230267 mov      qword ptr [rsp + 0x28], rbx
23026c mov      rcx, qword ptr [rsp + 0x28]
230271 mov      rax, qword ptr [rsp + 0x20]
230276 xor      rcx, rax
230279 mov      qword ptr [rsp + 0x30], rcx
23027e mov      rcx, qword ptr [rsp + 0x30]
230283 mov      rax, qword ptr [rsp + 0x30]
230288 xor      rcx, rax
23028b mov      rax, qword ptr [rsp + 0x30]
230290 add      rax, rcx
230293 mov      qword ptr [rsp + 0x30], rax
230298 mov      rax, qword ptr [rsp + 0x30]
23029d mov      r15d, 0x27f17
2302a3 mov      edx, r15d
2302a6 lea      rcx, [rsp + 0x190]
2302ae call     0x1401f0db0
2302b3 xor      r12d, r12d
2302b6 jmp      0x140232daa
2302bb cmp      eax, 0x2b1e1e
2302c0 jg       0x1402309a6
2302c6 je       0x14023085b
2302cc cmp      eax, 0x2946fe
2302d1 je       0x140230696
2302d7 cmp      eax, 0x29608c
2302dc je       0x140230527
2302e2 cmp      eax, 0x2a0025
2302e7 je       0x14023045a
2302ed cmp      eax, 0x2af9ad
2302f2 jne      0x140232642
2302f8 mov      rcx, qword ptr [rsp + 0x1b0]
230300 xor      rcx, qword ptr [rsp + 0x4d8]
230308 call     0x140002040
23030d mov      qword ptr [rsp + 0x40], rax
230312 mov      rax, qword ptr [rsp + 0x40]
230317 mov      rcx, qword ptr [rsp + 0x1b0]
23031f xor      rcx, qword ptr [rsp + 0x4d8]
230327 call     0x140002040
23032c mov      qword ptr [rsp + 0x40], rax
230331 mov      rax, qword ptr [rsp + 0x40]
230336 mov      qword ptr [rsp + 0x48], 0x457276ab
23033f mov      rax, qword ptr [rsp + 0x48]
230344 mov      qword ptr [rsp + 0x50], r12
230349 mov      rcx, qword ptr [rsp + 0x50]
23034e or       rcx, qword ptr [rsp + 0x4d8]
230356 mov      rax, qword ptr [rsp + 0x50]
23035b and      rax, qword ptr [rsp + 0x4d8]
230363 sub      rcx, rax
230366 mov      qword ptr [rsp + 0x4d8], rcx
23036e mov      rax, qword ptr [rsp + 0x50]
230373 add      rax, qword ptr [rsp + 0x4d8]
23037b mov      qword ptr [rsp + 0x58], rax
230380 mov      rcx, qword ptr [rsp + 0x50]
230385 and      rcx, qword ptr [rsp + 0x1b0]
23038d not      rcx
230390 mov      rax, qword ptr [rsp + 0x50]
230395 or       rax, qword ptr [rsp + 0x1b0]
23039d and      rax, rcx
2303a0 mov      qword ptr [rsp + 0x1b0], rax
2303a8 mov      rax, qword ptr [rsp + 0x58]
2303ad mov      rcx, qword ptr [rsp + 0x4d8]
2303b5 xor      rcx, 0x32
2303b9 call     0x140002040
2303be mov      qword ptr [rsp + 0x4d8], rax
2303c6 mov      rdx, qword ptr [rsp + 0x1b0]
2303ce xor      rdx, rax
2303d1 mov      r8d, 0x1ee6be
2303d7 lea      rcx, [rsp + 0x190]
2303df call     0x1401f1520
2303e4 mov      ebx, 0xc0e6df3f
2303e9 mov      qword ptr [rsp + 0x20], rbx
2303ee mov      ebx, 0x96974691
2303f3 mov      qword ptr [rsp + 0x28], rbx
2303f8 mov      rcx, qword ptr [rsp + 0x28]
2303fd mov      rax, qword ptr [rsp + 0x20]
230402 xor      rcx, rax
230405 mov      qword ptr [rsp + 0x30], rcx
23040a mov      rcx, qword ptr [rsp + 0x30]
23040f mov      rax, qword ptr [rsp + 0x30]
230414 xor      rcx, rax
230417 mov      rax, qword ptr [rsp + 0x30]
23041c add      rax, rcx
23041f mov      qword ptr [rsp + 0x30], rax
230424 mov      rax, qword ptr [rsp + 0x30]
230429 mov      ebx, 0xd2c7e631
23042e mov      qword ptr [rsp + 0x60], rbx
230433 mov      rax, qword ptr [rsp + 0x60]
230438 mov      rcx, qword ptr [rsp + 0x60]
23043d mov      rax, qword ptr [rsp + 0x60]
230442 sub      rcx, rax
230445 mov      qword ptr [rsp + 0x68], rcx
23044a mov      rax, qword ptr [rsp + 0x68]
23044f add      rax, 0x2b1e1e
230455 jmp      0x14022e08f
23045a movzx    r8d, byte ptr [rsp + 0x63d]
230463 lea      rcx, [rsp + 0x190]
23046b cmp      r8d, 0x3e
23046f jae      0x1402304be
230471 inc      qword ptr [rsp + 0x1330]
230479 mov      ebx, 3
23047e cmp      dword ptr [rsp + 0xa4], 0
230486 mov      eax, 0x80000003
23048b cmovne   ebx, eax
23048e mov      edx, 3
230493 call     0x1401f1f50
230498 mov      r8d, eax
23049b mov      edx, 3
2304a0 lea      rcx, [rsp + 0x190]
2304a8 call     0x1402297b0
2304ad mov      r8, rdi
2304b0 mov      edx, ebx
2304b2 lea      rcx, [rsp + 0x190]
2304ba call     rax
2304bc jmp      0x1402304f0
2304be inc      dword ptr [rsp + 0x1338]
2304c5 xor      edx, edx
2304c7 call     0x1401ee3e0
2304cc mov      edx, 1
2304d1 lea      rcx, [rsp + 0x190]
2304d9 call     0x1401ee510
2304de mov      edx, 0xfe1ab
2304e3 lea      rcx, [rsp + 0x190]
2304eb call     0x1401edff0
2304f0 lea      rcx, [rsp + 0x190]
2304f8 call     0x1401ee450
2304fd test     eax, eax
2304ff jne      0x140232daa
230505 lea      rcx, [rsp + 0x190]
23050d call     0x1401edf30
230512 cmp      eax, 0x2a0025
230517 jne      0x140232daa
23051d mov      edx, 0x85b36
230522 jmp      0x140232ce0
230527 mov      rcx, qword ptr [rsp + 0x1b0]
23052f xor      rcx, qword ptr [rsp + 0x4d8]
230537 call     0x140002040
23053c mov      qword ptr [rsp + 0x40], rax
230541 mov      rax, qword ptr [rsp + 0x40]
230546 mov      eax, 0xce351151
23054b mov      qword ptr [rsp + 0x48], rax
230550 mov      rdx, qword ptr [rsp + 0x48]
230555 mov      rax, qword ptr [rsp + 0x48]
23055a xor      rdx, rax
23055d mov      rcx, qword ptr [rsp + 0x48]
230562 mov      rax, qword ptr [rsp + 0x48]
230567 sub      rcx, rax
23056a or       rcx, rdx
23056d mov      qword ptr [rsp + 0x50], rcx
230572 mov      rcx, qword ptr [rsp + 0x50]
230577 or       rcx, qword ptr [rsp + 0x4d8]
23057f mov      rax, qword ptr [rsp + 0x50]
230584 and      rax, qword ptr [rsp + 0x4d8]
23058c sub      rcx, rax
23058f mov      qword ptr [rsp + 0x4d8], rcx
230597 mov      rax, qword ptr [rsp + 0x50]
23059c add      rax, qword ptr [rsp + 0x4d8]
2305a4 mov      qword ptr [rsp + 0x58], rax
2305a9 mov      rcx, qword ptr [rsp + 0x50]
2305ae and      rcx, qword ptr [rsp + 0x1b0]
2305b6 not      rcx
2305b9 mov      rax, qword ptr [rsp + 0x50]
2305be or       rax, qword ptr [rsp + 0x1b0]
2305c6 and      rax, rcx
2305c9 mov      qword ptr [rsp + 0x1b0], rax
2305d1 mov      rax, qword ptr [rsp + 0x58]
2305d6 mov      rax, qword ptr [rsp + 0x4d8]
2305de xor      rax, 0x10
2305e2 mov      qword ptr [rsp + 0x38], rax
2305e7 mov      rcx, qword ptr [rsp + 0x38]
2305ec call     0x140002040
2305f1 mov      qword ptr [rsp + 0x4d8], rax
2305f9 mov      rdx, qword ptr [rsp + 0x1b0]
230601 xor      rdx, rax
230604 mov      r8d, 0x9e370
23060a lea      rcx, [rsp + 0x190]
230612 call     0x1401f1520
230617 mov      qword ptr [rsp + 0x20], 0x653fdc7d
230620 mov      ebx, 0xb9cef2cb
230625 mov      qword ptr [rsp + 0x28], rbx
23062a mov      rcx, qword ptr [rsp + 0x28]
23062f mov      rax, qword ptr [rsp + 0x20]
230634 xor      rcx, rax
230637 mov      qword ptr [rsp + 0x30], rcx
23063c mov      rax, qword ptr [rsp + 0x30]
230641 dec      rax
230644 mov      rcx, qword ptr [rsp + 0x30]
230649 xor      cl, al
23064b test     cl, 1
23064e jne      0x140230660
230650 mov      rax, qword ptr [rsp + 0x30]
230655 xor      rax, 0xdead
23065b mov      qword ptr [rsp + 0x30], rax
230660 mov      rax, qword ptr [rsp + 0x30]
230665 mov      ebx, 0xe005ed77
23066a mov      qword ptr [rsp + 0x60], rbx
23066f mov      rax, qword ptr [rsp + 0x60]
230674 mov      rcx, qword ptr [rsp + 0x60]
230679 mov      rax, qword ptr [rsp + 0x60]
23067e sub      rcx, rax
230681 mov      qword ptr [rsp + 0x68], rcx
230686 mov      rax, qword ptr [rsp + 0x68]
23068b add      rax, 0x260812
230691 jmp      0x140232cbe
230696 movsxd   rcx, dword ptr [rsp + 0x1370]
23069e xor      rcx, qword ptr [rsp + 0x4d8]
2306a6 call     0x140002040
2306ab mov      qword ptr [rsp + 0x4d8], rax
2306b3 movsxd   rcx, dword ptr [rsp + 0x1370]
2306bb xor      rcx, rax
2306be call     0x140002040
2306c3 mov      qword ptr [rsp + 0x4d8], rax
2306cb mov      qword ptr [rsp + 0x48], 0x158b82b
2306d4 mov      rdx, qword ptr [rsp + 0x48]
2306d9 mov      rax, qword ptr [rsp + 0x48]
2306de xor      rdx, rax
2306e1 mov      rcx, qword ptr [rsp + 0x48]
2306e6 mov      rax, qword ptr [rsp + 0x48]
2306eb sub      rcx, rax
2306ee or       rcx, rdx
2306f1 mov      qword ptr [rsp + 0x50], rcx
2306f6 mov      rax, qword ptr [rsp + 0x50]
2306fb mov      rcx, qword ptr [rsp + 0x4d8]
230703 and      rax, rcx
230706 add      rax, rax
230709 sub      rcx, rax
23070c mov      rax, qword ptr [rsp + 0x50]
230711 add      rax, rcx
230714 mov      qword ptr [rsp + 0x4d8], rax
23071c mov      rcx, qword ptr [rsp + 0x50]
230721 and      rcx, qword ptr [rsp + 0x4d8]
230729 add      rcx, rcx
23072c mov      rax, qword ptr [rsp + 0x50]
230731 xor      rax, qword ptr [rsp + 0x4d8]
230739 add      rax, rcx
23073c mov      qword ptr [rsp + 0x58], rax
230741 mov      rcx, qword ptr [rsp + 0x50]
230746 or       rcx, qword ptr [rsp + 0x1b0]
23074e mov      rax, qword ptr [rsp + 0x50]
230753 and      rax, qword ptr [rsp + 0x1b0]
23075b sub      rcx, rax
23075e mov      qword ptr [rsp + 0x1b0], rcx
230766 mov      rax, qword ptr [rsp + 0x50]
23076b add      qword ptr [rsp + 0x1378], rax
230773 mov      rax, qword ptr [rsp + 0x58]
230778 mov      rax, qword ptr [rsp + 0x4d8]
230780 xor      rax, 0x28
230784 mov      qword ptr [rsp + 0x38], rax
230789 mov      rax, qword ptr [rsp + 0x38]
23078e mov      rcx, qword ptr [rsp + 0x38]
230793 mov      rax, qword ptr [rsp + 0x38]
230798 and      rcx, rax
23079b call     0x140002040
2307a0 mov      qword ptr [rsp + 0x4d8], rax
2307a8 mov      rdx, qword ptr [rsp + 0x1b0]
2307b0 xor      rdx, rax
2307b3 mov      r8d, 0x18b898
2307b9 lea      rcx, [rsp + 0x190]
2307c1 call     0x1401f1520
2307c6 movzx    eax, byte ptr [rsp + 0x4d8]
2307ce lea      ecx, [rax + 0xff]
2307d4 xor      cl, al
2307d6 test     cl, 1
2307d9 jne      0x14023082a
2307db mov      qword ptr [rsp + 0x20], 0x645c5a59
2307e4 mov      eax, 0xa4ce2995
2307e9 mov      qword ptr [rsp + 0x28], rax
2307ee mov      rcx, qword ptr [rsp + 0x28]
2307f3 mov      rax, qword ptr [rsp + 0x20]
2307f8 xor      rcx, rax
2307fb mov      qword ptr [rsp + 0x30], rcx
230800 mov      rdx, qword ptr [rsp + 0x28]
230805 mov      rax, qword ptr [rsp + 0x20]
23080a and      rdx, rax
23080d add      rdx, rdx
230810 mov      rcx, qword ptr [rsp + 0x28]
230815 mov      rax, qword ptr [rsp + 0x20]
23081a xor      rcx, rax
23081d add      rcx, rdx
230820 mov      qword ptr [rsp + 0x30], rcx
230825 mov      rax, qword ptr [rsp + 0x30]
23082a mov      ebx, 0xae161b6b
23082f mov      qword ptr [rsp + 0x60], rbx
230834 mov      rax, qword ptr [rsp + 0x60]
230839 mov      rcx, qword ptr [rsp + 0x60]
23083e mov      rax, qword ptr [rsp + 0x60]
230843 sub      rcx, rax
230846 mov      qword ptr [rsp + 0x68], rcx
23084b mov      rax, qword ptr [rsp + 0x68]
230850 add      rax, 0x2efcb3
230856 jmp      0x14022e08f
23085b mov      qword ptr [rsp + 0x48], 0xbdb68ef
230864 mov      rcx, qword ptr [rsp + 0x48]
230869 mov      rax, qword ptr [rsp + 0x48]
23086e xor      rcx, rax
230871 mov      qword ptr [rsp + 0x50], rcx
230876 mov      rax, qword ptr [rsp + 0x50]
23087b xor      qword ptr [rsp + 0x4d8], rax
230883 mov      rax, qword ptr [rsp + 0x50]
230888 add      rax, qword ptr [rsp + 0x4d8]
230890 mov      qword ptr [rsp + 0x58], rax
230895 mov      rax, qword ptr [rsp + 0x50]
23089a mov      rcx, qword ptr [rsp + 0x1b0]
2308a2 and      rax, rcx
2308a5 add      rax, rax
2308a8 sub      rcx, rax
2308ab mov      rax, qword ptr [rsp + 0x50]
2308b0 add      rax, rcx
2308b3 mov      qword ptr [rsp + 0x1b0], rax
2308bb mov      rax, qword ptr [rsp + 0x50]
2308c0 add      qword ptr [rsp + 0x1378], rax
2308c8 mov      rax, qword ptr [rsp + 0x58]
2308cd mov      rax, qword ptr [rsp + 0x4d8]
2308d5 xor      rax, 0x33
2308d9 mov      qword ptr [rsp + 0x38], rax
2308de mov      rcx, qword ptr [rsp + 0x38]
2308e3 call     0x140002040
2308e8 mov      qword ptr [rsp + 0x4d8], rax
2308f0 mov      rdx, qword ptr [rsp + 0x1b0]
2308f8 xor      rdx, rax
2308fb mov      r8d, 0x1f84f5
230901 lea      rcx, [rsp + 0x190]
230909 call     0x1401f1520
23090e mov      ebx, 0xfddad9db
230913 mov      qword ptr [rsp + 0x20], rbx
230918 mov      ebx, 0xe481510d
23091d mov      qword ptr [rsp + 0x28], rbx
230922 mov      rcx, qword ptr [rsp + 0x28]
230927 mov      rax, qword ptr [rsp + 0x20]
23092c xor      rcx, rax
23092f mov      qword ptr [rsp + 0x30], rcx
230934 mov      qword ptr [rsp + 0x78], r12
230939 nop      dword ptr [rax]
230940 mov      rax, qword ptr [rsp + 0x78]
230945 cmp      rax, 1
230949 jae      0x140230971
23094b mov      rcx, qword ptr [rsp + 0x30]
230950 mov      rax, qword ptr [rsp + 0x78]
230955 add      rcx, rax
230958 call     0x140002040
23095d mov      qword ptr [rsp + 0x30], rax
230962 mov      rax, qword ptr [rsp + 0x78]
230967 inc      rax
23096a mov      qword ptr [rsp + 0x78], rax
23096f jmp      0x140230940
230971 mov      rax, qword ptr [rsp + 0x30]
230976 mov      qword ptr [rsp + 0x60], 0x2ea8b527
23097f mov      rax, qword ptr [rsp + 0x60]
230984 mov      rcx, qword ptr [rsp + 0x60]
230989 mov      rax, qword ptr [rsp + 0x60]
23098e sub      rcx, rax
230991 mov      qword ptr [rsp + 0x68], rcx
230996 mov      rax, qword ptr [rsp + 0x68]
23099b add      rax, 0x3c2125
2309a1 jmp      0x1402319ec
2309a6 cmp      eax, 0x2b5c68
2309ab je       0x140230d30
2309b1 cmp      eax, 0x2c1549
2309b6 je       0x140230c9b
2309bc cmp      eax, 0x2c5cea
2309c1 je       0x140230bd5
2309c7 cmp      eax, 0x2d1a07
2309cc jne      0x140232642
2309d2 mov      qword ptr [rsp + 0x20], 0x73917e67
2309db mov      eax, 0xee4c88c3
2309e0 mov      qword ptr [rsp + 0x28], rax
2309e5 mov      rcx, qword ptr [rsp + 0x28]
2309ea mov      rax, qword ptr [rsp + 0x20]
2309ef xor      rcx, rax
2309f2 mov      qword ptr [rsp + 0x30], rcx
2309f7 mov      rcx, qword ptr [rsp + 0x30]
2309fc and      ecx, 1
2309ff mov      rax, qword ptr [rsp + 0x30]
230a04 and      eax, 1
230a07 add      rax, rcx
230a0a cmp      rax, 2
230a0e jbe      0x140230a20
230a10 mov      rax, qword ptr [rsp + 0x30]
230a15 xor      rax, 0xdead
230a1b mov      qword ptr [rsp + 0x30], rax
230a20 mov      rax, qword ptr [rsp + 0x30]
230a25 mov      qword ptr [rsp + 0x48], 0xf2971d9
230a2e mov      rcx, qword ptr [rsp + 0x48]
230a33 mov      rax, qword ptr [rsp + 0x48]
230a38 sub      rcx, rax
230a3b mov      qword ptr [rsp + 0x50], rcx
230a40 mov      rax, qword ptr [rsp + 0x50]
230a45 mov      rcx, qword ptr [rsp + 0x4d8]
230a4d and      rax, rcx
230a50 add      rax, rax
230a53 sub      rcx, rax
230a56 mov      rax, qword ptr [rsp + 0x50]
230a5b add      rax, rcx
230a5e mov      qword ptr [rsp + 0x4d8], rax
230a66 mov      rcx, qword ptr [rsp + 0x50]
230a6b and      rcx, qword ptr [rsp + 0x4d8]
230a73 add      rcx, rcx
230a76 mov      rax, qword ptr [rsp + 0x50]
230a7b xor      rax, qword ptr [rsp + 0x4d8]
230a83 add      rax, rcx
230a86 mov      qword ptr [rsp + 0x58], rax
230a8b mov      rax, qword ptr [rsp + 0x50]
230a90 xor      qword ptr [rsp + 0x1b0], rax
230a98 mov      rax, qword ptr [rsp + 0x50]
230a9d add      qword ptr [rsp + 0x1378], rax
230aa5 mov      rax, qword ptr [rsp + 0x58]
230aaa mov      rax, qword ptr [rsp + 0x4d8]
230ab2 mov      qword ptr [rsp + 0x38], rax
230ab7 mov      rax, qword ptr [rsp + 0x38]
230abc xor      rax, 7
230ac0 mov      qword ptr [rsp + 0x38], rax
230ac5 mov      rcx, qword ptr [rsp + 0x38]
230aca call     0x140002040
230acf mov      qword ptr [rsp + 0x4d8], rax
230ad7 xor      rax, qword ptr [rsp + 0x1b0]
230adf mov      r8d, 0x45381
230ae5 mov      rdx, rax
230ae8 lea      rcx, [rsp + 0x190]
230af0 call     0x1401f1520
230af5 movzx    eax, byte ptr [rsp + 0x4d8]
230afd lea      ecx, [rax + 0xff]
230b03 mov      edx, eax
230b05 movzx    eax, cl
230b08 imul     eax, edx
230b0b mov      ebx, 0x8e9c458b
230b10 test     al, 1
230b12 jne      0x140230b4b
230b14 mov      qword ptr [rsp + 0x60], rbx
230b19 mov      rax, qword ptr [rsp + 0x60]
230b1e mov      rcx, qword ptr [rsp + 0x60]
230b23 mov      rax, qword ptr [rsp + 0x60]
230b28 sub      rcx, rax
230b2b mov      qword ptr [rsp + 0x68], rcx
230b30 mov      rcx, qword ptr [rsp + 0x68]
230b35 or       rcx, 0x3ffaa2
230b3c mov      rax, qword ptr [rsp + 0x68]
230b41 and      eax, 0x3ffaa2
230b46 jmp      0x140232cbb
230b4b mov      qword ptr [rsp + 0x20], 0x6ea1090b
230b54 mov      qword ptr [rsp + 0x28], 0x41a8049f
230b5d mov      rcx, qword ptr [rsp + 0x28]
230b62 mov      rax, qword ptr [rsp + 0x20]
230b67 xor      rcx, rax
230b6a mov      qword ptr [rsp + 0x30], rcx
230b6f mov      rax, qword ptr [rsp + 0x30]
230b74 mov      rax, qword ptr [rsp + 0x30]
230b79 mov      qword ptr [rsp + 0x60], rbx
230b7e mov      rax, qword ptr [rsp + 0x60]
230b83 mov      rcx, qword ptr [rsp + 0x60]
230b88 mov      rax, qword ptr [rsp + 0x60]
230b8d sub      rcx, rax
230b90 mov      qword ptr [rsp + 0x68], rcx
230b95 mov      rcx, qword ptr [rsp + 0x68]
230b9a or       rcx, 0x3ffaa2
230ba1 mov      rax, qword ptr [rsp + 0x68]
230ba6 and      eax, 0x3ffaa2
230bab add      rax, rcx
230bae mov      qword ptr [rsp + 0x70], rax
230bb3 mov      rdx, qword ptr [rsp + 0x70]
230bb8 mov      rax, qword ptr [rsp + 0x68]
230bbd or       edx, eax
230bbf mov      rcx, qword ptr [rsp + 0x70]
230bc4 mov      rax, qword ptr [rsp + 0x68]
230bc9 and      ecx, eax
230bcb sub      edx, ecx
230bcd movsxd   rdx, edx
230bd0 jmp      0x140232664
230bd5 mov      eax, 0xe9b3efcd
230bda mov      qword ptr [rsp + 0x20], rax
230bdf mov      qword ptr [rsp + 0x28], 0x7e9a73ab
230be8 mov      rcx, qword ptr [rsp + 0x28]
230bed mov      rax, qword ptr [rsp + 0x20]
230bf2 xor      rcx, rax
230bf5 mov      qword ptr [rsp + 0x30], rcx
230bfa mov      rdx, qword ptr [rsp + 0x28]
230bff mov      rax, qword ptr [rsp + 0x20]
230c04 and      rdx, rax
230c07 add      rdx, rdx
230c0a mov      rcx, qword ptr [rsp + 0x28]
230c0f mov      rax, qword ptr [rsp + 0x20]
230c14 xor      rcx, rax
230c17 add      rcx, rdx
230c1a mov      qword ptr [rsp + 0x30], rcx
230c1f mov      rax, qword ptr [rsp + 0x30]
230c24 movzx    edx, byte ptr [rsp + 0x63d]
230c2c xor      rdx, qword ptr [rsp + 0x4d8]
230c34 mov      r8d, 0x51ed
230c3a lea      rcx, [rsp + 0x190]
230c42 call     0x1401f1520
230c47 movdqa   xmm0, xmmword ptr [rip + 0x1c0fb1]
230c4f movdqu   xmmword ptr [rsp + 0x13b8], xmm0
230c58 movzx    eax, byte ptr [rsp + 0x63d]
230c60 mov      rcx, qword ptr [rsp + 0x1b0]
230c68 xor      rax, rcx
230c6b mov      rdx, qword ptr [rsp + 0x4d8]
230c73 xor      rax, rdx
230c76 and      eax, 3
230c79 mov      ebx, dword ptr [rsp + rax*4 + 0x13b8]
230c80 cmp      ebx, 0x1e7639
230c86 cmove    ebx, r15d
230c8a call     0x140002430
230c8f test     eax, eax
230c91 cmovne   ebx, esi
230c94 mov      edx, ebx
230c96 jmp      0x140232ce0
230c9b mov      ebx, 0x862504ad
230ca0 mov      qword ptr [rsp + 0x20], rbx
230ca5 mov      ebx, 0x8885e1f7
230caa mov      qword ptr [rsp + 0x28], rbx
230caf mov      rcx, qword ptr [rsp + 0x28]
230cb4 mov      rax, qword ptr [rsp + 0x20]
230cb9 xor      rcx, rax
230cbc mov      qword ptr [rsp + 0x30], rcx
230cc1 mov      rdx, qword ptr [rsp + 0x28]
230cc6 mov      rax, qword ptr [rsp + 0x20]
230ccb and      rdx, rax
230cce add      rdx, rdx
230cd1 mov      rcx, qword ptr [rsp + 0x28]
230cd6 mov      rax, qword ptr [rsp + 0x20]
230cdb xor      rcx, rax
230cde add      rcx, rdx
230ce1 mov      qword ptr [rsp + 0x30], rcx
230ce6 mov      rax, qword ptr [rsp + 0x30]
230ceb movsxd   rcx, dword ptr [rsp + 0x1370]
230cf3 xor      rcx, qword ptr [rsp + 0x4d8]
230cfb call     0x140002040
230d00 mov      qword ptr [rsp + 0x4d8], rax
230d08 lea      rcx, [rax + 1]
230d0c call     0x140002040
230d11 xor      qword ptr [rsp + 0x4d8], rax
230d19 mov      edx, 0x2367b2
230d1e lea      rcx, [rsp + 0x190]
230d26 call     0x1401f0db0
230d2b jmp      0x140232daa
230d30 mov      rax, qword ptr [rsp + 0x4d8]
230d38 mov      qword ptr [rsp + 0x38], rax
230d3d movsxd   rcx, dword ptr [rsp + 0x1370]
230d45 mov      rax, qword ptr [rsp + 0x38]
230d4a xor      rcx, rax
230d4d mov      qword ptr [rsp + 0x38], rcx
230d52 mov      rcx, qword ptr [rsp + 0x38]
230d57 call     0x140002040
230d5c mov      qword ptr [rsp + 0x4d8], rax
230d64 movsxd   rcx, dword ptr [rsp + 0x1370]
230d6c xor      rcx, rax
230d6f mov      qword ptr [rsp + 0x38], rcx
230d74 mov      rdx, qword ptr [rsp + 0x38]
230d79 mov      rax, qword ptr [rsp + 0x38]
230d7e xor      rdx, rax
230d81 mov      rcx, qword ptr [rsp + 0x38]
230d86 add      rcx, rdx
230d89 call     0x140002040
230d8e mov      qword ptr [rsp + 0x4d8], rax
230d96 mov      eax, 0xfb0fd74b
230d9b mov      qword ptr [rsp + 0x48], rax
230da0 mov      rcx, qword ptr [rsp + 0x48]
230da5 mov      rax, qword ptr [rsp + 0x48]
230daa xor      rcx, rax
230dad mov      qword ptr [rsp + 0x50], rcx
230db2 mov      rax, qword ptr [rsp + 0x50]
230db7 xor      qword ptr [rsp + 0x4d8], rax
230dbf mov      rcx, qword ptr [rsp + 0x50]
230dc4 and      rcx, qword ptr [rsp + 0x4d8]
230dcc add      rcx, rcx
230dcf mov      rax, qword ptr [rsp + 0x50]
230dd4 xor      rax, qword ptr [rsp + 0x4d8]
230ddc add      rax, rcx
230ddf mov      qword ptr [rsp + 0x58], rax
230de4 mov      rcx, qword ptr [rsp + 0x50]
230de9 and      rcx, qword ptr [rsp + 0x1b0]
230df1 not      rcx
230df4 mov      rax, qword ptr [rsp + 0x50]
230df9 or       rax, qword ptr [rsp + 0x1b0]
230e01 and      rax, rcx
230e04 mov      qword ptr [rsp + 0x1b0], rax
230e0c mov      rax, qword ptr [rsp + 0x50]
230e11 add      qword ptr [rsp + 0x1378], rax
230e19 mov      rax, qword ptr [rsp + 0x58]
230e1e mov      rcx, qword ptr [rsp + 0x4d8]
230e26 xor      rcx, 0x30
230e2a call     0x140002040
230e2f mov      qword ptr [rsp + 0x4d8], rax
230e37 mov      rdx, qword ptr [rsp + 0x1b0]
230e3f xor      rdx, rax
230e42 mov      r8d, 0x1daa50
230e48 lea      rcx, [rsp + 0x190]
230e50 call     0x1401f1520
230e55 mov      rcx, qword ptr [rsp + 0x4d8]
230e5d mov      rax, rcx
230e60 and      rax, 0xfffffffffffffffe
230e64 sub      rcx, rax
230e67 cmp      rcx, 1
230e6b jbe      0x140230eb2
230e6d mov      eax, 0xdf95672f
230e72 mov      qword ptr [rsp + 0x20], rax
230e77 mov      eax, 0x89a88573
230e7c mov      qword ptr [rsp + 0x28], rax
230e81 mov      rcx, qword ptr [rsp + 0x28]
230e86 mov      rax, qword ptr [rsp + 0x20]
230e8b xor      rcx, rax
230e8e mov      qword ptr [rsp + 0x30], rcx
230e93 mov      rcx, qword ptr [rsp + 0x30]
230e98 mov      rax, qword ptr [rsp + 0x30]
230e9d xor      rcx, rax
230ea0 mov      rax, qword ptr [rsp + 0x30]
230ea5 add      rax, rcx
230ea8 mov      qword ptr [rsp + 0x30], rax
230ead mov      rax, qword ptr [rsp + 0x30]
230eb2 mov      ebx, 0x82d9395f
230eb7 mov      qword ptr [rsp + 0x60], rbx
230ebc mov      rax, qword ptr [rsp + 0x60]
230ec1 mov      rcx, qword ptr [rsp + 0x60]
230ec6 mov      rax, qword ptr [rsp + 0x60]
230ecb sub      rcx, rax
230ece mov      qword ptr [rsp + 0x68], rcx
230ed3 mov      rcx, qword ptr [rsp + 0x68]
230ed8 and      ecx, 0x1c1c41
230ede add      rcx, rcx
230ee1 mov      rax, qword ptr [rsp + 0x68]
230ee6 xor      rax, 0x1c1c41
230eec jmp      0x14022e08c
230ef1 mov      rcx, qword ptr [rsp + 0x4d8]
230ef9 xor      rcx, qword ptr [rsp + 0x1378]
230f01 mov      qword ptr [rsp + 0x4d8], rcx
230f09 xor      rcx, qword ptr [rsp + 0x1b0]
230f11 call     0x140002040
230f16 mov      qword ptr [rsp + 0x1b0], rax
230f1e mov      rdx, qword ptr [rsp + 0x4d8]
230f26 mov      rcx, rax
230f29 call     0x1400023e0
230f2e mov      edx, 0x2e0108
230f33 test     eax, eax
230f35 cmovne   rdx, r15
230f39 jmp      0x140232ce0
230f3e cmp      eax, 0x36cfc2
230f43 jg       0x140231dc8
230f49 je       0x140231c74
230f4f cmp      eax, 0x33037c
230f54 jg       0x1402316f6
230f5a je       0x140231522
230f60 cmp      eax, 0x2e0108
230f65 je       0x140231458
230f6b cmp      eax, 0x2ecf28
230f70 je       0x140231251
230f76 cmp      eax, 0x2efcb3
230f7b je       0x1402310b6
230f81 cmp      eax, 0x2fd841
230f86 je       0x140230f9b
230f88 cmp      eax, 0x32a5e8
230f8d jne      0x140232642
230f93 mov      rdx, r15
230f96 jmp      0x140232ce0
230f9b mov      rax, qword ptr [rsp + 0x4d8]
230fa3 mov      qword ptr [rsp + 0x38], rax
230fa8 movsxd   rcx, dword ptr [rsp + 0x1370]
230fb0 mov      rax, qword ptr [rsp + 0x38]
230fb5 xor      rcx, rax
230fb8 mov      qword ptr [rsp + 0x38], rcx
230fbd mov      rcx, qword ptr [rsp + 0x38]
230fc2 call     0x140002040
230fc7 mov      qword ptr [rsp + 0x4d8], rax
230fcf mov      eax, 0x911e1f69
230fd4 mov      qword ptr [rsp + 0x48], rax
230fd9 mov      rdx, qword ptr [rsp + 0x48]
230fde mov      rax, qword ptr [rsp + 0x48]
230fe3 xor      rdx, rax
230fe6 mov      rcx, qword ptr [rsp + 0x48]
230feb mov      rax, qword ptr [rsp + 0x48]
230ff0 sub      rcx, rax
230ff3 or       rcx, rdx
230ff6 mov      qword ptr [rsp + 0x50], rcx
230ffb mov      rax, qword ptr [rsp + 0x50]
231000 xor      qword ptr [rsp + 0x4d8], rax
231008 mov      rax, qword ptr [rsp + 0x50]
23100d add      rax, qword ptr [rsp + 0x4d8]
231015 mov      qword ptr [rsp + 0x58], rax
23101a mov      rax, qword ptr [rsp + 0x50]
23101f xor      qword ptr [rsp + 0x1b0], rax
231027 mov      rax, qword ptr [rsp + 0x58]
23102c mov      rax, qword ptr [rsp + 0x4d8]
231034 mov      qword ptr [rsp + 0x38], rax
231039 mov      rax, qword ptr [rsp + 0x38]
23103e xor      rax, 0x2f
231042 mov      qword ptr [rsp + 0x38], rax
231047 mov      rcx, qword ptr [rsp + 0x38]
23104c call     0x140002040
231051 mov      qword ptr [rsp + 0x4d8], rax
231059 mov      rdx, qword ptr [rsp + 0x1b0]
231061 xor      rdx, rax
231064 mov      r8d, 0x1d0c19
23106a lea      rcx, [rsp + 0x190]
231072 call     0x1401f1520
231077 mov      ebx, 0xd37bd827
23107c mov      qword ptr [rsp + 0x60], rbx
231081 mov      rax, qword ptr [rsp + 0x60]
231086 mov      rcx, qword ptr [rsp + 0x60]
23108b mov      rax, qword ptr [rsp + 0x60]
231090 sub      rcx, rax
231093 mov      qword ptr [rsp + 0x68], rcx
231098 mov      rcx, qword ptr [rsp + 0x68]
23109d or       rcx, 0x2b5c68
2310a4 mov      rax, qword ptr [rsp + 0x68]
2310a9 and      eax, 0x2b5c68
2310ae add      rax, rcx
2310b1 jmp      0x1402319ec
2310b6 mov      rax, qword ptr [rsp + 0x4d8]
2310be mov      qword ptr [rsp + 0x38], rax
2310c3 movsxd   rcx, dword ptr [rsp + 0x1370]
2310cb mov      rax, qword ptr [rsp + 0x38]
2310d0 xor      rcx, rax
2310d3 mov      qword ptr [rsp + 0x38], rcx
2310d8 mov      rcx, qword ptr [rsp + 0x38]
2310dd call     0x140002040
2310e2 mov      qword ptr [rsp + 0x4d8], rax
2310ea mov      ebx, 0x830b7e2b
2310ef mov      qword ptr [rsp + 0x48], rbx
2310f4 mov      rcx, qword ptr [rsp + 0x48]
2310f9 mov      rax, qword ptr [rsp + 0x48]
2310fe sub      rcx, rax
231101 mov      qword ptr [rsp + 0x50], rcx
231106 mov      rcx, qword ptr [rsp + 0x50]
23110b or       rcx, qword ptr [rsp + 0x4d8]
231113 mov      rax, qword ptr [rsp + 0x50]
231118 and      rax, qword ptr [rsp + 0x4d8]
231120 sub      rcx, rax
231123 mov      qword ptr [rsp + 0x4d8], rcx
23112b mov      rax, qword ptr [rsp + 0x50]
231130 add      rax, qword ptr [rsp + 0x4d8]
231138 mov      qword ptr [rsp + 0x58], rax
23113d mov      rax, qword ptr [rsp + 0x50]
231142 mov      rcx, qword ptr [rsp + 0x1b0]
23114a and      rax, rcx
23114d add      rax, rax
231150 sub      rcx, rax
231153 mov      rax, qword ptr [rsp + 0x50]
231158 add      rax, rcx
23115b mov      qword ptr [rsp + 0x1b0], rax
231163 mov      rax, qword ptr [rsp + 0x58]
231168 mov      rcx, qword ptr [rsp + 0x4d8]
231170 xor      rcx, 0x29
231174 call     0x140002040
231179 mov      qword ptr [rsp + 0x4d8], rax
231181 mov      rdx, qword ptr [rsp + 0x1b0]
231189 xor      rdx, rax
23118c mov      r8d, 0x1956cf
231192 lea      rcx, [rsp + 0x190]
23119a call     0x1401f1520
23119f movzx    ecx, byte ptr [rsp + 0x4d8]
2311a7 mov      edx, ecx
2311a9 imul     edx, ecx
2311ac xor      dl, cl
2311ae test     dl, 1
2311b1 je       0x140231216
2311b3 mov      ebx, 0xe37b1867
2311b8 mov      qword ptr [rsp + 0x20], rbx
2311bd mov      qword ptr [rsp + 0x28], 0x1ecdf145
2311c6 mov      rcx, qword ptr [rsp + 0x28]
2311cb mov      rax, qword ptr [rsp + 0x20]
2311d0 xor      rcx, rax
2311d3 mov      qword ptr [rsp + 0x30], rcx
2311d8 mov      qword ptr [rsp + 0x78], r12
2311dd nop      dword ptr [rax]
2311e0 mov      rax, qword ptr [rsp + 0x78]
2311e5 cmp      rax, 3
2311e9 jae      0x140231211
2311eb mov      rcx, qword ptr [rsp + 0x30]
2311f0 mov      rax, qword ptr [rsp + 0x78]
2311f5 add      rcx, rax
2311f8 call     0x140002040
2311fd mov      qword ptr [rsp + 0x30], rax
231202 mov      rax, qword ptr [rsp + 0x78]
231207 inc      rax
23120a mov      qword ptr [rsp + 0x78], rax
23120f jmp      0x1402311e0
231211 mov      rax, qword ptr [rsp + 0x30]
231216 mov      qword ptr [rsp + 0x60], 0x1538551f
23121f mov      rax, qword ptr [rsp + 0x60]
231224 mov      rcx, qword ptr [rsp + 0x60]
231229 mov      rax, qword ptr [rsp + 0x60]
23122e sub      rcx, rax
231231 mov      qword ptr [rsp + 0x68], rcx
231236 mov      rcx, qword ptr [rsp + 0x68]
23123b or       rcx, 0x15148
231242 mov      rax, qword ptr [rsp + 0x68]
231247 and      eax, 0x15148
23124c jmp      0x14022b87d
231251 movsxd   rcx, dword ptr [rsp + 0x1370]
231259 xor      rcx, qword ptr [rsp + 0x4d8]
231261 call     0x140002040
231266 mov      qword ptr [rsp + 0x4d8], rax
23126e mov      qword ptr [rsp + 0x48], 0x6ad9a463
231277 mov      rdx, qword ptr [rsp + 0x48]
23127c mov      rax, qword ptr [rsp + 0x48]
231281 xor      rdx, rax
231284 mov      rcx, qword ptr [rsp + 0x48]
231289 mov      rax, qword ptr [rsp + 0x48]
23128e sub      rcx, rax
231291 or       rcx, rdx
231294 mov      qword ptr [rsp + 0x50], rcx
231299 mov      rcx, qword ptr [rsp + 0x50]
23129e and      rcx, qword ptr [rsp + 0x4d8]
2312a6 not      rcx
2312a9 mov      rax, qword ptr [rsp + 0x50]
2312ae or       rax, qword ptr [rsp + 0x4d8]
2312b6 and      rax, rcx
2312b9 mov      qword ptr [rsp + 0x4d8], rax
2312c1 mov      rcx, qword ptr [rsp + 0x50]
2312c6 and      rcx, qword ptr [rsp + 0x4d8]
2312ce add      rcx, rcx
2312d1 mov      rax, qword ptr [rsp + 0x50]
2312d6 xor      rax, qword ptr [rsp + 0x4d8]
2312de add      rax, rcx
2312e1 mov      qword ptr [rsp + 0x58], rax
2312e6 mov      rax, qword ptr [rsp + 0x50]
2312eb mov      rcx, qword ptr [rsp + 0x1b0]
2312f3 and      rax, rcx
2312f6 add      rax, rax
2312f9 sub      rcx, rax
2312fc mov      rax, qword ptr [rsp + 0x50]
231301 add      rax, rcx
231304 mov      qword ptr [rsp + 0x1b0], rax
23130c mov      rax, qword ptr [rsp + 0x50]
231311 add      qword ptr [rsp + 0x1378], rax
231319 mov      rax, qword ptr [rsp + 0x58]
23131e mov      rcx, qword ptr [rsp + 0x4d8]
231326 xor      rcx, 0x37
23132a call     0x140002040
23132f mov      qword ptr [rsp + 0x4d8], rax
231337 mov      rdx, qword ptr [rsp + 0x1b0]
23133f xor      rdx, rax
231342 mov      r8d, 0x21fdd1
231348 lea      rcx, [rsp + 0x190]
231350 call     0x1401f1520
231355 movzx    eax, byte ptr [rsp + 0x4d8]
23135d lea      ecx, [rax + 0xff]
231363 xor      cl, al
231365 test     cl, 1
231368 je       0x1402313ac
23136a mov      ebx, 0xc49aa887
23136f mov      qword ptr [rsp + 0x60], rbx
231374 mov      rax, qword ptr [rsp + 0x60]
231379 mov      rcx, qword ptr [rsp + 0x60]
23137e mov      rax, qword ptr [rsp + 0x60]
231383 sub      rcx, rax
231386 mov      qword ptr [rsp + 0x68], rcx
23138b mov      rcx, qword ptr [rsp + 0x68]
231390 and      ecx, 0x1a5672
231396 add      rcx, rcx
231399 mov      rax, qword ptr [rsp + 0x68]
23139e xor      rax, 0x1a5672
2313a4 add      rax, rcx
2313a7 jmp      0x1402319ec
2313ac mov      eax, 0xa724ea1b
2313b1 mov      qword ptr [rsp + 0x20], rax
2313b6 mov      eax, 0xce2f6451
2313bb mov      qword ptr [rsp + 0x28], rax
2313c0 mov      rcx, qword ptr [rsp + 0x28]
2313c5 mov      rax, qword ptr [rsp + 0x20]
2313ca xor      rcx, rax
2313cd mov      qword ptr [rsp + 0x30], rcx
2313d2 mov      qword ptr [rsp + 0x78], r12
2313d7 nop      word ptr [rax + rax]
2313e0 mov      rax, qword ptr [rsp + 0x78]
2313e5 cmp      rax, 3
2313e9 jae      0x140231411
2313eb mov      rcx, qword ptr [rsp + 0x30]
2313f0 mov      rax, qword ptr [rsp + 0x78]
2313f5 add      rcx, rax
2313f8 call     0x140002040
2313fd mov      qword ptr [rsp + 0x30], rax
231402 mov      rax, qword ptr [rsp + 0x78]
231407 inc      rax
23140a mov      qword ptr [rsp + 0x78], rax
23140f jmp      0x1402313e0
231411 mov      rax, qword ptr [rsp + 0x30]
231416 mov      ebx, 0xc49aa887
23141b mov      qword ptr [rsp + 0x60], rbx
231420 mov      rax, qword ptr [rsp + 0x60]
231425 mov      rcx, qword ptr [rsp + 0x60]
23142a mov      rax, qword ptr [rsp + 0x60]
23142f sub      rcx, rax
231432 mov      qword ptr [rsp + 0x68], rcx
231437 mov      rcx, qword ptr [rsp + 0x68]
23143c and      ecx, 0x1a5672
231442 add      rcx, rcx
231445 mov      rax, qword ptr [rsp + 0x68]
23144a xor      rax, 0x1a5672
231450 add      rax, rcx
231453 jmp      0x1402319ec
231458 mov      rdx, qword ptr [rsp + 0x1b0]
231460 add      rdx, qword ptr [rsp + 0x4d8]
231468 mov      r8d, 0x2e84e3
23146e lea      rcx, [rsp + 0x190]
231476 call     0x1401f1730
23147b mov      rcx, qword ptr [rsp + 0x1b0]
231483 xor      rcx, qword ptr [rsp + 0x4d8]
23148b call     0x140002040
231490 mov      qword ptr [rsp + 0x40], rax
231495 mov      rax, qword ptr [rsp + 0x40]
23149a mov      rcx, qword ptr [rsp + 0x1b0]
2314a2 xor      rcx, qword ptr [rsp + 0x4d8]
2314aa call     0x140002040
2314af mov      qword ptr [rsp + 0x40], rax
2314b4 mov      rax, qword ptr [rsp + 0x40]
2314b9 mov      ebx, 0xdce41017
2314be mov      qword ptr [rsp + 0x20], rbx
2314c3 mov      ebx, 0xc9b968b5
2314c8 mov      qword ptr [rsp + 0x28], rbx
2314cd mov      rcx, qword ptr [rsp + 0x28]
2314d2 mov      rax, qword ptr [rsp + 0x20]
2314d7 xor      rcx, rax
2314da mov      qword ptr [rsp + 0x30], rcx
2314df mov      qword ptr [rsp + 0x78], r12
2314e4 mov      rax, qword ptr [rsp + 0x78]
2314e9 cmp      rax, 3
2314ed jae      0x140231515
2314ef mov      rcx, qword ptr [rsp + 0x30]
2314f4 mov      rax, qword ptr [rsp + 0x78]
2314f9 add      rcx, rax
2314fc call     0x140002040
231501 mov      qword ptr [rsp + 0x30], rax
231506 mov      rax, qword ptr [rsp + 0x78]
23150b inc      rax
23150e mov      qword ptr [rsp + 0x78], rax
231513 jmp      0x1402314e4
231515 mov      rax, qword ptr [rsp + 0x30]
23151a mov      rdx, r15
23151d jmp      0x140232664
231522 movsxd   rcx, dword ptr [rsp + 0x1370]
23152a xor      rcx, qword ptr [rsp + 0x4d8]
231532 call     0x140002040
231537 mov      qword ptr [rsp + 0x4d8], rax
23153f mov      qword ptr [rsp + 0x38], rax
231544 movsxd   rcx, dword ptr [rsp + 0x1370]
23154c mov      rax, qword ptr [rsp + 0x38]
231551 xor      rcx, rax
231554 mov      qword ptr [rsp + 0x38], rcx
231559 mov      rcx, qword ptr [rsp + 0x38]
23155e call     0x140002040
231563 mov      qword ptr [rsp + 0x4d8], rax
23156b mov      eax, 0xfab6f2fd
231570 mov      qword ptr [rsp + 0x48], rax
231575 mov      rcx, qword ptr [rsp + 0x48]
23157a mov      rax, qword ptr [rsp + 0x48]
23157f xor      rcx, rax
231582 mov      qword ptr [rsp + 0x50], rcx
231587 mov      rcx, qword ptr [rsp + 0x50]
23158c or       rcx, qword ptr [rsp + 0x4d8]
231594 mov      rax, qword ptr [rsp + 0x50]
231599 and      rax, qword ptr [rsp + 0x4d8]
2315a1 sub      rcx, rax
2315a4 mov      qword ptr [rsp + 0x4d8], rcx
2315ac mov      rcx, qword ptr [rsp + 0x50]
2315b1 and      rcx, qword ptr [rsp + 0x4d8]
2315b9 add      rcx, rcx
2315bc mov      rax, qword ptr [rsp + 0x50]
2315c1 xor      rax, qword ptr [rsp + 0x4d8]
2315c9 add      rax, rcx
2315cc mov      qword ptr [rsp + 0x58], rax
2315d1 mov      rcx, qword ptr [rsp + 0x50]
2315d6 or       rcx, qword ptr [rsp + 0x1b0]
2315de mov      rax, qword ptr [rsp + 0x50]
2315e3 and      rax, qword ptr [rsp + 0x1b0]
2315eb sub      rcx, rax
2315ee mov      qword ptr [rsp + 0x1b0], rcx
2315f6 mov      rcx, qword ptr [rsp + 0x50]
2315fb and      rcx, qword ptr [rsp + 0x1378]
231603 add      rcx, rcx
231606 mov      rax, qword ptr [rsp + 0x50]
23160b xor      rax, qword ptr [rsp + 0x1378]
231613 add      rax, rcx
231616 mov      qword ptr [rsp + 0x1378], rax
23161e mov      rax, qword ptr [rsp + 0x58]
231623 mov      rax, qword ptr [rsp + 0x4d8]
23162b mov      qword ptr [rsp + 0x38], rax
231630 mov      rax, qword ptr [rsp + 0x38]
231635 xor      rax, 0x24
231639 mov      qword ptr [rsp + 0x38], rax
23163e mov      rcx, qword ptr [rsp + 0x38]
231643 call     0x140002040
231648 mov      qword ptr [rsp + 0x4d8], rax
231650 mov      rdx, qword ptr [rsp + 0x1b0]
231658 xor      rdx, rax
23165b mov      r8d, 0x163fbc
231661 lea      rcx, [rsp + 0x190]
231669 call     0x1401f1520
23166e mov      ebx, 0xc5acc92d
231673 mov      qword ptr [rsp + 0x20], rbx
231678 mov      qword ptr [rsp + 0x28], 0x600e6b4b
231681 mov      rcx, qword ptr [rsp + 0x28]
231686 mov      rax, qword ptr [rsp + 0x20]
23168b xor      rcx, rax
23168e mov      qword ptr [rsp + 0x30], rcx
231693 mov      rcx, qword ptr [rsp + 0x30]
231698 mov      rax, qword ptr [rsp + 0x30]
23169d imul     rcx, rax
2316a1 and      ecx, 1
2316a4 mov      rax, qword ptr [rsp + 0x30]
2316a9 and      eax, 1
2316ac cmp      rcx, rax
2316af je       0x1402316c1
2316b1 mov      rax, qword ptr [rsp + 0x30]
2316b6 xor      rax, 0xdead
2316bc mov      qword ptr [rsp + 0x30], rax
2316c1 mov      rax, qword ptr [rsp + 0x30]
2316c6 mov      qword ptr [rsp + 0x60], 0x4e3e406b
2316cf mov      rax, qword ptr [rsp + 0x60]
2316d4 mov      rcx, qword ptr [rsp + 0x60]
2316d9 mov      rax, qword ptr [rsp + 0x60]
2316de sub      rcx, rax
2316e1 mov      qword ptr [rsp + 0x68], rcx
2316e6 mov      rax, qword ptr [rsp + 0x68]
2316eb add      rax, 0x2478fb
2316f1 jmp      0x14022b880
2316f6 cmp      eax, 0x338040
2316fb je       0x140231ba7
231701 cmp      eax, 0x35917d
231706 je       0x140231a09
23170c cmp      eax, 0x359547
231711 je       0x140231888
231717 cmp      eax, 0x35a70b
23171c jne      0x140232642
231722 mov      qword ptr [rsp + 0x20], 0x79b225ab
23172b mov      eax, 0xd578e22b
231730 mov      qword ptr [rsp + 0x28], rax
231735 mov      rcx, qword ptr [rsp + 0x28]
23173a mov      rax, qword ptr [rsp + 0x20]
23173f xor      rcx, rax
231742 mov      qword ptr [rsp + 0x30], rcx
231747 mov      rax, qword ptr [rsp + 0x30]
23174c mov      rcx, qword ptr [rsp + 0x30]
231751 mov      rax, qword ptr [rsp + 0x30]
231756 and      rcx, rax
231759 mov      qword ptr [rsp + 0x30], rcx
23175e mov      rax, qword ptr [rsp + 0x30]
231763 mov      qword ptr [rsp + 0x48], 0x5b75091f
23176c mov      rdx, qword ptr [rsp + 0x48]
231771 mov      rax, qword ptr [rsp + 0x48]
231776 xor      rdx, rax
231779 mov      rcx, qword ptr [rsp + 0x48]
23177e mov      rax, qword ptr [rsp + 0x48]
231783 sub      rcx, rax
231786 or       rcx, rdx
231789 mov      qword ptr [rsp + 0x50], rcx
23178e mov      rax, qword ptr [rsp + 0x50]
231793 mov      rcx, qword ptr [rsp + 0x4d8]
23179b and      rax, rcx
23179e add      rax, rax
2317a1 sub      rcx, rax
2317a4 mov      rax, qword ptr [rsp + 0x50]
2317a9 add      rax, rcx
2317ac mov      qword ptr [rsp + 0x4d8], rax
2317b4 mov      rax, qword ptr [rsp + 0x50]
2317b9 add      rax, qword ptr [rsp + 0x4d8]
2317c1 mov      qword ptr [rsp + 0x58], rax
2317c6 mov      rax, qword ptr [rsp + 0x50]
2317cb mov      rcx, qword ptr [rsp + 0x1b0]
2317d3 and      rax, rcx
2317d6 add      rax, rax
2317d9 sub      rcx, rax
2317dc mov      rax, qword ptr [rsp + 0x50]
2317e1 add      rax, rcx
2317e4 mov      qword ptr [rsp + 0x1b0], rax
2317ec mov      rax, qword ptr [rsp + 0x50]
2317f1 add      qword ptr [rsp + 0x1378], rax
2317f9 mov      rax, qword ptr [rsp + 0x58]
2317fe mov      rax, qword ptr [rsp + 0x4d8]
231806 xor      rax, 0x17
23180a mov      qword ptr [rsp + 0x38], rax
23180f mov      rax, qword ptr [rsp + 0x38]
231814 mov      rcx, qword ptr [rsp + 0x38]
231819 mov      rax, qword ptr [rsp + 0x38]
23181e and      rcx, rax
231821 call     0x140002040
231826 mov      qword ptr [rsp + 0x4d8], rax
23182e mov      rdx, qword ptr [rsp + 0x1b0]
231836 xor      rdx, rax
231839 mov      r8d, 0xe36f1
23183f lea      rcx, [rsp + 0x190]
231847 call     0x1401f1520
23184c mov      ebx, 0xca41770b
231851 mov      qword ptr [rsp + 0x60], rbx
231856 mov      rax, qword ptr [rsp + 0x60]
23185b mov      rcx, qword ptr [rsp + 0x60]
231860 mov      rax, qword ptr [rsp + 0x60]
231865 sub      rcx, rax
231868 mov      qword ptr [rsp + 0x68], rcx
23186d mov      rcx, qword ptr [rsp + 0x68]
231872 or       rcx, 0x2022f6
231879 mov      rax, qword ptr [rsp + 0x68]
23187e and      eax, 0x2022f6
231883 jmp      0x14022e08c
231888 mov      eax, 0xe1809b2d
23188d mov      qword ptr [rsp + 0x20], rax
231892 mov      qword ptr [rsp + 0x28], 0x21856161
23189b mov      rcx, qword ptr [rsp + 0x28]
2318a0 mov      rax, qword ptr [rsp + 0x20]
2318a5 xor      rcx, rax
2318a8 mov      qword ptr [rsp + 0x30], rcx
2318ad mov      rax, qword ptr [rsp + 0x30]
2318b2 mov      rax, qword ptr [rsp + 0x30]
2318b7 mov      eax, 0xe46b3dc7
2318bc mov      qword ptr [rsp + 0x48], rax
2318c1 mov      rax, qword ptr [rsp + 0x48]
2318c6 mov      qword ptr [rsp + 0x50], r12
2318cb mov      rax, qword ptr [rsp + 0x50]
2318d0 mov      rcx, qword ptr [rsp + 0x4d8]
2318d8 and      rax, rcx
2318db add      rax, rax
2318de sub      rcx, rax
2318e1 mov      rax, qword ptr [rsp + 0x50]
2318e6 add      rax, rcx
2318e9 mov      qword ptr [rsp + 0x4d8], rax
2318f1 mov      rax, qword ptr [rsp + 0x50]
2318f6 add      rax, qword ptr [rsp + 0x4d8]
2318fe mov      qword ptr [rsp + 0x58], rax
231903 mov      rcx, qword ptr [rsp + 0x50]
231908 and      rcx, qword ptr [rsp + 0x1b0]
231910 not      rcx
231913 mov      rax, qword ptr [rsp + 0x50]
231918 or       rax, qword ptr [rsp + 0x1b0]
231920 and      rax, rcx
231923 mov      qword ptr [rsp + 0x1b0], rax
23192b mov      rax, qword ptr [rsp + 0x58]
231930 mov      rcx, qword ptr [rsp + 0x4d8]
231938 xor      rcx, 0xe
23193c call     0x140002040
231941 mov      qword ptr [rsp + 0x4d8], rax
231949 mov      rdx, qword ptr [rsp + 0x1b0]
231951 xor      rdx, rax
231954 mov      r8d, 0x8a702
23195a lea      rcx, [rsp + 0x190]
231962 call     0x1401f1520
231967 mov      rcx, qword ptr [rsp + 0x4d8]
23196f mov      rax, rcx
231972 and      rax, 0xfffffffffffffffe
231976 sub      rcx, rax
231979 cmp      rcx, 1
23197d jbe      0x1402319c0
23197f mov      qword ptr [rsp + 0x20], 0x2238a631
231988 mov      eax, 0xa1a1168d
23198d mov      qword ptr [rsp + 0x28], rax
231992 mov      rcx, qword ptr [rsp + 0x28]
231997 mov      rax, qword ptr [rsp + 0x20]
23199c xor      rcx, rax
23199f mov      qword ptr [rsp + 0x30], rcx
2319a4 mov      rax, qword ptr [rsp + 0x30]
2319a9 mov      rcx, qword ptr [rsp + 0x30]
2319ae mov      rax, qword ptr [rsp + 0x30]
2319b3 and      rcx, rax
2319b6 mov      qword ptr [rsp + 0x30], rcx
2319bb mov      rax, qword ptr [rsp + 0x30]
2319c0 mov      ebx, 0xba500dfd
2319c5 mov      qword ptr [rsp + 0x60], rbx
2319ca mov      rax, qword ptr [rsp + 0x60]
2319cf mov      rcx, qword ptr [rsp + 0x60]
2319d4 mov      rax, qword ptr [rsp + 0x60]
2319d9 sub      rcx, rax
2319dc mov      qword ptr [rsp + 0x68], rcx
2319e1 mov      rax, qword ptr [rsp + 0x68]
2319e6 add      rax, 0x25af0e
2319ec mov      qword ptr [rsp + 0x70], rax
2319f1 mov      rax, qword ptr [rsp + 0x70]
2319f6 movsxd   rcx, eax
2319f9 mov      rax, qword ptr [rsp + 0x68]
2319fe movsxd   rdx, eax
231a01 xor      rdx, rcx
231a04 jmp      0x140232ce0
231a09 movsxd   rcx, dword ptr [rsp + 0x1370]
231a11 xor      rcx, qword ptr [rsp + 0x4d8]
231a19 call     0x140002040
231a1e mov      qword ptr [rsp + 0x4d8], rax
231a26 mov      eax, 0x93104da9
231a2b mov      qword ptr [rsp + 0x20], rax
231a30 mov      qword ptr [rsp + 0x28], 0x5e749437
231a39 mov      rcx, qword ptr [rsp + 0x28]
231a3e mov      rax, qword ptr [rsp + 0x20]
231a43 xor      rcx, rax
231a46 mov      qword ptr [rsp + 0x30], rcx
231a4b mov      rdx, qword ptr [rsp + 0x28]
231a50 mov      rax, qword ptr [rsp + 0x20]
231a55 and      rdx, rax
231a58 add      rdx, rdx
231a5b mov      rcx, qword ptr [rsp + 0x28]
231a60 mov      rax, qword ptr [rsp + 0x20]
231a65 xor      rcx, rax
231a68 add      rcx, rdx
231a6b mov      qword ptr [rsp + 0x30], rcx
231a70 mov      rax, qword ptr [rsp + 0x30]
231a75 mov      qword ptr [rsp + 0x48], 0x52ff1d03
231a7e mov      rdx, qword ptr [rsp + 0x48]
231a83 mov      rax, qword ptr [rsp + 0x48]
231a88 xor      rdx, rax
231a8b mov      rcx, qword ptr [rsp + 0x48]
231a90 mov      rax, qword ptr [rsp + 0x48]
231a95 sub      rcx, rax
231a98 or       rcx, rdx
231a9b mov      qword ptr [rsp + 0x50], rcx
231aa0 mov      rax, qword ptr [rsp + 0x50]
231aa5 xor      qword ptr [rsp + 0x4d8], rax
231aad mov      rcx, qword ptr [rsp + 0x50]
231ab2 and      rcx, qword ptr [rsp + 0x4d8]
231aba add      rcx, rcx
231abd mov      rax, qword ptr [rsp + 0x50]
231ac2 xor      rax, qword ptr [rsp + 0x4d8]
231aca add      rax, rcx
231acd mov      qword ptr [rsp + 0x58], rax
231ad2 mov      rax, qword ptr [rsp + 0x50]
231ad7 mov      rcx, qword ptr [rsp + 0x1b0]
231adf and      rax, rcx
231ae2 add      rax, rax
231ae5 sub      rcx, rax
231ae8 mov      rax, qword ptr [rsp + 0x50]
231aed add      rax, rcx
231af0 mov      qword ptr [rsp + 0x1b0], rax
231af8 mov      rax, qword ptr [rsp + 0x58]
231afd mov      rcx, qword ptr [rsp + 0x4d8]
231b05 xor      rcx, 0xc
231b09 call     0x140002040
231b0e mov      qword ptr [rsp + 0x4d8], rax
231b16 mov      rdx, qword ptr [rsp + 0x1b0]
231b1e xor      rdx, rax
231b21 mov      r8d, 0x76a94
231b27 lea      rcx, [rsp + 0x190]
231b2f call     0x1401f1520
231b34 mov      ebx, 0xb57fa9e7
231b39 mov      qword ptr [rsp + 0x20], rbx
231b3e mov      ebx, 0xeadf8f93
231b43 mov      qword ptr [rsp + 0x28], rbx
231b48 mov      rcx, qword ptr [rsp + 0x28]
231b4d mov      rax, qword ptr [rsp + 0x20]
231b52 xor      rcx, rax
231b55 mov      qword ptr [rsp + 0x30], rcx
231b5a mov      rax, qword ptr [rsp + 0x30]
231b5f mov      rcx, qword ptr [rsp + 0x30]
231b64 mov      rax, qword ptr [rsp + 0x30]
231b69 and      rcx, rax
231b6c mov      qword ptr [rsp + 0x30], rcx
231b71 mov      rax, qword ptr [rsp + 0x30]
231b76 mov      ebx, 0x8f543a17
231b7b mov      qword ptr [rsp + 0x60], rbx
231b80 mov      rax, qword ptr [rsp + 0x60]
231b85 mov      rcx, qword ptr [rsp + 0x60]
231b8a mov      rax, qword ptr [rsp + 0x60]
231b8f sub      rcx, rax
231b92 mov      qword ptr [rsp + 0x68], rcx
231b97 mov      rax, qword ptr [rsp + 0x68]
231b9c add      rax, 0x41a84
231ba2 jmp      0x140232cbe
231ba7 movzx    r8d, byte ptr [rsp + 0x63d]
231bb0 lea      rcx, [rsp + 0x190]
231bb8 cmp      r8d, 0x3e
231bbc jae      0x140231c0b
231bbe inc      qword ptr [rsp + 0x1330]
231bc6 mov      ebx, 3
231bcb cmp      dword ptr [rsp + 0xa4], 0
231bd3 mov      eax, 0x80000003
231bd8 cmovne   ebx, eax
231bdb mov      edx, 1
231be0 call     0x1401f1f50
231be5 mov      r8d, eax
231be8 mov      edx, 1
231bed lea      rcx, [rsp + 0x190]
231bf5 call     0x1402297b0
231bfa mov      r8, rdi
231bfd mov      edx, ebx
231bff lea      rcx, [rsp + 0x190]
231c07 call     rax
231c09 jmp      0x140231c3d
231c0b inc      dword ptr [rsp + 0x1338]
231c12 xor      edx, edx
231c14 call     0x1401ee3e0
231c19 mov      edx, 1
231c1e lea      rcx, [rsp + 0x190]
231c26 call     0x1401ee510
231c2b mov      edx, 0xfe1ab
231c30 lea      rcx, [rsp + 0x190]
231c38 call     0x1401edff0
231c3d lea      rcx, [rsp + 0x190]
231c45 call     0x1401ee450
231c4a test     eax, eax
231c4c jne      0x140232daa
231c52 lea      rcx, [rsp + 0x190]
231c5a call     0x1401edf30
231c5f cmp      eax, 0x338040
231c64 jne      0x140232daa
231c6a mov      edx, 0x1ad951
231c6f jmp      0x140232ce0
231c74 mov      rcx, qword ptr [rsp + 0x1b0]
231c7c xor      rcx, qword ptr [rsp + 0x4d8]
231c84 call     0x140002040
231c89 mov      qword ptr [rsp + 0x40], rax
231c8e mov      rax, qword ptr [rsp + 0x40]
231c93 mov      qword ptr [rsp + 0x48], 0x504117e3
231c9c mov      rax, qword ptr [rsp + 0x48]
231ca1 mov      qword ptr [rsp + 0x50], r12
231ca6 mov      rax, qword ptr [rsp + 0x50]
231cab xor      qword ptr [rsp + 0x4d8], rax
231cb3 mov      rax, qword ptr [rsp + 0x50]
231cb8 add      rax, qword ptr [rsp + 0x4d8]
231cc0 mov      qword ptr [rsp + 0x58], rax
231cc5 mov      rax, qword ptr [rsp + 0x50]
231cca xor      qword ptr [rsp + 0x1b0], rax
231cd2 mov      rcx, qword ptr [rsp + 0x50]
231cd7 or       rcx, qword ptr [rsp + 0x1378]
231cdf mov      rax, qword ptr [rsp + 0x50]
231ce4 and      rax, qword ptr [rsp + 0x1378]
231cec add      rax, rcx
231cef mov      qword ptr [rsp + 0x1378], rax
231cf7 mov      rax, qword ptr [rsp + 0x58]
231cfc mov      rcx, qword ptr [rsp + 0x4d8]
231d04 xor      rcx, 0x14
231d08 call     0x140002040
231d0d mov      qword ptr [rsp + 0x4d8], rax
231d15 mov      rdx, qword ptr [rsp + 0x1b0]
231d1d xor      rdx, rax
231d20 mov      r8d, 0xc5c4c
231d26 lea      rcx, [rsp + 0x190]
231d2e call     0x1401f1520
231d33 mov      rcx, qword ptr [rsp + 0x4d8]
231d3b mov      rax, rcx
231d3e and      rax, 0xfffffffffffffffe
231d42 sub      rcx, rax
231d45 cmp      rcx, 2
231d49 jb       0x140231d98
231d4b mov      qword ptr [rsp + 0x20], 0x3ffd3cd5
231d54 mov      qword ptr [rsp + 0x28], 0x758fb5c9
231d5d mov      rcx, qword ptr [rsp + 0x28]
231d62 mov      rax, qword ptr [rsp + 0x20]
231d67 xor      rcx, rax
231d6a mov      qword ptr [rsp + 0x30], rcx
231d6f mov      rax, qword ptr [rsp + 0x30]
231d74 dec      rax
231d77 mov      rcx, qword ptr [rsp + 0x30]
231d7c xor      cl, al
231d7e test     cl, 1
231d81 jne      0x140231d93
231d83 mov      rax, qword ptr [rsp + 0x30]
231d88 xor      rax, 0xdead
231d8e mov      qword ptr [rsp + 0x30], rax
231d93 mov      rax, qword ptr [rsp + 0x30]
231d98 mov      qword ptr [rsp + 0x60], 0x412195ab
231da1 mov      rax, qword ptr [rsp + 0x60]
231da6 mov      rcx, qword ptr [rsp + 0x60]
231dab mov      rax, qword ptr [rsp + 0x60]
231db0 sub      rcx, rax
231db3 mov      qword ptr [rsp + 0x68], rcx
231db8 mov      rax, qword ptr [rsp + 0x68]
231dbd add      rax, 0x3810d7
231dc3 jmp      0x1402319ec
231dc8 cmp      eax, 0x3c2125
231dcd jg       0x14023261a
231dd3 je       0x1402324b4
231dd9 cmp      eax, 0x37507f
231dde je       0x140232360
231de4 cmp      eax, 0x3810d7
231de9 je       0x14023215c
231def cmp      eax, 0x3abaef
231df4 je       0x140231f7d
231dfa cmp      eax, 0x3b6230
231dff jne      0x140232642
231e05 mov      r8, qword ptr [rsp + 0x4d8]
231e0d mov      rcx, r8
231e10 and      rcx, 0xfffffffffffffffe
231e14 mov      rax, r8
231e17 sub      rax, rcx
231e1a cmp      rax, 1
231e1e jbe      0x140231e7c
231e20 mov      qword ptr [rsp + 0x20], 0x1febad17
231e29 mov      eax, 0xd8575697
231e2e mov      qword ptr [rsp + 0x28], rax
231e33 mov      rcx, qword ptr [rsp + 0x28]
231e38 mov      rax, qword ptr [rsp + 0x20]
231e3d xor      rcx, rax
231e40 mov      qword ptr [rsp + 0x30], rcx
231e45 mov      rax, qword ptr [rsp + 0x30]
231e4a dec      rax
231e4d mov      rcx, qword ptr [rsp + 0x30]
231e52 movzx    edx, al
231e55 movzx    eax, cl
231e58 imul     eax, edx
231e5b test     al, 1
231e5d je       0x140231e6f
231e5f mov      rax, qword ptr [rsp + 0x30]
231e64 xor      rax, 0xdead
231e6a mov      qword ptr [rsp + 0x30], rax
231e6f mov      rax, qword ptr [rsp + 0x30]
231e74 mov      r8, qword ptr [rsp + 0x4d8]
231e7c movzx    ecx, byte ptr [rsp + 0x4d8]
231e84 mov      edx, ecx
231e86 imul     edx, ecx
231e89 xor      dl, cl
231e8b test     dl, 1
231e8e je       0x140231efe
231e90 mov      qword ptr [rsp + 0x20], 0x623a4969
231e99 mov      eax, 0xa284afb3
231e9e mov      qword ptr [rsp + 0x28], rax
231ea3 mov      rcx, qword ptr [rsp + 0x28]
231ea8 mov      rax, qword ptr [rsp + 0x20]
231ead xor      rcx, rax
231eb0 mov      qword ptr [rsp + 0x30], rcx
231eb5 mov      qword ptr [rsp + 0x78], r12
231eba nop      word ptr [rax + rax]
231ec0 mov      rax, qword ptr [rsp + 0x78]
231ec5 cmp      rax, 2
231ec9 jae      0x140231ef1
231ecb mov      rcx, qword ptr [rsp + 0x30]
231ed0 mov      rax, qword ptr [rsp + 0x78]
231ed5 add      rcx, rax
231ed8 call     0x140002040
231edd mov      qword ptr [rsp + 0x30], rax
231ee2 mov      rax, qword ptr [rsp + 0x78]
231ee7 inc      rax
231eea mov      qword ptr [rsp + 0x78], rax
231eef jmp      0x140231ec0
231ef1 mov      rax, qword ptr [rsp + 0x30]
231ef6 mov      r8, qword ptr [rsp + 0x4d8]
231efe xor      r8, r13
231f01 mov      rcx, r8
231f04 call     0x140002040
231f09 mov      qword ptr [rsp + 0x4d8], rax
231f11 lea      ecx, [rax + 0xff]
231f17 xor      cl, al
231f19 mov      edx, 0x2367b2
231f1e test     cl, 1
231f21 jne      0x140232ce0
231f27 mov      ebx, 0xa7819c27
231f2c mov      qword ptr [rsp + 0x20], rbx
231f31 mov      qword ptr [rsp + 0x28], 0x7a582d4b
231f3a mov      rcx, qword ptr [rsp + 0x28]
231f3f mov      rax, qword ptr [rsp + 0x20]
231f44 xor      rcx, rax
231f47 mov      qword ptr [rsp + 0x30], rcx
231f4c mov      rcx, qword ptr [rsp + 0x30]
231f51 mov      rax, qword ptr [rsp + 0x30]
231f56 xor      rcx, rax
231f59 mov      rax, qword ptr [rsp + 0x30]
231f5e add      rax, rcx
231f61 mov      qword ptr [rsp + 0x30], rax
231f66 mov      rax, qword ptr [rsp + 0x30]
231f6b lea      rcx, [rsp + 0x190]
231f73 call     0x1401f0db0
231f78 jmp      0x140232daa
231f7d lea      rcx, [rsp + 0x190]
231f85 call     0x1401ee070
231f8a movzx    ecx, byte ptr [rsp + 0x63d]
231f92 mov      eax, eax
231f94 xor      rcx, rax
231f97 xor      rcx, qword ptr [rsp + 0x1378]
231f9f call     0x140002040
231fa4 mov      qword ptr [rsp + 0x1378], rax
231fac mov      rcx, qword ptr [rsp + 0x1b8]
231fb4 xor      rcx, qword ptr [rsp + 0x1b0]
231fbc xor      rcx, rax
231fbf call     0x140002040
231fc4 mov      qword ptr [rsp + 0x1b0], rax
231fcc mov      edx, 9
231fd1 lea      rcx, [rsp + 0x190]
231fd9 call     0x1401eddd0
231fde mov      edx, eax
231fe0 lea      rcx, [rsp + 0x190]
231fe8 call     0x1401f0910
231fed mov      edx, 8
231ff2 lea      rcx, [rsp + 0x190]
231ffa call     0x1401eddd0
231fff mov      edx, eax
232001 lea      rcx, [rsp + 0x190]
232009 call     0x1401f0910
23200e lea      rcx, [rsp + 0x190]
232016 call     0x1401ee070
23201b cmp      eax, dword ptr [rsp + 0x368]
232022 jae      0x140232033
232024 mov      edx, eax
232026 lea      rcx, [rsp + 0x190]
23202e call     0x1401f0910
232033 mov      edx, 8
232038 lea      rcx, [rsp + 0x190]
232040 call     0x1401eddd0
232045 mov      r8, rax
232048 mov      edx, 9
23204d lea      rcx, [rsp + 0x190]
232055 call     0x1401edea0
23205a mov      rax, qword ptr [rsp + 0x4d8]
232062 mov      qword ptr [rsp + 0x38], rax
232067 movsxd   rcx, dword ptr [rsp + 0x1370]
23206f mov      rax, qword ptr [rsp + 0x38]
232074 xor      rcx, rax
232077 mov      qword ptr [rsp + 0x38], rcx
23207c mov      rcx, qword ptr [rsp + 0x38]
232081 call     0x140002040
232086 mov      qword ptr [rsp + 0x4d8], rax
23208e mov      ebx, 0xa7715767
232093 mov      qword ptr [rsp + 0x48], rbx
232098 mov      rcx, qword ptr [rsp + 0x48]
23209d mov      rax, qword ptr [rsp + 0x48]
2320a2 sub      rcx, rax
2320a5 mov      qword ptr [rsp + 0x50], rcx
2320aa mov      rcx, qword ptr [rsp + 0x50]
2320af or       rcx, qword ptr [rsp + 0x4d8]
2320b7 mov      rax, qword ptr [rsp + 0x50]
2320bc and      rax, qword ptr [rsp + 0x4d8]
2320c4 sub      rcx, rax
2320c7 mov      qword ptr [rsp + 0x4d8], rcx
2320cf mov      rcx, qword ptr [rsp + 0x50]
2320d4 and      rcx, qword ptr [rsp + 0x4d8]
2320dc add      rcx, rcx
2320df mov      rax, qword ptr [rsp + 0x50]
2320e4 xor      rax, qword ptr [rsp + 0x4d8]
2320ec add      rax, rcx
2320ef mov      qword ptr [rsp + 0x58], rax
2320f4 mov      rcx, qword ptr [rsp + 0x50]
2320f9 and      rcx, qword ptr [rsp + 0x1b0]
232101 not      rcx
232104 mov      rax, qword ptr [rsp + 0x50]
232109 or       rax, qword ptr [rsp + 0x1b0]
232111 and      rax, rcx
232114 mov      qword ptr [rsp + 0x1b0], rax
23211c mov      rax, qword ptr [rsp + 0x58]
232121 mov      rdx, qword ptr [rsp + 0x4d8]
232129 mov      rcx, qword ptr [rsp + 0x1b0]
232131 call     0x1400023e0
232136 test     eax, eax
232138 je       0x140232152
23213a movzx    eax, byte ptr [rsp + 0x4d8]
232142 and      al, 3
232144 cmp      al, 1
232146 jne      0x140232152
232148 mov      edx, 0x17ed28
23214d jmp      0x140232ce0
232152 mov      edx, 0x2c5cea
232157 jmp      0x140232ce0
23215c mov      ebx, 0x8512f11b
232161 mov      qword ptr [rsp + 0x20], rbx
232166 mov      qword ptr [rsp + 0x28], 0x29482823
23216f mov      rcx, qword ptr [rsp + 0x28]
232174 mov      rax, qword ptr [rsp + 0x20]
232179 xor      rcx, rax
23217c mov      qword ptr [rsp + 0x30], rcx
232181 mov      qword ptr [rsp + 0x78], r12
232186 nop      word ptr [rax + rax]
232190 mov      rax, qword ptr [rsp + 0x78]
232195 cmp      rax, 3
232199 jae      0x1402321c1
23219b mov      rcx, qword ptr [rsp + 0x30]
2321a0 mov      rax, qword ptr [rsp + 0x78]
2321a5 add      rcx, rax
2321a8 call     0x140002040
2321ad mov      qword ptr [rsp + 0x30], rax
2321b2 mov      rax, qword ptr [rsp + 0x78]
2321b7 inc      rax
2321ba mov      qword ptr [rsp + 0x78], rax
2321bf jmp      0x140232190
2321c1 mov      rax, qword ptr [rsp + 0x30]
2321c6 mov      rcx, qword ptr [rsp + 0x1b0]
2321ce xor      rcx, qword ptr [rsp + 0x4d8]
2321d6 call     0x140002040
2321db mov      qword ptr [rsp + 0x40], rax
2321e0 mov      rax, qword ptr [rsp + 0x40]
2321e5 mov      ebx, 0xf9dbfe85
2321ea mov      qword ptr [rsp + 0x48], rbx
2321ef mov      rdx, qword ptr [rsp + 0x48]
2321f4 mov      rax, qword ptr [rsp + 0x48]
2321f9 xor      rdx, rax
2321fc mov      rcx, qword ptr [rsp + 0x48]
232201 mov      rax, qword ptr [rsp + 0x48]
232206 sub      rcx, rax
232209 or       rcx, rdx
23220c mov      qword ptr [rsp + 0x50], rcx
232211 mov      rax, qword ptr [rsp + 0x50]
232216 mov      rcx, qword ptr [rsp + 0x4d8]
23221e and      rax, rcx
232221 add      rax, rax
232224 sub      rcx, rax
232227 mov      rax, qword ptr [rsp + 0x50]
23222c add      rax, rcx
23222f mov      qword ptr [rsp + 0x4d8], rax
232237 mov      rcx, qword ptr [rsp + 0x50]
23223c and      rcx, qword ptr [rsp + 0x4d8]
232244 add      rcx, rcx
232247 mov      rax, qword ptr [rsp + 0x50]
23224c xor      rax, qword ptr [rsp + 0x4d8]
232254 add      rax, rcx
232257 mov      qword ptr [rsp + 0x58], rax
23225c mov      rax, qword ptr [rsp + 0x50]
232261 mov      rcx, qword ptr [rsp + 0x1b0]
232269 and      rax, rcx
23226c add      rax, rax
23226f sub      rcx, rax
232272 mov      rax, qword ptr [rsp + 0x50]
232277 add      rax, rcx
23227a mov      qword ptr [rsp + 0x1b0], rax
232282 mov      rax, qword ptr [rsp + 0x50]
232287 add      qword ptr [rsp + 0x1378], rax
23228f mov      rax, qword ptr [rsp + 0x58]
232294 mov      rcx, qword ptr [rsp + 0x4d8]
23229c xor      rcx, 0x15
2322a0 call     0x140002040
2322a5 mov      qword ptr [rsp + 0x4d8], rax
2322ad mov      rdx, qword ptr [rsp + 0x1b0]
2322b5 xor      rdx, rax
2322b8 mov      r8d, 0xcfa83
2322be lea      rcx, [rsp + 0x190]
2322c6 call     0x1401f1520
2322cb movzx    eax, byte ptr [rsp + 0x4d8]
2322d3 lea      ecx, [rax + 0xff]
2322d9 xor      cl, al
2322db test     cl, 1
2322de jne      0x140232330
2322e0 mov      ebx, 0x9604544d
2322e5 mov      qword ptr [rsp + 0x20], rbx
2322ea mov      ebx, 0xbc9a49ef
2322ef mov      qword ptr [rsp + 0x28], rbx
2322f4 mov      rcx, qword ptr [rsp + 0x28]
2322f9 mov      rax, qword ptr [rsp + 0x20]
2322fe xor      rcx, rax
232301 mov      qword ptr [rsp + 0x30], rcx
232306 mov      rdx, qword ptr [rsp + 0x28]
23230b mov      rax, qword ptr [rsp + 0x20]
232310 and      rdx, rax
232313 add      rdx, rdx
232316 mov      rcx, qword ptr [rsp + 0x28]
23231b mov      rax, qword ptr [rsp + 0x20]
232320 xor      rcx, rax
232323 add      rcx, rdx
232326 mov      qword ptr [rsp + 0x30], rcx
23232b mov      rax, qword ptr [rsp + 0x30]
232330 mov      qword ptr [rsp + 0x60], 0x681a0a97
232339 mov      rax, qword ptr [rsp + 0x60]
23233e mov      rcx, qword ptr [rsp + 0x60]
232343 mov      rax, qword ptr [rsp + 0x60]
232348 sub      rcx, rax
23234b mov      qword ptr [rsp + 0x68], rcx
232350 mov      rax, qword ptr [rsp + 0x68]
232355 add      rax, 0x196621
23235b jmp      0x140232cbe
232360 mov      rcx, qword ptr [rsp + 0x1b0]
232368 xor      rcx, qword ptr [rsp + 0x4d8]
232370 call     0x140002040
232375 mov      qword ptr [rsp + 0x40], rax
23237a mov      rax, qword ptr [rsp + 0x40]
23237f mov      rcx, qword ptr [rsp + 0x1b0]
232387 xor      rcx, qword ptr [rsp + 0x4d8]
23238f call     0x140002040
232394 mov      qword ptr [rsp + 0x40], rax
232399 mov      rax, qword ptr [rsp + 0x40]
23239e mov      qword ptr [rsp + 0x48], 0x58420f01
2323a7 mov      rcx, qword ptr [rsp + 0x48]
2323ac mov      rax, qword ptr [rsp + 0x48]
2323b1 sub      rcx, rax
2323b4 mov      qword ptr [rsp + 0x50], rcx
2323b9 mov      rcx, qword ptr [rsp + 0x50]
2323be or       rcx, qword ptr [rsp + 0x4d8]
2323c6 mov      rax, qword ptr [rsp + 0x50]
2323cb and      rax, qword ptr [rsp + 0x4d8]
2323d3 sub      rcx, rax
2323d6 mov      qword ptr [rsp + 0x4d8], rcx
2323de mov      rax, qword ptr [rsp + 0x50]
2323e3 add      rax, qword ptr [rsp + 0x4d8]
2323eb mov      qword ptr [rsp + 0x58], rax
2323f0 mov      rcx, qword ptr [rsp + 0x50]
2323f5 and      rcx, qword ptr [rsp + 0x1b0]
2323fd not      rcx
232400 mov      rax, qword ptr [rsp + 0x50]
232405 or       rax, qword ptr [rsp + 0x1b0]
23240d and      rax, rcx
232410 mov      qword ptr [rsp + 0x1b0], rax
232418 mov      rcx, qword ptr [rsp + 0x50]
23241d or       rcx, qword ptr [rsp + 0x1378]
232425 mov      rax, qword ptr [rsp + 0x50]
23242a and      rax, qword ptr [rsp + 0x1378]
232432 add      rax, rcx
232435 mov      qword ptr [rsp + 0x1378], rax
23243d mov      rax, qword ptr [rsp + 0x58]
232442 mov      rcx, qword ptr [rsp + 0x4d8]
23244a xor      rcx, 0x19
23244e call     0x140002040
232453 mov      qword ptr [rsp + 0x4d8], rax
23245b mov      rdx, qword ptr [rsp + 0x1b0]
232463 xor      rdx, rax
232466 mov      r8d, 0xf735f
23246c lea      rcx, [rsp + 0x190]
232474 call     0x1401f1520
232479 mov      qword ptr [rsp + 0x60], 0x65b9081f
232482 mov      rax, qword ptr [rsp + 0x60]
232487 mov      rcx, qword ptr [rsp + 0x60]
23248c mov      rax, qword ptr [rsp + 0x60]
232491 sub      rcx, rax
232494 mov      qword ptr [rsp + 0x68], rcx
232499 mov      rcx, qword ptr [rsp + 0x68]
23249e or       rcx, 0x1aeb1c
2324a5 mov      rax, qword ptr [rsp + 0x68]
2324aa and      eax, 0x1aeb1c
2324af jmp      0x140232cbb
2324b4 mov      rcx, qword ptr [rsp + 0x1b0]
2324bc xor      rcx, qword ptr [rsp + 0x4d8]
2324c4 call     0x140002040
2324c9 mov      qword ptr [rsp + 0x40], rax
2324ce mov      rax, qword ptr [rsp + 0x40]
2324d3 mov      qword ptr [rsp + 0x48], 0x90c4be1
2324dc mov      rcx, qword ptr [rsp + 0x48]
2324e1 mov      rax, qword ptr [rsp + 0x48]
2324e6 xor      rcx, rax
2324e9 mov      qword ptr [rsp + 0x50], rcx
2324ee mov      rcx, qword ptr [rsp + 0x50]
2324f3 or       rcx, qword ptr [rsp + 0x4d8]
2324fb mov      rax, qword ptr [rsp + 0x50]
232500 and      rax, qword ptr [rsp + 0x4d8]
232508 sub      rcx, rax
23250b mov      qword ptr [rsp + 0x4d8], rcx
232513 mov      rax, qword ptr [rsp + 0x50]
232518 add      rax, qword ptr [rsp + 0x4d8]
232520 mov      qword ptr [rsp + 0x58], rax
232525 mov      rcx, qword ptr [rsp + 0x50]
23252a and      rcx, qword ptr [rsp + 0x1b0]
232532 not      rcx
232535 mov      rax, qword ptr [rsp + 0x50]
23253a or       rax, qword ptr [rsp + 0x1b0]
232542 and      rax, rcx
232545 mov      qword ptr [rsp + 0x1b0], rax
23254d mov      rax, qword ptr [rsp + 0x58]
232552 mov      rax, qword ptr [rsp + 0x4d8]
23255a xor      rax, 0x34
23255e mov      qword ptr [rsp + 0x38], rax
232563 mov      rcx, qword ptr [rsp + 0x38]
232568 call     0x140002040
23256d mov      qword ptr [rsp + 0x4d8], rax
232575 mov      rdx, qword ptr [rsp + 0x1b0]
23257d xor      rdx, rax
232580 mov      r8d, 0x20232c
232586 lea      rcx, [rsp + 0x190]
23258e call     0x1401f1520
232593 movzx    eax, byte ptr [rsp + 0x4d8]
23259b lea      ecx, [rax + 0xff]
2325a1 xor      cl, al
2325a3 test     cl, 1
2325a6 jne      0x1402325dc
2325a8 mov      eax, 0xc25f16ab
2325ad mov      qword ptr [rsp + 0x20], rax
2325b2 mov      qword ptr [rsp + 0x28], 0x661fd06d
2325bb mov      rcx, qword ptr [rsp + 0x28]
2325c0 mov      rax, qword ptr [rsp + 0x20]
2325c5 xor      rcx, rax
2325c8 mov      qword ptr [rsp + 0x30], rcx
2325cd mov      rax, qword ptr [rsp + 0x30]
2325d2 mov      qword ptr [rsp + 0x30], rax
2325d7 mov      rax, qword ptr [rsp + 0x30]
2325dc mov      qword ptr [rsp + 0x60], 0x784cee27
2325e5 mov      rax, qword ptr [rsp + 0x60]
2325ea mov      rcx, qword ptr [rsp + 0x60]
2325ef mov      rax, qword ptr [rsp + 0x60]
2325f4 sub      rcx, rax
2325f7 mov      qword ptr [rsp + 0x68], rcx
2325fc mov      rcx, qword ptr [rsp + 0x68]
232601 and      ecx, 0x25a4a6
232607 add      rcx, rcx
23260a mov      rax, qword ptr [rsp + 0x68]
23260f xor      rax, 0x25a4a6
232615 jmp      0x140232cbb
23261a cmp      eax, 0x3c2e7f
23261f je       0x140232be0
232625 cmp      eax, 0x3dd18f
23262a je       0x1402329f7
232630 cmp      eax, 0x3e529b
232635 je       0x140232828
23263b cmp      eax, 0x3ffaa2
232640 je       0x140232676
232642 movsxd   rcx, dword ptr [rsp + 0x1370]
23264a xor      rcx, qword ptr [rsp + 0x4d8]
232652 call     0x140002040
232657 mov      qword ptr [rsp + 0x4d8], rax
23265f mov      edx, 0x38a89
232664 lea      rcx, [rsp + 0x190]
23266c call     0x1401f0db0
232671 jmp      0x140232daa
232676 mov      rcx, qword ptr [rsp + 0x1b0]
23267e xor      rcx, qword ptr [rsp + 0x4d8]
232686 call     0x140002040
23268b mov      qword ptr [rsp + 0x40], rax
232690 mov      rax, qword ptr [rsp + 0x40]
232695 mov      qword ptr [rsp + 0x48], 0x13bf638f
23269e mov      rcx, qword ptr [rsp + 0x48]
2326a3 mov      rax, qword ptr [rsp + 0x48]
2326a8 xor      rcx, rax
2326ab mov      qword ptr [rsp + 0x50], rcx
2326b0 mov      rcx, qword ptr [rsp + 0x50]
2326b5 and      rcx, qword ptr [rsp + 0x4d8]
2326bd not      rcx
2326c0 mov      rax, qword ptr [rsp + 0x50]
2326c5 or       rax, qword ptr [rsp + 0x4d8]
2326cd and      rax, rcx
2326d0 mov      qword ptr [rsp + 0x4d8], rax
2326d8 mov      rcx, qword ptr [rsp + 0x50]
2326dd and      rcx, qword ptr [rsp + 0x4d8]
2326e5 add      rcx, rcx
2326e8 mov      rax, qword ptr [rsp + 0x50]
2326ed xor      rax, qword ptr [rsp + 0x4d8]
2326f5 add      rax, rcx
2326f8 mov      qword ptr [rsp + 0x58], rax
2326fd mov      rcx, qword ptr [rsp + 0x50]
232702 or       rcx, qword ptr [rsp + 0x1b0]
23270a mov      rax, qword ptr [rsp + 0x50]
23270f and      rax, qword ptr [rsp + 0x1b0]
232717 sub      rcx, rax
23271a mov      qword ptr [rsp + 0x1b0], rcx
232722 mov      rcx, qword ptr [rsp + 0x50]
232727 and      rcx, qword ptr [rsp + 0x1378]
23272f add      rcx, rcx
232732 mov      rax, qword ptr [rsp + 0x50]
232737 xor      rax, qword ptr [rsp + 0x1378]
23273f add      rax, rcx
232742 mov      qword ptr [rsp + 0x1378], rax
23274a mov      rax, qword ptr [rsp + 0x58]
23274f mov      rax, qword ptr [rsp + 0x4d8]
232757 mov      qword ptr [rsp + 0x38], rax
23275c mov      rax, qword ptr [rsp + 0x38]
232761 xor      rax, 8
232765 mov      qword ptr [rsp + 0x38], rax
23276a mov      rcx, qword ptr [rsp + 0x38]
23276f call     0x140002040
232774 mov      qword ptr [rsp + 0x4d8], rax
23277c xor      rax, qword ptr [rsp + 0x1b0]
232784 mov      r8d, 0x4f1b8
23278a mov      rdx, rax
23278d lea      rcx, [rsp + 0x190]
232795 call     0x1401f1520
23279a mov      ebx, 0xc9865251
23279f mov      qword ptr [rsp + 0x20], rbx
2327a4 mov      qword ptr [rsp + 0x28], 0x3ceb37ab
2327ad mov      rcx, qword ptr [rsp + 0x28]
2327b2 mov      rax, qword ptr [rsp + 0x20]
2327b7 xor      rcx, rax
2327ba mov      qword ptr [rsp + 0x30], rcx
2327bf mov      rdx, qword ptr [rsp + 0x28]
2327c4 mov      rax, qword ptr [rsp + 0x20]
2327c9 and      rdx, rax
2327cc add      rdx, rdx
2327cf mov      rcx, qword ptr [rsp + 0x28]
2327d4 mov      rax, qword ptr [rsp + 0x20]
2327d9 xor      rcx, rax
2327dc add      rcx, rdx
2327df mov      qword ptr [rsp + 0x30], rcx
2327e4 mov      rax, qword ptr [rsp + 0x30]
2327e9 mov      ebx, 0xe0470093
2327ee mov      qword ptr [rsp + 0x60], rbx
2327f3 mov      rax, qword ptr [rsp + 0x60]
2327f8 mov      rcx, qword ptr [rsp + 0x60]
2327fd mov      rax, qword ptr [rsp + 0x60]
232802 sub      rcx, rax
232805 mov      qword ptr [rsp + 0x68], rcx
23280a mov      rcx, qword ptr [rsp + 0x68]
23280f and      ecx, 0x1e7134
232815 add      rcx, rcx
232818 mov      rax, qword ptr [rsp + 0x68]
23281d xor      rax, 0x1e7134
232823 jmp      0x140232bc0
232828 movsxd   rax, dword ptr [rsp + 0x1370]
232830 xor      rax, qword ptr [rsp + 0x4d8]
232838 mov      qword ptr [rsp + 0x38], rax
23283d mov      rax, qword ptr [rsp + 0x38]
232842 mov      rcx, qword ptr [rsp + 0x38]
232847 mov      rax, qword ptr [rsp + 0x38]
23284c and      rcx, rax
23284f call     0x140002040
232854 mov      qword ptr [rsp + 0x4d8], rax
23285c movsxd   rcx, dword ptr [rsp + 0x1370]
232864 xor      rcx, rax
232867 mov      qword ptr [rsp + 0x38], rcx
23286c mov      rdx, qword ptr [rsp + 0x38]
232871 mov      rax, qword ptr [rsp + 0x38]
232876 xor      rdx, rax
232879 mov      rcx, qword ptr [rsp + 0x38]
23287e add      rcx, rdx
232881 call     0x140002040
232886 mov      qword ptr [rsp + 0x4d8], rax
23288e mov      eax, 0x971c9231
232893 mov      qword ptr [rsp + 0x48], rax
232898 mov      rcx, qword ptr [rsp + 0x48]
23289d mov      rax, qword ptr [rsp + 0x48]
2328a2 sub      rcx, rax
2328a5 mov      qword ptr [rsp + 0x50], rcx
2328aa mov      rcx, qword ptr [rsp + 0x50]
2328af or       rcx, qword ptr [rsp + 0x4d8]
2328b7 mov      rax, qword ptr [rsp + 0x50]
2328bc and      rax, qword ptr [rsp + 0x4d8]
2328c4 sub      rcx, rax
2328c7 mov      qword ptr [rsp + 0x4d8], rcx
2328cf mov      rcx, qword ptr [rsp + 0x50]
2328d4 and      rcx, qword ptr [rsp + 0x4d8]
2328dc add      rcx, rcx
2328df mov      rax, qword ptr [rsp + 0x50]
2328e4 xor      rax, qword ptr [rsp + 0x4d8]
2328ec add      rax, rcx
2328ef mov      qword ptr [rsp + 0x58], rax
2328f4 mov      rax, qword ptr [rsp + 0x50]
2328f9 xor      qword ptr [rsp + 0x1b0], rax
232901 mov      rax, qword ptr [rsp + 0x58]
232906 mov      rax, qword ptr [rsp + 0x4d8]
23290e mov      qword ptr [rsp + 0x38], rax
232913 mov      rax, qword ptr [rsp + 0x38]
232918 xor      rax, 0x23
23291c mov      qword ptr [rsp + 0x38], rax
232921 mov      rcx, qword ptr [rsp + 0x38]
232926 call     0x140002040
23292b mov      qword ptr [rsp + 0x4d8], rax
232933 mov      rdx, qword ptr [rsp + 0x1b0]
23293b xor      rdx, rax
23293e mov      r8d, 0x15a185
232944 lea      rcx, [rsp + 0x190]
23294c call     0x1401f1520
232951 movzx    eax, byte ptr [rsp + 0x4d8]
232959 lea      ecx, [rax + 0xff]
23295f or       cl, al
232961 mov      ebx, 0x96677fd7
232966 test     cl, 1
232969 je       0x140232997
23296b mov      qword ptr [rsp + 0x60], rbx
232970 mov      rax, qword ptr [rsp + 0x60]
232975 mov      rcx, qword ptr [rsp + 0x60]
23297a mov      rax, qword ptr [rsp + 0x60]
23297f sub      rcx, rax
232982 mov      qword ptr [rsp + 0x68], rcx
232987 mov      rax, qword ptr [rsp + 0x68]
23298c add      rax, 0x33037c
232992 jmp      0x1402319ec
232997 mov      qword ptr [rsp + 0x20], 0x57919851
2329a0 mov      eax, 0xef47dd37
2329a5 mov      qword ptr [rsp + 0x28], rax
2329aa mov      rcx, qword ptr [rsp + 0x28]
2329af mov      rax, qword ptr [rsp + 0x20]
2329b4 xor      rcx, rax
2329b7 mov      qword ptr [rsp + 0x30], rcx
2329bc mov      rax, qword ptr [rsp + 0x30]
2329c1 mov      qword ptr [rsp + 0x30], rax
2329c6 mov      rax, qword ptr [rsp + 0x30]
2329cb mov      qword ptr [rsp + 0x60], rbx
2329d0 mov      rax, qword ptr [rsp + 0x60]
2329d5 mov      rcx, qword ptr [rsp + 0x60]
2329da mov      rax, qword ptr [rsp + 0x60]
2329df sub      rcx, rax
2329e2 mov      qword ptr [rsp + 0x68], rcx
2329e7 mov      rax, qword ptr [rsp + 0x68]
2329ec add      rax, 0x33037c
2329f2 jmp      0x1402319ec
2329f7 movsxd   rax, dword ptr [rsp + 0x1370]
2329ff xor      rax, qword ptr [rsp + 0x4d8]
232a07 mov      qword ptr [rsp + 0x38], rax
232a0c mov      rax, qword ptr [rsp + 0x38]
232a11 mov      rcx, qword ptr [rsp + 0x38]
232a16 mov      rax, qword ptr [rsp + 0x38]
232a1b and      rcx, rax
232a1e call     0x140002040
232a23 mov      qword ptr [rsp + 0x4d8], rax
232a2b mov      qword ptr [rsp + 0x48], 0x76acf447
232a34 mov      rdx, qword ptr [rsp + 0x48]
232a39 mov      rax, qword ptr [rsp + 0x48]
232a3e xor      rdx, rax
232a41 mov      rcx, qword ptr [rsp + 0x48]
232a46 mov      rax, qword ptr [rsp + 0x48]
232a4b sub      rcx, rax
232a4e or       rcx, rdx
232a51 mov      qword ptr [rsp + 0x50], rcx
232a56 mov      rax, qword ptr [rsp + 0x50]
232a5b mov      rcx, qword ptr [rsp + 0x4d8]
232a63 and      rax, rcx
232a66 add      rax, rax
232a69 sub      rcx, rax
232a6c mov      rax, qword ptr [rsp + 0x50]
232a71 add      rax, rcx
232a74 mov      qword ptr [rsp + 0x4d8], rax
232a7c mov      rax, qword ptr [rsp + 0x50]
232a81 add      rax, qword ptr [rsp + 0x4d8]
232a89 mov      qword ptr [rsp + 0x58], rax
232a8e mov      rcx, qword ptr [rsp + 0x50]
232a93 or       rcx, qword ptr [rsp + 0x1b0]
232a9b mov      rax, qword ptr [rsp + 0x50]
232aa0 and      rax, qword ptr [rsp + 0x1b0]
232aa8 sub      rcx, rax
232aab mov      qword ptr [rsp + 0x1b0], rcx
232ab3 mov      rcx, qword ptr [rsp + 0x50]
232ab8 or       rcx, qword ptr [rsp + 0x1378]
232ac0 mov      rax, qword ptr [rsp + 0x50]
232ac5 and      rax, qword ptr [rsp + 0x1378]
232acd add      rax, rcx
232ad0 mov      qword ptr [rsp + 0x1378], rax
232ad8 mov      rax, qword ptr [rsp + 0x58]
232add mov      rax, qword ptr [rsp + 0x4d8]
232ae5 xor      rax, 4
232ae9 mov      qword ptr [rsp + 0x38], rax
232aee mov      rcx, qword ptr [rsp + 0x38]
232af3 call     0x140002040
232af8 mov      qword ptr [rsp + 0x4d8], rax
232b00 xor      rax, qword ptr [rsp + 0x1b0]
232b08 mov      r8d, 0x278dc
232b0e mov      rdx, rax
232b11 lea      rcx, [rsp + 0x190]
232b19 call     0x1401f1520
232b1e mov      ebx, 0xd9a1b13b
232b23 mov      qword ptr [rsp + 0x20], rbx
232b28 mov      ebx, 0xd162c2e1
232b2d mov      qword ptr [rsp + 0x28], rbx
232b32 mov      rcx, qword ptr [rsp + 0x28]
232b37 mov      rax, qword ptr [rsp + 0x20]
232b3c xor      rcx, rax
232b3f mov      qword ptr [rsp + 0x30], rcx
232b44 mov      qword ptr [rsp + 0x78], r12
232b49 nop      dword ptr [rax]
232b50 mov      rax, qword ptr [rsp + 0x78]
232b55 cmp      rax, 2
232b59 jae      0x140232b81
232b5b mov      rcx, qword ptr [rsp + 0x30]
232b60 mov      rax, qword ptr [rsp + 0x78]
232b65 add      rcx, rax
232b68 call     0x140002040
232b6d mov      qword ptr [rsp + 0x30], rax
232b72 mov      rax, qword ptr [rsp + 0x78]
232b77 inc      rax
232b7a mov      qword ptr [rsp + 0x78], rax
232b7f jmp      0x140232b50
232b81 mov      rax, qword ptr [rsp + 0x30]
232b86 mov      ebx, 0x9b528197
232b8b mov      qword ptr [rsp + 0x60], rbx
232b90 mov      rax, qword ptr [rsp + 0x60]
232b95 mov      rcx, qword ptr [rsp + 0x60]
232b9a mov      rax, qword ptr [rsp + 0x60]
232b9f sub      rcx, rax
232ba2 mov      qword ptr [rsp + 0x68], rcx
232ba7 mov      rcx, qword ptr [rsp + 0x68]
232bac and      ecx, 0xaf70b
232bb2 add      rcx, rcx
232bb5 mov      rax, qword ptr [rsp + 0x68]
232bba xor      rax, 0xaf70b
232bc0 add      rax, rcx
232bc3 mov      qword ptr [rsp + 0x70], rax
232bc8 mov      rax, qword ptr [rsp + 0x70]
232bcd movsxd   rcx, eax
232bd0 mov      rax, qword ptr [rsp + 0x68]
232bd5 movsxd   rdx, eax
232bd8 xor      rdx, rcx
232bdb jmp      0x140232664
232be0 mov      qword ptr [rsp + 0x48], 0x77b678e7
232be9 mov      rcx, qword ptr [rsp + 0x48]
232bee mov      rax, qword ptr [rsp + 0x48]
232bf3 sub      rcx, rax
232bf6 mov      qword ptr [rsp + 0x50], rcx
232bfb mov      rax, qword ptr [rsp + 0x50]
232c00 xor      qword ptr [rsp + 0x4d8], rax
232c08 mov      rax, qword ptr [rsp + 0x50]
232c0d add      rax, qword ptr [rsp + 0x4d8]
232c15 mov      qword ptr [rsp + 0x58], rax
232c1a mov      rax, qword ptr [rsp + 0x50]
232c1f xor      qword ptr [rsp + 0x1b0], rax
232c27 mov      rax, qword ptr [rsp + 0x58]
232c2c mov      rax, qword ptr [rsp + 0x4d8]
232c34 xor      rax, 0x13
232c38 mov      qword ptr [rsp + 0x38], rax
232c3d mov      rcx, qword ptr [rsp + 0x38]
232c42 call     0x140002040
232c47 mov      qword ptr [rsp + 0x4d8], rax
232c4f mov      rdx, qword ptr [rsp + 0x1b0]
232c57 xor      rdx, rax
232c5a mov      r8d, 0xbbe15
232c60 lea      rcx, [rsp + 0x190]
232c68 call     0x1401f1520
232c6d mov      rcx, qword ptr [rsp + 0x4d8]
232c75 mov      rax, rcx
232c78 and      rax, 0xfffffffffffffffe
232c7c sub      rcx, rax
232c7f cmp      rcx, 2
232c83 jae      0x140232cf2
232c85 mov      qword ptr [rsp + 0x60], 0x7da43919
232c8e mov      rax, qword ptr [rsp + 0x60]
232c93 mov      rcx, qword ptr [rsp + 0x60]
232c98 mov      rax, qword ptr [rsp + 0x60]
232c9d sub      rcx, rax
232ca0 mov      qword ptr [rsp + 0x68], rcx
232ca5 mov      rcx, qword ptr [rsp + 0x68]
232caa or       rcx, 0x36cfc2
232cb1 mov      rax, qword ptr [rsp + 0x68]
232cb6 and      eax, 0x36cfc2
232cbb add      rax, rcx
232cbe mov      qword ptr [rsp + 0x70], rax
232cc3 mov      rdx, qword ptr [rsp + 0x70]
232cc8 mov      rax, qword ptr [rsp + 0x68]
232ccd or       edx, eax
232ccf mov      rcx, qword ptr [rsp + 0x70]
232cd4 mov      rax, qword ptr [rsp + 0x68]
232cd9 and      ecx, eax
232cdb sub      edx, ecx
232cdd movsxd   rdx, edx
232ce0 lea      rcx, [rsp + 0x190]
232ce8 call     0x1401f0db0
232ced jmp      0x140232daa
232cf2 mov      ebx, 0xbe271eb1
232cf7 mov      qword ptr [rsp + 0x20], rbx
232cfc mov      qword ptr [rsp + 0x28], 0x34954ae7
232d05 mov      rcx, qword ptr [rsp + 0x28]
232d0a mov      rax, qword ptr [rsp + 0x20]
232d0f xor      rcx, rax
232d12 mov      qword ptr [rsp + 0x30], rcx
232d17 mov      rdx, qword ptr [rsp + 0x28]
232d1c mov      rax, qword ptr [rsp + 0x20]
232d21 and      rdx, rax
232d24 add      rdx, rdx
232d27 mov      rcx, qword ptr [rsp + 0x28]
232d2c mov      rax, qword ptr [rsp + 0x20]
232d31 xor      rcx, rax
232d34 add      rcx, rdx
232d37 mov      qword ptr [rsp + 0x30], rcx
232d3c mov      rax, qword ptr [rsp + 0x30]
232d41 mov      qword ptr [rsp + 0x60], 0x7da43919
232d4a mov      rax, qword ptr [rsp + 0x60]
232d4f mov      rcx, qword ptr [rsp + 0x60]
232d54 mov      rax, qword ptr [rsp + 0x60]
232d59 sub      rcx, rax
232d5c mov      qword ptr [rsp + 0x68], rcx
232d61 mov      rcx, qword ptr [rsp + 0x68]
232d66 or       rcx, 0x36cfc2
232d6d mov      rax, qword ptr [rsp + 0x68]
232d72 and      eax, 0x36cfc2
232d77 add      rax, rcx
232d7a mov      qword ptr [rsp + 0x70], rax
232d7f mov      rdx, qword ptr [rsp + 0x70]
232d84 mov      rax, qword ptr [rsp + 0x68]
232d89 or       edx, eax
232d8b mov      rcx, qword ptr [rsp + 0x70]
232d90 mov      rax, qword ptr [rsp + 0x68]
232d95 and      ecx, eax
232d97 sub      edx, ecx
232d99 movsxd   rdx, edx
232d9c lea      rcx, [rsp + 0x190]
232da4 call     0x1401f0db0
232da9 nop      
232daa mov      r14, qword ptr [rsp + 0xb8]
232db2 jmp      0x14022b080
