#include "main.h"


/**
	* _strncat - concatenates two strings with the n bytes from src
	* @dest: pointer to char, store the concatenated string
	* @src: pointer to char,  the string we want to add/concatenate
	* @n: the number of bytes will be concatenated
	* Return: return the concatenated var / it's address
	*/

char *_strncat(char *dest, char *src, int n)
{
	int i	= 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
