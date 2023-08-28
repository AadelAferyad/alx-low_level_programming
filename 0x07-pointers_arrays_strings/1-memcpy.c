#include "main.h"

/**
 *	_memcpy - copies memory from a buffer
 *
 *	@dest: pointer to char the buffer we want to fill with new memory
 *	@src: pointer to char the buffer memory will be taken from
 *	@n: size of memory will be taken
 *
 *	Return: return buffer with new chunks on memory
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int i = 0;

		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}

		return (dest);
}
