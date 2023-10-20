#include "lists.h"

/**
 * list_len - count number of nodes.
 *
 * @h: pointer to linked list or node.
 *
 * Return: return number on nodes.
 */


size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
