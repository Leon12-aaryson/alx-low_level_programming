#include "lists.h"

/**
 * pop_listint - this function returns a node saved in the lists
 * @head: first node argument in the function
 *
 * Return: returns stored values
 */

int pop_listint(listint_t **head)
{
	listint_t *list_new;
	int val;

	if (!head)
		return (0);
	if (*head == NULL)
		return (0);

	val = (*head)->n;
	if ((*head)->next == NULL)
	{
		list_new = *head;
		free(list_new);
		*head = NULL;
		return (val);
	}

	list_new = *head;
	*head = (*head)->next;
	free(list_new);

	return (val);
}
