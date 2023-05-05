#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary of decimal number
 * @n: decimal
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int number = 1UL << (sizeof(unsigned long int) * 8);
	unsigned long int i = 0;

	while (number)
	{
		if (number & n)
		{
			_putchar('1');
			i++;
		}
		else if (i)
		{
			_putchar('0');
		}
		number = number >> 1;
	}
	if (!i)
	{
		_putchar('0');
	}
}
