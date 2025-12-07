#include <string.h>
#include "hash_tables.h"

/**
* hash_table_get - Retrieves the value associated with a key in a hash table
* @ht: Pointer to the hash table to look into
* @key: The key to search for
*
* Return: Value associated with key, or NULL if key not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *runner;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

index = key_index((const unsigned char *)key, ht->size);

runner = ht->array[index];

	while (runner != NULL)
	{
		if (strcmp(runner->key, key) == 0)
			return (runner->value);

		runner = runner->next;
	}

	return (NULL);
}
