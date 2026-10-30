1f0660 push     rbx
1f0662 sub      rsp, 0x40
1f0666 mov      rbx, rcx
1f0669 mov      r10d, edx
1f066c mov      ecx, dword ptr [rcx + 0xaf4]
1f0672 test     ecx, ecx
1f0674 je       0x1401f0909
1f067a mov      eax, dword ptr [rbx + 0x1d8]
1f0680 test     eax, eax
1f0682 je       0x1401f0909
1f0688 mov      qword ptr [rsp + 0x50], rbp
1f068d mov      qword ptr [rsp + 0x58], rsi
1f0692 mov      qword ptr [rsp + 0x60], rdi
1f0697 mov      qword ptr [rsp + 0x38], r12
1f069c mov      qword ptr [rsp + 0x30], r13
1f06a1 mov      qword ptr [rsp + 0x20], r15
1f06a6 cmp      r8d, eax
1f06a9 jb       0x1401f06af
1f06ab lea      r8d, [rax - 1]
1f06af mov      r11d, dword ptr [rbx + 0xb58]
1f06b6 cmp      r10d, r8d
1f06b9 cmova    r10d, r8d
1f06bd dec      eax
1f06bf xor      edx, edx
1f06c1 add      eax, ecx
1f06c3 div      ecx
1f06c5 xor      edx, edx
1f06c7 mov      esi, eax
1f06c9 mov      eax, r10d
1f06cc div      ecx
1f06ce lea      r13d, [rsi - 1]
1f06d2 cmp      eax, esi
1f06d4 mov      r15d, r13d
1f06d7 mov      edi, r13d
1f06da cmovb    r15d, eax
1f06de xor      edx, edx
1f06e0 mov      eax, r8d
1f06e3 div      ecx
1f06e5 cmp      eax, esi
1f06e7 cmovb    edi, eax
1f06ea xor      r9d, r9d
1f06ed mov      ebp, r9d
1f06f0 mov      edx, r9d
1f06f3 test     r11d, r11d
1f06f6 je       0x1401f071b
1f06f8 mov      eax, r10d
1f06fb div      r11d
1f06fe xor      edx, edx
1f0700 mov      ebp, eax
1f0702 mov      eax, r8d
1f0705 div      r11d
1f0708 cmp      ebp, 0x67
1f070b mov      edx, eax
1f070d mov      eax, 0x66
1f0712 cmovae   ebp, eax
1f0715 cmp      edx, 0x67
1f0718 cmovae   edx, eax
1f071b mov      ecx, edi
1f071d sub      ecx, r15d
1f0720 cmp      ecx, 1
1f0723 ja       0x1401f0748
1f0725 mov      eax, dword ptr [rbx + 0xaf0]
1f072b lea      ecx, [rax + 1]
1f072e cmp      r15d, eax
1f0731 je       0x1401f0738
1f0733 cmp      r15d, ecx
1f0736 jne      0x1401f0748
1f0738 cmp      edi, eax
1f073a je       0x1401f0740
1f073c cmp      edi, ecx
1f073e jne      0x1401f0748
1f0740 mov      r12d, 1
1f0746 jmp      0x1401f074b
1f0748 mov      r12d, r9d
1f074b test     r11d, r11d
1f074e je       0x1401f0777
1f0750 mov      eax, edx
1f0752 sub      eax, ebp
1f0754 cmp      eax, 1
1f0757 ja       0x1401f077d
1f0759 mov      ecx, dword ptr [rbx + 0xb5c]
1f075f cmp      ecx, -1
1f0762 je       0x1401f077d
1f0764 lea      eax, [rcx + 1]
1f0767 cmp      ebp, ecx
1f0769 je       0x1401f076f
1f076b cmp      ebp, eax
1f076d jne      0x1401f077d
1f076f cmp      edx, ecx
1f0771 je       0x1401f0777
1f0773 cmp      edx, eax
1f0775 jne      0x1401f077d
1f0777 mov      r9d, 1
1f077d test     r12d, r12d
1f0780 je       0x1401f078b
1f0782 test     r9d, r9d
1f0785 jne      0x1401f08eb
1f078b mov      edx, dword ptr [rbx + 0xb5c]
1f0791 cmp      edx, -1
1f0794 je       0x1401f081f
1f079a mov      rcx, qword ptr [rbx + 0xb50]
1f07a1 mov      r8d, edx
1f07a4 mov      qword ptr [rsp + 0x28], r14
1f07a9 mov      rax, rcx
1f07ac test     rcx, rcx
1f07af je       0x1401f07e6
1f07b1 test     r11d, r11d
1f07b4 je       0x1401f07e6
1f07b6 cmp      edx, 0x67
1f07b9 jae      0x1401f07e6
1f07bb cmp      byte ptr [rdx + rcx], 0
1f07bf mov      r14d, edx
1f07c2 je       0x1401f07e6
1f07c4 mov      rcx, rbx
1f07c7 call     0x1401f0410
1f07cc mov      rax, qword ptr [rbx + 0xb50]
1f07d3 mov      byte ptr [r14 + rax], 0
1f07d8 mov      r8d, dword ptr [rbx + 0xb5c]
1f07df mov      rax, qword ptr [rbx + 0xb50]
1f07e6 lea      edx, [r8 + 1]
1f07ea test     rax, rax
1f07ed je       0x1401f081a
1f07ef cmp      dword ptr [rbx + 0xb58], 0
1f07f6 je       0x1401f081a
1f07f8 cmp      edx, 0x67
1f07fb jae      0x1401f081a
1f07fd cmp      byte ptr [rdx + rax], 0
1f0801 mov      r14d, edx
1f0804 je       0x1401f081a
1f0806 mov      rcx, rbx
1f0809 call     0x1401f0410
1f080e mov      rax, qword ptr [rbx + 0xb50]
1f0815 mov      byte ptr [r14 + rax], 0
1f081a mov      r14, qword ptr [rsp + 0x28]
1f081f test     r12d, r12d
1f0822 jne      0x1401f08d8
1f0828 mov      edx, dword ptr [rbx + 0xaf0]
1f082e mov      rcx, rbx
1f0831 call     0x1401f0290
1f0836 mov      edx, dword ptr [rbx + 0xaf0]
1f083c inc      edx
1f083e cmp      edx, esi
1f0840 jae      0x1401f084a
1f0842 mov      rcx, rbx
1f0845 call     0x1401f0290
1f084a mov      edx, r13d
1f084d cmp      r15d, esi
1f0850 mov      rcx, rbx
1f0853 cmovb    edx, r15d
1f0857 mov      dword ptr [rbx + 0xaf0], edx
1f085d call     0x1401f0290
1f0862 mov      edx, dword ptr [rbx + 0xaf0]
1f0868 lea      eax, [rdx + 1]
1f086b cmp      eax, esi
1f086d jae      0x1401f087f
1f086f mov      edx, eax
1f0871 mov      rcx, rbx
1f0874 call     0x1401f0290
1f0879 mov      edx, dword ptr [rbx + 0xaf0]
1f087f cmp      edi, edx
1f0881 je       0x1401f08d8
1f0883 lea      eax, [rdx + 1]
1f0886 cmp      edi, eax
1f0888 je       0x1401f08d8
1f088a mov      rcx, rbx
1f088d call     0x1401f0290
1f0892 mov      edx, dword ptr [rbx + 0xaf0]
1f0898 inc      edx
1f089a cmp      edx, esi
1f089c jae      0x1401f08a6
1f089e mov      rcx, rbx
1f08a1 call     0x1401f0290
1f08a6 test     edi, edi
1f08a8 je       0x1401f08ac
1f08aa dec      edi
1f08ac cmp      edi, esi
1f08ae mov      rcx, rbx
1f08b1 cmovb    r13d, edi
1f08b5 mov      edx, r13d
1f08b8 mov      dword ptr [rbx + 0xaf0], r13d
1f08bf call     0x1401f0290
1f08c4 mov      edx, dword ptr [rbx + 0xaf0]
1f08ca inc      edx
1f08cc cmp      edx, esi
1f08ce jae      0x1401f08d8
1f08d0 mov      rcx, rbx
1f08d3 call     0x1401f0290
1f08d8 cmp      dword ptr [rbx + 0xb58], 0
1f08df je       0x1401f08eb
1f08e1 mov      edx, ebp
1f08e3 mov      rcx, rbx
1f08e6 call     0x1401f05c0
1f08eb mov      r13, qword ptr [rsp + 0x30]
1f08f0 mov      r12, qword ptr [rsp + 0x38]
1f08f5 mov      rdi, qword ptr [rsp + 0x60]
1f08fa mov      rsi, qword ptr [rsp + 0x58]
1f08ff mov      rbp, qword ptr [rsp + 0x50]
1f0904 mov      r15, qword ptr [rsp + 0x20]
1f0909 add      rsp, 0x40
1f090d pop      rbx
1f090e ret      
