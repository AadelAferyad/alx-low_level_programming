#include "lists.h"

/**
 * print_listint - print node's data.
 *
 * @h: head pointer to the first node.
 *
 * Return: length of the linked list.
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
