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
	unsigned int i = 0;
	void *p;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	ptr = (char *)p;
	while (i < nmemb)
	{
		ptr[i] = 0;
		i++;
	}

	return (p);
}
