#include "main.h"


/**
 * my_sqrt - finds the natural square root of n
 * @n: integer number
 * @i: integer root
 * Return: square root
 */


int my_sqrt(int n, int i)
{
		if (n < 0)
			return (-1);
		else if ((i * i) == n)
			return (i);
		else if ((i * i) > n)
			return (-1);
		i++;
		return (my_sqrt(n, i));
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
