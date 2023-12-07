#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of doubly linked list.
 *
 * @head: pointer to pointer to the first node.
 * @n: data.
 *
 * Return: a function pointer .
 *
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *coppy = *head;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!(*head))
	{
		new_node->prev = *head;
		*head = new_node;
		return (new_node);
	}
	while (coppy->next)
		coppy = coppy->next;
	coppy->next = new_node;
	new_node->prev = coppy;
	return (new_node);
}
