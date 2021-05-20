	.file	"rewritten.c"
	.text
	.section	.rodata
	.align 32
.LC0:
	.long	0
	.long	5
	.long	5
	.long	5
	.long	0
	.long	2
	.long	1
	.long	1
	.long	2
	.long	0
	.long	0
	.long	5
	.long	0
	.long	3
	.long	0
	.long	2
	.long	2
	.long	5
	.long	1
	.long	0
	.long	0
	.long	3
	.long	5
	.long	3
	.long	0
	.long	0
	.long	1
	.long	5
	.long	2
	.long	2
	.long	0
	.long	3
	.long	0
	.long	5
	.long	0
	.long	0
	.long	2
	.long	1
	.long	1
	.long	2
	.long	0
	.long	5
	.long	5
	.long	5
	.long	0
	.long	2
	.long	1
	.long	1
	.long	2
	.long	0
	.long	0
	.long	5
	.long	0
	.long	3
	.long	0
	.long	2
	.long	2
	.long	5
	.long	1
	.long	0
	.long	0
	.long	3
	.long	5
	.long	3
	.long	0
	.long	0
	.long	1
	.long	5
	.long	2
	.long	2
	.long	0
	.long	3
	.long	0
	.long	5
	.long	0
	.long	0
	.long	2
	.long	1
	.long	1
	.long	2
	.long	0
	.long	5
	.long	5
	.long	5
	.long	0
	.long	2
	.long	1
	.long	1
	.long	2
	.long	0
	.long	0
	.long	5
	.long	0
	.long	3
	.long	0
	.long	2
	.long	2
	.long	5
	.long	1
	.long	0
	.text
	.p2align 4
	.globl	a
	.type	a, @function
a:
.LFB130:
	.cfi_startproc
	endbr64
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	leaq	.LC0(%rip), %rsi
	movl	$50, %ecx
	subq	$416, %rsp
	.cfi_def_cfa_offset 432
	movq	%fs:40, %rax
	movq	%rax, 408(%rsp)
	xorl	%eax, %eax
	movq	%rsp, %rdi
	rep movsq
	movl	392(%rsp), %ebx
	.p2align 4,,10
	.p2align 3
.L2:
	xorl	%eax, %eax
	movl	%ebx, %edi
	call	i@PLT
	testl	%eax, %eax
	je	.L2
	movq	408(%rsp), %rax
	xorq	%fs:40, %rax
	jne	.L8
	addq	$416, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 16
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
.L8:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
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
