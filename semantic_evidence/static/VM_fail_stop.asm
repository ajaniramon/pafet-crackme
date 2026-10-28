0000000140381090 48895c2408               mov qword ptr [rsp + 8], rbx
0000000140381095 48896c2410               mov qword ptr [rsp + 0x10], rbp
000000014038109a 4889742418               mov qword ptr [rsp + 0x18], rsi
000000014038109f 48897c2420               mov qword ptr [rsp + 0x20], rdi
00000001403810a4 4c63895c050000           movsxd r9, dword ptr [rcx + 0x55c]
00000001403810ab 48becd8c55edd7af51ff     movabs rsi, 0xff51afd7ed558ccd
00000001403810b5 4c8b91e8060000           mov r10, qword ptr [rcx + 0x6e8]
00000001403810bc 48bd53ec851afeb9cec4     movabs rbp, 0xc4ceb9fe1a85ec53
00000001403810c6 4d8bc1                   mov r8, r9
00000001403810c9 48b8157c4a7fb979379e     movabs rax, 0x9e3779b97f4a7c15
00000001403810d3 4c0fafc0                 imul r8, rax
00000001403810d7 41f7d1                   not r9d
00000001403810da 4c338118070000           xor r8, qword ptr [rcx + 0x718]
00000001403810e1 4c338108070000           xor r8, qword ptr [rcx + 0x708]
00000001403810e8 4d33c2                   xor r8, r10
00000001403810eb 4489895c050000           mov dword ptr [rcx + 0x55c], r9d
00000001403810f2 4c3381900f0000           xor r8, qword ptr [rcx + 0xf90]
00000001403810f9 4c338110070000           xor r8, qword ptr [rcx + 0x710]
0000000140381100 4c338160050000           xor r8, qword ptr [rcx + 0x560]
0000000140381107 4c33c2                   xor r8, rdx
000000014038110a 498bc0                   mov rax, r8
000000014038110d 48c1e821                 shr rax, 0x21
0000000140381111 4933c0                   xor rax, r8
0000000140381114 480fafc6                 imul rax, rsi
0000000140381118 488bd0                   mov rdx, rax
000000014038111b 48c1ea21                 shr rdx, 0x21
000000014038111f 4833d0                   xor rdx, rax
0000000140381122 480fafd5                 imul rdx, rbp
0000000140381126 488bfa                   mov rdi, rdx
0000000140381129 48c1ef21                 shr rdi, 0x21
000000014038112d 4833fa                   xor rdi, rdx
0000000140381130 488bc7                   mov rax, rdi
0000000140381133 4889b928050000           mov qword ptr [rcx + 0x528], rdi
000000014038113a 48f7d0                   not rax
000000014038113d 4889b9900f0000           mov qword ptr [rcx + 0xf90], rdi
0000000140381144 48898160050000           mov qword ptr [rcx + 0x560], rax
000000014038114b 4c33d7                   xor r10, rdi
000000014038114e 488bc7                   mov rax, rdi
0000000140381151 4835544d454d             xor rax, 0x4d454d54
0000000140381157 488bd0                   mov rdx, rax
000000014038115a 48c1ea21                 shr rdx, 0x21
000000014038115e 4833d0                   xor rdx, rax
0000000140381161 480fafd6                 imul rdx, rsi
0000000140381165 4c8bc2                   mov r8, rdx
0000000140381168 49c1e821                 shr r8, 0x21
000000014038116c 4c33c2                   xor r8, rdx
000000014038116f 4c0fafc5                 imul r8, rbp
0000000140381173 498bc0                   mov rax, r8
0000000140381176 48c1e821                 shr rax, 0x21
000000014038117a 4933c0                   xor rax, r8
000000014038117d 488981980f0000           mov qword ptr [rcx + 0xf98], rax
0000000140381184 488bc7                   mov rax, rdi
0000000140381187 483544414544             xor rax, 0x44454144
000000014038118d 488bd0                   mov rdx, rax
0000000140381190 48c1ea21                 shr rdx, 0x21
0000000140381194 4833d0                   xor rdx, rax
0000000140381197 480fafd6                 imul rdx, rsi
000000014038119b 4c8bc2                   mov r8, rdx
000000014038119e 49c1e821                 shr r8, 0x21
00000001403811a2 4c33c2                   xor r8, rdx
00000001403811a5 4c0fafc5                 imul r8, rbp
00000001403811a9 498bc0                   mov rax, r8
00000001403811ac 48c1e821                 shr rax, 0x21
00000001403811b0 4933c0                   xor rax, r8
00000001403811b3 48898110070000           mov qword ptr [rcx + 0x710], rax
00000001403811ba 488bc7                   mov rax, rdi
00000001403811bd 48338108030000           xor rax, qword ptr [rcx + 0x308]
00000001403811c4 488bd0                   mov rdx, rax
00000001403811c7 48c1ea21                 shr rdx, 0x21
00000001403811cb 4833d0                   xor rdx, rax
00000001403811ce 480fafd6                 imul rdx, rsi
00000001403811d2 4c8bc2                   mov r8, rdx
00000001403811d5 49c1e821                 shr r8, 0x21
00000001403811d9 4c33c2                   xor r8, rdx
00000001403811dc 4c0fafc5                 imul r8, rbp
00000001403811e0 498bc0                   mov rax, r8
00000001403811e3 48c1e821                 shr rax, 0x21
00000001403811e7 4933c0                   xor rax, r8
00000001403811ea 4883c801                 or rax, 1
00000001403811ee 48898108030000           mov qword ptr [rcx + 0x308], rax
00000001403811f5 498bc2                   mov rax, r10
00000001403811f8 48c1e821                 shr rax, 0x21
00000001403811fc 4933c2                   xor rax, r10
00000001403811ff 480fafc6                 imul rax, rsi
0000000140381203 488bd0                   mov rdx, rax
0000000140381206 48c1ea21                 shr rdx, 0x21
000000014038120a 4833d0                   xor rdx, rax
000000014038120d 480fafd5                 imul rdx, rbp
0000000140381211 488bc2                   mov rax, rdx
0000000140381214 48c1e821                 shr rax, 0x21
0000000140381218 4833c2                   xor rax, rdx
000000014038121b 4883c801                 or rax, 1
000000014038121f 488981e8060000           mov qword ptr [rcx + 0x6e8], rax
0000000140381226 488bc7                   mov rax, rdi
0000000140381229 48c1e821                 shr rax, 0x21
000000014038122d 4833c7                   xor rax, rdi
0000000140381230 480fafc6                 imul rax, rsi
0000000140381234 488bd0                   mov rdx, rax
0000000140381237 48c1ea21                 shr rdx, 0x21
000000014038123b 4833d0                   xor rdx, rax
000000014038123e 480fafd5                 imul rdx, rbp
0000000140381242 488bc2                   mov rax, rdx
0000000140381245 48c1e821                 shr rax, 0x21
0000000140381249 4833c2                   xor rax, rdx
000000014038124c 48894178                 mov qword ptr [rcx + 0x78], rax
0000000140381250 488d4701                 lea rax, [rdi + 1]
0000000140381254 488bd0                   mov rdx, rax
0000000140381257 48c1ea21                 shr rdx, 0x21
000000014038125b 4833d0                   xor rdx, rax
000000014038125e 480fafd6                 imul rdx, rsi
0000000140381262 4c8bc2                   mov r8, rdx
0000000140381265 49c1e821                 shr r8, 0x21
0000000140381269 4c33c2                   xor r8, rdx
000000014038126c 4c0fafc5                 imul r8, rbp
0000000140381270 498bc0                   mov rax, r8
0000000140381273 48c1e821                 shr rax, 0x21
0000000140381277 4933c0                   xor rax, r8
000000014038127a 48898180000000           mov qword ptr [rcx + 0x80], rax
0000000140381281 488d4702                 lea rax, [rdi + 2]
0000000140381285 488bd0                   mov rdx, rax
0000000140381288 48c1ea21                 shr rdx, 0x21
000000014038128c 4833d0                   xor rdx, rax
000000014038128f 480fafd6                 imul rdx, rsi
0000000140381293 4c8bc2                   mov r8, rdx
0000000140381296 49c1e821                 shr r8, 0x21
000000014038129a 4c33c2                   xor r8, rdx
000000014038129d 4c0fafc5                 imul r8, rbp
00000001403812a1 498bc0                   mov rax, r8
00000001403812a4 48c1e821                 shr rax, 0x21
00000001403812a8 4933c0                   xor rax, r8
00000001403812ab 48898188000000           mov qword ptr [rcx + 0x88], rax
00000001403812b2 488d4703                 lea rax, [rdi + 3]
00000001403812b6 488bd0                   mov rdx, rax
00000001403812b9 48c1ea21                 shr rdx, 0x21
00000001403812bd 4833d0                   xor rdx, rax
00000001403812c0 480fafd6                 imul rdx, rsi
00000001403812c4 4c8bc2                   mov r8, rdx
00000001403812c7 49c1e821                 shr r8, 0x21
00000001403812cb 4c33c2                   xor r8, rdx
00000001403812ce 4c0fafc5                 imul r8, rbp
00000001403812d2 498bc0                   mov rax, r8
00000001403812d5 48c1e821                 shr rax, 0x21
00000001403812d9 4933c0                   xor rax, r8
00000001403812dc 48898190000000           mov qword ptr [rcx + 0x90], rax
00000001403812e3 488d4704                 lea rax, [rdi + 4]
00000001403812e7 488bd0                   mov rdx, rax
00000001403812ea 48c1ea21                 shr rdx, 0x21
00000001403812ee 4833d0                   xor rdx, rax
00000001403812f1 480fafd6                 imul rdx, rsi
00000001403812f5 4c8bc2                   mov r8, rdx
00000001403812f8 49c1e821                 shr r8, 0x21
00000001403812fc 4c33c2                   xor r8, rdx
00000001403812ff 4c0fafc5                 imul r8, rbp
0000000140381303 498bc0                   mov rax, r8
0000000140381306 48c1e821                 shr rax, 0x21
000000014038130a 4933c0                   xor rax, r8
000000014038130d 48898198000000           mov qword ptr [rcx + 0x98], rax
0000000140381314 488d4705                 lea rax, [rdi + 5]
0000000140381318 488bd0                   mov rdx, rax
000000014038131b 48c1ea21                 shr rdx, 0x21
000000014038131f 4833d0                   xor rdx, rax
0000000140381322 480fafd6                 imul rdx, rsi
0000000140381326 4c8bc2                   mov r8, rdx
0000000140381329 49c1e821                 shr r8, 0x21
000000014038132d 4c33c2                   xor r8, rdx
0000000140381330 4c0fafc5                 imul r8, rbp
0000000140381334 498bc0                   mov rax, r8
0000000140381337 48c1e821                 shr rax, 0x21
000000014038133b 4933c0                   xor rax, r8
000000014038133e 488981a0000000           mov qword ptr [rcx + 0xa0], rax
0000000140381345 488d4706                 lea rax, [rdi + 6]
0000000140381349 488bd0                   mov rdx, rax
000000014038134c 48c1ea21                 shr rdx, 0x21
0000000140381350 4833d0                   xor rdx, rax
0000000140381353 480fafd6                 imul rdx, rsi
0000000140381357 4c8bc2                   mov r8, rdx
000000014038135a 49c1e821                 shr r8, 0x21
000000014038135e 4c33c2                   xor r8, rdx
0000000140381361 4c0fafc5                 imul r8, rbp
0000000140381365 498bc0                   mov rax, r8
0000000140381368 48c1e821                 shr rax, 0x21
000000014038136c 4933c0                   xor rax, r8
000000014038136f 488981a8000000           mov qword ptr [rcx + 0xa8], rax
0000000140381376 488d4707                 lea rax, [rdi + 7]
000000014038137a 488bd0                   mov rdx, rax
000000014038137d 48c1ea21                 shr rdx, 0x21
0000000140381381 4833d0                   xor rdx, rax
0000000140381384 480fafd6                 imul rdx, rsi
0000000140381388 4c8bc2                   mov r8, rdx
000000014038138b 49c1e821                 shr r8, 0x21
000000014038138f 4c33c2                   xor r8, rdx
0000000140381392 4c0fafc5                 imul r8, rbp
0000000140381396 498bc0                   mov rax, r8
0000000140381399 48c1e821                 shr rax, 0x21
000000014038139d 4933c0                   xor rax, r8
00000001403813a0 488981b0000000           mov qword ptr [rcx + 0xb0], rax
00000001403813a7 488d4708                 lea rax, [rdi + 8]
00000001403813ab 488bd0                   mov rdx, rax
00000001403813ae 48c1ea21                 shr rdx, 0x21
00000001403813b2 4833d0                   xor rdx, rax
00000001403813b5 480fafd6                 imul rdx, rsi
00000001403813b9 4c8bc2                   mov r8, rdx
00000001403813bc 49c1e821                 shr r8, 0x21
00000001403813c0 4c33c2                   xor r8, rdx
00000001403813c3 4c0fafc5                 imul r8, rbp
00000001403813c7 498bc0                   mov rax, r8
00000001403813ca 48c1e821                 shr rax, 0x21
00000001403813ce 4933c0                   xor rax, r8
00000001403813d1 488981b8000000           mov qword ptr [rcx + 0xb8], rax
00000001403813d8 488d4709                 lea rax, [rdi + 9]
00000001403813dc 488bd0                   mov rdx, rax
00000001403813df 48c1ea21                 shr rdx, 0x21
00000001403813e3 4833d0                   xor rdx, rax
00000001403813e6 480fafd6                 imul rdx, rsi
00000001403813ea 4c8bc2                   mov r8, rdx
00000001403813ed 49c1e821                 shr r8, 0x21
00000001403813f1 4c33c2                   xor r8, rdx
00000001403813f4 4c0fafc5                 imul r8, rbp
00000001403813f8 498bc0                   mov rax, r8
00000001403813fb 48c1e821                 shr rax, 0x21
00000001403813ff 4933c0                   xor rax, r8
0000000140381402 488981c0000000           mov qword ptr [rcx + 0xc0], rax
0000000140381409 488d470a                 lea rax, [rdi + 0xa]
000000014038140d 488bd0                   mov rdx, rax
0000000140381410 48c1ea21                 shr rdx, 0x21
0000000140381414 4833d0                   xor rdx, rax
0000000140381417 480fafd6                 imul rdx, rsi
000000014038141b 4c8bc2                   mov r8, rdx
000000014038141e 49c1e821                 shr r8, 0x21
0000000140381422 4c33c2                   xor r8, rdx
0000000140381425 4c0fafc5                 imul r8, rbp
0000000140381429 498bc0                   mov rax, r8
000000014038142c 48c1e821                 shr rax, 0x21
0000000140381430 4933c0                   xor rax, r8
0000000140381433 488981c8000000           mov qword ptr [rcx + 0xc8], rax
000000014038143a 488d470b                 lea rax, [rdi + 0xb]
000000014038143e 488bd0                   mov rdx, rax
0000000140381441 48c1ea21                 shr rdx, 0x21
0000000140381445 4833d0                   xor rdx, rax
0000000140381448 480fafd6                 imul rdx, rsi
000000014038144c 4c8bc2                   mov r8, rdx
000000014038144f 49c1e821                 shr r8, 0x21
0000000140381453 4c33c2                   xor r8, rdx
0000000140381456 4c0fafc5                 imul r8, rbp
000000014038145a 498bc0                   mov rax, r8
000000014038145d 48c1e821                 shr rax, 0x21
0000000140381461 4933c0                   xor rax, r8
0000000140381464 488981d0000000           mov qword ptr [rcx + 0xd0], rax
000000014038146b 4c8d8f00100000           lea r9, [rdi + 0x1000]
0000000140381472 488d470c                 lea rax, [rdi + 0xc]
0000000140381476 bb00020000               mov ebx, 0x200
000000014038147b 488bd0                   mov rdx, rax
000000014038147e 48c1ea21                 shr rdx, 0x21
0000000140381482 4833d0                   xor rdx, rax
0000000140381485 480fafd6                 imul rdx, rsi
0000000140381489 4c8bc2                   mov r8, rdx
000000014038148c 49c1e821                 shr r8, 0x21
0000000140381490 4c33c2                   xor r8, rdx
0000000140381493 4c0fafc5                 imul r8, rbp
0000000140381497 498bc0                   mov rax, r8
000000014038149a 48c1e821                 shr rax, 0x21
000000014038149e 4933c0                   xor rax, r8
00000001403814a1 488981d8000000           mov qword ptr [rcx + 0xd8], rax
00000001403814a8 488d470d                 lea rax, [rdi + 0xd]
00000001403814ac 488bd0                   mov rdx, rax
00000001403814af 48c1ea21                 shr rdx, 0x21
00000001403814b3 4833d0                   xor rdx, rax
00000001403814b6 480fafd6                 imul rdx, rsi
00000001403814ba 4c8bc2                   mov r8, rdx
00000001403814bd 49c1e821                 shr r8, 0x21
00000001403814c1 4c33c2                   xor r8, rdx
00000001403814c4 4c0fafc5                 imul r8, rbp
00000001403814c8 498bc0                   mov rax, r8
00000001403814cb 48c1e821                 shr rax, 0x21
00000001403814cf 4933c0                   xor rax, r8
00000001403814d2 4533d2                   xor r10d, r10d
00000001403814d5 488981e0000000           mov qword ptr [rcx + 0xe0], rax
00000001403814dc 458bda                   mov r11d, r10d
00000001403814df 90                       nop
00000001403814e0 498bc1                   mov rax, r9
00000001403814e3 4d8d5b08                 lea r11, [r11 + 8]
00000001403814e7 48c1e821                 shr rax, 0x21
00000001403814eb 4933c1                   xor rax, r9
00000001403814ee 49ffc1                   inc r9
00000001403814f1 480fafc6                 imul rax, rsi
00000001403814f5 4c8bc0                   mov r8, rax
00000001403814f8 49c1e821                 shr r8, 0x21
00000001403814fc 4c33c0                   xor r8, rax
00000001403814ff 488b81b8070000           mov rax, qword ptr [rcx + 0x7b8]
0000000140381506 4c0fafc5                 imul r8, rbp
000000014038150a 498bd0                   mov rdx, r8
000000014038150d 48c1ea21                 shr rdx, 0x21
0000000140381511 4933d0                   xor rdx, r8
0000000140381514 49895403f8               mov qword ptr [r11 + rax - 8], rdx
0000000140381519 4883eb01                 sub rbx, 1
000000014038151d 75c1                     jne 0x1403814e0
000000014038151f 4c8d8f00200000           lea r9, [rdi + 0x2000]
0000000140381526 41bb00040000             mov r11d, 0x400
000000014038152c 0f1f4000                 nop dword ptr [rax]
0000000140381530 498bc1                   mov rax, r9
0000000140381533 4d8d5208                 lea r10, [r10 + 8]
0000000140381537 48c1e821                 shr rax, 0x21
000000014038153b 4933c1                   xor rax, r9
000000014038153e 49ffc1                   inc r9
0000000140381541 480fafc6                 imul rax, rsi
0000000140381545 4c8bc0                   mov r8, rax
0000000140381548 49c1e821                 shr r8, 0x21
000000014038154c 4c33c0                   xor r8, rax
000000014038154f 488b81c0070000           mov rax, qword ptr [rcx + 0x7c0]
0000000140381556 4c0fafc5                 imul r8, rbp
000000014038155a 498bd0                   mov rdx, r8
000000014038155d 48c1ea21                 shr rdx, 0x21
0000000140381561 4933d0                   xor rdx, r8
0000000140381564 49895402f8               mov qword ptr [r10 + rax - 8], rdx
0000000140381569 4983eb01                 sub r11, 1
000000014038156d 75c1                     jne 0x140381530
000000014038156f 488bc7                   mov rax, rdi
0000000140381572 25f80f0000               and eax, 0xff8
0000000140381577 488938                   mov qword ptr [rax], rdi
000000014038157a 660f1f440000             nop word ptr [rax + rax]
0000000140381580 488b8110070000           mov rax, qword ptr [rcx + 0x710]
0000000140381587 f7915c050000             not dword ptr [rcx + 0x55c]
000000014038158d 48ffc0                   inc rax
0000000140381590 488bd0                   mov rdx, rax
0000000140381593 48c1ea21                 shr rdx, 0x21
0000000140381597 4833d0                   xor rdx, rax
000000014038159a 480fafd6                 imul rdx, rsi
000000014038159e 4c8bc2                   mov r8, rdx
00000001403815a1 49c1e821                 shr r8, 0x21
00000001403815a5 4c33c2                   xor r8, rdx
00000001403815a8 4c0fafc5                 imul r8, rbp
00000001403815ac 498bc0                   mov rax, r8
00000001403815af 48c1e821                 shr rax, 0x21
00000001403815b3 4933c0                   xor rax, r8
00000001403815b6 48898110070000           mov qword ptr [rcx + 0x710], rax
00000001403815bd ebc1                     jmp 0x140381580
