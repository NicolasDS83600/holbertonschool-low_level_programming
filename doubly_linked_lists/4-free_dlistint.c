#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 *
 * This function traverses the entire doubly linked list and frees each node.
 * After freeing all nodes, the list is fully deallocated.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *runner;

	while (head != NULL)
	{
		runner = head->next;
		free(head);
		head = runner;
	}
}
