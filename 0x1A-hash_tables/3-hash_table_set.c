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
	unsigned long int index;
	hash_node_t *new = NULL;

	if (ht == NULL || value == NULL || key == NULL || *key  == '\0')
	return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new = ht->array[index];

	while (new)
	{
		if (strcmp(new->key, key) == 0)
		{
			free(new->value);
			new->value = strdup(value);
			return (1);
		}
		new = new->next;
	}
	/* creating node*/
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
