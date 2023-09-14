#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: The number of parameter fun will take.
 *
 * Return: return sum of passed arrgument.
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while ((i++) < n)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
