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
 * add_node_end - insert node at the end.
 *
 *@head: double pointer it points to head wich points to first node.
 *@str: pointer to char.
 *
 * Return: return address of the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *current;
	unsigned int i;

	i = _strlen(str);
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	if (!node->str)
	{
		free(node);
		return (NULL);
	}
	node->len = i;
	node->next = NULL;
	current = *head;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (current->next)
		current = current->next;
	current->next = node;
	return (node);
}
