#include "main.h"

/**
 * main - print integers
 *
 * @n: number to print
 * Return: always 0
 */

void print_number(int n)
{
	unsigned int x;

	x = n;

	if (n < 0)
	{
		_putchar(20);
		x = -n;
	}
	if (x / 10)
		print_number(x / 10);
	_putchar ((x % 10) + '0');
}

