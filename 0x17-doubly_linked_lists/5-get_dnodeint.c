#include "lists.h"

/**
 * get_dnodeint_at_index - search for the nth node of a doubly linked list.
 *
 * @head: pointer to the first node.
 * @index: the nth index;
 *
 * Return: nth index if does't exist return NULL.
 *
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}

