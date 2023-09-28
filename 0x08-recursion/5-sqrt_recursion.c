#include "main.h"


/**
 * my_sqrt - finds the natural square root of n
 * @n: integer number
 * @a: integer root
 * Return: square root
 */


int my_sqrt(int n, int a)
{
	if (n < 0)
		return (-1);
	else if (a * a == n)
		return (a);
	else if (a * a > n)
		return (-1);
	return (_healper(n, a + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: result
 */

int _sqrt_recursion(int n)
{
	return (my_sqrt(n, 1));
}

