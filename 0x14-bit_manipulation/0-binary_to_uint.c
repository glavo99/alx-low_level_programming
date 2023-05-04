#include "main.h"

/**
 * count - counts length of array
 * @b: pointing to a string of 0 and 1 chars
 * Return: length
 */
unsigned int count(const char *b)
{
	unsigned int i;

	for (i = 0; b[i] != '\0'; i++)
		;
	return (i - 1);
}

/**
 * _pow_recursion - returns the value of
 * x raised to the power of y
 * @x: integer
 * @y: integer
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

/**
 * binary_to_uint - converts a binary number to base 10
 * @b: pointing to a string of 0 and 1 chars
 * Return: base 10 or 0 if unsuccess
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j, k, l;
	unsigned int i = count(b);

	for (j = i + 1, k = 0, l = 0; j != 0; j--, k++)
	{
		if (b[j - 1] == '1')
		{
			l += _pow_recursion(2, k);
		}
		else if (b[j - 1] == '0')
		{
			;
		}
		else
		{
			return (0);
		}
	}
	return (l);
}
