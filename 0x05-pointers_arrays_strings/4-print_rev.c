#include "main.h"

/**
 * print_rev - prints the string to stdout reversed
 * @s: pointer to char
 */

void print_rev(char *s)
{
	int i, j = 0;

	while (str[i] != '\0')
		i++;
	while (str[j] != '\0')
	{
		i--;
		_putchar(str[i]);
		j++;
	}
	_putchar('\n');
}
