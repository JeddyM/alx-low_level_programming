#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table.
 *
 * @size: Size of the array
 * Return: Pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i = 0;


	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);


	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
		return (NULL);
	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}
	return (ht);
}
