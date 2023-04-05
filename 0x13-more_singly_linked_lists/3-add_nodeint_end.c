#include "lists.h"

/**
*add_nodeint_end - adds the note at the end of the list in linked lists
*
*@head: this is the head of the linked list node
*@n: is the varaible for linked list position
*Return: returns value of the addres to the linked lists
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;


		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
