#include "lists.h"

/**
 * _strnode - calcul the number of nodes.
 *
 * @h: pointer to the head.
 *
 * Return: length.
 *
 */
unsigned int _strnode(listint_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
/**
 * insert_nodeint_at_index - insert at the index.
 *
 * @head: double pointer to the head.
 * @idx: index.
 * @n: data.
 * Return: new node.
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *position, *prev;
	unsigned int len;

	if (!head)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (*head == NULL && idx == 0)
	{
		*head = node;
		return (node);
	}
	len = _strnode(*head);
	if (idx > len)
	{
		free(node);
		return (NULL);
	}
	for (len = 0, position = *head; position; len++)
	{
		if (len == idx)/*0-->0-->0--->0-->*/
		{
			prev->next = node;
			node->next = position;
			break;
		}
		prev = position;
		position = position->next;
	}

	return (node);
}
