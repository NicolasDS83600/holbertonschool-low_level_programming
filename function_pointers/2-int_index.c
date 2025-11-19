#include "function_pointers.h"

/**
* int_index - searches for an integer in an array using a cmp function
* @array: pointer to the array of integers
* @size: number of elements in the array
* @cmp: pointer to a function to compare values; returns non-zero if match
* Return: index of first element for which cmp does not return 0,
*         -1 if no match, array is NULL, size <= 0, or cmp is NULL
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}

	return (-1);
}
