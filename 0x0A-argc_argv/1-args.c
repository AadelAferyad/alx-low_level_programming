#include "main.h"

/**
 * c - Function that count argc using recursion.
 *
 * @argc: pointer to integer argument count.
 * @argv: pointer to char argument vector.
 *
 *
 * Return: index of argv.
 */


int c(int *argc, char **argv)
{
	if (*argc == 1)
		return (0);
	if (*argv == NULL)
		return (-1);
	return (1 + c(argc, (argv + 1)));
}
/**
 * main - Entry point.
 *
 * @argc: integer argument count.
 * @argv: integer argument vector.
 *
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char **argv)
{
		int i = c(&argc, argv);

		printf("%d\n", i);
		return (0);
}
