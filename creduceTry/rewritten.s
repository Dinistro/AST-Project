	.file	"rewritten.c"
	.text
	.p2align 4
	.globl	e
	.type	e, @function
e:
.LFB107:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	xorl	%eax, %eax
	pushq	%rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	subq	$8, %rsp
	.cfi_def_cfa_offset 32
	call	m
	movl	0, %eax
	testl	%eax, %eax
	jne	.L2
	addq	$8, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 16
	popq	%rbp
	.cfi_def_cfa_offset 8
	jmp	m
	.p2align 4,,10
	.p2align 3
.L2:
	.cfi_restore_state
	xorl	%r8d, %r8d
	xorl	%ebx, %ebx
	movl	$1, %ebp
.L4:
	movl	%ebp, %esi
	movl	%ebx, %eax
	movl	k(%rip), %edi
	subl	%ebx, %esi
	testl	%ebx, %ebx
	cmovg	%ebp, %esi
	negl	%eax
	cmpl	$2, %eax
	jbe	.L5
	testl	%ebx, %ebx
	jg	.L5
	movl	%esi, %eax
	movslq	%ebx, %rdx
	movd	%edi, %xmm1
	shrl	$2, %eax
	salq	$2, %rdx
	pshufd	$0, %xmm1, %xmm0
	leal	-1(%rax), %ecx
	leaq	16(%rdx), %rax
	salq	$4, %rcx
	addq	%rax, %rcx
	jmp	.L6
	.p2align 4,,10
	.p2align 3
.L23:
	addq	$16, %rax
.L6:
	movups	%xmm0, (%rdx)
	movq	%rax, %rdx
	cmpq	%rcx, %rax
	jne	.L23
	movl	%esi, %eax
	andl	$-4, %eax
	addl	%eax, %ebx
	cmpl	%esi, %eax
	je	.L7
.L5:
	movslq	%ebx, %rdx
	leal	1(%rbx), %eax
	movl	%edi, 0(,%rdx,4)
	leaq	0(,%rdx,4), %rcx
	testl	%eax, %eax
	jg	.L7
	movl	%edi, 4(%rcx)
	cmpl	$-1, %ebx
	je	.L7
	movl	%edi, 8(%rcx)
.L7:
	testw	%r8w, %r8w
	jne	.L8
	xorl	%eax, %eax
	call	m
	movl	$1, %r8d
	testl	%ebx, %ebx
	jle	.L4
.L8:
	addq	$8, %rsp
	.cfi_def_cfa_offset 24
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 16
	popq	%rbp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE107:
	.size	e, .-e
	.p2align 4
	.globl	c
	.type	c, @function
c:
.LFB108:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	xorl	%eax, %eax
	pushq	%rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	subq	$8, %rsp
	.cfi_def_cfa_offset 32
	call	m
	movl	0, %eax
	testl	%eax, %eax
	jne	.L25
	xorl	%eax, %eax
	call	m
.L35:
	addq	$8, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	movl	$1, %eax
	popq	%rbx
	.cfi_def_cfa_offset 16
	popq	%rbp
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L25:
	.cfi_restore_state
	xorl	%r8d, %r8d
	xorl	%ebx, %ebx
	movl	$1, %ebp
.L28:
	movl	%ebp, %esi
	movl	%ebx, %eax
	movl	k(%rip), %edi
	subl	%ebx, %esi
	testl	%ebx, %ebx
	cmovg	%ebp, %esi
	negl	%eax
	cmpl	$2, %eax
	jbe	.L29
	testl	%ebx, %ebx
	jg	.L29
	movl	%esi, %eax
	movslq	%ebx, %rdx
	movd	%edi, %xmm1
	shrl	$2, %eax
	salq	$2, %rdx
	pshufd	$0, %xmm1, %xmm0
	leal	-1(%rax), %ecx
	leaq	16(%rdx), %rax
	salq	$4, %rcx
	addq	%rax, %rcx
	jmp	.L30
	.p2align 4,,10
	.p2align 3
.L45:
	addq	$16, %rax
.L30:
	movups	%xmm0, (%rdx)
	movq	%rax, %rdx
	cmpq	%rcx, %rax
	jne	.L45
	movl	%esi, %eax
	andl	$-4, %eax
	addl	%eax, %ebx
	cmpl	%esi, %eax
	je	.L31
.L29:
	movslq	%ebx, %rdx
	leal	1(%rbx), %eax
	movl	%edi, 0(,%rdx,4)
	leaq	0(,%rdx,4), %rcx
	testl	%eax, %eax
	jg	.L31
	movl	%edi, 4(%rcx)
	cmpl	$-1, %ebx
	je	.L31
	movl	%edi, 8(%rcx)
.L31:
	testw	%r8w, %r8w
	jne	.L35
	xorl	%eax, %eax
	call	m
	movl	$1, %r8d
	testl	%ebx, %ebx
	jle	.L28
	jmp	.L35
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
