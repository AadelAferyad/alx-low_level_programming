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
	unsigned int i = 0;
	va_list pa;

	va_start(pa, n);
	while (i < n)
	{
		if (separator == NULL)
			printf("%d", va_arg(pa, int));
		else
			printf("%d", va_arg(pa, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(pa);
}
