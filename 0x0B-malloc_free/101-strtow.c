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
	int i, k = 0, len = 0, words, c = 0, start, end;
	char **buffer, *tmp;

	while (*(str + len))
		len++;
	words = w_strlen(str);
	if (words == 0)
		return (NULL);

	if (matrix == NULL)
	buffer = (char **) malloc(sizeof(char *) * (words + 1));
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				buffer[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	buffer[k] = NULL;

	return (matrix);
}
