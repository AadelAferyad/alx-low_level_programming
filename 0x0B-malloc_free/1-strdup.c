#include "main.h"

/**
 * _strlen - counts the size of string
 * @str: pointer to char
 * Return: return the size of string
 */

unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i])
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

char *_strdup(char *str)
{
	char *p;
	unsigned int size, i = 0;

	if (!str)
		return (NULL);
	size = _strlen(str);
	p = (char *) malloc(size + 1);
	if (!p)
		return (NULL);
	while (i < size)
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
