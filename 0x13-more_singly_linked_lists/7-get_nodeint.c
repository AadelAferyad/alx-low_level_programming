#include "lists.h"

/**
 * get_nodeint_at_index - search for the nth node and return it.
 *
 * @head: pointer to head.
 * @index: unsigned integer the index of node we looking for
 * Return: the nodes's address.
 *
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i <= index)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
