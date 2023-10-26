#include "main.h"

/**
 * flip_bits - flip bits to convert one number to another number.
 * @n: original number.
 * @m: number to convert to.
 * Return: number of flips.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int buffer;
	int counter;

	buffer = n ^ m;
	counter = 0;

	while (buffer)
	{
		counter++;
		buffer &= (buffer - 1);
	}

	return (counter);
}
