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
	unsigned long int i = 0;

	if (!size)
		return (NULL);
	hash = malloc(sizeof(hash_table_t));
	if (!hash)
		return (NULL);
	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash->array)
	{
		free(hash);
		return (NULL);
	}
	while (i <= size)
	{
		hash->array[i] = NULL;
		i++;
	}

	return (hash);
}
