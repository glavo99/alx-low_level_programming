#include "main.h"

/**
 * create_file - Create a function that creates a file
 * @filename: pointer to name of the file
 * @text_content: pointer to text content
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, fp;

	if (!filename)
	{
		return (-1);
	}
	while (*text_content)
	{
		i++;
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp == -1)
	{
		return (-1);
	}
	write(fp, text_content, i);
	close (fp);
	return (1);
}
