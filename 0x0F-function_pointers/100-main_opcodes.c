#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 if incorrect number of arguments,
 * 2 if negative number of bytes
 */
int main(int argc, char *argv[])
{
int i, bytes;
char *addr;

/* Check for correct number of arguments */
if (argc != 2)
{
printf("Error: Incorrect number of arguments\n");
return (1);
}

/* Convert argument to integer */
bytes = atoi(argv[1]);

/* Check for negative number of bytes */
if (bytes < 0)
{
printf("Error: Negative number of bytes\n");
return (2);
}

/* Print opcodes of main function */
addr = (char *)main;
for (i = 0; i < bytes; i++)
{
/* Print each byte in hexadecimal format */
printf("%02hhx", addr[i]);
}
printf("\n");

return (0);
}
