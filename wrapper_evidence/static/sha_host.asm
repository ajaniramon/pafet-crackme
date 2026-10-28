1402834d0 48895c2410 mov qword ptr [rsp + 0x10], rbx
1402834d5 57 push rdi
1402834d6 4881ec80000000 sub rsp, 0x80
1402834dd 0f29742470 movaps xmmword ptr [rsp + 0x70], xmm6
1402834e2 488b05379b1800 mov rax, qword ptr [rip + 0x189b37]
1402834e9 4833c4 xor rax, rsp
1402834ec 4889442460 mov qword ptr [rsp + 0x60], rax
1402834f1 488bf9 mov rdi, rcx
1402834f4 4533c9 xor r9d, r9d
1402834f7 44894c2420 mov dword ptr [rsp + 0x20], r9d
1402834fc 83fa27 cmp edx, 0x27
1402834ff 0f8763040000 ja 0x140283968
140283505 8bc2 mov eax, edx
140283507 488d15f2cad7ff lea rdx, [rip - 0x28350e]
14028350e 8b8c8290392800 mov ecx, dword ptr [rdx + rax*4 + 0x283990]
140283515 4803ca add rcx, rdx
140283518 ffe1 jmp rcx
14028351a 488b0f mov rcx, qword ptr [rdi]
14028351d 418b00 mov eax, dword ptr [r8]
140283520 8901 mov dword ptr [rcx], eax
140283522 e941040000 jmp 0x140283968
140283527 488b4f08 mov rcx, qword ptr [rdi + 8]
14028352b 498b00 mov rax, qword ptr [r8]
14028352e 488901 mov qword ptr [rcx], rax
140283531 e932040000 jmp 0x140283968
140283536 488b4710 mov rax, qword ptr [rdi + 0x10]
14028353a 4883781810 cmp qword ptr [rax + 0x18], 0x10
14028353f 0f8225040000 jb 0x14028396a
140283545 488b00 mov rax, qword ptr [rax]
140283548 e91d040000 jmp 0x14028396a
14028354d 488b4f18 mov rcx, qword ptr [rdi + 0x18]
140283551 498b00 mov rax, qword ptr [r8]
140283554 488901 mov qword ptr [rcx], rax
140283557 e90c040000 jmp 0x140283968
14028355c 488b4710 mov rax, qword ptr [rdi + 0x10]
140283560 488b4010 mov rax, qword ptr [rax + 0x10]
140283564 e901040000 jmp 0x14028396a
140283569 488b4f20 mov rcx, qword ptr [rdi + 0x20]
14028356d 498b00 mov rax, qword ptr [r8]
140283570 488901 mov qword ptr [rcx], rax
140283573 e9f0030000 jmp 0x140283968
140283578 488b4f28 mov rcx, qword ptr [rdi + 0x28]
14028357c 498b00 mov rax, qword ptr [r8]
14028357f 488901 mov qword ptr [rcx], rax
140283582 e9e1030000 jmp 0x140283968
140283587 488b4728 mov rax, qword ptr [rdi + 0x28]
14028358b 488b00 mov rax, qword ptr [rax]
14028358e e9d7030000 jmp 0x14028396a
140283593 488b4720 mov rax, qword ptr [rdi + 0x20]
140283597 488b00 mov rax, qword ptr [rax]
14028359a e9cb030000 jmp 0x14028396a
14028359f 488b4728 mov rax, qword ptr [rdi + 0x28]
1402835a3 488b4f18 mov rcx, qword ptr [rdi + 0x18]
1402835a7 4c8b08 mov r9, qword ptr [rax]
1402835aa 4c8b01 mov r8, qword ptr [rcx]
1402835ad 488b07 mov rax, qword ptr [rdi]
1402835b0 8b10 mov edx, dword ptr [rax]
1402835b2 488b4f30 mov rcx, qword ptr [rdi + 0x30]
1402835b6 430fb60401 movzx eax, byte ptr [r9 + r8]
1402835bb 88040a mov byte ptr [rdx + rcx], al
1402835be 488b17 mov rdx, qword ptr [rdi]
1402835c1 8b0a mov ecx, dword ptr [rdx]
1402835c3 488b4730 mov rax, qword ptr [rdi + 0x30]
1402835c7 0fb60401 movzx eax, byte ptr [rcx + rax]
1402835cb ffc1 inc ecx
1402835cd 890a mov dword ptr [rdx], ecx
1402835cf e996030000 jmp 0x14028396a
1402835d4 488b07 mov rax, qword ptr [rdi]
1402835d7 8b00 mov eax, dword ptr [rax]
1402835d9 e98c030000 jmp 0x14028396a
1402835de 488b5730 mov rdx, qword ptr [rdi + 0x30]
1402835e2 488b4f38 mov rcx, qword ptr [rdi + 0x38]
1402835e6 e845530100 call 0x140298930
1402835eb e978030000 jmp 0x140283968
1402835f0 488b4708 mov rax, qword ptr [rdi + 8]
1402835f4 488b00 mov rax, qword ptr [rax]
1402835f7 e96e030000 jmp 0x14028396a
1402835fc 488b4f40 mov rcx, qword ptr [rdi + 0x40]
140283600 498b00 mov rax, qword ptr [r8]
140283603 488901 mov qword ptr [rcx], rax
140283606 e95d030000 jmp 0x140283968
14028360b 488b4740 mov rax, qword ptr [rdi + 0x40]
14028360f 488b4f30 mov rcx, qword ptr [rdi + 0x30]
140283613 488b00 mov rax, qword ptr [rax]
140283616 c6040180 mov byte ptr [rcx + rax], 0x80
14028361a 488b4740 mov rax, qword ptr [rdi + 0x40]
14028361e 48ff00 inc qword ptr [rax]
140283621 b880000000 mov eax, 0x80
140283626 e93f030000 jmp 0x14028396a
14028362b 488b4740 mov rax, qword ptr [rdi + 0x40]
14028362f 488b00 mov rax, qword ptr [rax]
140283632 e933030000 jmp 0x14028396a
140283637 488b4740 mov rax, qword ptr [rdi + 0x40]
14028363b 488b4f30 mov rcx, qword ptr [rdi + 0x30]
14028363f 488b00 mov rax, qword ptr [rax]
140283642 44880c01 mov byte ptr [rcx + rax], r9b
140283646 488b4740 mov rax, qword ptr [rdi + 0x40]
14028364a 48ff00 inc qword ptr [rax]
14028364d e916030000 jmp 0x140283968
140283652 0f57c0 xorps xmm0, xmm0
140283655 33c9 xor ecx, ecx
140283657 488b4730 mov rax, qword ptr [rdi + 0x30]
14028365b 0f1100 movups xmmword ptr [rax], xmm0
14028365e 0f114010 movups xmmword ptr [rax + 0x10], xmm0
140283662 0f114020 movups xmmword ptr [rax + 0x20], xmm0
140283666 48894830 mov qword ptr [rax + 0x30], rcx
14028366a 488b4730 mov rax, qword ptr [rdi + 0x30]
14028366e e9f7020000 jmp 0x14028396a
140283673 488b4708 mov rax, qword ptr [rdi + 8]
140283677 488b4f30 mov rcx, qword ptr [rdi + 0x30]
14028367b 0fb600 movzx eax, byte ptr [rax]
14028367e 88413f mov byte ptr [rcx + 0x3f], al
140283681 488b4730 mov rax, qword ptr [rdi + 0x30]
140283685 0fb6403f movzx eax, byte ptr [rax + 0x3f]
140283689 e9dc020000 jmp 0x14028396a
14028368e 488b4708 mov rax, qword ptr [rdi + 8]
140283692 8b08 mov ecx, dword ptr [rax]
140283694 48c1e908 shr rcx, 8
140283698 0fb6c1 movzx eax, cl
14028369b 488b4f30 mov rcx, qword ptr [rdi + 0x30]
14028369f 88413e mov byte ptr [rcx + 0x3e], al
1402836a2 e9c3020000 jmp 0x14028396a
1402836a7 488b4708 mov rax, qword ptr [rdi + 8]
1402836ab 8b08 mov ecx, dword ptr [rax]
1402836ad 48c1e910 shr rcx, 0x10
1402836b1 0fb6c1 movzx eax, cl
1402836b4 488b4f30 mov rcx, qword ptr [rdi + 0x30]
1402836b8 88413d mov byte ptr [rcx + 0x3d], al
1402836bb e9aa020000 jmp 0x14028396a
1402836c0 488b4708 mov rax, qword ptr [rdi + 8]
1402836c4 8b08 mov ecx, dword ptr [rax]
1402836c6 48c1e918 shr rcx, 0x18
1402836ca 0fb6c1 movzx eax, cl
1402836cd 488b4f30 mov rcx, qword ptr [rdi + 0x30]
1402836d1 88413c mov byte ptr [rcx + 0x3c], al
1402836d4 e991020000 jmp 0x14028396a
1402836d9 488b4708 mov rax, qword ptr [rdi + 8]
1402836dd 488b08 mov rcx, qword ptr [rax]
1402836e0 48c1e920 shr rcx, 0x20
1402836e4 0fb6c1 movzx eax, cl
1402836e7 488b4f30 mov rcx, qword ptr [rdi + 0x30]
1402836eb 88413b mov byte ptr [rcx + 0x3b], al
1402836ee e977020000 jmp 0x14028396a
1402836f3 488b4708 mov rax, qword ptr [rdi + 8]
1402836f7 488b08 mov rcx, qword ptr [rax]
1402836fa 48c1e928 shr rcx, 0x28
1402836fe 0fb6c1 movzx eax, cl
140283701 488b4f30 mov rcx, qword ptr [rdi + 0x30]
140283705 88413a mov byte ptr [rcx + 0x3a], al
140283708 e95d020000 jmp 0x14028396a
14028370d 488b4708 mov rax, qword ptr [rdi + 8]
140283711 0fb64806 movzx ecx, byte ptr [rax + 6]
140283715 488b4730 mov rax, qword ptr [rdi + 0x30]
140283719 884839 mov byte ptr [rax + 0x39], cl
14028371c 8bc1 mov eax, ecx
14028371e e947020000 jmp 0x14028396a
140283723 488b4708 mov rax, qword ptr [rdi + 8]
140283727 0fb64807 movzx ecx, byte ptr [rax + 7]
14028372b 488b4730 mov rax, qword ptr [rdi + 0x30]
14028372f 884838 mov byte ptr [rax + 0x38], cl
140283732 8bc1 mov eax, ecx
140283734 e931020000 jmp 0x14028396a
140283739 488b4f48 mov rcx, qword ptr [rdi + 0x48]
14028373d 418b00 mov eax, dword ptr [r8]
140283740 8901 mov dword ptr [rcx], eax
140283742 e921020000 jmp 0x140283968
140283747 488b4748 mov rax, qword ptr [rdi + 0x48]
14028374b 486300 movsxd rax, dword ptr [rax]
14028374e e917020000 jmp 0x14028396a
140283753 488b4748 mov rax, qword ptr [rdi + 0x48]
140283757 486310 movsxd rdx, dword ptr [rax]
14028375a 488b4738 mov rax, qword ptr [rdi + 0x38]
14028375e 440fb6449003 movzx r8d, byte ptr [rax + rdx*4 + 3]
140283764 8d049500000000 lea eax, [rdx*4]
14028376b 4863c8 movsxd rcx, eax
14028376e 488b4750 mov rax, qword ptr [rdi + 0x50]
140283772 44880401 mov byte ptr [rcx + rax], r8b
140283776 418bc0 mov eax, r8d
140283779 e9ec010000 jmp 0x14028396a
14028377e 488b4748 mov rax, qword ptr [rdi + 0x48]
140283782 486310 movsxd rdx, dword ptr [rax]
140283785 488b4738 mov rax, qword ptr [rdi + 0x38]
140283789 440fb6449002 movzx r8d, byte ptr [rax + rdx*4 + 2]
14028378f 8d049500000000 lea eax, [rdx*4]
140283796 4863c8 movsxd rcx, eax
140283799 488b4750 mov rax, qword ptr [rdi + 0x50]
14028379d 4488440101 mov byte ptr [rcx + rax + 1], r8b
1402837a2 418bc0 mov eax, r8d
1402837a5 e9c0010000 jmp 0x14028396a
1402837aa 488b4748 mov rax, qword ptr [rdi + 0x48]
1402837ae 486310 movsxd rdx, dword ptr [rax]
1402837b1 488b4738 mov rax, qword ptr [rdi + 0x38]
1402837b5 440fb6449001 movzx r8d, byte ptr [rax + rdx*4 + 1]
1402837bb 8d049500000000 lea eax, [rdx*4]
1402837c2 4863c8 movsxd rcx, eax
1402837c5 488b4750 mov rax, qword ptr [rdi + 0x50]
1402837c9 4488440102 mov byte ptr [rcx + rax + 2], r8b
1402837ce 418bc0 mov eax, r8d
1402837d1 e994010000 jmp 0x14028396a
1402837d6 488b4748 mov rax, qword ptr [rdi + 0x48]
1402837da 486310 movsxd rdx, dword ptr [rax]
1402837dd 488b4738 mov rax, qword ptr [rdi + 0x38]
1402837e1 440fb60490 movzx r8d, byte ptr [rax + rdx*4]
1402837e6 8d049500000000 lea eax, [rdx*4]
1402837ed 4863c8 movsxd rcx, eax
1402837f0 488b4750 mov rax, qword ptr [rdi + 0x50]
1402837f4 4488440103 mov byte ptr [rcx + rax + 3], r8b
1402837f9 418bc0 mov eax, r8d
1402837fc e969010000 jmp 0x14028396a
140283801 488b4f58 mov rcx, qword ptr [rdi + 0x58]
140283805 418b00 mov eax, dword ptr [r8]
140283808 8901 mov dword ptr [rcx], eax
14028380a e959010000 jmp 0x140283968
14028380f 488b4758 mov rax, qword ptr [rdi + 0x58]
140283813 486300 movsxd rax, dword ptr [rax]
140283816 e94f010000 jmp 0x14028396a
14028381b 488b5f60 mov rbx, qword ptr [rdi + 0x60]
14028381f 488b03 mov rax, qword ptr [rbx]
140283822 48634804 movsxd rcx, dword ptr [rax + 4]
140283826 4803cb add rcx, rbx
140283829 e8f2e7d7ff call 0x140002020
14028382e ba02000000 mov edx, 2
140283833 488d4c2428 lea rcx, [rsp + 0x28]
140283838 e86ff71100 call 0x1403a2fac
14028383d 488b13 mov rdx, qword ptr [rbx]
140283840 48634a04 movsxd rcx, dword ptr [rdx + 4]
140283844 4803cb add rcx, rbx
140283847 488b5008 mov rdx, qword ptr [rax + 8]
14028384b ff10 call qword ptr [rax]
14028384d 488b03 mov rax, qword ptr [rbx]
140283850 48635004 movsxd rdx, dword ptr [rax + 4]
140283854 c6441a5830 mov byte ptr [rdx + rbx + 0x58], 0x30
140283859 488b4758 mov rax, qword ptr [rdi + 0x58]
14028385d 486310 movsxd rdx, dword ptr [rax]
140283860 488b4750 mov rax, qword ptr [rdi + 0x50]
140283864 0fb61402 movzx edx, byte ptr [rdx + rax]
140283868 488bcb mov rcx, rbx
14028386b e8703b1100 call 0x1403973e0
140283870 e9f3000000 jmp 0x140283968
140283875 488b5f68 mov rbx, qword ptr [rdi + 0x68]
140283879 488b4f60 mov rcx, qword ptr [rdi + 0x60]
14028387d 4c894c2440 mov qword ptr [rsp + 0x40], r9
140283882 660f6f3566e31600 movdqa xmm6, xmmword ptr [rip + 0x16e366]
14028388a f30f7f742450 movdqu xmmword ptr [rsp + 0x50], xmm6
140283890 c644244000 mov byte ptr [rsp + 0x40], 0
140283895 c744242002000000 mov dword ptr [rsp + 0x20], 2
14028389d 0f57c0 xorps xmm0, xmm0
1402838a0 33c0 xor eax, eax
1402838a2 0f11442428 movups xmmword ptr [rsp + 0x28], xmm0
1402838a7 4889442438 mov qword ptr [rsp + 0x38], rax
1402838ac 8b5178 mov edx, dword ptr [rcx + 0x78]
1402838af 8bc2 mov eax, edx
1402838b1 2422 and al, 0x22
1402838b3 3c02 cmp al, 2
1402838b5 7430 je 0x1402838e7
1402838b7 488b4148 mov rax, qword ptr [rcx + 0x48]
1402838bb 4c8b00 mov r8, qword ptr [rax]
1402838be 4d85c0 test r8, r8
1402838c1 7424 je 0x1402838e7
1402838c3 488b4128 mov rax, qword ptr [rcx + 0x28]
1402838c7 488b10 mov rdx, qword ptr [rax]
1402838ca 4c89442428 mov qword ptr [rsp + 0x28], r8
1402838cf 488d4170 lea rax, [rcx + 0x70]
1402838d3 488d4c2428 lea rcx, [rsp + 0x28]
1402838d8 4c3b00 cmp r8, qword ptr [rax]
1402838db 480f42c8 cmovb rcx, rax
1402838df 4c8b01 mov r8, qword ptr [rcx]
1402838e2 4c2bc2 sub r8, rdx
1402838e5 eb31 jmp 0x140283918
1402838e7 f6c204 test dl, 4
1402838ea 7522 jne 0x14028390e
1402838ec 488b4140 mov rax, qword ptr [rcx + 0x40]
1402838f0 4c8b08 mov r9, qword ptr [rax]
1402838f3 4d85c9 test r9, r9
1402838f6 7416 je 0x14028390e
1402838f8 488b4120 mov rax, qword ptr [rcx + 0x20]
1402838fc 488b10 mov rdx, qword ptr [rax]
1402838ff 488b4158 mov rax, qword ptr [rcx + 0x58]
140283903 4c6300 movsxd r8, dword ptr [rax]
140283906 4c2bc2 sub r8, rdx
140283909 4d03c1 add r8, r9
14028390c eb0a jmp 0x140283918
14028390e 4c8b442430 mov r8, qword ptr [rsp + 0x30]
140283913 488b542428 mov rdx, qword ptr [rsp + 0x28]
140283918 4885d2 test rdx, rdx
14028391b 7410 je 0x14028392d
14028391d 488d4c2440 lea rcx, [rsp + 0x40]
140283922 e869601100 call 0x140399990
140283927 f30f6f742450 movdqu xmm6, xmmword ptr [rsp + 0x50]
14028392d 807b2000 cmp byte ptr [rbx + 0x20], 0
140283931 7408 je 0x14028393b
140283933 488bcb mov rcx, rbx
140283936 e8855e1100 call 0x1403997c0
14028393b 0f10442440 movups xmm0, xmmword ptr [rsp + 0x40]
140283940 0f1103 movups xmmword ptr [rbx], xmm0
140283943 0f117310 movups xmmword ptr [rbx + 0x10], xmm6
140283947 660f6f05a1e21600 movdqa xmm0, xmmword ptr [rip + 0x16e2a1]
14028394f f30f7f442450 movdqu xmmword ptr [rsp + 0x50], xmm0
140283955 c644244000 mov byte ptr [rsp + 0x40], 0
14028395a c6432001 mov byte ptr [rbx + 0x20], 1
14028395e 488d4c2440 lea rcx, [rsp + 0x40]
140283963 e8585e1100 call 0x1403997c0
140283968 33c0 xor eax, eax
14028396a 488b4c2460 mov rcx, qword ptr [rsp + 0x60]
14028396f 4833cc xor rcx, rsp
140283972 e849041200 call 0x1403a3dc0
140283977 488b9c2498000000 mov rbx, qword ptr [rsp + 0x98]
14028397f 0f28742470 movaps xmm6, xmmword ptr [rsp + 0x70]
140283984 4881c480000000 add rsp, 0x80
14028398b 5f pop rdi
14028398c c3 ret 
