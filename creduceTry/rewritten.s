	.file	"rewritten.c"
	.text
	.p2align 4
	.type	func_46.constprop.0, @function
func_46.constprop.0:
.LFB128:
	.cfi_startproc
	movl	(%rdi), %eax
	xorl	%r8d, %r8d
	cmpl	$-326551849, %eax
	je	.L1
	xorb	$-14, %al
	movl	$21, %r8d
	movl	%eax, (%rdi)
.L1:
	movl	%r8d, %eax
	ret
	.cfi_endproc
.LFE128:
	.size	func_46.constprop.0, .-func_46.constprop.0
	.p2align 4
	.type	func_40.constprop.0.isra.0, @function
func_40.constprop.0.isra.0:
.LFB130:
	.cfi_startproc
	subq	$16, %rsp
	.cfi_def_cfa_offset 24
	movl	$-2033407379, %ecx
	movl	$-8, %esi
	xorl	%edx, %edx
	leaq	12(%rsp), %rdi
	movl	$-3, 12(%rsp)
	call	func_46.constprop.0
	jmp	.L10
	.p2align 4,,10
	.p2align 3
.L7:
	movsbl	%sil, %eax
	cmpl	%eax, %ecx
	ja	.L12
	subl	$1, %ecx
	movl	$1, %esi
	movl	$1, %eax
.L11:
	movl	%eax, 12(%rsp)
.L8:
	leaq	12(%rsp), %rdi
	call	func_46.constprop.0
	imull	%edx, %eax
	testb	%al, %al
	jne	.L6
.L10:
	movl	%edx, %eax
	addl	$1, %edx
	testw	%ax, %ax
	je	.L7
	movl	$-565706895, 12(%rsp)
	cmpw	$48, %dx
	jne	.L8
.L6:
	addq	$16, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 8
	ret
.L12:
	.cfi_restore_state
	xorl	%eax, %eax
	movl	$1, %ecx
	jmp	.L11
	.cfi_endproc
.LFE130:
	.size	func_40.constprop.0.isra.0, .-func_40.constprop.0.isra.0
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB117:
	.cfi_startproc
	call	func_40.constprop.0.isra.0
.L15:
	jmp	.L15
	.cfi_endproc
.LFE117:
	.size	main, .-main
	.ident	"GCC: (GNU) 11.1.0"
	.section	.note.GNU-stack,"",@progbits
