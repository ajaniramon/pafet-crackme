1f4260 push     r12
1f4262 push     r13
1f4264 push     r14
1f4266 sub      rsp, 0x40
1f426a movsxd   rax, dword ptr [rcx + 0x11e0]
1f4271 mov      r14, rcx
1f4274 mov      r13d, edx
1f4277 movabs   rcx, 0x58c3bfd0829beec2
1f4281 imul     rax, rcx
1f4285 movabs   rcx, 0xfa9a351b03456afd
1f428f mov      r12, r8
1f4292 xor      rax, qword ptr [r14 + 0x28]
1f4296 mov      qword ptr [rsp + 0x60], rax
1f429b mov      rax, qword ptr [rsp + 0x60]
1f42a0 movsxd   rax, dword ptr [r14 + 0x11e0]
1f42a7 imul     rax, rcx
1f42ab movabs   rcx, 0x1c52ab45800ee6e8
1f42b5 xor      rax, qword ptr [r14 + 0x28]
1f42b9 mov      qword ptr [rsp + 0x60], rax
1f42be mov      rax, qword ptr [rsp + 0x60]
1f42c3 movsxd   rax, dword ptr [r14 + 0x11e0]
1f42ca imul     rax, rcx
1f42ce xor      rax, qword ptr [r14 + 0x28]
1f42d2 mov      qword ptr [rsp + 0x60], rax
1f42d7 mov      rax, qword ptr [rsp + 0x60]
1f42dc mov      rax, qword ptr [r14 + 0x2f0]
1f42e3 shr      rax, 0xd
1f42e7 mov      rcx, rax
1f42ea shr      rcx, 0x21
1f42ee xor      rcx, rax
1f42f1 movabs   rax, 0xff51afd7ed558ccd
1f42fb imul     rcx, rax
1f42ff movabs   rax, 0xc4ceb9fe1a85ec53
1f4309 mov      rdx, rcx
1f430c shr      rdx, 0x21
1f4310 xor      rdx, rcx
1f4313 imul     rdx, rax
1f4317 movabs   rax, 0x2c7923098a16f6ec
1f4321 mov      rcx, rdx
1f4324 shr      rcx, 0x21
1f4328 xor      rcx, rdx
1f432b xor      rcx, rax
1f432e mov      rax, qword ptr [r14 + 0x2f0]
1f4335 add      rcx, rax
1f4338 mov      qword ptr [r14 + 0x2f0], rcx
1f433f mov      rcx, r14
1f4342 call     0x1401ee940
1f4347 mov      rdx, 0xffffffffffffffff
1f434e mov      rcx, r14
1f4351 sub      rdx, rax
1f4354 call     0x1401ee820
1f4359 mov      rax, qword ptr [r14 + 0x2f0]
1f4360 test     r13d, r13d
1f4363 jns      0x1401f4f04
1f4369 cmp      qword ptr [r14 + 0x11b8], r12
1f4370 jne      0x1401f4f12
1f4376 movsxd   rax, dword ptr [r14 + 0x11e0]
1f437d movabs   rcx, 0x7ce4996f59e8cde
1f4387 imul     rax, rcx
1f438b mov      rcx, r14
1f438e xor      rax, qword ptr [r14 + 0x28]
1f4392 mov      qword ptr [rsp + 0x60], rax
1f4397 mov      rax, qword ptr [rsp + 0x60]
1f439c call     0x1401ee450
1f43a1 test     eax, eax
1f43a3 jne      0x1401f4ef9
1f43a9 cmp      dword ptr [r14 + 0xad0], eax
1f43b0 jne      0x1401f4ef9
1f43b6 mov      r8, qword ptr [r14 + 0xf0]
1f43bd movzx    ecx, byte ptr [r14 + 0x160]
1f43c5 mov      rax, r8
1f43c8 mov      r10, qword ptr [r14 + 0xe0]
1f43cf mov      r11, qword ptr [r14 + 0xd8]
1f43d6 mov      r9, qword ptr [r14 + 0x1b0]
1f43dd imul     rcx, r10
1f43e1 mov      qword ptr [rsp + 0x68], rbx
1f43e6 mov      rbx, qword ptr [r14 + 0xd0]
1f43ed xor      rcx, rbx
1f43f0 mov      qword ptr [rsp + 0x38], rbp
1f43f5 xor      rcx, r11
1f43f8 mov      qword ptr [rsp + 0x30], rsi
1f43fd mov      rsi, qword ptr [r14 + 0x1b8]
1f4404 xor      rax, rcx
1f4407 sub      r8, rcx
1f440a mov      qword ptr [rsp + 0x28], rdi
1f440f movzx    edi, byte ptr [r14 + 0xe8]
1f4417 movabs   rbp, 0x2545f4914f6cdd1d
1f4421 test     dil, dil
1f4424 mov      qword ptr [rsp + 0x20], r15
1f4429 movabs   r15, 0x9e3779b97f4a7c15
1f4433 cmove    r8, rax
1f4437 inc      rsi
1f443a imul     r9, r15
1f443e mov      qword ptr [r14 + 0x1b8], rsi
1f4445 mov      rcx, r8
1f4448 add      r9, rbp
1f444b mov      qword ptr [r14 + 0x1b0], r9
1f4452 mov      rax, r9
1f4455 shr      rax, 0x1b
1f4459 movzx    edx, al
1f445c mov      byte ptr [r14 + 0x160], dl
1f4463 imul     rdx, r10
1f4467 xor      rdx, rbx
1f446a xor      rdx, r11
1f446d xor      rcx, rdx
1f4470 test     dil, dil
1f4473 lea      rax, [r8 + rdx]
1f4477 cmove    rax, rcx
1f447b mov      qword ptr [r14 + 0xf0], rax
1f4482 cmp      r8d, 0x26dc07
1f4489 jne      0x1401f4ee0
1f448f mov      eax, r13d
1f4492 btr      eax, 0x1f
1f4496 cmp      eax, 2
1f4499 jae      0x1401f44e5
1f449b imul     r9, r15
1f449f lea      rax, [rsi + 1]
1f44a3 mov      qword ptr [r14 + 0x1b8], rax
1f44aa add      r9, rbp
1f44ad mov      qword ptr [r14 + 0x1b0], r9
1f44b4 shr      r9, 0x1b
1f44b8 movzx    eax, r9b
1f44bc mov      byte ptr [r14 + 0x160], al
1f44c3 imul     rax, r10
1f44c7 xor      rax, rbx
1f44ca xor      rax, r11
1f44cd mov      rcx, rax
1f44d0 add      rax, 0x3abaef
1f44d6 xor      rcx, 0x3abaef
1f44dd test     dil, dil
1f44e0 jmp      0x1401f4ed5
1f44e5 mov      rcx, r14
1f44e8 call     0x1401ee070
1f44ed movzx    ecx, byte ptr [r14 + 0x4ad]
1f44f5 movabs   rbx, 0xff51afd7ed558ccd
1f44ff mov      r11, qword ptr [r14 + 0xe0]
1f4506 movabs   r8, 0xc4ceb9fe1a85ec53
1f4510 mov      r10, qword ptr [r14 + 0xd0]
1f4517 movzx    r9d, byte ptr [r14 + 0xe8]
1f451f mov      eax, eax
1f4521 xor      rcx, rax
1f4524 xor      rcx, qword ptr [r14 + 0x11e8]
1f452b mov      rax, rcx
1f452e shr      rax, 0x21
1f4532 xor      rax, rcx
1f4535 imul     rax, rbx
1f4539 mov      rcx, rax
1f453c shr      rcx, 0x21
1f4540 xor      rcx, rax
1f4543 imul     rcx, r8
1f4547 mov      rdx, rcx
1f454a shr      rdx, 0x21
1f454e xor      rdx, rcx
1f4551 mov      qword ptr [r14 + 0x11e8], rdx
1f4558 xor      rdx, qword ptr [r14 + 0x28]
1f455c xor      rdx, qword ptr [r14 + 0x20]
1f4560 mov      rax, rdx
1f4563 shr      rax, 0x21
1f4567 xor      rax, rdx
1f456a imul     rax, rbx
1f456e mov      rcx, rax
1f4571 shr      rcx, 0x21
1f4575 xor      rcx, rax
1f4578 imul     rcx, r8
1f457c mov      rax, rcx
1f457f shr      rax, 0x21
1f4583 xor      rax, rcx
1f4586 mov      qword ptr [r14 + 0x20], rax
1f458a mov      rdx, qword ptr [r14 + 0x138]
1f4591 movzx    ecx, byte ptr [r14 + 0x169]
1f4599 mov      rax, qword ptr [r14 + 0xd8]
1f45a0 imul     rcx, r11
1f45a4 lea      rbx, [rax + rax*4]
1f45a8 mov      rax, rdx
1f45ab add      rbx, rbx
1f45ae xor      rcx, rbx
1f45b1 xor      rcx, r10
1f45b4 xor      rax, rcx
1f45b7 sub      rdx, rcx
1f45ba test     r9b, r9b
1f45bd cmove    rdx, rax
1f45c1 mov      rax, qword ptr [r14 + 0x1b0]
1f45c8 inc      qword ptr [r14 + 0x1b8]
1f45cf mov      rcx, rdx
1f45d2 imul     rax, r15
1f45d6 add      rax, rbp
1f45d9 mov      qword ptr [r14 + 0x1b0], rax
1f45e0 shr      rax, 0x1b
1f45e4 movzx    r8d, al
1f45e8 mov      byte ptr [r14 + 0x169], r8b
1f45ef imul     r8, r11
1f45f3 xor      r8, rbx
1f45f6 xor      r8, r10
1f45f9 xor      rcx, r8
1f45fc test     r9b, r9b
1f45ff lea      rax, [rdx + r8]
1f4603 cmove    rax, rcx
1f4607 mov      rcx, r14
1f460a mov      qword ptr [r14 + 0x138], rax
1f4611 call     0x1401f0910
1f4616 mov      rax, qword ptr [r14 + 0xd8]
1f461d mov      r10, qword ptr [r14 + 0xe0]
1f4624 movzx    ecx, byte ptr [r14 + 0x168]
1f462c mov      rbx, qword ptr [r14 + 0xd0]
1f4633 mov      rdx, qword ptr [r14 + 0x130]
1f463a lea      r11, [rax + rax*8]
1f463e movzx    r9d, byte ptr [r14 + 0xe8]
1f4646 mov      rax, rdx
1f4649 imul     rcx, r10
1f464d xor      rcx, r11
1f4650 xor      rcx, rbx
1f4653 xor      rax, rcx
1f4656 sub      rdx, rcx
1f4659 test     r9b, r9b
1f465c cmove    rdx, rax
1f4660 mov      rax, qword ptr [r14 + 0x1b0]
1f4667 inc      qword ptr [r14 + 0x1b8]
1f466e mov      rcx, rdx
1f4671 imul     rax, r15
1f4675 add      rax, rbp
1f4678 mov      qword ptr [r14 + 0x1b0], rax
1f467f shr      rax, 0x1b
1f4683 movzx    r8d, al
1f4687 mov      byte ptr [r14 + 0x168], r8b
1f468e imul     r8, r10
1f4692 xor      r8, r11
1f4695 xor      r8, rbx
1f4698 xor      rcx, r8
1f469b test     r9b, r9b
1f469e lea      rax, [rdx + r8]
1f46a2 cmove    rax, rcx
1f46a6 mov      rcx, r14
1f46a9 mov      qword ptr [r14 + 0x130], rax
1f46b0 call     0x1401f0910
1f46b5 mov      rcx, r14
1f46b8 call     0x1401ee070
1f46bd cmp      eax, dword ptr [r14 + 0x1d8]
1f46c4 jae      0x1401f46d0
1f46c6 mov      edx, eax
1f46c8 mov      rcx, r14
1f46cb call     0x1401f0910
1f46d0 mov      rsi, qword ptr [r14 + 0xe0]
1f46d7 mov      rbp, qword ptr [r14 + 0xd0]
1f46de mov      r11, qword ptr [r14 + 0x130]
1f46e5 movzx    edi, byte ptr [r14 + 0xe8]
1f46ed mov      rax, r11
1f46f0 movzx    ecx, byte ptr [r14 + 0x168]
1f46f8 mov      rbx, qword ptr [r14 + 0xd8]
1f46ff mov      r8, qword ptr [r14 + 0x1b8]
1f4706 mov      r10, qword ptr [r14 + 0x1b0]
1f470d imul     rcx, rsi
1f4711 lea      r9, [rbx + rbx*8]
1f4715 xor      rcx, r9
1f4718 xor      rcx, rbp
1f471b xor      rax, rcx
1f471e sub      r11, rcx
1f4721 test     dil, dil
1f4724 movabs   rcx, 0x2545f4914f6cdd1d
1f472e cmove    r11, rax
1f4732 imul     r10, r15
1f4736 add      r10, rcx
1f4739 mov      rcx, r11
1f473c mov      rax, r10
1f473f shr      rax, 0x1b
1f4743 movzx    edx, al
1f4746 mov      byte ptr [r14 + 0x168], dl
1f474d imul     rdx, rsi
1f4751 xor      rdx, r9
1f4754 xor      rdx, rbp
1f4757 xor      rcx, rdx
1f475a test     dil, dil
1f475d lea      rax, [r11 + rdx]
1f4761 cmove    rax, rcx
1f4765 mov      rcx, r11
1f4768 mov      qword ptr [r14 + 0x130], rax
1f476f movabs   rax, 0x2545f4914f6cdd1d
1f4779 imul     r10, r15
1f477d add      r10, rax
1f4780 lea      rax, [r8 + 2]
1f4784 mov      qword ptr [r14 + 0x1b8], rax
1f478b mov      r8d, 0x187b
1f4791 mov      qword ptr [r14 + 0x1b0], r10
1f4798 lea      rax, [rbx + rbx*4]
1f479c add      rax, rax
1f479f shr      r10, 0x1b
1f47a3 movzx    edx, r10b
1f47a7 mov      byte ptr [r14 + 0x169], dl
1f47ae imul     rdx, rsi
1f47b2 xor      rdx, rax
1f47b5 xor      rdx, rbp
1f47b8 xor      rcx, rdx
1f47bb test     dil, dil
1f47be lea      rax, [r11 + rdx]
1f47c2 cmove    rax, rcx
1f47c6 mov      rcx, r14
1f47c9 mov      qword ptr [r14 + 0x138], rax
1f47d0 movzx    edx, byte ptr [r14 + 0x4ad]
1f47d8 xor      rdx, qword ptr [r14 + 0x348]
1f47df call     0x1401f1520
1f47e4 mov      r8, qword ptr [r14 + 0x348]
1f47eb movabs   rdi, 0xff51afd7ed558ccd
1f47f5 mov      rax, r8
1f47f8 movabs   rsi, 0xc4ceb9fe1a85ec53
1f4802 xor      rax, qword ptr [r14 + 0x20]
1f4806 mov      rcx, rax
1f4809 shr      rcx, 0x21
1f480d xor      rcx, rax
1f4810 imul     rcx, rdi
1f4814 mov      rax, rcx
1f4817 shr      rax, 0x21
1f481b xor      rax, rcx
1f481e imul     rax, rsi
1f4822 mov      rdx, rax
1f4825 shr      rdx, 0x21
1f4829 xor      edx, eax
1f482b lea      eax, [rdx + 1]
1f482e mov      ecx, eax
1f4830 xor      eax, edx
1f4832 imul     ecx, edx
1f4835 not      ecx
1f4837 and      ecx, eax
1f4839 test     cl, 1
1f483c je       0x1401f48af
1f483e and      r8b, 3
1f4842 cmp      r8b, 1
1f4846 jne      0x1401f48af
1f4848 mov      rax, qword ptr [r14 + 0x1b0]
1f484f movabs   rcx, 0x2545f4914f6cdd1d
1f4859 inc      qword ptr [r14 + 0x1b8]
1f4860 imul     rax, r15
1f4864 add      rax, rcx
1f4867 mov      qword ptr [r14 + 0x1b0], rax
1f486e shr      rax, 0x1b
1f4872 movzx    eax, al
1f4875 mov      byte ptr [r14 + 0x160], al
1f487c imul     rax, qword ptr [r14 + 0xe0]
1f4884 xor      rax, qword ptr [r14 + 0xd8]
1f488b xor      rax, qword ptr [r14 + 0xd0]
1f4892 mov      rcx, rax
1f4895 add      rax, 0x17ed28
1f489b xor      rcx, 0x17ed28
1f48a2 cmp      byte ptr [r14 + 0xe8], 0
1f48aa jmp      0x1401f4ed5
1f48af mov      rcx, r14
1f48b2 call     0x1401ee070
1f48b7 mov      ebx, eax
1f48b9 cmp      eax, dword ptr [r14 + 0x1d8]
1f48c0 jb       0x1401f4929
1f48c2 mov      rax, qword ptr [r14 + 0x1b0]
1f48c9 movabs   rcx, 0x2545f4914f6cdd1d
1f48d3 inc      qword ptr [r14 + 0x1b8]
1f48da imul     rax, r15
1f48de add      rax, rcx
1f48e1 mov      qword ptr [r14 + 0x1b0], rax
1f48e8 shr      rax, 0x1b
1f48ec movzx    eax, al
1f48ef mov      byte ptr [r14 + 0x160], al
1f48f6 imul     rax, qword ptr [r14 + 0xe0]
1f48fe xor      rax, qword ptr [r14 + 0xd8]
1f4905 xor      rax, qword ptr [r14 + 0xd0]
1f490c mov      rcx, rax
1f490f add      rax, 0xfe1ab
1f4915 xor      rcx, 0xfe1ab
1f491c cmp      byte ptr [r14 + 0xe8], 0
1f4924 jmp      0x1401f4ed5
1f4929 mov      edx, ebx
1f492b mov      rcx, r14
1f492e call     0x1401f25b0
1f4933 movsxd   rcx, dword ptr [r14 + 0x11e0]
1f493a movabs   r8, 0xd6e8feb86659fd93
1f4944 mov      rdx, qword ptr [r14 + 0x20]
1f4948 mov      rax, rbx
1f494b imul     rax, r8
1f494f imul     rcx, r15
1f4953 rol      rdx, 0x11
1f4957 xor      rax, rdx
1f495a xor      rcx, qword ptr [r14 + 0x260]
1f4961 xor      rax, rcx
1f4964 mov      rcx, rax
1f4967 shr      rcx, 0x21
1f496b xor      rcx, rax
1f496e imul     rcx, rdi
1f4972 mov      rdx, rcx
1f4975 shr      rdx, 0x21
1f4979 xor      rdx, rcx
1f497c imul     rdx, rsi
1f4980 mov      rax, rdx
1f4983 shr      rax, 0x21
1f4987 xor      rax, rdx
1f498a mov      r10, rax
1f498d shr      r10, 0x1d
1f4991 xor      r10, rax
1f4994 or       r10, 1
1f4998 mov      rax, r10
1f499b mov      qword ptr [r14 + 0x260], r10
1f49a2 and      eax, 0x3ff
1f49a7 cmp      rax, 0x2c5
1f49ad jne      0x1401f49be
1f49af mov      rcx, r14
1f49b2 call     0x1402297e0
1f49b7 mov      r10, qword ptr [r14 + 0x260]
1f49be movzx    eax, r10b
1f49c2 and      al, 0x1f
1f49c4 cmp      al, 0x15
1f49c6 jne      0x1401f4ab3
1f49cc movsxd   rax, dword ptr [r14 + 0x11e0]
1f49d3 xor      rax, 0x5a5a
1f49d9 mov      rcx, qword ptr [r14 + 0x20]
1f49dd imul     rax, r15
1f49e1 rol      rcx, 0x11
1f49e5 xor      rax, r10
1f49e8 xor      rcx, rax
1f49eb movabs   rax, 0x8f70feda99a6026d
1f49f5 xor      rcx, rax
1f49f8 mov      rax, rcx
1f49fb shr      rax, 0x21
1f49ff xor      rax, rcx
1f4a02 imul     rax, rdi
1f4a06 mov      rcx, rax
1f4a09 shr      rcx, 0x21
1f4a0d xor      rcx, rax
1f4a10 imul     rcx, rsi
1f4a14 mov      rax, rcx
1f4a17 shr      rax, 0x21
1f4a1b xor      rax, rcx
1f4a1e mov      r9, rax
1f4a21 shr      r9, 0x1d
1f4a25 xor      r9, rax
1f4a28 or       r9, 1
1f4a2c mov      rax, r9
1f4a2f mov      rcx, r9
1f4a32 shr      rax, 8
1f4a36 and      eax, 3
1f4a39 shr      rcx, 0x28
1f4a3d imul     r8, rax, 0x3e
1f4a41 mov      eax, 0x8421085
1f4a46 mul      ecx
1f4a48 mov      eax, ecx
1f4a4a sub      eax, edx
1f4a4c shr      eax, 1
1f4a4e add      eax, edx
1f4a50 shr      eax, 5
1f4a53 imul     eax, eax, 0x3e
1f4a56 sub      ecx, eax
1f4a58 mov      eax, ecx
1f4a5a add      r8, rax
1f4a5d mov      rax, qword ptr [r14 + 0x4b8]
1f4a64 movsxd   rcx, dword ptr [rax + r8*4]
1f4a68 movsxd   rax, dword ptr [r14 + 0x4c8]
1f4a6f xor      rcx, rax
1f4a72 add      rcx, qword ptr [r14 + 0x4c0]
1f4a79 xor      rcx, r9
1f4a7c mov      rax, rcx
1f4a7f shr      rax, 0x21
1f4a83 xor      rax, rcx
1f4a86 imul     rax, rdi
1f4a8a mov      rcx, rax
1f4a8d shr      rcx, 0x21
1f4a91 xor      rcx, rax
1f4a94 imul     rcx, rsi
1f4a98 mov      rax, rcx
1f4a9b shr      rax, 0x21
1f4a9f xor      rax, rcx
1f4aa2 xor      rax, r10
1f4aa5 inc      qword ptr [r14 + 0x268]
1f4aac mov      qword ptr [r14 + 0x260], rax
1f4ab3 inc      dword ptr [r14 + 0x200]
1f4aba mov      eax, dword ptr [r14 + 0x200]
1f4ac1 cmp      eax, dword ptr [r14 + 0x1fc]
1f4ac8 jb       0x1401f4add
1f4aca mov      rcx, r14
1f4acd mov      dword ptr [r14 + 0x200], 0
1f4ad8 call     0x1401ef7c0
1f4add mov      r8d, ebx
1f4ae0 mov      edx, ebx
1f4ae2 mov      rcx, r14
1f4ae5 call     0x1401f0660
1f4aea inc      qword ptr [r14 + 0x1b8]
1f4af1 movabs   rax, 0x2545f4914f6cdd1d
1f4afb mov      r9, qword ptr [r14 + 0x1b0]
1f4b02 mov      r10, qword ptr [r14 + 0x1b8]
1f4b09 imul     r9, r15
1f4b0d add      r9, rax
1f4b10 mov      qword ptr [r14 + 0x1b0], r9
1f4b17 mov      rax, r9
1f4b1a shr      rax, 0x1b
1f4b1e movzx    edx, al
1f4b21 mov      byte ptr [r14 + 0x168], dl
1f4b28 mov      rdi, qword ptr [r14 + 0xe0]
1f4b2f mov      r11, qword ptr [r14 + 0xd8]
1f4b36 mov      rsi, qword ptr [r14 + 0xd0]
1f4b3d movzx    r15d, byte ptr [r14 + 0xe8]
1f4b45 imul     rdx, rdi
1f4b49 lea      rax, [r11 + r11*8]
1f4b4d xor      rdx, rax
1f4b50 xor      rdx, rsi
1f4b53 mov      rcx, rdx
1f4b56 xor      rcx, rbx
1f4b59 test     r15b, r15b
1f4b5c lea      rax, [rdx + rbx]
1f4b60 cmove    rax, rcx
1f4b64 inc      r10
1f4b67 mov      qword ptr [r14 + 0x130], rax
1f4b6e mov      rcx, qword ptr [r14 + 0x1d0]
1f4b75 mov      rax, qword ptr [r14 + 0x48]
1f4b79 mov      qword ptr [rsp + 0x78], r10
1f4b7e movzx    r8d, byte ptr [rcx + rbx]
1f4b83 xor      r8b, byte ptr [rax + rbx]
1f4b87 inc      ebx
1f4b89 mov      qword ptr [r14 + 0x1b8], r10
1f4b90 movabs   rax, 0x9e3779b97f4a7c15
1f4b9a imul     r9, rax
1f4b9e mov      qword ptr [rsp + 0x60], rbx
1f4ba3 movabs   rax, 0x2545f4914f6cdd1d
1f4bad add      r9, rax
1f4bb0 mov      rax, r9
1f4bb3 shr      rax, 0x1b
1f4bb7 movzx    edx, al
1f4bba lea      rax, [r11 + r11]
1f4bbe mov      byte ptr [r14 + 0x161], dl
1f4bc5 imul     rdx, rdi
1f4bc9 xor      rdx, rax
1f4bcc xor      rdx, rsi
1f4bcf mov      rcx, rdx
1f4bd2 xor      rcx, rbx
1f4bd5 test     r15b, r15b
1f4bd8 lea      rax, [rdx + rbx]
1f4bdc cmove    rax, rcx
1f4be0 mov      qword ptr [r14 + 0xf8], rax
1f4be7 movsxd   rdx, dword ptr [r14 + 0x11e0]
1f4bee mov      r10, qword ptr [r14 + 0x20]
1f4bf2 mov      rcx, rdx
1f4bf5 xor      rcx, qword ptr [r14 + 0x350]
1f4bfc xor      rcx, r10
1f4bff xor      rcx, rbx
1f4c02 movabs   rbx, 0xff51afd7ed558ccd
1f4c0c xor      rcx, qword ptr [r14 + 0x348]
1f4c13 mov      rax, rcx
1f4c16 shr      rax, 0x21
1f4c1a xor      rax, rcx
1f4c1d imul     rax, rbx
1f4c21 mov      rcx, rax
1f4c24 shr      rcx, 0x21
1f4c28 xor      rcx, rax
1f4c2b movabs   rax, 0xc4ceb9fe1a85ec53
1f4c35 imul     rcx, rax
1f4c39 movzx    eax, r8b
1f4c3d mov      rbx, rcx
1f4c40 shr      rbx, 0x21
1f4c44 xor      rbx, rcx
1f4c47 lea      rcx, [rip - 0x1f4c4e]
1f4c4e xor      rax, 0xdd
1f4c54 mov      qword ptr [r14 + 0x28], rbx
1f4c58 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
1f4c60 xor      bpl, 0x63
1f4c64 movabs   r8, 0xff51afd7ed558ccd
1f4c6e inc      edx
1f4c70 mov      dword ptr [r14 + 0x11e0], edx
1f4c77 test     dl, 0x1f
1f4c7a jne      0x1401f4cc0
1f4c7c movsxd   rax, edx
1f4c7f xor      rax, r10
1f4c82 xor      rax, qword ptr [r14 + 0x348]
1f4c89 mov      rcx, rax
1f4c8c shr      rcx, 0x21
1f4c90 xor      rcx, rax
1f4c93 movabs   rax, 0xc4ceb9fe1a85ec53
1f4c9d imul     rcx, r8
1f4ca1 mov      rdx, rcx
1f4ca4 shr      rdx, 0x21
1f4ca8 xor      rdx, rcx
1f4cab imul     rdx, rax
1f4caf mov      rax, rdx
1f4cb2 shr      rax, 0x21
1f4cb6 xor      rax, rdx
1f4cb9 mov      qword ptr [r14 + 0x348], rax
1f4cc0 movzx    edx, bpl
1f4cc4 xor      r10, rdx
1f4cc7 mov      byte ptr [r14 + 0x4ad], bpl
1f4cce xor      r10, qword ptr [rsp + 0x60]
1f4cd3 mov      rax, r10
1f4cd6 shr      rax, 0x21
1f4cda xor      rax, r10
1f4cdd movabs   r10, 0x9e3779b97f4a7c15
1f4ce7 imul     rax, r8
1f4ceb imul     rdx, r10
1f4cef imul     r9, r10
1f4cf3 mov      rcx, rax
1f4cf6 shr      rcx, 0x21
1f4cfa xor      rcx, rax
1f4cfd movabs   rax, 0xc4ceb9fe1a85ec53
1f4d07 imul     rcx, rax
1f4d0b mov      rax, rcx
1f4d0e shr      rax, 0x21
1f4d12 xor      rax, rcx
1f4d15 mov      ecx, dword ptr [r14 + 0x1178]
1f4d1c mov      qword ptr [r14 + 0x20], rax
1f4d20 movabs   rax, 0xd6e8feb86659fd93
1f4d2a imul     rcx, rax
1f4d2e xor      rcx, rdx
1f4d31 xor      rcx, rbx
1f4d34 movabs   rbx, 0x2545f4914f6cdd1d
1f4d3e mov      rax, rcx
1f4d41 add      r9, rbx
1f4d44 shr      rax, 0x21
1f4d48 xor      rax, rcx
1f4d4b imul     rax, r8
1f4d4f mov      rdx, rax
1f4d52 shr      rdx, 0x21
1f4d56 xor      rdx, rax
1f4d59 movabs   rax, 0xc4ceb9fe1a85ec53
1f4d63 imul     rdx, rax
1f4d67 mov      rax, qword ptr [rsp + 0x78]
1f4d6c shr      rdx, 0x21
1f4d70 and      edx, 3
1f4d73 inc      rax
1f4d76 mov      qword ptr [r14 + 0x1b8], rax
1f4d7d cmp      bpl, 0x3e
1f4d81 jae      0x1401f4e19
1f4d87 inc      qword ptr [r14 + 0x11a0]
1f4d8e lea      rax, [rip - 0x1f4d95]
1f4d95 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
1f4d9d mov      qword ptr [r14 + 0x1b0], r9
1f4da4 shr      r9, 0x1b
1f4da8 movzx    eax, r9b
1f4dac mov      byte ptr [r14 + 0x160], al
1f4db3 imul     rax, rdi
1f4db7 mov      ebx, edx
1f4db9 xor      rax, rsi
1f4dbc xor      rax, r11
1f4dbf mov      rcx, rax
1f4dc2 add      rax, r8
1f4dc5 xor      rcx, r8
1f4dc8 movzx    r8d, bpl
1f4dcc test     r15b, r15b
1f4dcf cmove    rax, rcx
1f4dd3 mov      rcx, r14
1f4dd6 mov      qword ptr [r14 + 0xf0], rax
1f4ddd call     0x1401f1f50
1f4de2 mov      eax, eax
1f4de4 lea      edx, [r13 - 1]
1f4de8 imul     rcx, rbx, 0x3e
1f4dec mov      r8, r12
1f4def add      rcx, rax
1f4df2 mov      rax, qword ptr [r14 + 0x4b8]
1f4df9 movsxd   r9, dword ptr [rax + rcx*4]
1f4dfd mov      rcx, r14
1f4e00 movsxd   rax, dword ptr [r14 + 0x4c8]
1f4e07 xor      r9, rax
1f4e0a add      r9, qword ptr [r14 + 0x4c0]
1f4e11 call     r9
1f4e14 jmp      0x1401f4ee0
1f4e19 inc      dword ptr [r14 + 0x11a8]
1f4e20 mov      rax, r9
1f4e23 shr      rax, 0x1b
1f4e27 movzx    ecx, al
1f4e2a lea      rax, [r11*4]
1f4e32 mov      byte ptr [r14 + 0x163], cl
1f4e39 imul     rcx, rdi
1f4e3d imul     r9, r10
1f4e41 xor      rcx, rax
1f4e44 xor      rcx, rsi
1f4e47 mov      qword ptr [r14 + 0x108], rcx
1f4e4e mov      r8, qword ptr [r14 + 0x1b8]
1f4e55 add      r9, rbx
1f4e58 mov      rax, r9
1f4e5b shr      rax, 0x1b
1f4e5f movzx    edx, al
1f4e62 mov      byte ptr [r14 + 0x16a], dl
1f4e69 imul     rax, r11, 0xb
1f4e6d imul     rdx, rdi
1f4e71 xor      rdx, rax
1f4e74 xor      rdx, rsi
1f4e77 mov      rcx, rdx
1f4e7a xor      rcx, 1
1f4e7e test     r15b, r15b
1f4e81 lea      rax, [rdx + 1]
1f4e85 cmove    rax, rcx
1f4e89 mov      qword ptr [r14 + 0x140], rax
1f4e90 lea      rax, [r8 + 2]
1f4e94 mov      qword ptr [r14 + 0x1b8], rax
1f4e9b imul     r9, r10
1f4e9f add      r9, rbx
1f4ea2 mov      qword ptr [r14 + 0x1b0], r9
1f4ea9 shr      r9, 0x1b
1f4ead movzx    eax, r9b
1f4eb1 mov      byte ptr [r14 + 0x160], al
1f4eb8 imul     rax, rdi
1f4ebc xor      rax, rsi
1f4ebf xor      rax, r11
1f4ec2 mov      rcx, rax
1f4ec5 add      rax, 0xfe1ab
1f4ecb xor      rcx, 0xfe1ab
1f4ed2 test     r15b, r15b
1f4ed5 cmove    rax, rcx
1f4ed9 mov      qword ptr [r14 + 0xf0], rax
1f4ee0 mov      rdi, qword ptr [rsp + 0x28]
1f4ee5 mov      rsi, qword ptr [rsp + 0x30]
1f4eea mov      rbp, qword ptr [rsp + 0x38]
1f4eef mov      rbx, qword ptr [rsp + 0x68]
1f4ef4 mov      r15, qword ptr [rsp + 0x20]
1f4ef9 add      rsp, 0x40
1f4efd pop      r14
1f4eff pop      r13
1f4f01 pop      r12
1f4f03 ret      
1f4f04 mov      edx, 0x54485254
1f4f09 mov      rcx, r14
1f4f0c call     0x1401ed830
1f4f11 int3     
1f4f12 mov      edx, 0x43414e59
1f4f17 mov      rcx, r14
1f4f1a call     0x1401ed830
1f4f1f int3     
