#include "main.h"
#include <stdlib.h>

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
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) != 0 && atoi(argv[2]) != 0)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[1]));
	}

	return (0);
}
