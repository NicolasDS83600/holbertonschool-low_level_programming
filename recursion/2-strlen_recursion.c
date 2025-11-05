#include "main.h"

/**
 * _strlen_recursion - prints the length
 * @s: pointer to the string to print
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (!s || *s == '\0')
	return(0);

	else
	return 1 + _strlen_recursion(s + 1);
}
