#include "main.h"

/**
 * _strlen - counts the size of string
 * @s: pointer to char
 * Return: return the size of string
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	if (!s)
		s = "";

	while (s[i])/*hello 5*/
		i++;
	return (i);
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
	unsigned int i, j, k = 0;

	i = _strlen(s1);
	j = _strlen(s2);
	p = (char *) malloc(i + j + 1);
	if (!p)
		return (NULL);
	while (k < i + j)
	{
		if (k < i)
			p[k] = s1[k];/*"hello \0" i 0-->6 k = 6*/
		else
			p[k] = s2[k - i];/*"1337\0" j 0 --> k - i = 6 - 6 == 0*/
		k++;
	}
	p[k] = '\0';
	return (p);
}
