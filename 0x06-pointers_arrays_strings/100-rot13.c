#include "main.h"
/**
	*	rot13 - is a letter substitution cipher
	*
	*	@s: pointer to char
	*
	*	Return: returns a string
	*/


char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		while ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90))
		{
			if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i]  <= 'Z'))
			{
				s[i] = (int) s[i] - 13;
				i++;
				continue;
			}
			s[i] += 13;
			i++;
		}
		i++;
	}
	return (s);
}
