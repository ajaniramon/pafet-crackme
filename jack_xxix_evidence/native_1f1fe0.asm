1f1fe0 mov      rax, rsp
1f1fe3 mov      dword ptr [rax + 0x10], edx
1f1fe6 push     rdi
1f1fe7 push     r14
1f1fe9 sub      rsp, 0x58
1f1fed mov      edi, r8d
1f1ff0 mov      r14, rcx
1f1ff3 cmp      r8d, 0x67
1f1ff7 jae      0x1401f25a3
1f1ffd mov      qword ptr [rax + 8], rbx
1f2001 mov      qword ptr [rax - 0x18], rbp
1f2005 mov      qword ptr [rax - 0x20], rsi
1f2009 xor      esi, esi
1f200b mov      qword ptr [rax - 0x28], r12
1f200f mov      qword ptr [rax - 0x30], r13
1f2013 mov      qword ptr [rax - 0x38], r15
1f2017 test     r8d, r8d
1f201a je       0x1401f203c
1f201c lea      eax, [rdi - 1]
1f201f mov      ebx, esi
1f2021 mov      ecx, eax
1f2023 call     0x1401ecfc0
1f2028 cmp      eax, 0x66
1f202b jb       0x1401f2038
1f202d inc      ebx
1f202f cmp      ebx, 0x40
1f2032 jl       0x1401f2021
1f2034 mov      eax, edi
1f2036 jmp      0x1401f203e
1f2038 inc      eax
1f203a jmp      0x1401f203e
1f203c mov      eax, esi
1f203e mov      r15d, dword ptr [r14 + 0x1d8]
1f2045 mov      ebp, r15d
1f2048 imul     eax, eax, 0x1a
1f204b cmp      eax, r15d
1f204e cmovbe   ebp, eax
1f2051 lea      ecx, [rax + 0x1a]
1f2054 mov      dword ptr [rsp + 0x78], ebp
1f2058 cmp      ecx, r15d
1f205b mov      r8d, ebp
1f205e cmovbe   r15d, ecx
1f2062 cmp      ebp, r15d
1f2065 jae      0x1401f208c
1f2067 lea      r9, [rip + 0x1f7ba2]
1f206e add      r9, r8
1f2071 movzx    eax, byte ptr [r9]
1f2075 lea      r9, [r9 + 1]
1f2079 mov      rcx, qword ptr [r14 + 0x1d0]
1f2080 mov      byte ptr [r8 + rcx], al
1f2084 inc      r8d
1f2087 cmp      r8d, r15d
1f208a jb       0x1401f2071
1f208c mov      rax, rsi
1f208f mov      ecx, 3
1f2094 mov      qword ptr [rsp + 0x88], rax
1f209c movabs   rbx, 0x9e3779b97f4a7c15
1f20a6 mov      qword ptr [rsp + 0x20], rcx
1f20ab movabs   rdx, 0x2545f4914f6cdd1d
1f20b5 movabs   r8, 0xd6e8feb86659fd93
1f20bf movabs   r9, 0xff51afd7ed558ccd
1f20c9 movabs   r10, 0xc4ceb9fe1a85ec53
1f20d3 mov      r13d, ebp
1f20d6 cmp      ebp, r15d
1f20d9 jae      0x1401f221d
1f20df mov      rbp, qword ptr [rsp + 0x88]
1f20e7 mov      r12, rdi
1f20ea imul     r12, r8
1f20ee nop      
1f20f0 test     edi, edi
1f20f2 je       0x1401f2157
1f20f4 lea      eax, [rdi - 1]
1f20f7 mov      ebx, esi
1f20f9 nop      dword ptr [rax]
1f2100 mov      ecx, eax
1f2102 call     0x1401ecfc0
1f2107 cmp      eax, 0x66
1f210a jb       0x1401f2135
1f210c inc      ebx
1f210e cmp      ebx, 0x40
1f2111 jl       0x1401f2100
1f2113 mov      eax, edi
1f2115 movabs   rbx, 0x9e3779b97f4a7c15
1f211f movabs   r9, 0xff51afd7ed558ccd
1f2129 movabs   r10, 0xc4ceb9fe1a85ec53
1f2133 jmp      0x1401f2159
1f2135 inc      eax
1f2137 movabs   rbx, 0x9e3779b97f4a7c15
1f2141 movabs   r9, 0xff51afd7ed558ccd
1f214b movabs   r10, 0xc4ceb9fe1a85ec53
1f2155 jmp      0x1401f2159
1f2157 mov      eax, esi
1f2159 imul     ecx, eax, 0x1a
1f215c movabs   rax, 0xb05b1cd7b48a0a20
1f2166 mov      edx, r13d
1f2169 imul     rdx, rbx
1f216d imul     rcx, rbx
1f2171 mov      r8d, r13d
1f2174 inc      r13d
1f2177 xor      rcx, r12
1f217a xor      rcx, rax
1f217d mov      rax, rcx
1f2180 shr      rax, 0x21
1f2184 xor      rax, rcx
1f2187 imul     rax, r9
1f218b mov      rcx, rax
1f218e shr      rcx, 0x21
1f2192 xor      rcx, rax
1f2195 imul     rcx, r10
1f2199 mov      rax, rcx
1f219c shr      rax, 0x21
1f21a0 xor      rdx, rax
1f21a3 mov      eax, ecx
1f21a5 mov      rcx, qword ptr [r14 + 0x1d0]
1f21ac xor      rdx, rax
1f21af xor      rdx, rbp
1f21b2 movabs   rax, 0xb05b1cd7a6870259
1f21bc xor      rdx, r12
1f21bf xor      rdx, rax
1f21c2 mov      rax, rdx
1f21c5 shr      rax, 0x21
1f21c9 xor      rax, rdx
1f21cc imul     rax, r9
1f21d0 mov      rdx, rax
1f21d3 shr      rdx, 0x21
1f21d7 xor      rdx, rax
1f21da imul     rdx, r10
1f21de mov      rax, rdx
1f21e1 shr      rdx, 0x18
1f21e5 shr      rax, 0x39
1f21e9 xor      al, dl
1f21eb xor      byte ptr [rcx + r8], al
1f21ef cmp      r13d, r15d
1f21f2 jb       0x1401f20f0
1f21f8 mov      ebp, dword ptr [rsp + 0x78]
1f21fc movabs   rdx, 0x2545f4914f6cdd1d
1f2206 mov      rax, qword ptr [rsp + 0x88]
1f220e movabs   r8, 0xd6e8feb86659fd93
1f2218 mov      rcx, qword ptr [rsp + 0x20]
1f221d add      rax, rdx
1f2220 sub      rcx, 1
1f2224 mov      qword ptr [rsp + 0x88], rax
1f222c mov      qword ptr [rsp + 0x20], rcx
1f2231 jne      0x1401f20d3
1f2237 movabs   r12, 0xff51afd7ed558ccd
1f2241 mov      rax, rdi
1f2244 imul     rax, rbx
1f2248 movabs   r13, 0xc4ceb9fe1a85ec53
1f2252 mov      r9, rbx
1f2255 mov      rcx, rax
1f2258 mov      r10d, ebp
1f225b shr      rcx, 0x21
1f225f xor      rcx, rax
1f2262 xor      rcx, 0x424c4b31
1f2269 imul     rcx, r12
1f226d mov      rax, rcx
1f2270 shr      rax, 0x21
1f2274 xor      rax, rcx
1f2277 movabs   rcx, 0xb05b1cd7b58e005b
1f2281 imul     rax, r13
1f2285 mov      r11, rax
1f2288 shr      r11, 0x21
1f228c xor      r11, rax
1f228f mov      rax, r11
1f2292 xor      rax, rcx
1f2295 mov      rcx, rax
1f2298 shr      rcx, 0x21
1f229c xor      rcx, rax
1f229f imul     rcx, r12
1f22a3 mov      rdx, rcx
1f22a6 shr      rdx, 0x21
1f22aa xor      rdx, rcx
1f22ad imul     rdx, r13
1f22b1 mov      rax, rdx
1f22b4 shr      rax, 0x21
1f22b8 xor      rax, rdx
1f22bb cmovne   r9, rax
1f22bf cmp      ebp, r15d
1f22c2 jae      0x1401f24af
1f22c8 movabs   rax, 0xb05b1cd7f6c64112
1f22d2 movabs   rbx, 0xf2fd861dbf7f1ad1
1f22dc xor      r11, rax
1f22df movabs   r13, 0x845d18de2a3561b1
1f22e9 movabs   r12, 0x6024aef629aa0053
1f22f3 nop      dword ptr [rax]
1f22f7 nop      word ptr [rax + rax]
1f2300 mov      ecx, r10d
1f2303 mov      r8d, r10d
1f2306 add      r8, qword ptr [r14 + 0x1d0]
1f230d sub      ecx, ebp
1f230f imul     rcx, rbx
1f2313 inc      r10d
1f2316 add      rcx, r11
1f2319 xor      rcx, r13
1f231c imul     rax, rcx, 0x2001
1f2323 mov      rcx, rax
1f2326 shr      rcx, 7
1f232a xor      rcx, rax
1f232d lea      rax, [rcx + rcx*8]
1f2331 mov      rdx, rax
1f2334 shr      rdx, 0x11
1f2338 xor      rdx, rax
1f233b add      rdx, r12
1f233e mov      rcx, rdx
1f2341 mov      rax, rdx
1f2344 shr      rax, 0x18
1f2348 shr      rcx, 0x28
1f234c xor      cl, al
1f234e mov      rax, r9
1f2351 shr      rax, 0x1d
1f2355 xor      cl, al
1f2357 xor      cl, dl
1f2359 xor      cl, byte ptr [r8]
1f235c xor      cl, 0x7d
1f235f movzx    eax, cl
1f2362 xor      rax, r9
1f2365 mov      byte ptr [r8], cl
1f2368 imul     rax, rbx
1f236c add      rax, r12
1f236f mov      r9, rax
1f2372 shr      r9, 0x1f
1f2376 xor      r9, rax
1f2379 cmp      r10d, r15d
1f237c jb       0x1401f2300
1f237e mov      r11d, r15d
1f2381 mov      r8d, ebp
1f2384 sub      r11d, ebp
1f2387 cmp      r11d, 0x40
1f238b jb       0x1401f2472
1f2391 mov      r10, qword ptr [r14 + 0x1d0]
1f2398 lea      eax, [r15 - 1]
1f239c mov      r9, qword ptr [r14 + 0x48]
1f23a0 lea      r12, [r14 + 0x48]
1f23a4 mov      edx, ebp
1f23a6 lea      rbx, [r10 + rax]
1f23aa add      rax, r9
1f23ad lea      r13, [r10 + rdx]
1f23b1 add      rdx, r9
1f23b4 cmp      r13, rax
1f23b7 ja       0x1401f23c2
1f23b9 cmp      rbx, rdx
1f23bc jae      0x1401f2472
1f23c2 cmp      r13, r12
1f23c5 ja       0x1401f23d3
1f23c7 mov      r8d, ebp
1f23ca cmp      rbx, r12
1f23cd jae      0x1401f2472
1f23d3 lea      rax, [r14 + 0x1d0]
1f23da cmp      r13, rax
1f23dd ja       0x1401f23eb
1f23df mov      r8d, ebp
1f23e2 cmp      rbx, rax
1f23e5 jae      0x1401f2472
1f23eb and      r11d, 0x3f
1f23ef mov      ebx, r15d
1f23f2 sub      ebx, r11d
1f23f5 lea      edx, [rbp + 0x20]
1f23f8 mov      r8d, ebp
1f23fb nop      dword ptr [rax + rax]
1f2400 mov      eax, r8d
1f2403 add      r8d, 0x40
1f2407 movdqu   xmm0, xmmword ptr [r10 + rax]
1f240d movdqu   xmm1, xmmword ptr [r9 + rax]
1f2413 pxor     xmm1, xmm0
1f2417 movdqu   xmmword ptr [r10 + rax], xmm1
1f241d lea      eax, [rdx - 0x10]
1f2420 movdqu   xmm0, xmmword ptr [rax + r10]
1f2426 movdqu   xmm1, xmmword ptr [rax + r9]
1f242c pxor     xmm1, xmm0
1f2430 movdqu   xmmword ptr [rax + r10], xmm1
1f2436 lea      eax, [rdx + 0x10]
1f2439 movdqu   xmm0, xmmword ptr [rdx + r10]
1f243f movdqu   xmm1, xmmword ptr [rdx + r9]
1f2445 pxor     xmm1, xmm0
1f2449 movdqu   xmmword ptr [rdx + r10], xmm1
1f244f lea      edx, [rdx + 0x40]
1f2452 movdqu   xmm0, xmmword ptr [rax + r10]
1f2458 movdqu   xmm1, xmmword ptr [rax + r9]
1f245e pxor     xmm1, xmm0
1f2462 movdqu   xmmword ptr [rax + r10], xmm1
1f2468 cmp      r8d, ebx
1f246b jb       0x1401f2400
1f246d cmp      r8d, r15d
1f2470 jae      0x1401f2491
1f2472 mov      rdx, qword ptr [r14 + 0x1d0]
1f2479 mov      rax, qword ptr [r14 + 0x48]
1f247d mov      ecx, r8d
1f2480 inc      r8d
1f2483 add      rdx, rcx
1f2486 movzx    ecx, byte ptr [rax + rcx]
1f248a xor      byte ptr [rdx], cl
1f248c cmp      r8d, r15d
1f248f jb       0x1401f2472
1f2491 movabs   r13, 0xc4ceb9fe1a85ec53
1f249b movabs   r12, 0xff51afd7ed558ccd
1f24a5 movabs   rbx, 0x9e3779b97f4a7c15
1f24af cmp      dword ptr [r14 + 0xaf4], 0
1f24b7 je       0x1401f2541
1f24bd cmp      ebp, r15d
1f24c0 jae      0x1401f2541
1f24c2 movabs   r9, 0xb05b1cd7a583065f
1f24cc nop      dword ptr [rax]
1f24d0 mov      ecx, dword ptr [r14 + 0xaf0]
1f24d7 xor      edx, edx
1f24d9 mov      eax, ebp
1f24db div      dword ptr [r14 + 0xaf4]
1f24e2 cmp      eax, ecx
1f24e4 je       0x1401f253a
1f24e6 inc      ecx
1f24e8 cmp      eax, ecx
1f24ea je       0x1401f253a
1f24ec mov      rdx, qword ptr [r14 + 0x1d0]
1f24f3 imul     rax, rbx
1f24f7 xor      rax, r9
1f24fa mov      rcx, rax
1f24fd shr      rcx, 0x21
1f2501 xor      rcx, rax
1f2504 imul     rcx, r12
1f2508 mov      rax, rcx
1f250b shr      rax, 0x21
1f250f xor      rax, rcx
1f2512 mov      ecx, ebp
1f2514 imul     rax, r13
1f2518 add      rdx, rcx
1f251b mov      r8, rax
1f251e shr      r8, 0x21
1f2522 xor      r8, rax
1f2525 mov      rcx, r8
1f2528 mov      rax, r8
1f252b shr      rcx, 0x10
1f252f shr      rax, 8
1f2533 xor      cl, al
1f2535 xor      cl, r8b
1f2538 xor      byte ptr [rdx], cl
1f253a inc      ebp
1f253c cmp      ebp, r15d
1f253f jb       0x1401f24d0
1f2541 mov      rbx, qword ptr [r14 + 0xb50]
1f2548 mov      r15, qword ptr [rsp + 0x30]
1f254d mov      r13, qword ptr [rsp + 0x38]
1f2552 mov      r12, qword ptr [rsp + 0x40]
1f2557 mov      rbp, qword ptr [rsp + 0x50]
1f255c test     rbx, rbx
1f255f je       0x1401f258a
1f2561 test     edi, edi
1f2563 je       0x1401f2582
1f2565 lea      eax, [rdi - 1]
1f2568 mov      ecx, eax
1f256a call     0x1401ecfc0
1f256f cmp      eax, 0x66
1f2572 jb       0x1401f257d
1f2574 inc      esi
1f2576 cmp      esi, 0x40
1f2579 jl       0x1401f2568
1f257b jmp      0x1401f2584
1f257d lea      edi, [rax + 1]
1f2580 jmp      0x1401f2584
1f2582 mov      edi, esi
1f2584 mov      eax, edi
1f2586 mov      byte ptr [rax + rbx], 1
1f258a inc      qword ptr [r14 + 0xb20]
1f2591 mov      rsi, qword ptr [rsp + 0x48]
1f2596 mov      rbx, qword ptr [rsp + 0x70]
1f259b add      rsp, 0x58
1f259f pop      r14
1f25a1 pop      rdi
1f25a2 ret      
1f25a3 mov      edx, 0x504b4f50
1f25a8 call     0x1401ed830
1f25ad int3     
