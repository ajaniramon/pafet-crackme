140005800 mov qword ptr [rsp + 0x10], rbx
140005805 push rdi
140005806 sub rsp, 0x20
14000580a mov rax, qword ptr [rcx + 0x140]
140005811 cmp edx, 0x49
140005814 mov edi, 0x48
140005819 mov rbx, rcx
14000581c cmovb edi, edx
14000581f mov dword ptr [rcx + 0x14c], edi
140005825 test rax, rax
140005828 je 0x14000585a
14000582a cmp dword ptr [rcx + 0x148], 0
140005831 je 0x14000585a
140005833 cmp edi, 0x49
140005836 jae 0x14000585a
140005838 cmp byte ptr [rdi + rax], 0
14000583c mov qword ptr [rsp + 0x30], rsi
140005841 jne 0x140005855
140005843 mov edx, edi
140005845 call 0x140005650
14000584a mov rax, qword ptr [rbx + 0x140]
140005851 mov byte ptr [rdi + rax], 1
140005855 mov rsi, qword ptr [rsp + 0x30]
14000585a lea edx, [rdi + 1]
14000585d cmp edx, 0x49
140005860 jae 0x140005892
140005862 mov rax, qword ptr [rbx + 0x140]
140005869 test rax, rax
14000586c je 0x140005892
14000586e cmp dword ptr [rbx + 0x148], 0
140005875 je 0x140005892
140005877 cmp byte ptr [rdx + rax], 0
14000587b mov edi, edx
14000587d jne 0x140005892
14000587f mov rcx, rbx
140005882 call 0x140005650
140005887 mov rax, qword ptr [rbx + 0x140]
14000588e mov byte ptr [rdi + rax], 1
140005892 mov rbx, qword ptr [rsp + 0x38]
140005897 add rsp, 0x20
14000589b pop rdi
14000589c ret 
