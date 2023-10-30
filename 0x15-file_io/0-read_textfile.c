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
	ssize_t read_bytes, write_bytes;
	int fp;
	char *buffer;

	if (!filename)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(letters);
	if (!buffer)
		return (0);
	read_bytes = read(fp, buffer, letters);
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (read_bytes == -1 || write_bytes == -1 || read_bytes != write_bytes)
	{
		free(buffer);
		return (0);
	}
	close(fp);
	free(buffer);
	return (write_bytes);
}
