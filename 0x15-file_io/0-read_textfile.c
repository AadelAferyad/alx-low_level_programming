#include "main.h"

/**
 * read_textfile - read a text file and prints it to the POSIX standard output.
 *
 * @filename: file that will be oppend.
 * @letters: the numbers of bytes we will read.
 * Return: bytes.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes;
	int fp;
	char *buffer;

	if (!filename)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(letters + 1);
	if (!buffer)
		return (0);
	bytes = read(fp, buffer, letters);
	if (bytes == -1)
		return (0);
	write(1, buffer, letters);
	close(fp);
	free(buffer);
	return (bytes);
}
