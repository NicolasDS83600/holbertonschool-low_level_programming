#include "lists.h"

/**
* dlistint_len - returns the number of elements in a dlistint_t list
* @h: pointer to the head of the doubly linked list
*
* Return: number of nodes in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *runner = h;
	size_t count = 0;

	if (runner == NULL)
		return (0);

	while (runner != NULL)
	{
		count++;
		runner = runner->next;
	}

	return (count);
}
