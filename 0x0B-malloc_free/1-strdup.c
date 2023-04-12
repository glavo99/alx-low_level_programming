#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: duplicate this string
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	s = malloc(sizeof(char) * i);
	j = 0;
	if (s == NULL)
		return (NULL);
	for (; str[j]; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
