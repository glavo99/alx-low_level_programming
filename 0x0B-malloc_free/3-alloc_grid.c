#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates 2 dimensional array of integers
 * @width: width of the array
 * @height: height
 * Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int i, j;

	s = malloc(sizeof(int *) * height);

	if (s == NULL)
	{
		return (NULL);
	}
	else if (width < 1 || height < 1)
	{
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		s[i] = malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			for (; i >= 0; i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}
	return (s);
}
