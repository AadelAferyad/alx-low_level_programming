#include "lists.h"

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
	if ((*head == NULL && idx == 0) || idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	else if (*head == NULL)
	{
		free(node);
		return (NULL);
	}
	for (len = 0, position = *head; position && len < idx; len++)
	{
		prev = position;
		position = position->next;
	}
	if (len != idx)
	{
		free(node);
		return (NULL);
	}
	prev->next = node;
	node->next = position;
	return (node);
}
