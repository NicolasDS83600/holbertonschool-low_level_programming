#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - performs simple operations using function pointers
* @argc: number of arguments
* @argv: array of argument strings
* Return: 0 on success, or exit with 98, 99, 100 on errors
*/
int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", f(a, b));
	return (0);
}
