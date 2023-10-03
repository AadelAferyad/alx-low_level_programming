#include "main.h"


/**
 * create_array - function that allocates a block of memory and initialize it.
 *
 * @size: integer value size of the allocated memory.
 * @c: initializing the allocated memoty with a character.
 *
 * Return: return allocated memory.
 */



char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	p = (char *) malloc(size);
	if (!p)
		return (NULL);
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';
	return (p);
}
