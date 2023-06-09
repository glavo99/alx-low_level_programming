#include "main.h"

/**
 * _puts_recursion - prints a string
 * followed by a new line
 * @s: string input
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
