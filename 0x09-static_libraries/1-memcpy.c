#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: copy to this memory area
 * @src: copy from this memory area
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
