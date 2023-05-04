#include "main.h"

/**
*get_endianness - checks for most significant bits in a system
*
*Return: always return a positive integer
*/

int get_endianness(void)
{
	int num = 1;
	char *m = (char *)&num;

	if (*m == 1)
		return (1);

	return (0);
}
