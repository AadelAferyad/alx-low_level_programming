#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Explain: 'alpha'
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(97 + i);
	}
	_putchar('\n');
}
