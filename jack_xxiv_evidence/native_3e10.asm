140003e10 mov qword ptr [rsp + 0x18], rbx
140003e15 mov qword ptr [rsp + 0x20], rbp
140003e1a push rsi
140003e1b push r12
140003e1d push r14
140003e1f push r15
140003e21 mov rax, qword ptr gs:[0x58]
140003e2a mov r8, rcx
140003e2d movabs rbx, 0xff51afd7ed558ccd
140003e37 mov ecx, 0x15a0
140003e3c movabs r11, 0xc4ceb9fe1a85ec53
140003e46 mov rax, qword ptr [rax]
140003e49 add rax, rcx
140003e4c movabs rcx, 0x9e3779b97f4a7c15
140003e56 mov rsi, qword ptr [rax + 0x510]
140003e5d mov r10d, dword ptr [rax + 0x524]
140003e64 mov rbp, qword ptr [rax + 0x500]
140003e6b mov r14, qword ptr [rax + 0x508]
140003e72 movzx r12d, byte ptr [rax + 0x520]
140003e7a lea edx, [r10 + 1]
140003e7e imul rdx, rcx
140003e82 xor rdx, rsi
140003e85 xor rdx, r8
140003e88 mov rcx, rdx
140003e8b shr rcx, 0x21
140003e8f xor rcx, rdx
140003e92 imul rcx, rbx
140003e96 mov rdx, rcx
140003e99 shr rdx, 0x21
140003e9d xor rdx, rcx
140003ea0 mov ecx, 0x4346534b
140003ea5 imul rdx, r11
140003ea9 mov r9, rdx
140003eac shr r9, 0x21
140003eb0 xor r9, rdx
140003eb3 cmove r9, rcx
140003eb7 mov rcx, r9
140003eba xor rcx, 0x43465341
140003ec1 mov rdx, rcx
140003ec4 shr rdx, 0x21
140003ec8 xor rdx, rcx
140003ecb imul rdx, rbx
140003ecf mov r8, rdx
140003ed2 shr r8, 0x21
140003ed6 xor r8, rdx
140003ed9 imul r8, r11
140003edd mov rcx, r8
140003ee0 shr rcx, 0x21
140003ee4 xor rcx, r8
140003ee7 mov qword ptr [rax + 0x500], rcx
140003eee mov rcx, r9
140003ef1 xor rcx, 0x43465353
140003ef8 mov rdx, rcx
140003efb shr rdx, 0x21
140003eff xor rdx, rcx
140003f02 imul rdx, rbx
140003f06 mov r8, rdx
140003f09 shr r8, 0x21
140003f0d xor r8, rdx
140003f10 imul r8, r11
140003f14 mov rcx, r8
140003f17 shr rcx, 0x21
140003f1b xor rcx, r8
140003f1e or rcx, 1
140003f22 mov qword ptr [rax + 0x508], rcx
140003f29 mov rcx, r9
140003f2c xor rcx, 0x43465354
140003f33 xor r9, 0x43465346
140003f3a mov rdx, rcx
140003f3d shr rdx, 0x21
140003f41 xor rdx, rcx
140003f44 imul rdx, rbx
140003f48 mov r8, rdx
140003f4b shr r8, 0x21
140003f4f xor r8, rdx
140003f52 imul r8, r11
140003f56 mov rcx, r8
140003f59 shr rcx, 0x21
140003f5d xor rcx, r8
140003f60 or rcx, 1
140003f64 mov qword ptr [rax + 0x510], rcx
140003f6b mov rcx, r9
140003f6e shr rcx, 0x21
140003f72 xor rcx, r9
140003f75 imul rcx, rbx
140003f79 mov rdx, rcx
140003f7c shr rdx, 0x21
140003f80 xor rdx, rcx
140003f83 xor r15d, r15d
140003f86 imul rdx, r11
140003f8a mov rcx, rdx
140003f8d shr rcx, 0x21
140003f91 xor cl, dl
140003f93 and cl, 1
140003f96 mov byte ptr [rax + 0x520], cl
140003f9c test r10d, r10d
140003f9f je 0x14000423c
140003fa5 mov qword ptr [rsp + 0x28], rdi
140003faa mov edi, 2
140003faf mov qword ptr [rsp + 0x30], r13
140003fb4 movabs r13, 0x2545f4914f6cdd1d
140003fbe nop 
140003fc0 cmp edi, 0x82
140003fc6 jae 0x140004232
140003fcc lea rbx, [r15 + r15*4]
140003fd0 mov r9, qword ptr [rax + rbx*8]
140003fd4 lea rcx, [r15 + r15*4]
140003fd8 lea r11, [rcx*8]
140003fe0 movzx edx, byte ptr [r11 + rax + 0x20]
140003fe6 lea ecx, [rdi - 1]
140003fe9 movsxd r10, ecx
140003fec imul rdx, rsi
140003ff0 mov rcx, r10
140003ff3 imul rcx, r14
140003ff7 xor rdx, rcx
140003ffa xor rdx, rbp
140003ffd mov rcx, rdx
140004000 xor rcx, r9
140004003 sub r9, rdx
140004006 test r12b, r12b
140004009 movabs rdx, 0x9e3779b97f4a7c15
140004013 cmove r9, rcx
140004017 mov rcx, qword ptr [rax + 0x518]
14000401e imul rcx, rdx
140004022 mov rdx, r9
140004025 add rcx, r13
140004028 mov qword ptr [rax + 0x518], rcx
14000402f shr rcx, 0x1d
140004033 movzx r8d, cl
140004037 mov byte ptr [r11 + rax + 0x20], r8b
14000403c imul r8, qword ptr [rax + 0x510]
140004044 imul r10, qword ptr [rax + 0x508]
14000404c xor r8, r10
14000404f movsxd r10, edi
140004052 xor r8, qword ptr [rax + 0x500]
140004059 xor rdx, r8
14000405c cmp byte ptr [rax + 0x520], 0
140004063 lea rcx, [r9 + r8]
140004067 mov r9, qword ptr [rax + rbx*8 + 8]
14000406c cmove rcx, rdx
140004070 mov qword ptr [rax + rbx*8], rcx
140004074 mov rcx, r10
140004077 movzx edx, byte ptr [r11 + rax + 0x21]
14000407d imul rcx, r14
140004081 imul rdx, rsi
140004085 xor rdx, rcx
140004088 xor rdx, rbp
14000408b mov rcx, rdx
14000408e xor rcx, r9
140004091 sub r9, rdx
140004094 test r12b, r12b
140004097 movabs rdx, 0x9e3779b97f4a7c15
1400040a1 cmove r9, rcx
1400040a5 mov rcx, qword ptr [rax + 0x518]
1400040ac imul rcx, rdx
1400040b0 mov rdx, r9
1400040b3 add rcx, r13
1400040b6 mov qword ptr [rax + 0x518], rcx
1400040bd shr rcx, 0x1d
1400040c1 movzx r8d, cl
1400040c5 mov byte ptr [r11 + rax + 0x21], r8b
1400040ca imul r8, qword ptr [rax + 0x510]
1400040d2 imul r10, qword ptr [rax + 0x508]
1400040da xor r8, r10
1400040dd xor r8, qword ptr [rax + 0x500]
1400040e4 xor rdx, r8
1400040e7 cmp byte ptr [rax + 0x520], 0
1400040ee lea rcx, [r9 + r8]
1400040f2 mov r9, qword ptr [rax + rbx*8 + 0x10]
1400040f7 cmove rcx, rdx
1400040fb mov qword ptr [rax + rbx*8 + 8], rcx
140004100 lea ecx, [rdi + 1]
140004103 movzx edx, byte ptr [r11 + rax + 0x22]
140004109 movsxd r10, ecx
14000410c imul rdx, rsi
140004110 mov rcx, r10
140004113 imul rcx, r14
140004117 xor rdx, rcx
14000411a xor rdx, rbp
14000411d mov rcx, rdx
140004120 xor rcx, r9
140004123 sub r9, rdx
140004126 test r12b, r12b
140004129 cmove r9, rcx
14000412d mov rcx, qword ptr [rax + 0x518]
140004134 movabs rdx, 0x9e3779b97f4a7c15
14000413e imul rcx, rdx
140004142 mov rdx, r9
140004145 add rcx, r13
140004148 mov qword ptr [rax + 0x518], rcx
14000414f shr rcx, 0x1d
140004153 movzx r8d, cl
140004157 mov byte ptr [r11 + rax + 0x22], r8b
14000415c imul r8, qword ptr [rax + 0x510]
140004164 imul r10, qword ptr [rax + 0x508]
14000416c xor r8, r10
14000416f xor r8, qword ptr [rax + 0x500]
140004176 xor rdx, r8
140004179 cmp byte ptr [rax + 0x520], 0
140004180 lea rcx, [r9 + r8]
140004184 mov r9, qword ptr [rax + rbx*8 + 0x18]
140004189 cmove rcx, rdx
14000418d mov qword ptr [rax + rbx*8 + 0x10], rcx
140004192 lea ecx, [rdi + 2]
140004195 movzx edx, byte ptr [r11 + rax + 0x23]
14000419b movsxd r10, ecx
14000419e imul rdx, rsi
1400041a2 mov rcx, r10
1400041a5 imul rcx, r14
1400041a9 xor rdx, rcx
1400041ac xor rdx, rbp
1400041af mov rcx, rdx
1400041b2 xor rcx, r9
1400041b5 sub r9, rdx
1400041b8 test r12b, r12b
1400041bb movabs rdx, 0x9e3779b97f4a7c15
1400041c5 cmove r9, rcx
1400041c9 mov rcx, qword ptr [rax + 0x518]
1400041d0 imul rcx, rdx
1400041d4 mov rdx, r9
1400041d7 add rcx, r13
1400041da mov qword ptr [rax + 0x518], rcx
1400041e1 shr rcx, 0x1d
1400041e5 movzx r8d, cl
1400041e9 mov byte ptr [r11 + rax + 0x23], r8b
1400041ee imul r8, qword ptr [rax + 0x510]
1400041f6 imul r10, qword ptr [rax + 0x508]
1400041fe xor r8, r10
140004201 xor r8, qword ptr [rax + 0x500]
140004208 xor rdx, r8
14000420b cmp byte ptr [rax + 0x520], 0
140004212 lea rcx, [r9 + r8]
140004216 cmove rcx, rdx
14000421a inc r15d
14000421d add edi, 4
140004220 mov qword ptr [rax + rbx*8 + 0x18], rcx
140004225 cmp r15d, dword ptr [rax + 0x524]
14000422c jb 0x140003fc0
140004232 mov rdi, qword ptr [rsp + 0x28]
140004237 mov r13, qword ptr [rsp + 0x30]
14000423c mov rbx, qword ptr [rsp + 0x38]
140004241 mov rbp, qword ptr [rsp + 0x40]
140004246 pop r15
140004248 pop r14
14000424a pop r12
14000424c pop rsi
14000424d ret 
