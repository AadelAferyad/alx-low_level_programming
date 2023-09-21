#include "lists.h"


/**
 * _strlen - count length of a string.
 *
 * @str: the string.
 *
 * Return: return the length of the string.
 */

unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * add_node - add new node to singly linked list.
 *
 *@head: double pointer it points to head wich points to first node.
 *@str: pointer to char.
 *
 * Return: return address of the new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *h;
	unsigned int i;

	i = _strlen(str);
	h = malloc(sizeof(list_t));
	if (!h)
		return (NULL);
	h->str = strdup(str);
	if (!h->str)
	{
		free(h);
		return (NULL);
	}
	h->len = i;
	h->next = *head;
	*head = h;
	return (h);
}
