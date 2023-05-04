#include "main.h"

/**
*set_bit - this function sets a bit to 1 at a given value
*@n: value of the bits
*@index: index of the bits to be manipulated
*
*Return: always return 1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
        if (index >= (sizeof(unsigned long int) * 8))
                return (-1);

        *n ^= (1 << index);

        return (1);
}

