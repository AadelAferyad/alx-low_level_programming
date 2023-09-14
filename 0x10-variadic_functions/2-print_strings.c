#include "variadic_functions.h"

/**
 * print_strings - check the code.
 * @separator: is the string to be printed between strings.
 * @n: const variable.
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	while ((i++) < n)
	{
		const char *s = va_arg(ap, char *);

		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator && i < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
