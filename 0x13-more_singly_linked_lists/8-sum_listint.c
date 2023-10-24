#include "lists.h"

/**
 * sum_listint - calculat sum of node's data (integers).
 *
 * @head: pointer to the first node.
 *
 * Return: sum.
 *
 */


int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
