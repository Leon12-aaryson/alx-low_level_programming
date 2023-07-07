#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm in the hash tables
 * @str: string to generate hash values in  program
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
