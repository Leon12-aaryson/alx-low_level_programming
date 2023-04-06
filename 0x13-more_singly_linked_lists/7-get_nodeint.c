#include "lists.h"

/**
*get_nodeint_at_index - defines how to get the nth node of the linked list
*
*@head: is the head of the node in the linked list
*@index: is the index of the pointer of a node
*Return: returns 1 when program runs successfully and -1 when it doesnt
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodes;

	for (nodes = 0; nodes < index; nodes++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
