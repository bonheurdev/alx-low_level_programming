#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int is_valid_number(char *str);
int str_to_int(char *str);
void print_error(void);
int _strlen(char *s);
int _isdigit(char c);

/**
* main - Entry point. Multiplies two positive numbers in base 10.       
*
* @argc: Number of arguments
* @argv: Array of arguments
*
* Return: 0 on success, 98 on failure
*/
int main(int argc, char **argv)
{
int i, j, num1, num2, result;
int *mul;
(void)num1;
(void)num2;

if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2]))
{
print_error();
return (98);
}

num1 = str_to_int(argv[1]);
num2 = str_to_int(argv[2]);

/* allocate memory for num1*num2*/
mul = malloc(sizeof(int) * (_strlen(argv[1]) + _strlen(argv[2])));      
if (!mul)
{
printf("Error: Failed to allocate memory.\n");
return (98);
}

/* initialize multiplication result to 0*/
for (i = 0; i < _strlen(argv[1]) + _strlen(argv[2]); i++)
{
mul[i] = 0;
}

/* perform multiplication*/
for (i = _strlen(argv[1]) - 1; i >= 0; i--)
{
for (j = _strlen(argv[2]) - 1; j >= 0; j--)
{
mul[i + j + 1] += (argv[1][i] - '0') * (argv[2][j] - '0');
}
}

/* handle carries*/
for (i = _strlen(argv[1]) + _strlen(argv[2]) - 1; i > 0; i--)
{
if (mul[i] > 9)
{
mul[i - 1] += mul[i] / 10;
mul[i] %= 10;
}
}

/* get the final result as an integer*/
result = 0;
i = 0;
while (i < _strlen(argv[1]) + _strlen(argv[2]))
{
result = result * 10 + mul[i];
i++;
}

printf("%d\n", result);

/* free the dynamically allocated memory*/
free(mul);

return (0);
}

/**
* is_valid_number - Checks if a string represents a valid positive number.
*
* @str: String to check
*
* Return: 1 if the string is a valid positive number, 0 otherwise.
*/
int is_valid_number(char *str)
{
if (*str == '-')
{
return (0);
}

while (*str)
{
if (!_isdigit(*str))
{
return (0);
}

str++;
}

return (1);
}

/**
* str_to_int - Converts a string to an integer.
*
* @str: String to convert
*
* Return: The integer value of the string.
*/
int str_to_int(char *str)
{
int result = 0;

while (*str)
{
result *= 10;
result += (*str - '0');
str++;
}

return (result);
}

/**
* print_error - Prints an error message.
*/
void print_error(void)
{
printf("Error\n");
}
/**
* _isdigit - checks if a character is a digit (0-9)
* @c: the character to check
*
* Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(char c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}

/**
 * _strlen - function that returns the length of a string
 *
 * @s: the string to get the length of
 *
 * Return: the length of @s
 */
int _strlen(char *s)
{
unsigned int len = 0;

while (s[len] != '\0')
{
len++;
}
return (len);
}
