21d530 push     r13
21d532 push     r14
21d534 push     r15
21d536 sub      rsp, 0x40
21d53a movsxd   rax, dword ptr [rcx + 0x11e0]
21d541 mov      r14, rcx
21d544 mov      r15d, edx
21d547 movabs   rcx, 0x33e684c9b3f98733
21d551 imul     rax, rcx
21d555 movabs   rcx, 0x91bf0e023227030c
21d55f mov      r13, r8
21d562 xor      rax, qword ptr [r14 + 0x28]
21d566 mov      qword ptr [rsp + 0x60], rax
21d56b mov      rax, qword ptr [rsp + 0x60]
21d570 movsxd   rax, dword ptr [r14 + 0x11e0]
21d577 imul     rax, rcx
21d57b movabs   rcx, 0x7777905cb16c8f19
21d585 xor      rax, qword ptr [r14 + 0x28]
21d589 mov      qword ptr [rsp + 0x60], rax
21d58e mov      rax, qword ptr [rsp + 0x60]
21d593 movsxd   rax, dword ptr [r14 + 0x11e0]
21d59a imul     rax, rcx
21d59e movabs   rcx, 0x5e4978b3c6e8eca4
21d5a8 xor      rax, qword ptr [r14 + 0x28]
21d5ac mov      qword ptr [rsp + 0x60], rax
21d5b1 mov      rax, qword ptr [rsp + 0x60]
21d5b6 mov      rax, qword ptr [r14 + 0x2f0]
21d5bd mov      rax, qword ptr [r14 + 0x2f0]
21d5c4 sub      rax, rcx
21d5c7 mov      rcx, rax
21d5ca shr      rcx, 0x21
21d5ce xor      rcx, rax
21d5d1 movabs   rax, 0xff51afd7ed558ccd
21d5db imul     rcx, rax
21d5df movabs   rax, 0xc4ceb9fe1a85ec53
21d5e9 mov      rdx, rcx
21d5ec shr      rdx, 0x21
21d5f0 xor      rdx, rcx
21d5f3 mov      rcx, r14
21d5f6 imul     rdx, rax
21d5fa mov      rax, rdx
21d5fd shr      rax, 0x21
21d601 xor      rdx, rax
21d604 mov      rax, qword ptr [r14 + 0x2f0]
21d60b shr      rax, 3
21d60f xor      rax, rdx
21d612 mov      qword ptr [r14 + 0x2f0], rax
21d619 call     0x1401f1c70
21d61e xor      edx, edx
21d620 cmp      eax, 0x11
21d623 mov      ecx, edx
21d625 cmovb    ecx, eax
21d628 cmp      ecx, 0x11
21d62b cmovae   ecx, edx
21d62e mov      eax, ecx
21d630 lea      rcx, [rip - 0x21d637]
21d637 mov      r8d, dword ptr [rcx + rax*4 + 0x3ead00]
21d63f mov      eax, 0xaaaaaaab
21d644 mul      r8d
21d647 mov      r9, qword ptr [rcx + r8*8 + 0x3ead80]
21d64f mov      rcx, qword ptr [rcx + r8*8 + 0x3eae40]
21d657 shr      edx, 1
21d659 lea      eax, [rdx + rdx*2]
21d65c sub      r8d, eax
21d65f je       0x14021d671
21d661 cmp      r8d, 1
21d665 je       0x14021d66c
21d667 sub      rcx, r9
21d66a jmp      0x14021d674
21d66c add      rcx, r9
21d66f jmp      0x14021d674
21d671 xor      rcx, r9
21d674 mov      rdx, rcx
21d677 mov      rcx, r14
21d67a call     0x1401ee820
21d67f mov      rax, qword ptr [r14 + 0x2f0]
21d686 test     r15d, r15d
21d689 jns      0x14021e245
21d68f cmp      qword ptr [r14 + 0x11b8], r13
21d696 jne      0x14021e253
21d69c movsxd   rax, dword ptr [r14 + 0x11e0]
21d6a3 movabs   rcx, 0xf9b64ab524c872a5
21d6ad imul     rax, rcx
21d6b1 mov      rcx, r14
21d6b4 xor      rax, qword ptr [r14 + 0x28]
21d6b8 mov      qword ptr [rsp + 0x60], rax
21d6bd mov      rax, qword ptr [rsp + 0x60]
21d6c2 call     0x1401ee450
21d6c7 test     eax, eax
21d6c9 jne      0x14021e23a
21d6cf cmp      dword ptr [r14 + 0xad0], eax
21d6d6 jne      0x14021e23a
21d6dc mov      r8, qword ptr [r14 + 0xf0]
21d6e3 movzx    ecx, byte ptr [r14 + 0x160]
21d6eb mov      rax, r8
21d6ee mov      r10, qword ptr [r14 + 0xe0]
21d6f5 mov      r11, qword ptr [r14 + 0xd8]
21d6fc mov      r9, qword ptr [r14 + 0x1b0]
21d703 imul     rcx, r10
21d707 mov      qword ptr [rsp + 0x68], rbx
21d70c mov      rbx, qword ptr [r14 + 0xd0]
21d713 xor      rcx, rbx
21d716 mov      qword ptr [rsp + 0x38], rbp
21d71b xor      rcx, r11
21d71e mov      qword ptr [rsp + 0x30], rsi
21d723 mov      rsi, qword ptr [r14 + 0x1b8]
21d72a xor      rax, rcx
21d72d sub      r8, rcx
21d730 mov      qword ptr [rsp + 0x28], rdi
21d735 movzx    edi, byte ptr [r14 + 0xe8]
21d73d movabs   rbp, 0x2545f4914f6cdd1d
21d747 test     dil, dil
21d74a mov      qword ptr [rsp + 0x20], r12
21d74f movabs   r12, 0x9e3779b97f4a7c15
21d759 cmove    r8, rax
21d75d inc      rsi
21d760 imul     r9, r12
21d764 mov      qword ptr [r14 + 0x1b8], rsi
21d76b add      r9, rbp
21d76e mov      qword ptr [r14 + 0x1b0], r9
21d775 mov      rax, r9
21d778 shr      rax, 0x1b
21d77c movzx    edx, al
21d77f mov      byte ptr [r14 + 0x160], dl
21d786 imul     rdx, r10
21d78a xor      rdx, rbx
21d78d xor      rdx, r11
21d790 mov      rcx, rdx
21d793 xor      rcx, r8
21d796 test     dil, dil
21d799 lea      rax, [rdx + r8]
21d79d cmove    rax, rcx
21d7a1 mov      qword ptr [r14 + 0xf0], rax
21d7a8 cmp      r8d, 0x2a0025
21d7af jne      0x14021e221
21d7b5 mov      eax, r15d
21d7b8 btr      eax, 0x1f
21d7bc cmp      eax, 2
21d7bf jae      0x14021d80b
21d7c1 imul     r9, r12
21d7c5 lea      rax, [rsi + 1]
21d7c9 mov      qword ptr [r14 + 0x1b8], rax
21d7d0 add      r9, rbp
21d7d3 mov      qword ptr [r14 + 0x1b0], r9
21d7da shr      r9, 0x1b
21d7de movzx    eax, r9b
21d7e2 mov      byte ptr [r14 + 0x160], al
21d7e9 imul     rax, r10
21d7ed xor      rax, rbx
21d7f0 xor      rax, r11
21d7f3 mov      rcx, rax
21d7f6 add      rax, 0x85b36
21d7fc xor      rcx, 0x85b36
21d803 test     dil, dil
21d806 jmp      0x14021e216
21d80b mov      rcx, r14
21d80e call     0x1401ee070
21d813 movzx    ecx, byte ptr [r14 + 0x4ad]
21d81b movabs   r8, 0xff51afd7ed558ccd
21d825 mov      r11, qword ptr [r14 + 0xe0]
21d82c movabs   r9, 0xc4ceb9fe1a85ec53
21d836 movzx    r10d, byte ptr [r14 + 0xe8]
21d83e mov      eax, eax
21d840 xor      rcx, rax
21d843 xor      rcx, qword ptr [r14 + 0x11e8]
21d84a mov      rax, rcx
21d84d shr      rax, 0x21
21d851 xor      rax, rcx
21d854 imul     rax, r8
21d858 mov      rcx, rax
21d85b shr      rcx, 0x21
21d85f xor      rcx, rax
21d862 mov      rax, qword ptr [r14 + 0x20]
21d866 xor      rax, qword ptr [r14 + 0x28]
21d86a imul     rcx, r9
21d86e mov      rdx, rcx
21d871 shr      rdx, 0x21
21d875 xor      rdx, rcx
21d878 xor      rax, rdx
21d87b mov      qword ptr [r14 + 0x11e8], rdx
21d882 mov      rcx, rax
21d885 shr      rcx, 0x21
21d889 xor      rcx, rax
21d88c imul     rcx, r8
21d890 mov      rdx, rcx
21d893 shr      rdx, 0x21
21d897 xor      rdx, rcx
21d89a imul     rdx, r9
21d89e mov      r9, qword ptr [r14 + 0xd0]
21d8a5 mov      rax, rdx
21d8a8 shr      rax, 0x21
21d8ac xor      rax, rdx
21d8af mov      qword ptr [r14 + 0x20], rax
21d8b3 mov      rdx, qword ptr [r14 + 0x138]
21d8ba movzx    ecx, byte ptr [r14 + 0x169]
21d8c2 mov      rax, qword ptr [r14 + 0xd8]
21d8c9 imul     rcx, r11
21d8cd lea      rbx, [rax + rax*4]
21d8d1 mov      rax, rdx
21d8d4 xor      rcx, r9
21d8d7 add      rbx, rbx
21d8da xor      rcx, rbx
21d8dd xor      rax, rcx
21d8e0 sub      rdx, rcx
21d8e3 test     r10b, r10b
21d8e6 cmove    rdx, rax
21d8ea mov      rax, qword ptr [r14 + 0x1b0]
21d8f1 inc      qword ptr [r14 + 0x1b8]
21d8f8 imul     rax, r12
21d8fc add      rax, rbp
21d8ff mov      qword ptr [r14 + 0x1b0], rax
21d906 shr      rax, 0x1b
21d90a movzx    r8d, al
21d90e mov      byte ptr [r14 + 0x169], r8b
21d915 imul     r8, r11
21d919 xor      r8, r9
21d91c xor      r8, rbx
21d91f mov      rcx, r8
21d922 xor      rcx, rdx
21d925 test     r10b, r10b
21d928 lea      rax, [r8 + rdx]
21d92c cmove    rax, rcx
21d930 mov      rcx, r14
21d933 mov      qword ptr [r14 + 0x138], rax
21d93a call     0x1401f0910
21d93f mov      rax, qword ptr [r14 + 0xd8]
21d946 mov      r11, qword ptr [r14 + 0xe0]
21d94d movzx    ecx, byte ptr [r14 + 0x168]
21d955 mov      r9, qword ptr [r14 + 0xd0]
21d95c mov      rdx, qword ptr [r14 + 0x130]
21d963 lea      rbx, [rax + rax*8]
21d967 movzx    r10d, byte ptr [r14 + 0xe8]
21d96f mov      rax, rdx
21d972 imul     rcx, r11
21d976 xor      rcx, r9
21d979 xor      rcx, rbx
21d97c xor      rax, rcx
21d97f sub      rdx, rcx
21d982 test     r10b, r10b
21d985 cmove    rdx, rax
21d989 mov      rax, qword ptr [r14 + 0x1b0]
21d990 inc      qword ptr [r14 + 0x1b8]
21d997 mov      rcx, rdx
21d99a imul     rax, r12
21d99e add      rax, rbp
21d9a1 mov      qword ptr [r14 + 0x1b0], rax
21d9a8 shr      rax, 0x1b
21d9ac movzx    r8d, al
21d9b0 mov      byte ptr [r14 + 0x168], r8b
21d9b7 imul     r8, r11
21d9bb xor      r8, r9
21d9be xor      r8, rbx
21d9c1 xor      rcx, r8
21d9c4 test     r10b, r10b
21d9c7 lea      rax, [rdx + r8]
21d9cb cmove    rax, rcx
21d9cf mov      rcx, r14
21d9d2 mov      qword ptr [r14 + 0x130], rax
21d9d9 call     0x1401f0910
21d9de mov      rcx, r14
21d9e1 call     0x1401ee070
21d9e6 cmp      eax, dword ptr [r14 + 0x1d8]
21d9ed jae      0x14021d9f9
21d9ef mov      edx, eax
21d9f1 mov      rcx, r14
21d9f4 call     0x1401f0910
21d9f9 mov      rsi, qword ptr [r14 + 0xe0]
21da00 mov      rbp, qword ptr [r14 + 0xd0]
21da07 mov      r11, qword ptr [r14 + 0x130]
21da0e movzx    edi, byte ptr [r14 + 0xe8]
21da16 mov      rax, r11
21da19 movzx    ecx, byte ptr [r14 + 0x168]
21da21 mov      rbx, qword ptr [r14 + 0xd8]
21da28 mov      r8, qword ptr [r14 + 0x1b8]
21da2f mov      r9, qword ptr [r14 + 0x1b0]
21da36 imul     rcx, rsi
21da3a lea      r10, [rbx + rbx*8]
21da3e xor      rcx, rbp
21da41 xor      rcx, r10
21da44 xor      rax, rcx
21da47 sub      r11, rcx
21da4a test     dil, dil
21da4d movabs   rcx, 0x2545f4914f6cdd1d
21da57 cmove    r11, rax
21da5b imul     r9, r12
21da5f add      r9, rcx
21da62 mov      rcx, r11
21da65 mov      rax, r9
21da68 shr      rax, 0x1b
21da6c movzx    edx, al
21da6f mov      byte ptr [r14 + 0x168], dl
21da76 imul     rdx, rsi
21da7a xor      rdx, rbp
21da7d xor      rdx, r10
21da80 xor      rcx, rdx
21da83 test     dil, dil
21da86 lea      rax, [r11 + rdx]
21da8a cmove    rax, rcx
21da8e mov      rcx, r11
21da91 mov      qword ptr [r14 + 0x130], rax
21da98 movabs   rax, 0x2545f4914f6cdd1d
21daa2 imul     r9, r12
21daa6 add      r9, rax
21daa9 lea      rax, [r8 + 2]
21daad mov      qword ptr [r14 + 0x1b8], rax
21dab4 mov      r8d, 0xd01
21daba mov      qword ptr [r14 + 0x1b0], r9
21dac1 lea      rax, [rbx + rbx*4]
21dac5 add      rax, rax
21dac8 shr      r9, 0x1b
21dacc movzx    edx, r9b
21dad0 mov      byte ptr [r14 + 0x169], dl
21dad7 imul     rdx, rsi
21dadb xor      rdx, rax
21dade xor      rdx, rbp
21dae1 xor      rcx, rdx
21dae4 test     dil, dil
21dae7 lea      rax, [r11 + rdx]
21daeb cmove    rax, rcx
21daef mov      rcx, r14
21daf2 mov      qword ptr [r14 + 0x138], rax
21daf9 movzx    edx, byte ptr [r14 + 0x4ad]
21db01 xor      rdx, qword ptr [r14 + 0x348]
21db08 call     0x1401f1520
21db0d mov      r8, qword ptr [r14 + 0x348]
21db14 movabs   rdi, 0xff51afd7ed558ccd
21db1e mov      rax, r8
21db21 movabs   rbp, 0xc4ceb9fe1a85ec53
21db2b xor      rax, qword ptr [r14 + 0x20]
21db2f mov      rcx, rax
21db32 shr      rcx, 0x21
21db36 xor      rcx, rax
21db39 imul     rcx, rdi
21db3d mov      rax, rcx
21db40 shr      rax, 0x21
21db44 xor      rax, rcx
21db47 imul     rax, rbp
21db4b mov      rdx, rax
21db4e shr      rdx, 0x21
21db52 xor      edx, eax
21db54 mov      ecx, edx
21db56 lea      eax, [rdx + 1]
21db59 imul     ecx, eax
21db5c xor      edx, eax
21db5e not      ecx
21db60 and      ecx, edx
21db62 test     cl, 1
21db65 je       0x14021dbd8
21db67 and      r8b, 3
21db6b cmp      r8b, 1
21db6f jne      0x14021dbd8
21db71 mov      rax, qword ptr [r14 + 0x1b0]
21db78 movabs   rcx, 0x2545f4914f6cdd1d
21db82 inc      qword ptr [r14 + 0x1b8]
21db89 imul     rax, r12
21db8d add      rax, rcx
21db90 mov      qword ptr [r14 + 0x1b0], rax
21db97 shr      rax, 0x1b
21db9b movzx    eax, al
21db9e mov      byte ptr [r14 + 0x160], al
21dba5 imul     rax, qword ptr [r14 + 0xe0]
21dbad xor      rax, qword ptr [r14 + 0xd8]
21dbb4 xor      rax, qword ptr [r14 + 0xd0]
21dbbb mov      rcx, rax
21dbbe add      rax, 0x3dd18f
21dbc4 xor      rcx, 0x3dd18f
21dbcb cmp      byte ptr [r14 + 0xe8], 0
21dbd3 jmp      0x14021e216
21dbd8 mov      rcx, r14
21dbdb call     0x1401ee070
21dbe0 mov      ebx, eax
21dbe2 cmp      eax, dword ptr [r14 + 0x1d8]
21dbe9 jb       0x14021dc52
21dbeb mov      rax, qword ptr [r14 + 0x1b0]
21dbf2 movabs   rcx, 0x2545f4914f6cdd1d
21dbfc inc      qword ptr [r14 + 0x1b8]
21dc03 imul     rax, r12
21dc07 add      rax, rcx
21dc0a mov      qword ptr [r14 + 0x1b0], rax
21dc11 shr      rax, 0x1b
21dc15 movzx    eax, al
21dc18 mov      byte ptr [r14 + 0x160], al
21dc1f imul     rax, qword ptr [r14 + 0xe0]
21dc27 xor      rax, qword ptr [r14 + 0xd8]
21dc2e xor      rax, qword ptr [r14 + 0xd0]
21dc35 mov      rcx, rax
21dc38 add      rax, 0xfe1ab
21dc3e xor      rcx, 0xfe1ab
21dc45 cmp      byte ptr [r14 + 0xe8], 0
21dc4d jmp      0x14021e216
21dc52 mov      edx, ebx
21dc54 mov      rcx, r14
21dc57 call     0x1401f25b0
21dc5c movsxd   rcx, dword ptr [r14 + 0x11e0]
21dc63 movabs   r8, 0xd6e8feb86659fd93
21dc6d mov      rdx, qword ptr [r14 + 0x20]
21dc71 mov      rax, rbx
21dc74 imul     rax, r8
21dc78 imul     rcx, r12
21dc7c rol      rdx, 0x11
21dc80 xor      rcx, qword ptr [r14 + 0x260]
21dc87 xor      rax, rcx
21dc8a xor      rax, rdx
21dc8d mov      rcx, rax
21dc90 shr      rcx, 0x21
21dc94 xor      rcx, rax
21dc97 imul     rcx, rdi
21dc9b mov      rdx, rcx
21dc9e shr      rdx, 0x21
21dca2 xor      rdx, rcx
21dca5 imul     rdx, rbp
21dca9 mov      rax, rdx
21dcac shr      rax, 0x21
21dcb0 xor      rax, rdx
21dcb3 mov      r10, rax
21dcb6 shr      r10, 0x1d
21dcba xor      r10, rax
21dcbd or       r10, 1
21dcc1 mov      rax, r10
21dcc4 mov      qword ptr [r14 + 0x260], r10
21dccb and      eax, 0x3ff
21dcd0 cmp      rax, 0x2c5
21dcd6 jne      0x14021dce7
21dcd8 mov      rcx, r14
21dcdb call     0x1402297e0
21dce0 mov      r10, qword ptr [r14 + 0x260]
21dce7 movzx    eax, r10b
21dceb and      al, 0x1f
21dced cmp      al, 0x15
21dcef jne      0x14021dddd
21dcf5 movsxd   rcx, dword ptr [r14 + 0x11e0]
21dcfc mov      rax, qword ptr [r14 + 0x20]
21dd00 xor      rcx, 0x5a5a
21dd07 rol      rax, 0x11
21dd0b imul     rcx, r12
21dd0f xor      rcx, r10
21dd12 xor      rcx, rax
21dd15 movabs   rax, 0x8f70feda99a6026d
21dd1f xor      rcx, rax
21dd22 mov      rax, rcx
21dd25 shr      rax, 0x21
21dd29 xor      rax, rcx
21dd2c imul     rax, rdi
21dd30 mov      rcx, rax
21dd33 shr      rcx, 0x21
21dd37 xor      rcx, rax
21dd3a imul     rcx, rbp
21dd3e mov      rax, rcx
21dd41 shr      rax, 0x21
21dd45 xor      rax, rcx
21dd48 mov      r9, rax
21dd4b shr      r9, 0x1d
21dd4f xor      r9, rax
21dd52 or       r9, 1
21dd56 mov      rax, r9
21dd59 mov      rcx, r9
21dd5c shr      rax, 8
21dd60 and      eax, 3
21dd63 shr      rcx, 0x28
21dd67 imul     r8, rax, 0x3e
21dd6b mov      eax, 0x8421085
21dd70 mul      ecx
21dd72 mov      eax, ecx
21dd74 sub      eax, edx
21dd76 shr      eax, 1
21dd78 add      eax, edx
21dd7a shr      eax, 5
21dd7d imul     eax, eax, 0x3e
21dd80 sub      ecx, eax
21dd82 mov      eax, ecx
21dd84 add      r8, rax
21dd87 mov      rax, qword ptr [r14 + 0x4b8]
21dd8e movsxd   rcx, dword ptr [rax + r8*4]
21dd92 movsxd   rax, dword ptr [r14 + 0x4c8]
21dd99 xor      rcx, rax
21dd9c add      rcx, qword ptr [r14 + 0x4c0]
21dda3 xor      rcx, r9
21dda6 mov      rax, rcx
21dda9 shr      rax, 0x21
21ddad xor      rax, rcx
21ddb0 imul     rax, rdi
21ddb4 mov      rcx, rax
21ddb7 shr      rcx, 0x21
21ddbb xor      rcx, rax
21ddbe imul     rcx, rbp
21ddc2 mov      rax, rcx
21ddc5 shr      rax, 0x21
21ddc9 xor      rax, rcx
21ddcc xor      rax, r10
21ddcf inc      qword ptr [r14 + 0x268]
21ddd6 mov      qword ptr [r14 + 0x260], rax
21dddd inc      dword ptr [r14 + 0x200]
21dde4 mov      eax, dword ptr [r14 + 0x200]
21ddeb cmp      eax, dword ptr [r14 + 0x1fc]
21ddf2 jb       0x14021de07
21ddf4 mov      rcx, r14
21ddf7 mov      dword ptr [r14 + 0x200], 0
21de02 call     0x1401ef7c0
21de07 mov      r8d, ebx
21de0a mov      edx, ebx
21de0c mov      rcx, r14
21de0f call     0x1401f0660
21de14 inc      qword ptr [r14 + 0x1b8]
21de1b mov      rcx, rbx
21de1e mov      r9, qword ptr [r14 + 0x1b0]
21de25 movabs   rax, 0x2545f4914f6cdd1d
21de2f imul     r9, r12
21de33 mov      r12, qword ptr [r14 + 0x1b8]
21de3a add      r9, rax
21de3d mov      qword ptr [r14 + 0x1b0], r9
21de44 mov      rax, r9
21de47 shr      rax, 0x1b
21de4b movzx    edx, al
21de4e mov      byte ptr [r14 + 0x168], dl
21de55 mov      r11, qword ptr [r14 + 0xe0]
21de5c mov      r10, qword ptr [r14 + 0xd8]
21de63 mov      rdi, qword ptr [r14 + 0xd0]
21de6a movzx    ebp, byte ptr [r14 + 0xe8]
21de72 imul     rdx, r11
21de76 lea      rax, [r10 + r10*8]
21de7a xor      rdx, rax
21de7d xor      rdx, rdi
21de80 xor      rcx, rdx
21de83 test     bpl, bpl
21de86 lea      rax, [rbx + rdx]
21de8a cmove    rax, rcx
21de8e inc      r12
21de91 mov      qword ptr [r14 + 0x130], rax
21de98 mov      rcx, qword ptr [r14 + 0x1d0]
21de9f mov      rax, qword ptr [r14 + 0x48]
21dea3 mov      qword ptr [rsp + 0x78], r12
21dea8 movzx    r8d, byte ptr [rcx + rbx]
21dead xor      r8b, byte ptr [rax + rbx]
21deb1 inc      ebx
21deb3 mov      qword ptr [r14 + 0x1b8], r12
21deba movabs   rax, 0x9e3779b97f4a7c15
21dec4 imul     r9, rax
21dec8 movabs   rax, 0x2545f4914f6cdd1d
21ded2 mov      qword ptr [rsp + 0x60], rbx
21ded7 add      r9, rax
21deda mov      rax, r9
21dedd shr      rax, 0x1b
21dee1 movzx    edx, al
21dee4 lea      rax, [r10 + r10]
21dee8 mov      byte ptr [r14 + 0x161], dl
21deef imul     rdx, r11
21def3 xor      rdx, rax
21def6 xor      rdx, rdi
21def9 mov      rcx, rdx
21defc xor      rcx, rbx
21deff test     bpl, bpl
21df02 lea      rax, [rdx + rbx]
21df06 cmove    rax, rcx
21df0a mov      qword ptr [r14 + 0xf8], rax
21df11 movsxd   rdx, dword ptr [r14 + 0x11e0]
21df18 mov      r12, qword ptr [r14 + 0x20]
21df1c mov      rcx, rdx
21df1f xor      rcx, qword ptr [r14 + 0x350]
21df26 xor      rcx, rbx
21df29 xor      rcx, qword ptr [r14 + 0x348]
21df30 xor      rcx, r12
21df33 mov      rax, rcx
21df36 shr      rax, 0x21
21df3a xor      rax, rcx
21df3d movabs   rcx, 0xff51afd7ed558ccd
21df47 imul     rax, rcx
21df4b mov      rcx, rax
21df4e shr      rcx, 0x21
21df52 xor      rcx, rax
21df55 movabs   rax, 0xc4ceb9fe1a85ec53
21df5f imul     rcx, rax
21df63 movzx    eax, r8b
21df67 mov      rbx, rcx
21df6a shr      rbx, 0x21
21df6e xor      rbx, rcx
21df71 lea      rcx, [rip - 0x21df78]
21df78 xor      rax, 0xdd
21df7e mov      qword ptr [r14 + 0x28], rbx
21df82 movzx    esi, byte ptr [rax + rcx + 0x3ecf00]
21df8a xor      sil, 0x63
21df8e inc      edx
21df90 mov      dword ptr [r14 + 0x11e0], edx
21df97 test     dl, 0x1f
21df9a jne      0x14021dfea
21df9c movsxd   rax, edx
21df9f xor      rax, qword ptr [r14 + 0x348]
21dfa6 xor      rax, r12
21dfa9 mov      rcx, rax
21dfac shr      rcx, 0x21
21dfb0 xor      rcx, rax
21dfb3 movabs   rax, 0xff51afd7ed558ccd
21dfbd imul     rcx, rax
21dfc1 movabs   rax, 0xc4ceb9fe1a85ec53
21dfcb mov      rdx, rcx
21dfce shr      rdx, 0x21
21dfd2 xor      rdx, rcx
21dfd5 imul     rdx, rax
21dfd9 mov      rax, rdx
21dfdc shr      rax, 0x21
21dfe0 xor      rax, rdx
21dfe3 mov      qword ptr [r14 + 0x348], rax
21dfea movzx    r8d, sil
21dfee mov      eax, r8d
21dff1 mov      byte ptr [r14 + 0x4ad], sil
21dff8 xor      rax, qword ptr [rsp + 0x60]
21dffd xor      rax, r12
21e000 movabs   r12, 0x9e3779b97f4a7c15
21e00a mov      rcx, rax
21e00d shr      rcx, 0x21
21e011 xor      rcx, rax
21e014 movabs   rax, 0xff51afd7ed558ccd
21e01e imul     rcx, rax
21e022 imul     r8, r12
21e026 imul     r9, r12
21e02a mov      rdx, rcx
21e02d movabs   rax, 0xc4ceb9fe1a85ec53
21e037 shr      rdx, 0x21
21e03b xor      rdx, rcx
21e03e mov      ecx, dword ptr [r14 + 0x1178]
21e045 imul     rdx, rax
21e049 mov      rax, rdx
21e04c shr      rax, 0x21
21e050 xor      rax, rdx
21e053 mov      qword ptr [r14 + 0x20], rax
21e057 movabs   rax, 0xd6e8feb86659fd93
21e061 imul     rcx, rax
21e065 xor      rcx, r8
21e068 xor      rcx, rbx
21e06b movabs   rbx, 0x2545f4914f6cdd1d
21e075 mov      rax, rcx
21e078 add      r9, rbx
21e07b shr      rax, 0x21
21e07f xor      rax, rcx
21e082 movabs   rcx, 0xff51afd7ed558ccd
21e08c imul     rax, rcx
21e090 mov      rdx, rax
21e093 shr      rdx, 0x21
21e097 xor      rdx, rax
21e09a movabs   rax, 0xc4ceb9fe1a85ec53
21e0a4 imul     rdx, rax
21e0a8 mov      rax, qword ptr [rsp + 0x78]
21e0ad shr      rdx, 0x21
21e0b1 and      edx, 3
21e0b4 inc      rax
21e0b7 mov      qword ptr [r14 + 0x1b8], rax
21e0be cmp      sil, 0x3e
21e0c2 jae      0x14021e15a
21e0c8 inc      qword ptr [r14 + 0x11a0]
21e0cf lea      rax, [rip - 0x21e0d6]
21e0d6 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
21e0de mov      qword ptr [r14 + 0x1b0], r9
21e0e5 shr      r9, 0x1b
21e0e9 movzx    eax, r9b
21e0ed mov      byte ptr [r14 + 0x160], al
21e0f4 imul     rax, r11
21e0f8 mov      ebx, edx
21e0fa xor      rax, rdi
21e0fd xor      rax, r10
21e100 mov      rcx, rax
21e103 add      rax, r8
21e106 xor      rcx, r8
21e109 movzx    r8d, sil
21e10d test     bpl, bpl
21e110 cmove    rax, rcx
21e114 mov      rcx, r14
21e117 mov      qword ptr [r14 + 0xf0], rax
21e11e call     0x1401f1f50
21e123 mov      eax, eax
21e125 lea      edx, [r15 - 1]
21e129 imul     rcx, rbx, 0x3e
21e12d mov      r8, r13
21e130 add      rcx, rax
21e133 mov      rax, qword ptr [r14 + 0x4b8]
21e13a movsxd   r9, dword ptr [rax + rcx*4]
21e13e mov      rcx, r14
21e141 movsxd   rax, dword ptr [r14 + 0x4c8]
21e148 xor      r9, rax
21e14b add      r9, qword ptr [r14 + 0x4c0]
21e152 call     r9
21e155 jmp      0x14021e221
21e15a inc      dword ptr [r14 + 0x11a8]
21e161 mov      rax, r9
21e164 shr      rax, 0x1b
21e168 movzx    ecx, al
21e16b lea      rax, [r10*4]
21e173 mov      byte ptr [r14 + 0x163], cl
21e17a imul     rcx, r11
21e17e imul     r9, r12
21e182 xor      rcx, rax
21e185 xor      rcx, rdi
21e188 mov      qword ptr [r14 + 0x108], rcx
21e18f mov      r8, qword ptr [r14 + 0x1b8]
21e196 add      r9, rbx
21e199 mov      rax, r9
21e19c shr      rax, 0x1b
21e1a0 movzx    edx, al
21e1a3 mov      byte ptr [r14 + 0x16a], dl
21e1aa imul     rax, r10, 0xb
21e1ae imul     rdx, r11
21e1b2 xor      rdx, rax
21e1b5 xor      rdx, rdi
21e1b8 mov      rcx, rdx
21e1bb xor      rcx, 1
21e1bf test     bpl, bpl
21e1c2 lea      rax, [rdx + 1]
21e1c6 cmove    rax, rcx
21e1ca mov      qword ptr [r14 + 0x140], rax
21e1d1 lea      rax, [r8 + 2]
21e1d5 mov      qword ptr [r14 + 0x1b8], rax
21e1dc imul     r9, r12
21e1e0 add      r9, rbx
21e1e3 mov      qword ptr [r14 + 0x1b0], r9
21e1ea shr      r9, 0x1b
21e1ee movzx    eax, r9b
21e1f2 mov      byte ptr [r14 + 0x160], al
21e1f9 imul     rax, r11
21e1fd xor      rax, rdi
21e200 xor      rax, r10
21e203 mov      rcx, rax
21e206 add      rax, 0xfe1ab
21e20c xor      rcx, 0xfe1ab
21e213 test     bpl, bpl
21e216 cmove    rax, rcx
21e21a mov      qword ptr [r14 + 0xf0], rax
21e221 mov      rdi, qword ptr [rsp + 0x28]
21e226 mov      rsi, qword ptr [rsp + 0x30]
21e22b mov      rbp, qword ptr [rsp + 0x38]
21e230 mov      rbx, qword ptr [rsp + 0x68]
21e235 mov      r12, qword ptr [rsp + 0x20]
21e23a add      rsp, 0x40
21e23e pop      r15
21e240 pop      r14
21e242 pop      r13
21e244 ret      
21e245 mov      edx, 0x54485254
21e24a mov      rcx, r14
21e24d call     0x1401ed830
21e252 int3     
21e253 mov      edx, 0x43414e59
21e258 mov      rcx, r14
21e25b call     0x1401ed830
21e260 int3     
