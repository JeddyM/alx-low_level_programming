#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table
 * @ht: the hash table
 * Return: Alaways 0 on success
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node = NULL, *head = NULL;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			head = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = head;
		}
	}
	free(ht->array);
	free(ht);
}
