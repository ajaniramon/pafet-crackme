209290 push     r13
209292 push     r14
209294 push     r15
209296 sub      rsp, 0x40
20929a movsxd   rax, dword ptr [rcx + 0x11e0]
2092a1 mov      r14, rcx
2092a4 mov      r15d, edx
2092a7 movabs   rcx, 0x33e684c9b3f98733
2092b1 imul     rax, rcx
2092b5 movabs   rcx, 0x91bf0e023227030c
2092bf mov      r13, r8
2092c2 xor      rax, qword ptr [r14 + 0x28]
2092c6 mov      qword ptr [rsp + 0x60], rax
2092cb mov      rax, qword ptr [rsp + 0x60]
2092d0 movsxd   rax, dword ptr [r14 + 0x11e0]
2092d7 imul     rax, rcx
2092db movabs   rcx, 0x7777905cb16c8f19
2092e5 xor      rax, qword ptr [r14 + 0x28]
2092e9 mov      qword ptr [rsp + 0x60], rax
2092ee mov      rax, qword ptr [rsp + 0x60]
2092f3 movsxd   rax, dword ptr [r14 + 0x11e0]
2092fa imul     rax, rcx
2092fe movabs   rcx, 0x1afa6d24c555e4de
209308 xor      rax, qword ptr [r14 + 0x28]
20930c mov      qword ptr [rsp + 0x60], rax
209311 mov      rax, qword ptr [rsp + 0x60]
209316 mov      rax, qword ptr [r14 + 0x2e0]
20931d sub      rax, rcx
209320 mov      rcx, rax
209323 shr      rcx, 0x21
209327 xor      rcx, rax
20932a movabs   rax, 0xff51afd7ed558ccd
209334 imul     rcx, rax
209338 movabs   rax, 0xc4ceb9fe1a85ec53
209342 mov      rdx, rcx
209345 shr      rdx, 0x21
209349 xor      rdx, rcx
20934c mov      rcx, r14
20934f imul     rdx, rax
209353 mov      rax, rdx
209356 shr      rax, 0x21
20935a xor      rdx, rax
20935d mov      rax, qword ptr [r14 + 0x2e0]
209364 or       rdx, 1
209368 xor      rdx, rax
20936b mov      qword ptr [r14 + 0x2e0], rdx
209372 call     0x1401f1c70
209377 xor      edx, edx
209379 cmp      eax, 0x11
20937c mov      ecx, edx
20937e cmovb    ecx, eax
209381 cmp      ecx, 0x11
209384 cmovae   ecx, edx
209387 mov      eax, ecx
209389 lea      rcx, [rip - 0x209390]
209390 mov      r8d, dword ptr [rcx + rax*4 + 0x3ead00]
209398 mov      eax, 0xaaaaaaab
20939d mul      r8d
2093a0 mov      r9, qword ptr [rcx + r8*8 + 0x3ead80]
2093a8 mov      rcx, qword ptr [rcx + r8*8 + 0x3eae40]
2093b0 shr      edx, 1
2093b2 lea      eax, [rdx + rdx*2]
2093b5 sub      r8d, eax
2093b8 je       0x1402093ca
2093ba cmp      r8d, 1
2093be je       0x1402093c5
2093c0 sub      rcx, r9
2093c3 jmp      0x1402093cd
2093c5 add      rcx, r9
2093c8 jmp      0x1402093cd
2093ca xor      rcx, r9
2093cd mov      rdx, rcx
2093d0 mov      rcx, r14
2093d3 call     0x1401ee820
2093d8 mov      rax, qword ptr [r14 + 0x2e0]
2093df test     r15d, r15d
2093e2 jns      0x140209f9e
2093e8 cmp      qword ptr [r14 + 0x11b8], r13
2093ef jne      0x140209fac
2093f5 movsxd   rax, dword ptr [r14 + 0x11e0]
2093fc movabs   rcx, 0x6e3c74ca1232951f
209406 imul     rax, rcx
20940a mov      rcx, r14
20940d xor      rax, qword ptr [r14 + 0x28]
209411 mov      qword ptr [rsp + 0x60], rax
209416 mov      rax, qword ptr [rsp + 0x60]
20941b call     0x1401ee450
209420 test     eax, eax
209422 jne      0x140209f93
209428 cmp      dword ptr [r14 + 0xad0], eax
20942f jne      0x140209f93
209435 mov      r8, qword ptr [r14 + 0xf0]
20943c movzx    ecx, byte ptr [r14 + 0x160]
209444 mov      rax, r8
209447 mov      r10, qword ptr [r14 + 0xe0]
20944e mov      r11, qword ptr [r14 + 0xd8]
209455 mov      r9, qword ptr [r14 + 0x1b0]
20945c imul     rcx, r10
209460 mov      qword ptr [rsp + 0x68], rbx
209465 mov      rbx, qword ptr [r14 + 0xd0]
20946c xor      rcx, rbx
20946f mov      qword ptr [rsp + 0x38], rbp
209474 xor      rcx, r11
209477 mov      qword ptr [rsp + 0x30], rsi
20947c mov      rsi, qword ptr [r14 + 0x1b8]
209483 xor      rax, rcx
209486 sub      r8, rcx
209489 mov      qword ptr [rsp + 0x28], rdi
20948e movzx    edi, byte ptr [r14 + 0xe8]
209496 movabs   rbp, 0x2545f4914f6cdd1d
2094a0 test     dil, dil
2094a3 mov      qword ptr [rsp + 0x20], r12
2094a8 movabs   r12, 0x9e3779b97f4a7c15
2094b2 cmove    r8, rax
2094b6 inc      rsi
2094b9 imul     r9, r12
2094bd mov      qword ptr [r14 + 0x1b8], rsi
2094c4 mov      rcx, r8
2094c7 add      r9, rbp
2094ca mov      qword ptr [r14 + 0x1b0], r9
2094d1 mov      rax, r9
2094d4 shr      rax, 0x1b
2094d8 movzx    edx, al
2094db mov      byte ptr [r14 + 0x160], dl
2094e2 imul     rdx, r10
2094e6 xor      rdx, rbx
2094e9 xor      rdx, r11
2094ec xor      rcx, rdx
2094ef test     dil, dil
2094f2 lea      rax, [r8 + rdx]
2094f6 cmove    rax, rcx
2094fa mov      qword ptr [r14 + 0xf0], rax
209501 cmp      r8d, 0x338040
209508 jne      0x140209f7a
20950e mov      eax, r15d
209511 btr      eax, 0x1f
209515 cmp      eax, 2
209518 jae      0x140209564
20951a imul     r9, r12
20951e lea      rax, [rsi + 1]
209522 mov      qword ptr [r14 + 0x1b8], rax
209529 add      r9, rbp
20952c mov      qword ptr [r14 + 0x1b0], r9
209533 shr      r9, 0x1b
209537 movzx    eax, r9b
20953b mov      byte ptr [r14 + 0x160], al
209542 imul     rax, r10
209546 xor      rax, rbx
209549 xor      rax, r11
20954c mov      rcx, rax
20954f add      rax, 0x1ad951
209555 xor      rcx, 0x1ad951
20955c test     dil, dil
20955f jmp      0x140209f6f
209564 mov      rcx, r14
209567 call     0x1401ee070
20956c movzx    ecx, byte ptr [r14 + 0x4ad]
209574 movabs   r8, 0xff51afd7ed558ccd
20957e mov      r11, qword ptr [r14 + 0xe0]
209585 movabs   r9, 0xc4ceb9fe1a85ec53
20958f movzx    r10d, byte ptr [r14 + 0xe8]
209597 mov      eax, eax
209599 xor      rcx, rax
20959c xor      rcx, qword ptr [r14 + 0x11e8]
2095a3 mov      rax, rcx
2095a6 shr      rax, 0x21
2095aa xor      rax, rcx
2095ad imul     rax, r8
2095b1 mov      rcx, rax
2095b4 shr      rcx, 0x21
2095b8 xor      rcx, rax
2095bb mov      rax, qword ptr [r14 + 0x20]
2095bf xor      rax, qword ptr [r14 + 0x28]
2095c3 imul     rcx, r9
2095c7 mov      rdx, rcx
2095ca shr      rdx, 0x21
2095ce xor      rdx, rcx
2095d1 xor      rax, rdx
2095d4 mov      qword ptr [r14 + 0x11e8], rdx
2095db mov      rcx, rax
2095de shr      rcx, 0x21
2095e2 xor      rcx, rax
2095e5 imul     rcx, r8
2095e9 mov      rdx, rcx
2095ec shr      rdx, 0x21
2095f0 xor      rdx, rcx
2095f3 imul     rdx, r9
2095f7 mov      r9, qword ptr [r14 + 0xd0]
2095fe mov      rax, rdx
209601 shr      rax, 0x21
209605 xor      rax, rdx
209608 mov      qword ptr [r14 + 0x20], rax
20960c mov      rdx, qword ptr [r14 + 0x138]
209613 movzx    ecx, byte ptr [r14 + 0x169]
20961b mov      rax, qword ptr [r14 + 0xd8]
209622 imul     rcx, r11
209626 lea      rbx, [rax + rax*4]
20962a mov      rax, rdx
20962d xor      rcx, r9
209630 add      rbx, rbx
209633 xor      rcx, rbx
209636 xor      rax, rcx
209639 sub      rdx, rcx
20963c test     r10b, r10b
20963f cmove    rdx, rax
209643 mov      rax, qword ptr [r14 + 0x1b0]
20964a inc      qword ptr [r14 + 0x1b8]
209651 imul     rax, r12
209655 add      rax, rbp
209658 mov      qword ptr [r14 + 0x1b0], rax
20965f shr      rax, 0x1b
209663 movzx    r8d, al
209667 mov      byte ptr [r14 + 0x169], r8b
20966e imul     r8, r11
209672 xor      r8, r9
209675 xor      r8, rbx
209678 mov      rcx, r8
20967b xor      rcx, rdx
20967e test     r10b, r10b
209681 lea      rax, [r8 + rdx]
209685 cmove    rax, rcx
209689 mov      rcx, r14
20968c mov      qword ptr [r14 + 0x138], rax
209693 call     0x1401f0910
209698 mov      rax, qword ptr [r14 + 0xd8]
20969f mov      r11, qword ptr [r14 + 0xe0]
2096a6 movzx    ecx, byte ptr [r14 + 0x168]
2096ae mov      r9, qword ptr [r14 + 0xd0]
2096b5 mov      rdx, qword ptr [r14 + 0x130]
2096bc lea      rbx, [rax + rax*8]
2096c0 movzx    r10d, byte ptr [r14 + 0xe8]
2096c8 mov      rax, rdx
2096cb imul     rcx, r11
2096cf xor      rcx, r9
2096d2 xor      rcx, rbx
2096d5 xor      rax, rcx
2096d8 sub      rdx, rcx
2096db test     r10b, r10b
2096de cmove    rdx, rax
2096e2 mov      rax, qword ptr [r14 + 0x1b0]
2096e9 inc      qword ptr [r14 + 0x1b8]
2096f0 imul     rax, r12
2096f4 add      rax, rbp
2096f7 mov      qword ptr [r14 + 0x1b0], rax
2096fe shr      rax, 0x1b
209702 movzx    r8d, al
209706 mov      byte ptr [r14 + 0x168], r8b
20970d imul     r8, r11
209711 xor      r8, r9
209714 xor      r8, rbx
209717 mov      rcx, r8
20971a xor      rcx, rdx
20971d test     r10b, r10b
209720 lea      rax, [r8 + rdx]
209724 cmove    rax, rcx
209728 mov      rcx, r14
20972b mov      qword ptr [r14 + 0x130], rax
209732 call     0x1401f0910
209737 mov      rcx, r14
20973a call     0x1401ee070
20973f cmp      eax, dword ptr [r14 + 0x1d8]
209746 jae      0x140209752
209748 mov      edx, eax
20974a mov      rcx, r14
20974d call     0x1401f0910
209752 mov      rsi, qword ptr [r14 + 0xe0]
209759 mov      rbp, qword ptr [r14 + 0xd0]
209760 mov      r11, qword ptr [r14 + 0x130]
209767 movzx    edi, byte ptr [r14 + 0xe8]
20976f mov      rax, r11
209772 movzx    ecx, byte ptr [r14 + 0x168]
20977a mov      rbx, qword ptr [r14 + 0xd8]
209781 mov      r8, qword ptr [r14 + 0x1b8]
209788 mov      r9, qword ptr [r14 + 0x1b0]
20978f imul     rcx, rsi
209793 lea      r10, [rbx + rbx*8]
209797 xor      rcx, rbp
20979a xor      rcx, r10
20979d xor      rax, rcx
2097a0 sub      r11, rcx
2097a3 test     dil, dil
2097a6 movabs   rcx, 0x2545f4914f6cdd1d
2097b0 cmove    r11, rax
2097b4 imul     r9, r12
2097b8 add      r9, rcx
2097bb mov      rcx, r11
2097be mov      rax, r9
2097c1 shr      rax, 0x1b
2097c5 movzx    edx, al
2097c8 mov      byte ptr [r14 + 0x168], dl
2097cf imul     rdx, rsi
2097d3 xor      rdx, rbp
2097d6 xor      rdx, r10
2097d9 xor      rcx, rdx
2097dc test     dil, dil
2097df lea      rax, [r11 + rdx]
2097e3 cmove    rax, rcx
2097e7 mov      rcx, r11
2097ea mov      qword ptr [r14 + 0x130], rax
2097f1 movabs   rax, 0x2545f4914f6cdd1d
2097fb imul     r9, r12
2097ff add      r9, rax
209802 lea      rax, [r8 + 2]
209806 mov      qword ptr [r14 + 0x1b8], rax
20980d mov      r8d, 0xd710
209813 mov      qword ptr [r14 + 0x1b0], r9
20981a lea      rax, [rbx + rbx*4]
20981e add      rax, rax
209821 shr      r9, 0x1b
209825 movzx    edx, r9b
209829 mov      byte ptr [r14 + 0x169], dl
209830 imul     rdx, rsi
209834 xor      rdx, rax
209837 xor      rdx, rbp
20983a xor      rcx, rdx
20983d test     dil, dil
209840 lea      rax, [r11 + rdx]
209844 cmove    rax, rcx
209848 mov      rcx, r14
20984b mov      qword ptr [r14 + 0x138], rax
209852 movzx    edx, byte ptr [r14 + 0x4ad]
20985a xor      rdx, qword ptr [r14 + 0x348]
209861 call     0x1401f1520
209866 mov      r8, qword ptr [r14 + 0x348]
20986d movabs   rdi, 0xff51afd7ed558ccd
209877 mov      rax, r8
20987a movabs   rbp, 0xc4ceb9fe1a85ec53
209884 xor      rax, qword ptr [r14 + 0x20]
209888 mov      rcx, rax
20988b shr      rcx, 0x21
20988f xor      rcx, rax
209892 imul     rcx, rdi
209896 mov      rax, rcx
209899 shr      rax, 0x21
20989d xor      rax, rcx
2098a0 imul     rax, rbp
2098a4 mov      rdx, rax
2098a7 shr      rdx, 0x21
2098ab xor      edx, eax
2098ad mov      ecx, edx
2098af lea      eax, [rdx + 1]
2098b2 imul     ecx, eax
2098b5 xor      edx, eax
2098b7 not      ecx
2098b9 and      ecx, edx
2098bb test     cl, 1
2098be je       0x140209931
2098c0 and      r8b, 3
2098c4 cmp      r8b, 1
2098c8 jne      0x140209931
2098ca mov      rax, qword ptr [r14 + 0x1b0]
2098d1 movabs   rcx, 0x2545f4914f6cdd1d
2098db inc      qword ptr [r14 + 0x1b8]
2098e2 imul     rax, r12
2098e6 add      rax, rcx
2098e9 mov      qword ptr [r14 + 0x1b0], rax
2098f0 shr      rax, 0x1b
2098f4 movzx    eax, al
2098f7 mov      byte ptr [r14 + 0x160], al
2098fe imul     rax, qword ptr [r14 + 0xe0]
209906 xor      rax, qword ptr [r14 + 0xd8]
20990d xor      rax, qword ptr [r14 + 0xd0]
209914 mov      rcx, rax
209917 add      rax, 0x190631
20991d xor      rcx, 0x190631
209924 cmp      byte ptr [r14 + 0xe8], 0
20992c jmp      0x140209f6f
209931 mov      rcx, r14
209934 call     0x1401ee070
209939 mov      ebx, eax
20993b cmp      eax, dword ptr [r14 + 0x1d8]
209942 jb       0x1402099ab
209944 mov      rax, qword ptr [r14 + 0x1b0]
20994b movabs   rcx, 0x2545f4914f6cdd1d
209955 inc      qword ptr [r14 + 0x1b8]
20995c imul     rax, r12
209960 add      rax, rcx
209963 mov      qword ptr [r14 + 0x1b0], rax
20996a shr      rax, 0x1b
20996e movzx    eax, al
209971 mov      byte ptr [r14 + 0x160], al
209978 imul     rax, qword ptr [r14 + 0xe0]
209980 xor      rax, qword ptr [r14 + 0xd8]
209987 xor      rax, qword ptr [r14 + 0xd0]
20998e mov      rcx, rax
209991 add      rax, 0xfe1ab
209997 xor      rcx, 0xfe1ab
20999e cmp      byte ptr [r14 + 0xe8], 0
2099a6 jmp      0x140209f6f
2099ab mov      edx, ebx
2099ad mov      rcx, r14
2099b0 call     0x1401f25b0
2099b5 movsxd   rcx, dword ptr [r14 + 0x11e0]
2099bc movabs   r8, 0xd6e8feb86659fd93
2099c6 mov      rdx, qword ptr [r14 + 0x20]
2099ca mov      rax, rbx
2099cd imul     rax, r8
2099d1 imul     rcx, r12
2099d5 rol      rdx, 0x11
2099d9 xor      rax, rdx
2099dc xor      rcx, qword ptr [r14 + 0x260]
2099e3 xor      rax, rcx
2099e6 mov      rcx, rax
2099e9 shr      rcx, 0x21
2099ed xor      rcx, rax
2099f0 imul     rcx, rdi
2099f4 mov      rdx, rcx
2099f7 shr      rdx, 0x21
2099fb xor      rdx, rcx
2099fe imul     rdx, rbp
209a02 mov      rax, rdx
209a05 shr      rax, 0x21
209a09 xor      rax, rdx
209a0c mov      r10, rax
209a0f shr      r10, 0x1d
209a13 xor      r10, rax
209a16 or       r10, 1
209a1a mov      rax, r10
209a1d mov      qword ptr [r14 + 0x260], r10
209a24 and      eax, 0x3ff
209a29 cmp      rax, 0x2c5
209a2f jne      0x140209a40
209a31 mov      rcx, r14
209a34 call     0x1402297e0
209a39 mov      r10, qword ptr [r14 + 0x260]
209a40 movzx    eax, r10b
209a44 and      al, 0x1f
209a46 cmp      al, 0x15
209a48 jne      0x140209b36
209a4e movsxd   rcx, dword ptr [r14 + 0x11e0]
209a55 mov      rax, qword ptr [r14 + 0x20]
209a59 xor      rcx, 0x5a5a
209a60 rol      rax, 0x11
209a64 imul     rcx, r12
209a68 xor      rcx, r10
209a6b xor      rcx, rax
209a6e movabs   rax, 0x8f70feda99a6026d
209a78 xor      rcx, rax
209a7b mov      rax, rcx
209a7e shr      rax, 0x21
209a82 xor      rax, rcx
209a85 imul     rax, rdi
209a89 mov      rcx, rax
209a8c shr      rcx, 0x21
209a90 xor      rcx, rax
209a93 imul     rcx, rbp
209a97 mov      rax, rcx
209a9a shr      rax, 0x21
209a9e xor      rax, rcx
209aa1 mov      r9, rax
209aa4 shr      r9, 0x1d
209aa8 xor      r9, rax
209aab or       r9, 1
209aaf mov      rax, r9
209ab2 mov      rcx, r9
209ab5 shr      rax, 8
209ab9 and      eax, 3
209abc shr      rcx, 0x28
209ac0 imul     r8, rax, 0x3e
209ac4 mov      eax, 0x8421085
209ac9 mul      ecx
209acb mov      eax, ecx
209acd sub      eax, edx
209acf shr      eax, 1
209ad1 add      eax, edx
209ad3 shr      eax, 5
209ad6 imul     eax, eax, 0x3e
209ad9 sub      ecx, eax
209adb mov      eax, ecx
209add add      r8, rax
209ae0 mov      rax, qword ptr [r14 + 0x4b8]
209ae7 movsxd   rcx, dword ptr [rax + r8*4]
209aeb movsxd   rax, dword ptr [r14 + 0x4c8]
209af2 xor      rcx, rax
209af5 add      rcx, qword ptr [r14 + 0x4c0]
209afc xor      rcx, r9
209aff mov      rax, rcx
209b02 shr      rax, 0x21
209b06 xor      rax, rcx
209b09 imul     rax, rdi
209b0d mov      rcx, rax
209b10 shr      rcx, 0x21
209b14 xor      rcx, rax
209b17 imul     rcx, rbp
209b1b mov      rax, rcx
209b1e shr      rax, 0x21
209b22 xor      rax, r10
209b25 xor      rax, rcx
209b28 inc      qword ptr [r14 + 0x268]
209b2f mov      qword ptr [r14 + 0x260], rax
209b36 inc      dword ptr [r14 + 0x200]
209b3d mov      eax, dword ptr [r14 + 0x200]
209b44 cmp      eax, dword ptr [r14 + 0x1fc]
209b4b jb       0x140209b60
209b4d mov      rcx, r14
209b50 mov      dword ptr [r14 + 0x200], 0
209b5b call     0x1401ef7c0
209b60 mov      r8d, ebx
209b63 mov      edx, ebx
209b65 mov      rcx, r14
209b68 call     0x1401f0660
209b6d inc      qword ptr [r14 + 0x1b8]
209b74 mov      rcx, rbx
209b77 mov      r9, qword ptr [r14 + 0x1b0]
209b7e movabs   rax, 0x2545f4914f6cdd1d
209b88 imul     r9, r12
209b8c mov      r12, qword ptr [r14 + 0x1b8]
209b93 add      r9, rax
209b96 mov      qword ptr [r14 + 0x1b0], r9
209b9d mov      rax, r9
209ba0 shr      rax, 0x1b
209ba4 movzx    edx, al
209ba7 mov      byte ptr [r14 + 0x168], dl
209bae mov      r11, qword ptr [r14 + 0xe0]
209bb5 mov      r10, qword ptr [r14 + 0xd8]
209bbc mov      rdi, qword ptr [r14 + 0xd0]
209bc3 movzx    ebp, byte ptr [r14 + 0xe8]
209bcb imul     rdx, r11
209bcf lea      rax, [r10 + r10*8]
209bd3 xor      rdx, rax
209bd6 xor      rdx, rdi
209bd9 xor      rcx, rdx
209bdc test     bpl, bpl
209bdf lea      rax, [rbx + rdx]
209be3 cmove    rax, rcx
209be7 inc      r12
209bea mov      qword ptr [r14 + 0x130], rax
209bf1 mov      rcx, qword ptr [r14 + 0x1d0]
209bf8 mov      rax, qword ptr [r14 + 0x48]
209bfc mov      qword ptr [rsp + 0x78], r12
209c01 movzx    r8d, byte ptr [rcx + rbx]
209c06 xor      r8b, byte ptr [rax + rbx]
209c0a inc      ebx
209c0c mov      qword ptr [r14 + 0x1b8], r12
209c13 movabs   rax, 0x9e3779b97f4a7c15
209c1d imul     r9, rax
209c21 movabs   rax, 0x2545f4914f6cdd1d
209c2b mov      qword ptr [rsp + 0x60], rbx
209c30 add      r9, rax
209c33 mov      rax, r9
209c36 shr      rax, 0x1b
209c3a movzx    edx, al
209c3d lea      rax, [r10 + r10]
209c41 mov      byte ptr [r14 + 0x161], dl
209c48 imul     rdx, r11
209c4c xor      rdx, rax
209c4f xor      rdx, rdi
209c52 mov      rcx, rdx
209c55 xor      rcx, rbx
209c58 test     bpl, bpl
209c5b lea      rax, [rdx + rbx]
209c5f cmove    rax, rcx
209c63 mov      qword ptr [r14 + 0xf8], rax
209c6a movsxd   rdx, dword ptr [r14 + 0x11e0]
209c71 mov      r12, qword ptr [r14 + 0x20]
209c75 mov      rcx, rdx
209c78 xor      rcx, qword ptr [r14 + 0x350]
209c7f xor      rcx, rbx
209c82 xor      rcx, qword ptr [r14 + 0x348]
209c89 xor      rcx, r12
209c8c mov      rax, rcx
209c8f shr      rax, 0x21
209c93 xor      rax, rcx
209c96 movabs   rcx, 0xff51afd7ed558ccd
209ca0 imul     rax, rcx
209ca4 mov      rcx, rax
209ca7 shr      rcx, 0x21
209cab xor      rcx, rax
209cae movabs   rax, 0xc4ceb9fe1a85ec53
209cb8 imul     rcx, rax
209cbc movzx    eax, r8b
209cc0 mov      rbx, rcx
209cc3 shr      rbx, 0x21
209cc7 xor      rbx, rcx
209cca lea      rcx, [rip - 0x209cd1]
209cd1 xor      rax, 0xdd
209cd7 mov      qword ptr [r14 + 0x28], rbx
209cdb movzx    esi, byte ptr [rax + rcx + 0x3ecf00]
209ce3 xor      sil, 0x63
209ce7 inc      edx
209ce9 mov      dword ptr [r14 + 0x11e0], edx
209cf0 test     dl, 0x1f
209cf3 jne      0x140209d43
209cf5 movsxd   rax, edx
209cf8 xor      rax, qword ptr [r14 + 0x348]
209cff xor      rax, r12
209d02 mov      rcx, rax
209d05 shr      rcx, 0x21
209d09 xor      rcx, rax
209d0c movabs   rax, 0xff51afd7ed558ccd
209d16 imul     rcx, rax
209d1a movabs   rax, 0xc4ceb9fe1a85ec53
209d24 mov      rdx, rcx
209d27 shr      rdx, 0x21
209d2b xor      rdx, rcx
209d2e imul     rdx, rax
209d32 mov      rax, rdx
209d35 shr      rax, 0x21
209d39 xor      rax, rdx
209d3c mov      qword ptr [r14 + 0x348], rax
209d43 movzx    r8d, sil
209d47 mov      eax, r8d
209d4a mov      byte ptr [r14 + 0x4ad], sil
209d51 xor      rax, qword ptr [rsp + 0x60]
209d56 xor      rax, r12
209d59 movabs   r12, 0x9e3779b97f4a7c15
209d63 mov      rcx, rax
209d66 shr      rcx, 0x21
209d6a xor      rcx, rax
209d6d movabs   rax, 0xff51afd7ed558ccd
209d77 imul     rcx, rax
209d7b imul     r8, r12
209d7f imul     r9, r12
209d83 mov      rdx, rcx
209d86 movabs   rax, 0xc4ceb9fe1a85ec53
209d90 shr      rdx, 0x21
209d94 xor      rdx, rcx
209d97 mov      ecx, dword ptr [r14 + 0x1178]
209d9e imul     rdx, rax
209da2 mov      rax, rdx
209da5 shr      rax, 0x21
209da9 xor      rax, rdx
209dac mov      qword ptr [r14 + 0x20], rax
209db0 movabs   rax, 0xd6e8feb86659fd93
209dba imul     rcx, rax
209dbe xor      rcx, r8
209dc1 xor      rcx, rbx
209dc4 movabs   rbx, 0x2545f4914f6cdd1d
209dce mov      rax, rcx
209dd1 add      r9, rbx
209dd4 shr      rax, 0x21
209dd8 xor      rax, rcx
209ddb movabs   rcx, 0xff51afd7ed558ccd
209de5 imul     rax, rcx
209de9 mov      rdx, rax
209dec shr      rdx, 0x21
209df0 xor      rdx, rax
209df3 movabs   rax, 0xc4ceb9fe1a85ec53
209dfd imul     rdx, rax
209e01 mov      rax, qword ptr [rsp + 0x78]
209e06 shr      rdx, 0x21
209e0a and      edx, 3
209e0d inc      rax
209e10 mov      qword ptr [r14 + 0x1b8], rax
209e17 cmp      sil, 0x3e
209e1b jae      0x140209eb3
209e21 inc      qword ptr [r14 + 0x11a0]
209e28 lea      rax, [rip - 0x209e2f]
209e2f mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
209e37 mov      qword ptr [r14 + 0x1b0], r9
209e3e shr      r9, 0x1b
209e42 movzx    eax, r9b
209e46 mov      byte ptr [r14 + 0x160], al
209e4d imul     rax, r11
209e51 mov      ebx, edx
209e53 xor      rax, r10
209e56 xor      rax, rdi
209e59 mov      rcx, rax
209e5c add      rax, r8
209e5f xor      rcx, r8
209e62 movzx    r8d, sil
209e66 test     bpl, bpl
209e69 cmove    rax, rcx
209e6d mov      rcx, r14
209e70 mov      qword ptr [r14 + 0xf0], rax
209e77 call     0x1401f1f50
209e7c mov      eax, eax
209e7e lea      edx, [r15 - 1]
209e82 imul     rcx, rbx, 0x3e
209e86 mov      r8, r13
209e89 add      rcx, rax
209e8c mov      rax, qword ptr [r14 + 0x4b8]
209e93 movsxd   r9, dword ptr [rax + rcx*4]
209e97 mov      rcx, r14
209e9a movsxd   rax, dword ptr [r14 + 0x4c8]
209ea1 xor      r9, rax
209ea4 add      r9, qword ptr [r14 + 0x4c0]
209eab call     r9
209eae jmp      0x140209f7a
209eb3 inc      dword ptr [r14 + 0x11a8]
209eba mov      rax, r9
209ebd shr      rax, 0x1b
209ec1 movzx    ecx, al
209ec4 lea      rax, [r10*4]
209ecc mov      byte ptr [r14 + 0x163], cl
209ed3 imul     rcx, r11
209ed7 imul     r9, r12
209edb xor      rcx, rax
209ede xor      rcx, rdi
209ee1 mov      qword ptr [r14 + 0x108], rcx
209ee8 mov      r8, qword ptr [r14 + 0x1b8]
209eef add      r9, rbx
209ef2 mov      rax, r9
209ef5 shr      rax, 0x1b
209ef9 movzx    edx, al
209efc mov      byte ptr [r14 + 0x16a], dl
209f03 imul     rax, r10, 0xb
209f07 imul     rdx, r11
209f0b xor      rdx, rax
209f0e xor      rdx, rdi
209f11 mov      rcx, rdx
209f14 xor      rcx, 1
209f18 test     bpl, bpl
209f1b lea      rax, [rdx + 1]
209f1f cmove    rax, rcx
209f23 mov      qword ptr [r14 + 0x140], rax
209f2a lea      rax, [r8 + 2]
209f2e mov      qword ptr [r14 + 0x1b8], rax
209f35 imul     r9, r12
209f39 add      r9, rbx
209f3c mov      qword ptr [r14 + 0x1b0], r9
209f43 shr      r9, 0x1b
209f47 movzx    eax, r9b
209f4b mov      byte ptr [r14 + 0x160], al
209f52 imul     rax, r11
209f56 xor      rax, rdi
209f59 xor      rax, r10
209f5c mov      rcx, rax
209f5f add      rax, 0xfe1ab
209f65 xor      rcx, 0xfe1ab
209f6c test     bpl, bpl
209f6f cmove    rax, rcx
209f73 mov      qword ptr [r14 + 0xf0], rax
209f7a mov      rdi, qword ptr [rsp + 0x28]
209f7f mov      rsi, qword ptr [rsp + 0x30]
209f84 mov      rbp, qword ptr [rsp + 0x38]
209f89 mov      rbx, qword ptr [rsp + 0x68]
209f8e mov      r12, qword ptr [rsp + 0x20]
209f93 add      rsp, 0x40
209f97 pop      r15
209f99 pop      r14
209f9b pop      r13
209f9d ret      
209f9e mov      edx, 0x54485254
209fa3 mov      rcx, r14
209fa6 call     0x1401ed830
209fab int3     
209fac mov      edx, 0x43414e59
209fb1 mov      rcx, r14
209fb4 call     0x1401ed830
209fb9 int3     
