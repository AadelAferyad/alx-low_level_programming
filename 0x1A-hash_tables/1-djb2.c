#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int num = 5381;
	int i = 0;

	while (str[i])
	{
		num = ((num << 5) + num) + str[i];
		i++;
	}
	return (num);
}
