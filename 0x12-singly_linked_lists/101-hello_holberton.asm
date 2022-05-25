section .data;declare global variables and define string
	fmt db	"%s", 10, 0
	msg db	"Hello, Holberton", 0



	section .text;define code
	extern printf
	global main

main:
	push	rbp
	mov	rsi, msg
	mov	rdi, fmt
	mov	rax, 0
	call 	printf
	pop	rbp
	mov	rax, 0;
	ret
