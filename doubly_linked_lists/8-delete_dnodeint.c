#include <stdlib.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at index `index`
*			      of a doubly linked list
* @head: pointer to the head of the list
* @index: index of the node to delete (starting from 0)
*
* Return: 1 if successful, -1 if failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *runner;
	unsigned int pos = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	runner = *head;

	if (index == 0)
	{
		*head = runner->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		free(runner);
		return (1);
	}

	for (pos = 0; runner != NULL && pos < index; pos++)
		runner = runner->next;

	if (runner == NULL)
		return (-1);

	runner->prev->next = runner->next;

	if (runner->next != NULL)
		runner->next->prev = runner->prev;

	free(runner);
	return (1);
}
