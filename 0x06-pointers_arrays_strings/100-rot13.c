#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */
char *rot13(char *s)
{
int i;
int j;
/* This string contains all the letters of the alphabet*/
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

/* This string contains the ROT13 mapping of each letter*/
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)/*Loop over each character in the input string*/
{
for (j = 0; j < 52; j++) /* Loop over each character in the `data1` string*/
{
/* If the current character in the input string matches */
/* the current character in the `data1` string*/
if (s[i] == data1[j])
{
/* Replace the current character in the input string with */
/*the corresponding character from the `datarot` string*/
s[i] = datarot[j];
break; /* Exit the `data1` loop*/
}
}
}

return (s); /* Return the modified input string*/
}
