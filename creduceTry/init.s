	.text
	.file	"initial.c"
	.globl	f                               # -- Begin function f
	.p2align	4, 0x90
	.type	f,@function
f:                                      # @f
	.cfi_startproc
# %bb.0:                                # %if.end14
	movl	$2, %edi
	jmp	e                               # TAILCALL
.Lfunc_end0:
	.size	f, .Lfunc_end0-f
	.cfi_endproc
                                        # -- End function
	.p2align	4, 0x90                         # -- Begin function e
	.type	e,@function
e:                                      # @e
	.cfi_startproc
# %bb.0:                                # %entry
	pushq	%rbp
	.cfi_def_cfa_offset 16
	pushq	%r14
	.cfi_def_cfa_offset 24
	pushq	%rbx
	.cfi_def_cfa_offset 32
	.cfi_offset %rbx, -32
	.cfi_offset %r14, -24
	.cfi_offset %rbp, -16
	movl	%esi, %r14d
	movq	$-25, %rax
                                        # implicit-def: $rcx
	.p2align	4, 0x90
.LBB1_1:                                # %for.body5
                                        # =>This Inner Loop Header: Depth=1
	testw	%r14w, %r14w
	je	.LBB1_5
# %bb.2:                                # %safe_div_func_uint64_t_u_u.exit.20
                                        #   in Loop: Header=BB1_1 Depth=1
	movslq	%eax, %rdi
	movq	%rcx, %rbx
	xorq	$10, %rbx
	movq	%rbx, %rax
	xorl	%edx, %edx
	divq	%rdi
	movq	%rax, %rsi
	movq	%rcx, %rax
	xorl	%edx, %edx
	divq	%rdi
	movl	%esi, %ecx
	andl	%eax, %ecx
	movl	%ecx, %edx
	andl	%ecx, %edx
	movl	%ecx, %ebp
	andl	%esi, %ebp
	andl	%ebp, %edx
	andl	%eax, %ecx
	andl	%esi, %ecx
	andl	%ecx, %edx
	andl	%eax, %ecx
	andl	%edx, %ecx
	andl	%eax, %ebp
	andl	%ecx, %ebp
	testl	%esi, %ebp
	jne	.LBB1_4
# %bb.3:                                # %for.inc56
                                        #   in Loop: Header=BB1_1 Depth=1
	movl	$7, %esi
	callq	safe_add_func_int64_t_s_s
	movq	%rbx, %rcx
	testl	%eax, %eax
	js	.LBB1_1
.LBB1_4:                                # %for.inc61
	popq	%rbx
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%rbp
	.cfi_def_cfa_offset 8
	retq
.LBB1_5:                                # %if.else
	.cfi_def_cfa_offset 32
	ud2
.Lfunc_end1:
	.size	e, .Lfunc_end1-e
	.cfi_endproc
                                        # -- End function
	.p2align	4, 0x90                         # -- Begin function safe_add_func_int64_t_s_s
	.type	safe_add_func_int64_t_s_s,@function
safe_add_func_int64_t_s_s:              # @safe_add_func_int64_t_s_s
	.cfi_startproc
# %bb.0:                                # %entry
	movabsq	$9223372036854775807, %rcx      # imm = 0x7FFFFFFFFFFFFFFF
	subq	%rsi, %rcx
	testq	%rdi, %rdi
	jle	.LBB2_3
# %bb.1:                                # %entry
	testq	%rsi, %rsi
	jle	.LBB2_3
# %bb.2:                                # %entry
	cmpq	%rdi, %rcx
	jge	.LBB2_3
# %bb.4:                                # %cond.end
	movq	%rdi, %rax
	retq
.LBB2_3:                                # %lor.lhs.false
	addq	$1, %rcx
	xorl	%eax, %eax
	cmpq	%rdi, %rcx
	cmovleq	%rsi, %rax
	testq	%rdi, %rsi
	cmovnsq	%rsi, %rax
	addq	%rdi, %rax
	retq
.Lfunc_end2:
	.size	safe_add_func_int64_t_s_s, .Lfunc_end2-safe_add_func_int64_t_s_s
	.cfi_endproc
                                        # -- End function
	.ident	"clang version 11.1.0 (https://github.com/llvm/llvm-project.git 1fdec59bffc11ae37eb51a1b9869f0696bfd5312)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
