#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 *
 * @argc: number of arguments
 * @argv: array of arguments (not used)
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
