#include <stdio.h>
#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h: pointer to the head of the doubly linked list
*
* Return: the number of nodes in the list
*
* This function uses a variable called 'runner' to traverse the list
* without modifying the original head pointer. For each node, the
* integer stored in the 'n' field is printed, followed by a newline.
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *runner = h;
	size_t count = 0;

	if (runner == NULL)
		return (0);

	while (runner != NULL)
	{
		printf("%d\n", runner->n);
		count++;

		runner = runner->next;
	}

	return (count);
}
