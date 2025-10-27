#include "main.h"

/**
 * void more_numbers -function that prints 10 times the numbers, from 0 to 14
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
