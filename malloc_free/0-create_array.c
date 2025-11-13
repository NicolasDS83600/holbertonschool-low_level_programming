#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it
 *                with a specific character
 * @size: The size of the array to create
 * @c: The character to initialize the array with
 *
 * Description: Allocates memory for an array of @size bytes and fills
 * each element with the character @c. If @size is 0 or memory allocation
 * fails, the function returns NULL.
 *
 * Return: Pointer to the newly created array, or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	arr[i] = c;
	return (arr);

	return (0);
}
