#include "main.h"

/**
 * puts_half - prints only the half of string
 * @str: pointer to char
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;
	int n = 0;

	while (str[i] != '\n')
	{
		i++;
	}
	n = i / 2; 
	if (i % 2 == 1)
		n = (i -1)/2;
	while (n <= i)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
