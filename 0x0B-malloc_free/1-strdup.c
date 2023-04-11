#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function duplicate string
 * @str: parameter string to duplicate
 *
 * Return: pointer to the copied string or NULL when failed
 */
char *_strdup(char *str)
{
/* Initialize pointer to NULL to ensure it's not pointing to garbage memory*/
char *dstr = NULL;
/* Initialize counters to 0*/
unsigned int i = 0, len = 0;

/* Check if str is NULL and return NULL if it is*/
if (str == NULL)
return (NULL);

/*Calculate length of string using do-while loop*/
do {
len++;
} while (str[len]);

/* Allocate memory for the new string and check if malloc succeeded*/
dstr = malloc(sizeof(char) * (len + 1));
if (dstr == NULL)
return (NULL);

/*Copy string using do-while loop*/
i = 0;
do {
dstr[i] = str[i];
i++;
} while (str[i]);

/*Add null terminator to end of new string*/
dstr[i] = '\0';

/*Return pointer to new string*/
return (dstr);
}
