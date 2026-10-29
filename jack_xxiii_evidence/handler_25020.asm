140025020 mov qword ptr [rsp + 0x18], r8
140025025 mov dword ptr [rsp + 0x10], edx
140025029 push rbx
14002502a push rsi
14002502b push rdi
14002502c push r12
14002502e push r13
140025030 push r15
140025032 sub rsp, 0x38
140025036 movsxd rax, dword ptr [rcx + 0x154]
14002503d mov rdi, rcx
140025040 mov r15d, edx
140025043 movabs rcx, 0x34a5a4cbb437c294
14002504d imul rax, rcx
140025051 movabs rcx, 0x96fc2e0035e946ab
14002505b mov rsi, r8
14002505e xor rax, qword ptr [rdi + 0xe0]
140025065 mov qword ptr [rsp + 0x70], rax
14002506a mov rax, qword ptr [rsp + 0x70]
14002506f movsxd rax, dword ptr [rdi + 0x154]
140025076 imul rax, rcx
14002507a movabs rcx, 0x7034b05eb6a2cabe
140025084 xor rax, qword ptr [rdi + 0xe0]
14002508b mov qword ptr [rsp + 0x70], rax
140025090 mov rax, qword ptr [rsp + 0x70]
140025095 movsxd rax, dword ptr [rdi + 0x154]
14002509c imul rax, rcx
1400250a0 movabs rcx, 0x43729a8edf32e238
1400250aa xor rax, qword ptr [rdi + 0xe0]
1400250b1 mov qword ptr [rsp + 0x70], rax
1400250b6 mov rax, qword ptr [rsp + 0x70]
1400250bb mov rax, qword ptr [rdi + 0x118]
1400250c2 xor rax, rcx
1400250c5 mov rcx, rax
1400250c8 shr rcx, 0x21
1400250cc xor rcx, rax
1400250cf movabs rax, 0xff51afd7ed558ccd
1400250d9 imul rcx, rax
1400250dd movabs rax, 0xc4ceb9fe1a85ec53
1400250e7 mov rdx, rcx
1400250ea shr rdx, 0x21
1400250ee xor rdx, rcx
1400250f1 mov rcx, rdi
1400250f4 imul rdx, rax
1400250f8 mov rax, rdx
1400250fb shr rax, 0x21
1400250ff xor rdx, rax
140025102 mov rax, qword ptr [rdi + 0x118]
140025109 shr rax, 7
14002510d add rax, rdx
140025110 mov qword ptr [rdi + 0x118], rax
140025117 call 0x140007040
14002511c mov rbx, qword ptr [rdi + 0x210]
140025123 mov r11d, eax
140025126 movzx ecx, byte ptr [rdi + 0x279]
14002512d mov rax, rbx
140025130 mov r9, qword ptr [rdi + 0x1f8]
140025137 movabs r12, 0x9e3779b97f4a7c15
140025141 mov r8, qword ptr [rdi + 0x1e8]
140025148 movabs r13, 0x2545f4914f6cdd1d
140025152 movzx edx, byte ptr [rdi + 0x200]
140025159 mov r10, qword ptr [rdi + 0x1f0]
140025160 imul rcx, r9
140025164 add r10, r10
140025167 xor rcx, r8
14002516a xor rcx, r10
14002516d xor rax, rcx
140025170 sub rbx, rcx
140025173 test dl, dl
140025175 cmove rbx, rax
140025179 mov rax, qword ptr [rdi + 0x28]
14002517d inc qword ptr [rdi + 0x30]
140025181 mov rcx, rbx
140025184 imul rax, r12
140025188 add rax, r13
14002518b mov qword ptr [rdi + 0x28], rax
14002518f shr rax, 0x1b
140025193 movzx eax, al
140025196 mov byte ptr [rdi + 0x279], al
14002519c imul rax, r9
1400251a0 xor rax, r8
1400251a3 xor rax, r10
1400251a6 xor rcx, rax
1400251a9 add rax, rbx
1400251ac test dl, dl
1400251ae cmove rax, rcx
1400251b2 mov ecx, r11d
1400251b5 mov qword ptr [rdi + 0x210], rax
1400251bc call 0x140002330
1400251c1 mov dword ptr [rsp + 0x28], ebx
1400251c5 xor r9d, r9d
1400251c8 mov dword ptr [rsp + 0x20], eax
1400251cc xor edx, edx
1400251ce mov rcx, rdi
1400251d1 lea r8d, [r9 + 1]
1400251d5 call 0x140006300
1400251da mov rdx, rax
1400251dd mov rcx, rdi
1400251e0 call 0x140006010
1400251e5 mov rax, qword ptr [rdi + 0x118]
1400251ec test r15d, r15d
1400251ef jns 0x140025e89
1400251f5 cmp qword ptr [rdi + 0x1170], rsi
1400251fc jne 0x140025e97
140025202 movsxd rax, dword ptr [rdi + 0x154]
140025209 movabs rcx, 0x610233aa5a18f505
140025213 imul rax, rcx
140025217 mov qword ptr [rsp + 0x88], rbp
14002521f xor rax, qword ptr [rdi + 0xe0]
140025226 mov qword ptr [rsp + 0x70], rax
14002522b mov rax, qword ptr [rsp + 0x70]
140025230 mov r8, qword ptr [rdi + 0x258]
140025237 movzx ecx, byte ptr [rdi + 0x282]
14002523e mov rax, r8
140025241 mov r11, qword ptr [rdi + 0x1f8]
140025248 mov rbx, qword ptr [rdi + 0x1e8]
14002524f movzx esi, byte ptr [rdi + 0x200]
140025256 mov r10, qword ptr [rdi + 0x28]
14002525a mov rbp, qword ptr [rdi + 0x30]
14002525e imul rcx, r11
140025262 mov qword ptr [rsp + 0x30], r14
140025267 mov r14, qword ptr [rdi + 0x1f0]
14002526e imul r9, r14, 0xb
140025272 xor rcx, r9
140025275 xor rcx, rbx
140025278 xor rax, rcx
14002527b sub r8, rcx
14002527e test sil, sil
140025281 cmove r8, rax
140025285 inc rbp
140025288 imul r10, r12
14002528c mov qword ptr [rdi + 0x30], rbp
140025290 mov rcx, r8
140025293 add r10, r13
140025296 mov qword ptr [rdi + 0x28], r10
14002529a mov rax, r10
14002529d shr rax, 0x1b
1400252a1 movzx edx, al
1400252a4 mov byte ptr [rdi + 0x282], dl
1400252aa imul rdx, r11
1400252ae xor rdx, r9
1400252b1 xor rdx, rbx
1400252b4 xor rcx, rdx
1400252b7 test sil, sil
1400252ba lea rax, [r8 + rdx]
1400252be cmove rax, rcx
1400252c2 mov qword ptr [rdi + 0x258], rax
1400252c9 test r8d, r8d
1400252cc jne 0x140025e6e
1400252d2 cmp dword ptr [rdi + 0x5b8], r8d
1400252d9 jne 0x140025e6e
1400252df mov r8, qword ptr [rdi + 0x208]
1400252e6 movzx ecx, byte ptr [rdi + 0x278]
1400252ed mov rax, r8
1400252f0 imul rcx, r11
1400252f4 xor rcx, rbx
1400252f7 xor rcx, r14
1400252fa xor rax, rcx
1400252fd sub r8, rcx
140025300 test sil, sil
140025303 cmove r8, rax
140025307 lea rax, [rbp + 1]
14002530b mov qword ptr [rdi + 0x30], rax
14002530f mov rcx, r8
140025312 imul r10, r12
140025316 add r10, r13
140025319 mov qword ptr [rdi + 0x28], r10
14002531d mov rax, r10
140025320 shr rax, 0x1b
140025324 movzx edx, al
140025327 mov byte ptr [rdi + 0x278], dl
14002532d imul rdx, r11
140025331 xor rdx, rbx
140025334 xor rdx, r14
140025337 xor rcx, rdx
14002533a test sil, sil
14002533d lea rax, [r8 + rdx]
140025341 cmove rax, rcx
140025345 mov qword ptr [rdi + 0x208], rax
14002534c cmp r8d, 0x149e67
140025353 jne 0x140025e6e
140025359 mov eax, r15d
14002535c btr eax, 0x1f
140025360 cmp eax, 2
140025363 jae 0x1400253a8
140025365 imul r10, r12
140025369 lea rax, [rbp + 2]
14002536d mov qword ptr [rdi + 0x30], rax
140025371 add r10, r13
140025374 mov qword ptr [rdi + 0x28], r10
140025378 shr r10, 0x1b
14002537c movzx eax, r10b
140025380 mov byte ptr [rdi + 0x278], al
140025386 imul rax, r11
14002538a xor rax, rbx
14002538d xor rax, r14
140025390 mov rcx, rax
140025393 add rax, 0x335f94
140025399 xor rcx, 0x335f94
1400253a0 test sil, sil
1400253a3 jmp 0x140025e63
1400253a8 mov r9, qword ptr [rdi + 0x210]
1400253af lea r8, [r14 + r14]
1400253b3 movzx ecx, byte ptr [rdi + 0x279]
1400253ba movabs r15, 0xff51afd7ed558ccd
1400253c4 imul rcx, r11
1400253c8 xor rcx, rbx
1400253cb xor rcx, r8
1400253ce mov rax, rcx
1400253d1 xor rax, r9
1400253d4 sub r9, rcx
1400253d7 test sil, sil
1400253da cmove r9, rax
1400253de imul r10, r12
1400253e2 add r10, r13
1400253e5 mov rax, r10
1400253e8 shr rax, 0x1b
1400253ec movzx edx, al
1400253ef mov byte ptr [rdi + 0x279], dl
1400253f5 imul rdx, r11
1400253f9 xor rdx, rbx
1400253fc xor rdx, r8
1400253ff movabs r8, 0xc4ceb9fe1a85ec53
140025409 mov rcx, rdx
14002540c xor rcx, r9
14002540f test sil, sil
140025412 lea rax, [rdx + r9]
140025416 cmove rax, rcx
14002541a mov ecx, r9d
14002541d mov qword ptr [rdi + 0x210], rax
140025424 movzx eax, byte ptr [rdi + 0xf09]
14002542b xor rcx, rax
14002542e xor rcx, qword ptr [rdi + 0x158]
140025435 mov rax, rcx
140025438 shr rax, 0x21
14002543c xor rax, rcx
14002543f imul rax, r15
140025443 mov rcx, rax
140025446 shr rcx, 0x21
14002544a xor rcx, rax
14002544d imul rcx, r8
140025451 mov rdx, rcx
140025454 shr rdx, 0x21
140025458 xor rdx, rcx
14002545b mov qword ptr [rdi + 0x158], rdx
140025462 xor rdx, qword ptr [rdi + 0xe0]
140025469 xor rdx, qword ptr [rdi + 0xd8]
140025470 mov rax, rdx
140025473 shr rax, 0x21
140025477 xor rax, rdx
14002547a imul rax, r15
14002547e mov rcx, rax
140025481 shr rcx, 0x21
140025485 xor rcx, rax
140025488 imul rcx, r8
14002548c lea r8, [r14 + r14*4]
140025490 mov rax, rcx
140025493 add r8, r8
140025496 shr rax, 0x21
14002549a xor rax, rcx
14002549d mov qword ptr [rdi + 0xd8], rax
1400254a4 mov rdx, qword ptr [rdi + 0x250]
1400254ab movzx ecx, byte ptr [rdi + 0x281]
1400254b2 mov rax, rdx
1400254b5 imul rcx, r11
1400254b9 xor rcx, rbx
1400254bc xor rcx, r8
1400254bf xor rax, rcx
1400254c2 sub rdx, rcx
1400254c5 test sil, sil
1400254c8 cmove rdx, rax
1400254cc lea rax, [rbp + 3]
1400254d0 mov qword ptr [rdi + 0x30], rax
1400254d4 imul r10, r12
1400254d8 add r10, r13
1400254db mov qword ptr [rdi + 0x28], r10
1400254df shr r10, 0x1b
1400254e3 movzx eax, r10b
1400254e7 mov byte ptr [rdi + 0x281], al
1400254ed imul rax, r11
1400254f1 xor rax, rbx
1400254f4 xor rax, r8
1400254f7 mov rcx, rax
1400254fa add rax, rdx
1400254fd xor rcx, rdx
140025500 test sil, sil
140025503 cmove rax, rcx
140025507 mov rcx, rdi
14002550a mov qword ptr [rdi + 0x250], rax
140025511 call 0x140005b50
140025516 mov rdx, qword ptr [rdi + 0x248]
14002551d movzx ecx, byte ptr [rdi + 0x280]
140025524 mov r10, qword ptr [rdi + 0x1f8]
14002552b mov rax, qword ptr [rdi + 0x1f0]
140025532 mov rbx, qword ptr [rdi + 0x1e8]
140025539 movzx r9d, byte ptr [rdi + 0x200]
140025541 imul rcx, r10
140025545 lea r11, [rax + rax*8]
140025549 mov rax, rdx
14002554c xor rcx, r11
14002554f xor rcx, rbx
140025552 xor rax, rcx
140025555 sub rdx, rcx
140025558 test r9b, r9b
14002555b cmove rdx, rax
14002555f mov rax, qword ptr [rdi + 0x28]
140025563 inc qword ptr [rdi + 0x30]
140025567 mov rcx, rdx
14002556a imul rax, r12
14002556e add rax, r13
140025571 mov qword ptr [rdi + 0x28], rax
140025575 shr rax, 0x1b
140025579 movzx r8d, al
14002557d mov byte ptr [rdi + 0x280], r8b
140025584 imul r8, r10
140025588 xor r8, r11
14002558b xor r8, rbx
14002558e xor rcx, r8
140025591 test r9b, r9b
140025594 lea rax, [rdx + r8]
140025598 cmove rax, rcx
14002559c mov rcx, rdi
14002559f mov qword ptr [rdi + 0x248], rax
1400255a6 call 0x140005b50
1400255ab mov r9, qword ptr [rdi + 0x210]
1400255b2 movzx ecx, byte ptr [rdi + 0x279]
1400255b9 mov rax, r9
1400255bc mov rbx, qword ptr [rdi + 0x1f8]
1400255c3 mov rsi, qword ptr [rdi + 0x1e8]
1400255ca movzx ebp, byte ptr [rdi + 0x200]
1400255d1 mov r10, qword ptr [rdi + 0x28]
1400255d5 mov r11, qword ptr [rdi + 0x1f0]
1400255dc imul rcx, rbx
1400255e0 lea r8, [r11 + r11]
1400255e4 xor rcx, rsi
1400255e7 xor rcx, r8
1400255ea xor rax, rcx
1400255ed sub r9, rcx
1400255f0 test bpl, bpl
1400255f3 cmove r9, rax
1400255f7 inc qword ptr [rdi + 0x30]
1400255fb mov r14, qword ptr [rdi + 0x30]
1400255ff imul r10, r12
140025603 add r10, r13
140025606 mov qword ptr [rdi + 0x28], r10
14002560a mov rax, r10
14002560d shr rax, 0x1b
140025611 movzx edx, al
140025614 mov byte ptr [rdi + 0x279], dl
14002561a imul rdx, rbx
14002561e xor rdx, rsi
140025621 xor rdx, r8
140025624 mov rcx, rdx
140025627 xor rcx, r9
14002562a test bpl, bpl
14002562d lea rax, [rdx + r9]
140025631 cmove rax, rcx
140025635 mov qword ptr [rdi + 0x210], rax
14002563c cmp r9d, dword ptr [rdi + 0x1b8]
140025643 jae 0x140025674
140025645 mov edx, r9d
140025648 mov rcx, rdi
14002564b call 0x140005b50
140025650 mov r11, qword ptr [rdi + 0x1f0]
140025657 mov r10, qword ptr [rdi + 0x28]
14002565b mov rbx, qword ptr [rdi + 0x1f8]
140025662 mov rsi, qword ptr [rdi + 0x1e8]
140025669 movzx ebp, byte ptr [rdi + 0x200]
140025670 mov r14, qword ptr [rdi + 0x30]
140025674 mov r9, qword ptr [rdi + 0x248]
14002567b lea r8, [r11 + r11*8]
14002567f movzx ecx, byte ptr [rdi + 0x280]
140025686 mov rax, r9
140025689 imul rcx, rbx
14002568d xor rcx, rsi
140025690 xor rcx, r8
140025693 xor rax, rcx
140025696 sub r9, rcx
140025699 test bpl, bpl
14002569c cmove r9, rax
1400256a0 imul r10, r12
1400256a4 add r10, r13
1400256a7 mov rax, r10
1400256aa shr rax, 0x1b
1400256ae movzx edx, al
1400256b1 mov byte ptr [rdi + 0x280], dl
1400256b7 imul rdx, rbx
1400256bb xor rdx, rsi
1400256be xor rdx, r8
1400256c1 mov r8d, 0xc66d
1400256c7 mov rcx, rdx
1400256ca xor rcx, r9
1400256cd test bpl, bpl
1400256d0 lea rax, [rdx + r9]
1400256d4 cmove rax, rcx
1400256d8 mov qword ptr [rdi + 0x248], rax
1400256df lea rax, [r14 + 2]
1400256e3 mov qword ptr [rdi + 0x30], rax
1400256e7 lea rax, [r11 + r11*4]
1400256eb add rax, rax
1400256ee imul r10, r12
1400256f2 add r10, r13
1400256f5 mov qword ptr [rdi + 0x28], r10
1400256f9 shr r10, 0x1b
1400256fd movzx edx, r10b
140025701 mov byte ptr [rdi + 0x281], dl
140025707 imul rdx, rbx
14002570b xor rdx, rax
14002570e xor rdx, rsi
140025711 mov rcx, rdx
140025714 xor rcx, r9
140025717 test bpl, bpl
14002571a lea rax, [rdx + r9]
14002571e cmove rax, rcx
140025722 mov rcx, rdi
140025725 mov qword ptr [rdi + 0x250], rax
14002572c movzx edx, byte ptr [rdi + 0xf09]
140025733 xor rdx, qword ptr [rdi + 0xce0]
14002573a call 0x140006770
14002573f mov r8, qword ptr [rdi + 0xce0]
140025746 movabs rbx, 0xc4ceb9fe1a85ec53
140025750 mov rax, r8
140025753 xor rax, qword ptr [rdi + 0xd8]
14002575a mov rcx, rax
14002575d shr rcx, 0x21
140025761 xor rcx, rax
140025764 imul rcx, r15
140025768 mov rax, rcx
14002576b shr rax, 0x21
14002576f xor rax, rcx
140025772 imul rax, rbx
140025776 mov rdx, rax
140025779 shr rdx, 0x21
14002577d xor edx, eax
14002577f lea eax, [rdx + 1]
140025782 mov ecx, eax
140025784 xor eax, edx
140025786 imul ecx, edx
140025789 not ecx
14002578b and ecx, eax
14002578d test cl, 1
140025790 je 0x1400257ee
140025792 and r8b, 3
140025796 cmp r8b, 1
14002579a jne 0x1400257ee
14002579c mov rax, qword ptr [rdi + 0x28]
1400257a0 inc qword ptr [rdi + 0x30]
1400257a4 imul rax, r12
1400257a8 add rax, r13
1400257ab mov qword ptr [rdi + 0x28], rax
1400257af shr rax, 0x1b
1400257b3 movzx eax, al
1400257b6 mov byte ptr [rdi + 0x278], al
1400257bc imul rax, qword ptr [rdi + 0x1f8]
1400257c4 xor rax, qword ptr [rdi + 0x1e8]
1400257cb xor rax, qword ptr [rdi + 0x1f0]
1400257d2 mov rcx, rax
1400257d5 add rax, 0x154bb4
1400257db xor rcx, 0x154bb4
1400257e2 cmp byte ptr [rdi + 0x200], 0
1400257e9 jmp 0x140025e63
1400257ee mov rbx, qword ptr [rdi + 0x210]
1400257f5 movzx ecx, byte ptr [rdi + 0x279]
1400257fc mov rax, rbx
1400257ff mov r10, qword ptr [rdi + 0x1f8]
140025806 mov r11, qword ptr [rdi + 0x1e8]
14002580d movzx esi, byte ptr [rdi + 0x200]
140025814 mov r9, qword ptr [rdi + 0x28]
140025818 mov rbp, qword ptr [rdi + 0x30]
14002581c mov r14, qword ptr [rdi + 0x1f0]
140025823 imul rcx, r10
140025827 lea r8, [r14 + r14]
14002582b xor rcx, r11
14002582e xor rcx, r8
140025831 xor rax, rcx
140025834 sub rbx, rcx
140025837 test sil, sil
14002583a cmove rbx, rax
14002583e inc rbp
140025841 imul r9, r12
140025845 mov qword ptr [rdi + 0x30], rbp
140025849 mov rcx, rbx
14002584c add r9, r13
14002584f mov qword ptr [rdi + 0x28], r9
140025853 mov rax, r9
140025856 shr rax, 0x1b
14002585a movzx edx, al
14002585d mov byte ptr [rdi + 0x279], dl
140025863 imul rdx, r10
140025867 xor rdx, r11
14002586a xor rdx, r8
14002586d xor rcx, rdx
140025870 test sil, sil
140025873 lea rax, [rbx + rdx]
140025877 cmove rax, rcx
14002587b mov qword ptr [rdi + 0x210], rax
140025882 cmp ebx, dword ptr [rdi + 0x1b8]
140025888 jb 0x1400258cd
14002588a imul r9, r12
14002588e lea rax, [rbp + 1]
140025892 mov qword ptr [rdi + 0x30], rax
140025896 add r9, r13
140025899 mov qword ptr [rdi + 0x28], r9
14002589d shr r9, 0x1b
1400258a1 movzx eax, r9b
1400258a5 mov byte ptr [rdi + 0x278], al
1400258ab imul rax, r10
1400258af xor rax, r11
1400258b2 xor rax, r14
1400258b5 mov rcx, rax
1400258b8 add rax, 0x2a669
1400258be xor rcx, 0x2a669
1400258c5 test sil, sil
1400258c8 jmp 0x140025e63
1400258cd mov edx, ebx
1400258cf mov rcx, rdi
1400258d2 call 0x140007bf0
1400258d7 movsxd rcx, dword ptr [rdi + 0x154]
1400258de movabs r8, 0xd6e8feb86659fd93
1400258e8 mov rdx, qword ptr [rdi + 0xd8]
1400258ef movabs r11, 0xc4ceb9fe1a85ec53
1400258f9 imul rcx, r12
1400258fd rol rdx, 0x11
140025901 xor rcx, qword ptr [rdi + 0x688]
140025908 mov eax, ebx
14002590a imul rax, r8
14002590e mov ebp, ebx
140025910 xor rax, rcx
140025913 xor rax, rdx
140025916 mov rcx, rax
140025919 shr rcx, 0x21
14002591d xor rcx, rax
140025920 imul rcx, r15
140025924 mov rdx, rcx
140025927 shr rdx, 0x21
14002592b xor rdx, rcx
14002592e imul rdx, r11
140025932 mov rax, rdx
140025935 shr rax, 0x21
140025939 xor rax, rdx
14002593c mov r10, rax
14002593f shr r10, 0x1d
140025943 xor r10, rax
140025946 or r10, 1
14002594a mov rax, r10
14002594d mov qword ptr [rdi + 0x688], r10
140025954 and eax, 0x3ff
140025959 cmp rax, 0x2c5
14002595f jne 0x14002597a
140025961 mov rcx, rdi
140025964 call 0x14003ebe0
140025969 mov r10, qword ptr [rdi + 0x688]
140025970 movabs r11, 0xc4ceb9fe1a85ec53
14002597a movzx eax, r10b
14002597e and al, 0x1f
140025980 cmp al, 0x15
140025982 jne 0x140025a73
140025988 movsxd rcx, dword ptr [rdi + 0x154]
14002598f mov rax, qword ptr [rdi + 0xd8]
140025996 xor rcx, 0x5a5a
14002599d rol rax, 0x11
1400259a1 imul rcx, r12
1400259a5 xor rcx, r10
1400259a8 xor rcx, rax
1400259ab movabs rax, 0x8f70feda99a6026d
1400259b5 xor rcx, rax
1400259b8 mov rax, rcx
1400259bb shr rax, 0x21
1400259bf xor rax, rcx
1400259c2 imul rax, r15
1400259c6 mov rcx, rax
1400259c9 shr rcx, 0x21
1400259cd xor rcx, rax
1400259d0 imul rcx, r11
1400259d4 mov rax, rcx
1400259d7 shr rax, 0x21
1400259db xor rax, rcx
1400259de mov r9, rax
1400259e1 shr r9, 0x1d
1400259e5 xor r9, rax
1400259e8 or r9, 1
1400259ec mov rax, r9
1400259ef mov rcx, r9
1400259f2 shr rax, 8
1400259f6 and eax, 3
1400259f9 shr rcx, 0x28
1400259fd imul r8, rax, 0x3e
140025a01 mov eax, 0x8421085
140025a06 mul ecx
140025a08 mov eax, ecx
140025a0a sub eax, edx
140025a0c shr eax, 1
140025a0e add eax, edx
140025a10 shr eax, 5
140025a13 imul eax, eax, 0x3e
140025a16 sub ecx, eax
140025a18 mov eax, ecx
140025a1a add r8, rax
140025a1d mov rax, qword ptr [rdi + 0xf40]
140025a24 movsxd rcx, dword ptr [rax + r8*4]
140025a28 movsxd rax, dword ptr [rdi + 0xf50]
140025a2f xor rcx, rax
140025a32 add rcx, qword ptr [rdi + 0xf48]
140025a39 xor rcx, r9
140025a3c mov rax, rcx
140025a3f shr rax, 0x21
140025a43 xor rax, rcx
140025a46 imul rax, r15
140025a4a mov rcx, rax
140025a4d shr rcx, 0x21
140025a51 xor rcx, rax
140025a54 imul rcx, r11
140025a58 mov rax, rcx
140025a5b shr rax, 0x21
140025a5f xor rax, r10
140025a62 xor rax, rcx
140025a65 inc qword ptr [rdi + 0x690]
140025a6c mov qword ptr [rdi + 0x688], rax
140025a73 inc dword ptr [rdi + 0x1194]
140025a79 mov eax, dword ptr [rdi + 0x1194]
140025a7f cmp eax, dword ptr [rdi + 0x1190]
140025a85 jb 0x140025a99
140025a87 mov rcx, rdi
140025a8a mov dword ptr [rdi + 0x1194], 0
140025a94 call 0x140004930
140025a99 mov r8d, ebx
140025a9c mov edx, ebx
140025a9e mov rcx, rdi
140025aa1 call 0x1400058a0
140025aa6 inc qword ptr [rdi + 0x30]
140025aaa lea r15d, [rbx + 1]
140025aae mov r9, qword ptr [rdi + 0x28]
140025ab2 movabs rbx, 0xc4ceb9fe1a85ec53
140025abc imul r9, r12
140025ac0 add r9, r13
140025ac3 mov r13, qword ptr [rdi + 0x30]
140025ac7 mov qword ptr [rdi + 0x28], r9
140025acb mov rax, r9
140025ace shr rax, 0x1b
140025ad2 movzx edx, al
140025ad5 mov byte ptr [rdi + 0x280], dl
140025adb mov r11, qword ptr [rdi + 0x1f8]
140025ae2 mov r10, qword ptr [rdi + 0x1f0]
140025ae9 mov rsi, qword ptr [rdi + 0x1e8]
140025af0 movzx r14d, byte ptr [rdi + 0x200]
140025af8 imul rdx, r11
140025afc lea rax, [r10 + r10*8]
140025b00 xor rdx, rax
140025b03 xor rdx, rsi
140025b06 mov rcx, rdx
140025b09 xor rcx, rbp
140025b0c test r14b, r14b
140025b0f lea rax, [rdx + rbp]
140025b13 cmove rax, rcx
140025b17 inc r13
140025b1a mov qword ptr [rdi + 0x248], rax
140025b21 mov rcx, qword ptr [rdi + 0x1b0]
140025b28 mov rax, qword ptr [rdi + 0xa8]
140025b2f imul r9, r12
140025b33 movzx r8d, byte ptr [rcx + rbp]
140025b38 mov ecx, r15d
140025b3b xor r8b, byte ptr [rax + rbp]
140025b3f movabs rax, 0x2545f4914f6cdd1d
140025b49 add r9, rax
140025b4c mov qword ptr [rdi + 0x30], r13
140025b50 mov rax, r9
140025b53 shr rax, 0x1b
140025b57 movzx edx, al
140025b5a lea rax, [r10 + r10]
140025b5e mov byte ptr [rdi + 0x279], dl
140025b64 imul rdx, r11
140025b68 xor rdx, rax
140025b6b xor rdx, rsi
140025b6e xor rcx, rdx
140025b71 test r14b, r14b
140025b74 lea rax, [r15 + rdx]
140025b78 cmove rax, rcx
140025b7c mov qword ptr [rdi + 0x210], rax
140025b83 movsxd rdx, dword ptr [rdi + 0x154]
140025b8a mov r12, qword ptr [rdi + 0xd8]
140025b91 mov rcx, rdx
140025b94 xor rcx, qword ptr [rdi + 0xce8]
140025b9b xor rcx, r15
140025b9e xor rcx, qword ptr [rdi + 0xce0]
140025ba5 xor rcx, r12
140025ba8 mov rax, rcx
140025bab shr rax, 0x21
140025baf xor rax, rcx
140025bb2 movabs rcx, 0xff51afd7ed558ccd
140025bbc imul rax, rcx
140025bc0 mov rcx, rax
140025bc3 shr rcx, 0x21
140025bc7 xor rcx, rax
140025bca movzx eax, r8b
140025bce imul rcx, rbx
140025bd2 xor rax, 0x33
140025bd6 mov rbx, rcx
140025bd9 shr rbx, 0x21
140025bdd xor rbx, rcx
140025be0 lea rcx, [rip - 0x25be7]
140025be7 movzx ebp, byte ptr [rax + rcx + 0x3dfcb0]
140025bef xor bpl, 0xeb
140025bf3 mov qword ptr [rdi + 0xe0], rbx
140025bfa inc edx
140025bfc mov dword ptr [rdi + 0x154], edx
140025c02 test dl, 0x1f
140025c05 jne 0x140025c55
140025c07 movsxd rax, edx
140025c0a xor rax, qword ptr [rdi + 0xce0]
140025c11 xor rax, r12
140025c14 mov rcx, rax
140025c17 shr rcx, 0x21
140025c1b xor rcx, rax
140025c1e movabs rax, 0xff51afd7ed558ccd
140025c28 imul rcx, rax
140025c2c movabs rax, 0xc4ceb9fe1a85ec53
140025c36 mov rdx, rcx
140025c39 shr rdx, 0x21
140025c3d xor rdx, rcx
140025c40 imul rdx, rax
140025c44 mov rax, rdx
140025c47 shr rax, 0x21
140025c4b xor rax, rdx
140025c4e mov qword ptr [rdi + 0xce0], rax
140025c55 movzx r8d, bpl
140025c59 mov eax, r8d
140025c5c mov byte ptr [rdi + 0xf09], bpl
140025c63 xor rax, r15
140025c66 movabs r15, 0x9e3779b97f4a7c15
140025c70 xor rax, r12
140025c73 movabs r12, 0xff51afd7ed558ccd
140025c7d mov rcx, rax
140025c80 shr rcx, 0x21
140025c84 xor rcx, rax
140025c87 movabs rax, 0xc4ceb9fe1a85ec53
140025c91 imul rcx, r12
140025c95 imul r8, r15
140025c99 imul r9, r15
140025c9d mov rdx, rcx
140025ca0 shr rdx, 0x21
140025ca4 xor rdx, rcx
140025ca7 mov ecx, dword ptr [rdi + 0xc]
140025caa imul rdx, rax
140025cae mov rax, rdx
140025cb1 shr rax, 0x21
140025cb5 xor rax, rdx
140025cb8 mov qword ptr [rdi + 0xd8], rax
140025cbf movabs rax, 0xd6e8feb86659fd93
140025cc9 imul rcx, rax
140025ccd xor rcx, r8
140025cd0 xor rcx, rbx
140025cd3 movabs rbx, 0x2545f4914f6cdd1d
140025cdd mov rax, rcx
140025ce0 add r9, rbx
140025ce3 shr rax, 0x21
140025ce7 xor rax, rcx
140025cea imul rax, r12
140025cee mov rdx, rax
140025cf1 shr rdx, 0x21
140025cf5 xor rdx, rax
140025cf8 movabs rax, 0xc4ceb9fe1a85ec53
140025d02 imul rdx, rax
140025d06 lea rax, [r13 + 1]
140025d0a shr rdx, 0x21
140025d0e and edx, 3
140025d11 mov qword ptr [rdi + 0x30], rax
140025d15 cmp bpl, 0x3e
140025d19 jae 0x140025db4
140025d1f inc qword ptr [rdi + 0x80]
140025d26 lea rax, [rip - 0x25d2d]
140025d2d mov r8d, dword ptr [rax + rdx*4 + 0x3df8f0]
140025d35 mov qword ptr [rdi + 0x28], r9
140025d39 shr r9, 0x1b
140025d3d movzx eax, r9b
140025d41 mov byte ptr [rdi + 0x278], al
140025d47 imul rax, r11
140025d4b mov ebx, edx
140025d4d xor rax, r10
140025d50 xor rax, rsi
140025d53 mov rcx, rax
140025d56 add rax, r8
140025d59 xor rcx, r8
140025d5c movzx r8d, bpl
140025d60 test r14b, r14b
140025d63 cmove rax, rcx
140025d67 mov rcx, rdi
140025d6a mov qword ptr [rdi + 0x208], rax
140025d71 call 0x1400074d0
140025d76 mov edx, dword ptr [rsp + 0x78]
140025d7a mov r8, qword ptr [rsp + 0x80]
140025d82 dec edx
140025d84 mov eax, eax
140025d86 imul rcx, rbx, 0x3e
140025d8a add rcx, rax
140025d8d mov rax, qword ptr [rdi + 0xf40]
140025d94 movsxd r9, dword ptr [rax + rcx*4]
140025d98 mov rcx, rdi
140025d9b movsxd rax, dword ptr [rdi + 0xf50]
140025da2 xor r9, rax
140025da5 add r9, qword ptr [rdi + 0xf48]
140025dac call r9
140025daf jmp 0x140025e6e
140025db4 inc dword ptr [rdi + 0x88]
140025dba mov rax, r9
140025dbd shr rax, 0x1b
140025dc1 movzx ecx, al
140025dc4 lea rax, [r10*4]
140025dcc mov byte ptr [rdi + 0x27b], cl
140025dd2 imul rcx, r11
140025dd6 imul r9, r15
140025dda xor rcx, rax
140025ddd xor rcx, rsi
140025de0 mov qword ptr [rdi + 0x220], rcx
140025de7 mov r8, qword ptr [rdi + 0x30]
140025deb add r9, rbx
140025dee mov rax, r9
140025df1 shr rax, 0x1b
140025df5 movzx edx, al
140025df8 mov byte ptr [rdi + 0x282], dl
140025dfe imul rax, r10, 0xb
140025e02 imul rdx, r11
140025e06 xor rdx, rax
140025e09 xor rdx, rsi
140025e0c mov rcx, rdx
140025e0f xor rcx, 1
140025e13 test r14b, r14b
140025e16 lea rax, [rdx + 1]
140025e1a cmove rax, rcx
140025e1e mov qword ptr [rdi + 0x258], rax
140025e25 lea rax, [r8 + 2]
140025e29 mov qword ptr [rdi + 0x30], rax
140025e2d imul r9, r15
140025e31 add r9, rbx
140025e34 mov qword ptr [rdi + 0x28], r9
140025e38 shr r9, 0x1b
140025e3c movzx eax, r9b
140025e40 mov byte ptr [rdi + 0x278], al
140025e46 imul rax, r11
140025e4a xor rax, rsi
140025e4d xor rax, r10
140025e50 mov rcx, rax
140025e53 add rax, 0x2a669
140025e59 xor rcx, 0x2a669
140025e60 test r14b, r14b
140025e63 cmove rax, rcx
140025e67 mov qword ptr [rdi + 0x208], rax
140025e6e mov rbp, qword ptr [rsp + 0x88]
140025e76 mov r14, qword ptr [rsp + 0x30]
140025e7b add rsp, 0x38
140025e7f pop r15
140025e81 pop r13
140025e83 pop r12
140025e85 pop rdi
140025e86 pop rsi
140025e87 pop rbx
140025e88 ret 
140025e89 mov edx, 0x54485254
140025e8e mov rcx, rdi
140025e91 call 0x1400029a0
140025e96 int3 
140025e97 mov edx, 0x43414e59
140025e9c mov rcx, rdi
140025e9f call 0x1400029a0
140025ea4 int3 
