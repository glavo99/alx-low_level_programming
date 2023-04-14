#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of element in bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointer = malloc(size * nmemb);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		pointer[i] = 0;
	}
	return (pointer);
}
