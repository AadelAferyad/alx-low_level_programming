#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: Always return 0 (Success).
 */
void times_table(void)
{
	int n, j, k;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			k = n * j;

			if (k <= 9)
				_putchar(' ');
			else
				_putchar((k / 10) + '0');

			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
