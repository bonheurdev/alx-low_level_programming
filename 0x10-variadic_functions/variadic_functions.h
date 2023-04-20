#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stddef.h>
void print_char(va_list valist);
void print_int(va_list valist);
void print_float(va_list valist);
void print_string(va_list valist);
/**
 *struct ptype_s -Typedef for struct ptype
 *@f: parameter function pointer
 *@type: parameter character
 *
 */
typedef struct ptype_s
{
char type;
void (*f)(va_list);
} ptype_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif/* _VARIADIC_FUNCTIONS_H */
