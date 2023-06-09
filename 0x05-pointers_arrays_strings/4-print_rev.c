#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * followed by a new line
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int i, j;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	s--;
	for (j = i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
