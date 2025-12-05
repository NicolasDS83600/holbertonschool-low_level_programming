#include <stdlib.h>
#include "lists.h"

/**
* sum_dlistint - Computes the sum of all the 'n' values
*                in a doubly linked list of dlistint_t nodes.
*
* @head: Pointer to the head of the doubly linked list.
*
* Return: The total sum of all node values.
*         Returns 0 if the list is empty (head == NULL).
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
