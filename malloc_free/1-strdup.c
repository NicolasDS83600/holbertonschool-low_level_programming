#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: The string to duplicate
 *
 * Description: The newly allocated memory contains a duplicate of the
 * string @str, including the terminating null byte. If @str is NULL or
 * if insufficient memory is available, the function returns NULL.
 *
 * Return: Pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{

	char *cpy;
	unsigned int i, len = 0;

	if (str == NULL)
	return (NULL);

	while (str[len] != '\0')
	len++;

	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
	return (NULL);

	for (i = 0; i < len; i++)
	cpy[i] = str[i];

	cpy[len] = '\0';

	return (cpy);
}
