21a230 mov      qword ptr [rsp + 0x18], r8
21a235 push     rbx
21a236 push     rbp
21a237 push     rdi
21a238 push     r13
21a23a push     r14
21a23c sub      rsp, 0x30
21a240 movsxd   rax, dword ptr [rcx + 0x11e0]
21a247 mov      r14, rcx
21a24a mov      r13d, edx
21a24d movabs   rcx, 0xd0d99b284d5fb420
21a257 imul     rax, rcx
21a25b movabs   rcx, 0x728011e3cc81301f
21a265 movabs   rbp, 0xff51afd7ed558ccd
21a26f xor      rax, qword ptr [r14 + 0x28]
21a273 mov      rdi, r8
21a276 mov      qword ptr [rsp + 0x60], rax
21a27b mov      rax, qword ptr [rsp + 0x60]
21a280 movsxd   rax, dword ptr [r14 + 0x11e0]
21a287 imul     rax, rcx
21a28b movabs   rcx, 0x94488fbd4fcabc0a
21a295 xor      rax, qword ptr [r14 + 0x28]
21a299 mov      qword ptr [rsp + 0x60], rax
21a29e mov      rax, qword ptr [rsp + 0x60]
21a2a3 movsxd   rax, dword ptr [r14 + 0x11e0]
21a2aa imul     rax, rcx
21a2ae movabs   rcx, 0xe0f213644747a424
21a2b8 xor      rax, qword ptr [r14 + 0x28]
21a2bc mov      qword ptr [rsp + 0x60], rax
21a2c1 mov      rax, qword ptr [rsp + 0x60]
21a2c6 mov      rax, qword ptr [r14 + 0x2f0]
21a2cd xor      rax, rcx
21a2d0 mov      rcx, rax
21a2d3 shr      rcx, 0x21
21a2d7 xor      rcx, rax
21a2da movabs   rax, 0xc4ceb9fe1a85ec53
21a2e4 imul     rcx, rbp
21a2e8 mov      rdx, rcx
21a2eb shr      rdx, 0x21
21a2ef xor      rdx, rcx
21a2f2 mov      rcx, r14
21a2f5 imul     rdx, rax
21a2f9 mov      rax, rdx
21a2fc shr      rax, 0x21
21a300 xor      rdx, rax
21a303 mov      rax, qword ptr [r14 + 0x2f0]
21a30a shr      rax, 7
21a30e add      rax, rdx
21a311 mov      qword ptr [r14 + 0x2f0], rax
21a318 call     0x1401ee940
21a31d mov      rcx, r14
21a320 mov      rbx, rax
21a323 call     0x1401ee940
21a328 movabs   rcx, 0x8000000000000000
21a332 xor      edx, edx
21a334 xor      rax, rcx
21a337 xor      rbx, rcx
21a33a cmp      rax, rbx
21a33d mov      rcx, r14
21a340 setb     dl
21a343 call     0x1401ee820
21a348 mov      rax, qword ptr [r14 + 0x2f0]
21a34f test     r13d, r13d
21a352 jns      0x14021ae90
21a358 cmp      qword ptr [r14 + 0x11b8], rdi
21a35f jne      0x14021ae9e
21a365 movsxd   rax, dword ptr [r14 + 0x11e0]
21a36c movabs   rcx, 0x9d3fc6315e4e113
21a376 imul     rax, rcx
21a37a mov      rcx, r14
21a37d xor      rax, qword ptr [r14 + 0x28]
21a381 mov      qword ptr [rsp + 0x60], rax
21a386 mov      rax, qword ptr [rsp + 0x60]
21a38b call     0x1401ee450
21a390 test     eax, eax
21a392 jne      0x14021ae84
21a398 cmp      dword ptr [r14 + 0xad0], eax
21a39f jne      0x14021ae84
21a3a5 mov      r8, qword ptr [r14 + 0xf0]
21a3ac movzx    ecx, byte ptr [r14 + 0x160]
21a3b4 mov      rax, r8
21a3b7 mov      r10, qword ptr [r14 + 0xe0]
21a3be mov      rbx, qword ptr [r14 + 0xd0]
21a3c5 mov      r11, qword ptr [r14 + 0xd8]
21a3cc movzx    edi, byte ptr [r14 + 0xe8]
21a3d4 mov      r9, qword ptr [r14 + 0x1b0]
21a3db imul     rcx, r10
21a3df mov      qword ptr [rsp + 0x68], rsi
21a3e4 mov      rsi, qword ptr [r14 + 0x1b8]
21a3eb xor      rcx, rbx
21a3ee xor      rcx, r11
21a3f1 mov      qword ptr [rsp + 0x28], r12
21a3f6 xor      rax, rcx
21a3f9 mov      qword ptr [rsp + 0x20], r15
21a3fe sub      r8, rcx
21a401 movabs   r15, 0x9e3779b97f4a7c15
21a40b test     dil, dil
21a40e movabs   r12, 0x2545f4914f6cdd1d
21a418 cmove    r8, rax
21a41c inc      rsi
21a41f imul     r9, r15
21a423 mov      qword ptr [r14 + 0x1b8], rsi
21a42a mov      rcx, r8
21a42d add      r9, r12
21a430 mov      qword ptr [r14 + 0x1b0], r9
21a437 mov      rax, r9
21a43a shr      rax, 0x1b
21a43e movzx    edx, al
21a441 mov      byte ptr [r14 + 0x160], dl
21a448 imul     rdx, r10
21a44c xor      rdx, rbx
21a44f xor      rdx, r11
21a452 xor      rcx, rdx
21a455 test     dil, dil
21a458 lea      rax, [r8 + rdx]
21a45c cmove    rax, rcx
21a460 mov      qword ptr [r14 + 0xf0], rax
21a467 cmp      r8d, 0x48cad
21a46e jne      0x14021ae75
21a474 mov      eax, r13d
21a477 btr      eax, 0x1f
21a47b cmp      eax, 2
21a47e jae      0x14021a4ca
21a480 imul     r9, r15
21a484 lea      rax, [rsi + 1]
21a488 mov      qword ptr [r14 + 0x1b8], rax
21a48f add      r9, r12
21a492 mov      qword ptr [r14 + 0x1b0], r9
21a499 shr      r9, 0x1b
21a49d movzx    eax, r9b
21a4a1 mov      byte ptr [r14 + 0x160], al
21a4a8 imul     rax, r10
21a4ac xor      rax, rbx
21a4af xor      rax, r11
21a4b2 mov      rcx, rax
21a4b5 add      rax, 0xf6105
21a4bb xor      rcx, 0xf6105
21a4c2 test     dil, dil
21a4c5 jmp      0x14021ae6a
21a4ca mov      rcx, r14
21a4cd call     0x1401ee070
21a4d2 movzx    ecx, byte ptr [r14 + 0x4ad]
21a4da movabs   r8, 0xc4ceb9fe1a85ec53
21a4e4 mov      r11, qword ptr [r14 + 0xe0]
21a4eb mov      r10, qword ptr [r14 + 0xd0]
21a4f2 movzx    r9d, byte ptr [r14 + 0xe8]
21a4fa mov      eax, eax
21a4fc xor      rcx, rax
21a4ff xor      rcx, qword ptr [r14 + 0x11e8]
21a506 mov      rax, rcx
21a509 shr      rax, 0x21
21a50d xor      rax, rcx
21a510 imul     rax, rbp
21a514 mov      rcx, rax
21a517 shr      rcx, 0x21
21a51b xor      rcx, rax
21a51e imul     rcx, r8
21a522 mov      rdx, rcx
21a525 shr      rdx, 0x21
21a529 xor      rdx, rcx
21a52c mov      qword ptr [r14 + 0x11e8], rdx
21a533 xor      rdx, qword ptr [r14 + 0x20]
21a537 xor      rdx, qword ptr [r14 + 0x28]
21a53b mov      rax, rdx
21a53e shr      rax, 0x21
21a542 xor      rax, rdx
21a545 imul     rax, rbp
21a549 mov      rcx, rax
21a54c shr      rcx, 0x21
21a550 xor      rcx, rax
21a553 imul     rcx, r8
21a557 mov      rax, rcx
21a55a shr      rax, 0x21
21a55e xor      rax, rcx
21a561 mov      qword ptr [r14 + 0x20], rax
21a565 mov      rdx, qword ptr [r14 + 0x138]
21a56c movzx    ecx, byte ptr [r14 + 0x169]
21a574 mov      rax, qword ptr [r14 + 0xd8]
21a57b imul     rcx, r11
21a57f lea      rbx, [rax + rax*4]
21a583 mov      rax, rdx
21a586 add      rbx, rbx
21a589 xor      rcx, rbx
21a58c xor      rcx, r10
21a58f xor      rax, rcx
21a592 sub      rdx, rcx
21a595 test     r9b, r9b
21a598 cmove    rdx, rax
21a59c mov      rax, qword ptr [r14 + 0x1b0]
21a5a3 inc      qword ptr [r14 + 0x1b8]
21a5aa imul     rax, r15
21a5ae add      rax, r12
21a5b1 mov      qword ptr [r14 + 0x1b0], rax
21a5b8 shr      rax, 0x1b
21a5bc movzx    r8d, al
21a5c0 mov      byte ptr [r14 + 0x169], r8b
21a5c7 imul     r8, r11
21a5cb xor      r8, rbx
21a5ce xor      r8, r10
21a5d1 mov      rcx, r8
21a5d4 xor      rcx, rdx
21a5d7 test     r9b, r9b
21a5da lea      rax, [r8 + rdx]
21a5de cmove    rax, rcx
21a5e2 mov      rcx, r14
21a5e5 mov      qword ptr [r14 + 0x138], rax
21a5ec call     0x1401f0910
21a5f1 mov      rax, qword ptr [r14 + 0xd8]
21a5f8 mov      rdx, qword ptr [r14 + 0x130]
21a5ff mov      r10, qword ptr [r14 + 0xe0]
21a606 movzx    ecx, byte ptr [r14 + 0x168]
21a60e mov      rbx, qword ptr [r14 + 0xd0]
21a615 lea      r11, [rax + rax*8]
21a619 movzx    r9d, byte ptr [r14 + 0xe8]
21a621 mov      rax, rdx
21a624 imul     rcx, r10
21a628 xor      rcx, r11
21a62b xor      rcx, rbx
21a62e xor      rax, rcx
21a631 sub      rdx, rcx
21a634 test     r9b, r9b
21a637 cmove    rdx, rax
21a63b mov      rax, qword ptr [r14 + 0x1b0]
21a642 inc      qword ptr [r14 + 0x1b8]
21a649 mov      rcx, rdx
21a64c imul     rax, r15
21a650 add      rax, r12
21a653 mov      qword ptr [r14 + 0x1b0], rax
21a65a shr      rax, 0x1b
21a65e movzx    r8d, al
21a662 mov      byte ptr [r14 + 0x168], r8b
21a669 imul     r8, r10
21a66d xor      r8, r11
21a670 xor      r8, rbx
21a673 xor      rcx, r8
21a676 test     r9b, r9b
21a679 lea      rax, [rdx + r8]
21a67d cmove    rax, rcx
21a681 mov      rcx, r14
21a684 mov      qword ptr [r14 + 0x130], rax
21a68b call     0x1401f0910
21a690 mov      rcx, r14
21a693 call     0x1401ee070
21a698 cmp      eax, dword ptr [r14 + 0x1d8]
21a69f jae      0x14021a6ab
21a6a1 mov      edx, eax
21a6a3 mov      rcx, r14
21a6a6 call     0x1401f0910
21a6ab mov      rsi, qword ptr [r14 + 0xe0]
21a6b2 mov      rbp, qword ptr [r14 + 0xd0]
21a6b9 mov      r11, qword ptr [r14 + 0x130]
21a6c0 movzx    edi, byte ptr [r14 + 0xe8]
21a6c8 mov      rax, r11
21a6cb movzx    ecx, byte ptr [r14 + 0x168]
21a6d3 mov      rbx, qword ptr [r14 + 0xd8]
21a6da mov      r8, qword ptr [r14 + 0x1b8]
21a6e1 mov      r10, qword ptr [r14 + 0x1b0]
21a6e8 imul     rcx, rsi
21a6ec lea      r9, [rbx + rbx*8]
21a6f0 xor      rcx, r9
21a6f3 xor      rcx, rbp
21a6f6 xor      rax, rcx
21a6f9 sub      r11, rcx
21a6fc test     dil, dil
21a6ff cmove    r11, rax
21a703 imul     r10, r15
21a707 mov      rcx, r11
21a70a add      r10, r12
21a70d mov      rax, r10
21a710 shr      rax, 0x1b
21a714 movzx    edx, al
21a717 mov      byte ptr [r14 + 0x168], dl
21a71e imul     rdx, rsi
21a722 xor      rdx, r9
21a725 xor      rdx, rbp
21a728 xor      rcx, rdx
21a72b test     dil, dil
21a72e lea      rax, [r11 + rdx]
21a732 cmove    rax, rcx
21a736 mov      rcx, r11
21a739 mov      qword ptr [r14 + 0x130], rax
21a740 lea      rax, [r8 + 2]
21a744 mov      qword ptr [r14 + 0x1b8], rax
21a74b mov      r8d, 0x9a4
21a751 imul     r10, r15
21a755 lea      rax, [rbx + rbx*4]
21a759 add      rax, rax
21a75c add      r10, r12
21a75f mov      qword ptr [r14 + 0x1b0], r10
21a766 shr      r10, 0x1b
21a76a movzx    edx, r10b
21a76e mov      byte ptr [r14 + 0x169], dl
21a775 imul     rdx, rsi
21a779 xor      rdx, rax
21a77c xor      rdx, rbp
21a77f xor      rcx, rdx
21a782 test     dil, dil
21a785 lea      rax, [r11 + rdx]
21a789 cmove    rax, rcx
21a78d mov      rcx, r14
21a790 mov      qword ptr [r14 + 0x138], rax
21a797 movzx    edx, byte ptr [r14 + 0x4ad]
21a79f xor      rdx, qword ptr [r14 + 0x348]
21a7a6 call     0x1401f1520
21a7ab mov      r8, qword ptr [r14 + 0x348]
21a7b2 movabs   rdi, 0xff51afd7ed558ccd
21a7bc mov      rax, r8
21a7bf movabs   rsi, 0xc4ceb9fe1a85ec53
21a7c9 xor      rax, qword ptr [r14 + 0x20]
21a7cd mov      rcx, rax
21a7d0 shr      rcx, 0x21
21a7d4 xor      rcx, rax
21a7d7 imul     rcx, rdi
21a7db mov      rax, rcx
21a7de shr      rax, 0x21
21a7e2 xor      rax, rcx
21a7e5 imul     rax, rsi
21a7e9 mov      rdx, rax
21a7ec shr      rdx, 0x21
21a7f0 xor      edx, eax
21a7f2 lea      eax, [rdx + 1]
21a7f5 mov      ecx, eax
21a7f7 xor      eax, edx
21a7f9 imul     ecx, edx
21a7fc not      ecx
21a7fe and      ecx, eax
21a800 test     cl, 1
21a803 je       0x14021a86c
21a805 and      r8b, 3
21a809 cmp      r8b, 1
21a80d jne      0x14021a86c
21a80f mov      rax, qword ptr [r14 + 0x1b0]
21a816 inc      qword ptr [r14 + 0x1b8]
21a81d imul     rax, r15
21a821 add      rax, r12
21a824 mov      qword ptr [r14 + 0x1b0], rax
21a82b shr      rax, 0x1b
21a82f movzx    eax, al
21a832 mov      byte ptr [r14 + 0x160], al
21a839 imul     rax, qword ptr [r14 + 0xe0]
21a841 xor      rax, qword ptr [r14 + 0xd8]
21a848 xor      rax, qword ptr [r14 + 0xd0]
21a84f mov      rcx, rax
21a852 add      rax, 0x116fdf
21a858 xor      rcx, 0x116fdf
21a85f cmp      byte ptr [r14 + 0xe8], 0
21a867 jmp      0x14021ae6a
21a86c mov      rcx, r14
21a86f call     0x1401ee070
21a874 mov      ebx, eax
21a876 cmp      eax, dword ptr [r14 + 0x1d8]
21a87d jb       0x14021a8dc
21a87f mov      rax, qword ptr [r14 + 0x1b0]
21a886 inc      qword ptr [r14 + 0x1b8]
21a88d imul     rax, r15
21a891 add      rax, r12
21a894 mov      qword ptr [r14 + 0x1b0], rax
21a89b shr      rax, 0x1b
21a89f movzx    eax, al
21a8a2 mov      byte ptr [r14 + 0x160], al
21a8a9 imul     rax, qword ptr [r14 + 0xe0]
21a8b1 xor      rax, qword ptr [r14 + 0xd8]
21a8b8 xor      rax, qword ptr [r14 + 0xd0]
21a8bf mov      rcx, rax
21a8c2 add      rax, 0xfe1ab
21a8c8 xor      rcx, 0xfe1ab
21a8cf cmp      byte ptr [r14 + 0xe8], 0
21a8d7 jmp      0x14021ae6a
21a8dc mov      edx, ebx
21a8de mov      rcx, r14
21a8e1 call     0x1401f25b0
21a8e6 movsxd   rcx, dword ptr [r14 + 0x11e0]
21a8ed movabs   r8, 0xd6e8feb86659fd93
21a8f7 mov      rdx, qword ptr [r14 + 0x20]
21a8fb mov      rax, rbx
21a8fe imul     rax, r8
21a902 imul     rcx, r15
21a906 rol      rdx, 0x11
21a90a xor      rax, rdx
21a90d xor      rcx, qword ptr [r14 + 0x260]
21a914 xor      rax, rcx
21a917 mov      rcx, rax
21a91a shr      rcx, 0x21
21a91e xor      rcx, rax
21a921 imul     rcx, rdi
21a925 mov      rdx, rcx
21a928 shr      rdx, 0x21
21a92c xor      rdx, rcx
21a92f imul     rdx, rsi
21a933 mov      rax, rdx
21a936 shr      rax, 0x21
21a93a xor      rax, rdx
21a93d mov      r10, rax
21a940 shr      r10, 0x1d
21a944 xor      r10, rax
21a947 or       r10, 1
21a94b mov      rax, r10
21a94e mov      qword ptr [r14 + 0x260], r10
21a955 and      eax, 0x3ff
21a95a cmp      rax, 0x2c5
21a960 jne      0x14021a971
21a962 mov      rcx, r14
21a965 call     0x1402297e0
21a96a mov      r10, qword ptr [r14 + 0x260]
21a971 movzx    eax, r10b
21a975 and      al, 0x1f
21a977 cmp      al, 0x15
21a979 jne      0x14021aa66
21a97f movsxd   rax, dword ptr [r14 + 0x11e0]
21a986 xor      rax, 0x5a5a
21a98c mov      rcx, qword ptr [r14 + 0x20]
21a990 imul     rax, r15
21a994 rol      rcx, 0x11
21a998 xor      rax, r10
21a99b xor      rcx, rax
21a99e movabs   rax, 0x8f70feda99a6026d
21a9a8 xor      rcx, rax
21a9ab mov      rax, rcx
21a9ae shr      rax, 0x21
21a9b2 xor      rax, rcx
21a9b5 imul     rax, rdi
21a9b9 mov      rcx, rax
21a9bc shr      rcx, 0x21
21a9c0 xor      rcx, rax
21a9c3 imul     rcx, rsi
21a9c7 mov      rax, rcx
21a9ca shr      rax, 0x21
21a9ce xor      rax, rcx
21a9d1 mov      r9, rax
21a9d4 shr      r9, 0x1d
21a9d8 xor      r9, rax
21a9db or       r9, 1
21a9df mov      rax, r9
21a9e2 mov      rcx, r9
21a9e5 shr      rax, 8
21a9e9 and      eax, 3
21a9ec shr      rcx, 0x28
21a9f0 imul     r8, rax, 0x3e
21a9f4 mov      eax, 0x8421085
21a9f9 mul      ecx
21a9fb mov      eax, ecx
21a9fd sub      eax, edx
21a9ff shr      eax, 1
21aa01 add      eax, edx
21aa03 shr      eax, 5
21aa06 imul     eax, eax, 0x3e
21aa09 sub      ecx, eax
21aa0b mov      eax, ecx
21aa0d add      r8, rax
21aa10 mov      rax, qword ptr [r14 + 0x4b8]
21aa17 movsxd   rcx, dword ptr [rax + r8*4]
21aa1b movsxd   rax, dword ptr [r14 + 0x4c8]
21aa22 xor      rcx, rax
21aa25 add      rcx, qword ptr [r14 + 0x4c0]
21aa2c xor      rcx, r9
21aa2f mov      rax, rcx
21aa32 shr      rax, 0x21
21aa36 xor      rax, rcx
21aa39 imul     rax, rdi
21aa3d mov      rcx, rax
21aa40 shr      rcx, 0x21
21aa44 xor      rcx, rax
21aa47 imul     rcx, rsi
21aa4b mov      rax, rcx
21aa4e shr      rax, 0x21
21aa52 xor      rax, rcx
21aa55 xor      rax, r10
21aa58 inc      qword ptr [r14 + 0x268]
21aa5f mov      qword ptr [r14 + 0x260], rax
21aa66 inc      dword ptr [r14 + 0x200]
21aa6d mov      eax, dword ptr [r14 + 0x200]
21aa74 cmp      eax, dword ptr [r14 + 0x1fc]
21aa7b jb       0x14021aa90
21aa7d mov      rcx, r14
21aa80 mov      dword ptr [r14 + 0x200], 0
21aa8b call     0x1401ef7c0
21aa90 mov      r8d, ebx
21aa93 mov      edx, ebx
21aa95 mov      rcx, r14
21aa98 call     0x1401f0660
21aa9d inc      qword ptr [r14 + 0x1b8]
21aaa4 mov      rcx, rbx
21aaa7 mov      r9, qword ptr [r14 + 0x1b0]
21aaae mov      rbp, r12
21aab1 mov      r10, qword ptr [r14 + 0x1b8]
21aab8 imul     r9, r15
21aabc add      r9, r12
21aabf lea      r12d, [rbx + 1]
21aac3 mov      qword ptr [r14 + 0x1b0], r9
21aaca mov      rax, r9
21aacd shr      rax, 0x1b
21aad1 movzx    edx, al
21aad4 mov      byte ptr [r14 + 0x168], dl
21aadb mov      rdi, qword ptr [r14 + 0xe0]
21aae2 mov      r11, qword ptr [r14 + 0xd8]
21aae9 mov      rsi, qword ptr [r14 + 0xd0]
21aaf0 movzx    r15d, byte ptr [r14 + 0xe8]
21aaf8 imul     rdx, rdi
21aafc lea      rax, [r11 + r11*8]
21ab00 xor      rdx, rax
21ab03 xor      rdx, rsi
21ab06 xor      rcx, rdx
21ab09 test     r15b, r15b
21ab0c lea      rax, [rbx + rdx]
21ab10 cmove    rax, rcx
21ab14 inc      r10
21ab17 mov      qword ptr [r14 + 0x130], rax
21ab1e mov      rcx, qword ptr [r14 + 0x1d0]
21ab25 mov      rax, qword ptr [r14 + 0x48]
21ab29 mov      qword ptr [rsp + 0x60], r10
21ab2e movzx    r8d, byte ptr [rcx + rbx]
21ab33 xor      r8b, byte ptr [rax + rbx]
21ab37 movabs   rax, 0x9e3779b97f4a7c15
21ab41 imul     r9, rax
21ab45 mov      qword ptr [r14 + 0x1b8], r10
21ab4c add      r9, rbp
21ab4f mov      rax, r9
21ab52 shr      rax, 0x1b
21ab56 movzx    edx, al
21ab59 lea      rax, [r11 + r11]
21ab5d mov      byte ptr [r14 + 0x161], dl
21ab64 imul     rdx, rdi
21ab68 xor      rdx, rax
21ab6b xor      rdx, rsi
21ab6e mov      rcx, rdx
21ab71 xor      rcx, r12
21ab74 test     r15b, r15b
21ab77 lea      rax, [rdx + r12]
21ab7b cmove    rax, rcx
21ab7f mov      qword ptr [r14 + 0xf8], rax
21ab86 movsxd   rdx, dword ptr [r14 + 0x11e0]
21ab8d mov      r10, qword ptr [r14 + 0x20]
21ab91 mov      rcx, rdx
21ab94 xor      rcx, qword ptr [r14 + 0x350]
21ab9b xor      rcx, r10
21ab9e xor      rcx, r12
21aba1 xor      rcx, qword ptr [r14 + 0x348]
21aba8 mov      rax, rcx
21abab shr      rax, 0x21
21abaf xor      rax, rcx
21abb2 movabs   rcx, 0xff51afd7ed558ccd
21abbc imul     rax, rcx
21abc0 mov      rcx, rax
21abc3 shr      rcx, 0x21
21abc7 xor      rcx, rax
21abca movabs   rax, 0xc4ceb9fe1a85ec53
21abd4 imul     rcx, rax
21abd8 movzx    eax, r8b
21abdc mov      rbx, rcx
21abdf xor      rax, 0xdd
21abe5 shr      rbx, 0x21
21abe9 xor      rbx, rcx
21abec lea      rcx, [rip - 0x21abf3]
21abf3 mov      qword ptr [r14 + 0x28], rbx
21abf7 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
21abff xor      bpl, 0x63
21ac03 inc      edx
21ac05 mov      dword ptr [r14 + 0x11e0], edx
21ac0c movabs   r8, 0xff51afd7ed558ccd
21ac16 test     dl, 0x1f
21ac19 jne      0x14021ac5f
21ac1b movsxd   rax, edx
21ac1e xor      rax, r10
21ac21 xor      rax, qword ptr [r14 + 0x348]
21ac28 mov      rcx, rax
21ac2b shr      rcx, 0x21
21ac2f xor      rcx, rax
21ac32 movabs   rax, 0xc4ceb9fe1a85ec53
21ac3c imul     rcx, r8
21ac40 mov      rdx, rcx
21ac43 shr      rdx, 0x21
21ac47 xor      rdx, rcx
21ac4a imul     rdx, rax
21ac4e mov      rax, rdx
21ac51 shr      rax, 0x21
21ac55 xor      rax, rdx
21ac58 mov      qword ptr [r14 + 0x348], rax
21ac5f movzx    edx, bpl
21ac63 xor      r10, rdx
21ac66 mov      byte ptr [r14 + 0x4ad], bpl
21ac6d xor      r10, r12
21ac70 movabs   r12, 0xc4ceb9fe1a85ec53
21ac7a mov      rax, r10
21ac7d shr      rax, 0x21
21ac81 xor      rax, r10
21ac84 movabs   r10, 0x9e3779b97f4a7c15
21ac8e imul     rax, r8
21ac92 imul     rdx, r10
21ac96 imul     r9, r10
21ac9a mov      rcx, rax
21ac9d shr      rcx, 0x21
21aca1 xor      rcx, rax
21aca4 imul     rcx, r12
21aca8 mov      rax, rcx
21acab shr      rax, 0x21
21acaf xor      rax, rcx
21acb2 mov      ecx, dword ptr [r14 + 0x1178]
21acb9 mov      qword ptr [r14 + 0x20], rax
21acbd movabs   rax, 0xd6e8feb86659fd93
21acc7 imul     rcx, rax
21accb xor      rcx, rdx
21acce xor      rcx, rbx
21acd1 movabs   rbx, 0x2545f4914f6cdd1d
21acdb mov      rax, rcx
21acde add      r9, rbx
21ace1 shr      rax, 0x21
21ace5 xor      rax, rcx
21ace8 imul     rax, r8
21acec mov      rdx, rax
21acef shr      rdx, 0x21
21acf3 xor      rdx, rax
21acf6 mov      rax, qword ptr [rsp + 0x60]
21acfb imul     rdx, r12
21acff shr      rdx, 0x21
21ad03 and      edx, 3
21ad06 inc      rax
21ad09 mov      qword ptr [r14 + 0x1b8], rax
21ad10 cmp      bpl, 0x3e
21ad14 jae      0x14021adae
21ad1a inc      qword ptr [r14 + 0x11a0]
21ad21 lea      rax, [rip - 0x21ad28]
21ad28 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
21ad30 mov      qword ptr [r14 + 0x1b0], r9
21ad37 shr      r9, 0x1b
21ad3b movzx    eax, r9b
21ad3f mov      byte ptr [r14 + 0x160], al
21ad46 imul     rax, rdi
21ad4a mov      ebx, edx
21ad4c xor      rax, rsi
21ad4f xor      rax, r11
21ad52 mov      rcx, rax
21ad55 add      rax, r8
21ad58 xor      rcx, r8
21ad5b movzx    r8d, bpl
21ad5f test     r15b, r15b
21ad62 cmove    rax, rcx
21ad66 mov      rcx, r14
21ad69 mov      qword ptr [r14 + 0xf0], rax
21ad70 call     0x1401f1f50
21ad75 mov      r8, qword ptr [rsp + 0x70]
21ad7a lea      edx, [r13 - 1]
21ad7e mov      eax, eax
21ad80 imul     rcx, rbx, 0x3e
21ad84 add      rcx, rax
21ad87 mov      rax, qword ptr [r14 + 0x4b8]
21ad8e movsxd   r9, dword ptr [rax + rcx*4]
21ad92 mov      rcx, r14
21ad95 movsxd   rax, dword ptr [r14 + 0x4c8]
21ad9c xor      r9, rax
21ad9f add      r9, qword ptr [r14 + 0x4c0]
21ada6 call     r9
21ada9 jmp      0x14021ae75
21adae inc      dword ptr [r14 + 0x11a8]
21adb5 mov      rax, r9
21adb8 shr      rax, 0x1b
21adbc movzx    ecx, al
21adbf lea      rax, [r11*4]
21adc7 mov      byte ptr [r14 + 0x163], cl
21adce imul     rcx, rdi
21add2 imul     r9, r10
21add6 xor      rcx, rax
21add9 xor      rcx, rsi
21addc mov      qword ptr [r14 + 0x108], rcx
21ade3 mov      r8, qword ptr [r14 + 0x1b8]
21adea add      r9, rbx
21aded mov      rax, r9
21adf0 shr      rax, 0x1b
21adf4 movzx    edx, al
21adf7 mov      byte ptr [r14 + 0x16a], dl
21adfe imul     rax, r11, 0xb
21ae02 imul     rdx, rdi
21ae06 xor      rdx, rax
21ae09 xor      rdx, rsi
21ae0c mov      rcx, rdx
21ae0f xor      rcx, 1
21ae13 test     r15b, r15b
21ae16 lea      rax, [rdx + 1]
21ae1a cmove    rax, rcx
21ae1e mov      qword ptr [r14 + 0x140], rax
21ae25 lea      rax, [r8 + 2]
21ae29 mov      qword ptr [r14 + 0x1b8], rax
21ae30 imul     r9, r10
21ae34 add      r9, rbx
21ae37 mov      qword ptr [r14 + 0x1b0], r9
21ae3e shr      r9, 0x1b
21ae42 movzx    eax, r9b
21ae46 mov      byte ptr [r14 + 0x160], al
21ae4d imul     rax, rdi
21ae51 xor      rax, rsi
21ae54 xor      rax, r11
21ae57 mov      rcx, rax
21ae5a add      rax, 0xfe1ab
21ae60 xor      rcx, 0xfe1ab
21ae67 test     r15b, r15b
21ae6a cmove    rax, rcx
21ae6e mov      qword ptr [r14 + 0xf0], rax
21ae75 mov      r12, qword ptr [rsp + 0x28]
21ae7a mov      rsi, qword ptr [rsp + 0x68]
21ae7f mov      r15, qword ptr [rsp + 0x20]
21ae84 add      rsp, 0x30
21ae88 pop      r14
21ae8a pop      r13
21ae8c pop      rdi
21ae8d pop      rbp
21ae8e pop      rbx
21ae8f ret      
21ae90 mov      edx, 0x54485254
21ae95 mov      rcx, r14
21ae98 call     0x1401ed830
21ae9d int3     
21ae9e mov      edx, 0x43414e59
21aea3 mov      rcx, r14
21aea6 call     0x1401ed830
21aeab int3     
