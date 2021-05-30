	.file	"rewritten.c"
	.text
	.p2align 4
	.type	func_64.constprop.0.isra.0, @function
func_64.constprop.0.isra.0:
.LFB129:
	.cfi_startproc
	testb	%dl, %dl
	je	.L2
	testw	%cx, %cx
	je	.L5
.L4:
	jmp	.L4
.L5:
	movw	$3, (%rsi)
.L6:
	jmp	.L6
.L2:
	testw	%cx, %cx
	je	.L5
	ret
	.cfi_endproc
.LFE129:
	.size	func_64.constprop.0.isra.0, .-func_64.constprop.0.isra.0
	.p2align 4
	.type	func_1, @function
func_1:
.LFB107:
	.cfi_startproc
	subq	$16, %rsp
	.cfi_def_cfa_offset 24
	movl	$-5, %ecx
	movl	$-1, %edx
	movl	$4294967230, %edi
	leaq	14(%rsp), %rsi
	movl	$-1, %eax
	call	func_64.constprop.0.isra.0
	addq	$16, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE107:
	.size	func_1, .-func_1
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC14:
	.string	"checksum = %X\n"
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB117:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	call	func_1
	xorl	%esi, %esi
	movl	$.LC14, %edi
	xorl	%eax, %eax
	call	printf
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE117:
	.size	main, .-main
	.ident	"GCC: (GNU) 11.1.0"
	.section	.note.GNU-stack,"",@progbits
