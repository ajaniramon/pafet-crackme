00000001400811c4  mov ecx, dword ptr [rsp + 0x630]
00000001400811cb  and ecx, 7
00000001400811ce  lea rdx, [rip - 0x811d5]
00000001400811d5  mov rax, qword ptr [rdx + rcx*8 + 0x3dbca0]
00000001400811dd  mov qword ptr [rsp + 0xb38], rax
00000001400811e5  lea eax, [rcx + 1]
00000001400811e8  and eax, 7
00000001400811eb  mov rax, qword ptr [rdx + rax*8 + 0x3dbca0]
00000001400811f3  mov qword ptr [rsp + 0xb40], rax
00000001400811fb  lea eax, [rcx + 2]
00000001400811fe  and eax, 7
0000000140081201  mov rax, qword ptr [rdx + rax*8 + 0x3dbca0]
0000000140081209  mov qword ptr [rsp + 0xb48], rax
0000000140081211  lea eax, [rcx + 3]
0000000140081214  and eax, 7
0000000140081217  mov rax, qword ptr [rdx + rax*8 + 0x3dbca0]
000000014008121f  mov qword ptr [rsp + 0xb50], rax
0000000140081227  lea eax, [rcx - 4]
000000014008122a  and eax, 7
000000014008122d  mov rax, qword ptr [rdx + rax*8 + 0x3dbca0]
0000000140081235  mov qword ptr [rsp + 0xb58], rax
000000014008123d  lea eax, [rcx - 3]
0000000140081240  and eax, 7
0000000140081243  mov rax, qword ptr [rdx + rax*8 + 0x3dbca0]
000000014008124b  mov qword ptr [rsp + 0xb60], rax
0000000140081253  lea eax, [rcx - 2]
0000000140081256  and eax, 7
0000000140081259  mov rax, qword ptr [rdx + rax*8 + 0x3dbca0]
0000000140081261  mov qword ptr [rsp + 0xb68], rax
0000000140081269  lea eax, [rcx - 1]
000000014008126c  and eax, 7
000000014008126f  mov rax, qword ptr [rdx + rax*8 + 0x3dbca0]
0000000140081277  mov qword ptr [rsp + 0xb70], rax
