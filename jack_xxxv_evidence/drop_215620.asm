215620 push     r12
215622 push     r13
215624 push     r14
215626 sub      rsp, 0x40
21562a movsxd   rax, dword ptr [rcx + 0x11e0]
215631 mov      r14, rcx
215634 mov      r13d, edx
215637 movabs   rcx, 0x4328aeb5b475ce75
215641 imul     rax, rcx
215645 movabs   rcx, 0xe171247e35ab4a4a
21564f mov      r12, r8
215652 xor      rax, qword ptr [r14 + 0x28]
215656 mov      qword ptr [rsp + 0x60], rax
21565b mov      rax, qword ptr [rsp + 0x60]
215660 movsxd   rax, dword ptr [r14 + 0x11e0]
215667 imul     rax, rcx
21566b movabs   rcx, 0x7b9ba20b6e0c65f
215675 xor      rax, qword ptr [r14 + 0x28]
215679 mov      qword ptr [rsp + 0x60], rax
21567e mov      rax, qword ptr [rsp + 0x60]
215683 movsxd   rax, dword ptr [r14 + 0x11e0]
21568a imul     rax, rcx
21568e movabs   rcx, 0x730326f9be6dde71
215698 xor      rax, qword ptr [r14 + 0x28]
21569c mov      qword ptr [rsp + 0x60], rax
2156a1 mov      rax, qword ptr [rsp + 0x60]
2156a6 mov      rax, qword ptr [r14 + 0x2f8]
2156ad xor      rax, rcx
2156b0 mov      rcx, rax
2156b3 shr      rcx, 0x21
2156b7 xor      rcx, rax
2156ba movabs   rax, 0xff51afd7ed558ccd
2156c4 imul     rcx, rax
2156c8 movabs   rax, 0xc4ceb9fe1a85ec53
2156d2 mov      rdx, rcx
2156d5 shr      rdx, 0x21
2156d9 xor      rdx, rcx
2156dc mov      rcx, r14
2156df imul     rdx, rax
2156e3 mov      rax, rdx
2156e6 shr      rax, 0x21
2156ea xor      rdx, rax
2156ed mov      rax, qword ptr [r14 + 0x2f8]
2156f4 shr      rax, 7
2156f8 add      rax, rdx
2156fb mov      qword ptr [r14 + 0x2f8], rax
215702 call     0x1401ee940
215707 mov      rax, qword ptr [r14 + 0x2f8]
21570e test     r13d, r13d
215711 jns      0x1402162b2
215717 cmp      qword ptr [r14 + 0x11b8], r12
21571e jne      0x1402162c0
215724 movsxd   rax, dword ptr [r14 + 0x11e0]
21572b movabs   rcx, 0x820c05ef560a06d0
215735 imul     rax, rcx
215739 mov      rcx, r14
21573c xor      rax, qword ptr [r14 + 0x28]
215740 mov      qword ptr [rsp + 0x60], rax
215745 mov      rax, qword ptr [rsp + 0x60]
21574a call     0x1401ee450
21574f test     eax, eax
215751 jne      0x1402162a7
215757 cmp      dword ptr [r14 + 0xad0], eax
21575e jne      0x1402162a7
215764 mov      r8, qword ptr [r14 + 0xf0]
21576b movzx    ecx, byte ptr [r14 + 0x160]
215773 mov      rax, r8
215776 mov      r10, qword ptr [r14 + 0xe0]
21577d mov      r11, qword ptr [r14 + 0xd8]
215784 mov      r9, qword ptr [r14 + 0x1b0]
21578b imul     rcx, r10
21578f mov      qword ptr [rsp + 0x68], rbx
215794 mov      rbx, qword ptr [r14 + 0xd0]
21579b xor      rcx, rbx
21579e mov      qword ptr [rsp + 0x38], rbp
2157a3 xor      rcx, r11
2157a6 mov      qword ptr [rsp + 0x30], rsi
2157ab mov      rsi, qword ptr [r14 + 0x1b8]
2157b2 xor      rax, rcx
2157b5 sub      r8, rcx
2157b8 mov      qword ptr [rsp + 0x28], rdi
2157bd movzx    edi, byte ptr [r14 + 0xe8]
2157c5 movabs   rbp, 0x2545f4914f6cdd1d
2157cf test     dil, dil
2157d2 mov      qword ptr [rsp + 0x20], r15
2157d7 movabs   r15, 0x9e3779b97f4a7c15
2157e1 cmove    r8, rax
2157e5 inc      rsi
2157e8 imul     r9, r15
2157ec mov      qword ptr [r14 + 0x1b8], rsi
2157f3 mov      rcx, r8
2157f6 add      r9, rbp
2157f9 mov      qword ptr [r14 + 0x1b0], r9
215800 mov      rax, r9
215803 shr      rax, 0x1b
215807 movzx    edx, al
21580a mov      byte ptr [r14 + 0x160], dl
215811 imul     rdx, r10
215815 xor      rdx, rbx
215818 xor      rdx, r11
21581b xor      rcx, rdx
21581e test     dil, dil
215821 lea      rax, [r8 + rdx]
215825 cmove    rax, rcx
215829 mov      qword ptr [r14 + 0xf0], rax
215830 cmp      r8d, 0x48cad
215837 jne      0x14021628e
21583d mov      eax, r13d
215840 btr      eax, 0x1f
215844 cmp      eax, 2
215847 jae      0x140215893
215849 imul     r9, r15
21584d lea      rax, [rsi + 1]
215851 mov      qword ptr [r14 + 0x1b8], rax
215858 add      r9, rbp
21585b mov      qword ptr [r14 + 0x1b0], r9
215862 shr      r9, 0x1b
215866 movzx    eax, r9b
21586a mov      byte ptr [r14 + 0x160], al
215871 imul     rax, r10
215875 xor      rax, rbx
215878 xor      rax, r11
21587b mov      rcx, rax
21587e add      rax, 0xf6105
215884 xor      rcx, 0xf6105
21588b test     dil, dil
21588e jmp      0x140216283
215893 mov      rcx, r14
215896 call     0x1401ee070
21589b movzx    ecx, byte ptr [r14 + 0x4ad]
2158a3 movabs   rbx, 0xff51afd7ed558ccd
2158ad mov      r11, qword ptr [r14 + 0xe0]
2158b4 movabs   r8, 0xc4ceb9fe1a85ec53
2158be mov      r10, qword ptr [r14 + 0xd0]
2158c5 movzx    r9d, byte ptr [r14 + 0xe8]
2158cd mov      eax, eax
2158cf xor      rcx, rax
2158d2 xor      rcx, qword ptr [r14 + 0x11e8]
2158d9 mov      rax, rcx
2158dc shr      rax, 0x21
2158e0 xor      rax, rcx
2158e3 imul     rax, rbx
2158e7 mov      rcx, rax
2158ea shr      rcx, 0x21
2158ee xor      rcx, rax
2158f1 imul     rcx, r8
2158f5 mov      rdx, rcx
2158f8 shr      rdx, 0x21
2158fc xor      rdx, rcx
2158ff mov      qword ptr [r14 + 0x11e8], rdx
215906 xor      rdx, qword ptr [r14 + 0x20]
21590a xor      rdx, qword ptr [r14 + 0x28]
21590e mov      rax, rdx
215911 shr      rax, 0x21
215915 xor      rax, rdx
215918 imul     rax, rbx
21591c mov      rcx, rax
21591f shr      rcx, 0x21
215923 xor      rcx, rax
215926 imul     rcx, r8
21592a mov      rax, rcx
21592d shr      rax, 0x21
215931 xor      rax, rcx
215934 mov      qword ptr [r14 + 0x20], rax
215938 mov      rdx, qword ptr [r14 + 0x138]
21593f movzx    ecx, byte ptr [r14 + 0x169]
215947 mov      rax, qword ptr [r14 + 0xd8]
21594e imul     rcx, r11
215952 lea      rbx, [rax + rax*4]
215956 mov      rax, rdx
215959 add      rbx, rbx
21595c xor      rcx, rbx
21595f xor      rcx, r10
215962 xor      rax, rcx
215965 sub      rdx, rcx
215968 test     r9b, r9b
21596b cmove    rdx, rax
21596f mov      rax, qword ptr [r14 + 0x1b0]
215976 inc      qword ptr [r14 + 0x1b8]
21597d imul     rax, r15
215981 add      rax, rbp
215984 mov      qword ptr [r14 + 0x1b0], rax
21598b shr      rax, 0x1b
21598f movzx    r8d, al
215993 mov      byte ptr [r14 + 0x169], r8b
21599a imul     r8, r11
21599e xor      r8, rbx
2159a1 xor      r8, r10
2159a4 mov      rcx, r8
2159a7 xor      rcx, rdx
2159aa test     r9b, r9b
2159ad lea      rax, [r8 + rdx]
2159b1 cmove    rax, rcx
2159b5 mov      rcx, r14
2159b8 mov      qword ptr [r14 + 0x138], rax
2159bf call     0x1401f0910
2159c4 mov      rax, qword ptr [r14 + 0xd8]
2159cb mov      r10, qword ptr [r14 + 0xe0]
2159d2 movzx    ecx, byte ptr [r14 + 0x168]
2159da mov      rbx, qword ptr [r14 + 0xd0]
2159e1 mov      rdx, qword ptr [r14 + 0x130]
2159e8 lea      r11, [rax + rax*8]
2159ec movzx    r9d, byte ptr [r14 + 0xe8]
2159f4 mov      rax, rdx
2159f7 imul     rcx, r10
2159fb xor      rcx, r11
2159fe xor      rcx, rbx
215a01 xor      rax, rcx
215a04 sub      rdx, rcx
215a07 test     r9b, r9b
215a0a cmove    rdx, rax
215a0e mov      rax, qword ptr [r14 + 0x1b0]
215a15 inc      qword ptr [r14 + 0x1b8]
215a1c mov      rcx, rdx
215a1f imul     rax, r15
215a23 add      rax, rbp
215a26 mov      qword ptr [r14 + 0x1b0], rax
215a2d shr      rax, 0x1b
215a31 movzx    r8d, al
215a35 mov      byte ptr [r14 + 0x168], r8b
215a3c imul     r8, r10
215a40 xor      r8, r11
215a43 xor      r8, rbx
215a46 xor      rcx, r8
215a49 test     r9b, r9b
215a4c lea      rax, [rdx + r8]
215a50 cmove    rax, rcx
215a54 mov      rcx, r14
215a57 mov      qword ptr [r14 + 0x130], rax
215a5e call     0x1401f0910
215a63 mov      rcx, r14
215a66 call     0x1401ee070
215a6b cmp      eax, dword ptr [r14 + 0x1d8]
215a72 jae      0x140215a7e
215a74 mov      edx, eax
215a76 mov      rcx, r14
215a79 call     0x1401f0910
215a7e mov      rsi, qword ptr [r14 + 0xe0]
215a85 mov      rbp, qword ptr [r14 + 0xd0]
215a8c mov      r11, qword ptr [r14 + 0x130]
215a93 movzx    edi, byte ptr [r14 + 0xe8]
215a9b mov      rax, r11
215a9e movzx    ecx, byte ptr [r14 + 0x168]
215aa6 mov      rbx, qword ptr [r14 + 0xd8]
215aad mov      r8, qword ptr [r14 + 0x1b8]
215ab4 mov      r10, qword ptr [r14 + 0x1b0]
215abb imul     rcx, rsi
215abf lea      r9, [rbx + rbx*8]
215ac3 xor      rcx, r9
215ac6 xor      rcx, rbp
215ac9 xor      rax, rcx
215acc sub      r11, rcx
215acf test     dil, dil
215ad2 movabs   rcx, 0x2545f4914f6cdd1d
215adc cmove    r11, rax
215ae0 imul     r10, r15
215ae4 add      r10, rcx
215ae7 mov      rcx, r11
215aea mov      rax, r10
215aed shr      rax, 0x1b
215af1 movzx    edx, al
215af4 mov      byte ptr [r14 + 0x168], dl
215afb imul     rdx, rsi
215aff xor      rdx, r9
215b02 xor      rdx, rbp
215b05 xor      rcx, rdx
215b08 test     dil, dil
215b0b lea      rax, [r11 + rdx]
215b0f cmove    rax, rcx
215b13 mov      rcx, r11
215b16 mov      qword ptr [r14 + 0x130], rax
215b1d movabs   rax, 0x2545f4914f6cdd1d
215b27 imul     r10, r15
215b2b add      r10, rax
215b2e lea      rax, [r8 + 2]
215b32 mov      qword ptr [r14 + 0x1b8], rax
215b39 mov      r8d, 0xf028
215b3f mov      qword ptr [r14 + 0x1b0], r10
215b46 lea      rax, [rbx + rbx*4]
215b4a add      rax, rax
215b4d shr      r10, 0x1b
215b51 movzx    edx, r10b
215b55 mov      byte ptr [r14 + 0x169], dl
215b5c imul     rdx, rsi
215b60 xor      rdx, rax
215b63 xor      rdx, rbp
215b66 xor      rcx, rdx
215b69 test     dil, dil
215b6c lea      rax, [r11 + rdx]
215b70 cmove    rax, rcx
215b74 mov      rcx, r14
215b77 mov      qword ptr [r14 + 0x138], rax
215b7e movzx    edx, byte ptr [r14 + 0x4ad]
215b86 xor      rdx, qword ptr [r14 + 0x348]
215b8d call     0x1401f1520
215b92 mov      r8, qword ptr [r14 + 0x348]
215b99 movabs   rdi, 0xff51afd7ed558ccd
215ba3 mov      rax, r8
215ba6 movabs   rsi, 0xc4ceb9fe1a85ec53
215bb0 xor      rax, qword ptr [r14 + 0x20]
215bb4 mov      rcx, rax
215bb7 shr      rcx, 0x21
215bbb xor      rcx, rax
215bbe imul     rcx, rdi
215bc2 mov      rax, rcx
215bc5 shr      rax, 0x21
215bc9 xor      rax, rcx
215bcc imul     rax, rsi
215bd0 mov      rdx, rax
215bd3 shr      rdx, 0x21
215bd7 xor      edx, eax
215bd9 lea      eax, [rdx + 1]
215bdc mov      ecx, eax
215bde xor      eax, edx
215be0 imul     ecx, edx
215be3 not      ecx
215be5 and      ecx, eax
215be7 test     cl, 1
215bea je       0x140215c5d
215bec and      r8b, 3
215bf0 cmp      r8b, 1
215bf4 jne      0x140215c5d
215bf6 mov      rax, qword ptr [r14 + 0x1b0]
215bfd movabs   rcx, 0x2545f4914f6cdd1d
215c07 inc      qword ptr [r14 + 0x1b8]
215c0e imul     rax, r15
215c12 add      rax, rcx
215c15 mov      qword ptr [r14 + 0x1b0], rax
215c1c shr      rax, 0x1b
215c20 movzx    eax, al
215c23 mov      byte ptr [r14 + 0x160], al
215c2a imul     rax, qword ptr [r14 + 0xe0]
215c32 xor      rax, qword ptr [r14 + 0xd8]
215c39 xor      rax, qword ptr [r14 + 0xd0]
215c40 mov      rcx, rax
215c43 add      rax, 0x116fdf
215c49 xor      rcx, 0x116fdf
215c50 cmp      byte ptr [r14 + 0xe8], 0
215c58 jmp      0x140216283
215c5d mov      rcx, r14
215c60 call     0x1401ee070
215c65 mov      ebx, eax
215c67 cmp      eax, dword ptr [r14 + 0x1d8]
215c6e jb       0x140215cd7
215c70 mov      rax, qword ptr [r14 + 0x1b0]
215c77 movabs   rcx, 0x2545f4914f6cdd1d
215c81 inc      qword ptr [r14 + 0x1b8]
215c88 imul     rax, r15
215c8c add      rax, rcx
215c8f mov      qword ptr [r14 + 0x1b0], rax
215c96 shr      rax, 0x1b
215c9a movzx    eax, al
215c9d mov      byte ptr [r14 + 0x160], al
215ca4 imul     rax, qword ptr [r14 + 0xe0]
215cac xor      rax, qword ptr [r14 + 0xd8]
215cb3 xor      rax, qword ptr [r14 + 0xd0]
215cba mov      rcx, rax
215cbd add      rax, 0xfe1ab
215cc3 xor      rcx, 0xfe1ab
215cca cmp      byte ptr [r14 + 0xe8], 0
215cd2 jmp      0x140216283
215cd7 mov      edx, ebx
215cd9 mov      rcx, r14
215cdc call     0x1401f25b0
215ce1 movsxd   rcx, dword ptr [r14 + 0x11e0]
215ce8 movabs   r8, 0xd6e8feb86659fd93
215cf2 mov      rdx, qword ptr [r14 + 0x20]
215cf6 mov      rax, rbx
215cf9 imul     rax, r8
215cfd imul     rcx, r15
215d01 rol      rdx, 0x11
215d05 xor      rax, rdx
215d08 xor      rcx, qword ptr [r14 + 0x260]
215d0f xor      rax, rcx
215d12 mov      rcx, rax
215d15 shr      rcx, 0x21
215d19 xor      rcx, rax
215d1c imul     rcx, rdi
215d20 mov      rdx, rcx
215d23 shr      rdx, 0x21
215d27 xor      rdx, rcx
215d2a imul     rdx, rsi
215d2e mov      rax, rdx
215d31 shr      rax, 0x21
215d35 xor      rax, rdx
215d38 mov      r10, rax
215d3b shr      r10, 0x1d
215d3f xor      r10, rax
215d42 or       r10, 1
215d46 mov      rax, r10
215d49 mov      qword ptr [r14 + 0x260], r10
215d50 and      eax, 0x3ff
215d55 cmp      rax, 0x2c5
215d5b jne      0x140215d6c
215d5d mov      rcx, r14
215d60 call     0x1402297e0
215d65 mov      r10, qword ptr [r14 + 0x260]
215d6c movzx    eax, r10b
215d70 and      al, 0x1f
215d72 cmp      al, 0x15
215d74 jne      0x140215e61
215d7a movsxd   rax, dword ptr [r14 + 0x11e0]
215d81 xor      rax, 0x5a5a
215d87 mov      rcx, qword ptr [r14 + 0x20]
215d8b imul     rax, r15
215d8f rol      rcx, 0x11
215d93 xor      rax, r10
215d96 xor      rcx, rax
215d99 movabs   rax, 0x8f70feda99a6026d
215da3 xor      rcx, rax
215da6 mov      rax, rcx
215da9 shr      rax, 0x21
215dad xor      rax, rcx
215db0 imul     rax, rdi
215db4 mov      rcx, rax
215db7 shr      rcx, 0x21
215dbb xor      rcx, rax
215dbe imul     rcx, rsi
215dc2 mov      rax, rcx
215dc5 shr      rax, 0x21
215dc9 xor      rax, rcx
215dcc mov      r9, rax
215dcf shr      r9, 0x1d
215dd3 xor      r9, rax
215dd6 or       r9, 1
215dda mov      rax, r9
215ddd mov      rcx, r9
215de0 shr      rax, 8
215de4 and      eax, 3
215de7 shr      rcx, 0x28
215deb imul     r8, rax, 0x3e
215def mov      eax, 0x8421085
215df4 mul      ecx
215df6 mov      eax, ecx
215df8 sub      eax, edx
215dfa shr      eax, 1
215dfc add      eax, edx
215dfe shr      eax, 5
215e01 imul     eax, eax, 0x3e
215e04 sub      ecx, eax
215e06 mov      eax, ecx
215e08 add      r8, rax
215e0b mov      rax, qword ptr [r14 + 0x4b8]
215e12 movsxd   rcx, dword ptr [rax + r8*4]
215e16 movsxd   rax, dword ptr [r14 + 0x4c8]
215e1d xor      rcx, rax
215e20 add      rcx, qword ptr [r14 + 0x4c0]
215e27 xor      rcx, r9
215e2a mov      rax, rcx
215e2d shr      rax, 0x21
215e31 xor      rax, rcx
215e34 imul     rax, rdi
215e38 mov      rcx, rax
215e3b shr      rcx, 0x21
215e3f xor      rcx, rax
215e42 imul     rcx, rsi
215e46 mov      rax, rcx
215e49 shr      rax, 0x21
215e4d xor      rax, rcx
215e50 xor      rax, r10
215e53 inc      qword ptr [r14 + 0x268]
215e5a mov      qword ptr [r14 + 0x260], rax
215e61 inc      dword ptr [r14 + 0x200]
215e68 mov      eax, dword ptr [r14 + 0x200]
215e6f cmp      eax, dword ptr [r14 + 0x1fc]
215e76 jb       0x140215e8b
215e78 mov      rcx, r14
215e7b mov      dword ptr [r14 + 0x200], 0
215e86 call     0x1401ef7c0
215e8b mov      r8d, ebx
215e8e mov      edx, ebx
215e90 mov      rcx, r14
215e93 call     0x1401f0660
215e98 inc      qword ptr [r14 + 0x1b8]
215e9f movabs   rax, 0x2545f4914f6cdd1d
215ea9 mov      r9, qword ptr [r14 + 0x1b0]
215eb0 mov      r10, qword ptr [r14 + 0x1b8]
215eb7 imul     r9, r15
215ebb add      r9, rax
215ebe mov      qword ptr [r14 + 0x1b0], r9
215ec5 mov      rax, r9
215ec8 shr      rax, 0x1b
215ecc movzx    edx, al
215ecf mov      byte ptr [r14 + 0x168], dl
215ed6 mov      rdi, qword ptr [r14 + 0xe0]
215edd mov      r11, qword ptr [r14 + 0xd8]
215ee4 mov      rsi, qword ptr [r14 + 0xd0]
215eeb movzx    r15d, byte ptr [r14 + 0xe8]
215ef3 imul     rdx, rdi
215ef7 lea      rax, [r11 + r11*8]
215efb xor      rdx, rax
215efe xor      rdx, rsi
215f01 mov      rcx, rdx
215f04 xor      rcx, rbx
215f07 test     r15b, r15b
215f0a lea      rax, [rdx + rbx]
215f0e cmove    rax, rcx
215f12 inc      r10
215f15 mov      qword ptr [r14 + 0x130], rax
215f1c mov      rcx, qword ptr [r14 + 0x1d0]
215f23 mov      rax, qword ptr [r14 + 0x48]
215f27 mov      qword ptr [rsp + 0x78], r10
215f2c movzx    r8d, byte ptr [rcx + rbx]
215f31 xor      r8b, byte ptr [rax + rbx]
215f35 inc      ebx
215f37 mov      qword ptr [r14 + 0x1b8], r10
215f3e movabs   rax, 0x9e3779b97f4a7c15
215f48 imul     r9, rax
215f4c mov      qword ptr [rsp + 0x60], rbx
215f51 movabs   rax, 0x2545f4914f6cdd1d
215f5b add      r9, rax
215f5e mov      rax, r9
215f61 shr      rax, 0x1b
215f65 movzx    edx, al
215f68 lea      rax, [r11 + r11]
215f6c mov      byte ptr [r14 + 0x161], dl
215f73 imul     rdx, rdi
215f77 xor      rdx, rax
215f7a xor      rdx, rsi
215f7d mov      rcx, rdx
215f80 xor      rcx, rbx
215f83 test     r15b, r15b
215f86 lea      rax, [rdx + rbx]
215f8a cmove    rax, rcx
215f8e mov      qword ptr [r14 + 0xf8], rax
215f95 movsxd   rdx, dword ptr [r14 + 0x11e0]
215f9c mov      r10, qword ptr [r14 + 0x20]
215fa0 mov      rcx, rdx
215fa3 xor      rcx, qword ptr [r14 + 0x350]
215faa xor      rcx, qword ptr [r14 + 0x348]
215fb1 xor      rcx, r10
215fb4 xor      rcx, rbx
215fb7 movabs   rbx, 0xff51afd7ed558ccd
215fc1 mov      rax, rcx
215fc4 shr      rax, 0x21
215fc8 xor      rax, rcx
215fcb imul     rax, rbx
215fcf mov      rcx, rax
215fd2 shr      rcx, 0x21
215fd6 xor      rcx, rax
215fd9 movabs   rax, 0xc4ceb9fe1a85ec53
215fe3 imul     rcx, rax
215fe7 movzx    eax, r8b
215feb mov      rbx, rcx
215fee shr      rbx, 0x21
215ff2 xor      rbx, rcx
215ff5 lea      rcx, [rip - 0x215ffc]
215ffc xor      rax, 0xdd
216002 mov      qword ptr [r14 + 0x28], rbx
216006 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
21600e xor      bpl, 0x63
216012 movabs   r8, 0xff51afd7ed558ccd
21601c inc      edx
21601e mov      dword ptr [r14 + 0x11e0], edx
216025 test     dl, 0x1f
216028 jne      0x14021606e
21602a movsxd   rax, edx
21602d xor      rax, qword ptr [r14 + 0x348]
216034 xor      rax, r10
216037 mov      rcx, rax
21603a shr      rcx, 0x21
21603e xor      rcx, rax
216041 movabs   rax, 0xc4ceb9fe1a85ec53
21604b imul     rcx, r8
21604f mov      rdx, rcx
216052 shr      rdx, 0x21
216056 xor      rdx, rcx
216059 imul     rdx, rax
21605d mov      rax, rdx
216060 shr      rax, 0x21
216064 xor      rax, rdx
216067 mov      qword ptr [r14 + 0x348], rax
21606e movzx    edx, bpl
216072 xor      r10, rdx
216075 mov      byte ptr [r14 + 0x4ad], bpl
21607c xor      r10, qword ptr [rsp + 0x60]
216081 mov      rax, r10
216084 shr      rax, 0x21
216088 xor      rax, r10
21608b movabs   r10, 0x9e3779b97f4a7c15
216095 imul     rax, r8
216099 imul     rdx, r10
21609d imul     r9, r10
2160a1 mov      rcx, rax
2160a4 shr      rcx, 0x21
2160a8 xor      rcx, rax
2160ab movabs   rax, 0xc4ceb9fe1a85ec53
2160b5 imul     rcx, rax
2160b9 mov      rax, rcx
2160bc shr      rax, 0x21
2160c0 xor      rax, rcx
2160c3 mov      ecx, dword ptr [r14 + 0x1178]
2160ca mov      qword ptr [r14 + 0x20], rax
2160ce movabs   rax, 0xd6e8feb86659fd93
2160d8 imul     rcx, rax
2160dc xor      rcx, rdx
2160df xor      rcx, rbx
2160e2 movabs   rbx, 0x2545f4914f6cdd1d
2160ec mov      rax, rcx
2160ef add      r9, rbx
2160f2 shr      rax, 0x21
2160f6 xor      rax, rcx
2160f9 imul     rax, r8
2160fd mov      rdx, rax
216100 shr      rdx, 0x21
216104 xor      rdx, rax
216107 movabs   rax, 0xc4ceb9fe1a85ec53
216111 imul     rdx, rax
216115 mov      rax, qword ptr [rsp + 0x78]
21611a shr      rdx, 0x21
21611e and      edx, 3
216121 inc      rax
216124 mov      qword ptr [r14 + 0x1b8], rax
21612b cmp      bpl, 0x3e
21612f jae      0x1402161c7
216135 inc      qword ptr [r14 + 0x11a0]
21613c lea      rax, [rip - 0x216143]
216143 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
21614b mov      qword ptr [r14 + 0x1b0], r9
216152 shr      r9, 0x1b
216156 movzx    eax, r9b
21615a mov      byte ptr [r14 + 0x160], al
216161 imul     rax, rdi
216165 mov      ebx, edx
216167 xor      rax, rsi
21616a xor      rax, r11
21616d mov      rcx, rax
216170 add      rax, r8
216173 xor      rcx, r8
216176 movzx    r8d, bpl
21617a test     r15b, r15b
21617d cmove    rax, rcx
216181 mov      rcx, r14
216184 mov      qword ptr [r14 + 0xf0], rax
21618b call     0x1401f1f50
216190 mov      eax, eax
216192 lea      edx, [r13 - 1]
216196 imul     rcx, rbx, 0x3e
21619a mov      r8, r12
21619d add      rcx, rax
2161a0 mov      rax, qword ptr [r14 + 0x4b8]
2161a7 movsxd   r9, dword ptr [rax + rcx*4]
2161ab mov      rcx, r14
2161ae movsxd   rax, dword ptr [r14 + 0x4c8]
2161b5 xor      r9, rax
2161b8 add      r9, qword ptr [r14 + 0x4c0]
2161bf call     r9
2161c2 jmp      0x14021628e
2161c7 inc      dword ptr [r14 + 0x11a8]
2161ce mov      rax, r9
2161d1 shr      rax, 0x1b
2161d5 movzx    ecx, al
2161d8 lea      rax, [r11*4]
2161e0 mov      byte ptr [r14 + 0x163], cl
2161e7 imul     rcx, rdi
2161eb imul     r9, r10
2161ef xor      rcx, rax
2161f2 xor      rcx, rsi
2161f5 mov      qword ptr [r14 + 0x108], rcx
2161fc mov      r8, qword ptr [r14 + 0x1b8]
216203 add      r9, rbx
216206 mov      rax, r9
216209 shr      rax, 0x1b
21620d movzx    edx, al
216210 mov      byte ptr [r14 + 0x16a], dl
216217 imul     rax, r11, 0xb
21621b imul     rdx, rdi
21621f xor      rdx, rax
216222 xor      rdx, rsi
216225 mov      rcx, rdx
216228 xor      rcx, 1
21622c test     r15b, r15b
21622f lea      rax, [rdx + 1]
216233 cmove    rax, rcx
216237 mov      qword ptr [r14 + 0x140], rax
21623e lea      rax, [r8 + 2]
216242 mov      qword ptr [r14 + 0x1b8], rax
216249 imul     r9, r10
21624d add      r9, rbx
216250 mov      qword ptr [r14 + 0x1b0], r9
216257 shr      r9, 0x1b
21625b movzx    eax, r9b
21625f mov      byte ptr [r14 + 0x160], al
216266 imul     rax, rdi
21626a xor      rax, rsi
21626d xor      rax, r11
216270 mov      rcx, rax
216273 add      rax, 0xfe1ab
216279 xor      rcx, 0xfe1ab
216280 test     r15b, r15b
216283 cmove    rax, rcx
216287 mov      qword ptr [r14 + 0xf0], rax
21628e mov      rdi, qword ptr [rsp + 0x28]
216293 mov      rsi, qword ptr [rsp + 0x30]
216298 mov      rbp, qword ptr [rsp + 0x38]
21629d mov      rbx, qword ptr [rsp + 0x68]
2162a2 mov      r15, qword ptr [rsp + 0x20]
2162a7 add      rsp, 0x40
2162ab pop      r14
2162ad pop      r13
2162af pop      r12
2162b1 ret      
2162b2 mov      edx, 0x54485254
2162b7 mov      rcx, r14
2162ba call     0x1401ed830
2162bf int3     
2162c0 mov      edx, 0x43414e59
2162c5 mov      rcx, r14
2162c8 call     0x1401ed830
2162cd int3     
