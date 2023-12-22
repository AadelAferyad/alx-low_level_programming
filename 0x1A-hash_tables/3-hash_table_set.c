#include "hash_tables.h"


/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table.
 * @key: the hash key.
 * @value: the value hash code will take.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

/*
*0-->0-->0-->([0]== -->0)-->N
*0-->([1]== -->0)-->N
*0-->0-->0-->([2]== -->0)-->N
*0-->-->([3]== -->0)-->N
*0-->0-->0-->0-->([4]== -->0)-->N
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL, *tmp = NULL;

	if (!ht)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (index > ht->size)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	tmp = ht->array[index];
	while (tmp)/*check for collision*/
	{/*[1] = -->0-->0-->0*/
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value), tmp->value = strdup(value ? value : "");
			if (!(tmp->value))
			{
				free(tmp->key), free(node);
				return (0);
			}
			return (1);
		}
		tmp = tmp->next;
	}
	node->key = strdup(key);
	if (!(node->key))
	{
		free(node);
		return (0);
	}
	node->value = strdup(value ? value : "");
	if (!(node->value))
	{
		free(node->key), free(node);
		return (0);
	}
	node->next = ht->array[index], ht->array[index] = node;
	return (1);
}
