#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'Fibonacci numbers'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long a, b, sum;

	a = 0;
	b = 1;
	for (i = 0; i < 50; i++)
	{
		sum = a + b;
		printf("%lu", sum);
		if (i != 49)
		{
			printf(", ");
		}
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
