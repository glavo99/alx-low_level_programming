#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: check item
 * Return: 1 for digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
