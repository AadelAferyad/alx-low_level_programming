#include "variadic_functions.h"

/**
 * print_all - Function that prints anything..
 *
 * @format: A string containing the format specifiers for the arguments.
 *
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *buffer, *separator = "";
	va_list liams;

	va_start(liams, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(liams, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(liams, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(liams, double));
					break;
				case 's':
					buffer = va_arg(liams, char *);
					if (!buffer)
						buffer = "(nil)";
					printf("%s%s", separator, buffer);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(liams);
}
