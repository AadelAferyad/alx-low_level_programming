#include "main.h"

/**
 *	_strchr - a function that locates a character in a string.
 *
 *	@s: pointer to char the string that will be examined
 *	@c: the character we looking for
 *
 *	Return: returns s
 */


char *_strchr(char *s, char c)
{
		int i = 0;

		while (s[i])
		{
			if (s[i] == c)
				return (s + i);
			i++;
		}

		return (NULL);
}
