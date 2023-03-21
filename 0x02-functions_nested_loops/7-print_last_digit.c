#include "main.h"

/**
 * print_last_digit - check the code
 * @i: integer
 * Return: value of last digit
 */
int print_last_digit(int i)
{
	int v;

	if (i < 0)
	i = -i;

	v = i % 10;

	if (v < 0)
		v = -v;

	_putchar(v + '0');

	return (v);

}
