#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes to use from s2
 *
 * Description: Allocates memory and concatenates s1 with the first
 * n bytes of s2. If s1 or s2 is NULL, it is treated as an empty string.
 * The resulting string is null-terminated. Returns NULL if memory
 * allocation fails.
 *
 * Return: Pointer to the newly allocated concatenated string, or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tie;
	int i, j, nb, len1 = 0, len2 = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[len1] != '\0')
	len1++;
	while (s2[len2] != '\0')
	len2++;

	if (n >= len2)
	nb = len2;
	else
	nb = n;

	tie = malloc(sizeof(char) * len1 + n + 1);
	if (tie == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	tie[i] = s1[i];

	for (j = 0; j < n; j++)
	tie[i + j] = s2[j];

	tie[i + j] = '\0';

	return (tie);
}
