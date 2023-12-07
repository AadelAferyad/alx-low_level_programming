#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at the nth index.
 *
 * @h: pointer to pointer to the first node.
 * @idx: the position.
 * @n: data.
 *
 * Return: new_node.
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *current = *h;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!(*h) || idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (current->next)/*N<-0-><-0-><-0-><-0-><-0->N*/
	{
		if (idx == i + 1)
		{
			new_node->prev = current, new_node->next = current->next;
			if (current->next)
				current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		i++;
		current = current->next;
	}
	if (++i == idx)
	{
		new_node->prev = current;
		new_node->next = NULL;
		current->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
