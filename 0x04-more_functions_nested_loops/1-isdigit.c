#include "main.h"
#include<stdio.h>

/**
 * _isdigt - checks is a character is uppercase
 *
 * Return: returns 1 if true else 0 if false
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
