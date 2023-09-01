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
	int i = 1, j = 0, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
