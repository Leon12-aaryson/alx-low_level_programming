#include "main.h"

/**
*print_binary - is a function that prints binary values
*@n: is the argument holding binary values
*
*Return: returns 1
*/

void print_binary(unsigned long int n)
{
	int len;
	int buff, num = 1;

	for (len = 0, buff = n; buff > 0; len++)
		buff >>= 1;

	if (--len > 0)
		num <<= len;

	for (; num > 0; num >>= 1)
	{
		if (n & num)
			_putchar('1');
		else
			_putchar('0');
	}
}
