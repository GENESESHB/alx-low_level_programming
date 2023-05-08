#include <stdio.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: the number of letters to be printed
 *
 * Return: 1 for success 0 for failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fp, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fp);

	free(buf);

	return (nwr);
}
