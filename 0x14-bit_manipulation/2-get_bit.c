#include "main.h"

/**
*get_bit - returns a bit at a given index
*@n: value of a bit
*@index: index of the bit
*
*Return: returns an indeger value of 1
*/

int get_bit(unsigned long int n, unsigned int index)
{
        if (index >= (sizeof(unsigned long int) * 8))
                return (-1);

        if ((n & (1 << index)) == 0)
                return (0);

        return (1);
}
