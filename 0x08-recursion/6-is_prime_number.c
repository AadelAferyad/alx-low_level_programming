#include "main.h"
/**
 * my_func - function to check if a number is prime recursively.
 * @n: integer.
 * @a: integer.
 * Return: 1 if it's prime else 0.
 */

int my_func(int n, int a)
{
	if (a == 1)
		return (1);
	if (!(n % a))
		return (0);
	return (my_func(n, a - 1));
}

/**
 * is_prime_number - Find the prime number using recursive.
 * @n: integer.
 * Return: 1 if prime, 0 if not found.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (my_func(n, n - 1));
}

