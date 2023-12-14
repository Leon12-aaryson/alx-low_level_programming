#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - Function to search for a value in an array.
 * @array: Pointer to the array to be searched.
 * @size: Size of the array.
 * @value: Value to be searched.
 *
 * Return:
 *   - Index of the first occurrence of the value (for one occurrence).
 *   - Array of indices of occurrences (for multiple occurrences).
 *   - -1 if the value is not found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i, count = 0;
	int *indices = NULL;
	int found = 0;

	if (array == NULL)
	{
		printf("Array is NULL\n");
		return (-1);
	}
	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			if (!found)
			{
				printf("Found %d at index: %lu\n", value, i);
				found = 1;
			}

			indices = (int *)realloc(indices, (count + 1) * sizeof(int));

			if (indices == NULL)
			{
				printf("Memory allocation failed\n");
				exit(EXIT_FAILURE);
			}
			indices[count++] = i;
		}
	}
	if (!found)
	{
		printf("Value %d not found in the array\n", value);
		free(indices);
		return (-1);
	}
	if (count > 1)
	{
		printf("Found %d at indices:", value);
		for (i = 0; i < count; ++i)
		{
			printf(" %d", indices[i]);
		}
		printf("\n");
		return (-1);
	}
	return (indices[0]);
}
