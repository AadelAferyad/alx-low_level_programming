#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 *
 * @ht: the hash table.
 *
 */

/*
*[0]== -->0-->0-->0-->N
*[1]== -->0-->N
*[3]== -->0-->0-->N
*[4]== -->0-->0-->0-->0-->N
*[5]== -->0-->N
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;
	int bol = 0;

	if (!ht)
		return;
	putchar('{');
	while (index < ht->size)
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (bol)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			bol = 1;
		}
		index++;
	}
	printf("}\n");
}
