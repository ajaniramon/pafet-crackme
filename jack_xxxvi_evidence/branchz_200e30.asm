200e30 mov      qword ptr [rsp + 0x20], rbx
200e35 mov      qword ptr [rsp + 0x18], r8
200e3a mov      dword ptr [rsp + 0x10], edx
200e3e push     rbp
200e3f push     rsi
200e40 push     rdi
200e41 push     r12
200e43 push     r13
200e45 push     r14
200e47 push     r15
200e49 sub      rsp, 0x30
200e4d movsxd   rax, dword ptr [rcx + 0x11e0]
200e54 mov      r14, rcx
200e57 mov      ebp, edx
200e59 movabs   rcx, 0x1f4ca5924e9dc001
200e63 imul     rax, rcx
200e67 movabs   rcx, 0xbd152f59cf43443e
200e71 mov      r15, r8
200e74 xor      rax, qword ptr [r14 + 0x28]
200e78 mov      qword ptr [rsp + 0x70], rax
200e7d mov      rax, qword ptr [rsp + 0x70]
200e82 movsxd   rax, dword ptr [r14 + 0x11e0]
200e89 imul     rax, rcx
200e8d movabs   rcx, 0x5bddb1074c08c82b
200e97 xor      rax, qword ptr [r14 + 0x28]
200e9b mov      qword ptr [rsp + 0x70], rax
200ea0 mov      rax, qword ptr [rsp + 0x70]
200ea5 movsxd   rax, dword ptr [r14 + 0x11e0]
200eac imul     rax, rcx
200eb0 movabs   rcx, 0x36504c7f3831a3f0
200eba xor      rax, qword ptr [r14 + 0x28]
200ebe mov      qword ptr [rsp + 0x70], rax
200ec3 mov      rax, qword ptr [rsp + 0x70]
200ec8 mov      rax, qword ptr [r14 + 0x2f0]
200ecf sub      rax, rcx
200ed2 mov      rcx, rax
200ed5 shr      rcx, 0x21
200ed9 xor      rcx, rax
200edc movabs   rax, 0xff51afd7ed558ccd
200ee6 imul     rcx, rax
200eea movabs   rax, 0xc4ceb9fe1a85ec53
200ef4 mov      rdx, rcx
200ef7 shr      rdx, 0x21
200efb xor      rdx, rcx
200efe mov      rcx, r14
200f01 imul     rdx, rax
200f05 mov      rax, rdx
200f08 shr      rax, 0x21
200f0c xor      rdx, rax
200f0f mov      rax, qword ptr [r14 + 0x2f0]
200f16 or       rdx, 1
200f1a xor      rdx, rax
200f1d mov      qword ptr [r14 + 0x2f0], rdx
200f24 call     0x1401f1c70
200f29 mov      rcx, r14
200f2c mov      esi, eax
200f2e call     0x1401ee940
200f33 mov      rdi, qword ptr [r14 + 0xf8]
200f3a mov      r11, rax
200f3d movzx    ecx, byte ptr [r14 + 0x161]
200f45 mov      rax, rdi
200f48 mov      r9, qword ptr [r14 + 0xe0]
200f4f movabs   r12, 0x9e3779b97f4a7c15
200f59 mov      r8, qword ptr [r14 + 0xd0]
200f60 movabs   r13, 0x2545f4914f6cdd1d
200f6a movzx    edx, byte ptr [r14 + 0xe8]
200f72 mov      r10, qword ptr [r14 + 0xd8]
200f79 imul     rcx, r9
200f7d add      r10, r10
200f80 xor      rcx, r8
200f83 xor      rcx, r10
200f86 xor      rax, rcx
200f89 sub      rdi, rcx
200f8c test     dl, dl
200f8e cmove    rdi, rax
200f92 mov      rax, qword ptr [r14 + 0x1b0]
200f99 inc      qword ptr [r14 + 0x1b8]
200fa0 imul     rax, r12
200fa4 add      rax, r13
200fa7 mov      qword ptr [r14 + 0x1b0], rax
200fae shr      rax, 0x1b
200fb2 movzx    eax, al
200fb5 mov      byte ptr [r14 + 0x161], al
200fbc imul     rax, r9
200fc0 xor      rax, r8
200fc3 xor      rax, r10
200fc6 mov      rcx, rax
200fc9 add      rax, rdi
200fcc xor      rcx, rdi
200fcf test     dl, dl
200fd1 cmove    rax, rcx
200fd5 mov      qword ptr [r14 + 0xf8], rax
200fdc movzx    r9d, byte ptr [r14 + 0x4ad]
200fe4 mov      r8d, edi
200fe7 mov      rdx, r11
200fea mov      rcx, r14
200fed call     0x1401f0e60
200ff2 mov      ecx, esi
200ff4 mov      rbx, rax
200ff7 call     0x1401ed270
200ffc xor      r8d, r8d
200fff mov      dword ptr [rsp + 0x28], edi
201003 lea      rcx, [rbx - 1]
201007 mov      dword ptr [rsp + 0x20], eax
20100b cmp      rcx, rbx
20100e mov      rdx, rbx
201011 mov      rcx, r14
201014 setae    r8b
201018 xor      r9d, r9d
20101b call     0x1401f10a0
201020 mov      rdx, rax
201023 mov      rcx, r14
201026 call     0x1401f0db0
20102b mov      rax, qword ptr [r14 + 0x2f0]
201032 test     ebp, ebp
201034 jns      0x140201b5f
20103a cmp      qword ptr [r14 + 0x11b8], r15
201041 jne      0x140201b6d
201047 movsxd   rax, dword ptr [r14 + 0x11e0]
20104e movabs   rcx, 0x106b6d6a5984a2eb
201058 imul     rax, rcx
20105c mov      rcx, r14
20105f xor      rax, qword ptr [r14 + 0x28]
201063 mov      qword ptr [rsp + 0x70], rax
201068 mov      rax, qword ptr [rsp + 0x70]
20106d call     0x1401ee450
201072 test     eax, eax
201074 jne      0x140201b47
20107a cmp      dword ptr [r14 + 0xad0], eax
201081 jne      0x140201b47
201087 mov      r8, qword ptr [r14 + 0xf0]
20108e movzx    ecx, byte ptr [r14 + 0x160]
201096 mov      rax, r8
201099 mov      r10, qword ptr [r14 + 0xe0]
2010a0 mov      rbx, qword ptr [r14 + 0xd0]
2010a7 mov      r11, qword ptr [r14 + 0xd8]
2010ae movzx    edi, byte ptr [r14 + 0xe8]
2010b6 mov      r9, qword ptr [r14 + 0x1b0]
2010bd mov      rsi, qword ptr [r14 + 0x1b8]
2010c4 imul     rcx, r10
2010c8 xor      rcx, rbx
2010cb xor      rcx, r11
2010ce xor      rax, rcx
2010d1 sub      r8, rcx
2010d4 test     dil, dil
2010d7 cmove    r8, rax
2010db inc      rsi
2010de imul     r9, r12
2010e2 mov      qword ptr [r14 + 0x1b8], rsi
2010e9 add      r9, r13
2010ec mov      qword ptr [r14 + 0x1b0], r9
2010f3 mov      rax, r9
2010f6 shr      rax, 0x1b
2010fa movzx    edx, al
2010fd mov      byte ptr [r14 + 0x160], dl
201104 imul     rdx, r10
201108 xor      rdx, rbx
20110b xor      rdx, r11
20110e mov      rcx, rdx
201111 xor      rcx, r8
201114 test     dil, dil
201117 lea      rax, [rdx + r8]
20111b cmove    rax, rcx
20111f mov      qword ptr [r14 + 0xf0], rax
201126 cmp      r8d, 0x338040
20112d jne      0x140201b47
201133 mov      eax, ebp
201135 btr      eax, 0x1f
201139 cmp      eax, 2
20113c jae      0x140201188
20113e imul     r9, r12
201142 lea      rax, [rsi + 1]
201146 mov      qword ptr [r14 + 0x1b8], rax
20114d add      r9, r13
201150 mov      qword ptr [r14 + 0x1b0], r9
201157 shr      r9, 0x1b
20115b movzx    eax, r9b
20115f mov      byte ptr [r14 + 0x160], al
201166 imul     rax, r10
20116a xor      rax, rbx
20116d xor      rax, r11
201170 mov      rcx, rax
201173 add      rax, 0x1ad951
201179 xor      rcx, 0x1ad951
201180 test     dil, dil
201183 jmp      0x140201b3c
201188 mov      rcx, r14
20118b call     0x1401ee070
201190 movzx    ecx, byte ptr [r14 + 0x4ad]
201198 movabs   r8, 0xc4ceb9fe1a85ec53
2011a2 mov      r11, qword ptr [r14 + 0xe0]
2011a9 movabs   r15, 0xff51afd7ed558ccd
2011b3 mov      r9, qword ptr [r14 + 0xd0]
2011ba movzx    r10d, byte ptr [r14 + 0xe8]
2011c2 mov      eax, eax
2011c4 xor      rcx, rax
2011c7 xor      rcx, qword ptr [r14 + 0x11e8]
2011ce mov      rax, rcx
2011d1 shr      rax, 0x21
2011d5 xor      rax, rcx
2011d8 imul     rax, r15
2011dc mov      rcx, rax
2011df shr      rcx, 0x21
2011e3 xor      rcx, rax
2011e6 mov      rax, qword ptr [r14 + 0x20]
2011ea xor      rax, qword ptr [r14 + 0x28]
2011ee imul     rcx, r8
2011f2 mov      rdx, rcx
2011f5 shr      rdx, 0x21
2011f9 xor      rdx, rcx
2011fc xor      rax, rdx
2011ff mov      qword ptr [r14 + 0x11e8], rdx
201206 mov      rcx, rax
201209 shr      rcx, 0x21
20120d xor      rcx, rax
201210 imul     rcx, r15
201214 mov      rdx, rcx
201217 shr      rdx, 0x21
20121b xor      rdx, rcx
20121e imul     rdx, r8
201222 mov      rax, rdx
201225 shr      rax, 0x21
201229 xor      rax, rdx
20122c mov      qword ptr [r14 + 0x20], rax
201230 mov      rdx, qword ptr [r14 + 0x138]
201237 movzx    ecx, byte ptr [r14 + 0x169]
20123f mov      rax, qword ptr [r14 + 0xd8]
201246 imul     rcx, r11
20124a lea      rbx, [rax + rax*4]
20124e mov      rax, rdx
201251 xor      rcx, r9
201254 add      rbx, rbx
201257 xor      rcx, rbx
20125a xor      rax, rcx
20125d sub      rdx, rcx
201260 test     r10b, r10b
201263 cmove    rdx, rax
201267 mov      rax, qword ptr [r14 + 0x1b0]
20126e inc      qword ptr [r14 + 0x1b8]
201275 imul     rax, r12
201279 add      rax, r13
20127c mov      qword ptr [r14 + 0x1b0], rax
201283 shr      rax, 0x1b
201287 movzx    r8d, al
20128b mov      byte ptr [r14 + 0x169], r8b
201292 imul     r8, r11
201296 xor      r8, r9
201299 xor      r8, rbx
20129c mov      rcx, r8
20129f xor      rcx, rdx
2012a2 test     r10b, r10b
2012a5 lea      rax, [r8 + rdx]
2012a9 cmove    rax, rcx
2012ad mov      rcx, r14
2012b0 mov      qword ptr [r14 + 0x138], rax
2012b7 call     0x1401f0910
2012bc mov      rax, qword ptr [r14 + 0xd8]
2012c3 mov      r11, qword ptr [r14 + 0xe0]
2012ca movzx    ecx, byte ptr [r14 + 0x168]
2012d2 mov      r9, qword ptr [r14 + 0xd0]
2012d9 mov      rdx, qword ptr [r14 + 0x130]
2012e0 lea      rbx, [rax + rax*8]
2012e4 movzx    r10d, byte ptr [r14 + 0xe8]
2012ec mov      rax, rdx
2012ef imul     rcx, r11
2012f3 xor      rcx, r9
2012f6 xor      rcx, rbx
2012f9 xor      rax, rcx
2012fc sub      rdx, rcx
2012ff test     r10b, r10b
201302 cmove    rdx, rax
201306 mov      rax, qword ptr [r14 + 0x1b0]
20130d inc      qword ptr [r14 + 0x1b8]
201314 mov      rcx, rdx
201317 imul     rax, r12
20131b add      rax, r13
20131e mov      qword ptr [r14 + 0x1b0], rax
201325 shr      rax, 0x1b
201329 movzx    r8d, al
20132d mov      byte ptr [r14 + 0x168], r8b
201334 imul     r8, r11
201338 xor      r8, r9
20133b xor      r8, rbx
20133e xor      rcx, r8
201341 test     r10b, r10b
201344 lea      rax, [rdx + r8]
201348 cmove    rax, rcx
20134c mov      rcx, r14
20134f mov      qword ptr [r14 + 0x130], rax
201356 call     0x1401f0910
20135b mov      rcx, r14
20135e call     0x1401ee070
201363 cmp      eax, dword ptr [r14 + 0x1d8]
20136a jae      0x140201376
20136c mov      edx, eax
20136e mov      rcx, r14
201371 call     0x1401f0910
201376 mov      rsi, qword ptr [r14 + 0xe0]
20137d mov      rbp, qword ptr [r14 + 0xd0]
201384 mov      r11, qword ptr [r14 + 0x130]
20138b movzx    edi, byte ptr [r14 + 0xe8]
201393 mov      rax, r11
201396 movzx    ecx, byte ptr [r14 + 0x168]
20139e mov      rbx, qword ptr [r14 + 0xd8]
2013a5 mov      r8, qword ptr [r14 + 0x1b8]
2013ac mov      r9, qword ptr [r14 + 0x1b0]
2013b3 imul     rcx, rsi
2013b7 lea      r10, [rbx + rbx*8]
2013bb xor      rcx, rbp
2013be xor      rcx, r10
2013c1 xor      rax, rcx
2013c4 sub      r11, rcx
2013c7 test     dil, dil
2013ca cmove    r11, rax
2013ce imul     r9, r12
2013d2 mov      rcx, r11
2013d5 add      r9, r13
2013d8 mov      rax, r9
2013db shr      rax, 0x1b
2013df movzx    edx, al
2013e2 mov      byte ptr [r14 + 0x168], dl
2013e9 imul     rdx, rsi
2013ed xor      rdx, rbp
2013f0 xor      rdx, r10
2013f3 xor      rcx, rdx
2013f6 test     dil, dil
2013f9 lea      rax, [r11 + rdx]
2013fd cmove    rax, rcx
201401 mov      rcx, r11
201404 mov      qword ptr [r14 + 0x130], rax
20140b lea      rax, [r8 + 2]
20140f mov      qword ptr [r14 + 0x1b8], rax
201416 mov      r8d, 0xceb0
20141c imul     r9, r12
201420 lea      rax, [rbx + rbx*4]
201424 add      rax, rax
201427 add      r9, r13
20142a mov      qword ptr [r14 + 0x1b0], r9
201431 shr      r9, 0x1b
201435 movzx    edx, r9b
201439 mov      byte ptr [r14 + 0x169], dl
201440 imul     rdx, rsi
201444 xor      rdx, rax
201447 xor      rdx, rbp
20144a xor      rcx, rdx
20144d test     dil, dil
201450 lea      rax, [r11 + rdx]
201454 cmove    rax, rcx
201458 mov      rcx, r14
20145b mov      qword ptr [r14 + 0x138], rax
201462 movzx    edx, byte ptr [r14 + 0x4ad]
20146a xor      rdx, qword ptr [r14 + 0x348]
201471 call     0x1401f1520
201476 mov      r8, qword ptr [r14 + 0x348]
20147d movabs   rdi, 0xc4ceb9fe1a85ec53
201487 mov      rax, r8
20148a xor      rax, qword ptr [r14 + 0x20]
20148e mov      rcx, rax
201491 shr      rcx, 0x21
201495 xor      rcx, rax
201498 imul     rcx, r15
20149c mov      rax, rcx
20149f shr      rax, 0x21
2014a3 xor      rax, rcx
2014a6 imul     rax, rdi
2014aa mov      rdx, rax
2014ad shr      rdx, 0x21
2014b1 xor      edx, eax
2014b3 mov      ecx, edx
2014b5 lea      eax, [rdx + 1]
2014b8 imul     ecx, eax
2014bb xor      edx, eax
2014bd not      ecx
2014bf and      ecx, edx
2014c1 test     cl, 1
2014c4 je       0x14020152d
2014c6 and      r8b, 3
2014ca cmp      r8b, 1
2014ce jne      0x14020152d
2014d0 mov      rax, qword ptr [r14 + 0x1b0]
2014d7 inc      qword ptr [r14 + 0x1b8]
2014de imul     rax, r12
2014e2 add      rax, r13
2014e5 mov      qword ptr [r14 + 0x1b0], rax
2014ec shr      rax, 0x1b
2014f0 movzx    eax, al
2014f3 mov      byte ptr [r14 + 0x160], al
2014fa imul     rax, qword ptr [r14 + 0xe0]
201502 xor      rax, qword ptr [r14 + 0xd0]
201509 xor      rax, qword ptr [r14 + 0xd8]
201510 mov      rcx, rax
201513 add      rax, 0x190631
201519 xor      rcx, 0x190631
201520 cmp      byte ptr [r14 + 0xe8], 0
201528 jmp      0x140201b3c
20152d mov      rcx, r14
201530 call     0x1401ee070
201535 mov      ebx, eax
201537 cmp      eax, dword ptr [r14 + 0x1d8]
20153e jb       0x14020159d
201540 mov      rax, qword ptr [r14 + 0x1b0]
201547 inc      qword ptr [r14 + 0x1b8]
20154e imul     rax, r12
201552 add      rax, r13
201555 mov      qword ptr [r14 + 0x1b0], rax
20155c shr      rax, 0x1b
201560 movzx    eax, al
201563 mov      byte ptr [r14 + 0x160], al
20156a imul     rax, qword ptr [r14 + 0xe0]
201572 xor      rax, qword ptr [r14 + 0xd0]
201579 xor      rax, qword ptr [r14 + 0xd8]
201580 mov      rcx, rax
201583 add      rax, 0xfe1ab
201589 xor      rcx, 0xfe1ab
201590 cmp      byte ptr [r14 + 0xe8], 0
201598 jmp      0x140201b3c
20159d mov      edx, ebx
20159f mov      rcx, r14
2015a2 call     0x1401f25b0
2015a7 movsxd   rcx, dword ptr [r14 + 0x11e0]
2015ae movabs   r8, 0xd6e8feb86659fd93
2015b8 mov      rdx, qword ptr [r14 + 0x20]
2015bc mov      rax, rbx
2015bf imul     rax, r8
2015c3 imul     rcx, r12
2015c7 rol      rdx, 0x11
2015cb xor      rcx, qword ptr [r14 + 0x260]
2015d2 xor      rax, rcx
2015d5 xor      rax, rdx
2015d8 mov      rcx, rax
2015db shr      rcx, 0x21
2015df xor      rcx, rax
2015e2 imul     rcx, r15
2015e6 mov      rdx, rcx
2015e9 shr      rdx, 0x21
2015ed xor      rdx, rcx
2015f0 imul     rdx, rdi
2015f4 mov      rax, rdx
2015f7 shr      rax, 0x21
2015fb xor      rax, rdx
2015fe mov      r10, rax
201601 shr      r10, 0x1d
201605 xor      r10, rax
201608 or       r10, 1
20160c mov      rax, r10
20160f mov      qword ptr [r14 + 0x260], r10
201616 and      eax, 0x3ff
20161b cmp      rax, 0x2c5
201621 jne      0x140201632
201623 mov      rcx, r14
201626 call     0x1402297e0
20162b mov      r10, qword ptr [r14 + 0x260]
201632 movzx    eax, r10b
201636 and      al, 0x1f
201638 cmp      al, 0x15
20163a jne      0x140201728
201640 movsxd   rcx, dword ptr [r14 + 0x11e0]
201647 mov      rax, qword ptr [r14 + 0x20]
20164b xor      rcx, 0x5a5a
201652 rol      rax, 0x11
201656 imul     rcx, r12
20165a xor      rcx, r10
20165d xor      rcx, rax
201660 movabs   rax, 0x8f70feda99a6026d
20166a xor      rcx, rax
20166d mov      rax, rcx
201670 shr      rax, 0x21
201674 xor      rax, rcx
201677 imul     rax, r15
20167b mov      rcx, rax
20167e shr      rcx, 0x21
201682 xor      rcx, rax
201685 imul     rcx, rdi
201689 mov      rax, rcx
20168c shr      rax, 0x21
201690 xor      rax, rcx
201693 mov      r9, rax
201696 shr      r9, 0x1d
20169a xor      r9, rax
20169d or       r9, 1
2016a1 mov      rax, r9
2016a4 mov      rcx, r9
2016a7 shr      rax, 8
2016ab and      eax, 3
2016ae shr      rcx, 0x28
2016b2 imul     r8, rax, 0x3e
2016b6 mov      eax, 0x8421085
2016bb mul      ecx
2016bd mov      eax, ecx
2016bf sub      eax, edx
2016c1 shr      eax, 1
2016c3 add      eax, edx
2016c5 shr      eax, 5
2016c8 imul     eax, eax, 0x3e
2016cb sub      ecx, eax
2016cd mov      eax, ecx
2016cf add      r8, rax
2016d2 mov      rax, qword ptr [r14 + 0x4b8]
2016d9 movsxd   rcx, dword ptr [rax + r8*4]
2016dd movsxd   rax, dword ptr [r14 + 0x4c8]
2016e4 xor      rcx, rax
2016e7 add      rcx, qword ptr [r14 + 0x4c0]
2016ee xor      rcx, r9
2016f1 mov      rax, rcx
2016f4 shr      rax, 0x21
2016f8 xor      rax, rcx
2016fb imul     rax, r15
2016ff mov      rcx, rax
201702 shr      rcx, 0x21
201706 xor      rcx, rax
201709 imul     rcx, rdi
20170d mov      rax, rcx
201710 shr      rax, 0x21
201714 xor      rax, r10
201717 xor      rax, rcx
20171a inc      qword ptr [r14 + 0x268]
201721 mov      qword ptr [r14 + 0x260], rax
201728 inc      dword ptr [r14 + 0x200]
20172f mov      eax, dword ptr [r14 + 0x200]
201736 cmp      eax, dword ptr [r14 + 0x1fc]
20173d jb       0x140201752
20173f mov      rcx, r14
201742 mov      dword ptr [r14 + 0x200], 0
20174d call     0x1401ef7c0
201752 mov      r8d, ebx
201755 mov      edx, ebx
201757 mov      rcx, r14
20175a call     0x1401f0660
20175f inc      qword ptr [r14 + 0x1b8]
201766 mov      rcx, rbx
201769 mov      r9, qword ptr [r14 + 0x1b0]
201770 imul     r9, r12
201774 lea      r12d, [rbx + 1]
201778 add      r9, r13
20177b mov      r13, qword ptr [r14 + 0x1b8]
201782 mov      qword ptr [r14 + 0x1b0], r9
201789 mov      rax, r9
20178c shr      rax, 0x1b
201790 movzx    edx, al
201793 mov      byte ptr [r14 + 0x168], dl
20179a mov      r11, qword ptr [r14 + 0xe0]
2017a1 mov      r10, qword ptr [r14 + 0xd8]
2017a8 mov      rdi, qword ptr [r14 + 0xd0]
2017af movzx    ebp, byte ptr [r14 + 0xe8]
2017b7 imul     rdx, r11
2017bb lea      rax, [r10 + r10*8]
2017bf xor      rdx, rax
2017c2 xor      rdx, rdi
2017c5 xor      rcx, rdx
2017c8 test     bpl, bpl
2017cb lea      rax, [rbx + rdx]
2017cf cmove    rax, rcx
2017d3 inc      r13
2017d6 mov      qword ptr [r14 + 0x130], rax
2017dd mov      rcx, qword ptr [r14 + 0x1d0]
2017e4 mov      rax, qword ptr [r14 + 0x48]
2017e8 movzx    r8d, byte ptr [rcx + rbx]
2017ed xor      r8b, byte ptr [rax + rbx]
2017f1 movabs   rax, 0x9e3779b97f4a7c15
2017fb imul     r9, rax
2017ff movabs   rax, 0x2545f4914f6cdd1d
201809 mov      qword ptr [r14 + 0x1b8], r13
201810 add      r9, rax
201813 mov      rax, r9
201816 shr      rax, 0x1b
20181a movzx    edx, al
20181d lea      rax, [r10 + r10]
201821 mov      byte ptr [r14 + 0x161], dl
201828 imul     rdx, r11
20182c xor      rdx, rax
20182f xor      rdx, rdi
201832 mov      rcx, rdx
201835 xor      rcx, r12
201838 test     bpl, bpl
20183b lea      rax, [rdx + r12]
20183f cmove    rax, rcx
201843 mov      qword ptr [r14 + 0xf8], rax
20184a movsxd   rdx, dword ptr [r14 + 0x11e0]
201851 mov      rbx, qword ptr [r14 + 0x20]
201855 mov      rcx, rdx
201858 xor      rcx, qword ptr [r14 + 0x350]
20185f xor      rcx, r12
201862 xor      rcx, qword ptr [r14 + 0x348]
201869 xor      rcx, rbx
20186c mov      rax, rcx
20186f shr      rax, 0x21
201873 xor      rax, rcx
201876 imul     rax, r15
20187a mov      rcx, rax
20187d shr      rcx, 0x21
201881 xor      rcx, rax
201884 movabs   rax, 0xc4ceb9fe1a85ec53
20188e imul     rcx, rax
201892 movzx    eax, r8b
201896 xor      rax, 0xdd
20189c mov      r15, rcx
20189f shr      r15, 0x21
2018a3 xor      r15, rcx
2018a6 lea      rcx, [rip - 0x2018ad]
2018ad mov      qword ptr [r14 + 0x28], r15
2018b1 movzx    esi, byte ptr [rax + rcx + 0x3ecf00]
2018b9 xor      sil, 0x63
2018bd inc      edx
2018bf mov      dword ptr [r14 + 0x11e0], edx
2018c6 test     dl, 0x1f
2018c9 jne      0x140201919
2018cb movsxd   rax, edx
2018ce xor      rax, qword ptr [r14 + 0x348]
2018d5 xor      rax, rbx
2018d8 mov      rcx, rax
2018db shr      rcx, 0x21
2018df xor      rcx, rax
2018e2 movabs   rax, 0xff51afd7ed558ccd
2018ec imul     rcx, rax
2018f0 movabs   rax, 0xc4ceb9fe1a85ec53
2018fa mov      rdx, rcx
2018fd shr      rdx, 0x21
201901 xor      rdx, rcx
201904 imul     rdx, rax
201908 mov      rax, rdx
20190b shr      rax, 0x21
20190f xor      rax, rdx
201912 mov      qword ptr [r14 + 0x348], rax
201919 movzx    r8d, sil
20191d mov      eax, r8d
201920 mov      byte ptr [r14 + 0x4ad], sil
201927 xor      rax, r12
20192a movabs   r12, 0xff51afd7ed558ccd
201934 xor      rax, rbx
201937 movabs   rbx, 0x9e3779b97f4a7c15
201941 mov      rcx, rax
201944 shr      rcx, 0x21
201948 xor      rcx, rax
20194b movabs   rax, 0xc4ceb9fe1a85ec53
201955 imul     rcx, r12
201959 imul     r8, rbx
20195d imul     r9, rbx
201961 mov      rdx, rcx
201964 shr      rdx, 0x21
201968 xor      rdx, rcx
20196b mov      ecx, dword ptr [r14 + 0x1178]
201972 imul     rdx, rax
201976 mov      rax, rdx
201979 shr      rax, 0x21
20197d xor      rax, rdx
201980 mov      qword ptr [r14 + 0x20], rax
201984 movabs   rax, 0xd6e8feb86659fd93
20198e imul     rcx, rax
201992 xor      rcx, r8
201995 xor      rcx, r15
201998 movabs   r15, 0x2545f4914f6cdd1d
2019a2 mov      rax, rcx
2019a5 add      r9, r15
2019a8 shr      rax, 0x21
2019ac xor      rax, rcx
2019af imul     rax, r12
2019b3 mov      rdx, rax
2019b6 shr      rdx, 0x21
2019ba xor      rdx, rax
2019bd movabs   rax, 0xc4ceb9fe1a85ec53
2019c7 imul     rdx, rax
2019cb lea      rax, [r13 + 1]
2019cf shr      rdx, 0x21
2019d3 and      edx, 3
2019d6 mov      qword ptr [r14 + 0x1b8], rax
2019dd cmp      sil, 0x3e
2019e1 jae      0x140201a80
2019e7 inc      qword ptr [r14 + 0x11a0]
2019ee lea      rax, [rip - 0x2019f5]
2019f5 mov      r8d, dword ptr [rax + rdx*4 + 0x3e2d90]
2019fd mov      qword ptr [r14 + 0x1b0], r9
201a04 shr      r9, 0x1b
201a08 movzx    eax, r9b
201a0c mov      byte ptr [r14 + 0x160], al
201a13 imul     rax, r11
201a17 mov      ebx, edx
201a19 xor      rax, r10
201a1c xor      rax, rdi
201a1f mov      rcx, rax
201a22 add      rax, r8
201a25 xor      rcx, r8
201a28 movzx    r8d, sil
201a2c test     bpl, bpl
201a2f cmove    rax, rcx
201a33 mov      rcx, r14
201a36 mov      qword ptr [r14 + 0xf0], rax
201a3d call     0x1401f1f50
201a42 mov      edx, dword ptr [rsp + 0x78]
201a46 mov      r8, qword ptr [rsp + 0x80]
201a4e dec      edx
201a50 mov      eax, eax
201a52 imul     rcx, rbx, 0x3e
201a56 add      rcx, rax
201a59 mov      rax, qword ptr [r14 + 0x4b8]
201a60 movsxd   r9, dword ptr [rax + rcx*4]
201a64 mov      rcx, r14
201a67 movsxd   rax, dword ptr [r14 + 0x4c8]
201a6e xor      r9, rax
201a71 add      r9, qword ptr [r14 + 0x4c0]
201a78 call     r9
201a7b jmp      0x140201b47
201a80 inc      dword ptr [r14 + 0x11a8]
201a87 mov      rax, r9
201a8a shr      rax, 0x1b
201a8e movzx    ecx, al
201a91 lea      rax, [r10*4]
201a99 mov      byte ptr [r14 + 0x163], cl
201aa0 imul     rcx, r11
201aa4 imul     r9, rbx
201aa8 xor      rcx, rax
201aab xor      rcx, rdi
201aae mov      qword ptr [r14 + 0x108], rcx
201ab5 mov      r8, qword ptr [r14 + 0x1b8]
201abc add      r9, r15
201abf mov      rax, r9
201ac2 shr      rax, 0x1b
201ac6 movzx    edx, al
201ac9 mov      byte ptr [r14 + 0x16a], dl
201ad0 imul     rax, r10, 0xb
201ad4 imul     rdx, r11
201ad8 xor      rdx, rax
201adb xor      rdx, rdi
201ade mov      rcx, rdx
201ae1 xor      rcx, 1
201ae5 test     bpl, bpl
201ae8 lea      rax, [rdx + 1]
201aec cmove    rax, rcx
201af0 mov      qword ptr [r14 + 0x140], rax
201af7 lea      rax, [r8 + 2]
201afb mov      qword ptr [r14 + 0x1b8], rax
201b02 imul     r9, rbx
201b06 add      r9, r15
201b09 mov      qword ptr [r14 + 0x1b0], r9
201b10 shr      r9, 0x1b
201b14 movzx    eax, r9b
201b18 mov      byte ptr [r14 + 0x160], al
201b1f imul     rax, r11
201b23 xor      rax, rdi
201b26 xor      rax, r10
201b29 mov      rcx, rax
201b2c add      rax, 0xfe1ab
201b32 xor      rcx, 0xfe1ab
201b39 test     bpl, bpl
201b3c cmove    rax, rcx
201b40 mov      qword ptr [r14 + 0xf0], rax
201b47 mov      rbx, qword ptr [rsp + 0x88]
201b4f add      rsp, 0x30
201b53 pop      r15
201b55 pop      r14
201b57 pop      r13
201b59 pop      r12
201b5b pop      rdi
201b5c pop      rsi
201b5d pop      rbp
201b5e ret      
201b5f mov      edx, 0x54485254
201b64 mov      rcx, r14
201b67 call     0x1401ed830
201b6c int3     
201b6d mov      edx, 0x43414e59
201b72 mov      rcx, r14
201b75 call     0x1401ed830
201b7a int3     
