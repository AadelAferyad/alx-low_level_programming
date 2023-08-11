#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		if ('a' + i == 'e' || 'a' + i == 'q')
			continue;
		putchar('a' + i);
	}
	putchar('\n');
	return (0);
}
