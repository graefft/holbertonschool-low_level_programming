section .data
msg1    db "Hello, Holberton",0
fmt     db "%s",10,0

    section .text
    extern printf
    global main

main:
    mov  esi, msg1
    mov  edi, fmt
    mov  eax, 0     ; no f.p. args
    call printf

    mov  eax, 0
ret
