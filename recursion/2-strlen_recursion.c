#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: pointer to the string to print
 *
 * Return: nothing (void)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return(0);

	else
	return 1 + _strlen_recursion(s + 1);
}
