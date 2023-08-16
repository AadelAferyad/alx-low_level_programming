#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'Abbaci'
 *Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a, b, i, sum;

	a = 0;
	b = 1;
	i = a + b;
	sum = 0;
	while (i < 4000000)
	{
		i = a + b;
		if (i % 2 == 0)
		{
			sum += i;
		}
		a = b;
		b = i;
	}
	printf("%lu\n", sum);
	return (0);
}
