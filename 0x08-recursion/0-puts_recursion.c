#include "main.h"

/**
* _puts_recursion - prints recursive blcks
*@s: is a pointer var
*Return: returns value after compilation
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
		else
			_putchar('\n');
}
