#include "search_algos.h"

/**
* binary_search - this is the function to search integer values
* @array: array list to be searched
* @size: size of array
* @value: value being searched
*
* Return: return value
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (array == NULL)
	{
		printf("Array is NULL\n");
		return (-1);
	}

	low = 0;
	high = size - 1;
	mid = 0;

	while (low <= high)
	{
		size_t i;

		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; ++i)
		{
			printf("%d ", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	printf("Value %d not found in the array\n", value);
	return (-1);
}
