#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: the argument count.
 * @argv: the argument vector.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) && atoi(argv[2]))
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
