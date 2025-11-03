#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to locate
 *
 * Description: This function searches for the first occurrence
 * of the character c in the string s. It returns a pointer to
 * the character if found, or NULL if not found. If c is '\0',
 * it returns a pointer to the null terminator of s.
 *
 * Return: pointer to the first occurrence of c in s, or NULL
 *         if the character is not found
 */
char *_strchr(char *s, char c)
{

		while (*s != '\0')

	{
		if (*s == c)
		return (s);
		s++;

	}

		if (c == '\0')
		return (s);

	return (0);
}
