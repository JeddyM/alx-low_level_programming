#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: hash table you want to add the key/value to
 * @key:  the key which cannot be an empty string
 * @value: value to key, can be empty string & must be duplicated
 *
 * Return: 1 on success otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int i, index;

	if (ht == NULL || value == NULL || key == NULL || *key  == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}
	/* creating node*/
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
