#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'first 98 Fibonacci numbers'
 *Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int j;
	unsigned long int fib = 1;
	unsigned long int i = 2;
	unsigned long int fib_1;
	unsigned long int fib_2;
	unsigned long int r;
	unsigned long int l;
	unsigned long int divider = 1000000000;

	printf("%lu", fib);
	for (j = 1; j < 91; j++)
	{
		printf(", %lu", i);
		i += fib;
		fib = i - fib;
	}
	fib_1 = (fib / divider);
	fib_2 = (fib % divider);
	r = (i / divider);
	l = (i % divider);
	for (j = 92; j < 99; ++j)
	{
		printf(", %lu", r + (l / divider));
		printf("%lu", l % divider);
		r = r + fib_1;
		fib_1 = r - fib_1;
		l = l + fib_2;
		fib_2 = l - fib_2;
	}
	printf("\n");
	return (0);
}
