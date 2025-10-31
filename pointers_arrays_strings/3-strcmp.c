#include "main.h"

/**
 * function_name - brief description
 * @param1: description
 * @param2: description
 *
 * Return: what the function returns
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
		i++;
	}

	return (s1[i] - s2[i]);
}
