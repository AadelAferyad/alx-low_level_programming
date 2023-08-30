#include "main.h"

/**
 * len - Calculates the length of a string recursively.
 * @s: The string to calculate the length.
 *
 * Return: The length of the string.
 */

int len(char *s)
{
	unsigned int i = 0;

	if (*s == '\0')
		return (0);
	i++;
	i = i + len(s + i);
	return (i);
}
/**
 * my_func - Checks if a string is a palindrome recursively.
 * @s: The string to check.
 * @r: right index.
 * @l: left index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int my_func(char *s, int l, int r)
{

	if (l >= r)
		return (1);
	else if (s[l] == s[r])
		return (my_func(s, l + 1, r - 1));
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
	unsigned int r = len(s);

	r--;
	return (my_func(s, 0, r));
}
