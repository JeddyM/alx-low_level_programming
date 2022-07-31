#include "hash_tables.h"
/**
 * hash_table_print - Function that prints a hash table.
 * @ht: hash table
 *Return always 0 success
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index = 0;
       	char del = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{

			if (del == 1)
				printf(", ");
			node = ht->array[index];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			del = 1;
		}
		index++;
	}
	
	printf("}\n");
}
