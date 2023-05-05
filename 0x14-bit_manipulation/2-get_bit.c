#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number
 * @index: index, starting from 0 of the bit you want to get
 * Return: value of bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
