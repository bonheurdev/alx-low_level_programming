#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_char - Prints a char
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
unsigned int i = 0;
char *separator = "";
char *format_cpy = (char *) format;
(void)i;
va_start(valist, format);
while (format_cpy && *format_cpy)
{
while (*format_cpy != '\0' &&
(*format_cpy != 'c' && *format_cpy != 'i' &&
*format_cpy != 'f' && *format_cpy != 's'))
{
format_cpy++;
}
if (*format_cpy == '\0')
break;
printf("%s", separator);
switch (*format_cpy)
{
case 'c':
print_char(valist);
break;
case 'i':
print_int(valist);
break;
case 'f':
print_float(valist);
break;
case 's':
print_string(valist);
break;
default:
break;
}
separator = ", ";
format_cpy++;
}
printf("\n");
va_end(valist);
}
