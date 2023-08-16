#include "main.h"
/**
 *print_times_table - Entry point
 *@n: times table integer
 *Explain: 'Learn your times table '
 */
void print_times_table(int n)
{
	int a, b, j;

	if (n < 100)
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			j = a * b;
			if (j / 100 > 0)
			{
				_putchar(j / 100 + 48);
				_putchar((j / 10) % 10 + 48);
			}
			if ((j / 10) % 10 > 0 && j / 100 == 0)
			{
				_putchar((j / 10) % 10 + 48);
			}
			_putchar(j % 10 + 48);
			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
				if ((j + a) / 100 == 0)
				{
					_putchar(' ');
				}
				if ((j + a) / 10 == 0)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
	}
}
