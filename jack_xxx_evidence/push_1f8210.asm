1f8210 push     r13
1f8212 push     r14
1f8214 push     r15
1f8216 sub      rsp, 0x40
1f821a movsxd   rax, dword ptr [rcx + 0x11e0]
1f8221 mov      r14, rcx
1f8224 mov      r15d, edx
1f8227 movabs   rcx, 0x33e684c9b3f98733
1f8231 imul     rax, rcx
1f8235 movabs   rcx, 0x91bf0e023227030c
1f823f mov      r13, r8
1f8242 xor      rax, qword ptr [r14 + 0x28]
1f8246 mov      qword ptr [rsp + 0x60], rax
1f824b mov      rax, qword ptr [rsp + 0x60]
1f8250 movsxd   rax, dword ptr [r14 + 0x11e0]
1f8257 imul     rax, rcx
1f825b movabs   rcx, 0x7777905cb16c8f19
1f8265 xor      rax, qword ptr [r14 + 0x28]
1f8269 mov      qword ptr [rsp + 0x60], rax
1f826e mov      rax, qword ptr [rsp + 0x60]
1f8273 movsxd   rax, dword ptr [r14 + 0x11e0]
1f827a imul     rax, rcx
1f827e xor      rax, qword ptr [r14 + 0x28]
1f8282 mov      qword ptr [rsp + 0x60], rax
1f8287 mov      rax, qword ptr [rsp + 0x60]
1f828c mov      rax, qword ptr [r14 + 0x2f8]
1f8293 shr      rax, 0xd
1f8297 mov      rcx, rax
1f829a shr      rcx, 0x21
1f829e xor      rcx, rax
1f82a1 movabs   rax, 0xff51afd7ed558ccd
1f82ab imul     rcx, rax
1f82af movabs   rax, 0xc4ceb9fe1a85ec53
1f82b9 mov      rdx, rcx
1f82bc shr      rdx, 0x21
1f82c0 xor      rdx, rcx
1f82c3 imul     rdx, rax
1f82c7 movabs   rax, 0x475c1810bb749f1d
1f82d1 mov      rcx, rdx
1f82d4 shr      rcx, 0x21
1f82d8 xor      rcx, rdx
1f82db xor      rcx, rax
1f82de mov      rax, qword ptr [r14 + 0x2f8]
1f82e5 add      rcx, rax
1f82e8 mov      qword ptr [r14 + 0x2f8], rcx
1f82ef mov      rcx, r14
1f82f2 call     0x1401f1c70
1f82f7 xor      edx, edx
1f82f9 cmp      eax, 0x11
1f82fc mov      ecx, edx
1f82fe cmovb    ecx, eax
1f8301 cmp      ecx, 0x11
1f8304 cmovae   ecx, edx
1f8307 mov      eax, ecx
1f8309 lea      rcx, [rip - 0x1f8310]
1f8310 mov      r8d, dword ptr [rcx + rax*4 + 0x3ead00]
1f8318 mov      eax, 0xaaaaaaab
1f831d mul      r8d
1f8320 mov      r9, qword ptr [rcx + r8*8 + 0x3ead80]
1f8328 mov      rcx, qword ptr [rcx + r8*8 + 0x3eae40]
1f8330 shr      edx, 1
1f8332 lea      eax, [rdx + rdx*2]
1f8335 sub      r8d, eax
1f8338 je       0x1401f834a
1f833a cmp      r8d, 1
1f833e je       0x1401f8345
1f8340 sub      rcx, r9
1f8343 jmp      0x1401f834d
1f8345 add      rcx, r9
1f8348 jmp      0x1401f834d
1f834a xor      rcx, r9
1f834d mov      rdx, rcx
1f8350 mov      rcx, r14
1f8353 call     0x1401ee820
1f8358 mov      rax, qword ptr [r14 + 0x2f8]
1f835f test     r15d, r15d
1f8362 jns      0x1401f8f1d
1f8368 cmp      qword ptr [r14 + 0x11b8], r13
1f836f jne      0x1401f8f2b
1f8375 movsxd   rax, dword ptr [r14 + 0x11e0]
1f837c movabs   rcx, 0xfb728018b153f3b7
1f8386 imul     rax, rcx
1f838a mov      rcx, r14
1f838d xor      rax, qword ptr [r14 + 0x28]
1f8391 mov      qword ptr [rsp + 0x60], rax
1f8396 mov      rax, qword ptr [rsp + 0x60]
1f839b call     0x1401ee450
1f83a0 test     eax, eax
1f83a2 jne      0x1401f8f12
1f83a8 cmp      dword ptr [r14 + 0xad0], eax
1f83af jne      0x1401f8f12
1f83b5 mov      r8, qword ptr [r14 + 0xf0]
1f83bc movzx    ecx, byte ptr [r14 + 0x160]
1f83c4 mov      rax, r8
1f83c7 mov      r10, qword ptr [r14 + 0xe0]
1f83ce mov      r11, qword ptr [r14 + 0xd8]
1f83d5 mov      r9, qword ptr [r14 + 0x1b0]
1f83dc imul     rcx, r10
1f83e0 mov      qword ptr [rsp + 0x68], rbx
1f83e5 mov      rbx, qword ptr [r14 + 0xd0]
1f83ec xor      rcx, rbx
1f83ef mov      qword ptr [rsp + 0x38], rbp
1f83f4 xor      rcx, r11
1f83f7 mov      qword ptr [rsp + 0x30], rsi
1f83fc mov      rsi, qword ptr [r14 + 0x1b8]
1f8403 xor      rax, rcx
1f8406 sub      r8, rcx
1f8409 mov      qword ptr [rsp + 0x28], rdi
1f840e movzx    edi, byte ptr [r14 + 0xe8]
1f8416 movabs   rbp, 0x2545f4914f6cdd1d
1f8420 test     dil, dil
1f8423 mov      qword ptr [rsp + 0x20], r12
1f8428 movabs   r12, 0x9e3779b97f4a7c15
1f8432 cmove    r8, rax
1f8436 inc      rsi
1f8439 imul     r9, r12
1f843d mov      qword ptr [r14 + 0x1b8], rsi
1f8444 add      r9, rbp
1f8447 mov      qword ptr [r14 + 0x1b0], r9
1f844e mov      rax, r9
1f8451 shr      rax, 0x1b
1f8455 movzx    edx, al
1f8458 mov      byte ptr [r14 + 0x160], dl
1f845f imul     rdx, r10
1f8463 xor      rdx, rbx
1f8466 xor      rdx, r11
1f8469 mov      rcx, rdx
1f846c xor      rcx, r8
1f846f test     dil, dil
1f8472 lea      rax, [rdx + r8]
1f8476 cmove    rax, rcx
1f847a mov      qword ptr [r14 + 0xf0], rax
1f8481 cmp      r8d, 0x26dc07
1f8488 jne      0x1401f8ef9
1f848e mov      eax, r15d
1f8491 btr      eax, 0x1f
1f8495 cmp      eax, 2
1f8498 jae      0x1401f84e4
1f849a imul     r9, r12
1f849e lea      rax, [rsi + 1]
1f84a2 mov      qword ptr [r14 + 0x1b8], rax
1f84a9 add      r9, rbp
1f84ac mov      qword ptr [r14 + 0x1b0], r9
1f84b3 shr      r9, 0x1b
1f84b7 movzx    eax, r9b
1f84bb mov      byte ptr [r14 + 0x160], al
1f84c2 imul     rax, r10
1f84c6 xor      rax, rbx
1f84c9 xor      rax, r11
1f84cc mov      rcx, rax
1f84cf add      rax, 0x3abaef
1f84d5 xor      rcx, 0x3abaef
1f84dc test     dil, dil
1f84df jmp      0x1401f8eee
1f84e4 mov      rcx, r14
1f84e7 call     0x1401ee070
1f84ec movzx    ecx, byte ptr [r14 + 0x4ad]
1f84f4 movabs   r8, 0xff51afd7ed558ccd
1f84fe mov      r11, qword ptr [r14 + 0xe0]
1f8505 movabs   r9, 0xc4ceb9fe1a85ec53
1f850f movzx    r10d, byte ptr [r14 + 0xe8]
1f8517 mov      eax, eax
1f8519 xor      rcx, rax
1f851c xor      rcx, qword ptr [r14 + 0x11e8]
1f8523 mov      rax, rcx
1f8526 shr      rax, 0x21
1f852a xor      rax, rcx
1f852d imul     rax, r8
1f8531 mov      rcx, rax
1f8534 shr      rcx, 0x21
1f8538 xor      rcx, rax
1f853b mov      rax, qword ptr [r14 + 0x28]
1f853f xor      rax, qword ptr [r14 + 0x20]
1f8543 imul     rcx, r9
1f8547 mov      rdx, rcx
1f854a shr      rdx, 0x21
1f854e xor      rdx, rcx
1f8551 xor      rax, rdx
1f8554 mov      qword ptr [r14 + 0x11e8], rdx
1f855b mov      rcx, rax
1f855e shr      rcx, 0x21
1f8562 xor      rcx, rax
1f8565 imul     rcx, r8
1f8569 mov      rdx, rcx
1f856c shr      rdx, 0x21
1f8570 xor      rdx, rcx
1f8573 imul     rdx, r9
1f8577 mov      r9, qword ptr [r14 + 0xd0]
1f857e mov      rax, rdx
1f8581 shr      rax, 0x21
1f8585 xor      rax, rdx
1f8588 mov      qword ptr [r14 + 0x20], rax
1f858c mov      rdx, qword ptr [r14 + 0x138]
1f8593 movzx    ecx, byte ptr [r14 + 0x169]
1f859b mov      rax, qword ptr [r14 + 0xd8]
1f85a2 imul     rcx, r11
1f85a6 lea      rbx, [rax + rax*4]
1f85aa mov      rax, rdx
1f85ad xor      rcx, r9
1f85b0 add      rbx, rbx
1f85b3 xor      rcx, rbx
1f85b6 xor      rax, rcx
1f85b9 sub      rdx, rcx
1f85bc test     r10b, r10b
1f85bf cmove    rdx, rax
1f85c3 mov      rax, qword ptr [r14 + 0x1b0]
1f85ca inc      qword ptr [r14 + 0x1b8]
1f85d1 imul     rax, r12
1f85d5 add      rax, rbp
1f85d8 mov      qword ptr [r14 + 0x1b0], rax
1f85df shr      rax, 0x1b
1f85e3 movzx    r8d, al
1f85e7 mov      byte ptr [r14 + 0x169], r8b
1f85ee imul     r8, r11
1f85f2 xor      r8, r9
1f85f5 xor      r8, rbx
1f85f8 mov      rcx, r8
1f85fb xor      rcx, rdx
1f85fe test     r10b, r10b
1f8601 lea      rax, [r8 + rdx]
1f8605 cmove    rax, rcx
1f8609 mov      rcx, r14
1f860c mov      qword ptr [r14 + 0x138], rax
1f8613 call     0x1401f0910
1f8618 mov      rax, qword ptr [r14 + 0xd8]
1f861f mov      r11, qword ptr [r14 + 0xe0]
1f8626 movzx    ecx, byte ptr [r14 + 0x168]
1f862e mov      r9, qword ptr [r14 + 0xd0]
1f8635 mov      rdx, qword ptr [r14 + 0x130]
1f863c lea      rbx, [rax + rax*8]
1f8640 movzx    r10d, byte ptr [r14 + 0xe8]
1f8648 mov      rax, rdx
1f864b imul     rcx, r11
1f864f xor      rcx, r9
1f8652 xor      rcx, rbx
1f8655 xor      rax, rcx
1f8658 sub      rdx, rcx
1f865b test     r10b, r10b
1f865e cmove    rdx, rax
1f8662 mov      rax, qword ptr [r14 + 0x1b0]
1f8669 inc      qword ptr [r14 + 0x1b8]
1f8670 mov      rcx, rdx
1f8673 imul     rax, r12
1f8677 add      rax, rbp
1f867a mov      qword ptr [r14 + 0x1b0], rax
1f8681 shr      rax, 0x1b
1f8685 movzx    r8d, al
1f8689 mov      byte ptr [r14 + 0x168], r8b
1f8690 imul     r8, r11
1f8694 xor      r8, r9
1f8697 xor      r8, rbx
1f869a xor      rcx, r8
1f869d test     r10b, r10b
1f86a0 lea      rax, [rdx + r8]
1f86a4 cmove    rax, rcx
1f86a8 mov      rcx, r14
1f86ab mov      qword ptr [r14 + 0x130], rax
1f86b2 call     0x1401f0910
1f86b7 mov      rcx, r14
1f86ba call     0x1401ee070
1f86bf cmp      eax, dword ptr [r14 + 0x1d8]
1f86c6 jae      0x1401f86d2
1f86c8 mov      edx, eax
1f86ca mov      rcx, r14
1f86cd call     0x1401f0910
1f86d2 mov      rsi, qword ptr [r14 + 0xe0]
1f86d9 mov      rbp, qword ptr [r14 + 0xd0]
1f86e0 mov      r11, qword ptr [r14 + 0x130]
1f86e7 movzx    edi, byte ptr [r14 + 0xe8]
1f86ef mov      rax, r11
1f86f2 movzx    ecx, byte ptr [r14 + 0x168]
1f86fa mov      rbx, qword ptr [r14 + 0xd8]
1f8701 mov      r8, qword ptr [r14 + 0x1b8]
1f8708 mov      r9, qword ptr [r14 + 0x1b0]
1f870f imul     rcx, rsi
1f8713 lea      r10, [rbx + rbx*8]
1f8717 xor      rcx, rbp
1f871a xor      rcx, r10
1f871d xor      rax, rcx
1f8720 sub      r11, rcx
1f8723 test     dil, dil
1f8726 movabs   rcx, 0x2545f4914f6cdd1d
1f8730 cmove    r11, rax
1f8734 imul     r9, r12
1f8738 add      r9, rcx
1f873b mov      rcx, r11
1f873e mov      rax, r9
1f8741 shr      rax, 0x1b
1f8745 movzx    edx, al
1f8748 mov      byte ptr [r14 + 0x168], dl
1f874f imul     rdx, rsi
1f8753 xor      rdx, rbp
1f8756 xor      rdx, r10
1f8759 xor      rcx, rdx
1f875c test     dil, dil
1f875f lea      rax, [r11 + rdx]
1f8763 cmove    rax, rcx
1f8767 mov      rcx, r11
1f876a mov      qword ptr [r14 + 0x130], rax
1f8771 movabs   rax, 0x2545f4914f6cdd1d
1f877b imul     r9, r12
1f877f add      r9, rax
1f8782 lea      rax, [r8 + 2]
1f8786 mov      qword ptr [r14 + 0x1b8], rax
1f878d mov      r8d, 0xd1f5
1f8793 mov      qword ptr [r14 + 0x1b0], r9
1f879a lea      rax, [rbx + rbx*4]
1f879e add      rax, rax
1f87a1 shr      r9, 0x1b
1f87a5 movzx    edx, r9b
1f87a9 mov      byte ptr [r14 + 0x169], dl
1f87b0 imul     rdx, rsi
1f87b4 xor      rdx, rax
1f87b7 xor      rdx, rbp
1f87ba xor      rcx, rdx
1f87bd test     dil, dil
1f87c0 lea      rax, [r11 + rdx]
1f87c4 cmove    rax, rcx
1f87c8 mov      rcx, r14
1f87cb mov      qword ptr [r14 + 0x138], rax
1f87d2 movzx    edx, byte ptr [r14 + 0x4ad]
1f87da xor      rdx, qword ptr [r14 + 0x348]
1f87e1 call     0x1401f1520
1f87e6 mov      r8, qword ptr [r14 + 0x348]
1f87ed movabs   rdi, 0xff51afd7ed558ccd
1f87f7 mov      rax, r8
1f87fa movabs   rbp, 0xc4ceb9fe1a85ec53
1f8804 xor      rax, qword ptr [r14 + 0x20]
1f8808 mov      rcx, rax
1f880b shr      rcx, 0x21
1f880f xor      rcx, rax
1f8812 imul     rcx, rdi
1f8816 mov      rax, rcx
1f8819 shr      rax, 0x21
1f881d xor      rax, rcx
1f8820 imul     rax, rbp
1f8824 mov      rdx, rax
1f8827 shr      rdx, 0x21
1f882b xor      edx, eax
1f882d mov      ecx, edx
1f882f lea      eax, [rdx + 1]
1f8832 imul     ecx, eax
1f8835 xor      edx, eax
1f8837 not      ecx
1f8839 and      ecx, edx
1f883b test     cl, 1
1f883e je       0x1401f88b1
1f8840 and      r8b, 3
1f8844 cmp      r8b, 1
1f8848 jne      0x1401f88b1
1f884a mov      rax, qword ptr [r14 + 0x1b0]
1f8851 movabs   rcx, 0x2545f4914f6cdd1d
1f885b inc      qword ptr [r14 + 0x1b8]
1f8862 imul     rax, r12
1f8866 add      rax, rcx
1f8869 mov      qword ptr [r14 + 0x1b0], rax
1f8870 shr      rax, 0x1b
1f8874 movzx    eax, al
1f8877 mov      byte ptr [r14 + 0x160], al
1f887e imul     rax, qword ptr [r14 + 0xe0]
1f8886 xor      rax, qword ptr [r14 + 0xd8]
1f888d xor      rax, qword ptr [r14 + 0xd0]
1f8894 mov      rcx, rax
1f8897 add      rax, 0x17ed28
1f889d xor      rcx, 0x17ed28
1f88a4 cmp      byte ptr [r14 + 0xe8], 0
1f88ac jmp      0x1401f8eee
1f88b1 mov      rcx, r14
1f88b4 call     0x1401ee070
1f88b9 mov      ebx, eax
1f88bb cmp      eax, dword ptr [r14 + 0x1d8]
1f88c2 jb       0x1401f892b
1f88c4 mov      rax, qword ptr [r14 + 0x1b0]
1f88cb movabs   rcx, 0x2545f4914f6cdd1d
1f88d5 inc      qword ptr [r14 + 0x1b8]
1f88dc imul     rax, r12
1f88e0 add      rax, rcx
1f88e3 mov      qword ptr [r14 + 0x1b0], rax
1f88ea shr      rax, 0x1b
1f88ee movzx    eax, al
1f88f1 mov      byte ptr [r14 + 0x160], al
1f88f8 imul     rax, qword ptr [r14 + 0xe0]
1f8900 xor      rax, qword ptr [r14 + 0xd8]
1f8907 xor      rax, qword ptr [r14 + 0xd0]
1f890e mov      rcx, rax
1f8911 add      rax, 0xfe1ab
1f8917 xor      rcx, 0xfe1ab
1f891e cmp      byte ptr [r14 + 0xe8], 0
1f8926 jmp      0x1401f8eee
1f892b mov      edx, ebx
1f892d mov      rcx, r14
1f8930 call     0x1401f25b0
1f8935 movsxd   rcx, dword ptr [r14 + 0x11e0]
1f893c movabs   r8, 0xd6e8feb86659fd93
1f8946 mov      rdx, qword ptr [r14 + 0x20]
1f894a mov      rax, rbx
1f894d imul     rax, r8
1f8951 imul     rcx, r12
1f8955 rol      rdx, 0x11
1f8959 xor      rax, rdx
1f895c xor      rcx, qword ptr [r14 + 0x260]
1f8963 xor      rax, rcx
1f8966 mov      rcx, rax
1f8969 shr      rcx, 0x21
1f896d xor      rcx, rax
1f8970 imul     rcx, rdi
1f8974 mov      rdx, rcx
1f8977 shr      rdx, 0x21
1f897b xor      rdx, rcx
1f897e imul     rdx, rbp
1f8982 mov      rax, rdx
1f8985 shr      rax, 0x21
1f8989 xor      rax, rdx
1f898c mov      r10, rax
1f898f shr      r10, 0x1d
1f8993 xor      r10, rax
1f8996 or       r10, 1
1f899a mov      rax, r10
1f899d mov      qword ptr [r14 + 0x260], r10
1f89a4 and      eax, 0x3ff
1f89a9 cmp      rax, 0x2c5
1f89af jne      0x1401f89c0
1f89b1 mov      rcx, r14
1f89b4 call     0x1402297e0
1f89b9 mov      r10, qword ptr [r14 + 0x260]
1f89c0 movzx    eax, r10b
1f89c4 and      al, 0x1f
1f89c6 cmp      al, 0x15
1f89c8 jne      0x1401f8ab5
1f89ce movsxd   rax, dword ptr [r14 + 0x11e0]
1f89d5 xor      rax, 0x5a5a
1f89db mov      rcx, qword ptr [r14 + 0x20]
1f89df imul     rax, r12
1f89e3 rol      rcx, 0x11
1f89e7 xor      rax, r10
1f89ea xor      rcx, rax
1f89ed movabs   rax, 0x8f70feda99a6026d
1f89f7 xor      rcx, rax
1f89fa mov      rax, rcx
1f89fd shr      rax, 0x21
1f8a01 xor      rax, rcx
1f8a04 imul     rax, rdi
1f8a08 mov      rcx, rax
1f8a0b shr      rcx, 0x21
1f8a0f xor      rcx, rax
1f8a12 imul     rcx, rbp
1f8a16 mov      rax, rcx
1f8a19 shr      rax, 0x21
1f8a1d xor      rax, rcx
1f8a20 mov      r9, rax
1f8a23 shr      r9, 0x1d
1f8a27 xor      r9, rax
1f8a2a or       r9, 1
1f8a2e mov      rax, r9
1f8a31 mov      rcx, r9
1f8a34 shr      rax, 8
1f8a38 and      eax, 3
1f8a3b shr      rcx, 0x28
1f8a3f imul     r8, rax, 0x3e
1f8a43 mov      eax, 0x8421085
1f8a48 mul      ecx
1f8a4a mov      eax, ecx
1f8a4c sub      eax, edx
1f8a4e shr      eax, 1
1f8a50 add      eax, edx
1f8a52 shr      eax, 5
1f8a55 imul     eax, eax, 0x3e
1f8a58 sub      ecx, eax
1f8a5a mov      eax, ecx
1f8a5c add      r8, rax
1f8a5f mov      rax, qword ptr [r14 + 0x4b8]
1f8a66 movsxd   rcx, dword ptr [rax + r8*4]
1f8a6a movsxd   rax, dword ptr [r14 + 0x4c8]
1f8a71 xor      rcx, rax
1f8a74 add      rcx, qword ptr [r14 + 0x4c0]
1f8a7b xor      rcx, r9
1f8a7e mov      rax, rcx
1f8a81 shr      rax, 0x21
1f8a85 xor      rax, rcx
1f8a88 imul     rax, rdi
1f8a8c mov      rcx, rax
1f8a8f shr      rcx, 0x21
1f8a93 xor      rcx, rax
1f8a96 imul     rcx, rbp
1f8a9a mov      rax, rcx
1f8a9d shr      rax, 0x21
1f8aa1 xor      rax, rcx
1f8aa4 xor      rax, r10
1f8aa7 inc      qword ptr [r14 + 0x268]
1f8aae mov      qword ptr [r14 + 0x260], rax
1f8ab5 inc      dword ptr [r14 + 0x200]
1f8abc mov      eax, dword ptr [r14 + 0x200]
1f8ac3 cmp      eax, dword ptr [r14 + 0x1fc]
1f8aca jb       0x1401f8adf
1f8acc mov      rcx, r14
1f8acf mov      dword ptr [r14 + 0x200], 0
1f8ada call     0x1401ef7c0
1f8adf mov      r8d, ebx
1f8ae2 mov      edx, ebx
1f8ae4 mov      rcx, r14
1f8ae7 call     0x1401f0660
1f8aec inc      qword ptr [r14 + 0x1b8]
1f8af3 mov      rcx, rbx
1f8af6 mov      r9, qword ptr [r14 + 0x1b0]
1f8afd movabs   rax, 0x2545f4914f6cdd1d
1f8b07 imul     r9, r12
1f8b0b mov      r12, qword ptr [r14 + 0x1b8]
1f8b12 add      r9, rax
1f8b15 mov      qword ptr [r14 + 0x1b0], r9
1f8b1c mov      rax, r9
1f8b1f shr      rax, 0x1b
1f8b23 movzx    edx, al
1f8b26 mov      byte ptr [r14 + 0x168], dl
1f8b2d mov      r11, qword ptr [r14 + 0xe0]
1f8b34 mov      r10, qword ptr [r14 + 0xd8]
1f8b3b mov      rdi, qword ptr [r14 + 0xd0]
1f8b42 movzx    ebp, byte ptr [r14 + 0xe8]
1f8b4a imul     rdx, r11
1f8b4e lea      rax, [r10 + r10*8]
1f8b52 xor      rdx, rax
1f8b55 xor      rdx, rdi
1f8b58 xor      rcx, rdx
1f8b5b test     bpl, bpl
1f8b5e lea      rax, [rbx + rdx]
1f8b62 cmove    rax, rcx
1f8b66 inc      r12
1f8b69 mov      qword ptr [r14 + 0x130], rax
1f8b70 mov      rcx, qword ptr [r14 + 0x1d0]
1f8b77 mov      rax, qword ptr [r14 + 0x48]
1f8b7b mov      qword ptr [rsp + 0x78], r12
1f8b80 movzx    r8d, byte ptr [rcx + rbx]
1f8b85 xor      r8b, byte ptr [rax + rbx]
1f8b89 inc      ebx
1f8b8b mov      qword ptr [r14 + 0x1b8], r12
1f8b92 movabs   rax, 0x9e3779b97f4a7c15
1f8b9c imul     r9, rax
1f8ba0 movabs   rax, 0x2545f4914f6cdd1d
1f8baa mov      qword ptr [rsp + 0x60], rbx
1f8baf add      r9, rax
1f8bb2 mov      rax, r9
1f8bb5 shr      rax, 0x1b
1f8bb9 movzx    edx, al
1f8bbc lea      rax, [r10 + r10]
1f8bc0 mov      byte ptr [r14 + 0x161], dl
1f8bc7 imul     rdx, r11
1f8bcb xor      rdx, rax
1f8bce xor      rdx, rdi
1f8bd1 mov      rcx, rdx
1f8bd4 xor      rcx, rbx
1f8bd7 test     bpl, bpl
1f8bda lea      rax, [rdx + rbx]
1f8bde cmove    rax, rcx
1f8be2 mov      qword ptr [r14 + 0xf8], rax
1f8be9 movsxd   rdx, dword ptr [r14 + 0x11e0]
1f8bf0 mov      r12, qword ptr [r14 + 0x20]
1f8bf4 mov      rcx, rdx
1f8bf7 xor      rcx, qword ptr [r14 + 0x350]
1f8bfe xor      rcx, rbx
1f8c01 xor      rcx, qword ptr [r14 + 0x348]
1f8c08 xor      rcx, r12
1f8c0b mov      rax, rcx
1f8c0e shr      rax, 0x21
1f8c12 xor      rax, rcx
1f8c15 movabs   rcx, 0xff51afd7ed558ccd
1f8c1f imul     rax, rcx
1f8c23 mov      rcx, rax
1f8c26 shr      rcx, 0x21
1f8c2a xor      rcx, rax
1f8c2d movabs   rax, 0xc4ceb9fe1a85ec53
1f8c37 imul     rcx, rax
1f8c3b movzx    eax, r8b
1f8c3f mov      rbx, rcx
1f8c42 shr      rbx, 0x21
1f8c46 xor      rbx, rcx
1f8c49 lea      rcx, [rip - 0x1f8c50]
1f8c50 xor      rax, 0xdd
1f8c56 mov      qword ptr [r14 + 0x28], rbx
1f8c5a movzx    esi, byte ptr [rax + rcx + 0x3ecf00]
1f8c62 xor      sil, 0x63
1f8c66 inc      edx
1f8c68 mov      dword ptr [r14 + 0x11e0], edx
1f8c6f test     dl, 0x1f
1f8c72 jne      0x1401f8cc2
1f8c74 movsxd   rax, edx
1f8c77 xor      rax, qword ptr [r14 + 0x348]
1f8c7e xor      rax, r12
1f8c81 mov      rcx, rax
1f8c84 shr      rcx, 0x21
1f8c88 xor      rcx, rax
1f8c8b movabs   rax, 0xff51afd7ed558ccd
1f8c95 imul     rcx, rax
1f8c99 movabs   rax, 0xc4ceb9fe1a85ec53
1f8ca3 mov      rdx, rcx
1f8ca6 shr      rdx, 0x21
1f8caa xor      rdx, rcx
1f8cad imul     rdx, rax
1f8cb1 mov      rax, rdx
1f8cb4 shr      rax, 0x21
1f8cb8 xor      rax, rdx
1f8cbb mov      qword ptr [r14 + 0x348], rax
1f8cc2 movzx    r8d, sil
1f8cc6 mov      eax, r8d
1f8cc9 mov      byte ptr [r14 + 0x4ad], sil
1f8cd0 xor      rax, qword ptr [rsp + 0x60]
1f8cd5 xor      rax, r12
1f8cd8 movabs   r12, 0x9e3779b97f4a7c15
1f8ce2 mov      rcx, rax
1f8ce5 shr      rcx, 0x21
1f8ce9 xor      rcx, rax
1f8cec movabs   rax, 0xff51afd7ed558ccd
1f8cf6 imul     rcx, rax
1f8cfa imul     r8, r12
1f8cfe imul     r9, r12
1f8d02 mov      rdx, rcx
1f8d05 movabs   rax, 0xc4ceb9fe1a85ec53
1f8d0f shr      rdx, 0x21
1f8d13 xor      rdx, rcx
1f8d16 mov      ecx, dword ptr [r14 + 0x1178]
1f8d1d imul     rdx, rax
1f8d21 mov      rax, rdx
1f8d24 shr      rax, 0x21
1f8d28 xor      rax, rdx
1f8d2b mov      qword ptr [r14 + 0x20], rax
1f8d2f movabs   rax, 0xd6e8feb86659fd93
1f8d39 imul     rcx, rax
1f8d3d xor      rcx, r8
1f8d40 xor      rcx, rbx
1f8d43 movabs   rbx, 0x2545f4914f6cdd1d
1f8d4d mov      rax, rcx
1f8d50 add      r9, rbx
1f8d53 shr      rax, 0x21
1f8d57 xor      rax, rcx
1f8d5a movabs   rcx, 0xff51afd7ed558ccd
1f8d64 imul     rax, rcx
1f8d68 mov      rdx, rax
1f8d6b shr      rdx, 0x21
1f8d6f xor      rdx, rax
1f8d72 movabs   rax, 0xc4ceb9fe1a85ec53
1f8d7c imul     rdx, rax
1f8d80 mov      rax, qword ptr [rsp + 0x78]
1f8d85 shr      rdx, 0x21
1f8d89 and      edx, 3
1f8d8c inc      rax
1f8d8f mov      qword ptr [r14 + 0x1b8], rax
1f8d96 cmp      sil, 0x3e
1f8d9a jae      0x1401f8e32
1f8da0 inc      qword ptr [r14 + 0x11a0]
1f8da7 lea      rax, [rip - 0x1f8dae]
1f8dae mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
1f8db6 mov      qword ptr [r14 + 0x1b0], r9
1f8dbd shr      r9, 0x1b
1f8dc1 movzx    eax, r9b
1f8dc5 mov      byte ptr [r14 + 0x160], al
1f8dcc imul     rax, r11
1f8dd0 mov      ebx, edx
1f8dd2 xor      rax, rdi
1f8dd5 xor      rax, r10
1f8dd8 mov      rcx, rax
1f8ddb add      rax, r8
1f8dde xor      rcx, r8
1f8de1 movzx    r8d, sil
1f8de5 test     bpl, bpl
1f8de8 cmove    rax, rcx
1f8dec mov      rcx, r14
1f8def mov      qword ptr [r14 + 0xf0], rax
1f8df6 call     0x1401f1f50
1f8dfb mov      eax, eax
1f8dfd lea      edx, [r15 - 1]
1f8e01 imul     rcx, rbx, 0x3e
1f8e05 mov      r8, r13
1f8e08 add      rcx, rax
1f8e0b mov      rax, qword ptr [r14 + 0x4b8]
1f8e12 movsxd   r9, dword ptr [rax + rcx*4]
1f8e16 mov      rcx, r14
1f8e19 movsxd   rax, dword ptr [r14 + 0x4c8]
1f8e20 xor      r9, rax
1f8e23 add      r9, qword ptr [r14 + 0x4c0]
1f8e2a call     r9
1f8e2d jmp      0x1401f8ef9
1f8e32 inc      dword ptr [r14 + 0x11a8]
1f8e39 mov      rax, r9
1f8e3c shr      rax, 0x1b
1f8e40 movzx    ecx, al
1f8e43 lea      rax, [r10*4]
1f8e4b mov      byte ptr [r14 + 0x163], cl
1f8e52 imul     rcx, r11
1f8e56 imul     r9, r12
1f8e5a xor      rcx, rax
1f8e5d xor      rcx, rdi
1f8e60 mov      qword ptr [r14 + 0x108], rcx
1f8e67 mov      r8, qword ptr [r14 + 0x1b8]
1f8e6e add      r9, rbx
1f8e71 mov      rax, r9
1f8e74 shr      rax, 0x1b
1f8e78 movzx    edx, al
1f8e7b mov      byte ptr [r14 + 0x16a], dl
1f8e82 imul     rax, r10, 0xb
1f8e86 imul     rdx, r11
1f8e8a xor      rdx, rax
1f8e8d xor      rdx, rdi
1f8e90 mov      rcx, rdx
1f8e93 xor      rcx, 1
1f8e97 test     bpl, bpl
1f8e9a lea      rax, [rdx + 1]
1f8e9e cmove    rax, rcx
1f8ea2 mov      qword ptr [r14 + 0x140], rax
1f8ea9 lea      rax, [r8 + 2]
1f8ead mov      qword ptr [r14 + 0x1b8], rax
1f8eb4 imul     r9, r12
1f8eb8 add      r9, rbx
1f8ebb mov      qword ptr [r14 + 0x1b0], r9
1f8ec2 shr      r9, 0x1b
1f8ec6 movzx    eax, r9b
1f8eca mov      byte ptr [r14 + 0x160], al
1f8ed1 imul     rax, r11
1f8ed5 xor      rax, rdi
1f8ed8 xor      rax, r10
1f8edb mov      rcx, rax
1f8ede add      rax, 0xfe1ab
1f8ee4 xor      rcx, 0xfe1ab
1f8eeb test     bpl, bpl
1f8eee cmove    rax, rcx
1f8ef2 mov      qword ptr [r14 + 0xf0], rax
1f8ef9 mov      rdi, qword ptr [rsp + 0x28]
1f8efe mov      rsi, qword ptr [rsp + 0x30]
1f8f03 mov      rbp, qword ptr [rsp + 0x38]
1f8f08 mov      rbx, qword ptr [rsp + 0x68]
1f8f0d mov      r12, qword ptr [rsp + 0x20]
1f8f12 add      rsp, 0x40
1f8f16 pop      r15
1f8f18 pop      r14
1f8f1a pop      r13
1f8f1c ret      
1f8f1d mov      edx, 0x54485254
1f8f22 mov      rcx, r14
1f8f25 call     0x1401ed830
1f8f2a int3     
1f8f2b mov      edx, 0x43414e59
1f8f30 mov      rcx, r14
1f8f33 call     0x1401ed830
1f8f38 int3     
