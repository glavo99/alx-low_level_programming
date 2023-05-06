#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: given number
 * @index: given index to change
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);

	i = *n;
	i = ((i >> index) | 1);
	i = ((i << index) | *n);
	*n = i;
	return (1);
}
