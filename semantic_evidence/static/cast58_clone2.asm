0000000140388310 48895c2410               mov qword ptr [rsp + 0x10], rbx
0000000140388315 57                       push rdi
0000000140388316 4883ec20                 sub rsp, 0x20
000000014038831a 4863815c050000           movsxd rax, dword ptr [rcx + 0x55c]
0000000140388321 488bf9                   mov rdi, rcx
0000000140388324 48b9f40cf7e9c6cd8519     movabs rcx, 0x1985cdc6e9f70cf4
000000014038832e 480fafc1                 imul rax, rcx
0000000140388332 48b9cb8829680d47dcbb     movabs rcx, 0xbbdc470d682988cb
000000014038833c 48338730050000           xor rax, qword ptr [rdi + 0x530]
0000000140388343 4889442430               mov qword ptr [rsp + 0x30], rax
0000000140388348 488b442430               mov rax, qword ptr [rsp + 0x30]
000000014038834d 4863875c050000           movsxd rax, dword ptr [rdi + 0x55c]
0000000140388354 480fafc1                 imul rax, rcx
0000000140388358 48b9de0462eb53d9145d     movabs rcx, 0x5d14d953eb6204de
0000000140388362 48338730050000           xor rax, qword ptr [rdi + 0x530]
0000000140388369 4889442430               mov qword ptr [rsp + 0x30], rax
000000014038836e 488b442430               mov rax, qword ptr [rsp + 0x30]
0000000140388373 4863875c050000           movsxd rax, dword ptr [rdi + 0x55c]
000000014038837a 480fafc1                 imul rax, rcx
000000014038837e 48b9c8a1dfbcb8ac9f2d     movabs rcx, 0x2d9facb8bcdfa1c8
0000000140388388 48338730050000           xor rax, qword ptr [rdi + 0x530]
000000014038838f 4889442430               mov qword ptr [rsp + 0x30], rax
0000000140388394 488b442430               mov rax, qword ptr [rsp + 0x30]
0000000140388399 488b8790060000           mov rax, qword ptr [rdi + 0x690]
00000001403883a0 482bc1                   sub rax, rcx
00000001403883a3 488bc8                   mov rcx, rax
00000001403883a6 48c1e921                 shr rcx, 0x21
00000001403883aa 4833c8                   xor rcx, rax
00000001403883ad 48b8cd8c55edd7af51ff     movabs rax, 0xff51afd7ed558ccd
00000001403883b7 480fafc8                 imul rcx, rax
00000001403883bb 48b853ec851afeb9cec4     movabs rax, 0xc4ceb9fe1a85ec53
00000001403883c5 488bd1                   mov rdx, rcx
00000001403883c8 48c1ea21                 shr rdx, 0x21
00000001403883cc 4833d1                   xor rdx, rcx
00000001403883cf 488bcf                   mov rcx, rdi
00000001403883d2 480fafd0                 imul rdx, rax
00000001403883d6 488bc2                   mov rax, rdx
00000001403883d9 48c1e821                 shr rax, 0x21
00000001403883dd 4833d0                   xor rdx, rax
00000001403883e0 488b8790060000           mov rax, qword ptr [rdi + 0x690]
00000001403883e7 4883ca01                 or rdx, 1
00000001403883eb 4833d0                   xor rdx, rax
00000001403883ee 48899790060000           mov qword ptr [rdi + 0x690], rdx
00000001403883f5 e8a6d4ffff               call 0x1403858a0
00000001403883fa 8bd8                     mov ebx, eax
00000001403883fc 488bcf                   mov rcx, rdi
00000001403883ff 83e33f                   and ebx, 0x3f
0000000140388402 e8299cffff               call 0x140382030
0000000140388407 b940000000               mov ecx, 0x40
000000014038840c 2bcb                     sub ecx, ebx
000000014038840e 48d3e0                   shl rax, cl
0000000140388411 48d3f8                   sar rax, cl
0000000140388414 488bcf                   mov rcx, rdi
0000000140388417 488bd0                   mov rdx, rax
000000014038841a e8419affff               call 0x140381e60
000000014038841f 488b8790060000           mov rax, qword ptr [rdi + 0x690]
0000000140388426 488b5c2438               mov rbx, qword ptr [rsp + 0x38]
000000014038842b 4883c420                 add rsp, 0x20
000000014038842f 5f                       pop rdi
0000000140388430 c3                       ret
