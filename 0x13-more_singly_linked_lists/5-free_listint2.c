#include "lists.h"

/**
 * free_listint2 - free all the allocated nodes and set the head to NULL.
 *
 * @head: head pointer to the first node.
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
