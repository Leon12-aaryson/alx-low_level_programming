#include "unistd.h"

/**
*putchar - used to output characters 
*@c: is the character parameter
*
*Return: always returns 1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
