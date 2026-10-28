000000014038a270 48895c2410               mov qword ptr [rsp + 0x10], rbx
000000014038a275 57                       push rdi
000000014038a276 4883ec20                 sub rsp, 0x20
000000014038a27a 4863815c050000           movsxd rax, dword ptr [rcx + 0x55c]
000000014038a281 488bf9                   mov rdi, rcx
000000014038a284 48b9f40cf7e9c6cd8519     movabs rcx, 0x1985cdc6e9f70cf4
000000014038a28e 480fafc1                 imul rax, rcx
000000014038a292 48b9cb8829680d47dcbb     movabs rcx, 0xbbdc470d682988cb
000000014038a29c 48338730050000           xor rax, qword ptr [rdi + 0x530]
000000014038a2a3 4889442430               mov qword ptr [rsp + 0x30], rax
000000014038a2a8 488b442430               mov rax, qword ptr [rsp + 0x30]
000000014038a2ad 4863875c050000           movsxd rax, dword ptr [rdi + 0x55c]
000000014038a2b4 480fafc1                 imul rax, rcx
000000014038a2b8 48b9de0462eb53d9145d     movabs rcx, 0x5d14d953eb6204de
000000014038a2c2 48338730050000           xor rax, qword ptr [rdi + 0x530]
000000014038a2c9 4889442430               mov qword ptr [rsp + 0x30], rax
000000014038a2ce 488b442430               mov rax, qword ptr [rsp + 0x30]
000000014038a2d3 4863875c050000           movsxd rax, dword ptr [rdi + 0x55c]
000000014038a2da 480fafc1                 imul rax, rcx
000000014038a2de 48b92dd26bc019cda834     movabs rcx, 0x34a8cd19c06bd22d
000000014038a2e8 48338730050000           xor rax, qword ptr [rdi + 0x530]
000000014038a2ef 4889442430               mov qword ptr [rsp + 0x30], rax
000000014038a2f4 488b442430               mov rax, qword ptr [rsp + 0x30]
000000014038a2f9 488b8788060000           mov rax, qword ptr [rdi + 0x688]
000000014038a300 4833c1                   xor rax, rcx
000000014038a303 488bc8                   mov rcx, rax
000000014038a306 48c1e921                 shr rcx, 0x21
000000014038a30a 4833c8                   xor rcx, rax
000000014038a30d 48b8cd8c55edd7af51ff     movabs rax, 0xff51afd7ed558ccd
000000014038a317 480fafc8                 imul rcx, rax
000000014038a31b 48b853ec851afeb9cec4     movabs rax, 0xc4ceb9fe1a85ec53
000000014038a325 488bd1                   mov rdx, rcx
000000014038a328 48c1ea21                 shr rdx, 0x21
000000014038a32c 4833d1                   xor rdx, rcx
000000014038a32f 488bcf                   mov rcx, rdi
000000014038a332 480fafd0                 imul rdx, rax
000000014038a336 488bc2                   mov rax, rdx
000000014038a339 48c1e821                 shr rax, 0x21
000000014038a33d 4833d0                   xor rdx, rax
000000014038a340 488b8788060000           mov rax, qword ptr [rdi + 0x688]
000000014038a347 48c1e807                 shr rax, 7
000000014038a34b 4803c2                   add rax, rdx
000000014038a34e 48898788060000           mov qword ptr [rdi + 0x688], rax
000000014038a355 e846b5ffff               call 0x1403858a0
000000014038a35a 8bd8                     mov ebx, eax
000000014038a35c 488bcf                   mov rcx, rdi
000000014038a35f 83e33f                   and ebx, 0x3f
000000014038a362 e8c97cffff               call 0x140382030
000000014038a367 b940000000               mov ecx, 0x40
000000014038a36c 2bcb                     sub ecx, ebx
000000014038a36e 48d3e0                   shl rax, cl
000000014038a371 48d3f8                   sar rax, cl
000000014038a374 488bcf                   mov rcx, rdi
000000014038a377 488bd0                   mov rdx, rax
000000014038a37a e8e17affff               call 0x140381e60
000000014038a37f 488b8788060000           mov rax, qword ptr [rdi + 0x688]
000000014038a386 488b5c2438               mov rbx, qword ptr [rsp + 0x38]
000000014038a38b 4883c420                 add rsp, 0x20
000000014038a38f 5f                       pop rdi
000000014038a390 c3                       ret
