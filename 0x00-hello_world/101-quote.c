#include <unistd.h>
/**
 * main - Entry point
 *
 * This program uses the write function to print a specific string to
 * the standard error output.
 *
 * Return: Always 1
 */
int main(void)
{
	write(2,
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			59);
	return (1);
}
