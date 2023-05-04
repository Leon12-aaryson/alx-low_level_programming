#include "main.h"

/**
 * _putchar - function to print character
 * @c: character to be printed by the function
 *
 * Return: returns character value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
