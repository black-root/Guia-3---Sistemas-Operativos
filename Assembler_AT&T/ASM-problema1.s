.section .data
a:      .int 7
b:      .int 5
c:      .int 2
d:      .int 4

sal:	.ascii "El resultado de x = (a + (b - c)) / (c * d) es %d\n"
res:	.int 0

.section .text
.globl _start
_start:

b0:        movl a, %eax
b1:        movl b, %ebx
b2:        movl c, %ecx
b3:        movl d, %edx
b4:        subl %ecx, %ebx
b5:        imull %edx, %ecx
b6:        addl %ebx, %eax
b7:        cltd
        idivl %ecx
b8:        pushl %eax
	leal sal, %eax
	pushl %eax
	call printf
	addl $8, %esp
	call exit
