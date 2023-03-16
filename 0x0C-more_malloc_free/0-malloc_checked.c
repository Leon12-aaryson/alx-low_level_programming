#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - used to check
*
*@b: the variable for calloc
*
* Return: return void value
*/

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
