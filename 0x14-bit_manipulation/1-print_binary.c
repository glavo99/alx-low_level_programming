#include "main.h"
#include <stdio.h>

/**
 * powertwo - returns the value of 2 raised to
 * the highest power that doesn't exceed x
 * @x: integer to not exceed
 * Return: integer
 */
int powertwo(int x)
{
	int i, k = 1;

	for (i = 0; k <= x; i++)
	{
		k *= 2;
	}
	return (k * 0.5);
}

/**
 * print_binary - prints binary of decimal number
 * @n: decimal
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = powertwo(n);
	int j;

	if (!i)
	{
		_putchar('0');
		return;
	}
	else
	{
		_putchar('1');
		j = n - i;
		for (; i > 1; i *= 0.5)
		{
			if ((i * 0.5) <= j)
			{
				_putchar('1');
				j = j - (i * 0.5);
			}
			else
			{
				_putchar('0');
			}
		}
	}
}
