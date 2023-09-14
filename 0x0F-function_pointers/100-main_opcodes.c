#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry main.
 * @argc: The arguments count.
 * @argv: The arguments vector.
 * Return: Return: 0 on success, or a non-zero value on failure.
*/

int main(int argc, char *argv[])
{
	int j, i = 0;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	while (i < j)
	{
		if (i == j - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
		i++;
	}
	return (0);
}
