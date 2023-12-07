#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a doubly linked list.
 *
 * @head: pointer to pointer to first node.
 * @n: data.
 *
 * Return: the new node or NULL if failed.
 *
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);/*N<-0-><-0<->0<->0<->N*/
	new_node->n = n;
	new_node->prev = NULL;
	if (!(*head))
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
