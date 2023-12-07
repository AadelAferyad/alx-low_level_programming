#include "lists.h"

/**
 * free_dlistint - free all the nodes.
 *
 * @head: pointer to the first node.
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	if (!head)
		return;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
