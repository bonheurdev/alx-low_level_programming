#include <stdio.h>

/**
 * main - prints the content of argument count.
 * @argc: argument count.
 * @argv: argument vector
 * Return: 0.
 */

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
