#include "lists.h"

/**
*print_listint - this fundtion prints a list of nodes in the linked list
*
*@h: member pointer of a struct
*Return: Number of nodes
*/

size_t print_listint (const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
