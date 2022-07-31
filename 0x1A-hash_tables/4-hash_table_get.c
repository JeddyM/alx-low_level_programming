#include "hash_tables.h"

/**
 * hash_table_get - Afunction that retrieves a value associated with a key.
 * @ht: hash table to look into
 * @key: key to look for
 *
 * Return: key value otherwise NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = NULL;
	unsigned int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	if (ht && key)
	{
		index = key_index((unsigned char *)key, ht->size);
		node = ht->array[index];
		if (node == NULL)
			return (NULL);
		while (strcmp(node->key, key) != 0)
			node = node->next;
		return (node->value);
	}
	return (NULL);
}
