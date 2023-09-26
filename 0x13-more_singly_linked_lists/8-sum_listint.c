#include "lists.h"

/**
 * sum_listint - calculate sum of node's data.
 *
 *@head: Pointer to head wich is the first node.
 *
 * Return: return the sum of node's data.
 */


int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

