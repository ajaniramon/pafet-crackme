203530 mov      qword ptr [rsp + 0x20], rbx
203535 push     rbp
203536 push     rsi
203537 push     rdi
203538 push     r12
20353a push     r13
20353c push     r14
20353e push     r15
203540 sub      rsp, 0x170
203547 mov      rax, qword ptr [rip + 0x209ad2]
20354e xor      rax, rsp
203551 mov      qword ptr [rsp + 0x160], rax
203559 mov      qword ptr [rsp + 0x50], r8
20355e mov      r13d, edx
203561 mov      rbx, rcx
203564 movsxd   rax, dword ptr [rcx + 0x11e0]
20356b movabs   rcx, 0x2a3fac7c4ed3d3e6
203575 imul     rax, rcx
203579 xor      rax, qword ptr [rbx + 0x28]
20357d mov      qword ptr [rsp + 0x20], rax
203582 mov      rax, qword ptr [rsp + 0x20]
203587 movsxd   rax, dword ptr [rbx + 0x11e0]
20358e movabs   rcx, 0x886626b7cf0d57d9
203598 imul     rax, rcx
20359c xor      rax, qword ptr [rbx + 0x28]
2035a0 mov      qword ptr [rsp + 0x20], rax
2035a5 mov      rax, qword ptr [rsp + 0x20]
2035aa movsxd   rax, dword ptr [rbx + 0x11e0]
2035b1 movabs   rcx, 0x6eaeb8e94c46dbcc
2035bb imul     rax, rcx
2035bf xor      rax, qword ptr [rbx + 0x28]
2035c3 mov      qword ptr [rsp + 0x20], rax
2035c8 mov      rax, qword ptr [rsp + 0x20]
2035cd mov      rax, qword ptr [rbx + 0x2e8]
2035d4 movabs   rcx, 0x3234591387fb009
2035de sub      rax, rcx
2035e1 mov      rcx, rax
2035e4 shr      rcx, 0x21
2035e8 xor      rcx, rax
2035eb movabs   rax, 0xff51afd7ed558ccd
2035f5 imul     rcx, rax
2035f9 mov      rdx, rcx
2035fc shr      rdx, 0x21
203600 xor      rdx, rcx
203603 movabs   rax, 0xc4ceb9fe1a85ec53
20360d imul     rdx, rax
203611 mov      rax, rdx
203614 shr      rax, 0x21
203618 xor      rdx, rax
20361b or       rdx, 1
20361f mov      rax, qword ptr [rbx + 0x2e8]
203626 xor      rdx, rax
203629 mov      qword ptr [rbx + 0x2e8], rdx
203630 mov      rcx, rbx
203633 call     0x1401f1d80
203638 mov      dword ptr [rsp + 0x28], eax
20363c mov      rcx, rbx
20363f call     0x1401f1e80
203644 mov      r15d, eax
203647 cmp      eax, 0x20
20364a jbe      0x140203654
20364c mov      r15d, 0x20
203652 jmp      0x140203658
203654 test     eax, eax
203656 je       0x14020367b
203658 xor      edi, edi
20365a nop      word ptr [rax + rax]
203660 mov      rcx, rbx
203663 call     0x1401ee940
203668 mov      ecx, r15d
20366b sub      ecx, edi
20366d dec      ecx
20366f mov      qword ptr [rsp + rcx*8 + 0x60], rax
203674 inc      edi
203676 cmp      edi, r15d
203679 jb       0x140203660
20367b mov      r12d, 0x610
203681 mov      rax, qword ptr gs:[0x58]
20368a add      r12, qword ptr [rax]
20368d mov      eax, dword ptr [r12 + 0x524]
203695 mov      dword ptr [rsp + 0x20], eax
203699 mov      r14, qword ptr [rbx + 0xe0]
2036a0 mov      r10, qword ptr [rbx + 0xd8]
2036a7 lea      r8, [r10 + r10*2]
2036ab mov      rbp, qword ptr [rbx + 0xd0]
2036b2 movzx    ecx, byte ptr [rbx + 0x162]
2036b9 imul     rcx, r14
2036bd xor      rcx, r8
2036c0 xor      rcx, rbp
2036c3 movzx    esi, byte ptr [rbx + 0xe8]
2036ca mov      rdi, qword ptr [rbx + 0x100]
2036d1 mov      rax, rdi
2036d4 xor      rax, rcx
2036d7 sub      rdi, rcx
2036da test     sil, sil
2036dd cmove    rdi, rax
2036e1 movabs   rax, 0x9e3779b97f4a7c15
2036eb mov      r11, qword ptr [rbx + 0x1b0]
2036f2 imul     r11, rax
2036f6 movabs   rax, 0x2545f4914f6cdd1d
203700 add      r11, rax
203703 mov      r9, qword ptr [rbx + 0x1b8]
20370a mov      rax, r11
20370d shr      rax, 0x1b
203711 movzx    edx, al
203714 mov      byte ptr [rbx + 0x162], dl
20371a imul     rdx, r14
20371e xor      rdx, r8
203721 xor      rdx, rbp
203724 mov      rcx, rdx
203727 xor      rcx, rdi
20372a lea      rax, [rdx + rdi]
20372e test     sil, sil
203731 cmove    rax, rcx
203735 mov      qword ptr [rbx + 0x100], rax
20373c lea      r8, [r10 + r10]
203740 movzx    ecx, byte ptr [rbx + 0x161]
203747 imul     rcx, r14
20374b xor      rcx, r8
20374e xor      rcx, rbp
203751 mov      rdx, qword ptr [rbx + 0xf8]
203758 mov      rax, rdx
20375b xor      rax, rcx
20375e sub      rdx, rcx
203761 test     sil, sil
203764 cmove    rdx, rax
203768 movabs   rax, 0x9e3779b97f4a7c15
203772 imul     r11, rax
203776 movabs   rax, 0x2545f4914f6cdd1d
203780 add      r11, rax
203783 mov      qword ptr [rbx + 0x1b0], r11
20378a lea      rax, [r9 + 2]
20378e mov      qword ptr [rbx + 0x1b8], rax
203795 shr      r11, 0x1b
203799 movzx    eax, r11b
20379d mov      byte ptr [rbx + 0x161], al
2037a3 imul     rax, r14
2037a7 xor      rax, r8
2037aa xor      rax, rbp
2037ad mov      rcx, rax
2037b0 xor      rcx, rdx
2037b3 add      rax, rdx
2037b6 test     sil, sil
2037b9 cmove    rax, rcx
2037bd mov      qword ptr [rbx + 0xf8], rax
2037c4 mov      r9d, edi
2037c7 mov      edi, dword ptr [rsp + 0x28]
2037cb mov      r8d, edi
2037ce mov      rcx, rbx
2037d1 call     0x1401ef230
2037d6 mov      dword ptr [rsp + 0x48], eax
2037da mov      r8, qword ptr [rbx + 0xe0]
2037e1 imul     r10, qword ptr [rbx + 0xd8], 0xe
2037e9 mov      r11, qword ptr [rbx + 0xd0]
2037f0 movzx    ecx, byte ptr [rbx + 0x16d]
2037f7 imul     rcx, r8
2037fb xor      rcx, r10
2037fe xor      rcx, r11
203801 movzx    r9d, byte ptr [rbx + 0xe8]
203809 mov      rdx, qword ptr [rbx + 0x158]
203810 mov      rax, rdx
203813 xor      rax, rcx
203816 sub      rdx, rcx
203819 test     r9b, r9b
20381c cmove    rdx, rax
203820 inc      rdx
203823 mov      rax, qword ptr [rbx + 0x1b0]
20382a movabs   rbp, 0x9e3779b97f4a7c15
203834 imul     rax, rbp
203838 movabs   rcx, 0x2545f4914f6cdd1d
203842 add      rax, rcx
203845 imul     rax, rbp
203849 add      rax, rcx
20384c mov      qword ptr [rbx + 0x1b0], rax
203853 add      qword ptr [rbx + 0x1b8], 2
20385b shr      rax, 0x1b
20385f movzx    eax, al
203862 mov      byte ptr [rbx + 0x16d], al
203868 imul     rax, r8
20386c xor      rax, r10
20386f xor      rax, r11
203872 mov      rcx, rax
203875 xor      rcx, rdx
203878 add      rax, rdx
20387b test     r9b, r9b
20387e cmove    rax, rcx
203882 mov      qword ptr [rbx + 0x158], rax
203889 mov      dword ptr [rsp + 0x38], r15d
20388e lea      rax, [rsp + 0x60]
203893 mov      qword ptr [rsp + 0x30], rax
203898 mov      dword ptr [rsp + 0x40], edi
20389c mov      rcx, qword ptr [rbx + 0xb0]
2038a3 test     rcx, rcx
2038a6 je       0x140204650
2038ac mov      rax, qword ptr [rcx]
2038af lea      r9, [rsp + 0x38]
2038b4 lea      r8, [rsp + 0x30]
2038b9 lea      rdx, [rsp + 0x40]
2038be call     qword ptr [rax + 0x10]
2038c1 mov      r15, rax
2038c4 mov      r11, qword ptr [rbx + 0xe0]
2038cb mov      r14, qword ptr [rbx + 0xd8]
2038d2 imul     r8, r14, 0xe
2038d6 mov      rdi, qword ptr [rbx + 0xd0]
2038dd movzx    ecx, byte ptr [rbx + 0x16d]
2038e4 imul     rcx, r11
2038e8 xor      rcx, r8
2038eb xor      rcx, rdi
2038ee movzx    esi, byte ptr [rbx + 0xe8]
2038f5 mov      rdx, qword ptr [rbx + 0x158]
2038fc mov      rax, rdx
2038ff xor      rax, rcx
203902 sub      rdx, rcx
203905 test     sil, sil
203908 cmove    rdx, rax
20390c dec      rdx
20390f mov      r10, qword ptr [rbx + 0x1b0]
203916 imul     r10, rbp
20391a movabs   rax, 0x2545f4914f6cdd1d
203924 add      r10, rax
203927 imul     r10, rbp
20392b add      r10, rax
20392e mov      qword ptr [rbx + 0x1b0], r10
203935 add      qword ptr [rbx + 0x1b8], 2
20393d mov      r9, qword ptr [rbx + 0x1b8]
203944 mov      rax, r10
203947 shr      rax, 0x1b
20394b movzx    ebp, al
20394e mov      byte ptr [rbx + 0x16d], bpl
203955 mov      ecx, ebp
203957 imul     rcx, r11
20395b xor      rcx, r8
20395e xor      rcx, rdi
203961 mov      rax, rdx
203964 xor      rax, rcx
203967 lea      r8, [rdx + rcx]
20396b test     sil, sil
20396e cmove    r8, rax
203972 mov      qword ptr [rbx + 0x158], r8
203979 cmp      dword ptr [rsp + 0x48], 0
20397e je       0x140203a1b
203984 mov      rcx, rbx
203987 call     0x1401ef380
20398c mov      r8d, eax
20398f mov      r10, qword ptr [rbx + 0x1b0]
203996 movabs   rax, 0x9e3779b97f4a7c15
2039a0 imul     r10, rax
2039a4 movabs   rax, 0x2545f4914f6cdd1d
2039ae add      r10, rax
2039b1 mov      r9, qword ptr [rbx + 0x1b8]
2039b8 mov      rax, r10
2039bb shr      rax, 0x1b
2039bf movzx    edx, al
2039c2 mov      byte ptr [rbx + 0x161], dl
2039c8 mov      r11, qword ptr [rbx + 0xe0]
2039cf mov      r14, qword ptr [rbx + 0xd8]
2039d6 mov      rdi, qword ptr [rbx + 0xd0]
2039dd imul     rdx, r11
2039e1 lea      rax, [r14 + r14]
2039e5 xor      rdx, rax
2039e8 xor      rdx, rdi
2039eb movzx    esi, byte ptr [rbx + 0xe8]
2039f2 mov      ecx, r8d
2039f5 xor      rcx, rdx
2039f8 lea      rax, [r8 + rdx]
2039fc test     sil, sil
2039ff cmove    rax, rcx
203a03 mov      qword ptr [rbx + 0xf8], rax
203a0a movzx    ebp, byte ptr [rbx + 0x16d]
203a11 mov      r8, qword ptr [rbx + 0x158]
203a18 inc      r9
203a1b imul     rdx, r14, 0xe
203a1f movzx    ecx, bpl
203a23 imul     rcx, r11
203a27 xor      rcx, rdx
203a2a xor      rcx, rdi
203a2d mov      rax, rcx
203a30 xor      rax, r8
203a33 sub      r8, rcx
203a36 test     sil, sil
203a39 cmove    r8, rax
203a3d movabs   rax, 0x9e3779b97f4a7c15
203a47 imul     r10, rax
203a4b movabs   rax, 0x2545f4914f6cdd1d
203a55 add      r10, rax
203a58 mov      qword ptr [rbx + 0x1b0], r10
203a5f lea      rax, [r9 + 1]
203a63 mov      qword ptr [rbx + 0x1b8], rax
203a6a shr      r10, 0x1b
203a6e movzx    eax, r10b
203a72 mov      byte ptr [rbx + 0x16d], al
203a78 imul     rax, r11
203a7c xor      rax, rdx
203a7f xor      rax, rdi
203a82 mov      rcx, rax
203a85 xor      rcx, r8
203a88 add      rax, r8
203a8b test     sil, sil
203a8e cmove    rax, rcx
203a92 mov      qword ptr [rbx + 0x158], rax
203a99 mov      eax, dword ptr [rsp + 0x28]
203a9d xor      rax, qword ptr [rbx + 0x20]
203aa1 xor      rax, r8
203aa4 mov      rcx, rax
203aa7 shr      rcx, 0x21
203aab xor      rcx, rax
203aae movabs   r14, 0xff51afd7ed558ccd
203ab8 imul     rcx, r14
203abc mov      rdx, rcx
203abf shr      rdx, 0x21
203ac3 xor      rdx, rcx
203ac6 movabs   rax, 0xc4ceb9fe1a85ec53
203ad0 imul     rdx, rax
203ad4 mov      rax, rdx
203ad7 shr      rax, 0x21
203adb xor      rax, rdx
203ade mov      qword ptr [rbx + 0x20], rax
203ae2 mov      rdx, r15
203ae5 mov      rcx, rbx
203ae8 call     0x1401ee820
203aed mov      rax, qword ptr [rbx + 0x2e8]
203af4 mov      eax, dword ptr [rsp + 0x20]
203af8 cmp      dword ptr [r12 + 0x524], eax
203b00 jbe      0x140203b0a
203b02 mov      dword ptr [r12 + 0x524], eax
203b0a test     r13d, r13d
203b0d jns      0x140204656
203b13 mov      rax, qword ptr [rsp + 0x50]
203b18 cmp      qword ptr [rbx + 0x11b8], rax
203b1f jne      0x140204642
203b25 movsxd   rax, dword ptr [rbx + 0x11e0]
203b2c movabs   rcx, 0xc2d8b8475281b242
203b36 imul     rax, rcx
203b3a xor      rax, qword ptr [rbx + 0x28]
203b3e mov      qword ptr [rsp + 0x30], rax
203b43 mov      rax, qword ptr [rsp + 0x30]
203b48 mov      rcx, rbx
203b4b call     0x1401ee450
203b50 test     eax, eax
203b52 jne      0x140204617
203b58 cmp      dword ptr [rbx + 0xad0], eax
203b5e jne      0x140204617
203b64 mov      r10, qword ptr [rbx + 0xe0]
203b6b mov      r11, qword ptr [rbx + 0xd8]
203b72 mov      rdi, qword ptr [rbx + 0xd0]
203b79 movzx    ecx, byte ptr [rbx + 0x160]
203b80 imul     rcx, r10
203b84 xor      rcx, rdi
203b87 xor      rcx, r11
203b8a movzx    esi, byte ptr [rbx + 0xe8]
203b91 mov      r8, qword ptr [rbx + 0xf0]
203b98 mov      rax, r8
203b9b xor      rax, rcx
203b9e sub      r8, rcx
203ba1 test     sil, sil
203ba4 cmove    r8, rax
203ba8 mov      r9, qword ptr [rbx + 0x1b0]
203baf movabs   r15, 0x9e3779b97f4a7c15
203bb9 imul     r9, r15
203bbd movabs   r12, 0x2545f4914f6cdd1d
203bc7 add      r9, r12
203bca mov      qword ptr [rbx + 0x1b0], r9
203bd1 mov      rbp, qword ptr [rbx + 0x1b8]
203bd8 inc      rbp
203bdb mov      qword ptr [rbx + 0x1b8], rbp
203be2 mov      rax, r9
203be5 shr      rax, 0x1b
203be9 movzx    edx, al
203bec mov      byte ptr [rbx + 0x160], dl
203bf2 imul     rdx, r10
203bf6 xor      rdx, rdi
203bf9 xor      rdx, r11
203bfc mov      rcx, rdx
203bff xor      rcx, r8
203c02 lea      rax, [rdx + r8]
203c06 test     sil, sil
203c09 cmove    rax, rcx
203c0d mov      qword ptr [rbx + 0xf0], rax
203c14 cmp      r8d, 0x338040
203c1b jne      0x140204617
203c21 mov      eax, r13d
203c24 btr      eax, 0x1f
203c28 cmp      eax, 2
203c2b jae      0x140203c76
203c2d imul     r9, r15
203c31 add      r9, r12
203c34 mov      qword ptr [rbx + 0x1b0], r9
203c3b lea      rax, [rbp + 1]
203c3f mov      qword ptr [rbx + 0x1b8], rax
203c46 shr      r9, 0x1b
203c4a movzx    eax, r9b
203c4e mov      byte ptr [rbx + 0x160], al
203c54 imul     rax, r10
203c58 xor      rax, rdi
203c5b xor      rax, r11
203c5e mov      rcx, rax
203c61 xor      rcx, 0x1ad951
203c68 add      rax, 0x1ad951
203c6e test     sil, sil
203c71 jmp      0x14020460c
203c76 mov      rcx, rbx
203c79 call     0x1401ee070
203c7e mov      eax, eax
203c80 movzx    ecx, byte ptr [rbx + 0x4ad]
203c87 xor      rcx, qword ptr [rbx + 0x11e8]
203c8e xor      rcx, rax
203c91 mov      rax, rcx
203c94 shr      rax, 0x21
203c98 xor      rax, rcx
203c9b imul     rax, r14
203c9f mov      rcx, rax
203ca2 shr      rcx, 0x21
203ca6 xor      rcx, rax
203ca9 movabs   r8, 0xc4ceb9fe1a85ec53
203cb3 imul     rcx, r8
203cb7 mov      rdx, rcx
203cba shr      rdx, 0x21
203cbe xor      rdx, rcx
203cc1 mov      qword ptr [rbx + 0x11e8], rdx
203cc8 xor      rdx, qword ptr [rbx + 0x20]
203ccc xor      rdx, qword ptr [rbx + 0x28]
203cd0 mov      rax, rdx
203cd3 shr      rax, 0x21
203cd7 xor      rax, rdx
203cda imul     rax, r14
203cde mov      rcx, rax
203ce1 shr      rcx, 0x21
203ce5 xor      rcx, rax
203ce8 imul     rcx, r8
203cec mov      rax, rcx
203cef shr      rax, 0x21
203cf3 xor      rax, rcx
203cf6 mov      qword ptr [rbx + 0x20], rax
203cfa mov      r11, qword ptr [rbx + 0xe0]
203d01 mov      rax, qword ptr [rbx + 0xd8]
203d08 lea      rdi, [rax + rax*4]
203d0c add      rdi, rdi
203d0f mov      r10, qword ptr [rbx + 0xd0]
203d16 movzx    ecx, byte ptr [rbx + 0x169]
203d1d imul     rcx, r11
203d21 xor      rcx, rdi
203d24 xor      rcx, r10
203d27 movzx    r9d, byte ptr [rbx + 0xe8]
203d2f mov      rdx, qword ptr [rbx + 0x138]
203d36 mov      rax, rdx
203d39 xor      rax, rcx
203d3c sub      rdx, rcx
203d3f test     r9b, r9b
203d42 cmove    rdx, rax
203d46 mov      rax, qword ptr [rbx + 0x1b0]
203d4d imul     rax, r15
203d51 add      rax, r12
203d54 mov      qword ptr [rbx + 0x1b0], rax
203d5b inc      qword ptr [rbx + 0x1b8]
203d62 shr      rax, 0x1b
203d66 movzx    r8d, al
203d6a mov      byte ptr [rbx + 0x169], r8b
203d71 imul     r8, r11
203d75 xor      r8, rdi
203d78 xor      r8, r10
203d7b mov      rcx, r8
203d7e xor      rcx, rdx
203d81 lea      rax, [r8 + rdx]
203d85 test     r9b, r9b
203d88 cmove    rax, rcx
203d8c mov      qword ptr [rbx + 0x138], rax
203d93 mov      rcx, rbx
203d96 call     0x1401f0910
203d9b mov      r10, qword ptr [rbx + 0xe0]
203da2 mov      rax, qword ptr [rbx + 0xd8]
203da9 lea      rdi, [rax + rax*8]
203dad mov      r9, qword ptr [rbx + 0xd0]
203db4 movzx    ecx, byte ptr [rbx + 0x168]
203dbb imul     rcx, r10
203dbf xor      rcx, r9
203dc2 xor      rcx, rdi
203dc5 movzx    r11d, byte ptr [rbx + 0xe8]
203dcd mov      rdx, qword ptr [rbx + 0x130]
203dd4 mov      rax, rdx
203dd7 xor      rax, rcx
203dda sub      rdx, rcx
203ddd test     r11b, r11b
203de0 cmove    rdx, rax
203de4 mov      rax, qword ptr [rbx + 0x1b0]
203deb imul     rax, r15
203def add      rax, r12
203df2 mov      qword ptr [rbx + 0x1b0], rax
203df9 inc      qword ptr [rbx + 0x1b8]
203e00 shr      rax, 0x1b
203e04 movzx    r8d, al
203e08 mov      byte ptr [rbx + 0x168], r8b
203e0f imul     r8, r10
203e13 xor      r8, r9
203e16 xor      r8, rdi
203e19 mov      rcx, rdx
203e1c xor      rcx, r8
203e1f lea      rax, [rdx + r8]
203e23 test     r11b, r11b
203e26 cmove    rax, rcx
203e2a mov      qword ptr [rbx + 0x130], rax
203e31 mov      rcx, rbx
203e34 call     0x1401f0910
203e39 mov      rcx, rbx
203e3c call     0x1401ee070
203e41 cmp      eax, dword ptr [rbx + 0x1d8]
203e47 jae      0x140203e53
203e49 mov      edx, eax
203e4b mov      rcx, rbx
203e4e call     0x1401f0910
203e53 mov      rbp, qword ptr [rbx + 0xe0]
203e5a mov      rdi, qword ptr [rbx + 0xd8]
203e61 lea      r10, [rdi + rdi*8]
203e65 mov      r14, qword ptr [rbx + 0xd0]
203e6c movzx    ecx, byte ptr [rbx + 0x168]
203e73 imul     rcx, rbp
203e77 xor      rcx, r14
203e7a xor      rcx, r10
203e7d movzx    esi, byte ptr [rbx + 0xe8]
203e84 mov      r11, qword ptr [rbx + 0x130]
203e8b mov      rax, r11
203e8e xor      rax, rcx
203e91 sub      r11, rcx
203e94 test     sil, sil
203e97 cmove    r11, rax
203e9b mov      r9, qword ptr [rbx + 0x1b0]
203ea2 imul     r9, r15
203ea6 add      r9, r12
203ea9 mov      r8, qword ptr [rbx + 0x1b8]
203eb0 mov      rax, r9
203eb3 shr      rax, 0x1b
203eb7 movzx    edx, al
203eba mov      byte ptr [rbx + 0x168], dl
203ec0 imul     rdx, rbp
203ec4 xor      rdx, r14
203ec7 xor      rdx, r10
203eca mov      rcx, rdx
203ecd xor      rcx, r11
203ed0 lea      rax, [rdx + r11]
203ed4 test     sil, sil
203ed7 cmove    rax, rcx
203edb mov      qword ptr [rbx + 0x130], rax
203ee2 imul     r9, r15
203ee6 add      r9, r12
203ee9 mov      qword ptr [rbx + 0x1b0], r9
203ef0 lea      rax, [r8 + 2]
203ef4 mov      qword ptr [rbx + 0x1b8], rax
203efb shr      r9, 0x1b
203eff movzx    edx, r9b
203f03 mov      byte ptr [rbx + 0x169], dl
203f09 imul     rdx, rbp
203f0d lea      rax, [rdi + rdi*4]
203f11 add      rax, rax
203f14 xor      rdx, rax
203f17 xor      rdx, r14
203f1a mov      rcx, rdx
203f1d xor      rcx, r11
203f20 lea      rax, [rdx + r11]
203f24 test     sil, sil
203f27 cmove    rax, rcx
203f2b mov      qword ptr [rbx + 0x138], rax
203f32 movzx    edx, byte ptr [rbx + 0x4ad]
203f39 xor      rdx, qword ptr [rbx + 0x348]
203f40 mov      r8d, 0x1b9d
203f46 mov      rcx, rbx
203f49 call     0x1401f1520
203f4e mov      r8, qword ptr [rbx + 0x348]
203f55 mov      rax, r8
203f58 xor      rax, qword ptr [rbx + 0x20]
203f5c mov      rcx, rax
203f5f shr      rcx, 0x21
203f63 xor      rcx, rax
203f66 movabs   rsi, 0xff51afd7ed558ccd
203f70 imul     rcx, rsi
203f74 mov      rax, rcx
203f77 shr      rax, 0x21
203f7b xor      rax, rcx
203f7e movabs   rbp, 0xc4ceb9fe1a85ec53
203f88 imul     rax, rbp
203f8c mov      rdx, rax
203f8f shr      rdx, 0x21
203f93 xor      edx, eax
203f95 lea      eax, [rdx + 1]
203f98 mov      ecx, edx
203f9a imul     ecx, eax
203f9d not      ecx
203f9f xor      edx, eax
203fa1 and      ecx, edx
203fa3 test     cl, 1
203fa6 je       0x14020400d
203fa8 and      r8b, 3
203fac cmp      r8b, 1
203fb0 jne      0x14020400d
203fb2 mov      rax, qword ptr [rbx + 0x1b0]
203fb9 imul     rax, r15
203fbd add      rax, r12
203fc0 mov      qword ptr [rbx + 0x1b0], rax
203fc7 inc      qword ptr [rbx + 0x1b8]
203fce shr      rax, 0x1b
203fd2 movzx    eax, al
203fd5 mov      byte ptr [rbx + 0x160], al
203fdb imul     rax, qword ptr [rbx + 0xe0]
203fe3 xor      rax, qword ptr [rbx + 0xd0]
203fea xor      rax, qword ptr [rbx + 0xd8]
203ff1 mov      rcx, rax
203ff4 xor      rcx, 0x190631
203ffb add      rax, 0x190631
204001 cmp      byte ptr [rbx + 0xe8], 0
204008 jmp      0x14020460c
20400d mov      rcx, rbx
204010 call     0x1401ee070
204015 mov      edi, eax
204017 cmp      eax, dword ptr [rbx + 0x1d8]
20401d jb       0x14020407a
20401f mov      rax, qword ptr [rbx + 0x1b0]
204026 imul     rax, r15
20402a add      rax, r12
20402d mov      qword ptr [rbx + 0x1b0], rax
204034 inc      qword ptr [rbx + 0x1b8]
20403b shr      rax, 0x1b
20403f movzx    eax, al
204042 mov      byte ptr [rbx + 0x160], al
204048 imul     rax, qword ptr [rbx + 0xe0]
204050 xor      rax, qword ptr [rbx + 0xd0]
204057 xor      rax, qword ptr [rbx + 0xd8]
20405e mov      rcx, rax
204061 xor      rcx, 0xfe1ab
204068 add      rax, 0xfe1ab
20406e cmp      byte ptr [rbx + 0xe8], 0
204075 jmp      0x14020460c
20407a mov      edx, edi
20407c mov      rcx, rbx
20407f call     0x1401f25b0
204084 mov      r8, qword ptr [rbx + 0x20]
204088 movsxd   r9, dword ptr [rbx + 0x11e0]
20408f mov      rdx, r9
204092 imul     rdx, r15
204096 xor      rdx, qword ptr [rbx + 0x260]
20409d mov      rax, r8
2040a0 rol      rax, 0x11
2040a4 movabs   r10, 0xd6e8feb86659fd93
2040ae mov      rcx, rdi
2040b1 imul     rcx, r10
2040b5 xor      rcx, rax
2040b8 xor      rcx, rdx
2040bb mov      rax, rcx
2040be shr      rax, 0x21
2040c2 xor      rax, rcx
2040c5 imul     rax, rsi
2040c9 mov      rcx, rax
2040cc shr      rcx, 0x21
2040d0 xor      rcx, rax
2040d3 imul     rcx, rbp
2040d7 mov      rax, rcx
2040da shr      rax, 0x21
2040de xor      rax, rcx
2040e1 mov      r10, rax
2040e4 shr      r10, 0x1d
2040e8 xor      r10, rax
2040eb or       r10, 1
2040ef mov      qword ptr [rbx + 0x260], r10
2040f6 mov      rax, r10
2040f9 and      eax, 0x3ff
2040fe cmp      rax, 0x2c5
204104 jne      0x140204120
204106 mov      rcx, rbx
204109 call     0x1402297e0
20410e mov      r8, qword ptr [rbx + 0x20]
204112 mov      r9d, dword ptr [rbx + 0x11e0]
204119 mov      r10, qword ptr [rbx + 0x260]
204120 movzx    eax, r10b
204124 and      al, 0x1f
204126 cmp      al, 0x15
204128 jne      0x14020420d
20412e movsxd   rax, r9d
204131 xor      rax, 0x5a5a
204137 imul     rax, r15
20413b xor      rax, r10
20413e rol      r8, 0x11
204142 xor      r8, rax
204145 movabs   rax, 0x8f70feda99a6026d
20414f xor      r8, rax
204152 mov      rax, r8
204155 shr      rax, 0x21
204159 xor      rax, r8
20415c imul     rax, rsi
204160 mov      rcx, rax
204163 shr      rcx, 0x21
204167 xor      rcx, rax
20416a imul     rcx, rbp
20416e mov      rax, rcx
204171 shr      rax, 0x21
204175 xor      rax, rcx
204178 mov      r9, rax
20417b shr      r9, 0x1d
20417f xor      r9, rax
204182 or       r9, 1
204186 mov      rax, r9
204189 shr      rax, 8
20418d and      eax, 3
204190 imul     r8, rax, 0x3e
204194 mov      rcx, r9
204197 shr      rcx, 0x28
20419b mov      eax, 0x8421085
2041a0 mul      ecx
2041a2 mov      eax, ecx
2041a4 sub      eax, edx
2041a6 shr      eax, 1
2041a8 add      eax, edx
2041aa shr      eax, 5
2041ad imul     eax, eax, 0x3e
2041b0 sub      ecx, eax
2041b2 mov      eax, ecx
2041b4 add      r8, rax
2041b7 mov      rax, qword ptr [rbx + 0x4b8]
2041be movsxd   rcx, dword ptr [rax + r8*4]
2041c2 movsxd   rax, dword ptr [rbx + 0x4c8]
2041c9 xor      rcx, rax
2041cc add      rcx, qword ptr [rbx + 0x4c0]
2041d3 xor      rcx, r9
2041d6 mov      rax, rcx
2041d9 shr      rax, 0x21
2041dd xor      rax, rcx
2041e0 imul     rax, rsi
2041e4 mov      rcx, rax
2041e7 shr      rcx, 0x21
2041eb xor      rcx, rax
2041ee imul     rcx, rbp
2041f2 mov      rax, rcx
2041f5 shr      rax, 0x21
2041f9 xor      rax, r10
2041fc xor      rax, rcx
2041ff mov      qword ptr [rbx + 0x260], rax
204206 inc      qword ptr [rbx + 0x268]
20420d inc      dword ptr [rbx + 0x200]
204213 mov      eax, dword ptr [rbx + 0x200]
204219 cmp      eax, dword ptr [rbx + 0x1fc]
20421f jb       0x140204233
204221 mov      dword ptr [rbx + 0x200], 0
20422b mov      rcx, rbx
20422e call     0x1401ef7c0
204233 mov      r8d, edi
204236 mov      edx, edi
204238 mov      rcx, rbx
20423b call     0x1401f0660
204240 mov      r9, qword ptr [rbx + 0x1b0]
204247 imul     r9, r15
20424b add      r9, r12
20424e mov      qword ptr [rbx + 0x1b0], r9
204255 inc      qword ptr [rbx + 0x1b8]
20425c mov      r10, qword ptr [rbx + 0x1b8]
204263 mov      rax, r9
204266 shr      rax, 0x1b
20426a movzx    edx, al
20426d mov      byte ptr [rbx + 0x168], dl
204273 mov      rsi, qword ptr [rbx + 0xe0]
20427a mov      r11, qword ptr [rbx + 0xd8]
204281 mov      rbp, qword ptr [rbx + 0xd0]
204288 imul     rdx, rsi
20428c lea      rax, [r11 + r11*8]
204290 xor      rdx, rax
204293 xor      rdx, rbp
204296 movzx    r15d, byte ptr [rbx + 0xe8]
20429e mov      rcx, rdx
2042a1 xor      rcx, rdi
2042a4 lea      rax, [rdx + rdi]
2042a8 test     r15b, r15b
2042ab cmove    rax, rcx
2042af mov      qword ptr [rbx + 0x130], rax
2042b6 mov      rcx, qword ptr [rbx + 0x1d0]
2042bd mov      rax, qword ptr [rbx + 0x48]
2042c1 movzx    r8d, byte ptr [rcx + rdi]
2042c6 xor      r8b, byte ptr [rax + rdi]
2042ca lea      r12d, [rdi + 1]
2042ce movabs   rax, 0x9e3779b97f4a7c15
2042d8 imul     r9, rax
2042dc movabs   rax, 0x2545f4914f6cdd1d
2042e6 add      r9, rax
2042e9 inc      r10
2042ec mov      qword ptr [rsp + 0x30], r10
2042f1 mov      qword ptr [rbx + 0x1b8], r10
2042f8 mov      rax, r9
2042fb shr      rax, 0x1b
2042ff movzx    edx, al
204302 mov      byte ptr [rbx + 0x161], dl
204308 imul     rdx, rsi
20430c lea      rax, [r11 + r11]
204310 xor      rdx, rax
204313 xor      rdx, rbp
204316 mov      rcx, rdx
204319 xor      rcx, r12
20431c lea      rax, [rdx + r12]
204320 test     r15b, r15b
204323 cmove    rax, rcx
204327 mov      qword ptr [rbx + 0xf8], rax
20432e movsxd   rdx, dword ptr [rbx + 0x11e0]
204335 mov      r10, qword ptr [rbx + 0x20]
204339 mov      rcx, rdx
20433c xor      rcx, qword ptr [rbx + 0x350]
204343 xor      rcx, r10
204346 xor      rcx, r12
204349 xor      rcx, qword ptr [rbx + 0x348]
204350 mov      rax, rcx
204353 shr      rax, 0x21
204357 xor      rax, rcx
20435a movabs   rcx, 0xff51afd7ed558ccd
204364 imul     rax, rcx
204368 mov      rcx, rax
20436b shr      rcx, 0x21
20436f xor      rcx, rax
204372 movabs   rax, 0xc4ceb9fe1a85ec53
20437c imul     rcx, rax
204380 mov      rdi, rcx
204383 shr      rdi, 0x21
204387 xor      rdi, rcx
20438a mov      qword ptr [rbx + 0x28], rdi
20438e movzx    eax, r8b
204392 xor      rax, 0xdd
204398 lea      rcx, [rip - 0x20439f]
20439f movzx    r14d, byte ptr [rax + rcx + 0x3ecf00]
2043a8 xor      r14b, 0x63
2043ac inc      edx
2043ae mov      dword ptr [rbx + 0x11e0], edx
2043b4 movabs   r8, 0xff51afd7ed558ccd
2043be test     dl, 0x1f
2043c1 jne      0x140204407
2043c3 movsxd   rax, edx
2043c6 xor      rax, r10
2043c9 xor      rax, qword ptr [rbx + 0x348]
2043d0 mov      rcx, rax
2043d3 shr      rcx, 0x21
2043d7 xor      rcx, rax
2043da imul     rcx, r8
2043de mov      rdx, rcx
2043e1 shr      rdx, 0x21
2043e5 xor      rdx, rcx
2043e8 movabs   rax, 0xc4ceb9fe1a85ec53
2043f2 imul     rdx, rax
2043f6 mov      rax, rdx
2043f9 shr      rax, 0x21
2043fd xor      rax, rdx
204400 mov      qword ptr [rbx + 0x348], rax
204407 movzx    edx, r14b
20440b xor      r10, rdx
20440e xor      r10, r12
204411 mov      rax, r10
204414 shr      rax, 0x21
204418 xor      rax, r10
20441b imul     rax, r8
20441f mov      rcx, rax
204422 shr      rcx, 0x21
204426 xor      rcx, rax
204429 movabs   r12, 0xc4ceb9fe1a85ec53
204433 imul     rcx, r12
204437 mov      rax, rcx
20443a shr      rax, 0x21
20443e xor      rax, rcx
204441 mov      qword ptr [rbx + 0x20], rax
204445 mov      byte ptr [rbx + 0x4ad], r14b
20444c mov      ecx, dword ptr [rbx + 0x1178]
204452 movabs   rax, 0xd6e8feb86659fd93
20445c imul     rcx, rax
204460 movabs   r10, 0x9e3779b97f4a7c15
20446a imul     rdx, r10
20446e xor      rcx, rdx
204471 xor      rcx, rdi
204474 mov      rax, rcx
204477 shr      rax, 0x21
20447b xor      rax, rcx
20447e imul     rax, r8
204482 mov      rdx, rax
204485 shr      rdx, 0x21
204489 xor      rdx, rax
20448c imul     rdx, r12
204490 shr      rdx, 0x21
204494 and      edx, 3
204497 imul     r9, r10
20449b movabs   rdi, 0x2545f4914f6cdd1d
2044a5 add      r9, rdi
2044a8 mov      rax, qword ptr [rsp + 0x30]
2044ad inc      rax
2044b0 mov      qword ptr [rbx + 0x1b8], rax
2044b7 cmp      r14b, 0x3e
2044bb jae      0x140204554
2044c1 inc      qword ptr [rbx + 0x11a0]
2044c8 mov      edi, edx
2044ca lea      rax, [rip - 0x2044d1]
2044d1 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
2044d9 mov      qword ptr [rbx + 0x1b0], r9
2044e0 shr      r9, 0x1b
2044e4 movzx    eax, r9b
2044e8 mov      byte ptr [rbx + 0x160], al
2044ee imul     rax, rsi
2044f2 xor      rax, rbp
2044f5 xor      rax, r11
2044f8 mov      rcx, rax
2044fb xor      rcx, r8
2044fe add      rax, r8
204501 test     r15b, r15b
204504 cmove    rax, rcx
204508 mov      qword ptr [rbx + 0xf0], rax
20450f movzx    r8d, r14b
204513 mov      rcx, rbx
204516 call     0x1401f1f50
20451b lea      edx, [r13 - 1]
20451f imul     rcx, rdi, 0x3e
204523 mov      eax, eax
204525 add      rcx, rax
204528 mov      rax, qword ptr [rbx + 0x4b8]
20452f movsxd   r9, dword ptr [rax + rcx*4]
204533 movsxd   rax, dword ptr [rbx + 0x4c8]
20453a xor      r9, rax
20453d add      r9, qword ptr [rbx + 0x4c0]
204544 mov      r8, qword ptr [rsp + 0x50]
204549 mov      rcx, rbx
20454c call     r9
20454f jmp      0x140204617
204554 inc      dword ptr [rbx + 0x11a8]
20455a mov      rax, r9
20455d shr      rax, 0x1b
204561 movzx    ecx, al
204564 mov      byte ptr [rbx + 0x163], cl
20456a imul     rcx, rsi
20456e lea      rax, [r11*4]
204576 xor      rcx, rax
204579 xor      rcx, rbp
20457c mov      qword ptr [rbx + 0x108], rcx
204583 imul     r9, r10
204587 add      r9, rdi
20458a mov      r8, qword ptr [rbx + 0x1b8]
204591 mov      rax, r9
204594 shr      rax, 0x1b
204598 movzx    edx, al
20459b mov      byte ptr [rbx + 0x16a], dl
2045a1 imul     rdx, rsi
2045a5 imul     rax, r11, 0xb
2045a9 xor      rdx, rax
2045ac xor      rdx, rbp
2045af mov      rcx, rdx
2045b2 xor      rcx, 1
2045b6 lea      rax, [rdx + 1]
2045ba test     r15b, r15b
2045bd cmove    rax, rcx
2045c1 mov      qword ptr [rbx + 0x140], rax
2045c8 imul     r9, r10
2045cc add      r9, rdi
2045cf mov      qword ptr [rbx + 0x1b0], r9
2045d6 lea      rax, [r8 + 2]
2045da mov      qword ptr [rbx + 0x1b8], rax
2045e1 shr      r9, 0x1b
2045e5 movzx    eax, r9b
2045e9 mov      byte ptr [rbx + 0x160], al
2045ef imul     rax, rsi
2045f3 xor      rax, rbp
2045f6 xor      rax, r11
2045f9 mov      rcx, rax
2045fc xor      rcx, 0xfe1ab
204603 add      rax, 0xfe1ab
204609 test     r15b, r15b
20460c cmove    rax, rcx
204610 mov      qword ptr [rbx + 0xf0], rax
204617 mov      rcx, qword ptr [rsp + 0x160]
20461f xor      rcx, rsp
204622 call     0x1403a3dc0
204627 mov      rbx, qword ptr [rsp + 0x1c8]
20462f add      rsp, 0x170
204636 pop      r15
204638 pop      r14
20463a pop      r13
20463c pop      r12
20463e pop      rdi
20463f pop      rsi
204640 pop      rbp
204641 ret      
204642 mov      edx, 0x43414e59
204647 mov      rcx, rbx
20464a call     0x1401ed830
20464f nop      
204650 call     0x1403a17cc
204655 nop      
204656 mov      edx, 0x54485254
20465b mov      rcx, rbx
20465e call     0x1401ed830
204663 int3     
