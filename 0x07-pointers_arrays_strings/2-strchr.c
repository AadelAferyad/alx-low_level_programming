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
		while (*s != '\0')
		{
			if (*s == c)
				return (s);
			s++;
		}
		if (c == '\0')
			return (s);

		return ('\0');
}
