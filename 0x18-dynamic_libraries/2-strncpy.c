#include "main.h"
/**
 * _strncpy - Copies the string pointed to by src, including the
 *           terminating null byte ('\0'), to the buffer pointed
 *           to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be copied.
 * @n: bytes from src
 * Return: Pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length = 0;
	int i;

	while (src[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < n ; i++)
		dest[i] = src[i];

	while (length < n)
	{
		dest[length] = '\0';
		length++;
	}
	return (dest);
}
