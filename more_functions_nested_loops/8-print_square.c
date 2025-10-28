#include "main.h"

/**
 * print_square - prints a square using the character '#'
 * @size: the size of the square
 *
 * Description: If size is 0 or less, the function prints only a newline.
 * Uses _putchar to print characters.
 */
void print_square(int size)
{
int r, c;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
