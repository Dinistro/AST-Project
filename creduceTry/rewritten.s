	.file	"rewritten.c"
	.text
	.p2align 4
	.type	func_16.constprop.0, @function
func_16.constprop.0:
.LFB127:
	.cfi_startproc
	movl	$5, %eax
	ret
	.cfi_endproc
.LFE127:
	.size	func_16.constprop.0, .-func_16.constprop.0
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC23:
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
	xorl	%esi, %esi
	movl	$.LC23, %edi
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
