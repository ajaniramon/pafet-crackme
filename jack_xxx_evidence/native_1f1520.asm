1f1520 mov      qword ptr [rsp + 8], rbx
1f1525 mov      qword ptr [rsp + 0x10], rbp
1f152a mov      qword ptr [rsp + 0x18], rsi
1f152f push     rdi
1f1530 push     r12
1f1532 push     r13
1f1534 push     r14
1f1536 push     r15
1f1538 sub      rsp, 0x20
1f153c mov      r10, qword ptr [rcx + 0x350]
1f1543 mov      rbp, rcx
1f1546 mov      r9d, dword ptr [rcx + 0x384]
1f154d movabs   rax, 0x9e3779b97f4a7c15
1f1557 mov      r14d, r8d
1f155a movabs   r12, 0xff51afd7ed558ccd
1f1564 imul     r14, rax
1f1568 mov      r15d, r8d
1f156b movabs   rax, 0x95e8f2fe312fca73
1f1575 add      rax, r14
1f1578 movabs   r13, 0xc4ceb9fe1a85ec53
1f1582 xor      rax, qword ptr [rcx + 0x20]
1f1586 xor      rax, r10
1f1589 xor      rax, r9
1f158c mov      rcx, rax
1f158f shr      rcx, 0x21
1f1593 xor      rcx, rax
1f1596 imul     rcx, r12
1f159a mov      rax, rcx
1f159d shr      rax, 0x21
1f15a1 xor      rax, rcx
1f15a4 imul     rax, r13
1f15a8 mov      r8, rax
1f15ab shr      r8, 0x21
1f15af xor      r8, rax
1f15b2 mov      rsi, r8
1f15b5 mov      ecx, r8d
1f15b8 xor      rsi, rdx
1f15bb and      ecx, 0x3f
1f15be je       0x1401f15c3
1f15c0 rol      rsi, cl
1f15c3 xor      r8, 0x44454331
1f15ca movabs   rdx, 0xd6e8feb86659fd93
1f15d4 mov      rax, r8
1f15d7 shr      rax, 0x21
1f15db xor      rax, r8
1f15de imul     rax, r12
1f15e2 mov      rcx, rax
1f15e5 shr      rcx, 0x21
1f15e9 xor      rcx, rax
1f15ec imul     rcx, r13
1f15f0 mov      rax, rcx
1f15f3 shr      rax, 0x21
1f15f7 xor      rax, rcx
1f15fa mov      ecx, 0x42524d4b
1f15ff or       rax, 1
1f1603 imul     rsi, rax
1f1607 movabs   rax, 0xc2b2ae3d6586a604
1f1611 lea      rdi, [rsi - 1]
1f1615 cmp      rdi, rsi
1f1618 cmovae   rcx, rax
1f161c mov      rax, r15
1f161f imul     rax, rdx
1f1623 xor      rcx, rax
1f1626 xor      rcx, r9
1f1629 xor      rcx, r10
1f162c xor      rcx, qword ptr [rbp + 0x260]
1f1633 mov      rax, rcx
1f1636 shr      rax, 0x21
1f163a xor      rax, rcx
1f163d mov      rcx, rbp
1f1640 imul     rax, r12
1f1644 mov      rbx, rax
1f1647 shr      rbx, 0x21
1f164b xor      rbx, rax
1f164e imul     rbx, r13
1f1652 call     0x1401ee070
1f1657 mov      edx, eax
1f1659 mov      ecx, 0x42525441
1f165e mov      rax, rbx
1f1661 movabs   r8, 0xc2b2ae3d27d4eb4f
1f166b shr      rax, 0x21
1f166f xor      rdx, rax
1f1672 movabs   rax, 0xd6e8feb8240ba9d2
1f167c xor      rdx, rbx
1f167f cmp      rdi, rsi
1f1682 cmovae   rcx, rax
1f1686 xor      r15, qword ptr [rbp + 0x20]
1f168a mov      eax, edx
1f168c xor      r15, rsi
1f168f imul     rax, r8
1f1693 xor      rcx, rax
1f1696 mov      eax, dword ptr [rbp + 0x384]
1f169c xor      rcx, rax
1f169f xor      rcx, qword ptr [rbp + 0x350]
1f16a6 xor      rcx, r14
1f16a9 xor      rcx, qword ptr [rbp + 0x260]
1f16b0 mov      rax, rcx
1f16b3 shr      rax, 0x21
1f16b7 xor      rax, rcx
1f16ba imul     rax, r12
1f16be mov      rcx, rax
1f16c1 shr      rcx, 0x21
1f16c5 xor      rcx, rax
1f16c8 imul     rcx, r13
1f16cc mov      rax, rcx
1f16cf shr      rax, 0x21
1f16d3 xor      rax, qword ptr [rbp + 0x348]
1f16da xor      rax, rcx
1f16dd xor      rax, rdx
1f16e0 mov      qword ptr [rbp + 0x348], rax
1f16e7 mov      rax, r15
1f16ea shr      rax, 0x21
1f16ee xor      rax, r15
1f16f1 imul     rax, r12
1f16f5 mov      rcx, rax
1f16f8 shr      rcx, 0x21
1f16fc xor      rcx, rax
1f16ff imul     rcx, r13
1f1703 mov      rax, rcx
1f1706 shr      rax, 0x21
1f170a xor      rax, rcx
1f170d mov      rbx, qword ptr [rsp + 0x50]
1f1712 mov      rsi, qword ptr [rsp + 0x60]
1f1717 mov      qword ptr [rbp + 0x20], rax
1f171b mov      rbp, qword ptr [rsp + 0x58]
1f1720 add      rsp, 0x20
1f1724 pop      r15
1f1726 pop      r14
1f1728 pop      r13
1f172a pop      r12
1f172c pop      rdi
1f172d ret      
