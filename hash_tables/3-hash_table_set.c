#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
* find_key_node - find a node that matches a given key
* @head: head of the linked list at a hash index
* @key: the key to search for
*
* Return: pointer to the matching node, or NULL if not found
*/
hash_node_t *find_key_node(hash_node_t *head, const char *key)
{
	while (head)
	{
		if (strcmp(head->key, key) == 0)
			return (head);
		head = head->next;
	}
	return (0);
}

/**
* make_node - create a new node and insert at head of list
* @head: pointer to the list head pointer
* @key: key for the new node
* @value: value for the new node
*
* Return: pointer to new node, or NULL on failure
*/
hash_node_t *make_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);

	if (node->key == NULL || node->value == NULL)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}

	node->next = *head;
	*head = node;

	return (node);
}

/**
* hash_table_set - Insert or update a key/value pair in a hash table
* @ht: pointer to the hash table
* @key: key string
* @value: value string
*
* Return: 1 on success, 0 on failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *exist, *new_node;
	char *value_copy;

	if (ht == NULL || value == NULL)
		return (0);

	if (key == NULL || key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	exist = find_key_node(ht->array[index], key);

	if (exist != NULL)
	{
		value_copy = strdup(value);

		if (value_copy == NULL)
			return (0);

		free(exist->value);
		exist->value = value_copy;
		return (1);
	}

	new_node = make_node(&ht->array[index], key, value);

	if (new_node == NULL)
		return (0);

	return (1);
}
