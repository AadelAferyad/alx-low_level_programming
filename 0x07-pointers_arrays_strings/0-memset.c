#include "main.h"

/**
	*	_memset - fills memory with a constant byte
	*
	*	@s: pointer to char the buffer
	*	@b: the byte that gonna fills the buffer
	*	@n: length we want to fill
	*
	*	Return: returns a pointer to buffer
	*/


char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
