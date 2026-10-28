1401ed830 48895c2408 mov qword ptr [rsp + 8], rbx
1401ed835 48896c2410 mov qword ptr [rsp + 0x10], rbp
1401ed83a 4889742418 mov qword ptr [rsp + 0x18], rsi
1401ed83f 48897c2420 mov qword ptr [rsp + 0x20], rdi
1401ed844 4c6389e0110000 movsxd r9, dword ptr [rcx + 0x11e0]
1401ed84b 48becd8c55edd7af51ff movabs rsi, 0xff51afd7ed558ccd
1401ed855 4c8b9160020000 mov r10, qword ptr [rcx + 0x260]
1401ed85c 48bd53ec851afeb9cec4 movabs rbp, 0xc4ceb9fe1a85ec53
1401ed866 4d8bc1 mov r8, r9
1401ed869 48b8157c4a7fb979379e movabs rax, 0x9e3779b97f4a7c15
1401ed873 4c0fafc0 imul r8, rax
1401ed877 41f7d1 not r9d
1401ed87a 4c338150030000 xor r8, qword ptr [rcx + 0x350]
1401ed881 4c338140030000 xor r8, qword ptr [rcx + 0x340]
1401ed888 4d33c2 xor r8, r10
1401ed88b 448989e0110000 mov dword ptr [rcx + 0x11e0], r9d
1401ed892 4c3381e8110000 xor r8, qword ptr [rcx + 0x11e8]
1401ed899 4c3381b8110000 xor r8, qword ptr [rcx + 0x11b8]
1401ed8a0 4c338148030000 xor r8, qword ptr [rcx + 0x348]
1401ed8a7 4c33c2 xor r8, rdx
1401ed8aa 498bc0 mov rax, r8
1401ed8ad 48c1e821 shr rax, 0x21
1401ed8b1 4933c0 xor rax, r8
1401ed8b4 480fafc6 imul rax, rsi
1401ed8b8 488bd0 mov rdx, rax
1401ed8bb 48c1ea21 shr rdx, 0x21
1401ed8bf 4833d0 xor rdx, rax
1401ed8c2 480fafd5 imul rdx, rbp
1401ed8c6 488bfa mov rdi, rdx
1401ed8c9 48c1ef21 shr rdi, 0x21
1401ed8cd 4833fa xor rdi, rdx
1401ed8d0 488bc7 mov rax, rdi
1401ed8d3 48897920 mov qword ptr [rcx + 0x20], rdi
1401ed8d7 48f7d0 not rax
1401ed8da 4889b9b8110000 mov qword ptr [rcx + 0x11b8], rdi
1401ed8e1 488981e8110000 mov qword ptr [rcx + 0x11e8], rax
1401ed8e8 4c33d7 xor r10, rdi
1401ed8eb 488bc7 mov rax, rdi
1401ed8ee 4835544d454d xor rax, 0x4d454d54
1401ed8f4 488bd0 mov rdx, rax
1401ed8f7 48c1ea21 shr rdx, 0x21
1401ed8fb 4833d0 xor rdx, rax
1401ed8fe 480fafd6 imul rdx, rsi
1401ed902 4c8bc2 mov r8, rdx
1401ed905 49c1e821 shr r8, 0x21
1401ed909 4c33c2 xor r8, rdx
1401ed90c 4c0fafc5 imul r8, rbp
1401ed910 498bc0 mov rax, r8
1401ed913 48c1e821 shr rax, 0x21
1401ed917 4933c0 xor rax, r8
1401ed91a 488981c0110000 mov qword ptr [rcx + 0x11c0], rax
1401ed921 488bc7 mov rax, rdi
1401ed924 483544414544 xor rax, 0x44454144
1401ed92a 488bd0 mov rdx, rax
1401ed92d 48c1ea21 shr rdx, 0x21
1401ed931 4833d0 xor rdx, rax
1401ed934 480fafd6 imul rdx, rsi
1401ed938 4c8bc2 mov r8, rdx
1401ed93b 49c1e821 shr r8, 0x21
1401ed93f 4c33c2 xor r8, rdx
1401ed942 4c0fafc5 imul r8, rbp
1401ed946 498bc0 mov rax, r8
1401ed949 48c1e821 shr rax, 0x21
1401ed94d 4933c0 xor rax, r8
1401ed950 48898148030000 mov qword ptr [rcx + 0x348], rax
1401ed957 488bc7 mov rax, rdi
1401ed95a 483381c80a0000 xor rax, qword ptr [rcx + 0xac8]
1401ed961 488bd0 mov rdx, rax
1401ed964 48c1ea21 shr rdx, 0x21
1401ed968 4833d0 xor rdx, rax
1401ed96b 480fafd6 imul rdx, rsi
1401ed96f 4c8bc2 mov r8, rdx
1401ed972 49c1e821 shr r8, 0x21
1401ed976 4c33c2 xor r8, rdx
1401ed979 4c0fafc5 imul r8, rbp
1401ed97d 498bc0 mov rax, r8
1401ed980 48c1e821 shr rax, 0x21
1401ed984 4933c0 xor rax, r8
1401ed987 4883c801 or rax, 1
1401ed98b 488981c80a0000 mov qword ptr [rcx + 0xac8], rax
1401ed992 498bc2 mov rax, r10
1401ed995 48c1e821 shr rax, 0x21
1401ed999 4933c2 xor rax, r10
1401ed99c 480fafc6 imul rax, rsi
1401ed9a0 488bd0 mov rdx, rax
1401ed9a3 48c1ea21 shr rdx, 0x21
1401ed9a7 4833d0 xor rdx, rax
1401ed9aa 480fafd5 imul rdx, rbp
1401ed9ae 488bc2 mov rax, rdx
1401ed9b1 48c1e821 shr rax, 0x21
1401ed9b5 4833c2 xor rax, rdx
1401ed9b8 4883c801 or rax, 1
1401ed9bc 48898160020000 mov qword ptr [rcx + 0x260], rax
1401ed9c3 488bc7 mov rax, rdi
1401ed9c6 48c1e821 shr rax, 0x21
1401ed9ca 4833c7 xor rax, rdi
1401ed9cd 480fafc6 imul rax, rsi
1401ed9d1 488bd0 mov rdx, rax
1401ed9d4 48c1ea21 shr rdx, 0x21
1401ed9d8 4833d0 xor rdx, rax
1401ed9db 480fafd5 imul rdx, rbp
1401ed9df 488bc2 mov rax, rdx
1401ed9e2 48c1e821 shr rax, 0x21
1401ed9e6 4833c2 xor rax, rdx
1401ed9e9 488981f0000000 mov qword ptr [rcx + 0xf0], rax
1401ed9f0 488d4701 lea rax, [rdi + 1]
1401ed9f4 488bd0 mov rdx, rax
1401ed9f7 48c1ea21 shr rdx, 0x21
1401ed9fb 4833d0 xor rdx, rax
1401ed9fe 480fafd6 imul rdx, rsi
1401eda02 4c8bc2 mov r8, rdx
1401eda05 49c1e821 shr r8, 0x21
1401eda09 4c33c2 xor r8, rdx
1401eda0c 4c0fafc5 imul r8, rbp
1401eda10 498bc0 mov rax, r8
1401eda13 48c1e821 shr rax, 0x21
1401eda17 4933c0 xor rax, r8
1401eda1a 488981f8000000 mov qword ptr [rcx + 0xf8], rax
1401eda21 488d4702 lea rax, [rdi + 2]
1401eda25 488bd0 mov rdx, rax
1401eda28 48c1ea21 shr rdx, 0x21
1401eda2c 4833d0 xor rdx, rax
1401eda2f 480fafd6 imul rdx, rsi
1401eda33 4c8bc2 mov r8, rdx
1401eda36 49c1e821 shr r8, 0x21
1401eda3a 4c33c2 xor r8, rdx
1401eda3d 4c0fafc5 imul r8, rbp
1401eda41 498bc0 mov rax, r8
1401eda44 48c1e821 shr rax, 0x21
1401eda48 4933c0 xor rax, r8
1401eda4b 48898100010000 mov qword ptr [rcx + 0x100], rax
1401eda52 488d4703 lea rax, [rdi + 3]
1401eda56 488bd0 mov rdx, rax
1401eda59 48c1ea21 shr rdx, 0x21
1401eda5d 4833d0 xor rdx, rax
1401eda60 480fafd6 imul rdx, rsi
1401eda64 4c8bc2 mov r8, rdx
1401eda67 49c1e821 shr r8, 0x21
1401eda6b 4c33c2 xor r8, rdx
1401eda6e 4c0fafc5 imul r8, rbp
1401eda72 498bc0 mov rax, r8
1401eda75 48c1e821 shr rax, 0x21
1401eda79 4933c0 xor rax, r8
1401eda7c 48898108010000 mov qword ptr [rcx + 0x108], rax
1401eda83 488d4704 lea rax, [rdi + 4]
1401eda87 488bd0 mov rdx, rax
1401eda8a 48c1ea21 shr rdx, 0x21
1401eda8e 4833d0 xor rdx, rax
1401eda91 480fafd6 imul rdx, rsi
1401eda95 4c8bc2 mov r8, rdx
1401eda98 49c1e821 shr r8, 0x21
1401eda9c 4c33c2 xor r8, rdx
1401eda9f 4c0fafc5 imul r8, rbp
1401edaa3 498bc0 mov rax, r8
1401edaa6 48c1e821 shr rax, 0x21
1401edaaa 4933c0 xor rax, r8
1401edaad 48898110010000 mov qword ptr [rcx + 0x110], rax
1401edab4 488d4705 lea rax, [rdi + 5]
1401edab8 488bd0 mov rdx, rax
1401edabb 48c1ea21 shr rdx, 0x21
1401edabf 4833d0 xor rdx, rax
1401edac2 480fafd6 imul rdx, rsi
1401edac6 4c8bc2 mov r8, rdx
1401edac9 49c1e821 shr r8, 0x21
1401edacd 4c33c2 xor r8, rdx
1401edad0 4c0fafc5 imul r8, rbp
1401edad4 498bc0 mov rax, r8
1401edad7 48c1e821 shr rax, 0x21
1401edadb 4933c0 xor rax, r8
1401edade 48898118010000 mov qword ptr [rcx + 0x118], rax
1401edae5 488d4706 lea rax, [rdi + 6]
1401edae9 488bd0 mov rdx, rax
1401edaec 48c1ea21 shr rdx, 0x21
1401edaf0 4833d0 xor rdx, rax
1401edaf3 480fafd6 imul rdx, rsi
1401edaf7 4c8bc2 mov r8, rdx
1401edafa 49c1e821 shr r8, 0x21
1401edafe 4c33c2 xor r8, rdx
1401edb01 4c0fafc5 imul r8, rbp
1401edb05 498bc0 mov rax, r8
1401edb08 48c1e821 shr rax, 0x21
1401edb0c 4933c0 xor rax, r8
1401edb0f 48898120010000 mov qword ptr [rcx + 0x120], rax
1401edb16 488d4707 lea rax, [rdi + 7]
1401edb1a 488bd0 mov rdx, rax
1401edb1d 48c1ea21 shr rdx, 0x21
1401edb21 4833d0 xor rdx, rax
1401edb24 480fafd6 imul rdx, rsi
1401edb28 4c8bc2 mov r8, rdx
1401edb2b 49c1e821 shr r8, 0x21
1401edb2f 4c33c2 xor r8, rdx
1401edb32 4c0fafc5 imul r8, rbp
1401edb36 498bc0 mov rax, r8
1401edb39 48c1e821 shr rax, 0x21
1401edb3d 4933c0 xor rax, r8
1401edb40 48898128010000 mov qword ptr [rcx + 0x128], rax
1401edb47 488d4708 lea rax, [rdi + 8]
1401edb4b 488bd0 mov rdx, rax
1401edb4e 48c1ea21 shr rdx, 0x21
1401edb52 4833d0 xor rdx, rax
1401edb55 480fafd6 imul rdx, rsi
1401edb59 4c8bc2 mov r8, rdx
1401edb5c 49c1e821 shr r8, 0x21
1401edb60 4c33c2 xor r8, rdx
1401edb63 4c0fafc5 imul r8, rbp
1401edb67 498bc0 mov rax, r8
1401edb6a 48c1e821 shr rax, 0x21
1401edb6e 4933c0 xor rax, r8
1401edb71 48898130010000 mov qword ptr [rcx + 0x130], rax
1401edb78 488d4709 lea rax, [rdi + 9]
1401edb7c 488bd0 mov rdx, rax
1401edb7f 48c1ea21 shr rdx, 0x21
1401edb83 4833d0 xor rdx, rax
1401edb86 480fafd6 imul rdx, rsi
1401edb8a 4c8bc2 mov r8, rdx
1401edb8d 49c1e821 shr r8, 0x21
1401edb91 4c33c2 xor r8, rdx
1401edb94 4c0fafc5 imul r8, rbp
1401edb98 498bc0 mov rax, r8
1401edb9b 48c1e821 shr rax, 0x21
1401edb9f 4933c0 xor rax, r8
1401edba2 48898138010000 mov qword ptr [rcx + 0x138], rax
1401edba9 488d470a lea rax, [rdi + 0xa]
1401edbad 488bd0 mov rdx, rax
1401edbb0 48c1ea21 shr rdx, 0x21
1401edbb4 4833d0 xor rdx, rax
1401edbb7 480fafd6 imul rdx, rsi
1401edbbb 4c8bc2 mov r8, rdx
1401edbbe 49c1e821 shr r8, 0x21
1401edbc2 4c33c2 xor r8, rdx
1401edbc5 4c0fafc5 imul r8, rbp
1401edbc9 498bc0 mov rax, r8
1401edbcc 48c1e821 shr rax, 0x21
1401edbd0 4933c0 xor rax, r8
1401edbd3 48898140010000 mov qword ptr [rcx + 0x140], rax
1401edbda 488d470b lea rax, [rdi + 0xb]
1401edbde 488bd0 mov rdx, rax
1401edbe1 48c1ea21 shr rdx, 0x21
1401edbe5 4833d0 xor rdx, rax
1401edbe8 480fafd6 imul rdx, rsi
1401edbec 4c8bc2 mov r8, rdx
1401edbef 49c1e821 shr r8, 0x21
1401edbf3 4c33c2 xor r8, rdx
1401edbf6 4c0fafc5 imul r8, rbp
1401edbfa 498bc0 mov rax, r8
1401edbfd 48c1e821 shr rax, 0x21
1401edc01 4933c0 xor rax, r8
1401edc04 48898148010000 mov qword ptr [rcx + 0x148], rax
1401edc0b 4c8d8f00100000 lea r9, [rdi + 0x1000]
1401edc12 488d470c lea rax, [rdi + 0xc]
1401edc16 bb00020000 mov ebx, 0x200
1401edc1b 488bd0 mov rdx, rax
1401edc1e 48c1ea21 shr rdx, 0x21
1401edc22 4833d0 xor rdx, rax
1401edc25 480fafd6 imul rdx, rsi
1401edc29 4c8bc2 mov r8, rdx
1401edc2c 49c1e821 shr r8, 0x21
1401edc30 4c33c2 xor r8, rdx
1401edc33 4c0fafc5 imul r8, rbp
1401edc37 498bc0 mov rax, r8
1401edc3a 48c1e821 shr rax, 0x21
1401edc3e 4933c0 xor rax, r8
1401edc41 48898150010000 mov qword ptr [rcx + 0x150], rax
1401edc48 488d470d lea rax, [rdi + 0xd]
1401edc4c 488bd0 mov rdx, rax
1401edc4f 48c1ea21 shr rdx, 0x21
1401edc53 4833d0 xor rdx, rax
1401edc56 480fafd6 imul rdx, rsi
1401edc5a 4c8bc2 mov r8, rdx
1401edc5d 49c1e821 shr r8, 0x21
1401edc61 4c33c2 xor r8, rdx
1401edc64 4c0fafc5 imul r8, rbp
1401edc68 498bc0 mov rax, r8
1401edc6b 48c1e821 shr rax, 0x21
1401edc6f 4933c0 xor rax, r8
1401edc72 4533d2 xor r10d, r10d
1401edc75 48898158010000 mov qword ptr [rcx + 0x158], rax
1401edc7c 458bda mov r11d, r10d
1401edc7f 90 nop 
1401edc80 498bc1 mov rax, r9
1401edc83 4d8d5b08 lea r11, [r11 + 8]
1401edc87 48c1e821 shr rax, 0x21
1401edc8b 4933c1 xor rax, r9
1401edc8e 49ffc1 inc r9
1401edc91 480fafc6 imul rax, rsi
1401edc95 4c8bc0 mov r8, rax
1401edc98 49c1e821 shr r8, 0x21
1401edc9c 4c33c0 xor r8, rax
1401edc9f 488b8180010000 mov rax, qword ptr [rcx + 0x180]
1401edca6 4c0fafc5 imul r8, rbp
1401edcaa 498bd0 mov rdx, r8
1401edcad 48c1ea21 shr rdx, 0x21
1401edcb1 4933d0 xor rdx, r8
1401edcb4 49895403f8 mov qword ptr [r11 + rax - 8], rdx
1401edcb9 4883eb01 sub rbx, 1
1401edcbd 75c1 jne 0x1401edc80
1401edcbf 4c8d8f00200000 lea r9, [rdi + 0x2000]
1401edcc6 41bb00040000 mov r11d, 0x400
1401edccc 0f1f4000 nop dword ptr [rax]
1401edcd0 498bc1 mov rax, r9
1401edcd3 4d8d5208 lea r10, [r10 + 8]
1401edcd7 48c1e821 shr rax, 0x21
1401edcdb 4933c1 xor rax, r9
1401edcde 49ffc1 inc r9
1401edce1 480fafc6 imul rax, rsi
1401edce5 4c8bc0 mov r8, rax
1401edce8 49c1e821 shr r8, 0x21
1401edcec 4c33c0 xor r8, rax
1401edcef 488b8188010000 mov rax, qword ptr [rcx + 0x188]
1401edcf6 4c0fafc5 imul r8, rbp
1401edcfa 498bd0 mov rdx, r8
1401edcfd 48c1ea21 shr rdx, 0x21
1401edd01 4933d0 xor rdx, r8
1401edd04 49895402f8 mov qword ptr [r10 + rax - 8], rdx
1401edd09 4983eb01 sub r11, 1
1401edd0d 75c1 jne 0x1401edcd0
1401edd0f 488bc7 mov rax, rdi
1401edd12 25f80f0000 and eax, 0xff8
1401edd17 488938 mov qword ptr [rax], rdi
1401edd1a 660f1f440000 nop word ptr [rax + rax]
1401edd20 488b8148030000 mov rax, qword ptr [rcx + 0x348]
1401edd27 f791e0110000 not dword ptr [rcx + 0x11e0]
1401edd2d 48ffc0 inc rax
1401edd30 488bd0 mov rdx, rax
1401edd33 48c1ea21 shr rdx, 0x21
1401edd37 4833d0 xor rdx, rax
1401edd3a 480fafd6 imul rdx, rsi
1401edd3e 4c8bc2 mov r8, rdx
1401edd41 49c1e821 shr r8, 0x21
1401edd45 4c33c2 xor r8, rdx
1401edd48 4c0fafc5 imul r8, rbp
1401edd4c 498bc0 mov rax, r8
1401edd4f 48c1e821 shr rax, 0x21
1401edd53 4933c0 xor rax, r8
1401edd56 48898148030000 mov qword ptr [rcx + 0x348], rax
1401edd5d ebc1 jmp 0x1401edd20
