2300de mov      edx, 0xb
2300e3 lea      rcx, [rsp + 0x190]
2300eb call     0x1401eddd0
2300f0 mov      r14d, dword ptr [rsp + 0x514]
2300f8 xor      r14, rax
2300fb mov      edx, 5
230100 lea      rcx, [rsp + 0x190]
230108 call     0x1401eddd0
23010d mov      rdi, rax
230110 and      edi, 1
230113 mov      edx, 6
230118 lea      rcx, [rsp + 0x190]
230120 call     0x1401eddd0
230125 mov      r12, rax
230128 and      r12d, 1
23012c mov      edx, 4
230131 lea      rcx, [rsp + 0x190]
230139 call     0x1401eddd0
23013e mov      rbx, rax
230141 mov      edx, 0xc
230146 lea      rcx, [rsp + 0x190]
23014e call     0x1401eddd0
230153 mov      r15, rax
230156 mov      r8d, edi
230159 mov      edx, r14d
23015c lea      rcx, [rsp + 0x190]
230164 call     0x1401f0f80
230169 xor      rbx, rax
23016c mov      esi, ebx
23016e mov      r9d, ebx
230171 mov      r8d, edi
230174 mov      edx, r14d
230177 lea      rcx, [rsp + 0x190]
23017f call     0x1401f1000
230184 xor      r14d, r14d
230187 cmp      rax, r15
23018a sete     r14b
23018e mov      rbx, r14
230191 and      rbx, r12
230194 and      rbx, rdi
230197 neg      rbx
23019a lea      rcx, [rsp + 0x190]
2301a2 call     0x1401ee070
2301a7 mov      edx, eax
2301a9 xor      edx, esi
2301ab and      edx, ebx
2301ad xor      edx, eax
2301af lea      rcx, [rsp + 0x190]
2301b7 call     0x1401ee140
2301bc xor      r8d, r8d
2301bf lea      edx, [r8 + 6]
2301c3 lea      rcx, [rsp + 0x190]
2301cb call     0x1401edea0
2301d0 xor      r8d, r8d
2301d3 lea      edx, [r8 + 0xc]
2301d7 lea      rcx, [rsp + 0x190]
2301df call     0x1401edea0
2301e4 test     r12, r12
2301e7 je       0x140230200
2301e9 test     r14, r14
2301ec jne      0x140230200
2301ee mov      edx, 0x4252414e
2301f3 lea      rcx, [rsp + 0x190]
2301fb call     0x1401ed830
230200 lea      rcx, [rsp + 0x190]
230208 call     0x1401ee070
23020d mov      ecx, eax
23020f xor      rcx, qword ptr [rsp + 0x1b0]
230217 call     0x140002040
23021c mov      qword ptr [rsp + 0x1b0], rax
230224 mov      rax, qword ptr [rsp + 0x4d8]
23022c mov      qword ptr [rsp + 0x38], rax
230231 movsxd   rcx, dword ptr [rsp + 0x1370]
230239 mov      rax, qword ptr [rsp + 0x38]
23023e xor      rcx, rax
230241 mov      qword ptr [rsp + 0x38], rcx
230246 mov      rcx, qword ptr [rsp + 0x38]
23024b call     0x140002040
230250 mov      qword ptr [rsp + 0x4d8], rax
230258 mov      ebx, 0x917cd36f
23025d mov      qword ptr [rsp + 0x20], rbx
230262 mov      ebx, 0x85cfec29
230267 mov      qword ptr [rsp + 0x28], rbx
23026c mov      rcx, qword ptr [rsp + 0x28]
230271 mov      rax, qword ptr [rsp + 0x20]
230276 xor      rcx, rax
230279 mov      qword ptr [rsp + 0x30], rcx
23027e mov      rcx, qword ptr [rsp + 0x30]
230283 mov      rax, qword ptr [rsp + 0x30]
230288 xor      rcx, rax
23028b mov      rax, qword ptr [rsp + 0x30]
230290 add      rax, rcx
230293 mov      qword ptr [rsp + 0x30], rax
230298 mov      rax, qword ptr [rsp + 0x30]
23029d mov      r15d, 0x27f17
2302a3 mov      edx, r15d
2302a6 lea      rcx, [rsp + 0x190]
2302ae call     0x1401f0db0
2302b3 xor      r12d, r12d
2302b6 jmp      0x140232daa
