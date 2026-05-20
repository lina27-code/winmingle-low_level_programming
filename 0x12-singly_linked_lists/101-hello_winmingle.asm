section .data
    msg db "Hello, WINMINGLE", 10, 0   ; string with newline and null terminator

section .text
    extern printf
    global main

main:
    push rbp
    mov rbp, rsp

    ; Call printf
    lea rdi, [msg]      ; first argument: pointer to the string
    mov rax, 0          ; no floating point arguments
    call printf

    mov rsp, rbp
    pop rbp
    mov rax, 0
    ret
