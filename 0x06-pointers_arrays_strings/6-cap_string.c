#include "main.h"

/**
	* cap_string - capitalizes all words of a string.
	*	@s: pointer to character (the string will be capitalized)
	*
	*
	*	Return: returns a capitalized string
	*/




char *cap_string(char *s)
{
		int i = 0, j = 0, checker = 0;
		char sp[] = {' ', '\t', '\n', ',', ';', '.'
		, '!', '?', '"', '(', ')', '{', '}'};

		if (s[i] >= 97 && s[i] <= 122)
		{
			s[0] -= 32;
			i++;
		}

		while (s[i] != '\0')
		{
			j = 0;
			while (sp[j] != '\0')
			{
				if ((int) s[i] == (int) sp[j])
				{
					if (s[i + 1] >= 97 && s[i + 1] <= 122)
					{
						s[i + 1] = (int) s[i + 1] - 32;
						i++;
						checker = 1;
						break;
					}
				}
				j++;
			}
			if (checker)
			{
				checker = 0;
				continue;
			}

			i++;
		}
		return (s);
}
