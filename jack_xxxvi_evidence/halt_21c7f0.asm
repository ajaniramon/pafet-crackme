21c7f0 mov      qword ptr [rsp + 0x18], r8
21c7f5 mov      dword ptr [rsp + 0x10], edx
21c7f9 push     rbx
21c7fa push     rbp
21c7fb push     rdi
21c7fc push     r12
21c7fe push     r13
21c800 push     r14
21c802 push     r15
21c804 sub      rsp, 0x20
21c808 movsxd   rax, dword ptr [rcx + 0x11e0]
21c80f mov      r14, rcx
21c812 mov      ebp, edx
21c814 movabs   rcx, 0x9801a1ed1bafc8d8
21c81e imul     rax, rcx
21c822 movabs   rcx, 0x3a582b269a714ce7
21c82c movabs   r15, 0x9e3779b97f4a7c15
21c836 xor      rax, qword ptr [r14 + 0x28]
21c83a movabs   r12, 0x2545f4914f6cdd1d
21c844 mov      qword ptr [rsp + 0x60], rax
21c849 movabs   r13, 0xff51afd7ed558ccd
21c853 mov      rax, qword ptr [rsp + 0x60]
21c858 mov      rdi, r8
21c85b movsxd   rax, dword ptr [r14 + 0x11e0]
21c862 imul     rax, rcx
21c866 movabs   rcx, 0xdc90b578193ac0f2
21c870 xor      rax, qword ptr [r14 + 0x28]
21c874 mov      qword ptr [rsp + 0x60], rax
21c879 mov      rax, qword ptr [rsp + 0x60]
21c87e movsxd   rax, dword ptr [r14 + 0x11e0]
21c885 imul     rax, rcx
21c889 movabs   rcx, 0xa51a26891415cb7
21c893 xor      rax, qword ptr [r14 + 0x28]
21c897 mov      qword ptr [rsp + 0x60], rax
21c89c mov      rax, qword ptr [rsp + 0x60]
21c8a1 mov      rax, qword ptr [r14 + 0x2e8]
21c8a8 mov      rax, qword ptr [r14 + 0x2e8]
21c8af add      rax, rcx
21c8b2 mov      rcx, rax
21c8b5 shr      rcx, 0x21
21c8b9 xor      rcx, rax
21c8bc movabs   rax, 0xc4ceb9fe1a85ec53
21c8c6 imul     rcx, r13
21c8ca mov      rdx, rcx
21c8cd shr      rdx, 0x21
21c8d1 xor      rdx, rcx
21c8d4 imul     rdx, rax
21c8d8 mov      rax, rdx
21c8db shr      rax, 0x21
21c8df xor      rdx, rax
21c8e2 mov      rax, qword ptr [r14 + 0x2e8]
21c8e9 shr      rax, 3
21c8ed xor      rax, rdx
21c8f0 mov      qword ptr [r14 + 0x2e8], rax
21c8f7 mov      rbx, qword ptr [r14 + 0x1b0]
21c8fe mov      rdx, qword ptr [r14 + 0x1b8]
21c905 imul     rbx, r15
21c909 add      rbx, r12
21c90c mov      rax, rbx
21c90f shr      rax, 0x1b
21c913 movzx    ecx, al
21c916 mov      byte ptr [r14 + 0x163], cl
21c91d mov      r10, qword ptr [r14 + 0xe0]
21c924 mov      r8, qword ptr [r14 + 0xd8]
21c92b mov      r9, qword ptr [r14 + 0xd0]
21c932 movzx    r11d, byte ptr [r14 + 0xe8]
21c93a imul     rcx, r10
21c93e imul     rbx, r15
21c942 lea      rax, [r8*4]
21c94a xor      rcx, rax
21c94d xor      rcx, r9
21c950 mov      qword ptr [r14 + 0x108], rcx
21c957 add      rbx, r12
21c95a mov      rax, rbx
21c95d shr      rax, 0x1b
21c961 movzx    eax, al
21c964 mov      byte ptr [r14 + 0x160], al
21c96b imul     rax, r10
21c96f xor      rax, r9
21c972 xor      rax, r8
21c975 mov      rcx, rax
21c978 add      rax, 0xfe1ab
21c97e xor      rcx, 0xfe1ab
21c985 test     r11b, r11b
21c988 cmove    rax, rcx
21c98c mov      qword ptr [r14 + 0xf0], rax
21c993 lea      rax, [rdx + 3]
21c997 imul     rbx, r15
21c99b mov      qword ptr [r14 + 0x1b8], rax
21c9a2 add      rbx, r12
21c9a5 mov      qword ptr [r14 + 0x1b0], rbx
21c9ac imul     rax, r8, 0xb
21c9b0 shr      rbx, 0x1b
21c9b4 movzx    edx, bl
21c9b7 mov      byte ptr [r14 + 0x16a], dl
21c9be imul     rdx, r10
21c9c2 xor      rdx, rax
21c9c5 xor      rdx, r9
21c9c8 mov      rcx, rdx
21c9cb xor      rcx, 1
21c9cf test     r11b, r11b
21c9d2 lea      rax, [rdx + 1]
21c9d6 cmove    rax, rcx
21c9da mov      qword ptr [r14 + 0x140], rax
21c9e1 mov      rax, qword ptr [r14 + 0x2e8]
21c9e8 test     ebp, ebp
21c9ea jns      0x14021d50a
21c9f0 cmp      qword ptr [r14 + 0x11b8], rdi
21c9f7 jne      0x14021d518
21c9fd movsxd   rax, dword ptr [r14 + 0x11e0]
21ca04 movabs   rcx, 0x7a916928b46ebd9
21ca0e imul     rax, rcx
21ca12 mov      rcx, r14
21ca15 xor      rax, qword ptr [r14 + 0x28]
21ca19 mov      qword ptr [rsp + 0x60], rax
21ca1e mov      rax, qword ptr [rsp + 0x60]
21ca23 call     0x1401ee450
21ca28 test     eax, eax
21ca2a jne      0x14021d4fa
21ca30 cmp      dword ptr [r14 + 0xad0], eax
21ca37 jne      0x14021d4fa
21ca3d mov      r8, qword ptr [r14 + 0xf0]
21ca44 movzx    ecx, byte ptr [r14 + 0x160]
21ca4c mov      rax, r8
21ca4f mov      r10, qword ptr [r14 + 0xe0]
21ca56 mov      rbx, qword ptr [r14 + 0xd0]
21ca5d mov      r11, qword ptr [r14 + 0xd8]
21ca64 movzx    edi, byte ptr [r14 + 0xe8]
21ca6c mov      r9, qword ptr [r14 + 0x1b0]
21ca73 imul     rcx, r10
21ca77 mov      qword ptr [rsp + 0x78], rsi
21ca7c mov      rsi, qword ptr [r14 + 0x1b8]
21ca83 xor      rcx, rbx
21ca86 xor      rcx, r11
21ca89 xor      rax, rcx
21ca8c sub      r8, rcx
21ca8f test     dil, dil
21ca92 cmove    r8, rax
21ca96 inc      rsi
21ca99 imul     r9, r15
21ca9d mov      qword ptr [r14 + 0x1b8], rsi
21caa4 add      r9, r12
21caa7 mov      qword ptr [r14 + 0x1b0], r9
21caae mov      rax, r9
21cab1 shr      rax, 0x1b
21cab5 movzx    edx, al
21cab8 mov      byte ptr [r14 + 0x160], dl
21cabf imul     rdx, r10
21cac3 xor      rdx, rbx
21cac6 xor      rdx, r11
21cac9 mov      rcx, rdx
21cacc xor      rcx, r8
21cacf test     dil, dil
21cad2 lea      rax, [rdx + r8]
21cad6 cmove    rax, rcx
21cada mov      qword ptr [r14 + 0xf0], rax
21cae1 cmp      r8d, 0x2a0025
21cae8 jne      0x14021d4f5
21caee mov      eax, ebp
21caf0 btr      eax, 0x1f
21caf4 cmp      eax, 2
21caf7 jae      0x14021cb43
21caf9 imul     r9, r15
21cafd lea      rax, [rsi + 1]
21cb01 mov      qword ptr [r14 + 0x1b8], rax
21cb08 add      r9, r12
21cb0b mov      qword ptr [r14 + 0x1b0], r9
21cb12 shr      r9, 0x1b
21cb16 movzx    eax, r9b
21cb1a mov      byte ptr [r14 + 0x160], al
21cb21 imul     rax, r10
21cb25 xor      rax, rbx
21cb28 xor      rax, r11
21cb2b mov      rcx, rax
21cb2e add      rax, 0x85b36
21cb34 xor      rcx, 0x85b36
21cb3b test     dil, dil
21cb3e jmp      0x14021d4ea
21cb43 mov      rcx, r14
21cb46 call     0x1401ee070
21cb4b movzx    ecx, byte ptr [r14 + 0x4ad]
21cb53 movabs   r8, 0xc4ceb9fe1a85ec53
21cb5d mov      r11, qword ptr [r14 + 0xe0]
21cb64 mov      r10, qword ptr [r14 + 0xd0]
21cb6b movzx    r9d, byte ptr [r14 + 0xe8]
21cb73 mov      eax, eax
21cb75 xor      rcx, rax
21cb78 xor      rcx, qword ptr [r14 + 0x11e8]
21cb7f mov      rax, rcx
21cb82 shr      rax, 0x21
21cb86 xor      rax, rcx
21cb89 imul     rax, r13
21cb8d mov      rcx, rax
21cb90 shr      rcx, 0x21
21cb94 xor      rcx, rax
21cb97 mov      rax, qword ptr [r14 + 0x28]
21cb9b xor      rax, qword ptr [r14 + 0x20]
21cb9f imul     rcx, r8
21cba3 mov      rdx, rcx
21cba6 shr      rdx, 0x21
21cbaa xor      rdx, rcx
21cbad xor      rax, rdx
21cbb0 mov      qword ptr [r14 + 0x11e8], rdx
21cbb7 mov      rcx, rax
21cbba shr      rcx, 0x21
21cbbe xor      rcx, rax
21cbc1 imul     rcx, r13
21cbc5 mov      rdx, rcx
21cbc8 shr      rdx, 0x21
21cbcc xor      rdx, rcx
21cbcf imul     rdx, r8
21cbd3 mov      rax, rdx
21cbd6 shr      rax, 0x21
21cbda xor      rax, rdx
21cbdd mov      qword ptr [r14 + 0x20], rax
21cbe1 mov      rdx, qword ptr [r14 + 0x138]
21cbe8 movzx    ecx, byte ptr [r14 + 0x169]
21cbf0 mov      rax, qword ptr [r14 + 0xd8]
21cbf7 imul     rcx, r11
21cbfb lea      rbx, [rax + rax*4]
21cbff mov      rax, rdx
21cc02 add      rbx, rbx
21cc05 xor      rcx, rbx
21cc08 xor      rcx, r10
21cc0b xor      rax, rcx
21cc0e sub      rdx, rcx
21cc11 test     r9b, r9b
21cc14 cmove    rdx, rax
21cc18 mov      rax, qword ptr [r14 + 0x1b0]
21cc1f inc      qword ptr [r14 + 0x1b8]
21cc26 imul     rax, r15
21cc2a add      rax, r12
21cc2d mov      qword ptr [r14 + 0x1b0], rax
21cc34 shr      rax, 0x1b
21cc38 movzx    r8d, al
21cc3c mov      byte ptr [r14 + 0x169], r8b
21cc43 imul     r8, r11
21cc47 xor      r8, rbx
21cc4a xor      r8, r10
21cc4d mov      rcx, r8
21cc50 xor      rcx, rdx
21cc53 test     r9b, r9b
21cc56 lea      rax, [r8 + rdx]
21cc5a cmove    rax, rcx
21cc5e mov      rcx, r14
21cc61 mov      qword ptr [r14 + 0x138], rax
21cc68 call     0x1401f0910
21cc6d mov      rax, qword ptr [r14 + 0xd8]
21cc74 mov      r10, qword ptr [r14 + 0xe0]
21cc7b movzx    ecx, byte ptr [r14 + 0x168]
21cc83 mov      rbx, qword ptr [r14 + 0xd0]
21cc8a mov      rdx, qword ptr [r14 + 0x130]
21cc91 lea      r11, [rax + rax*8]
21cc95 movzx    r9d, byte ptr [r14 + 0xe8]
21cc9d mov      rax, rdx
21cca0 imul     rcx, r10
21cca4 xor      rcx, r11
21cca7 xor      rcx, rbx
21ccaa xor      rax, rcx
21ccad sub      rdx, rcx
21ccb0 test     r9b, r9b
21ccb3 cmove    rdx, rax
21ccb7 mov      rax, qword ptr [r14 + 0x1b0]
21ccbe inc      qword ptr [r14 + 0x1b8]
21ccc5 mov      rcx, rdx
21ccc8 imul     rax, r15
21cccc add      rax, r12
21cccf mov      qword ptr [r14 + 0x1b0], rax
21ccd6 shr      rax, 0x1b
21ccda movzx    r8d, al
21ccde mov      byte ptr [r14 + 0x168], r8b
21cce5 imul     r8, r10
21cce9 xor      r8, r11
21ccec xor      r8, rbx
21ccef xor      rcx, r8
21ccf2 test     r9b, r9b
21ccf5 lea      rax, [rdx + r8]
21ccf9 cmove    rax, rcx
21ccfd mov      rcx, r14
21cd00 mov      qword ptr [r14 + 0x130], rax
21cd07 call     0x1401f0910
21cd0c mov      rcx, r14
21cd0f call     0x1401ee070
21cd14 cmp      eax, dword ptr [r14 + 0x1d8]
21cd1b jae      0x14021cd27
21cd1d mov      edx, eax
21cd1f mov      rcx, r14
21cd22 call     0x1401f0910
21cd27 mov      rsi, qword ptr [r14 + 0xe0]
21cd2e mov      rbp, qword ptr [r14 + 0xd0]
21cd35 mov      r11, qword ptr [r14 + 0x130]
21cd3c movzx    edi, byte ptr [r14 + 0xe8]
21cd44 mov      rax, r11
21cd47 movzx    ecx, byte ptr [r14 + 0x168]
21cd4f mov      rbx, qword ptr [r14 + 0xd8]
21cd56 mov      r8, qword ptr [r14 + 0x1b8]
21cd5d mov      r9, qword ptr [r14 + 0x1b0]
21cd64 imul     rcx, rsi
21cd68 lea      r10, [rbx + rbx*8]
21cd6c xor      rcx, r10
21cd6f xor      rcx, rbp
21cd72 xor      rax, rcx
21cd75 sub      r11, rcx
21cd78 test     dil, dil
21cd7b cmove    r11, rax
21cd7f imul     r9, r15
21cd83 mov      rcx, r11
21cd86 add      r9, r12
21cd89 mov      rax, r9
21cd8c shr      rax, 0x1b
21cd90 movzx    edx, al
21cd93 mov      byte ptr [r14 + 0x168], dl
21cd9a imul     rdx, rsi
21cd9e xor      rdx, rbp
21cda1 xor      rdx, r10
21cda4 xor      rcx, rdx
21cda7 test     dil, dil
21cdaa lea      rax, [r11 + rdx]
21cdae cmove    rax, rcx
21cdb2 mov      rcx, r11
21cdb5 mov      qword ptr [r14 + 0x130], rax
21cdbc lea      rax, [r8 + 2]
21cdc0 mov      qword ptr [r14 + 0x1b8], rax
21cdc7 mov      r8d, 0x5126
21cdcd imul     r9, r15
21cdd1 lea      rax, [rbx + rbx*4]
21cdd5 add      rax, rax
21cdd8 add      r9, r12
21cddb mov      qword ptr [r14 + 0x1b0], r9
21cde2 shr      r9, 0x1b
21cde6 movzx    edx, r9b
21cdea mov      byte ptr [r14 + 0x169], dl
21cdf1 imul     rdx, rsi
21cdf5 xor      rdx, rax
21cdf8 xor      rdx, rbp
21cdfb xor      rcx, rdx
21cdfe test     dil, dil
21ce01 lea      rax, [r11 + rdx]
21ce05 cmove    rax, rcx
21ce09 mov      rcx, r14
21ce0c mov      qword ptr [r14 + 0x138], rax
21ce13 movzx    edx, byte ptr [r14 + 0x4ad]
21ce1b xor      rdx, qword ptr [r14 + 0x348]
21ce22 call     0x1401f1520
21ce27 mov      r8, qword ptr [r14 + 0x348]
21ce2e movabs   rdi, 0xc4ceb9fe1a85ec53
21ce38 mov      rax, r8
21ce3b xor      rax, qword ptr [r14 + 0x20]
21ce3f mov      rcx, rax
21ce42 shr      rcx, 0x21
21ce46 xor      rcx, rax
21ce49 imul     rcx, r13
21ce4d mov      rax, rcx
21ce50 shr      rax, 0x21
21ce54 xor      rax, rcx
21ce57 imul     rax, rdi
21ce5b mov      rdx, rax
21ce5e shr      rdx, 0x21
21ce62 xor      edx, eax
21ce64 mov      ecx, edx
21ce66 lea      eax, [rdx + 1]
21ce69 imul     ecx, eax
21ce6c xor      edx, eax
21ce6e not      ecx
21ce70 and      ecx, edx
21ce72 test     cl, 1
21ce75 je       0x14021cede
21ce77 and      r8b, 3
21ce7b cmp      r8b, 1
21ce7f jne      0x14021cede
21ce81 mov      rax, qword ptr [r14 + 0x1b0]
21ce88 inc      qword ptr [r14 + 0x1b8]
21ce8f imul     rax, r15
21ce93 add      rax, r12
21ce96 mov      qword ptr [r14 + 0x1b0], rax
21ce9d shr      rax, 0x1b
21cea1 movzx    eax, al
21cea4 mov      byte ptr [r14 + 0x160], al
21ceab imul     rax, qword ptr [r14 + 0xe0]
21ceb3 xor      rax, qword ptr [r14 + 0xd0]
21ceba xor      rax, qword ptr [r14 + 0xd8]
21cec1 mov      rcx, rax
21cec4 add      rax, 0x3dd18f
21ceca xor      rcx, 0x3dd18f
21ced1 cmp      byte ptr [r14 + 0xe8], 0
21ced9 jmp      0x14021d4ea
21cede mov      rcx, r14
21cee1 call     0x1401ee070
21cee6 mov      ebx, eax
21cee8 cmp      eax, dword ptr [r14 + 0x1d8]
21ceef jb       0x14021cf4e
21cef1 mov      rax, qword ptr [r14 + 0x1b0]
21cef8 inc      qword ptr [r14 + 0x1b8]
21ceff imul     rax, r15
21cf03 add      rax, r12
21cf06 mov      qword ptr [r14 + 0x1b0], rax
21cf0d shr      rax, 0x1b
21cf11 movzx    eax, al
21cf14 mov      byte ptr [r14 + 0x160], al
21cf1b imul     rax, qword ptr [r14 + 0xe0]
21cf23 xor      rax, qword ptr [r14 + 0xd0]
21cf2a xor      rax, qword ptr [r14 + 0xd8]
21cf31 mov      rcx, rax
21cf34 add      rax, 0xfe1ab
21cf3a xor      rcx, 0xfe1ab
21cf41 cmp      byte ptr [r14 + 0xe8], 0
21cf49 jmp      0x14021d4ea
21cf4e mov      edx, ebx
21cf50 mov      rcx, r14
21cf53 call     0x1401f25b0
21cf58 movsxd   rcx, dword ptr [r14 + 0x11e0]
21cf5f movabs   r8, 0xd6e8feb86659fd93
21cf69 mov      rdx, qword ptr [r14 + 0x20]
21cf6d mov      rax, rbx
21cf70 imul     rax, r8
21cf74 imul     rcx, r15
21cf78 rol      rdx, 0x11
21cf7c xor      rcx, qword ptr [r14 + 0x260]
21cf83 xor      rax, rcx
21cf86 xor      rax, rdx
21cf89 mov      rcx, rax
21cf8c shr      rcx, 0x21
21cf90 xor      rcx, rax
21cf93 imul     rcx, r13
21cf97 mov      rdx, rcx
21cf9a shr      rdx, 0x21
21cf9e xor      rdx, rcx
21cfa1 imul     rdx, rdi
21cfa5 mov      rax, rdx
21cfa8 shr      rax, 0x21
21cfac xor      rax, rdx
21cfaf mov      r10, rax
21cfb2 shr      r10, 0x1d
21cfb6 xor      r10, rax
21cfb9 or       r10, 1
21cfbd mov      rax, r10
21cfc0 mov      qword ptr [r14 + 0x260], r10
21cfc7 and      eax, 0x3ff
21cfcc cmp      rax, 0x2c5
21cfd2 jne      0x14021cfe3
21cfd4 mov      rcx, r14
21cfd7 call     0x1402297e0
21cfdc mov      r10, qword ptr [r14 + 0x260]
21cfe3 movzx    eax, r10b
21cfe7 and      al, 0x1f
21cfe9 cmp      al, 0x15
21cfeb jne      0x14021d0d9
21cff1 movsxd   rcx, dword ptr [r14 + 0x11e0]
21cff8 mov      rax, qword ptr [r14 + 0x20]
21cffc xor      rcx, 0x5a5a
21d003 rol      rax, 0x11
21d007 imul     rcx, r15
21d00b xor      rcx, r10
21d00e xor      rcx, rax
21d011 movabs   rax, 0x8f70feda99a6026d
21d01b xor      rcx, rax
21d01e mov      rax, rcx
21d021 shr      rax, 0x21
21d025 xor      rax, rcx
21d028 imul     rax, r13
21d02c mov      rcx, rax
21d02f shr      rcx, 0x21
21d033 xor      rcx, rax
21d036 imul     rcx, rdi
21d03a mov      rax, rcx
21d03d shr      rax, 0x21
21d041 xor      rax, rcx
21d044 mov      r9, rax
21d047 shr      r9, 0x1d
21d04b xor      r9, rax
21d04e or       r9, 1
21d052 mov      rax, r9
21d055 mov      rcx, r9
21d058 shr      rax, 8
21d05c and      eax, 3
21d05f shr      rcx, 0x28
21d063 imul     r8, rax, 0x3e
21d067 mov      eax, 0x8421085
21d06c mul      ecx
21d06e mov      eax, ecx
21d070 sub      eax, edx
21d072 shr      eax, 1
21d074 add      eax, edx
21d076 shr      eax, 5
21d079 imul     eax, eax, 0x3e
21d07c sub      ecx, eax
21d07e mov      eax, ecx
21d080 add      r8, rax
21d083 mov      rax, qword ptr [r14 + 0x4b8]
21d08a movsxd   rcx, dword ptr [rax + r8*4]
21d08e movsxd   rax, dword ptr [r14 + 0x4c8]
21d095 xor      rcx, rax
21d098 add      rcx, qword ptr [r14 + 0x4c0]
21d09f xor      rcx, r9
21d0a2 mov      rax, rcx
21d0a5 shr      rax, 0x21
21d0a9 xor      rax, rcx
21d0ac imul     rax, r13
21d0b0 mov      rcx, rax
21d0b3 shr      rcx, 0x21
21d0b7 xor      rcx, rax
21d0ba imul     rcx, rdi
21d0be mov      rax, rcx
21d0c1 shr      rax, 0x21
21d0c5 xor      rax, r10
21d0c8 xor      rax, rcx
21d0cb inc      qword ptr [r14 + 0x268]
21d0d2 mov      qword ptr [r14 + 0x260], rax
21d0d9 inc      dword ptr [r14 + 0x200]
21d0e0 mov      eax, dword ptr [r14 + 0x200]
21d0e7 cmp      eax, dword ptr [r14 + 0x1fc]
21d0ee jb       0x14021d103
21d0f0 mov      rcx, r14
21d0f3 mov      dword ptr [r14 + 0x200], 0
21d0fe call     0x1401ef7c0
21d103 mov      r8d, ebx
21d106 mov      edx, ebx
21d108 mov      rcx, r14
21d10b call     0x1401f0660
21d110 inc      qword ptr [r14 + 0x1b8]
21d117 mov      r9, qword ptr [r14 + 0x1b0]
21d11e mov      r13, qword ptr [r14 + 0x1b8]
21d125 imul     r9, r15
21d129 add      r9, r12
21d12c lea      r12d, [rbx + 1]
21d130 mov      qword ptr [r14 + 0x1b0], r9
21d137 mov      rax, r9
21d13a shr      rax, 0x1b
21d13e movzx    edx, al
21d141 mov      byte ptr [r14 + 0x168], dl
21d148 mov      r11, qword ptr [r14 + 0xe0]
21d14f mov      r10, qword ptr [r14 + 0xd8]
21d156 mov      rdi, qword ptr [r14 + 0xd0]
21d15d movzx    ebp, byte ptr [r14 + 0xe8]
21d165 imul     rdx, r11
21d169 lea      rax, [r10 + r10*8]
21d16d xor      rdx, rax
21d170 xor      rdx, rdi
21d173 mov      rcx, rdx
21d176 xor      rcx, rbx
21d179 test     bpl, bpl
21d17c lea      rax, [rdx + rbx]
21d180 cmove    rax, rcx
21d184 inc      r13
21d187 mov      qword ptr [r14 + 0x130], rax
21d18e mov      rcx, qword ptr [r14 + 0x1d0]
21d195 mov      rax, qword ptr [r14 + 0x48]
21d199 imul     r9, r15
21d19d movzx    r8d, byte ptr [rcx + rbx]
21d1a2 xor      r8b, byte ptr [rax + rbx]
21d1a6 movabs   rax, 0x2545f4914f6cdd1d
21d1b0 add      r9, rax
21d1b3 mov      qword ptr [r14 + 0x1b8], r13
21d1ba mov      rax, r9
21d1bd shr      rax, 0x1b
21d1c1 movzx    edx, al
21d1c4 lea      rax, [r10 + r10]
21d1c8 mov      byte ptr [r14 + 0x161], dl
21d1cf imul     rdx, r11
21d1d3 xor      rdx, rax
21d1d6 xor      rdx, rdi
21d1d9 mov      rcx, rdx
21d1dc xor      rcx, r12
21d1df test     bpl, bpl
21d1e2 lea      rax, [rdx + r12]
21d1e6 cmove    rax, rcx
21d1ea mov      qword ptr [r14 + 0xf8], rax
21d1f1 movsxd   rdx, dword ptr [r14 + 0x11e0]
21d1f8 mov      rbx, qword ptr [r14 + 0x20]
21d1fc mov      rcx, rdx
21d1ff xor      rcx, qword ptr [r14 + 0x350]
21d206 xor      rcx, r12
21d209 xor      rcx, qword ptr [r14 + 0x348]
21d210 xor      rcx, rbx
21d213 mov      rax, rcx
21d216 shr      rax, 0x21
21d21a xor      rax, rcx
21d21d movabs   rcx, 0xff51afd7ed558ccd
21d227 imul     rax, rcx
21d22b mov      rcx, rax
21d22e shr      rcx, 0x21
21d232 xor      rcx, rax
21d235 movabs   rax, 0xc4ceb9fe1a85ec53
21d23f imul     rcx, rax
21d243 movzx    eax, r8b
21d247 xor      rax, 0xdd
21d24d mov      r15, rcx
21d250 shr      r15, 0x21
21d254 xor      r15, rcx
21d257 lea      rcx, [rip - 0x21d25e]
21d25e mov      qword ptr [r14 + 0x28], r15
21d262 movzx    esi, byte ptr [rax + rcx + 0x3ecf00]
21d26a xor      sil, 0x63
21d26e inc      edx
21d270 mov      dword ptr [r14 + 0x11e0], edx
21d277 test     dl, 0x1f
21d27a jne      0x14021d2ca
21d27c movsxd   rax, edx
21d27f xor      rax, qword ptr [r14 + 0x348]
21d286 xor      rax, rbx
21d289 mov      rcx, rax
21d28c shr      rcx, 0x21
21d290 xor      rcx, rax
21d293 movabs   rax, 0xff51afd7ed558ccd
21d29d imul     rcx, rax
21d2a1 movabs   rax, 0xc4ceb9fe1a85ec53
21d2ab mov      rdx, rcx
21d2ae shr      rdx, 0x21
21d2b2 xor      rdx, rcx
21d2b5 imul     rdx, rax
21d2b9 mov      rax, rdx
21d2bc shr      rax, 0x21
21d2c0 xor      rax, rdx
21d2c3 mov      qword ptr [r14 + 0x348], rax
21d2ca movzx    r8d, sil
21d2ce mov      eax, r8d
21d2d1 mov      byte ptr [r14 + 0x4ad], sil
21d2d8 xor      rax, r12
21d2db movabs   r12, 0xff51afd7ed558ccd
21d2e5 xor      rax, rbx
21d2e8 movabs   rbx, 0x9e3779b97f4a7c15
21d2f2 mov      rcx, rax
21d2f5 shr      rcx, 0x21
21d2f9 xor      rcx, rax
21d2fc movabs   rax, 0xc4ceb9fe1a85ec53
21d306 imul     rcx, r12
21d30a imul     r8, rbx
21d30e imul     r9, rbx
21d312 mov      rdx, rcx
21d315 shr      rdx, 0x21
21d319 xor      rdx, rcx
21d31c mov      ecx, dword ptr [r14 + 0x1178]
21d323 imul     rdx, rax
21d327 mov      rax, rdx
21d32a shr      rax, 0x21
21d32e xor      rax, rdx
21d331 mov      qword ptr [r14 + 0x20], rax
21d335 movabs   rax, 0xd6e8feb86659fd93
21d33f imul     rcx, rax
21d343 xor      rcx, r8
21d346 xor      rcx, r15
21d349 movabs   r15, 0x2545f4914f6cdd1d
21d353 mov      rax, rcx
21d356 add      r9, r15
21d359 shr      rax, 0x21
21d35d xor      rax, rcx
21d360 imul     rax, r12
21d364 mov      rdx, rax
21d367 shr      rdx, 0x21
21d36b xor      rdx, rax
21d36e movabs   rax, 0xc4ceb9fe1a85ec53
21d378 imul     rdx, rax
21d37c lea      rax, [r13 + 1]
21d380 shr      rdx, 0x21
21d384 and      edx, 3
21d387 mov      qword ptr [r14 + 0x1b8], rax
21d38e cmp      sil, 0x3e
21d392 jae      0x14021d42e
21d398 inc      qword ptr [r14 + 0x11a0]
21d39f lea      rax, [rip - 0x21d3a6]
21d3a6 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
21d3ae mov      qword ptr [r14 + 0x1b0], r9
21d3b5 shr      r9, 0x1b
21d3b9 movzx    eax, r9b
21d3bd mov      byte ptr [r14 + 0x160], al
21d3c4 imul     rax, r11
21d3c8 mov      ebx, edx
21d3ca xor      rax, rdi
21d3cd xor      rax, r10
21d3d0 mov      rcx, rax
21d3d3 add      rax, r8
21d3d6 xor      rcx, r8
21d3d9 movzx    r8d, sil
21d3dd test     bpl, bpl
21d3e0 cmove    rax, rcx
21d3e4 mov      rcx, r14
21d3e7 mov      qword ptr [r14 + 0xf0], rax
21d3ee call     0x1401f1f50
21d3f3 mov      edx, dword ptr [rsp + 0x68]
21d3f7 mov      r8, qword ptr [rsp + 0x70]
21d3fc dec      edx
21d3fe mov      eax, eax
21d400 imul     rcx, rbx, 0x3e
21d404 add      rcx, rax
21d407 mov      rax, qword ptr [r14 + 0x4b8]
21d40e movsxd   r9, dword ptr [rax + rcx*4]
21d412 mov      rcx, r14
21d415 movsxd   rax, dword ptr [r14 + 0x4c8]
21d41c xor      r9, rax
21d41f add      r9, qword ptr [r14 + 0x4c0]
21d426 call     r9
21d429 jmp      0x14021d4f5
21d42e inc      dword ptr [r14 + 0x11a8]
21d435 mov      rax, r9
21d438 shr      rax, 0x1b
21d43c movzx    ecx, al
21d43f lea      rax, [r10*4]
21d447 mov      byte ptr [r14 + 0x163], cl
21d44e imul     rcx, r11
21d452 imul     r9, rbx
21d456 xor      rcx, rax
21d459 xor      rcx, rdi
21d45c mov      qword ptr [r14 + 0x108], rcx
21d463 mov      r8, qword ptr [r14 + 0x1b8]
21d46a add      r9, r15
21d46d mov      rax, r9
21d470 shr      rax, 0x1b
21d474 movzx    edx, al
21d477 mov      byte ptr [r14 + 0x16a], dl
21d47e imul     rax, r10, 0xb
21d482 imul     rdx, r11
21d486 xor      rdx, rax
21d489 xor      rdx, rdi
21d48c mov      rcx, rdx
21d48f xor      rcx, 1
21d493 test     bpl, bpl
21d496 lea      rax, [rdx + 1]
21d49a cmove    rax, rcx
21d49e mov      qword ptr [r14 + 0x140], rax
21d4a5 lea      rax, [r8 + 2]
21d4a9 mov      qword ptr [r14 + 0x1b8], rax
21d4b0 imul     r9, rbx
21d4b4 add      r9, r15
21d4b7 mov      qword ptr [r14 + 0x1b0], r9
21d4be shr      r9, 0x1b
21d4c2 movzx    eax, r9b
21d4c6 mov      byte ptr [r14 + 0x160], al
21d4cd imul     rax, r11
21d4d1 xor      rax, rdi
21d4d4 xor      rax, r10
21d4d7 mov      rcx, rax
21d4da add      rax, 0xfe1ab
21d4e0 xor      rcx, 0xfe1ab
21d4e7 test     bpl, bpl
21d4ea cmove    rax, rcx
21d4ee mov      qword ptr [r14 + 0xf0], rax
21d4f5 mov      rsi, qword ptr [rsp + 0x78]
21d4fa add      rsp, 0x20
21d4fe pop      r15
21d500 pop      r14
21d502 pop      r13
21d504 pop      r12
21d506 pop      rdi
21d507 pop      rbp
21d508 pop      rbx
21d509 ret      
21d50a mov      edx, 0x54485254
21d50f mov      rcx, r14
21d512 call     0x1401ed830
21d517 int3     
21d518 mov      edx, 0x43414e59
21d51d mov      rcx, r14
21d520 call     0x1401ed830
21d525 int3     
