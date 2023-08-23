#include "main.h"
#include <stdio.h>

/**
	* _strncpy - coppy a string
	* @dest: pointer to char, store the copied string
	* @src: pointer to char,  the string we want to coppy
	* @n: number of bytes you want to coppy
	* Return: return the address after adding the string to it
	*/


char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
		dest[i] = '\0';
	return (dest);
}
