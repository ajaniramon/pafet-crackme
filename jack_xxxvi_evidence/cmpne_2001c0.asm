2001c0 mov      qword ptr [rsp + 0x18], r8
2001c5 push     rbx
2001c6 push     rbp
2001c7 push     rdi
2001c8 push     r13
2001ca push     r14
2001cc sub      rsp, 0x30
2001d0 movsxd   rax, dword ptr [rcx + 0x11e0]
2001d7 mov      r14, rcx
2001da mov      r13d, edx
2001dd movabs   rcx, 0xe6329a61b4f1b6b7
2001e7 imul     rax, rcx
2001eb movabs   rcx, 0x446b10aa352f3288
2001f5 movabs   rbp, 0xff51afd7ed558ccd
2001ff xor      rax, qword ptr [r14 + 0x28]
200203 mov      rdi, r8
200206 mov      qword ptr [rsp + 0x60], rax
20020b mov      rax, qword ptr [rsp + 0x60]
200210 movsxd   rax, dword ptr [r14 + 0x11e0]
200217 imul     rax, rcx
20021b movabs   rcx, 0xa2a38ef4b664be9d
200225 xor      rax, qword ptr [r14 + 0x28]
200229 mov      qword ptr [rsp + 0x60], rax
20022e mov      rax, qword ptr [rsp + 0x60]
200233 movsxd   rax, dword ptr [r14 + 0x11e0]
20023a imul     rax, rcx
20023e movabs   rcx, 0x30d18c733da22aa6
200248 xor      rax, qword ptr [r14 + 0x28]
20024c mov      qword ptr [rsp + 0x60], rax
200251 mov      rax, qword ptr [rsp + 0x60]
200256 mov      rax, qword ptr [r14 + 0x2e0]
20025d add      rax, rcx
200260 mov      rcx, rax
200263 shr      rcx, 0x21
200267 xor      rcx, rax
20026a movabs   rax, 0xc4ceb9fe1a85ec53
200274 imul     rcx, rbp
200278 mov      rdx, rcx
20027b shr      rdx, 0x21
20027f xor      rdx, rcx
200282 mov      rcx, r14
200285 imul     rdx, rax
200289 mov      rax, rdx
20028c shr      rax, 0x21
200290 xor      rdx, rax
200293 mov      rax, qword ptr [r14 + 0x2e0]
20029a or       rdx, 1
20029e xor      rdx, rax
2002a1 mov      qword ptr [r14 + 0x2e0], rdx
2002a8 call     0x1401ee940
2002ad mov      rcx, r14
2002b0 mov      rbx, rax
2002b3 call     0x1401ee940
2002b8 xor      edx, edx
2002ba mov      rcx, r14
2002bd cmp      rax, rbx
2002c0 setne    dl
2002c3 call     0x1401ee820
2002c8 mov      rax, qword ptr [r14 + 0x2e0]
2002cf test     r13d, r13d
2002d2 jns      0x140200e10
2002d8 cmp      qword ptr [r14 + 0x11b8], rdi
2002df jne      0x140200e1e
2002e5 movsxd   rax, dword ptr [r14 + 0x11e0]
2002ec movabs   rcx, 0xcee527cd24776a64
2002f6 imul     rax, rcx
2002fa mov      rcx, r14
2002fd xor      rax, qword ptr [r14 + 0x28]
200301 mov      qword ptr [rsp + 0x60], rax
200306 mov      rax, qword ptr [rsp + 0x60]
20030b call     0x1401ee450
200310 test     eax, eax
200312 jne      0x140200e04
200318 cmp      dword ptr [r14 + 0xad0], eax
20031f jne      0x140200e04
200325 mov      r8, qword ptr [r14 + 0xf0]
20032c movzx    ecx, byte ptr [r14 + 0x160]
200334 mov      rax, r8
200337 mov      r10, qword ptr [r14 + 0xe0]
20033e mov      rbx, qword ptr [r14 + 0xd0]
200345 mov      r11, qword ptr [r14 + 0xd8]
20034c movzx    edi, byte ptr [r14 + 0xe8]
200354 mov      r9, qword ptr [r14 + 0x1b0]
20035b imul     rcx, r10
20035f mov      qword ptr [rsp + 0x68], rsi
200364 mov      rsi, qword ptr [r14 + 0x1b8]
20036b xor      rcx, rbx
20036e xor      rcx, r11
200371 mov      qword ptr [rsp + 0x28], r12
200376 xor      rax, rcx
200379 mov      qword ptr [rsp + 0x20], r15
20037e sub      r8, rcx
200381 movabs   r15, 0x9e3779b97f4a7c15
20038b test     dil, dil
20038e movabs   r12, 0x2545f4914f6cdd1d
200398 cmove    r8, rax
20039c inc      rsi
20039f imul     r9, r15
2003a3 mov      qword ptr [r14 + 0x1b8], rsi
2003aa add      r9, r12
2003ad mov      qword ptr [r14 + 0x1b0], r9
2003b4 mov      rax, r9
2003b7 shr      rax, 0x1b
2003bb movzx    edx, al
2003be mov      byte ptr [r14 + 0x160], dl
2003c5 imul     rdx, r10
2003c9 xor      rdx, rbx
2003cc xor      rdx, r11
2003cf mov      rcx, rdx
2003d2 xor      rcx, r8
2003d5 test     dil, dil
2003d8 lea      rax, [rdx + r8]
2003dc cmove    rax, rcx
2003e0 mov      qword ptr [r14 + 0xf0], rax
2003e7 cmp      r8d, 0x338040
2003ee jne      0x140200df5
2003f4 mov      eax, r13d
2003f7 btr      eax, 0x1f
2003fb cmp      eax, 2
2003fe jae      0x14020044a
200400 imul     r9, r15
200404 lea      rax, [rsi + 1]
200408 mov      qword ptr [r14 + 0x1b8], rax
20040f add      r9, r12
200412 mov      qword ptr [r14 + 0x1b0], r9
200419 shr      r9, 0x1b
20041d movzx    eax, r9b
200421 mov      byte ptr [r14 + 0x160], al
200428 imul     rax, r10
20042c xor      rax, rbx
20042f xor      rax, r11
200432 mov      rcx, rax
200435 add      rax, 0x1ad951
20043b xor      rcx, 0x1ad951
200442 test     dil, dil
200445 jmp      0x140200dea
20044a mov      rcx, r14
20044d call     0x1401ee070
200452 movzx    ecx, byte ptr [r14 + 0x4ad]
20045a movabs   r8, 0xc4ceb9fe1a85ec53
200464 mov      r11, qword ptr [r14 + 0xe0]
20046b mov      r10, qword ptr [r14 + 0xd0]
200472 movzx    r9d, byte ptr [r14 + 0xe8]
20047a mov      eax, eax
20047c xor      rcx, rax
20047f xor      rcx, qword ptr [r14 + 0x11e8]
200486 mov      rax, rcx
200489 shr      rax, 0x21
20048d xor      rax, rcx
200490 imul     rax, rbp
200494 mov      rcx, rax
200497 shr      rcx, 0x21
20049b xor      rcx, rax
20049e imul     rcx, r8
2004a2 mov      rdx, rcx
2004a5 shr      rdx, 0x21
2004a9 xor      rdx, rcx
2004ac mov      qword ptr [r14 + 0x11e8], rdx
2004b3 xor      rdx, qword ptr [r14 + 0x28]
2004b7 xor      rdx, qword ptr [r14 + 0x20]
2004bb mov      rax, rdx
2004be shr      rax, 0x21
2004c2 xor      rax, rdx
2004c5 imul     rax, rbp
2004c9 mov      rcx, rax
2004cc shr      rcx, 0x21
2004d0 xor      rcx, rax
2004d3 imul     rcx, r8
2004d7 mov      rax, rcx
2004da shr      rax, 0x21
2004de xor      rax, rcx
2004e1 mov      qword ptr [r14 + 0x20], rax
2004e5 mov      rdx, qword ptr [r14 + 0x138]
2004ec movzx    ecx, byte ptr [r14 + 0x169]
2004f4 mov      rax, qword ptr [r14 + 0xd8]
2004fb imul     rcx, r11
2004ff lea      rbx, [rax + rax*4]
200503 mov      rax, rdx
200506 add      rbx, rbx
200509 xor      rcx, rbx
20050c xor      rcx, r10
20050f xor      rax, rcx
200512 sub      rdx, rcx
200515 test     r9b, r9b
200518 cmove    rdx, rax
20051c mov      rax, qword ptr [r14 + 0x1b0]
200523 inc      qword ptr [r14 + 0x1b8]
20052a imul     rax, r15
20052e add      rax, r12
200531 mov      qword ptr [r14 + 0x1b0], rax
200538 shr      rax, 0x1b
20053c movzx    r8d, al
200540 mov      byte ptr [r14 + 0x169], r8b
200547 imul     r8, r11
20054b xor      r8, rbx
20054e xor      r8, r10
200551 mov      rcx, r8
200554 xor      rcx, rdx
200557 test     r9b, r9b
20055a lea      rax, [r8 + rdx]
20055e cmove    rax, rcx
200562 mov      rcx, r14
200565 mov      qword ptr [r14 + 0x138], rax
20056c call     0x1401f0910
200571 mov      rax, qword ptr [r14 + 0xd8]
200578 mov      rdx, qword ptr [r14 + 0x130]
20057f mov      r10, qword ptr [r14 + 0xe0]
200586 movzx    ecx, byte ptr [r14 + 0x168]
20058e mov      rbx, qword ptr [r14 + 0xd0]
200595 lea      r11, [rax + rax*8]
200599 movzx    r9d, byte ptr [r14 + 0xe8]
2005a1 mov      rax, rdx
2005a4 imul     rcx, r10
2005a8 xor      rcx, r11
2005ab xor      rcx, rbx
2005ae xor      rax, rcx
2005b1 sub      rdx, rcx
2005b4 test     r9b, r9b
2005b7 cmove    rdx, rax
2005bb mov      rax, qword ptr [r14 + 0x1b0]
2005c2 inc      qword ptr [r14 + 0x1b8]
2005c9 imul     rax, r15
2005cd add      rax, r12
2005d0 mov      qword ptr [r14 + 0x1b0], rax
2005d7 shr      rax, 0x1b
2005db movzx    r8d, al
2005df mov      byte ptr [r14 + 0x168], r8b
2005e6 imul     r8, r10
2005ea xor      r8, r11
2005ed xor      r8, rbx
2005f0 mov      rcx, r8
2005f3 xor      rcx, rdx
2005f6 test     r9b, r9b
2005f9 lea      rax, [r8 + rdx]
2005fd cmove    rax, rcx
200601 mov      rcx, r14
200604 mov      qword ptr [r14 + 0x130], rax
20060b call     0x1401f0910
200610 mov      rcx, r14
200613 call     0x1401ee070
200618 cmp      eax, dword ptr [r14 + 0x1d8]
20061f jae      0x14020062b
200621 mov      edx, eax
200623 mov      rcx, r14
200626 call     0x1401f0910
20062b mov      rsi, qword ptr [r14 + 0xe0]
200632 mov      rbp, qword ptr [r14 + 0xd0]
200639 mov      r11, qword ptr [r14 + 0x130]
200640 movzx    edi, byte ptr [r14 + 0xe8]
200648 mov      rax, r11
20064b movzx    ecx, byte ptr [r14 + 0x168]
200653 mov      rbx, qword ptr [r14 + 0xd8]
20065a mov      r8, qword ptr [r14 + 0x1b8]
200661 mov      r10, qword ptr [r14 + 0x1b0]
200668 imul     rcx, rsi
20066c lea      r9, [rbx + rbx*8]
200670 xor      rcx, r9
200673 xor      rcx, rbp
200676 xor      rax, rcx
200679 sub      r11, rcx
20067c test     dil, dil
20067f cmove    r11, rax
200683 imul     r10, r15
200687 mov      rcx, r11
20068a add      r10, r12
20068d mov      rax, r10
200690 shr      rax, 0x1b
200694 movzx    edx, al
200697 mov      byte ptr [r14 + 0x168], dl
20069e imul     rdx, rsi
2006a2 xor      rdx, r9
2006a5 xor      rdx, rbp
2006a8 xor      rcx, rdx
2006ab test     dil, dil
2006ae lea      rax, [r11 + rdx]
2006b2 cmove    rax, rcx
2006b6 mov      rcx, r11
2006b9 mov      qword ptr [r14 + 0x130], rax
2006c0 lea      rax, [r8 + 2]
2006c4 mov      qword ptr [r14 + 0x1b8], rax
2006cb mov      r8d, 0x8417
2006d1 imul     r10, r15
2006d5 lea      rax, [rbx + rbx*4]
2006d9 add      rax, rax
2006dc add      r10, r12
2006df mov      qword ptr [r14 + 0x1b0], r10
2006e6 shr      r10, 0x1b
2006ea movzx    edx, r10b
2006ee mov      byte ptr [r14 + 0x169], dl
2006f5 imul     rdx, rsi
2006f9 xor      rdx, rax
2006fc xor      rdx, rbp
2006ff xor      rcx, rdx
200702 test     dil, dil
200705 lea      rax, [r11 + rdx]
200709 cmove    rax, rcx
20070d mov      rcx, r14
200710 mov      qword ptr [r14 + 0x138], rax
200717 movzx    edx, byte ptr [r14 + 0x4ad]
20071f xor      rdx, qword ptr [r14 + 0x348]
200726 call     0x1401f1520
20072b mov      r8, qword ptr [r14 + 0x348]
200732 movabs   rdi, 0xff51afd7ed558ccd
20073c mov      rax, r8
20073f movabs   rsi, 0xc4ceb9fe1a85ec53
200749 xor      rax, qword ptr [r14 + 0x20]
20074d mov      rcx, rax
200750 shr      rcx, 0x21
200754 xor      rcx, rax
200757 imul     rcx, rdi
20075b mov      rax, rcx
20075e shr      rax, 0x21
200762 xor      rax, rcx
200765 imul     rax, rsi
200769 mov      rdx, rax
20076c shr      rdx, 0x21
200770 xor      edx, eax
200772 lea      eax, [rdx + 1]
200775 mov      ecx, eax
200777 xor      eax, edx
200779 imul     ecx, edx
20077c not      ecx
20077e and      ecx, eax
200780 test     cl, 1
200783 je       0x1402007ec
200785 and      r8b, 3
200789 cmp      r8b, 1
20078d jne      0x1402007ec
20078f mov      rax, qword ptr [r14 + 0x1b0]
200796 inc      qword ptr [r14 + 0x1b8]
20079d imul     rax, r15
2007a1 add      rax, r12
2007a4 mov      qword ptr [r14 + 0x1b0], rax
2007ab shr      rax, 0x1b
2007af movzx    eax, al
2007b2 mov      byte ptr [r14 + 0x160], al
2007b9 imul     rax, qword ptr [r14 + 0xe0]
2007c1 xor      rax, qword ptr [r14 + 0xd8]
2007c8 xor      rax, qword ptr [r14 + 0xd0]
2007cf mov      rcx, rax
2007d2 add      rax, 0x190631
2007d8 xor      rcx, 0x190631
2007df cmp      byte ptr [r14 + 0xe8], 0
2007e7 jmp      0x140200dea
2007ec mov      rcx, r14
2007ef call     0x1401ee070
2007f4 mov      ebx, eax
2007f6 cmp      eax, dword ptr [r14 + 0x1d8]
2007fd jb       0x14020085c
2007ff mov      rax, qword ptr [r14 + 0x1b0]
200806 inc      qword ptr [r14 + 0x1b8]
20080d imul     rax, r15
200811 add      rax, r12
200814 mov      qword ptr [r14 + 0x1b0], rax
20081b shr      rax, 0x1b
20081f movzx    eax, al
200822 mov      byte ptr [r14 + 0x160], al
200829 imul     rax, qword ptr [r14 + 0xe0]
200831 xor      rax, qword ptr [r14 + 0xd8]
200838 xor      rax, qword ptr [r14 + 0xd0]
20083f mov      rcx, rax
200842 add      rax, 0xfe1ab
200848 xor      rcx, 0xfe1ab
20084f cmp      byte ptr [r14 + 0xe8], 0
200857 jmp      0x140200dea
20085c mov      edx, ebx
20085e mov      rcx, r14
200861 call     0x1401f25b0
200866 movsxd   rcx, dword ptr [r14 + 0x11e0]
20086d movabs   r8, 0xd6e8feb86659fd93
200877 mov      rdx, qword ptr [r14 + 0x20]
20087b mov      rax, rbx
20087e imul     rax, r8
200882 imul     rcx, r15
200886 rol      rdx, 0x11
20088a xor      rax, rdx
20088d xor      rcx, qword ptr [r14 + 0x260]
200894 xor      rax, rcx
200897 mov      rcx, rax
20089a shr      rcx, 0x21
20089e xor      rcx, rax
2008a1 imul     rcx, rdi
2008a5 mov      rdx, rcx
2008a8 shr      rdx, 0x21
2008ac xor      rdx, rcx
2008af imul     rdx, rsi
2008b3 mov      rax, rdx
2008b6 shr      rax, 0x21
2008ba xor      rax, rdx
2008bd mov      r10, rax
2008c0 shr      r10, 0x1d
2008c4 xor      r10, rax
2008c7 or       r10, 1
2008cb mov      rax, r10
2008ce mov      qword ptr [r14 + 0x260], r10
2008d5 and      eax, 0x3ff
2008da cmp      rax, 0x2c5
2008e0 jne      0x1402008f1
2008e2 mov      rcx, r14
2008e5 call     0x1402297e0
2008ea mov      r10, qword ptr [r14 + 0x260]
2008f1 movzx    eax, r10b
2008f5 and      al, 0x1f
2008f7 cmp      al, 0x15
2008f9 jne      0x1402009e6
2008ff movsxd   rax, dword ptr [r14 + 0x11e0]
200906 xor      rax, 0x5a5a
20090c mov      rcx, qword ptr [r14 + 0x20]
200910 imul     rax, r15
200914 rol      rcx, 0x11
200918 xor      rax, r10
20091b xor      rcx, rax
20091e movabs   rax, 0x8f70feda99a6026d
200928 xor      rcx, rax
20092b mov      rax, rcx
20092e shr      rax, 0x21
200932 xor      rax, rcx
200935 imul     rax, rdi
200939 mov      rcx, rax
20093c shr      rcx, 0x21
200940 xor      rcx, rax
200943 imul     rcx, rsi
200947 mov      rax, rcx
20094a shr      rax, 0x21
20094e xor      rax, rcx
200951 mov      r9, rax
200954 shr      r9, 0x1d
200958 xor      r9, rax
20095b or       r9, 1
20095f mov      rax, r9
200962 mov      rcx, r9
200965 shr      rax, 8
200969 and      eax, 3
20096c shr      rcx, 0x28
200970 imul     r8, rax, 0x3e
200974 mov      eax, 0x8421085
200979 mul      ecx
20097b mov      eax, ecx
20097d sub      eax, edx
20097f shr      eax, 1
200981 add      eax, edx
200983 shr      eax, 5
200986 imul     eax, eax, 0x3e
200989 sub      ecx, eax
20098b mov      eax, ecx
20098d add      r8, rax
200990 mov      rax, qword ptr [r14 + 0x4b8]
200997 movsxd   rcx, dword ptr [rax + r8*4]
20099b movsxd   rax, dword ptr [r14 + 0x4c8]
2009a2 xor      rcx, rax
2009a5 add      rcx, qword ptr [r14 + 0x4c0]
2009ac xor      rcx, r9
2009af mov      rax, rcx
2009b2 shr      rax, 0x21
2009b6 xor      rax, rcx
2009b9 imul     rax, rdi
2009bd mov      rcx, rax
2009c0 shr      rcx, 0x21
2009c4 xor      rcx, rax
2009c7 imul     rcx, rsi
2009cb mov      rax, rcx
2009ce shr      rax, 0x21
2009d2 xor      rax, rcx
2009d5 xor      rax, r10
2009d8 inc      qword ptr [r14 + 0x268]
2009df mov      qword ptr [r14 + 0x260], rax
2009e6 inc      dword ptr [r14 + 0x200]
2009ed mov      eax, dword ptr [r14 + 0x200]
2009f4 cmp      eax, dword ptr [r14 + 0x1fc]
2009fb jb       0x140200a10
2009fd mov      rcx, r14
200a00 mov      dword ptr [r14 + 0x200], 0
200a0b call     0x1401ef7c0
200a10 mov      r8d, ebx
200a13 mov      edx, ebx
200a15 mov      rcx, r14
200a18 call     0x1401f0660
200a1d inc      qword ptr [r14 + 0x1b8]
200a24 mov      rcx, rbx
200a27 mov      r9, qword ptr [r14 + 0x1b0]
200a2e mov      rbp, r12
200a31 mov      r10, qword ptr [r14 + 0x1b8]
200a38 imul     r9, r15
200a3c add      r9, r12
200a3f lea      r12d, [rbx + 1]
200a43 mov      qword ptr [r14 + 0x1b0], r9
200a4a mov      rax, r9
200a4d shr      rax, 0x1b
200a51 movzx    edx, al
200a54 mov      byte ptr [r14 + 0x168], dl
200a5b mov      rdi, qword ptr [r14 + 0xe0]
200a62 mov      r11, qword ptr [r14 + 0xd8]
200a69 mov      rsi, qword ptr [r14 + 0xd0]
200a70 movzx    r15d, byte ptr [r14 + 0xe8]
200a78 imul     rdx, rdi
200a7c lea      rax, [r11 + r11*8]
200a80 xor      rdx, rax
200a83 xor      rdx, rsi
200a86 xor      rcx, rdx
200a89 test     r15b, r15b
200a8c lea      rax, [rbx + rdx]
200a90 cmove    rax, rcx
200a94 inc      r10
200a97 mov      qword ptr [r14 + 0x130], rax
200a9e mov      rcx, qword ptr [r14 + 0x1d0]
200aa5 mov      rax, qword ptr [r14 + 0x48]
200aa9 mov      qword ptr [rsp + 0x60], r10
200aae movzx    r8d, byte ptr [rcx + rbx]
200ab3 xor      r8b, byte ptr [rax + rbx]
200ab7 movabs   rax, 0x9e3779b97f4a7c15
200ac1 imul     r9, rax
200ac5 mov      qword ptr [r14 + 0x1b8], r10
200acc add      r9, rbp
200acf mov      rax, r9
200ad2 shr      rax, 0x1b
200ad6 movzx    edx, al
200ad9 lea      rax, [r11 + r11]
200add mov      byte ptr [r14 + 0x161], dl
200ae4 imul     rdx, rdi
200ae8 xor      rdx, rax
200aeb xor      rdx, rsi
200aee mov      rcx, rdx
200af1 xor      rcx, r12
200af4 test     r15b, r15b
200af7 lea      rax, [rdx + r12]
200afb cmove    rax, rcx
200aff mov      qword ptr [r14 + 0xf8], rax
200b06 movsxd   rdx, dword ptr [r14 + 0x11e0]
200b0d mov      r10, qword ptr [r14 + 0x20]
200b11 mov      rcx, rdx
200b14 xor      rcx, qword ptr [r14 + 0x350]
200b1b xor      rcx, r10
200b1e xor      rcx, r12
200b21 xor      rcx, qword ptr [r14 + 0x348]
200b28 mov      rax, rcx
200b2b shr      rax, 0x21
200b2f xor      rax, rcx
200b32 movabs   rcx, 0xff51afd7ed558ccd
200b3c imul     rax, rcx
200b40 mov      rcx, rax
200b43 shr      rcx, 0x21
200b47 xor      rcx, rax
200b4a movabs   rax, 0xc4ceb9fe1a85ec53
200b54 imul     rcx, rax
200b58 movzx    eax, r8b
200b5c mov      rbx, rcx
200b5f xor      rax, 0xdd
200b65 shr      rbx, 0x21
200b69 xor      rbx, rcx
200b6c lea      rcx, [rip - 0x200b73]
200b73 mov      qword ptr [r14 + 0x28], rbx
200b77 movzx    ebp, byte ptr [rax + rcx + 0x3ecf00]
200b7f xor      bpl, 0x63
200b83 inc      edx
200b85 mov      dword ptr [r14 + 0x11e0], edx
200b8c movabs   r8, 0xff51afd7ed558ccd
200b96 test     dl, 0x1f
200b99 jne      0x140200bdf
200b9b movsxd   rax, edx
200b9e xor      rax, r10
200ba1 xor      rax, qword ptr [r14 + 0x348]
200ba8 mov      rcx, rax
200bab shr      rcx, 0x21
200baf xor      rcx, rax
200bb2 movabs   rax, 0xc4ceb9fe1a85ec53
200bbc imul     rcx, r8
200bc0 mov      rdx, rcx
200bc3 shr      rdx, 0x21
200bc7 xor      rdx, rcx
200bca imul     rdx, rax
200bce mov      rax, rdx
200bd1 shr      rax, 0x21
200bd5 xor      rax, rdx
200bd8 mov      qword ptr [r14 + 0x348], rax
200bdf movzx    edx, bpl
200be3 xor      r10, rdx
200be6 mov      byte ptr [r14 + 0x4ad], bpl
200bed xor      r10, r12
200bf0 movabs   r12, 0xc4ceb9fe1a85ec53
200bfa mov      rax, r10
200bfd shr      rax, 0x21
200c01 xor      rax, r10
200c04 movabs   r10, 0x9e3779b97f4a7c15
200c0e imul     rax, r8
200c12 imul     rdx, r10
200c16 imul     r9, r10
200c1a mov      rcx, rax
200c1d shr      rcx, 0x21
200c21 xor      rcx, rax
200c24 imul     rcx, r12
200c28 mov      rax, rcx
200c2b shr      rax, 0x21
200c2f xor      rax, rcx
200c32 mov      ecx, dword ptr [r14 + 0x1178]
200c39 mov      qword ptr [r14 + 0x20], rax
200c3d movabs   rax, 0xd6e8feb86659fd93
200c47 imul     rcx, rax
200c4b xor      rcx, rdx
200c4e xor      rcx, rbx
200c51 movabs   rbx, 0x2545f4914f6cdd1d
200c5b mov      rax, rcx
200c5e add      r9, rbx
200c61 shr      rax, 0x21
200c65 xor      rax, rcx
200c68 imul     rax, r8
200c6c mov      rdx, rax
200c6f shr      rdx, 0x21
200c73 xor      rdx, rax
200c76 mov      rax, qword ptr [rsp + 0x60]
200c7b imul     rdx, r12
200c7f shr      rdx, 0x21
200c83 and      edx, 3
200c86 inc      rax
200c89 mov      qword ptr [r14 + 0x1b8], rax
200c90 cmp      bpl, 0x3e
200c94 jae      0x140200d2e
200c9a inc      qword ptr [r14 + 0x11a0]
200ca1 lea      rax, [rip - 0x200ca8]
200ca8 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
200cb0 mov      qword ptr [r14 + 0x1b0], r9
200cb7 shr      r9, 0x1b
200cbb movzx    eax, r9b
200cbf mov      byte ptr [r14 + 0x160], al
200cc6 imul     rax, rdi
200cca mov      ebx, edx
200ccc xor      rax, r11
200ccf xor      rax, rsi
200cd2 mov      rcx, rax
200cd5 add      rax, r8
200cd8 xor      rcx, r8
200cdb movzx    r8d, bpl
200cdf test     r15b, r15b
200ce2 cmove    rax, rcx
200ce6 mov      rcx, r14
200ce9 mov      qword ptr [r14 + 0xf0], rax
200cf0 call     0x1401f1f50
200cf5 mov      r8, qword ptr [rsp + 0x70]
200cfa lea      edx, [r13 - 1]
200cfe mov      eax, eax
200d00 imul     rcx, rbx, 0x3e
200d04 add      rcx, rax
200d07 mov      rax, qword ptr [r14 + 0x4b8]
200d0e movsxd   r9, dword ptr [rax + rcx*4]
200d12 mov      rcx, r14
200d15 movsxd   rax, dword ptr [r14 + 0x4c8]
200d1c xor      r9, rax
200d1f add      r9, qword ptr [r14 + 0x4c0]
200d26 call     r9
200d29 jmp      0x140200df5
200d2e inc      dword ptr [r14 + 0x11a8]
200d35 mov      rax, r9
200d38 shr      rax, 0x1b
200d3c movzx    ecx, al
200d3f lea      rax, [r11*4]
200d47 mov      byte ptr [r14 + 0x163], cl
200d4e imul     rcx, rdi
200d52 imul     r9, r10
200d56 xor      rcx, rax
200d59 xor      rcx, rsi
200d5c mov      qword ptr [r14 + 0x108], rcx
200d63 mov      r8, qword ptr [r14 + 0x1b8]
200d6a add      r9, rbx
200d6d mov      rax, r9
200d70 shr      rax, 0x1b
200d74 movzx    edx, al
200d77 mov      byte ptr [r14 + 0x16a], dl
200d7e imul     rax, r11, 0xb
200d82 imul     rdx, rdi
200d86 xor      rdx, rax
200d89 xor      rdx, rsi
200d8c mov      rcx, rdx
200d8f xor      rcx, 1
200d93 test     r15b, r15b
200d96 lea      rax, [rdx + 1]
200d9a cmove    rax, rcx
200d9e mov      qword ptr [r14 + 0x140], rax
200da5 lea      rax, [r8 + 2]
200da9 mov      qword ptr [r14 + 0x1b8], rax
200db0 imul     r9, r10
200db4 add      r9, rbx
200db7 mov      qword ptr [r14 + 0x1b0], r9
200dbe shr      r9, 0x1b
200dc2 movzx    eax, r9b
200dc6 mov      byte ptr [r14 + 0x160], al
200dcd imul     rax, rdi
200dd1 xor      rax, rsi
200dd4 xor      rax, r11
200dd7 mov      rcx, rax
200dda add      rax, 0xfe1ab
200de0 xor      rcx, 0xfe1ab
200de7 test     r15b, r15b
200dea cmove    rax, rcx
200dee mov      qword ptr [r14 + 0xf0], rax
200df5 mov      r12, qword ptr [rsp + 0x28]
200dfa mov      rsi, qword ptr [rsp + 0x68]
200dff mov      r15, qword ptr [rsp + 0x20]
200e04 add      rsp, 0x30
200e08 pop      r14
200e0a pop      r13
200e0c pop      rdi
200e0d pop      rbp
200e0e pop      rbx
200e0f ret      
200e10 mov      edx, 0x54485254
200e15 mov      rcx, r14
200e18 call     0x1401ed830
200e1d int3     
200e1e mov      edx, 0x43414e59
200e23 mov      rcx, r14
200e26 call     0x1401ed830
200e2b int3     
