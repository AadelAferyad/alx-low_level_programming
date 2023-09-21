#include "lists.h"
/**
 * free_list - free all alocated nodes.
 *
 * @head: pointer to the first node.
 *
 */
void free_list(list_t *head)
{
	if (!head)
		return;
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
