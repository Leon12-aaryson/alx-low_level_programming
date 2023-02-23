#include "main.h"
#include<stdio.h>

/**
 * _isupper - checks if character a character is uppercase
 *
 * @c: uppercase check 
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
