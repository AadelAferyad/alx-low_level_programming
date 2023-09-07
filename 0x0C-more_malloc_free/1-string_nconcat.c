#include "main.h"



/**
 * _strlen - counts the size of string
 * @s: pointer to char
 * Return: return the size of string
 */

int _strlen(char *s)
{
	unsigned int i = 0;

	if (s == NULL)
		return (0);
	while (s[i])
		i++;
	return (i);
}

/**
 * string_nconcat - allocate memory and fill it with concat string.
 *
 * @s1: pointer to char first string.
 * @s2: pointer char second string.
 * @n: number of bytes 'll be concatenated.
 *
 * Return: returns nothing exits with 98 if it fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	p = (char *) malloc(len1 + n + 1);
	if (p == NULL)
		return (NULL);
	while (i < len1 + n)
	{
		if (i >= len1)
			p[i] = s2[i - len1];
		else
			p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
