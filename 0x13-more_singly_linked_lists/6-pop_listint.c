#include "lists.h"

/**
 * pop_listint - delete the first node.
 *
 * @head: pointer to pointer which points to first node.
 *
 * Return: data of the deleted node.
 *
 */


int pop_listint(listint_t **head)
{
	int save;
	listint_t *temp;

	if (!(*head))
		return (0);
	temp = (*head)->next;
	save = (*head)->n;
	free(*head);
	*head = temp;
	return (save);
}
