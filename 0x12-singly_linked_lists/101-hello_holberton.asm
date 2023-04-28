section .data
hello db 'Hello, Holberton', 0xA, 0

section .text
global main

extern printf

main:
push rbp
mov rbp, rsp

mov rdi, hello
xor rax, rax
call printf

xor eax, eax
pop rbp
ret
