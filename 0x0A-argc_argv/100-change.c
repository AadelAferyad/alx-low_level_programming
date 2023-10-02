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
	int g[5] = {25, 10, 5, 2, 1};
	int i = 0, v, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	v = atoi(argv[1]);
	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (i < 5)
	{
		count = count + v / g[i];
		v = v % g[i];
		i++;
	}
	printf("%d\n", count);
	return (0);
}
