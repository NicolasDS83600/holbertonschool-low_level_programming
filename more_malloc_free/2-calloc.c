#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Description: Allocates memory for an array of @nmemb elements,
 * each of size @size bytes, and initializes all bytes to 0. If
 * either @nmemb or @size is 0, or if memory allocation fails,
 * the function returns NULL.
 *
 * Return: Pointer to the allocated and zero-initialized memory,
 * or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	ptr[i] = 0;

	return (ptr);
}
