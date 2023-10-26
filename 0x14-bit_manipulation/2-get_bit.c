#include "main.h"

/**
 * get_bit - get the bit.
 *
 * @n: unsigned long int buffer.
 * @index: index.
 * Return: return the bit.
 *
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int buffer;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	buffer = (n >> index) & 1;
	return (buffer);
}
