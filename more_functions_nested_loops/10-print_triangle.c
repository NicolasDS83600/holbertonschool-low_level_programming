#include "main.h"

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
