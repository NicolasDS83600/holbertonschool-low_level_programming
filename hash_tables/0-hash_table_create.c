#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table.
 * @size: The size of the array to allocate for the hash table.
 *
 * Return: A pointer to the newly created hash table, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (0);

	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));

	if (ht->array == NULL)
	{
		free(ht);
		return (0);
	}

	return (ht);
}
