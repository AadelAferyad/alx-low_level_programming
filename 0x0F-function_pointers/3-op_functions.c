#include "3-calc.h"

/**
 * op_add - returns the sum of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the sum of the two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference between two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the difference between the two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the product of the two integers
 */

int op_mul(int a, int b)
{
	return (a * b);

}

/**
 * op_div - returns the quotient of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the quotient of the two integers
 */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - returns the remainder of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the remainder of the two integers
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}

