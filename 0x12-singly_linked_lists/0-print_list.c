#include "lists.h"


/**
 * print_list - print nodes elements.
 *
 * @h: pointer to struct singly linked list.
 *
 *
 * Return: return number of nodes.
 */


size_t print_list(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		length++;
		h = h->next;
	}
	return (length);
}
