20c650 push     rbx
20c652 push     r12
20c654 push     r13
20c656 push     r14
20c658 sub      rsp, 0x38
20c65c movsxd   rax, dword ptr [rcx + 0x11e0]
20c663 mov      r14, rcx
20c666 mov      r13d, edx
20c669 movabs   rcx, 0xdc0eb3f9b589e60b
20c673 imul     rax, rcx
20c677 movabs   rcx, 0x7e57393234576234
20c681 mov      r12, r8
20c684 xor      rax, qword ptr [r14 + 0x28]
20c688 mov      qword ptr [rsp + 0x60], rax
20c68d mov      rax, qword ptr [rsp + 0x60]
20c692 movsxd   rax, dword ptr [r14 + 0x11e0]
20c699 imul     rax, rcx
20c69d movabs   rcx, 0x989fa76cb71cee21
20c6a7 xor      rax, qword ptr [r14 + 0x28]
20c6ab mov      qword ptr [rsp + 0x60], rax
20c6b0 mov      rax, qword ptr [rsp + 0x60]
20c6b5 movsxd   rax, dword ptr [r14 + 0x11e0]
20c6bc imul     rax, rcx
20c6c0 movabs   rcx, 0xaeda5eb3cda7a1a
20c6ca xor      rax, qword ptr [r14 + 0x28]
20c6ce mov      qword ptr [rsp + 0x60], rax
20c6d3 mov      rax, qword ptr [rsp + 0x60]
20c6d8 mov      rax, qword ptr [r14 + 0x2e0]
20c6df add      rax, rcx
20c6e2 mov      rcx, rax
20c6e5 shr      rcx, 0x21
20c6e9 xor      rcx, rax
20c6ec movabs   rax, 0xff51afd7ed558ccd
20c6f6 imul     rcx, rax
20c6fa movabs   rax, 0xc4ceb9fe1a85ec53
20c704 mov      rdx, rcx
20c707 shr      rdx, 0x21
20c70b xor      rdx, rcx
20c70e mov      rcx, r14
20c711 imul     rdx, rax
20c715 mov      rax, rdx
20c718 shr      rax, 0x21
20c71c xor      rdx, rax
20c71f mov      rax, qword ptr [r14 + 0x2e0]
20c726 or       rdx, 1
20c72a xor      rdx, rax
20c72d mov      qword ptr [r14 + 0x2e0], rdx
20c734 call     0x1401ee940
20c739 mov      rcx, r14
20c73c mov      rbx, rax
20c73f call     0x1401ee940
20c744 mov      r9, qword ptr [r14 + 0x28]
20c748 mov      r8, rbx
20c74b mov      rdx, rax
20c74e mov      ecx, 2
20c753 call     0x1401ed730
20c758 mov      rdx, rax
20c75b mov      rcx, r14
20c75e call     0x1401ee820
20c763 mov      rax, qword ptr [r14 + 0x2e0]
20c76a test     r13d, r13d
20c76d jns      0x14020d305
20c773 cmp      qword ptr [r14 + 0x11b8], r12
20c77a jne      0x14020d313
20c780 movsxd   rax, dword ptr [r14 + 0x11e0]
20c787 movabs   rcx, 0x990845a989661de5
20c791 imul     rax, rcx
20c795 mov      rcx, r14
20c798 xor      rax, qword ptr [r14 + 0x28]
20c79c mov      qword ptr [rsp + 0x60], rax
20c7a1 mov      rax, qword ptr [rsp + 0x60]
20c7a6 call     0x1401ee450
20c7ab test     eax, eax
20c7ad jne      0x14020d2f9
20c7b3 cmp      dword ptr [r14 + 0xad0], eax
20c7ba jne      0x14020d2f9
20c7c0 mov      r8, qword ptr [r14 + 0xf0]
20c7c7 movzx    ecx, byte ptr [r14 + 0x160]
20c7cf mov      rax, r8
20c7d2 mov      r10, qword ptr [r14 + 0xe0]
20c7d9 mov      rbx, qword ptr [r14 + 0xd0]
20c7e0 mov      r11, qword ptr [r14 + 0xd8]
20c7e7 mov      r9, qword ptr [r14 + 0x1b0]
20c7ee imul     rcx, r10
20c7f2 mov      qword ptr [rsp + 0x68], rbp
20c7f7 movabs   rbp, 0x2545f4914f6cdd1d
20c801 xor      rcx, rbx
20c804 mov      qword ptr [rsp + 0x30], rsi
20c809 mov      rsi, qword ptr [r14 + 0x1b8]
20c810 xor      rcx, r11
20c813 xor      rax, rcx
20c816 mov      qword ptr [rsp + 0x28], rdi
20c81b movzx    edi, byte ptr [r14 + 0xe8]
20c823 sub      r8, rcx
20c826 test     dil, dil
20c829 mov      qword ptr [rsp + 0x20], r15
20c82e movabs   r15, 0x9e3779b97f4a7c15
20c838 cmove    r8, rax
20c83c inc      rsi
20c83f imul     r9, r15
20c843 mov      qword ptr [r14 + 0x1b8], rsi
20c84a add      r9, rbp
20c84d mov      qword ptr [r14 + 0x1b0], r9
20c854 mov      rax, r9
20c857 shr      rax, 0x1b
20c85b movzx    edx, al
20c85e mov      byte ptr [r14 + 0x160], dl
20c865 imul     rdx, r10
20c869 xor      rdx, rbx
20c86c xor      rdx, r11
20c86f mov      rcx, rdx
20c872 xor      rcx, r8
20c875 test     dil, dil
20c878 lea      rax, [rdx + r8]
20c87c cmove    rax, rcx
20c880 mov      qword ptr [r14 + 0xf0], rax
20c887 cmp      r8d, 0x338040
20c88e jne      0x14020d2e5
20c894 mov      eax, r13d
20c897 btr      eax, 0x1f
20c89b cmp      eax, 2
20c89e jae      0x14020c8ea
20c8a0 imul     r9, r15
20c8a4 lea      rax, [rsi + 1]
20c8a8 mov      qword ptr [r14 + 0x1b8], rax
20c8af add      r9, rbp
20c8b2 mov      qword ptr [r14 + 0x1b0], r9
20c8b9 shr      r9, 0x1b
20c8bd movzx    eax, r9b
20c8c1 mov      byte ptr [r14 + 0x160], al
20c8c8 imul     rax, r10
20c8cc xor      rax, rbx
20c8cf xor      rax, r11
20c8d2 mov      rcx, rax
20c8d5 add      rax, 0x1ad951
20c8db xor      rcx, 0x1ad951
20c8e2 test     dil, dil
20c8e5 jmp      0x14020d2da
20c8ea mov      rcx, r14
20c8ed call     0x1401ee070
20c8f2 movzx    ecx, byte ptr [r14 + 0x4ad]
20c8fa movabs   rbx, 0xff51afd7ed558ccd
20c904 mov      r11, qword ptr [r14 + 0xe0]
20c90b movabs   r8, 0xc4ceb9fe1a85ec53
20c915 mov      r10, qword ptr [r14 + 0xd0]
20c91c movzx    r9d, byte ptr [r14 + 0xe8]
20c924 mov      eax, eax
20c926 xor      rcx, rax
20c929 xor      rcx, qword ptr [r14 + 0x11e8]
20c930 mov      rax, rcx
20c933 shr      rax, 0x21
20c937 xor      rax, rcx
20c93a imul     rax, rbx
20c93e mov      rcx, rax
20c941 shr      rcx, 0x21
20c945 xor      rcx, rax
20c948 imul     rcx, r8
20c94c mov      rdx, rcx
20c94f shr      rdx, 0x21
20c953 xor      rdx, rcx
20c956 mov      qword ptr [r14 + 0x11e8], rdx
20c95d xor      rdx, qword ptr [r14 + 0x20]
20c961 xor      rdx, qword ptr [r14 + 0x28]
20c965 mov      rax, rdx
20c968 shr      rax, 0x21
20c96c xor      rax, rdx
20c96f imul     rax, rbx
20c973 mov      rcx, rax
20c976 shr      rcx, 0x21
20c97a xor      rcx, rax
20c97d imul     rcx, r8
20c981 mov      rax, rcx
20c984 shr      rax, 0x21
20c988 xor      rax, rcx
20c98b mov      qword ptr [r14 + 0x20], rax
20c98f mov      rdx, qword ptr [r14 + 0x138]
20c996 movzx    ecx, byte ptr [r14 + 0x169]
20c99e mov      rax, qword ptr [r14 + 0xd8]
20c9a5 imul     rcx, r11
20c9a9 lea      rbx, [rax + rax*4]
20c9ad mov      rax, rdx
20c9b0 add      rbx, rbx
20c9b3 xor      rcx, rbx
20c9b6 xor      rcx, r10
20c9b9 xor      rax, rcx
20c9bc sub      rdx, rcx
20c9bf test     r9b, r9b
20c9c2 cmove    rdx, rax
20c9c6 mov      rax, qword ptr [r14 + 0x1b0]
20c9cd inc      qword ptr [r14 + 0x1b8]
20c9d4 imul     rax, r15
20c9d8 add      rax, rbp
20c9db mov      qword ptr [r14 + 0x1b0], rax
20c9e2 shr      rax, 0x1b
20c9e6 movzx    r8d, al
20c9ea mov      byte ptr [r14 + 0x169], r8b
20c9f1 imul     r8, r11
20c9f5 xor      r8, rbx
20c9f8 xor      r8, r10
20c9fb mov      rcx, r8
20c9fe xor      rcx, rdx
20ca01 test     r9b, r9b
20ca04 lea      rax, [r8 + rdx]
20ca08 cmove    rax, rcx
20ca0c mov      rcx, r14
20ca0f mov      qword ptr [r14 + 0x138], rax
20ca16 call     0x1401f0910
20ca1b mov      rax, qword ptr [r14 + 0xd8]
20ca22 mov      r10, qword ptr [r14 + 0xe0]
20ca29 movzx    ecx, byte ptr [r14 + 0x168]
20ca31 mov      rbx, qword ptr [r14 + 0xd0]
20ca38 mov      rdx, qword ptr [r14 + 0x130]
20ca3f lea      r11, [rax + rax*8]
20ca43 movzx    r9d, byte ptr [r14 + 0xe8]
20ca4b mov      rax, rdx
20ca4e imul     rcx, r10
20ca52 xor      rcx, r11
20ca55 xor      rcx, rbx
20ca58 xor      rax, rcx
20ca5b sub      rdx, rcx
20ca5e test     r9b, r9b
20ca61 cmove    rdx, rax
20ca65 mov      rax, qword ptr [r14 + 0x1b0]
20ca6c inc      qword ptr [r14 + 0x1b8]
20ca73 imul     rax, r15
20ca77 add      rax, rbp
20ca7a mov      qword ptr [r14 + 0x1b0], rax
20ca81 shr      rax, 0x1b
20ca85 movzx    r8d, al
20ca89 mov      byte ptr [r14 + 0x168], r8b
20ca90 imul     r8, r10
20ca94 xor      r8, r11
20ca97 xor      r8, rbx
20ca9a mov      rcx, r8
20ca9d xor      rcx, rdx
20caa0 test     r9b, r9b
20caa3 lea      rax, [r8 + rdx]
20caa7 cmove    rax, rcx
20caab mov      rcx, r14
20caae mov      qword ptr [r14 + 0x130], rax
20cab5 call     0x1401f0910
20caba mov      rcx, r14
20cabd call     0x1401ee070
20cac2 cmp      eax, dword ptr [r14 + 0x1d8]
20cac9 jae      0x14020cad5
20cacb mov      edx, eax
20cacd mov      rcx, r14
20cad0 call     0x1401f0910
20cad5 mov      rsi, qword ptr [r14 + 0xe0]
20cadc mov      rbp, qword ptr [r14 + 0xd0]
20cae3 mov      r11, qword ptr [r14 + 0x130]
20caea movzx    edi, byte ptr [r14 + 0xe8]
20caf2 mov      rax, r11
20caf5 movzx    ecx, byte ptr [r14 + 0x168]
20cafd mov      rbx, qword ptr [r14 + 0xd8]
20cb04 mov      r8, qword ptr [r14 + 0x1b8]
20cb0b mov      r10, qword ptr [r14 + 0x1b0]
20cb12 imul     rcx, rsi
20cb16 lea      r9, [rbx + rbx*8]
20cb1a xor      rcx, r9
20cb1d xor      rcx, rbp
20cb20 xor      rax, rcx
20cb23 sub      r11, rcx
20cb26 test     dil, dil
20cb29 movabs   rcx, 0x2545f4914f6cdd1d
20cb33 cmove    r11, rax
20cb37 imul     r10, r15
20cb3b add      r10, rcx
20cb3e mov      rcx, r11
20cb41 mov      rax, r10
20cb44 shr      rax, 0x1b
20cb48 movzx    edx, al
20cb4b mov      byte ptr [r14 + 0x168], dl
20cb52 imul     rdx, rsi
20cb56 xor      rdx, r9
20cb59 xor      rdx, rbp
20cb5c xor      rcx, rdx
20cb5f test     dil, dil
20cb62 lea      rax, [r11 + rdx]
20cb66 cmove    rax, rcx
20cb6a mov      rcx, r11
20cb6d mov      qword ptr [r14 + 0x130], rax
20cb74 movabs   rax, 0x2545f4914f6cdd1d
20cb7e imul     r10, r15
20cb82 add      r10, rax
20cb85 lea      rax, [r8 + 2]
20cb89 mov      qword ptr [r14 + 0x1b8], rax
20cb90 mov      r8d, 0xe673
20cb96 mov      qword ptr [r14 + 0x1b0], r10
20cb9d lea      rax, [rbx + rbx*4]
20cba1 add      rax, rax
20cba4 shr      r10, 0x1b
20cba8 movzx    edx, r10b
20cbac mov      byte ptr [r14 + 0x169], dl
20cbb3 imul     rdx, rsi
20cbb7 xor      rdx, rax
20cbba xor      rdx, rbp
20cbbd xor      rcx, rdx
20cbc0 test     dil, dil
20cbc3 lea      rax, [r11 + rdx]
20cbc7 cmove    rax, rcx
20cbcb mov      rcx, r14
20cbce mov      qword ptr [r14 + 0x138], rax
20cbd5 movzx    edx, byte ptr [r14 + 0x4ad]
20cbdd xor      rdx, qword ptr [r14 + 0x348]
20cbe4 call     0x1401f1520
20cbe9 mov      r8, qword ptr [r14 + 0x348]
20cbf0 movabs   rdi, 0xff51afd7ed558ccd
20cbfa mov      rax, r8
20cbfd movabs   rsi, 0xc4ceb9fe1a85ec53
20cc07 xor      rax, qword ptr [r14 + 0x20]
20cc0b mov      rcx, rax
20cc0e shr      rcx, 0x21
20cc12 xor      rcx, rax
20cc15 imul     rcx, rdi
20cc19 mov      rax, rcx
20cc1c shr      rax, 0x21
20cc20 xor      rax, rcx
20cc23 imul     rax, rsi
20cc27 mov      rdx, rax
20cc2a shr      rdx, 0x21
20cc2e xor      edx, eax
20cc30 lea      eax, [rdx + 1]
20cc33 mov      ecx, eax
20cc35 xor      eax, edx
20cc37 imul     ecx, edx
20cc3a not      ecx
20cc3c and      ecx, eax
20cc3e test     cl, 1
20cc41 je       0x14020ccb4
20cc43 and      r8b, 3
20cc47 cmp      r8b, 1
20cc4b jne      0x14020ccb4
20cc4d mov      rax, qword ptr [r14 + 0x1b0]
20cc54 movabs   rcx, 0x2545f4914f6cdd1d
20cc5e inc      qword ptr [r14 + 0x1b8]
20cc65 imul     rax, r15
20cc69 add      rax, rcx
20cc6c mov      qword ptr [r14 + 0x1b0], rax
20cc73 shr      rax, 0x1b
20cc77 movzx    eax, al
20cc7a mov      byte ptr [r14 + 0x160], al
20cc81 imul     rax, qword ptr [r14 + 0xe0]
20cc89 xor      rax, qword ptr [r14 + 0xd8]
20cc90 xor      rax, qword ptr [r14 + 0xd0]
20cc97 mov      rcx, rax
20cc9a add      rax, 0x190631
20cca0 xor      rcx, 0x190631
20cca7 cmp      byte ptr [r14 + 0xe8], 0
20ccaf jmp      0x14020d2da
20ccb4 mov      rcx, r14
20ccb7 call     0x1401ee070
20ccbc mov      ebx, eax
20ccbe cmp      eax, dword ptr [r14 + 0x1d8]
20ccc5 jb       0x14020cd2e
20ccc7 mov      rax, qword ptr [r14 + 0x1b0]
20ccce movabs   rcx, 0x2545f4914f6cdd1d
20ccd8 inc      qword ptr [r14 + 0x1b8]
20ccdf imul     rax, r15
20cce3 add      rax, rcx
20cce6 mov      qword ptr [r14 + 0x1b0], rax
20cced shr      rax, 0x1b
20ccf1 movzx    eax, al
20ccf4 mov      byte ptr [r14 + 0x160], al
20ccfb imul     rax, qword ptr [r14 + 0xe0]
20cd03 xor      rax, qword ptr [r14 + 0xd8]
20cd0a xor      rax, qword ptr [r14 + 0xd0]
20cd11 mov      rcx, rax
20cd14 add      rax, 0xfe1ab
20cd1a xor      rcx, 0xfe1ab
20cd21 cmp      byte ptr [r14 + 0xe8], 0
20cd29 jmp      0x14020d2da
20cd2e mov      edx, ebx
20cd30 mov      rcx, r14
20cd33 call     0x1401f25b0
20cd38 movsxd   rcx, dword ptr [r14 + 0x11e0]
20cd3f movabs   r8, 0xd6e8feb86659fd93
20cd49 mov      rdx, qword ptr [r14 + 0x20]
20cd4d mov      rax, rbx
20cd50 imul     rax, r8
20cd54 imul     rcx, r15
20cd58 rol      rdx, 0x11
20cd5c xor      rax, rdx
20cd5f xor      rcx, qword ptr [r14 + 0x260]
20cd66 xor      rax, rcx
20cd69 mov      rcx, rax
20cd6c shr      rcx, 0x21
20cd70 xor      rcx, rax
20cd73 imul     rcx, rdi
20cd77 mov      rdx, rcx
20cd7a shr      rdx, 0x21
20cd7e xor      rdx, rcx
20cd81 imul     rdx, rsi
20cd85 mov      rax, rdx
20cd88 shr      rax, 0x21
20cd8c xor      rax, rdx
20cd8f mov      r10, rax
20cd92 shr      r10, 0x1d
20cd96 xor      r10, rax
20cd99 or       r10, 1
20cd9d mov      rax, r10
20cda0 mov      qword ptr [r14 + 0x260], r10
20cda7 and      eax, 0x3ff
20cdac cmp      rax, 0x2c5
20cdb2 jne      0x14020cdc3
20cdb4 mov      rcx, r14
20cdb7 call     0x1402297e0
20cdbc mov      r10, qword ptr [r14 + 0x260]
20cdc3 movzx    eax, r10b
20cdc7 and      al, 0x1f
20cdc9 cmp      al, 0x15
20cdcb jne      0x14020ceb8
20cdd1 movsxd   rax, dword ptr [r14 + 0x11e0]
20cdd8 xor      rax, 0x5a5a
20cdde mov      rcx, qword ptr [r14 + 0x20]
20cde2 imul     rax, r15
20cde6 rol      rcx, 0x11
20cdea xor      rax, r10
20cded xor      rcx, rax
20cdf0 movabs   rax, 0x8f70feda99a6026d
20cdfa xor      rcx, rax
20cdfd mov      rax, rcx
20ce00 shr      rax, 0x21
20ce04 xor      rax, rcx
20ce07 imul     rax, rdi
20ce0b mov      rcx, rax
20ce0e shr      rcx, 0x21
20ce12 xor      rcx, rax
20ce15 imul     rcx, rsi
20ce19 mov      rax, rcx
20ce1c shr      rax, 0x21
20ce20 xor      rax, rcx
20ce23 mov      r9, rax
20ce26 shr      r9, 0x1d
20ce2a xor      r9, rax
20ce2d or       r9, 1
20ce31 mov      rax, r9
20ce34 mov      rcx, r9
20ce37 shr      rax, 8
20ce3b and      eax, 3
20ce3e shr      rcx, 0x28
20ce42 imul     r8, rax, 0x3e
20ce46 mov      eax, 0x8421085
20ce4b mul      ecx
20ce4d mov      eax, ecx
20ce4f sub      eax, edx
20ce51 shr      eax, 1
20ce53 add      eax, edx
20ce55 shr      eax, 5
20ce58 imul     eax, eax, 0x3e
20ce5b sub      ecx, eax
20ce5d mov      eax, ecx
20ce5f add      r8, rax
20ce62 mov      rax, qword ptr [r14 + 0x4b8]
20ce69 movsxd   rcx, dword ptr [rax + r8*4]
20ce6d movsxd   rax, dword ptr [r14 + 0x4c8]
20ce74 xor      rcx, rax
20ce77 add      rcx, qword ptr [r14 + 0x4c0]
20ce7e xor      rcx, r9
20ce81 mov      rax, rcx
20ce84 shr      rax, 0x21
20ce88 xor      rax, rcx
20ce8b imul     rax, rdi
20ce8f mov      rcx, rax
20ce92 shr      rcx, 0x21
20ce96 xor      rcx, rax
20ce99 imul     rcx, rsi
20ce9d mov      rax, rcx
20cea0 shr      rax, 0x21
20cea4 xor      rax, rcx
20cea7 xor      rax, r10
20ceaa inc      qword ptr [r14 + 0x268]
20ceb1 mov      qword ptr [r14 + 0x260], rax
20ceb8 inc      dword ptr [r14 + 0x200]
20cebf mov      eax, dword ptr [r14 + 0x200]
20cec6 cmp      eax, dword ptr [r14 + 0x1fc]
20cecd jb       0x14020cee2
20cecf mov      rcx, r14
20ced2 mov      dword ptr [r14 + 0x200], 0
20cedd call     0x1401ef7c0
20cee2 mov      r8d, ebx
20cee5 mov      edx, ebx
20cee7 mov      rcx, r14
20ceea call     0x1401f0660
20ceef inc      qword ptr [r14 + 0x1b8]
20cef6 movabs   rax, 0x2545f4914f6cdd1d
20cf00 mov      r9, qword ptr [r14 + 0x1b0]
20cf07 mov      r10, qword ptr [r14 + 0x1b8]
20cf0e imul     r9, r15
20cf12 add      r9, rax
20cf15 mov      qword ptr [r14 + 0x1b0], r9
20cf1c mov      rax, r9
20cf1f shr      rax, 0x1b
20cf23 movzx    edx, al
20cf26 mov      byte ptr [r14 + 0x168], dl
20cf2d mov      rdi, qword ptr [r14 + 0xe0]
20cf34 mov      r11, qword ptr [r14 + 0xd8]
20cf3b mov      rsi, qword ptr [r14 + 0xd0]
20cf42 movzx    r15d, byte ptr [r14 + 0xe8]
20cf4a imul     rdx, rdi
20cf4e lea      rax, [r11 + r11*8]
20cf52 xor      rdx, rax
20cf55 xor      rdx, rsi
20cf58 mov      rcx, rdx
20cf5b xor      rcx, rbx
20cf5e test     r15b, r15b
20cf61 lea      rax, [rdx + rbx]
20cf65 cmove    rax, rcx
20cf69 inc      r10
20cf6c mov      qword ptr [r14 + 0x130], rax
20cf73 mov      rcx, qword ptr [r14 + 0x1d0]
20cf7a mov      rax, qword ptr [r14 + 0x48]
20cf7e mov      qword ptr [rsp + 0x78], r10
20cf83 movzx    r8d, byte ptr [rcx + rbx]
20cf88 xor      r8b, byte ptr [rax + rbx]
20cf8c inc      ebx
20cf8e mov      qword ptr [r14 + 0x1b8], r10
20cf95 movabs   rax, 0x9e3779b97f4a7c15
20cf9f imul     r9, rax
20cfa3 mov      qword ptr [rsp + 0x60], rbx
20cfa8 movabs   rax, 0x2545f4914f6cdd1d
20cfb2 add      r9, rax
20cfb5 mov      rax, r9
20cfb8 shr      rax, 0x1b
20cfbc movzx    edx, al
20cfbf lea      rax, [r11 + r11]
20cfc3 mov      byte ptr [r14 + 0x161], dl
20cfca imul     rdx, rdi
20cfce xor      rdx, rax
20cfd1 xor      rdx, rsi
20cfd4 mov      rcx, rdx
20cfd7 xor      rcx, rbx
20cfda test     r15b, r15b
20cfdd lea      rax, [rdx + rbx]
20cfe1 cmove    rax, rcx
20cfe5 mov      qword ptr [r14 + 0xf8], rax
20cfec movsxd   rdx, dword ptr [r14 + 0x11e0]
20cff3 mov      r10, qword ptr [r14 + 0x20]
20cff7 mov      rcx, rdx
20cffa xor      rcx, qword ptr [r14 + 0x350]
20d001 xor      rcx, r10
20d004 xor      rcx, rbx
20d007 movabs   rbx, 0xff51afd7ed558ccd
20d011 xor      rcx, qword ptr [r14 + 0x348]
20d018 mov      rax, rcx
20d01b shr      rax, 0x21
20d01f xor      rax, rcx
20d022 imul     rax, rbx
20d026 mov      rcx, rax
20d029 shr      rcx, 0x21
20d02d xor      rcx, rax
20d030 movabs   rax, 0xc4ceb9fe1a85ec53
20d03a imul     rcx, rax
20d03e movzx    eax, r8b
20d042 mov      rbx, rcx
20d045 shr      rbx, 0x21
20d049 xor      rbx, rcx
20d04c lea      rcx, [rip - 0x20d053]
20d053 xor      rax, 0xdd
20d059 mov      qword ptr [r14 + 0x28], rbx
20d05d movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
20d065 xor      bpl, 0x63
20d069 movabs   r8, 0xff51afd7ed558ccd
20d073 inc      edx
20d075 mov      dword ptr [r14 + 0x11e0], edx
20d07c test     dl, 0x1f
20d07f jne      0x14020d0c5
20d081 movsxd   rax, edx
20d084 xor      rax, r10
20d087 xor      rax, qword ptr [r14 + 0x348]
20d08e mov      rcx, rax
20d091 shr      rcx, 0x21
20d095 xor      rcx, rax
20d098 movabs   rax, 0xc4ceb9fe1a85ec53
20d0a2 imul     rcx, r8
20d0a6 mov      rdx, rcx
20d0a9 shr      rdx, 0x21
20d0ad xor      rdx, rcx
20d0b0 imul     rdx, rax
20d0b4 mov      rax, rdx
20d0b7 shr      rax, 0x21
20d0bb xor      rax, rdx
20d0be mov      qword ptr [r14 + 0x348], rax
20d0c5 movzx    edx, bpl
20d0c9 xor      r10, rdx
20d0cc mov      byte ptr [r14 + 0x4ad], bpl
20d0d3 xor      r10, qword ptr [rsp + 0x60]
20d0d8 mov      rax, r10
20d0db shr      rax, 0x21
20d0df xor      rax, r10
20d0e2 movabs   r10, 0x9e3779b97f4a7c15
20d0ec imul     rax, r8
20d0f0 imul     rdx, r10
20d0f4 imul     r9, r10
20d0f8 mov      rcx, rax
20d0fb shr      rcx, 0x21
20d0ff xor      rcx, rax
20d102 movabs   rax, 0xc4ceb9fe1a85ec53
20d10c imul     rcx, rax
20d110 mov      rax, rcx
20d113 shr      rax, 0x21
20d117 xor      rax, rcx
20d11a mov      ecx, dword ptr [r14 + 0x1178]
20d121 mov      qword ptr [r14 + 0x20], rax
20d125 movabs   rax, 0xd6e8feb86659fd93
20d12f imul     rcx, rax
20d133 xor      rcx, rdx
20d136 xor      rcx, rbx
20d139 movabs   rbx, 0x2545f4914f6cdd1d
20d143 mov      rax, rcx
20d146 add      r9, rbx
20d149 shr      rax, 0x21
20d14d xor      rax, rcx
20d150 imul     rax, r8
20d154 mov      rdx, rax
20d157 shr      rdx, 0x21
20d15b xor      rdx, rax
20d15e movabs   rax, 0xc4ceb9fe1a85ec53
20d168 imul     rdx, rax
20d16c mov      rax, qword ptr [rsp + 0x78]
20d171 shr      rdx, 0x21
20d175 and      edx, 3
20d178 inc      rax
20d17b mov      qword ptr [r14 + 0x1b8], rax
20d182 cmp      bpl, 0x3e
20d186 jae      0x14020d21e
20d18c inc      qword ptr [r14 + 0x11a0]
20d193 lea      rax, [rip - 0x20d19a]
20d19a mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
20d1a2 mov      qword ptr [r14 + 0x1b0], r9
20d1a9 shr      r9, 0x1b
20d1ad movzx    eax, r9b
20d1b1 mov      byte ptr [r14 + 0x160], al
20d1b8 imul     rax, rdi
20d1bc mov      ebx, edx
20d1be xor      rax, r11
20d1c1 xor      rax, rsi
20d1c4 mov      rcx, rax
20d1c7 add      rax, r8
20d1ca xor      rcx, r8
20d1cd movzx    r8d, bpl
20d1d1 test     r15b, r15b
20d1d4 cmove    rax, rcx
20d1d8 mov      rcx, r14
20d1db mov      qword ptr [r14 + 0xf0], rax
20d1e2 call     0x1401f1f50
20d1e7 mov      eax, eax
20d1e9 lea      edx, [r13 - 1]
20d1ed imul     rcx, rbx, 0x3e
20d1f1 mov      r8, r12
20d1f4 add      rcx, rax
20d1f7 mov      rax, qword ptr [r14 + 0x4b8]
20d1fe movsxd   r9, dword ptr [rax + rcx*4]
20d202 mov      rcx, r14
20d205 movsxd   rax, dword ptr [r14 + 0x4c8]
20d20c xor      r9, rax
20d20f add      r9, qword ptr [r14 + 0x4c0]
20d216 call     r9
20d219 jmp      0x14020d2e5
20d21e inc      dword ptr [r14 + 0x11a8]
20d225 mov      rax, r9
20d228 shr      rax, 0x1b
20d22c movzx    ecx, al
20d22f lea      rax, [r11*4]
20d237 mov      byte ptr [r14 + 0x163], cl
20d23e imul     rcx, rdi
20d242 imul     r9, r10
20d246 xor      rcx, rax
20d249 xor      rcx, rsi
20d24c mov      qword ptr [r14 + 0x108], rcx
20d253 mov      r8, qword ptr [r14 + 0x1b8]
20d25a add      r9, rbx
20d25d mov      rax, r9
20d260 shr      rax, 0x1b
20d264 movzx    edx, al
20d267 mov      byte ptr [r14 + 0x16a], dl
20d26e imul     rax, r11, 0xb
20d272 imul     rdx, rdi
20d276 xor      rdx, rax
20d279 xor      rdx, rsi
20d27c mov      rcx, rdx
20d27f xor      rcx, 1
20d283 test     r15b, r15b
20d286 lea      rax, [rdx + 1]
20d28a cmove    rax, rcx
20d28e mov      qword ptr [r14 + 0x140], rax
20d295 lea      rax, [r8 + 2]
20d299 mov      qword ptr [r14 + 0x1b8], rax
20d2a0 imul     r9, r10
20d2a4 add      r9, rbx
20d2a7 mov      qword ptr [r14 + 0x1b0], r9
20d2ae shr      r9, 0x1b
20d2b2 movzx    eax, r9b
20d2b6 mov      byte ptr [r14 + 0x160], al
20d2bd imul     rax, rdi
20d2c1 xor      rax, rsi
20d2c4 xor      rax, r11
20d2c7 mov      rcx, rax
20d2ca add      rax, 0xfe1ab
20d2d0 xor      rcx, 0xfe1ab
20d2d7 test     r15b, r15b
20d2da cmove    rax, rcx
20d2de mov      qword ptr [r14 + 0xf0], rax
20d2e5 mov      rdi, qword ptr [rsp + 0x28]
20d2ea mov      rsi, qword ptr [rsp + 0x30]
20d2ef mov      rbp, qword ptr [rsp + 0x68]
20d2f4 mov      r15, qword ptr [rsp + 0x20]
20d2f9 add      rsp, 0x38
20d2fd pop      r14
20d2ff pop      r13
20d301 pop      r12
20d303 pop      rbx
20d304 ret      
20d305 mov      edx, 0x54485254
20d30a mov      rcx, r14
20d30d call     0x1401ed830
20d312 int3     
20d313 mov      edx, 0x43414e59
20d318 mov      rcx, r14
20d31b call     0x1401ed830
20d320 int3     
