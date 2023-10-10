#include "dog.h"

/**
 * _strlen - function that count length.
 *
 * @s: string.
 *
 * Return: return length.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * _strdup - function that allocates a block of memory and initialize it.
 *
 * @str: string will be coppied to the allocated memory.
 *
 * Return: return allocated memory.
 */

char *_strdup(char *s)
{
	char *buffer;
	int len, i = 0;

	if (!s)
		return (NULL);
	len = _strlen(s);
	buffer = malloc(len + 1);
	if (!buffer)
		return (NULL);
	while (s[i])
	{
		buffer[i] = s[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *node;

	node = malloc(sizeof(dog_t));
	if (node == NULL)
		return (NULL);
	node->name = _strdup(name);
	node->owner = _strdup(owner);
	if (!node->owner || !node->name)
	{
		free(node->name);
		free(node->owner);
		free(node);
		return (NULL);
	}
	node->age = age;
	return (node);
}
