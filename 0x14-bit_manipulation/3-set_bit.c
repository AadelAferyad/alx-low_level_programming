#include "main.h"

/**
 * set_bit - set a given binary to 1 at the nth index.
 *
 * @n: the given binary.
 * @index: the index.
 * Return: return 1 and -1 on fail.
 *
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int buffer;

	if (index > sizeof(buffer) * 8)
		return (-1);
	buffer = 1 << index;
	*n = *n | buffer;
	return (1);
}
