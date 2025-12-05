#include <stdlib.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node in a doubly linked list
*                            at a given index.
*
* @h: Pointer to the pointer of the head of the list.
* @idx: Index at which the new node should be added (0-based).
* @n: Value to store in the new node.
*
* Return: Pointer to the newly inserted node, or NULL on failure
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *runner = *h;

	if (h == NULL)
		return (0);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (0);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;

		if (*h != NULL)
			(*h)->prev = new_node;

		*h = new_node;
		return (new_node);
	}
	for (unsigned int pos = 0; runner && pos < idx - 1; pos++)
		runner = runner->next;

	if (runner == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->next = runner->next;
	new_node->prev = runner;

	if (runner->next != NULL)
		runner->next->prev = new_node;

	runner->next = new_node;
	return (new_node);
}
