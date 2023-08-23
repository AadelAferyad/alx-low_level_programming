#include "main.h"

/**
	* string_toupper - string to uppercase
	*	@s: pointer to char
	*	Return: return uppercased string
	*/


char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
			i++;
			continue;
		}
		else
		{
			i++;
			continue;
		}
	}
	return (s);
}
