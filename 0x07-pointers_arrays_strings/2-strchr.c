#include "main.h"

/**
 * _strchr - locates first occurrence of a character
 * @s: string
 * @c: character
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
	}
	return (NULL);
}
