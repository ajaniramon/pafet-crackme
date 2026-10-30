03e9a0 mov      qword ptr [rsp + 8], rbx
03e9a5 mov      qword ptr [rsp + 0x10], rdi
03e9aa mov      rdi, qword ptr [r9]
03e9ad lea      r10d, [r8 - 1]
03e9b1 xor      eax, eax
03e9b3 mov      ebx, r8d
03e9b6 mov      r11, rcx
03e9b9 cmp      r10d, 1
03e9bd ja       0x14003ea01
03e9bf mov      word ptr [rcx], 0x8b4c
03e9c4 sub      r9, rcx
03e9c7 add      r9, -7
03e9cb mov      byte ptr [rcx + 2], 0x1d
03e9cf mov      rax, r9
03e9d2 mov      byte ptr [rcx + 3], r9b
03e9d6 shr      rax, 8
03e9da mov      byte ptr [rcx + 4], al
03e9dd mov      rax, r9
03e9e0 shr      rax, 0x10
03e9e4 shr      r9, 0x18
03e9e8 mov      byte ptr [rcx + 5], al
03e9eb mov      eax, 7
03e9f0 mov      byte ptr [rcx + 6], r9b
03e9f4 cmp      ebx, 1
03e9f7 jne      0x14003ea01
03e9f9 mov      r9, rdi
03e9fc xor      r9, rdx
03e9ff jmp      0x14003ea11
03ea01 mov      rcx, rdx
03ea04 mov      r9, rdx
03ea07 sub      rcx, rdi
03ea0a cmp      ebx, 2
03ea0d cmove    r9, rcx
03ea11 mov      ecx, eax
03ea13 mov      r8, r9
03ea16 shr      r8, 8
03ea1a inc      eax
03ea1c mov      byte ptr [rcx + r11], 0x48
03ea21 mov      byte ptr [rax + r11], 0xb8
03ea26 inc      eax
03ea28 lea      ecx, [rax + 1]
03ea2b mov      byte ptr [rax + r11], r9b
03ea2f mov      byte ptr [rcx + r11], r8b
03ea33 lea      ecx, [rax + 2]
03ea36 mov      r8, r9
03ea39 shr      r8, 0x10
03ea3d mov      byte ptr [rcx + r11], r8b
03ea41 lea      ecx, [rax + 3]
03ea44 mov      r8, r9
03ea47 shr      r8, 0x18
03ea4b mov      byte ptr [rcx + r11], r8b
03ea4f lea      ecx, [rax + 4]
03ea52 mov      r8, r9
03ea55 shr      r8, 0x20
03ea59 mov      byte ptr [rcx + r11], r8b
03ea5d lea      ecx, [rax + 5]
03ea60 mov      r8, r9
03ea63 shr      r8, 0x28
03ea67 mov      byte ptr [rcx + r11], r8b
03ea6b lea      ecx, [rax + 6]
03ea6e mov      r8, r9
03ea71 shr      r9, 0x38
03ea75 shr      r8, 0x30
03ea79 mov      byte ptr [rcx + r11], r8b
03ea7d lea      ecx, [rax + 7]
03ea80 add      eax, 8
03ea83 mov      byte ptr [rcx + r11], r9b
03ea87 cmp      ebx, 1
03ea8a jne      0x14003eaa1
03ea8c mov      byte ptr [rax + r11], 0x4c
03ea91 inc      eax
03ea93 mov      byte ptr [rax + r11], 0x31
03ea98 inc      eax
03ea9a mov      byte ptr [rax + r11], 0xd8
03ea9f jmp      0x14003eae8
03eaa1 cmp      ebx, 2
03eaa4 jne      0x14003eabb
03eaa6 mov      byte ptr [rax + r11], 0x4c
03eaab inc      eax
03eaad mov      byte ptr [rax + r11], 1
03eab2 inc      eax
03eab4 mov      byte ptr [rax + r11], 0xd8
03eab9 jmp      0x14003eae8
03eabb cmp      ebx, 3
03eabe jne      0x14003eaea
03eac0 mov      byte ptr [rax + r11], 0x48
03eac5 inc      eax
03eac7 mov      byte ptr [rax + r11], 0xf7
03eacc inc      eax
03eace mov      byte ptr [rax + r11], 0xd0
03ead3 inc      eax
03ead5 mov      byte ptr [rax + r11], 0x48
03eada inc      eax
03eadc mov      byte ptr [rax + r11], 0xf7
03eae1 inc      eax
03eae3 mov      byte ptr [rax + r11], 0xd0
03eae8 inc      eax
03eaea xor      rdi, r11
03eaed mov      byte ptr [rax + r11], 0xff
03eaf2 movabs   rcx, 0x5354554253545542
03eafc inc      eax
03eafe xor      rdi, rcx
03eb01 movabs   rbx, 0xff51afd7ed558ccd
03eb0b mov      rcx, rdi
03eb0e shr      rcx, 0x21
03eb12 xor      rcx, rdi
03eb15 mov      byte ptr [rax + r11], 0xe0
03eb1a imul     rcx, rbx
03eb1e movabs   rdi, 0xc4ceb9fe1a85ec53
03eb28 inc      eax
03eb2a mov      rdx, rcx
03eb2d shr      rdx, 0x21
03eb31 xor      rdx, rcx
03eb34 imul     rdx, rdi
03eb38 mov      r8, rdx
03eb3b shr      r8, 0x21
03eb3f xor      r8, rdx
03eb42 cmp      eax, 0x20
03eb45 jae      0x14003eba3
03eb47 mov      r10d, 0x20
03eb4d mov      edx, eax
03eb4f sub      r10d, eax
03eb52 lea      r9, [rax + r11]
03eb56 nop      word ptr [rax + rax]
03eb60 lea      rax, [rdx + r8]
03eb64 mov      rcx, rax
03eb67 lea      r9, [r9 + 1]
03eb6b shr      rcx, 0x21
03eb6f lea      rdx, [rdx + 1]
03eb73 xor      rcx, rax
03eb76 imul     rcx, rbx
03eb7a mov      rax, rcx
03eb7d shr      rax, 0x21
03eb81 xor      rax, rcx
03eb84 imul     rax, rdi
03eb88 mov      r8, rax
03eb8b shr      r8, 0x21
03eb8f xor      r8, rax
03eb92 mov      rax, r8
03eb95 shr      rax, 0x18
03eb99 mov      byte ptr [r9 - 1], al
03eb9d sub      r10, 1
03eba1 jne      0x14003eb60
03eba3 mov      rbx, qword ptr [rsp + 8]
03eba8 mov      rdi, qword ptr [rsp + 0x10]
03ebad ret      
