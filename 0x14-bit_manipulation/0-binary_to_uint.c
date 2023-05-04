#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a string of binary number (0 and 1 chars)
*
* Return:the converted number,or 0 if there are invalid character or b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i = 0;

if (b == NULL) /* Return 0 if b is NULL */
return (0);

while (b[i] != '\0')
{
/* Check if there are invalid characters (not '0' or '1') */
if (b[i] != '0' && b[i] != '1')
return (0);

/* Convert binary to unsigned int by shifting and adding */
result = result << 1; /* Left shift result by 1 bit */
if (b[i] == '1') /* If current bit is '1', add 1 to result */
result = result | 1;
i++;
}

return (result);
}
