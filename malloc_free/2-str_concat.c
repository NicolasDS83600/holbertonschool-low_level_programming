#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Description: Allocates memory for a new string containing the
 * contents of @s1 followed by @s2. If either @s1 or @s2 is NULL,
 * it is treated as an empty string. The returned string is
 * null-terminated. If memory allocation fails, the function
 * returns NULL.
 *
 * Return: Pointer to the newly allocated concatenated string,
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{

	char *tie;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[len1] != '\0')
	len1++;
	while (s2[len2] != '\0')
	len2++;

	tie = malloc(sizeof(char) * (len1 + len2 + 1));
	if (tie == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	tie[i] = s1[i];

	for (j = 0; j < len2; j++)
	tie[i + j] = s2[j];

	tie[i + j] = '\0';

	return (tie);
}
