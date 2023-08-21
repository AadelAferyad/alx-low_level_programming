#include "main.h"
/**
 * _strcpy - copy the string
 * @dest: pointer to char
 * @src: pointer to char
 * Return: return addre
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
