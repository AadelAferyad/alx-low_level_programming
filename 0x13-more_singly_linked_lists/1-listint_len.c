#include "lists.h"

/**
 * listint_len - count the number of node on the singly linked list.
 *
 * @h: pointer to the first node on the singly linked list.
 *
 * Return: return the length of the linked list.
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

