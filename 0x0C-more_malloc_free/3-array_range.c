#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return:  pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *pointer;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	pointer = malloc(sizeof(int) * (max - min) + 1);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		pointer[i] = min++;
	}
	return (pointer);
}
