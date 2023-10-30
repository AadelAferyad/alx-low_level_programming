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
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @filename: file that will be oppend.
 * @text_content: the content will be appended to the file.
 * Return: 1 if success and -1 if failed.
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, read_bytes, len;

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1 || !filename)
		return (-1);
	if (!text_content)
	{
		close(fp);
		return (1);
	}
	len = _strlean(text_content);
	read_bytes = write(fp, text_content, len);
	if (read_bytes == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
