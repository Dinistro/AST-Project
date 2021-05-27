	.file	"initial.c"
	.text
	.p2align 4
	.globl	e
	.type	e, @function
e:
.LFB107:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	xorl	%eax, %eax
	call	m
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	jmp	m
	.cfi_endproc
.LFE107:
	.size	e, .-e
	.p2align 4
	.globl	c
	.type	c, @function
c:
.LFB108:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	xorl	%eax, %eax
	call	m
	xorl	%eax, %eax
	call	m
	movl	$1, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE108:
	.size	c, .-c
	.p2align 4
	.globl	d
	.type	d, @function
d:
.LFB109:
	.cfi_startproc
	ret
	.cfi_endproc
.LFE109:
	.size	d, .-d
	.globl	k
	.bss
	.align 4
	.type	k, @object
	.size	k, 4
k:
	.zero	4
	.ident	"GCC: (GNU) 11.1.0"
	.section	.note.GNU-stack,"",@progbits
