#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	j = 0;

	for (i = 0; i < 16; i++)
	{
		if (i >= 10)
		{
			putchar('a' + j);

			j++;
		}
		else
			putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
