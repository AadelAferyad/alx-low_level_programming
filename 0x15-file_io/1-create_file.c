#include "main.h"

/**
 * _strlean - strlen calculate the length.
 * @s: string.
 * Return: length.
 *
 */
int _strlean(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * create_file - function that creates a file.
 *
 * @filename: file that will be oppend.
 * @text_content: fill the file with this content.
 * Return: 1 if success and -1 if failed.
 *
 */
int create_file(const char *filename, char *text_content)
{
	int len, fp, write_bytes;

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp == -1 || !filename)
		return (-1);
	if (!text_content)
	{
		close(fp);
		return (1);
	}
	len = _strlean(text_content);
	write_bytes = write(fp, text_content, len);
	if (write_bytes == -1)
	{
		close(fp);
		return (write_bytes);
	}
	close(fp);
	return (1);
}
