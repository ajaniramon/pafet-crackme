1ef230 push     rbp
1ef232 push     r14
1ef234 push     r15
1ef236 sub      rsp, 0x20
1ef23a mov      rax, qword ptr gs:[0x58]
1ef243 mov      r15, rcx
1ef246 mov      ebp, 0x610
1ef24b add      rbp, qword ptr [rax]
1ef24e mov      r14d, dword ptr [rbp + 0x524]
1ef255 cmp      r14d, 0x20
1ef259 jae      0x1401ef36e
1ef25f mov      qword ptr [rsp + 0x40], rbx
1ef264 mov      ecx, r14d
1ef267 mov      ebx, edx
1ef269 mov      qword ptr [rsp + 0x48], rsi
1ef26e mov      qword ptr [rsp + 0x50], rdi
1ef273 mov      edi, r8d
1ef276 mov      r8d, edx
1ef279 xor      edx, edx
1ef27b mov      r11d, r9d
1ef27e call     0x1401eebf0
1ef283 mov      edx, 1
1ef288 mov      ecx, r14d
1ef28b mov      r8d, edi
1ef28e call     0x1401eebf0
1ef293 mov      edx, 2
1ef298 mov      ecx, r14d
1ef29b mov      r8d, r11d
1ef29e call     0x1401eebf0
1ef2a3 movabs   rax, 0x9e3779b97f4a7c15
1ef2ad lea      esi, [r14 + 1]
1ef2b1 movabs   rdx, 0xbf58476d1ce4e5b9
1ef2bb mov      ecx, esi
1ef2bd imul     rcx, rax
1ef2c1 lea      rax, [r11 + 1]
1ef2c5 imul     rax, rdx
1ef2c9 xor      rcx, rax
1ef2cc movabs   rax, 0xd6e8feb86659fd93
1ef2d6 imul     rbx, rax
1ef2da movabs   rax, 0xc2b2ae3d27d4eb4f
1ef2e4 xor      rcx, rbx
1ef2e7 imul     rdi, rax
1ef2eb movabs   rax, 0xff51afd7ed558ccd
1ef2f5 xor      rcx, rdi
1ef2f8 xor      rcx, qword ptr [r15 + 0x350]
1ef2ff xor      rcx, qword ptr [r15 + 0x340]
1ef306 xor      rcx, 0x43465354
1ef30d mov      rdx, rcx
1ef310 shr      rdx, 0x21
1ef314 xor      rdx, rcx
1ef317 movabs   rcx, 0xc4ceb9fe1a85ec53
1ef321 imul     rdx, rax
1ef325 mov      r9, rdx
1ef328 shr      r9, 0x21
1ef32c xor      r9, rdx
1ef32f mov      edx, 3
1ef334 imul     r9, rcx
1ef338 mov      ecx, r14d
1ef33b mov      r8, r9
1ef33e shr      r8, 0x21
1ef342 xor      r8, r9
1ef345 call     0x1401eebf0
1ef34a mov      rdi, qword ptr [rsp + 0x50]
1ef34f mov      eax, 1
1ef354 mov      rbx, qword ptr [rsp + 0x40]
1ef359 mov      dword ptr [rbp + 0x524], esi
1ef35f mov      rsi, qword ptr [rsp + 0x48]
1ef364 add      rsp, 0x20
1ef368 pop      r15
1ef36a pop      r14
1ef36c pop      rbp
1ef36d ret      
1ef36e mov      edx, 0x43465056
1ef373 call     0x1401ed830
1ef378 int3     
