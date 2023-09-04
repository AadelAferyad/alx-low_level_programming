#include "main.h"


/**
 * _strlen - length of a string.
 *
 * @s: string.
 *
 * Return: return length of string.
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	if (s == NULL)
		return (0);
	while (s[i])
		i++;
	return (i);
}

/**
 * _strcat - function that concat a 2 strings.
 *
 * @dest: first string.
 * @src: second string.
 *
 * Return: return concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	i = _strlen(dest);

	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * str_concat - function concatenate strings in the heap.
 *
 * @s1: first string.
 * @s2:  second string.
 *
 * Return: return allocated memory.
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j = 0, k;

	i = _strlen(s1) + _strlen(s2);
	p = (char *) malloc(i + 1);
	k = _strlen(s1);

	while (j < k)
	{
		p[j] = s1[j];
		j++;
	}
	p = _strcat(p, s2);
	return (p);
}
