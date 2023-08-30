#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s: pointer to char
 *
 * Return: return string's length
 */

int _strlen_recursion(char *s)
{
	unsigned int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	i++;
	i += _strlen_recursion(s + i);
	return (i);
}
