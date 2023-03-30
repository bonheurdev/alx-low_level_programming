#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: Pointer to Char
 * Return: char.
 */
char *leet(char *s)
{
int i = 0;
int j = 0;
char *l = "aAeEoOlLtT"; /* Original characters to be replaced*/
char *n = "4433001177"; /* Replacement characters*/

/* Iterate through each character in the string*/
while (*(s + i) != '\0')
{
/* Iterate through each character in the original characters string*/
while (*(l + j) != '\0')
{
/* Check if the current character in the input string matches the current*/
/* character in the original characters string*/
if (*(s + i) == *(l + j))
{
/* If there is a match, replace the character in the input string with*/
/* the corresponding replacement character*/
*(s + i) = *(n + j);
/* Exit the inner while loop since a substitution has been made*/
break;
}
/* Move to the next character in the original characters string*/
j++;
}
/* Reset the index for the original characters string*/
j = 0;
/* Move to the next character in the input string*/
i++;
}
/* Return the modified input string*/
return (s);
}
