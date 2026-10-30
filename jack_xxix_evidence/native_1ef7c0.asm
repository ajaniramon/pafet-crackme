1ef7c0 push     rbx
1ef7c2 push     rbp
1ef7c3 push     rsi
1ef7c4 push     rdi
1ef7c5 push     r12
1ef7c7 push     r13
1ef7c9 push     r14
1ef7cb push     r15
1ef7cd sub      rsp, 0x78
1ef7d1 mov      rax, qword ptr [rcx + 0x238]
1ef7d8 mov      rbx, rcx
1ef7db mov      r15, qword ptr [rcx + 0xd0]
1ef7e2 mov      r12, qword ptr [rcx + 0x10]
1ef7e6 mov      rbp, qword ptr [rcx + 0x230]
1ef7ed mov      qword ptr [rsp + 0x38], rax
1ef7f2 mov      rax, qword ptr [rcx + 0x1a0]
1ef7f9 mov      qword ptr [rsp + 0x40], rax
1ef7fe mov      rax, qword ptr [rcx + 0x240]
1ef805 mov      qword ptr [rsp + 0x48], rax
1ef80a mov      rax, qword ptr [rcx + 0x248]
1ef811 mov      qword ptr [rsp + 0x50], rax
1ef816 mov      rax, qword ptr [rcx + 0x1a8]
1ef81d mov      qword ptr [rsp + 0x58], rax
1ef822 mov      rax, qword ptr [rcx + 0xd8]
1ef829 mov      qword ptr [rsp + 0x60], rax
1ef82e mov      rax, qword ptr [rcx + 0xe0]
1ef835 mov      qword ptr [rsp + 0x68], rax
1ef83a mov      eax, dword ptr [rcx + 0x1f4]
1ef840 mov      dword ptr [rsp + 0xd0], eax
1ef847 movzx    eax, byte ptr [rcx + 0x1f8]
1ef84e mov      byte ptr [rsp + 0xc0], al
1ef855 movzx    eax, byte ptr [rcx + 0xe8]
1ef85c mov      byte ptr [rsp + 0xc8], al
1ef863 mov      qword ptr [rsp + 0x20], r15
1ef868 mov      qword ptr [rsp + 0x30], r12
1ef86d call     0x1401ee1c0
1ef872 movsxd   r9, dword ptr [rbx + 0x1f4]
1ef879 movabs   rsi, 0xff51afd7ed558ccd
1ef883 mov      r8, qword ptr [rbx + 0x228]
1ef88a movabs   rdi, 0x9e3779b97f4a7c15
1ef894 mov      r11, qword ptr [rbx + 0x340]
1ef89b mov      rdx, r9
1ef89e mov      dword ptr [rsp + 0xd8], eax
1ef8a5 movabs   r14, 0xc4ceb9fe1a85ec53
1ef8af imul     rdx, rdi
1ef8b3 movabs   rax, 0x76f411471069a4cc
1ef8bd sub      rdx, rax
1ef8c0 mov      rax, r8
1ef8c3 xor      rax, 0x504e5452
1ef8c9 xor      rdx, r11
1ef8cc mov      rcx, rdx
1ef8cf shr      rcx, 0x21
1ef8d3 xor      rcx, rdx
1ef8d6 imul     rcx, rsi
1ef8da mov      r10, rcx
1ef8dd shr      r10, 0x21
1ef8e1 xor      r10, rcx
1ef8e4 mov      rcx, rax
1ef8e7 shr      rcx, 0x21
1ef8eb xor      rcx, rax
1ef8ee movabs   rax, 0xd6e8feb86659fd93
1ef8f8 imul     rcx, rsi
1ef8fc imul     r10, r14
1ef900 mov      rdx, rcx
1ef903 shr      rdx, 0x21
1ef907 xor      rdx, rcx
1ef90a lea      ecx, [r9 + 1]
1ef90e imul     rcx, rax
1ef912 imul     rdx, r14
1ef916 movsxd   rax, dword ptr [rbx + 0x11e0]
1ef91d imul     rax, rdi
1ef921 xor      rcx, rax
1ef924 mov      rax, rdx
1ef927 xor      rax, r10
1ef92a shr      rax, 0x21
1ef92e xor      rcx, rax
1ef931 lea      rax, [r8*8]
1ef939 xor      rcx, rax
1ef93c xor      rcx, qword ptr [rbx + 0x11e8]
1ef943 xor      rcx, qword ptr [rbx + 0x20]
1ef947 xor      rcx, r8
1ef94a xor      rcx, r11
1ef94d xor      rcx, rdx
1ef950 xor      rcx, r10
1ef953 xor      rcx, qword ptr [rbx + 0x348]
1ef95a mov      rax, rcx
1ef95d shr      rax, 0x21
1ef961 xor      rax, rcx
1ef964 imul     rax, rsi
1ef968 mov      rcx, rax
1ef96b mov      r12d, dword ptr [rsp + 0xd0]
1ef973 shr      rcx, 0x21
1ef977 xor      rcx, rax
1ef97a imul     rcx, r14
1ef97e lea      eax, [r12 + 1]
1ef983 mov      dword ptr [rbx + 0x1f4], eax
1ef989 mov      r13, rcx
1ef98c shr      r13, 0x21
1ef990 xor      r13, rcx
1ef993 cmove    r13, rdi
1ef997 mov      rax, r13
1ef99a mov      qword ptr [rsp + 0x28], r13
1ef99f xor      rax, 0x464f524d
1ef9a5 mov      qword ptr [rbx + 0x228], r13
1ef9ac mov      rcx, rax
1ef9af shr      rcx, 0x21
1ef9b3 xor      rcx, rax
1ef9b6 imul     rcx, rsi
1ef9ba mov      rdx, rcx
1ef9bd shr      rdx, 0x21
1ef9c1 xor      rdx, rcx
1ef9c4 imul     rdx, r14
1ef9c8 mov      rax, rdx
1ef9cb shr      rax, 0x21
1ef9cf xor      al, dl
1ef9d1 and      al, 1
1ef9d3 mov      byte ptr [rbx + 0x1f8], al
1ef9d9 mov      rax, r13
1ef9dc shr      rax, 0x21
1ef9e0 xor      rax, r13
1ef9e3 imul     rax, rsi
1ef9e7 mov      rcx, rax
1ef9ea shr      rcx, 0x21
1ef9ee xor      rcx, rax
1ef9f1 imul     rcx, r14
1ef9f5 mov      rax, rcx
1ef9f8 shr      rax, 0x21
1ef9fc xor      rax, rcx
1ef9ff mov      qword ptr [rbx + 0x230], rax
1efa06 mov      rax, r13
1efa09 xor      rax, 0x4c495645
1efa0f mov      rcx, rax
1efa12 shr      rcx, 0x21
1efa16 xor      rcx, rax
1efa19 imul     rcx, rsi
1efa1d mov      rdx, rcx
1efa20 shr      rdx, 0x21
1efa24 xor      rdx, rcx
1efa27 imul     rdx, r14
1efa2b mov      rax, rdx
1efa2e shr      rax, 0x21
1efa32 xor      rax, rdx
1efa35 or       rax, 1
1efa39 mov      qword ptr [rbx + 0x238], rax
1efa40 mov      rax, r13
1efa43 xor      rax, 0x544b5231
1efa49 mov      rcx, rax
1efa4c shr      rcx, 0x21
1efa50 xor      rcx, rax
1efa53 imul     rcx, rsi
1efa57 mov      rdx, rcx
1efa5a shr      rdx, 0x21
1efa5e xor      rdx, rcx
1efa61 imul     rdx, r14
1efa65 mov      rax, rdx
1efa68 shr      rax, 0x21
1efa6c xor      rax, rdx
1efa6f or       rax, 1
1efa73 mov      qword ptr [rbx + 0x1a0], rax
1efa7a mov      rax, r13
1efa7d xor      rax, 0x53544b4b
1efa83 mov      rcx, rax
1efa86 shr      rcx, 0x21
1efa8a xor      rcx, rax
1efa8d imul     rcx, rsi
1efa91 mov      rdx, rcx
1efa94 shr      rdx, 0x21
1efa98 xor      rdx, rcx
1efa9b imul     rdx, r14
1efa9f mov      rax, rdx
1efaa2 shr      rax, 0x21
1efaa6 xor      rax, rdx
1efaa9 mov      qword ptr [rbx + 0x240], rax
1efab0 mov      rax, r13
1efab3 xor      rax, 0x53544b53
1efab9 mov      rcx, rax
1efabc shr      rcx, 0x21
1efac0 xor      rcx, rax
1efac3 imul     rcx, rsi
1efac7 mov      rdx, rcx
1efaca shr      rdx, 0x21
1eface xor      rdx, rcx
1efad1 imul     rdx, r14
1efad5 mov      rax, rdx
1efad8 shr      rax, 0x21
1efadc xor      rax, rdx
1efadf or       rax, 1
1efae3 mov      qword ptr [rbx + 0x248], rax
1efaea mov      rax, r13
1efaed xor      rax, 0x544b5232
1efaf3 mov      rcx, rax
1efaf6 shr      rcx, 0x21
1efafa xor      rcx, rax
1efafd imul     rcx, rsi
1efb01 mov      rdx, rcx
1efb04 shr      rdx, 0x21
1efb08 xor      rdx, rcx
1efb0b imul     rdx, r14
1efb0f mov      rax, rdx
1efb12 shr      rax, 0x21
1efb16 xor      rax, rdx
1efb19 or       rax, 1
1efb1d mov      qword ptr [rbx + 0x1a8], rax
1efb24 mov      rax, r13
1efb27 xor      rax, 0x4354524c
1efb2d mov      rcx, rax
1efb30 shr      rcx, 0x21
1efb34 xor      rcx, rax
1efb37 imul     rcx, rsi
1efb3b mov      rdx, rcx
1efb3e shr      rdx, 0x21
1efb42 xor      rdx, rcx
1efb45 imul     rdx, r14
1efb49 mov      rax, rdx
1efb4c shr      rax, 0x21
1efb50 xor      rax, rdx
1efb53 mov      qword ptr [rbx + 0xd0], rax
1efb5a mov      rax, r13
1efb5d xor      rax, 0x43545253
1efb63 mov      rcx, rax
1efb66 shr      rcx, 0x21
1efb6a xor      rcx, rax
1efb6d imul     rcx, rsi
1efb71 mov      rdx, rcx
1efb74 shr      rdx, 0x21
1efb78 xor      rdx, rcx
1efb7b imul     rdx, r14
1efb7f mov      rax, rdx
1efb82 shr      rax, 0x21
1efb86 xor      rax, rdx
1efb89 or       rax, 1
1efb8d mov      qword ptr [rbx + 0xd8], rax
1efb94 mov      rax, r13
1efb97 xor      rax, 0x43545254
1efb9d mov      rcx, rax
1efba0 shr      rcx, 0x21
1efba4 xor      rcx, rax
1efba7 imul     rcx, rsi
1efbab mov      rdx, rcx
1efbae shr      rdx, 0x21
1efbb2 xor      rdx, rcx
1efbb5 imul     rdx, r14
1efbb9 mov      rax, rdx
1efbbc shr      rax, 0x21
1efbc0 xor      rax, rdx
1efbc3 or       rax, 1
1efbc7 mov      qword ptr [rbx + 0xe0], rax
1efbce mov      rax, r13
1efbd1 xor      rax, 0x4354464d
1efbd7 mov      rcx, rax
1efbda shr      rcx, 0x21
1efbde xor      rcx, rax
1efbe1 mov      rdi, qword ptr [rbx + 0x1c0]
1efbe8 mov      r15, qword ptr [rsp + 0x40]
1efbed imul     rcx, rsi
1efbf1 mov      rdx, rcx
1efbf4 shr      rdx, 0x21
1efbf8 xor      rdx, rcx
1efbfb imul     rdx, r14
1efbff lea      r14, [rbx + 0xb65]
1efc06 mov      rax, rdx
1efc09 shr      rax, 0x21
1efc0d xor      al, dl
1efc0f and      al, 1
1efc11 mov      byte ptr [rbx + 0xe8], al
1efc17 mov      rax, r13
1efc1a mov      r13, qword ptr [rsp + 0x38]
1efc1f shr      rax, 0x11
1efc23 and      eax, 0x3f
1efc26 add      eax, 0x30
1efc29 xor      esi, esi
1efc2b mov      dword ptr [rbx + 0x1fc], eax
1efc31 mov      r11d, esi
1efc34 movzx    esi, byte ptr [rsp + 0xc0]
1efc3c nop      dword ptr [rax]
1efc40 movzx    r9d, byte ptr [r14]
1efc44 lea      ecx, [r11 + r12]
1efc48 mov      rax, qword ptr [rbx + 0x180]
1efc4f lea      r14, [r14 + 1]
1efc53 mov      r10d, dword ptr [rbx + 0x1f4]
1efc5a and      ecx, 1
1efc5d shl      ecx, 8
1efc60 add      r10d, r11d
1efc63 add      ecx, r11d
1efc66 and      r10d, 1
1efc6a imul     r9, r15
1efc6e mov      rdx, qword ptr [rax + rcx*8]
1efc72 mov      r8d, r11d
1efc75 and      r8d, 0x1ff
1efc7c mov      rcx, rdx
1efc7f mov      eax, r8d
1efc82 imul     rax, r13
1efc86 xor      r9, rax
1efc89 mov      rax, r9
1efc8c xor      r9, rdx
1efc8f xor      rax, rbp
1efc92 xor      r9, rbp
1efc95 sub      rcx, rax
1efc98 mov      rax, qword ptr [rbx + 0x1b0]
1efc9f test     sil, sil
1efca2 cmovne   r9, rcx
1efca6 inc      qword ptr [rbx + 0x1b8]
1efcad movabs   rcx, 0x9e3779b97f4a7c15
1efcb7 imul     rax, rcx
1efcbb movabs   rcx, 0x2545f4914f6cdd1d
1efcc5 add      rax, rcx
1efcc8 mov      qword ptr [rbx + 0x1b0], rax
1efccf shr      rax, 0x1b
1efcd3 movzx    ecx, al
1efcd6 mov      byte ptr [r14 - 1], cl
1efcda imul     rcx, qword ptr [rbx + 0x1a0]
1efce2 imul     r8, qword ptr [rbx + 0x238]
1efcea xor      rcx, r8
1efced xor      rcx, qword ptr [rbx + 0x230]
1efcf4 mov      rax, rcx
1efcf7 xor      rax, r9
1efcfa cmp      byte ptr [rbx + 0x1f8], 0
1efd01 lea      rdx, [rcx + r9]
1efd05 cmove    rdx, rax
1efd09 mov      rax, qword ptr [rbx + 0x180]
1efd10 shl      r10d, 8
1efd14 xor      rdi, rdx
1efd17 add      r10d, r11d
1efd1a inc      r11d
1efd1d mov      qword ptr [rax + r10*8], rdx
1efd21 cmp      r11d, 0x100
1efd28 jl       0x1401efc40
1efd2e mov      eax, dword ptr [rsp + 0xd8]
1efd35 mov      esi, 0
1efd3a test     eax, eax
1efd3c jns      0x1401efd42
1efd3e mov      eax, esi
1efd40 jmp      0x1401efd4c
1efd42 mov      ecx, 0x3ff
1efd47 cmp      eax, ecx
1efd49 cmovg    eax, ecx
1efd4c mov      r15, qword ptr [rsp + 0x20]
1efd51 movsxd   r14, eax
1efd54 test     eax, eax
1efd56 jle      0x1401efe46
1efd5c mov      r8, qword ptr [rbx + 0x188]
1efd63 lea      r11, [rbx + 0xd65]
1efd6a mov      r15, qword ptr [rsp + 0x48]
1efd6f mov      r9, rsi
1efd72 mov      r12, qword ptr [rsp + 0x50]
1efd77 movabs   rsi, 0x9e3779b97f4a7c15
1efd81 mov      r13, qword ptr [rsp + 0x58]
1efd86 mov      ebp, 1
1efd8b nop      dword ptr [rax + rax]
1efd90 movzx    ecx, byte ptr [r11]
1efd94 imul     rcx, r13
1efd98 movsxd   r10, ebp
1efd9b mov      rax, r10
1efd9e imul     rax, r12
1efda2 xor      rcx, rax
1efda5 xor      rcx, r15
1efda8 mov      rdx, rcx
1efdab shr      rcx, 0x3a
1efdaf xor      rdx, qword ptr [r9 + r8]
1efdb3 test     ecx, ecx
1efdb5 je       0x1401efdba
1efdb7 ror      rdx, cl
1efdba mov      rax, qword ptr [rbx + 0x1b0]
1efdc1 movabs   rcx, 0x2545f4914f6cdd1d
1efdcb inc      qword ptr [rbx + 0x1b8]
1efdd2 imul     rax, rsi
1efdd6 add      rax, rcx
1efdd9 mov      qword ptr [rbx + 0x1b0], rax
1efde0 shr      rax, 0x1b
1efde4 movzx    r8d, al
1efde8 mov      byte ptr [r11], r8b
1efdeb imul     r8, qword ptr [rbx + 0x1a8]
1efdf3 imul     r10, qword ptr [rbx + 0x248]
1efdfb xor      r8, r10
1efdfe xor      r8, qword ptr [rbx + 0x240]
1efe05 mov      rax, r8
1efe08 shr      rax, 0x3a
1efe0c test     eax, eax
1efe0e je       0x1401efe15
1efe10 mov      ecx, eax
1efe12 rol      rdx, cl
1efe15 mov      rax, qword ptr [rbx + 0x188]
1efe1c xor      rdx, r8
1efe1f inc      ebp
1efe21 inc      r11
1efe24 mov      qword ptr [r9 + rax], rdx
1efe28 mov      r8, qword ptr [rbx + 0x188]
1efe2f xor      rdi, qword ptr [r9 + r8]
1efe33 add      r9, 8
1efe37 sub      r14, 1
1efe3b jne      0x1401efd90
1efe41 mov      r15, qword ptr [rsp + 0x20]
1efe46 mov      r12, qword ptr [rsp + 0x60]
1efe4b lea      r10, [rbx + 0x161]
1efe52 mov      r13, qword ptr [rsp + 0x68]
1efe57 lea      r11, [rbx + 0xf8]
1efe5e movzx    esi, byte ptr [rsp + 0xc8]
1efe66 mov      ebp, 2
1efe6b lea      r14d, [rbp + 5]
1efe6f nop      
1efe70 movzx    r9d, byte ptr [r10 - 1]
1efe75 lea      r8, [rbp - 1]
1efe79 mov      rcx, qword ptr [r11 - 8]
1efe7d lea      r11, [r11 + 0x10]
1efe81 imul     r9, r13
1efe85 mov      rax, r8
1efe88 lea      r10, [r10 + 2]
1efe8c imul     rax, r12
1efe90 xor      r9, rax
1efe93 mov      rax, r9
1efe96 xor      r9, qword ptr [r11 - 0x18]
1efe9a xor      rax, r15
1efe9d xor      r9, r15
1efea0 sub      rcx, rax
1efea3 mov      rax, qword ptr [rbx + 0x1b0]
1efeaa test     sil, sil
1efead cmovne   r9, rcx
1efeb1 inc      qword ptr [rbx + 0x1b8]
1efeb8 movabs   rcx, 0x9e3779b97f4a7c15
1efec2 imul     rax, rcx
1efec6 movabs   rcx, 0x2545f4914f6cdd1d
1efed0 add      rax, rcx
1efed3 mov      qword ptr [rbx + 0x1b0], rax
1efeda shr      rax, 0x1b
1efede movzx    ecx, al
1efee1 mov      byte ptr [r10 - 3], cl
1efee5 imul     rcx, qword ptr [rbx + 0xe0]
1efeed imul     r8, qword ptr [rbx + 0xd8]
1efef5 xor      rcx, r8
1efef8 xor      rcx, qword ptr [rbx + 0xd0]
1efeff mov      rax, rcx
1eff02 add      rcx, r9
1eff05 xor      rax, r9
1eff08 cmp      byte ptr [rbx + 0xe8], 0
1eff0f cmove    rcx, rax
1eff13 mov      rax, rbp
1eff16 mov      qword ptr [r11 - 0x18], rcx
1eff1a xor      rdi, rcx
1eff1d movzx    r8d, byte ptr [r10 - 2]
1eff22 mov      rcx, qword ptr [r11 - 0x10]
1eff26 imul     rax, r12
1eff2a imul     r8, r13
1eff2e xor      r8, rax
1eff31 mov      rax, r8
1eff34 xor      r8, qword ptr [r11 - 0x10]
1eff38 xor      rax, r15
1eff3b xor      r8, r15
1eff3e sub      rcx, rax
1eff41 mov      rax, qword ptr [rbx + 0x1b0]
1eff48 test     sil, sil
1eff4b cmovne   r8, rcx
1eff4f movabs   rcx, 0x9e3779b97f4a7c15
1eff59 imul     rax, rcx
1eff5d movabs   rcx, 0x2545f4914f6cdd1d
1eff67 add      rcx, rax
1eff6a mov      rax, rbp
1eff6d mov      qword ptr [rbx + 0x1b0], rcx
1eff74 inc      qword ptr [rbx + 0x1b8]
1eff7b shr      rcx, 0x1b
1eff7f movzx    edx, cl
1eff82 mov      byte ptr [r10 - 2], dl
1eff86 imul     rax, qword ptr [rbx + 0xd8]
1eff8e imul     rdx, qword ptr [rbx + 0xe0]
1eff96 xor      rdx, rax
1eff99 xor      rdx, qword ptr [rbx + 0xd0]
1effa0 mov      rax, rdx
1effa3 xor      rax, r8
1effa6 cmp      byte ptr [rbx + 0xe8], 0
1effad lea      rcx, [rdx + r8]
1effb1 cmove    rcx, rax
1effb5 add      rbp, 2
1effb9 xor      rdi, rcx
1effbc mov      qword ptr [r11 - 0x10], rcx
1effc0 sub      r14, 1
1effc4 jne      0x1401efe70
1effca mov      r13, qword ptr [rsp + 0x28]
1effcf movabs   rbp, 0xff51afd7ed558ccd
1effd9 mov      r12, qword ptr [rsp + 0x30]
1effde mov      rax, r13
1effe1 xor      rax, 0x54524559
1effe7 movabs   r14, 0xc4ceb9fe1a85ec53
1efff1 mov      rcx, rax
1efff4 mov      esi, 0
1efff9 shr      rcx, 0x21
1efffd xor      rcx, rax
1f0000 imul     rcx, rbp
1f0004 mov      rdx, rcx
1f0007 shr      rdx, 0x21
1f000b xor      rdx, rcx
1f000e imul     rdx, r14
1f0012 mov      rax, rdx
1f0015 shr      rax, 0x21
1f0019 xor      rax, rdx
1f001c or       rax, 1
1f0020 cmp      dword ptr [rbx + 0x394], 0
1f0027 mov      qword ptr [rbx + 0x10], rax
1f002b jbe      0x1401f0069
1f002d nop      dword ptr [rax]
1f0030 cmp      esi, 0x20
1f0033 jae      0x1401f0069
1f0035 mov      ecx, esi
1f0037 mov      eax, r12d
1f003a inc      esi
1f003c xor      eax, dword ptr [rbx + rcx*8 + 0x398]
1f0043 xor      eax, dword ptr [rbx + 0x10]
1f0046 mov      dword ptr [rbx + rcx*8 + 0x398], eax
1f004d mov      eax, r12d
1f0050 xor      eax, dword ptr [rbx + rcx*8 + 0x39c]
1f0057 xor      eax, dword ptr [rbx + 0x10]
1f005a mov      dword ptr [rbx + rcx*8 + 0x39c], eax
1f0061 cmp      esi, dword ptr [rbx + 0x394]
1f0067 jb       0x1401f0030
1f0069 mov      rax, qword ptr gs:[0x58]
1f0072 mov      edx, 0x610
1f0077 mov      rcx, qword ptr [rax]
1f007a cmp      dword ptr [rdx + rcx + 0x524], 0
1f0082 je       0x1401f008c
1f0084 mov      rcx, r13
1f0087 call     0x1401eeca0
1f008c mov      ecx, dword ptr [rbx + 0x1f4]
1f0092 xor      rdi, r13
1f0095 inc      qword ptr [rbx + 0x170]
1f009c inc      ecx
1f009e movabs   rax, 0x9e3779b97f4a7c15
1f00a8 imul     rcx, rax
1f00ac mov      eax, dword ptr [rbx + 0x1178]
1f00b2 xor      rcx, rax
1f00b5 xor      rcx, r13
1f00b8 xor      r13, qword ptr [rbx + 0x348]
1f00bf mov      rax, rcx
1f00c2 shr      rax, 0x21
1f00c6 xor      rax, rcx
1f00c9 imul     rax, rbp
1f00cd mov      rcx, rax
1f00d0 shr      rcx, 0x21
1f00d4 xor      rcx, rax
1f00d7 imul     rcx, r14
1f00db mov      rax, rcx
1f00de shr      rax, 0x21
1f00e2 xor      eax, ecx
1f00e4 mov      dword ptr [rbx + 0x1178], eax
1f00ea mov      rax, rdi
1f00ed shr      rax, 0x21
1f00f1 xor      rax, rdi
1f00f4 imul     rax, rbp
1f00f8 mov      rcx, rax
1f00fb shr      rcx, 0x21
1f00ff xor      rcx, rax
1f0102 imul     rcx, r14
1f0106 mov      rax, rcx
1f0109 shr      rax, 0x21
1f010d xor      rax, rcx
1f0110 mov      qword ptr [rbx + 0x1c0], rax
1f0117 mov      rax, r13
1f011a shr      rax, 0x21
1f011e xor      rax, r13
1f0121 imul     rax, rbp
1f0125 mov      rcx, rax
1f0128 shr      rcx, 0x21
1f012c xor      rcx, rax
1f012f imul     rcx, r14
1f0133 mov      rax, rcx
1f0136 shr      rax, 0x21
1f013a xor      rax, rcx
1f013d inc      qword ptr [rbx + 0x208]
1f0144 mov      qword ptr [rbx + 0x348], rax
1f014b add      rsp, 0x78
1f014f pop      r15
1f0151 pop      r14
1f0153 pop      r13
1f0155 pop      r12
1f0157 pop      rdi
1f0158 pop      rsi
1f0159 pop      rbp
1f015a pop      rbx
1f015b ret      
