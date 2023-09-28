#include "main.h"

/**
 * factorial - print factorial of a number.
 *
 * @n: n
 *
 * Return: return value of factorial n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}

