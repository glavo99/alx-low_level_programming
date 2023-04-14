#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size of memory
 * Return: pointer to char or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n >= j)
	{
		s = malloc(sizeof(char) * (i + j + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (i + n + 1));
	}
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j <= n; j++, i++)
	{
		s[i] = s2[j];
	}
	s[i] = '\0';
	return (s);
}
