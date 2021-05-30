	.file	"initial.c"
	.text
	.p2align 4
	.type	func_8.constprop.0.isra.0, @function
func_8.constprop.0.isra.0:
.LFB128:
	.cfi_startproc
	subq	$48, %rsp
	.cfi_def_cfa_offset 56
.L2:
	jmp	.L2
	.cfi_endproc
.LFE128:
	.size	func_8.constprop.0.isra.0, .-func_8.constprop.0.isra.0
	.section	.text.unlikely,"ax",@progbits
.LCOLDB5:
	.section	.text.startup,"ax",@progbits
.LHOTB5:
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB117:
	.cfi_startproc
	pushq	%r14
	.cfi_def_cfa_offset 16
	.cfi_offset 14, -16
	pushq	%r13
	.cfi_def_cfa_offset 24
	.cfi_offset 13, -24
	pushq	%r12
	.cfi_def_cfa_offset 32
	.cfi_offset 12, -32
	pushq	%rbp
	.cfi_def_cfa_offset 40
	.cfi_offset 6, -40
	pushq	%rbx
	.cfi_def_cfa_offset 48
	.cfi_offset 3, -48
	subq	$144, %rsp
	.cfi_def_cfa_offset 192
	cmpl	$2, %edi
	je	.L50
.L7:
	xorl	%r12d, %r12d
	xorl	%ebx, %ebx
	jmp	.L24
	.p2align 4,,10
	.p2align 3
.L25:
	movq	%r13, %r12
.L24:
	movl	%ebx, %eax
	movslq	%ebx, %rsi
	shrl	%eax
	movl	%eax, %edx
	xorl	$-306674912, %edx
	testb	$1, %bl
	cmovne	%edx, %eax
	movl	%eax, %edx
	shrl	%edx
	movl	%edx, %ecx
	xorl	$-306674912, %ecx
	testb	$1, %al
	cmovne	%ecx, %edx
	movl	%edx, %eax
	shrl	%eax
	movl	%eax, %ecx
	xorl	$-306674912, %ecx
	andl	$1, %edx
	cmovne	%ecx, %eax
	movl	%eax, %edx
	shrl	%edx
	movl	%edx, %ecx
	xorl	$-306674912, %ecx
	testb	$1, %al
	cmovne	%ecx, %edx
	movl	%edx, %eax
	shrl	%eax
	movl	%eax, %ecx
	xorl	$-306674912, %ecx
	andl	$1, %edx
	cmovne	%ecx, %eax
	movl	%eax, %edx
	shrl	%edx
	movl	%edx, %ecx
	xorl	$-306674912, %ecx
	testb	$1, %al
	cmovne	%ecx, %edx
	movl	%edx, %eax
	shrl	%eax
	movl	%eax, %ecx
	xorl	$-306674912, %ecx
	andl	$1, %edx
	cmovne	%ecx, %eax
	movl	%eax, %ebp
	shrl	%ebp
	movl	%ebp, %edx
	xorl	$-306674912, %edx
	testb	$1, %al
	cmovne	%edx, %ebp
	cmpq	$255, %rsi
	ja	.L51
.L20:
	leaq	4(%r12), %r13
	leaq	crc32_tab(%r12), %r14
	cmpq	$1024, %r13
	ja	.L52
.L21:
	cmpq	$crc32_tab, %r14
	jb	.L53
.L23:
	addl	$1, %ebx
	movl	%ebp, crc32_tab(%r12)
	cmpl	$256, %ebx
	jne	.L25
	movdqa	.LC4(%rip), %xmm0
	leaq	8(%rsp), %rax
	movb	$1, 7(%rsp)
	movq	%rax, 16(%rsp)
	movaps	%xmm0, 48(%rsp)
	movq	%rax, 24(%rsp)
	movq	%rax, 32(%rsp)
	movl	$0, 48(%rsp)
	movaps	%xmm0, 64(%rsp)
	movaps	%xmm0, 80(%rsp)
	movaps	%xmm0, 96(%rsp)
	movaps	%xmm0, 112(%rsp)
	movaps	%xmm0, 128(%rsp)
	call	func_8.constprop.0.isra.0
.L50:
	movq	%rsi, %rbx
	leaq	8(%rsi), %rbp
	cmpq	$-8, %rsi
	jnb	.L54
.L8:
	testq	%rbp, %rbp
	je	.L9
	testb	$7, %bpl
	jne	.L9
.L10:
	cmpq	$0, 8(%rbx)
	jne	.L7
	jmp	.L48
.L53:
	movq	%r14, %rdx
	movl	$crc32_tab, %esi
	movl	$.Lubsan_data81, %edi
	call	__ubsan_handle_pointer_overflow
	jmp	.L23
.L52:
	movq	%r14, %rax
	addq	%r13, %rax
	jc	.L21
	movq	%r14, %rsi
	movl	$.Lubsan_data80, %edi
	call	__ubsan_handle_type_mismatch_v1
	jmp	.L21
.L51:
	movl	$.Lubsan_data79, %edi
	call	__ubsan_handle_out_of_bounds
	jmp	.L20
.L54:
	movq	%rbp, %rdx
	movl	$.Lubsan_data77, %edi
	call	__ubsan_handle_pointer_overflow
	jmp	.L8
.L9:
	movq	%rbp, %rsi
	movl	$.Lubsan_data78, %edi
	call	__ubsan_handle_type_mismatch_v1
	jmp	.L10
	.cfi_endproc
	.section	.text.unlikely
	.cfi_startproc
	.type	main.cold, @function
main.cold:
.LFSB117:
.L48:
	.cfi_def_cfa_offset 192
	.cfi_offset 3, -48
	.cfi_offset 6, -40
	.cfi_offset 12, -32
	.cfi_offset 13, -24
	.cfi_offset 14, -16
	movl	$.Lubsan_data73, %edi
	call	__ubsan_handle_nonnull_arg
	jmp	.L7
	.cfi_endproc
.LFE117:
	.section	.text.startup
	.size	main, .-main
	.section	.text.unlikely
	.size	main.cold, .-main.cold
.LCOLDE5:
	.section	.text.startup
.LHOTE5:
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC6:
	.string	"/mnt/ETH/AST/csmith-2.3.0/runtime/csmith.h"
	.data
	.align 16
	.type	.Lubsan_data81, @object
	.size	.Lubsan_data81, 16
.Lubsan_data81:
	.quad	.LC6
	.long	66
	.long	16
	.align 32
	.type	.Lubsan_data80, @object
	.size	.Lubsan_data80, 32
.Lubsan_data80:
	.quad	.LC6
	.long	66
	.long	16
	.quad	.Lubsan_type9
	.byte	0
	.byte	1
	.zero	6
	.align 2
	.type	.Lubsan_type9, @object
	.size	.Lubsan_type9, 15
.Lubsan_type9:
	.value	-1
	.value	0
	.string	"'uint32_t'"
	.align 32
	.type	.Lubsan_data79, @object
	.size	.Lubsan_data79, 32
.Lubsan_data79:
	.quad	.LC6
	.long	66
	.long	12
	.quad	.Lubsan_type8
	.quad	.Lubsan_type0
	.align 2
	.type	.Lubsan_type8, @object
	.size	.Lubsan_type8, 21
.Lubsan_type8:
	.value	0
	.value	10
	.string	"'uint32_t [256]'"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC7:
	.string	"./initial.c"
	.data
	.align 32
	.type	.Lubsan_data78, @object
	.size	.Lubsan_data78, 32
.Lubsan_data78:
	.quad	.LC7
	.long	1273
	.long	22
	.quad	.Lubsan_type7
	.byte	3
	.byte	0
	.zero	6
	.align 2
	.type	.Lubsan_type7, @object
	.size	.Lubsan_type7, 13
.Lubsan_type7:
	.value	-1
	.value	0
	.string	"'char *'"
	.align 16
	.type	.Lubsan_data77, @object
	.size	.Lubsan_data77, 16
.Lubsan_data77:
	.quad	.LC7
	.long	1273
	.long	33
	.align 32
	.type	.Lubsan_data73, @object
	.size	.Lubsan_data73, 40
.Lubsan_data73:
	.quad	.LC7
	.long	1273
	.long	22
	.quad	0
	.long	0
	.long	0
	.long	1
	.zero	4
	.local	crc32_tab
	.comm	crc32_tab,1024,32
	.align 2
	.type	.Lubsan_type0, @object
	.size	.Lubsan_type0, 10
.Lubsan_type0:
	.value	0
	.value	11
	.string	"'int'"
	.section	.rodata.cst16,"aM",@progbits,16
	.align 16
.LC4:
	.long	-10
	.long	-10
	.long	-10
	.long	-10
	.ident	"GCC: (GNU) 11.1.0"
	.section	.note.GNU-stack,"",@progbits
