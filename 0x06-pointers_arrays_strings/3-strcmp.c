#include "main.h"

/**
	*	_strcmp - compares two strings
	*	@s1: pointer to char first string
	*	@s2: pointer to char second string
	*	Return: return intger value
	*/


int _strcmp(char *s1, char *s2)
{
		int i = 0;

		while (s1[i] && s2[i])
		{
			if (s1[i] == s2[i])
			{
				i++;
				continue;
			}
			else
				return ((int) s1[i] - (int) s2[i]);
			i++;
		}
		return ((s1[i] == '\0' && s2[i] == '\0') ? 0 : ((int) s1[i] - (int) s2[i]));
}
