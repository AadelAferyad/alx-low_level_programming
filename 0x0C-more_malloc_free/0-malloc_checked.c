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
	void *ptr;

	if (b <= 0)
		exit(98);
	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
