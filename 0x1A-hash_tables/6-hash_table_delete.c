#include "hash_tables.h"


/**
 * hash_table_delete - function that deletes a hash table.
 *
 * @ht: the hash table.
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *tmp_node = NULL, *inside_tmp = NULL;

	if (!ht)
		return;

	while (index <= ht->size)
	{
		if (ht->array[index])
		{
			tmp_node = ht->array[index];
			while (tmp_node)
			{
				inside_tmp = tmp_node->next;
				free(tmp_node->key);
				free(tmp_node->value);
				free(tmp_node);
				tmp_node = inside_tmp;
			}
		}
		index++;
	}

	free(ht->array);
	free(ht);
}
