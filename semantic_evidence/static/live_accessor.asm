0000000140381630 4c8bd9                   mov r11, rcx
0000000140381633 4c63c2                   movsxd r8, edx
0000000140381636 8d4201                   lea eax, [rdx + 1]
0000000140381639 4c63d0                   movsxd r10, eax
000000014038163c 498bc2                   mov rax, r10
000000014038163f 480faf4160               imul rax, qword ptr [rcx + 0x60]
0000000140381644 4e8b4cc178               mov r9, qword ptr [rcx + r8*8 + 0x78]
0000000140381649 410fb69408e8000000       movzx edx, byte ptr [r8 + rcx + 0xe8]
0000000140381652 480faf5168               imul rdx, qword ptr [rcx + 0x68]
0000000140381657 4833d0                   xor rdx, rax
000000014038165a 48335158                 xor rdx, qword ptr [rcx + 0x58]
000000014038165e 488bc2                   mov rax, rdx
0000000140381661 4933c1                   xor rax, r9
0000000140381664 4c2bca                   sub r9, rdx
0000000140381667 80797000                 cmp byte ptr [rcx + 0x70], 0
000000014038166b 48b9157c4a7fb979379e     movabs rcx, 0x9e3779b97f4a7c15
0000000140381675 4c0f44c8                 cmove r9, rax
0000000140381679 498b8340070000           mov rax, qword ptr [r11 + 0x740]
0000000140381680 49ff8348070000           inc qword ptr [r11 + 0x748]
0000000140381687 480fafc1                 imul rax, rcx
000000014038168b 48b91ddd6c4f91f44525     movabs rcx, 0x2545f4914f6cdd1d
0000000140381695 4803c1                   add rax, rcx
0000000140381698 49898340070000           mov qword ptr [r11 + 0x740], rax
000000014038169f 48c1e81b                 shr rax, 0x1b
00000001403816a3 0fb6c8                   movzx ecx, al
00000001403816a6 498bc1                   mov rax, r9
00000001403816a9 43888c18e8000000         mov byte ptr [r8 + r11 + 0xe8], cl
00000001403816b1 490faf4b68               imul rcx, qword ptr [r11 + 0x68]
00000001403816b6 4d0faf5360               imul r10, qword ptr [r11 + 0x60]
00000001403816bb 4933ca                   xor rcx, r10
00000001403816be 49334b58                 xor rcx, qword ptr [r11 + 0x58]
00000001403816c2 488bd1                   mov rdx, rcx
00000001403816c5 4903c9                   add rcx, r9
00000001403816c8 4933d1                   xor rdx, r9
00000001403816cb 41807b7000               cmp byte ptr [r11 + 0x70], 0
00000001403816d0 480f44ca                 cmove rcx, rdx
00000001403816d4 4b894cc378               mov qword ptr [r11 + r8*8 + 0x78], rcx
00000001403816d9 c3                       ret
