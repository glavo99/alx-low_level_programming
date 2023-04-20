#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int a, b, i;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	if ((*s == '/' || *s == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(s) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	i = get_op_func(s)(a, b);
	printf("%d\n", i);
	return (i);
}
