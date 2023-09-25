#include "lists.h"

/**
 * print_listint - print nodes of singly linked list.
 *
 * @h: pointer to the first node (header).
 *
 * Return: Return length of node in the singly linked list.
 */


size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

