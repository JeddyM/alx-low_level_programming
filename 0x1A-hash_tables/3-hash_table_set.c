#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: hash table you want to add the key/value to
 * @key:  the key which cannot be an empty string
 * @value: value to key, can be empty string & must be duplicated
 *
 * Returns: 1 on success otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	
	
	if (ht == NULL || value == NULL || key == NULL || *key  == '\0')
	return (0);

}
