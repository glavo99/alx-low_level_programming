#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int i, j = 0;

	for (i = 1; i < argc; i++)
	{
		long val;
		char *next;

		val = strtol(argv[i], &next, 10);
		(void)val;
		if ((next == argv[i]) || (*next != '\0'))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			j += atoi(argv[i]);
		}
	}
	printf("%d\n", j);
	return (0);
}
