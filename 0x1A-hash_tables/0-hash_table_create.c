#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 *
 * @size: size of tha hash table.
 *
 *
 * Return: pointer to allocated hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = NULL;

	if (!size)
		return (NULL);
	hash = malloc(size);
	if (!hash)
		return (NULL);
	return (hash);
}
