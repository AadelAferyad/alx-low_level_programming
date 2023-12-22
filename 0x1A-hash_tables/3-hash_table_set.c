#include "hash_tables.h"


/**
 * function_betty - ffunction helper for betty.
 * @node: node.
 * @key: the hash key.
 * @value: the value hash code will take.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int function_betty(hash_node_t *node, const char *key, const char *value)
{
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
		free(node->key);
		free(node);
		return (0);
	}
	return (1);
}


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
	unsigned long int index = 0, i = 0;
	hash_node_t *node = NULL;

	if (!ht)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (function_betty(node, key, value) == 0)
		return (0);
	if (ht->array[index] == NULL && ht->array[index] != '\0')
	{
		ht->array[index] = node;
	}
	else
	{
		while (i < ht->size)
		{
			if (ht->array[i] == NULL)
			{
				ht->array[i] = node;
				break;
			}
			i++;
		}
	}
	return (i < ht->size ? 1 : 0);
}
