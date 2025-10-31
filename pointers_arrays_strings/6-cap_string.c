#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char sym[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{

		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;

		for (j = 0; sym[j] != '\0'; j++)
		{

			if (str[i] == sym[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] -= 32;
				break;
			}
		}

		i++;
	}

	return (str);
}
