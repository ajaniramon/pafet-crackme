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
