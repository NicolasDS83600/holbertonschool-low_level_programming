#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{

	int l, c, p;

	for (l = 0; l <= 9; l++)
	{
		for (c = 0; c <= 9; c++)
		{
			p = l * c;

			if (c != 0)
			_putchar(','), _putchar(' ');

			if (p < 10 && c != 0)
			_putchar(' ');

			if (p >= 10)
			_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
		}

		_putchar('\n');
	}
}
