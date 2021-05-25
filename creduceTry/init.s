	.file	"initial.c"
	.text
	.p2align 4
	.globl	c
	.type	c, @function
c:
.LFB107:
	.cfi_startproc
	movl	0, %eax
	testl	%eax, %eax
	je	.L3
	ret
.L3:
	jmp	.L3
	.cfi_endproc
.LFE107:
	.size	c, .-c
	.p2align 4
	.globl	d
	.type	d, @function
d:
.LFB108:
	.cfi_startproc
	movl	0, %eax
	testl	%eax, %eax
	je	.L7
	testw	%di, %di
	movl	$1, %eax
	cmovne	%edi, %eax
	movzwl	%ax, %eax
	ret
.L7:
	jmp	.L7
	.cfi_endproc
.LFE108:
	.size	d, .-d
	.p2align 4
	.globl	e
	.type	e, @function
e:
.LFB109:
	.cfi_startproc
	movl	(%rdi), %eax
	testl	%eax, %eax
	je	.L9
	xorl	%eax, %eax
	ret
.L9:
	jmp	.L9
	.cfi_endproc
.LFE109:
	.size	e, .-e
	.globl	h
	.bss
	.align 4
	.type	h, @object
	.size	h, 4
h:
	.zero	4
	.ident	"GCC: (GNU) 11.1.0"
	.section	.note.GNU-stack,"",@progbits
