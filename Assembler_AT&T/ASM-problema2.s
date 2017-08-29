.section .data
msg1:	.asciz "Ingrese un número"
msg2:	.asciz "Ingrese otro número"
cad:	.asciz "%d"
msg3:	.asciz "El resultado de la suma es %d\n"

.section .bss
a:	.space 4
b:	.space 4
c:	.space 4

.section .text
.globl _start
_start:
	leal msg1, %eax
	pushl %eax
	call printf
	addl $4, %esp

	leal a, %eax
	pushl %eax
	leal cad, %eax
	pushl %eax
	call scanf
	addl $8, %esp

	leal msg2, %eax
	pushl %eax
	call printf
	addl $4, %esp

	leal b, %eax
	pushl %eax
	leal cad, %eax
	pushl %eax
	call scanf
	addl $8, %esp

	movl a, %eax
	addl b, %eax
	movl %eax, c

	pushl c
	leal msg3, %eax
	pushl %eax
	call printf
	addl $8, %esp

	call exit
