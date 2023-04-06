#include "main.h"

/**
 * is_prime - check for primr number
 * @i: integer
 * @j: integer
 * Return: integer
 */

int is_prime(int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	else if (i < j)
	{
		return (0);
	}
	else if (i % j == 0)
	{
		return (0);
	}
	else if (i % j != 0)
	{
		return (is_prime(i, j + 1));
	}
}

/**
 * is_prime_number - check for prime number
 * @n: number
 * Return: 1 if prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
