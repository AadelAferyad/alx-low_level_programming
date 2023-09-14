#include "3-calc.h"

/**
 * main - the entry point.
 * @ac: the number of command-line arguments.
 * @av: the argument vector.
 *
 * This program takes three command-line arguments: two integers and an
 * arithmetic operator (+, -, *, /, or %). It then performs the appropriate
 * arithmetic operation on the integers and prints the result to stdout.
 *
 * Return: 0 on success, or a non-zero value on failure
 */



int main(int ac, char **av)
{
	int a, b, (*operator)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	operator = get_op_func(av[2]);
	if (operator == NULL)
	{
		printf("Eroro\n");
		exit(99);
	}
	printf("%d\n", operator(a, b));
	return (0);
}
