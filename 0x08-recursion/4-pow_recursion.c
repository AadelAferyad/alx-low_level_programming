#include "main.h"


/**
 * _pow_recursion - a function that calculate power of y.
 *
 * @x: integer
 * @y: integer
 *
 * Return: return x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	x = x * _pow_recursion(x, y - 1);
	return (x);
}

