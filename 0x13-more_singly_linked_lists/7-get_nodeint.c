#include "lists.h"

/**
* *get_nodeint_at_index - gets the index of the node
*@head: head of pointer of individual nodes
*@index: returns the index of the node being output
*Return: Returns a value of the nodes
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	for (j < index, j++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
