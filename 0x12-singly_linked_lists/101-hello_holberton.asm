section .data
    hello db "Hello, Holberton", 10 ; 10 is the ASCII code for newline

section .text
    global main
    extern printf

    main:
        push rbp
        mov rbp, rsp

        mov edi, hello
        xor eax, eax
        call printf

        mov eax, 0
        leave
        ret
