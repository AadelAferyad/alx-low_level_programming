#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at the nth index.
 *
 *@head: Double pointer it points to head wich points to first node.
 *@n: Integer value node will take.
 *@idx: The nth index the node will be in.
 *
 * Return: return address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp, *prev;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (*head == NULL || idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	temp = *head;
	prev = temp;
	while (temp)
	{
		if (i == idx)
		{
			prev->next = node;
			node->next = temp;
			break;
		}
		i++;
		prev = temp;
		temp = temp->next;
	}
	return ((i == idx) ? node : NULL);
}

