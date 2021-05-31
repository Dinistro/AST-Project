	.text
	.file	"prog725.c"
	.section	.rodata.cst16,"aM",@progbits,16
	.p2align	4                               # -- Begin function main
.LCPI0_0:
	.quad	1                               # 0x1
	.quad	1                               # 0x1
	.text
	.globl	main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:                                # %entry
	subq	$1736, %rsp                     # imm = 0x6C8
	.cfi_def_cfa_offset 1744
	movq	%rsp, %rdi
	movl	$.L__const.func_12.l_2923, %esi
	movl	$1728, %edx                     # imm = 0x6C0
	callq	memcpy@PLT
	cmpq	$0, 1432(%rsp)
	je	.LBB0_1
# %bb.5:                                # %lor.end.2.i.i.1.i.119
	cmpq	$0, 1360(%rsp)
	je	.LBB0_6
# %bb.7:                                # %lor.end.2.i.i.1.i.223
	movq	792(%rsp), %rax
	jmp	.LBB0_2
.LBB0_1:
	movq	936(%rsp), %rax
	jmp	.LBB0_2
.LBB0_6:
	movq	864(%rsp), %rax
.LBB0_2:                                # %for.cond1274.preheader.i.lr.ph.i.2.i
	xorl	%ecx, %ecx
	testb	%al, %al
	setne	%cl
	movaps	.LCPI0_0(%rip), %xmm0           # xmm0 = [1,1]
	movaps	%xmm0, 1168(%rsp)
	movq	%rcx, 1160(%rsp)
	movq	$1, 1368(%rsp)
	movups	%xmm0, 1352(%rsp)
	cmpq	$0, 1432(%rsp)
	je	.LBB0_4
# %bb.3:                                # %lor.end.2.i.i.1.i.1.1
	cmpq	$0, 1360(%rsp)
.LBB0_4:                                # %for.cond1274.preheader.i.lr.ph.i.2.i.1
	movl	$.L.str.10, %edi
	xorl	%esi, %esi
	xorl	%eax, %eax
	callq	printf
	xorl	%eax, %eax
	addq	$1736, %rsp                     # imm = 0x6C8
	.cfi_def_cfa_offset 8
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        # -- End function
	.type	.L__const.func_12.l_2923,@object # @__const.func_12.l_2923
	.section	.rodata,"a",@progbits
	.p2align	4
.L__const.func_12.l_2923:
	.quad	-1                              # 0xffffffffffffffff
	.quad	-7540926755116180379            # 0x97593f11dc0f9c65
	.quad	0                               # 0x0
	.quad	6                               # 0x6
	.quad	-3178745938805330263            # 0xd3e2d3690e4aeea9
	.quad	790888072874957922              # 0xaf9cc8310ce1c62
	.quad	6194682072518735353             # 0x55f7ee862cf5b5f9
	.quad	-2                              # 0xfffffffffffffffe
	.quad	-8                              # 0xfffffffffffffff8
	.quad	1890446009845829228             # 0x1a3c36a143ea4e6c
	.quad	-1                              # 0xffffffffffffffff
	.quad	5108631513401433161             # 0x46e5814b74a89c49
	.quad	0                               # 0x0
	.quad	0                               # 0x0
	.quad	-1                              # 0xffffffffffffffff
	.quad	0                               # 0x0
	.quad	4844147552000519043             # 0x4339de887c91ab83
	.quad	-1                              # 0xffffffffffffffff
	.quad	-3178745938805330263            # 0xd3e2d3690e4aeea9
	.quad	842036890042554001              # 0xbaf841716c2d691
	.quad	-1                              # 0xffffffffffffffff
	.quad	1890446009845829228             # 0x1a3c36a143ea4e6c
	.quad	790888072874957922              # 0xaf9cc8310ce1c62
	.quad	790888072874957922              # 0xaf9cc8310ce1c62
	.quad	-1                              # 0xffffffffffffffff
	.quad	5                               # 0x5
	.quad	0                               # 0x0
	.quad	0                               # 0x0
	.quad	5                               # 0x5
	.quad	-1                              # 0xffffffffffffffff
	.quad	-7607433933572865347            # 0x966cf724b12302bd
	.quad	-9                              # 0xfffffffffffffff7
	.quad	-1                              # 0xffffffffffffffff
	.quad	4844147552000519043             # 0x4339de887c91ab83
	.quad	0                               # 0x0
	.quad	1890446009845829228             # 0x1a3c36a143ea4e6c
	.quad	842036890042554001              # 0xbaf841716c2d691
	.quad	2343881736732110203             # 0x2087240569716d7b
	.quad	1                               # 0x1
	.quad	-6                              # 0xfffffffffffffffa
	.quad	583504444226209365              # 0x819063352f70655
	.quad	-673934467977038079             # 0xf6a5b42c0a563701
	.quad	3                               # 0x3
	.quad	1890446009845829228             # 0x1a3c36a143ea4e6c
	.quad	-3178745938805330263            # 0xd3e2d3690e4aeea9
	.quad	-1                              # 0xffffffffffffffff
	.quad	4749365388236239116             # 0x41e922a84a5b310c
	.quad	-9                              # 0xfffffffffffffff7
	.quad	790888072874957922              # 0xaf9cc8310ce1c62
	.quad	-3178745938805330263            # 0xd3e2d3690e4aeea9
	.quad	6                               # 0x6
	.quad	0                               # 0x0
	.quad	-7540926755116180379            # 0x97593f11dc0f9c65
	.quad	-1                              # 0xffffffffffffffff
	.quad	5108631513401433161             # 0x46e5814b74a89c49
	.quad	790888072874957922              # 0xaf9cc8310ce1c62
	.quad	5035930793409069356             # 0x45e338600699412c
	.quad	-3269724616977779720            # 0xd29f9ac8dbb073f8
	.quad	1                               # 0x1
	.quad	842036890042554001              # 0xbaf841716c2d691
	.quad	5205743454988264917             # 0x483e84175263e5d5
	.quad	1                               # 0x1
	.quad	-1                              # 0xffffffffffffffff
	.quad	1                               # 0x1
	.quad	-1                              # 0xffffffffffffffff
	.quad	8163582922020017295             # 0x714adf6a4172d48f
	.quad	6194682072518735353             # 0x55f7ee862cf5b5f9
	.quad	-8                              # 0xfffffffffffffff8
	.quad	-2398814552669445655            # 0xdeb5b2dfb219a1e9
	.quad	2085312380148290080             # 0x1cf0848fb0769220
	.quad	-673934467977038079             # 0xf6a5b42c0a563701
	.quad	-3178745938805330263            # 0xd3e2d3690e4aeea9
	.quad	3837247518368833276             # 0x3540a4498f9f9efc
	.quad	1890446009845829228             # 0x1a3c36a143ea4e6c
	.quad	5971308711788779749             # 0x52de59a2d25d98e5
	.quad	-1                              # 0xffffffffffffffff
	.quad	2                               # 0x2
	.quad	8229952213469961490             # 0x7236a9ef1a511d12
	.quad	0                               # 0x0
	.quad	8163582922020017295             # 0x714adf6a4172d48f
	.quad	-1                              # 0xffffffffffffffff
	.quad	0                               # 0x0
	.quad	-4203896752205560683            # 0xc5a8c22d545e8495
	.quad	0                               # 0x0
	.quad	0                               # 0x0
	.quad	4844147552000519043             # 0x4339de887c91ab83
	.quad	6725508305921062332             # 0x5d55ce2bc45d35bc
	.quad	-1                              # 0xffffffffffffffff
	.quad	5                               # 0x5
	.quad	-6409739584293872363            # 0xa70c07ceef675d15
	.quad	0                               # 0x0
	.quad	-1                              # 0xffffffffffffffff
	.quad	-2                              # 0xfffffffffffffffe
	.quad	2343881736732110203             # 0x2087240569716d7b
	.quad	-5923798707799092103            # 0xadca7075fcb79479
	.quad	-1                              # 0xffffffffffffffff
	.quad	-6409739584293872363            # 0xa70c07ceef675d15
	.quad	-4610687834660824398            # 0xc0038bd7c4d39ab2
	.quad	-1                              # 0xffffffffffffffff
	.quad	-1                              # 0xffffffffffffffff
	.quad	5971308711788779749             # 0x52de59a2d25d98e5
	.quad	0                               # 0x0
	.quad	-3178745938805330263            # 0xd3e2d3690e4aeea9
	.quad	-1190958887761930243            # 0xef78dd3398db17fd
	.quad	0                               # 0x0
	.quad	2                               # 0x2
	.quad	6                               # 0x6
	.quad	4802327589021418919             # 0x42a54b7f96ae05a7
	.quad	-8                              # 0xfffffffffffffff8
	.quad	0                               # 0x0
	.quad	-7009282242972302788            # 0x9eba06efd12ec23c
	.quad	9                               # 0x9
	.quad	-5679460600068051022            # 0xb12e80ace11defb2
	.quad	1                               # 0x1
	.quad	-2398814552669445655            # 0xdeb5b2dfb219a1e9
	.quad	1                               # 0x1
	.quad	0                               # 0x0
	.quad	1                               # 0x1
	.quad	-2398814552669445655            # 0xdeb5b2dfb219a1e9
	.quad	1                               # 0x1
	.quad	2                               # 0x2
	.quad	-6383973903061035247            # 0xa767918f14aed711
	.quad	5108631513401433161             # 0x46e5814b74a89c49
	.quad	-2398814552669445655            # 0xdeb5b2dfb219a1e9
	.quad	1                               # 0x1
	.quad	5070268290727808484             # 0x465d3625a0c20de4
	.quad	790888072874957922              # 0xaf9cc8310ce1c62
	.quad	5035930793409069356             # 0x45e338600699412c
	.quad	9                               # 0x9
	.quad	8229952213469961490             # 0x7236a9ef1a511d12
	.quad	0                               # 0x0
	.quad	-1                              # 0xffffffffffffffff
	.quad	2                               # 0x2
	.quad	-1                              # 0xffffffffffffffff
	.quad	790888072874957922              # 0xaf9cc8310ce1c62
	.quad	-2253371471776929085            # 0xe0ba6a95d5bcaac3
	.quad	-1                              # 0xffffffffffffffff
	.quad	-1                              # 0xffffffffffffffff
	.quad	5108631513401433161             # 0x46e5814b74a89c49
	.quad	5070268290727808484             # 0x465d3625a0c20de4
	.quad	842036890042554001              # 0xbaf841716c2d691
	.quad	-6409739584293872363            # 0xa70c07ceef675d15
	.quad	-2398814552669445655            # 0xdeb5b2dfb219a1e9
	.quad	1890446009845829228             # 0x1a3c36a143ea4e6c
	.quad	842036890042554001              # 0xbaf841716c2d691
	.quad	-6409739584293872363            # 0xa70c07ceef675d15
	.quad	-2398814552669445655            # 0xdeb5b2dfb219a1e9
	.quad	1890446009845829228             # 0x1a3c36a143ea4e6c
	.quad	0                               # 0x0
	.quad	0                               # 0x0
	.quad	-7009282242972302788            # 0x9eba06efd12ec23c
	.quad	-2                              # 0xfffffffffffffffe
	.quad	-1                              # 0xffffffffffffffff
	.quad	9                               # 0x9
	.quad	6                               # 0x6
	.quad	4844147552000519043             # 0x4339de887c91ab83
	.quad	0                               # 0x0
	.quad	5                               # 0x5
	.quad	-3178745938805330263            # 0xd3e2d3690e4aeea9
	.quad	-1                              # 0xffffffffffffffff
	.quad	790888072874957922              # 0xaf9cc8310ce1c62
	.quad	-3269724616977779720            # 0xd29f9ac8dbb073f8
	.quad	-1                              # 0xffffffffffffffff
	.quad	1                               # 0x1
	.quad	0                               # 0x0
	.quad	-2154857519814133261            # 0xe2186880ade639f3
	.quad	-5923798707799092103            # 0xadca7075fcb79479
	.quad	-6383973903061035247            # 0xa767918f14aed711
	.quad	-1                              # 0xffffffffffffffff
	.quad	5971308711788779749             # 0x52de59a2d25d98e5
	.quad	0                               # 0x0
	.quad	1                               # 0x1
	.quad	-1                              # 0xffffffffffffffff
	.quad	1                               # 0x1
	.quad	6725508305921062332             # 0x5d55ce2bc45d35bc
	.quad	-3178745938805330263            # 0xd3e2d3690e4aeea9
	.quad	4749365388236239116             # 0x41e922a84a5b310c
	.quad	37233698559517971               # 0x8447da00506513
	.quad	-4203896752205560683            # 0xc5a8c22d545e8495
	.quad	-2                              # 0xfffffffffffffffe
	.quad	-1                              # 0xffffffffffffffff
	.quad	-5923798707799092103            # 0xadca7075fcb79479
	.quad	0                               # 0x0
	.quad	5971308711788779749             # 0x52de59a2d25d98e5
	.quad	9                               # 0x9
	.quad	-1                              # 0xffffffffffffffff
	.quad	5971308711788779749             # 0x52de59a2d25d98e5
	.quad	5389685680286769925             # 0x4acc02920880a305
	.quad	-1                              # 0xffffffffffffffff
	.quad	4844147552000519043             # 0x4339de887c91ab83
	.quad	-673934467977038079             # 0xf6a5b42c0a563701
	.quad	3837247518368833276             # 0x3540a4498f9f9efc
	.quad	8229952213469961490             # 0x7236a9ef1a511d12
	.quad	-1                              # 0xffffffffffffffff
	.quad	6194682072518735353             # 0x55f7ee862cf5b5f9
	.quad	5108631513401433161             # 0x46e5814b74a89c49
	.quad	-2                              # 0xfffffffffffffffe
	.quad	-6409739584293872363            # 0xa70c07ceef675d15
	.quad	-1                              # 0xffffffffffffffff
	.quad	-1                              # 0xffffffffffffffff
	.quad	-1                              # 0xffffffffffffffff
	.quad	4844147552000519043             # 0x4339de887c91ab83
	.quad	1                               # 0x1
	.quad	-1                              # 0xffffffffffffffff
	.quad	1                               # 0x1
	.quad	5108631513401433161             # 0x46e5814b74a89c49
	.quad	5108631513401433161             # 0x46e5814b74a89c49
	.quad	1                               # 0x1
	.quad	9                               # 0x9
	.quad	-1                              # 0xffffffffffffffff
	.quad	-1                              # 0xffffffffffffffff
	.quad	9                               # 0x9
	.quad	-10                             # 0xfffffffffffffff6
	.quad	2085312380148290080             # 0x1cf0848fb0769220
	.quad	-1                              # 0xffffffffffffffff
	.quad	8163582922020017295             # 0x714adf6a4172d48f
	.size	.L__const.func_12.l_2923, 1728

	.type	.L.str.10,@object               # @.str.10
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str.10:
	.asciz	"checksum = %X\n"
	.size	.L.str.10, 15

	.ident	"clang version 12.0.0 (https://github.com/llvm/llvm-project.git d28af7c654d8db0b68c175db5ce212d74fb5e9bc)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
