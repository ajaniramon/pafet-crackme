1400029a0 mov qword ptr [rsp + 8], rbx
1400029a5 mov qword ptr [rsp + 0x10], rbp
1400029aa mov qword ptr [rsp + 0x18], rsi
1400029af mov qword ptr [rsp + 0x20], rdi
1400029b4 movsxd r9, dword ptr [rcx + 0x154]
1400029bb movabs rsi, 0xff51afd7ed558ccd
1400029c5 mov r10, qword ptr [rcx + 0x688]
1400029cc movabs rbp, 0xc4ceb9fe1a85ec53
1400029d6 mov r8, r9
1400029d9 movabs rax, 0x9e3779b97f4a7c15
1400029e3 imul r8, rax
1400029e7 not r9d
1400029ea xor r8, qword ptr [rcx + 0xce8]
1400029f1 xor r8, qword ptr [rcx + 0xcd8]
1400029f8 xor r8, r10
1400029fb mov dword ptr [rcx + 0x154], r9d
140002a02 xor r8, qword ptr [rcx + 0x1170]
140002a09 xor r8, qword ptr [rcx + 0xce0]
140002a10 xor r8, qword ptr [rcx + 0x158]
140002a17 xor r8, rdx
140002a1a mov rax, r8
140002a1d shr rax, 0x21
140002a21 xor rax, r8
140002a24 imul rax, rsi
140002a28 mov rdx, rax
140002a2b shr rdx, 0x21
140002a2f xor rdx, rax
140002a32 imul rdx, rbp
140002a36 mov rdi, rdx
140002a39 shr rdi, 0x21
140002a3d xor rdi, rdx
140002a40 mov rax, rdi
140002a43 mov qword ptr [rcx + 0xd8], rdi
140002a4a not rax
140002a4d mov qword ptr [rcx + 0x1170], rdi
140002a54 mov qword ptr [rcx + 0x158], rax
140002a5b xor r10, rdi
140002a5e mov rax, rdi
140002a61 xor rax, 0x4d454d54
140002a67 mov rdx, rax
140002a6a shr rdx, 0x21
140002a6e xor rdx, rax
140002a71 imul rdx, rsi
140002a75 mov r8, rdx
140002a78 shr r8, 0x21
140002a7c xor r8, rdx
140002a7f imul r8, rbp
140002a83 mov rax, r8
140002a86 shr rax, 0x21
140002a8a xor rax, r8
140002a8d mov qword ptr [rcx + 0x1178], rax
140002a94 mov rax, rdi
140002a97 xor rax, 0x44454144
140002a9d mov rdx, rax
140002aa0 shr rdx, 0x21
140002aa4 xor rdx, rax
140002aa7 imul rdx, rsi
140002aab mov r8, rdx
140002aae shr r8, 0x21
140002ab2 xor r8, rdx
140002ab5 imul r8, rbp
140002ab9 mov rax, r8
140002abc shr rax, 0x21
140002ac0 xor rax, r8
140002ac3 mov qword ptr [rcx + 0xce0], rax
140002aca mov rax, rdi
140002acd xor rax, qword ptr [rcx + 0x5b0]
140002ad4 mov rdx, rax
140002ad7 shr rdx, 0x21
140002adb xor rdx, rax
140002ade imul rdx, rsi
140002ae2 mov r8, rdx
140002ae5 shr r8, 0x21
140002ae9 xor r8, rdx
140002aec imul r8, rbp
140002af0 mov rax, r8
140002af3 shr rax, 0x21
140002af7 xor rax, r8
140002afa or rax, 1
140002afe mov qword ptr [rcx + 0x5b0], rax
140002b05 mov rax, r10
140002b08 shr rax, 0x21
140002b0c xor rax, r10
140002b0f imul rax, rsi
140002b13 mov rdx, rax
140002b16 shr rdx, 0x21
140002b1a xor rdx, rax
140002b1d imul rdx, rbp
140002b21 mov rax, rdx
140002b24 shr rax, 0x21
140002b28 xor rax, rdx
140002b2b or rax, 1
140002b2f mov qword ptr [rcx + 0x688], rax
140002b36 mov rax, rdi
140002b39 shr rax, 0x21
140002b3d xor rax, rdi
140002b40 imul rax, rsi
140002b44 mov rdx, rax
140002b47 shr rdx, 0x21
140002b4b xor rdx, rax
140002b4e imul rdx, rbp
140002b52 mov rax, rdx
140002b55 shr rax, 0x21
140002b59 xor rax, rdx
140002b5c mov qword ptr [rcx + 0x208], rax
140002b63 lea rax, [rdi + 1]
140002b67 mov rdx, rax
140002b6a shr rdx, 0x21
140002b6e xor rdx, rax
140002b71 imul rdx, rsi
140002b75 mov r8, rdx
140002b78 shr r8, 0x21
140002b7c xor r8, rdx
140002b7f imul r8, rbp
140002b83 mov rax, r8
140002b86 shr rax, 0x21
140002b8a xor rax, r8
140002b8d mov qword ptr [rcx + 0x210], rax
140002b94 lea rax, [rdi + 2]
140002b98 mov rdx, rax
140002b9b shr rdx, 0x21
140002b9f xor rdx, rax
140002ba2 imul rdx, rsi
140002ba6 mov r8, rdx
140002ba9 shr r8, 0x21
140002bad xor r8, rdx
140002bb0 imul r8, rbp
140002bb4 mov rax, r8
140002bb7 shr rax, 0x21
140002bbb xor rax, r8
140002bbe mov qword ptr [rcx + 0x218], rax
140002bc5 lea rax, [rdi + 3]
140002bc9 mov rdx, rax
140002bcc shr rdx, 0x21
140002bd0 xor rdx, rax
140002bd3 imul rdx, rsi
140002bd7 mov r8, rdx
140002bda shr r8, 0x21
140002bde xor r8, rdx
140002be1 imul r8, rbp
140002be5 mov rax, r8
140002be8 shr rax, 0x21
140002bec xor rax, r8
140002bef mov qword ptr [rcx + 0x220], rax
140002bf6 lea rax, [rdi + 4]
140002bfa mov rdx, rax
140002bfd shr rdx, 0x21
140002c01 xor rdx, rax
140002c04 imul rdx, rsi
140002c08 mov r8, rdx
140002c0b shr r8, 0x21
140002c0f xor r8, rdx
140002c12 imul r8, rbp
140002c16 mov rax, r8
140002c19 shr rax, 0x21
140002c1d xor rax, r8
140002c20 mov qword ptr [rcx + 0x228], rax
140002c27 lea rax, [rdi + 5]
140002c2b mov rdx, rax
140002c2e shr rdx, 0x21
140002c32 xor rdx, rax
140002c35 imul rdx, rsi
140002c39 mov r8, rdx
140002c3c shr r8, 0x21
140002c40 xor r8, rdx
140002c43 imul r8, rbp
140002c47 mov rax, r8
140002c4a shr rax, 0x21
140002c4e xor rax, r8
140002c51 mov qword ptr [rcx + 0x230], rax
140002c58 lea rax, [rdi + 6]
140002c5c mov rdx, rax
140002c5f shr rdx, 0x21
140002c63 xor rdx, rax
140002c66 imul rdx, rsi
140002c6a mov r8, rdx
140002c6d shr r8, 0x21
140002c71 xor r8, rdx
140002c74 imul r8, rbp
140002c78 mov rax, r8
140002c7b shr rax, 0x21
140002c7f xor rax, r8
140002c82 mov qword ptr [rcx + 0x238], rax
140002c89 lea rax, [rdi + 7]
140002c8d mov rdx, rax
140002c90 shr rdx, 0x21
140002c94 xor rdx, rax
140002c97 imul rdx, rsi
140002c9b mov r8, rdx
140002c9e shr r8, 0x21
140002ca2 xor r8, rdx
140002ca5 imul r8, rbp
140002ca9 mov rax, r8
140002cac shr rax, 0x21
140002cb0 xor rax, r8
140002cb3 mov qword ptr [rcx + 0x240], rax
140002cba lea rax, [rdi + 8]
140002cbe mov rdx, rax
140002cc1 shr rdx, 0x21
140002cc5 xor rdx, rax
140002cc8 imul rdx, rsi
140002ccc mov r8, rdx
140002ccf shr r8, 0x21
140002cd3 xor r8, rdx
140002cd6 imul r8, rbp
140002cda mov rax, r8
140002cdd shr rax, 0x21
140002ce1 xor rax, r8
140002ce4 mov qword ptr [rcx + 0x248], rax
140002ceb lea rax, [rdi + 9]
140002cef mov rdx, rax
140002cf2 shr rdx, 0x21
140002cf6 xor rdx, rax
140002cf9 imul rdx, rsi
140002cfd mov r8, rdx
140002d00 shr r8, 0x21
140002d04 xor r8, rdx
140002d07 imul r8, rbp
140002d0b mov rax, r8
140002d0e shr rax, 0x21
140002d12 xor rax, r8
140002d15 mov qword ptr [rcx + 0x250], rax
140002d1c lea rax, [rdi + 0xa]
140002d20 mov rdx, rax
140002d23 shr rdx, 0x21
140002d27 xor rdx, rax
140002d2a imul rdx, rsi
140002d2e mov r8, rdx
140002d31 shr r8, 0x21
140002d35 xor r8, rdx
140002d38 imul r8, rbp
140002d3c mov rax, r8
140002d3f shr rax, 0x21
140002d43 xor rax, r8
140002d46 mov qword ptr [rcx + 0x258], rax
140002d4d lea rax, [rdi + 0xb]
140002d51 mov rdx, rax
140002d54 shr rdx, 0x21
140002d58 xor rdx, rax
140002d5b imul rdx, rsi
140002d5f mov r8, rdx
140002d62 shr r8, 0x21
140002d66 xor r8, rdx
140002d69 imul r8, rbp
140002d6d mov rax, r8
140002d70 shr rax, 0x21
140002d74 xor rax, r8
140002d77 mov qword ptr [rcx + 0x260], rax
140002d7e lea r9, [rdi + 0x1000]
140002d85 lea rax, [rdi + 0xc]
140002d89 mov ebx, 0x200
140002d8e mov rdx, rax
140002d91 shr rdx, 0x21
140002d95 xor rdx, rax
140002d98 imul rdx, rsi
140002d9c mov r8, rdx
140002d9f shr r8, 0x21
140002da3 xor r8, rdx
140002da6 imul r8, rbp
140002daa mov rax, r8
140002dad shr rax, 0x21
140002db1 xor rax, r8
140002db4 mov qword ptr [rcx + 0x268], rax
140002dbb lea rax, [rdi + 0xd]
140002dbf mov rdx, rax
140002dc2 shr rdx, 0x21
140002dc6 xor rdx, rax
140002dc9 imul rdx, rsi
140002dcd mov r8, rdx
140002dd0 shr r8, 0x21
140002dd4 xor r8, rdx
140002dd7 imul r8, rbp
140002ddb mov rax, r8
140002dde shr rax, 0x21
140002de2 xor rax, r8
140002de5 xor r10d, r10d
140002de8 mov qword ptr [rcx + 0x270], rax
140002def mov r11d, r10d
140002df2 mov rax, r9
140002df5 lea r11, [r11 + 8]
140002df9 shr rax, 0x21
140002dfd xor rax, r9
140002e00 inc r9
140002e03 imul rax, rsi
140002e07 mov r8, rax
140002e0a shr r8, 0x21
140002e0e xor r8, rax
140002e11 mov rax, qword ptr [rcx + 0x1158]
140002e18 imul r8, rbp
140002e1c mov rdx, r8
140002e1f shr rdx, 0x21
140002e23 xor rdx, r8
140002e26 mov qword ptr [r11 + rax - 8], rdx
140002e2b sub rbx, 1
140002e2f jne 0x140002df2
140002e31 lea r9, [rdi + 0x2000]
140002e38 mov r11d, 0x400
140002e3e nop 
140002e40 mov rax, r9
140002e43 lea r10, [r10 + 8]
140002e47 shr rax, 0x21
140002e4b xor rax, r9
140002e4e inc r9
140002e51 imul rax, rsi
140002e55 mov r8, rax
140002e58 shr r8, 0x21
140002e5c xor r8, rax
140002e5f mov rax, qword ptr [rcx + 0x1160]
140002e66 imul r8, rbp
140002e6a mov rdx, r8
140002e6d shr rdx, 0x21
140002e71 xor rdx, r8
140002e74 mov qword ptr [r10 + rax - 8], rdx
140002e79 sub r11, 1
140002e7d jne 0x140002e40
140002e7f mov rax, rdi
140002e82 and eax, 0xff8
140002e87 mov qword ptr [rax], rdi
140002e8a nop word ptr [rax + rax]
140002e90 mov rax, qword ptr [rcx + 0xce0]
140002e97 not dword ptr [rcx + 0x154]
140002e9d inc rax
140002ea0 mov rdx, rax
140002ea3 shr rdx, 0x21
140002ea7 xor rdx, rax
140002eaa imul rdx, rsi
140002eae mov r8, rdx
140002eb1 shr r8, 0x21
140002eb5 xor r8, rdx
140002eb8 imul r8, rbp
140002ebc mov rax, r8
140002ebf shr rax, 0x21
140002ec3 xor rax, r8
140002ec6 mov qword ptr [rcx + 0xce0], rax
140002ecd jmp 0x140002e90
