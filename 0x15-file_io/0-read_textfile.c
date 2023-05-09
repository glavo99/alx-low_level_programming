#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output
 * @filename: pointer to the file
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, re, wr;
	char *temp = malloc(sizeof(char) * letters);

	if (temp == NULL || !filename)
	{
		return (0);
	}
	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	re = read(fp, temp, letters);
	wr = write(STDOUT_FILENO, temp, re);
	close(fp);
	free(temp);
	return (wr);
}
