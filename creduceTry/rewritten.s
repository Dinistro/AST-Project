	.file	"rewritten.c"
	.text
	.p2align 4
	.type	d.constprop.0.isra.0, @function
d.constprop.0.isra.0:
.LFB111:
	.cfi_startproc
	ret
	.cfi_endproc
.LFE111:
	.size	d.constprop.0.isra.0, .-d.constprop.0.isra.0
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"checksum = %X\n"
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB109:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	xorl	%esi, %esi
	movl	$.LC0, %edi
	xorl	%eax, %eax
	call	printf
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE109:
	.size	main, .-main
	.ident	"GCC: (GNU) 11.1.0"
	.section	.note.GNU-stack,"",@progbits
