#include "main.h"

void print_diagonal(int n)
{
  int r, i;
	if ( n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (r = 0; r < n; r++)
	{
	  for (i = 0; i < (n - 1) ; i++)
		{
			_putchar (' ');
		}
	_putchar ('\\');
	_putchar ('\n');
	}
}
