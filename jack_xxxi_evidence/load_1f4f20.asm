1f4f20 push     r12
1f4f22 push     r13
1f4f24 push     r14
1f4f26 sub      rsp, 0x40
1f4f2a movsxd   rax, dword ptr [rcx + 0x11e0]
1f4f31 mov      r14, rcx
1f4f34 mov      r13d, edx
1f4f37 movabs   rcx, 0xacbb8020808b8fca
1f4f41 imul     rax, rcx
1f4f45 movabs   rcx, 0xee20aeb01550bf5
1f4f4f mov      r12, r8
1f4f52 xor      rax, qword ptr [r14 + 0x28]
1f4f56 mov      qword ptr [rsp + 0x60], rax
1f4f5b mov      rax, qword ptr [rsp + 0x60]
1f4f60 movsxd   rax, dword ptr [r14 + 0x11e0]
1f4f67 imul     rax, rcx
1f4f6b movabs   rcx, 0xe82a94b5821e87e0
1f4f75 xor      rax, qword ptr [r14 + 0x28]
1f4f79 mov      qword ptr [rsp + 0x60], rax
1f4f7e mov      rax, qword ptr [rsp + 0x60]
1f4f83 movsxd   rax, dword ptr [r14 + 0x11e0]
1f4f8a imul     rax, rcx
1f4f8e xor      rax, qword ptr [r14 + 0x28]
1f4f92 mov      qword ptr [rsp + 0x60], rax
1f4f97 mov      rax, qword ptr [rsp + 0x60]
1f4f9c mov      rax, qword ptr [r14 + 0x2f0]
1f4fa3 shr      rax, 0xd
1f4fa7 mov      rcx, rax
1f4faa shr      rcx, 0x21
1f4fae xor      rcx, rax
1f4fb1 movabs   rax, 0xff51afd7ed558ccd
1f4fbb imul     rcx, rax
1f4fbf movabs   rax, 0xc4ceb9fe1a85ec53
1f4fc9 mov      rdx, rcx
1f4fcc shr      rdx, 0x21
1f4fd0 xor      rdx, rcx
1f4fd3 imul     rdx, rax
1f4fd7 movabs   rax, 0xd8011cf9880697e4
1f4fe1 mov      rcx, rdx
1f4fe4 shr      rcx, 0x21
1f4fe8 xor      rcx, rdx
1f4feb xor      rcx, rax
1f4fee mov      rax, qword ptr [r14 + 0x2f0]
1f4ff5 add      rcx, rax
1f4ff8 mov      qword ptr [r14 + 0x2f0], rcx
1f4fff mov      rcx, r14
1f5002 call     0x1401f1d80
1f5007 mov      edx, eax
1f5009 mov      rcx, r14
1f500c call     0x1401ee650
1f5011 mov      rdx, rax
1f5014 mov      rcx, r14
1f5017 call     0x1401ee820
1f501c mov      rax, qword ptr [r14 + 0x2f0]
1f5023 test     r13d, r13d
1f5026 jns      0x1401f5bc7
1f502c cmp      qword ptr [r14 + 0x11b8], r12
1f5033 jne      0x1401f5bd5
1f5039 movsxd   rax, dword ptr [r14 + 0x11e0]
1f5040 movabs   rcx, 0x782c18cc5d176d9f
1f504a imul     rax, rcx
1f504e mov      rcx, r14
1f5051 xor      rax, qword ptr [r14 + 0x28]
1f5055 mov      qword ptr [rsp + 0x60], rax
1f505a mov      rax, qword ptr [rsp + 0x60]
1f505f call     0x1401ee450
1f5064 test     eax, eax
1f5066 jne      0x1401f5bbc
1f506c cmp      dword ptr [r14 + 0xad0], eax
1f5073 jne      0x1401f5bbc
1f5079 mov      r8, qword ptr [r14 + 0xf0]
1f5080 movzx    ecx, byte ptr [r14 + 0x160]
1f5088 mov      rax, r8
1f508b mov      r10, qword ptr [r14 + 0xe0]
1f5092 mov      r11, qword ptr [r14 + 0xd8]
1f5099 mov      r9, qword ptr [r14 + 0x1b0]
1f50a0 imul     rcx, r10
1f50a4 mov      qword ptr [rsp + 0x68], rbx
1f50a9 mov      rbx, qword ptr [r14 + 0xd0]
1f50b0 xor      rcx, rbx
1f50b3 mov      qword ptr [rsp + 0x38], rbp
1f50b8 xor      rcx, r11
1f50bb mov      qword ptr [rsp + 0x30], rsi
1f50c0 mov      rsi, qword ptr [r14 + 0x1b8]
1f50c7 xor      rax, rcx
1f50ca sub      r8, rcx
1f50cd mov      qword ptr [rsp + 0x28], rdi
1f50d2 movzx    edi, byte ptr [r14 + 0xe8]
1f50da movabs   rbp, 0x2545f4914f6cdd1d
1f50e4 test     dil, dil
1f50e7 mov      qword ptr [rsp + 0x20], r15
1f50ec movabs   r15, 0x9e3779b97f4a7c15
1f50f6 cmove    r8, rax
1f50fa inc      rsi
1f50fd imul     r9, r15
1f5101 mov      qword ptr [r14 + 0x1b8], rsi
1f5108 mov      rcx, r8
1f510b add      r9, rbp
1f510e mov      qword ptr [r14 + 0x1b0], r9
1f5115 mov      rax, r9
1f5118 shr      rax, 0x1b
1f511c movzx    edx, al
1f511f mov      byte ptr [r14 + 0x160], dl
1f5126 imul     rdx, r10
1f512a xor      rdx, rbx
1f512d xor      rdx, r11
1f5130 xor      rcx, rdx
1f5133 test     dil, dil
1f5136 lea      rax, [r8 + rdx]
1f513a cmove    rax, rcx
1f513e mov      qword ptr [r14 + 0xf0], rax
1f5145 cmp      r8d, 0x26dc07
1f514c jne      0x1401f5ba3
1f5152 mov      eax, r13d
1f5155 btr      eax, 0x1f
1f5159 cmp      eax, 2
1f515c jae      0x1401f51a8
1f515e imul     r9, r15
1f5162 lea      rax, [rsi + 1]
1f5166 mov      qword ptr [r14 + 0x1b8], rax
1f516d add      r9, rbp
1f5170 mov      qword ptr [r14 + 0x1b0], r9
1f5177 shr      r9, 0x1b
1f517b movzx    eax, r9b
1f517f mov      byte ptr [r14 + 0x160], al
1f5186 imul     rax, r10
1f518a xor      rax, rbx
1f518d xor      rax, r11
1f5190 mov      rcx, rax
1f5193 add      rax, 0x3abaef
1f5199 xor      rcx, 0x3abaef
1f51a0 test     dil, dil
1f51a3 jmp      0x1401f5b98
1f51a8 mov      rcx, r14
1f51ab call     0x1401ee070
1f51b0 movzx    ecx, byte ptr [r14 + 0x4ad]
1f51b8 movabs   rbx, 0xff51afd7ed558ccd
1f51c2 xor      rcx, qword ptr [r14 + 0x11e8]
1f51c9 movabs   r8, 0xc4ceb9fe1a85ec53
1f51d3 mov      r11, qword ptr [r14 + 0xe0]
1f51da mov      r10, qword ptr [r14 + 0xd0]
1f51e1 movzx    r9d, byte ptr [r14 + 0xe8]
1f51e9 mov      eax, eax
1f51eb xor      rcx, rax
1f51ee mov      rax, rcx
1f51f1 shr      rax, 0x21
1f51f5 xor      rax, rcx
1f51f8 imul     rax, rbx
1f51fc mov      rcx, rax
1f51ff shr      rcx, 0x21
1f5203 xor      rcx, rax
1f5206 imul     rcx, r8
1f520a mov      rdx, rcx
1f520d shr      rdx, 0x21
1f5211 xor      rdx, rcx
1f5214 mov      qword ptr [r14 + 0x11e8], rdx
1f521b xor      rdx, qword ptr [r14 + 0x28]
1f521f xor      rdx, qword ptr [r14 + 0x20]
1f5223 mov      rax, rdx
1f5226 shr      rax, 0x21
1f522a xor      rax, rdx
1f522d imul     rax, rbx
1f5231 mov      rcx, rax
1f5234 shr      rcx, 0x21
1f5238 xor      rcx, rax
1f523b imul     rcx, r8
1f523f mov      rax, rcx
1f5242 shr      rax, 0x21
1f5246 xor      rax, rcx
1f5249 mov      qword ptr [r14 + 0x20], rax
1f524d mov      rdx, qword ptr [r14 + 0x138]
1f5254 movzx    ecx, byte ptr [r14 + 0x169]
1f525c mov      rax, qword ptr [r14 + 0xd8]
1f5263 imul     rcx, r11
1f5267 lea      rbx, [rax + rax*4]
1f526b mov      rax, rdx
1f526e add      rbx, rbx
1f5271 xor      rcx, rbx
1f5274 xor      rcx, r10
1f5277 xor      rax, rcx
1f527a sub      rdx, rcx
1f527d test     r9b, r9b
1f5280 cmove    rdx, rax
1f5284 mov      rax, qword ptr [r14 + 0x1b0]
1f528b inc      qword ptr [r14 + 0x1b8]
1f5292 imul     rax, r15
1f5296 add      rax, rbp
1f5299 mov      qword ptr [r14 + 0x1b0], rax
1f52a0 shr      rax, 0x1b
1f52a4 movzx    r8d, al
1f52a8 mov      byte ptr [r14 + 0x169], r8b
1f52af imul     r8, r11
1f52b3 xor      r8, rbx
1f52b6 xor      r8, r10
1f52b9 mov      rcx, r8
1f52bc xor      rcx, rdx
1f52bf test     r9b, r9b
1f52c2 lea      rax, [r8 + rdx]
1f52c6 cmove    rax, rcx
1f52ca mov      rcx, r14
1f52cd mov      qword ptr [r14 + 0x138], rax
1f52d4 call     0x1401f0910
1f52d9 mov      rax, qword ptr [r14 + 0xd8]
1f52e0 mov      r10, qword ptr [r14 + 0xe0]
1f52e7 movzx    ecx, byte ptr [r14 + 0x168]
1f52ef mov      rbx, qword ptr [r14 + 0xd0]
1f52f6 mov      rdx, qword ptr [r14 + 0x130]
1f52fd lea      r11, [rax + rax*8]
1f5301 movzx    r9d, byte ptr [r14 + 0xe8]
1f5309 mov      rax, rdx
1f530c imul     rcx, r10
1f5310 xor      rcx, r11
1f5313 xor      rcx, rbx
1f5316 xor      rax, rcx
1f5319 sub      rdx, rcx
1f531c test     r9b, r9b
1f531f cmove    rdx, rax
1f5323 mov      rax, qword ptr [r14 + 0x1b0]
1f532a inc      qword ptr [r14 + 0x1b8]
1f5331 mov      rcx, rdx
1f5334 imul     rax, r15
1f5338 add      rax, rbp
1f533b mov      qword ptr [r14 + 0x1b0], rax
1f5342 shr      rax, 0x1b
1f5346 movzx    r8d, al
1f534a mov      byte ptr [r14 + 0x168], r8b
1f5351 imul     r8, r10
1f5355 xor      r8, r11
1f5358 xor      r8, rbx
1f535b xor      rcx, r8
1f535e test     r9b, r9b
1f5361 lea      rax, [rdx + r8]
1f5365 cmove    rax, rcx
1f5369 mov      rcx, r14
1f536c mov      qword ptr [r14 + 0x130], rax
1f5373 call     0x1401f0910
1f5378 mov      rcx, r14
1f537b call     0x1401ee070
1f5380 cmp      eax, dword ptr [r14 + 0x1d8]
1f5387 jae      0x1401f5393
1f5389 mov      edx, eax
1f538b mov      rcx, r14
1f538e call     0x1401f0910
1f5393 mov      rsi, qword ptr [r14 + 0xe0]
1f539a mov      rbp, qword ptr [r14 + 0xd0]
1f53a1 mov      r11, qword ptr [r14 + 0x130]
1f53a8 movzx    edi, byte ptr [r14 + 0xe8]
1f53b0 mov      rax, r11
1f53b3 movzx    ecx, byte ptr [r14 + 0x168]
1f53bb mov      rbx, qword ptr [r14 + 0xd8]
1f53c2 mov      r8, qword ptr [r14 + 0x1b8]
1f53c9 mov      r10, qword ptr [r14 + 0x1b0]
1f53d0 imul     rcx, rsi
1f53d4 lea      r9, [rbx + rbx*8]
1f53d8 xor      rcx, r9
1f53db xor      rcx, rbp
1f53de xor      rax, rcx
1f53e1 sub      r11, rcx
1f53e4 test     dil, dil
1f53e7 movabs   rcx, 0x2545f4914f6cdd1d
1f53f1 cmove    r11, rax
1f53f5 imul     r10, r15
1f53f9 add      r10, rcx
1f53fc mov      rcx, r11
1f53ff mov      rax, r10
1f5402 shr      rax, 0x1b
1f5406 movzx    edx, al
1f5409 mov      byte ptr [r14 + 0x168], dl
1f5410 imul     rdx, rsi
1f5414 xor      rdx, r9
1f5417 xor      rdx, rbp
1f541a xor      rcx, rdx
1f541d test     dil, dil
1f5420 lea      rax, [r11 + rdx]
1f5424 cmove    rax, rcx
1f5428 mov      rcx, r11
1f542b mov      qword ptr [r14 + 0x130], rax
1f5432 movabs   rax, 0x2545f4914f6cdd1d
1f543c imul     r10, r15
1f5440 add      r10, rax
1f5443 lea      rax, [r8 + 2]
1f5447 mov      qword ptr [r14 + 0x1b8], rax
1f544e mov      r8d, 0x4921
1f5454 mov      qword ptr [r14 + 0x1b0], r10
1f545b lea      rax, [rbx + rbx*4]
1f545f add      rax, rax
1f5462 shr      r10, 0x1b
1f5466 movzx    edx, r10b
1f546a mov      byte ptr [r14 + 0x169], dl
1f5471 imul     rdx, rsi
1f5475 xor      rdx, rax
1f5478 xor      rdx, rbp
1f547b xor      rcx, rdx
1f547e test     dil, dil
1f5481 lea      rax, [r11 + rdx]
1f5485 cmove    rax, rcx
1f5489 mov      rcx, r14
1f548c mov      qword ptr [r14 + 0x138], rax
1f5493 movzx    edx, byte ptr [r14 + 0x4ad]
1f549b xor      rdx, qword ptr [r14 + 0x348]
1f54a2 call     0x1401f1520
1f54a7 mov      r8, qword ptr [r14 + 0x348]
1f54ae movabs   rdi, 0xff51afd7ed558ccd
1f54b8 mov      rax, r8
1f54bb movabs   rsi, 0xc4ceb9fe1a85ec53
1f54c5 xor      rax, qword ptr [r14 + 0x20]
1f54c9 mov      rcx, rax
1f54cc shr      rcx, 0x21
1f54d0 xor      rcx, rax
1f54d3 imul     rcx, rdi
1f54d7 mov      rax, rcx
1f54da shr      rax, 0x21
1f54de xor      rax, rcx
1f54e1 imul     rax, rsi
1f54e5 mov      rdx, rax
1f54e8 shr      rdx, 0x21
1f54ec xor      edx, eax
1f54ee lea      eax, [rdx + 1]
1f54f1 mov      ecx, eax
1f54f3 xor      eax, edx
1f54f5 imul     ecx, edx
1f54f8 not      ecx
1f54fa and      ecx, eax
1f54fc test     cl, 1
1f54ff je       0x1401f5572
1f5501 and      r8b, 3
1f5505 cmp      r8b, 1
1f5509 jne      0x1401f5572
1f550b mov      rax, qword ptr [r14 + 0x1b0]
1f5512 movabs   rcx, 0x2545f4914f6cdd1d
1f551c inc      qword ptr [r14 + 0x1b8]
1f5523 imul     rax, r15
1f5527 add      rax, rcx
1f552a mov      qword ptr [r14 + 0x1b0], rax
1f5531 shr      rax, 0x1b
1f5535 movzx    eax, al
1f5538 mov      byte ptr [r14 + 0x160], al
1f553f imul     rax, qword ptr [r14 + 0xe0]
1f5547 xor      rax, qword ptr [r14 + 0xd8]
1f554e xor      rax, qword ptr [r14 + 0xd0]
1f5555 mov      rcx, rax
1f5558 add      rax, 0x17ed28
1f555e xor      rcx, 0x17ed28
1f5565 cmp      byte ptr [r14 + 0xe8], 0
1f556d jmp      0x1401f5b98
1f5572 mov      rcx, r14
1f5575 call     0x1401ee070
1f557a mov      ebx, eax
1f557c cmp      eax, dword ptr [r14 + 0x1d8]
1f5583 jb       0x1401f55ec
1f5585 mov      rax, qword ptr [r14 + 0x1b0]
1f558c movabs   rcx, 0x2545f4914f6cdd1d
1f5596 inc      qword ptr [r14 + 0x1b8]
1f559d imul     rax, r15
1f55a1 add      rax, rcx
1f55a4 mov      qword ptr [r14 + 0x1b0], rax
1f55ab shr      rax, 0x1b
1f55af movzx    eax, al
1f55b2 mov      byte ptr [r14 + 0x160], al
1f55b9 imul     rax, qword ptr [r14 + 0xe0]
1f55c1 xor      rax, qword ptr [r14 + 0xd8]
1f55c8 xor      rax, qword ptr [r14 + 0xd0]
1f55cf mov      rcx, rax
1f55d2 add      rax, 0xfe1ab
1f55d8 xor      rcx, 0xfe1ab
1f55df cmp      byte ptr [r14 + 0xe8], 0
1f55e7 jmp      0x1401f5b98
1f55ec mov      edx, ebx
1f55ee mov      rcx, r14
1f55f1 call     0x1401f25b0
1f55f6 movsxd   rcx, dword ptr [r14 + 0x11e0]
1f55fd movabs   r8, 0xd6e8feb86659fd93
1f5607 mov      rdx, qword ptr [r14 + 0x20]
1f560b mov      rax, rbx
1f560e imul     rax, r8
1f5612 imul     rcx, r15
1f5616 rol      rdx, 0x11
1f561a xor      rax, rdx
1f561d xor      rcx, qword ptr [r14 + 0x260]
1f5624 xor      rax, rcx
1f5627 mov      rcx, rax
1f562a shr      rcx, 0x21
1f562e xor      rcx, rax
1f5631 imul     rcx, rdi
1f5635 mov      rdx, rcx
1f5638 shr      rdx, 0x21
1f563c xor      rdx, rcx
1f563f imul     rdx, rsi
1f5643 mov      rax, rdx
1f5646 shr      rax, 0x21
1f564a xor      rax, rdx
1f564d mov      r10, rax
1f5650 shr      r10, 0x1d
1f5654 xor      r10, rax
1f5657 or       r10, 1
1f565b mov      rax, r10
1f565e mov      qword ptr [r14 + 0x260], r10
1f5665 and      eax, 0x3ff
1f566a cmp      rax, 0x2c5
1f5670 jne      0x1401f5681
1f5672 mov      rcx, r14
1f5675 call     0x1402297e0
1f567a mov      r10, qword ptr [r14 + 0x260]
1f5681 movzx    eax, r10b
1f5685 and      al, 0x1f
1f5687 cmp      al, 0x15
1f5689 jne      0x1401f5776
1f568f movsxd   rax, dword ptr [r14 + 0x11e0]
1f5696 xor      rax, 0x5a5a
1f569c mov      rcx, qword ptr [r14 + 0x20]
1f56a0 imul     rax, r15
1f56a4 rol      rcx, 0x11
1f56a8 xor      rax, r10
1f56ab xor      rcx, rax
1f56ae movabs   rax, 0x8f70feda99a6026d
1f56b8 xor      rcx, rax
1f56bb mov      rax, rcx
1f56be shr      rax, 0x21
1f56c2 xor      rax, rcx
1f56c5 imul     rax, rdi
1f56c9 mov      rcx, rax
1f56cc shr      rcx, 0x21
1f56d0 xor      rcx, rax
1f56d3 imul     rcx, rsi
1f56d7 mov      rax, rcx
1f56da shr      rax, 0x21
1f56de xor      rax, rcx
1f56e1 mov      r9, rax
1f56e4 shr      r9, 0x1d
1f56e8 xor      r9, rax
1f56eb or       r9, 1
1f56ef mov      rax, r9
1f56f2 mov      rcx, r9
1f56f5 shr      rax, 8
1f56f9 and      eax, 3
1f56fc shr      rcx, 0x28
1f5700 imul     r8, rax, 0x3e
1f5704 mov      eax, 0x8421085
1f5709 mul      ecx
1f570b mov      eax, ecx
1f570d sub      eax, edx
1f570f shr      eax, 1
1f5711 add      eax, edx
1f5713 shr      eax, 5
1f5716 imul     eax, eax, 0x3e
1f5719 sub      ecx, eax
1f571b mov      eax, ecx
1f571d add      r8, rax
1f5720 mov      rax, qword ptr [r14 + 0x4b8]
1f5727 movsxd   rcx, dword ptr [rax + r8*4]
1f572b movsxd   rax, dword ptr [r14 + 0x4c8]
1f5732 xor      rcx, rax
1f5735 add      rcx, qword ptr [r14 + 0x4c0]
1f573c xor      rcx, r9
1f573f mov      rax, rcx
1f5742 shr      rax, 0x21
1f5746 xor      rax, rcx
1f5749 imul     rax, rdi
1f574d mov      rcx, rax
1f5750 shr      rcx, 0x21
1f5754 xor      rcx, rax
1f5757 imul     rcx, rsi
1f575b mov      rax, rcx
1f575e shr      rax, 0x21
1f5762 xor      rax, rcx
1f5765 xor      rax, r10
1f5768 inc      qword ptr [r14 + 0x268]
1f576f mov      qword ptr [r14 + 0x260], rax
1f5776 inc      dword ptr [r14 + 0x200]
1f577d mov      eax, dword ptr [r14 + 0x200]
1f5784 cmp      eax, dword ptr [r14 + 0x1fc]
1f578b jb       0x1401f57a0
1f578d mov      rcx, r14
1f5790 mov      dword ptr [r14 + 0x200], 0
1f579b call     0x1401ef7c0
1f57a0 mov      r8d, ebx
1f57a3 mov      edx, ebx
1f57a5 mov      rcx, r14
1f57a8 call     0x1401f0660
1f57ad inc      qword ptr [r14 + 0x1b8]
1f57b4 movabs   rax, 0x2545f4914f6cdd1d
1f57be mov      r9, qword ptr [r14 + 0x1b0]
1f57c5 mov      r10, qword ptr [r14 + 0x1b8]
1f57cc imul     r9, r15
1f57d0 add      r9, rax
1f57d3 mov      qword ptr [r14 + 0x1b0], r9
1f57da mov      rax, r9
1f57dd shr      rax, 0x1b
1f57e1 movzx    edx, al
1f57e4 mov      byte ptr [r14 + 0x168], dl
1f57eb mov      rdi, qword ptr [r14 + 0xe0]
1f57f2 mov      r11, qword ptr [r14 + 0xd8]
1f57f9 mov      rsi, qword ptr [r14 + 0xd0]
1f5800 movzx    r15d, byte ptr [r14 + 0xe8]
1f5808 imul     rdx, rdi
1f580c lea      rax, [r11 + r11*8]
1f5810 xor      rdx, rax
1f5813 xor      rdx, rsi
1f5816 mov      rcx, rdx
1f5819 xor      rcx, rbx
1f581c test     r15b, r15b
1f581f lea      rax, [rdx + rbx]
1f5823 cmove    rax, rcx
1f5827 inc      r10
1f582a mov      qword ptr [r14 + 0x130], rax
1f5831 mov      rcx, qword ptr [r14 + 0x1d0]
1f5838 mov      rax, qword ptr [r14 + 0x48]
1f583c mov      qword ptr [rsp + 0x78], r10
1f5841 movzx    r8d, byte ptr [rcx + rbx]
1f5846 xor      r8b, byte ptr [rax + rbx]
1f584a inc      ebx
1f584c mov      qword ptr [r14 + 0x1b8], r10
1f5853 movabs   rax, 0x9e3779b97f4a7c15
1f585d imul     r9, rax
1f5861 mov      qword ptr [rsp + 0x60], rbx
1f5866 movabs   rax, 0x2545f4914f6cdd1d
1f5870 add      r9, rax
1f5873 mov      rax, r9
1f5876 shr      rax, 0x1b
1f587a movzx    edx, al
1f587d lea      rax, [r11 + r11]
1f5881 mov      byte ptr [r14 + 0x161], dl
1f5888 imul     rdx, rdi
1f588c xor      rdx, rax
1f588f xor      rdx, rsi
1f5892 mov      rcx, rdx
1f5895 xor      rcx, rbx
1f5898 test     r15b, r15b
1f589b lea      rax, [rdx + rbx]
1f589f cmove    rax, rcx
1f58a3 mov      qword ptr [r14 + 0xf8], rax
1f58aa movsxd   rdx, dword ptr [r14 + 0x11e0]
1f58b1 mov      r10, qword ptr [r14 + 0x20]
1f58b5 mov      rcx, rdx
1f58b8 xor      rcx, qword ptr [r14 + 0x350]
1f58bf xor      rcx, r10
1f58c2 xor      rcx, rbx
1f58c5 movabs   rbx, 0xff51afd7ed558ccd
1f58cf xor      rcx, qword ptr [r14 + 0x348]
1f58d6 mov      rax, rcx
1f58d9 shr      rax, 0x21
1f58dd xor      rax, rcx
1f58e0 imul     rax, rbx
1f58e4 mov      rcx, rax
1f58e7 shr      rcx, 0x21
1f58eb xor      rcx, rax
1f58ee movabs   rax, 0xc4ceb9fe1a85ec53
1f58f8 imul     rcx, rax
1f58fc movzx    eax, r8b
1f5900 mov      rbx, rcx
1f5903 shr      rbx, 0x21
1f5907 xor      rbx, rcx
1f590a lea      rcx, [rip - 0x1f5911]
1f5911 xor      rax, 0xdd
1f5917 mov      qword ptr [r14 + 0x28], rbx
1f591b movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
1f5923 xor      bpl, 0x63
1f5927 movabs   r8, 0xff51afd7ed558ccd
1f5931 inc      edx
1f5933 mov      dword ptr [r14 + 0x11e0], edx
1f593a test     dl, 0x1f
1f593d jne      0x1401f5983
1f593f movsxd   rax, edx
1f5942 xor      rax, r10
1f5945 xor      rax, qword ptr [r14 + 0x348]
1f594c mov      rcx, rax
1f594f shr      rcx, 0x21
1f5953 xor      rcx, rax
1f5956 movabs   rax, 0xc4ceb9fe1a85ec53
1f5960 imul     rcx, r8
1f5964 mov      rdx, rcx
1f5967 shr      rdx, 0x21
1f596b xor      rdx, rcx
1f596e imul     rdx, rax
1f5972 mov      rax, rdx
1f5975 shr      rax, 0x21
1f5979 xor      rax, rdx
1f597c mov      qword ptr [r14 + 0x348], rax
1f5983 movzx    edx, bpl
1f5987 xor      r10, rdx
1f598a mov      byte ptr [r14 + 0x4ad], bpl
1f5991 xor      r10, qword ptr [rsp + 0x60]
1f5996 mov      rax, r10
1f5999 shr      rax, 0x21
1f599d xor      rax, r10
1f59a0 movabs   r10, 0x9e3779b97f4a7c15
1f59aa imul     rax, r8
1f59ae imul     rdx, r10
1f59b2 imul     r9, r10
1f59b6 mov      rcx, rax
1f59b9 shr      rcx, 0x21
1f59bd xor      rcx, rax
1f59c0 movabs   rax, 0xc4ceb9fe1a85ec53
1f59ca imul     rcx, rax
1f59ce mov      rax, rcx
1f59d1 shr      rax, 0x21
1f59d5 xor      rax, rcx
1f59d8 mov      ecx, dword ptr [r14 + 0x1178]
1f59df mov      qword ptr [r14 + 0x20], rax
1f59e3 movabs   rax, 0xd6e8feb86659fd93
1f59ed imul     rcx, rax
1f59f1 xor      rcx, rdx
1f59f4 xor      rcx, rbx
1f59f7 movabs   rbx, 0x2545f4914f6cdd1d
1f5a01 mov      rax, rcx
1f5a04 add      r9, rbx
1f5a07 shr      rax, 0x21
1f5a0b xor      rax, rcx
1f5a0e imul     rax, r8
1f5a12 mov      rdx, rax
1f5a15 shr      rdx, 0x21
1f5a19 xor      rdx, rax
1f5a1c movabs   rax, 0xc4ceb9fe1a85ec53
1f5a26 imul     rdx, rax
1f5a2a mov      rax, qword ptr [rsp + 0x78]
1f5a2f shr      rdx, 0x21
1f5a33 and      edx, 3
1f5a36 inc      rax
1f5a39 mov      qword ptr [r14 + 0x1b8], rax
1f5a40 cmp      bpl, 0x3e
1f5a44 jae      0x1401f5adc
1f5a4a inc      qword ptr [r14 + 0x11a0]
1f5a51 lea      rax, [rip - 0x1f5a58]
1f5a58 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
1f5a60 mov      qword ptr [r14 + 0x1b0], r9
1f5a67 shr      r9, 0x1b
1f5a6b movzx    eax, r9b
1f5a6f mov      byte ptr [r14 + 0x160], al
1f5a76 imul     rax, rdi
1f5a7a mov      ebx, edx
1f5a7c xor      rax, rsi
1f5a7f xor      rax, r11
1f5a82 mov      rcx, rax
1f5a85 add      rax, r8
1f5a88 xor      rcx, r8
1f5a8b movzx    r8d, bpl
1f5a8f test     r15b, r15b
1f5a92 cmove    rax, rcx
1f5a96 mov      rcx, r14
1f5a99 mov      qword ptr [r14 + 0xf0], rax
1f5aa0 call     0x1401f1f50
1f5aa5 mov      eax, eax
1f5aa7 lea      edx, [r13 - 1]
1f5aab imul     rcx, rbx, 0x3e
1f5aaf mov      r8, r12
1f5ab2 add      rcx, rax
1f5ab5 mov      rax, qword ptr [r14 + 0x4b8]
1f5abc movsxd   r9, dword ptr [rax + rcx*4]
1f5ac0 mov      rcx, r14
1f5ac3 movsxd   rax, dword ptr [r14 + 0x4c8]
1f5aca xor      r9, rax
1f5acd add      r9, qword ptr [r14 + 0x4c0]
1f5ad4 call     r9
1f5ad7 jmp      0x1401f5ba3
1f5adc inc      dword ptr [r14 + 0x11a8]
1f5ae3 mov      rax, r9
1f5ae6 shr      rax, 0x1b
1f5aea movzx    ecx, al
1f5aed lea      rax, [r11*4]
1f5af5 mov      byte ptr [r14 + 0x163], cl
1f5afc imul     rcx, rdi
1f5b00 imul     r9, r10
1f5b04 xor      rcx, rax
1f5b07 xor      rcx, rsi
1f5b0a mov      qword ptr [r14 + 0x108], rcx
1f5b11 mov      r8, qword ptr [r14 + 0x1b8]
1f5b18 add      r9, rbx
1f5b1b mov      rax, r9
1f5b1e shr      rax, 0x1b
1f5b22 movzx    edx, al
1f5b25 mov      byte ptr [r14 + 0x16a], dl
1f5b2c imul     rax, r11, 0xb
1f5b30 imul     rdx, rdi
1f5b34 xor      rdx, rax
1f5b37 xor      rdx, rsi
1f5b3a mov      rcx, rdx
1f5b3d xor      rcx, 1
1f5b41 test     r15b, r15b
1f5b44 lea      rax, [rdx + 1]
1f5b48 cmove    rax, rcx
1f5b4c mov      qword ptr [r14 + 0x140], rax
1f5b53 lea      rax, [r8 + 2]
1f5b57 mov      qword ptr [r14 + 0x1b8], rax
1f5b5e imul     r9, r10
1f5b62 add      r9, rbx
1f5b65 mov      qword ptr [r14 + 0x1b0], r9
1f5b6c shr      r9, 0x1b
1f5b70 movzx    eax, r9b
1f5b74 mov      byte ptr [r14 + 0x160], al
1f5b7b imul     rax, rdi
1f5b7f xor      rax, rsi
1f5b82 xor      rax, r11
1f5b85 mov      rcx, rax
1f5b88 add      rax, 0xfe1ab
1f5b8e xor      rcx, 0xfe1ab
1f5b95 test     r15b, r15b
1f5b98 cmove    rax, rcx
1f5b9c mov      qword ptr [r14 + 0xf0], rax
1f5ba3 mov      rdi, qword ptr [rsp + 0x28]
1f5ba8 mov      rsi, qword ptr [rsp + 0x30]
1f5bad mov      rbp, qword ptr [rsp + 0x38]
1f5bb2 mov      rbx, qword ptr [rsp + 0x68]
1f5bb7 mov      r15, qword ptr [rsp + 0x20]
1f5bbc add      rsp, 0x40
1f5bc0 pop      r14
1f5bc2 pop      r13
1f5bc4 pop      r12
1f5bc6 ret      
1f5bc7 mov      edx, 0x54485254
1f5bcc mov      rcx, r14
1f5bcf call     0x1401ed830
1f5bd4 int3     
1f5bd5 mov      edx, 0x43414e59
1f5bda mov      rcx, r14
1f5bdd call     0x1401ed830
1f5be2 int3     
