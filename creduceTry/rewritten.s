	.file	"rewritten.c"
	.text
	.p2align 4
	.type	safe_mod_func_uint32_t_u_u, @function
safe_mod_func_uint32_t_u_u:
.LFB100:
	.cfi_startproc
	endbr64
	movl	%edi, %r8d
	testl	%esi, %esi
	je	.L2
	movl	%edi, %eax
	xorl	%edx, %edx
	divl	%esi
	movl	%edx, %r8d
.L2:
	movl	%r8d, %eax
	ret
	.cfi_endproc
.LFE100:
	.size	safe_mod_func_uint32_t_u_u, .-safe_mod_func_uint32_t_u_u
	.p2align 4
	.globl	a
	.type	a, @function
a:
.LFB130:
	.cfi_startproc
	endbr64
	leaq	safe_mod_func_uint32_t_u_u(%rip), %rax
	testl	%eax, %eax
	jne	.L8
	movl	0, %eax
	testl	%eax, %eax
	je	.L8
.L9:
	jmp	.L9
	.p2align 4,,10
	.p2align 3
.L8:
	ret
	.cfi_endproc
.LFE130:
	.size	a, .-a
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
