section .data
    msg: db "Hello, Holberton", 0      ; The message to print
    fmt: db "%s", 10, 0                ; The format string for printf ("%s\n")

section .text
    global main                        ; The entry point of the program
    extern printf                      ; Declare the external printf function

main:
    push rbp                           ; Save the base pointer
    mov rdi, fmt                       ; First argument: format string
    mov rsi, msg                       ; Second argument: message string
    xor rax, rax                       ; Clear rax (printf expects 0 in rax)
    call printf                        ; Call printf function
    pop rbp                            ; Restore the base pointer

    mov rax, 0                         ; Prepare return value
    ret                                ; Return from main

