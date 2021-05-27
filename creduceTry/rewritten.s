	.file	"rewritten.c"
	.text
	.p2align 4
	.type	g.constprop.0.isra.0, @function
g.constprop.0.isra.0:
.LFB113:
	.cfi_startproc
	movl	(%rdi), %eax
	testl	%eax, %eax
	je	.L2
	ret
.L2:
	jmp	.L2
	.cfi_endproc
.LFE113:
	.size	g.constprop.0.isra.0, .-g.constprop.0.isra.0
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB111:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	xorl	%ebp, %ebp
	pushq	%rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	movl	%ebp, %ebx
	subq	$24, %rsp
	.cfi_def_cfa_offset 48
	movl	$0, 12(%rsp)
	.p2align 4,,10
	.p2align 3
.L8:
	xorl	%eax, %eax
	addl	$1, %ebx
	call	p
	leaq	12(%rsp), %rdi
	call	g.constprop.0.isra.0
	cmpw	$8, %bx
	jne	.L8
	movl	%ebp, %esi
	xorl	%edi, %edi
	xorl	%eax, %eax
	call	l
	addq	$24, %rsp
	.cfi_def_cfa_offset 24
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 16
	popq	%rbp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE111:
	.size	main, .-main
	.ident	"GCC: (GNU) 11.1.0"
	.section	.note.GNU-stack,"",@progbits
