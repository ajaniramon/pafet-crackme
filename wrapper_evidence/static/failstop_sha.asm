14026e250 48895c2408 mov qword ptr [rsp + 8], rbx
14026e255 48896c2410 mov qword ptr [rsp + 0x10], rbp
14026e25a 4889742418 mov qword ptr [rsp + 0x18], rsi
14026e25f 48897c2420 mov qword ptr [rsp + 0x20], rdi
14026e264 4c6389740a0000 movsxd r9, dword ptr [rcx + 0xa74]
14026e26b 48becd8c55edd7af51ff movabs rsi, 0xff51afd7ed558ccd
14026e275 4c8b91900d0000 mov r10, qword ptr [rcx + 0xd90]
14026e27c 48bd53ec851afeb9cec4 movabs rbp, 0xc4ceb9fe1a85ec53
14026e286 4d8bc1 mov r8, r9
14026e289 48b8157c4a7fb979379e movabs rax, 0x9e3779b97f4a7c15
14026e293 4c0fafc0 imul r8, rax
14026e297 41f7d1 not r9d
14026e29a 4c338118020000 xor r8, qword ptr [rcx + 0x218]
14026e2a1 4c338108020000 xor r8, qword ptr [rcx + 0x208]
14026e2a8 4d33c2 xor r8, r10
14026e2ab 448989740a0000 mov dword ptr [rcx + 0xa74], r9d
14026e2b2 4c3381f80d0000 xor r8, qword ptr [rcx + 0xdf8]
14026e2b9 4c3381780a0000 xor r8, qword ptr [rcx + 0xa78]
14026e2c0 4c338110020000 xor r8, qword ptr [rcx + 0x210]
14026e2c7 4c33c2 xor r8, rdx
14026e2ca 498bc0 mov rax, r8
14026e2cd 48c1e821 shr rax, 0x21
14026e2d1 4933c0 xor rax, r8
14026e2d4 480fafc6 imul rax, rsi
14026e2d8 488bd0 mov rdx, rax
14026e2db 48c1ea21 shr rdx, 0x21
14026e2df 4833d0 xor rdx, rax
14026e2e2 480fafd5 imul rdx, rbp
14026e2e6 488bfa mov rdi, rdx
14026e2e9 48c1ef21 shr rdi, 0x21
14026e2ed 4833fa xor rdi, rdx
14026e2f0 488bc7 mov rax, rdi
14026e2f3 4889b9b00d0000 mov qword ptr [rcx + 0xdb0], rdi
14026e2fa 48f7d0 not rax
14026e2fd 4889b9f80d0000 mov qword ptr [rcx + 0xdf8], rdi
14026e304 488981780a0000 mov qword ptr [rcx + 0xa78], rax
14026e30b 4c33d7 xor r10, rdi
14026e30e 488bc7 mov rax, rdi
14026e311 4835544d454d xor rax, 0x4d454d54
14026e317 488bd0 mov rdx, rax
14026e31a 48c1ea21 shr rdx, 0x21
14026e31e 4833d0 xor rdx, rax
14026e321 480fafd6 imul rdx, rsi
14026e325 4c8bc2 mov r8, rdx
14026e328 49c1e821 shr r8, 0x21
14026e32c 4c33c2 xor r8, rdx
14026e32f 4c0fafc5 imul r8, rbp
14026e333 498bc0 mov rax, r8
14026e336 48c1e821 shr rax, 0x21
14026e33a 4933c0 xor rax, r8
14026e33d 488981000e0000 mov qword ptr [rcx + 0xe00], rax
14026e344 488bc7 mov rax, rdi
14026e347 483544414544 xor rax, 0x44454144
14026e34d 488bd0 mov rdx, rax
14026e350 48c1ea21 shr rdx, 0x21
14026e354 4833d0 xor rdx, rax
14026e357 480fafd6 imul rdx, rsi
14026e35b 4c8bc2 mov r8, rdx
14026e35e 49c1e821 shr r8, 0x21
14026e362 4c33c2 xor r8, rdx
14026e365 4c0fafc5 imul r8, rbp
14026e369 498bc0 mov rax, r8
14026e36c 48c1e821 shr rax, 0x21
14026e370 4933c0 xor rax, r8
14026e373 48898110020000 mov qword ptr [rcx + 0x210], rax
14026e37a 488bc7 mov rax, rdi
14026e37d 483381400d0000 xor rax, qword ptr [rcx + 0xd40]
14026e384 488bd0 mov rdx, rax
14026e387 48c1ea21 shr rdx, 0x21
14026e38b 4833d0 xor rdx, rax
14026e38e 480fafd6 imul rdx, rsi
14026e392 4c8bc2 mov r8, rdx
14026e395 49c1e821 shr r8, 0x21
14026e399 4c33c2 xor r8, rdx
14026e39c 4c0fafc5 imul r8, rbp
14026e3a0 498bc0 mov rax, r8
14026e3a3 48c1e821 shr rax, 0x21
14026e3a7 4933c0 xor rax, r8
14026e3aa 4883c801 or rax, 1
14026e3ae 488981400d0000 mov qword ptr [rcx + 0xd40], rax
14026e3b5 498bc2 mov rax, r10
14026e3b8 48c1e821 shr rax, 0x21
14026e3bc 4933c2 xor rax, r10
14026e3bf 480fafc6 imul rax, rsi
14026e3c3 488bd0 mov rdx, rax
14026e3c6 48c1ea21 shr rdx, 0x21
14026e3ca 4833d0 xor rdx, rax
14026e3cd 480fafd5 imul rdx, rbp
14026e3d1 488bc2 mov rax, rdx
14026e3d4 48c1e821 shr rax, 0x21
14026e3d8 4833c2 xor rax, rdx
14026e3db 4883c801 or rax, 1
14026e3df 488981900d0000 mov qword ptr [rcx + 0xd90], rax
14026e3e6 488bc7 mov rax, rdi
14026e3e9 48c1e821 shr rax, 0x21
14026e3ed 4833c7 xor rax, rdi
14026e3f0 480fafc6 imul rax, rsi
14026e3f4 488bd0 mov rdx, rax
14026e3f7 48c1ea21 shr rdx, 0x21
14026e3fb 4833d0 xor rdx, rax
14026e3fe 480fafd5 imul rdx, rbp
14026e402 488bc2 mov rax, rdx
14026e405 48c1e821 shr rax, 0x21
14026e409 4833c2 xor rax, rdx
14026e40c 488981d0000000 mov qword ptr [rcx + 0xd0], rax
14026e413 488d4701 lea rax, [rdi + 1]
14026e417 488bd0 mov rdx, rax
14026e41a 48c1ea21 shr rdx, 0x21
14026e41e 4833d0 xor rdx, rax
14026e421 480fafd6 imul rdx, rsi
14026e425 4c8bc2 mov r8, rdx
14026e428 49c1e821 shr r8, 0x21
14026e42c 4c33c2 xor r8, rdx
14026e42f 4c0fafc5 imul r8, rbp
14026e433 498bc0 mov rax, r8
14026e436 48c1e821 shr rax, 0x21
14026e43a 4933c0 xor rax, r8
14026e43d 488981d8000000 mov qword ptr [rcx + 0xd8], rax
14026e444 488d4702 lea rax, [rdi + 2]
14026e448 488bd0 mov rdx, rax
14026e44b 48c1ea21 shr rdx, 0x21
14026e44f 4833d0 xor rdx, rax
14026e452 480fafd6 imul rdx, rsi
14026e456 4c8bc2 mov r8, rdx
14026e459 49c1e821 shr r8, 0x21
14026e45d 4c33c2 xor r8, rdx
14026e460 4c0fafc5 imul r8, rbp
14026e464 498bc0 mov rax, r8
14026e467 48c1e821 shr rax, 0x21
14026e46b 4933c0 xor rax, r8
14026e46e 488981e0000000 mov qword ptr [rcx + 0xe0], rax
14026e475 488d4703 lea rax, [rdi + 3]
14026e479 488bd0 mov rdx, rax
14026e47c 48c1ea21 shr rdx, 0x21
14026e480 4833d0 xor rdx, rax
14026e483 480fafd6 imul rdx, rsi
14026e487 4c8bc2 mov r8, rdx
14026e48a 49c1e821 shr r8, 0x21
14026e48e 4c33c2 xor r8, rdx
14026e491 4c0fafc5 imul r8, rbp
14026e495 498bc0 mov rax, r8
14026e498 48c1e821 shr rax, 0x21
14026e49c 4933c0 xor rax, r8
14026e49f 488981e8000000 mov qword ptr [rcx + 0xe8], rax
14026e4a6 488d4704 lea rax, [rdi + 4]
14026e4aa 488bd0 mov rdx, rax
14026e4ad 48c1ea21 shr rdx, 0x21
14026e4b1 4833d0 xor rdx, rax
14026e4b4 480fafd6 imul rdx, rsi
14026e4b8 4c8bc2 mov r8, rdx
14026e4bb 49c1e821 shr r8, 0x21
14026e4bf 4c33c2 xor r8, rdx
14026e4c2 4c0fafc5 imul r8, rbp
14026e4c6 498bc0 mov rax, r8
14026e4c9 48c1e821 shr rax, 0x21
14026e4cd 4933c0 xor rax, r8
14026e4d0 488981f0000000 mov qword ptr [rcx + 0xf0], rax
14026e4d7 488d4705 lea rax, [rdi + 5]
14026e4db 488bd0 mov rdx, rax
14026e4de 48c1ea21 shr rdx, 0x21
14026e4e2 4833d0 xor rdx, rax
14026e4e5 480fafd6 imul rdx, rsi
14026e4e9 4c8bc2 mov r8, rdx
14026e4ec 49c1e821 shr r8, 0x21
14026e4f0 4c33c2 xor r8, rdx
14026e4f3 4c0fafc5 imul r8, rbp
14026e4f7 498bc0 mov rax, r8
14026e4fa 48c1e821 shr rax, 0x21
14026e4fe 4933c0 xor rax, r8
14026e501 488981f8000000 mov qword ptr [rcx + 0xf8], rax
14026e508 488d4706 lea rax, [rdi + 6]
14026e50c 488bd0 mov rdx, rax
14026e50f 48c1ea21 shr rdx, 0x21
14026e513 4833d0 xor rdx, rax
14026e516 480fafd6 imul rdx, rsi
14026e51a 4c8bc2 mov r8, rdx
14026e51d 49c1e821 shr r8, 0x21
14026e521 4c33c2 xor r8, rdx
14026e524 4c0fafc5 imul r8, rbp
14026e528 498bc0 mov rax, r8
14026e52b 48c1e821 shr rax, 0x21
14026e52f 4933c0 xor rax, r8
14026e532 48898100010000 mov qword ptr [rcx + 0x100], rax
14026e539 488d4707 lea rax, [rdi + 7]
14026e53d 488bd0 mov rdx, rax
14026e540 48c1ea21 shr rdx, 0x21
14026e544 4833d0 xor rdx, rax
14026e547 480fafd6 imul rdx, rsi
14026e54b 4c8bc2 mov r8, rdx
14026e54e 49c1e821 shr r8, 0x21
14026e552 4c33c2 xor r8, rdx
14026e555 4c0fafc5 imul r8, rbp
14026e559 498bc0 mov rax, r8
14026e55c 48c1e821 shr rax, 0x21
14026e560 4933c0 xor rax, r8
14026e563 48898108010000 mov qword ptr [rcx + 0x108], rax
14026e56a 488d4708 lea rax, [rdi + 8]
14026e56e 488bd0 mov rdx, rax
14026e571 48c1ea21 shr rdx, 0x21
14026e575 4833d0 xor rdx, rax
14026e578 480fafd6 imul rdx, rsi
14026e57c 4c8bc2 mov r8, rdx
14026e57f 49c1e821 shr r8, 0x21
14026e583 4c33c2 xor r8, rdx
14026e586 4c0fafc5 imul r8, rbp
14026e58a 498bc0 mov rax, r8
14026e58d 48c1e821 shr rax, 0x21
14026e591 4933c0 xor rax, r8
14026e594 48898110010000 mov qword ptr [rcx + 0x110], rax
14026e59b 488d4709 lea rax, [rdi + 9]
14026e59f 488bd0 mov rdx, rax
14026e5a2 48c1ea21 shr rdx, 0x21
14026e5a6 4833d0 xor rdx, rax
14026e5a9 480fafd6 imul rdx, rsi
14026e5ad 4c8bc2 mov r8, rdx
14026e5b0 49c1e821 shr r8, 0x21
14026e5b4 4c33c2 xor r8, rdx
14026e5b7 4c0fafc5 imul r8, rbp
14026e5bb 498bc0 mov rax, r8
14026e5be 48c1e821 shr rax, 0x21
14026e5c2 4933c0 xor rax, r8
14026e5c5 48898118010000 mov qword ptr [rcx + 0x118], rax
14026e5cc 488d470a lea rax, [rdi + 0xa]
14026e5d0 488bd0 mov rdx, rax
14026e5d3 48c1ea21 shr rdx, 0x21
14026e5d7 4833d0 xor rdx, rax
14026e5da 480fafd6 imul rdx, rsi
14026e5de 4c8bc2 mov r8, rdx
14026e5e1 49c1e821 shr r8, 0x21
14026e5e5 4c33c2 xor r8, rdx
14026e5e8 4c0fafc5 imul r8, rbp
14026e5ec 498bc0 mov rax, r8
14026e5ef 48c1e821 shr rax, 0x21
14026e5f3 4933c0 xor rax, r8
14026e5f6 48898120010000 mov qword ptr [rcx + 0x120], rax
14026e5fd 488d470b lea rax, [rdi + 0xb]
14026e601 488bd0 mov rdx, rax
14026e604 48c1ea21 shr rdx, 0x21
14026e608 4833d0 xor rdx, rax
14026e60b 480fafd6 imul rdx, rsi
14026e60f 4c8bc2 mov r8, rdx
14026e612 49c1e821 shr r8, 0x21
14026e616 4c33c2 xor r8, rdx
14026e619 4c0fafc5 imul r8, rbp
14026e61d 498bc0 mov rax, r8
14026e620 48c1e821 shr rax, 0x21
14026e624 4933c0 xor rax, r8
14026e627 48898128010000 mov qword ptr [rcx + 0x128], rax
14026e62e 4c8d8f00100000 lea r9, [rdi + 0x1000]
14026e635 488d470c lea rax, [rdi + 0xc]
14026e639 bb00020000 mov ebx, 0x200
14026e63e 488bd0 mov rdx, rax
14026e641 48c1ea21 shr rdx, 0x21
14026e645 4833d0 xor rdx, rax
14026e648 480fafd6 imul rdx, rsi
14026e64c 4c8bc2 mov r8, rdx
14026e64f 49c1e821 shr r8, 0x21
14026e653 4c33c2 xor r8, rdx
14026e656 4c0fafc5 imul r8, rbp
14026e65a 498bc0 mov rax, r8
14026e65d 48c1e821 shr rax, 0x21
14026e661 4933c0 xor rax, r8
14026e664 48898130010000 mov qword ptr [rcx + 0x130], rax
14026e66b 488d470d lea rax, [rdi + 0xd]
14026e66f 488bd0 mov rdx, rax
14026e672 48c1ea21 shr rdx, 0x21
14026e676 4833d0 xor rdx, rax
14026e679 480fafd6 imul rdx, rsi
14026e67d 4c8bc2 mov r8, rdx
14026e680 49c1e821 shr r8, 0x21
14026e684 4c33c2 xor r8, rdx
14026e687 4c0fafc5 imul r8, rbp
14026e68b 498bc0 mov rax, r8
14026e68e 48c1e821 shr rax, 0x21
14026e692 4933c0 xor rax, r8
14026e695 4533d2 xor r10d, r10d
14026e698 48898138010000 mov qword ptr [rcx + 0x138], rax
14026e69f 458bda mov r11d, r10d
14026e6a2 498bc1 mov rax, r9
14026e6a5 4d8d5b08 lea r11, [r11 + 8]
14026e6a9 48c1e821 shr rax, 0x21
14026e6ad 4933c1 xor rax, r9
14026e6b0 49ffc1 inc r9
14026e6b3 480fafc6 imul rax, rsi
14026e6b7 4c8bc0 mov r8, rax
14026e6ba 49c1e821 shr r8, 0x21
14026e6be 4c33c0 xor r8, rax
14026e6c1 488b81e00d0000 mov rax, qword ptr [rcx + 0xde0]
14026e6c8 4c0fafc5 imul r8, rbp
14026e6cc 498bd0 mov rdx, r8
14026e6cf 48c1ea21 shr rdx, 0x21
14026e6d3 4933d0 xor rdx, r8
14026e6d6 49895403f8 mov qword ptr [r11 + rax - 8], rdx
14026e6db 4883eb01 sub rbx, 1
14026e6df 75c1 jne 0x14026e6a2
14026e6e1 4c8d8f00200000 lea r9, [rdi + 0x2000]
14026e6e8 41bb00040000 mov r11d, 0x400
14026e6ee 6690 nop 
14026e6f0 498bc1 mov rax, r9
14026e6f3 4d8d5208 lea r10, [r10 + 8]
14026e6f7 48c1e821 shr rax, 0x21
14026e6fb 4933c1 xor rax, r9
14026e6fe 49ffc1 inc r9
14026e701 480fafc6 imul rax, rsi
14026e705 4c8bc0 mov r8, rax
14026e708 49c1e821 shr r8, 0x21
14026e70c 4c33c0 xor r8, rax
14026e70f 488b81e80d0000 mov rax, qword ptr [rcx + 0xde8]
14026e716 4c0fafc5 imul r8, rbp
14026e71a 498bd0 mov rdx, r8
14026e71d 48c1ea21 shr rdx, 0x21
14026e721 4933d0 xor rdx, r8
14026e724 49895402f8 mov qword ptr [r10 + rax - 8], rdx
14026e729 4983eb01 sub r11, 1
14026e72d 75c1 jne 0x14026e6f0
14026e72f 488bc7 mov rax, rdi
14026e732 25f80f0000 and eax, 0xff8
14026e737 488938 mov qword ptr [rax], rdi
14026e73a 660f1f440000 nop word ptr [rax + rax]
14026e740 488b8110020000 mov rax, qword ptr [rcx + 0x210]
14026e747 f791740a0000 not dword ptr [rcx + 0xa74]
14026e74d 48ffc0 inc rax
14026e750 488bd0 mov rdx, rax
14026e753 48c1ea21 shr rdx, 0x21
14026e757 4833d0 xor rdx, rax
14026e75a 480fafd6 imul rdx, rsi
14026e75e 4c8bc2 mov r8, rdx
14026e761 49c1e821 shr r8, 0x21
14026e765 4c33c2 xor r8, rdx
14026e768 4c0fafc5 imul r8, rbp
14026e76c 498bc0 mov rax, r8
14026e76f 48c1e821 shr rax, 0x21
14026e773 4933c0 xor rax, r8
14026e776 48898110020000 mov qword ptr [rcx + 0x210], rax
14026e77d ebc1 jmp 0x14026e740
