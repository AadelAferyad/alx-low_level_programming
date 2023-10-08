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
	void *new_ptr;
	unsigned int i = 0, size;

	if (!ptr)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	if (new_size > old_size)
		size = old_size;
	else
		size = new_size;
	while (i < size)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (new_ptr);
}
