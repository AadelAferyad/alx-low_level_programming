#include "variadic_functions.h"

/**
 * sum_them_all - count the sum of given argument.
 *
 * @n: the number of arguments.
 *
 * Return: sum.
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list liams;
	int sum = 0;
	unsigned int i = -1;

	if (!n)
		return (0);
	va_start(liams, n);
	while (++i < n)
		sum += va_arg(liams, int);
	va_end(liams);
	return (sum);
}
