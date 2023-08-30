#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 *
 * @s: pointer to char (the string will be printed rev in stdout)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
		_print_rev_recursion(s + 1);
		_putchar(*s);

}
