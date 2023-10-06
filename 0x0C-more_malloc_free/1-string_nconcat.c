#include "main.h"

/**
 * _strlen - counts the size of string
 * @s: pointer to char
 * Return: return the size of string
 */

unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	if (!s)
		s = "";
	while (s[len])
		len++;
	return (len);
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
	char *string;
	unsigned int len_1, len_2, i = 0;

	len_1 = _strlen(s1);
	len_2 = _strlen(s2);
	if (n >= len_2) /*"goodbye n = 3 len_2 = 7"*/
		n = len_2; /*"13" n = 5*/
	string = malloc(len_1 + n + 1);
	if (!string)
		return (NULL);
	while (i < len_1 + n)
	{
		if (i < len_1)
			string[i] = s1[i];
		else
			string[i] = s2[i - len_1]; /*len1 = 7"Chaima " len2 = 7"Misbahi"*/
		i++;
	}
	string[i] = '\0';
	return (string);
}
