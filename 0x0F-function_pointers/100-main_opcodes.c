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
printf("Error\n");
return (1);
}

/* Convert argument to integer */
bytes = atoi(argv[1]);

/* Check for negative number of bytes */
if (bytes < 0)
{
printf("Error\n");
return (2);
}

/* Print opcodes of main function */
addr = (char *)main;
for (i = 0; i < bytes; i++)
{
/* Print each byte in hexadecimal format with leading zeros */
printf("%02x", addr[i] & 0xFF);
if (i != bytes - 1)
printf(" ");
}
printf("\n");

return (0);
}
