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
	int n, i = 0, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (; i < 5 && n >= 0; i++)
	{
		while (n >= coins[i])
		{
			result++;
			n = n - coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
