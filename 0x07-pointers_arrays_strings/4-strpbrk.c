#include "main.h"

/**
 *	_strpbrk - a function that searches a string for any of a set of bytes.
 *
 *	@s: pointer to char the string that will be examined
 *	@accept: the sets of character that needs to be in
 *
 *	Return: returns s
 */


char *_strpbrk(char *s, char *accept)
{
		unsigned int i = 0;

		while (*s)
		{
			i = 0;
			while (accept[i])
			{
				if (*s == accept[i])
					return (s);
				i++;
			}
			s++;
		}
		return (NULL);
}
