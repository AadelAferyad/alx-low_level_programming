#include "main.h"

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
		if (argc >= 1)
			printf("%s\n", argv[argc - 1]);
		return (0);
}