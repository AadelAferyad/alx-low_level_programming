#include "main.h"


/**
 * malloc_checked - allocate memory using malloc.
 *
 * @b: number of bytes 'll be allocated.
 *
 * Return: returns nothing exits with 98 if it fails.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	if (b == 0)
		exit(98);
	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
