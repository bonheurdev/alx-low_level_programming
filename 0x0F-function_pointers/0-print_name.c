/**
 * print_name - function that prints name
 * @name: at name
 * @f: function pointer(void)
 *
 * Return:  0
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
