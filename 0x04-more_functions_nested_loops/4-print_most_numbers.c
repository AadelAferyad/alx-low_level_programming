#include "main.h"

/**
 * print_most_numbers - print digits 0 - 9
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (48 + i == 50 || 48 + i == 52)
		{
			continue;
		}
		else
			_putchar(48 + i);
	}
	_putchar('\n');
}
