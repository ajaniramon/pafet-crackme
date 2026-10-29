0000000140386150 48895c2410               mov qword ptr [rsp + 0x10], rbx
0000000140386155 57                       push rdi
0000000140386156 4883ec20                 sub rsp, 0x20
000000014038615a 4863815c050000           movsxd rax, dword ptr [rcx + 0x55c]
0000000140386161 488bf9                   mov rdi, rcx
0000000140386164 48b9f40cf7e9c6cd8519     movabs rcx, 0x1985cdc6e9f70cf4
000000014038616e 480fafc1                 imul rax, rcx
0000000140386172 48b9cb8829680d47dcbb     movabs rcx, 0xbbdc470d682988cb
000000014038617c 48338730050000           xor rax, qword ptr [rdi + 0x530]
0000000140386183 4889442430               mov qword ptr [rsp + 0x30], rax
0000000140386188 488b442430               mov rax, qword ptr [rsp + 0x30]
000000014038618d 4863875c050000           movsxd rax, dword ptr [rdi + 0x55c]
0000000140386194 480fafc1                 imul rax, rcx
0000000140386198 48b9de0462eb53d9145d     movabs rcx, 0x5d14d953eb6204de
00000001403861a2 48338730050000           xor rax, qword ptr [rdi + 0x530]
00000001403861a9 4889442430               mov qword ptr [rsp + 0x30], rax
00000001403861ae 488b442430               mov rax, qword ptr [rsp + 0x30]
00000001403861b3 4863875c050000           movsxd rax, dword ptr [rdi + 0x55c]
00000001403861ba 480fafc1                 imul rax, rcx
00000001403861be 48338730050000           xor rax, qword ptr [rdi + 0x530]
00000001403861c5 4889442430               mov qword ptr [rsp + 0x30], rax
00000001403861ca 488b442430               mov rax, qword ptr [rsp + 0x30]
00000001403861cf 488b8798060000           mov rax, qword ptr [rdi + 0x698]
00000001403861d6 48c1e80d                 shr rax, 0xd
00000001403861da 488bc8                   mov rcx, rax
00000001403861dd 48c1e921                 shr rcx, 0x21
00000001403861e1 4833c8                   xor rcx, rax
00000001403861e4 48b8cd8c55edd7af51ff     movabs rax, 0xff51afd7ed558ccd
00000001403861ee 480fafc8                 imul rcx, rax
00000001403861f2 48b853ec851afeb9cec4     movabs rax, 0xc4ceb9fe1a85ec53
00000001403861fc 488bd1                   mov rdx, rcx
00000001403861ff 48c1ea21                 shr rdx, 0x21
0000000140386203 4833d1                   xor rdx, rcx
0000000140386206 480fafd0                 imul rdx, rax
000000014038620a 48b807dafec28cd93970     movabs rax, 0x7039d98cc2feda07
0000000140386214 488bca                   mov rcx, rdx
0000000140386217 48c1e921                 shr rcx, 0x21
000000014038621b 4833ca                   xor rcx, rdx
000000014038621e 4833c8                   xor rcx, rax
0000000140386221 488b8798060000           mov rax, qword ptr [rdi + 0x698]
0000000140386228 4803c8                   add rcx, rax
000000014038622b 48898f98060000           mov qword ptr [rdi + 0x698], rcx
0000000140386232 488bcf                   mov rcx, rdi
0000000140386235 e866f6ffff               call 0x1403858a0
000000014038623a 8bd8                     mov ebx, eax
000000014038623c 488bcf                   mov rcx, rdi
000000014038623f 83e33f                   and ebx, 0x3f
0000000140386242 e8e9bdffff               call 0x140382030
0000000140386247 b940000000               mov ecx, 0x40
000000014038624c 2bcb                     sub ecx, ebx
000000014038624e 48d3e0                   shl rax, cl
0000000140386251 48d3f8                   sar rax, cl
0000000140386254 488bcf                   mov rcx, rdi
0000000140386257 488bd0                   mov rdx, rax
000000014038625a e801bcffff               call 0x140381e60
000000014038625f 488b8798060000           mov rax, qword ptr [rdi + 0x698]
0000000140386266 488b5c2438               mov rbx, qword ptr [rsp + 0x38]
000000014038626b 4883c420                 add rsp, 0x20
000000014038626f 5f                       pop rdi
0000000140386270 c3                       ret
