# include "main.h"
/**
 *  _islower - function that checks lowercase characters
 *
 * @c: it takes in character
 *
 *Return: Always 0.
 */

int _islower(int c)
	/*ASCII shows that code for a is 97 and code for z is 122*/
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);

}
