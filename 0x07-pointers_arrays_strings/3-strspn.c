#include "main.h"

/**
 *	_strspn - a function that gets the length of a prefix substring.
 *
 *	@s: pointer to char the string that will be examined
 *	@accept: the sets of character that needs to be in
 *
 *	Return: returns found
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, found = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				found++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (found);
			j++;
		}
		i++;
	}
	return (found);

}
