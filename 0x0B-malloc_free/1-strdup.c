#include "main.h"



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
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + i))
		i++;

	p = (char *) malloc(i + 1);

	if (p == NULL)
		return (NULL);

	while (j < i)
	{
		p[j] = str[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}
