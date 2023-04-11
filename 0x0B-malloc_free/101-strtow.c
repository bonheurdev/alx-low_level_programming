#include "main.h"

#include <stdlib.h>
#include <string.h>

/**
 * strtow - function that sprits string into words
 *@str: string to sprirt into words
 *Return: return pointer to array
 */
char **strtow(char *str)
{
int i = 0, j, k = 0, len = 0, words = 0;
char **result;
if (str == NULL || *str == '\0')
return (NULL);
while (*(str + len))
{
while (*(str + len) == ' ')
len++;
if (*(str + len))
words++;
while (*(str + len) &&*(str + len) != ' ')
len++;
}
result = malloc((words + 1) * sizeof(char *));
if (result == NULL)
return (NULL);
while (*str)
{
while (*str == ' ')
str++;
if (*str)
{
len = 0;
while (*(str + len) &&*(str + len) != ' ')
len++;
*(result + i) = malloc((len + 1) * sizeof(char));
if (*(result + i) == NULL)
{
for (j = 0; j < i; j++)
free(*(result + j));
free(result);
return (NULL);
}
strncpy(*(result + i), str, len);
*(*(result + i) + len) = '\0';
i++, k += len, str += len;
}
}
*(result + i) = NULL;
return (result);
}
/**
 *free_string_array - free previously allocated memory
 *@array: parameter of pointer array
 *Return: nothing
 */
void free_string_array(char **array)
{
int i;
if (array == NULL)
return;

i = 0;
while (*(array + i))
{
free(*(array + i));
i++;
}
free(array);
}
