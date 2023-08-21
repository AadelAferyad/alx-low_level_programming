#include "main.h"

/**
 * puts_half - prints only the half of string
 * @str: pointer to char
 */

void puts_half(char *str)
{
	int a, n, i;

	i = 0;

	while (str[i] != '\0')
		i++;

	n = (i / 2);

	if ((i % 2) == 1)
		n = ((i - 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
