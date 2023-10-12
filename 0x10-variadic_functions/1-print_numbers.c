#include "variadic_functions.h"

/**
 * print_numbers - function that returns the sum of all its parameters.
 *
 * @separator: pointer to char the symbole will separate numbers.
 * @n: The number of parameter fun will take.
 *
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list liams;
	unsigned int i = 0;

	va_start(liams, n);
	while ((i++) < n)
	{
		if (separator && i < n)
			printf("%d%s", va_arg(liams, int), separator);
		else
			printf("%d", va_arg(liams, int));
	}
	va_end(liams);
	printf("\n");
}
