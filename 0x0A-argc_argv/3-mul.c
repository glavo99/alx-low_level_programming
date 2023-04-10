#include <stdio.h>

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
		int i;

		i = argv[1] * argv[2];
		printf("%d\n", i);
		return (0);
	}
}
