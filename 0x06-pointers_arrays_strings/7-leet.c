#include "main.h"
/**
	*	leet - convert certain characters to 43071 (1337)
	*
	*	@s: pointer to char string that will be converted
	*
	*	Return: returns converted string
	*/




char *leet(char *s)
{
	int i = 0, j = 0;
	char sp_char[] = "aeotl";
	char cn_char[] = "43071";

	while (s[i])
	{
		j = 0;
		while (sp_char[j])
		{
			if (s[i] == sp_char[j] || s[i] == sp_char[j] - 32)
			{
				s[i] = cn_char[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
