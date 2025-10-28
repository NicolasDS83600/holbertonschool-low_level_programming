#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle using the '#' character.
 * @size: The height and base size of the triangle.
 *
 * Description: If size is 0 or less, the function prints only a newline.
 * The triangle is right-aligned, with each row containing one more '#'
 * than the previous row.
 */
void print_triangle(int size)

{
int l, b, s;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}

	for (l = 1; l <= size; l++)
	{
		b = 0;
		s = 0;

	while (b < size - l)
	{
	_putchar(' ');
	b++;
	}

	while (s < l)
	{
	_putchar('#');
	s++;
	}

	_putchar('\n');
	}
}
