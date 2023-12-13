#include "search_algos.h"


/**
* linear_search - this is the function to search integer values
* @array: array list to be searched
* @size: size of array
* @value: value being searched
*
* Return: return value
*/

int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		printf("Array is NULL\n");
		return (-1);
	}

	for (size_t i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			printf("Found %d at index: %lu\n", value, i);
			return (i);
		}
	}

	printf("Value %d not found in the array\n", value);
	return (-1);
}
