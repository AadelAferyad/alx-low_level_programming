#include "main.h"

/**
 * puts2 - prints all the other characters
 * @str: pointer to char
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[j] != '\0')
		j++;

	while (i < j)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
