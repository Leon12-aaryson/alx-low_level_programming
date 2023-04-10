#include "main.h"
#include <stdlib.h>

/**
*binary_to_unit - conversion from binary to number
*@b: is a function argument and a pointer to a string
*
*Return: returns 1
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0') || (b[len] == '1'))
	{
		i <<= 1;
		i += b[len] - '0';
		i++;
	}
	return (i);

}
