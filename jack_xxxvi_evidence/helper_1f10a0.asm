1f10a0 mov      qword ptr [rsp + 0x20], rbx
1f10a5 mov      dword ptr [rsp + 0x18], r8d
1f10aa push     rbp
1f10ab push     rsi
1f10ac push     rdi
1f10ad push     r12
1f10af push     r13
1f10b1 push     r14
1f10b3 push     r15
1f10b5 sub      rsp, 0x30
1f10b9 mov      esi, dword ptr [rcx + 0x384]
1f10bf mov      r14, rcx
1f10c2 mov      rbx, qword ptr [rcx + 0x350]
1f10c9 mov      r12, rdx
1f10cc mov      r11, qword ptr [rcx + 0x260]
1f10d3 mov      ebp, r8d
1f10d6 mov      r10d, dword ptr [rsp + 0x98]
1f10de neg      r12
1f10e1 mov      r15, qword ptr [r14 + 0x1b0]
1f10e8 not      ebp
1f10ea mov      rdi, qword ptr [r14 + 0x1b8]
1f10f1 and      ebp, 1
1f10f4 shr      rdx, 0x3f
1f10f8 movabs   rcx, 0xc2b2ae3d27d4eb4f
1f1102 shr      r12, 0x3f
1f1106 or       r12d, edx
1f1109 xor      r12d, 1
1f110d mov      eax, r12d
1f1110 xor      ebp, r12d
1f1113 xor      eax, r9d
1f1116 mov      r9d, dword ptr [rsp + 0x90]
1f111e and      eax, ebp
1f1120 mov      edx, eax
1f1122 mov      qword ptr [rsp + 0x20], rax
1f1127 imul     rdx, rcx
1f112b movabs   rcx, 0xd6e8feb86659fd93
1f1135 mov      eax, r10d
1f1138 imul     rax, rcx
1f113c xor      rdx, rax
1f113f movabs   rax, 0xff51afd7ed558ccd
1f1149 xor      rdx, r11
1f114c xor      rdx, rbx
1f114f xor      rdx, rsi
1f1152 xor      rdx, 0x42524d4b
1f1159 mov      rcx, rdx
1f115c shr      rcx, 0x21
1f1160 xor      rcx, rdx
1f1163 imul     rcx, rax
1f1167 mov      rax, rcx
1f116a shr      rax, 0x21
1f116e xor      rax, rcx
1f1171 movabs   rcx, 0xc4ceb9fe1a85ec53
1f117b imul     rax, rcx
1f117f mov      r8, rax
1f1182 mov      eax, eax
1f1184 shr      r8, 0x21
1f1188 xor      r8, rax
1f118b movabs   rax, 0x9e3779b97f4a7c15
1f1195 imul     r15, rax
1f1199 xor      r8, r9
1f119c movabs   rax, 0x2545f4914f6cdd1d
1f11a6 add      r15, rax
1f11a9 mov      rax, r15
1f11ac shr      rax, 0x1b
1f11b0 movzx    edx, al
1f11b3 mov      byte ptr [r14 + 0x164], dl
1f11ba mov      rax, qword ptr [r14 + 0xe0]
1f11c1 mov      rcx, qword ptr [r14 + 0xd0]
1f11c8 mov      r13, qword ptr [r14 + 0xd8]
1f11cf imul     rdx, rax
1f11d3 mov      qword ptr [rsp + 0x70], rax
1f11d8 lea      rax, [r13*4]
1f11e0 add      rax, r13
1f11e3 mov      qword ptr [rsp + 0x78], rcx
1f11e8 xor      rdx, rax
1f11eb movzx    eax, byte ptr [r14 + 0xe8]
1f11f3 mov      byte ptr [rsp + 0x90], al
1f11fa xor      rdx, rcx
1f11fd mov      rcx, rdx
1f1200 xor      rcx, r8
1f1203 lea      rax, [rdx + r8]
1f1207 movzx    r8d, byte ptr [rsp + 0x90]
1f1210 test     r8b, r8b
1f1213 cmove    rax, rcx
1f1217 mov      qword ptr [r14 + 0x110], rax
1f121e movabs   rax, 0x9e3779b97f4a7c15
1f1228 imul     r15, rax
1f122c movabs   rax, 0x2545f4914f6cdd1d
1f1236 add      r15, rax
1f1239 mov      rax, r15
1f123c shr      rax, 0x1b
1f1240 movzx    edx, al
1f1243 lea      rax, [r13*2]
1f124b add      rax, r13
1f124e mov      byte ptr [r14 + 0x165], dl
1f1255 imul     rdx, qword ptr [rsp + 0x70]
1f125b add      rax, rax
1f125e xor      rdx, rax
1f1261 mov      rax, qword ptr [rsp + 0x20]
1f1266 xor      rdx, qword ptr [rsp + 0x78]
1f126b mov      rcx, rdx
1f126e xor      rcx, rax
1f1271 add      rax, rdx
1f1274 test     r8b, r8b
1f1277 mov      r8d, esi
1f127a cmove    rax, rcx
1f127e mov      qword ptr [r14 + 0x118], rax
1f1285 mov      eax, dword ptr [rsp + 0x98]
1f128c xor      r8, rax
1f128f movabs   rax, 0x9e3779b97f4a7c15
1f1299 imul     r15, rax
1f129d movabs   rax, 0x2545f4914f6cdd1d
1f12a7 add      r15, rax
1f12aa mov      rax, r15
1f12ad shr      rax, 0x1b
1f12b1 movzx    edx, al
1f12b4 lea      rax, [r13*2]
1f12bc add      rax, r13
1f12bf mov      byte ptr [r14 + 0x16b], dl
1f12c6 imul     rdx, qword ptr [rsp + 0x70]
1f12cc shl      rax, 2
1f12d0 xor      rdx, rax
1f12d3 xor      rdx, qword ptr [rsp + 0x78]
1f12d8 mov      rcx, rdx
1f12db xor      rcx, r8
1f12de cmp      byte ptr [rsp + 0x90], 0
1f12e6 lea      rax, [rdx + r8]
1f12ea movabs   rdx, 0xd6e8feb86659fd93
1f12f4 cmove    rax, rcx
1f12f8 mov      ecx, r9d
1f12fb mov      r9, qword ptr [rsp + 0x70]
1f1300 mov      qword ptr [r14 + 0x148], rax
1f1307 movabs   rax, 0xc2b2ae3d27d4eb4f
1f1311 imul     rcx, rax
1f1315 movabs   rax, 0x9e3779b97f4a7c15
1f131f imul     r10, rax
1f1323 mov      rax, qword ptr [rsp + 0x20]
1f1328 imul     rax, rdx
1f132c xor      rcx, r10
1f132f mov      r10, qword ptr [rsp + 0x78]
1f1334 xor      rcx, rax
1f1337 xor      rcx, r11
1f133a movabs   r11, 0x9e3779b97f4a7c15
1f1344 xor      rcx, rbx
1f1347 movabs   rbx, 0x2545f4914f6cdd1d
1f1351 xor      rcx, rsi
1f1354 movabs   rsi, 0xff51afd7ed558ccd
1f135e xor      rcx, 0x42525441
1f1365 mov      rax, rcx
1f1368 shr      rax, 0x21
1f136c xor      rax, rcx
1f136f imul     rax, rsi
1f1373 imul     r15, r11
1f1377 mov      rcx, rax
1f137a shr      rcx, 0x21
1f137e xor      rcx, rax
1f1381 movabs   rax, 0xc4ceb9fe1a85ec53
1f138b imul     rcx, rax
1f138f add      r15, rbx
1f1392 mov      r8, rcx
1f1395 mov      rax, r15
1f1398 shr      rax, 0x1b
1f139c movzx    edx, al
1f139f mov      byte ptr [r14 + 0x16c], dl
1f13a6 imul     rdx, r9
1f13aa imul     rax, r13, 0xd
1f13ae shr      r8, 0x21
1f13b2 xor      r8, rcx
1f13b5 mov      rcx, r8
1f13b8 xor      rdx, rax
1f13bb xor      rdx, r10
1f13be xor      rcx, rdx
1f13c1 lea      rax, [r8 + rdx]
1f13c5 movzx    r8d, byte ptr [rsp + 0x90]
1f13ce test     r8b, r8b
1f13d1 cmove    rax, rcx
1f13d5 add      rdi, 5
1f13d9 mov      qword ptr [r14 + 0x150], rax
1f13e0 imul     r15, r11
1f13e4 mov      qword ptr [r14 + 0x1b8], rdi
1f13eb add      r15, rbx
1f13ee mov      qword ptr [r14 + 0x1b0], r15
1f13f5 mov      rax, r15
1f13f8 shr      rax, 0x1b
1f13fc movzx    edx, al
1f13ff mov      byte ptr [r14 + 0x166], dl
1f1406 imul     rax, r13, 7
1f140a imul     rdx, r9
1f140e xor      rdx, rax
1f1411 xor      rdx, r10
1f1414 mov      rcx, rdx
1f1417 xor      rcx, 1
1f141b test     r8b, r8b
1f141e lea      rax, [rdx + 1]
1f1422 cmove    rax, rcx
1f1426 mov      qword ptr [r14 + 0x120], rax
1f142d inc      qword ptr [r14 + 0x388]
1f1434 test     ebp, ebp
1f1436 je       0x1401f150b
1f143c mov      ecx, dword ptr [rsp + 0x80]
1f1443 and      ecx, 1
1f1446 mov      eax, r12d
1f1449 xor      rcx, rax
1f144c mov      eax, dword ptr [rsp + 0x98]
1f1453 imul     rcx, r11
1f1457 imul     r15, r11
1f145b xor      qword ptr [r14 + 0x348], rcx
1f1462 mov      ecx, dword ptr [rsp + 0x20]
1f1466 xor      rcx, rax
1f1469 xor      rcx, qword ptr [r14 + 0x20]
1f146d mov      rax, rcx
1f1470 shr      rax, 0x21
1f1474 add      r15, rbx
1f1477 mov      rbx, qword ptr [rsp + 0x88]
1f147f xor      rax, rcx
1f1482 imul     rax, rsi
1f1486 mov      qword ptr [r14 + 0x1b0], r15
1f148d mov      rcx, rax
1f1490 shr      r15, 0x1b
1f1494 shr      rcx, 0x21
1f1498 xor      rcx, rax
1f149b movabs   rax, 0xc4ceb9fe1a85ec53
1f14a5 imul     rcx, rax
1f14a9 mov      rax, rcx
1f14ac shr      rax, 0x21
1f14b0 xor      rax, rcx
1f14b3 movzx    ecx, r15b
1f14b7 mov      qword ptr [r14 + 0x20], rax
1f14bb lea      rax, [rdi + 1]
1f14bf mov      qword ptr [r14 + 0x1b8], rax
1f14c6 mov      eax, 0xffd5b
1f14cb mov      byte ptr [r14 + 0x160], cl
1f14d2 imul     rcx, r9
1f14d6 xor      rcx, r10
1f14d9 xor      rcx, r13
1f14dc mov      rdx, rcx
1f14df add      rcx, 0xffd5b
1f14e6 xor      rdx, 0xffd5b
1f14ed test     r8b, r8b
1f14f0 cmove    rcx, rdx
1f14f4 mov      qword ptr [r14 + 0xf0], rcx
1f14fb add      rsp, 0x30
1f14ff pop      r15
1f1501 pop      r14
1f1503 pop      r13
1f1505 pop      r12
1f1507 pop      rdi
1f1508 pop      rsi
1f1509 pop      rbp
1f150a ret      
1f150b mov      edx, 0x42524147
1f1510 mov      rcx, r14
1f1513 call     0x1401ed830
1f1518 int3     
