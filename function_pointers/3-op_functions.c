#include "3-calc.h"

/**
* op_add - returns the sum of two integers.
* @a: first integer
* @b: second integer
* Return: the sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - returns the difference between two integers.
* @a: first integer
* @b: second integer
* Return: the difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - returns the product of two integers.
* @a: first integer
* @b: second integer
* Return: the product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - returns the quotient of the division of two integers.
*	   If the divisor is 0, it returns 0 to avoid division by zero.
* @a: dividend
* @b: divisor
* Return: the quotient of a divided by b, or 0 if b is 0
*/
int op_div(int a, int b)
{
	if (b == 0)
	return (0);

	return (a / b);
}

/**
* op_mod - returns the remainder of the division of two integers.
*	   If the divisor is 0, it returns 0 to avoid modulo by zero.
* @a: dividend
* @b: divisor
* Return: the remainder of a divided by b, or 0 if b is 0
*/
int op_mod(int a, int b)
{
	if (b == 0)
	return (0);

	return (a % b);
}
