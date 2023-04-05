#include "lists.h"

/**
* free_listint2 - is a function to return null incase the value is null
*
*@head: holds the memory or address of the linked list items
*
*Return: retunrs a NULL value
*/

void free_listint2(listint_t **head)
{
	listint_t *empt;

	if (head == NULL)
		return ;
	while (head)
	{
		empt = (*head)->next;
		free(*head);
		*head = empt;
	}

	head = NULL;
}
