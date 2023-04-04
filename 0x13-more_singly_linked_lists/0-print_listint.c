#include "lists.h"
#include <stdio.h>

/**
*print_listint - this fundtion prints a list of nodes in the linked list
*
*@h: member pointer of a struct
*
*Return: Number of nodes
*/

size_t print_listint (const listint_t *h)
{
	size_t sem = 0;

	if (next == NULL)
		printf ("nil");

	while (h)
	{
		sem++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (sem);
}
