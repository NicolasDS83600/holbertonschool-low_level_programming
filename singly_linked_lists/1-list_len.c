#include "lists.h"

/**
* list_len - Counts the number of nodes in a linked list of type list_t
* @h: Pointer to the head of the list
*
* Description: The function traverses each node in the linked list
*              and increments a counter for every node encountered.
*              It does not modify the list or the strings stored in the nodes.
*
* Return: The total number of nodes in the list (0 if the list is empty)
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
