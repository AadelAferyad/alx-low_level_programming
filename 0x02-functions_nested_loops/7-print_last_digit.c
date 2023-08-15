#include "main.h"

/**
 *print_last_digit - Entry point
 *@n: the number.
 *Explain: 'prints the last digit of a number'
 *Return: Always return 0 (Success)
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = n * -1;
	_putchar('0' + n);
	return (n);
}
