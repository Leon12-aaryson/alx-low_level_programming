#include "lists.h"

/**
* free_listint - frees the memory held by the linked lists
*
*@head: holding for head of node in lisnked list
*
*Return: returns value of freed linked lists
*/

void free_listint(listint_t *head)
{
	listint_t *empt;

	while (head)
	{
		empt = head->next;
		free(head);
		head = empt;
	}
}
