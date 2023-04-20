#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_char - Prints a char.
* @valist: A va_list.
*/
void print_char(va_list valist)
{
printf("%c", va_arg(valist, int));
}

/**
* print_int - Prints an int.
* @valist: A va_list.
*/
void print_int(va_list valist)
{
printf("%d", va_arg(valist, int));
}

/**
* print_float - Prints a float.
* @valist: A va_list.
*/
void print_float(va_list valist)
{
printf("%f", va_arg(valist, double));
}

/**
* print_string - Prints a string.
* @valist: A va_list.
*/
void print_string(va_list valist)
{
char *str = va_arg(valist, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}

/**
* print_all - Prints anything.
* @format: A list of types of arguments passed to the function.
*/
void print_all(const char * const format, ...)
{
va_list valist;
unsigned int i, j;
char *separator = "";
ptype_t ptypes[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{'\0', NULL}
};
va_start(valist, format);

i = 0;
while (format != NULL && format[i] != '\0')
{
j = 0;
while (ptypes[j].type != '\0')
{
if (ptypes[j].type == format[i])
{
printf("%s", separator);
ptypes[j].f(valist);
separator = ", ";
break;
}
j++;
}
i++;
}

printf("\n");
va_end(valist);
}
