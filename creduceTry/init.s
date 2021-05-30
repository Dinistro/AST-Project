	.file	"initial.c"
	.text
	.p2align 4
	.type	func_40.constprop.0.isra.0, @function
func_40.constprop.0.isra.0:
.LFB129:
	.cfi_startproc
	ret
	.cfi_endproc
.LFE129:
	.size	func_40.constprop.0.isra.0, .-func_40.constprop.0.isra.0
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB117:
	.cfi_startproc
	.p2align 4,,10
	.p2align 3
.L4:
	jmp	.L4
	.cfi_endproc
.LFE117:
	.size	main, .-main
	.ident	"GCC: (GNU) 11.1.0"
	.section	.note.GNU-stack,"",@progbits
