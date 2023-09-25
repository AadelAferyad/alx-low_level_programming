#include "lists.h"

/**
 * free_listint - free all alocated nodes.
 *
 * @head: pointer to the first node.
 *
 */


void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}

