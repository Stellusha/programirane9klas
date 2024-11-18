	.file	"zad2.c"
	.text
	.globl	gcd
	.def	gcd;	.scl	2;	.type	32;	.endef
	.seh_proc	gcd
gcd:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	jmp	.L2
.L3:
	movl	24(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	16(%rbp), %eax
	movl	%eax, 24(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, 16(%rbp)
.L2:
	cmpl	$0, 24(%rbp)
	jne	.L3
	movl	$0, %eax
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	lcm
	.def	lcm;	.scl	2;	.type	32;	.endef
	.seh_proc	lcm
lcm:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	32(%rsp), %rbp
	.seh_setframe	%rbp, 32
	.seh_endprologue
	movl	%ecx, 32(%rbp)
	movl	%edx, 40(%rbp)
	movl	32(%rbp), %eax
	imull	40(%rbp), %eax
	movl	%eax, %ebx
	movl	40(%rbp), %edx
	movl	32(%rbp), %eax
	movl	%eax, %ecx
	call	gcd
	movl	%eax, %ecx
	movl	%ebx, %eax
	cltd
	idivl	%ecx
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "&d, &d\0"
.LC1:
	.ascii "NOK: \0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$58, %ecx
	call	putchar
	leaq	-8(%rbp), %rdx
	leaq	-4(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	scanf
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%eax, %ecx
	call	lcm
	movl	%eax, %edx
	movl	-8(%rbp), %ecx
	movl	-4(%rbp), %eax
	movl	%edx, %r9d
	movl	%ecx, %r8d
	movl	%eax, %edx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (Rev3, Built by MSYS2 project) 13.2.0"
	.def	putchar;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
	.def	printf;	.scl	2;	.type	32;	.endef
