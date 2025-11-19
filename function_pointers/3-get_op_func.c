#include "3-calc.h"
#include <string.h>

/**
* get_op_func - selects the function to perform the operation asked by the user
* @s: Operator passed as a string
* Return: Pointer to the function corresponding to the operator,
*	  or NULL if the operator is invalid
*/
int (*get_op_func(char *s))(int, int)
{

	size_t i = 0;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod}};

	while (i < sizeof(ops) / sizeof(ops[0]))
	{

		if (s[1] != '\0' || strcmp(s, ops[i].op) == 0)
		{
			return (s[1] != '\0' ? NULL : ops[i].f);
		}

		i++;
	}

	return (NULL);
}

