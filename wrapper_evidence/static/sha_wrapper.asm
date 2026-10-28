1402831c0 48895c2410 mov qword ptr [rsp + 0x10], rbx
1402831c5 4889742418 mov qword ptr [rsp + 0x18], rsi
1402831ca 48897c2420 mov qword ptr [rsp + 0x20], rdi
1402831cf 55 push rbp
1402831d0 4156 push r14
1402831d2 4157 push r15
1402831d4 488dac2480fdffff lea rbp, [rsp - 0x280]
1402831dc 4881ec80030000 sub rsp, 0x380
1402831e3 488b05369e1800 mov rax, qword ptr [rip + 0x189e36]
1402831ea 4833c4 xor rax, rsp
1402831ed 48898570020000 mov qword ptr [rbp + 0x270], rax
1402831f4 488bda mov rbx, rdx
1402831f7 488bf9 mov rdi, rcx
1402831fa 48894c2430 mov qword ptr [rsp + 0x30], rcx
1402831ff 4533ff xor r15d, r15d
140283202 44897c2420 mov dword ptr [rsp + 0x20], r15d
140283207 33d2 xor edx, edx
140283209 41b8c0000000 mov r8d, 0xc0
14028320f 488d8d50010000 lea rcx, [rbp + 0x150]
140283216 e805351200 call 0x1403a6720
14028321b 44887c2458 mov byte ptr [rsp + 0x58], r15b
140283220 c7853001000067e6096a mov dword ptr [rbp + 0x130], 0x6a09e667
14028322a c7853401000085ae67bb mov dword ptr [rbp + 0x134], 0xbb67ae85
140283234 c7853801000072f36e3c mov dword ptr [rbp + 0x138], 0x3c6ef372
14028323e c7853c0100003af54fa5 mov dword ptr [rbp + 0x13c], 0xa54ff53a
140283248 c785400100007f520e51 mov dword ptr [rbp + 0x140], 0x510e527f
140283252 c785440100008c68059b mov dword ptr [rbp + 0x144], 0x9b05688c
14028325c c78548010000abd9831f mov dword ptr [rbp + 0x148], 0x1f83d9ab
140283266 c7854c01000019cde05b mov dword ptr [rbp + 0x14c], 0x5be0cd19
140283270 488d0521e81600 lea rax, [rip + 0x16e821]
140283277 48894500 mov qword ptr [rbp], rax
14028327b 4c89bd90000000 mov qword ptr [rbp + 0x90], r15
140283282 4c89bdb8000000 mov qword ptr [rbp + 0xb8], r15
140283289 0f57c0 xorps xmm0, xmm0
14028328c 660f7f85c0000000 movdqa xmmword ptr [rbp + 0xc0], xmm0
140283294 c744242002000000 mov dword ptr [rsp + 0x20], 2
14028329c 4c8d35b5a51400 lea r14, [rip + 0x14a5b5]
1402832a3 4c89b588000000 mov qword ptr [rbp + 0x88], r14
1402832aa c7858400000078000000 mov dword ptr [rbp + 0x84], 0x78
1402832b4 4533c0 xor r8d, r8d
1402832b7 488d5508 lea rdx, [rbp + 8]
1402832bb 488d8d88000000 lea rcx, [rbp + 0x88]
1402832c2 e819781100 call 0x14039aae0
1402832c7 90 nop 
1402832c8 488b4500 mov rax, qword ptr [rbp]
1402832cc 48634804 movsxd rcx, dword ptr [rax + 4]
1402832d0 488d3539e51600 lea rsi, [rip + 0x16e539]
1402832d7 4889740d00 mov qword ptr [rbp + rcx], rsi
1402832dc 488b4500 mov rax, qword ptr [rbp]
1402832e0 48634804 movsxd rcx, dword ptr [rax + 4]
1402832e4 8d9178ffffff lea edx, [rcx - 0x88]
1402832ea 89540dfc mov dword ptr [rbp + rcx - 4], edx
1402832ee 488d4d08 lea rcx, [rbp + 8]
1402832f2 e859771100 call 0x14039aa50
1402832f7 488d051ae61600 lea rax, [rip + 0x16e61a]
1402832fe 48894508 mov qword ptr [rbp + 8], rax
140283302 4c897d70 mov qword ptr [rbp + 0x70], r15
140283306 c7457804000000 mov dword ptr [rbp + 0x78], 4
14028330d 488d85f0000000 lea rax, [rbp + 0xf0]
140283314 488945d0 mov qword ptr [rbp - 0x30], rax
140283318 488d442424 lea rax, [rsp + 0x24]
14028331d 4889442460 mov qword ptr [rsp + 0x60], rax
140283322 488d45d8 lea rax, [rbp - 0x28]
140283326 4889442468 mov qword ptr [rsp + 0x68], rax
14028332b 48895c2470 mov qword ptr [rsp + 0x70], rbx
140283330 488d45e0 lea rax, [rbp - 0x20]
140283334 4889442478 mov qword ptr [rsp + 0x78], rax
140283339 488d45e8 lea rax, [rbp - 0x18]
14028333d 48894580 mov qword ptr [rbp - 0x80], rax
140283341 488d45f0 lea rax, [rbp - 0x10]
140283345 48894588 mov qword ptr [rbp - 0x78], rax
140283349 488d8530020000 lea rax, [rbp + 0x230]
140283350 48894590 mov qword ptr [rbp - 0x70], rax
140283354 488d8530010000 lea rax, [rbp + 0x130]
14028335b 48894598 mov qword ptr [rbp - 0x68], rax
14028335f 488d45f8 lea rax, [rbp - 8]
140283363 488945a0 mov qword ptr [rbp - 0x60], rax
140283367 488d442428 lea rax, [rsp + 0x28]
14028336c 488945a8 mov qword ptr [rbp - 0x58], rax
140283370 488d8510020000 lea rax, [rbp + 0x210]
140283377 488945b0 mov qword ptr [rbp - 0x50], rax
14028337b 488d442430 lea rax, [rsp + 0x30]
140283380 488945b8 mov qword ptr [rbp - 0x48], rax
140283384 488d4500 lea rax, [rbp]
140283388 488945c0 mov qword ptr [rbp - 0x40], rax
14028338c 488d442438 lea rax, [rsp + 0x38]
140283391 488945c8 mov qword ptr [rbp - 0x38], rax
140283395 4c89bd28010000 mov qword ptr [rbp + 0x128], r15
14028339c 418d4f78 lea ecx, [r15 + 0x78]
1402833a0 e8db0c1200 call 0x1403a4080
1402833a5 488d0df4e31600 lea rcx, [rip + 0x16e3f4]
1402833ac 488908 mov qword ptr [rax], rcx
1402833af 0f28442460 movaps xmm0, xmmword ptr [rsp + 0x60]
1402833b4 0f114008 movups xmmword ptr [rax + 8], xmm0
1402833b8 0f284c2470 movaps xmm1, xmmword ptr [rsp + 0x70]
1402833bd 0f114818 movups xmmword ptr [rax + 0x18], xmm1
1402833c1 0f284580 movaps xmm0, xmmword ptr [rbp - 0x80]
1402833c5 0f114028 movups xmmword ptr [rax + 0x28], xmm0
1402833c9 0f284d90 movaps xmm1, xmmword ptr [rbp - 0x70]
1402833cd 0f114838 movups xmmword ptr [rax + 0x38], xmm1
1402833d1 0f2845a0 movaps xmm0, xmmword ptr [rbp - 0x60]
1402833d5 0f114048 movups xmmword ptr [rax + 0x48], xmm0
1402833d9 0f284db0 movaps xmm1, xmmword ptr [rbp - 0x50]
1402833dd 0f114858 movups xmmword ptr [rax + 0x58], xmm1
1402833e1 0f2845c0 movaps xmm0, xmmword ptr [rbp - 0x40]
1402833e5 0f114068 movups xmmword ptr [rax + 0x68], xmm0
1402833e9 48898528010000 mov qword ptr [rbp + 0x128], rax
1402833f0 4c8d85f0000000 lea r8, [rbp + 0xf0]
1402833f7 418d5718 lea edx, [r15 + 0x18]
1402833fb 488d8d50010000 lea rcx, [rbp + 0x150]
140283402 e89977ffff call 0x14027aba0
140283407 0f10442438 movups xmm0, xmmword ptr [rsp + 0x38]
14028340c 0f1107 movups xmmword ptr [rdi], xmm0
14028340f 0f104c2448 movups xmm1, xmmword ptr [rsp + 0x48]
140283414 0f114f10 movups xmmword ptr [rdi + 0x10], xmm1
140283418 660f6f05d0e71600 movdqa xmm0, xmmword ptr [rip + 0x16e7d0]
140283420 f30f7f442448 movdqu xmmword ptr [rsp + 0x48], xmm0
140283426 44887c2438 mov byte ptr [rsp + 0x38], r15b
14028342b 488b4500 mov rax, qword ptr [rbp]
14028342f 48634804 movsxd rcx, dword ptr [rax + 4]
140283433 4889740d00 mov qword ptr [rbp + rcx], rsi
140283438 488b4500 mov rax, qword ptr [rbp]
14028343c 48634804 movsxd rcx, dword ptr [rax + 4]
140283440 8d9178ffffff lea edx, [rcx - 0x88]
140283446 89540dfc mov dword ptr [rbp + rcx - 4], edx
14028344a 488d4d08 lea rcx, [rbp + 8]
14028344e e88d471100 call 0x140397be0
140283453 488b4500 mov rax, qword ptr [rbp]
140283457 48634804 movsxd rcx, dword ptr [rax + 4]
14028345b 4c89740d00 mov qword ptr [rbp + rcx], r14
140283460 488b4500 mov rax, qword ptr [rbp]
140283464 48634804 movsxd rcx, dword ptr [rax + 4]
140283468 8d51f0 lea edx, [rcx - 0x10]
14028346b 89540dfc mov dword ptr [rbp + rcx - 4], edx
14028346f 488d05c2a21400 lea rax, [rip + 0x14a2c2]
140283476 48898588000000 mov qword ptr [rbp + 0x88], rax
14028347d 488d8d88000000 lea rcx, [rbp + 0x88]
140283484 e82bfa1100 call 0x1403a2eb4
140283489 90 nop 
14028348a 44387c2458 cmp byte ptr [rsp + 0x58], r15b
14028348f 740a je 0x14028349b
140283491 488d4c2438 lea rcx, [rsp + 0x38]
140283496 e825631100 call 0x1403997c0
14028349b 488bc7 mov rax, rdi
14028349e 488b8d70020000 mov rcx, qword ptr [rbp + 0x270]
1402834a5 4833cc xor rcx, rsp
1402834a8 e813091200 call 0x1403a3dc0
1402834ad 4c8d9c2480030000 lea r11, [rsp + 0x380]
1402834b5 498b5b28 mov rbx, qword ptr [r11 + 0x28]
1402834b9 498b7330 mov rsi, qword ptr [r11 + 0x30]
1402834bd 498b7b38 mov rdi, qword ptr [r11 + 0x38]
1402834c1 498be3 mov rsp, r11
1402834c4 415f pop r15
1402834c6 415e pop r14
1402834c8 5d pop rbp
1402834c9 c3 ret 
