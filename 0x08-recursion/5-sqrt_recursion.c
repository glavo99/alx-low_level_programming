#include "main.h"

/**
 * square - checks if j square equals i
 * @i: integer
 * @j: integer
 * Return: integer
 */

int square(int i, int j)
{
	if (i < j)
	{
		return (-1);
	}
	else if (j * j == i)
	{
		return (j);
	}
	else
	{
		return (square(i, j + 1));
	}
}

/**
 * _sqrt_recursion - search for natural square root of a number
 * @n: number
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (square(n, 0));
}
