#include <stdio.h>

/**
 * main - function that prints index 0 of argv(name)
 * @argc: number of arguments.
 * @argv: argument vector which is array.
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
