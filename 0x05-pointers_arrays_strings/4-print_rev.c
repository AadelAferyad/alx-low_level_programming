#include "main.h"

/**
 * print_rev - prints the string to stdout reversed
 * @s: pointer to char
 */

void print_rev(char *s)
{
	int i, j = 0;

	while (s[i] != '\0')
		i++;
	while (s[j] != '\0')
	{
		i--;
		_putchar(s[i]);
		j++;
	}
	_putchar('\n');
}
