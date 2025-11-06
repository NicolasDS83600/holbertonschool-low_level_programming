#include "main.h"

/**
 * help_me - Helper function to check if a number is prime.
 * @n: The number to check.
 * @i: The current divisor being tested.
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int help_me(int n, int i)
{

	if (n <= 1)
	return (0);

	if (n % i == 0 && i > 1)
	return (0);

	if (i * i > n)
	return (1);
	return (help_me(n, i + 1));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 * otherwise returns 0.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
