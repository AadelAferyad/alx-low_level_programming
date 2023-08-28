#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: pointer to char the string
 * @needle: pointer to char the word we looking for
 * Return: On success haystack.
 */

char *_strstr(char *haystack, char *needle)
{
		unsigned int i = 0, k = 0, j = 0;

		while (needle[k])
			k++;

		while (haystack[i])
		{
			j = 0;

			while (needle[j])
			{
				if (haystack[i + j] != needle[j])
					break;
				j++;
			}
			if (j == k)
				return (haystack + i);
			i++;
		}
		return (NULL);
}
