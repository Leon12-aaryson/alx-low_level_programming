#include "main.h"

/**
*_putchar - character return function
*@c: character
*Return: returns chararter
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
