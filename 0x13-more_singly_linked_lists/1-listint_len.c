#include "lists.h"

/**
 * listint_len - calculat the length of linked list.
 *
 * @h: head pointer to the first node.
 *
 * Return: length of a linked list.
 *
 */


size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
