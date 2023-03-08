#include "main.h"

/**
*_print_rev_recursion - recerses the recursion
*@s: parameter 1
* Return: rturns value void
*/

void _print_rev_recursion(char *s)
{
	if (*s)
		_print_rev_recursion(s + 1);
		_putchar(*s);
}
