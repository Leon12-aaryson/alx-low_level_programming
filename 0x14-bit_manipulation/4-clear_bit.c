#include "main.h"

/**
*clear_bit - sets the value of a bit to zero or clears it
*@n: the bit
*@index: the index of the bit in the program or memory
*Return: returns a positive value of 1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
        if (index >= (sizeof(unsigned long int) * 8))
                return (-1);

        *n &= ~(1 << index);

        return (1);
}

