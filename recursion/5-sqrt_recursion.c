#include "main.h"

/**
 * help_me - Helper function to find the natural square root of a number.
 * @n: The number for which the square root is to be found.
 * @i: The current number being tested as the square root.
 *
 * Return: The natural square root if found, otherwise -1.
 */
int help_me(int n, int i)
{

	if (i * i == n)
	return (i);

	if (i * i > n)
	return (-1);
	return (help_me(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which the natural square root is to be found.
 *
 * Return: The natural square root if it exists, otherwise -1.
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	return (-1);
	return (help_me(n, 0));
}
