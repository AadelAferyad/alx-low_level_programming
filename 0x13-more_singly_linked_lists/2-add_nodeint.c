#include "lists.h"

/**
 * add_nodeint - Add new node at the beginning of the linked list.
 *
 * @head: pointer to head the first node.
 * @n: The integer valeu linked list will take.
 *
 * Return: return new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}

