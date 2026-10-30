1ef380 push     r12
1ef382 push     r15
1ef384 sub      rsp, 0x38
1ef388 mov      rax, qword ptr gs:[0x58]
1ef391 mov      r15, rcx
1ef394 mov      r12d, 0x610
1ef39a add      r12, qword ptr [rax]
1ef39d mov      eax, dword ptr [r12 + 0x524]
1ef3a5 mov      dword ptr [rsp + 0x58], eax
1ef3a9 test     eax, eax
1ef3ab je       0x1401ef798
1ef3b1 mov      qword ptr [rsp + 0x50], rbx
1ef3b6 xor      edx, edx
1ef3b8 mov      qword ptr [rsp + 0x60], rbp
1ef3bd mov      qword ptr [rsp + 0x68], rsi
1ef3c2 mov      qword ptr [rsp + 0x30], rdi
1ef3c7 mov      qword ptr [rsp + 0x28], r13
1ef3cc mov      qword ptr [rsp + 0x20], r14
1ef3d1 lea      r14d, [rax - 1]
1ef3d5 mov      ecx, r14d
1ef3d8 call     0x1401eeb00
1ef3dd mov      edx, 1
1ef3e2 mov      ecx, r14d
1ef3e5 mov      rbx, rax
1ef3e8 call     0x1401eeb00
1ef3ed mov      edx, 2
1ef3f2 mov      ecx, r14d
1ef3f5 mov      rdi, rax
1ef3f8 call     0x1401eeb00
1ef3fd mov      edx, 3
1ef402 mov      ecx, r14d
1ef405 mov      rsi, rax
1ef408 call     0x1401eeb00
1ef40d mov      edx, dword ptr [rsp + 0x58]
1ef411 lea      r10d, [r14*4]
1ef419 mov      rbp, rax
1ef41c mov      ecx, edi
1ef41e movabs   r8, 0x9e3779b97f4a7c15
1ef428 mov      r13d, ebx
1ef42b imul     rdx, r8
1ef42f movabs   rax, 0xc2b2ae3d27d4eb4f
1ef439 lea      r11, [r14 + r14*4]
1ef43d imul     rcx, rax
1ef441 movabs   rax, 0xbf58476d1ce4e5b9
1ef44b movabs   rdi, 0x2545f4914f6cdd1d
1ef455 xor      rdx, rcx
1ef458 lea      rcx, [rsi + 1]
1ef45c imul     rcx, rax
1ef460 mov      eax, ebx
1ef462 movabs   rsi, 0xc4ceb9fe1a85ec53
1ef46c xor      rdx, rcx
1ef46f movabs   rcx, 0xd6e8feb86659fd93
1ef479 imul     rax, rcx
1ef47d movabs   rcx, 0xff51afd7ed558ccd
1ef487 xor      rdx, rax
1ef48a xor      rdx, qword ptr [r15 + 0x350]
1ef491 xor      rdx, qword ptr [r15 + 0x340]
1ef498 xor      rdx, 0x43465354
1ef49f mov      rax, rdx
1ef4a2 shr      rax, 0x21
1ef4a6 xor      rax, rdx
1ef4a9 imul     rax, rcx
1ef4ad lea      ecx, [r10 + 1]
1ef4b1 mov      rbx, rax
1ef4b4 shr      rbx, 0x21
1ef4b8 xor      rbx, rax
1ef4bb lea      rax, [r14 + r14*4]
1ef4bf lea      r9, [rax*8]
1ef4c7 mov      rax, qword ptr [r12 + 0x518]
1ef4cf imul     rax, r8
1ef4d3 imul     rbx, rsi
1ef4d7 add      rax, rdi
1ef4da movsxd   r8, ecx
1ef4dd mov      qword ptr [r12 + 0x518], rax
1ef4e5 shr      rax, 0x1d
1ef4e9 movzx    eax, al
1ef4ec mov      byte ptr [r9 + r12 + 0x20], al
1ef4f1 mov      rdx, qword ptr [r12 + 0x510]
1ef4f9 imul     r8, qword ptr [r12 + 0x508]
1ef502 imul     rax, rdx
1ef506 xor      r8, rax
1ef509 mov      eax, ecx
1ef50b xor      r8, qword ptr [r12 + 0x500]
1ef513 xor      rax, rdx
1ef516 mov      rcx, rax
1ef519 shr      rcx, 0x21
1ef51d xor      rcx, rax
1ef520 movabs   rax, 0xff51afd7ed558ccd
1ef52a imul     rcx, rax
1ef52e mov      rdx, rcx
1ef531 shr      rdx, 0x21
1ef535 xor      rdx, rcx
1ef538 imul     rdx, rsi
1ef53c mov      rax, rdx
1ef53f shr      rax, 0x21
1ef543 xor      rax, rdx
1ef546 mov      rcx, rax
1ef549 add      rax, r8
1ef54c xor      rcx, r8
1ef54f cmp      byte ptr [r12 + 0x520], 0
1ef558 cmove    rax, rcx
1ef55c movabs   rcx, 0x9e3779b97f4a7c15
1ef566 mov      qword ptr [r12 + r11*8], rax
1ef56a mov      rax, qword ptr [r12 + 0x518]
1ef572 imul     rax, rcx
1ef576 lea      ecx, [r10 + 2]
1ef57a add      rax, rdi
1ef57d movsxd   r8, ecx
1ef580 mov      qword ptr [r12 + 0x518], rax
1ef588 shr      rax, 0x1d
1ef58c movzx    eax, al
1ef58f mov      byte ptr [r12 + r9 + 0x21], al
1ef594 imul     r8, qword ptr [r12 + 0x508]
1ef59d mov      rdx, qword ptr [r12 + 0x510]
1ef5a5 imul     rax, rdx
1ef5a9 xor      r8, rax
1ef5ac mov      eax, ecx
1ef5ae xor      r8, qword ptr [r12 + 0x500]
1ef5b6 xor      rax, rdx
1ef5b9 mov      rcx, rax
1ef5bc shr      rcx, 0x21
1ef5c0 xor      rcx, rax
1ef5c3 movabs   rax, 0xff51afd7ed558ccd
1ef5cd imul     rcx, rax
1ef5d1 mov      rdx, rcx
1ef5d4 shr      rdx, 0x21
1ef5d8 xor      rdx, rcx
1ef5db imul     rdx, rsi
1ef5df mov      rax, rdx
1ef5e2 shr      rax, 0x21
1ef5e6 xor      rax, rdx
1ef5e9 mov      rcx, rax
1ef5ec add      rax, r8
1ef5ef xor      rcx, r8
1ef5f2 cmp      byte ptr [r12 + 0x520], 0
1ef5fb cmove    rax, rcx
1ef5ff movabs   rcx, 0x9e3779b97f4a7c15
1ef609 mov      qword ptr [r12 + r11*8 + 8], rax
1ef60e mov      rax, qword ptr [r12 + 0x518]
1ef616 imul     rax, rcx
1ef61a add      rax, rdi
1ef61d mov      qword ptr [r12 + 0x518], rax
1ef625 shr      rax, 0x1d
1ef629 movzx    ecx, al
1ef62c lea      eax, [r10 + 3]
1ef630 mov      byte ptr [r12 + r9 + 0x22], cl
1ef635 mov      rdx, qword ptr [r12 + 0x510]
1ef63d imul     rcx, rdx
1ef641 movsxd   r8, eax
1ef644 xor      rax, rdx
1ef647 imul     r8, qword ptr [r12 + 0x508]
1ef650 xor      r8, rcx
1ef653 mov      rcx, rax
1ef656 xor      r8, qword ptr [r12 + 0x500]
1ef65e shr      rcx, 0x21
1ef662 xor      rcx, rax
1ef665 movabs   rax, 0xff51afd7ed558ccd
1ef66f imul     rcx, rax
1ef673 mov      rdx, rcx
1ef676 shr      rdx, 0x21
1ef67a xor      rdx, rcx
1ef67d imul     rdx, rsi
1ef681 mov      rax, rdx
1ef684 shr      rax, 0x21
1ef688 xor      rax, rdx
1ef68b mov      rcx, rax
1ef68e add      rax, r8
1ef691 xor      rcx, r8
1ef694 cmp      byte ptr [r12 + 0x520], 0
1ef69d cmove    rax, rcx
1ef6a1 movabs   rcx, 0x9e3779b97f4a7c15
1ef6ab mov      qword ptr [r12 + r11*8 + 0x10], rax
1ef6b0 mov      rax, qword ptr [r12 + 0x518]
1ef6b8 imul     rax, rcx
1ef6bc lea      ecx, [r10 + 4]
1ef6c0 add      rax, rdi
1ef6c3 mov      rdi, qword ptr [rsp + 0x30]
1ef6c8 mov      qword ptr [r12 + 0x518], rax
1ef6d0 shr      rax, 0x1d
1ef6d4 movzx    r8d, al
1ef6d8 mov      byte ptr [r12 + r9 + 0x23], r8b
1ef6dd mov      rdx, qword ptr [r12 + 0x510]
1ef6e5 imul     r8, rdx
1ef6e9 movsxd   rax, ecx
1ef6ec imul     rax, qword ptr [r12 + 0x508]
1ef6f5 xor      r8, rax
1ef6f8 mov      eax, ecx
1ef6fa xor      r8, qword ptr [r12 + 0x500]
1ef702 xor      rax, rdx
1ef705 mov      rcx, rax
1ef708 shr      rcx, 0x21
1ef70c xor      rcx, rax
1ef70f movabs   rax, 0xff51afd7ed558ccd
1ef719 imul     rcx, rax
1ef71d mov      rdx, rcx
1ef720 shr      rdx, 0x21
1ef724 xor      rdx, rcx
1ef727 imul     rdx, rsi
1ef72b mov      rsi, qword ptr [rsp + 0x68]
1ef730 mov      rax, rdx
1ef733 shr      rax, 0x21
1ef737 xor      rax, rdx
1ef73a mov      rcx, rax
1ef73d add      rax, r8
1ef740 xor      rcx, r8
1ef743 cmp      byte ptr [r12 + 0x520], 0
1ef74c cmove    rax, rcx
1ef750 mov      qword ptr [r12 + r11*8 + 0x18], rax
1ef755 mov      rax, rbx
1ef758 shr      rax, 0x21
1ef75c xor      rax, rbx
1ef75f mov      dword ptr [r12 + 0x524], r14d
1ef767 mov      r14, qword ptr [rsp + 0x20]
1ef76c cmp      rax, rbp
1ef76f mov      rbp, qword ptr [rsp + 0x60]
1ef774 mov      rbx, qword ptr [rsp + 0x50]
1ef779 jne      0x1401ef7a3
1ef77b mov      eax, dword ptr [r15 + 0x1d8]
1ef782 cmp      r13, rax
1ef785 ja       0x1401ef7b1
1ef787 mov      eax, r13d
1ef78a mov      r13, qword ptr [rsp + 0x28]
1ef78f add      rsp, 0x38
1ef793 pop      r15
1ef795 pop      r12
1ef797 ret      
1ef798 mov      edx, 0x4346454d
1ef79d call     0x1401ed830
1ef7a2 int3     
1ef7a3 mov      edx, 0x43464241
1ef7a8 mov      rcx, r15
1ef7ab call     0x1401ed830
1ef7b0 int3     
1ef7b1 mov      edx, 0x43464242
1ef7b6 mov      rcx, r15
1ef7b9 call     0x1401ed830
1ef7be int3     
