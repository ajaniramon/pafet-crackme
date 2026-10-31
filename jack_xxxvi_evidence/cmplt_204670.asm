204670 mov      qword ptr [rsp + 0x18], r8
204675 push     rbx
204676 push     rbp
204677 push     rdi
204678 push     r13
20467a push     r14
20467c sub      rsp, 0x30
204680 movsxd   rax, dword ptr [rcx + 0x11e0]
204687 mov      r14, rcx
20468a mov      r13d, edx
20468d movabs   rcx, 0xd0d99b284d5fb420
204697 imul     rax, rcx
20469b movabs   rcx, 0x728011e3cc81301f
2046a5 movabs   rbp, 0xff51afd7ed558ccd
2046af xor      rax, qword ptr [r14 + 0x28]
2046b3 mov      rdi, r8
2046b6 mov      qword ptr [rsp + 0x60], rax
2046bb mov      rax, qword ptr [rsp + 0x60]
2046c0 movsxd   rax, dword ptr [r14 + 0x11e0]
2046c7 imul     rax, rcx
2046cb movabs   rcx, 0x94488fbd4fcabc0a
2046d5 xor      rax, qword ptr [r14 + 0x28]
2046d9 mov      qword ptr [rsp + 0x60], rax
2046de mov      rax, qword ptr [rsp + 0x60]
2046e3 movsxd   rax, dword ptr [r14 + 0x11e0]
2046ea imul     rax, rcx
2046ee movabs   rcx, 0x63a8d3ac40c2831
2046f8 xor      rax, qword ptr [r14 + 0x28]
2046fc mov      qword ptr [rsp + 0x60], rax
204701 mov      rax, qword ptr [rsp + 0x60]
204706 mov      rax, qword ptr [r14 + 0x2f8]
20470d add      rax, rcx
204710 mov      rcx, rax
204713 shr      rcx, 0x21
204717 xor      rcx, rax
20471a movabs   rax, 0xc4ceb9fe1a85ec53
204724 imul     rcx, rbp
204728 mov      rdx, rcx
20472b shr      rdx, 0x21
20472f xor      rdx, rcx
204732 mov      rcx, r14
204735 imul     rdx, rax
204739 mov      rax, rdx
20473c shr      rax, 0x21
204740 xor      rdx, rax
204743 mov      rax, qword ptr [r14 + 0x2f8]
20474a or       rdx, 1
20474e xor      rdx, rax
204751 mov      qword ptr [r14 + 0x2f8], rdx
204758 call     0x1401ee940
20475d mov      rcx, r14
204760 mov      rbx, rax
204763 call     0x1401ee940
204768 movabs   rcx, 0x8000000000000000
204772 xor      edx, edx
204774 xor      rax, rcx
204777 xor      rbx, rcx
20477a cmp      rax, rbx
20477d mov      rcx, r14
204780 setb     dl
204783 call     0x1401ee820
204788 mov      rax, qword ptr [r14 + 0x2f8]
20478f test     r13d, r13d
204792 jns      0x1402052d0
204798 cmp      qword ptr [r14 + 0x11b8], rdi
20479f jne      0x1402052de
2047a5 movsxd   rax, dword ptr [r14 + 0x11e0]
2047ac movabs   rcx, 0xff6bbbb33a03c53f
2047b6 imul     rax, rcx
2047ba mov      rcx, r14
2047bd xor      rax, qword ptr [r14 + 0x28]
2047c1 mov      qword ptr [rsp + 0x60], rax
2047c6 mov      rax, qword ptr [rsp + 0x60]
2047cb call     0x1401ee450
2047d0 test     eax, eax
2047d2 jne      0x1402052c4
2047d8 cmp      dword ptr [r14 + 0xad0], eax
2047df jne      0x1402052c4
2047e5 mov      r8, qword ptr [r14 + 0xf0]
2047ec movzx    ecx, byte ptr [r14 + 0x160]
2047f4 mov      rax, r8
2047f7 mov      r10, qword ptr [r14 + 0xe0]
2047fe mov      rbx, qword ptr [r14 + 0xd0]
204805 mov      r11, qword ptr [r14 + 0xd8]
20480c movzx    edi, byte ptr [r14 + 0xe8]
204814 mov      r9, qword ptr [r14 + 0x1b0]
20481b imul     rcx, r10
20481f mov      qword ptr [rsp + 0x68], rsi
204824 mov      rsi, qword ptr [r14 + 0x1b8]
20482b xor      rcx, rbx
20482e xor      rcx, r11
204831 mov      qword ptr [rsp + 0x28], r12
204836 xor      rax, rcx
204839 mov      qword ptr [rsp + 0x20], r15
20483e sub      r8, rcx
204841 movabs   r15, 0x9e3779b97f4a7c15
20484b test     dil, dil
20484e movabs   r12, 0x2545f4914f6cdd1d
204858 cmove    r8, rax
20485c inc      rsi
20485f imul     r9, r15
204863 mov      qword ptr [r14 + 0x1b8], rsi
20486a add      r9, r12
20486d mov      qword ptr [r14 + 0x1b0], r9
204874 mov      rax, r9
204877 shr      rax, 0x1b
20487b movzx    edx, al
20487e mov      byte ptr [r14 + 0x160], dl
204885 imul     rdx, r10
204889 xor      rdx, rbx
20488c xor      rdx, r11
20488f mov      rcx, rdx
204892 xor      rcx, r8
204895 test     dil, dil
204898 lea      rax, [rdx + r8]
20489c cmove    rax, rcx
2048a0 mov      qword ptr [r14 + 0xf0], rax
2048a7 cmp      r8d, 0x338040
2048ae jne      0x1402052b5
2048b4 mov      eax, r13d
2048b7 btr      eax, 0x1f
2048bb cmp      eax, 2
2048be jae      0x14020490a
2048c0 imul     r9, r15
2048c4 lea      rax, [rsi + 1]
2048c8 mov      qword ptr [r14 + 0x1b8], rax
2048cf add      r9, r12
2048d2 mov      qword ptr [r14 + 0x1b0], r9
2048d9 shr      r9, 0x1b
2048dd movzx    eax, r9b
2048e1 mov      byte ptr [r14 + 0x160], al
2048e8 imul     rax, r10
2048ec xor      rax, rbx
2048ef xor      rax, r11
2048f2 mov      rcx, rax
2048f5 add      rax, 0x1ad951
2048fb xor      rcx, 0x1ad951
204902 test     dil, dil
204905 jmp      0x1402052aa
20490a mov      rcx, r14
20490d call     0x1401ee070
204912 movzx    ecx, byte ptr [r14 + 0x4ad]
20491a movabs   r8, 0xc4ceb9fe1a85ec53
204924 mov      r11, qword ptr [r14 + 0xe0]
20492b mov      r10, qword ptr [r14 + 0xd0]
204932 movzx    r9d, byte ptr [r14 + 0xe8]
20493a mov      eax, eax
20493c xor      rcx, rax
20493f xor      rcx, qword ptr [r14 + 0x11e8]
204946 mov      rax, rcx
204949 shr      rax, 0x21
20494d xor      rax, rcx
204950 imul     rax, rbp
204954 mov      rcx, rax
204957 shr      rcx, 0x21
20495b xor      rcx, rax
20495e imul     rcx, r8
204962 mov      rdx, rcx
204965 shr      rdx, 0x21
204969 xor      rdx, rcx
20496c mov      qword ptr [r14 + 0x11e8], rdx
204973 xor      rdx, qword ptr [r14 + 0x28]
204977 xor      rdx, qword ptr [r14 + 0x20]
20497b mov      rax, rdx
20497e shr      rax, 0x21
204982 xor      rax, rdx
204985 imul     rax, rbp
204989 mov      rcx, rax
20498c shr      rcx, 0x21
204990 xor      rcx, rax
204993 imul     rcx, r8
204997 mov      rax, rcx
20499a shr      rax, 0x21
20499e xor      rax, rcx
2049a1 mov      qword ptr [r14 + 0x20], rax
2049a5 mov      rdx, qword ptr [r14 + 0x138]
2049ac movzx    ecx, byte ptr [r14 + 0x169]
2049b4 mov      rax, qword ptr [r14 + 0xd8]
2049bb imul     rcx, r11
2049bf lea      rbx, [rax + rax*4]
2049c3 mov      rax, rdx
2049c6 add      rbx, rbx
2049c9 xor      rcx, rbx
2049cc xor      rcx, r10
2049cf xor      rax, rcx
2049d2 sub      rdx, rcx
2049d5 test     r9b, r9b
2049d8 cmove    rdx, rax
2049dc mov      rax, qword ptr [r14 + 0x1b0]
2049e3 inc      qword ptr [r14 + 0x1b8]
2049ea imul     rax, r15
2049ee add      rax, r12
2049f1 mov      qword ptr [r14 + 0x1b0], rax
2049f8 shr      rax, 0x1b
2049fc movzx    r8d, al
204a00 mov      byte ptr [r14 + 0x169], r8b
204a07 imul     r8, r11
204a0b xor      r8, rbx
204a0e xor      r8, r10
204a11 mov      rcx, r8
204a14 xor      rcx, rdx
204a17 test     r9b, r9b
204a1a lea      rax, [r8 + rdx]
204a1e cmove    rax, rcx
204a22 mov      rcx, r14
204a25 mov      qword ptr [r14 + 0x138], rax
204a2c call     0x1401f0910
204a31 mov      rax, qword ptr [r14 + 0xd8]
204a38 mov      rdx, qword ptr [r14 + 0x130]
204a3f mov      r10, qword ptr [r14 + 0xe0]
204a46 movzx    ecx, byte ptr [r14 + 0x168]
204a4e mov      rbx, qword ptr [r14 + 0xd0]
204a55 lea      r11, [rax + rax*8]
204a59 movzx    r9d, byte ptr [r14 + 0xe8]
204a61 mov      rax, rdx
204a64 imul     rcx, r10
204a68 xor      rcx, r11
204a6b xor      rcx, rbx
204a6e xor      rax, rcx
204a71 sub      rdx, rcx
204a74 test     r9b, r9b
204a77 cmove    rdx, rax
204a7b mov      rax, qword ptr [r14 + 0x1b0]
204a82 inc      qword ptr [r14 + 0x1b8]
204a89 imul     rax, r15
204a8d add      rax, r12
204a90 mov      qword ptr [r14 + 0x1b0], rax
204a97 shr      rax, 0x1b
204a9b movzx    r8d, al
204a9f mov      byte ptr [r14 + 0x168], r8b
204aa6 imul     r8, r10
204aaa xor      r8, r11
204aad xor      r8, rbx
204ab0 mov      rcx, r8
204ab3 xor      rcx, rdx
204ab6 test     r9b, r9b
204ab9 lea      rax, [r8 + rdx]
204abd cmove    rax, rcx
204ac1 mov      rcx, r14
204ac4 mov      qword ptr [r14 + 0x130], rax
204acb call     0x1401f0910
204ad0 mov      rcx, r14
204ad3 call     0x1401ee070
204ad8 cmp      eax, dword ptr [r14 + 0x1d8]
204adf jae      0x140204aeb
204ae1 mov      edx, eax
204ae3 mov      rcx, r14
204ae6 call     0x1401f0910
204aeb mov      rsi, qword ptr [r14 + 0xe0]
204af2 mov      rbp, qword ptr [r14 + 0xd0]
204af9 mov      r11, qword ptr [r14 + 0x130]
204b00 movzx    edi, byte ptr [r14 + 0xe8]
204b08 mov      rax, r11
204b0b movzx    ecx, byte ptr [r14 + 0x168]
204b13 mov      rbx, qword ptr [r14 + 0xd8]
204b1a mov      r8, qword ptr [r14 + 0x1b8]
204b21 mov      r10, qword ptr [r14 + 0x1b0]
204b28 imul     rcx, rsi
204b2c lea      r9, [rbx + rbx*8]
204b30 xor      rcx, r9
204b33 xor      rcx, rbp
204b36 xor      rax, rcx
204b39 sub      r11, rcx
204b3c test     dil, dil
204b3f cmove    r11, rax
204b43 imul     r10, r15
204b47 mov      rcx, r11
204b4a add      r10, r12
204b4d mov      rax, r10
204b50 shr      rax, 0x1b
204b54 movzx    edx, al
204b57 mov      byte ptr [r14 + 0x168], dl
204b5e imul     rdx, rsi
204b62 xor      rdx, r9
204b65 xor      rdx, rbp
204b68 xor      rcx, rdx
204b6b test     dil, dil
204b6e lea      rax, [r11 + rdx]
204b72 cmove    rax, rcx
204b76 mov      rcx, r11
204b79 mov      qword ptr [r14 + 0x130], rax
204b80 lea      rax, [r8 + 2]
204b84 mov      qword ptr [r14 + 0x1b8], rax
204b8b mov      r8d, 0x1869
204b91 imul     r10, r15
204b95 lea      rax, [rbx + rbx*4]
204b99 add      rax, rax
204b9c add      r10, r12
204b9f mov      qword ptr [r14 + 0x1b0], r10
204ba6 shr      r10, 0x1b
204baa movzx    edx, r10b
204bae mov      byte ptr [r14 + 0x169], dl
204bb5 imul     rdx, rsi
204bb9 xor      rdx, rax
204bbc xor      rdx, rbp
204bbf xor      rcx, rdx
204bc2 test     dil, dil
204bc5 lea      rax, [r11 + rdx]
204bc9 cmove    rax, rcx
204bcd mov      rcx, r14
204bd0 mov      qword ptr [r14 + 0x138], rax
204bd7 movzx    edx, byte ptr [r14 + 0x4ad]
204bdf xor      rdx, qword ptr [r14 + 0x348]
204be6 call     0x1401f1520
204beb mov      r8, qword ptr [r14 + 0x348]
204bf2 movabs   rdi, 0xff51afd7ed558ccd
204bfc mov      rax, r8
204bff movabs   rsi, 0xc4ceb9fe1a85ec53
204c09 xor      rax, qword ptr [r14 + 0x20]
204c0d mov      rcx, rax
204c10 shr      rcx, 0x21
204c14 xor      rcx, rax
204c17 imul     rcx, rdi
204c1b mov      rax, rcx
204c1e shr      rax, 0x21
204c22 xor      rax, rcx
204c25 imul     rax, rsi
204c29 mov      rdx, rax
204c2c shr      rdx, 0x21
204c30 xor      edx, eax
204c32 lea      eax, [rdx + 1]
204c35 mov      ecx, eax
204c37 xor      eax, edx
204c39 imul     ecx, edx
204c3c not      ecx
204c3e and      ecx, eax
204c40 test     cl, 1
204c43 je       0x140204cac
204c45 and      r8b, 3
204c49 cmp      r8b, 1
204c4d jne      0x140204cac
204c4f mov      rax, qword ptr [r14 + 0x1b0]
204c56 inc      qword ptr [r14 + 0x1b8]
204c5d imul     rax, r15
204c61 add      rax, r12
204c64 mov      qword ptr [r14 + 0x1b0], rax
204c6b shr      rax, 0x1b
204c6f movzx    eax, al
204c72 mov      byte ptr [r14 + 0x160], al
204c79 imul     rax, qword ptr [r14 + 0xe0]
204c81 xor      rax, qword ptr [r14 + 0xd8]
204c88 xor      rax, qword ptr [r14 + 0xd0]
204c8f mov      rcx, rax
204c92 add      rax, 0x190631
204c98 xor      rcx, 0x190631
204c9f cmp      byte ptr [r14 + 0xe8], 0
204ca7 jmp      0x1402052aa
204cac mov      rcx, r14
204caf call     0x1401ee070
204cb4 mov      ebx, eax
204cb6 cmp      eax, dword ptr [r14 + 0x1d8]
204cbd jb       0x140204d1c
204cbf mov      rax, qword ptr [r14 + 0x1b0]
204cc6 inc      qword ptr [r14 + 0x1b8]
204ccd imul     rax, r15
204cd1 add      rax, r12
204cd4 mov      qword ptr [r14 + 0x1b0], rax
204cdb shr      rax, 0x1b
204cdf movzx    eax, al
204ce2 mov      byte ptr [r14 + 0x160], al
204ce9 imul     rax, qword ptr [r14 + 0xe0]
204cf1 xor      rax, qword ptr [r14 + 0xd8]
204cf8 xor      rax, qword ptr [r14 + 0xd0]
204cff mov      rcx, rax
204d02 add      rax, 0xfe1ab
204d08 xor      rcx, 0xfe1ab
204d0f cmp      byte ptr [r14 + 0xe8], 0
204d17 jmp      0x1402052aa
204d1c mov      edx, ebx
204d1e mov      rcx, r14
204d21 call     0x1401f25b0
204d26 movsxd   rcx, dword ptr [r14 + 0x11e0]
204d2d movabs   r8, 0xd6e8feb86659fd93
204d37 mov      rdx, qword ptr [r14 + 0x20]
204d3b mov      rax, rbx
204d3e imul     rax, r8
204d42 imul     rcx, r15
204d46 rol      rdx, 0x11
204d4a xor      rax, rdx
204d4d xor      rcx, qword ptr [r14 + 0x260]
204d54 xor      rax, rcx
204d57 mov      rcx, rax
204d5a shr      rcx, 0x21
204d5e xor      rcx, rax
204d61 imul     rcx, rdi
204d65 mov      rdx, rcx
204d68 shr      rdx, 0x21
204d6c xor      rdx, rcx
204d6f imul     rdx, rsi
204d73 mov      rax, rdx
204d76 shr      rax, 0x21
204d7a xor      rax, rdx
204d7d mov      r10, rax
204d80 shr      r10, 0x1d
204d84 xor      r10, rax
204d87 or       r10, 1
204d8b mov      rax, r10
204d8e mov      qword ptr [r14 + 0x260], r10
204d95 and      eax, 0x3ff
204d9a cmp      rax, 0x2c5
204da0 jne      0x140204db1
204da2 mov      rcx, r14
204da5 call     0x1402297e0
204daa mov      r10, qword ptr [r14 + 0x260]
204db1 movzx    eax, r10b
204db5 and      al, 0x1f
204db7 cmp      al, 0x15
204db9 jne      0x140204ea6
204dbf movsxd   rax, dword ptr [r14 + 0x11e0]
204dc6 xor      rax, 0x5a5a
204dcc mov      rcx, qword ptr [r14 + 0x20]
204dd0 imul     rax, r15
204dd4 rol      rcx, 0x11
204dd8 xor      rax, r10
204ddb xor      rcx, rax
204dde movabs   rax, 0x8f70feda99a6026d
204de8 xor      rcx, rax
204deb mov      rax, rcx
204dee shr      rax, 0x21
204df2 xor      rax, rcx
204df5 imul     rax, rdi
204df9 mov      rcx, rax
204dfc shr      rcx, 0x21
204e00 xor      rcx, rax
204e03 imul     rcx, rsi
204e07 mov      rax, rcx
204e0a shr      rax, 0x21
204e0e xor      rax, rcx
204e11 mov      r9, rax
204e14 shr      r9, 0x1d
204e18 xor      r9, rax
204e1b or       r9, 1
204e1f mov      rax, r9
204e22 mov      rcx, r9
204e25 shr      rax, 8
204e29 and      eax, 3
204e2c shr      rcx, 0x28
204e30 imul     r8, rax, 0x3e
204e34 mov      eax, 0x8421085
204e39 mul      ecx
204e3b mov      eax, ecx
204e3d sub      eax, edx
204e3f shr      eax, 1
204e41 add      eax, edx
204e43 shr      eax, 5
204e46 imul     eax, eax, 0x3e
204e49 sub      ecx, eax
204e4b mov      eax, ecx
204e4d add      r8, rax
204e50 mov      rax, qword ptr [r14 + 0x4b8]
204e57 movsxd   rcx, dword ptr [rax + r8*4]
204e5b movsxd   rax, dword ptr [r14 + 0x4c8]
204e62 xor      rcx, rax
204e65 add      rcx, qword ptr [r14 + 0x4c0]
204e6c xor      rcx, r9
204e6f mov      rax, rcx
204e72 shr      rax, 0x21
204e76 xor      rax, rcx
204e79 imul     rax, rdi
204e7d mov      rcx, rax
204e80 shr      rcx, 0x21
204e84 xor      rcx, rax
204e87 imul     rcx, rsi
204e8b mov      rax, rcx
204e8e shr      rax, 0x21
204e92 xor      rax, rcx
204e95 xor      rax, r10
204e98 inc      qword ptr [r14 + 0x268]
204e9f mov      qword ptr [r14 + 0x260], rax
204ea6 inc      dword ptr [r14 + 0x200]
204ead mov      eax, dword ptr [r14 + 0x200]
204eb4 cmp      eax, dword ptr [r14 + 0x1fc]
204ebb jb       0x140204ed0
204ebd mov      rcx, r14
204ec0 mov      dword ptr [r14 + 0x200], 0
204ecb call     0x1401ef7c0
204ed0 mov      r8d, ebx
204ed3 mov      edx, ebx
204ed5 mov      rcx, r14
204ed8 call     0x1401f0660
204edd inc      qword ptr [r14 + 0x1b8]
204ee4 mov      rcx, rbx
204ee7 mov      r9, qword ptr [r14 + 0x1b0]
204eee mov      rbp, r12
204ef1 mov      r10, qword ptr [r14 + 0x1b8]
204ef8 imul     r9, r15
204efc add      r9, r12
204eff lea      r12d, [rbx + 1]
204f03 mov      qword ptr [r14 + 0x1b0], r9
204f0a mov      rax, r9
204f0d shr      rax, 0x1b
204f11 movzx    edx, al
204f14 mov      byte ptr [r14 + 0x168], dl
204f1b mov      rdi, qword ptr [r14 + 0xe0]
204f22 mov      r11, qword ptr [r14 + 0xd8]
204f29 mov      rsi, qword ptr [r14 + 0xd0]
204f30 movzx    r15d, byte ptr [r14 + 0xe8]
204f38 imul     rdx, rdi
204f3c lea      rax, [r11 + r11*8]
204f40 xor      rdx, rax
204f43 xor      rdx, rsi
204f46 xor      rcx, rdx
204f49 test     r15b, r15b
204f4c lea      rax, [rbx + rdx]
204f50 cmove    rax, rcx
204f54 inc      r10
204f57 mov      qword ptr [r14 + 0x130], rax
204f5e mov      rcx, qword ptr [r14 + 0x1d0]
204f65 mov      rax, qword ptr [r14 + 0x48]
204f69 mov      qword ptr [rsp + 0x60], r10
204f6e movzx    r8d, byte ptr [rcx + rbx]
204f73 xor      r8b, byte ptr [rax + rbx]
204f77 movabs   rax, 0x9e3779b97f4a7c15
204f81 imul     r9, rax
204f85 mov      qword ptr [r14 + 0x1b8], r10
204f8c add      r9, rbp
204f8f mov      rax, r9
204f92 shr      rax, 0x1b
204f96 movzx    edx, al
204f99 lea      rax, [r11 + r11]
204f9d mov      byte ptr [r14 + 0x161], dl
204fa4 imul     rdx, rdi
204fa8 xor      rdx, rax
204fab xor      rdx, rsi
204fae mov      rcx, rdx
204fb1 xor      rcx, r12
204fb4 test     r15b, r15b
204fb7 lea      rax, [rdx + r12]
204fbb cmove    rax, rcx
204fbf mov      qword ptr [r14 + 0xf8], rax
204fc6 movsxd   rdx, dword ptr [r14 + 0x11e0]
204fcd mov      r10, qword ptr [r14 + 0x20]
204fd1 mov      rcx, rdx
204fd4 xor      rcx, qword ptr [r14 + 0x350]
204fdb xor      rcx, r10
204fde xor      rcx, r12
204fe1 xor      rcx, qword ptr [r14 + 0x348]
204fe8 mov      rax, rcx
204feb shr      rax, 0x21
204fef xor      rax, rcx
204ff2 movabs   rcx, 0xff51afd7ed558ccd
204ffc imul     rax, rcx
205000 mov      rcx, rax
205003 shr      rcx, 0x21
205007 xor      rcx, rax
20500a movabs   rax, 0xc4ceb9fe1a85ec53
205014 imul     rcx, rax
205018 movzx    eax, r8b
20501c mov      rbx, rcx
20501f xor      rax, 0xdd
205025 shr      rbx, 0x21
205029 xor      rbx, rcx
20502c lea      rcx, [rip - 0x205033]
205033 mov      qword ptr [r14 + 0x28], rbx
205037 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
20503f xor      bpl, 0x63
205043 inc      edx
205045 mov      dword ptr [r14 + 0x11e0], edx
20504c movabs   r8, 0xff51afd7ed558ccd
205056 test     dl, 0x1f
205059 jne      0x14020509f
20505b movsxd   rax, edx
20505e xor      rax, r10
205061 xor      rax, qword ptr [r14 + 0x348]
205068 mov      rcx, rax
20506b shr      rcx, 0x21
20506f xor      rcx, rax
205072 movabs   rax, 0xc4ceb9fe1a85ec53
20507c imul     rcx, r8
205080 mov      rdx, rcx
205083 shr      rdx, 0x21
205087 xor      rdx, rcx
20508a imul     rdx, rax
20508e mov      rax, rdx
205091 shr      rax, 0x21
205095 xor      rax, rdx
205098 mov      qword ptr [r14 + 0x348], rax
20509f movzx    edx, bpl
2050a3 xor      r10, rdx
2050a6 mov      byte ptr [r14 + 0x4ad], bpl
2050ad xor      r10, r12
2050b0 movabs   r12, 0xc4ceb9fe1a85ec53
2050ba mov      rax, r10
2050bd shr      rax, 0x21
2050c1 xor      rax, r10
2050c4 movabs   r10, 0x9e3779b97f4a7c15
2050ce imul     rax, r8
2050d2 imul     rdx, r10
2050d6 imul     r9, r10
2050da mov      rcx, rax
2050dd shr      rcx, 0x21
2050e1 xor      rcx, rax
2050e4 imul     rcx, r12
2050e8 mov      rax, rcx
2050eb shr      rax, 0x21
2050ef xor      rax, rcx
2050f2 mov      ecx, dword ptr [r14 + 0x1178]
2050f9 mov      qword ptr [r14 + 0x20], rax
2050fd movabs   rax, 0xd6e8feb86659fd93
205107 imul     rcx, rax
20510b xor      rcx, rdx
20510e xor      rcx, rbx
205111 movabs   rbx, 0x2545f4914f6cdd1d
20511b mov      rax, rcx
20511e add      r9, rbx
205121 shr      rax, 0x21
205125 xor      rax, rcx
205128 imul     rax, r8
20512c mov      rdx, rax
20512f shr      rdx, 0x21
205133 xor      rdx, rax
205136 mov      rax, qword ptr [rsp + 0x60]
20513b imul     rdx, r12
20513f shr      rdx, 0x21
205143 and      edx, 3
205146 inc      rax
205149 mov      qword ptr [r14 + 0x1b8], rax
205150 cmp      bpl, 0x3e
205154 jae      0x1402051ee
20515a inc      qword ptr [r14 + 0x11a0]
205161 lea      rax, [rip - 0x205168]
205168 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
205170 mov      qword ptr [r14 + 0x1b0], r9
205177 shr      r9, 0x1b
20517b movzx    eax, r9b
20517f mov      byte ptr [r14 + 0x160], al
205186 imul     rax, rdi
20518a mov      ebx, edx
20518c xor      rax, r11
20518f xor      rax, rsi
205192 mov      rcx, rax
205195 add      rax, r8
205198 xor      rcx, r8
20519b movzx    r8d, bpl
20519f test     r15b, r15b
2051a2 cmove    rax, rcx
2051a6 mov      rcx, r14
2051a9 mov      qword ptr [r14 + 0xf0], rax
2051b0 call     0x1401f1f50
2051b5 mov      r8, qword ptr [rsp + 0x70]
2051ba lea      edx, [r13 - 1]
2051be mov      eax, eax
2051c0 imul     rcx, rbx, 0x3e
2051c4 add      rcx, rax
2051c7 mov      rax, qword ptr [r14 + 0x4b8]
2051ce movsxd   r9, dword ptr [rax + rcx*4]
2051d2 mov      rcx, r14
2051d5 movsxd   rax, dword ptr [r14 + 0x4c8]
2051dc xor      r9, rax
2051df add      r9, qword ptr [r14 + 0x4c0]
2051e6 call     r9
2051e9 jmp      0x1402052b5
2051ee inc      dword ptr [r14 + 0x11a8]
2051f5 mov      rax, r9
2051f8 shr      rax, 0x1b
2051fc movzx    ecx, al
2051ff lea      rax, [r11*4]
205207 mov      byte ptr [r14 + 0x163], cl
20520e imul     rcx, rdi
205212 imul     r9, r10
205216 xor      rcx, rax
205219 xor      rcx, rsi
20521c mov      qword ptr [r14 + 0x108], rcx
205223 mov      r8, qword ptr [r14 + 0x1b8]
20522a add      r9, rbx
20522d mov      rax, r9
205230 shr      rax, 0x1b
205234 movzx    edx, al
205237 mov      byte ptr [r14 + 0x16a], dl
20523e imul     rax, r11, 0xb
205242 imul     rdx, rdi
205246 xor      rdx, rax
205249 xor      rdx, rsi
20524c mov      rcx, rdx
20524f xor      rcx, 1
205253 test     r15b, r15b
205256 lea      rax, [rdx + 1]
20525a cmove    rax, rcx
20525e mov      qword ptr [r14 + 0x140], rax
205265 lea      rax, [r8 + 2]
205269 mov      qword ptr [r14 + 0x1b8], rax
205270 imul     r9, r10
205274 add      r9, rbx
205277 mov      qword ptr [r14 + 0x1b0], r9
20527e shr      r9, 0x1b
205282 movzx    eax, r9b
205286 mov      byte ptr [r14 + 0x160], al
20528d imul     rax, rdi
205291 xor      rax, rsi
205294 xor      rax, r11
205297 mov      rcx, rax
20529a add      rax, 0xfe1ab
2052a0 xor      rcx, 0xfe1ab
2052a7 test     r15b, r15b
2052aa cmove    rax, rcx
2052ae mov      qword ptr [r14 + 0xf0], rax
2052b5 mov      r12, qword ptr [rsp + 0x28]
2052ba mov      rsi, qword ptr [rsp + 0x68]
2052bf mov      r15, qword ptr [rsp + 0x20]
2052c4 add      rsp, 0x30
2052c8 pop      r14
2052ca pop      r13
2052cc pop      rdi
2052cd pop      rbp
2052ce pop      rbx
2052cf ret      
2052d0 mov      edx, 0x54485254
2052d5 mov      rcx, r14
2052d8 call     0x1401ed830
2052dd int3     
2052de mov      edx, 0x43414e59
2052e3 mov      rcx, r14
2052e6 call     0x1401ed830
2052eb int3     
