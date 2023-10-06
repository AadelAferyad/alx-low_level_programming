#include "main.h"
#include <string.h>

/**
 * _calloc - initializing allocated memory to 0.
 *
 * @nmemb: number of element'll be allocated.
 * @size: size of the element.
 *
 * Return: returns nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
