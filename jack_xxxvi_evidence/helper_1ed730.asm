1ed310 push     rbp
1ed312 push     rsi
1ed313 push     r13
1ed315 push     r14
1ed317 push     r15
1ed319 mov      rbp, rsp
1ed31c sub      rsp, 0x60
1ed320 mov      rax, qword ptr [rip + 0x21fcf9]
1ed327 xor      rax, rsp
1ed32a mov      qword ptr [rbp - 0x18], rax
1ed32e xor      esi, esi
1ed330 mov      qword ptr [rbp - 0x38], r8
1ed334 mov      qword ptr [rbp - 0x30], r9
1ed338 mov      r15, r9
1ed33b mov      qword ptr [rbp - 0x28], rsi
1ed33f mov      r14, r8
1ed342 mov      qword ptr [rbp - 0x20], rsi
1ed346 mov      r13d, ecx
1ed349 cmp      edx, 0xc
1ed34c jae      0x1401ed6e2
1ed352 mov      qword ptr [rsp + 0xa0], rbx
1ed35a lea      r11, [rip - 0x1ed361]
1ed361 mov      qword ptr [rsp + 0x58], rdi
1ed366 movabs   rax, 0xdf6f3425862e2f08
1ed370 lea      edi, [rdx + 1]
1ed373 mov      qword ptr [rsp + 0x50], r12
1ed378 movabs   r8, 0x9e3779b97f4a7c15
1ed382 mov      r12d, esi
1ed385 imul     rdi, r8
1ed389 xor      rdi, rax
1ed38c mov      eax, edx
1ed38e mov      ecx, dword ptr [r11 + rax*4 + 0x3dfbf0]
1ed396 mov      eax, dword ptr [r11 + rax*4 + 0x3dfbc0]
1ed39e mov      dword ptr [rbp - 0x3c], ecx
1ed3a1 mov      dword ptr [rbp - 0x40], eax
1ed3a4 test     eax, eax
1ed3a6 je       0x1401ed6a9
1ed3ac lea      r9d, [rcx + r12*4]
1ed3b0 mov      rax, rdi
1ed3b3 shr      rax, 0x20
1ed3b7 movabs   rbx, 0xbf58476d1ce4e5b9
1ed3c1 imul     ecx, eax, 0x7a143595
1ed3c7 imul     edx, r9d, 0x9e3779b1
1ed3ce mov      eax, edx
1ed3d0 sub      eax, ecx
1ed3d2 lea      ecx, [rax - 0x26ac0d28]
1ed3d8 add      ecx, edi
1ed3da mov      eax, ecx
1ed3dc shr      eax, 0xf
1ed3df xor      eax, ecx
1ed3e1 imul     ecx, eax, 0xc2b2ae35
1ed3e7 mov      eax, ecx
1ed3e9 shr      eax, 0xd
1ed3ec xor      eax, ecx
1ed3ee imul     ecx, eax, 0x27d4eb2f
1ed3f4 mov      r10d, ecx
1ed3f7 shr      r10d, 0x10
1ed3fb xor      r10d, dword ptr [r11 + r9*4 + 0x3e33a0]
1ed403 xor      r10d, ecx
1ed406 mov      eax, r10d
1ed409 xor      rax, rdi
1ed40c lea      rdi, [rip - 0x1ed413]
1ed413 imul     rax, r8
1ed417 mov      rcx, rax
1ed41a shr      rcx, 0x1d
1ed41e xor      rcx, rax
1ed421 imul     rcx, rbx
1ed425 mov      eax, ecx
1ed427 mov      rbx, rcx
1ed42a shr      rbx, 0x20
1ed42e xor      rbx, rax
1ed431 lea      r8d, [rdx + rbx]
1ed435 lea      eax, [r8 + 0x778b6c89]
1ed43c mov      ecx, eax
1ed43e shr      ecx, 0xf
1ed441 xor      ecx, eax
1ed443 imul     eax, ecx, 0xc2b2ae35
1ed449 mov      ecx, eax
1ed44b shr      ecx, 0xd
1ed44e xor      ecx, eax
1ed450 imul     edx, ecx, 0x27d4eb2f
1ed456 lea      ecx, [r9 + 1]
1ed45a mov      eax, edx
1ed45c shr      eax, 0x10
1ed45f xor      eax, dword ptr [r11 + rcx*4 + 0x3e33a0]
1ed467 xor      eax, edx
1ed469 mov      r11d, eax
1ed46c lea      eax, [r8 + 0x15c2e63a]
1ed473 mov      ecx, eax
1ed475 shr      ecx, 0xf
1ed478 xor      ecx, eax
1ed47a imul     eax, ecx, 0xc2b2ae35
1ed480 mov      ecx, eax
1ed482 shr      ecx, 0xd
1ed485 xor      ecx, eax
1ed487 imul     edx, ecx, 0x27d4eb2f
1ed48d lea      ecx, [r9 + 2]
1ed491 mov      eax, edx
1ed493 shr      eax, 0x10
1ed496 xor      eax, dword ptr [rdi + rcx*4 + 0x3e33a0]
1ed49d xor      eax, edx
1ed49f mov      edi, eax
1ed4a1 lea      eax, [r8 - 0x4c05a015]
1ed4a8 mov      ecx, eax
1ed4aa shr      ecx, 0xf
1ed4ad xor      ecx, eax
1ed4af imul     eax, ecx, 0xc2b2ae35
1ed4b5 mov      ecx, eax
1ed4b7 shr      ecx, 0xd
1ed4ba xor      ecx, eax
1ed4bc lea      eax, [r9 + 3]
1ed4c0 imul     edx, ecx, 0x27d4eb2f
1ed4c6 lea      r9, [rip - 0x1ed4cd]
1ed4cd mov      r8d, edx
1ed4d0 shr      r8d, 0x10
1ed4d4 xor      r8d, dword ptr [r9 + rax*4 + 0x3e33a0]
1ed4dc mov      eax, edi
1ed4de xor      r8d, edx
1ed4e1 xor      rax, r11
1ed4e4 movabs   rdx, 0x9e3779b97f4a7c15
1ed4ee xor      rax, rbx
1ed4f1 imul     rax, rdx
1ed4f5 mov      rcx, rax
1ed4f8 shr      rcx, 0x1d
1ed4fc xor      rcx, rax
1ed4ff movabs   rax, 0xbf58476d1ce4e5b9
1ed509 imul     rcx, rax
1ed50d mov      rax, rcx
1ed510 shr      rax, 0x20
1ed514 xor      eax, ecx
1ed516 cmp      r8d, eax
1ed519 jne      0x1401ed6d7
1ed51f mov      eax, r8d
1ed522 movabs   r8, 0xbf58476d1ce4e5b9
1ed52c xor      rax, rbx
1ed52f mov      ebx, r10d
1ed532 imul     rax, rdx
1ed536 shr      r10d, 2
1ed53a and      ebx, 3
1ed53d mov      rcx, rax
1ed540 shr      rcx, 0x1d
1ed544 xor      rcx, rax
1ed547 imul     rcx, r8
1ed54b mov      eax, ecx
1ed54d mov      rdx, rcx
1ed550 shr      rdx, 0x20
1ed554 xor      rdx, rdi
1ed557 xor      rdx, rax
1ed55a movabs   rax, 0x9e3779b97f4a7c15
1ed564 imul     rdx, rax
1ed568 mov      rax, rdx
1ed56b shr      rax, 0x1d
1ed56f xor      rax, rdx
1ed572 imul     rax, r8
1ed576 mov      r8d, r10d
1ed579 and      r10d, 0x3000
1ed580 mov      rdi, rax
1ed583 and      r8d, 3
1ed587 mov      eax, eax
1ed589 shr      rdi, 0x20
1ed58d xor      rdi, rax
1ed590 mov      eax, r11d
1ed593 and      eax, 0xc000
1ed598 or       eax, r10d
1ed59b shr      eax, 0xc
1ed59e cmp      eax, 0xa
1ed5a1 ja       0x1401ed6ed
1ed5a7 mov      eax, dword ptr [r9 + rax*4 + 0x1ed6f8]
1ed5af add      rax, r9
1ed5b2 jmp      rax
1ed6a9 mov      rdi, qword ptr [rsp + 0x58]
1ed6ae mov      rax, rsi
1ed6b1 mov      rbx, qword ptr [rsp + 0xa0]
1ed6b9 mov      r12, qword ptr [rsp + 0x50]
1ed6be mov      rcx, qword ptr [rbp - 0x18]
1ed6c2 xor      rcx, rsp
1ed6c5 call     0x1403a3dc0
1ed6ca add      rsp, 0x60
1ed6ce pop      r15
1ed6d0 pop      r14
1ed6d2 pop      r13
1ed6d4 pop      rsi
1ed6d5 pop      rbp
1ed6d6 ret      
1ed6d7 mov      ecx, 0x4e565345
1ed6dc call     0x1401edd90
1ed6e1 int3     
1ed6e2 mov      ecx, 0x4e564e50
1ed6e7 call     0x1401edd90
1ed6ec int3     
1ed6ed mov      ecx, 0x4e564f50
1ed6f2 call     0x1401edd90
1ed6f7 int3     
1ed730 push     rbx
1ed732 mov      eax, ecx
1ed734 mov      ebx, ecx
1ed736 and      eax, 3
1ed739 mov      r10, r8
1ed73c movabs   rcx, 0x9e3779b97f4a7c15
1ed746 and      ebx, 3
1ed749 imul     rax, rcx
1ed74d movabs   rcx, 0xc4ceb9fe1a85ec53
1ed757 mov      r11, rdx
1ed75a xor      rax, r9
1ed75d mov      edx, ebx
1ed75f mov      r8, rax
1ed762 shr      r8, 0x21
1ed766 xor      r8, rax
1ed769 movabs   rax, 0xff51afd7ed558ccd
1ed773 imul     r8, rax
1ed777 mov      rax, r8
1ed77a shr      rax, 0x21
1ed77e xor      rax, r8
1ed781 imul     rax, rcx
1ed785 mov      rcx, rax
1ed788 shr      rcx, 0x21
1ed78c xor      rcx, rax
1ed78f sub      edx, 1
1ed792 je       0x1401ed7f5
1ed794 cmp      edx, 1
1ed797 lea      rdx, [rip + 0x20046a]
1ed79e je       0x1401ed7cc
1ed7a0 sub      r10, rcx
1ed7a3 lea      r8, [rcx + r11]
1ed7a7 mov      rcx, r8
1ed7aa mov      rax, r10
1ed7ad shr      rcx, 3
1ed7b1 mov      r9, r10
1ed7b4 shr      rax, 2
1ed7b8 xor      ecx, eax
1ed7ba and      ecx, 1
1ed7bd lea      eax, [rbx + rcx*4]
1ed7c0 xor      ecx, ecx
1ed7c2 movzx    edx, byte ptr [rax + rdx]
1ed7c6 pop      rbx
1ed7c7 jmp      0x1401ed310
1ed7cc mov      r9, rcx
1ed7cf xor      rcx, r11
1ed7d2 mov      rax, rcx
1ed7d5 xor      r9, r10
1ed7d8 shr      rax, 1
1ed7db mov      r8, rcx
1ed7de xor      rax, r9
1ed7e1 xor      ecx, ecx
1ed7e3 shr      rax, 2
1ed7e7 and      eax, 1
1ed7ea movzx    edx, byte ptr [rdx + rax*4 + 2]
1ed7ef pop      rbx
1ed7f0 jmp      0x1401ed310
1ed7f5 lea      r8, [rcx + r11]
1ed7f9 lea      r9, [rcx + r10]
1ed7fd mov      rax, r8
1ed800 shr      rax, 1
1ed803 lea      rdx, [rip + 0x2003fe]
1ed80a xor      rax, r9
1ed80d xor      ecx, ecx
1ed80f shr      rax, 2
1ed813 and      eax, 1
1ed816 movzx    edx, byte ptr [rdx + rax*4 + 1]
1ed81b pop      rbx
1ed81c jmp      0x1401ed310
