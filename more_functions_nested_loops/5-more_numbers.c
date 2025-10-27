#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 *
 * Description: This function uses nested loops to print the numbers
 * from 0 to 14, ten times, followed by a new line after each sequence.
 * It uses _putchar to display the numbers.
 *
 * Return: void
 */
void more_numbers(void)
{
int r, n;
	for (r = 0; r < 10; r++)
	{
		for (n = 0; n <= 14; n++)
		{
		if (n >= 10)
		_putchar(n / 10 + '0');
		_putchar((n % 10) + '0');
		}
	_putchar('\n');
	}
}
