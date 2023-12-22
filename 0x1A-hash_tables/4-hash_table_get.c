#include "hash_tables.h"


/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table.
 * @key: the hash key.
 *
 * Return: value if it succeeded, NULL otherwise.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	if (index >= ht->size)
		return (NULL);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
