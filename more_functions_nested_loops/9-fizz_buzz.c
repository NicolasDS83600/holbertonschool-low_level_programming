#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, replacing multiples
 *        of 3 with Fizz, multiples of 5 with Buzz, and multiples
 *        of both 3 and 5 with FizzBuzz.
 *
 * Return: 0 on success
 */
int main(void)
{
int n;
	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
			else if (n % 5 == 0)
			printf("Buzz");
			else if (n % 3 == 0)
			printf("Fizz");
			else
			printf("%d", n);

		if (n < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
