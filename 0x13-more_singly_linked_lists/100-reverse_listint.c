#include "lists.h"

/**
 * reverse_listint - reverse a linked list.
 *
 * @head: double pointer to head
 *
 * Return: pointer to new head (reversed).
 *
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	if (!head || *head == NULL)
		return (NULL);
	prev = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
