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
	int i = 1, f = 0;
	long int j = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		f = 0;
		while (argv[i][f])
		{
			if (argv[i][f] < '0' || argv[i][f] > '9')
			{
				printf("Error\n");
				return (0);
			}
			f++;
		}
		j += atoi(argv[i]);
		i++;
	}
	printf("%ld\n", j);

	return (0);
}
