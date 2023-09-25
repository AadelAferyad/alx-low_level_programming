#include "lists.h"

/**
 * pop_listint - delete the first node.
 *
 *@head: Double pointer it points to head wich points to first node.
 *
 * Return: return data n that were in the deleted node.
 */




int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	i = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;
	return (i);
}

