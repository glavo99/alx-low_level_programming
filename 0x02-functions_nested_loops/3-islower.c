#include "main.h"

/**
 * _islower - checks for lowercase and uppercase
 * @i: character
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int i)
{
	if (i >= 65 && i <= 90)
		return (0);
	else if (i >= 97 && i <= 122)
		return (1);
	else
		return (0);
}
