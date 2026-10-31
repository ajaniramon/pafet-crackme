2195c0 mov      qword ptr [rsp + 0x18], r8
2195c5 push     rbx
2195c6 push     rbp
2195c7 push     rdi
2195c8 push     r13
2195ca push     r14
2195cc sub      rsp, 0x30
2195d0 movsxd   rax, dword ptr [rcx + 0x11e0]
2195d7 mov      r14, rcx
2195da mov      r13d, edx
2195dd movabs   rcx, 0x10078dc2e663963e
2195e7 imul     rax, rcx
2195eb movabs   rcx, 0xb25e070967bd1201
2195f5 movabs   rbp, 0xff51afd7ed558ccd
2195ff xor      rax, qword ptr [r14 + 0x28]
219603 mov      rdi, r8
219606 mov      qword ptr [rsp + 0x60], rax
21960b mov      rax, qword ptr [rsp + 0x60]
219610 movsxd   rax, dword ptr [r14 + 0x11e0]
219617 imul     rax, rcx
21961b movabs   rcx, 0x54969957e4f69e14
219625 xor      rax, qword ptr [r14 + 0x28]
219629 mov      qword ptr [rsp + 0x60], rax
21962e mov      rax, qword ptr [rsp + 0x60]
219633 movsxd   rax, dword ptr [r14 + 0x11e0]
21963a imul     rax, rcx
21963e movabs   rcx, 0x202c058eec7b863a
219648 xor      rax, qword ptr [r14 + 0x28]
21964c mov      qword ptr [rsp + 0x60], rax
219651 mov      rax, qword ptr [rsp + 0x60]
219656 mov      rax, qword ptr [r14 + 0x2e0]
21965d xor      rax, rcx
219660 mov      rcx, rax
219663 shr      rcx, 0x21
219667 xor      rcx, rax
21966a movabs   rax, 0xc4ceb9fe1a85ec53
219674 imul     rcx, rbp
219678 mov      rdx, rcx
21967b shr      rdx, 0x21
21967f xor      rdx, rcx
219682 mov      rcx, r14
219685 imul     rdx, rax
219689 mov      rax, rdx
21968c shr      rax, 0x21
219690 xor      rdx, rax
219693 mov      rax, qword ptr [r14 + 0x2e0]
21969a shr      rax, 7
21969e add      rax, rdx
2196a1 mov      qword ptr [r14 + 0x2e0], rax
2196a8 call     0x1401ee940
2196ad mov      rcx, r14
2196b0 mov      rbx, rax
2196b3 call     0x1401ee940
2196b8 mov      rdx, rax
2196bb mov      rcx, r14
2196be or       rdx, rbx
2196c1 and      rax, rbx
2196c4 add      rdx, rax
2196c7 call     0x1401ee820
2196cc mov      rax, qword ptr [r14 + 0x2e0]
2196d3 test     r13d, r13d
2196d6 jns      0x14021a214
2196dc cmp      qword ptr [r14 + 0x11b8], rdi
2196e3 jne      0x14021a222
2196e9 movsxd   rax, dword ptr [r14 + 0x11e0]
2196f0 movabs   rcx, 0x54aa508d3e1449
2196fa imul     rax, rcx
2196fe mov      rcx, r14
219701 xor      rax, qword ptr [r14 + 0x28]
219705 mov      qword ptr [rsp + 0x60], rax
21970a mov      rax, qword ptr [rsp + 0x60]
21970f call     0x1401ee450
219714 test     eax, eax
219716 jne      0x14021a208
21971c cmp      dword ptr [r14 + 0xad0], eax
219723 jne      0x14021a208
219729 mov      r8, qword ptr [r14 + 0xf0]
219730 movzx    ecx, byte ptr [r14 + 0x160]
219738 mov      rax, r8
21973b mov      r10, qword ptr [r14 + 0xe0]
219742 mov      rbx, qword ptr [r14 + 0xd0]
219749 mov      r11, qword ptr [r14 + 0xd8]
219750 movzx    edi, byte ptr [r14 + 0xe8]
219758 mov      r9, qword ptr [r14 + 0x1b0]
21975f imul     rcx, r10
219763 mov      qword ptr [rsp + 0x68], rsi
219768 mov      rsi, qword ptr [r14 + 0x1b8]
21976f xor      rcx, rbx
219772 xor      rcx, r11
219775 mov      qword ptr [rsp + 0x28], r12
21977a xor      rax, rcx
21977d mov      qword ptr [rsp + 0x20], r15
219782 sub      r8, rcx
219785 movabs   r15, 0x9e3779b97f4a7c15
21978f test     dil, dil
219792 movabs   r12, 0x2545f4914f6cdd1d
21979c cmove    r8, rax
2197a0 inc      rsi
2197a3 imul     r9, r15
2197a7 mov      qword ptr [r14 + 0x1b8], rsi
2197ae mov      rcx, r8
2197b1 add      r9, r12
2197b4 mov      qword ptr [r14 + 0x1b0], r9
2197bb mov      rax, r9
2197be shr      rax, 0x1b
2197c2 movzx    edx, al
2197c5 mov      byte ptr [r14 + 0x160], dl
2197cc imul     rdx, r10
2197d0 xor      rdx, rbx
2197d3 xor      rdx, r11
2197d6 xor      rcx, rdx
2197d9 test     dil, dil
2197dc lea      rax, [r8 + rdx]
2197e0 cmove    rax, rcx
2197e4 mov      qword ptr [r14 + 0xf0], rax
2197eb cmp      r8d, 0x48cad
2197f2 jne      0x14021a1f9
2197f8 mov      eax, r13d
2197fb btr      eax, 0x1f
2197ff cmp      eax, 2
219802 jae      0x14021984e
219804 imul     r9, r15
219808 lea      rax, [rsi + 1]
21980c mov      qword ptr [r14 + 0x1b8], rax
219813 add      r9, r12
219816 mov      qword ptr [r14 + 0x1b0], r9
21981d shr      r9, 0x1b
219821 movzx    eax, r9b
219825 mov      byte ptr [r14 + 0x160], al
21982c imul     rax, r10
219830 xor      rax, rbx
219833 xor      rax, r11
219836 mov      rcx, rax
219839 add      rax, 0xf6105
21983f xor      rcx, 0xf6105
219846 test     dil, dil
219849 jmp      0x14021a1ee
21984e mov      rcx, r14
219851 call     0x1401ee070
219856 movzx    ecx, byte ptr [r14 + 0x4ad]
21985e movabs   r8, 0xc4ceb9fe1a85ec53
219868 mov      r11, qword ptr [r14 + 0xe0]
21986f mov      r10, qword ptr [r14 + 0xd0]
219876 movzx    r9d, byte ptr [r14 + 0xe8]
21987e mov      eax, eax
219880 xor      rcx, rax
219883 xor      rcx, qword ptr [r14 + 0x11e8]
21988a mov      rax, rcx
21988d shr      rax, 0x21
219891 xor      rax, rcx
219894 imul     rax, rbp
219898 mov      rcx, rax
21989b shr      rcx, 0x21
21989f xor      rcx, rax
2198a2 imul     rcx, r8
2198a6 mov      rdx, rcx
2198a9 shr      rdx, 0x21
2198ad xor      rdx, rcx
2198b0 mov      qword ptr [r14 + 0x11e8], rdx
2198b7 xor      rdx, qword ptr [r14 + 0x20]
2198bb xor      rdx, qword ptr [r14 + 0x28]
2198bf mov      rax, rdx
2198c2 shr      rax, 0x21
2198c6 xor      rax, rdx
2198c9 imul     rax, rbp
2198cd mov      rcx, rax
2198d0 shr      rcx, 0x21
2198d4 xor      rcx, rax
2198d7 imul     rcx, r8
2198db mov      rax, rcx
2198de shr      rax, 0x21
2198e2 xor      rax, rcx
2198e5 mov      qword ptr [r14 + 0x20], rax
2198e9 mov      rdx, qword ptr [r14 + 0x138]
2198f0 movzx    ecx, byte ptr [r14 + 0x169]
2198f8 mov      rax, qword ptr [r14 + 0xd8]
2198ff imul     rcx, r11
219903 lea      rbx, [rax + rax*4]
219907 mov      rax, rdx
21990a add      rbx, rbx
21990d xor      rcx, rbx
219910 xor      rcx, r10
219913 xor      rax, rcx
219916 sub      rdx, rcx
219919 test     r9b, r9b
21991c cmove    rdx, rax
219920 mov      rax, qword ptr [r14 + 0x1b0]
219927 inc      qword ptr [r14 + 0x1b8]
21992e imul     rax, r15
219932 add      rax, r12
219935 mov      qword ptr [r14 + 0x1b0], rax
21993c shr      rax, 0x1b
219940 movzx    r8d, al
219944 mov      byte ptr [r14 + 0x169], r8b
21994b imul     r8, r11
21994f xor      r8, rbx
219952 xor      r8, r10
219955 mov      rcx, r8
219958 xor      rcx, rdx
21995b test     r9b, r9b
21995e lea      rax, [r8 + rdx]
219962 cmove    rax, rcx
219966 mov      rcx, r14
219969 mov      qword ptr [r14 + 0x138], rax
219970 call     0x1401f0910
219975 mov      rax, qword ptr [r14 + 0xd8]
21997c mov      rdx, qword ptr [r14 + 0x130]
219983 mov      r10, qword ptr [r14 + 0xe0]
21998a movzx    ecx, byte ptr [r14 + 0x168]
219992 mov      rbx, qword ptr [r14 + 0xd0]
219999 lea      r11, [rax + rax*8]
21999d movzx    r9d, byte ptr [r14 + 0xe8]
2199a5 mov      rax, rdx
2199a8 imul     rcx, r10
2199ac xor      rcx, r11
2199af xor      rcx, rbx
2199b2 xor      rax, rcx
2199b5 sub      rdx, rcx
2199b8 test     r9b, r9b
2199bb cmove    rdx, rax
2199bf mov      rax, qword ptr [r14 + 0x1b0]
2199c6 inc      qword ptr [r14 + 0x1b8]
2199cd mov      rcx, rdx
2199d0 imul     rax, r15
2199d4 add      rax, r12
2199d7 mov      qword ptr [r14 + 0x1b0], rax
2199de shr      rax, 0x1b
2199e2 movzx    r8d, al
2199e6 mov      byte ptr [r14 + 0x168], r8b
2199ed imul     r8, r10
2199f1 xor      r8, r11
2199f4 xor      r8, rbx
2199f7 xor      rcx, r8
2199fa test     r9b, r9b
2199fd lea      rax, [rdx + r8]
219a01 cmove    rax, rcx
219a05 mov      rcx, r14
219a08 mov      qword ptr [r14 + 0x130], rax
219a0f call     0x1401f0910
219a14 mov      rcx, r14
219a17 call     0x1401ee070
219a1c cmp      eax, dword ptr [r14 + 0x1d8]
219a23 jae      0x140219a2f
219a25 mov      edx, eax
219a27 mov      rcx, r14
219a2a call     0x1401f0910
219a2f mov      rsi, qword ptr [r14 + 0xe0]
219a36 mov      rbp, qword ptr [r14 + 0xd0]
219a3d mov      r11, qword ptr [r14 + 0x130]
219a44 movzx    edi, byte ptr [r14 + 0xe8]
219a4c mov      rax, r11
219a4f movzx    ecx, byte ptr [r14 + 0x168]
219a57 mov      rbx, qword ptr [r14 + 0xd8]
219a5e mov      r8, qword ptr [r14 + 0x1b8]
219a65 mov      r10, qword ptr [r14 + 0x1b0]
219a6c imul     rcx, rsi
219a70 lea      r9, [rbx + rbx*8]
219a74 xor      rcx, r9
219a77 xor      rcx, rbp
219a7a xor      rax, rcx
219a7d sub      r11, rcx
219a80 test     dil, dil
219a83 cmove    r11, rax
219a87 imul     r10, r15
219a8b mov      rcx, r11
219a8e add      r10, r12
219a91 mov      rax, r10
219a94 shr      rax, 0x1b
219a98 movzx    edx, al
219a9b mov      byte ptr [r14 + 0x168], dl
219aa2 imul     rdx, rsi
219aa6 xor      rdx, r9
219aa9 xor      rdx, rbp
219aac xor      rcx, rdx
219aaf test     dil, dil
219ab2 lea      rax, [r11 + rdx]
219ab6 cmove    rax, rcx
219aba mov      rcx, r11
219abd mov      qword ptr [r14 + 0x130], rax
219ac4 lea      rax, [r8 + 2]
219ac8 mov      qword ptr [r14 + 0x1b8], rax
219acf mov      r8d, 0x5f97
219ad5 imul     r10, r15
219ad9 lea      rax, [rbx + rbx*4]
219add add      rax, rax
219ae0 add      r10, r12
219ae3 mov      qword ptr [r14 + 0x1b0], r10
219aea shr      r10, 0x1b
219aee movzx    edx, r10b
219af2 mov      byte ptr [r14 + 0x169], dl
219af9 imul     rdx, rsi
219afd xor      rdx, rax
219b00 xor      rdx, rbp
219b03 xor      rcx, rdx
219b06 test     dil, dil
219b09 lea      rax, [r11 + rdx]
219b0d cmove    rax, rcx
219b11 mov      rcx, r14
219b14 mov      qword ptr [r14 + 0x138], rax
219b1b movzx    edx, byte ptr [r14 + 0x4ad]
219b23 xor      rdx, qword ptr [r14 + 0x348]
219b2a call     0x1401f1520
219b2f mov      r8, qword ptr [r14 + 0x348]
219b36 movabs   rdi, 0xff51afd7ed558ccd
219b40 mov      rax, r8
219b43 movabs   rsi, 0xc4ceb9fe1a85ec53
219b4d xor      rax, qword ptr [r14 + 0x20]
219b51 mov      rcx, rax
219b54 shr      rcx, 0x21
219b58 xor      rcx, rax
219b5b imul     rcx, rdi
219b5f mov      rax, rcx
219b62 shr      rax, 0x21
219b66 xor      rax, rcx
219b69 imul     rax, rsi
219b6d mov      rdx, rax
219b70 shr      rdx, 0x21
219b74 xor      edx, eax
219b76 lea      eax, [rdx + 1]
219b79 mov      ecx, eax
219b7b xor      eax, edx
219b7d imul     ecx, edx
219b80 not      ecx
219b82 and      ecx, eax
219b84 test     cl, 1
219b87 je       0x140219bf0
219b89 and      r8b, 3
219b8d cmp      r8b, 1
219b91 jne      0x140219bf0
219b93 mov      rax, qword ptr [r14 + 0x1b0]
219b9a inc      qword ptr [r14 + 0x1b8]
219ba1 imul     rax, r15
219ba5 add      rax, r12
219ba8 mov      qword ptr [r14 + 0x1b0], rax
219baf shr      rax, 0x1b
219bb3 movzx    eax, al
219bb6 mov      byte ptr [r14 + 0x160], al
219bbd imul     rax, qword ptr [r14 + 0xe0]
219bc5 xor      rax, qword ptr [r14 + 0xd8]
219bcc xor      rax, qword ptr [r14 + 0xd0]
219bd3 mov      rcx, rax
219bd6 add      rax, 0x116fdf
219bdc xor      rcx, 0x116fdf
219be3 cmp      byte ptr [r14 + 0xe8], 0
219beb jmp      0x14021a1ee
219bf0 mov      rcx, r14
219bf3 call     0x1401ee070
219bf8 mov      ebx, eax
219bfa cmp      eax, dword ptr [r14 + 0x1d8]
219c01 jb       0x140219c60
219c03 mov      rax, qword ptr [r14 + 0x1b0]
219c0a inc      qword ptr [r14 + 0x1b8]
219c11 imul     rax, r15
219c15 add      rax, r12
219c18 mov      qword ptr [r14 + 0x1b0], rax
219c1f shr      rax, 0x1b
219c23 movzx    eax, al
219c26 mov      byte ptr [r14 + 0x160], al
219c2d imul     rax, qword ptr [r14 + 0xe0]
219c35 xor      rax, qword ptr [r14 + 0xd8]
219c3c xor      rax, qword ptr [r14 + 0xd0]
219c43 mov      rcx, rax
219c46 add      rax, 0xfe1ab
219c4c xor      rcx, 0xfe1ab
219c53 cmp      byte ptr [r14 + 0xe8], 0
219c5b jmp      0x14021a1ee
219c60 mov      edx, ebx
219c62 mov      rcx, r14
219c65 call     0x1401f25b0
219c6a movsxd   rcx, dword ptr [r14 + 0x11e0]
219c71 movabs   r8, 0xd6e8feb86659fd93
219c7b mov      rdx, qword ptr [r14 + 0x20]
219c7f mov      rax, rbx
219c82 imul     rax, r8
219c86 imul     rcx, r15
219c8a rol      rdx, 0x11
219c8e xor      rax, rdx
219c91 xor      rcx, qword ptr [r14 + 0x260]
219c98 xor      rax, rcx
219c9b mov      rcx, rax
219c9e shr      rcx, 0x21
219ca2 xor      rcx, rax
219ca5 imul     rcx, rdi
219ca9 mov      rdx, rcx
219cac shr      rdx, 0x21
219cb0 xor      rdx, rcx
219cb3 imul     rdx, rsi
219cb7 mov      rax, rdx
219cba shr      rax, 0x21
219cbe xor      rax, rdx
219cc1 mov      r10, rax
219cc4 shr      r10, 0x1d
219cc8 xor      r10, rax
219ccb or       r10, 1
219ccf mov      rax, r10
219cd2 mov      qword ptr [r14 + 0x260], r10
219cd9 and      eax, 0x3ff
219cde cmp      rax, 0x2c5
219ce4 jne      0x140219cf5
219ce6 mov      rcx, r14
219ce9 call     0x1402297e0
219cee mov      r10, qword ptr [r14 + 0x260]
219cf5 movzx    eax, r10b
219cf9 and      al, 0x1f
219cfb cmp      al, 0x15
219cfd jne      0x140219dea
219d03 movsxd   rax, dword ptr [r14 + 0x11e0]
219d0a xor      rax, 0x5a5a
219d10 mov      rcx, qword ptr [r14 + 0x20]
219d14 imul     rax, r15
219d18 rol      rcx, 0x11
219d1c xor      rax, r10
219d1f xor      rcx, rax
219d22 movabs   rax, 0x8f70feda99a6026d
219d2c xor      rcx, rax
219d2f mov      rax, rcx
219d32 shr      rax, 0x21
219d36 xor      rax, rcx
219d39 imul     rax, rdi
219d3d mov      rcx, rax
219d40 shr      rcx, 0x21
219d44 xor      rcx, rax
219d47 imul     rcx, rsi
219d4b mov      rax, rcx
219d4e shr      rax, 0x21
219d52 xor      rax, rcx
219d55 mov      r9, rax
219d58 shr      r9, 0x1d
219d5c xor      r9, rax
219d5f or       r9, 1
219d63 mov      rax, r9
219d66 mov      rcx, r9
219d69 shr      rax, 8
219d6d and      eax, 3
219d70 shr      rcx, 0x28
219d74 imul     r8, rax, 0x3e
219d78 mov      eax, 0x8421085
219d7d mul      ecx
219d7f mov      eax, ecx
219d81 sub      eax, edx
219d83 shr      eax, 1
219d85 add      eax, edx
219d87 shr      eax, 5
219d8a imul     eax, eax, 0x3e
219d8d sub      ecx, eax
219d8f mov      eax, ecx
219d91 add      r8, rax
219d94 mov      rax, qword ptr [r14 + 0x4b8]
219d9b movsxd   rcx, dword ptr [rax + r8*4]
219d9f movsxd   rax, dword ptr [r14 + 0x4c8]
219da6 xor      rcx, rax
219da9 add      rcx, qword ptr [r14 + 0x4c0]
219db0 xor      rcx, r9
219db3 mov      rax, rcx
219db6 shr      rax, 0x21
219dba xor      rax, rcx
219dbd imul     rax, rdi
219dc1 mov      rcx, rax
219dc4 shr      rcx, 0x21
219dc8 xor      rcx, rax
219dcb imul     rcx, rsi
219dcf mov      rax, rcx
219dd2 shr      rax, 0x21
219dd6 xor      rax, rcx
219dd9 xor      rax, r10
219ddc inc      qword ptr [r14 + 0x268]
219de3 mov      qword ptr [r14 + 0x260], rax
219dea inc      dword ptr [r14 + 0x200]
219df1 mov      eax, dword ptr [r14 + 0x200]
219df8 cmp      eax, dword ptr [r14 + 0x1fc]
219dff jb       0x140219e14
219e01 mov      rcx, r14
219e04 mov      dword ptr [r14 + 0x200], 0
219e0f call     0x1401ef7c0
219e14 mov      r8d, ebx
219e17 mov      edx, ebx
219e19 mov      rcx, r14
219e1c call     0x1401f0660
219e21 inc      qword ptr [r14 + 0x1b8]
219e28 mov      rcx, rbx
219e2b mov      r9, qword ptr [r14 + 0x1b0]
219e32 mov      rbp, r12
219e35 mov      r10, qword ptr [r14 + 0x1b8]
219e3c imul     r9, r15
219e40 add      r9, r12
219e43 lea      r12d, [rbx + 1]
219e47 mov      qword ptr [r14 + 0x1b0], r9
219e4e mov      rax, r9
219e51 shr      rax, 0x1b
219e55 movzx    edx, al
219e58 mov      byte ptr [r14 + 0x168], dl
219e5f mov      rdi, qword ptr [r14 + 0xe0]
219e66 mov      r11, qword ptr [r14 + 0xd8]
219e6d mov      rsi, qword ptr [r14 + 0xd0]
219e74 movzx    r15d, byte ptr [r14 + 0xe8]
219e7c imul     rdx, rdi
219e80 lea      rax, [r11 + r11*8]
219e84 xor      rdx, rax
219e87 xor      rdx, rsi
219e8a xor      rcx, rdx
219e8d test     r15b, r15b
219e90 lea      rax, [rbx + rdx]
219e94 cmove    rax, rcx
219e98 inc      r10
219e9b mov      qword ptr [r14 + 0x130], rax
219ea2 mov      rcx, qword ptr [r14 + 0x1d0]
219ea9 mov      rax, qword ptr [r14 + 0x48]
219ead mov      qword ptr [rsp + 0x60], r10
219eb2 movzx    r8d, byte ptr [rcx + rbx]
219eb7 xor      r8b, byte ptr [rax + rbx]
219ebb movabs   rax, 0x9e3779b97f4a7c15
219ec5 imul     r9, rax
219ec9 mov      qword ptr [r14 + 0x1b8], r10
219ed0 add      r9, rbp
219ed3 mov      rax, r9
219ed6 shr      rax, 0x1b
219eda movzx    edx, al
219edd lea      rax, [r11 + r11]
219ee1 mov      byte ptr [r14 + 0x161], dl
219ee8 imul     rdx, rdi
219eec xor      rdx, rax
219eef xor      rdx, rsi
219ef2 mov      rcx, rdx
219ef5 xor      rcx, r12
219ef8 test     r15b, r15b
219efb lea      rax, [rdx + r12]
219eff cmove    rax, rcx
219f03 mov      qword ptr [r14 + 0xf8], rax
219f0a movsxd   rdx, dword ptr [r14 + 0x11e0]
219f11 mov      r10, qword ptr [r14 + 0x20]
219f15 mov      rcx, rdx
219f18 xor      rcx, qword ptr [r14 + 0x350]
219f1f xor      rcx, r10
219f22 xor      rcx, r12
219f25 xor      rcx, qword ptr [r14 + 0x348]
219f2c mov      rax, rcx
219f2f shr      rax, 0x21
219f33 xor      rax, rcx
219f36 movabs   rcx, 0xff51afd7ed558ccd
219f40 imul     rax, rcx
219f44 mov      rcx, rax
219f47 shr      rcx, 0x21
219f4b xor      rcx, rax
219f4e movabs   rax, 0xc4ceb9fe1a85ec53
219f58 imul     rcx, rax
219f5c movzx    eax, r8b
219f60 mov      rbx, rcx
219f63 xor      rax, 0xdd
219f69 shr      rbx, 0x21
219f6d xor      rbx, rcx
219f70 lea      rcx, [rip - 0x219f77]
219f77 mov      qword ptr [r14 + 0x28], rbx
219f7b movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
219f83 xor      bpl, 0x63
219f87 inc      edx
219f89 mov      dword ptr [r14 + 0x11e0], edx
219f90 movabs   r8, 0xff51afd7ed558ccd
219f9a test     dl, 0x1f
219f9d jne      0x140219fe3
219f9f movsxd   rax, edx
219fa2 xor      rax, r10
219fa5 xor      rax, qword ptr [r14 + 0x348]
219fac mov      rcx, rax
219faf shr      rcx, 0x21
219fb3 xor      rcx, rax
219fb6 movabs   rax, 0xc4ceb9fe1a85ec53
219fc0 imul     rcx, r8
219fc4 mov      rdx, rcx
219fc7 shr      rdx, 0x21
219fcb xor      rdx, rcx
219fce imul     rdx, rax
219fd2 mov      rax, rdx
219fd5 shr      rax, 0x21
219fd9 xor      rax, rdx
219fdc mov      qword ptr [r14 + 0x348], rax
219fe3 movzx    edx, bpl
219fe7 xor      r10, rdx
219fea mov      byte ptr [r14 + 0x4ad], bpl
219ff1 xor      r10, r12
219ff4 movabs   r12, 0xc4ceb9fe1a85ec53
219ffe mov      rax, r10
21a001 shr      rax, 0x21
21a005 xor      rax, r10
21a008 movabs   r10, 0x9e3779b97f4a7c15
21a012 imul     rax, r8
21a016 imul     rdx, r10
21a01a imul     r9, r10
21a01e mov      rcx, rax
21a021 shr      rcx, 0x21
21a025 xor      rcx, rax
21a028 imul     rcx, r12
21a02c mov      rax, rcx
21a02f shr      rax, 0x21
21a033 xor      rax, rcx
21a036 mov      ecx, dword ptr [r14 + 0x1178]
21a03d mov      qword ptr [r14 + 0x20], rax
21a041 movabs   rax, 0xd6e8feb86659fd93
21a04b imul     rcx, rax
21a04f xor      rcx, rdx
21a052 xor      rcx, rbx
21a055 movabs   rbx, 0x2545f4914f6cdd1d
21a05f mov      rax, rcx
21a062 add      r9, rbx
21a065 shr      rax, 0x21
21a069 xor      rax, rcx
21a06c imul     rax, r8
21a070 mov      rdx, rax
21a073 shr      rdx, 0x21
21a077 xor      rdx, rax
21a07a mov      rax, qword ptr [rsp + 0x60]
21a07f imul     rdx, r12
21a083 shr      rdx, 0x21
21a087 and      edx, 3
21a08a inc      rax
21a08d mov      qword ptr [r14 + 0x1b8], rax
21a094 cmp      bpl, 0x3e
21a098 jae      0x14021a132
21a09e inc      qword ptr [r14 + 0x11a0]
21a0a5 lea      rax, [rip - 0x21a0ac]
21a0ac mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
21a0b4 mov      qword ptr [r14 + 0x1b0], r9
21a0bb shr      r9, 0x1b
21a0bf movzx    eax, r9b
21a0c3 mov      byte ptr [r14 + 0x160], al
21a0ca imul     rax, rdi
21a0ce mov      ebx, edx
21a0d0 xor      rax, rsi
21a0d3 xor      rax, r11
21a0d6 mov      rcx, rax
21a0d9 add      rax, r8
21a0dc xor      rcx, r8
21a0df movzx    r8d, bpl
21a0e3 test     r15b, r15b
21a0e6 cmove    rax, rcx
21a0ea mov      rcx, r14
21a0ed mov      qword ptr [r14 + 0xf0], rax
21a0f4 call     0x1401f1f50
21a0f9 mov      r8, qword ptr [rsp + 0x70]
21a0fe lea      edx, [r13 - 1]
21a102 mov      eax, eax
21a104 imul     rcx, rbx, 0x3e
21a108 add      rcx, rax
21a10b mov      rax, qword ptr [r14 + 0x4b8]
21a112 movsxd   r9, dword ptr [rax + rcx*4]
21a116 mov      rcx, r14
21a119 movsxd   rax, dword ptr [r14 + 0x4c8]
21a120 xor      r9, rax
21a123 add      r9, qword ptr [r14 + 0x4c0]
21a12a call     r9
21a12d jmp      0x14021a1f9
21a132 inc      dword ptr [r14 + 0x11a8]
21a139 mov      rax, r9
21a13c shr      rax, 0x1b
21a140 movzx    ecx, al
21a143 lea      rax, [r11*4]
21a14b mov      byte ptr [r14 + 0x163], cl
21a152 imul     rcx, rdi
21a156 imul     r9, r10
21a15a xor      rcx, rax
21a15d xor      rcx, rsi
21a160 mov      qword ptr [r14 + 0x108], rcx
21a167 mov      r8, qword ptr [r14 + 0x1b8]
21a16e add      r9, rbx
21a171 mov      rax, r9
21a174 shr      rax, 0x1b
21a178 movzx    edx, al
21a17b mov      byte ptr [r14 + 0x16a], dl
21a182 imul     rax, r11, 0xb
21a186 imul     rdx, rdi
21a18a xor      rdx, rax
21a18d xor      rdx, rsi
21a190 mov      rcx, rdx
21a193 xor      rcx, 1
21a197 test     r15b, r15b
21a19a lea      rax, [rdx + 1]
21a19e cmove    rax, rcx
21a1a2 mov      qword ptr [r14 + 0x140], rax
21a1a9 lea      rax, [r8 + 2]
21a1ad mov      qword ptr [r14 + 0x1b8], rax
21a1b4 imul     r9, r10
21a1b8 add      r9, rbx
21a1bb mov      qword ptr [r14 + 0x1b0], r9
21a1c2 shr      r9, 0x1b
21a1c6 movzx    eax, r9b
21a1ca mov      byte ptr [r14 + 0x160], al
21a1d1 imul     rax, rdi
21a1d5 xor      rax, rsi
21a1d8 xor      rax, r11
21a1db mov      rcx, rax
21a1de add      rax, 0xfe1ab
21a1e4 xor      rcx, 0xfe1ab
21a1eb test     r15b, r15b
21a1ee cmove    rax, rcx
21a1f2 mov      qword ptr [r14 + 0xf0], rax
21a1f9 mov      r12, qword ptr [rsp + 0x28]
21a1fe mov      rsi, qword ptr [rsp + 0x68]
21a203 mov      r15, qword ptr [rsp + 0x20]
21a208 add      rsp, 0x30
21a20c pop      r14
21a20e pop      r13
21a210 pop      rdi
21a211 pop      rbp
21a212 pop      rbx
21a213 ret      
21a214 mov      edx, 0x54485254
21a219 mov      rcx, r14
21a21c call     0x1401ed830
21a221 int3     
21a222 mov      edx, 0x43414e59
21a227 mov      rcx, r14
21a22a call     0x1401ed830
21a22f int3     
