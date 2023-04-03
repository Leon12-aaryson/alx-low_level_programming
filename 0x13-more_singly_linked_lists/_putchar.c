#include <unistd.h>

/**
*_putchar - this is a function for output
*
*@c: this is a named varuiable
*
*Return: return 1 means program ran successfully
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
