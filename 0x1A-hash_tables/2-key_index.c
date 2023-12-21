#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: the key.
 * @size: size of array.
 *
 * Return: return index.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	if (!key && !size)
		return (0);
	index = hash_djb2(key);
	return (index % size);
}
