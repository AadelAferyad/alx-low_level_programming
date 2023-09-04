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
	unsigned int i = 0;
	char *p;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	return (p);
}
