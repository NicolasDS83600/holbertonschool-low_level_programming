#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character '\' should be printed
 *
 * Description: If n is 0 or less, the function prints only a newline.
 * Each line has one more space before the '\' character to form a diagonal.
 */
void print_diagonal(int n)
{
int r, i;
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (r = 0; r < n; r++)
	{
		for (i = 0; i < r ; i++)
		{
			_putchar (' ');
		}
	_putchar ('\\');
	_putchar ('\n');
	}
}
