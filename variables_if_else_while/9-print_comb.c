#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)

	{
	putchar(i);
	if (i == '9')
	break;
	putchar(',');
	putchar(' ');
	}

	putchar('\n');
	return (0);
}
