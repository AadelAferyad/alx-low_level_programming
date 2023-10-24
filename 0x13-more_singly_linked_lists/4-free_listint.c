#include "lists.h"

/**
 * free_listint - free all the allocated nodes.
 *
 * @head: head pointer to the first node.
 *
 */


void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
