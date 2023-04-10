#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i, j, k;

		i = atoi(argv[1]);
		j = atoi(argv[2]);
		k = i * j;
		printf("%d\n", k);
		return (0);
	}
}
