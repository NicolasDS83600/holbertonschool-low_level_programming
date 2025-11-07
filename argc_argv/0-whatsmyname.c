#include <stdio.h>

/**
 * main - prints the name of the program, including its path
 *
 * @argc: number of arguments (not used)
 * @argv: array of arguments, argv[0] is the program name
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{

	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
