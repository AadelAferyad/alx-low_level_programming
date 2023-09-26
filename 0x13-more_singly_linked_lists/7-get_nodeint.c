#include "lists.h"

/**
 * get_nodeint_at_index - Search for the nth node.
 *
 *@head: Pointer it points to head wich is the first node.
 *@index: Integer value the nth node we looking for.
 *
 * Return: return address of the nth node.
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (i == index)
			break;
		i++;
		head = head->next;
	}
	return ((i == index) ? head : NULL);
}

