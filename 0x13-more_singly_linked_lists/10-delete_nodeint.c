#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at a giv
* @head: carries the ddress to the head of the node in linked lists
* @index: this is the index of the linked lists
*
* Return: always return1 on successful progran
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *empt, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = empt->next;
	free(empt);
	return (1);
}
