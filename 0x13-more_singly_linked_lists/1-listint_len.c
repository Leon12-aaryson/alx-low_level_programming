#include "lists.h"

/**
*listint_len - this is a function to list dwn the elements in a linked list
*
*@h: this is for header pointer
*
*Return: Return the value of the function
*/

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
