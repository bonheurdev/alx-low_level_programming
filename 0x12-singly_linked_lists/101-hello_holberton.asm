; Declare data section
section .data
        message db "Hello, Holberton", 0Ah      ; message to be printed followed by newline
        format db "%s", 0               ; format string for printf, %s means string

        ; Declare code section
section .text
        global _start

_start:
        ; call printf with message and format string
        ; printf will print the message with a newline
        mov rdi, format                 ; first argument is format string
        mov rsi, message                ; second argument is message
        xor rax, rax                    ; clear rax for printf call
        call printf                 ; call printf function

        ; exit program with return value 0
        mov rax, 60                 ; system call for exit
        xor rdi, rdi                    ; clear rdi for exit status
        syscall                     ; call system call
