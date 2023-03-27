#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: parameter string
 * Return: nothing.
 */
void rev_string(char *s)
{
int i = 0;
int j = 0;
char m;

while (s[i] != '\0')
i += 1;
i -= 1;

while (j < i)
{
m = s[i];
s[i] = s[j];
s[j] = m;
j++;
i--;
}
}
