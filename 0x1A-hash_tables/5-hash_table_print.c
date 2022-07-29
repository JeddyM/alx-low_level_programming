#include "hash_tables.h"
/**
 * hash_table_print - Function that prints a hash table.
 * @ht: hash table
 *Return always 0 success
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int index = 0, del = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{

			if (del == 1)
				printf(", ");
			ptr = ht->array[index];
			while (ptr != NULL)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				if (ptr->next != NULL)
					printf(", ");
				ptr = ptr->next;
			}
			del = 1;
		}
		ptr = ht->array[index];

	}
	index++;
	printf("}\n");
}
