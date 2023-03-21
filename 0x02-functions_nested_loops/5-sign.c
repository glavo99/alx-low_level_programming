#include "main.h"

/**
 * print_sign - checks for sign
 * @n: number
 * Return: integer
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}

}
