#include "main.h"

/**
 * _isdigit - checks is a character is uppercase
 *
 *@c: input
 * Return: returns 1 if true else 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
