#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int size of memory
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
