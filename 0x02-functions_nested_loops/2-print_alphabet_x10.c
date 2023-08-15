#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Explain: 'alpha *10'
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(97 + i);
		}
	_putchar('\n');
	}
}
