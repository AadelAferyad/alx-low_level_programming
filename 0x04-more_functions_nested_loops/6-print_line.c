#include "main.h"

/**
 * print_line - print straight line
 * @n :length of the straight line
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
