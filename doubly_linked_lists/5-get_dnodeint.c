#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node of a doubly linked list
 * located at a given index (starting from 0).
 *
 * @head: pointer to the first node of the list
 * @index: position of the node to retrieve
 *
 * Return: pointer to the node at the given index,
 *         or NULL if the index is out of range.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *runner = head;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (runner != NULL)
	{
		if (i == index)
		{
			return (runner);
		}
		runner = runner->next;
		i++;
	}

	return (0);
}
