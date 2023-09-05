#include "main.h"
/**
 * w_strlen - function that count words in strings.
 *
 * @s: pointer to char string.
 *
 * Return: return pointer to number of words.
 */

int w_strlen(char *s)
{
	int j, words, tr;

	words = 0;
	tr = 0;
	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == ' ')
			tr = 1;
		else if (tr == 1)
		{
			tr = 0;
			words++;
		}
	}
	return (words);
}
/**
 * strtow - function that splits a string into words.
 *
 * @str: pointer to char string.
 *
 * Return: return pointer to array of words.
 */
char **strtow(char *str)
{
	int i, k = 0, j = 0, words, end = 0, start = 0;
	char **buffer, *tmp;

	if (!(str && *str))
		return (NULL);
	words = w_strlen(str);
	if (words == 0)
		return (NULL);
	buffer = (char **) malloc(sizeof(char *) * (words + 1));
	if (buffer == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (j + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				buffer[k] = tmp - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}
	buffer[k] = NULL;
	return (buffer);
}
