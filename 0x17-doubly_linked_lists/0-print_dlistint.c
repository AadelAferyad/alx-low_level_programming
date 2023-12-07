#include "lists.h"

/**
 * print_dlistint - prints data within nodes and returns number of elemetns.
 *
 * @h: pointer to the first node.
 *
 * Return: 0 if linked list is empty else return number of elements.
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
