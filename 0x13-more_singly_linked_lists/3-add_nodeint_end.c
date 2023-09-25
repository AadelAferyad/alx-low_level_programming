#include "lists.h"

/**
 * add_nodeint_end - insert node at the end.
 *
 *@head: Double pointer it points to head wich points to first node.
 *@n: Integer value node will take.
 *
 * Return: return address of the new node.
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;

	temp = *head;
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (*head == NULL)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (temp)
	{
		if (temp->next == NULL)
			break;
		temp = temp->next;
	}
	temp->next = node;
	node->next = NULL;
	return (node);
}

