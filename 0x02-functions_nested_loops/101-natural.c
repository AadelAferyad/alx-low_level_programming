#include <stdio.h>
/**
 *main - Entry point
 *Explain: 'print the sum'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int s, d;

	s = 0;
	for (d = 1; d < 1024; d++)
	{
		if (d % 3 == 0 || d % 5 == 0)
		{
			s += d;
		}
	}
	printf("%d\n", s);
	return (0);
}
