#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	char c;

	for (i = '0'; i <= '9'; i++) {
		putchar(i);
	}

	for (c = 'A'; c <= 'F'; c++) {
		putchar(c);
	}

	putchar('\n');
	return (0);
}
