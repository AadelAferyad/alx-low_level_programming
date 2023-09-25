#include "lists.h"

/**
 * free_listint2 - free all alocated nodes.
 *
 * @head: pointer to pointer to the first node.
 *
 */


void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}

