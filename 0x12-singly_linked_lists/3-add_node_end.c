#include "lists.h"

/**
 * _strlen - count length of a string.
 *
 * @s: the string.
 *
 * Return: return the length of the string.
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len])
		len++;
	return (len);
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

	node = malloc(sizeof(node));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	if (!node->str)
	{
		free(node);
		return (NULL);
	}
	node->len = _strlen(str);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	current = *head;
	while (current->next)
		current = current->next;
	current->next = node;
	return (node);
}
