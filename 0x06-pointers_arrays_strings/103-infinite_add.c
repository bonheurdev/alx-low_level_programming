#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l, m, n;

/* find the length of the input strings */
for (i = 0; n1[i]; i++)
;
for (j = 0; n2[j]; j++)
;
/* check if the output array size is sufficient for the result */
if (i > size_r || j > size_r)
return (0); /* return 0 if output array size is insufficient */

m = 0; /* initialize the carry-over variable */
for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
{
/* compute the sum of the current digits and the carry-over */
n = m;
if (i >= 0)
n += n1[i] - '0'; /* convert digit character to integer */
if (j >= 0)
n += n2[j] - '0'; /* convert digit character to integer */

if (i < 0 && j < 0 && n == 0)
{
break;
}
m = n / 10;
r[k] = n % 10 + '0'; /* convert integer to digit character */
}
r[k] = '\0'; /* add a null terminator to the output string */
if (i >= 0 || j >= 0 || m)
return (0); /* return 0 if there are digits left or a carry-over */

for (k -= 1, l = 0; l < k; k--, l++)
{
m = r[k];
r[k] = r[l];
r[l] = m;
}

return (r); /* return the output string */
}
