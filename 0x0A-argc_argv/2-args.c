#include <stdio.h>

/**
 * main - displays all argument vector.
 * @argc: argument count.
 * @argv: argument count.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
int count;

for (count = 0; count < argc; count++)
printf("%s\n", argv[count]);
return (0);
}
