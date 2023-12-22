#include "hash_tables.h"


/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table.
 * @key: the hash key.
 * @value: the value hash code will take.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL;

	if (!ht)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	if (!(node->key))
	{
		free(node);
		return (0);
	}
	if (!value)
		node->value = strdup("");
	else
		node->value = strdup(value);
	if (!(node->value))
	{
		free(node->key), free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
