#include "lists.h"

/**
 * sum_dlistint - sum of all data n.
 *
 * @head: pointer to the first node.
 *
 * Return: sum of all data n else if list is empty return 0.
 *
 */


int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
