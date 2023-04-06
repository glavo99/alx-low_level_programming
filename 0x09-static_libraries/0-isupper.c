#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: character
 * Return: 1 for uppercase and 0 for lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
