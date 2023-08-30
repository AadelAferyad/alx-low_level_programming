#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 *
 * @s: pointer to char (the string will be printed in stdout)
 */

void _puts_recursion(char *s)
{
		unsigned int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(&s[i]);
}
