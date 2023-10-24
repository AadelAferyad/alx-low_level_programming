#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at nth index.
 *
 * @head: double pointer to the head.
 * @index: index.
 * Return: 1 if succeeded -1 if failed .
 *
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *next, *prev;
	unsigned int len;

	if (!head || *head == NULL)
		return (-1);
	if (temp && index == 0)
	{
		next = temp->next;
		free(temp);
		*head = next;
		return (1);
	}
	for (len = 0, temp = *head; temp && len < index; len++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (len != index)
		return (-1);
	next = temp->next;/*0-->0-->0-->0-->*/
	prev->next = next;
	free(temp);
	return (1);
}
