#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at the nth index.
 *
 * @head: pointer to pointer to first node.
 * @index: the nth index.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL, *tmp = NULL;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);
	current = *head;
	tmp = *head;
	if (index == 0 && *head)
	{
		if ((*head)->next)
		{
			tmp = (*head)->next, free(*head);
			*head = tmp;
			(*head)->prev = NULL;
		}
		else
		{
			free(*head);
			*head = NULL;
		}
		return (1);
	}
	while (current->next)/*N<-0->0<-0->n*/
	{
		if (i == index && current->next)
		{
			tmp = current, current->next->prev = current->prev;
			current->prev->next = current->next, free(tmp);
			return (1);
		}
		i++, current = current->next;
	}
	if (++i == index)
	{
		current->prev->next = NULL, free(current);
		return (1);
	}
	return (-1);
}
