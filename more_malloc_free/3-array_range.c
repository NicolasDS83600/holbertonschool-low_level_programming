#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: The minimum value in the array
 * @max: The maximum value in the array
 *
 * Description: Allocates memory for an array of integers containing
 * all the values from @min (included) to @max (included), ordered
 * from min to max. If @min is greater than @max, or if malloc fails,
 * the function returns NULL.
 *
 * Return: Pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	arr[i] = min + i;

	return (arr);
}
