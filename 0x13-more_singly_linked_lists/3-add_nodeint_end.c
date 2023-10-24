#include "lists.h"

/**
 * add_nodeint_end - add node at the end of linked list.
 *
 * @head: pointer to pointer which points to the first node.
 * @n: data that node will take.
 * Return: new node.
 *
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *current;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (!(*head))
	{
		*head = node;
		return (node);
	}
	current = *head;
	while (current->next)
		current = current->next;
	current->next = node;
	return (node);
}

