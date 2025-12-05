#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @head: double pointer to the head of the list
* @n: value to store in the new node
*
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *runner;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (0);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	runner = *head;

	while (runner->next != NULL)

	runner = runner->next;
	runner->next = new_node;
	new_node->prev = runner;

	return (new_node);
}
