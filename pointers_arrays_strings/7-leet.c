#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet speak)
 * @s: The string to encode
 *
 * Description: Replaces specific letters in a string with numbers
 * following the 1337 encoding rules:
 * a/A → 4, e/E → 3, o/O → 0, t/T → 7, l/L → 1.
 * The encoding is done in-place.
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *s)
{

	int i, j;
	char l[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
	{

		if (s[i] == l[j])
		{
			s[i] = num[j];
		}

	}
	}

	return (s);
}
