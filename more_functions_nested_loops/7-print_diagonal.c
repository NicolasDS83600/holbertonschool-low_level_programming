#include "main.h"

void print_diagonal(int n)
{
  int r, i;
	if ( n <= 0)
		return('\n');
	for (r = 1; r < n; r++)
	{
		for (i = 0; i < r; i++)
		{
			_putchar (' ');
		}
	_putchar ('\\');
	_putchar ('\n');
}
