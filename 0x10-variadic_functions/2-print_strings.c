#include "variadic_functions.h"

/**
 * print_strings - check the code.
 * @separator: is the string to be printed between strings.
 * @n: const variable.
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list liams;
	unsigned int i = 0;
	const char *buffer;

	va_start(liams, n);
	while ((i++) < n)
	{
		buffer = va_arg(liams, char *);
		if (!buffer)
			printf("(nil)");
		else
			printf("%s", buffer);
		if (separator && i < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(liams);
}
