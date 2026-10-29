000000014038e329 ba60000000               mov edx, 0x60
000000014038e32e 65488b042558000000       mov rax, qword ptr gs:[0x58]
000000014038e337 488b08                   mov rcx, qword ptr [rax]
000000014038e33a 488d842490010000         lea rax, [rsp + 0x190]
000000014038e342 4889040a                 mov qword ptr [rdx + rcx], rax
000000014038e346 48b83947e1a8f58e142b     movabs rax, 0x2b148ef5a8e14739
000000014038e350 483bf0                   cmp rsi, rax
000000014038e353 4c8bac24c8000000         mov r13, qword ptr [rsp + 0xc8]
000000014038e35b 7412                     je 0x14038e36f
000000014038e35d ba53545441               mov edx, 0x41545453
000000014038e362 488d8c2490010000         lea rcx, [rsp + 0x190]
000000014038e36a e8212dffff               call 0x140381090
