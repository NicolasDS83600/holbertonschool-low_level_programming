#include <stdlib.h>
#include "lists.h"

/**
* free_list - Frees a list_t linked list
* @head: Pointer to the first node of the list
*
* Description:
* This function iterates through the list, freeing each node's
* string and then the node itself to avoid memory leaks.
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
