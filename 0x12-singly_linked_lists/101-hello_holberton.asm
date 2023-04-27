section .data
    ; Declare message and format strings in the data section
    message db "Hello, Holberton", 0Ah  ; message to be printed followed by newline    
    format db "%s", 0                  ; format string for printf, %s means string     

section .text
    ; Declare the printf function as external
    extern printf
    global main

main:
    ; Call printf function with message and format string arguments
    mov rdi, format                    ; first argument is format string
    mov rsi, message                   ; second argument is message
    xor rax, rax                       ; clear rax for printf call
    call printf                        ; call printf function

    ; Exit program with return value 0
    mov rax, 60                        ; system call for exit
    xor rdi, rdi                       ; clear rdi for exit status
    syscall                            ; call system call
