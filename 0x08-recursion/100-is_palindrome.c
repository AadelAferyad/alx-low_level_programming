#include "main.h"

/**
 * _strlen - Calculates the length of a string recursively.
 * @s: The string to calculate the length.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * my_func - Checks if a string is a palindrome recursively.
 * @r: right index.
 * @l: left index.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int my_func(int r, int l, char *s)
{
	if (l >= r)
		return (1);
	else if (s[l] == s[r])
		return (my_func(r - 1, l + 1, s));
	else
		return (0);
}
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: pointer to char string.
 *
 * Return: return 1 if palindrome else 0.
 */

int is_palindrome(char *s)
{
	unsigned int r = _strlen(s);

	return (my_func(r - 1, 0, s));

}

