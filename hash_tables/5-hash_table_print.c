#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_print - Prints the contents of a hash table
* @ht: Pointer to the hash table to print
*
* Prints key/value pairs in the order they appear in the array
* and in the linked list at each index.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int comma_needed = 0;
	hash_node_t *runner;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		runner = ht->array[i];

		while (runner != NULL)
		{
			if (comma_needed)
				printf(", ");

			printf("'%s': '%s'", runner->key, runner->value);
			comma_needed = 1;

		runner = runner->next;
		}
	}
	printf("}\n");
}
