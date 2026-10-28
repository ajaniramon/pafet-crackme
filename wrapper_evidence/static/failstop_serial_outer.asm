1402338d0 48895c2408 mov qword ptr [rsp + 8], rbx
1402338d5 48896c2410 mov qword ptr [rsp + 0x10], rbp
1402338da 4889742418 mov qword ptr [rsp + 0x18], rsi
1402338df 48897c2420 mov qword ptr [rsp + 0x20], rdi
1402338e4 4c6389c8060000 movsxd r9, dword ptr [rcx + 0x6c8]
1402338eb 48becd8c55edd7af51ff movabs rsi, 0xff51afd7ed558ccd
1402338f5 4c8b91080d0000 mov r10, qword ptr [rcx + 0xd08]
1402338fc 48bd53ec851afeb9cec4 movabs rbp, 0xc4ceb9fe1a85ec53
140233906 4d8bc1 mov r8, r9
140233909 48b8157c4a7fb979379e movabs rax, 0x9e3779b97f4a7c15
140233913 4c0fafc0 imul r8, rax
140233917 41f7d1 not r9d
14023391a 4c3381d0050000 xor r8, qword ptr [rcx + 0x5d0]
140233921 4c3381c0050000 xor r8, qword ptr [rcx + 0x5c0]
140233928 4d33c2 xor r8, r10
14023392b 448989c8060000 mov dword ptr [rcx + 0x6c8], r9d
140233932 4c3381d0060000 xor r8, qword ptr [rcx + 0x6d0]
140233939 4c3381a8060000 xor r8, qword ptr [rcx + 0x6a8]
140233940 4c3381c8050000 xor r8, qword ptr [rcx + 0x5c8]
140233947 4c33c2 xor r8, rdx
14023394a 498bc0 mov rax, r8
14023394d 48c1e821 shr rax, 0x21
140233951 4933c0 xor rax, r8
140233954 480fafc6 imul rax, rsi
140233958 488bd0 mov rdx, rax
14023395b 48c1ea21 shr rdx, 0x21
14023395f 4833d0 xor rdx, rax
140233962 480fafd5 imul rdx, rbp
140233966 488bfa mov rdi, rdx
140233969 48c1ef21 shr rdi, 0x21
14023396d 4833fa xor rdi, rdx
140233970 488bc7 mov rax, rdi
140233973 48897910 mov qword ptr [rcx + 0x10], rdi
140233977 48f7d0 not rax
14023397a 4889b9a8060000 mov qword ptr [rcx + 0x6a8], rdi
140233981 488981d0060000 mov qword ptr [rcx + 0x6d0], rax
140233988 4c33d7 xor r10, rdi
14023398b 488bc7 mov rax, rdi
14023398e 4835544d454d xor rax, 0x4d454d54
140233994 488bd0 mov rdx, rax
140233997 48c1ea21 shr rdx, 0x21
14023399b 4833d0 xor rdx, rax
14023399e 480fafd6 imul rdx, rsi
1402339a2 4c8bc2 mov r8, rdx
1402339a5 49c1e821 shr r8, 0x21
1402339a9 4c33c2 xor r8, rdx
1402339ac 4c0fafc5 imul r8, rbp
1402339b0 498bc0 mov rax, r8
1402339b3 48c1e821 shr rax, 0x21
1402339b7 4933c0 xor rax, r8
1402339ba 488981b0060000 mov qword ptr [rcx + 0x6b0], rax
1402339c1 488bc7 mov rax, rdi
1402339c4 483544414544 xor rax, 0x44454144
1402339ca 488bd0 mov rdx, rax
1402339cd 48c1ea21 shr rdx, 0x21
1402339d1 4833d0 xor rdx, rax
1402339d4 480fafd6 imul rdx, rsi
1402339d8 4c8bc2 mov r8, rdx
1402339db 49c1e821 shr r8, 0x21
1402339df 4c33c2 xor r8, rdx
1402339e2 4c0fafc5 imul r8, rbp
1402339e6 498bc0 mov rax, r8
1402339e9 48c1e821 shr rax, 0x21
1402339ed 4933c0 xor rax, r8
1402339f0 488981c8050000 mov qword ptr [rcx + 0x5c8], rax
1402339f7 488bc7 mov rax, rdi
1402339fa 48338180030000 xor rax, qword ptr [rcx + 0x380]
140233a01 488bd0 mov rdx, rax
140233a04 48c1ea21 shr rdx, 0x21
140233a08 4833d0 xor rdx, rax
140233a0b 480fafd6 imul rdx, rsi
140233a0f 4c8bc2 mov r8, rdx
140233a12 49c1e821 shr r8, 0x21
140233a16 4c33c2 xor r8, rdx
140233a19 4c0fafc5 imul r8, rbp
140233a1d 498bc0 mov rax, r8
140233a20 48c1e821 shr rax, 0x21
140233a24 4933c0 xor rax, r8
140233a27 4883c801 or rax, 1
140233a2b 48898180030000 mov qword ptr [rcx + 0x380], rax
140233a32 498bc2 mov rax, r10
140233a35 48c1e821 shr rax, 0x21
140233a39 4933c2 xor rax, r10
140233a3c 480fafc6 imul rax, rsi
140233a40 488bd0 mov rdx, rax
140233a43 48c1ea21 shr rdx, 0x21
140233a47 4833d0 xor rdx, rax
140233a4a 480fafd5 imul rdx, rbp
140233a4e 488bc2 mov rax, rdx
140233a51 48c1e821 shr rax, 0x21
140233a55 4833c2 xor rax, rdx
140233a58 4883c801 or rax, 1
140233a5c 488981080d0000 mov qword ptr [rcx + 0xd08], rax
140233a63 488bc7 mov rax, rdi
140233a66 48c1e821 shr rax, 0x21
140233a6a 4833c7 xor rax, rdi
140233a6d 480fafc6 imul rax, rsi
140233a71 488bd0 mov rdx, rax
140233a74 48c1ea21 shr rdx, 0x21
140233a78 4833d0 xor rdx, rax
140233a7b 480fafd5 imul rdx, rbp
140233a7f 488bc2 mov rax, rdx
140233a82 48c1e821 shr rax, 0x21
140233a86 4833c2 xor rax, rdx
140233a89 488981b00d0000 mov qword ptr [rcx + 0xdb0], rax
140233a90 488d4701 lea rax, [rdi + 1]
140233a94 488bd0 mov rdx, rax
140233a97 48c1ea21 shr rdx, 0x21
140233a9b 4833d0 xor rdx, rax
140233a9e 480fafd6 imul rdx, rsi
140233aa2 4c8bc2 mov r8, rdx
140233aa5 49c1e821 shr r8, 0x21
140233aa9 4c33c2 xor r8, rdx
140233aac 4c0fafc5 imul r8, rbp
140233ab0 498bc0 mov rax, r8
140233ab3 48c1e821 shr rax, 0x21
140233ab7 4933c0 xor rax, r8
140233aba 488981b80d0000 mov qword ptr [rcx + 0xdb8], rax
140233ac1 488d4702 lea rax, [rdi + 2]
140233ac5 488bd0 mov rdx, rax
140233ac8 48c1ea21 shr rdx, 0x21
140233acc 4833d0 xor rdx, rax
140233acf 480fafd6 imul rdx, rsi
140233ad3 4c8bc2 mov r8, rdx
140233ad6 49c1e821 shr r8, 0x21
140233ada 4c33c2 xor r8, rdx
140233add 4c0fafc5 imul r8, rbp
140233ae1 498bc0 mov rax, r8
140233ae4 48c1e821 shr rax, 0x21
140233ae8 4933c0 xor rax, r8
140233aeb 488981c00d0000 mov qword ptr [rcx + 0xdc0], rax
140233af2 488d4703 lea rax, [rdi + 3]
140233af6 488bd0 mov rdx, rax
140233af9 48c1ea21 shr rdx, 0x21
140233afd 4833d0 xor rdx, rax
140233b00 480fafd6 imul rdx, rsi
140233b04 4c8bc2 mov r8, rdx
140233b07 49c1e821 shr r8, 0x21
140233b0b 4c33c2 xor r8, rdx
140233b0e 4c0fafc5 imul r8, rbp
140233b12 498bc0 mov rax, r8
140233b15 48c1e821 shr rax, 0x21
140233b19 4933c0 xor rax, r8
140233b1c 488981c80d0000 mov qword ptr [rcx + 0xdc8], rax
140233b23 488d4704 lea rax, [rdi + 4]
140233b27 488bd0 mov rdx, rax
140233b2a 48c1ea21 shr rdx, 0x21
140233b2e 4833d0 xor rdx, rax
140233b31 480fafd6 imul rdx, rsi
140233b35 4c8bc2 mov r8, rdx
140233b38 49c1e821 shr r8, 0x21
140233b3c 4c33c2 xor r8, rdx
140233b3f 4c0fafc5 imul r8, rbp
140233b43 498bc0 mov rax, r8
140233b46 48c1e821 shr rax, 0x21
140233b4a 4933c0 xor rax, r8
140233b4d 488981d00d0000 mov qword ptr [rcx + 0xdd0], rax
140233b54 488d4705 lea rax, [rdi + 5]
140233b58 488bd0 mov rdx, rax
140233b5b 48c1ea21 shr rdx, 0x21
140233b5f 4833d0 xor rdx, rax
140233b62 480fafd6 imul rdx, rsi
140233b66 4c8bc2 mov r8, rdx
140233b69 49c1e821 shr r8, 0x21
140233b6d 4c33c2 xor r8, rdx
140233b70 4c0fafc5 imul r8, rbp
140233b74 498bc0 mov rax, r8
140233b77 48c1e821 shr rax, 0x21
140233b7b 4933c0 xor rax, r8
140233b7e 488981d80d0000 mov qword ptr [rcx + 0xdd8], rax
140233b85 488d4706 lea rax, [rdi + 6]
140233b89 488bd0 mov rdx, rax
140233b8c 48c1ea21 shr rdx, 0x21
140233b90 4833d0 xor rdx, rax
140233b93 480fafd6 imul rdx, rsi
140233b97 4c8bc2 mov r8, rdx
140233b9a 49c1e821 shr r8, 0x21
140233b9e 4c33c2 xor r8, rdx
140233ba1 4c0fafc5 imul r8, rbp
140233ba5 498bc0 mov rax, r8
140233ba8 48c1e821 shr rax, 0x21
140233bac 4933c0 xor rax, r8
140233baf 488981e00d0000 mov qword ptr [rcx + 0xde0], rax
140233bb6 488d4707 lea rax, [rdi + 7]
140233bba 488bd0 mov rdx, rax
140233bbd 48c1ea21 shr rdx, 0x21
140233bc1 4833d0 xor rdx, rax
140233bc4 480fafd6 imul rdx, rsi
140233bc8 4c8bc2 mov r8, rdx
140233bcb 49c1e821 shr r8, 0x21
140233bcf 4c33c2 xor r8, rdx
140233bd2 4c0fafc5 imul r8, rbp
140233bd6 498bc0 mov rax, r8
140233bd9 48c1e821 shr rax, 0x21
140233bdd 4933c0 xor rax, r8
140233be0 488981e80d0000 mov qword ptr [rcx + 0xde8], rax
140233be7 488d4708 lea rax, [rdi + 8]
140233beb 488bd0 mov rdx, rax
140233bee 48c1ea21 shr rdx, 0x21
140233bf2 4833d0 xor rdx, rax
140233bf5 480fafd6 imul rdx, rsi
140233bf9 4c8bc2 mov r8, rdx
140233bfc 49c1e821 shr r8, 0x21
140233c00 4c33c2 xor r8, rdx
140233c03 4c0fafc5 imul r8, rbp
140233c07 498bc0 mov rax, r8
140233c0a 48c1e821 shr rax, 0x21
140233c0e 4933c0 xor rax, r8
140233c11 488981f00d0000 mov qword ptr [rcx + 0xdf0], rax
140233c18 488d4709 lea rax, [rdi + 9]
140233c1c 488bd0 mov rdx, rax
140233c1f 48c1ea21 shr rdx, 0x21
140233c23 4833d0 xor rdx, rax
140233c26 480fafd6 imul rdx, rsi
140233c2a 4c8bc2 mov r8, rdx
140233c2d 49c1e821 shr r8, 0x21
140233c31 4c33c2 xor r8, rdx
140233c34 4c0fafc5 imul r8, rbp
140233c38 498bc0 mov rax, r8
140233c3b 48c1e821 shr rax, 0x21
140233c3f 4933c0 xor rax, r8
140233c42 488981f80d0000 mov qword ptr [rcx + 0xdf8], rax
140233c49 488d470a lea rax, [rdi + 0xa]
140233c4d 488bd0 mov rdx, rax
140233c50 48c1ea21 shr rdx, 0x21
140233c54 4833d0 xor rdx, rax
140233c57 480fafd6 imul rdx, rsi
140233c5b 4c8bc2 mov r8, rdx
140233c5e 49c1e821 shr r8, 0x21
140233c62 4c33c2 xor r8, rdx
140233c65 4c0fafc5 imul r8, rbp
140233c69 498bc0 mov rax, r8
140233c6c 48c1e821 shr rax, 0x21
140233c70 4933c0 xor rax, r8
140233c73 488981000e0000 mov qword ptr [rcx + 0xe00], rax
140233c7a 488d470b lea rax, [rdi + 0xb]
140233c7e 488bd0 mov rdx, rax
140233c81 48c1ea21 shr rdx, 0x21
140233c85 4833d0 xor rdx, rax
140233c88 480fafd6 imul rdx, rsi
140233c8c 4c8bc2 mov r8, rdx
140233c8f 49c1e821 shr r8, 0x21
140233c93 4c33c2 xor r8, rdx
140233c96 4c0fafc5 imul r8, rbp
140233c9a 498bc0 mov rax, r8
140233c9d 48c1e821 shr rax, 0x21
140233ca1 4933c0 xor rax, r8
140233ca4 488981080e0000 mov qword ptr [rcx + 0xe08], rax
140233cab 4c8d8f00100000 lea r9, [rdi + 0x1000]
140233cb2 488d470c lea rax, [rdi + 0xc]
140233cb6 bb00020000 mov ebx, 0x200
140233cbb 488bd0 mov rdx, rax
140233cbe 48c1ea21 shr rdx, 0x21
140233cc2 4833d0 xor rdx, rax
140233cc5 480fafd6 imul rdx, rsi
140233cc9 4c8bc2 mov r8, rdx
140233ccc 49c1e821 shr r8, 0x21
140233cd0 4c33c2 xor r8, rdx
140233cd3 4c0fafc5 imul r8, rbp
140233cd7 498bc0 mov rax, r8
140233cda 48c1e821 shr rax, 0x21
140233cde 4933c0 xor rax, r8
140233ce1 488981100e0000 mov qword ptr [rcx + 0xe10], rax
140233ce8 488d470d lea rax, [rdi + 0xd]
140233cec 488bd0 mov rdx, rax
140233cef 48c1ea21 shr rdx, 0x21
140233cf3 4833d0 xor rdx, rax
140233cf6 480fafd6 imul rdx, rsi
140233cfa 4c8bc2 mov r8, rdx
140233cfd 49c1e821 shr r8, 0x21
140233d01 4c33c2 xor r8, rdx
140233d04 4c0fafc5 imul r8, rbp
140233d08 498bc0 mov rax, r8
140233d0b 48c1e821 shr rax, 0x21
140233d0f 4933c0 xor rax, r8
140233d12 4533d2 xor r10d, r10d
140233d15 488981180e0000 mov qword ptr [rcx + 0xe18], rax
140233d1c 458bda mov r11d, r10d
140233d1f 90 nop 
140233d20 498bc1 mov rax, r9
140233d23 4d8d5b08 lea r11, [r11 + 8]
140233d27 48c1e821 shr rax, 0x21
140233d2b 4933c1 xor rax, r9
140233d2e 49ffc1 inc r9
140233d31 480fafc6 imul rax, rsi
140233d35 4c8bc0 mov r8, rax
140233d38 49c1e821 shr r8, 0x21
140233d3c 4c33c0 xor r8, rax
140233d3f 488b81280d0000 mov rax, qword ptr [rcx + 0xd28]
140233d46 4c0fafc5 imul r8, rbp
140233d4a 498bd0 mov rdx, r8
140233d4d 48c1ea21 shr rdx, 0x21
140233d51 4933d0 xor rdx, r8
140233d54 49895403f8 mov qword ptr [r11 + rax - 8], rdx
140233d59 4883eb01 sub rbx, 1
140233d5d 75c1 jne 0x140233d20
140233d5f 4c8d8f00200000 lea r9, [rdi + 0x2000]
140233d66 41bb00040000 mov r11d, 0x400
140233d6c 0f1f4000 nop dword ptr [rax]
140233d70 498bc1 mov rax, r9
140233d73 4d8d5208 lea r10, [r10 + 8]
140233d77 48c1e821 shr rax, 0x21
140233d7b 4933c1 xor rax, r9
140233d7e 49ffc1 inc r9
140233d81 480fafc6 imul rax, rsi
140233d85 4c8bc0 mov r8, rax
140233d88 49c1e821 shr r8, 0x21
140233d8c 4c33c0 xor r8, rax
140233d8f 488b81300d0000 mov rax, qword ptr [rcx + 0xd30]
140233d96 4c0fafc5 imul r8, rbp
140233d9a 498bd0 mov rdx, r8
140233d9d 48c1ea21 shr rdx, 0x21
140233da1 4933d0 xor rdx, r8
140233da4 49895402f8 mov qword ptr [r10 + rax - 8], rdx
140233da9 4983eb01 sub r11, 1
140233dad 75c1 jne 0x140233d70
140233daf 488bc7 mov rax, rdi
140233db2 25f80f0000 and eax, 0xff8
140233db7 488938 mov qword ptr [rax], rdi
140233dba 660f1f440000 nop word ptr [rax + rax]
140233dc0 488b81c8050000 mov rax, qword ptr [rcx + 0x5c8]
140233dc7 f791c8060000 not dword ptr [rcx + 0x6c8]
140233dcd 48ffc0 inc rax
140233dd0 488bd0 mov rdx, rax
140233dd3 48c1ea21 shr rdx, 0x21
140233dd7 4833d0 xor rdx, rax
140233dda 480fafd6 imul rdx, rsi
140233dde 4c8bc2 mov r8, rdx
140233de1 49c1e821 shr r8, 0x21
140233de5 4c33c2 xor r8, rdx
140233de8 4c0fafc5 imul r8, rbp
140233dec 498bc0 mov rax, r8
140233def 48c1e821 shr rax, 0x21
140233df3 4933c0 xor rax, r8
140233df6 488981c8050000 mov qword ptr [rcx + 0x5c8], rax
140233dfd ebc1 jmp 0x140233dc0
