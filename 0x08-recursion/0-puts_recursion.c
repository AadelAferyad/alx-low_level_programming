#include "main.h"

/**
 * _puts_recursion - print a string using recursion.
 *
 * @s: string that will be printed.
 *
 */


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

