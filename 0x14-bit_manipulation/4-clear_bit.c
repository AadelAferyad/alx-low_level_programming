#include "main.h"

/**
 * clear_bit - set a given binary to 0 at the nth index.
 *
 * @n: the given binary.
 * @index: the index.
 * Return: return 1 and -1 on fail.
 *
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1 << index); /*0000 1000*/
	return (1);
}
