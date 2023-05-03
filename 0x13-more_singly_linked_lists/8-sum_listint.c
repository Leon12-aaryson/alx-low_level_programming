#include "lists.h"

/**
 * sum_listint - this function adds the integers in a linked list.
 * @head: list of integers
 * Return: sum of linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		sum += (*head).n;

		head = (*head).next;
	}
	return (sum);
}
