#include "main.h"

/**
 * binary_to_uint - convert given binary as string to unsigned int.
 *
 * @b: string containing binary.
 *
 * Return: unsigned int.
 *
 */


unsigned int binary_to_uint(const char *b)/*10=(0000 1010) 0000 0010 */
{														 /*0000 1000*/
	unsigned int num = 0, len = 0, shift = 0;

	if (!b)
		return (0);
	while (b[len])
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);
		len++;
	}
	while (len)
	{
		len--;
		if (b[len] == '1')
			num += (1 << shift);
		shift++;
	}
	return (num);
}
