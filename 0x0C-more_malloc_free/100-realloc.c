#include "main.h"

/**
 * *_realloc - add size to allocated memory.
 *
 * @ptr: pointer to allocated memory.
 * @old_size: integer current size.
 * @new_size: integer new size.
 *
 * Return: return allocated pointer with new size.
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1, *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	p = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = p[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = p[i];
	}

	free(ptr);
	return (ptr1);
}
