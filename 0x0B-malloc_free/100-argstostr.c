#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: an array of pointers to the arguments
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
int a, b, c, size;
char *str;
if (ac == 0 || av == NULL) /*Check for invalid input*/
return (NULL);

/* Find size of the 2D array + '\0' */
size = 0;
a = 0;
do {
b = 0;
do {
if (av[a][b] != '\0')
size++;
size++;
b++;
} while (av[a][b] != '\0');
a++;
} while (a < ac);
/*Allocate memory for the string*/
str = malloc((size + 1) * sizeof(char));
if (str == NULL)
return (NULL);
c = 0;
a = 0;
do {
b = 0;
do {
str[c] = av[a][b];
c++;
b++;
} while (av[a][b] != '\0');
str[c] = '\n';
c++;
a++;
} while (a < ac);
str[c] = '\0';
return (str);
}
