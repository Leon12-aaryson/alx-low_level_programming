#include "main.h"

/**
*_strncpy - copy string
*
*@dest: destination
*@src: source
*@n: output
*Return: Always 0
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0, src_len = 0;

	while (src[j++])
		src_len++;

	for (j = 0; src[j] && j < n; j++)
		dest[j] = src[j];

	for (j = src_len; j < n; j++)
		dest[j] = '\0';

	return (dest);
}

