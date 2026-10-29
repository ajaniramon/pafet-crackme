000000014038b8b0 48895c2410               mov qword ptr [rsp + 0x10], rbx
000000014038b8b5 57                       push rdi
000000014038b8b6 4883ec20                 sub rsp, 0x20
000000014038b8ba 4863815c050000           movsxd rax, dword ptr [rcx + 0x55c]
000000014038b8c1 488bf9                   mov rdi, rcx
000000014038b8c4 48b9f40cf7e9c6cd8519     movabs rcx, 0x1985cdc6e9f70cf4
000000014038b8ce 480fafc1                 imul rax, rcx
000000014038b8d2 48b9cb8829680d47dcbb     movabs rcx, 0xbbdc470d682988cb
000000014038b8dc 48338730050000           xor rax, qword ptr [rdi + 0x530]
000000014038b8e3 4889442430               mov qword ptr [rsp + 0x30], rax
000000014038b8e8 488b442430               mov rax, qword ptr [rsp + 0x30]
000000014038b8ed 4863875c050000           movsxd rax, dword ptr [rdi + 0x55c]
000000014038b8f4 480fafc1                 imul rax, rcx
000000014038b8f8 48b9de0462eb53d9145d     movabs rcx, 0x5d14d953eb6204de
000000014038b902 48338730050000           xor rax, qword ptr [rdi + 0x530]
000000014038b909 4889442430               mov qword ptr [rsp + 0x30], rax
000000014038b90e 488b442430               mov rax, qword ptr [rsp + 0x30]
000000014038b913 4863875c050000           movsxd rax, dword ptr [rdi + 0x55c]
000000014038b91a 480fafc1                 imul rax, rcx
000000014038b91e 48b9baa962bf2fb92c69     movabs rcx, 0x692cb92fbf62a9ba
000000014038b928 48338730050000           xor rax, qword ptr [rdi + 0x530]
000000014038b92f 4889442430               mov qword ptr [rsp + 0x30], rax
000000014038b934 488b442430               mov rax, qword ptr [rsp + 0x30]
000000014038b939 488b87a0060000           mov rax, qword ptr [rdi + 0x6a0]
000000014038b940 488b87a0060000           mov rax, qword ptr [rdi + 0x6a0]
000000014038b947 482bc1                   sub rax, rcx
000000014038b94a 488bc8                   mov rcx, rax
000000014038b94d 48c1e921                 shr rcx, 0x21
000000014038b951 4833c8                   xor rcx, rax
000000014038b954 48b8cd8c55edd7af51ff     movabs rax, 0xff51afd7ed558ccd
000000014038b95e 480fafc8                 imul rcx, rax
000000014038b962 48b853ec851afeb9cec4     movabs rax, 0xc4ceb9fe1a85ec53
000000014038b96c 488bd1                   mov rdx, rcx
000000014038b96f 48c1ea21                 shr rdx, 0x21
000000014038b973 4833d1                   xor rdx, rcx
000000014038b976 488bcf                   mov rcx, rdi
000000014038b979 480fafd0                 imul rdx, rax
000000014038b97d 488bc2                   mov rax, rdx
000000014038b980 48c1e821                 shr rax, 0x21
000000014038b984 4833d0                   xor rdx, rax
000000014038b987 488b87a0060000           mov rax, qword ptr [rdi + 0x6a0]
000000014038b98e 48c1e803                 shr rax, 3
000000014038b992 4833c2                   xor rax, rdx
000000014038b995 488987a0060000           mov qword ptr [rdi + 0x6a0], rax
000000014038b99c e8ff9effff               call 0x1403858a0
000000014038b9a1 8bd8                     mov ebx, eax
000000014038b9a3 488bcf                   mov rcx, rdi
000000014038b9a6 83e33f                   and ebx, 0x3f
000000014038b9a9 e88266ffff               call 0x140382030
000000014038b9ae b940000000               mov ecx, 0x40
000000014038b9b3 2bcb                     sub ecx, ebx
000000014038b9b5 48d3e0                   shl rax, cl
000000014038b9b8 48d3f8                   sar rax, cl
000000014038b9bb 488bcf                   mov rcx, rdi
000000014038b9be 488bd0                   mov rdx, rax
000000014038b9c1 e89a64ffff               call 0x140381e60
000000014038b9c6 488b87a0060000           mov rax, qword ptr [rdi + 0x6a0]
000000014038b9cd 488b5c2438               mov rbx, qword ptr [rsp + 0x38]
000000014038b9d2 4883c420                 add rsp, 0x20
000000014038b9d6 5f                       pop rdi
000000014038b9d7 c3                       ret
