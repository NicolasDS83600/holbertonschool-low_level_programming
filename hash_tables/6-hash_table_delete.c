#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table and frees all memory
* @ht: Pointer to the hash table to delete
*
* Frees memory for all keys, values, nodes, and the array itself.
* Finally, frees the hash table structure.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *runner, *tmp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		runner = ht->array[i];

		while (runner != NULL)
		{
			tmp = runner->next;
			free(runner->key);
			free(runner->value);
			free(runner);

			runner = tmp;
		}
	}

	free(ht->array);
	free(ht);
}
