#include "main.h"

/**
 * _strlen_recursion - count length of the string.
 *
 * @s: String.
 *
 * Return: return length.
 */

int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

