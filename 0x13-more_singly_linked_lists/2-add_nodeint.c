#include "lists.h"

/**
* add_nodeint - function to add new nodes
*
*@n: constant integer declaratin on function
*@head: is standing in fr new mem location f linked list items
*
*Return: Retuns the new value of linked lisy
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
