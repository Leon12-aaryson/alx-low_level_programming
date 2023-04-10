#include "main.h"

/**
*print_binary - is a function that prints binary values
*@n: is the argument holding binary values
*
*Return: returns 1
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n && 1) + '0');
}
