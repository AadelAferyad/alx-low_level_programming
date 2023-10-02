#include <stdio.h>
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
	int i = 1;
	long int j = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		j = j + atoi(argv[i]);
		i++;
	}
	printf("%ld\n", j);

	return (0);
}
