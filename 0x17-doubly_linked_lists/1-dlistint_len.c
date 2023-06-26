#include "lists.h"

/**
 * dlistint_len - count the number of nodes in the linked list
 * @h: pointer to the first node of the linked list
 * Return: number of nodes in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		h = h->next;
		l++;
	}
	return (l);
}
