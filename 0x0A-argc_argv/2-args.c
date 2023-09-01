#include "main.h"


/**
 * printer - Function that print argument vector using recursion.
 *
 * @argc: pointer to integer argument count.
 * @argv: pointer to char argument vector.
 */

void printer(int *argc, char **argv)
{
	if (*argc == 1)
	{
		printf("%s\n", argv[0]);
			return;
	}
	if (*argv == NULL)
		return;
	printf("%s\n", *argv);
	printer(argc, argv + 1);
}

/**
 * main - Entry point.
 *
 * @argc: integer argument count.
 * @argv: char argument vector.
 *
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char **argv)
{
	printer(&argc, argv);
	return (0);
}
