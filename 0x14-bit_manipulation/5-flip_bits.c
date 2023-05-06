#include "main.h"

/**
 * flip_bits - number of bits you would need
 * to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, j, k = 0;

	i = (n ^ m);
	for (j = 0; j < 64; j++)
	{
		if (i & 1)
		{
			k += 1;
		}
		i = i >> 1;
	}
	return (k);
}
