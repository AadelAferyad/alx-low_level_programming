#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n :length of the straight line
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');

	}
	if (n <= 0)
		_putchar('\n');
}
