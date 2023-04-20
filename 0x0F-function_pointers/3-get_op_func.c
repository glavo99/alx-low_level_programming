#include "3-calc.h"
#include <stdio.h>

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
	while (i < 5)
	{
		if (s[0] == ops[i].op[0] && s && !s[1])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}