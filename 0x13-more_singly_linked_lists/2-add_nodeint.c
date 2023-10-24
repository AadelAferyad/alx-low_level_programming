#include "lists.h"

/**
 * add_nodeint - add new node at the beginning of a singly linked list.
 *
 * @head: double pointer points to the head which points to the first node.
 * @n: the data the new node will take.
 * Return: the new node.
 *
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
