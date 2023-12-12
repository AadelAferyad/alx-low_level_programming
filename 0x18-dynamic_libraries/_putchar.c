#include <unistd.h>

/**
 * _putchar - prints the character c
 * @c: The character to print
 *
 * Return: if success 1
 * if error, -1 is returned, and errNo is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
