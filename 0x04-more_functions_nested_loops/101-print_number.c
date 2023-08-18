#include "main.h"
/**
 * print_number - print int to ascii
 * @n: The wanted value to be printed
 */
void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num / 10 > 0)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + 48);
}
