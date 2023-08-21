#include "main.h"

/**
 * _strlen - counts the size of string
 * @s: pointer to char
 * Return: return the size of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
