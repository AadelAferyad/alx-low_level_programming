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
	char *s, *separator = "";
	va_list args;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
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
	va_end(args);
}
