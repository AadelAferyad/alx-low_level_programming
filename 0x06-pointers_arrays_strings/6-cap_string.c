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
		char sp[] = " \t\n,;.!?()\"{}";

		while (s[i] != '\0')
		{
			j = 0;
			while (sp[j] != '\0')
			{
				if ((int) s[i] == (int) sp[j])
				{
					if (s[i] == '\t')
						s[i] = 32;
					checker = 1;
					i++;
					break;
				}
				j++;
			}
			if (checker == 1 && s[i] >= 97 && s[i] <= 122)
			{
				checker = 0;
				s[i] = (int) s[i] - 32;
				continue;
			}
			else if (checker == 1)
			{
				checker = 0;
				continue;
			}
			else
				i++;
		}
		return (s);
}
