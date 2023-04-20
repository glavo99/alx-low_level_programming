#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * @s: operator passed as argument to the program
 * Return: pointer to the function used
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (*ops[i].op != *s)
	{
		if (!*ops[i].op)
		{
			return (NULL);
		}
		i++;
	}
	return (ops[i].f);
}
