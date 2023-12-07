#include "lists.h"

/**
 * dlistint_len - counts number of elements on doubly linked list.
 *
 * @h: pointer to the first node.
 *
 * Return: number of nodes.
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
