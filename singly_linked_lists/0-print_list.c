#include <stdio.h>
#include "lists.h"

/**
* print_list - Prints all elements of a linked list of type list_t.
* @h: Pointer to the head of the linked list.
*
* Description: Each node's string and its length are printed.
*              If the string is NULL, it prints "[0] (nil)".
*              The function returns the total number of nodes.
*
* Return: The number of nodes in the list.
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}
