#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: array pointer
 * @b: constant value
 * @n: size of bytes
 * Return: array with new values
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
