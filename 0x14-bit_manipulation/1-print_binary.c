#include "main.h"

/**
 * print_binary - print binary wsing bitwise.
 *
 * @n: unsigned long int will be converted to binary.
 *
 *
 */



void print_binary(unsigned long int n)
{
	int i, len, triger = 0;
	unsigned long int buffer;

	len = sizeof(unsigned long int) * 8;
	for (i = len - 1; i >= 0; i--)
	{
		buffer = (n >> i) & 1;/* 0001 0001 >> 8 & 0001*/
		if (buffer || triger)
		{
			_putchar(buffer + 48);
			triger = 1;
		}
	}
	if (!triger)
		_putchar(48);
}
